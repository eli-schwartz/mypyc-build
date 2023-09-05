#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
suggestions___SuggestionPlugin_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *suggestions___SuggestionPlugin_setup(PyTypeObject *type);
PyObject *CPyDef_suggestions___SuggestionPlugin(PyObject *cpy_r_target);

static PyObject *
suggestions___SuggestionPlugin_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_suggestions___SuggestionPlugin) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = suggestions___SuggestionPlugin_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_suggestions___SuggestionPlugin_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
suggestions___SuggestionPlugin_traverse(mypy___suggestions___SuggestionPluginObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_options);
    if (CPyTagged_CheckLong(self->_python_version.f0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_python_version.f0));
    }
    if (CPyTagged_CheckLong(self->_python_version.f1)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_python_version.f1));
    }
    Py_VISIT(self->__modules);
    Py_VISIT(self->_target);
    Py_VISIT(self->_mystery_hits);
    return 0;
}

static int
suggestions___SuggestionPlugin_clear(mypy___suggestions___SuggestionPluginObject *self)
{
    Py_CLEAR(self->_options);
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
    Py_CLEAR(self->__modules);
    Py_CLEAR(self->_target);
    Py_CLEAR(self->_mystery_hits);
    return 0;
}

static void
suggestions___SuggestionPlugin_dealloc(mypy___suggestions___SuggestionPluginObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, suggestions___SuggestionPlugin_dealloc)
    suggestions___SuggestionPlugin_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem suggestions___SuggestionPlugin_vtable[23];
static bool
CPyDef_suggestions___SuggestionPlugin_trait_vtable_setup(void)
{
    CPyVTableItem suggestions___SuggestionPlugin_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_plugin___Plugin___lookup_fully_qualified,
        (CPyVTableItem)CPyDef_suggestions___SuggestionPlugin_____init__,
        (CPyVTableItem)CPyDef_plugin___Plugin___set_modules,
        (CPyVTableItem)CPyDef_plugin___Plugin___lookup_fully_qualified,
        (CPyVTableItem)CPyDef_plugin___Plugin___report_config_data,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_additional_deps,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_type_analyze_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_function_signature_hook,
        (CPyVTableItem)CPyDef_suggestions___SuggestionPlugin___get_function_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_method_signature_hook,
        (CPyVTableItem)CPyDef_suggestions___SuggestionPlugin___get_method_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_attribute_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_class_attribute_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_class_decorator_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_class_decorator_hook_2,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_metaclass_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_base_class_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_customize_class_mro_hook,
        (CPyVTableItem)CPyDef_plugin___Plugin___get_dynamic_class_hook,
        (CPyVTableItem)CPyDef_suggestions___SuggestionPlugin_____init__,
        (CPyVTableItem)CPyDef_suggestions___SuggestionPlugin___get_function_hook,
        (CPyVTableItem)CPyDef_suggestions___SuggestionPlugin___get_method_hook,
        (CPyVTableItem)CPyDef_suggestions___SuggestionPlugin___log,
    };
    memcpy(suggestions___SuggestionPlugin_vtable, suggestions___SuggestionPlugin_vtable_scratch, sizeof(suggestions___SuggestionPlugin_vtable));
    return 1;
}

static PyObject *
suggestions___SuggestionPlugin_get_target(mypy___suggestions___SuggestionPluginObject *self, void *closure);
static int
suggestions___SuggestionPlugin_set_target(mypy___suggestions___SuggestionPluginObject *self, PyObject *value, void *closure);
static PyObject *
suggestions___SuggestionPlugin_get_mystery_hits(mypy___suggestions___SuggestionPluginObject *self, void *closure);
static int
suggestions___SuggestionPlugin_set_mystery_hits(mypy___suggestions___SuggestionPluginObject *self, PyObject *value, void *closure);

static PyGetSetDef suggestions___SuggestionPlugin_getseters[] = {
    {"target",
     (getter)suggestions___SuggestionPlugin_get_target, (setter)suggestions___SuggestionPlugin_set_target,
     NULL, NULL},
    {"mystery_hits",
     (getter)suggestions___SuggestionPlugin_get_mystery_hits, (setter)suggestions___SuggestionPlugin_set_mystery_hits,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef suggestions___SuggestionPlugin_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_suggestions___SuggestionPlugin_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_function_hook",
     (PyCFunction)CPyPy_suggestions___SuggestionPlugin___get_function_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_method_hook",
     (PyCFunction)CPyPy_suggestions___SuggestionPlugin___get_method_hook,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"log",
     (PyCFunction)CPyPy_suggestions___SuggestionPlugin___log,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_suggestions___SuggestionPlugin_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SuggestionPlugin",
    .tp_new = suggestions___SuggestionPlugin_new,
    .tp_dealloc = (destructor)suggestions___SuggestionPlugin_dealloc,
    .tp_traverse = (traverseproc)suggestions___SuggestionPlugin_traverse,
    .tp_clear = (inquiry)suggestions___SuggestionPlugin_clear,
    .tp_getset = suggestions___SuggestionPlugin_getseters,
    .tp_methods = suggestions___SuggestionPlugin_methods,
    .tp_init = suggestions___SuggestionPlugin_init,
    .tp_basicsize = sizeof(mypy___suggestions___SuggestionPluginObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_suggestions___SuggestionPlugin_template = &CPyType_suggestions___SuggestionPlugin_template_;

static PyObject *
suggestions___SuggestionPlugin_setup(PyTypeObject *type)
{
    mypy___suggestions___SuggestionPluginObject *self;
    self = (mypy___suggestions___SuggestionPluginObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = suggestions___SuggestionPlugin_vtable;
    self->_python_version = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    return (PyObject *)self;
}

PyObject *CPyDef_suggestions___SuggestionPlugin(PyObject *cpy_r_target)
{
    PyObject *self = suggestions___SuggestionPlugin_setup(CPyType_suggestions___SuggestionPlugin);
    if (self == NULL)
        return NULL;
    char res = CPyDef_suggestions___SuggestionPlugin_____init__(self, cpy_r_target);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
suggestions___SuggestionPlugin_get_target(mypy___suggestions___SuggestionPluginObject *self, void *closure)
{
    if (unlikely(self->_target == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'target' of 'SuggestionPlugin' undefined");
        return NULL;
    }
    CPy_INCREF(self->_target);
    PyObject *retval = self->_target;
    return retval;
}

static int
suggestions___SuggestionPlugin_set_target(mypy___suggestions___SuggestionPluginObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SuggestionPlugin' object attribute 'target' cannot be deleted");
        return -1;
    }
    if (self->_target != NULL) {
        CPy_DECREF(self->_target);
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
    self->_target = tmp;
    return 0;
}

static PyObject *
suggestions___SuggestionPlugin_get_mystery_hits(mypy___suggestions___SuggestionPluginObject *self, void *closure)
{
    if (unlikely(self->_mystery_hits == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'mystery_hits' of 'SuggestionPlugin' undefined");
        return NULL;
    }
    CPy_INCREF(self->_mystery_hits);
    PyObject *retval = self->_mystery_hits;
    return retval;
}

static int
suggestions___SuggestionPlugin_set_mystery_hits(mypy___suggestions___SuggestionPluginObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SuggestionPlugin' object attribute 'mystery_hits' cannot be deleted");
        return -1;
    }
    if (self->_mystery_hits != NULL) {
        CPy_DECREF(self->_mystery_hits);
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
    self->_mystery_hits = tmp;
    return 0;
}

static int
suggestions___ReturnFinder_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef suggestions___ReturnFinder_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___suggestions___ReturnFinderObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___suggestions___ReturnFinderObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *suggestions___ReturnFinder_setup(PyTypeObject *type);
PyObject *CPyDef_suggestions___ReturnFinder(PyObject *cpy_r_typemap);

static PyObject *
suggestions___ReturnFinder_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_suggestions___ReturnFinder) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = suggestions___ReturnFinder_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_suggestions___ReturnFinder_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
suggestions___ReturnFinder_traverse(mypy___suggestions___ReturnFinderObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_typemap);
    Py_VISIT(self->_return_types);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___suggestions___ReturnFinderObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___suggestions___ReturnFinderObject))));
    return 0;
}

static int
suggestions___ReturnFinder_clear(mypy___suggestions___ReturnFinderObject *self)
{
    Py_CLEAR(self->_typemap);
    Py_CLEAR(self->_return_types);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___suggestions___ReturnFinderObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___suggestions___ReturnFinderObject))));
    return 0;
}

static void
suggestions___ReturnFinder_dealloc(mypy___suggestions___ReturnFinderObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, suggestions___ReturnFinder_dealloc)
    suggestions___ReturnFinder_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem suggestions___ReturnFinder_vtable[99];
static CPyVTableItem suggestions___ReturnFinder_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t suggestions___ReturnFinder_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem suggestions___ReturnFinder_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t suggestions___ReturnFinder_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem suggestions___ReturnFinder_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t suggestions___ReturnFinder_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem suggestions___ReturnFinder_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t suggestions___ReturnFinder_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_suggestions___ReturnFinder_trait_vtable_setup(void)
{
    CPyVTableItem suggestions___ReturnFinder_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_var,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_import_from__NodeVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_import_all,
        (CPyVTableItem)CPyDef_suggestions___ReturnFinder___visit_func_def__NodeVisitor_glue,
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
        (CPyVTableItem)CPyDef_suggestions___ReturnFinder___visit_return_stmt__NodeVisitor_glue,
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
    memcpy(suggestions___ReturnFinder_mypy___visitor___NodeVisitor_trait_vtable, suggestions___ReturnFinder_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(suggestions___ReturnFinder_mypy___visitor___NodeVisitor_trait_vtable));
    size_t suggestions___ReturnFinder_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(suggestions___ReturnFinder_mypy___visitor___NodeVisitor_offset_table, suggestions___ReturnFinder_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(suggestions___ReturnFinder_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem suggestions___ReturnFinder_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
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
    memcpy(suggestions___ReturnFinder_mypy___visitor___ExpressionVisitor_trait_vtable, suggestions___ReturnFinder_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(suggestions___ReturnFinder_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t suggestions___ReturnFinder_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(suggestions___ReturnFinder_mypy___visitor___ExpressionVisitor_offset_table, suggestions___ReturnFinder_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(suggestions___ReturnFinder_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem suggestions___ReturnFinder_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_for_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_with_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_del_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___ReturnFinder___visit_func_def__StatementVisitor_glue,
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
        (CPyVTableItem)CPyDef_suggestions___ReturnFinder___visit_return_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assert_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_if_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_break_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_continue_stmt,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_pass_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_raise_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_try_stmt__StatementVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_match_stmt__StatementVisitor_glue,
    };
    memcpy(suggestions___ReturnFinder_mypy___visitor___StatementVisitor_trait_vtable, suggestions___ReturnFinder_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(suggestions___ReturnFinder_mypy___visitor___StatementVisitor_trait_vtable));
    size_t suggestions___ReturnFinder_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(suggestions___ReturnFinder_mypy___visitor___StatementVisitor_offset_table, suggestions___ReturnFinder_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(suggestions___ReturnFinder_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem suggestions___ReturnFinder_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(suggestions___ReturnFinder_mypy___visitor___PatternVisitor_trait_vtable, suggestions___ReturnFinder_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(suggestions___ReturnFinder_mypy___visitor___PatternVisitor_trait_vtable));
    size_t suggestions___ReturnFinder_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(suggestions___ReturnFinder_mypy___visitor___PatternVisitor_offset_table, suggestions___ReturnFinder_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(suggestions___ReturnFinder_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem suggestions___ReturnFinder_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)suggestions___ReturnFinder_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)suggestions___ReturnFinder_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)suggestions___ReturnFinder_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)suggestions___ReturnFinder_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)suggestions___ReturnFinder_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)suggestions___ReturnFinder_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)suggestions___ReturnFinder_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)suggestions___ReturnFinder_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_suggestions___ReturnFinder_____init__,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mypy_file,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_block,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_func,
        (CPyVTableItem)CPyDef_suggestions___ReturnFinder___visit_func_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_overloaded_func_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_def,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_decorator,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_expression_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_operator_assignment_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_while_stmt,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_for_stmt,
        (CPyVTableItem)CPyDef_suggestions___ReturnFinder___visit_return_stmt,
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
        (CPyVTableItem)CPyDef_suggestions___ReturnFinder_____init__,
        (CPyVTableItem)CPyDef_suggestions___ReturnFinder___visit_return_stmt,
        (CPyVTableItem)CPyDef_suggestions___ReturnFinder___visit_func_def,
    };
    memcpy(suggestions___ReturnFinder_vtable, suggestions___ReturnFinder_vtable_scratch, sizeof(suggestions___ReturnFinder_vtable));
    return 1;
}

static PyObject *
suggestions___ReturnFinder_get_typemap(mypy___suggestions___ReturnFinderObject *self, void *closure);
static int
suggestions___ReturnFinder_set_typemap(mypy___suggestions___ReturnFinderObject *self, PyObject *value, void *closure);
static PyObject *
suggestions___ReturnFinder_get_return_types(mypy___suggestions___ReturnFinderObject *self, void *closure);
static int
suggestions___ReturnFinder_set_return_types(mypy___suggestions___ReturnFinderObject *self, PyObject *value, void *closure);

static PyGetSetDef suggestions___ReturnFinder_getseters[] = {
    {"typemap",
     (getter)suggestions___ReturnFinder_get_typemap, (setter)suggestions___ReturnFinder_set_typemap,
     NULL, NULL},
    {"return_types",
     (getter)suggestions___ReturnFinder_get_return_types, (setter)suggestions___ReturnFinder_set_return_types,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef suggestions___ReturnFinder_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_suggestions___ReturnFinder_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_return_stmt",
     (PyCFunction)CPyPy_suggestions___ReturnFinder___visit_return_stmt,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_func_def",
     (PyCFunction)CPyPy_suggestions___ReturnFinder___visit_func_def,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_suggestions___ReturnFinder_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ReturnFinder",
    .tp_new = suggestions___ReturnFinder_new,
    .tp_dealloc = (destructor)suggestions___ReturnFinder_dealloc,
    .tp_traverse = (traverseproc)suggestions___ReturnFinder_traverse,
    .tp_clear = (inquiry)suggestions___ReturnFinder_clear,
    .tp_getset = suggestions___ReturnFinder_getseters,
    .tp_methods = suggestions___ReturnFinder_methods,
    .tp_init = suggestions___ReturnFinder_init,
    .tp_members = suggestions___ReturnFinder_members,
    .tp_basicsize = sizeof(mypy___suggestions___ReturnFinderObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___suggestions___ReturnFinderObject),
    .tp_weaklistoffset = sizeof(mypy___suggestions___ReturnFinderObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_suggestions___ReturnFinder_template = &CPyType_suggestions___ReturnFinder_template_;

static PyObject *
suggestions___ReturnFinder_setup(PyTypeObject *type)
{
    mypy___suggestions___ReturnFinderObject *self;
    self = (mypy___suggestions___ReturnFinderObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = suggestions___ReturnFinder_vtable + 12;
    return (PyObject *)self;
}

PyObject *CPyDef_suggestions___ReturnFinder(PyObject *cpy_r_typemap)
{
    PyObject *self = suggestions___ReturnFinder_setup(CPyType_suggestions___ReturnFinder);
    if (self == NULL)
        return NULL;
    char res = CPyDef_suggestions___ReturnFinder_____init__(self, cpy_r_typemap);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
suggestions___ReturnFinder_get_typemap(mypy___suggestions___ReturnFinderObject *self, void *closure)
{
    if (unlikely(self->_typemap == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'typemap' of 'ReturnFinder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_typemap);
    PyObject *retval = self->_typemap;
    return retval;
}

static int
suggestions___ReturnFinder_set_typemap(mypy___suggestions___ReturnFinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ReturnFinder' object attribute 'typemap' cannot be deleted");
        return -1;
    }
    if (self->_typemap != NULL) {
        CPy_DECREF(self->_typemap);
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
    self->_typemap = tmp;
    return 0;
}

static PyObject *
suggestions___ReturnFinder_get_return_types(mypy___suggestions___ReturnFinderObject *self, void *closure)
{
    if (unlikely(self->_return_types == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'return_types' of 'ReturnFinder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_return_types);
    PyObject *retval = self->_return_types;
    return retval;
}

static int
suggestions___ReturnFinder_set_return_types(mypy___suggestions___ReturnFinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ReturnFinder' object attribute 'return_types' cannot be deleted");
        return -1;
    }
    if (self->_return_types != NULL) {
        CPy_DECREF(self->_return_types);
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
    self->_return_types = tmp;
    return 0;
}

static int
suggestions___ArgUseFinder_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef suggestions___ArgUseFinder_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___suggestions___ArgUseFinderObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___suggestions___ArgUseFinderObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *suggestions___ArgUseFinder_setup(PyTypeObject *type);
PyObject *CPyDef_suggestions___ArgUseFinder(PyObject *cpy_r_func, PyObject *cpy_r_typemap);

static PyObject *
suggestions___ArgUseFinder_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_suggestions___ArgUseFinder) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = suggestions___ArgUseFinder_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_suggestions___ArgUseFinder_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
suggestions___ArgUseFinder_traverse(mypy___suggestions___ArgUseFinderObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_typemap);
    Py_VISIT(self->_arg_types);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___suggestions___ArgUseFinderObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___suggestions___ArgUseFinderObject))));
    return 0;
}

static int
suggestions___ArgUseFinder_clear(mypy___suggestions___ArgUseFinderObject *self)
{
    Py_CLEAR(self->_typemap);
    Py_CLEAR(self->_arg_types);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___suggestions___ArgUseFinderObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___suggestions___ArgUseFinderObject))));
    return 0;
}

static void
suggestions___ArgUseFinder_dealloc(mypy___suggestions___ArgUseFinderObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, suggestions___ArgUseFinder_dealloc)
    suggestions___ArgUseFinder_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem suggestions___ArgUseFinder_vtable[98];
static CPyVTableItem suggestions___ArgUseFinder_mypy___visitor___NodeVisitor_trait_vtable[82];
static size_t suggestions___ArgUseFinder_mypy___visitor___NodeVisitor_offset_table[1];
static CPyVTableItem suggestions___ArgUseFinder_mypy___visitor___ExpressionVisitor_trait_vtable[44];
static size_t suggestions___ArgUseFinder_mypy___visitor___ExpressionVisitor_offset_table[1];
static CPyVTableItem suggestions___ArgUseFinder_mypy___visitor___StatementVisitor_trait_vtable[26];
static size_t suggestions___ArgUseFinder_mypy___visitor___StatementVisitor_offset_table[1];
static CPyVTableItem suggestions___ArgUseFinder_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t suggestions___ArgUseFinder_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_suggestions___ArgUseFinder_trait_vtable_setup(void)
{
    CPyVTableItem suggestions___ArgUseFinder_mypy___visitor___NodeVisitor_trait_vtable_scratch[] = {
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
        (CPyVTableItem)CPyDef_suggestions___ArgUseFinder___visit_call_expr__NodeVisitor_glue,
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
    memcpy(suggestions___ArgUseFinder_mypy___visitor___NodeVisitor_trait_vtable, suggestions___ArgUseFinder_mypy___visitor___NodeVisitor_trait_vtable_scratch, sizeof(suggestions___ArgUseFinder_mypy___visitor___NodeVisitor_trait_vtable));
    size_t suggestions___ArgUseFinder_mypy___visitor___NodeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(suggestions___ArgUseFinder_mypy___visitor___NodeVisitor_offset_table, suggestions___ArgUseFinder_mypy___visitor___NodeVisitor_offset_table_scratch, sizeof(suggestions___ArgUseFinder_mypy___visitor___NodeVisitor_offset_table));
    CPyVTableItem suggestions___ArgUseFinder_mypy___visitor___ExpressionVisitor_trait_vtable_scratch[] = {
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
        (CPyVTableItem)CPyDef_suggestions___ArgUseFinder___visit_call_expr__ExpressionVisitor_glue,
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
    memcpy(suggestions___ArgUseFinder_mypy___visitor___ExpressionVisitor_trait_vtable, suggestions___ArgUseFinder_mypy___visitor___ExpressionVisitor_trait_vtable_scratch, sizeof(suggestions___ArgUseFinder_mypy___visitor___ExpressionVisitor_trait_vtable));
    size_t suggestions___ArgUseFinder_mypy___visitor___ExpressionVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(suggestions___ArgUseFinder_mypy___visitor___ExpressionVisitor_offset_table, suggestions___ArgUseFinder_mypy___visitor___ExpressionVisitor_offset_table_scratch, sizeof(suggestions___ArgUseFinder_mypy___visitor___ExpressionVisitor_offset_table));
    CPyVTableItem suggestions___ArgUseFinder_mypy___visitor___StatementVisitor_trait_vtable_scratch[] = {
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
    memcpy(suggestions___ArgUseFinder_mypy___visitor___StatementVisitor_trait_vtable, suggestions___ArgUseFinder_mypy___visitor___StatementVisitor_trait_vtable_scratch, sizeof(suggestions___ArgUseFinder_mypy___visitor___StatementVisitor_trait_vtable));
    size_t suggestions___ArgUseFinder_mypy___visitor___StatementVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(suggestions___ArgUseFinder_mypy___visitor___StatementVisitor_offset_table, suggestions___ArgUseFinder_mypy___visitor___StatementVisitor_offset_table_scratch, sizeof(suggestions___ArgUseFinder_mypy___visitor___StatementVisitor_offset_table));
    CPyVTableItem suggestions___ArgUseFinder_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_mypy___visitor___NodeVisitor___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(suggestions___ArgUseFinder_mypy___visitor___PatternVisitor_trait_vtable, suggestions___ArgUseFinder_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(suggestions___ArgUseFinder_mypy___visitor___PatternVisitor_trait_vtable));
    size_t suggestions___ArgUseFinder_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(suggestions___ArgUseFinder_mypy___visitor___PatternVisitor_offset_table, suggestions___ArgUseFinder_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(suggestions___ArgUseFinder_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem suggestions___ArgUseFinder_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___NodeVisitor, (CPyVTableItem)suggestions___ArgUseFinder_mypy___visitor___NodeVisitor_trait_vtable, (CPyVTableItem)suggestions___ArgUseFinder_mypy___visitor___NodeVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___ExpressionVisitor, (CPyVTableItem)suggestions___ArgUseFinder_mypy___visitor___ExpressionVisitor_trait_vtable, (CPyVTableItem)suggestions___ArgUseFinder_mypy___visitor___ExpressionVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___StatementVisitor, (CPyVTableItem)suggestions___ArgUseFinder_mypy___visitor___StatementVisitor_trait_vtable, (CPyVTableItem)suggestions___ArgUseFinder_mypy___visitor___StatementVisitor_offset_table,
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)suggestions___ArgUseFinder_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)suggestions___ArgUseFinder_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_suggestions___ArgUseFinder_____init__,
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
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_member_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_from_expr,
        (CPyVTableItem)CPyDef_traverser___TraverserVisitor___visit_yield_expr,
        (CPyVTableItem)CPyDef_suggestions___ArgUseFinder___visit_call_expr,
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
        (CPyVTableItem)CPyDef_suggestions___ArgUseFinder_____init__,
        (CPyVTableItem)CPyDef_suggestions___ArgUseFinder___visit_call_expr,
    };
    memcpy(suggestions___ArgUseFinder_vtable, suggestions___ArgUseFinder_vtable_scratch, sizeof(suggestions___ArgUseFinder_vtable));
    return 1;
}

static PyObject *
suggestions___ArgUseFinder_get_typemap(mypy___suggestions___ArgUseFinderObject *self, void *closure);
static int
suggestions___ArgUseFinder_set_typemap(mypy___suggestions___ArgUseFinderObject *self, PyObject *value, void *closure);
static PyObject *
suggestions___ArgUseFinder_get_arg_types(mypy___suggestions___ArgUseFinderObject *self, void *closure);
static int
suggestions___ArgUseFinder_set_arg_types(mypy___suggestions___ArgUseFinderObject *self, PyObject *value, void *closure);

static PyGetSetDef suggestions___ArgUseFinder_getseters[] = {
    {"typemap",
     (getter)suggestions___ArgUseFinder_get_typemap, (setter)suggestions___ArgUseFinder_set_typemap,
     NULL, NULL},
    {"arg_types",
     (getter)suggestions___ArgUseFinder_get_arg_types, (setter)suggestions___ArgUseFinder_set_arg_types,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef suggestions___ArgUseFinder_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_suggestions___ArgUseFinder_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_call_expr",
     (PyCFunction)CPyPy_suggestions___ArgUseFinder___visit_call_expr,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_suggestions___ArgUseFinder_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ArgUseFinder",
    .tp_new = suggestions___ArgUseFinder_new,
    .tp_dealloc = (destructor)suggestions___ArgUseFinder_dealloc,
    .tp_traverse = (traverseproc)suggestions___ArgUseFinder_traverse,
    .tp_clear = (inquiry)suggestions___ArgUseFinder_clear,
    .tp_getset = suggestions___ArgUseFinder_getseters,
    .tp_methods = suggestions___ArgUseFinder_methods,
    .tp_init = suggestions___ArgUseFinder_init,
    .tp_members = suggestions___ArgUseFinder_members,
    .tp_basicsize = sizeof(mypy___suggestions___ArgUseFinderObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___suggestions___ArgUseFinderObject),
    .tp_weaklistoffset = sizeof(mypy___suggestions___ArgUseFinderObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_suggestions___ArgUseFinder_template = &CPyType_suggestions___ArgUseFinder_template_;

static PyObject *
suggestions___ArgUseFinder_setup(PyTypeObject *type)
{
    mypy___suggestions___ArgUseFinderObject *self;
    self = (mypy___suggestions___ArgUseFinderObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = suggestions___ArgUseFinder_vtable + 12;
    return (PyObject *)self;
}

PyObject *CPyDef_suggestions___ArgUseFinder(PyObject *cpy_r_func, PyObject *cpy_r_typemap)
{
    PyObject *self = suggestions___ArgUseFinder_setup(CPyType_suggestions___ArgUseFinder);
    if (self == NULL)
        return NULL;
    char res = CPyDef_suggestions___ArgUseFinder_____init__(self, cpy_r_func, cpy_r_typemap);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
suggestions___ArgUseFinder_get_typemap(mypy___suggestions___ArgUseFinderObject *self, void *closure)
{
    if (unlikely(self->_typemap == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'typemap' of 'ArgUseFinder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_typemap);
    PyObject *retval = self->_typemap;
    return retval;
}

static int
suggestions___ArgUseFinder_set_typemap(mypy___suggestions___ArgUseFinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ArgUseFinder' object attribute 'typemap' cannot be deleted");
        return -1;
    }
    if (self->_typemap != NULL) {
        CPy_DECREF(self->_typemap);
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
    self->_typemap = tmp;
    return 0;
}

static PyObject *
suggestions___ArgUseFinder_get_arg_types(mypy___suggestions___ArgUseFinderObject *self, void *closure)
{
    if (unlikely(self->_arg_types == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'arg_types' of 'ArgUseFinder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_arg_types);
    PyObject *retval = self->_arg_types;
    return retval;
}

static int
suggestions___ArgUseFinder_set_arg_types(mypy___suggestions___ArgUseFinderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ArgUseFinder' object attribute 'arg_types' cannot be deleted");
        return -1;
    }
    if (self->_arg_types != NULL) {
        CPy_DECREF(self->_arg_types);
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
    self->_arg_types = tmp;
    return 0;
}

PyMemberDef suggestions___SuggestionFailure_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef suggestions___SuggestionFailure_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef suggestions___SuggestionFailure_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_suggestions___SuggestionFailure_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SuggestionFailure",
    .tp_getset = suggestions___SuggestionFailure_getseters,
    .tp_methods = suggestions___SuggestionFailure_methods,
    .tp_members = suggestions___SuggestionFailure_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyBaseExceptionObject),
    .tp_weaklistoffset = sizeof(PyBaseExceptionObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_suggestions___SuggestionFailure_template = &CPyType_suggestions___SuggestionFailure_template_;


static int
suggestions___SuggestionEngine_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *suggestions___SuggestionEngine_setup(PyTypeObject *type);
PyObject *CPyDef_suggestions___SuggestionEngine(PyObject *cpy_r_fgmanager, char cpy_r_json, char cpy_r_no_errors, char cpy_r_no_any, PyObject *cpy_r_flex_any, PyObject *cpy_r_use_fixme, PyObject *cpy_r_max_guesses);

static PyObject *
suggestions___SuggestionEngine_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_suggestions___SuggestionEngine) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = suggestions___SuggestionEngine_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_suggestions___SuggestionEngine_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
suggestions___SuggestionEngine_traverse(mypy___suggestions___SuggestionEngineObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_fgmanager);
    Py_VISIT(self->_manager);
    Py_VISIT(self->_plugin);
    Py_VISIT(self->_graph);
    Py_VISIT(self->_finder);
    Py_VISIT(self->_flex_any);
    if (CPyTagged_CheckLong(self->_max_guesses)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_max_guesses));
    }
    Py_VISIT(self->_use_fixme);
    return 0;
}

static int
suggestions___SuggestionEngine_clear(mypy___suggestions___SuggestionEngineObject *self)
{
    Py_CLEAR(self->_fgmanager);
    Py_CLEAR(self->_manager);
    Py_CLEAR(self->_plugin);
    Py_CLEAR(self->_graph);
    Py_CLEAR(self->_finder);
    Py_CLEAR(self->_flex_any);
    if (CPyTagged_CheckLong(self->_max_guesses)) {
        CPyTagged __tmp = self->_max_guesses;
        self->_max_guesses = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_use_fixme);
    return 0;
}

static void
suggestions___SuggestionEngine_dealloc(mypy___suggestions___SuggestionEngineObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, suggestions___SuggestionEngine_dealloc)
    suggestions___SuggestionEngine_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem suggestions___SuggestionEngine_vtable[30];
static bool
CPyDef_suggestions___SuggestionEngine_trait_vtable_setup(void)
{
    CPyVTableItem suggestions___SuggestionEngine_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine_____init__,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___suggest,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___suggest_callsites,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___restore_after,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___with_export_types,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___get_trivial_type,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___get_starting_type,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___get_args,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___get_default_arg_types,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___get_guesses,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___get_callsites,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___filter_options,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___find_best,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___get_guesses_from_parent,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___get_suggestion,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___format_args,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___find_node,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___find_node_by_module_and_name,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___find_node_by_file_and_line,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___extract_from_decorator,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___try_type,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___reload,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___ensure_loaded,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___named_type,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___json_suggestion,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___pyannotate_signature,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___format_signature,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___format_type,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___score_type,
        (CPyVTableItem)CPyDef_suggestions___SuggestionEngine___score_callable,
    };
    memcpy(suggestions___SuggestionEngine_vtable, suggestions___SuggestionEngine_vtable_scratch, sizeof(suggestions___SuggestionEngine_vtable));
    return 1;
}

static PyObject *
suggestions___SuggestionEngine_get_fgmanager(mypy___suggestions___SuggestionEngineObject *self, void *closure);
static int
suggestions___SuggestionEngine_set_fgmanager(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure);
static PyObject *
suggestions___SuggestionEngine_get_manager(mypy___suggestions___SuggestionEngineObject *self, void *closure);
static int
suggestions___SuggestionEngine_set_manager(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure);
static PyObject *
suggestions___SuggestionEngine_get_plugin(mypy___suggestions___SuggestionEngineObject *self, void *closure);
static int
suggestions___SuggestionEngine_set_plugin(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure);
static PyObject *
suggestions___SuggestionEngine_get_graph(mypy___suggestions___SuggestionEngineObject *self, void *closure);
static int
suggestions___SuggestionEngine_set_graph(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure);
static PyObject *
suggestions___SuggestionEngine_get_finder(mypy___suggestions___SuggestionEngineObject *self, void *closure);
static int
suggestions___SuggestionEngine_set_finder(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure);
static PyObject *
suggestions___SuggestionEngine_get_give_json(mypy___suggestions___SuggestionEngineObject *self, void *closure);
static int
suggestions___SuggestionEngine_set_give_json(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure);
static PyObject *
suggestions___SuggestionEngine_get_no_errors(mypy___suggestions___SuggestionEngineObject *self, void *closure);
static int
suggestions___SuggestionEngine_set_no_errors(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure);
static PyObject *
suggestions___SuggestionEngine_get_flex_any(mypy___suggestions___SuggestionEngineObject *self, void *closure);
static int
suggestions___SuggestionEngine_set_flex_any(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure);
static PyObject *
suggestions___SuggestionEngine_get_max_guesses(mypy___suggestions___SuggestionEngineObject *self, void *closure);
static int
suggestions___SuggestionEngine_set_max_guesses(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure);
static PyObject *
suggestions___SuggestionEngine_get_use_fixme(mypy___suggestions___SuggestionEngineObject *self, void *closure);
static int
suggestions___SuggestionEngine_set_use_fixme(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure);

static PyGetSetDef suggestions___SuggestionEngine_getseters[] = {
    {"fgmanager",
     (getter)suggestions___SuggestionEngine_get_fgmanager, (setter)suggestions___SuggestionEngine_set_fgmanager,
     NULL, NULL},
    {"manager",
     (getter)suggestions___SuggestionEngine_get_manager, (setter)suggestions___SuggestionEngine_set_manager,
     NULL, NULL},
    {"plugin",
     (getter)suggestions___SuggestionEngine_get_plugin, (setter)suggestions___SuggestionEngine_set_plugin,
     NULL, NULL},
    {"graph",
     (getter)suggestions___SuggestionEngine_get_graph, (setter)suggestions___SuggestionEngine_set_graph,
     NULL, NULL},
    {"finder",
     (getter)suggestions___SuggestionEngine_get_finder, (setter)suggestions___SuggestionEngine_set_finder,
     NULL, NULL},
    {"give_json",
     (getter)suggestions___SuggestionEngine_get_give_json, (setter)suggestions___SuggestionEngine_set_give_json,
     NULL, NULL},
    {"no_errors",
     (getter)suggestions___SuggestionEngine_get_no_errors, (setter)suggestions___SuggestionEngine_set_no_errors,
     NULL, NULL},
    {"flex_any",
     (getter)suggestions___SuggestionEngine_get_flex_any, (setter)suggestions___SuggestionEngine_set_flex_any,
     NULL, NULL},
    {"max_guesses",
     (getter)suggestions___SuggestionEngine_get_max_guesses, (setter)suggestions___SuggestionEngine_set_max_guesses,
     NULL, NULL},
    {"use_fixme",
     (getter)suggestions___SuggestionEngine_get_use_fixme, (setter)suggestions___SuggestionEngine_set_use_fixme,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef suggestions___SuggestionEngine_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"suggest",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___suggest,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"suggest_callsites",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___suggest_callsites,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"restore_after",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___restore_after,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"with_export_types",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___with_export_types,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_trivial_type",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___get_trivial_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_starting_type",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___get_starting_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_args",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___get_args,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_default_arg_types",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___get_default_arg_types,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_guesses",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___get_guesses,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_callsites",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___get_callsites,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"filter_options",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___filter_options,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"find_best",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___find_best,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_guesses_from_parent",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___get_guesses_from_parent,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_suggestion",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___get_suggestion,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"format_args",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___format_args,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"find_node",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___find_node,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"find_node_by_module_and_name",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___find_node_by_module_and_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"find_node_by_file_and_line",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___find_node_by_file_and_line,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"extract_from_decorator",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___extract_from_decorator,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"try_type",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___try_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"reload",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___reload,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"ensure_loaded",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___ensure_loaded,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"named_type",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___named_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"json_suggestion",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___json_suggestion,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"pyannotate_signature",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___pyannotate_signature,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"format_signature",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___format_signature,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"format_type",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___format_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"score_type",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___score_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"score_callable",
     (PyCFunction)CPyPy_suggestions___SuggestionEngine___score_callable,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_suggestions___SuggestionEngine_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SuggestionEngine",
    .tp_new = suggestions___SuggestionEngine_new,
    .tp_dealloc = (destructor)suggestions___SuggestionEngine_dealloc,
    .tp_traverse = (traverseproc)suggestions___SuggestionEngine_traverse,
    .tp_clear = (inquiry)suggestions___SuggestionEngine_clear,
    .tp_getset = suggestions___SuggestionEngine_getseters,
    .tp_methods = suggestions___SuggestionEngine_methods,
    .tp_init = suggestions___SuggestionEngine_init,
    .tp_basicsize = sizeof(mypy___suggestions___SuggestionEngineObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_suggestions___SuggestionEngine_template = &CPyType_suggestions___SuggestionEngine_template_;

static PyObject *
suggestions___SuggestionEngine_setup(PyTypeObject *type)
{
    mypy___suggestions___SuggestionEngineObject *self;
    self = (mypy___suggestions___SuggestionEngineObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = suggestions___SuggestionEngine_vtable;
    self->_give_json = 2;
    self->_no_errors = 2;
    self->_max_guesses = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_suggestions___SuggestionEngine(PyObject *cpy_r_fgmanager, char cpy_r_json, char cpy_r_no_errors, char cpy_r_no_any, PyObject *cpy_r_flex_any, PyObject *cpy_r_use_fixme, PyObject *cpy_r_max_guesses)
{
    PyObject *self = suggestions___SuggestionEngine_setup(CPyType_suggestions___SuggestionEngine);
    if (self == NULL)
        return NULL;
    char res = CPyDef_suggestions___SuggestionEngine_____init__(self, cpy_r_fgmanager, cpy_r_json, cpy_r_no_errors, cpy_r_no_any, cpy_r_flex_any, cpy_r_use_fixme, cpy_r_max_guesses);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
suggestions___SuggestionEngine_get_fgmanager(mypy___suggestions___SuggestionEngineObject *self, void *closure)
{
    if (unlikely(self->_fgmanager == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fgmanager' of 'SuggestionEngine' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fgmanager);
    PyObject *retval = self->_fgmanager;
    return retval;
}

static int
suggestions___SuggestionEngine_set_fgmanager(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SuggestionEngine' object attribute 'fgmanager' cannot be deleted");
        return -1;
    }
    if (self->_fgmanager != NULL) {
        CPy_DECREF(self->_fgmanager);
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
    self->_fgmanager = tmp;
    return 0;
}

static PyObject *
suggestions___SuggestionEngine_get_manager(mypy___suggestions___SuggestionEngineObject *self, void *closure)
{
    if (unlikely(self->_manager == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'manager' of 'SuggestionEngine' undefined");
        return NULL;
    }
    CPy_INCREF(self->_manager);
    PyObject *retval = self->_manager;
    return retval;
}

static int
suggestions___SuggestionEngine_set_manager(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SuggestionEngine' object attribute 'manager' cannot be deleted");
        return -1;
    }
    if (self->_manager != NULL) {
        CPy_DECREF(self->_manager);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_mypy___build___BuildManager))
        tmp = value;
    else {
        CPy_TypeError("mypy.build.BuildManager", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_manager = tmp;
    return 0;
}

static PyObject *
suggestions___SuggestionEngine_get_plugin(mypy___suggestions___SuggestionEngineObject *self, void *closure)
{
    if (unlikely(self->_plugin == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'plugin' of 'SuggestionEngine' undefined");
        return NULL;
    }
    CPy_INCREF(self->_plugin);
    PyObject *retval = self->_plugin;
    return retval;
}

static int
suggestions___SuggestionEngine_set_plugin(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SuggestionEngine' object attribute 'plugin' cannot be deleted");
        return -1;
    }
    if (self->_plugin != NULL) {
        CPy_DECREF(self->_plugin);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_plugin___ChainedPlugin))
        tmp = value;
    else {
        CPy_TypeError("mypy.plugin.ChainedPlugin", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_plugin = tmp;
    return 0;
}

static PyObject *
suggestions___SuggestionEngine_get_graph(mypy___suggestions___SuggestionEngineObject *self, void *closure)
{
    if (unlikely(self->_graph == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'graph' of 'SuggestionEngine' undefined");
        return NULL;
    }
    CPy_INCREF(self->_graph);
    PyObject *retval = self->_graph;
    return retval;
}

static int
suggestions___SuggestionEngine_set_graph(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SuggestionEngine' object attribute 'graph' cannot be deleted");
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
suggestions___SuggestionEngine_get_finder(mypy___suggestions___SuggestionEngineObject *self, void *closure)
{
    if (unlikely(self->_finder == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'finder' of 'SuggestionEngine' undefined");
        return NULL;
    }
    CPy_INCREF(self->_finder);
    PyObject *retval = self->_finder;
    return retval;
}

static int
suggestions___SuggestionEngine_set_finder(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SuggestionEngine' object attribute 'finder' cannot be deleted");
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
suggestions___SuggestionEngine_get_give_json(mypy___suggestions___SuggestionEngineObject *self, void *closure)
{
    PyObject *retval = self->_give_json ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
suggestions___SuggestionEngine_set_give_json(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SuggestionEngine' object attribute 'give_json' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_give_json = tmp;
    return 0;
}

static PyObject *
suggestions___SuggestionEngine_get_no_errors(mypy___suggestions___SuggestionEngineObject *self, void *closure)
{
    PyObject *retval = self->_no_errors ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
suggestions___SuggestionEngine_set_no_errors(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SuggestionEngine' object attribute 'no_errors' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_no_errors = tmp;
    return 0;
}

static PyObject *
suggestions___SuggestionEngine_get_flex_any(mypy___suggestions___SuggestionEngineObject *self, void *closure)
{
    if (unlikely(self->_flex_any == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'flex_any' of 'SuggestionEngine' undefined");
        return NULL;
    }
    CPy_INCREF(self->_flex_any);
    PyObject *retval = self->_flex_any;
    return retval;
}

static int
suggestions___SuggestionEngine_set_flex_any(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SuggestionEngine' object attribute 'flex_any' cannot be deleted");
        return -1;
    }
    if (self->_flex_any != NULL) {
        CPy_DECREF(self->_flex_any);
    }
    PyObject *tmp;
    if (CPyFloat_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL7421;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL7421;
    CPy_TypeError("float or None", value); 
    tmp = NULL;
__LL7421: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_flex_any = tmp;
    return 0;
}

static PyObject *
suggestions___SuggestionEngine_get_max_guesses(mypy___suggestions___SuggestionEngineObject *self, void *closure)
{
    if (unlikely(self->_max_guesses == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'max_guesses' of 'SuggestionEngine' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_max_guesses);
    PyObject *retval = CPyTagged_StealAsObject(self->_max_guesses);
    return retval;
}

static int
suggestions___SuggestionEngine_set_max_guesses(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SuggestionEngine' object attribute 'max_guesses' cannot be deleted");
        return -1;
    }
    if (self->_max_guesses != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_max_guesses);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_max_guesses = tmp;
    return 0;
}

static PyObject *
suggestions___SuggestionEngine_get_use_fixme(mypy___suggestions___SuggestionEngineObject *self, void *closure)
{
    if (unlikely(self->_use_fixme == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'use_fixme' of 'SuggestionEngine' undefined");
        return NULL;
    }
    CPy_INCREF(self->_use_fixme);
    PyObject *retval = self->_use_fixme;
    return retval;
}

static int
suggestions___SuggestionEngine_set_use_fixme(mypy___suggestions___SuggestionEngineObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SuggestionEngine' object attribute 'use_fixme' cannot be deleted");
        return -1;
    }
    if (self->_use_fixme != NULL) {
        CPy_DECREF(self->_use_fixme);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL7422;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL7422;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL7422: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_use_fixme = tmp;
    return 0;
}

static int
suggestions___TypeFormatter_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef suggestions___TypeFormatter_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___suggestions___TypeFormatterObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___suggestions___TypeFormatterObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *suggestions___TypeFormatter_setup(PyTypeObject *type);
PyObject *CPyDef_suggestions___TypeFormatter(PyObject *cpy_r_module, PyObject *cpy_r_graph, PyObject *cpy_r_options);

static PyObject *
suggestions___TypeFormatter_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_suggestions___TypeFormatter) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = suggestions___TypeFormatter_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_suggestions___TypeFormatter_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
suggestions___TypeFormatter_traverse(mypy___suggestions___TypeFormatterObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_id_mapper);
    Py_VISIT(self->_options);
    Py_VISIT(self->_module);
    Py_VISIT(self->_graph);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___suggestions___TypeFormatterObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___suggestions___TypeFormatterObject))));
    return 0;
}

static int
suggestions___TypeFormatter_clear(mypy___suggestions___TypeFormatterObject *self)
{
    Py_CLEAR(self->_id_mapper);
    Py_CLEAR(self->_options);
    Py_CLEAR(self->_module);
    Py_CLEAR(self->_graph);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___suggestions___TypeFormatterObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___suggestions___TypeFormatterObject))));
    return 0;
}

static void
suggestions___TypeFormatter_dealloc(mypy___suggestions___TypeFormatterObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, suggestions___TypeFormatter_dealloc)
    suggestions___TypeFormatter_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem suggestions___TypeFormatter_vtable[42];
static CPyVTableItem suggestions___TypeFormatter_type_visitor___SyntheticTypeVisitor_trait_vtable[26];
static size_t suggestions___TypeFormatter_type_visitor___SyntheticTypeVisitor_offset_table[1];
static CPyVTableItem suggestions___TypeFormatter_type_visitor___TypeVisitor_trait_vtable[21];
static size_t suggestions___TypeFormatter_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_suggestions___TypeFormatter_trait_vtable_setup(void)
{
    CPyVTableItem suggestions___TypeFormatter_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_type_list__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_callable_argument__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_ellipsis_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_raw_expression_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_placeholder_type__SyntheticTypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(suggestions___TypeFormatter_type_visitor___SyntheticTypeVisitor_trait_vtable, suggestions___TypeFormatter_type_visitor___SyntheticTypeVisitor_trait_vtable_scratch, sizeof(suggestions___TypeFormatter_type_visitor___SyntheticTypeVisitor_trait_vtable));
    size_t suggestions___TypeFormatter_type_visitor___SyntheticTypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(suggestions___TypeFormatter_type_visitor___SyntheticTypeVisitor_offset_table, suggestions___TypeFormatter_type_visitor___SyntheticTypeVisitor_offset_table_scratch, sizeof(suggestions___TypeFormatter_type_visitor___SyntheticTypeVisitor_offset_table));
    CPyVTableItem suggestions___TypeFormatter_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(suggestions___TypeFormatter_type_visitor___TypeVisitor_trait_vtable, suggestions___TypeFormatter_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(suggestions___TypeFormatter_type_visitor___TypeVisitor_trait_vtable));
    size_t suggestions___TypeFormatter_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(suggestions___TypeFormatter_type_visitor___TypeVisitor_offset_table, suggestions___TypeFormatter_type_visitor___TypeVisitor_offset_table_scratch, sizeof(suggestions___TypeFormatter_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem suggestions___TypeFormatter_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___SyntheticTypeVisitor, (CPyVTableItem)suggestions___TypeFormatter_type_visitor___SyntheticTypeVisitor_trait_vtable, (CPyVTableItem)suggestions___TypeFormatter_type_visitor___SyntheticTypeVisitor_offset_table,
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)suggestions___TypeFormatter_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)suggestions___TypeFormatter_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter_____init__,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_unbound_type,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_type_list,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_callable_argument,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_any,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_none_type,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_erased_type,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_deleted_type,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_instance,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_type_var,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_param_spec,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_parameters,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_callable_type,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_overloaded,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_tuple_type,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_typeddict_type,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_raw_expression_type,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_literal_type,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_union_type,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_partial_type,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_ellipsis_type,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_type_type,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_placeholder_type,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_type_alias_type,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___visit_unpack_type,
        (CPyVTableItem)CPyDef_types___TypeStrVisitor___list_str,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter_____init__,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_any,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_instance,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_tuple_type,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_typeddict_type,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_union_type,
        (CPyVTableItem)CPyDef_suggestions___TypeFormatter___visit_callable_type,
    };
    memcpy(suggestions___TypeFormatter_vtable, suggestions___TypeFormatter_vtable_scratch, sizeof(suggestions___TypeFormatter_vtable));
    return 1;
}

static PyObject *
suggestions___TypeFormatter_get_module(mypy___suggestions___TypeFormatterObject *self, void *closure);
static int
suggestions___TypeFormatter_set_module(mypy___suggestions___TypeFormatterObject *self, PyObject *value, void *closure);
static PyObject *
suggestions___TypeFormatter_get_graph(mypy___suggestions___TypeFormatterObject *self, void *closure);
static int
suggestions___TypeFormatter_set_graph(mypy___suggestions___TypeFormatterObject *self, PyObject *value, void *closure);

static PyGetSetDef suggestions___TypeFormatter_getseters[] = {
    {"module",
     (getter)suggestions___TypeFormatter_get_module, (setter)suggestions___TypeFormatter_set_module,
     NULL, NULL},
    {"graph",
     (getter)suggestions___TypeFormatter_get_graph, (setter)suggestions___TypeFormatter_set_graph,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef suggestions___TypeFormatter_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_suggestions___TypeFormatter_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_any",
     (PyCFunction)CPyPy_suggestions___TypeFormatter___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_instance",
     (PyCFunction)CPyPy_suggestions___TypeFormatter___visit_instance,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_tuple_type",
     (PyCFunction)CPyPy_suggestions___TypeFormatter___visit_tuple_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_uninhabited_type",
     (PyCFunction)CPyPy_suggestions___TypeFormatter___visit_uninhabited_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_typeddict_type",
     (PyCFunction)CPyPy_suggestions___TypeFormatter___visit_typeddict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_union_type",
     (PyCFunction)CPyPy_suggestions___TypeFormatter___visit_union_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_callable_type",
     (PyCFunction)CPyPy_suggestions___TypeFormatter___visit_callable_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_suggestions___TypeFormatter_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeFormatter",
    .tp_new = suggestions___TypeFormatter_new,
    .tp_dealloc = (destructor)suggestions___TypeFormatter_dealloc,
    .tp_traverse = (traverseproc)suggestions___TypeFormatter_traverse,
    .tp_clear = (inquiry)suggestions___TypeFormatter_clear,
    .tp_getset = suggestions___TypeFormatter_getseters,
    .tp_methods = suggestions___TypeFormatter_methods,
    .tp_init = suggestions___TypeFormatter_init,
    .tp_members = suggestions___TypeFormatter_members,
    .tp_basicsize = sizeof(mypy___suggestions___TypeFormatterObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___suggestions___TypeFormatterObject),
    .tp_weaklistoffset = sizeof(mypy___suggestions___TypeFormatterObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_suggestions___TypeFormatter_template = &CPyType_suggestions___TypeFormatter_template_;

static PyObject *
suggestions___TypeFormatter_setup(PyTypeObject *type)
{
    mypy___suggestions___TypeFormatterObject *self;
    self = (mypy___suggestions___TypeFormatterObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = suggestions___TypeFormatter_vtable + 6;
    self->_any_as_dots = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_suggestions___TypeFormatter(PyObject *cpy_r_module, PyObject *cpy_r_graph, PyObject *cpy_r_options)
{
    PyObject *self = suggestions___TypeFormatter_setup(CPyType_suggestions___TypeFormatter);
    if (self == NULL)
        return NULL;
    char res = CPyDef_suggestions___TypeFormatter_____init__(self, cpy_r_module, cpy_r_graph, cpy_r_options);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
suggestions___TypeFormatter_get_module(mypy___suggestions___TypeFormatterObject *self, void *closure)
{
    if (unlikely(self->_module == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'module' of 'TypeFormatter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_module);
    PyObject *retval = self->_module;
    return retval;
}

static int
suggestions___TypeFormatter_set_module(mypy___suggestions___TypeFormatterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeFormatter' object attribute 'module' cannot be deleted");
        return -1;
    }
    if (self->_module != NULL) {
        CPy_DECREF(self->_module);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL7423;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL7423;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL7423: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_module = tmp;
    return 0;
}

static PyObject *
suggestions___TypeFormatter_get_graph(mypy___suggestions___TypeFormatterObject *self, void *closure)
{
    if (unlikely(self->_graph == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'graph' of 'TypeFormatter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_graph);
    PyObject *retval = self->_graph;
    return retval;
}

static int
suggestions___TypeFormatter_set_graph(mypy___suggestions___TypeFormatterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeFormatter' object attribute 'graph' cannot be deleted");
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

PyMemberDef suggestions___MakeSuggestionAny_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___suggestions___MakeSuggestionAnyObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___suggestions___MakeSuggestionAnyObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *suggestions___MakeSuggestionAny_setup(PyTypeObject *type);
PyObject *CPyDef_suggestions___MakeSuggestionAny(void);

static PyObject *
suggestions___MakeSuggestionAny_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_suggestions___MakeSuggestionAny) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return suggestions___MakeSuggestionAny_setup(type);
}

static int
suggestions___MakeSuggestionAny_traverse(mypy___suggestions___MakeSuggestionAnyObject *self, visitproc visit, void *arg)
{
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___suggestions___MakeSuggestionAnyObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___suggestions___MakeSuggestionAnyObject))));
    return 0;
}

static int
suggestions___MakeSuggestionAny_clear(mypy___suggestions___MakeSuggestionAnyObject *self)
{
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___suggestions___MakeSuggestionAnyObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___suggestions___MakeSuggestionAnyObject))));
    return 0;
}

static void
suggestions___MakeSuggestionAny_dealloc(mypy___suggestions___MakeSuggestionAnyObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, suggestions___MakeSuggestionAny_dealloc)
    suggestions___MakeSuggestionAny_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem suggestions___MakeSuggestionAny_vtable[28];
static CPyVTableItem suggestions___MakeSuggestionAny_type_visitor___TypeVisitor_trait_vtable[21];
static size_t suggestions___MakeSuggestionAny_type_visitor___TypeVisitor_offset_table[1];
static bool
CPyDef_suggestions___MakeSuggestionAny_trait_vtable_setup(void)
{
    CPyVTableItem suggestions___MakeSuggestionAny_type_visitor___TypeVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_unbound_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___MakeSuggestionAny___visit_any__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_none_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_uninhabited_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_erased_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_deleted_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_var__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_param_spec__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_parameters__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_var_tuple__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_instance__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_callable_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_overloaded__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_tuple_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_typeddict_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_literal_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_union_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_partial_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_suggestions___MakeSuggestionAny___visit_type_alias_type__TypeVisitor_glue,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_unpack_type__TypeVisitor_glue,
    };
    memcpy(suggestions___MakeSuggestionAny_type_visitor___TypeVisitor_trait_vtable, suggestions___MakeSuggestionAny_type_visitor___TypeVisitor_trait_vtable_scratch, sizeof(suggestions___MakeSuggestionAny_type_visitor___TypeVisitor_trait_vtable));
    size_t suggestions___MakeSuggestionAny_type_visitor___TypeVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(suggestions___MakeSuggestionAny_type_visitor___TypeVisitor_offset_table, suggestions___MakeSuggestionAny_type_visitor___TypeVisitor_offset_table_scratch, sizeof(suggestions___MakeSuggestionAny_type_visitor___TypeVisitor_offset_table));
    CPyVTableItem suggestions___MakeSuggestionAny_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_type_visitor___TypeVisitor, (CPyVTableItem)suggestions___MakeSuggestionAny_type_visitor___TypeVisitor_trait_vtable, (CPyVTableItem)suggestions___MakeSuggestionAny_type_visitor___TypeVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_unbound_type,
        (CPyVTableItem)CPyDef_suggestions___MakeSuggestionAny___visit_any,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_none_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_uninhabited_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_erased_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_deleted_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_instance,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_var,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_param_spec,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_parameters,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_var_tuple,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_partial_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_unpack_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_callable_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_tuple_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_typeddict_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_literal_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_union_type,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___translate_types,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___translate_variables,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_overloaded,
        (CPyVTableItem)CPyDef_type_visitor___TypeTranslator___visit_type_type,
        (CPyVTableItem)CPyDef_suggestions___MakeSuggestionAny___visit_type_alias_type,
        (CPyVTableItem)CPyDef_suggestions___MakeSuggestionAny___visit_any,
        (CPyVTableItem)CPyDef_suggestions___MakeSuggestionAny___visit_type_alias_type,
    };
    memcpy(suggestions___MakeSuggestionAny_vtable, suggestions___MakeSuggestionAny_vtable_scratch, sizeof(suggestions___MakeSuggestionAny_vtable));
    return 1;
}


static PyGetSetDef suggestions___MakeSuggestionAny_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef suggestions___MakeSuggestionAny_methods[] = {
    {"visit_any",
     (PyCFunction)CPyPy_suggestions___MakeSuggestionAny___visit_any,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_type_alias_type",
     (PyCFunction)CPyPy_suggestions___MakeSuggestionAny___visit_type_alias_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_suggestions___MakeSuggestionAny_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "MakeSuggestionAny",
    .tp_new = suggestions___MakeSuggestionAny_new,
    .tp_dealloc = (destructor)suggestions___MakeSuggestionAny_dealloc,
    .tp_traverse = (traverseproc)suggestions___MakeSuggestionAny_traverse,
    .tp_clear = (inquiry)suggestions___MakeSuggestionAny_clear,
    .tp_getset = suggestions___MakeSuggestionAny_getseters,
    .tp_methods = suggestions___MakeSuggestionAny_methods,
    .tp_members = suggestions___MakeSuggestionAny_members,
    .tp_basicsize = sizeof(mypy___suggestions___MakeSuggestionAnyObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___suggestions___MakeSuggestionAnyObject),
    .tp_weaklistoffset = sizeof(mypy___suggestions___MakeSuggestionAnyObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_suggestions___MakeSuggestionAny_template = &CPyType_suggestions___MakeSuggestionAny_template_;

static PyObject *
suggestions___MakeSuggestionAny_setup(PyTypeObject *type)
{
    mypy___suggestions___MakeSuggestionAnyObject *self;
    self = (mypy___suggestions___MakeSuggestionAnyObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = suggestions___MakeSuggestionAny_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_suggestions___MakeSuggestionAny(void)
{
    PyObject *self = suggestions___MakeSuggestionAny_setup(CPyType_suggestions___MakeSuggestionAny);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *suggestions___visit_call_expr_ArgUseFinder_env_setup(PyTypeObject *type);
PyObject *CPyDef_suggestions___visit_call_expr_ArgUseFinder_env(void);

static PyObject *
suggestions___visit_call_expr_ArgUseFinder_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_suggestions___visit_call_expr_ArgUseFinder_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return suggestions___visit_call_expr_ArgUseFinder_env_setup(type);
}

static int
suggestions___visit_call_expr_ArgUseFinder_env_traverse(mypy___suggestions___visit_call_expr_ArgUseFinder_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_o);
    Py_VISIT(self->_e);
    Py_VISIT(self->_typ);
    return 0;
}

static int
suggestions___visit_call_expr_ArgUseFinder_env_clear(mypy___suggestions___visit_call_expr_ArgUseFinder_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_o);
    Py_CLEAR(self->_e);
    Py_CLEAR(self->_typ);
    return 0;
}

static void
suggestions___visit_call_expr_ArgUseFinder_env_dealloc(mypy___suggestions___visit_call_expr_ArgUseFinder_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, suggestions___visit_call_expr_ArgUseFinder_env_dealloc)
    suggestions___visit_call_expr_ArgUseFinder_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem suggestions___visit_call_expr_ArgUseFinder_env_vtable[1];
static bool
CPyDef_suggestions___visit_call_expr_ArgUseFinder_env_trait_vtable_setup(void)
{
    CPyVTableItem suggestions___visit_call_expr_ArgUseFinder_env_vtable_scratch[] = {
        NULL
    };
    memcpy(suggestions___visit_call_expr_ArgUseFinder_env_vtable, suggestions___visit_call_expr_ArgUseFinder_env_vtable_scratch, sizeof(suggestions___visit_call_expr_ArgUseFinder_env_vtable));
    return 1;
}

static PyMethodDef suggestions___visit_call_expr_ArgUseFinder_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_suggestions___visit_call_expr_ArgUseFinder_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "visit_call_expr_ArgUseFinder_env",
    .tp_new = suggestions___visit_call_expr_ArgUseFinder_env_new,
    .tp_dealloc = (destructor)suggestions___visit_call_expr_ArgUseFinder_env_dealloc,
    .tp_traverse = (traverseproc)suggestions___visit_call_expr_ArgUseFinder_env_traverse,
    .tp_clear = (inquiry)suggestions___visit_call_expr_ArgUseFinder_env_clear,
    .tp_methods = suggestions___visit_call_expr_ArgUseFinder_env_methods,
    .tp_basicsize = sizeof(mypy___suggestions___visit_call_expr_ArgUseFinder_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_suggestions___visit_call_expr_ArgUseFinder_env_template = &CPyType_suggestions___visit_call_expr_ArgUseFinder_env_template_;

static PyObject *
suggestions___visit_call_expr_ArgUseFinder_env_setup(PyTypeObject *type)
{
    mypy___suggestions___visit_call_expr_ArgUseFinder_envObject *self;
    self = (mypy___suggestions___visit_call_expr_ArgUseFinder_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = suggestions___visit_call_expr_ArgUseFinder_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_suggestions___visit_call_expr_ArgUseFinder_env(void)
{
    PyObject *self = suggestions___visit_call_expr_ArgUseFinder_env_setup(CPyType_suggestions___visit_call_expr_ArgUseFinder_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_____get__(self, instance, owner);
}
PyMemberDef suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_setup(PyTypeObject *type);
PyObject *CPyDef_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj(void);

static PyObject *
suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_setup(type);
}

static int
suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_traverse(mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject))));
    return 0;
}

static int
suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_clear(mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject))));
    return 0;
}

static void
suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_dealloc(mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_dealloc)
    suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_vtable[2];
static bool
CPyDef_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_trait_vtable_setup(void)
{
    CPyVTableItem suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_____call__,
        (CPyVTableItem)CPyDef_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_____get__,
    };
    memcpy(suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_vtable, suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_vtable_scratch, sizeof(suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_vtable));
    return 1;
}

static PyMethodDef suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj",
    .tp_new = suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_new,
    .tp_dealloc = (destructor)suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_dealloc,
    .tp_traverse = (traverseproc)suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_traverse,
    .tp_clear = (inquiry)suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_clear,
    .tp_methods = suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj,
    .tp_members = suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_members,
    .tp_basicsize = sizeof(mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject),
    .tp_weaklistoffset = sizeof(mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_template = &CPyType_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_template_;

static PyObject *
suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_setup(PyTypeObject *type)
{
    mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject *self;
    self = (mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_vtable;
    self->vectorcall = CPyPy_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj(void)
{
    PyObject *self = suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_setup(CPyType_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *suggestions___restore_after_SuggestionEngine_env_setup(PyTypeObject *type);
PyObject *CPyDef_suggestions___restore_after_SuggestionEngine_env(void);

static PyObject *
suggestions___restore_after_SuggestionEngine_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_suggestions___restore_after_SuggestionEngine_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return suggestions___restore_after_SuggestionEngine_env_setup(type);
}

static int
suggestions___restore_after_SuggestionEngine_env_traverse(mypy___suggestions___restore_after_SuggestionEngine_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_module);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    return 0;
}

static int
suggestions___restore_after_SuggestionEngine_env_clear(mypy___suggestions___restore_after_SuggestionEngine_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_module);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
suggestions___restore_after_SuggestionEngine_env_dealloc(mypy___suggestions___restore_after_SuggestionEngine_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, suggestions___restore_after_SuggestionEngine_env_dealloc)
    suggestions___restore_after_SuggestionEngine_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem suggestions___restore_after_SuggestionEngine_env_vtable[1];
static bool
CPyDef_suggestions___restore_after_SuggestionEngine_env_trait_vtable_setup(void)
{
    CPyVTableItem suggestions___restore_after_SuggestionEngine_env_vtable_scratch[] = {
        NULL
    };
    memcpy(suggestions___restore_after_SuggestionEngine_env_vtable, suggestions___restore_after_SuggestionEngine_env_vtable_scratch, sizeof(suggestions___restore_after_SuggestionEngine_env_vtable));
    return 1;
}

static PyMethodDef suggestions___restore_after_SuggestionEngine_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_suggestions___restore_after_SuggestionEngine_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "restore_after_SuggestionEngine_env",
    .tp_new = suggestions___restore_after_SuggestionEngine_env_new,
    .tp_dealloc = (destructor)suggestions___restore_after_SuggestionEngine_env_dealloc,
    .tp_traverse = (traverseproc)suggestions___restore_after_SuggestionEngine_env_traverse,
    .tp_clear = (inquiry)suggestions___restore_after_SuggestionEngine_env_clear,
    .tp_methods = suggestions___restore_after_SuggestionEngine_env_methods,
    .tp_basicsize = sizeof(mypy___suggestions___restore_after_SuggestionEngine_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_suggestions___restore_after_SuggestionEngine_env_template = &CPyType_suggestions___restore_after_SuggestionEngine_env_template_;

static PyObject *
suggestions___restore_after_SuggestionEngine_env_setup(PyTypeObject *type)
{
    mypy___suggestions___restore_after_SuggestionEngine_envObject *self;
    self = (mypy___suggestions___restore_after_SuggestionEngine_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = suggestions___restore_after_SuggestionEngine_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_suggestions___restore_after_SuggestionEngine_env(void)
{
    PyObject *self = suggestions___restore_after_SuggestionEngine_env_setup(CPyType_suggestions___restore_after_SuggestionEngine_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *suggestions___restore_after_SuggestionEngine_gen_setup(PyTypeObject *type);
PyObject *CPyDef_suggestions___restore_after_SuggestionEngine_gen(void);

static PyObject *
suggestions___restore_after_SuggestionEngine_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_suggestions___restore_after_SuggestionEngine_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return suggestions___restore_after_SuggestionEngine_gen_setup(type);
}

static int
suggestions___restore_after_SuggestionEngine_gen_traverse(mypy___suggestions___restore_after_SuggestionEngine_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
suggestions___restore_after_SuggestionEngine_gen_clear(mypy___suggestions___restore_after_SuggestionEngine_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
suggestions___restore_after_SuggestionEngine_gen_dealloc(mypy___suggestions___restore_after_SuggestionEngine_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, suggestions___restore_after_SuggestionEngine_gen_dealloc)
    suggestions___restore_after_SuggestionEngine_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem suggestions___restore_after_SuggestionEngine_gen_vtable[6];
static bool
CPyDef_suggestions___restore_after_SuggestionEngine_gen_trait_vtable_setup(void)
{
    CPyVTableItem suggestions___restore_after_SuggestionEngine_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_suggestions___restore_after_SuggestionEngine_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_suggestions___restore_after_SuggestionEngine_gen_____next__,
        (CPyVTableItem)CPyDef_suggestions___restore_after_SuggestionEngine_gen___send,
        (CPyVTableItem)CPyDef_suggestions___restore_after_SuggestionEngine_gen_____iter__,
        (CPyVTableItem)CPyDef_suggestions___restore_after_SuggestionEngine_gen___throw,
        (CPyVTableItem)CPyDef_suggestions___restore_after_SuggestionEngine_gen___close,
    };
    memcpy(suggestions___restore_after_SuggestionEngine_gen_vtable, suggestions___restore_after_SuggestionEngine_gen_vtable_scratch, sizeof(suggestions___restore_after_SuggestionEngine_gen_vtable));
    return 1;
}

static PyMethodDef suggestions___restore_after_SuggestionEngine_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_suggestions___restore_after_SuggestionEngine_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_suggestions___restore_after_SuggestionEngine_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_suggestions___restore_after_SuggestionEngine_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_suggestions___restore_after_SuggestionEngine_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_suggestions___restore_after_SuggestionEngine_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_suggestions___restore_after_SuggestionEngine_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_suggestions___restore_after_SuggestionEngine_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "restore_after_SuggestionEngine_gen",
    .tp_new = suggestions___restore_after_SuggestionEngine_gen_new,
    .tp_dealloc = (destructor)suggestions___restore_after_SuggestionEngine_gen_dealloc,
    .tp_traverse = (traverseproc)suggestions___restore_after_SuggestionEngine_gen_traverse,
    .tp_clear = (inquiry)suggestions___restore_after_SuggestionEngine_gen_clear,
    .tp_methods = suggestions___restore_after_SuggestionEngine_gen_methods,
    .tp_iter = CPyDef_suggestions___restore_after_SuggestionEngine_gen_____iter__,
    .tp_iternext = CPyDef_suggestions___restore_after_SuggestionEngine_gen_____next__,
    .tp_basicsize = sizeof(mypy___suggestions___restore_after_SuggestionEngine_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_suggestions___restore_after_SuggestionEngine_gen_template = &CPyType_suggestions___restore_after_SuggestionEngine_gen_template_;

static PyObject *
suggestions___restore_after_SuggestionEngine_gen_setup(PyTypeObject *type)
{
    mypy___suggestions___restore_after_SuggestionEngine_genObject *self;
    self = (mypy___suggestions___restore_after_SuggestionEngine_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = suggestions___restore_after_SuggestionEngine_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_suggestions___restore_after_SuggestionEngine_gen(void)
{
    PyObject *self = suggestions___restore_after_SuggestionEngine_gen_setup(CPyType_suggestions___restore_after_SuggestionEngine_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *suggestions___with_export_types_SuggestionEngine_env_setup(PyTypeObject *type);
PyObject *CPyDef_suggestions___with_export_types_SuggestionEngine_env(void);

static PyObject *
suggestions___with_export_types_SuggestionEngine_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_suggestions___with_export_types_SuggestionEngine_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return suggestions___with_export_types_SuggestionEngine_env_setup(type);
}

static int
suggestions___with_export_types_SuggestionEngine_env_traverse(mypy___suggestions___with_export_types_SuggestionEngine_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    return 0;
}

static int
suggestions___with_export_types_SuggestionEngine_env_clear(mypy___suggestions___with_export_types_SuggestionEngine_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
suggestions___with_export_types_SuggestionEngine_env_dealloc(mypy___suggestions___with_export_types_SuggestionEngine_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, suggestions___with_export_types_SuggestionEngine_env_dealloc)
    suggestions___with_export_types_SuggestionEngine_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem suggestions___with_export_types_SuggestionEngine_env_vtable[1];
static bool
CPyDef_suggestions___with_export_types_SuggestionEngine_env_trait_vtable_setup(void)
{
    CPyVTableItem suggestions___with_export_types_SuggestionEngine_env_vtable_scratch[] = {
        NULL
    };
    memcpy(suggestions___with_export_types_SuggestionEngine_env_vtable, suggestions___with_export_types_SuggestionEngine_env_vtable_scratch, sizeof(suggestions___with_export_types_SuggestionEngine_env_vtable));
    return 1;
}

static PyMethodDef suggestions___with_export_types_SuggestionEngine_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_suggestions___with_export_types_SuggestionEngine_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "with_export_types_SuggestionEngine_env",
    .tp_new = suggestions___with_export_types_SuggestionEngine_env_new,
    .tp_dealloc = (destructor)suggestions___with_export_types_SuggestionEngine_env_dealloc,
    .tp_traverse = (traverseproc)suggestions___with_export_types_SuggestionEngine_env_traverse,
    .tp_clear = (inquiry)suggestions___with_export_types_SuggestionEngine_env_clear,
    .tp_methods = suggestions___with_export_types_SuggestionEngine_env_methods,
    .tp_basicsize = sizeof(mypy___suggestions___with_export_types_SuggestionEngine_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_suggestions___with_export_types_SuggestionEngine_env_template = &CPyType_suggestions___with_export_types_SuggestionEngine_env_template_;

static PyObject *
suggestions___with_export_types_SuggestionEngine_env_setup(PyTypeObject *type)
{
    mypy___suggestions___with_export_types_SuggestionEngine_envObject *self;
    self = (mypy___suggestions___with_export_types_SuggestionEngine_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = suggestions___with_export_types_SuggestionEngine_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->_old = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_suggestions___with_export_types_SuggestionEngine_env(void)
{
    PyObject *self = suggestions___with_export_types_SuggestionEngine_env_setup(CPyType_suggestions___with_export_types_SuggestionEngine_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *suggestions___with_export_types_SuggestionEngine_gen_setup(PyTypeObject *type);
PyObject *CPyDef_suggestions___with_export_types_SuggestionEngine_gen(void);

static PyObject *
suggestions___with_export_types_SuggestionEngine_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_suggestions___with_export_types_SuggestionEngine_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return suggestions___with_export_types_SuggestionEngine_gen_setup(type);
}

static int
suggestions___with_export_types_SuggestionEngine_gen_traverse(mypy___suggestions___with_export_types_SuggestionEngine_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
suggestions___with_export_types_SuggestionEngine_gen_clear(mypy___suggestions___with_export_types_SuggestionEngine_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
suggestions___with_export_types_SuggestionEngine_gen_dealloc(mypy___suggestions___with_export_types_SuggestionEngine_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, suggestions___with_export_types_SuggestionEngine_gen_dealloc)
    suggestions___with_export_types_SuggestionEngine_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem suggestions___with_export_types_SuggestionEngine_gen_vtable[6];
static bool
CPyDef_suggestions___with_export_types_SuggestionEngine_gen_trait_vtable_setup(void)
{
    CPyVTableItem suggestions___with_export_types_SuggestionEngine_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_suggestions___with_export_types_SuggestionEngine_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_suggestions___with_export_types_SuggestionEngine_gen_____next__,
        (CPyVTableItem)CPyDef_suggestions___with_export_types_SuggestionEngine_gen___send,
        (CPyVTableItem)CPyDef_suggestions___with_export_types_SuggestionEngine_gen_____iter__,
        (CPyVTableItem)CPyDef_suggestions___with_export_types_SuggestionEngine_gen___throw,
        (CPyVTableItem)CPyDef_suggestions___with_export_types_SuggestionEngine_gen___close,
    };
    memcpy(suggestions___with_export_types_SuggestionEngine_gen_vtable, suggestions___with_export_types_SuggestionEngine_gen_vtable_scratch, sizeof(suggestions___with_export_types_SuggestionEngine_gen_vtable));
    return 1;
}

static PyMethodDef suggestions___with_export_types_SuggestionEngine_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_suggestions___with_export_types_SuggestionEngine_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_suggestions___with_export_types_SuggestionEngine_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_suggestions___with_export_types_SuggestionEngine_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_suggestions___with_export_types_SuggestionEngine_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_suggestions___with_export_types_SuggestionEngine_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_suggestions___with_export_types_SuggestionEngine_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_suggestions___with_export_types_SuggestionEngine_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "with_export_types_SuggestionEngine_gen",
    .tp_new = suggestions___with_export_types_SuggestionEngine_gen_new,
    .tp_dealloc = (destructor)suggestions___with_export_types_SuggestionEngine_gen_dealloc,
    .tp_traverse = (traverseproc)suggestions___with_export_types_SuggestionEngine_gen_traverse,
    .tp_clear = (inquiry)suggestions___with_export_types_SuggestionEngine_gen_clear,
    .tp_methods = suggestions___with_export_types_SuggestionEngine_gen_methods,
    .tp_iter = CPyDef_suggestions___with_export_types_SuggestionEngine_gen_____iter__,
    .tp_iternext = CPyDef_suggestions___with_export_types_SuggestionEngine_gen_____next__,
    .tp_basicsize = sizeof(mypy___suggestions___with_export_types_SuggestionEngine_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_suggestions___with_export_types_SuggestionEngine_gen_template = &CPyType_suggestions___with_export_types_SuggestionEngine_gen_template_;

static PyObject *
suggestions___with_export_types_SuggestionEngine_gen_setup(PyTypeObject *type)
{
    mypy___suggestions___with_export_types_SuggestionEngine_genObject *self;
    self = (mypy___suggestions___with_export_types_SuggestionEngine_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = suggestions___with_export_types_SuggestionEngine_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_suggestions___with_export_types_SuggestionEngine_gen(void)
{
    PyObject *self = suggestions___with_export_types_SuggestionEngine_gen_setup(CPyType_suggestions___with_export_types_SuggestionEngine_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *suggestions___find_best_SuggestionEngine_env_setup(PyTypeObject *type);
PyObject *CPyDef_suggestions___find_best_SuggestionEngine_env(void);

static PyObject *
suggestions___find_best_SuggestionEngine_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_suggestions___find_best_SuggestionEngine_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return suggestions___find_best_SuggestionEngine_env_setup(type);
}

static int
suggestions___find_best_SuggestionEngine_env_traverse(mypy___suggestions___find_best_SuggestionEngine_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_errors);
    Py_VISIT(self->_func);
    Py_VISIT(self->_guesses);
    Py_VISIT(self->_guess);
    return 0;
}

static int
suggestions___find_best_SuggestionEngine_env_clear(mypy___suggestions___find_best_SuggestionEngine_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_errors);
    Py_CLEAR(self->_func);
    Py_CLEAR(self->_guesses);
    Py_CLEAR(self->_guess);
    return 0;
}

static void
suggestions___find_best_SuggestionEngine_env_dealloc(mypy___suggestions___find_best_SuggestionEngine_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, suggestions___find_best_SuggestionEngine_env_dealloc)
    suggestions___find_best_SuggestionEngine_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem suggestions___find_best_SuggestionEngine_env_vtable[1];
static bool
CPyDef_suggestions___find_best_SuggestionEngine_env_trait_vtable_setup(void)
{
    CPyVTableItem suggestions___find_best_SuggestionEngine_env_vtable_scratch[] = {
        NULL
    };
    memcpy(suggestions___find_best_SuggestionEngine_env_vtable, suggestions___find_best_SuggestionEngine_env_vtable_scratch, sizeof(suggestions___find_best_SuggestionEngine_env_vtable));
    return 1;
}

static PyMethodDef suggestions___find_best_SuggestionEngine_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_suggestions___find_best_SuggestionEngine_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "find_best_SuggestionEngine_env",
    .tp_new = suggestions___find_best_SuggestionEngine_env_new,
    .tp_dealloc = (destructor)suggestions___find_best_SuggestionEngine_env_dealloc,
    .tp_traverse = (traverseproc)suggestions___find_best_SuggestionEngine_env_traverse,
    .tp_clear = (inquiry)suggestions___find_best_SuggestionEngine_env_clear,
    .tp_methods = suggestions___find_best_SuggestionEngine_env_methods,
    .tp_basicsize = sizeof(mypy___suggestions___find_best_SuggestionEngine_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_suggestions___find_best_SuggestionEngine_env_template = &CPyType_suggestions___find_best_SuggestionEngine_env_template_;

static PyObject *
suggestions___find_best_SuggestionEngine_env_setup(PyTypeObject *type)
{
    mypy___suggestions___find_best_SuggestionEngine_envObject *self;
    self = (mypy___suggestions___find_best_SuggestionEngine_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = suggestions___find_best_SuggestionEngine_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_suggestions___find_best_SuggestionEngine_env(void)
{
    PyObject *self = suggestions___find_best_SuggestionEngine_env_setup(CPyType_suggestions___find_best_SuggestionEngine_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_____get__(self, instance, owner);
}
PyMemberDef suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_setup(PyTypeObject *type);
PyObject *CPyDef_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj(void);

static PyObject *
suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_setup(type);
}

static int
suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_traverse(mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject))));
    return 0;
}

static int
suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_clear(mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject))));
    return 0;
}

static void
suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_dealloc(mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_dealloc)
    suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_vtable[2];
static bool
CPyDef_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_trait_vtable_setup(void)
{
    CPyVTableItem suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_____call__,
        (CPyVTableItem)CPyDef_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_____get__,
    };
    memcpy(suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_vtable, suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_vtable_scratch, sizeof(suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_vtable));
    return 1;
}

static PyMethodDef suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__1_find_best_SuggestionEngine_obj",
    .tp_new = suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_new,
    .tp_dealloc = (destructor)suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_dealloc,
    .tp_traverse = (traverseproc)suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_traverse,
    .tp_clear = (inquiry)suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_clear,
    .tp_methods = suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj,
    .tp_members = suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_members,
    .tp_basicsize = sizeof(mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject),
    .tp_weaklistoffset = sizeof(mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_template = &CPyType_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_template_;

static PyObject *
suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_setup(PyTypeObject *type)
{
    mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject *self;
    self = (mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_vtable;
    self->vectorcall = CPyPy_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj(void)
{
    PyObject *self = suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_setup(CPyType_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef suggestionsmodule_methods[] = {
    {"get_return_types", (PyCFunction)CPyPy_suggestions___get_return_types, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_arg_uses", (PyCFunction)CPyPy_suggestions___get_arg_uses, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_explicit_any", (PyCFunction)CPyPy_suggestions___is_explicit_any, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_implicit_any", (PyCFunction)CPyPy_suggestions___is_implicit_any, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"any_score_type", (PyCFunction)CPyPy_suggestions___any_score_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"any_score_callable", (PyCFunction)CPyPy_suggestions___any_score_callable, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_tricky_callable", (PyCFunction)CPyPy_suggestions___is_tricky_callable, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"make_suggestion_anys", (PyCFunction)CPyPy_suggestions___make_suggestion_anys, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_type_combinations", (PyCFunction)CPyPy_suggestions___generate_type_combinations, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"count_errors", (PyCFunction)CPyPy_suggestions___count_errors, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"refine_type", (PyCFunction)CPyPy_suggestions___refine_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"refine_union", (PyCFunction)CPyPy_suggestions___refine_union, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"refine_callable", (PyCFunction)CPyPy_suggestions___refine_callable, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"dedup", (PyCFunction)CPyPy_suggestions___dedup, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef suggestionsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.suggestions",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    suggestionsmodule_methods
};

PyObject *CPyInit_mypy___suggestions(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___suggestions_internal) {
        Py_INCREF(CPyModule_mypy___suggestions_internal);
        return CPyModule_mypy___suggestions_internal;
    }
    CPyModule_mypy___suggestions_internal = PyModule_Create(&suggestionsmodule);
    if (unlikely(CPyModule_mypy___suggestions_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___suggestions_internal, "__name__");
    CPyStatic_suggestions___globals = PyModule_GetDict(CPyModule_mypy___suggestions_internal);
    if (unlikely(CPyStatic_suggestions___globals == NULL))
        goto fail;
    CPyType_suggestions___visit_call_expr_ArgUseFinder_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_suggestions___visit_call_expr_ArgUseFinder_env_template, NULL, modname);
    if (unlikely(!CPyType_suggestions___visit_call_expr_ArgUseFinder_env))
        goto fail;
    CPyType_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_template, NULL, modname);
    if (unlikely(!CPyType_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj))
        goto fail;
    CPyType_suggestions___restore_after_SuggestionEngine_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_suggestions___restore_after_SuggestionEngine_env_template, NULL, modname);
    if (unlikely(!CPyType_suggestions___restore_after_SuggestionEngine_env))
        goto fail;
    CPyType_suggestions___restore_after_SuggestionEngine_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_suggestions___restore_after_SuggestionEngine_gen_template, NULL, modname);
    if (unlikely(!CPyType_suggestions___restore_after_SuggestionEngine_gen))
        goto fail;
    CPyType_suggestions___with_export_types_SuggestionEngine_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_suggestions___with_export_types_SuggestionEngine_env_template, NULL, modname);
    if (unlikely(!CPyType_suggestions___with_export_types_SuggestionEngine_env))
        goto fail;
    CPyType_suggestions___with_export_types_SuggestionEngine_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_suggestions___with_export_types_SuggestionEngine_gen_template, NULL, modname);
    if (unlikely(!CPyType_suggestions___with_export_types_SuggestionEngine_gen))
        goto fail;
    CPyType_suggestions___find_best_SuggestionEngine_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_suggestions___find_best_SuggestionEngine_env_template, NULL, modname);
    if (unlikely(!CPyType_suggestions___find_best_SuggestionEngine_env))
        goto fail;
    CPyType_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_template, NULL, modname);
    if (unlikely(!CPyType_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_suggestions_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___suggestions_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___suggestions_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_suggestions___PyAnnotateSignature);
    Py_CLEAR(CPyType_suggestions___Callsite);
    Py_CLEAR(CPyType_suggestions___SuggestionPlugin);
    Py_CLEAR(CPyType_suggestions___ReturnFinder);
    Py_CLEAR(CPyType_suggestions___ArgUseFinder);
    Py_CLEAR(CPyType_suggestions___SuggestionFailure);
    Py_CLEAR(CPyType_suggestions___SuggestionEngine);
    Py_CLEAR(CPyType_suggestions___TypeFormatter);
    Py_CLEAR(CPyType_suggestions___MakeSuggestionAny);
    Py_CLEAR(CPyType_suggestions___visit_call_expr_ArgUseFinder_env);
    Py_CLEAR(CPyType_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj);
    Py_CLEAR(CPyType_suggestions___restore_after_SuggestionEngine_env);
    Py_CLEAR(CPyType_suggestions___restore_after_SuggestionEngine_gen);
    Py_CLEAR(CPyType_suggestions___with_export_types_SuggestionEngine_env);
    Py_CLEAR(CPyType_suggestions___with_export_types_SuggestionEngine_gen);
    Py_CLEAR(CPyType_suggestions___find_best_SuggestionEngine_env);
    Py_CLEAR(CPyType_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj);
    return NULL;
}

char CPyDef_suggestions___SuggestionPlugin_____init__(PyObject *cpy_r_self, PyObject *cpy_r_target) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    tuple_T2OO cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = CPyStatics[5313]; /* '.__new__' */
    cpy_r_r1 = CPyStatics[5245]; /* '.__init__' */
    cpy_r_r2.f0 = cpy_r_r0;
    cpy_r_r2.f1 = cpy_r_r1;
    CPy_INCREF(cpy_r_r2.f0);
    CPy_INCREF(cpy_r_r2.f1);
    cpy_r_r3 = CPyStatics[2537]; /* 'endswith' */
    cpy_r_r4 = PyTuple_New(2);
    if (unlikely(cpy_r_r4 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7424 = cpy_r_r2.f0;
    PyTuple_SET_ITEM(cpy_r_r4, 0, __tmp7424);
    PyObject *__tmp7425 = cpy_r_r2.f1;
    PyTuple_SET_ITEM(cpy_r_r4, 1, __tmp7425);
    PyObject *cpy_r_r5[2] = {cpy_r_target, cpy_r_r4};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r6, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 104, CPyStatic_suggestions___globals);
        goto CPyL11;
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(!PyBool_Check(cpy_r_r7))) {
        CPy_TypeError("bool", cpy_r_r7); cpy_r_r8 = 2;
    } else
        cpy_r_r8 = cpy_r_r7 == Py_True;
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 104, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
    if (!cpy_r_r8) goto CPyL12;
    cpy_r_r9 = CPyStatics[224]; /* '.' */
    cpy_r_r10 = CPyStatics[173]; /* 'rsplit' */
    cpy_r_r11 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r12[3] = {cpy_r_target, cpy_r_r9, cpy_r_r11};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r10, cpy_r_r13, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 105, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
    if (likely(PyList_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "__init__", 105, CPyStatic_suggestions___globals, "list", cpy_r_r14);
        goto CPyL13;
    }
    cpy_r_r16 = CPyList_GetItemShort(cpy_r_r15, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 105, CPyStatic_suggestions___globals);
        goto CPyL13;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "__init__", 105, CPyStatic_suggestions___globals, "str", cpy_r_r16);
        goto CPyL13;
    }
    CPy_DECREF(cpy_r_r14);
    cpy_r_target = cpy_r_r17;
CPyL8: ;
    ((mypy___suggestions___SuggestionPluginObject *)cpy_r_self)->_target = cpy_r_target;
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 110, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
    ((mypy___suggestions___SuggestionPluginObject *)cpy_r_self)->_mystery_hits = cpy_r_r18;
    return 1;
CPyL10: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL11: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL10;
CPyL12: ;
    CPy_INCREF(cpy_r_target);
    goto CPyL8;
CPyL13: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL10;
}

PyObject *CPyPy_suggestions___SuggestionPlugin_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"target", 0};
    PyObject *obj_target;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_target)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(PyUnicode_Check(obj_target)))
        arg_target = obj_target;
    else {
        CPy_TypeError("str", obj_target); 
        goto fail;
    }
    char retval = CPyDef_suggestions___SuggestionPlugin_____init__(arg_self, arg_target);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "__init__", 103, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionPlugin___get_function_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = ((mypy___suggestions___SuggestionPluginObject *)cpy_r_self)->_target;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 == -1;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = PyErr_Occurred();
    cpy_r_r4 = cpy_r_r3 != NULL;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_function_hook", 113, CPyStatic_suggestions___globals);
        goto CPyL7;
    }
CPyL3: ;
    cpy_r_r6 = cpy_r_r1 == 0;
    if (!cpy_r_r6) goto CPyL6;
    cpy_r_r7 = CPyStatics[240]; /* 'log' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_self, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_function_hook", 114, CPyStatic_suggestions___globals);
        goto CPyL7;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = Py_None;
    CPy_INCREF(cpy_r_r9);
    return cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
}

PyObject *CPyPy_suggestions___SuggestionPlugin___get_function_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_function_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionPlugin___get_function_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "get_function_hook", 112, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionPlugin___get_method_hook(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = ((mypy___suggestions___SuggestionPluginObject *)cpy_r_self)->_target;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyUnicode_Compare(cpy_r_fullname, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 == -1;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = PyErr_Occurred();
    cpy_r_r4 = cpy_r_r3 != NULL;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_method_hook", 119, CPyStatic_suggestions___globals);
        goto CPyL7;
    }
CPyL3: ;
    cpy_r_r6 = cpy_r_r1 == 0;
    if (!cpy_r_r6) goto CPyL6;
    cpy_r_r7 = CPyStatics[240]; /* 'log' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_self, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_method_hook", 120, CPyStatic_suggestions___globals);
        goto CPyL7;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = Py_None;
    CPy_INCREF(cpy_r_r9);
    return cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
}

PyObject *CPyPy_suggestions___SuggestionPlugin___get_method_hook(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_method_hook", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionPlugin", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionPlugin___get_method_hook(arg_self, arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "get_method_hook", 118, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionPlugin___log(PyObject *cpy_r_self, PyObject *cpy_r_ctx) {
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
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    size_t __tmp7426;
    cpy_r_r0 = ((mypy___suggestions___SuggestionPluginObject *)cpy_r_self)->_mystery_hits;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[4369]; /* 'api' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_ctx, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "log", 127, CPyStatic_suggestions___globals);
        goto CPyL22;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_checker___TypeChecker))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "log", 127, CPyStatic_suggestions___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r2);
        goto CPyL23;
    }
    __tmp7426 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r3)->vtable, 2);
    cpy_r_r4 = *(PyObject * *)((char *)cpy_r_r3 + __tmp7426);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "log", "CheckerPluginInterface", "path", 127, CPyStatic_suggestions___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r4);
CPyL3: ;
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = CPyStatics[68]; /* 'context' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_ctx, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "log", 128, CPyStatic_suggestions___globals);
        goto CPyL24;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_nodes___Context)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "log", 128, CPyStatic_suggestions___globals, "mypy.nodes.Context", cpy_r_r6);
        goto CPyL25;
    }
    cpy_r_r8 = ((mypy___nodes___ContextObject *)cpy_r_r7)->_line;
    if (unlikely(cpy_r_r8 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/suggestions.py", "log", "Context", "line", 128, CPyStatic_suggestions___globals);
        goto CPyL25;
    }
    CPyTagged_INCREF(cpy_r_r8);
CPyL6: ;
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = CPyStatics[1610]; /* 'arg_kinds' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_ctx, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "log", 129, CPyStatic_suggestions___globals);
        goto CPyL26;
    }
    if (likely(PyList_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "log", 129, CPyStatic_suggestions___globals, "list", cpy_r_r10);
        goto CPyL26;
    }
    cpy_r_r12 = CPyStatics[4374]; /* 'callee_arg_names' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_ctx, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "log", 130, CPyStatic_suggestions___globals);
        goto CPyL27;
    }
    if (likely(PyList_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "log", 130, CPyStatic_suggestions___globals, "list", cpy_r_r13);
        goto CPyL27;
    }
    cpy_r_r15 = CPyStatics[1611]; /* 'arg_names' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_ctx, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "log", 131, CPyStatic_suggestions___globals);
        goto CPyL28;
    }
    if (likely(PyList_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "log", 131, CPyStatic_suggestions___globals, "list", cpy_r_r16);
        goto CPyL28;
    }
    cpy_r_r18 = CPyStatics[1125]; /* 'arg_types' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_ctx, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "log", 132, CPyStatic_suggestions___globals);
        goto CPyL29;
    }
    if (likely(PyList_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "log", 132, CPyStatic_suggestions___globals, "list", cpy_r_r19);
        goto CPyL29;
    }
    cpy_r_r21 = CPyStatic_suggestions___globals;
    cpy_r_r22 = CPyStatics[6067]; /* 'Callsite' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "log", 126, CPyStatic_suggestions___globals);
        goto CPyL30;
    }
    cpy_r_r24 = CPyTagged_StealAsObject(cpy_r_r8);
    PyObject *cpy_r_r25[6] = {cpy_r_r4, cpy_r_r24, cpy_r_r11, cpy_r_r14, cpy_r_r17, cpy_r_r20};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r26, 6, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "log", 126, CPyStatic_suggestions___globals);
        goto CPyL31;
    }
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r20);
    if (likely(PyTuple_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "log", 126, CPyStatic_suggestions___globals, "tuple", cpy_r_r27);
        goto CPyL22;
    }
    cpy_r_r29 = PyList_Append(cpy_r_r0, cpy_r_r28);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/suggestions.py", "log", 125, CPyStatic_suggestions___globals);
        goto CPyL21;
    }
    cpy_r_r31 = CPyStatics[4375]; /* 'default_return_type' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_ctx, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "log", 135, CPyStatic_suggestions___globals);
        goto CPyL21;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r32, CPyType_types___Type)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "log", 135, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r32);
        goto CPyL21;
    }
    return cpy_r_r33;
CPyL21: ;
    cpy_r_r34 = NULL;
    return cpy_r_r34;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL21;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL21;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPyTagged_DecRef(cpy_r_r8);
    goto CPyL21;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPyTagged_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL21;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPyTagged_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    goto CPyL21;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPyTagged_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r17);
    goto CPyL21;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPyTagged_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r20);
    goto CPyL21;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r24);
    goto CPyL21;
}

PyObject *CPyPy_suggestions___SuggestionPlugin___log(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:log", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionPlugin))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionPlugin", obj_self); 
        goto fail;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionPlugin___log(arg_self, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "log", 124, CPyStatic_suggestions___globals);
    return NULL;
}

char CPyDef_suggestions___ReturnFinder_____init__(PyObject *cpy_r_self, PyObject *cpy_r_typemap) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    CPy_INCREF(cpy_r_typemap);
    if (((mypy___suggestions___ReturnFinderObject *)cpy_r_self)->_typemap != NULL) {
        CPy_DECREF(((mypy___suggestions___ReturnFinderObject *)cpy_r_self)->_typemap);
    }
    ((mypy___suggestions___ReturnFinderObject *)cpy_r_self)->_typemap = cpy_r_typemap;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 144, CPyStatic_suggestions___globals);
        goto CPyL4;
    }
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 145, CPyStatic_suggestions___globals);
        goto CPyL4;
    }
    if (((mypy___suggestions___ReturnFinderObject *)cpy_r_self)->_return_types != NULL) {
        CPy_DECREF(((mypy___suggestions___ReturnFinderObject *)cpy_r_self)->_return_types);
    }
    ((mypy___suggestions___ReturnFinderObject *)cpy_r_self)->_return_types = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 145, CPyStatic_suggestions___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_suggestions___ReturnFinder_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typemap", 0};
    PyObject *obj_typemap;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_typemap)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___ReturnFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.ReturnFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_typemap;
    if (likely(PyDict_Check(obj_typemap)))
        arg_typemap = obj_typemap;
    else {
        CPy_TypeError("dict", obj_typemap); 
        goto fail;
    }
    char retval = CPyDef_suggestions___ReturnFinder_____init__(arg_self, arg_typemap);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "__init__", 143, CPyStatic_suggestions___globals);
    return NULL;
}

char CPyDef_suggestions___ReturnFinder___visit_return_stmt(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = ((mypy___nodes___ReturnStmtObject *)cpy_r_o)->_expr;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL11;
    cpy_r_r3 = ((mypy___nodes___ReturnStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_return_stmt", 148, CPyStatic_suggestions___globals, "mypy.nodes.Expression", cpy_r_r3);
        goto CPyL12;
    }
    cpy_r_r5 = ((mypy___suggestions___ReturnFinderObject *)cpy_r_self)->_typemap;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "visit_return_stmt", "ReturnFinder", "typemap", 148, CPyStatic_suggestions___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    cpy_r_r6 = PyDict_Contains(cpy_r_r5, cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_return_stmt", 148, CPyStatic_suggestions___globals);
        goto CPyL12;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL11;
    cpy_r_r9 = ((mypy___suggestions___ReturnFinderObject *)cpy_r_self)->_return_types;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "visit_return_stmt", "ReturnFinder", "return_types", 149, CPyStatic_suggestions___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r9);
CPyL6: ;
    cpy_r_r10 = ((mypy___suggestions___ReturnFinderObject *)cpy_r_self)->_typemap;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "visit_return_stmt", "ReturnFinder", "typemap", 149, CPyStatic_suggestions___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r10);
CPyL7: ;
    cpy_r_r11 = ((mypy___nodes___ReturnStmtObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r11);
    if (likely(cpy_r_r11 != Py_None))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_return_stmt", 149, CPyStatic_suggestions___globals, "mypy.nodes.Expression", cpy_r_r11);
        goto CPyL15;
    }
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r10, cpy_r_r12);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_return_stmt", 149, CPyStatic_suggestions___globals);
        goto CPyL14;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_types___Type)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_return_stmt", 149, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r13);
        goto CPyL14;
    }
    cpy_r_r15 = PyList_Append(cpy_r_r9, cpy_r_r14);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_return_stmt", 149, CPyStatic_suggestions___globals);
        goto CPyL12;
    }
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL13: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    goto CPyL12;
}

PyObject *CPyPy_suggestions___ReturnFinder___visit_return_stmt(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___ReturnFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.ReturnFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ReturnStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_o); 
        goto fail;
    }
    char retval = CPyDef_suggestions___ReturnFinder___visit_return_stmt(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_return_stmt", 147, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___ReturnFinder___visit_return_stmt__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_suggestions___ReturnFinder___visit_return_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_suggestions___ReturnFinder___visit_return_stmt__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___ReturnFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.ReturnFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ReturnStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___ReturnFinder___visit_return_stmt__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_return_stmt__NodeVisitor_glue", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___ReturnFinder___visit_return_stmt__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_suggestions___ReturnFinder___visit_return_stmt(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_suggestions___ReturnFinder___visit_return_stmt__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_return_stmt__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___ReturnFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.ReturnFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___ReturnStmt))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.ReturnStmt", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___ReturnFinder___visit_return_stmt__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_return_stmt__StatementVisitor_glue", -1, CPyStatic_suggestions___globals);
    return NULL;
}

char CPyDef_suggestions___ReturnFinder___visit_func_def(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    return 1;
}

PyObject *CPyPy_suggestions___ReturnFinder___visit_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___ReturnFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.ReturnFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_suggestions___ReturnFinder___visit_func_def(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_func_def", 151, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___ReturnFinder___visit_func_def__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_suggestions___ReturnFinder___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_suggestions___ReturnFinder___visit_func_def__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___ReturnFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.ReturnFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___ReturnFinder___visit_func_def__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_func_def__NodeVisitor_glue", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___ReturnFinder___visit_func_def__StatementVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_suggestions___ReturnFinder___visit_func_def(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_suggestions___ReturnFinder___visit_func_def__StatementVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_func_def__StatementVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___ReturnFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.ReturnFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___FuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___ReturnFinder___visit_func_def__StatementVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_func_def__StatementVisitor_glue", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___get_return_types(PyObject *cpy_r_typemap, PyObject *cpy_r_func) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_finder;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyDef_suggestions___ReturnFinder(cpy_r_typemap);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_return_types", 158, CPyStatic_suggestions___globals);
        goto CPyL4;
    }
    cpy_r_finder = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___FuncDefObject *)cpy_r_func)->_body;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_nodes___Block___accept(cpy_r_r1, cpy_r_finder);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_return_types", 159, CPyStatic_suggestions___globals);
        goto CPyL5;
    } else
        goto CPyL6;
CPyL2: ;
    cpy_r_r3 = ((mypy___suggestions___ReturnFinderObject *)cpy_r_finder)->_return_types;
    if (unlikely(cpy_r_r3 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'return_types' of 'ReturnFinder' undefined");
    } else {
        CPy_INCREF(cpy_r_r3);
    }
    CPy_DECREF(cpy_r_finder);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_return_types", 160, CPyStatic_suggestions___globals);
        goto CPyL4;
    }
CPyL3: ;
    return cpy_r_r3;
CPyL4: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL5: ;
    CPy_DecRef(cpy_r_finder);
    goto CPyL4;
CPyL6: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL2;
}

PyObject *CPyPy_suggestions___get_return_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typemap", "func", 0};
    static CPyArg_Parser parser = {"OO:get_return_types", kwlist, 0};
    PyObject *obj_typemap;
    PyObject *obj_func;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typemap, &obj_func)) {
        return NULL;
    }
    PyObject *arg_typemap;
    if (likely(PyDict_Check(obj_typemap)))
        arg_typemap = obj_typemap;
    else {
        CPy_TypeError("dict", obj_typemap); 
        goto fail;
    }
    PyObject *arg_func;
    if (likely(Py_TYPE(obj_func) == CPyType_nodes___FuncDef))
        arg_func = obj_func;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_func); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___get_return_types(arg_typemap, arg_func);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "get_return_types", 156, CPyStatic_suggestions___globals);
    return NULL;
}

char CPyDef_suggestions___ArgUseFinder_____init__(PyObject *cpy_r_self, PyObject *cpy_r_func, PyObject *cpy_r_typemap) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
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
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    CPy_INCREF(cpy_r_typemap);
    if (((mypy___suggestions___ArgUseFinderObject *)cpy_r_self)->_typemap != NULL) {
        CPy_DECREF(((mypy___suggestions___ArgUseFinderObject *)cpy_r_self)->_typemap);
    }
    ((mypy___suggestions___ArgUseFinderObject *)cpy_r_self)->_typemap = cpy_r_typemap;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 170, CPyStatic_suggestions___globals);
        goto CPyL11;
    }
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 171, CPyStatic_suggestions___globals);
        goto CPyL11;
    }
    cpy_r_r2 = ((mypy___nodes___FuncDefObject *)cpy_r_func)->_arguments;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "__init__", "FuncDef", "arguments", 171, CPyStatic_suggestions___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = 0;
CPyL4: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL13;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_nodes___Argument))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "__init__", 171, CPyStatic_suggestions___globals, "mypy.nodes.Argument", cpy_r_r8);
        goto CPyL14;
    }
    cpy_r_arg = cpy_r_r9;
    cpy_r_r10 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r11 = PyList_New(0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 171, CPyStatic_suggestions___globals);
        goto CPyL15;
    }
    cpy_r_r12 = CPyDict_SetItem(cpy_r_r1, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 171, CPyStatic_suggestions___globals);
        goto CPyL14;
    }
    cpy_r_r14 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r14;
    goto CPyL4;
CPyL9: ;
    if (((mypy___suggestions___ArgUseFinderObject *)cpy_r_self)->_arg_types != NULL) {
        CPy_DECREF(((mypy___suggestions___ArgUseFinderObject *)cpy_r_self)->_arg_types);
    }
    ((mypy___suggestions___ArgUseFinderObject *)cpy_r_self)->_arg_types = cpy_r_r1;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 171, CPyStatic_suggestions___globals);
        goto CPyL11;
    }
    return 1;
CPyL11: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r10);
    goto CPyL11;
}

PyObject *CPyPy_suggestions___ArgUseFinder_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"func", "typemap", 0};
    PyObject *obj_func;
    PyObject *obj_typemap;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_func, &obj_typemap)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___ArgUseFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.ArgUseFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_func;
    if (likely(Py_TYPE(obj_func) == CPyType_nodes___FuncDef))
        arg_func = obj_func;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_func); 
        goto fail;
    }
    PyObject *arg_typemap;
    if (likely(PyDict_Check(obj_typemap)))
        arg_typemap = obj_typemap;
    else {
        CPy_TypeError("dict", obj_typemap); 
        goto fail;
    }
    char retval = CPyDef_suggestions___ArgUseFinder_____init__(arg_self, arg_func, arg_typemap);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "__init__", 169, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "__get__", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_____call__(PyObject *cpy_r___mypyc_self__, CPyTagged cpy_r_n) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "<lambda>", "__mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj", "__mypyc_env__", 186, CPyStatic_suggestions___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL4;
CPyL1: ;
    cpy_r_r1 = NULL;
    cpy_r_r2 = NULL;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_types___AnyType(12, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<lambda>", 186, CPyStatic_suggestions___globals);
        goto CPyL3;
    }
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL4: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"n", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_n;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_n)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    CPyTagged arg_n;
    if (likely(PyLong_Check(obj_n)))
        arg_n = CPyTagged_BorrowFromObject(obj_n);
    else {
        CPy_TypeError("int", obj_n); goto fail;
    }
    PyObject *retval = CPyDef_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj_____call__(arg___mypyc_self__, arg_n);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "<lambda>", 186, CPyStatic_suggestions___globals);
    return NULL;
}

char CPyDef_suggestions___ArgUseFinder___visit_call_expr(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
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
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_formal_to_actual;
    CPyTagged cpy_r_r50;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r51;
    CPyPtr cpy_r_r52;
    int64_t cpy_r_r53;
    CPyTagged cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_args;
    CPyTagged cpy_r_r58;
    CPyPtr cpy_r_r59;
    int64_t cpy_r_r60;
    CPyTagged cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyTagged cpy_r_arg_idx;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyPtr cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
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
    int32_t cpy_r_r98;
    char cpy_r_r99;
    CPyTagged cpy_r_r100;
    CPyTagged cpy_r_r101;
    CPyTagged cpy_r_r102;
    char cpy_r_r103;
    cpy_r_r0 = CPyDef_suggestions___visit_call_expr_ArgUseFinder_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_call_expr", 173, CPyStatic_suggestions___globals);
        goto CPyL63;
    }
    cpy_r_r1 = 0;
    cpy_r_r2 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_args;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL64;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_nodes___Expression)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_call_expr", 174, CPyStatic_suggestions___globals, "mypy.nodes.Expression", cpy_r_r8);
        goto CPyL65;
    }
    cpy_r_e = cpy_r_r9;
    cpy_r_r10 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL6;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL7;
CPyL6: ;
    cpy_r_r15 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    cpy_r_r14 = cpy_r_r18;
CPyL7: ;
    if (!cpy_r_r14) goto CPyL9;
    cpy_r_r19 = cpy_r_r14;
    goto CPyL10;
CPyL9: ;
    cpy_r_r20 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_e)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    cpy_r_r19 = cpy_r_r23;
CPyL10: ;
    if (cpy_r_r19) {
        goto CPyL12;
    } else
        goto CPyL66;
CPyL11: ;
    cpy_r_r24 = cpy_r_r19;
    goto CPyL16;
CPyL12: ;
    if (likely((Py_TYPE(cpy_r_e) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_e) == CPyType_nodes___RefExpr)))
        cpy_r_r25 = cpy_r_e;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_call_expr", 174, CPyStatic_suggestions___globals, "mypy.nodes.RefExpr", cpy_r_e);
        goto CPyL67;
    }
    cpy_r_r26 = ((mypy___nodes___RefExprObject *)cpy_r_r25)->_node;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_e);
    cpy_r_r27 = ((mypy___suggestions___ArgUseFinderObject *)cpy_r_self)->_arg_types;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "visit_call_expr", "ArgUseFinder", "arg_types", 174, CPyStatic_suggestions___globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r27);
CPyL14: ;
    cpy_r_r28 = PyDict_Contains(cpy_r_r27, cpy_r_r26);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_call_expr", 174, CPyStatic_suggestions___globals);
        goto CPyL65;
    }
    cpy_r_r30 = cpy_r_r28;
    cpy_r_r24 = cpy_r_r30;
CPyL16: ;
    if (cpy_r_r24) {
        goto CPyL69;
    } else
        goto CPyL18;
CPyL17: ;
    cpy_r_r1 = 1;
    goto CPyL19;
CPyL18: ;
    cpy_r_r31 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r31;
    goto CPyL2;
CPyL19: ;
    if (cpy_r_r1) {
        goto CPyL21;
    } else
        goto CPyL70;
CPyL20: ;
    return 1;
CPyL21: ;
    cpy_r_r32 = ((mypy___suggestions___ArgUseFinderObject *)cpy_r_self)->_typemap;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "visit_call_expr", "ArgUseFinder", "typemap", 177, CPyStatic_suggestions___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r32);
CPyL22: ;
    cpy_r_r33 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_callee;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = CPyDict_GetWithNone(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_call_expr", 177, CPyStatic_suggestions___globals);
        goto CPyL71;
    }
    if (PyObject_TypeCheck(cpy_r_r34, CPyType_types___Type))
        cpy_r_r35 = cpy_r_r34;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL7427;
    if (cpy_r_r34 == Py_None)
        cpy_r_r35 = cpy_r_r34;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL7427;
    CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_call_expr", 177, CPyStatic_suggestions___globals, "mypy.types.Type or None", cpy_r_r34);
    goto CPyL71;
__LL7427: ;
    cpy_r_r36 = CPyDef_types___get_proper_type(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_call_expr", 177, CPyStatic_suggestions___globals);
        goto CPyL71;
    }
    cpy_r_typ = cpy_r_r36;
    cpy_r_r37 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r38 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r39 = *(PyObject * *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 == cpy_r_r37;
    if (cpy_r_r40) {
        goto CPyL27;
    } else
        goto CPyL72;
CPyL26: ;
    return 1;
CPyL27: ;
    cpy_r_r41 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_arg_kinds;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_arg_names;
    CPy_INCREF(cpy_r_r42);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___CallableType))
        cpy_r_r43 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_call_expr", 184, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_typ);
        goto CPyL73;
    }
    cpy_r_r44 = ((mypy___types___CallableTypeObject *)cpy_r_r43)->_arg_kinds;
    CPy_INCREF(cpy_r_r44);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___CallableType))
        cpy_r_r45 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_call_expr", 185, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_typ);
        goto CPyL74;
    }
    cpy_r_r46 = ((mypy___types___CallableTypeObject *)cpy_r_r45)->_arg_names;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = CPyDef_suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_obj();
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_call_expr", 186, CPyStatic_suggestions___globals);
        goto CPyL75;
    }
    if (((mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject *)cpy_r_r47)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject *)cpy_r_r47)->___mypyc_env__);
    }
    ((mypy___suggestions_____mypyc_lambda__0_visit_call_expr_ArgUseFinder_objObject *)cpy_r_r47)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r48 = 1;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_call_expr", 186, CPyStatic_suggestions___globals);
        goto CPyL76;
    }
    cpy_r_r49 = CPyDef_argmap___map_actuals_to_formals(cpy_r_r41, cpy_r_r42, cpy_r_r44, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_call_expr", 181, CPyStatic_suggestions___globals);
        goto CPyL77;
    }
    cpy_r_formal_to_actual = cpy_r_r49;
    cpy_r_r50 = 0;
    cpy_r_i = 0;
    cpy_r_r51 = 0;
CPyL33: ;
    cpy_r_r52 = (CPyPtr)&((PyVarObject *)cpy_r_formal_to_actual)->ob_size;
    cpy_r_r53 = *(int64_t *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 << 1;
    cpy_r_r55 = (Py_ssize_t)cpy_r_r51 < (Py_ssize_t)cpy_r_r54;
    if (!cpy_r_r55) goto CPyL78;
    cpy_r_r56 = CPyList_GetItemUnsafe(cpy_r_formal_to_actual, cpy_r_r51);
    if (likely(PyList_Check(cpy_r_r56)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_call_expr", 189, CPyStatic_suggestions___globals, "list", cpy_r_r56);
        goto CPyL79;
    }
    cpy_r_args = cpy_r_r57;
    cpy_r_r58 = 0;
CPyL36: ;
    cpy_r_r59 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r60 = *(int64_t *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 << 1;
    cpy_r_r62 = (Py_ssize_t)cpy_r_r58 < (Py_ssize_t)cpy_r_r61;
    if (!cpy_r_r62) goto CPyL80;
    cpy_r_r63 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r58);
    if (likely(PyLong_Check(cpy_r_r63)))
        cpy_r_r64 = CPyTagged_FromObject(cpy_r_r63);
    else {
        CPy_TypeError("int", cpy_r_r63); cpy_r_r64 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_call_expr", 190, CPyStatic_suggestions___globals);
        goto CPyL81;
    }
    cpy_r_arg_idx = cpy_r_r64;
    cpy_r_r65 = ((mypy___nodes___CallExprObject *)cpy_r_o)->_args;
    cpy_r_r66 = CPyList_GetItem(cpy_r_r65, cpy_r_arg_idx);
    CPyTagged_DECREF(cpy_r_arg_idx);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_call_expr", 191, CPyStatic_suggestions___globals);
        goto CPyL81;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r66, CPyType_nodes___Expression)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_call_expr", 191, CPyStatic_suggestions___globals, "mypy.nodes.Expression", cpy_r_r66);
        goto CPyL81;
    }
    cpy_r_arg = cpy_r_r67;
    cpy_r_r68 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r69 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r70 = *(PyObject * *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 == cpy_r_r68;
    if (!cpy_r_r71) goto CPyL42;
    cpy_r_r72 = cpy_r_r71;
    goto CPyL43;
CPyL42: ;
    cpy_r_r73 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r74 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r75 = *(PyObject * *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 == cpy_r_r73;
    cpy_r_r72 = cpy_r_r76;
CPyL43: ;
    if (!cpy_r_r72) goto CPyL45;
    cpy_r_r77 = cpy_r_r72;
    goto CPyL46;
CPyL45: ;
    cpy_r_r78 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r79 = (CPyPtr)&((PyObject *)cpy_r_arg)->ob_type;
    cpy_r_r80 = *(PyObject * *)cpy_r_r79;
    cpy_r_r81 = cpy_r_r80 == cpy_r_r78;
    cpy_r_r77 = cpy_r_r81;
CPyL46: ;
    if (!cpy_r_r77) goto CPyL82;
    if (likely((Py_TYPE(cpy_r_arg) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___RefExpr)))
        cpy_r_r82 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_call_expr", 192, CPyStatic_suggestions___globals, "mypy.nodes.RefExpr", cpy_r_arg);
        goto CPyL83;
    }
    cpy_r_r83 = ((mypy___nodes___RefExprObject *)cpy_r_r82)->_node;
    CPy_INCREF(cpy_r_r83);
    cpy_r_r84 = ((mypy___suggestions___ArgUseFinderObject *)cpy_r_self)->_arg_types;
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "visit_call_expr", "ArgUseFinder", "arg_types", 192, CPyStatic_suggestions___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r84);
CPyL49: ;
    cpy_r_r85 = PyDict_Contains(cpy_r_r84, cpy_r_r83);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_call_expr", 192, CPyStatic_suggestions___globals);
        goto CPyL83;
    }
    cpy_r_r87 = cpy_r_r85;
    if (!cpy_r_r87) goto CPyL82;
    cpy_r_r88 = ((mypy___suggestions___ArgUseFinderObject *)cpy_r_self)->_arg_types;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "visit_call_expr", "ArgUseFinder", "arg_types", 193, CPyStatic_suggestions___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r88);
CPyL52: ;
    if (likely((Py_TYPE(cpy_r_arg) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_arg) == CPyType_nodes___RefExpr)))
        cpy_r_r89 = cpy_r_arg;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_call_expr", 193, CPyStatic_suggestions___globals, "mypy.nodes.RefExpr", cpy_r_arg);
        goto CPyL85;
    }
    cpy_r_r90 = ((mypy___nodes___RefExprObject *)cpy_r_r89)->_node;
    CPy_INCREF(cpy_r_r90);
    if (likely(cpy_r_r90 != Py_None))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_call_expr", 193, CPyStatic_suggestions___globals, "mypy.nodes.SymbolNode", cpy_r_r90);
        goto CPyL85;
    }
    CPy_DECREF(cpy_r_arg);
    cpy_r_r92 = CPyDict_GetItem(cpy_r_r88, cpy_r_r91);
    CPy_DECREF(cpy_r_r88);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_call_expr", 193, CPyStatic_suggestions___globals);
        goto CPyL81;
    }
    if (likely(PyList_Check(cpy_r_r92)))
        cpy_r_r93 = cpy_r_r92;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_call_expr", 193, CPyStatic_suggestions___globals, "list", cpy_r_r92);
        goto CPyL81;
    }
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___CallableType))
        cpy_r_r94 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_call_expr", 193, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_typ);
        goto CPyL86;
    }
    cpy_r_r95 = ((mypy___types___CallableTypeObject *)cpy_r_r94)->_arg_types;
    cpy_r_r96 = CPyList_GetItem(cpy_r_r95, cpy_r_i);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_call_expr", 193, CPyStatic_suggestions___globals);
        goto CPyL86;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r96, CPyType_types___Type)))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_call_expr", 193, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r96);
        goto CPyL86;
    }
    cpy_r_r98 = PyList_Append(cpy_r_r93, cpy_r_r97);
    CPy_DECREF(cpy_r_r93);
    CPy_DECREF(cpy_r_r97);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_call_expr", 193, CPyStatic_suggestions___globals);
        goto CPyL81;
    }
CPyL60: ;
    cpy_r_r100 = cpy_r_r58 + 2;
    cpy_r_r58 = cpy_r_r100;
    goto CPyL36;
CPyL61: ;
    cpy_r_r101 = cpy_r_r50 + 2;
    cpy_r_r50 = cpy_r_r101;
    cpy_r_i = cpy_r_r101;
    cpy_r_r102 = cpy_r_r51 + 2;
    cpy_r_r51 = cpy_r_r102;
    goto CPyL33;
CPyL62: ;
    return 1;
CPyL63: ;
    cpy_r_r103 = 2;
    return cpy_r_r103;
CPyL64: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL19;
CPyL65: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL63;
CPyL66: ;
    CPy_DECREF(cpy_r_e);
    goto CPyL11;
CPyL67: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_e);
    goto CPyL63;
CPyL68: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r26);
    goto CPyL63;
CPyL69: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL17;
CPyL70: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL20;
CPyL71: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL63;
CPyL72: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_typ);
    goto CPyL26;
CPyL73: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    goto CPyL63;
CPyL74: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    goto CPyL63;
CPyL75: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r46);
    goto CPyL63;
CPyL76: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    goto CPyL63;
CPyL77: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL63;
CPyL78: ;
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_formal_to_actual);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL62;
CPyL79: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL63;
CPyL80: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_args);
    goto CPyL61;
CPyL81: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_args);
    goto CPyL63;
CPyL82: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL60;
CPyL83: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg);
    goto CPyL63;
CPyL84: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_r83);
    goto CPyL63;
CPyL85: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_r88);
    goto CPyL63;
CPyL86: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_formal_to_actual);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r93);
    goto CPyL63;
}

PyObject *CPyPy_suggestions___ArgUseFinder___visit_call_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___ArgUseFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.ArgUseFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    char retval = CPyDef_suggestions___ArgUseFinder___visit_call_expr(arg_self, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_call_expr", 173, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___ArgUseFinder___visit_call_expr__NodeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_suggestions___ArgUseFinder___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_suggestions___ArgUseFinder___visit_call_expr__NodeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__NodeVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___ArgUseFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.ArgUseFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___ArgUseFinder___visit_call_expr__NodeVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_call_expr__NodeVisitor_glue", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___ArgUseFinder___visit_call_expr__ExpressionVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_suggestions___ArgUseFinder___visit_call_expr(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == 2) goto CPyL2;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_suggestions___ArgUseFinder___visit_call_expr__ExpressionVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_call_expr__ExpressionVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___ArgUseFinder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.ArgUseFinder", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___CallExpr))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___ArgUseFinder___visit_call_expr__ExpressionVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_call_expr__ExpressionVisitor_glue", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___get_arg_uses(PyObject *cpy_r_typemap, PyObject *cpy_r_func) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_finder;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
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
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = CPyDef_suggestions___ArgUseFinder(cpy_r_func, cpy_r_typemap);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_arg_uses", 208, CPyStatic_suggestions___globals);
        goto CPyL13;
    }
    cpy_r_finder = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___FuncDefObject *)cpy_r_func)->_body;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_nodes___Block___accept(cpy_r_r1, cpy_r_finder);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_arg_uses", 209, CPyStatic_suggestions___globals);
        goto CPyL14;
    } else
        goto CPyL15;
CPyL2: ;
    cpy_r_r3 = ((mypy___nodes___FuncDefObject *)cpy_r_func)->_arguments;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "get_arg_uses", "FuncDef", "arguments", 210, CPyStatic_suggestions___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r3);
CPyL3: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = PyList_New(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_arg_uses", 210, CPyStatic_suggestions___globals);
        goto CPyL16;
    }
    cpy_r_r7 = 0;
CPyL5: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL17;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r7);
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_nodes___Argument))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_arg_uses", 210, CPyStatic_suggestions___globals, "mypy.nodes.Argument", cpy_r_r12);
        goto CPyL18;
    }
    cpy_r_arg = cpy_r_r13;
    cpy_r_r14 = ((mypy___suggestions___ArgUseFinderObject *)cpy_r_finder)->_arg_types;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "get_arg_uses", "ArgUseFinder", "arg_types", 210, CPyStatic_suggestions___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r14);
CPyL8: ;
    cpy_r_r15 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_arg_uses", 210, CPyStatic_suggestions___globals);
        goto CPyL18;
    }
    if (likely(PyList_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_arg_uses", 210, CPyStatic_suggestions___globals, "list", cpy_r_r16);
        goto CPyL18;
    }
    cpy_r_r18 = CPyList_SetItemUnsafe(cpy_r_r6, cpy_r_r7, cpy_r_r17);
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_arg_uses", 210, CPyStatic_suggestions___globals);
        goto CPyL18;
    }
    cpy_r_r19 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r19;
    goto CPyL5;
CPyL12: ;
    return cpy_r_r6;
CPyL13: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL14: ;
    CPy_DecRef(cpy_r_finder);
    goto CPyL13;
CPyL15: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL2;
CPyL16: ;
    CPy_DecRef(cpy_r_finder);
    CPy_DecRef(cpy_r_r3);
    goto CPyL13;
CPyL17: ;
    CPy_DECREF(cpy_r_finder);
    CPy_DECREF(cpy_r_r3);
    goto CPyL12;
CPyL18: ;
    CPy_DecRef(cpy_r_finder);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL13;
CPyL19: ;
    CPy_DecRef(cpy_r_finder);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_arg);
    goto CPyL13;
}

PyObject *CPyPy_suggestions___get_arg_uses(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typemap", "func", 0};
    static CPyArg_Parser parser = {"OO:get_arg_uses", kwlist, 0};
    PyObject *obj_typemap;
    PyObject *obj_func;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typemap, &obj_func)) {
        return NULL;
    }
    PyObject *arg_typemap;
    if (likely(PyDict_Check(obj_typemap)))
        arg_typemap = obj_typemap;
    else {
        CPy_TypeError("dict", obj_typemap); 
        goto fail;
    }
    PyObject *arg_func;
    if (likely(Py_TYPE(obj_func) == CPyType_nodes___FuncDef))
        arg_func = obj_func;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_func); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___get_arg_uses(arg_typemap, arg_func);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "get_arg_uses", 196, CPyStatic_suggestions___globals);
    return NULL;
}

char CPyDef_suggestions___is_explicit_any(PyObject *cpy_r_typ) {
    CPyTagged cpy_r_r0;
    int64_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = ((mypy___types___AnyTypeObject *)cpy_r_typ)->_type_of_any;
    cpy_r_r1 = cpy_r_r0 & 1;
    cpy_r_r2 = cpy_r_r1 == 0;
    if (!cpy_r_r2) goto CPyL2;
    cpy_r_r3 = cpy_r_r0 == 4;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = CPyTagged_IsEq_(cpy_r_r0, 4);
    cpy_r_r4 = cpy_r_r5;
CPyL3: ;
    return cpy_r_r4;
}

PyObject *CPyPy_suggestions___is_explicit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:is_explicit_any", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___AnyType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_suggestions___is_explicit_any(arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "is_explicit_any", 217, CPyStatic_suggestions___globals);
    return NULL;
}

char CPyDef_suggestions___is_implicit_any(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "is_implicit_any", 228, CPyStatic_suggestions___globals);
        goto CPyL8;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "is_implicit_any", 228, CPyStatic_suggestions___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL8;
    }
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL4;
    } else
        goto CPyL9;
CPyL3: ;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL7;
CPyL4: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___AnyType))
        cpy_r_r7 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "is_implicit_any", 229, CPyStatic_suggestions___globals, "mypy.types.AnyType", cpy_r_typ);
        goto CPyL8;
    }
    cpy_r_r8 = CPyDef_suggestions___is_explicit_any(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "is_implicit_any", 229, CPyStatic_suggestions___globals);
        goto CPyL8;
    }
    cpy_r_r9 = cpy_r_r8 ^ 1;
    cpy_r_r6 = cpy_r_r9;
CPyL7: ;
    return cpy_r_r6;
CPyL8: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL9: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL3;
}

PyObject *CPyPy_suggestions___is_implicit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:is_implicit_any", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_suggestions___is_implicit_any(arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "is_implicit_any", 227, CPyStatic_suggestions___globals);
    return NULL;
}

char CPyDef_suggestions___SuggestionEngine_____init__(PyObject *cpy_r_self, PyObject *cpy_r_fgmanager, char cpy_r_json, char cpy_r_no_errors, char cpy_r_no_any, PyObject *cpy_r_flex_any, PyObject *cpy_r_use_fixme, PyObject *cpy_r_max_guesses) {
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
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    if (cpy_r_no_errors != 2) goto CPyL2;
    cpy_r_no_errors = 0;
CPyL2: ;
    if (cpy_r_no_any != 2) goto CPyL4;
    cpy_r_no_any = 0;
CPyL4: ;
    if (cpy_r_flex_any != NULL) goto CPyL21;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_flex_any = cpy_r_r0;
CPyL6: ;
    if (cpy_r_use_fixme != NULL) goto CPyL22;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_use_fixme = cpy_r_r1;
CPyL8: ;
    if (cpy_r_max_guesses != NULL) goto CPyL23;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_max_guesses = cpy_r_r2;
CPyL10: ;
    CPy_INCREF(cpy_r_fgmanager);
    ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_fgmanager = cpy_r_fgmanager;
    cpy_r_r3 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_fgmanager)->_manager;
    CPy_INCREF(cpy_r_r3);
    ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_manager = cpy_r_r3;
    cpy_r_r4 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_manager;
    cpy_r_r5 = ((mypy___build___BuildManagerObject *)cpy_r_r4)->_plugin;
    CPy_INCREF(cpy_r_r5);
    ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_plugin = cpy_r_r5;
    cpy_r_r6 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_fgmanager)->_graph;
    CPy_INCREF(cpy_r_r6);
    ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_graph = cpy_r_r6;
    cpy_r_r7 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_manager;
    cpy_r_r8 = ((mypy___build___BuildManagerObject *)cpy_r_r7)->_fscache;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_manager;
    cpy_r_r10 = ((mypy___build___BuildManagerObject *)cpy_r_r9)->_options;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDef_find_sources___SourceFinder(cpy_r_r8, cpy_r_r10);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 250, CPyStatic_suggestions___globals);
        goto CPyL24;
    }
    ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_finder = cpy_r_r11;
    ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_give_json = cpy_r_json;
    ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_no_errors = cpy_r_no_errors;
    ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_flex_any = cpy_r_flex_any;
    if (!cpy_r_no_any) goto CPyL13;
    cpy_r_r12 = PyFloat_FromDouble(1.0);
    CPy_DECREF(((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_flex_any);
    ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_flex_any = cpy_r_r12;
CPyL13: ;
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_max_guesses != cpy_r_r14;
    if (!cpy_r_r15) goto CPyL25;
    if (likely(PyLong_Check(cpy_r_max_guesses)))
        cpy_r_r16 = CPyTagged_FromObject(cpy_r_max_guesses);
    else {
        CPy_TypeError("int", cpy_r_max_guesses); cpy_r_r16 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 244, CPyStatic_suggestions___globals);
        goto CPyL26;
    }
    cpy_r_r17 = cpy_r_r16 != 0;
    CPyTagged_DECREF(cpy_r_r16);
    if (!cpy_r_r17) goto CPyL25;
    if (likely(PyLong_Check(cpy_r_max_guesses)))
        cpy_r_r18 = CPyTagged_FromObject(cpy_r_max_guesses);
    else {
        CPy_TypeError("int", cpy_r_max_guesses); cpy_r_r18 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_max_guesses);
    if (unlikely(cpy_r_r18 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 258, CPyStatic_suggestions___globals);
        goto CPyL27;
    }
    cpy_r_r19 = cpy_r_r18;
    goto CPyL19;
CPyL18: ;
    cpy_r_r19 = 128;
CPyL19: ;
    ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_max_guesses = cpy_r_r19;
    ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_use_fixme = cpy_r_use_fixme;
    return 1;
CPyL20: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL21: ;
    CPy_INCREF(cpy_r_flex_any);
    goto CPyL6;
CPyL22: ;
    CPy_INCREF(cpy_r_use_fixme);
    goto CPyL8;
CPyL23: ;
    CPy_INCREF(cpy_r_max_guesses);
    goto CPyL10;
CPyL24: ;
    CPy_DecRef(cpy_r_flex_any);
    CPy_DecRef(cpy_r_use_fixme);
    CPy_DecRef(cpy_r_max_guesses);
    goto CPyL20;
CPyL25: ;
    CPy_DECREF(cpy_r_max_guesses);
    goto CPyL18;
CPyL26: ;
    CPy_DecRef(cpy_r_use_fixme);
    CPy_DecRef(cpy_r_max_guesses);
    goto CPyL20;
CPyL27: ;
    CPy_DecRef(cpy_r_use_fixme);
    goto CPyL20;
}

PyObject *CPyPy_suggestions___SuggestionEngine_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fgmanager", "no_errors", "no_any", "flex_any", "use_fixme", "max_guesses", "json", 0};
    PyObject *obj_fgmanager;
    PyObject *obj_json;
    PyObject *obj_no_errors = NULL;
    PyObject *obj_no_any = NULL;
    PyObject *obj_flex_any = NULL;
    PyObject *obj_use_fixme = NULL;
    PyObject *obj_max_guesses = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|$OOOOO@O", "__init__", kwlist, &obj_fgmanager, &obj_no_errors, &obj_no_any, &obj_flex_any, &obj_use_fixme, &obj_max_guesses, &obj_json)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_fgmanager;
    if (likely(Py_TYPE(obj_fgmanager) == CPyType_update___FineGrainedBuildManager))
        arg_fgmanager = obj_fgmanager;
    else {
        CPy_TypeError("mypy.server.update.FineGrainedBuildManager", obj_fgmanager); 
        goto fail;
    }
    char arg_json;
    if (unlikely(!PyBool_Check(obj_json))) {
        CPy_TypeError("bool", obj_json); goto fail;
    } else
        arg_json = obj_json == Py_True;
    char arg_no_errors;
    if (obj_no_errors == NULL) {
        arg_no_errors = 2;
    } else if (unlikely(!PyBool_Check(obj_no_errors))) {
        CPy_TypeError("bool", obj_no_errors); goto fail;
    } else
        arg_no_errors = obj_no_errors == Py_True;
    char arg_no_any;
    if (obj_no_any == NULL) {
        arg_no_any = 2;
    } else if (unlikely(!PyBool_Check(obj_no_any))) {
        CPy_TypeError("bool", obj_no_any); goto fail;
    } else
        arg_no_any = obj_no_any == Py_True;
    PyObject *arg_flex_any;
    if (obj_flex_any == NULL) {
        arg_flex_any = NULL;
        goto __LL7428;
    }
    if (CPyFloat_Check(obj_flex_any))
        arg_flex_any = obj_flex_any;
    else {
        arg_flex_any = NULL;
    }
    if (arg_flex_any != NULL) goto __LL7428;
    if (obj_flex_any == Py_None)
        arg_flex_any = obj_flex_any;
    else {
        arg_flex_any = NULL;
    }
    if (arg_flex_any != NULL) goto __LL7428;
    CPy_TypeError("float or None", obj_flex_any); 
    goto fail;
__LL7428: ;
    PyObject *arg_use_fixme;
    if (obj_use_fixme == NULL) {
        arg_use_fixme = NULL;
        goto __LL7429;
    }
    if (PyUnicode_Check(obj_use_fixme))
        arg_use_fixme = obj_use_fixme;
    else {
        arg_use_fixme = NULL;
    }
    if (arg_use_fixme != NULL) goto __LL7429;
    if (obj_use_fixme == Py_None)
        arg_use_fixme = obj_use_fixme;
    else {
        arg_use_fixme = NULL;
    }
    if (arg_use_fixme != NULL) goto __LL7429;
    CPy_TypeError("str or None", obj_use_fixme); 
    goto fail;
__LL7429: ;
    PyObject *arg_max_guesses;
    if (obj_max_guesses == NULL) {
        arg_max_guesses = NULL;
        goto __LL7430;
    }
    if (PyLong_Check(obj_max_guesses))
        arg_max_guesses = obj_max_guesses;
    else {
        arg_max_guesses = NULL;
    }
    if (arg_max_guesses != NULL) goto __LL7430;
    if (obj_max_guesses == Py_None)
        arg_max_guesses = obj_max_guesses;
    else {
        arg_max_guesses = NULL;
    }
    if (arg_max_guesses != NULL) goto __LL7430;
    CPy_TypeError("int or None", obj_max_guesses); 
    goto fail;
__LL7430: ;
    char retval = CPyDef_suggestions___SuggestionEngine_____init__(arg_self, arg_fgmanager, arg_json, arg_no_errors, arg_no_any, arg_flex_any, arg_use_fixme, arg_max_guesses);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "__init__", 235, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___suggest(PyObject *cpy_r_self, PyObject *cpy_r_function) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_suggestion;
    tuple_T3OOO cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_mod;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_func_name;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    tuple_T3OOO cpy_r_r32;
    tuple_T3OOO cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    tuple_T3OOO cpy_r_r44;
    tuple_T3OOO cpy_r_r45;
    tuple_T3OOO cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    tuple_T3OOO cpy_r_r52;
    tuple_T3OOO cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject **cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    tuple_T3OOO cpy_r_r64;
    tuple_T3OOO cpy_r_r65;
    tuple_T3OOO cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject **cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    cpy_r_r0 = NULL;
    cpy_r_suggestion = cpy_r_r0;
    cpy_r_r1 = CPyDef_suggestions___SuggestionEngine___find_node(cpy_r_self, cpy_r_function);
    if (unlikely(cpy_r_r1.f0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 263, CPyStatic_suggestions___globals);
        goto CPyL65;
    }
    cpy_r_r2 = cpy_r_r1.f0;
    CPy_INCREF(cpy_r_r2);
    cpy_r_mod = cpy_r_r2;
    cpy_r_r3 = cpy_r_r1.f1;
    CPy_INCREF(cpy_r_r3);
    cpy_r_func_name = cpy_r_r3;
    cpy_r_r4 = cpy_r_r1.f2;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r1.f0);
    CPy_DECREF(cpy_r_r1.f1);
    CPy_DECREF(cpy_r_r1.f2);
    cpy_r_node = cpy_r_r4;
    cpy_r_r5 = CPyStatics[6068]; /* 'restore_after' */
    PyObject *cpy_r_r6[2] = {cpy_r_self, cpy_r_mod};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 265, CPyStatic_suggestions___globals);
        goto CPyL66;
    }
    cpy_r_r9 = PyObject_Type(cpy_r_r8);
    cpy_r_r10 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 265, CPyStatic_suggestions___globals);
        goto CPyL67;
    }
    cpy_r_r12 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r12);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 265, CPyStatic_suggestions___globals);
        goto CPyL68;
    }
    PyObject *cpy_r_r14[1] = {cpy_r_r8};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 265, CPyStatic_suggestions___globals);
        goto CPyL68;
    } else
        goto CPyL69;
CPyL5: ;
    cpy_r_r17 = 1;
    cpy_r_r18 = CPyStatics[6069]; /* 'with_export_types' */
    PyObject *cpy_r_r19[1] = {cpy_r_self};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_VectorcallMethod(cpy_r_r18, cpy_r_r20, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 266, CPyStatic_suggestions___globals);
        goto CPyL33;
    }
    cpy_r_r22 = PyObject_Type(cpy_r_r21);
    cpy_r_r23 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 266, CPyStatic_suggestions___globals);
        goto CPyL70;
    }
    cpy_r_r25 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r25);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 266, CPyStatic_suggestions___globals);
        goto CPyL71;
    }
    PyObject *cpy_r_r27[1] = {cpy_r_r21};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 1, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 266, CPyStatic_suggestions___globals);
        goto CPyL71;
    } else
        goto CPyL72;
CPyL10: ;
    cpy_r_r30 = 1;
    cpy_r_r31 = CPyDef_suggestions___SuggestionEngine___get_suggestion(cpy_r_self, cpy_r_mod, cpy_r_node);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 267, CPyStatic_suggestions___globals);
        goto CPyL13;
    } else
        goto CPyL73;
CPyL12: ;
    cpy_r_suggestion = cpy_r_r31;
    goto CPyL21;
CPyL13: ;
    cpy_r_r32 = CPy_CatchError();
    cpy_r_r30 = 0;
    cpy_r_r33 = CPy_GetExcInfo();
    cpy_r_r34 = cpy_r_r33.f0;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = cpy_r_r33.f1;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = cpy_r_r33.f2;
    CPy_INCREF(cpy_r_r36);
    CPy_DecRef(cpy_r_r33.f0);
    CPy_DecRef(cpy_r_r33.f1);
    CPy_DecRef(cpy_r_r33.f2);
    PyObject *cpy_r_r37[4] = {cpy_r_r21, cpy_r_r34, cpy_r_r35, cpy_r_r36};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r38, 4, 0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 266, CPyStatic_suggestions___globals);
        goto CPyL74;
    }
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r36);
    cpy_r_r40 = PyObject_IsTrue(cpy_r_r39);
    CPy_DecRef(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 266, CPyStatic_suggestions___globals);
        goto CPyL19;
    }
    cpy_r_r42 = cpy_r_r40;
    if (cpy_r_r42) goto CPyL18;
    CPy_Reraise();
    if (!0) {
        goto CPyL19;
    } else
        goto CPyL75;
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    CPy_RestoreExcInfo(cpy_r_r32);
    CPy_DecRef(cpy_r_r32.f0);
    CPy_DecRef(cpy_r_r32.f1);
    CPy_DecRef(cpy_r_r32.f2);
    goto CPyL21;
CPyL19: ;
    CPy_RestoreExcInfo(cpy_r_r32);
    CPy_DecRef(cpy_r_r32.f0);
    CPy_DecRef(cpy_r_r32.f1);
    CPy_DecRef(cpy_r_r32.f2);
    cpy_r_r43 = CPy_KeepPropagating();
    if (!cpy_r_r43) {
        goto CPyL22;
    } else
        goto CPyL76;
CPyL20: ;
    CPy_Unreachable();
CPyL21: ;
    tuple_T3OOO __tmp7431 = { NULL, NULL, NULL };
    cpy_r_r44 = __tmp7431;
    cpy_r_r45 = cpy_r_r44;
    goto CPyL23;
CPyL22: ;
    cpy_r_r46 = CPy_CatchError();
    cpy_r_r45 = cpy_r_r46;
CPyL23: ;
    if (!cpy_r_r30) goto CPyL77;
    cpy_r_r47 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r48[4] = {cpy_r_r21, cpy_r_r47, cpy_r_r47, cpy_r_r47};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r49, 4, 0);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 266, CPyStatic_suggestions___globals);
        goto CPyL78;
    } else
        goto CPyL79;
CPyL25: ;
    CPy_DECREF(cpy_r_r21);
CPyL26: ;
    if (cpy_r_r45.f0 == NULL) goto CPyL41;
    CPy_Reraise();
    if (!0) {
        goto CPyL29;
    } else
        goto CPyL80;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    if (cpy_r_r45.f0 == NULL) goto CPyL31;
    CPy_RestoreExcInfo(cpy_r_r45);
    CPy_XDECREF(cpy_r_r45.f0);
    CPy_XDECREF(cpy_r_r45.f1);
    CPy_XDECREF(cpy_r_r45.f2);
CPyL31: ;
    cpy_r_r51 = CPy_KeepPropagating();
    if (!cpy_r_r51) {
        goto CPyL33;
    } else
        goto CPyL81;
CPyL32: ;
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r52 = CPy_CatchError();
    cpy_r_r17 = 0;
    cpy_r_r53 = CPy_GetExcInfo();
    cpy_r_r54 = cpy_r_r53.f0;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = cpy_r_r53.f1;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = cpy_r_r53.f2;
    CPy_INCREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r53.f0);
    CPy_DECREF(cpy_r_r53.f1);
    CPy_DECREF(cpy_r_r53.f2);
    PyObject *cpy_r_r57[4] = {cpy_r_r8, cpy_r_r54, cpy_r_r55, cpy_r_r56};
    cpy_r_r58 = (PyObject **)&cpy_r_r57;
    cpy_r_r59 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r58, 4, 0);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 265, CPyStatic_suggestions___globals);
        goto CPyL82;
    }
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r60 = PyObject_IsTrue(cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 265, CPyStatic_suggestions___globals);
        goto CPyL39;
    }
    cpy_r_r62 = cpy_r_r60;
    if (cpy_r_r62) goto CPyL38;
    CPy_Reraise();
    if (!0) {
        goto CPyL39;
    } else
        goto CPyL83;
CPyL37: ;
    CPy_Unreachable();
CPyL38: ;
    CPy_RestoreExcInfo(cpy_r_r52);
    CPy_DECREF(cpy_r_r52.f0);
    CPy_DECREF(cpy_r_r52.f1);
    CPy_DECREF(cpy_r_r52.f2);
    goto CPyL41;
CPyL39: ;
    CPy_RestoreExcInfo(cpy_r_r52);
    CPy_DECREF(cpy_r_r52.f0);
    CPy_DECREF(cpy_r_r52.f1);
    CPy_DECREF(cpy_r_r52.f2);
    cpy_r_r63 = CPy_KeepPropagating();
    if (!cpy_r_r63) {
        goto CPyL42;
    } else
        goto CPyL84;
CPyL40: ;
    CPy_Unreachable();
CPyL41: ;
    tuple_T3OOO __tmp7432 = { NULL, NULL, NULL };
    cpy_r_r64 = __tmp7432;
    cpy_r_r65 = cpy_r_r64;
    goto CPyL43;
CPyL42: ;
    cpy_r_r66 = CPy_CatchError();
    cpy_r_r65 = cpy_r_r66;
CPyL43: ;
    if (!cpy_r_r17) goto CPyL85;
    cpy_r_r67 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r68[4] = {cpy_r_r8, cpy_r_r67, cpy_r_r67, cpy_r_r67};
    cpy_r_r69 = (PyObject **)&cpy_r_r68;
    cpy_r_r70 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r69, 4, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 265, CPyStatic_suggestions___globals);
        goto CPyL86;
    } else
        goto CPyL87;
CPyL45: ;
    CPy_DECREF(cpy_r_r8);
CPyL46: ;
    if (cpy_r_r65.f0 == NULL) {
        goto CPyL53;
    } else
        goto CPyL88;
CPyL47: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL49;
    } else
        goto CPyL89;
CPyL48: ;
    CPy_Unreachable();
CPyL49: ;
    if (cpy_r_r65.f0 == NULL) goto CPyL51;
    CPy_RestoreExcInfo(cpy_r_r65);
    CPy_XDECREF(cpy_r_r65.f0);
    CPy_XDECREF(cpy_r_r65.f1);
    CPy_XDECREF(cpy_r_r65.f2);
CPyL51: ;
    cpy_r_r71 = CPy_KeepPropagating();
    if (!cpy_r_r71) goto CPyL64;
    CPy_Unreachable();
CPyL53: ;
    cpy_r_r72 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_give_json;
    if (!cpy_r_r72) goto CPyL90;
CPyL54: ;
    if (cpy_r_suggestion == NULL) {
        goto CPyL91;
    } else
        goto CPyL57;
CPyL55: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"suggestion\" referenced before assignment");
    cpy_r_r73 = 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 270, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL57: ;
    cpy_r_r74 = CPyDef_suggestions___SuggestionEngine___json_suggestion(cpy_r_self, cpy_r_mod, cpy_r_func_name, cpy_r_node, cpy_r_suggestion);
    CPy_DECREF(cpy_r_mod);
    CPy_DECREF(cpy_r_func_name);
    CPy_DECREF(cpy_r_node);
    CPy_XDECREF(cpy_r_suggestion);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 270, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    return cpy_r_r74;
CPyL59: ;
    if (cpy_r_suggestion != NULL) goto CPyL62;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"suggestion\" referenced before assignment");
    cpy_r_r75 = 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 272, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r76 = CPyDef_suggestions___SuggestionEngine___format_signature(cpy_r_self, cpy_r_suggestion);
    CPy_XDECREF(cpy_r_suggestion);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest", 272, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    return cpy_r_r76;
CPyL64: ;
    cpy_r_r77 = NULL;
    return cpy_r_r77;
CPyL65: ;
    CPy_XDecRef(cpy_r_suggestion);
    goto CPyL64;
CPyL66: ;
    CPy_XDecRef(cpy_r_suggestion);
    CPy_DecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_func_name);
    CPy_DecRef(cpy_r_node);
    goto CPyL64;
CPyL67: ;
    CPy_XDecRef(cpy_r_suggestion);
    CPy_DecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_func_name);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL64;
CPyL68: ;
    CPy_XDecRef(cpy_r_suggestion);
    CPy_DecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_func_name);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL64;
CPyL69: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL5;
CPyL70: ;
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    goto CPyL33;
CPyL71: ;
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    goto CPyL33;
CPyL72: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL10;
CPyL73: ;
    CPy_XDECREF(cpy_r_suggestion);
    goto CPyL12;
CPyL74: ;
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r36);
    goto CPyL19;
CPyL75: ;
    CPy_XDecRef(cpy_r_suggestion);
    CPy_DecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_func_name);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r32.f0);
    CPy_DecRef(cpy_r_r32.f1);
    CPy_DecRef(cpy_r_r32.f2);
    goto CPyL17;
CPyL76: ;
    CPy_XDecRef(cpy_r_suggestion);
    CPy_DecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_func_name);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    goto CPyL20;
CPyL77: ;
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r24);
    goto CPyL26;
CPyL78: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL29;
CPyL79: ;
    CPy_DECREF(cpy_r_r50);
    goto CPyL25;
CPyL80: ;
    CPy_XDECREF(cpy_r_suggestion);
    CPy_DECREF(cpy_r_mod);
    CPy_DECREF(cpy_r_func_name);
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    CPy_XDECREF(cpy_r_r45.f0);
    CPy_XDECREF(cpy_r_r45.f1);
    CPy_XDECREF(cpy_r_r45.f2);
    goto CPyL28;
CPyL81: ;
    CPy_XDECREF(cpy_r_suggestion);
    CPy_DECREF(cpy_r_mod);
    CPy_DECREF(cpy_r_func_name);
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    goto CPyL32;
CPyL82: ;
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r56);
    goto CPyL39;
CPyL83: ;
    CPy_XDECREF(cpy_r_suggestion);
    CPy_DECREF(cpy_r_mod);
    CPy_DECREF(cpy_r_func_name);
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r52.f0);
    CPy_DECREF(cpy_r_r52.f1);
    CPy_DECREF(cpy_r_r52.f2);
    goto CPyL37;
CPyL84: ;
    CPy_XDECREF(cpy_r_suggestion);
    CPy_DECREF(cpy_r_mod);
    CPy_DECREF(cpy_r_func_name);
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    goto CPyL40;
CPyL85: ;
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    goto CPyL46;
CPyL86: ;
    CPy_XDecRef(cpy_r_suggestion);
    CPy_DecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_func_name);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r8);
    goto CPyL49;
CPyL87: ;
    CPy_DECREF(cpy_r_r70);
    goto CPyL45;
CPyL88: ;
    CPy_XDECREF(cpy_r_suggestion);
    CPy_DECREF(cpy_r_mod);
    CPy_DECREF(cpy_r_func_name);
    CPy_DECREF(cpy_r_node);
    goto CPyL47;
CPyL89: ;
    CPy_XDECREF(cpy_r_r65.f0);
    CPy_XDECREF(cpy_r_r65.f1);
    CPy_XDECREF(cpy_r_r65.f2);
    goto CPyL48;
CPyL90: ;
    CPy_DECREF(cpy_r_mod);
    CPy_DECREF(cpy_r_func_name);
    CPy_DECREF(cpy_r_node);
    goto CPyL59;
CPyL91: ;
    CPy_DECREF(cpy_r_mod);
    CPy_DECREF(cpy_r_func_name);
    CPy_DECREF(cpy_r_node);
    goto CPyL55;
}

PyObject *CPyPy_suggestions___SuggestionEngine___suggest(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"function", 0};
    static CPyArg_Parser parser = {"O:suggest", kwlist, 0};
    PyObject *obj_function;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_function)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_function;
    if (likely(PyUnicode_Check(obj_function)))
        arg_function = obj_function;
    else {
        CPy_TypeError("str", obj_function); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___suggest(arg_self, arg_function);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "suggest", 261, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___suggest_callsites(PyObject *cpy_r_self, PyObject *cpy_r_function) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_callsites;
    tuple_T3OOO cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_mod;
    PyObject *cpy_r_r3;
    PyObject *cpy_r__;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    tuple_T2OO cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    tuple_T3OOO cpy_r_r21;
    tuple_T3OOO cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    tuple_T3OOO cpy_r_r33;
    tuple_T3OOO cpy_r_r34;
    tuple_T3OOO cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    CPyPtr cpy_r_r43;
    int64_t cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    CPyPtr cpy_r_r49;
    int64_t cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyTagged cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_path;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_arg_kinds;
    PyObject *cpy_r___2;
    PyObject *cpy_r_arg_names;
    PyObject *cpy_r_arg_types;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    CPyTagged cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    cpy_r_r0 = NULL;
    cpy_r_callsites = cpy_r_r0;
    cpy_r_r1 = CPyDef_suggestions___SuggestionEngine___find_node(cpy_r_self, cpy_r_function);
    if (unlikely(cpy_r_r1.f0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 276, CPyStatic_suggestions___globals);
        goto CPyL68;
    }
    cpy_r_r2 = cpy_r_r1.f0;
    CPy_INCREF(cpy_r_r2);
    cpy_r_mod = cpy_r_r2;
    cpy_r_r3 = cpy_r_r1.f1;
    CPy_INCREF(cpy_r_r3);
    cpy_r__ = cpy_r_r3;
    CPy_DECREF(cpy_r__);
    cpy_r_r4 = cpy_r_r1.f2;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r1.f0);
    CPy_DECREF(cpy_r_r1.f1);
    CPy_DECREF(cpy_r_r1.f2);
    cpy_r_node = cpy_r_r4;
    cpy_r_r5 = CPyStatics[6068]; /* 'restore_after' */
    PyObject *cpy_r_r6[2] = {cpy_r_self, cpy_r_mod};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 277, CPyStatic_suggestions___globals);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_mod);
    cpy_r_r9 = PyObject_Type(cpy_r_r8);
    cpy_r_r10 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 277, CPyStatic_suggestions___globals);
        goto CPyL70;
    }
    cpy_r_r12 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r12);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 277, CPyStatic_suggestions___globals);
        goto CPyL71;
    }
    PyObject *cpy_r_r14[1] = {cpy_r_r8};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 277, CPyStatic_suggestions___globals);
        goto CPyL71;
    } else
        goto CPyL72;
CPyL5: ;
    cpy_r_r17 = 1;
    cpy_r_r18 = CPyDef_suggestions___SuggestionEngine___get_callsites(cpy_r_self, cpy_r_node);
    CPy_DECREF(cpy_r_node);
    if (unlikely(cpy_r_r18.f0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 278, CPyStatic_suggestions___globals);
        goto CPyL8;
    } else
        goto CPyL73;
CPyL7: ;
    cpy_r_r19 = cpy_r_r18.f0;
    CPy_INCREF(cpy_r_r19);
    cpy_r_callsites = cpy_r_r19;
    cpy_r_r20 = cpy_r_r18.f1;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r18.f0);
    CPy_DECREF(cpy_r_r18.f1);
    cpy_r__ = cpy_r_r20;
    CPy_DECREF(cpy_r__);
    goto CPyL16;
CPyL8: ;
    cpy_r_r21 = CPy_CatchError();
    cpy_r_r17 = 0;
    cpy_r_r22 = CPy_GetExcInfo();
    cpy_r_r23 = cpy_r_r22.f0;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = cpy_r_r22.f1;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = cpy_r_r22.f2;
    CPy_INCREF(cpy_r_r25);
    CPy_DecRef(cpy_r_r22.f0);
    CPy_DecRef(cpy_r_r22.f1);
    CPy_DecRef(cpy_r_r22.f2);
    PyObject *cpy_r_r26[4] = {cpy_r_r8, cpy_r_r23, cpy_r_r24, cpy_r_r25};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r27, 4, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 277, CPyStatic_suggestions___globals);
        goto CPyL74;
    }
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    cpy_r_r29 = PyObject_IsTrue(cpy_r_r28);
    CPy_DecRef(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 277, CPyStatic_suggestions___globals);
        goto CPyL14;
    }
    cpy_r_r31 = cpy_r_r29;
    if (cpy_r_r31) goto CPyL13;
    CPy_Reraise();
    if (!0) {
        goto CPyL14;
    } else
        goto CPyL75;
CPyL12: ;
    CPy_Unreachable();
CPyL13: ;
    CPy_RestoreExcInfo(cpy_r_r21);
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    CPy_DecRef(cpy_r_r21.f2);
    goto CPyL16;
CPyL14: ;
    CPy_RestoreExcInfo(cpy_r_r21);
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    CPy_DecRef(cpy_r_r21.f2);
    cpy_r_r32 = CPy_KeepPropagating();
    if (!cpy_r_r32) {
        goto CPyL17;
    } else
        goto CPyL76;
CPyL15: ;
    CPy_Unreachable();
CPyL16: ;
    tuple_T3OOO __tmp7433 = { NULL, NULL, NULL };
    cpy_r_r33 = __tmp7433;
    cpy_r_r34 = cpy_r_r33;
    goto CPyL18;
CPyL17: ;
    cpy_r_r35 = CPy_CatchError();
    cpy_r_r34 = cpy_r_r35;
CPyL18: ;
    if (!cpy_r_r17) goto CPyL77;
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r37[4] = {cpy_r_r8, cpy_r_r36, cpy_r_r36, cpy_r_r36};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r38, 4, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 277, CPyStatic_suggestions___globals);
        goto CPyL78;
    } else
        goto CPyL79;
CPyL20: ;
    CPy_DECREF(cpy_r_r8);
CPyL21: ;
    if (cpy_r_r34.f0 == NULL) {
        goto CPyL28;
    } else
        goto CPyL80;
CPyL22: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL24;
    } else
        goto CPyL81;
CPyL23: ;
    CPy_Unreachable();
CPyL24: ;
    if (cpy_r_r34.f0 == NULL) goto CPyL26;
    CPy_RestoreExcInfo(cpy_r_r34);
    CPy_XDECREF(cpy_r_r34.f0);
    CPy_XDECREF(cpy_r_r34.f1);
    CPy_XDECREF(cpy_r_r34.f2);
CPyL26: ;
    cpy_r_r40 = CPy_KeepPropagating();
    if (!cpy_r_r40) goto CPyL67;
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r41 = CPyStatics[189]; /* '\n' */
    if (cpy_r_callsites != NULL) goto CPyL31;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"callsites\" referenced before assignment");
    cpy_r_r42 = 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", -1, CPyStatic_suggestions___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r43 = (CPyPtr)&((PyVarObject *)cpy_r_callsites)->ob_size;
    cpy_r_r44 = *(int64_t *)cpy_r_r43;
    if (cpy_r_callsites != NULL) goto CPyL34;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"callsites\" referenced before assignment");
    cpy_r_r45 = 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", -1, CPyStatic_suggestions___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL34: ;
    cpy_r_r46 = PyList_New(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 282, CPyStatic_suggestions___globals);
        goto CPyL68;
    }
    cpy_r_r47 = 0;
CPyL36: ;
    if (cpy_r_callsites == NULL) {
        goto CPyL82;
    } else
        goto CPyL39;
CPyL37: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"callsites\" referenced before assignment");
    cpy_r_r48 = 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", -1, CPyStatic_suggestions___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL39: ;
    cpy_r_r49 = (CPyPtr)&((PyVarObject *)cpy_r_callsites)->ob_size;
    cpy_r_r50 = *(int64_t *)cpy_r_r49;
    if (cpy_r_callsites == NULL) {
        goto CPyL83;
    } else
        goto CPyL42;
CPyL40: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"callsites\" referenced before assignment");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", -1, CPyStatic_suggestions___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r52 = cpy_r_r50 << 1;
    cpy_r_r53 = (Py_ssize_t)cpy_r_r47 < (Py_ssize_t)cpy_r_r52;
    if (!cpy_r_r53) goto CPyL84;
    if (cpy_r_callsites == NULL) {
        goto CPyL85;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"callsites\" referenced before assignment");
    cpy_r_r54 = 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 282, CPyStatic_suggestions___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r55 = CPyList_GetItemUnsafe(cpy_r_callsites, cpy_r_r47);
    if (likely(PyTuple_Check(cpy_r_r55)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "suggest_callsites", 282, CPyStatic_suggestions___globals, "tuple", cpy_r_r55);
        goto CPyL86;
    }
    cpy_r_r57 = CPySequence_CheckUnpackCount(cpy_r_r56, 6);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 282, CPyStatic_suggestions___globals);
        goto CPyL87;
    }
    cpy_r_r59 = CPySequenceTuple_GetItem(cpy_r_r56, 0);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 282, CPyStatic_suggestions___globals);
        goto CPyL87;
    }
    if (likely(PyUnicode_Check(cpy_r_r59)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "suggest_callsites", 282, CPyStatic_suggestions___globals, "str", cpy_r_r59);
        goto CPyL87;
    }
    cpy_r_r61 = CPySequenceTuple_GetItem(cpy_r_r56, 2);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 282, CPyStatic_suggestions___globals);
        goto CPyL88;
    }
    if (likely(PyLong_Check(cpy_r_r61)))
        cpy_r_r62 = CPyTagged_FromObject(cpy_r_r61);
    else {
        CPy_TypeError("int", cpy_r_r61); cpy_r_r62 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 282, CPyStatic_suggestions___globals);
        goto CPyL88;
    }
    cpy_r_r63 = CPySequenceTuple_GetItem(cpy_r_r56, 4);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 282, CPyStatic_suggestions___globals);
        goto CPyL89;
    }
    if (likely(PyList_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "suggest_callsites", 282, CPyStatic_suggestions___globals, "list", cpy_r_r63);
        goto CPyL89;
    }
    cpy_r_r65 = CPySequenceTuple_GetItem(cpy_r_r56, 6);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 282, CPyStatic_suggestions___globals);
        goto CPyL90;
    }
    cpy_r_r66 = CPySequenceTuple_GetItem(cpy_r_r56, 8);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 282, CPyStatic_suggestions___globals);
        goto CPyL91;
    }
    if (likely(PyList_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "suggest_callsites", 282, CPyStatic_suggestions___globals, "list", cpy_r_r66);
        goto CPyL91;
    }
    cpy_r_r68 = CPySequenceTuple_GetItem(cpy_r_r56, 10);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 282, CPyStatic_suggestions___globals);
        goto CPyL92;
    }
    if (likely(PyList_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "suggest_callsites", 282, CPyStatic_suggestions___globals, "list", cpy_r_r68);
        goto CPyL92;
    }
    cpy_r_path = cpy_r_r60;
    cpy_r_line = cpy_r_r62;
    cpy_r_arg_kinds = cpy_r_r64;
    cpy_r___2 = cpy_r_r65;
    CPy_DECREF(cpy_r___2);
    cpy_r_arg_names = cpy_r_r67;
    cpy_r_arg_types = cpy_r_r69;
    cpy_r_r70 = CPyStatics[171]; /* ':' */
    cpy_r_r71 = CPyTagged_Str(cpy_r_line);
    CPyTagged_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 283, CPyStatic_suggestions___globals);
        goto CPyL93;
    }
    cpy_r_r72 = CPyStatics[297]; /* ': ' */
    cpy_r_r73 = CPyDef_suggestions___SuggestionEngine___format_args(cpy_r_self, cpy_r_arg_kinds, cpy_r_arg_names, cpy_r_arg_types);
    CPy_DECREF(cpy_r_arg_kinds);
    CPy_DECREF(cpy_r_arg_names);
    CPy_DECREF(cpy_r_arg_types);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 283, CPyStatic_suggestions___globals);
        goto CPyL94;
    }
    cpy_r_r74 = CPyStr_Build(5, cpy_r_path, cpy_r_r70, cpy_r_r71, cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 283, CPyStatic_suggestions___globals);
        goto CPyL86;
    }
    cpy_r_r75 = CPyList_SetItemUnsafe(cpy_r_r46, cpy_r_r47, cpy_r_r74);
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 282, CPyStatic_suggestions___globals);
        goto CPyL86;
    }
    cpy_r_r76 = cpy_r_r47 + 2;
    cpy_r_r47 = cpy_r_r76;
    goto CPyL36;
CPyL64: ;
    cpy_r_r77 = CPyDef_suggestions___dedup(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 281, CPyStatic_suggestions___globals);
        goto CPyL67;
    }
    cpy_r_r78 = PyUnicode_Join(cpy_r_r41, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 280, CPyStatic_suggestions___globals);
        goto CPyL67;
    }
    return cpy_r_r78;
CPyL67: ;
    cpy_r_r79 = NULL;
    return cpy_r_r79;
CPyL68: ;
    CPy_XDecRef(cpy_r_callsites);
    goto CPyL67;
CPyL69: ;
    CPy_XDecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_node);
    goto CPyL67;
CPyL70: ;
    CPy_XDecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL67;
CPyL71: ;
    CPy_XDecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL67;
CPyL72: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL5;
CPyL73: ;
    CPy_XDECREF(cpy_r_callsites);
    goto CPyL7;
CPyL74: ;
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r25);
    goto CPyL14;
CPyL75: ;
    CPy_XDecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    CPy_DecRef(cpy_r_r21.f2);
    goto CPyL12;
CPyL76: ;
    CPy_XDecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL15;
CPyL77: ;
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    goto CPyL21;
CPyL78: ;
    CPy_XDecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_r8);
    goto CPyL24;
CPyL79: ;
    CPy_DECREF(cpy_r_r39);
    goto CPyL20;
CPyL80: ;
    CPy_XDECREF(cpy_r_callsites);
    goto CPyL22;
CPyL81: ;
    CPy_XDECREF(cpy_r_r34.f0);
    CPy_XDECREF(cpy_r_r34.f1);
    CPy_XDECREF(cpy_r_r34.f2);
    goto CPyL23;
CPyL82: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL37;
CPyL83: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL40;
CPyL84: ;
    CPy_XDECREF(cpy_r_callsites);
    goto CPyL64;
CPyL85: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL44;
CPyL86: ;
    CPy_XDecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_r46);
    goto CPyL67;
CPyL87: ;
    CPy_XDecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r56);
    goto CPyL67;
CPyL88: ;
    CPy_XDecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r60);
    goto CPyL67;
CPyL89: ;
    CPy_XDecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r60);
    CPyTagged_DecRef(cpy_r_r62);
    goto CPyL67;
CPyL90: ;
    CPy_XDecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r60);
    CPyTagged_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r64);
    goto CPyL67;
CPyL91: ;
    CPy_XDecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r60);
    CPyTagged_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r65);
    goto CPyL67;
CPyL92: ;
    CPy_XDecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r60);
    CPyTagged_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r67);
    goto CPyL67;
CPyL93: ;
    CPy_XDecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_types);
    goto CPyL67;
CPyL94: ;
    CPy_XDecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_r71);
    goto CPyL67;
}

PyObject *CPyPy_suggestions___SuggestionEngine___suggest_callsites(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"function", 0};
    static CPyArg_Parser parser = {"O:suggest_callsites", kwlist, 0};
    PyObject *obj_function;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_function)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_function;
    if (likely(PyUnicode_Check(obj_function)))
        arg_function = obj_function;
    else {
        CPy_TypeError("str", obj_function); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___suggest_callsites(arg_self, arg_function);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "suggest_callsites", 274, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___restore_after_SuggestionEngine_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    tuple_T3OOO cpy_r_r8;
    tuple_T3OOO cpy_r_r9;
    tuple_T3OOO cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    int64_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    int64_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = ((mypy___suggestions___restore_after_SuggestionEngine_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "restore_after", "restore_after_SuggestionEngine_gen", "__mypyc_env__", 290, CPyStatic_suggestions___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/suggestions.py", "restore_after", "restore_after_SuggestionEngine_env", "__mypyc_next_label__", 290, CPyStatic_suggestions___globals);
        goto CPyL39;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL28;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL40;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "restore_after", 290, CPyStatic_suggestions___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = Py_None;
    if (((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/suggestions.py", "restore_after", 296, CPyStatic_suggestions___globals);
        goto CPyL11;
    } else
        goto CPyL41;
CPyL6: ;
    CPy_INCREF(cpy_r_r4);
    return cpy_r_r4;
CPyL7: ;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_type != cpy_r_r6;
    if (!cpy_r_r7) goto CPyL10;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "restore_after", 296, CPyStatic_suggestions___globals);
        goto CPyL11;
    } else
        goto CPyL42;
CPyL9: ;
    CPy_Unreachable();
CPyL10: ;
    tuple_T3OOO __tmp7434 = { NULL, NULL, NULL };
    cpy_r_r8 = __tmp7434;
    cpy_r_r9 = cpy_r_r8;
    goto CPyL12;
CPyL11: ;
    cpy_r_r10 = CPy_CatchError();
    cpy_r_r9 = cpy_r_r10;
CPyL12: ;
    cpy_r_r11 = ((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "restore_after", "restore_after_SuggestionEngine_env", "self", 298, CPyStatic_suggestions___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r11);
CPyL13: ;
    cpy_r_r12 = ((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "restore_after", "restore_after_SuggestionEngine_env", "self", 298, CPyStatic_suggestions___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r12);
CPyL14: ;
    cpy_r_r13 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_r12)->_graph;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = ((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->_module;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "restore_after", "restore_after_SuggestionEngine_env", "module", 298, CPyStatic_suggestions___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_r14);
CPyL15: ;
    cpy_r_r15 = CPyDict_GetItem(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "restore_after", 298, CPyStatic_suggestions___globals);
        goto CPyL44;
    }
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_mypy___build___State))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "restore_after", 298, CPyStatic_suggestions___globals, "mypy.build.State", cpy_r_r15);
        goto CPyL44;
    }
    cpy_r_r17 = CPyDef_suggestions___SuggestionEngine___reload(cpy_r_r11, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "restore_after", 298, CPyStatic_suggestions___globals);
        goto CPyL43;
    } else
        goto CPyL46;
CPyL18: ;
    if (cpy_r_r9.f0 == NULL) {
        goto CPyL25;
    } else
        goto CPyL47;
CPyL19: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL21;
    } else
        goto CPyL48;
CPyL20: ;
    CPy_Unreachable();
CPyL21: ;
    if (cpy_r_r9.f0 == NULL) goto CPyL23;
    CPy_RestoreExcInfo(cpy_r_r9);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
CPyL23: ;
    cpy_r_r18 = CPy_KeepPropagating();
    if (!cpy_r_r18) goto CPyL38;
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r19 = Py_None;
    if (((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r20 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/suggestions.py", "restore_after", 290, CPyStatic_suggestions___globals);
        goto CPyL38;
    }
    CPyGen_SetStopIterationValue(cpy_r_r19);
    if (!0) goto CPyL38;
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r21 = cpy_r_r1 & 1;
    cpy_r_r22 = cpy_r_r21 == 0;
    if (!cpy_r_r22) goto CPyL30;
    cpy_r_r23 = cpy_r_r1 == 0;
    cpy_r_r24 = cpy_r_r23;
    goto CPyL31;
CPyL30: ;
    cpy_r_r25 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r24 = cpy_r_r25;
CPyL31: ;
    if (cpy_r_r24) goto CPyL49;
    cpy_r_r26 = cpy_r_r1 & 1;
    cpy_r_r27 = cpy_r_r26 == 0;
    if (!cpy_r_r27) goto CPyL34;
    cpy_r_r28 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r29 = cpy_r_r28;
    goto CPyL35;
CPyL34: ;
    cpy_r_r30 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r29 = cpy_r_r30;
CPyL35: ;
    if (cpy_r_r29) {
        goto CPyL7;
    } else
        goto CPyL50;
CPyL36: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/suggestions.py", "restore_after", 290, CPyStatic_suggestions___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL38;
CPyL40: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL41: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL6;
CPyL42: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL9;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL21;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    goto CPyL21;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    goto CPyL21;
CPyL46: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL18;
CPyL47: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL19;
CPyL48: ;
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL20;
CPyL49: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL50: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL36;
}

PyObject *CPyPy_suggestions___restore_after_SuggestionEngine_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_suggestions___restore_after_SuggestionEngine_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "restore_after", 290, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___restore_after_SuggestionEngine_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_suggestions___restore_after_SuggestionEngine_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_suggestions___restore_after_SuggestionEngine_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_suggestions___restore_after_SuggestionEngine_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.suggestions.restore_after_SuggestionEngine_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___restore_after_SuggestionEngine_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "__next__", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___restore_after_SuggestionEngine_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_suggestions___restore_after_SuggestionEngine_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_suggestions___restore_after_SuggestionEngine_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_suggestions___restore_after_SuggestionEngine_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.suggestions.restore_after_SuggestionEngine_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_suggestions___restore_after_SuggestionEngine_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "send", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___restore_after_SuggestionEngine_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_suggestions___restore_after_SuggestionEngine_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_suggestions___restore_after_SuggestionEngine_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.suggestions.restore_after_SuggestionEngine_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___restore_after_SuggestionEngine_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "__iter__", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___restore_after_SuggestionEngine_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_suggestions___restore_after_SuggestionEngine_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_suggestions___restore_after_SuggestionEngine_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_suggestions___restore_after_SuggestionEngine_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.suggestions.restore_after_SuggestionEngine_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_suggestions___restore_after_SuggestionEngine_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "throw", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___restore_after_SuggestionEngine_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_suggestions___restore_after_SuggestionEngine_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp7435 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp7435);
    PyObject *__tmp7436 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp7436);
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

PyObject *CPyPy_suggestions___restore_after_SuggestionEngine_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_suggestions___restore_after_SuggestionEngine_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.suggestions.restore_after_SuggestionEngine_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___restore_after_SuggestionEngine_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "close", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___restore_after(PyObject *cpy_r_self, PyObject *cpy_r_module) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_suggestions___restore_after_SuggestionEngine_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "restore_after", 290, CPyStatic_suggestions___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/suggestions.py", "restore_after", 290, CPyStatic_suggestions___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_module);
    if (((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->_module != NULL) {
        CPy_DECREF(((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->_module);
    }
    ((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->_module = cpy_r_module;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/suggestions.py", "restore_after", 290, CPyStatic_suggestions___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_suggestions___restore_after_SuggestionEngine_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "restore_after", 290, CPyStatic_suggestions___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___suggestions___restore_after_SuggestionEngine_genObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___suggestions___restore_after_SuggestionEngine_genObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypy___suggestions___restore_after_SuggestionEngine_genObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/suggestions.py", "restore_after", 290, CPyStatic_suggestions___globals);
        goto CPyL9;
    }
    if (((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___suggestions___restore_after_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/suggestions.py", "restore_after", 290, CPyStatic_suggestions___globals);
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

PyObject *CPyPy_suggestions___SuggestionEngine___restore_after(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module", 0};
    static CPyArg_Parser parser = {"O:restore_after", kwlist, 0};
    PyObject *obj_module;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_module)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_module;
    if (likely(PyUnicode_Check(obj_module)))
        arg_module = obj_module;
    else {
        CPy_TypeError("str", obj_module); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___restore_after(arg_self, arg_module);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "restore_after", 290, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___with_export_types_SuggestionEngine_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    tuple_T3OOO cpy_r_r17;
    tuple_T3OOO cpy_r_r18;
    tuple_T3OOO cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    int64_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    int64_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    cpy_r_r0 = ((mypy___suggestions___with_export_types_SuggestionEngine_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "with_export_types", "with_export_types_SuggestionEngine_gen", "__mypyc_env__", 301, CPyStatic_suggestions___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/suggestions.py", "with_export_types", "with_export_types_SuggestionEngine_env", "__mypyc_next_label__", 301, CPyStatic_suggestions___globals);
        goto CPyL39;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL28;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL40;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "with_export_types", 301, CPyStatic_suggestions___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "with_export_types", "with_export_types_SuggestionEngine_env", "self", 306, CPyStatic_suggestions___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_r4)->_manager;
    cpy_r_r6 = ((mypy___build___BuildManagerObject *)cpy_r_r5)->_options;
    cpy_r_r7 = ((mypy___options___OptionsObject *)cpy_r_r6)->_export_types;
    CPy_DECREF(cpy_r_r4);
    ((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->_old = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/suggestions.py", "with_export_types", 306, CPyStatic_suggestions___globals);
        goto CPyL39;
    }
    cpy_r_r9 = ((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "with_export_types", "with_export_types_SuggestionEngine_env", "self", 307, CPyStatic_suggestions___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r9);
CPyL8: ;
    cpy_r_r10 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_r9)->_manager;
    cpy_r_r11 = ((mypy___build___BuildManagerObject *)cpy_r_r10)->_options;
    ((mypy___options___OptionsObject *)cpy_r_r11)->_export_types = 1;
    CPy_DECREF(cpy_r_r9);
    cpy_r_r13 = Py_None;
    if (((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r14 = 1;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/suggestions.py", "with_export_types", 309, CPyStatic_suggestions___globals);
        goto CPyL15;
    } else
        goto CPyL41;
CPyL10: ;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL11: ;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_type != cpy_r_r15;
    if (!cpy_r_r16) goto CPyL14;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "with_export_types", 309, CPyStatic_suggestions___globals);
        goto CPyL15;
    } else
        goto CPyL42;
CPyL13: ;
    CPy_Unreachable();
CPyL14: ;
    tuple_T3OOO __tmp7437 = { NULL, NULL, NULL };
    cpy_r_r17 = __tmp7437;
    cpy_r_r18 = cpy_r_r17;
    goto CPyL16;
CPyL15: ;
    cpy_r_r19 = CPy_CatchError();
    cpy_r_r18 = cpy_r_r19;
CPyL16: ;
    cpy_r_r20 = ((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->_old;
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AttributeError("mypy/suggestions.py", "with_export_types", "with_export_types_SuggestionEngine_env", "old", 311, CPyStatic_suggestions___globals);
        goto CPyL43;
    }
CPyL17: ;
    cpy_r_r21 = ((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "with_export_types", "with_export_types_SuggestionEngine_env", "self", 311, CPyStatic_suggestions___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r21);
CPyL18: ;
    cpy_r_r22 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_r21)->_manager;
    cpy_r_r23 = ((mypy___build___BuildManagerObject *)cpy_r_r22)->_options;
    ((mypy___options___OptionsObject *)cpy_r_r23)->_export_types = cpy_r_r20;
    CPy_DECREF(cpy_r_r21);
    if (cpy_r_r18.f0 == NULL) {
        goto CPyL25;
    } else
        goto CPyL44;
CPyL19: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL21;
    } else
        goto CPyL45;
CPyL20: ;
    CPy_Unreachable();
CPyL21: ;
    if (cpy_r_r18.f0 == NULL) goto CPyL23;
    CPy_RestoreExcInfo(cpy_r_r18);
    CPy_XDECREF(cpy_r_r18.f0);
    CPy_XDECREF(cpy_r_r18.f1);
    CPy_XDECREF(cpy_r_r18.f2);
CPyL23: ;
    cpy_r_r25 = CPy_KeepPropagating();
    if (!cpy_r_r25) goto CPyL38;
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r26 = Py_None;
    if (((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r27 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/suggestions.py", "with_export_types", 301, CPyStatic_suggestions___globals);
        goto CPyL38;
    }
    CPyGen_SetStopIterationValue(cpy_r_r26);
    if (!0) goto CPyL38;
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r28 = cpy_r_r1 & 1;
    cpy_r_r29 = cpy_r_r28 == 0;
    if (!cpy_r_r29) goto CPyL30;
    cpy_r_r30 = cpy_r_r1 == 0;
    cpy_r_r31 = cpy_r_r30;
    goto CPyL31;
CPyL30: ;
    cpy_r_r32 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r31 = cpy_r_r32;
CPyL31: ;
    if (cpy_r_r31) goto CPyL46;
    cpy_r_r33 = cpy_r_r1 & 1;
    cpy_r_r34 = cpy_r_r33 == 0;
    if (!cpy_r_r34) goto CPyL34;
    cpy_r_r35 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r36 = cpy_r_r35;
    goto CPyL35;
CPyL34: ;
    cpy_r_r37 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r36 = cpy_r_r37;
CPyL35: ;
    if (cpy_r_r36) {
        goto CPyL11;
    } else
        goto CPyL47;
CPyL36: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/suggestions.py", "with_export_types", 301, CPyStatic_suggestions___globals);
        goto CPyL38;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r39 = NULL;
    return cpy_r_r39;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL38;
CPyL40: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL41: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL10;
CPyL42: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL13;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL21;
CPyL44: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL19;
CPyL45: ;
    CPy_XDECREF(cpy_r_r18.f0);
    CPy_XDECREF(cpy_r_r18.f1);
    CPy_XDECREF(cpy_r_r18.f2);
    goto CPyL20;
CPyL46: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL47: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL36;
}

PyObject *CPyPy_suggestions___with_export_types_SuggestionEngine_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_suggestions___with_export_types_SuggestionEngine_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "with_export_types", 301, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___with_export_types_SuggestionEngine_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_suggestions___with_export_types_SuggestionEngine_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_suggestions___with_export_types_SuggestionEngine_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_suggestions___with_export_types_SuggestionEngine_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.suggestions.with_export_types_SuggestionEngine_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___with_export_types_SuggestionEngine_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "__next__", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___with_export_types_SuggestionEngine_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_suggestions___with_export_types_SuggestionEngine_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_suggestions___with_export_types_SuggestionEngine_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_suggestions___with_export_types_SuggestionEngine_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.suggestions.with_export_types_SuggestionEngine_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_suggestions___with_export_types_SuggestionEngine_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "send", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___with_export_types_SuggestionEngine_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_suggestions___with_export_types_SuggestionEngine_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_suggestions___with_export_types_SuggestionEngine_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.suggestions.with_export_types_SuggestionEngine_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___with_export_types_SuggestionEngine_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "__iter__", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___with_export_types_SuggestionEngine_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_suggestions___with_export_types_SuggestionEngine_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_suggestions___with_export_types_SuggestionEngine_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_suggestions___with_export_types_SuggestionEngine_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.suggestions.with_export_types_SuggestionEngine_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_suggestions___with_export_types_SuggestionEngine_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "throw", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___with_export_types_SuggestionEngine_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_suggestions___with_export_types_SuggestionEngine_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp7438 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp7438);
    PyObject *__tmp7439 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp7439);
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

PyObject *CPyPy_suggestions___with_export_types_SuggestionEngine_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_suggestions___with_export_types_SuggestionEngine_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.suggestions.with_export_types_SuggestionEngine_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___with_export_types_SuggestionEngine_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "close", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___with_export_types(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef_suggestions___with_export_types_SuggestionEngine_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "with_export_types", 301, CPyStatic_suggestions___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/suggestions.py", "with_export_types", 301, CPyStatic_suggestions___globals);
        goto CPyL7;
    }
    cpy_r_r2 = CPyDef_suggestions___with_export_types_SuggestionEngine_gen();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "with_export_types", 301, CPyStatic_suggestions___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___suggestions___with_export_types_SuggestionEngine_genObject *)cpy_r_r2)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___suggestions___with_export_types_SuggestionEngine_genObject *)cpy_r_r2)->___mypyc_env__);
    }
    ((mypy___suggestions___with_export_types_SuggestionEngine_genObject *)cpy_r_r2)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/suggestions.py", "with_export_types", 301, CPyStatic_suggestions___globals);
        goto CPyL8;
    }
    if (((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___suggestions___with_export_types_SuggestionEngine_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r4 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/suggestions.py", "with_export_types", 301, CPyStatic_suggestions___globals);
        goto CPyL9;
    }
    return cpy_r_r2;
CPyL6: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_suggestions___SuggestionEngine___with_export_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":with_export_types", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___with_export_types(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "with_export_types", 301, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___get_trivial_type(PyObject *cpy_r_self, PyObject *cpy_r_fdef) {
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
    PyObject *cpy_r__;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    cpy_r_r0 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_arg_kinds;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_trivial_type", 319, CPyStatic_suggestions___globals);
        goto CPyL12;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL13;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r4);
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_nodes___ArgKind))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_trivial_type", 319, CPyStatic_suggestions___globals, "mypy.nodes.ArgKind", cpy_r_r9);
        goto CPyL14;
    }
    cpy_r__ = cpy_r_r10;
    CPy_DECREF(cpy_r__);
    cpy_r_r11 = NULL;
    cpy_r_r12 = NULL;
    cpy_r_r13 = CPY_INT_TAG;
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = CPyDef_types___AnyType(18, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_trivial_type", 319, CPyStatic_suggestions___globals);
        goto CPyL14;
    }
    cpy_r_r16 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r15);
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_trivial_type", 319, CPyStatic_suggestions___globals);
        goto CPyL14;
    }
    cpy_r_r17 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r17;
    goto CPyL2;
CPyL7: ;
    cpy_r_r18 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_arg_kinds;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_arg_names;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = NULL;
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = CPY_INT_TAG;
    cpy_r_r24 = CPyDef_types___AnyType(18, cpy_r_r20, cpy_r_r21, cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_trivial_type", 322, CPyStatic_suggestions___globals);
        goto CPyL15;
    }
    cpy_r_r25 = CPyStatics[752]; /* 'builtins.function' */
    cpy_r_r26 = CPyDef_suggestions___SuggestionEngine___named_type(cpy_r_self, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_trivial_type", 323, CPyStatic_suggestions___globals);
        goto CPyL16;
    }
    cpy_r_r27 = NULL;
    cpy_r_r28 = NULL;
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPY_INT_TAG;
    cpy_r_r31 = CPY_INT_TAG;
    cpy_r_r32 = 2;
    cpy_r_r33 = 2;
    cpy_r_r34 = NULL;
    cpy_r_r35 = 2;
    cpy_r_r36 = NULL;
    cpy_r_r37 = NULL;
    cpy_r_r38 = NULL;
    cpy_r_r39 = 2;
    cpy_r_r40 = 2;
    cpy_r_r41 = CPyDef_types___CallableType(cpy_r_r3, cpy_r_r18, cpy_r_r19, cpy_r_r24, cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_trivial_type", 318, CPyStatic_suggestions___globals);
        goto CPyL11;
    }
    return cpy_r_r41;
CPyL11: ;
    cpy_r_r42 = NULL;
    return cpy_r_r42;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL7;
CPyL14: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL11;
CPyL16: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r24);
    goto CPyL11;
}

PyObject *CPyPy_suggestions___SuggestionEngine___get_trivial_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fdef", 0};
    static CPyArg_Parser parser = {"O:get_trivial_type", kwlist, 0};
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___get_trivial_type(arg_self, arg_fdef);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "get_trivial_type", 313, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___get_starting_type(PyObject *cpy_r_self, PyObject *cpy_r_fdef) {
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
    PyObject *cpy_r_r10;
    cpy_r_r0 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_type;
    cpy_r_r1 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_type;
    CPy_INCREF(cpy_r_r5);
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___CallableType))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_starting_type", 328, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_r5);
        goto CPyL7;
    }
    cpy_r_r7 = CPyDef_suggestions___make_suggestion_anys(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_starting_type", 328, CPyStatic_suggestions___globals);
        goto CPyL7;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_types___CallableType))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_starting_type", 328, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_r7);
        goto CPyL7;
    }
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = CPyDef_suggestions___SuggestionEngine___get_trivial_type(cpy_r_self, cpy_r_fdef);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_starting_type", 330, CPyStatic_suggestions___globals);
        goto CPyL7;
    }
    return cpy_r_r9;
CPyL7: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
}

PyObject *CPyPy_suggestions___SuggestionEngine___get_starting_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fdef", 0};
    static CPyArg_Parser parser = {"O:get_starting_type", kwlist, 0};
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___get_starting_type(arg_self, arg_fdef);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "get_starting_type", 326, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___get_args(PyObject *cpy_r_self, char cpy_r_is_method, PyObject *cpy_r_base, PyObject *cpy_r_defaults, PyObject *cpy_r_callsites, PyObject *cpy_r_uses) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_i;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    CPyPtr cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_all_arg_types;
    CPyTagged cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_call;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_typ;
    char cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_all_use_types;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyPtr cpy_r_r49;
    int64_t cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    CPyTagged cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_default;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    CPyPtr cpy_r_r66;
    int64_t cpy_r_r67;
    CPyTagged cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_arg_types;
    CPyPtr cpy_r_r74;
    int64_t cpy_r_r75;
    CPyTagged cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    CPyTagged cpy_r_r79;
    CPyPtr cpy_r_r80;
    int64_t cpy_r_r81;
    CPyTagged cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_tp;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyPtr cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    CPyTagged cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyTagged cpy_r_r97;
    CPyTagged cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyPtr cpy_r_r101;
    CPyPtr cpy_r_r102;
    CPyPtr cpy_r_r103;
    CPyTagged cpy_r_r104;
    CPyTagged cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    CPyPtr cpy_r_r109;
    int64_t cpy_r_r110;
    CPyTagged cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    CPyTagged cpy_r_r117;
    CPyTagged cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    CPyPtr cpy_r_r122;
    int64_t cpy_r_r123;
    CPyTagged cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    int32_t cpy_r_r127;
    char cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    CPyTagged cpy_r_r131;
    PyObject *cpy_r_r132;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 341, CPyStatic_suggestions___globals);
        goto CPyL69;
    }
    cpy_r_types = cpy_r_r0;
    cpy_r_r1 = ((mypy___types___CallableTypeObject *)cpy_r_base)->_arg_kinds;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = 0;
    cpy_r_i = cpy_r_r5;
CPyL2: ;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r6) goto CPyL70;
    cpy_r_r7 = cpy_r_i == 0;
    if (!cpy_r_r7) goto CPyL8;
    if (cpy_r_is_method) {
        goto CPyL71;
    } else
        goto CPyL8;
CPyL5: ;
    cpy_r_r8 = NULL;
    cpy_r_r9 = NULL;
    cpy_r_r10 = CPY_INT_TAG;
    cpy_r_r11 = CPY_INT_TAG;
    cpy_r_r12 = CPyDef_types___AnyType(18, cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 345, CPyStatic_suggestions___globals);
        goto CPyL72;
    }
    cpy_r_r13 = PyList_New(1);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 345, CPyStatic_suggestions___globals);
        goto CPyL73;
    }
    cpy_r_r14 = (CPyPtr)&((PyListObject *)cpy_r_r13)->ob_item;
    cpy_r_r15 = *(CPyPtr *)cpy_r_r14;
    *(PyObject * *)cpy_r_r15 = cpy_r_r12;
    cpy_r_r16 = PyList_Append(cpy_r_types, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 345, CPyStatic_suggestions___globals);
        goto CPyL72;
    } else
        goto CPyL67;
CPyL8: ;
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 348, CPyStatic_suggestions___globals);
        goto CPyL74;
    }
    cpy_r_all_arg_types = cpy_r_r18;
    cpy_r_r19 = 0;
CPyL10: ;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_callsites)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r22;
    if (!cpy_r_r23) goto CPyL24;
    cpy_r_r24 = CPyList_GetItemUnsafe(cpy_r_callsites, cpy_r_r19);
    if (likely(PyTuple_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_args", 349, CPyStatic_suggestions___globals, "tuple", cpy_r_r24);
        goto CPyL75;
    }
    cpy_r_call = cpy_r_r25;
    cpy_r_r26 = CPySequenceTuple_GetItem(cpy_r_call, 10);
    CPy_DECREF(cpy_r_call);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 350, CPyStatic_suggestions___globals);
        goto CPyL75;
    }
    if (likely(PyList_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_args", 350, CPyStatic_suggestions___globals, "list", cpy_r_r26);
        goto CPyL75;
    }
    cpy_r_r28 = cpy_r_is_method << 1;
    cpy_r_r29 = cpy_r_r28;
    cpy_r_r30 = CPyTagged_Subtract(cpy_r_i, cpy_r_r29);
    CPyTagged_DECREF(cpy_r_r29);
    cpy_r_r31 = CPyList_GetItem(cpy_r_r27, cpy_r_r30);
    CPy_DECREF(cpy_r_r27);
    CPyTagged_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 350, CPyStatic_suggestions___globals);
        goto CPyL75;
    }
    if (likely(PyList_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_args", 350, CPyStatic_suggestions___globals, "list", cpy_r_r31);
        goto CPyL75;
    }
    cpy_r_r33 = 0;
CPyL17: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r33 < (Py_ssize_t)cpy_r_r36;
    if (!cpy_r_r37) goto CPyL76;
    cpy_r_r38 = CPyList_GetItemUnsafe(cpy_r_r32, cpy_r_r33);
    if (likely(PyObject_TypeCheck(cpy_r_r38, CPyType_types___Type)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_args", 350, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r38);
        goto CPyL77;
    }
    cpy_r_typ = cpy_r_r39;
    cpy_r_r40 = CPyDef_suggestions___is_implicit_any(cpy_r_typ);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 352, CPyStatic_suggestions___globals);
        goto CPyL78;
    }
    if (cpy_r_r40) goto CPyL79;
    cpy_r_r41 = PyList_Append(cpy_r_all_arg_types, cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 353, CPyStatic_suggestions___globals);
        goto CPyL77;
    }
CPyL22: ;
    cpy_r_r43 = cpy_r_r33 + 2;
    cpy_r_r33 = cpy_r_r43;
    goto CPyL17;
CPyL23: ;
    cpy_r_r44 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r44;
    goto CPyL10;
CPyL24: ;
    cpy_r_r45 = PyList_New(0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 354, CPyStatic_suggestions___globals);
        goto CPyL75;
    }
    cpy_r_all_use_types = cpy_r_r45;
    cpy_r_r46 = CPyList_GetItem(cpy_r_uses, cpy_r_i);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 355, CPyStatic_suggestions___globals);
        goto CPyL80;
    }
    if (likely(PyList_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_args", 355, CPyStatic_suggestions___globals, "list", cpy_r_r46);
        goto CPyL80;
    }
    cpy_r_r48 = 0;
CPyL28: ;
    cpy_r_r49 = (CPyPtr)&((PyVarObject *)cpy_r_r47)->ob_size;
    cpy_r_r50 = *(int64_t *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 << 1;
    cpy_r_r52 = (Py_ssize_t)cpy_r_r48 < (Py_ssize_t)cpy_r_r51;
    if (!cpy_r_r52) goto CPyL81;
    cpy_r_r53 = CPyList_GetItemUnsafe(cpy_r_r47, cpy_r_r48);
    if (likely(PyObject_TypeCheck(cpy_r_r53, CPyType_types___Type)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_args", 355, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r53);
        goto CPyL82;
    }
    cpy_r_typ = cpy_r_r54;
    cpy_r_r55 = CPyDef_suggestions___is_implicit_any(cpy_r_typ);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 357, CPyStatic_suggestions___globals);
        goto CPyL83;
    }
    if (cpy_r_r55) goto CPyL84;
    cpy_r_r56 = PyList_Append(cpy_r_all_use_types, cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 358, CPyStatic_suggestions___globals);
        goto CPyL82;
    }
CPyL33: ;
    cpy_r_r58 = cpy_r_r48 + 2;
    cpy_r_r48 = cpy_r_r58;
    goto CPyL28;
CPyL34: ;
    cpy_r_r59 = CPyList_GetItem(cpy_r_defaults, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 360, CPyStatic_suggestions___globals);
        goto CPyL85;
    }
    if (PyObject_TypeCheck(cpy_r_r59, CPyType_types___Type))
        cpy_r_r60 = cpy_r_r59;
    else {
        cpy_r_r60 = NULL;
    }
    if (cpy_r_r60 != NULL) goto __LL7440;
    if (cpy_r_r59 == Py_None)
        cpy_r_r60 = cpy_r_r59;
    else {
        cpy_r_r60 = NULL;
    }
    if (cpy_r_r60 != NULL) goto __LL7440;
    CPy_TypeErrorTraceback("mypy/suggestions.py", "get_args", 360, CPyStatic_suggestions___globals, "mypy.types.Type or None", cpy_r_r59);
    goto CPyL85;
__LL7440: ;
    cpy_r_default = cpy_r_r60;
    cpy_r_r61 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r62 = cpy_r_default != cpy_r_r61;
    if (!cpy_r_r62) goto CPyL86;
    CPy_INCREF(cpy_r_default);
    if (likely(cpy_r_default != Py_None))
        cpy_r_r63 = cpy_r_default;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_args", 362, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_default);
        goto CPyL87;
    }
    cpy_r_r64 = PyList_Append(cpy_r_all_arg_types, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 362, CPyStatic_suggestions___globals);
        goto CPyL87;
    }
    cpy_r_r66 = (CPyPtr)&((PyVarObject *)cpy_r_all_use_types)->ob_size;
    cpy_r_r67 = *(int64_t *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 << 1;
    cpy_r_r69 = cpy_r_r68 != 0;
    if (!cpy_r_r69) goto CPyL86;
    if (likely(cpy_r_default != Py_None))
        cpy_r_r70 = cpy_r_default;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_args", 364, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_default);
        goto CPyL85;
    }
    cpy_r_r71 = PyList_Append(cpy_r_all_use_types, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 364, CPyStatic_suggestions___globals);
        goto CPyL85;
    }
CPyL42: ;
    cpy_r_r73 = PyList_New(0);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 366, CPyStatic_suggestions___globals);
        goto CPyL85;
    }
    cpy_r_arg_types = cpy_r_r73;
    cpy_r_r74 = (CPyPtr)&((PyVarObject *)cpy_r_all_arg_types)->ob_size;
    cpy_r_r75 = *(int64_t *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 << 1;
    cpy_r_r77 = cpy_r_r76 != 0;
    if (!cpy_r_r77) goto CPyL58;
    cpy_r_r78 = 1;
    cpy_r_r79 = 0;
CPyL45: ;
    cpy_r_r80 = (CPyPtr)&((PyVarObject *)cpy_r_all_arg_types)->ob_size;
    cpy_r_r81 = *(int64_t *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 << 1;
    cpy_r_r83 = (Py_ssize_t)cpy_r_r79 < (Py_ssize_t)cpy_r_r82;
    if (!cpy_r_r83) goto CPyL51;
    cpy_r_r84 = CPyList_GetItemUnsafe(cpy_r_all_arg_types, cpy_r_r79);
    if (likely(PyObject_TypeCheck(cpy_r_r84, CPyType_types___Type)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_args", 368, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r84);
        goto CPyL88;
    }
    cpy_r_tp = cpy_r_r85;
    cpy_r_r86 = CPyDef_types___get_proper_type(cpy_r_tp);
    CPy_DECREF(cpy_r_tp);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 369, CPyStatic_suggestions___globals);
        goto CPyL88;
    }
    cpy_r_r87 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r88 = (CPyPtr)&((PyObject *)cpy_r_r86)->ob_type;
    cpy_r_r89 = *(PyObject * *)cpy_r_r88;
    CPy_DECREF(cpy_r_r86);
    cpy_r_r90 = cpy_r_r89 == cpy_r_r87;
    cpy_r_r91 = cpy_r_r90 ^ 1;
    if (!cpy_r_r91) goto CPyL50;
    cpy_r_r78 = 0;
    goto CPyL51;
CPyL50: ;
    cpy_r_r92 = cpy_r_r79 + 2;
    cpy_r_r79 = cpy_r_r92;
    goto CPyL45;
CPyL51: ;
    if (!cpy_r_r78) goto CPyL58;
    cpy_r_r93 = CPyList_GetItemShort(cpy_r_all_arg_types, 0);
    CPy_DECREF(cpy_r_all_arg_types);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 372, CPyStatic_suggestions___globals);
        goto CPyL89;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r93, CPyType_types___Type)))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_args", 372, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r93);
        goto CPyL89;
    }
    cpy_r_r95 = NULL;
    cpy_r_r96 = NULL;
    cpy_r_r97 = CPY_INT_TAG;
    cpy_r_r98 = CPY_INT_TAG;
    cpy_r_r99 = CPyDef_types___AnyType(4, cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 372, CPyStatic_suggestions___globals);
        goto CPyL90;
    }
    cpy_r_r100 = PyList_New(2);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 372, CPyStatic_suggestions___globals);
        goto CPyL91;
    }
    cpy_r_r101 = (CPyPtr)&((PyListObject *)cpy_r_r100)->ob_item;
    cpy_r_r102 = *(CPyPtr *)cpy_r_r101;
    *(PyObject * *)cpy_r_r102 = cpy_r_r94;
    cpy_r_r103 = cpy_r_r102 + 8;
    *(PyObject * *)cpy_r_r103 = cpy_r_r99;
    cpy_r_r104 = CPY_INT_TAG;
    cpy_r_r105 = CPY_INT_TAG;
    cpy_r_r106 = CPyDef_types___UnionType___make_union(cpy_r_r100, cpy_r_r104, cpy_r_r105);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 372, CPyStatic_suggestions___globals);
        goto CPyL89;
    }
    cpy_r_r107 = PyList_Append(cpy_r_arg_types, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 371, CPyStatic_suggestions___globals);
        goto CPyL89;
    } else
        goto CPyL63;
CPyL58: ;
    cpy_r_r109 = (CPyPtr)&((PyVarObject *)cpy_r_all_arg_types)->ob_size;
    cpy_r_r110 = *(int64_t *)cpy_r_r109;
    cpy_r_r111 = cpy_r_r110 << 1;
    cpy_r_r112 = cpy_r_r111 != 0;
    if (!cpy_r_r112) goto CPyL92;
    cpy_r_r113 = CPyDef_suggestions___generate_type_combinations(cpy_r_all_arg_types);
    CPy_DECREF(cpy_r_all_arg_types);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 375, CPyStatic_suggestions___globals);
        goto CPyL89;
    }
    cpy_r_r114 = CPyList_Extend(cpy_r_arg_types, cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 375, CPyStatic_suggestions___globals);
        goto CPyL89;
    } else
        goto CPyL93;
CPyL61: ;
    cpy_r_r115 = NULL;
    cpy_r_r116 = NULL;
    cpy_r_r117 = CPY_INT_TAG;
    cpy_r_r118 = CPY_INT_TAG;
    cpy_r_r119 = CPyDef_types___AnyType(4, cpy_r_r115, cpy_r_r116, cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 377, CPyStatic_suggestions___globals);
        goto CPyL89;
    }
    cpy_r_r120 = PyList_Append(cpy_r_arg_types, cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 377, CPyStatic_suggestions___globals);
        goto CPyL89;
    }
CPyL63: ;
    cpy_r_r122 = (CPyPtr)&((PyVarObject *)cpy_r_all_use_types)->ob_size;
    cpy_r_r123 = *(int64_t *)cpy_r_r122;
    cpy_r_r124 = cpy_r_r123 << 1;
    cpy_r_r125 = cpy_r_r124 != 0;
    if (!cpy_r_r125) goto CPyL94;
    cpy_r_r126 = CPyDef_meet___meet_type_list(cpy_r_all_use_types);
    CPy_DECREF(cpy_r_all_use_types);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 381, CPyStatic_suggestions___globals);
        goto CPyL95;
    }
    cpy_r_r127 = PyList_Append(cpy_r_arg_types, cpy_r_r126);
    CPy_DECREF(cpy_r_r126);
    cpy_r_r128 = cpy_r_r127 >= 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 381, CPyStatic_suggestions___globals);
        goto CPyL95;
    }
CPyL66: ;
    cpy_r_r129 = PyList_Append(cpy_r_types, cpy_r_arg_types);
    CPy_DECREF(cpy_r_arg_types);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_args", 383, CPyStatic_suggestions___globals);
        goto CPyL72;
    }
CPyL67: ;
    cpy_r_r131 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r131;
    cpy_r_i = cpy_r_r131;
    goto CPyL2;
CPyL68: ;
    return cpy_r_types;
CPyL69: ;
    cpy_r_r132 = NULL;
    return cpy_r_r132;
CPyL70: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL68;
CPyL71: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL5;
CPyL72: ;
    CPy_DecRef(cpy_r_types);
    goto CPyL69;
CPyL73: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r12);
    goto CPyL69;
CPyL74: ;
    CPy_DecRef(cpy_r_types);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL69;
CPyL75: ;
    CPy_DecRef(cpy_r_types);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_all_arg_types);
    goto CPyL69;
CPyL76: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL23;
CPyL77: ;
    CPy_DecRef(cpy_r_types);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_all_arg_types);
    CPy_DecRef(cpy_r_r32);
    goto CPyL69;
CPyL78: ;
    CPy_DecRef(cpy_r_types);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_all_arg_types);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_typ);
    goto CPyL69;
CPyL79: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL22;
CPyL80: ;
    CPy_DecRef(cpy_r_types);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_all_arg_types);
    CPy_DecRef(cpy_r_all_use_types);
    goto CPyL69;
CPyL81: ;
    CPy_DECREF(cpy_r_r47);
    goto CPyL34;
CPyL82: ;
    CPy_DecRef(cpy_r_types);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_all_arg_types);
    CPy_DecRef(cpy_r_all_use_types);
    CPy_DecRef(cpy_r_r47);
    goto CPyL69;
CPyL83: ;
    CPy_DecRef(cpy_r_types);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_all_arg_types);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_all_use_types);
    CPy_DecRef(cpy_r_r47);
    goto CPyL69;
CPyL84: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL33;
CPyL85: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_all_arg_types);
    CPy_DecRef(cpy_r_all_use_types);
    goto CPyL69;
CPyL86: ;
    CPy_DECREF(cpy_r_default);
    goto CPyL42;
CPyL87: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_all_arg_types);
    CPy_DecRef(cpy_r_all_use_types);
    CPy_DecRef(cpy_r_default);
    goto CPyL69;
CPyL88: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_all_arg_types);
    CPy_DecRef(cpy_r_all_use_types);
    CPy_DecRef(cpy_r_arg_types);
    goto CPyL69;
CPyL89: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_all_use_types);
    CPy_DecRef(cpy_r_arg_types);
    goto CPyL69;
CPyL90: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_all_use_types);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_r94);
    goto CPyL69;
CPyL91: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_all_use_types);
    CPy_DecRef(cpy_r_arg_types);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r99);
    goto CPyL69;
CPyL92: ;
    CPy_DECREF(cpy_r_all_arg_types);
    goto CPyL61;
CPyL93: ;
    CPy_DECREF(cpy_r_r114);
    goto CPyL63;
CPyL94: ;
    CPy_DECREF(cpy_r_all_use_types);
    goto CPyL66;
CPyL95: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_arg_types);
    goto CPyL69;
}

PyObject *CPyPy_suggestions___SuggestionEngine___get_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"is_method", "base", "defaults", "callsites", "uses", 0};
    static CPyArg_Parser parser = {"OOOOO:get_args", kwlist, 0};
    PyObject *obj_is_method;
    PyObject *obj_base;
    PyObject *obj_defaults;
    PyObject *obj_callsites;
    PyObject *obj_uses;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_is_method, &obj_base, &obj_defaults, &obj_callsites, &obj_uses)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    char arg_is_method;
    if (unlikely(!PyBool_Check(obj_is_method))) {
        CPy_TypeError("bool", obj_is_method); goto fail;
    } else
        arg_is_method = obj_is_method == Py_True;
    PyObject *arg_base;
    if (likely(Py_TYPE(obj_base) == CPyType_types___CallableType))
        arg_base = obj_base;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_base); 
        goto fail;
    }
    PyObject *arg_defaults;
    if (likely(PyList_Check(obj_defaults)))
        arg_defaults = obj_defaults;
    else {
        CPy_TypeError("list", obj_defaults); 
        goto fail;
    }
    PyObject *arg_callsites;
    if (likely(PyList_Check(obj_callsites)))
        arg_callsites = obj_callsites;
    else {
        CPy_TypeError("list", obj_callsites); 
        goto fail;
    }
    PyObject *arg_uses;
    if (likely(PyList_Check(obj_uses)))
        arg_uses = obj_uses;
    else {
        CPy_TypeError("list", obj_uses); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___get_args(arg_self, arg_is_method, arg_base, arg_defaults, arg_callsites, arg_uses);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "get_args", 332, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___get_default_arg_types(PyObject *cpy_r_self, PyObject *cpy_r_fdef) {
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
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_arguments;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "get_default_arg_types", "FuncDef", "arguments", 389, CPyStatic_suggestions___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_default_arg_types", 387, CPyStatic_suggestions___globals);
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
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_default_arg_types", 387, CPyStatic_suggestions___globals, "mypy.nodes.Argument", cpy_r_r9);
        goto CPyL17;
    }
    cpy_r_arg = cpy_r_r10;
    cpy_r_r11 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_initializer;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_r11 != cpy_r_r12;
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r13) goto CPyL18;
    cpy_r_r14 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_manager;
    cpy_r_r15 = ((mypy___build___BuildManagerObject *)cpy_r_r14)->_all_types;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_initializer;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_arg);
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_default_arg_types", 388, CPyStatic_suggestions___globals, "mypy.nodes.Expression", cpy_r_r16);
        goto CPyL19;
    }
    cpy_r_r18 = CPyDict_GetItem(cpy_r_r15, cpy_r_r17);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_default_arg_types", 388, CPyStatic_suggestions___globals);
        goto CPyL17;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r18, CPyType_types___Type)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_default_arg_types", 388, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r18);
        goto CPyL17;
    }
    cpy_r_r20 = cpy_r_r19;
    goto CPyL11;
CPyL10: ;
    cpy_r_r21 = Py_None;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r20 = cpy_r_r21;
CPyL11: ;
    cpy_r_r22 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r20);
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_default_arg_types", 387, CPyStatic_suggestions___globals);
        goto CPyL17;
    }
    cpy_r_r23 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r23;
    goto CPyL3;
CPyL13: ;
    return cpy_r_r3;
CPyL14: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL14;
CPyL16: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL14;
CPyL18: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL10;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r15);
    goto CPyL14;
}

PyObject *CPyPy_suggestions___SuggestionEngine___get_default_arg_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fdef", 0};
    static CPyArg_Parser parser = {"O:get_default_arg_types", kwlist, 0};
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___get_default_arg_types(arg_self, arg_fdef);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "get_default_arg_types", 386, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___get_guesses(PyObject *cpy_r_self, char cpy_r_is_method, PyObject *cpy_r_base, PyObject *cpy_r_defaults, PyObject *cpy_r_callsites, PyObject *cpy_r_uses) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_options;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_product;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_r31;
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
    int32_t cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    cpy_r_r0 = CPyDef_suggestions___SuggestionEngine___get_args(cpy_r_self, cpy_r_is_method, cpy_r_base, cpy_r_defaults, cpy_r_callsites, cpy_r_uses);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 404, CPyStatic_suggestions___globals);
        goto CPyL19;
    }
    cpy_r_options = cpy_r_r0;
    cpy_r_r1 = CPyModule_itertools;
    cpy_r_r2 = CPyStatics[763]; /* 'product' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 407, CPyStatic_suggestions___globals);
        goto CPyL20;
    }
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 407, CPyStatic_suggestions___globals);
        goto CPyL21;
    }
    cpy_r_r5 = CPyList_Extend(cpy_r_r4, cpy_r_options);
    CPy_DECREF(cpy_r_options);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 407, CPyStatic_suggestions___globals);
        goto CPyL22;
    } else
        goto CPyL23;
CPyL4: ;
    cpy_r_r6 = PyList_AsTuple(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 407, CPyStatic_suggestions___globals);
        goto CPyL24;
    }
    cpy_r_r7 = PyDict_New();
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 407, CPyStatic_suggestions___globals);
        goto CPyL25;
    }
    cpy_r_r8 = PyObject_Call(cpy_r_r3, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 407, CPyStatic_suggestions___globals);
        goto CPyL19;
    }
    cpy_r_r9 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_max_guesses;
    CPyTagged_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyModule_itertools;
    cpy_r_r11 = CPyStatics[6070]; /* 'islice' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 407, CPyStatic_suggestions___globals);
        goto CPyL26;
    }
    cpy_r_r13 = CPyStatics[9015]; /* 0 */
    cpy_r_r14 = CPyTagged_StealAsObject(cpy_r_r9);
    PyObject *cpy_r_r15[3] = {cpy_r_r8, cpy_r_r13, cpy_r_r14};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r16, 3, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 407, CPyStatic_suggestions___globals);
        goto CPyL27;
    }
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r14);
    cpy_r_product = cpy_r_r17;
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 408, CPyStatic_suggestions___globals);
        goto CPyL28;
    }
    cpy_r_r19 = PyObject_GetIter(cpy_r_product);
    CPy_DECREF(cpy_r_product);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 408, CPyStatic_suggestions___globals);
        goto CPyL29;
    }
CPyL11: ;
    cpy_r_r20 = PyIter_Next(cpy_r_r19);
    if (cpy_r_r20 == NULL) goto CPyL30;
    if (likely(PyTuple_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_guesses", 408, CPyStatic_suggestions___globals, "tuple", cpy_r_r20);
        goto CPyL31;
    }
    cpy_r_x = cpy_r_r21;
    cpy_r_r22 = PySequence_List(cpy_r_x);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 408, CPyStatic_suggestions___globals);
        goto CPyL31;
    }
    cpy_r_r23 = NULL;
    cpy_r_r24 = NULL;
    cpy_r_r25 = NULL;
    cpy_r_r26 = NULL;
    cpy_r_r27 = NULL;
    cpy_r_r28 = NULL;
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPY_INT_TAG;
    cpy_r_r31 = CPY_INT_TAG;
    cpy_r_r32 = NULL;
    cpy_r_r33 = NULL;
    cpy_r_r34 = NULL;
    cpy_r_r35 = NULL;
    cpy_r_r36 = NULL;
    cpy_r_r37 = NULL;
    cpy_r_r38 = NULL;
    cpy_r_r39 = NULL;
    cpy_r_r40 = NULL;
    cpy_r_r41 = CPyDef_types___CallableType___copy_modified(cpy_r_base, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 408, CPyStatic_suggestions___globals);
        goto CPyL31;
    }
    cpy_r_r42 = CPyDef_suggestions___refine_callable(cpy_r_base, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 408, CPyStatic_suggestions___globals);
        goto CPyL31;
    }
    cpy_r_r43 = PyList_Append(cpy_r_r18, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 408, CPyStatic_suggestions___globals);
        goto CPyL31;
    } else
        goto CPyL11;
CPyL17: ;
    cpy_r_r45 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 408, CPyStatic_suggestions___globals);
        goto CPyL29;
    }
    return cpy_r_r18;
CPyL19: ;
    cpy_r_r46 = NULL;
    return cpy_r_r46;
CPyL20: ;
    CPy_DecRef(cpy_r_options);
    goto CPyL19;
CPyL21: ;
    CPy_DecRef(cpy_r_options);
    CPy_DecRef(cpy_r_r3);
    goto CPyL19;
CPyL22: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL19;
CPyL23: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL4;
CPyL24: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL19;
CPyL25: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL19;
CPyL26: ;
    CPy_DecRef(cpy_r_r8);
    CPyTagged_DecRef(cpy_r_r9);
    goto CPyL19;
CPyL27: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r14);
    goto CPyL19;
CPyL28: ;
    CPy_DecRef(cpy_r_product);
    goto CPyL19;
CPyL29: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL19;
CPyL30: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL17;
CPyL31: ;
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL19;
}

PyObject *CPyPy_suggestions___SuggestionEngine___get_guesses(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"is_method", "base", "defaults", "callsites", "uses", 0};
    static CPyArg_Parser parser = {"OOOOO:get_guesses", kwlist, 0};
    PyObject *obj_is_method;
    PyObject *obj_base;
    PyObject *obj_defaults;
    PyObject *obj_callsites;
    PyObject *obj_uses;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_is_method, &obj_base, &obj_defaults, &obj_callsites, &obj_uses)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    char arg_is_method;
    if (unlikely(!PyBool_Check(obj_is_method))) {
        CPy_TypeError("bool", obj_is_method); goto fail;
    } else
        arg_is_method = obj_is_method == Py_True;
    PyObject *arg_base;
    if (likely(Py_TYPE(obj_base) == CPyType_types___CallableType))
        arg_base = obj_base;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_base); 
        goto fail;
    }
    PyObject *arg_defaults;
    if (likely(PyList_Check(obj_defaults)))
        arg_defaults = obj_defaults;
    else {
        CPy_TypeError("list", obj_defaults); 
        goto fail;
    }
    PyObject *arg_callsites;
    if (likely(PyList_Check(obj_callsites)))
        arg_callsites = obj_callsites;
    else {
        CPy_TypeError("list", obj_callsites); 
        goto fail;
    }
    PyObject *arg_uses;
    if (likely(PyList_Check(obj_uses)))
        arg_uses = obj_uses;
    else {
        CPy_TypeError("list", obj_uses); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___get_guesses(arg_self, arg_is_method, arg_base, arg_defaults, arg_callsites, arg_uses);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "get_guesses", 392, CPyStatic_suggestions___globals);
    return NULL;
}

tuple_T2OO CPyDef_suggestions___SuggestionEngine___get_callsites(PyObject *cpy_r_self, PyObject *cpy_r_func) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_errors;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_new_type;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_collector_plugin;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T3OOO cpy_r_r9;
    tuple_T3OOO cpy_r_r10;
    tuple_T3OOO cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    tuple_T2OO cpy_r_r19;
    tuple_T2OO cpy_r_r20;
    cpy_r_r0 = NULL;
    cpy_r_errors = cpy_r_r0;
    cpy_r_r1 = CPyDef_suggestions___SuggestionEngine___get_starting_type(cpy_r_self, cpy_r_func);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_callsites", 412, CPyStatic_suggestions___globals);
        goto CPyL22;
    }
    cpy_r_new_type = cpy_r_r1;
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_func, CPyType_nodes___FuncDef, 7, mypy___nodes___FuncDefObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_callsites", 414, CPyStatic_suggestions___globals);
        goto CPyL23;
    }
CPyL2: ;
    cpy_r_r3 = CPyDef_suggestions___SuggestionPlugin(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_callsites", 414, CPyStatic_suggestions___globals);
        goto CPyL23;
    }
    cpy_r_collector_plugin = cpy_r_r3;
    cpy_r_r4 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_plugin;
    cpy_r_r5 = ((mypy___plugin___ChainedPluginObject *)cpy_r_r4)->__plugins;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyList_Insert(cpy_r_r5, 0, cpy_r_collector_plugin);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_callsites", 416, CPyStatic_suggestions___globals);
        goto CPyL24;
    }
    cpy_r_r8 = CPyDef_suggestions___SuggestionEngine___try_type(cpy_r_self, cpy_r_func, cpy_r_new_type);
    CPy_DECREF(cpy_r_new_type);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_callsites", 418, CPyStatic_suggestions___globals);
        goto CPyL7;
    } else
        goto CPyL25;
CPyL5: ;
    cpy_r_errors = cpy_r_r8;
    tuple_T3OOO __tmp7441 = { NULL, NULL, NULL };
    cpy_r_r9 = __tmp7441;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL8;
CPyL7: ;
    cpy_r_r11 = CPy_CatchError();
    cpy_r_r10 = cpy_r_r11;
CPyL8: ;
    cpy_r_r12 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_plugin;
    cpy_r_r13 = ((mypy___plugin___ChainedPluginObject *)cpy_r_r12)->__plugins;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyList_Pop(cpy_r_r13, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_callsites", 420, CPyStatic_suggestions___globals);
        goto CPyL26;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_plugin___Plugin)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeError("mypy.plugin.Plugin", cpy_r_r14); 
        cpy_r_r15 = NULL;
    }
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_callsites", 420, CPyStatic_suggestions___globals);
        goto CPyL26;
    } else
        goto CPyL27;
CPyL10: ;
    if (cpy_r_r10.f0 == NULL) {
        goto CPyL17;
    } else
        goto CPyL28;
CPyL11: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL13;
    } else
        goto CPyL29;
CPyL12: ;
    CPy_Unreachable();
CPyL13: ;
    if (cpy_r_r10.f0 == NULL) goto CPyL15;
    CPy_RestoreExcInfo(cpy_r_r10);
    CPy_XDECREF(cpy_r_r10.f0);
    CPy_XDECREF(cpy_r_r10.f1);
    CPy_XDECREF(cpy_r_r10.f2);
CPyL15: ;
    cpy_r_r16 = CPy_KeepPropagating();
    if (!cpy_r_r16) goto CPyL21;
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r17 = ((mypy___suggestions___SuggestionPluginObject *)cpy_r_collector_plugin)->_mystery_hits;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_collector_plugin);
    if (cpy_r_errors == NULL) {
        goto CPyL30;
    } else
        goto CPyL20;
CPyL18: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"errors\" referenced before assignment");
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_callsites", 422, CPyStatic_suggestions___globals);
        goto CPyL21;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r19.f0 = cpy_r_r17;
    cpy_r_r19.f1 = cpy_r_errors;
    CPy_INCREF(cpy_r_r19.f0);
    CPy_INCREF(cpy_r_r19.f1);
    CPy_DECREF(cpy_r_r17);
    CPy_XDECREF(cpy_r_errors);
    return cpy_r_r19;
CPyL21: ;
    tuple_T2OO __tmp7442 = { NULL, NULL };
    cpy_r_r20 = __tmp7442;
    return cpy_r_r20;
CPyL22: ;
    CPy_XDecRef(cpy_r_errors);
    goto CPyL21;
CPyL23: ;
    CPy_XDecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_new_type);
    goto CPyL21;
CPyL24: ;
    CPy_XDecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_collector_plugin);
    goto CPyL21;
CPyL25: ;
    CPy_XDECREF(cpy_r_errors);
    goto CPyL5;
CPyL26: ;
    CPy_XDecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_collector_plugin);
    goto CPyL13;
CPyL27: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL10;
CPyL28: ;
    CPy_XDECREF(cpy_r_errors);
    CPy_DECREF(cpy_r_collector_plugin);
    goto CPyL11;
CPyL29: ;
    CPy_XDECREF(cpy_r_r10.f0);
    CPy_XDECREF(cpy_r_r10.f1);
    CPy_XDECREF(cpy_r_r10.f2);
    goto CPyL12;
CPyL30: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL18;
}

PyObject *CPyPy_suggestions___SuggestionEngine___get_callsites(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"func", 0};
    static CPyArg_Parser parser = {"O:get_callsites", kwlist, 0};
    PyObject *obj_func;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_func)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_func;
    if (likely(Py_TYPE(obj_func) == CPyType_nodes___FuncDef))
        arg_func = obj_func;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_func); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_suggestions___SuggestionEngine___get_callsites(arg_self, arg_func);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7443 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp7443);
    PyObject *__tmp7444 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp7444);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "get_callsites", 410, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___filter_options(PyObject *cpy_r_self, PyObject *cpy_r_guesses, char cpy_r_is_method, char cpy_r_ignore_return) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    double cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    double cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "filter_options", 430, CPyStatic_suggestions___globals);
        goto CPyL15;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_guesses)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL14;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_guesses, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_types___CallableType))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "filter_options", 430, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_r6);
        goto CPyL16;
    }
    cpy_r_t = cpy_r_r7;
    cpy_r_r8 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_flex_any;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 == cpy_r_r9;
    if (!cpy_r_r10) goto CPyL6;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL11;
CPyL6: ;
    cpy_r_r12 = CPyDef_suggestions___any_score_callable(cpy_r_t, cpy_r_is_method, cpy_r_ignore_return);
    cpy_r_r13 = cpy_r_r12 == -113.0;
    if (unlikely(cpy_r_r13)) goto CPyL8;
CPyL7: ;
    cpy_r_r14 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_flex_any;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = PyFloat_AsDouble(cpy_r_r14);
    if (cpy_r_r15 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r14); cpy_r_r15 = -113.0;
    }
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 == -113.0;
    if (unlikely(cpy_r_r16)) {
        goto CPyL10;
    } else
        goto CPyL9;
CPyL8: ;
    cpy_r_r17 = PyErr_Occurred();
    if (unlikely(cpy_r_r17 != NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "filter_options", 434, CPyStatic_suggestions___globals);
        goto CPyL17;
    } else
        goto CPyL7;
CPyL9: ;
    cpy_r_r18 = cpy_r_r12 >= cpy_r_r15;
    cpy_r_r11 = cpy_r_r18;
    goto CPyL11;
CPyL10: ;
    cpy_r_r19 = PyErr_Occurred();
    if (unlikely(cpy_r_r19 != NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "filter_options", 434, CPyStatic_suggestions___globals);
        goto CPyL17;
    } else
        goto CPyL9;
CPyL11: ;
    if (!cpy_r_r11) goto CPyL18;
    cpy_r_r20 = PyList_Append(cpy_r_r0, cpy_r_t);
    CPy_DECREF(cpy_r_t);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/suggestions.py", "filter_options", 430, CPyStatic_suggestions___globals);
        goto CPyL16;
    }
CPyL13: ;
    cpy_r_r22 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r22;
    goto CPyL2;
CPyL14: ;
    return cpy_r_r0;
CPyL15: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_t);
    goto CPyL15;
CPyL18: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL13;
}

PyObject *CPyPy_suggestions___SuggestionEngine___filter_options(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"guesses", "is_method", "ignore_return", 0};
    static CPyArg_Parser parser = {"OOO:filter_options", kwlist, 0};
    PyObject *obj_guesses;
    PyObject *obj_is_method;
    PyObject *obj_ignore_return;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_guesses, &obj_is_method, &obj_ignore_return)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_guesses;
    if (likely(PyList_Check(obj_guesses)))
        arg_guesses = obj_guesses;
    else {
        CPy_TypeError("list", obj_guesses); 
        goto fail;
    }
    char arg_is_method;
    if (unlikely(!PyBool_Check(obj_is_method))) {
        CPy_TypeError("bool", obj_is_method); goto fail;
    } else
        arg_is_method = obj_is_method == Py_True;
    char arg_ignore_return;
    if (unlikely(!PyBool_Check(obj_ignore_return))) {
        CPy_TypeError("bool", obj_ignore_return); goto fail;
    } else
        arg_ignore_return = obj_ignore_return == Py_True;
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___filter_options(arg_self, arg_guesses, arg_is_method, arg_ignore_return);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "filter_options", 424, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "__get__", -1, CPyStatic_suggestions___globals);
    return NULL;
}

tuple_T2II CPyDef_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    tuple_T2II cpy_r_r7;
    tuple_T2II cpy_r_r8;
    cpy_r_r0 = ((mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "<lambda>", "__mypyc_lambda__1_find_best_SuggestionEngine_obj", "__mypyc_env__", 445, CPyStatic_suggestions___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___suggestions___find_best_SuggestionEngine_envObject *)cpy_r_r0)->_errors;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "<lambda>", "find_best_SuggestionEngine_env", "errors", 445, CPyStatic_suggestions___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r1, cpy_r_s);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<lambda>", 445, CPyStatic_suggestions___globals);
        goto CPyL9;
    }
    if (likely(PyList_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "<lambda>", 445, CPyStatic_suggestions___globals, "list", cpy_r_r2);
        goto CPyL9;
    }
    cpy_r_r4 = CPyDef_suggestions___count_errors(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/suggestions.py", "<lambda>", 445, CPyStatic_suggestions___globals);
        goto CPyL9;
    }
    cpy_r_r5 = ((mypy___suggestions___find_best_SuggestionEngine_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r5 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'self' of 'find_best_SuggestionEngine_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r5);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<lambda>", 445, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
CPyL6: ;
    cpy_r_r6 = CPyDef_suggestions___SuggestionEngine___score_callable(cpy_r_r5, cpy_r_s);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/suggestions.py", "<lambda>", 445, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
    cpy_r_r7.f0 = cpy_r_r4;
    cpy_r_r7.f1 = cpy_r_r6;
    CPyTagged_INCREF(cpy_r_r7.f0);
    CPyTagged_INCREF(cpy_r_r7.f1);
    CPyTagged_DECREF(cpy_r_r4);
    CPyTagged_DECREF(cpy_r_r6);
    return cpy_r_r7;
CPyL8: ;
    tuple_T2II __tmp7445 = { CPY_INT_TAG, CPY_INT_TAG };
    cpy_r_r8 = __tmp7445;
    return cpy_r_r8;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPyTagged_DecRef(cpy_r_r4);
    goto CPyL8;
}

PyObject *CPyPy_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_types___CallableType))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_s); 
        goto fail;
    }
    tuple_T2II retval = CPyDef_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj_____call__(arg___mypyc_self__, arg_s);
    if (retval.f0 == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7446 = CPyTagged_StealAsObject(retval.f0);
    PyTuple_SET_ITEM(retbox, 0, __tmp7446);
    PyObject *__tmp7447 = CPyTagged_StealAsObject(retval.f1);
    PyTuple_SET_ITEM(retbox, 1, __tmp7447);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "<lambda>", 445, CPyStatic_suggestions___globals);
    return NULL;
}

tuple_T2OI CPyDef_suggestions___SuggestionEngine___find_best(PyObject *cpy_r_self, PyObject *cpy_r_func, PyObject *cpy_r_guesses) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_guess;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject **cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_best;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    tuple_T2OI cpy_r_r40;
    tuple_T2OI cpy_r_r41;
    cpy_r_r0 = CPyDef_suggestions___find_best_SuggestionEngine_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_best", 437, CPyStatic_suggestions___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___suggestions___find_best_SuggestionEngine_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___suggestions___find_best_SuggestionEngine_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___suggestions___find_best_SuggestionEngine_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_best", 437, CPyStatic_suggestions___globals);
        goto CPyL27;
    }
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_guesses)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = cpy_r_r4 != 0;
    if (cpy_r_r5) {
        goto CPyL7;
    } else
        goto CPyL28;
CPyL3: ;
    cpy_r_r6 = CPyStatics[6071]; /* 'No guesses that match criteria!' */
    cpy_r_r7 = (PyObject *)CPyType_suggestions___SuggestionFailure;
    PyObject *cpy_r_r8[1] = {cpy_r_r6};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r9, 1, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_best", 443, CPyStatic_suggestions___globals);
        goto CPyL26;
    }
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_suggestions___SuggestionFailure))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_best", 443, CPyStatic_suggestions___globals, "mypy.suggestions.SuggestionFailure", cpy_r_r10);
        goto CPyL26;
    }
    CPy_Raise(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_best", 443, CPyStatic_suggestions___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r12 = PyDict_New();
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_best", 444, CPyStatic_suggestions___globals);
        goto CPyL27;
    }
    cpy_r_r13 = 0;
CPyL9: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_guesses)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r13 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL15;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_guesses, cpy_r_r13);
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_types___CallableType))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_best", 444, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_r18);
        goto CPyL29;
    }
    cpy_r_guess = cpy_r_r19;
    cpy_r_r20 = ((mypy___suggestions___find_best_SuggestionEngine_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "find_best", "find_best_SuggestionEngine_env", "self", 444, CPyStatic_suggestions___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r20);
CPyL12: ;
    cpy_r_r21 = CPyDef_suggestions___SuggestionEngine___try_type(cpy_r_r20, cpy_r_func, cpy_r_guess);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_best", 444, CPyStatic_suggestions___globals);
        goto CPyL30;
    }
    cpy_r_r22 = CPyDict_SetItem(cpy_r_r12, cpy_r_guess, cpy_r_r21);
    CPy_DECREF(cpy_r_guess);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_best", 444, CPyStatic_suggestions___globals);
        goto CPyL29;
    }
    cpy_r_r24 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r24;
    goto CPyL9;
CPyL15: ;
    if (((mypy___suggestions___find_best_SuggestionEngine_envObject *)cpy_r_r0)->_errors != NULL) {
        CPy_DECREF(((mypy___suggestions___find_best_SuggestionEngine_envObject *)cpy_r_r0)->_errors);
    }
    ((mypy___suggestions___find_best_SuggestionEngine_envObject *)cpy_r_r0)->_errors = cpy_r_r12;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_best", 444, CPyStatic_suggestions___globals);
        goto CPyL27;
    }
    cpy_r_r26 = CPyDef_suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_obj();
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_best", 445, CPyStatic_suggestions___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject *)cpy_r_r26)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject *)cpy_r_r26)->___mypyc_env__);
    }
    ((mypy___suggestions_____mypyc_lambda__1_find_best_SuggestionEngine_objObject *)cpy_r_r26)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r27 = 1;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_best", 445, CPyStatic_suggestions___globals);
        goto CPyL31;
    }
    cpy_r_r28 = CPyModule_builtins;
    cpy_r_r29 = CPyStatics[469]; /* 'min' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_best", 445, CPyStatic_suggestions___globals);
        goto CPyL31;
    }
    PyObject *cpy_r_r31[2] = {cpy_r_guesses, cpy_r_r26};
    cpy_r_r32 = (PyObject **)&cpy_r_r31;
    cpy_r_r33 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r34 = _PyObject_Vectorcall(cpy_r_r30, cpy_r_r32, 1, cpy_r_r33);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_best", 445, CPyStatic_suggestions___globals);
        goto CPyL31;
    }
    CPy_DECREF(cpy_r_r26);
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_types___CallableType))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_best", 445, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_r34);
        goto CPyL27;
    }
    cpy_r_best = cpy_r_r35;
    cpy_r_r36 = ((mypy___suggestions___find_best_SuggestionEngine_envObject *)cpy_r_r0)->_errors;
    if (unlikely(cpy_r_r36 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'errors' of 'find_best_SuggestionEngine_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r36);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_best", 446, CPyStatic_suggestions___globals);
        goto CPyL32;
    }
CPyL22: ;
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r36, cpy_r_best);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_best", 446, CPyStatic_suggestions___globals);
        goto CPyL32;
    }
    if (likely(PyList_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_best", 446, CPyStatic_suggestions___globals, "list", cpy_r_r37);
        goto CPyL32;
    }
    cpy_r_r39 = CPyDef_suggestions___count_errors(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_best", 446, CPyStatic_suggestions___globals);
        goto CPyL32;
    }
    cpy_r_r40.f0 = cpy_r_best;
    cpy_r_r40.f1 = cpy_r_r39;
    CPy_INCREF(cpy_r_r40.f0);
    CPyTagged_INCREF(cpy_r_r40.f1);
    CPy_DECREF(cpy_r_best);
    CPyTagged_DECREF(cpy_r_r39);
    return cpy_r_r40;
CPyL26: ;
    tuple_T2OI __tmp7448 = { NULL, CPY_INT_TAG };
    cpy_r_r41 = __tmp7448;
    return cpy_r_r41;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL26;
CPyL28: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    goto CPyL26;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_guess);
    goto CPyL26;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r26);
    goto CPyL26;
CPyL32: ;
    CPy_DecRef(cpy_r_best);
    goto CPyL26;
}

PyObject *CPyPy_suggestions___SuggestionEngine___find_best(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"func", "guesses", 0};
    static CPyArg_Parser parser = {"OO:find_best", kwlist, 0};
    PyObject *obj_func;
    PyObject *obj_guesses;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_func, &obj_guesses)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_func;
    if (likely(Py_TYPE(obj_func) == CPyType_nodes___FuncDef))
        arg_func = obj_func;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_func); 
        goto fail;
    }
    PyObject *arg_guesses;
    if (likely(PyList_Check(obj_guesses)))
        arg_guesses = obj_guesses;
    else {
        CPy_TypeError("list", obj_guesses); 
        goto fail;
    }
    tuple_T2OI retval = CPyDef_suggestions___SuggestionEngine___find_best(arg_self, arg_func, arg_guesses);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7449 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp7449);
    PyObject *__tmp7450 = CPyTagged_StealAsObject(retval.f1);
    PyTuple_SET_ITEM(retbox, 1, __tmp7450);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "find_best", 437, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___get_guesses_from_parent(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_parent;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_pnode;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
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
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    int64_t cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    int64_t cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyPtr cpy_r_r60;
    CPyPtr cpy_r_r61;
    CPyTagged cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    cpy_r_r0 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses_from_parent", 450, CPyStatic_suggestions___globals);
        goto CPyL39;
    }
    if (cpy_r_r1) goto CPyL4;
    cpy_r_r2 = PyList_New(0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses_from_parent", 451, CPyStatic_suggestions___globals);
        goto CPyL39;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_info;
    cpy_r_r4 = ((mypy___nodes___TypeInfoObject *)cpy_r_r3)->_mro;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "get_guesses_from_parent", "TypeInfo", "mro", 453, CPyStatic_suggestions___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_r5 = CPyList_GetSlice(cpy_r_r4, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses_from_parent", 453, CPyStatic_suggestions___globals);
        goto CPyL39;
    }
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_guesses_from_parent", 453, CPyStatic_suggestions___globals, "list", cpy_r_r5);
        goto CPyL39;
    }
    cpy_r_r7 = 0;
CPyL8: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL40;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r6, cpy_r_r7);
    if (likely((Py_TYPE(cpy_r_r12) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r12) == CPyType_nodes___TypeInfo)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_guesses_from_parent", 453, CPyStatic_suggestions___globals, "mypy.nodes.TypeInfo", cpy_r_r12);
        goto CPyL41;
    }
    cpy_r_parent = cpy_r_r13;
    cpy_r_r14 = ((mypy___nodes___TypeInfoObject *)cpy_r_parent)->_names;
    if (unlikely(cpy_r_r14 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r14);
    }
    CPy_DECREF(cpy_r_parent);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses_from_parent", 454, CPyStatic_suggestions___globals);
        goto CPyL41;
    }
CPyL11: ;
    cpy_r_r15 = CPY_GET_ATTR(cpy_r_node, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses_from_parent", 454, CPyStatic_suggestions___globals);
        goto CPyL42;
    }
CPyL12: ;
    cpy_r_r16 = CPyDict_GetWithNone(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses_from_parent", 454, CPyStatic_suggestions___globals);
        goto CPyL41;
    }
    if (Py_TYPE(cpy_r_r16) == CPyType_nodes___SymbolTableNode)
        cpy_r_r17 = cpy_r_r16;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL7451;
    if (cpy_r_r16 == Py_None)
        cpy_r_r17 = cpy_r_r16;
    else {
        cpy_r_r17 = NULL;
    }
    if (cpy_r_r17 != NULL) goto __LL7451;
    CPy_TypeErrorTraceback("mypy/suggestions.py", "get_guesses_from_parent", 454, CPyStatic_suggestions___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r16);
    goto CPyL41;
__LL7451: ;
    cpy_r_pnode = cpy_r_r17;
    cpy_r_r18 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r19 = cpy_r_pnode != cpy_r_r18;
    if (!cpy_r_r19) goto CPyL43;
    if (likely(cpy_r_pnode != Py_None))
        cpy_r_r20 = cpy_r_pnode;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_guesses_from_parent", 455, CPyStatic_suggestions___globals, "mypy.nodes.SymbolTableNode", cpy_r_pnode);
        goto CPyL44;
    }
    cpy_r_r21 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r20)->_node;
    cpy_r_r22 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r23 = (CPyPtr)&((PyObject *)cpy_r_r21)->ob_type;
    cpy_r_r24 = *(PyObject * *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 == cpy_r_r22;
    if (!cpy_r_r25) goto CPyL18;
    cpy_r_r26 = cpy_r_r25;
    goto CPyL19;
CPyL18: ;
    cpy_r_r27 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r28 = (CPyPtr)&((PyObject *)cpy_r_r21)->ob_type;
    cpy_r_r29 = *(PyObject * *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 == cpy_r_r27;
    cpy_r_r26 = cpy_r_r30;
CPyL19: ;
    if (!cpy_r_r26) goto CPyL43;
    if (likely(cpy_r_pnode != Py_None))
        cpy_r_r31 = cpy_r_pnode;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_guesses_from_parent", 456, CPyStatic_suggestions___globals, "mypy.nodes.SymbolTableNode", cpy_r_pnode);
        goto CPyL44;
    }
    cpy_r_r32 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r31)->_node;
    CPy_INCREF(cpy_r_r32);
    if (Py_TYPE(cpy_r_r32) == CPyType_nodes___FuncDef)
        cpy_r_r33 = cpy_r_r32;
    else {
        cpy_r_r33 = NULL;
    }
    if (cpy_r_r33 != NULL) goto __LL7452;
    if (Py_TYPE(cpy_r_r32) == CPyType_nodes___Decorator)
        cpy_r_r33 = cpy_r_r32;
    else {
        cpy_r_r33 = NULL;
    }
    if (cpy_r_r33 != NULL) goto __LL7452;
    CPy_TypeErrorTraceback("mypy/suggestions.py", "get_guesses_from_parent", 456, CPyStatic_suggestions___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r32);
    goto CPyL44;
__LL7452: ;
    CPy_DECREF(cpy_r_pnode);
    cpy_r_r34 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_r33)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    if (!cpy_r_r37) goto CPyL25;
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_nodes___FuncDef))
        cpy_r_r38 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_guesses_from_parent", 456, CPyStatic_suggestions___globals, "mypy.nodes.FuncDef", cpy_r_r33);
        goto CPyL41;
    }
    cpy_r_r39 = ((mypy___nodes___FuncDefObject *)cpy_r_r38)->_type;
    CPy_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39;
    goto CPyL28;
CPyL25: ;
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_nodes___Decorator))
        cpy_r_r41 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_guesses_from_parent", 456, CPyStatic_suggestions___globals, "mypy.nodes.Decorator", cpy_r_r33);
        goto CPyL41;
    }
    cpy_r_r42 = CPY_GET_ATTR(cpy_r_r41, CPyType_nodes___Decorator, 10, mypy___nodes___DecoratorObject, PyObject *); /* type */
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses_from_parent", 456, CPyStatic_suggestions___globals);
        goto CPyL41;
    }
CPyL27: ;
    cpy_r_r40 = cpy_r_r42;
CPyL28: ;
    cpy_r_r43 = CPyDef_types___get_proper_type(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses_from_parent", 456, CPyStatic_suggestions___globals);
        goto CPyL41;
    }
    cpy_r_typ = cpy_r_r43;
    cpy_r_r44 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r45 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r46 = *(PyObject * *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 == cpy_r_r44;
    if (!cpy_r_r47) goto CPyL45;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___CallableType))
        cpy_r_r48 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_guesses_from_parent", 458, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_typ);
        goto CPyL46;
    }
    cpy_r_r49 = ((mypy___types___CallableTypeObject *)cpy_r_r48)->_arg_types;
    cpy_r_r50 = (CPyPtr)&((PyVarObject *)cpy_r_r49)->ob_size;
    cpy_r_r51 = *(int64_t *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 << 1;
    cpy_r_r53 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_arguments;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "get_guesses_from_parent", "FuncDef", "arguments", 458, CPyStatic_suggestions___globals);
        goto CPyL46;
    }
CPyL32: ;
    cpy_r_r54 = (CPyPtr)&((PyVarObject *)cpy_r_r53)->ob_size;
    cpy_r_r55 = *(int64_t *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 << 1;
    cpy_r_r57 = cpy_r_r52 == cpy_r_r56;
    if (cpy_r_r57) {
        goto CPyL47;
    } else
        goto CPyL45;
CPyL33: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___CallableType))
        cpy_r_r58 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_guesses_from_parent", 461, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_typ);
        goto CPyL39;
    }
    cpy_r_r59 = PyList_New(1);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses_from_parent", 461, CPyStatic_suggestions___globals);
        goto CPyL48;
    }
    cpy_r_r60 = (CPyPtr)&((PyListObject *)cpy_r_r59)->ob_item;
    cpy_r_r61 = *(CPyPtr *)cpy_r_r60;
    *(PyObject * *)cpy_r_r61 = cpy_r_r58;
    return cpy_r_r59;
CPyL36: ;
    cpy_r_r62 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r62;
    goto CPyL8;
CPyL37: ;
    cpy_r_r63 = PyList_New(0);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_guesses_from_parent", 463, CPyStatic_suggestions___globals);
        goto CPyL39;
    }
    return cpy_r_r63;
CPyL39: ;
    cpy_r_r64 = NULL;
    return cpy_r_r64;
CPyL40: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL37;
CPyL41: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL39;
CPyL42: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r14);
    goto CPyL39;
CPyL43: ;
    CPy_DECREF(cpy_r_pnode);
    goto CPyL36;
CPyL44: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_pnode);
    goto CPyL39;
CPyL45: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL36;
CPyL46: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_typ);
    goto CPyL39;
CPyL47: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL33;
CPyL48: ;
    CPy_DecRef(cpy_r_r58);
    goto CPyL39;
}

PyObject *CPyPy_suggestions___SuggestionEngine___get_guesses_from_parent(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:get_guesses_from_parent", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___FuncDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___get_guesses_from_parent(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "get_guesses_from_parent", 448, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___get_suggestion(PyObject *cpy_r_self, PyObject *cpy_r_mod, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_guesses;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_ret_types;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_graph;
    tuple_T2OO cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_callsites;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_orig_errors;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_uses;
    char cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_is_method;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    tuple_T3OOO cpy_r_r48;
    tuple_T3OOO cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject **cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    tuple_T3OOO cpy_r_r60;
    tuple_T3OOO cpy_r_r61;
    tuple_T3OOO cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    tuple_T2OI cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_best;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r__;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_returns;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject **cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject **cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    CPyPtr cpy_r_r101;
    int64_t cpy_r_r102;
    CPyTagged cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    CPyTagged cpy_r_r106;
    CPyTagged cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyPtr cpy_r_r110;
    CPyPtr cpy_r_r111;
    tuple_T3OOO cpy_r_r112;
    tuple_T3OOO cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject **cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    char cpy_r_r123;
    tuple_T3OOO cpy_r_r124;
    tuple_T3OOO cpy_r_r125;
    tuple_T3OOO cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject **cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    char cpy_r_r132;
    CPyPtr cpy_r_r133;
    int64_t cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    CPyTagged cpy_r_r137;
    char cpy_r_r138;
    CPyPtr cpy_r_r139;
    int64_t cpy_r_r140;
    char cpy_r_r141;
    CPyTagged cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    CPyTagged cpy_r_r156;
    CPyTagged cpy_r_r157;
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
    CPyTagged cpy_r_r169;
    PyObject *cpy_r_r170;
    tuple_T2OI cpy_r_r171;
    PyObject *cpy_r_r172;
    CPyTagged cpy_r_r173;
    CPyTagged cpy_r_errors;
    char cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject **cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    cpy_r_r0 = NULL;
    cpy_r_guesses = cpy_r_r0;
    cpy_r_r1 = NULL;
    cpy_r_ret_types = cpy_r_r1;
    cpy_r_r2 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_graph;
    CPy_INCREF(cpy_r_r2);
    cpy_r_graph = cpy_r_r2;
    cpy_r_r3 = CPyDef_suggestions___SuggestionEngine___get_callsites(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 471, CPyStatic_suggestions___globals);
        goto CPyL128;
    }
    cpy_r_r4 = cpy_r_r3.f0;
    CPy_INCREF(cpy_r_r4);
    cpy_r_callsites = cpy_r_r4;
    cpy_r_r5 = cpy_r_r3.f1;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r3.f0);
    CPy_DECREF(cpy_r_r3.f1);
    cpy_r_orig_errors = cpy_r_r5;
    cpy_r_r6 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_manager;
    cpy_r_r7 = ((mypy___build___BuildManagerObject *)cpy_r_r6)->_all_types;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_suggestions___get_arg_uses(cpy_r_r7, cpy_r_node);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 472, CPyStatic_suggestions___globals);
        goto CPyL129;
    }
    cpy_r_uses = cpy_r_r8;
    cpy_r_r9 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_no_errors;
    if (!cpy_r_r9) goto CPyL130;
CPyL3: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_orig_errors)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    CPy_DECREF(cpy_r_orig_errors);
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = cpy_r_r12 != 0;
    if (cpy_r_r13) {
        goto CPyL131;
    } else
        goto CPyL8;
CPyL4: ;
    cpy_r_r14 = CPyStatics[6072]; /* 'Function does not typecheck.' */
    cpy_r_r15 = (PyObject *)CPyType_suggestions___SuggestionFailure;
    PyObject *cpy_r_r16[1] = {cpy_r_r14};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 1, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 475, CPyStatic_suggestions___globals);
        goto CPyL127;
    }
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_suggestions___SuggestionFailure))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_suggestion", 475, CPyStatic_suggestions___globals, "mypy.suggestions.SuggestionFailure", cpy_r_r18);
        goto CPyL127;
    }
    CPy_Raise(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 475, CPyStatic_suggestions___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r20 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_info;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 477, CPyStatic_suggestions___globals);
        goto CPyL132;
    }
    if (cpy_r_r21) goto CPyL11;
    cpy_r_r22 = cpy_r_r21;
    goto CPyL12;
CPyL11: ;
    cpy_r_r23 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_is_static;
    cpy_r_r24 = cpy_r_r23 ^ 1;
    cpy_r_r22 = cpy_r_r24;
CPyL12: ;
    cpy_r_is_method = cpy_r_r22;
    cpy_r_r25 = CPyStatic_state___state;
    if (unlikely(cpy_r_r25 == NULL)) {
        goto CPyL133;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 479, CPyStatic_suggestions___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r27 = CPyDict_GetItem(cpy_r_graph, cpy_r_mod);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 479, CPyStatic_suggestions___globals);
        goto CPyL132;
    }
    if (likely(Py_TYPE(cpy_r_r27) == CPyType_mypy___build___State))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_suggestion", 479, CPyStatic_suggestions___globals, "mypy.build.State", cpy_r_r27);
        goto CPyL132;
    }
    cpy_r_r29 = ((mypy___build___StateObject *)cpy_r_r28)->_options;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "get_suggestion", "State", "options", 479, CPyStatic_suggestions___globals);
        goto CPyL134;
    }
CPyL18: ;
    cpy_r_r30 = ((mypy___options___OptionsObject *)cpy_r_r29)->_strict_optional;
    CPy_DECREF(cpy_r_r28);
    cpy_r_r31 = CPyStatics[692]; /* 'strict_optional_set' */
    cpy_r_r32 = cpy_r_r30 ? Py_True : Py_False;
    PyObject *cpy_r_r33[2] = {cpy_r_r25, cpy_r_r32};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = PyObject_VectorcallMethod(cpy_r_r31, cpy_r_r34, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 479, CPyStatic_suggestions___globals);
        goto CPyL132;
    }
    cpy_r_r36 = PyObject_Type(cpy_r_r35);
    cpy_r_r37 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 479, CPyStatic_suggestions___globals);
        goto CPyL135;
    }
    cpy_r_r39 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r39);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 479, CPyStatic_suggestions___globals);
        goto CPyL136;
    }
    PyObject *cpy_r_r41[1] = {cpy_r_r35};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = _PyObject_Vectorcall(cpy_r_r40, cpy_r_r42, 1, 0);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 479, CPyStatic_suggestions___globals);
        goto CPyL136;
    } else
        goto CPyL137;
CPyL22: ;
    cpy_r_r44 = 1;
    cpy_r_r45 = CPyDef_suggestions___SuggestionEngine___get_starting_type(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 482, CPyStatic_suggestions___globals);
        goto CPyL138;
    }
    cpy_r_r46 = CPyDef_suggestions___SuggestionEngine___get_default_arg_types(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 483, CPyStatic_suggestions___globals);
        goto CPyL139;
    }
    cpy_r_r47 = CPyDef_suggestions___SuggestionEngine___get_guesses(cpy_r_self, cpy_r_is_method, cpy_r_r45, cpy_r_r46, cpy_r_callsites, cpy_r_uses);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_callsites);
    CPy_DECREF(cpy_r_uses);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 480, CPyStatic_suggestions___globals);
        goto CPyL27;
    } else
        goto CPyL140;
CPyL26: ;
    cpy_r_guesses = cpy_r_r47;
    goto CPyL35;
CPyL27: ;
    cpy_r_r48 = CPy_CatchError();
    cpy_r_r44 = 0;
    cpy_r_r49 = CPy_GetExcInfo();
    cpy_r_r50 = cpy_r_r49.f0;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = cpy_r_r49.f1;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = cpy_r_r49.f2;
    CPy_INCREF(cpy_r_r52);
    CPy_DecRef(cpy_r_r49.f0);
    CPy_DecRef(cpy_r_r49.f1);
    CPy_DecRef(cpy_r_r49.f2);
    PyObject *cpy_r_r53[4] = {cpy_r_r35, cpy_r_r50, cpy_r_r51, cpy_r_r52};
    cpy_r_r54 = (PyObject **)&cpy_r_r53;
    cpy_r_r55 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r54, 4, 0);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 479, CPyStatic_suggestions___globals);
        goto CPyL141;
    }
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    cpy_r_r56 = PyObject_IsTrue(cpy_r_r55);
    CPy_DecRef(cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 479, CPyStatic_suggestions___globals);
        goto CPyL33;
    }
    cpy_r_r58 = cpy_r_r56;
    if (cpy_r_r58) goto CPyL32;
    CPy_Reraise();
    if (!0) {
        goto CPyL33;
    } else
        goto CPyL142;
CPyL31: ;
    CPy_Unreachable();
CPyL32: ;
    CPy_RestoreExcInfo(cpy_r_r48);
    CPy_DecRef(cpy_r_r48.f0);
    CPy_DecRef(cpy_r_r48.f1);
    CPy_DecRef(cpy_r_r48.f2);
    goto CPyL35;
CPyL33: ;
    CPy_RestoreExcInfo(cpy_r_r48);
    CPy_DecRef(cpy_r_r48.f0);
    CPy_DecRef(cpy_r_r48.f1);
    CPy_DecRef(cpy_r_r48.f2);
    cpy_r_r59 = CPy_KeepPropagating();
    if (!cpy_r_r59) {
        goto CPyL36;
    } else
        goto CPyL143;
CPyL34: ;
    CPy_Unreachable();
CPyL35: ;
    tuple_T3OOO __tmp7453 = { NULL, NULL, NULL };
    cpy_r_r60 = __tmp7453;
    cpy_r_r61 = cpy_r_r60;
    goto CPyL37;
CPyL36: ;
    cpy_r_r62 = CPy_CatchError();
    cpy_r_r61 = cpy_r_r62;
CPyL37: ;
    if (!cpy_r_r44) goto CPyL144;
    cpy_r_r63 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r64[4] = {cpy_r_r35, cpy_r_r63, cpy_r_r63, cpy_r_r63};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r65, 4, 0);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 479, CPyStatic_suggestions___globals);
        goto CPyL145;
    } else
        goto CPyL146;
CPyL39: ;
    CPy_DECREF(cpy_r_r35);
CPyL40: ;
    if (cpy_r_r61.f0 == NULL) {
        goto CPyL47;
    } else
        goto CPyL147;
CPyL41: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL43;
    } else
        goto CPyL148;
CPyL42: ;
    CPy_Unreachable();
CPyL43: ;
    if (cpy_r_r61.f0 == NULL) goto CPyL45;
    CPy_RestoreExcInfo(cpy_r_r61);
    CPy_XDECREF(cpy_r_r61.f0);
    CPy_XDECREF(cpy_r_r61.f1);
    CPy_XDECREF(cpy_r_r61.f2);
CPyL45: ;
    cpy_r_r67 = CPy_KeepPropagating();
    if (!cpy_r_r67) goto CPyL127;
    CPy_Unreachable();
CPyL47: ;
    cpy_r_r68 = CPyDef_suggestions___SuggestionEngine___get_guesses_from_parent(cpy_r_self, cpy_r_node);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 487, CPyStatic_suggestions___globals);
        goto CPyL128;
    }
    if (cpy_r_guesses == NULL) {
        goto CPyL149;
    } else
        goto CPyL51;
CPyL49: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"guesses\" referenced before assignment");
    cpy_r_r69 = 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 487, CPyStatic_suggestions___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r70 = PyNumber_InPlaceAdd(cpy_r_guesses, cpy_r_r68);
    CPy_XDECREF(cpy_r_guesses);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 487, CPyStatic_suggestions___globals);
        goto CPyL150;
    }
    if (likely(PyList_Check(cpy_r_r70)))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_suggestion", 487, CPyStatic_suggestions___globals, "list", cpy_r_r70);
        goto CPyL150;
    }
    cpy_r_guesses = cpy_r_r71;
    cpy_r_r72 = CPyDef_suggestions___SuggestionEngine___filter_options(cpy_r_self, cpy_r_guesses, cpy_r_is_method, 1);
    CPy_DECREF(cpy_r_guesses);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 488, CPyStatic_suggestions___globals);
        goto CPyL150;
    }
    cpy_r_guesses = cpy_r_r72;
    cpy_r_r73 = CPyDef_suggestions___SuggestionEngine___find_best(cpy_r_self, cpy_r_node, cpy_r_guesses);
    CPy_DECREF(cpy_r_guesses);
    if (unlikely(cpy_r_r73.f0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 489, CPyStatic_suggestions___globals);
        goto CPyL150;
    }
    cpy_r_r74 = cpy_r_r73.f0;
    CPy_INCREF(cpy_r_r74);
    cpy_r_best = cpy_r_r74;
    cpy_r_r75 = cpy_r_r73.f1;
    CPyTagged_INCREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r73.f0);
    CPyTagged_DECREF(cpy_r_r73.f1);
    cpy_r_r76 = CPyTagged_StealAsObject(cpy_r_r75);
    cpy_r__ = cpy_r_r76;
    CPy_DECREF(cpy_r__);
    cpy_r_r77 = CPyDef_suggestions___SuggestionEngine___try_type(cpy_r_self, cpy_r_node, cpy_r_best);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 492, CPyStatic_suggestions___globals);
        goto CPyL151;
    } else
        goto CPyL152;
CPyL56: ;
    cpy_r_r78 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_manager;
    cpy_r_r79 = ((mypy___build___BuildManagerObject *)cpy_r_r78)->_all_types;
    CPy_INCREF(cpy_r_r79);
    cpy_r_r80 = CPyDef_suggestions___get_return_types(cpy_r_r79, cpy_r_node);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 493, CPyStatic_suggestions___globals);
        goto CPyL151;
    }
    cpy_r_returns = cpy_r_r80;
    cpy_r_r81 = CPyStatic_state___state;
    if (unlikely(cpy_r_r81 == NULL)) {
        goto CPyL153;
    } else
        goto CPyL60;
CPyL58: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r82 = 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 494, CPyStatic_suggestions___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r83 = CPyDict_GetItem(cpy_r_graph, cpy_r_mod);
    CPy_DECREF(cpy_r_graph);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 494, CPyStatic_suggestions___globals);
        goto CPyL154;
    }
    if (likely(Py_TYPE(cpy_r_r83) == CPyType_mypy___build___State))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_suggestion", 494, CPyStatic_suggestions___globals, "mypy.build.State", cpy_r_r83);
        goto CPyL154;
    }
    cpy_r_r85 = ((mypy___build___StateObject *)cpy_r_r84)->_options;
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "get_suggestion", "State", "options", 494, CPyStatic_suggestions___globals);
        goto CPyL155;
    }
CPyL63: ;
    cpy_r_r86 = ((mypy___options___OptionsObject *)cpy_r_r85)->_strict_optional;
    CPy_DECREF(cpy_r_r84);
    cpy_r_r87 = CPyStatics[692]; /* 'strict_optional_set' */
    cpy_r_r88 = cpy_r_r86 ? Py_True : Py_False;
    PyObject *cpy_r_r89[2] = {cpy_r_r81, cpy_r_r88};
    cpy_r_r90 = (PyObject **)&cpy_r_r89;
    cpy_r_r91 = PyObject_VectorcallMethod(cpy_r_r87, cpy_r_r90, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 494, CPyStatic_suggestions___globals);
        goto CPyL154;
    }
    cpy_r_r92 = PyObject_Type(cpy_r_r91);
    cpy_r_r93 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r94 = CPyObject_GetAttr(cpy_r_r92, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 494, CPyStatic_suggestions___globals);
        goto CPyL156;
    }
    cpy_r_r95 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r96 = CPyObject_GetAttr(cpy_r_r92, cpy_r_r95);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 494, CPyStatic_suggestions___globals);
        goto CPyL157;
    }
    PyObject *cpy_r_r97[1] = {cpy_r_r91};
    cpy_r_r98 = (PyObject **)&cpy_r_r97;
    cpy_r_r99 = _PyObject_Vectorcall(cpy_r_r96, cpy_r_r98, 1, 0);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 494, CPyStatic_suggestions___globals);
        goto CPyL157;
    } else
        goto CPyL158;
CPyL67: ;
    cpy_r_r100 = 1;
    cpy_r_r101 = (CPyPtr)&((PyVarObject *)cpy_r_returns)->ob_size;
    cpy_r_r102 = *(int64_t *)cpy_r_r101;
    cpy_r_r103 = cpy_r_r102 << 1;
    cpy_r_r104 = cpy_r_r103 != 0;
    if (!cpy_r_r104) goto CPyL159;
    cpy_r_r105 = CPyDef_suggestions___generate_type_combinations(cpy_r_returns);
    CPy_DECREF(cpy_r_returns);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 496, CPyStatic_suggestions___globals);
        goto CPyL74;
    } else
        goto CPyL160;
CPyL70: ;
    cpy_r_ret_types = cpy_r_r105;
    goto CPyL82;
CPyL71: ;
    cpy_r_r106 = CPY_INT_TAG;
    cpy_r_r107 = CPY_INT_TAG;
    cpy_r_r108 = CPyDef_types___NoneType(cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 498, CPyStatic_suggestions___globals);
        goto CPyL74;
    }
    cpy_r_r109 = PyList_New(1);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 498, CPyStatic_suggestions___globals);
        goto CPyL161;
    } else
        goto CPyL162;
CPyL73: ;
    cpy_r_r110 = (CPyPtr)&((PyListObject *)cpy_r_r109)->ob_item;
    cpy_r_r111 = *(CPyPtr *)cpy_r_r110;
    *(PyObject * *)cpy_r_r111 = cpy_r_r108;
    cpy_r_ret_types = cpy_r_r109;
    goto CPyL82;
CPyL74: ;
    cpy_r_r112 = CPy_CatchError();
    cpy_r_r100 = 0;
    cpy_r_r113 = CPy_GetExcInfo();
    cpy_r_r114 = cpy_r_r113.f0;
    CPy_INCREF(cpy_r_r114);
    cpy_r_r115 = cpy_r_r113.f1;
    CPy_INCREF(cpy_r_r115);
    cpy_r_r116 = cpy_r_r113.f2;
    CPy_INCREF(cpy_r_r116);
    CPy_DecRef(cpy_r_r113.f0);
    CPy_DecRef(cpy_r_r113.f1);
    CPy_DecRef(cpy_r_r113.f2);
    PyObject *cpy_r_r117[4] = {cpy_r_r91, cpy_r_r114, cpy_r_r115, cpy_r_r116};
    cpy_r_r118 = (PyObject **)&cpy_r_r117;
    cpy_r_r119 = _PyObject_Vectorcall(cpy_r_r94, cpy_r_r118, 4, 0);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 494, CPyStatic_suggestions___globals);
        goto CPyL163;
    }
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r116);
    cpy_r_r120 = PyObject_IsTrue(cpy_r_r119);
    CPy_DecRef(cpy_r_r119);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 494, CPyStatic_suggestions___globals);
        goto CPyL80;
    }
    cpy_r_r122 = cpy_r_r120;
    if (cpy_r_r122) goto CPyL79;
    CPy_Reraise();
    if (!0) {
        goto CPyL80;
    } else
        goto CPyL164;
CPyL78: ;
    CPy_Unreachable();
CPyL79: ;
    CPy_RestoreExcInfo(cpy_r_r112);
    CPy_DecRef(cpy_r_r112.f0);
    CPy_DecRef(cpy_r_r112.f1);
    CPy_DecRef(cpy_r_r112.f2);
    goto CPyL82;
CPyL80: ;
    CPy_RestoreExcInfo(cpy_r_r112);
    CPy_DecRef(cpy_r_r112.f0);
    CPy_DecRef(cpy_r_r112.f1);
    CPy_DecRef(cpy_r_r112.f2);
    cpy_r_r123 = CPy_KeepPropagating();
    if (!cpy_r_r123) {
        goto CPyL83;
    } else
        goto CPyL165;
CPyL81: ;
    CPy_Unreachable();
CPyL82: ;
    tuple_T3OOO __tmp7454 = { NULL, NULL, NULL };
    cpy_r_r124 = __tmp7454;
    cpy_r_r125 = cpy_r_r124;
    goto CPyL84;
CPyL83: ;
    cpy_r_r126 = CPy_CatchError();
    cpy_r_r125 = cpy_r_r126;
CPyL84: ;
    if (!cpy_r_r100) goto CPyL166;
    cpy_r_r127 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r128[4] = {cpy_r_r91, cpy_r_r127, cpy_r_r127, cpy_r_r127};
    cpy_r_r129 = (PyObject **)&cpy_r_r128;
    cpy_r_r130 = _PyObject_Vectorcall(cpy_r_r94, cpy_r_r129, 4, 0);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 494, CPyStatic_suggestions___globals);
        goto CPyL167;
    } else
        goto CPyL168;
CPyL86: ;
    CPy_DECREF(cpy_r_r91);
CPyL87: ;
    if (cpy_r_r125.f0 == NULL) {
        goto CPyL94;
    } else
        goto CPyL169;
CPyL88: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL90;
    } else
        goto CPyL170;
CPyL89: ;
    CPy_Unreachable();
CPyL90: ;
    if (cpy_r_r125.f0 == NULL) goto CPyL92;
    CPy_RestoreExcInfo(cpy_r_r125);
    CPy_XDECREF(cpy_r_r125.f0);
    CPy_XDECREF(cpy_r_r125.f1);
    CPy_XDECREF(cpy_r_r125.f2);
CPyL92: ;
    cpy_r_r131 = CPy_KeepPropagating();
    if (!cpy_r_r131) goto CPyL127;
    CPy_Unreachable();
CPyL94: ;
    if (cpy_r_ret_types == NULL) {
        goto CPyL171;
    } else
        goto CPyL97;
CPyL95: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"ret_types\" referenced before assignment");
    cpy_r_r132 = 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", -1, CPyStatic_suggestions___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL97: ;
    cpy_r_r133 = (CPyPtr)&((PyVarObject *)cpy_r_ret_types)->ob_size;
    cpy_r_r134 = *(int64_t *)cpy_r_r133;
    if (cpy_r_ret_types == NULL) {
        goto CPyL172;
    } else
        goto CPyL100;
CPyL98: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"ret_types\" referenced before assignment");
    cpy_r_r135 = 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", -1, CPyStatic_suggestions___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL100: ;
    cpy_r_r136 = PyList_New(cpy_r_r134);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 500, CPyStatic_suggestions___globals);
        goto CPyL173;
    }
    cpy_r_r137 = 0;
CPyL102: ;
    if (cpy_r_ret_types == NULL) {
        goto CPyL174;
    } else
        goto CPyL105;
CPyL103: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"ret_types\" referenced before assignment");
    cpy_r_r138 = 0;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", -1, CPyStatic_suggestions___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL105: ;
    cpy_r_r139 = (CPyPtr)&((PyVarObject *)cpy_r_ret_types)->ob_size;
    cpy_r_r140 = *(int64_t *)cpy_r_r139;
    if (cpy_r_ret_types == NULL) {
        goto CPyL175;
    } else
        goto CPyL108;
CPyL106: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"ret_types\" referenced before assignment");
    cpy_r_r141 = 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", -1, CPyStatic_suggestions___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL108: ;
    cpy_r_r142 = cpy_r_r140 << 1;
    cpy_r_r143 = (Py_ssize_t)cpy_r_r137 < (Py_ssize_t)cpy_r_r142;
    if (!cpy_r_r143) goto CPyL176;
    if (cpy_r_ret_types == NULL) {
        goto CPyL177;
    } else
        goto CPyL112;
CPyL110: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"ret_types\" referenced before assignment");
    cpy_r_r144 = 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 500, CPyStatic_suggestions___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL112: ;
    cpy_r_r145 = CPyList_GetItemUnsafe(cpy_r_ret_types, cpy_r_r137);
    if (likely(PyObject_TypeCheck(cpy_r_r145, CPyType_types___Type)))
        cpy_r_r146 = cpy_r_r145;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_suggestion", 500, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r145);
        goto CPyL178;
    }
    cpy_r_t = cpy_r_r146;
    cpy_r_r147 = ((mypy___types___CallableTypeObject *)cpy_r_best)->_ret_type;
    CPy_INCREF(cpy_r_r147);
    cpy_r_r148 = CPyDef_suggestions___refine_type(cpy_r_r147, cpy_r_t);
    CPy_DECREF(cpy_r_r147);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 500, CPyStatic_suggestions___globals);
        goto CPyL178;
    }
    cpy_r_r149 = NULL;
    cpy_r_r150 = NULL;
    cpy_r_r151 = NULL;
    cpy_r_r152 = NULL;
    cpy_r_r153 = NULL;
    cpy_r_r154 = NULL;
    cpy_r_r155 = NULL;
    cpy_r_r156 = CPY_INT_TAG;
    cpy_r_r157 = CPY_INT_TAG;
    cpy_r_r158 = NULL;
    cpy_r_r159 = NULL;
    cpy_r_r160 = NULL;
    cpy_r_r161 = NULL;
    cpy_r_r162 = NULL;
    cpy_r_r163 = NULL;
    cpy_r_r164 = NULL;
    cpy_r_r165 = NULL;
    cpy_r_r166 = NULL;
    cpy_r_r167 = CPyDef_types___CallableType___copy_modified(cpy_r_best, cpy_r_r149, cpy_r_r150, cpy_r_r151, cpy_r_r148, cpy_r_r152, cpy_r_r153, cpy_r_r154, cpy_r_r155, cpy_r_r156, cpy_r_r157, cpy_r_r158, cpy_r_r159, cpy_r_r160, cpy_r_r161, cpy_r_r162, cpy_r_r163, cpy_r_r164, cpy_r_r165, cpy_r_r166);
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 500, CPyStatic_suggestions___globals);
        goto CPyL178;
    }
    cpy_r_r168 = CPyList_SetItemUnsafe(cpy_r_r136, cpy_r_r137, cpy_r_r167);
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 500, CPyStatic_suggestions___globals);
        goto CPyL178;
    }
    cpy_r_r169 = cpy_r_r137 + 2;
    cpy_r_r137 = cpy_r_r169;
    goto CPyL102;
CPyL117: ;
    cpy_r_guesses = cpy_r_r136;
    cpy_r_r170 = CPyDef_suggestions___SuggestionEngine___filter_options(cpy_r_self, cpy_r_guesses, cpy_r_is_method, 0);
    CPy_DECREF(cpy_r_guesses);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 501, CPyStatic_suggestions___globals);
        goto CPyL127;
    }
    cpy_r_guesses = cpy_r_r170;
    cpy_r_r171 = CPyDef_suggestions___SuggestionEngine___find_best(cpy_r_self, cpy_r_node, cpy_r_guesses);
    CPy_DECREF(cpy_r_guesses);
    if (unlikely(cpy_r_r171.f0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 502, CPyStatic_suggestions___globals);
        goto CPyL127;
    }
    cpy_r_r172 = cpy_r_r171.f0;
    CPy_INCREF(cpy_r_r172);
    cpy_r_best = cpy_r_r172;
    cpy_r_r173 = cpy_r_r171.f1;
    CPyTagged_INCREF(cpy_r_r173);
    CPy_DECREF(cpy_r_r171.f0);
    CPyTagged_DECREF(cpy_r_r171.f1);
    cpy_r_errors = cpy_r_r173;
    cpy_r_r174 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_no_errors;
    if (!cpy_r_r174) goto CPyL179;
CPyL120: ;
    cpy_r_r175 = cpy_r_errors != 0;
    CPyTagged_DECREF(cpy_r_errors);
    if (cpy_r_r175) {
        goto CPyL180;
    } else
        goto CPyL125;
CPyL121: ;
    cpy_r_r176 = CPyStatics[6073]; /* 'No annotation without errors' */
    cpy_r_r177 = (PyObject *)CPyType_suggestions___SuggestionFailure;
    PyObject *cpy_r_r178[1] = {cpy_r_r176};
    cpy_r_r179 = (PyObject **)&cpy_r_r178;
    cpy_r_r180 = _PyObject_Vectorcall(cpy_r_r177, cpy_r_r179, 1, 0);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 505, CPyStatic_suggestions___globals);
        goto CPyL127;
    }
    if (likely(Py_TYPE(cpy_r_r180) == CPyType_suggestions___SuggestionFailure))
        cpy_r_r181 = cpy_r_r180;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "get_suggestion", 505, CPyStatic_suggestions___globals, "mypy.suggestions.SuggestionFailure", cpy_r_r180);
        goto CPyL127;
    }
    CPy_Raise(cpy_r_r181);
    CPy_DECREF(cpy_r_r181);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 505, CPyStatic_suggestions___globals);
        goto CPyL127;
    }
    CPy_Unreachable();
CPyL125: ;
    cpy_r_r182 = CPyDef_suggestions___SuggestionEngine___pyannotate_signature(cpy_r_self, cpy_r_mod, cpy_r_is_method, cpy_r_best);
    CPy_DECREF(cpy_r_best);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 507, CPyStatic_suggestions___globals);
        goto CPyL127;
    }
    return cpy_r_r182;
CPyL127: ;
    cpy_r_r183 = NULL;
    return cpy_r_r183;
CPyL128: ;
    CPy_XDecRef(cpy_r_guesses);
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_graph);
    goto CPyL127;
CPyL129: ;
    CPy_XDecRef(cpy_r_guesses);
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_orig_errors);
    goto CPyL127;
CPyL130: ;
    CPy_DECREF(cpy_r_orig_errors);
    goto CPyL8;
CPyL131: ;
    CPy_XDECREF(cpy_r_guesses);
    CPy_XDECREF(cpy_r_ret_types);
    CPy_DECREF(cpy_r_graph);
    CPy_DECREF(cpy_r_callsites);
    CPy_DECREF(cpy_r_uses);
    goto CPyL4;
CPyL132: ;
    CPy_XDecRef(cpy_r_guesses);
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_uses);
    goto CPyL127;
CPyL133: ;
    CPy_XDecRef(cpy_r_guesses);
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_uses);
    goto CPyL13;
CPyL134: ;
    CPy_XDecRef(cpy_r_guesses);
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_uses);
    CPy_DecRef(cpy_r_r28);
    goto CPyL127;
CPyL135: ;
    CPy_XDecRef(cpy_r_guesses);
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_uses);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r36);
    goto CPyL127;
CPyL136: ;
    CPy_XDecRef(cpy_r_guesses);
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_uses);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r38);
    goto CPyL127;
CPyL137: ;
    CPy_DECREF(cpy_r_r43);
    goto CPyL22;
CPyL138: ;
    CPy_DecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_uses);
    goto CPyL27;
CPyL139: ;
    CPy_DecRef(cpy_r_callsites);
    CPy_DecRef(cpy_r_uses);
    CPy_DecRef(cpy_r_r45);
    goto CPyL27;
CPyL140: ;
    CPy_XDECREF(cpy_r_guesses);
    goto CPyL26;
CPyL141: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52);
    goto CPyL33;
CPyL142: ;
    CPy_XDecRef(cpy_r_guesses);
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r48.f0);
    CPy_DecRef(cpy_r_r48.f1);
    CPy_DecRef(cpy_r_r48.f2);
    goto CPyL31;
CPyL143: ;
    CPy_XDecRef(cpy_r_guesses);
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r38);
    goto CPyL34;
CPyL144: ;
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r38);
    goto CPyL40;
CPyL145: ;
    CPy_XDecRef(cpy_r_guesses);
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_r35);
    goto CPyL43;
CPyL146: ;
    CPy_DECREF(cpy_r_r66);
    goto CPyL39;
CPyL147: ;
    CPy_XDECREF(cpy_r_guesses);
    CPy_XDECREF(cpy_r_ret_types);
    CPy_DECREF(cpy_r_graph);
    goto CPyL41;
CPyL148: ;
    CPy_XDECREF(cpy_r_r61.f0);
    CPy_XDECREF(cpy_r_r61.f1);
    CPy_XDECREF(cpy_r_r61.f2);
    goto CPyL42;
CPyL149: ;
    CPy_XDECREF(cpy_r_ret_types);
    CPy_DECREF(cpy_r_graph);
    CPy_DECREF(cpy_r_r68);
    goto CPyL49;
CPyL150: ;
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_graph);
    goto CPyL127;
CPyL151: ;
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_best);
    goto CPyL127;
CPyL152: ;
    CPy_DECREF(cpy_r_r77);
    goto CPyL56;
CPyL153: ;
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_graph);
    CPy_DecRef(cpy_r_best);
    CPy_DecRef(cpy_r_returns);
    goto CPyL58;
CPyL154: ;
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_best);
    CPy_DecRef(cpy_r_returns);
    goto CPyL127;
CPyL155: ;
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_best);
    CPy_DecRef(cpy_r_returns);
    CPy_DecRef(cpy_r_r84);
    goto CPyL127;
CPyL156: ;
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_best);
    CPy_DecRef(cpy_r_returns);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r92);
    goto CPyL127;
CPyL157: ;
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_best);
    CPy_DecRef(cpy_r_returns);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r94);
    goto CPyL127;
CPyL158: ;
    CPy_DECREF(cpy_r_r99);
    goto CPyL67;
CPyL159: ;
    CPy_DECREF(cpy_r_returns);
    goto CPyL71;
CPyL160: ;
    CPy_XDECREF(cpy_r_ret_types);
    goto CPyL70;
CPyL161: ;
    CPy_DecRef(cpy_r_r108);
    goto CPyL74;
CPyL162: ;
    CPy_XDECREF(cpy_r_ret_types);
    goto CPyL73;
CPyL163: ;
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r116);
    goto CPyL80;
CPyL164: ;
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_best);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r112.f0);
    CPy_DecRef(cpy_r_r112.f1);
    CPy_DecRef(cpy_r_r112.f2);
    goto CPyL78;
CPyL165: ;
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_best);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r94);
    goto CPyL81;
CPyL166: ;
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r94);
    goto CPyL87;
CPyL167: ;
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_best);
    CPy_DecRef(cpy_r_r91);
    goto CPyL90;
CPyL168: ;
    CPy_DECREF(cpy_r_r130);
    goto CPyL86;
CPyL169: ;
    CPy_XDECREF(cpy_r_ret_types);
    CPy_DECREF(cpy_r_best);
    goto CPyL88;
CPyL170: ;
    CPy_XDECREF(cpy_r_r125.f0);
    CPy_XDECREF(cpy_r_r125.f1);
    CPy_XDECREF(cpy_r_r125.f2);
    goto CPyL89;
CPyL171: ;
    CPy_DECREF(cpy_r_best);
    goto CPyL95;
CPyL172: ;
    CPy_DECREF(cpy_r_best);
    goto CPyL98;
CPyL173: ;
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_best);
    goto CPyL127;
CPyL174: ;
    CPy_DECREF(cpy_r_best);
    CPy_DECREF(cpy_r_r136);
    goto CPyL103;
CPyL175: ;
    CPy_DECREF(cpy_r_best);
    CPy_DECREF(cpy_r_r136);
    goto CPyL106;
CPyL176: ;
    CPy_XDECREF(cpy_r_ret_types);
    CPy_DECREF(cpy_r_best);
    goto CPyL117;
CPyL177: ;
    CPy_DECREF(cpy_r_best);
    CPy_DECREF(cpy_r_r136);
    goto CPyL110;
CPyL178: ;
    CPy_XDecRef(cpy_r_ret_types);
    CPy_DecRef(cpy_r_best);
    CPy_DecRef(cpy_r_r136);
    goto CPyL127;
CPyL179: ;
    CPyTagged_DECREF(cpy_r_errors);
    goto CPyL125;
CPyL180: ;
    CPy_DECREF(cpy_r_best);
    goto CPyL121;
}

PyObject *CPyPy_suggestions___SuggestionEngine___get_suggestion(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"mod", "node", 0};
    static CPyArg_Parser parser = {"OO:get_suggestion", kwlist, 0};
    PyObject *obj_mod;
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_mod, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_mod;
    if (likely(PyUnicode_Check(obj_mod)))
        arg_mod = obj_mod;
    else {
        CPy_TypeError("str", obj_mod); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___FuncDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___get_suggestion(arg_self, arg_mod, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "get_suggestion", 465, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___format_args(PyObject *cpy_r_self, PyObject *cpy_r_arg_kinds, PyObject *cpy_r_arg_names, PyObject *cpy_r_arg_types) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_args;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_i;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_kind;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject **cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    cpy_r_r0 = NULL;
    cpy_r_arg = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_args", 515, CPyStatic_suggestions___globals);
        goto CPyL48;
    }
    cpy_r_args = cpy_r_r1;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_arg_types)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = 0;
    cpy_r_i = cpy_r_r5;
CPyL2: ;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r6) goto CPyL49;
    cpy_r_r7 = CPyList_GetItem(cpy_r_arg_kinds, cpy_r_i);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_args", 517, CPyStatic_suggestions___globals);
        goto CPyL50;
    }
    if (likely(PyList_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "format_args", 517, CPyStatic_suggestions___globals, "list", cpy_r_r7);
        goto CPyL50;
    }
    cpy_r_r9 = 0;
    cpy_r_r10 = CPyList_GetItem(cpy_r_arg_names, cpy_r_i);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_args", 517, CPyStatic_suggestions___globals);
        goto CPyL51;
    }
    if (likely(PyList_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "format_args", 517, CPyStatic_suggestions___globals, "list", cpy_r_r10);
        goto CPyL51;
    }
    cpy_r_r12 = 0;
    cpy_r_r13 = CPyList_GetItem(cpy_r_arg_types, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_args", 517, CPyStatic_suggestions___globals);
        goto CPyL52;
    }
    if (likely(PyList_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "format_args", 517, CPyStatic_suggestions___globals, "list", cpy_r_r13);
        goto CPyL52;
    }
    cpy_r_r15 = 0;
CPyL10: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL53;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r22;
    if (!cpy_r_r23) goto CPyL53;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r26;
    if (cpy_r_r27) {
        goto CPyL54;
    } else
        goto CPyL53;
CPyL13: ;
    cpy_r_r28 = CPyList_GetItemUnsafe(cpy_r_r8, cpy_r_r9);
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_nodes___ArgKind))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "format_args", 517, CPyStatic_suggestions___globals, "mypy.nodes.ArgKind", cpy_r_r28);
        goto CPyL55;
    }
    cpy_r_kind = cpy_r_r29;
    cpy_r_r30 = CPyList_GetItemUnsafe(cpy_r_r11, cpy_r_r12);
    if (PyUnicode_Check(cpy_r_r30))
        cpy_r_r31 = cpy_r_r30;
    else {
        cpy_r_r31 = NULL;
    }
    if (cpy_r_r31 != NULL) goto __LL7455;
    if (cpy_r_r30 == Py_None)
        cpy_r_r31 = cpy_r_r30;
    else {
        cpy_r_r31 = NULL;
    }
    if (cpy_r_r31 != NULL) goto __LL7455;
    CPy_TypeErrorTraceback("mypy/suggestions.py", "format_args", 517, CPyStatic_suggestions___globals, "str or None", cpy_r_r30);
    goto CPyL56;
__LL7455: ;
    cpy_r_name = cpy_r_r31;
    cpy_r_r32 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r15);
    if (likely(PyObject_TypeCheck(cpy_r_r32, CPyType_types___Type)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "format_args", 517, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r32);
        goto CPyL57;
    }
    cpy_r_typ = cpy_r_r33;
    cpy_r_r34 = Py_None;
    cpy_r_r35 = CPyDef_suggestions___SuggestionEngine___format_type(cpy_r_self, cpy_r_r34, cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_args", 518, CPyStatic_suggestions___globals);
        goto CPyL57;
    }
    cpy_r_arg = cpy_r_r35;
    cpy_r_r36 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r36 == NULL)) {
        goto CPyL58;
    } else
        goto CPyL20;
CPyL18: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r37 = 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_args", 519, CPyStatic_suggestions___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r38 = cpy_r_kind == cpy_r_r36;
    if (cpy_r_r38) {
        goto CPyL59;
    } else
        goto CPyL23;
CPyL21: ;
    cpy_r_r39 = CPyStatics[282]; /* '*' */
    cpy_r_r40 = PyUnicode_Concat(cpy_r_r39, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_args", 520, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
    cpy_r_arg = cpy_r_r40;
    goto CPyL38;
CPyL23: ;
    cpy_r_r41 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r41 == NULL)) {
        goto CPyL60;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r42 = 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_args", 521, CPyStatic_suggestions___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r43 = cpy_r_kind == cpy_r_r41;
    if (cpy_r_r43) {
        goto CPyL61;
    } else
        goto CPyL29;
CPyL27: ;
    cpy_r_r44 = CPyStatics[1600]; /* '**' */
    cpy_r_r45 = PyUnicode_Concat(cpy_r_r44, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_args", 522, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
    cpy_r_arg = cpy_r_r45;
    goto CPyL38;
CPyL29: ;
    cpy_r_r46 = CPyStatics[54]; /* 'is_named' */
    PyObject *cpy_r_r47[1] = {cpy_r_kind};
    cpy_r_r48 = (PyObject **)&cpy_r_r47;
    cpy_r_r49 = PyObject_VectorcallMethod(cpy_r_r46, cpy_r_r48, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_args", 523, CPyStatic_suggestions___globals);
        goto CPyL62;
    }
    CPy_DECREF(cpy_r_kind);
    if (unlikely(!PyBool_Check(cpy_r_r49))) {
        CPy_TypeError("bool", cpy_r_r49); cpy_r_r50 = 2;
    } else
        cpy_r_r50 = cpy_r_r49 == Py_True;
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_args", 523, CPyStatic_suggestions___globals);
        goto CPyL63;
    }
    if (!cpy_r_r50) goto CPyL64;
    cpy_r_r51 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r52 = cpy_r_name != cpy_r_r51;
    if (!cpy_r_r52) goto CPyL64;
    CPy_INCREF(cpy_r_name);
    if (likely(cpy_r_name != Py_None))
        cpy_r_r53 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "format_args", 517, CPyStatic_suggestions___globals, "str", cpy_r_name);
        goto CPyL63;
    }
    cpy_r_r54 = CPyStr_IsTrue(cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (!cpy_r_r54) goto CPyL64;
    if (likely(cpy_r_name != Py_None))
        cpy_r_r55 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "format_args", 525, CPyStatic_suggestions___globals, "str", cpy_r_name);
        goto CPyL65;
    }
    cpy_r_r56 = CPyStatics[784]; /* '=' */
    cpy_r_r57 = CPyStr_Build(3, cpy_r_r55, cpy_r_r56, cpy_r_arg);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_args", 525, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
    cpy_r_arg = cpy_r_r57;
CPyL38: ;
    cpy_r_r58 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r58;
    cpy_r_r59 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r59;
    cpy_r_r60 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r60;
    goto CPyL10;
CPyL39: ;
    if (cpy_r_arg == NULL) {
        goto CPyL66;
    } else
        goto CPyL42;
CPyL40: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"arg\" referenced before assignment");
    cpy_r_r61 = 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_args", 526, CPyStatic_suggestions___globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r62 = PyList_Append(cpy_r_args, cpy_r_arg);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_args", 526, CPyStatic_suggestions___globals);
        goto CPyL67;
    }
    cpy_r_r64 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r64;
    cpy_r_i = cpy_r_r64;
    goto CPyL2;
CPyL44: ;
    cpy_r_r65 = CPyStatics[2381]; /* '(' */
    cpy_r_r66 = CPyStatics[71]; /* ', ' */
    cpy_r_r67 = PyUnicode_Join(cpy_r_r66, cpy_r_args);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_args", 527, CPyStatic_suggestions___globals);
        goto CPyL47;
    }
    cpy_r_r68 = CPyStatics[72]; /* ')' */
    cpy_r_r69 = CPyStr_Build(3, cpy_r_r65, cpy_r_r67, cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_args", 527, CPyStatic_suggestions___globals);
        goto CPyL47;
    }
    return cpy_r_r69;
CPyL47: ;
    cpy_r_r70 = NULL;
    return cpy_r_r70;
CPyL48: ;
    CPy_XDecRef(cpy_r_arg);
    goto CPyL47;
CPyL49: ;
    CPy_XDECREF(cpy_r_arg);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL44;
CPyL50: ;
    CPy_XDecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_args);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL47;
CPyL51: ;
    CPy_XDecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_args);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r8);
    goto CPyL47;
CPyL52: ;
    CPy_XDecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL47;
CPyL53: ;
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r14);
    goto CPyL39;
CPyL54: ;
    CPy_XDECREF(cpy_r_arg);
    goto CPyL13;
CPyL55: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    goto CPyL47;
CPyL56: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_kind);
    goto CPyL47;
CPyL57: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_kind);
    CPy_DecRef(cpy_r_name);
    goto CPyL47;
CPyL58: ;
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_kind);
    CPy_DecRef(cpy_r_name);
    goto CPyL18;
CPyL59: ;
    CPy_DECREF(cpy_r_kind);
    CPy_DECREF(cpy_r_name);
    goto CPyL21;
CPyL60: ;
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_kind);
    CPy_DecRef(cpy_r_name);
    goto CPyL24;
CPyL61: ;
    CPy_DECREF(cpy_r_kind);
    CPy_DECREF(cpy_r_name);
    goto CPyL27;
CPyL62: ;
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_kind);
    CPy_DecRef(cpy_r_name);
    goto CPyL47;
CPyL63: ;
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_name);
    goto CPyL47;
CPyL64: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL38;
CPyL65: ;
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    goto CPyL47;
CPyL66: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL40;
CPyL67: ;
    CPy_XDecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_args);
    goto CPyL47;
}

PyObject *CPyPy_suggestions___SuggestionEngine___format_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"arg_kinds", "arg_names", "arg_types", 0};
    static CPyArg_Parser parser = {"OOO:format_args", kwlist, 0};
    PyObject *obj_arg_kinds;
    PyObject *obj_arg_names;
    PyObject *obj_arg_types;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_arg_kinds, &obj_arg_names, &obj_arg_types)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_arg_kinds;
    if (likely(PyList_Check(obj_arg_kinds)))
        arg_arg_kinds = obj_arg_kinds;
    else {
        CPy_TypeError("list", obj_arg_kinds); 
        goto fail;
    }
    PyObject *arg_arg_names;
    if (likely(PyList_Check(obj_arg_names)))
        arg_arg_names = obj_arg_names;
    else {
        CPy_TypeError("list", obj_arg_names); 
        goto fail;
    }
    PyObject *arg_arg_types;
    if (likely(PyList_Check(obj_arg_types)))
        arg_arg_types = obj_arg_types;
    else {
        CPy_TypeError("list", obj_arg_types); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___format_args(arg_self, arg_arg_kinds, arg_arg_names, arg_arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "format_args", 509, CPyStatic_suggestions___globals);
    return NULL;
}

tuple_T3OOO CPyDef_suggestions___SuggestionEngine___find_node(PyObject *cpy_r_self, PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    int64_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_file;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_line;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_line_number;
    tuple_T2OO cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_modname;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int64_t cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_tail;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_target;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    tuple_T2OO cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject **cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    tuple_T2OO cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyPtr cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject **cpy_r_r91;
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
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    tuple_T3OOO cpy_r_r107;
    tuple_T3OOO cpy_r_r108;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_node = cpy_r_r0;
    CPy_DECREF(cpy_r_node);
    cpy_r_r1 = CPyStatics[171]; /* ':' */
    cpy_r_r2 = PySequence_Contains(cpy_r_key, cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 539, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    cpy_r_r4 = cpy_r_r2;
    if (!cpy_r_r4) goto CPyL33;
    cpy_r_r5 = CPyStatics[171]; /* ':' */
    cpy_r_r6 = CPyStatics[226]; /* 'count' */
    PyObject *cpy_r_r7[2] = {cpy_r_key, cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 540, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    if (likely(PyLong_Check(cpy_r_r9)))
        cpy_r_r10 = CPyTagged_FromObject(cpy_r_r9);
    else {
        CPy_TypeError("int", cpy_r_r9); cpy_r_r10 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 540, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    cpy_r_r11 = cpy_r_r10 & 1;
    cpy_r_r12 = cpy_r_r11 != 0;
    if (!cpy_r_r12) goto CPyL6;
    cpy_r_r13 = CPyTagged_IsLt_(2, cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r10);
    if (cpy_r_r13) {
        goto CPyL7;
    } else
        goto CPyL12;
CPyL6: ;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 > (Py_ssize_t)2;
    CPyTagged_DECREF(cpy_r_r10);
    if (!cpy_r_r14) goto CPyL12;
CPyL7: ;
    cpy_r_r15 = CPyStatics[6074]; /* 'Malformed location for function: ' */
    cpy_r_r16 = CPyStatics[6075]; /* ('. Must be either package.module.Class.method or '
                                     'path/to/file.py:line') */
    cpy_r_r17 = CPyStr_Build(3, cpy_r_r15, cpy_r_key, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 542, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    cpy_r_r18 = (PyObject *)CPyType_suggestions___SuggestionFailure;
    PyObject *cpy_r_r19[1] = {cpy_r_r17};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = _PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 541, CPyStatic_suggestions___globals);
        goto CPyL65;
    }
    CPy_DECREF(cpy_r_r17);
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_suggestions___SuggestionFailure))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node", 541, CPyStatic_suggestions___globals, "mypy.suggestions.SuggestionFailure", cpy_r_r21);
        goto CPyL64;
    }
    CPy_Raise(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 541, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r23 = CPyStatics[171]; /* ':' */
    cpy_r_r24 = PyUnicode_Split(cpy_r_key, cpy_r_r23, -1);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 545, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    cpy_r_r25 = CPySequence_CheckUnpackCount(cpy_r_r24, 2);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 545, CPyStatic_suggestions___globals);
        goto CPyL66;
    }
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_r24, 0);
    cpy_r_r28 = CPyList_GetItemUnsafe(cpy_r_r24, 2);
    CPy_DECREF(cpy_r_r24);
    if (likely(PyUnicode_Check(cpy_r_r27)))
        cpy_r_r29 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node", 545, CPyStatic_suggestions___globals, "str", cpy_r_r27);
        goto CPyL67;
    }
    cpy_r_file = cpy_r_r29;
    if (likely(PyUnicode_Check(cpy_r_r28)))
        cpy_r_r30 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node", 545, CPyStatic_suggestions___globals, "str", cpy_r_r28);
        goto CPyL68;
    }
    cpy_r_line = cpy_r_r30;
    cpy_r_r31 = CPyStatics[6076]; /* 'isdigit' */
    PyObject *cpy_r_r32[1] = {cpy_r_line};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = PyObject_VectorcallMethod(cpy_r_r31, cpy_r_r33, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 546, CPyStatic_suggestions___globals);
        goto CPyL69;
    }
    if (unlikely(!PyBool_Check(cpy_r_r34))) {
        CPy_TypeError("bool", cpy_r_r34); cpy_r_r35 = 2;
    } else
        cpy_r_r35 = cpy_r_r34 == Py_True;
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 546, CPyStatic_suggestions___globals);
        goto CPyL69;
    }
    if (cpy_r_r35) {
        goto CPyL24;
    } else
        goto CPyL70;
CPyL19: ;
    cpy_r_r36 = CPyStatics[6077]; /* 'Line number must be a number. Got ' */
    cpy_r_r37 = CPyStr_Build(2, cpy_r_r36, cpy_r_line);
    CPy_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 547, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    cpy_r_r38 = (PyObject *)CPyType_suggestions___SuggestionFailure;
    PyObject *cpy_r_r39[1] = {cpy_r_r37};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r40, 1, 0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 547, CPyStatic_suggestions___globals);
        goto CPyL71;
    }
    CPy_DECREF(cpy_r_r37);
    if (likely(Py_TYPE(cpy_r_r41) == CPyType_suggestions___SuggestionFailure))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node", 547, CPyStatic_suggestions___globals, "mypy.suggestions.SuggestionFailure", cpy_r_r41);
        goto CPyL64;
    }
    CPy_Raise(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 547, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r43 = CPyLong_FromStr(cpy_r_line);
    CPy_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 548, CPyStatic_suggestions___globals);
        goto CPyL68;
    }
    if (likely(PyLong_Check(cpy_r_r43)))
        cpy_r_r44 = CPyTagged_FromObject(cpy_r_r43);
    else {
        CPy_TypeError("int", cpy_r_r43); cpy_r_r44 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 548, CPyStatic_suggestions___globals);
        goto CPyL68;
    }
    cpy_r_line_number = cpy_r_r44;
    cpy_r_r45 = CPyDef_suggestions___SuggestionEngine___find_node_by_file_and_line(cpy_r_self, cpy_r_file, cpy_r_line_number);
    CPy_DECREF(cpy_r_file);
    CPyTagged_DECREF(cpy_r_line_number);
    if (unlikely(cpy_r_r45.f0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 549, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    cpy_r_r46 = cpy_r_r45.f0;
    CPy_INCREF(cpy_r_r46);
    cpy_r_modname = cpy_r_r46;
    cpy_r_r47 = cpy_r_r45.f1;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r45.f0);
    CPy_DECREF(cpy_r_r45.f1);
    cpy_r_node = cpy_r_r47;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r48 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node", 550, CPyStatic_suggestions___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL72;
    }
    cpy_r_r49 = CPY_GET_ATTR_TRAIT(cpy_r_r48, CPyType_nodes___SymbolNode, 6, mypy___nodes___SymbolNodeObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 550, CPyStatic_suggestions___globals);
        goto CPyL72;
    }
CPyL29: ;
    cpy_r_r50 = CPyStr_Size_size_t(cpy_r_modname);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 550, CPyStatic_suggestions___globals);
        goto CPyL73;
    }
    cpy_r_r52 = cpy_r_r50 << 1;
    cpy_r_r53 = CPyTagged_Add(cpy_r_r52, 2);
    cpy_r_r54 = CPyStr_GetSlice(cpy_r_r49, cpy_r_r53, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r49);
    CPyTagged_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 550, CPyStatic_suggestions___globals);
        goto CPyL72;
    }
    if (likely(PyUnicode_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node", 550, CPyStatic_suggestions___globals, "str", cpy_r_r54);
        goto CPyL72;
    }
    cpy_r_tail = cpy_r_r55;
    goto CPyL46;
CPyL33: ;
    cpy_r_r56 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_fgmanager;
    cpy_r_r57 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r56)->_graph;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = CPyDef_mypy___util___split_target(cpy_r_r57, cpy_r_key);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 552, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    cpy_r_target = cpy_r_r58;
    cpy_r_r59 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r60 = cpy_r_target != cpy_r_r59;
    if (!cpy_r_r60) goto CPyL74;
    PyObject *__tmp7456;
    if (unlikely(!(PyTuple_Check(cpy_r_target) && PyTuple_GET_SIZE(cpy_r_target) == 2))) {
        __tmp7456 = NULL;
        goto __LL7457;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_target, 0))))
        __tmp7456 = PyTuple_GET_ITEM(cpy_r_target, 0);
    else {
        __tmp7456 = NULL;
    }
    if (__tmp7456 == NULL) goto __LL7457;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_target, 1))))
        __tmp7456 = PyTuple_GET_ITEM(cpy_r_target, 1);
    else {
        __tmp7456 = NULL;
    }
    if (__tmp7456 == NULL) goto __LL7457;
    __tmp7456 = cpy_r_target;
__LL7457: ;
    if (unlikely(__tmp7456 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_target); cpy_r_r61 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp7458 = PyTuple_GET_ITEM(cpy_r_target, 0);
        CPy_INCREF(__tmp7458);
        PyObject *__tmp7459;
        if (likely(PyUnicode_Check(__tmp7458)))
            __tmp7459 = __tmp7458;
        else {
            CPy_TypeError("str", __tmp7458); 
            __tmp7459 = NULL;
        }
        cpy_r_r61.f0 = __tmp7459;
        PyObject *__tmp7460 = PyTuple_GET_ITEM(cpy_r_target, 1);
        CPy_INCREF(__tmp7460);
        PyObject *__tmp7461;
        if (likely(PyUnicode_Check(__tmp7460)))
            __tmp7461 = __tmp7460;
        else {
            CPy_TypeError("str", __tmp7460); 
            __tmp7461 = NULL;
        }
        cpy_r_r61.f1 = __tmp7461;
    }
    if (unlikely(cpy_r_r61.f0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 552, CPyStatic_suggestions___globals);
        goto CPyL75;
    }
    cpy_r_r62 = PyTuple_New(2);
    if (unlikely(cpy_r_r62 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7462 = cpy_r_r61.f0;
    PyTuple_SET_ITEM(cpy_r_r62, 0, __tmp7462);
    PyObject *__tmp7463 = cpy_r_r61.f1;
    PyTuple_SET_ITEM(cpy_r_r62, 1, __tmp7463);
    cpy_r_r63 = PyObject_IsTrue(cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 552, CPyStatic_suggestions___globals);
        goto CPyL75;
    }
    cpy_r_r65 = cpy_r_r63;
    if (cpy_r_r65) {
        goto CPyL43;
    } else
        goto CPyL74;
CPyL38: ;
    cpy_r_r66 = CPyStatics[2714]; /* 'Cannot find module for ' */
    cpy_r_r67 = CPyStr_Build(2, cpy_r_r66, cpy_r_key);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 554, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    cpy_r_r68 = (PyObject *)CPyType_suggestions___SuggestionFailure;
    PyObject *cpy_r_r69[1] = {cpy_r_r67};
    cpy_r_r70 = (PyObject **)&cpy_r_r69;
    cpy_r_r71 = _PyObject_Vectorcall(cpy_r_r68, cpy_r_r70, 1, 0);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 554, CPyStatic_suggestions___globals);
        goto CPyL76;
    }
    CPy_DECREF(cpy_r_r67);
    if (likely(Py_TYPE(cpy_r_r71) == CPyType_suggestions___SuggestionFailure))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node", 554, CPyStatic_suggestions___globals, "mypy.suggestions.SuggestionFailure", cpy_r_r71);
        goto CPyL64;
    }
    CPy_Raise(cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 554, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL43: ;
    PyObject *__tmp7464;
    if (unlikely(!(PyTuple_Check(cpy_r_target) && PyTuple_GET_SIZE(cpy_r_target) == 2))) {
        __tmp7464 = NULL;
        goto __LL7465;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_target, 0))))
        __tmp7464 = PyTuple_GET_ITEM(cpy_r_target, 0);
    else {
        __tmp7464 = NULL;
    }
    if (__tmp7464 == NULL) goto __LL7465;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_target, 1))))
        __tmp7464 = PyTuple_GET_ITEM(cpy_r_target, 1);
    else {
        __tmp7464 = NULL;
    }
    if (__tmp7464 == NULL) goto __LL7465;
    __tmp7464 = cpy_r_target;
__LL7465: ;
    if (unlikely(__tmp7464 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_target); cpy_r_r73 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp7466 = PyTuple_GET_ITEM(cpy_r_target, 0);
        CPy_INCREF(__tmp7466);
        PyObject *__tmp7467;
        if (likely(PyUnicode_Check(__tmp7466)))
            __tmp7467 = __tmp7466;
        else {
            CPy_TypeError("str", __tmp7466); 
            __tmp7467 = NULL;
        }
        cpy_r_r73.f0 = __tmp7467;
        PyObject *__tmp7468 = PyTuple_GET_ITEM(cpy_r_target, 1);
        CPy_INCREF(__tmp7468);
        PyObject *__tmp7469;
        if (likely(PyUnicode_Check(__tmp7468)))
            __tmp7469 = __tmp7468;
        else {
            CPy_TypeError("str", __tmp7468); 
            __tmp7469 = NULL;
        }
        cpy_r_r73.f1 = __tmp7469;
    }
    CPy_DECREF(cpy_r_target);
    if (unlikely(cpy_r_r73.f0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 555, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    cpy_r_r74 = cpy_r_r73.f0;
    CPy_INCREF(cpy_r_r74);
    cpy_r_modname = cpy_r_r74;
    cpy_r_r75 = cpy_r_r73.f1;
    CPy_INCREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r73.f0);
    CPy_DECREF(cpy_r_r73.f1);
    cpy_r_tail = cpy_r_r75;
    cpy_r_r76 = CPyDef_suggestions___SuggestionEngine___find_node_by_module_and_name(cpy_r_self, cpy_r_modname, cpy_r_tail);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 556, CPyStatic_suggestions___globals);
        goto CPyL77;
    }
    cpy_r_node = cpy_r_r76;
CPyL46: ;
    cpy_r_r77 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r78 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r79 = *(PyObject * *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 == cpy_r_r77;
    if (!cpy_r_r80) goto CPyL56;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Decorator))
        cpy_r_r81 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node", 559, CPyStatic_suggestions___globals, "mypy.nodes.Decorator", cpy_r_node);
        goto CPyL77;
    }
    cpy_r_r82 = CPyDef_suggestions___SuggestionEngine___extract_from_decorator(cpy_r_self, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 559, CPyStatic_suggestions___globals);
        goto CPyL77;
    }
    cpy_r_node = cpy_r_r82;
    CPy_INCREF(cpy_r_node);
    if (Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef)
        cpy_r_r83 = cpy_r_node;
    else {
        cpy_r_r83 = NULL;
    }
    if (cpy_r_r83 != NULL) goto __LL7470;
    if (cpy_r_node == Py_None)
        cpy_r_r83 = cpy_r_node;
    else {
        cpy_r_r83 = NULL;
    }
    if (cpy_r_r83 != NULL) goto __LL7470;
    CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node", 560, CPyStatic_suggestions___globals, "mypy.nodes.FuncDef or None", cpy_r_node);
    goto CPyL78;
__LL7470: ;
    cpy_r_r84 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r85 = cpy_r_r83 != cpy_r_r84;
    CPy_DECREF(cpy_r_r83);
    if (cpy_r_r85) {
        goto CPyL56;
    } else
        goto CPyL79;
CPyL51: ;
    cpy_r_r86 = CPyStatics[6078]; /* 'Object ' */
    cpy_r_r87 = CPyStatics[6079]; /* " is a decorator we can't handle" */
    cpy_r_r88 = CPyStr_Build(3, cpy_r_r86, cpy_r_key, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 561, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    cpy_r_r89 = (PyObject *)CPyType_suggestions___SuggestionFailure;
    PyObject *cpy_r_r90[1] = {cpy_r_r88};
    cpy_r_r91 = (PyObject **)&cpy_r_r90;
    cpy_r_r92 = _PyObject_Vectorcall(cpy_r_r89, cpy_r_r91, 1, 0);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 561, CPyStatic_suggestions___globals);
        goto CPyL80;
    }
    CPy_DECREF(cpy_r_r88);
    if (likely(Py_TYPE(cpy_r_r92) == CPyType_suggestions___SuggestionFailure))
        cpy_r_r93 = cpy_r_r92;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node", 561, CPyStatic_suggestions___globals, "mypy.suggestions.SuggestionFailure", cpy_r_r92);
        goto CPyL64;
    }
    CPy_Raise(cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 561, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL56: ;
    cpy_r_r94 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r95 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r96 = *(PyObject * *)cpy_r_r95;
    cpy_r_r97 = cpy_r_r96 == cpy_r_r94;
    if (cpy_r_r97) {
        goto CPyL62;
    } else
        goto CPyL81;
CPyL57: ;
    cpy_r_r98 = CPyStatics[6078]; /* 'Object ' */
    cpy_r_r99 = CPyStatics[6080]; /* ' is not a function' */
    cpy_r_r100 = CPyStr_Build(3, cpy_r_r98, cpy_r_key, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 564, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    cpy_r_r101 = (PyObject *)CPyType_suggestions___SuggestionFailure;
    PyObject *cpy_r_r102[1] = {cpy_r_r100};
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = _PyObject_Vectorcall(cpy_r_r101, cpy_r_r103, 1, 0);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 564, CPyStatic_suggestions___globals);
        goto CPyL82;
    }
    CPy_DECREF(cpy_r_r100);
    if (likely(Py_TYPE(cpy_r_r104) == CPyType_suggestions___SuggestionFailure))
        cpy_r_r105 = cpy_r_r104;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node", 564, CPyStatic_suggestions___globals, "mypy.suggestions.SuggestionFailure", cpy_r_r104);
        goto CPyL64;
    }
    CPy_Raise(cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node", 564, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL62: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___FuncDef))
        cpy_r_r106 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node", 566, CPyStatic_suggestions___globals, "mypy.nodes.FuncDef", cpy_r_node);
        goto CPyL77;
    }
    cpy_r_r107.f0 = cpy_r_modname;
    cpy_r_r107.f1 = cpy_r_tail;
    cpy_r_r107.f2 = cpy_r_r106;
    CPy_INCREF(cpy_r_r107.f0);
    CPy_INCREF(cpy_r_r107.f1);
    CPy_INCREF(cpy_r_r107.f2);
    CPy_DECREF(cpy_r_modname);
    CPy_DECREF(cpy_r_tail);
    CPy_DECREF(cpy_r_r106);
    return cpy_r_r107;
CPyL64: ;
    tuple_T3OOO __tmp7471 = { NULL, NULL, NULL };
    cpy_r_r108 = __tmp7471;
    return cpy_r_r108;
CPyL65: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL64;
CPyL66: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL64;
CPyL67: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL64;
CPyL68: ;
    CPy_DecRef(cpy_r_file);
    goto CPyL64;
CPyL69: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_line);
    goto CPyL64;
CPyL70: ;
    CPy_DECREF(cpy_r_file);
    goto CPyL19;
CPyL71: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL64;
CPyL72: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_modname);
    goto CPyL64;
CPyL73: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_modname);
    CPy_DecRef(cpy_r_r49);
    goto CPyL64;
CPyL74: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL38;
CPyL75: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL64;
CPyL76: ;
    CPy_DecRef(cpy_r_r67);
    goto CPyL64;
CPyL77: ;
    CPy_DecRef(cpy_r_modname);
    CPy_DecRef(cpy_r_tail);
    goto CPyL64;
CPyL78: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_modname);
    CPy_DecRef(cpy_r_tail);
    goto CPyL64;
CPyL79: ;
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_modname);
    CPy_DECREF(cpy_r_tail);
    goto CPyL51;
CPyL80: ;
    CPy_DecRef(cpy_r_r88);
    goto CPyL64;
CPyL81: ;
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_modname);
    CPy_DECREF(cpy_r_tail);
    goto CPyL57;
CPyL82: ;
    CPy_DecRef(cpy_r_r100);
    goto CPyL64;
}

PyObject *CPyPy_suggestions___SuggestionEngine___find_node(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", 0};
    static CPyArg_Parser parser = {"O:find_node", kwlist, 0};
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_key)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_key;
    if (likely(PyUnicode_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("str", obj_key); 
        goto fail;
    }
    tuple_T3OOO retval = CPyDef_suggestions___SuggestionEngine___find_node(arg_self, arg_key);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7472 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp7472);
    PyObject *__tmp7473 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp7473);
    PyObject *__tmp7474 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp7474);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "find_node", 529, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___find_node_by_module_and_name(PyObject *cpy_r_self, PyObject *cpy_r_modname, PyObject *cpy_r_tail) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_tree;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_names;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_components;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_component;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject **cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_funcname;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_key;
    CPyPtr cpy_r_r75;
    int64_t cpy_r_r76;
    CPyTagged cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject **cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    cpy_r_r0 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_fgmanager;
    cpy_r_r1 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r0)->_graph;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r1, cpy_r_modname);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 573, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_mypy___build___State))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 573, CPyStatic_suggestions___globals, "mypy.build.State", cpy_r_r2);
        goto CPyL55;
    }
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_suggestions___SuggestionEngine___ensure_loaded(cpy_r_self, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 573, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
    cpy_r_tree = cpy_r_r5;
    cpy_r_r6 = ((mypy___nodes___MypyFileObject *)cpy_r_tree)->_names;
    if (unlikely(cpy_r_r6 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'names' of 'MypyFile' undefined");
    } else {
        CPy_INCREF(cpy_r_r6);
    }
    CPy_DECREF(cpy_r_tree);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 578, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
CPyL4: ;
    cpy_r_names = cpy_r_r6;
    cpy_r_r7 = CPyStatics[224]; /* '.' */
    cpy_r_r8 = PyUnicode_Split(cpy_r_tail, cpy_r_r7, -1);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 581, CPyStatic_suggestions___globals);
        goto CPyL56;
    }
    cpy_r_components = cpy_r_r8;
    cpy_r_r9 = 0;
    cpy_r_i = 0;
    cpy_r_r10 = CPyList_GetSlice(cpy_r_components, 0, -2);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 582, CPyStatic_suggestions___globals);
        goto CPyL57;
    }
    if (likely(PyList_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 582, CPyStatic_suggestions___globals, "list", cpy_r_r10);
        goto CPyL57;
    }
    cpy_r_r12 = 0;
CPyL8: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL58;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_r11, cpy_r_r12);
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 582, CPyStatic_suggestions___globals, "str", cpy_r_r17);
        goto CPyL59;
    }
    cpy_r_component = cpy_r_r18;
    cpy_r_r19 = PyDict_Contains(cpy_r_names, cpy_r_component);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 583, CPyStatic_suggestions___globals);
        goto CPyL60;
    }
    cpy_r_r21 = cpy_r_r19;
    cpy_r_r22 = cpy_r_r21 ^ 1;
    if (cpy_r_r22) {
        goto CPyL61;
    } else
        goto CPyL20;
CPyL12: ;
    cpy_r_r23 = CPyStatics[224]; /* '.' */
    cpy_r_r24 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r25 = CPyList_GetSlice(cpy_r_components, 0, cpy_r_r24);
    CPy_DECREF(cpy_r_components);
    CPyTagged_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 585, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
    if (likely(PyList_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 585, CPyStatic_suggestions___globals, "list", cpy_r_r25);
        goto CPyL55;
    }
    cpy_r_r27 = PyUnicode_Join(cpy_r_r23, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 585, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
    cpy_r_r28 = CPyStatics[6081]; /* 'Unknown class ' */
    cpy_r_r29 = CPyStatics[224]; /* '.' */
    cpy_r_r30 = CPyStr_Build(4, cpy_r_r28, cpy_r_modname, cpy_r_r29, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 585, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
    cpy_r_r31 = (PyObject *)CPyType_suggestions___SuggestionFailure;
    PyObject *cpy_r_r32[1] = {cpy_r_r30};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = _PyObject_Vectorcall(cpy_r_r31, cpy_r_r33, 1, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 584, CPyStatic_suggestions___globals);
        goto CPyL62;
    }
    CPy_DECREF(cpy_r_r30);
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_suggestions___SuggestionFailure))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 584, CPyStatic_suggestions___globals, "mypy.suggestions.SuggestionFailure", cpy_r_r34);
        goto CPyL55;
    }
    CPy_Raise(cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 584, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r36 = CPyDict_GetItem(cpy_r_names, cpy_r_component);
    CPy_DECREF(cpy_r_names);
    CPy_DECREF(cpy_r_component);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 587, CPyStatic_suggestions___globals);
        goto CPyL63;
    }
    if (likely(Py_TYPE(cpy_r_r36) == CPyType_nodes___SymbolTableNode))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 587, CPyStatic_suggestions___globals, "mypy.nodes.SymbolTableNode", cpy_r_r36);
        goto CPyL63;
    }
    cpy_r_r38 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r37)->_node;
    CPy_INCREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    cpy_r_node = cpy_r_r38;
    cpy_r_r39 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    if (!cpy_r_r42) goto CPyL24;
    cpy_r_r43 = cpy_r_r42;
    goto CPyL25;
CPyL24: ;
    cpy_r_r44 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r45 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r46 = *(PyObject * *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 == cpy_r_r44;
    cpy_r_r43 = cpy_r_r47;
CPyL25: ;
    if (cpy_r_r43) {
        goto CPyL64;
    } else
        goto CPyL65;
CPyL26: ;
    cpy_r_r48 = CPyStatics[224]; /* '.' */
    cpy_r_r49 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r50 = CPyList_GetSlice(cpy_r_components, 0, cpy_r_r49);
    CPy_DECREF(cpy_r_components);
    CPyTagged_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 590, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
    if (likely(PyList_Check(cpy_r_r50)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 590, CPyStatic_suggestions___globals, "list", cpy_r_r50);
        goto CPyL55;
    }
    cpy_r_r52 = PyUnicode_Join(cpy_r_r48, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 590, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
    cpy_r_r53 = CPyStatics[6078]; /* 'Object ' */
    cpy_r_r54 = CPyStatics[224]; /* '.' */
    cpy_r_r55 = CPyStatics[6082]; /* ' is not a class' */
    cpy_r_r56 = CPyStr_Build(5, cpy_r_r53, cpy_r_modname, cpy_r_r54, cpy_r_r52, cpy_r_r55);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 590, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
    cpy_r_r57 = (PyObject *)CPyType_suggestions___SuggestionFailure;
    PyObject *cpy_r_r58[1] = {cpy_r_r56};
    cpy_r_r59 = (PyObject **)&cpy_r_r58;
    cpy_r_r60 = _PyObject_Vectorcall(cpy_r_r57, cpy_r_r59, 1, 0);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 589, CPyStatic_suggestions___globals);
        goto CPyL66;
    }
    CPy_DECREF(cpy_r_r56);
    if (likely(Py_TYPE(cpy_r_r60) == CPyType_suggestions___SuggestionFailure))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 589, CPyStatic_suggestions___globals, "mypy.suggestions.SuggestionFailure", cpy_r_r60);
        goto CPyL55;
    }
    CPy_Raise(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 589, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL34: ;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_node) == CPyType_nodes___TypeInfo)))
        cpy_r_r62 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 592, CPyStatic_suggestions___globals, "mypy.nodes.TypeInfo", cpy_r_node);
        goto CPyL67;
    }
    cpy_r_r63 = ((mypy___nodes___TypeInfoObject *)cpy_r_r62)->_names;
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "find_node_by_module_and_name", "TypeInfo", "names", 592, CPyStatic_suggestions___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r63);
CPyL36: ;
    CPy_DECREF(cpy_r_node);
    cpy_r_names = cpy_r_r63;
    cpy_r_r64 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r64;
    cpy_r_i = cpy_r_r64;
    cpy_r_r65 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r65;
    goto CPyL8;
CPyL38: ;
    cpy_r_r66 = CPyList_GetItemShort(cpy_r_components, -2);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 595, CPyStatic_suggestions___globals);
        goto CPyL68;
    }
    if (likely(PyUnicode_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 595, CPyStatic_suggestions___globals, "str", cpy_r_r66);
        goto CPyL68;
    }
    cpy_r_funcname = cpy_r_r67;
    cpy_r_r68 = PyDict_Contains(cpy_r_names, cpy_r_funcname);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 596, CPyStatic_suggestions___globals);
        goto CPyL69;
    }
    cpy_r_r70 = cpy_r_r68;
    cpy_r_r71 = cpy_r_r70 ^ 1;
    if (cpy_r_r71) {
        goto CPyL70;
    } else
        goto CPyL71;
CPyL42: ;
    cpy_r_r72 = CPyStatics[224]; /* '.' */
    cpy_r_r73 = PyUnicode_Concat(cpy_r_modname, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 597, CPyStatic_suggestions___globals);
        goto CPyL72;
    }
    cpy_r_r74 = PyUnicode_Concat(cpy_r_r73, cpy_r_tail);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 597, CPyStatic_suggestions___globals);
        goto CPyL72;
    }
    cpy_r_key = cpy_r_r74;
    cpy_r_r75 = (CPyPtr)&((PyVarObject *)cpy_r_components)->ob_size;
    cpy_r_r76 = *(int64_t *)cpy_r_r75;
    CPy_DECREF(cpy_r_components);
    cpy_r_r77 = cpy_r_r76 << 1;
    cpy_r_r78 = (Py_ssize_t)cpy_r_r77 > (Py_ssize_t)2;
    if (!cpy_r_r78) goto CPyL46;
    cpy_r_r79 = CPyStatics[6083]; /* 'method' */
    CPy_INCREF(cpy_r_r79);
    cpy_r_r80 = cpy_r_r79;
    goto CPyL47;
CPyL46: ;
    cpy_r_r81 = CPyStatics[1713]; /* 'function' */
    CPy_INCREF(cpy_r_r81);
    cpy_r_r80 = cpy_r_r81;
CPyL47: ;
    cpy_r_r82 = CPyStatics[6084]; /* 'Unknown ' */
    cpy_r_r83 = CPyStatics[295]; /* ' ' */
    cpy_r_r84 = CPyStr_Build(4, cpy_r_r82, cpy_r_r80, cpy_r_r83, cpy_r_key);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 599, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
    cpy_r_r85 = (PyObject *)CPyType_suggestions___SuggestionFailure;
    PyObject *cpy_r_r86[1] = {cpy_r_r84};
    cpy_r_r87 = (PyObject **)&cpy_r_r86;
    cpy_r_r88 = _PyObject_Vectorcall(cpy_r_r85, cpy_r_r87, 1, 0);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 598, CPyStatic_suggestions___globals);
        goto CPyL73;
    }
    CPy_DECREF(cpy_r_r84);
    if (likely(Py_TYPE(cpy_r_r88) == CPyType_suggestions___SuggestionFailure))
        cpy_r_r89 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 598, CPyStatic_suggestions___globals, "mypy.suggestions.SuggestionFailure", cpy_r_r88);
        goto CPyL55;
    }
    CPy_Raise(cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 598, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r90 = CPyDict_GetItem(cpy_r_names, cpy_r_funcname);
    CPy_DECREF(cpy_r_names);
    CPy_DECREF(cpy_r_funcname);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 601, CPyStatic_suggestions___globals);
        goto CPyL55;
    }
    if (likely(Py_TYPE(cpy_r_r90) == CPyType_nodes___SymbolTableNode))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 601, CPyStatic_suggestions___globals, "mypy.nodes.SymbolTableNode", cpy_r_r90);
        goto CPyL55;
    }
    cpy_r_r92 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r91)->_node;
    CPy_INCREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r91);
    return cpy_r_r92;
CPyL55: ;
    cpy_r_r93 = NULL;
    return cpy_r_r93;
CPyL56: ;
    CPy_DecRef(cpy_r_names);
    goto CPyL55;
CPyL57: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_components);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL55;
CPyL58: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r11);
    goto CPyL38;
CPyL59: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_components);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r11);
    goto CPyL55;
CPyL60: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_components);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_component);
    goto CPyL55;
CPyL61: ;
    CPy_DECREF(cpy_r_names);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_component);
    goto CPyL12;
CPyL62: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL55;
CPyL63: ;
    CPy_DecRef(cpy_r_components);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r11);
    goto CPyL55;
CPyL64: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL34;
CPyL65: ;
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_node);
    goto CPyL26;
CPyL66: ;
    CPy_DecRef(cpy_r_r56);
    goto CPyL55;
CPyL67: ;
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_node);
    goto CPyL55;
CPyL68: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_components);
    goto CPyL55;
CPyL69: ;
    CPy_DecRef(cpy_r_names);
    CPy_DecRef(cpy_r_components);
    CPy_DecRef(cpy_r_funcname);
    goto CPyL55;
CPyL70: ;
    CPy_DECREF(cpy_r_names);
    CPy_DECREF(cpy_r_funcname);
    goto CPyL42;
CPyL71: ;
    CPy_DECREF(cpy_r_components);
    goto CPyL52;
CPyL72: ;
    CPy_DecRef(cpy_r_components);
    goto CPyL55;
CPyL73: ;
    CPy_DecRef(cpy_r_r84);
    goto CPyL55;
}

PyObject *CPyPy_suggestions___SuggestionEngine___find_node_by_module_and_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"modname", "tail", 0};
    static CPyArg_Parser parser = {"OO:find_node_by_module_and_name", kwlist, 0};
    PyObject *obj_modname;
    PyObject *obj_tail;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_modname, &obj_tail)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_modname;
    if (likely(PyUnicode_Check(obj_modname)))
        arg_modname = obj_modname;
    else {
        CPy_TypeError("str", obj_modname); 
        goto fail;
    }
    PyObject *arg_tail;
    if (likely(PyUnicode_Check(obj_tail)))
        arg_tail = obj_tail;
    else {
        CPy_TypeError("str", obj_tail); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___find_node_by_module_and_name(arg_self, arg_modname, arg_tail);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "find_node_by_module_and_name", 568, CPyStatic_suggestions___globals);
    return NULL;
}

tuple_T2OO CPyDef_suggestions___SuggestionEngine___find_node_by_file_and_line(PyObject *cpy_r_self, PyObject *cpy_r_file, CPyTagged cpy_r_line) {
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
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
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
    PyObject *cpy_r_modname;
    PyObject *cpy_r_r30;
    PyObject *cpy_r__;
    tuple_T3OOO cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_tree;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_closest_line;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    tuple_T3OOO cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_sym;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyPtr cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    CPyPtr cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyPtr cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyTagged cpy_r_r87;
    CPyTagged cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyTagged cpy_r_r90;
    CPyTagged cpy_r_sym_line;
    int64_t cpy_r_r91;
    char cpy_r_r92;
    int64_t cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    CPyTagged cpy_r_r99;
    int64_t cpy_r_r100;
    char cpy_r_r101;
    int64_t cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject **cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    tuple_T2OO cpy_r_r125;
    tuple_T2OO cpy_r_r126;
    cpy_r_r0 = 0;
    cpy_r_r1 = CPyStatic_modulefinder___PYTHON_EXTENSIONS;
    if (likely(cpy_r_r1 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"PYTHON_EXTENSIONS\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 610, CPyStatic_suggestions___globals);
        goto CPyL81;
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
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 610, CPyStatic_suggestions___globals, "str", cpy_r_r8);
        goto CPyL81;
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
    if (cpy_r_r0) goto CPyL14;
    cpy_r_r12 = CPyStatics[2657]; /* 'Source file is not a Python file' */
    cpy_r_r13 = (PyObject *)CPyType_suggestions___SuggestionFailure;
    PyObject *cpy_r_r14[1] = {cpy_r_r12};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 611, CPyStatic_suggestions___globals);
        goto CPyL81;
    }
    if (likely(Py_TYPE(cpy_r_r16) == CPyType_suggestions___SuggestionFailure))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 611, CPyStatic_suggestions___globals, "mypy.suggestions.SuggestionFailure", cpy_r_r16);
        goto CPyL81;
    }
    CPy_Raise(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 611, CPyStatic_suggestions___globals);
        goto CPyL81;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r18 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_finder;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyModule_os;
    cpy_r_r20 = CPyStatics[142]; /* 'path' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 613, CPyStatic_suggestions___globals);
        goto CPyL82;
    }
    cpy_r_r22 = CPyStatics[2213]; /* 'normpath' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 613, CPyStatic_suggestions___globals);
        goto CPyL82;
    }
    PyObject *cpy_r_r24[1] = {cpy_r_file};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 1, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 613, CPyStatic_suggestions___globals);
        goto CPyL82;
    }
    if (likely(PyUnicode_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 613, CPyStatic_suggestions___globals, "str", cpy_r_r26);
        goto CPyL82;
    }
    cpy_r_r28 = CPyDef_find_sources___SourceFinder___crawl_up(cpy_r_r18, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r28.f0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 613, CPyStatic_suggestions___globals);
        goto CPyL20;
    }
    cpy_r_r29 = cpy_r_r28.f0;
    CPy_INCREF(cpy_r_r29);
    cpy_r_modname = cpy_r_r29;
    cpy_r_r30 = cpy_r_r28.f1;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r28.f0);
    CPy_DECREF(cpy_r_r28.f1);
    cpy_r__ = cpy_r_r30;
    CPy_DECREF(cpy_r__);
    goto CPyL31;
CPyL20: ;
    cpy_r_r31 = CPy_CatchError();
    cpy_r_r32 = (PyObject *)CPyType_find_sources___InvalidSourceList;
    cpy_r_r33 = CPy_ExceptionMatches(cpy_r_r32);
    if (!cpy_r_r33) goto CPyL27;
    cpy_r_r34 = CPy_GetExcValue();
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_find_sources___InvalidSourceList))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 614, CPyStatic_suggestions___globals, "mypy.find_sources.InvalidSourceList", cpy_r_r34);
        goto CPyL29;
    }
    cpy_r_e = cpy_r_r35;
    CPy_DecRef(cpy_r_e);
    cpy_r_r36 = CPyStatics[2658]; /* 'Invalid source file name: ' */
    cpy_r_r37 = PyUnicode_Concat(cpy_r_r36, cpy_r_file);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 615, CPyStatic_suggestions___globals);
        goto CPyL29;
    }
    cpy_r_r38 = (PyObject *)CPyType_suggestions___SuggestionFailure;
    PyObject *cpy_r_r39[1] = {cpy_r_r37};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r40, 1, 0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 615, CPyStatic_suggestions___globals);
        goto CPyL83;
    }
    CPy_DecRef(cpy_r_r37);
    if (likely(Py_TYPE(cpy_r_r41) == CPyType_suggestions___SuggestionFailure))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 615, CPyStatic_suggestions___globals, "mypy.suggestions.SuggestionFailure", cpy_r_r41);
        goto CPyL29;
    }
    CPy_Raise(cpy_r_r42);
    CPy_DecRef(cpy_r_r42);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 615, CPyStatic_suggestions___globals);
        goto CPyL29;
    } else
        goto CPyL84;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL29;
    } else
        goto CPyL85;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    CPy_RestoreExcInfo(cpy_r_r31);
    CPy_DecRef(cpy_r_r31.f0);
    CPy_DecRef(cpy_r_r31.f1);
    CPy_DecRef(cpy_r_r31.f2);
    cpy_r_r43 = CPy_KeepPropagating();
    if (!cpy_r_r43) goto CPyL81;
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r44 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_graph;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = PyDict_Contains(cpy_r_r44, cpy_r_modname);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 616, CPyStatic_suggestions___globals);
        goto CPyL86;
    }
    cpy_r_r47 = cpy_r_r45;
    cpy_r_r48 = cpy_r_r47 ^ 1;
    if (!cpy_r_r48) goto CPyL38;
    cpy_r_r49 = CPyStatics[2659]; /* 'Unknown module: ' */
    cpy_r_r50 = PyUnicode_Concat(cpy_r_r49, cpy_r_modname);
    CPy_DECREF(cpy_r_modname);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 617, CPyStatic_suggestions___globals);
        goto CPyL81;
    }
    cpy_r_r51 = (PyObject *)CPyType_suggestions___SuggestionFailure;
    PyObject *cpy_r_r52[1] = {cpy_r_r50};
    cpy_r_r53 = (PyObject **)&cpy_r_r52;
    cpy_r_r54 = _PyObject_Vectorcall(cpy_r_r51, cpy_r_r53, 1, 0);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 617, CPyStatic_suggestions___globals);
        goto CPyL87;
    }
    CPy_DECREF(cpy_r_r50);
    if (likely(Py_TYPE(cpy_r_r54) == CPyType_suggestions___SuggestionFailure))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 617, CPyStatic_suggestions___globals, "mypy.suggestions.SuggestionFailure", cpy_r_r54);
        goto CPyL81;
    }
    CPy_Raise(cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 617, CPyStatic_suggestions___globals);
        goto CPyL81;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r56 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_fgmanager;
    cpy_r_r57 = ((mypy___server___update___FineGrainedBuildManagerObject *)cpy_r_r56)->_graph;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = CPyDict_GetItem(cpy_r_r57, cpy_r_modname);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 619, CPyStatic_suggestions___globals);
        goto CPyL86;
    }
    if (likely(Py_TYPE(cpy_r_r58) == CPyType_mypy___build___State))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 619, CPyStatic_suggestions___globals, "mypy.build.State", cpy_r_r58);
        goto CPyL86;
    }
    cpy_r_r60 = CPyDef_suggestions___SuggestionEngine___ensure_loaded(cpy_r_self, cpy_r_r59, 1);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 619, CPyStatic_suggestions___globals);
        goto CPyL86;
    }
    cpy_r_tree = cpy_r_r60;
    cpy_r_r61 = Py_None;
    CPy_INCREF(cpy_r_r61);
    cpy_r_node = cpy_r_r61;
    cpy_r_r62 = Py_None;
    CPy_INCREF(cpy_r_r62);
    cpy_r_closest_line = cpy_r_r62;
    cpy_r_r63 = CPyDef_nodes___MypyFile___local_definitions(cpy_r_tree);
    CPy_DECREF(cpy_r_tree);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 623, CPyStatic_suggestions___globals);
        goto CPyL88;
    }
    cpy_r_r64 = PyObject_GetIter(cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 623, CPyStatic_suggestions___globals);
        goto CPyL88;
    }
CPyL43: ;
    cpy_r_r65 = PyIter_Next(cpy_r_r64);
    if (cpy_r_r65 == NULL) goto CPyL89;
    PyObject *__tmp7475;
    if (unlikely(!(PyTuple_Check(cpy_r_r65) && PyTuple_GET_SIZE(cpy_r_r65) == 3))) {
        __tmp7475 = NULL;
        goto __LL7476;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r65, 0))))
        __tmp7475 = PyTuple_GET_ITEM(cpy_r_r65, 0);
    else {
        __tmp7475 = NULL;
    }
    if (__tmp7475 == NULL) goto __LL7476;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r65, 1)) == CPyType_nodes___SymbolTableNode))
        __tmp7475 = PyTuple_GET_ITEM(cpy_r_r65, 1);
    else {
        __tmp7475 = NULL;
    }
    if (__tmp7475 == NULL) goto __LL7476;
    if ((Py_TYPE(PyTuple_GET_ITEM(cpy_r_r65, 2)) == CPyType_nodes___FakeInfo) || (Py_TYPE(PyTuple_GET_ITEM(cpy_r_r65, 2)) == CPyType_nodes___TypeInfo))
        __tmp7475 = PyTuple_GET_ITEM(cpy_r_r65, 2);
    else {
        __tmp7475 = NULL;
    }
    if (__tmp7475 != NULL) goto __LL7477;
    if (PyTuple_GET_ITEM(cpy_r_r65, 2) == Py_None)
        __tmp7475 = PyTuple_GET_ITEM(cpy_r_r65, 2);
    else {
        __tmp7475 = NULL;
    }
    if (__tmp7475 != NULL) goto __LL7477;
    __tmp7475 = NULL;
__LL7477: ;
    if (__tmp7475 == NULL) goto __LL7476;
    __tmp7475 = cpy_r_r65;
__LL7476: ;
    if (unlikely(__tmp7475 == NULL)) {
        CPy_TypeError("tuple[str, mypy.nodes.SymbolTableNode, union[mypy.nodes.TypeInfo, None]]", cpy_r_r65); cpy_r_r66 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp7478 = PyTuple_GET_ITEM(cpy_r_r65, 0);
        CPy_INCREF(__tmp7478);
        PyObject *__tmp7479;
        if (likely(PyUnicode_Check(__tmp7478)))
            __tmp7479 = __tmp7478;
        else {
            CPy_TypeError("str", __tmp7478); 
            __tmp7479 = NULL;
        }
        cpy_r_r66.f0 = __tmp7479;
        PyObject *__tmp7480 = PyTuple_GET_ITEM(cpy_r_r65, 1);
        CPy_INCREF(__tmp7480);
        PyObject *__tmp7481;
        if (likely(Py_TYPE(__tmp7480) == CPyType_nodes___SymbolTableNode))
            __tmp7481 = __tmp7480;
        else {
            CPy_TypeError("mypy.nodes.SymbolTableNode", __tmp7480); 
            __tmp7481 = NULL;
        }
        cpy_r_r66.f1 = __tmp7481;
        PyObject *__tmp7482 = PyTuple_GET_ITEM(cpy_r_r65, 2);
        CPy_INCREF(__tmp7482);
        PyObject *__tmp7483;
        if ((Py_TYPE(__tmp7482) == CPyType_nodes___FakeInfo) || (Py_TYPE(__tmp7482) == CPyType_nodes___TypeInfo))
            __tmp7483 = __tmp7482;
        else {
            __tmp7483 = NULL;
        }
        if (__tmp7483 != NULL) goto __LL7484;
        if (__tmp7482 == Py_None)
            __tmp7483 = __tmp7482;
        else {
            __tmp7483 = NULL;
        }
        if (__tmp7483 != NULL) goto __LL7484;
        CPy_TypeError("mypy.nodes.TypeInfo or None", __tmp7482); 
        __tmp7483 = NULL;
__LL7484: ;
        cpy_r_r66.f2 = __tmp7483;
    }
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66.f0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 623, CPyStatic_suggestions___globals);
        goto CPyL90;
    }
    cpy_r_r67 = cpy_r_r66.f0;
    CPy_INCREF(cpy_r_r67);
    cpy_r__ = cpy_r_r67;
    CPy_DECREF(cpy_r__);
    cpy_r_r68 = cpy_r_r66.f1;
    CPy_INCREF(cpy_r_r68);
    cpy_r_sym = cpy_r_r68;
    cpy_r_r69 = cpy_r_r66.f2;
    CPy_INCREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r66.f0);
    CPy_DECREF(cpy_r_r66.f1);
    CPy_DECREF(cpy_r_r66.f2);
    cpy_r__ = cpy_r_r69;
    CPy_DECREF(cpy_r__);
    cpy_r_r70 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_sym)->_node;
    cpy_r_r71 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r72 = (CPyPtr)&((PyObject *)cpy_r_r70)->ob_type;
    cpy_r_r73 = *(PyObject * *)cpy_r_r72;
    cpy_r_r74 = cpy_r_r73 == cpy_r_r71;
    if (!cpy_r_r74) goto CPyL47;
    cpy_r_r75 = cpy_r_r74;
    goto CPyL48;
CPyL47: ;
    cpy_r_r76 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r77 = (CPyPtr)&((PyObject *)cpy_r_r70)->ob_type;
    cpy_r_r78 = *(PyObject * *)cpy_r_r77;
    cpy_r_r79 = cpy_r_r78 == cpy_r_r76;
    cpy_r_r75 = cpy_r_r79;
CPyL48: ;
    if (!cpy_r_r75) goto CPyL91;
    cpy_r_r80 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_sym)->_node;
    CPy_INCREF(cpy_r_r80);
    if (Py_TYPE(cpy_r_r80) == CPyType_nodes___FuncDef)
        cpy_r_r81 = cpy_r_r80;
    else {
        cpy_r_r81 = NULL;
    }
    if (cpy_r_r81 != NULL) goto __LL7485;
    if (Py_TYPE(cpy_r_r80) == CPyType_nodes___Decorator)
        cpy_r_r81 = cpy_r_r80;
    else {
        cpy_r_r81 = NULL;
    }
    if (cpy_r_r81 != NULL) goto __LL7485;
    CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 625, CPyStatic_suggestions___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r80);
    goto CPyL92;
__LL7485: ;
    cpy_r_r82 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r83 = (CPyPtr)&((PyObject *)cpy_r_r81)->ob_type;
    cpy_r_r84 = *(PyObject * *)cpy_r_r83;
    cpy_r_r85 = cpy_r_r84 == cpy_r_r82;
    if (!cpy_r_r85) goto CPyL53;
    if (likely(Py_TYPE(cpy_r_r81) == CPyType_nodes___FuncDef))
        cpy_r_r86 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 625, CPyStatic_suggestions___globals, "mypy.nodes.FuncDef", cpy_r_r81);
        goto CPyL92;
    }
    cpy_r_r87 = ((mypy___nodes___FuncDefObject *)cpy_r_r86)->_line;
    CPyTagged_INCREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r88 = cpy_r_r87;
    goto CPyL55;
CPyL53: ;
    if (likely(Py_TYPE(cpy_r_r81) == CPyType_nodes___Decorator))
        cpy_r_r89 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 625, CPyStatic_suggestions___globals, "mypy.nodes.Decorator", cpy_r_r81);
        goto CPyL92;
    }
    cpy_r_r90 = ((mypy___nodes___DecoratorObject *)cpy_r_r89)->_line;
    CPyTagged_INCREF(cpy_r_r90);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r88 = cpy_r_r90;
CPyL55: ;
    cpy_r_sym_line = cpy_r_r88;
    cpy_r_r91 = cpy_r_sym_line & 1;
    cpy_r_r92 = cpy_r_r91 != 0;
    if (cpy_r_r92) goto CPyL58;
    cpy_r_r93 = cpy_r_line & 1;
    cpy_r_r94 = cpy_r_r93 != 0;
    if (!cpy_r_r94) goto CPyL59;
CPyL58: ;
    cpy_r_r95 = CPyTagged_IsLt_(cpy_r_line, cpy_r_sym_line);
    if (cpy_r_r95) {
        goto CPyL93;
    } else
        goto CPyL60;
CPyL59: ;
    cpy_r_r96 = (Py_ssize_t)cpy_r_sym_line <= (Py_ssize_t)cpy_r_line;
    if (!cpy_r_r96) goto CPyL93;
CPyL60: ;
    cpy_r_r97 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r98 = cpy_r_closest_line == cpy_r_r97;
    if (cpy_r_r98) goto CPyL94;
    if (likely(PyLong_Check(cpy_r_closest_line)))
        cpy_r_r99 = CPyTagged_FromObject(cpy_r_closest_line);
    else {
        CPy_TypeError("int", cpy_r_closest_line); cpy_r_r99 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r99 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 631, CPyStatic_suggestions___globals);
        goto CPyL95;
    }
    cpy_r_r100 = cpy_r_sym_line & 1;
    cpy_r_r101 = cpy_r_r100 != 0;
    if (cpy_r_r101) goto CPyL64;
    cpy_r_r102 = cpy_r_r99 & 1;
    cpy_r_r103 = cpy_r_r102 != 0;
    if (!cpy_r_r103) goto CPyL65;
CPyL64: ;
    cpy_r_r104 = CPyTagged_IsLt_(cpy_r_r99, cpy_r_sym_line);
    CPyTagged_DECREF(cpy_r_r99);
    if (cpy_r_r104) {
        goto CPyL94;
    } else
        goto CPyL93;
CPyL65: ;
    cpy_r_r105 = (Py_ssize_t)cpy_r_sym_line > (Py_ssize_t)cpy_r_r99;
    CPyTagged_DECREF(cpy_r_r99);
    if (cpy_r_r105) {
        goto CPyL94;
    } else
        goto CPyL93;
CPyL66: ;
    cpy_r_r106 = CPyTagged_StealAsObject(cpy_r_sym_line);
    cpy_r_closest_line = cpy_r_r106;
    cpy_r_r107 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_sym)->_node;
    CPy_INCREF(cpy_r_r107);
    CPy_DECREF(cpy_r_sym);
    if (Py_TYPE(cpy_r_r107) == CPyType_nodes___FuncDef)
        cpy_r_r108 = cpy_r_r107;
    else {
        cpy_r_r108 = NULL;
    }
    if (cpy_r_r108 != NULL) goto __LL7486;
    if (Py_TYPE(cpy_r_r107) == CPyType_nodes___Decorator)
        cpy_r_r108 = cpy_r_r107;
    else {
        cpy_r_r108 = NULL;
    }
    if (cpy_r_r108 != NULL) goto __LL7486;
    CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 633, CPyStatic_suggestions___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r107);
    goto CPyL96;
__LL7486: ;
    cpy_r_node = cpy_r_r108;
    goto CPyL43;
CPyL68: ;
    cpy_r_r109 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 623, CPyStatic_suggestions___globals);
        goto CPyL97;
    }
    cpy_r_r110 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r111 = cpy_r_node != cpy_r_r110;
    if (!cpy_r_r111) goto CPyL98;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r112 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 620, CPyStatic_suggestions___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL97;
    }
    cpy_r_r113 = PyObject_IsTrue(cpy_r_r112);
    CPy_DECREF(cpy_r_r112);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 620, CPyStatic_suggestions___globals);
        goto CPyL97;
    }
    cpy_r_r115 = cpy_r_r113;
    if (cpy_r_r115) {
        goto CPyL79;
    } else
        goto CPyL98;
CPyL73: ;
    cpy_r_r116 = CPyStatics[6085]; /* 'Cannot find a function at line ' */
    cpy_r_r117 = CPyTagged_Str(cpy_r_line);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 635, CPyStatic_suggestions___globals);
        goto CPyL81;
    }
    cpy_r_r118 = CPyStr_Build(2, cpy_r_r116, cpy_r_r117);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 635, CPyStatic_suggestions___globals);
        goto CPyL81;
    }
    cpy_r_r119 = (PyObject *)CPyType_suggestions___SuggestionFailure;
    PyObject *cpy_r_r120[1] = {cpy_r_r118};
    cpy_r_r121 = (PyObject **)&cpy_r_r120;
    cpy_r_r122 = _PyObject_Vectorcall(cpy_r_r119, cpy_r_r121, 1, 0);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 635, CPyStatic_suggestions___globals);
        goto CPyL99;
    }
    CPy_DECREF(cpy_r_r118);
    if (likely(Py_TYPE(cpy_r_r122) == CPyType_suggestions___SuggestionFailure))
        cpy_r_r123 = cpy_r_r122;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 635, CPyStatic_suggestions___globals, "mypy.suggestions.SuggestionFailure", cpy_r_r122);
        goto CPyL81;
    }
    CPy_Raise(cpy_r_r123);
    CPy_DECREF(cpy_r_r123);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 635, CPyStatic_suggestions___globals);
        goto CPyL81;
    }
    CPy_Unreachable();
CPyL79: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r124 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 636, CPyStatic_suggestions___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL86;
    }
    cpy_r_r125.f0 = cpy_r_modname;
    cpy_r_r125.f1 = cpy_r_r124;
    CPy_INCREF(cpy_r_r125.f0);
    CPy_INCREF(cpy_r_r125.f1);
    CPy_DECREF(cpy_r_modname);
    CPy_DECREF(cpy_r_r124);
    return cpy_r_r125;
CPyL81: ;
    tuple_T2OO __tmp7487 = { NULL, NULL };
    cpy_r_r126 = __tmp7487;
    return cpy_r_r126;
CPyL82: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL20;
CPyL83: ;
    CPy_DecRef(cpy_r_r37);
    goto CPyL29;
CPyL84: ;
    CPy_DecRef(cpy_r_r31.f0);
    CPy_DecRef(cpy_r_r31.f1);
    CPy_DecRef(cpy_r_r31.f2);
    goto CPyL26;
CPyL85: ;
    CPy_DecRef(cpy_r_r31.f0);
    CPy_DecRef(cpy_r_r31.f1);
    CPy_DecRef(cpy_r_r31.f2);
    goto CPyL28;
CPyL86: ;
    CPy_DecRef(cpy_r_modname);
    goto CPyL81;
CPyL87: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL81;
CPyL88: ;
    CPy_DecRef(cpy_r_modname);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_closest_line);
    goto CPyL81;
CPyL89: ;
    CPy_DECREF(cpy_r_closest_line);
    CPy_DECREF(cpy_r_r64);
    goto CPyL68;
CPyL90: ;
    CPy_DecRef(cpy_r_modname);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_closest_line);
    CPy_DecRef(cpy_r_r64);
    goto CPyL81;
CPyL91: ;
    CPy_DECREF(cpy_r_sym);
    goto CPyL43;
CPyL92: ;
    CPy_DecRef(cpy_r_modname);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_closest_line);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_sym);
    goto CPyL81;
CPyL93: ;
    CPy_DECREF(cpy_r_sym);
    CPyTagged_DECREF(cpy_r_sym_line);
    goto CPyL43;
CPyL94: ;
    CPy_DECREF(cpy_r_node);
    CPy_DECREF(cpy_r_closest_line);
    goto CPyL66;
CPyL95: ;
    CPy_DecRef(cpy_r_modname);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_closest_line);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_sym);
    CPyTagged_DecRef(cpy_r_sym_line);
    goto CPyL81;
CPyL96: ;
    CPy_DecRef(cpy_r_modname);
    CPy_DecRef(cpy_r_closest_line);
    CPy_DecRef(cpy_r_r64);
    goto CPyL81;
CPyL97: ;
    CPy_DecRef(cpy_r_modname);
    CPy_DecRef(cpy_r_node);
    goto CPyL81;
CPyL98: ;
    CPy_DECREF(cpy_r_modname);
    CPy_DECREF(cpy_r_node);
    goto CPyL73;
CPyL99: ;
    CPy_DecRef(cpy_r_r118);
    goto CPyL81;
}

PyObject *CPyPy_suggestions___SuggestionEngine___find_node_by_file_and_line(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", "line", 0};
    static CPyArg_Parser parser = {"OO:find_node_by_file_and_line", kwlist, 0};
    PyObject *obj_file;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_file, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(PyUnicode_Check(obj_file)))
        arg_file = obj_file;
    else {
        CPy_TypeError("str", obj_file); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    tuple_T2OO retval = CPyDef_suggestions___SuggestionEngine___find_node_by_file_and_line(arg_self, arg_file, arg_line);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7488 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp7488);
    PyObject *__tmp7489 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp7489);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "find_node_by_file_and_line", 603, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___extract_from_decorator(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_dec;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyPtr cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
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
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
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
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
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
    PyObject *cpy_r_r81;
    CPyPtr cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyPtr cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyTagged cpy_r_r93;
    CPyPtr cpy_r_r94;
    int64_t cpy_r_r95;
    CPyTagged cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_ct;
    PyObject *cpy_r_r100;
    CPyPtr cpy_r_r101;
    int64_t cpy_r_r102;
    CPyTagged cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    CPyPtr cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    CPyTagged cpy_r_r118;
    CPyTagged cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    cpy_r_r0 = ((mypy___nodes___DecoratorObject *)cpy_r_node)->_decorators;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL61;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_nodes___Expression)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 639, CPyStatic_suggestions___globals, "mypy.nodes.Expression", cpy_r_r6);
        goto CPyL62;
    }
    cpy_r_dec = cpy_r_r7;
    cpy_r_r8 = Py_None;
    CPy_INCREF(cpy_r_r8);
    cpy_r_typ = cpy_r_r8;
    cpy_r_r9 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_dec)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (!cpy_r_r12) goto CPyL5;
    cpy_r_r13 = cpy_r_r12;
    goto CPyL6;
CPyL5: ;
    cpy_r_r14 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_dec)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    cpy_r_r13 = cpy_r_r17;
CPyL6: ;
    if (!cpy_r_r13) goto CPyL8;
    cpy_r_r18 = cpy_r_r13;
    goto CPyL9;
CPyL8: ;
    cpy_r_r19 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r20 = (CPyPtr)&((PyObject *)cpy_r_dec)->ob_type;
    cpy_r_r21 = *(PyObject * *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 == cpy_r_r19;
    cpy_r_r18 = cpy_r_r22;
CPyL9: ;
    if (!cpy_r_r18) goto CPyL15;
    if (likely((Py_TYPE(cpy_r_dec) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_dec) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_dec) == CPyType_nodes___RefExpr)))
        cpy_r_r23 = cpy_r_dec;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 641, CPyStatic_suggestions___globals, "mypy.nodes.RefExpr", cpy_r_dec);
        goto CPyL63;
    }
    cpy_r_r24 = ((mypy___nodes___RefExprObject *)cpy_r_r23)->_node;
    cpy_r_r25 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_r24)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    if (cpy_r_r28) {
        goto CPyL64;
    } else
        goto CPyL15;
CPyL12: ;
    if (likely((Py_TYPE(cpy_r_dec) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_dec) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_dec) == CPyType_nodes___RefExpr)))
        cpy_r_r29 = cpy_r_dec;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 642, CPyStatic_suggestions___globals, "mypy.nodes.RefExpr", cpy_r_dec);
        goto CPyL65;
    }
    cpy_r_r30 = ((mypy___nodes___RefExprObject *)cpy_r_r29)->_node;
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_nodes___FuncDef))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 642, CPyStatic_suggestions___globals, "mypy.nodes.FuncDef", cpy_r_r30);
        goto CPyL65;
    }
    cpy_r_r32 = ((mypy___nodes___FuncDefObject *)cpy_r_r31)->_type;
    CPy_INCREF(cpy_r_r32);
    CPy_DECREF(cpy_r_dec);
    cpy_r_typ = cpy_r_r32;
    goto CPyL38;
CPyL15: ;
    cpy_r_r33 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_dec)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    if (!cpy_r_r36) goto CPyL66;
    if (likely(Py_TYPE(cpy_r_dec) == CPyType_nodes___CallExpr))
        cpy_r_r37 = cpy_r_dec;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 645, CPyStatic_suggestions___globals, "mypy.nodes.CallExpr", cpy_r_dec);
        goto CPyL63;
    }
    cpy_r_r38 = ((mypy___nodes___CallExprObject *)cpy_r_r37)->_callee;
    cpy_r_r39 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_r38)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    if (!cpy_r_r42) goto CPyL19;
    cpy_r_r43 = cpy_r_r42;
    goto CPyL20;
CPyL19: ;
    cpy_r_r44 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r45 = (CPyPtr)&((PyObject *)cpy_r_r38)->ob_type;
    cpy_r_r46 = *(PyObject * *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 == cpy_r_r44;
    cpy_r_r43 = cpy_r_r47;
CPyL20: ;
    if (!cpy_r_r43) goto CPyL22;
    cpy_r_r48 = cpy_r_r43;
    goto CPyL23;
CPyL22: ;
    cpy_r_r49 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_r38)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    cpy_r_r48 = cpy_r_r52;
CPyL23: ;
    if (!cpy_r_r48) goto CPyL66;
    if (likely(Py_TYPE(cpy_r_dec) == CPyType_nodes___CallExpr))
        cpy_r_r53 = cpy_r_dec;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 646, CPyStatic_suggestions___globals, "mypy.nodes.CallExpr", cpy_r_dec);
        goto CPyL63;
    }
    cpy_r_r54 = ((mypy___nodes___CallExprObject *)cpy_r_r53)->_callee;
    if (likely((Py_TYPE(cpy_r_r54) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r54) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r54) == CPyType_nodes___RefExpr)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 646, CPyStatic_suggestions___globals, "mypy.nodes.RefExpr", cpy_r_r54);
        goto CPyL63;
    }
    cpy_r_r56 = ((mypy___nodes___RefExprObject *)cpy_r_r55)->_node;
    cpy_r_r57 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r58 = (CPyPtr)&((PyObject *)cpy_r_r56)->ob_type;
    cpy_r_r59 = *(PyObject * *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 == cpy_r_r57;
    if (!cpy_r_r60) goto CPyL66;
    if (likely(Py_TYPE(cpy_r_dec) == CPyType_nodes___CallExpr))
        cpy_r_r61 = cpy_r_dec;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 647, CPyStatic_suggestions___globals, "mypy.nodes.CallExpr", cpy_r_dec);
        goto CPyL63;
    }
    cpy_r_r62 = ((mypy___nodes___CallExprObject *)cpy_r_r61)->_callee;
    if (likely((Py_TYPE(cpy_r_r62) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r62) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r62) == CPyType_nodes___RefExpr)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 647, CPyStatic_suggestions___globals, "mypy.nodes.RefExpr", cpy_r_r62);
        goto CPyL63;
    }
    cpy_r_r64 = ((mypy___nodes___RefExprObject *)cpy_r_r63)->_node;
    if (likely(Py_TYPE(cpy_r_r64) == CPyType_nodes___FuncDef))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 647, CPyStatic_suggestions___globals, "mypy.nodes.FuncDef", cpy_r_r64);
        goto CPyL63;
    }
    cpy_r_r66 = ((mypy___nodes___FuncDefObject *)cpy_r_r65)->_type;
    cpy_r_r67 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r68 = (CPyPtr)&((PyObject *)cpy_r_r66)->ob_type;
    cpy_r_r69 = *(PyObject * *)cpy_r_r68;
    cpy_r_r70 = cpy_r_r69 == cpy_r_r67;
    if (cpy_r_r70) {
        goto CPyL67;
    } else
        goto CPyL66;
CPyL31: ;
    if (likely(Py_TYPE(cpy_r_dec) == CPyType_nodes___CallExpr))
        cpy_r_r71 = cpy_r_dec;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 649, CPyStatic_suggestions___globals, "mypy.nodes.CallExpr", cpy_r_dec);
        goto CPyL65;
    }
    cpy_r_r72 = ((mypy___nodes___CallExprObject *)cpy_r_r71)->_callee;
    if (likely((Py_TYPE(cpy_r_r72) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r72) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r72) == CPyType_nodes___RefExpr)))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 649, CPyStatic_suggestions___globals, "mypy.nodes.RefExpr", cpy_r_r72);
        goto CPyL65;
    }
    cpy_r_r74 = ((mypy___nodes___RefExprObject *)cpy_r_r73)->_node;
    if (likely(Py_TYPE(cpy_r_r74) == CPyType_nodes___FuncDef))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 649, CPyStatic_suggestions___globals, "mypy.nodes.FuncDef", cpy_r_r74);
        goto CPyL65;
    }
    cpy_r_r76 = ((mypy___nodes___FuncDefObject *)cpy_r_r75)->_type;
    if (likely(Py_TYPE(cpy_r_r76) == CPyType_types___CallableType))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 649, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_r76);
        goto CPyL65;
    }
    cpy_r_r78 = ((mypy___types___CallableTypeObject *)cpy_r_r77)->_ret_type;
    CPy_INCREF(cpy_r_r78);
    CPy_DECREF(cpy_r_dec);
    cpy_r_r79 = CPyDef_types___get_proper_type(cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "extract_from_decorator", 649, CPyStatic_suggestions___globals);
        goto CPyL62;
    }
    if (likely(cpy_r_r79 != Py_None))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 649, CPyStatic_suggestions___globals, "mypy.types.ProperType", cpy_r_r79);
        goto CPyL62;
    }
    cpy_r_typ = cpy_r_r80;
CPyL38: ;
    cpy_r_r81 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r82 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r83 = *(PyObject * *)cpy_r_r82;
    cpy_r_r84 = cpy_r_r83 == cpy_r_r81;
    if (!cpy_r_r84) goto CPyL40;
    cpy_r_r85 = cpy_r_r84;
    goto CPyL41;
CPyL40: ;
    cpy_r_r86 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r87 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r88 = *(PyObject * *)cpy_r_r87;
    cpy_r_r89 = cpy_r_r88 == cpy_r_r86;
    cpy_r_r85 = cpy_r_r89;
CPyL41: ;
    if (cpy_r_r85) {
        goto CPyL43;
    } else
        goto CPyL68;
CPyL42: ;
    cpy_r_r90 = Py_None;
    CPy_INCREF(cpy_r_r90);
    return cpy_r_r90;
CPyL43: ;
    if (likely((Py_TYPE(cpy_r_typ) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_typ) == CPyType_types___Overloaded)))
        cpy_r_r91 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 653, CPyStatic_suggestions___globals, "mypy.types.FunctionLike", cpy_r_typ);
        goto CPyL62;
    }
    cpy_r_r92 = CPY_GET_ATTR(cpy_r_r91, CPyType_types___FunctionLike, 18, mypy___types___FunctionLikeObject, PyObject *); /* items */
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "extract_from_decorator", 653, CPyStatic_suggestions___globals);
        goto CPyL62;
    }
CPyL45: ;
    cpy_r_r93 = 0;
CPyL46: ;
    cpy_r_r94 = (CPyPtr)&((PyVarObject *)cpy_r_r92)->ob_size;
    cpy_r_r95 = *(int64_t *)cpy_r_r94;
    cpy_r_r96 = cpy_r_r95 << 1;
    cpy_r_r97 = (Py_ssize_t)cpy_r_r93 < (Py_ssize_t)cpy_r_r96;
    if (!cpy_r_r97) goto CPyL69;
    cpy_r_r98 = CPyList_GetItemUnsafe(cpy_r_r92, cpy_r_r93);
    if (likely(Py_TYPE(cpy_r_r98) == CPyType_types___CallableType))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 653, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_r98);
        goto CPyL70;
    }
    cpy_r_ct = cpy_r_r99;
    cpy_r_r100 = ((mypy___types___CallableTypeObject *)cpy_r_ct)->_arg_types;
    cpy_r_r101 = (CPyPtr)&((PyVarObject *)cpy_r_r100)->ob_size;
    cpy_r_r102 = *(int64_t *)cpy_r_r101;
    cpy_r_r103 = cpy_r_r102 << 1;
    cpy_r_r104 = cpy_r_r103 == 2;
    if (!cpy_r_r104) goto CPyL71;
    cpy_r_r105 = ((mypy___types___CallableTypeObject *)cpy_r_ct)->_arg_types;
    cpy_r_r106 = CPyList_GetItemShortBorrow(cpy_r_r105, 0);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "extract_from_decorator", 656, CPyStatic_suggestions___globals);
        goto CPyL72;
    }
    cpy_r_r107 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r108 = (CPyPtr)&((PyObject *)cpy_r_r106)->ob_type;
    cpy_r_r109 = *(PyObject * *)cpy_r_r108;
    cpy_r_r110 = cpy_r_r109 == cpy_r_r107;
    if (!cpy_r_r110) goto CPyL71;
    cpy_r_r111 = ((mypy___types___CallableTypeObject *)cpy_r_ct)->_arg_types;
    cpy_r_r112 = CPyList_GetItemShort(cpy_r_r111, 0);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "extract_from_decorator", 657, CPyStatic_suggestions___globals);
        goto CPyL72;
    }
    if (likely(Py_TYPE(cpy_r_r112) == CPyType_types___TypeVarType))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "extract_from_decorator", 657, CPyStatic_suggestions___globals, "mypy.types.TypeVarType", cpy_r_r112);
        goto CPyL72;
    }
    cpy_r_r114 = ((mypy___types___CallableTypeObject *)cpy_r_ct)->_ret_type;
    CPy_INCREF(cpy_r_r114);
    CPy_DECREF(cpy_r_ct);
    cpy_r_r115 = PyObject_RichCompare(cpy_r_r113, cpy_r_r114, 2);
    CPy_DECREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "extract_from_decorator", 657, CPyStatic_suggestions___globals);
        goto CPyL70;
    }
    if (unlikely(!PyBool_Check(cpy_r_r115))) {
        CPy_TypeError("bool", cpy_r_r115); cpy_r_r116 = 2;
    } else
        cpy_r_r116 = cpy_r_r115 == Py_True;
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r116 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "extract_from_decorator", 657, CPyStatic_suggestions___globals);
        goto CPyL70;
    }
    if (cpy_r_r116) {
        goto CPyL57;
    } else
        goto CPyL73;
CPyL56: ;
    cpy_r_r117 = Py_None;
    CPy_INCREF(cpy_r_r117);
    return cpy_r_r117;
CPyL57: ;
    cpy_r_r118 = cpy_r_r93 + 2;
    cpy_r_r93 = cpy_r_r118;
    goto CPyL46;
CPyL58: ;
    cpy_r_r119 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r119;
    goto CPyL1;
CPyL59: ;
    cpy_r_r120 = ((mypy___nodes___DecoratorObject *)cpy_r_node)->_func;
    CPy_INCREF(cpy_r_r120);
    return cpy_r_r120;
CPyL60: ;
    cpy_r_r121 = NULL;
    return cpy_r_r121;
CPyL61: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL59;
CPyL62: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL60;
CPyL63: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_dec);
    CPy_DecRef(cpy_r_typ);
    goto CPyL60;
CPyL64: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL12;
CPyL65: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_dec);
    goto CPyL60;
CPyL66: ;
    CPy_DECREF(cpy_r_dec);
    goto CPyL38;
CPyL67: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL31;
CPyL68: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_typ);
    goto CPyL42;
CPyL69: ;
    CPy_DECREF(cpy_r_r92);
    goto CPyL58;
CPyL70: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r92);
    goto CPyL60;
CPyL71: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_ct);
    goto CPyL56;
CPyL72: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_ct);
    goto CPyL60;
CPyL73: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r92);
    goto CPyL56;
}

PyObject *CPyPy_suggestions___SuggestionEngine___extract_from_decorator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:extract_from_decorator", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___Decorator))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_node); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___extract_from_decorator(arg_self, arg_node);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "extract_from_decorator", 638, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___try_type(PyObject *cpy_r_self, PyObject *cpy_r_func, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_old;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_res;
    PyObject *cpy_r_r7;
    tuple_T3OOO cpy_r_r8;
    tuple_T3OOO cpy_r_r9;
    PyObject *cpy_r_r10;
    tuple_T3OOO cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    cpy_r_r0 = ((mypy___nodes___FuncDefObject *)cpy_r_func)->_unanalyzed_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_old = cpy_r_r0;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    CPy_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_func)->_type);
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->_type = cpy_r_r1;
    CPy_INCREF(cpy_r_typ);
    CPy_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_func)->_unanalyzed_type);
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->_unanalyzed_type = cpy_r_typ;
    cpy_r_r4 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_fgmanager;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPY_GET_ATTR(cpy_r_func, CPyType_nodes___FuncDef, 7, mypy___nodes___FuncDefObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "try_type", 675, CPyStatic_suggestions___globals);
        goto CPyL17;
    }
CPyL2: ;
    cpy_r_r6 = CPyDef_update___FineGrainedBuildManager___trigger(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "try_type", 675, CPyStatic_suggestions___globals);
        goto CPyL5;
    }
    cpy_r_res = cpy_r_r6;
    cpy_r_r7 = cpy_r_res;
    tuple_T3OOO __tmp7490 = { NULL, NULL, NULL };
    cpy_r_r8 = __tmp7490;
    cpy_r_r9 = cpy_r_r8;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = NULL;
    cpy_r_r7 = cpy_r_r10;
    cpy_r_r11 = CPy_CatchError();
    cpy_r_r9 = cpy_r_r11;
CPyL6: ;
    CPy_DECREF(((mypy___nodes___FuncDefObject *)cpy_r_func)->_unanalyzed_type);
    ((mypy___nodes___FuncDefObject *)cpy_r_func)->_unanalyzed_type = cpy_r_old;
    if (cpy_r_r9.f0 == NULL) {
        goto CPyL9;
    } else
        goto CPyL18;
CPyL7: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL11;
    } else
        goto CPyL19;
CPyL8: ;
    CPy_Unreachable();
CPyL9: ;
    if (cpy_r_r7 == NULL) goto CPyL15;
    return cpy_r_r7;
CPyL11: ;
    if (cpy_r_r9.f0 == NULL) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r9);
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
CPyL13: ;
    cpy_r_r13 = CPy_KeepPropagating();
    if (!cpy_r_r13) goto CPyL16;
    CPy_Unreachable();
CPyL15: ;
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
CPyL17: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL5;
CPyL18: ;
    CPy_XDECREF(cpy_r_r7);
    goto CPyL7;
CPyL19: ;
    CPy_XDECREF(cpy_r_r9.f0);
    CPy_XDECREF(cpy_r_r9.f1);
    CPy_XDECREF(cpy_r_r9.f2);
    goto CPyL8;
}

PyObject *CPyPy_suggestions___SuggestionEngine___try_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"func", "typ", 0};
    static CPyArg_Parser parser = {"OO:try_type", kwlist, 0};
    PyObject *obj_func;
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_func, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_func;
    if (likely(Py_TYPE(obj_func) == CPyType_nodes___FuncDef))
        arg_func = obj_func;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_func); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___ProperType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___try_type(arg_self, arg_func, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "try_type", 663, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___reload(PyObject *cpy_r_self, PyObject *cpy_r_state) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = ((mypy___build___StateObject *)cpy_r_state)->_path;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/suggestions.py", "reload", 685, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_fgmanager;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_update___FineGrainedBuildManager___flush_cache(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "reload", 686, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
    cpy_r_r6 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_fgmanager;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = ((mypy___build___StateObject *)cpy_r_state)->_id;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "reload", "State", "id", 687, CPyStatic_suggestions___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r7);
CPyL5: ;
    cpy_r_r8 = ((mypy___build___StateObject *)cpy_r_state)->_path;
    CPy_INCREF(cpy_r_r8);
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "reload", 687, CPyStatic_suggestions___globals, "str", cpy_r_r8);
        goto CPyL12;
    }
    cpy_r_r10.f0 = cpy_r_r7;
    cpy_r_r10.f1 = cpy_r_r9;
    CPy_INCREF(cpy_r_r10.f0);
    CPy_INCREF(cpy_r_r10.f1);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = PyList_New(1);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "reload", 687, CPyStatic_suggestions___globals);
        goto CPyL13;
    }
    cpy_r_r12 = PyTuple_New(2);
    if (unlikely(cpy_r_r12 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7491 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r12, 0, __tmp7491);
    PyObject *__tmp7492 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r12, 1, __tmp7492);
    cpy_r_r13 = (CPyPtr)&((PyListObject *)cpy_r_r11)->ob_item;
    cpy_r_r14 = *(CPyPtr *)cpy_r_r13;
    *(PyObject * *)cpy_r_r14 = cpy_r_r12;
    cpy_r_r15 = PyList_New(0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "reload", 687, CPyStatic_suggestions___globals);
        goto CPyL14;
    }
    cpy_r_r16 = 2;
    cpy_r_r17 = CPyDef_update___FineGrainedBuildManager___update(cpy_r_r6, cpy_r_r11, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "reload", 687, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
    return cpy_r_r17;
CPyL10: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL11: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL10;
CPyL13: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r11);
    goto CPyL10;
}

PyObject *CPyPy_suggestions___SuggestionEngine___reload(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"state", 0};
    static CPyArg_Parser parser = {"O:reload", kwlist, 0};
    PyObject *obj_state;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_state)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_state;
    if (likely(Py_TYPE(obj_state) == CPyType_mypy___build___State))
        arg_state = obj_state;
    else {
        CPy_TypeError("mypy.build.State", obj_state); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___reload(arg_self, arg_state);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "reload", 683, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___ensure_loaded(PyObject *cpy_r_self, PyObject *cpy_r_state, char cpy_r_force) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    if (cpy_r_force != 2) goto CPyL2;
    cpy_r_force = 0;
CPyL2: ;
    cpy_r_r0 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r2) goto CPyL6;
    cpy_r_r3 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "ensure_loaded", 691, CPyStatic_suggestions___globals, "mypy.nodes.MypyFile", cpy_r_r3);
        goto CPyL12;
    }
    cpy_r_r5 = ((mypy___nodes___MypyFileObject *)cpy_r_r4)->_is_cache_skeleton;
    if (cpy_r_r5) goto CPyL6;
CPyL5: ;
    if (!cpy_r_force) goto CPyL7;
CPyL6: ;
    cpy_r_r6 = CPyDef_suggestions___SuggestionEngine___reload(cpy_r_self, cpy_r_state);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "ensure_loaded", 692, CPyStatic_suggestions___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL7: ;
    cpy_r_r7 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_r7 != cpy_r_r8;
    if (cpy_r_r9) goto CPyL10;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/suggestions.py", "ensure_loaded", 693, CPyStatic_suggestions___globals);
        goto CPyL12;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r11 = ((mypy___build___StateObject *)cpy_r_state)->_tree;
    CPy_INCREF(cpy_r_r11);
    if (likely(cpy_r_r11 != Py_None))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "ensure_loaded", 694, CPyStatic_suggestions___globals, "mypy.nodes.MypyFile", cpy_r_r11);
        goto CPyL12;
    }
    return cpy_r_r12;
CPyL12: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL13: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL7;
}

PyObject *CPyPy_suggestions___SuggestionEngine___ensure_loaded(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"state", "force", 0};
    static CPyArg_Parser parser = {"O|O:ensure_loaded", kwlist, 0};
    PyObject *obj_state;
    PyObject *obj_force = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_state, &obj_force)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_state;
    if (likely(Py_TYPE(obj_state) == CPyType_mypy___build___State))
        arg_state = obj_state;
    else {
        CPy_TypeError("mypy.build.State", obj_state); 
        goto fail;
    }
    char arg_force;
    if (obj_force == NULL) {
        arg_force = 2;
    } else if (unlikely(!PyBool_Check(obj_force))) {
        CPy_TypeError("bool", obj_force); goto fail;
    } else
        arg_force = obj_force == Py_True;
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___ensure_loaded(arg_self, arg_state, arg_force);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "ensure_loaded", 689, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___named_type(PyObject *cpy_r_self, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_manager;
    cpy_r_r1 = ((mypy___build___BuildManagerObject *)cpy_r_r0)->_semantic_analyzer;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = NULL;
    cpy_r_r3 = CPyDef_semanal___SemanticAnalyzer___named_type(cpy_r_r1, cpy_r_s, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "named_type", 697, CPyStatic_suggestions___globals);
        goto CPyL2;
    }
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_suggestions___SuggestionEngine___named_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:named_type", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(PyUnicode_Check(obj_s)))
        arg_s = obj_s;
    else {
        CPy_TypeError("str", obj_s); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___named_type(arg_self, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "named_type", 696, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___json_suggestion(PyObject *cpy_r_self, PyObject *cpy_r_mod, PyObject *cpy_r_func_name, PyObject *cpy_r_node, PyObject *cpy_r_suggestion) {
    char cpy_r_r0;
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
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_path;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_obj;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    cpy_r_r0 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_is_class;
    if (cpy_r_r0) goto CPyL2;
CPyL1: ;
    cpy_r_r1 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_is_static;
    if (!cpy_r_r1) goto CPyL19;
CPyL2: ;
    cpy_r_r2 = CPyStatics[224]; /* '.' */
    cpy_r_r3 = CPyStr_Split(cpy_r_func_name, cpy_r_r2, 2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "json_suggestion", 705, CPyStatic_suggestions___globals);
        goto CPyL18;
    }
    cpy_r_r4 = CPyList_GetItemShort(cpy_r_r3, -2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "json_suggestion", 705, CPyStatic_suggestions___globals);
        goto CPyL18;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "json_suggestion", 705, CPyStatic_suggestions___globals, "str", cpy_r_r4);
        goto CPyL18;
    }
    cpy_r_func_name = cpy_r_r5;
CPyL6: ;
    cpy_r_r6 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_graph;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r6, cpy_r_mod);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "json_suggestion", 710, CPyStatic_suggestions___globals);
        goto CPyL20;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_mypy___build___State))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "json_suggestion", 710, CPyStatic_suggestions___globals, "mypy.build.State", cpy_r_r7);
        goto CPyL20;
    }
    cpy_r_r9 = ((mypy___build___StateObject *)cpy_r_r8)->_xpath;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = CPyModule_os;
    cpy_r_r11 = CPyStatics[142]; /* 'path' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "json_suggestion", 710, CPyStatic_suggestions___globals);
        goto CPyL21;
    }
    cpy_r_r13 = CPyStatics[153]; /* 'abspath' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "json_suggestion", 710, CPyStatic_suggestions___globals);
        goto CPyL21;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_r9};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "json_suggestion", 710, CPyStatic_suggestions___globals);
        goto CPyL21;
    }
    CPy_DECREF(cpy_r_r9);
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "json_suggestion", 710, CPyStatic_suggestions___globals, "str", cpy_r_r17);
        goto CPyL20;
    }
    cpy_r_path = cpy_r_r18;
    cpy_r_r19 = CPyStatics[6086]; /* 'signature' */
    cpy_r_r20 = CPyStatics[2272]; /* 'line' */
    cpy_r_r21 = ((mypy___nodes___FuncDefObject *)cpy_r_node)->_line;
    CPyTagged_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyStatics[142]; /* 'path' */
    cpy_r_r23 = CPyStatics[6087]; /* 'func_name' */
    cpy_r_r24 = CPyStatics[6088]; /* 'samples' */
    cpy_r_r25 = CPyTagged_StealAsObject(cpy_r_r21);
    cpy_r_r26 = CPyStatics[9015]; /* 0 */
    cpy_r_r27 = CPyDict_Build(5, cpy_r_r19, cpy_r_suggestion, cpy_r_r20, cpy_r_r25, cpy_r_r22, cpy_r_path, cpy_r_r23, cpy_r_func_name, cpy_r_r24, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_func_name);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "json_suggestion", 712, CPyStatic_suggestions___globals);
        goto CPyL18;
    }
    cpy_r_obj = cpy_r_r27;
    cpy_r_r28 = PyList_New(1);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "json_suggestion", 719, CPyStatic_suggestions___globals);
        goto CPyL22;
    }
    cpy_r_r29 = (CPyPtr)&((PyListObject *)cpy_r_r28)->ob_item;
    cpy_r_r30 = *(CPyPtr *)cpy_r_r29;
    *(PyObject * *)cpy_r_r30 = cpy_r_obj;
    cpy_r_r31 = CPyModule_json;
    cpy_r_r32 = CPyStatics[243]; /* 'dumps' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "json_suggestion", 719, CPyStatic_suggestions___globals);
        goto CPyL23;
    }
    cpy_r_r34 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r35[2] = {cpy_r_r28, cpy_r_r34};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = CPyStatics[9828]; /* ('sort_keys',) */
    cpy_r_r38 = _PyObject_Vectorcall(cpy_r_r33, cpy_r_r36, 1, cpy_r_r37);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "json_suggestion", 719, CPyStatic_suggestions___globals);
        goto CPyL23;
    }
    CPy_DECREF(cpy_r_r28);
    if (likely(PyUnicode_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "json_suggestion", 719, CPyStatic_suggestions___globals, "str", cpy_r_r38);
        goto CPyL18;
    }
    return cpy_r_r39;
CPyL18: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
CPyL19: ;
    CPy_INCREF(cpy_r_func_name);
    goto CPyL6;
CPyL20: ;
    CPy_DecRef(cpy_r_func_name);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_func_name);
    CPy_DecRef(cpy_r_r9);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_obj);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL18;
}

PyObject *CPyPy_suggestions___SuggestionEngine___json_suggestion(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"mod", "func_name", "node", "suggestion", 0};
    static CPyArg_Parser parser = {"OOOO:json_suggestion", kwlist, 0};
    PyObject *obj_mod;
    PyObject *obj_func_name;
    PyObject *obj_node;
    PyObject *obj_suggestion;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_mod, &obj_func_name, &obj_node, &obj_suggestion)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_mod;
    if (likely(PyUnicode_Check(obj_mod)))
        arg_mod = obj_mod;
    else {
        CPy_TypeError("str", obj_mod); 
        goto fail;
    }
    PyObject *arg_func_name;
    if (likely(PyUnicode_Check(obj_func_name)))
        arg_func_name = obj_func_name;
    else {
        CPy_TypeError("str", obj_func_name); 
        goto fail;
    }
    PyObject *arg_node;
    if (likely(Py_TYPE(obj_node) == CPyType_nodes___FuncDef))
        arg_node = obj_node;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_node); 
        goto fail;
    }
    PyObject *arg_suggestion;
    if (likely(PyDict_Check(obj_suggestion)))
        arg_suggestion = obj_suggestion;
    else {
        CPy_TypeError("dict", obj_suggestion); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___json_suggestion(arg_self, arg_mod, arg_func_name, arg_node, arg_suggestion);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "json_suggestion", 699, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___pyannotate_signature(PyObject *cpy_r_self, PyObject *cpy_r_cur_module, char cpy_r_is_method, PyObject *cpy_r_typ) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_start;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    cpy_r_r0 = cpy_r_is_method << 1;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_start = cpy_r_r1;
    cpy_r_r2 = CPyStatics[1125]; /* 'arg_types' */
    cpy_r_r3 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_arg_types;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyList_GetSlice(cpy_r_r3, cpy_r_start, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r3);
    CPyTagged_DECREF(cpy_r_start);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "pyannotate_signature", 727, CPyStatic_suggestions___globals);
        goto CPyL12;
    }
    if (likely(PyList_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "pyannotate_signature", 727, CPyStatic_suggestions___globals, "list", cpy_r_r4);
        goto CPyL12;
    }
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = PyList_New(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "pyannotate_signature", 727, CPyStatic_suggestions___globals);
        goto CPyL13;
    }
    cpy_r_r9 = 0;
CPyL4: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL14;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r9);
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_types___Type)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "pyannotate_signature", 727, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r14);
        goto CPyL15;
    }
    cpy_r_t = cpy_r_r15;
    cpy_r_r16 = CPyDef_suggestions___SuggestionEngine___format_type(cpy_r_self, cpy_r_cur_module, cpy_r_t);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "pyannotate_signature", 727, CPyStatic_suggestions___globals);
        goto CPyL15;
    }
    cpy_r_r17 = CPyList_SetItemUnsafe(cpy_r_r8, cpy_r_r9, cpy_r_r16);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/suggestions.py", "pyannotate_signature", 727, CPyStatic_suggestions___globals);
        goto CPyL15;
    }
    cpy_r_r18 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r18;
    goto CPyL4;
CPyL9: ;
    cpy_r_r19 = CPyStatics[4635]; /* 'return_type' */
    cpy_r_r20 = ((mypy___types___CallableTypeObject *)cpy_r_typ)->_ret_type;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyDef_suggestions___SuggestionEngine___format_type(cpy_r_self, cpy_r_cur_module, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "pyannotate_signature", 728, CPyStatic_suggestions___globals);
        goto CPyL16;
    }
    cpy_r_r22 = CPyDict_Build(2, cpy_r_r2, cpy_r_r8, cpy_r_r19, cpy_r_r21);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "pyannotate_signature", 726, CPyStatic_suggestions___globals);
        goto CPyL12;
    }
    return cpy_r_r22;
CPyL12: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL13: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL12;
CPyL14: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL9;
CPyL15: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r8);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL12;
}

PyObject *CPyPy_suggestions___SuggestionEngine___pyannotate_signature(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"cur_module", "is_method", "typ", 0};
    static CPyArg_Parser parser = {"OOO:pyannotate_signature", kwlist, 0};
    PyObject *obj_cur_module;
    PyObject *obj_is_method;
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cur_module, &obj_is_method, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_cur_module;
    if (PyUnicode_Check(obj_cur_module))
        arg_cur_module = obj_cur_module;
    else {
        arg_cur_module = NULL;
    }
    if (arg_cur_module != NULL) goto __LL7493;
    if (obj_cur_module == Py_None)
        arg_cur_module = obj_cur_module;
    else {
        arg_cur_module = NULL;
    }
    if (arg_cur_module != NULL) goto __LL7493;
    CPy_TypeError("str or None", obj_cur_module); 
    goto fail;
__LL7493: ;
    char arg_is_method;
    if (unlikely(!PyBool_Check(obj_is_method))) {
        CPy_TypeError("bool", obj_is_method); goto fail;
    } else
        arg_is_method = obj_is_method == Py_True;
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___CallableType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___pyannotate_signature(arg_self, arg_cur_module, arg_is_method, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "pyannotate_signature", 721, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___format_signature(PyObject *cpy_r_self, PyObject *cpy_r_sig) {
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
    cpy_r_r0 = CPyStatics[2381]; /* '(' */
    cpy_r_r1 = CPyStatics[71]; /* ', ' */
    cpy_r_r2 = CPyStatics[1125]; /* 'arg_types' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_sig, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_signature", 733, CPyStatic_suggestions___globals);
        goto CPyL7;
    }
    if (likely(PyList_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "format_signature", 733, CPyStatic_suggestions___globals, "list", cpy_r_r3);
        goto CPyL7;
    }
    cpy_r_r5 = PyUnicode_Join(cpy_r_r1, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_signature", 733, CPyStatic_suggestions___globals);
        goto CPyL7;
    }
    cpy_r_r6 = CPyStatics[2720]; /* ') -> ' */
    cpy_r_r7 = CPyStatics[4635]; /* 'return_type' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_sig, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_signature", 733, CPyStatic_suggestions___globals);
        goto CPyL8;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "format_signature", 733, CPyStatic_suggestions___globals, "str", cpy_r_r8);
        goto CPyL8;
    }
    cpy_r_r10 = CPyStr_Build(4, cpy_r_r0, cpy_r_r5, cpy_r_r6, cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_signature", 733, CPyStatic_suggestions___globals);
        goto CPyL7;
    }
    return cpy_r_r10;
CPyL7: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL8: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL7;
}

PyObject *CPyPy_suggestions___SuggestionEngine___format_signature(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"sig", 0};
    static CPyArg_Parser parser = {"O:format_signature", kwlist, 0};
    PyObject *obj_sig;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_sig)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_sig;
    if (likely(PyDict_Check(obj_sig)))
        arg_sig = obj_sig;
    else {
        CPy_TypeError("dict", obj_sig); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___format_signature(arg_self, arg_sig);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "format_signature", 731, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___SuggestionEngine___format_type(PyObject *cpy_r_self, PyObject *cpy_r_cur_module, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
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
    cpy_r_r0 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_use_fixme;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL12;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "format_type", 736, CPyStatic_suggestions___globals, "str", cpy_r_r0);
        goto CPyL11;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL7;
    cpy_r_r5 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_type", 736, CPyStatic_suggestions___globals);
        goto CPyL11;
    }
    cpy_r_r6 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_r5)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    CPy_DECREF(cpy_r_r5);
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL7;
    cpy_r_r10 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_use_fixme;
    CPy_INCREF(cpy_r_r10);
    if (likely(cpy_r_r10 != Py_None))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "format_type", 737, CPyStatic_suggestions___globals, "str", cpy_r_r10);
        goto CPyL11;
    }
    return cpy_r_r11;
CPyL7: ;
    cpy_r_r12 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_graph;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = ((mypy___suggestions___SuggestionEngineObject *)cpy_r_self)->_manager;
    cpy_r_r14 = ((mypy___build___BuildManagerObject *)cpy_r_r13)->_options;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyDef_suggestions___TypeFormatter(cpy_r_cur_module, cpy_r_r12, cpy_r_r14);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_type", 738, CPyStatic_suggestions___globals);
        goto CPyL11;
    }
    cpy_r_r16 = CPY_GET_METHOD(cpy_r_typ, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_typ, cpy_r_r15); /* accept */
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "format_type", 738, CPyStatic_suggestions___globals);
        goto CPyL11;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "format_type", 738, CPyStatic_suggestions___globals, "str", cpy_r_r16);
        goto CPyL11;
    }
    return cpy_r_r17;
CPyL11: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL12: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL7;
}

PyObject *CPyPy_suggestions___SuggestionEngine___format_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"cur_module", "typ", 0};
    static CPyArg_Parser parser = {"OO:format_type", kwlist, 0};
    PyObject *obj_cur_module;
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cur_module, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_cur_module;
    if (PyUnicode_Check(obj_cur_module))
        arg_cur_module = obj_cur_module;
    else {
        arg_cur_module = NULL;
    }
    if (arg_cur_module != NULL) goto __LL7494;
    if (obj_cur_module == Py_None)
        arg_cur_module = obj_cur_module;
    else {
        arg_cur_module = NULL;
    }
    if (arg_cur_module != NULL) goto __LL7494;
    CPy_TypeError("str or None", obj_cur_module); 
    goto fail;
__LL7494: ;
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___SuggestionEngine___format_type(arg_self, arg_cur_module, arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "format_type", 735, CPyStatic_suggestions___globals);
    return NULL;
}

CPyTagged CPyDef_suggestions___SuggestionEngine___score_type(PyObject *cpy_r_self, PyObject *cpy_r_t, char cpy_r_arg_pos) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
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
    PyObject *cpy_r_x_2;
    char cpy_r_r40;
    char cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyPtr cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    CPyTagged cpy_r_r54;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "score_type", 745, CPyStatic_suggestions___globals);
        goto CPyL41;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "score_type", 745, CPyStatic_suggestions___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL41;
    }
    cpy_r_t = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (cpy_r_r5) {
        goto CPyL42;
    } else
        goto CPyL4;
CPyL3: ;
    return 40;
CPyL4: ;
    if (!cpy_r_arg_pos) goto CPyL7;
    cpy_r_r6 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (cpy_r_r9) {
        goto CPyL43;
    } else
        goto CPyL7;
CPyL6: ;
    return 40;
CPyL7: ;
    cpy_r_r10 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r11 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r12 = *(PyObject * *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 == cpy_r_r10;
    if (!cpy_r_r13) goto CPyL32;
    cpy_r_r14 = 0;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r15 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "score_type", 751, CPyStatic_suggestions___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL44;
    }
    cpy_r_r16 = ((mypy___types___UnionTypeObject *)cpy_r_r15)->_items;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = 0;
CPyL10: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL45;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r17);
    if (likely(PyObject_TypeCheck(cpy_r_r22, CPyType_types___Type)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "score_type", 751, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r22);
        goto CPyL46;
    }
    cpy_r_x = cpy_r_r23;
    cpy_r_r24 = CPyDef_types___get_proper_type(cpy_r_x);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "score_type", 751, CPyStatic_suggestions___globals);
        goto CPyL46;
    }
    cpy_r_r25 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_r24)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    CPy_DECREF(cpy_r_r24);
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    if (cpy_r_r28) {
        goto CPyL47;
    } else
        goto CPyL15;
CPyL14: ;
    cpy_r_r14 = 1;
    goto CPyL16;
CPyL15: ;
    cpy_r_r29 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r29;
    goto CPyL10;
CPyL16: ;
    if (cpy_r_r14) {
        goto CPyL48;
    } else
        goto CPyL18;
CPyL17: ;
    return 40;
CPyL18: ;
    cpy_r_r30 = 0;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r31 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "score_type", 753, CPyStatic_suggestions___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL44;
    }
    cpy_r_r32 = ((mypy___types___UnionTypeObject *)cpy_r_r31)->_items;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = 0;
CPyL20: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_r32)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r33 < (Py_ssize_t)cpy_r_r36;
    if (!cpy_r_r37) goto CPyL49;
    cpy_r_r38 = CPyList_GetItemUnsafe(cpy_r_r32, cpy_r_r33);
    if (likely(PyObject_TypeCheck(cpy_r_r38, CPyType_types___Type)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "score_type", 753, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r38);
        goto CPyL50;
    }
    cpy_r_x_2 = cpy_r_r39;
    cpy_r_r40 = 2;
    cpy_r_r41 = CPyDef_checkexpr___has_any_type(cpy_r_x_2, cpy_r_r40);
    CPy_DECREF(cpy_r_x_2);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "score_type", 753, CPyStatic_suggestions___globals);
        goto CPyL50;
    }
    if (cpy_r_r41) {
        goto CPyL51;
    } else
        goto CPyL25;
CPyL24: ;
    cpy_r_r30 = 1;
    goto CPyL26;
CPyL25: ;
    cpy_r_r42 = cpy_r_r33 + 2;
    cpy_r_r33 = cpy_r_r42;
    goto CPyL20;
CPyL26: ;
    if (cpy_r_r30) {
        goto CPyL52;
    } else
        goto CPyL28;
CPyL27: ;
    return 30;
CPyL28: ;
    CPy_INCREF(cpy_r_t);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r43 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "score_type", 755, CPyStatic_suggestions___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL44;
    }
    cpy_r_r44 = CPyDef_types_utils___is_optional(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "score_type", 755, CPyStatic_suggestions___globals);
        goto CPyL44;
    }
    if (cpy_r_r44) {
        goto CPyL32;
    } else
        goto CPyL53;
CPyL31: ;
    return 20;
CPyL32: ;
    cpy_r_r45 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r46 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r47 = *(PyObject * *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 == cpy_r_r45;
    if (!cpy_r_r48) goto CPyL54;
    CPy_INCREF(cpy_r_t);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___CallableType))
        cpy_r_r49 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "score_type", 757, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_t);
        goto CPyL44;
    }
    cpy_r_r50 = 2;
    cpy_r_r51 = CPyDef_checkexpr___has_any_type(cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "score_type", 757, CPyStatic_suggestions___globals);
        goto CPyL44;
    }
    if (cpy_r_r51) goto CPyL55;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___CallableType))
        cpy_r_r52 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "score_type", 757, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_t);
        goto CPyL41;
    }
    cpy_r_r53 = CPyDef_suggestions___is_tricky_callable(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "score_type", 757, CPyStatic_suggestions___globals);
        goto CPyL41;
    }
    if (!cpy_r_r53) goto CPyL40;
CPyL39: ;
    return 20;
CPyL40: ;
    return 0;
CPyL41: ;
    cpy_r_r54 = CPY_INT_TAG;
    return cpy_r_r54;
CPyL42: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL3;
CPyL43: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL6;
CPyL44: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL41;
CPyL45: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL16;
CPyL46: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r16);
    goto CPyL41;
CPyL47: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL14;
CPyL48: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL17;
CPyL49: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL26;
CPyL50: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r32);
    goto CPyL41;
CPyL51: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL24;
CPyL52: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL27;
CPyL53: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL31;
CPyL54: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL40;
CPyL55: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL39;
}

PyObject *CPyPy_suggestions___SuggestionEngine___score_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", "arg_pos", 0};
    static CPyArg_Parser parser = {"OO:score_type", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_arg_pos;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_t, &obj_arg_pos)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___Type)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_t); 
        goto fail;
    }
    char arg_arg_pos;
    if (unlikely(!PyBool_Check(obj_arg_pos))) {
        CPy_TypeError("bool", obj_arg_pos); goto fail;
    } else
        arg_arg_pos = obj_arg_pos == Py_True;
    CPyTagged retval = CPyDef_suggestions___SuggestionEngine___score_type(arg_self, arg_t, arg_arg_pos);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "score_type", 740, CPyStatic_suggestions___globals);
    return NULL;
}

CPyTagged CPyDef_suggestions___SuggestionEngine___score_callable(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_x;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyTagged cpy_r_r15;
    cpy_r_r0 = 0;
    cpy_r_r1 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL1: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL9;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_types___Type)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "score_callable", 762, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r7);
        goto CPyL10;
    }
    cpy_r_x = cpy_r_r8;
    cpy_r_r9 = CPyDef_suggestions___SuggestionEngine___score_type(cpy_r_self, cpy_r_x, 1);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/suggestions.py", "score_callable", 762, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
    cpy_r_r10 = CPyTagged_Add(cpy_r_r0, cpy_r_r9);
    CPyTagged_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r9);
    cpy_r_r0 = cpy_r_r10;
    cpy_r_r11 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r11;
    goto CPyL1;
CPyL6: ;
    cpy_r_r12 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_suggestions___SuggestionEngine___score_type(cpy_r_self, cpy_r_r12, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/suggestions.py", "score_callable", 762, CPyStatic_suggestions___globals);
        goto CPyL11;
    }
    cpy_r_r14 = CPyTagged_Add(cpy_r_r0, cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r13);
    return cpy_r_r14;
CPyL8: ;
    cpy_r_r15 = CPY_INT_TAG;
    return cpy_r_r15;
CPyL9: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
CPyL10: ;
    CPyTagged_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL11: ;
    CPyTagged_DecRef(cpy_r_r0);
    goto CPyL8;
}

PyObject *CPyPy_suggestions___SuggestionEngine___score_callable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:score_callable", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___SuggestionEngine))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.SuggestionEngine", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    CPyTagged retval = CPyDef_suggestions___SuggestionEngine___score_callable(arg_self, arg_t);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "score_callable", 761, CPyStatic_suggestions___globals);
    return NULL;
}

double CPyDef_suggestions___any_score_type(PyObject *cpy_r_ut, char cpy_r_arg_pos) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_x_2;
    char cpy_r_r43;
    char cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    double cpy_r_r54;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_ut);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_type", 772, CPyStatic_suggestions___globals);
        goto CPyL39;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "any_score_type", 772, CPyStatic_suggestions___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL39;
    }
    cpy_r_t = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL6;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___AnyType))
        cpy_r_r6 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "any_score_type", 773, CPyStatic_suggestions___globals, "mypy.types.AnyType", cpy_r_t);
        goto CPyL40;
    }
    cpy_r_r7 = ((mypy___types___AnyTypeObject *)cpy_r_r6)->_type_of_any;
    cpy_r_r8 = cpy_r_r7 != 18;
    if (cpy_r_r8) {
        goto CPyL41;
    } else
        goto CPyL6;
CPyL5: ;
    return 0.0;
CPyL6: ;
    cpy_r_r9 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (!cpy_r_r12) goto CPyL9;
    if (cpy_r_arg_pos) {
        goto CPyL42;
    } else
        goto CPyL9;
CPyL8: ;
    return 0.5;
CPyL9: ;
    cpy_r_r13 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL30;
    cpy_r_r17 = 0;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r18 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "any_score_type", 778, CPyStatic_suggestions___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL40;
    }
    cpy_r_r19 = ((mypy___types___UnionTypeObject *)cpy_r_r18)->_items;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = 0;
CPyL12: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r23;
    if (!cpy_r_r24) goto CPyL43;
    cpy_r_r25 = CPyList_GetItemUnsafe(cpy_r_r19, cpy_r_r20);
    if (likely(PyObject_TypeCheck(cpy_r_r25, CPyType_types___Type)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "any_score_type", 778, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r25);
        goto CPyL44;
    }
    cpy_r_x = cpy_r_r26;
    cpy_r_r27 = CPyDef_types___get_proper_type(cpy_r_x);
    CPy_DECREF(cpy_r_x);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_type", 778, CPyStatic_suggestions___globals);
        goto CPyL44;
    }
    cpy_r_r28 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r29 = (CPyPtr)&((PyObject *)cpy_r_r27)->ob_type;
    cpy_r_r30 = *(PyObject * *)cpy_r_r29;
    CPy_DECREF(cpy_r_r27);
    cpy_r_r31 = cpy_r_r30 == cpy_r_r28;
    if (cpy_r_r31) {
        goto CPyL45;
    } else
        goto CPyL17;
CPyL16: ;
    cpy_r_r17 = 1;
    goto CPyL18;
CPyL17: ;
    cpy_r_r32 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r32;
    goto CPyL12;
CPyL18: ;
    if (cpy_r_r17) {
        goto CPyL46;
    } else
        goto CPyL20;
CPyL19: ;
    return 0.5;
CPyL20: ;
    cpy_r_r33 = 0;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r34 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "any_score_type", 780, CPyStatic_suggestions___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL40;
    }
    cpy_r_r35 = ((mypy___types___UnionTypeObject *)cpy_r_r34)->_items;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = 0;
CPyL22: ;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r35)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = (Py_ssize_t)cpy_r_r36 < (Py_ssize_t)cpy_r_r39;
    if (!cpy_r_r40) goto CPyL47;
    cpy_r_r41 = CPyList_GetItemUnsafe(cpy_r_r35, cpy_r_r36);
    if (likely(PyObject_TypeCheck(cpy_r_r41, CPyType_types___Type)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "any_score_type", 780, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r41);
        goto CPyL48;
    }
    cpy_r_x_2 = cpy_r_r42;
    cpy_r_r43 = 2;
    cpy_r_r44 = CPyDef_checkexpr___has_any_type(cpy_r_x_2, cpy_r_r43);
    CPy_DECREF(cpy_r_x_2);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_type", 780, CPyStatic_suggestions___globals);
        goto CPyL48;
    }
    if (cpy_r_r44) {
        goto CPyL49;
    } else
        goto CPyL27;
CPyL26: ;
    cpy_r_r33 = 1;
    goto CPyL28;
CPyL27: ;
    cpy_r_r45 = cpy_r_r36 + 2;
    cpy_r_r36 = cpy_r_r45;
    goto CPyL22;
CPyL28: ;
    if (cpy_r_r33) {
        goto CPyL50;
    } else
        goto CPyL30;
CPyL29: ;
    return 0.25;
CPyL30: ;
    cpy_r_r46 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r47 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r48 = *(PyObject * *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 == cpy_r_r46;
    if (!cpy_r_r49) goto CPyL35;
    CPy_INCREF(cpy_r_t);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___CallableType))
        cpy_r_r50 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "any_score_type", 782, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_t);
        goto CPyL40;
    }
    cpy_r_r51 = CPyDef_suggestions___is_tricky_callable(cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_type", 782, CPyStatic_suggestions___globals);
        goto CPyL40;
    }
    if (cpy_r_r51) {
        goto CPyL51;
    } else
        goto CPyL35;
CPyL34: ;
    return 0.5;
CPyL35: ;
    cpy_r_r52 = 2;
    cpy_r_r53 = CPyDef_checkexpr___has_any_type(cpy_r_t, cpy_r_r52);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_type", 784, CPyStatic_suggestions___globals);
        goto CPyL39;
    }
    if (!cpy_r_r53) goto CPyL38;
    return 0.5;
CPyL38: ;
    return 1.0;
CPyL39: ;
    cpy_r_r54 = -113.0;
    return cpy_r_r54;
CPyL40: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL39;
CPyL41: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL5;
CPyL42: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL8;
CPyL43: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL18;
CPyL44: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r19);
    goto CPyL39;
CPyL45: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL16;
CPyL46: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL19;
CPyL47: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL28;
CPyL48: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r35);
    goto CPyL39;
CPyL49: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL26;
CPyL50: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL29;
CPyL51: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL34;
}

PyObject *CPyPy_suggestions___any_score_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ut", "arg_pos", 0};
    static CPyArg_Parser parser = {"OO:any_score_type", kwlist, 0};
    PyObject *obj_ut;
    PyObject *obj_arg_pos;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ut, &obj_arg_pos)) {
        return NULL;
    }
    PyObject *arg_ut;
    if (likely(PyObject_TypeCheck(obj_ut, CPyType_types___Type)))
        arg_ut = obj_ut;
    else {
        CPy_TypeError("mypy.types.Type", obj_ut); 
        goto fail;
    }
    char arg_arg_pos;
    if (unlikely(!PyBool_Check(obj_arg_pos))) {
        CPy_TypeError("bool", obj_arg_pos); goto fail;
    } else
        arg_arg_pos = obj_arg_pos == Py_True;
    double retval = CPyDef_suggestions___any_score_type(arg_ut, arg_arg_pos);
    if (retval == -113.0 && PyErr_Occurred()) {
        return NULL;
    }
    PyObject *retbox = PyFloat_FromDouble(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "any_score_type", 767, CPyStatic_suggestions___globals);
    return NULL;
}

double CPyDef_suggestions___any_score_callable(PyObject *cpy_r_t, char cpy_r_is_method, char cpy_r_ignore_return) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    CPyTagged cpy_r_r2;
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
    PyObject *cpy_r_x;
    double cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_scores;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    double cpy_r_r31;
    PyObject *cpy_r_r32;
    double cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    double cpy_r_ret;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyPtr cpy_r_r39;
    CPyPtr cpy_r_r40;
    CPyPtr cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject **cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    int64_t cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    double cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    double cpy_r_r59;
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = cpy_r_is_method << 1;
    cpy_r_r2 = cpy_r_r1;
    cpy_r_r3 = CPyList_GetSlice(cpy_r_r0, cpy_r_r2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_callable", 792, CPyStatic_suggestions___globals);
        goto CPyL29;
    }
    if (likely(PyList_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "any_score_callable", 792, CPyStatic_suggestions___globals, "list", cpy_r_r3);
        goto CPyL29;
    }
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = PyList_New(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_callable", 792, CPyStatic_suggestions___globals);
        goto CPyL30;
    }
    cpy_r_r8 = 0;
CPyL4: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r12) goto CPyL31;
    cpy_r_r13 = CPyList_GetItemUnsafe(cpy_r_r4, cpy_r_r8);
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_types___Type)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "any_score_callable", 792, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r13);
        goto CPyL32;
    }
    cpy_r_x = cpy_r_r14;
    cpy_r_r15 = CPyDef_suggestions___any_score_type(cpy_r_x, 1);
    CPy_DECREF(cpy_r_x);
    cpy_r_r16 = cpy_r_r15 == -113.0;
    if (unlikely(cpy_r_r16)) goto CPyL8;
CPyL7: ;
    cpy_r_r17 = PyFloat_FromDouble(cpy_r_r15);
    cpy_r_r18 = CPyList_SetItemUnsafe(cpy_r_r7, cpy_r_r8, cpy_r_r17);
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_callable", 792, CPyStatic_suggestions___globals);
        goto CPyL32;
    } else
        goto CPyL9;
CPyL8: ;
    cpy_r_r19 = PyErr_Occurred();
    if (unlikely(cpy_r_r19 != NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_callable", 792, CPyStatic_suggestions___globals);
        goto CPyL32;
    } else
        goto CPyL7;
CPyL9: ;
    cpy_r_r20 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r20;
    goto CPyL4;
CPyL10: ;
    cpy_r_scores = cpy_r_r7;
    cpy_r_r21 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyDef_types___get_proper_type(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_callable", 796, CPyStatic_suggestions___globals);
        goto CPyL33;
    }
    cpy_r_r23 = (PyObject *)CPyType_types___NoneType;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r22)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    CPy_DECREF(cpy_r_r22);
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (!cpy_r_r26) goto CPyL13;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_scores)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = cpy_r_r29 != 0;
    if (cpy_r_r30) goto CPyL22;
CPyL13: ;
    if (!cpy_r_ignore_return) goto CPyL15;
    cpy_r_r31 = 1.0;
    goto CPyL18;
CPyL15: ;
    cpy_r_r32 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyDef_suggestions___any_score_type(cpy_r_r32, 0);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 == -113.0;
    if (unlikely(cpy_r_r34)) goto CPyL17;
CPyL16: ;
    cpy_r_r31 = cpy_r_r33;
    goto CPyL18;
CPyL17: ;
    cpy_r_r35 = PyErr_Occurred();
    if (unlikely(cpy_r_r35 != NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_callable", 797, CPyStatic_suggestions___globals);
        goto CPyL33;
    } else
        goto CPyL16;
CPyL18: ;
    cpy_r_ret = cpy_r_r31;
    cpy_r_r36 = PyList_New(2);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_callable", 798, CPyStatic_suggestions___globals);
        goto CPyL33;
    }
    cpy_r_r37 = PyFloat_FromDouble(cpy_r_ret);
    cpy_r_r38 = PyFloat_FromDouble(cpy_r_ret);
    cpy_r_r39 = (CPyPtr)&((PyListObject *)cpy_r_r36)->ob_item;
    cpy_r_r40 = *(CPyPtr *)cpy_r_r39;
    *(PyObject * *)cpy_r_r40 = cpy_r_r37;
    cpy_r_r41 = cpy_r_r40 + 8;
    *(PyObject * *)cpy_r_r41 = cpy_r_r38;
    cpy_r_r42 = PyNumber_InPlaceAdd(cpy_r_scores, cpy_r_r36);
    CPy_DECREF(cpy_r_scores);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_callable", 798, CPyStatic_suggestions___globals);
        goto CPyL29;
    }
    if (likely(PyList_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "any_score_callable", 798, CPyStatic_suggestions___globals, "list", cpy_r_r42);
        goto CPyL29;
    }
    cpy_r_scores = cpy_r_r43;
CPyL22: ;
    cpy_r_r44 = CPyModule_builtins;
    cpy_r_r45 = CPyStatics[446]; /* 'sum' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_callable", 800, CPyStatic_suggestions___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r47[1] = {cpy_r_scores};
    cpy_r_r48 = (PyObject **)&cpy_r_r47;
    cpy_r_r49 = _PyObject_Vectorcall(cpy_r_r46, cpy_r_r48, 1, 0);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_callable", 800, CPyStatic_suggestions___globals);
        goto CPyL33;
    }
    if (CPyFloat_Check(cpy_r_r49))
        cpy_r_r50 = cpy_r_r49;
    else {
        cpy_r_r50 = NULL;
    }
    if (cpy_r_r50 != NULL) goto __LL7495;
    if (PyLong_Check(cpy_r_r49))
        cpy_r_r50 = cpy_r_r49;
    else {
        cpy_r_r50 = NULL;
    }
    if (cpy_r_r50 != NULL) goto __LL7495;
    CPy_TypeErrorTraceback("mypy/suggestions.py", "any_score_callable", 800, CPyStatic_suggestions___globals, "union[float, int]", cpy_r_r49);
    goto CPyL33;
__LL7495: ;
    cpy_r_r51 = (CPyPtr)&((PyVarObject *)cpy_r_scores)->ob_size;
    cpy_r_r52 = *(int64_t *)cpy_r_r51;
    CPy_DECREF(cpy_r_scores);
    cpy_r_r53 = cpy_r_r52 << 1;
    cpy_r_r54 = CPyTagged_StealAsObject(cpy_r_r53);
    cpy_r_r55 = PyNumber_TrueDivide(cpy_r_r50, cpy_r_r54);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_callable", 800, CPyStatic_suggestions___globals);
        goto CPyL29;
    }
    cpy_r_r56 = PyFloat_AsDouble(cpy_r_r55);
    if (cpy_r_r56 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r55); cpy_r_r56 = -113.0;
    }
    CPy_DECREF(cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 == -113.0;
    if (unlikely(cpy_r_r57)) goto CPyL28;
CPyL27: ;
    return cpy_r_r56;
CPyL28: ;
    cpy_r_r58 = PyErr_Occurred();
    if (unlikely(cpy_r_r58 != NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "any_score_callable", 800, CPyStatic_suggestions___globals);
    } else
        goto CPyL27;
CPyL29: ;
    cpy_r_r59 = -113.0;
    return cpy_r_r59;
CPyL30: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL29;
CPyL31: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL10;
CPyL32: ;
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r7);
    goto CPyL29;
CPyL33: ;
    CPy_DecRef(cpy_r_scores);
    goto CPyL29;
}

PyObject *CPyPy_suggestions___any_score_callable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", "is_method", "ignore_return", 0};
    static CPyArg_Parser parser = {"OOO:any_score_callable", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_is_method;
    PyObject *obj_ignore_return;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_t, &obj_is_method, &obj_ignore_return)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    char arg_is_method;
    if (unlikely(!PyBool_Check(obj_is_method))) {
        CPy_TypeError("bool", obj_is_method); goto fail;
    } else
        arg_is_method = obj_is_method == Py_True;
    char arg_ignore_return;
    if (unlikely(!PyBool_Check(obj_ignore_return))) {
        CPy_TypeError("bool", obj_ignore_return); goto fail;
    } else
        arg_ignore_return = obj_ignore_return == Py_True;
    double retval = CPyDef_suggestions___any_score_callable(arg_t, arg_is_method, arg_ignore_return);
    if (retval == -113.0 && PyErr_Occurred()) {
        return NULL;
    }
    PyObject *retbox = PyFloat_FromDouble(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "any_score_callable", 790, CPyStatic_suggestions___globals);
    return NULL;
}

char CPyDef_suggestions___is_tricky_callable(PyObject *cpy_r_t) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_k;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_is_ellipsis_args;
    if (!cpy_r_r0) goto CPyL2;
CPyL1: ;
    cpy_r_r1 = cpy_r_r0;
    goto CPyL16;
CPyL2: ;
    cpy_r_r2 = 0;
    cpy_r_r3 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_kinds;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = 0;
CPyL3: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL18;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_nodes___ArgKind))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "is_tricky_callable", 805, CPyStatic_suggestions___globals, "mypy.nodes.ArgKind", cpy_r_r9);
        goto CPyL19;
    }
    cpy_r_k = cpy_r_r10;
    cpy_r_r11 = CPyStatics[53]; /* 'is_star' */
    PyObject *cpy_r_r12[1] = {cpy_r_k};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r13, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "is_tricky_callable", 805, CPyStatic_suggestions___globals);
        goto CPyL20;
    }
    if (unlikely(!PyBool_Check(cpy_r_r14))) {
        CPy_TypeError("bool", cpy_r_r14); cpy_r_r15 = 2;
    } else
        cpy_r_r15 = cpy_r_r14 == Py_True;
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "is_tricky_callable", 805, CPyStatic_suggestions___globals);
        goto CPyL20;
    }
    if (cpy_r_r15) {
        goto CPyL21;
    } else
        goto CPyL9;
CPyL8: ;
    cpy_r_r16 = cpy_r_r15;
    goto CPyL12;
CPyL9: ;
    cpy_r_r17 = CPyStatics[54]; /* 'is_named' */
    PyObject *cpy_r_r18[1] = {cpy_r_k};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = PyObject_VectorcallMethod(cpy_r_r17, cpy_r_r19, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "is_tricky_callable", 805, CPyStatic_suggestions___globals);
        goto CPyL20;
    }
    CPy_DECREF(cpy_r_k);
    if (unlikely(!PyBool_Check(cpy_r_r20))) {
        CPy_TypeError("bool", cpy_r_r20); cpy_r_r21 = 2;
    } else
        cpy_r_r21 = cpy_r_r20 == Py_True;
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "is_tricky_callable", 805, CPyStatic_suggestions___globals);
        goto CPyL19;
    }
    cpy_r_r16 = cpy_r_r21;
CPyL12: ;
    if (cpy_r_r16) {
        goto CPyL22;
    } else
        goto CPyL14;
CPyL13: ;
    cpy_r_r2 = 1;
    goto CPyL15;
CPyL14: ;
    cpy_r_r22 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r22;
    goto CPyL3;
CPyL15: ;
    cpy_r_r1 = cpy_r_r2;
CPyL16: ;
    return cpy_r_r1;
CPyL17: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL18: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_k);
    goto CPyL17;
CPyL21: ;
    CPy_DECREF(cpy_r_k);
    goto CPyL8;
CPyL22: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL13;
}

PyObject *CPyPy_suggestions___is_tricky_callable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:is_tricky_callable", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    char retval = CPyDef_suggestions___is_tricky_callable(arg_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "is_tricky_callable", 803, CPyStatic_suggestions___globals);
    return NULL;
}

char CPyDef_suggestions___TypeFormatter_____init__(PyObject *cpy_r_self, PyObject *cpy_r_module, PyObject *cpy_r_graph, PyObject *cpy_r_options) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = NULL;
    cpy_r_r1 = CPyDef_types___TypeStrVisitor_____init__(cpy_r_self, cpy_r_r0, cpy_r_options);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 813, CPyStatic_suggestions___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_module);
    if (((mypy___suggestions___TypeFormatterObject *)cpy_r_self)->_module != NULL) {
        CPy_DECREF(((mypy___suggestions___TypeFormatterObject *)cpy_r_self)->_module);
    }
    ((mypy___suggestions___TypeFormatterObject *)cpy_r_self)->_module = cpy_r_module;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 814, CPyStatic_suggestions___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_graph);
    if (((mypy___suggestions___TypeFormatterObject *)cpy_r_self)->_graph != NULL) {
        CPy_DECREF(((mypy___suggestions___TypeFormatterObject *)cpy_r_self)->_graph);
    }
    ((mypy___suggestions___TypeFormatterObject *)cpy_r_self)->_graph = cpy_r_graph;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/suggestions.py", "__init__", 815, CPyStatic_suggestions___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_suggestions___TypeFormatter_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"module", "graph", "options", 0};
    PyObject *obj_module;
    PyObject *obj_graph;
    PyObject *obj_options;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO", "__init__", kwlist, &obj_module, &obj_graph, &obj_options)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___TypeFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.TypeFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_module;
    if (PyUnicode_Check(obj_module))
        arg_module = obj_module;
    else {
        arg_module = NULL;
    }
    if (arg_module != NULL) goto __LL7496;
    if (obj_module == Py_None)
        arg_module = obj_module;
    else {
        arg_module = NULL;
    }
    if (arg_module != NULL) goto __LL7496;
    CPy_TypeError("str or None", obj_module); 
    goto fail;
__LL7496: ;
    PyObject *arg_graph;
    if (likely(PyDict_Check(obj_graph)))
        arg_graph = obj_graph;
    else {
        CPy_TypeError("dict", obj_graph); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_suggestions___TypeFormatter_____init__(arg_self, arg_module, arg_graph, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "__init__", 812, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___TypeFormatter___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypy___types___AnyTypeObject *)cpy_r_t)->_missing_import_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL7;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_any", 818, CPyStatic_suggestions___globals, "str", cpy_r_r0);
        goto CPyL6;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = ((mypy___types___AnyTypeObject *)cpy_r_t)->_missing_import_name;
    CPy_INCREF(cpy_r_r5);
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_any", 819, CPyStatic_suggestions___globals, "str", cpy_r_r5);
        goto CPyL6;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = CPyStatics[507]; /* 'Any' */
    CPy_INCREF(cpy_r_r7);
    return cpy_r_r7;
CPyL6: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL7: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
}

PyObject *CPyPy_suggestions___TypeFormatter___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___TypeFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.TypeFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___TypeFormatter___visit_any(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_any", 817, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___TypeFormatter___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_suggestions___TypeFormatter___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_suggestions___TypeFormatter___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___TypeFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.TypeFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___TypeFormatter___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___TypeFormatter___visit_instance(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_mod_obj;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    tuple_T2OO cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    tuple_T2OO cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_mod;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_obj;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_parts;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_tree;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    tuple_T2OO cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    tuple_T2OO cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
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
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    tuple_T2OO cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    tuple_T2OO cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    int32_t cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    int32_t cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    char cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    int32_t cpy_r_r137;
    char cpy_r_r138;
    char cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    int32_t cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    int32_t cpy_r_r150;
    char cpy_r_r151;
    char cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_delim;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_r0, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 824, CPyStatic_suggestions___globals);
        goto CPyL106;
    }
CPyL1: ;
    cpy_r_r2 = CPyStr_IsTrue(cpy_r_r1);
    if (!cpy_r_r2) goto CPyL107;
    cpy_r_r3 = cpy_r_r1;
    goto CPyL8;
CPyL3: ;
    cpy_r_r4 = ((mypy___types___InstanceObject *)cpy_r_t)->_type;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPY_GET_ATTR(cpy_r_r4, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 824, CPyStatic_suggestions___globals);
        goto CPyL106;
    }
CPyL4: ;
    cpy_r_r6 = CPyStr_IsTrue(cpy_r_r5);
    if (!cpy_r_r6) goto CPyL108;
    cpy_r_r7 = cpy_r_r5;
    goto CPyL7;
CPyL6: ;
    cpy_r_r8 = Py_None;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r7 = cpy_r_r8;
CPyL7: ;
    cpy_r_r3 = cpy_r_r7;
CPyL8: ;
    cpy_r_s = cpy_r_r3;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_s == cpy_r_r9;
    if (cpy_r_r10) {
        goto CPyL109;
    } else
        goto CPyL10;
CPyL9: ;
    cpy_r_r11 = CPyStatics[6089]; /* '<???>' */
    CPy_INCREF(cpy_r_r11);
    return cpy_r_r11;
CPyL10: ;
    CPy_INCREF(cpy_r_s);
    if (likely(cpy_r_s != Py_None))
        cpy_r_r12 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_instance", 827, CPyStatic_suggestions___globals, "str", cpy_r_s);
        goto CPyL110;
    }
    cpy_r_r13 = CPyStatic_nodes___reverse_builtin_aliases;
    if (unlikely(cpy_r_r13 == NULL)) {
        goto CPyL111;
    } else
        goto CPyL14;
CPyL12: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"reverse_builtin_aliases\" was not set");
    cpy_r_r14 = 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 827, CPyStatic_suggestions___globals);
        goto CPyL106;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r15 = PyDict_Contains(cpy_r_r13, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 827, CPyStatic_suggestions___globals);
        goto CPyL110;
    }
    cpy_r_r17 = cpy_r_r15;
    if (!cpy_r_r17) goto CPyL23;
    cpy_r_r18 = CPyStatic_nodes___reverse_builtin_aliases;
    if (unlikely(cpy_r_r18 == NULL)) {
        goto CPyL112;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"reverse_builtin_aliases\" was not set");
    cpy_r_r19 = 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 828, CPyStatic_suggestions___globals);
        goto CPyL106;
    }
    CPy_Unreachable();
CPyL19: ;
    if (likely(cpy_r_s != Py_None))
        cpy_r_r20 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_instance", 828, CPyStatic_suggestions___globals, "str", cpy_r_s);
        goto CPyL106;
    }
    cpy_r_r21 = CPyDict_GetItem(cpy_r_r18, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 828, CPyStatic_suggestions___globals);
        goto CPyL106;
    }
    if (likely(PyUnicode_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_instance", 828, CPyStatic_suggestions___globals, "str", cpy_r_r21);
        goto CPyL106;
    }
    cpy_r_s = cpy_r_r22;
CPyL23: ;
    cpy_r_r23 = ((mypy___suggestions___TypeFormatterObject *)cpy_r_self)->_graph;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "visit_instance", "TypeFormatter", "graph", 830, CPyStatic_suggestions___globals);
        goto CPyL110;
    }
    CPy_INCREF(cpy_r_r23);
CPyL24: ;
    if (likely(cpy_r_s != Py_None))
        cpy_r_r24 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_instance", 830, CPyStatic_suggestions___globals, "str", cpy_r_s);
        goto CPyL113;
    }
    cpy_r_r25 = CPyDef_mypy___util___split_target(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 830, CPyStatic_suggestions___globals);
        goto CPyL106;
    }
    cpy_r_mod_obj = cpy_r_r25;
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_mod_obj != cpy_r_r26;
    if (!cpy_r_r27) goto CPyL114;
    PyObject *__tmp7497;
    if (unlikely(!(PyTuple_Check(cpy_r_mod_obj) && PyTuple_GET_SIZE(cpy_r_mod_obj) == 2))) {
        __tmp7497 = NULL;
        goto __LL7498;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_mod_obj, 0))))
        __tmp7497 = PyTuple_GET_ITEM(cpy_r_mod_obj, 0);
    else {
        __tmp7497 = NULL;
    }
    if (__tmp7497 == NULL) goto __LL7498;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_mod_obj, 1))))
        __tmp7497 = PyTuple_GET_ITEM(cpy_r_mod_obj, 1);
    else {
        __tmp7497 = NULL;
    }
    if (__tmp7497 == NULL) goto __LL7498;
    __tmp7497 = cpy_r_mod_obj;
__LL7498: ;
    if (unlikely(__tmp7497 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_mod_obj); cpy_r_r28 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp7499 = PyTuple_GET_ITEM(cpy_r_mod_obj, 0);
        CPy_INCREF(__tmp7499);
        PyObject *__tmp7500;
        if (likely(PyUnicode_Check(__tmp7499)))
            __tmp7500 = __tmp7499;
        else {
            CPy_TypeError("str", __tmp7499); 
            __tmp7500 = NULL;
        }
        cpy_r_r28.f0 = __tmp7500;
        PyObject *__tmp7501 = PyTuple_GET_ITEM(cpy_r_mod_obj, 1);
        CPy_INCREF(__tmp7501);
        PyObject *__tmp7502;
        if (likely(PyUnicode_Check(__tmp7501)))
            __tmp7502 = __tmp7501;
        else {
            CPy_TypeError("str", __tmp7501); 
            __tmp7502 = NULL;
        }
        cpy_r_r28.f1 = __tmp7502;
    }
    if (unlikely(cpy_r_r28.f0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 830, CPyStatic_suggestions___globals);
        goto CPyL115;
    }
    cpy_r_r29 = PyTuple_New(2);
    if (unlikely(cpy_r_r29 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7503 = cpy_r_r28.f0;
    PyTuple_SET_ITEM(cpy_r_r29, 0, __tmp7503);
    PyObject *__tmp7504 = cpy_r_r28.f1;
    PyTuple_SET_ITEM(cpy_r_r29, 1, __tmp7504);
    cpy_r_r30 = PyObject_IsTrue(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 830, CPyStatic_suggestions___globals);
        goto CPyL115;
    }
    cpy_r_r32 = cpy_r_r30;
    if (cpy_r_r32) {
        goto CPyL32;
    } else
        goto CPyL114;
CPyL30: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 831, CPyStatic_suggestions___globals);
        goto CPyL106;
    }
    CPy_Unreachable();
CPyL32: ;
    PyObject *__tmp7505;
    if (unlikely(!(PyTuple_Check(cpy_r_mod_obj) && PyTuple_GET_SIZE(cpy_r_mod_obj) == 2))) {
        __tmp7505 = NULL;
        goto __LL7506;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_mod_obj, 0))))
        __tmp7505 = PyTuple_GET_ITEM(cpy_r_mod_obj, 0);
    else {
        __tmp7505 = NULL;
    }
    if (__tmp7505 == NULL) goto __LL7506;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_mod_obj, 1))))
        __tmp7505 = PyTuple_GET_ITEM(cpy_r_mod_obj, 1);
    else {
        __tmp7505 = NULL;
    }
    if (__tmp7505 == NULL) goto __LL7506;
    __tmp7505 = cpy_r_mod_obj;
__LL7506: ;
    if (unlikely(__tmp7505 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_mod_obj); cpy_r_r34 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp7507 = PyTuple_GET_ITEM(cpy_r_mod_obj, 0);
        CPy_INCREF(__tmp7507);
        PyObject *__tmp7508;
        if (likely(PyUnicode_Check(__tmp7507)))
            __tmp7508 = __tmp7507;
        else {
            CPy_TypeError("str", __tmp7507); 
            __tmp7508 = NULL;
        }
        cpy_r_r34.f0 = __tmp7508;
        PyObject *__tmp7509 = PyTuple_GET_ITEM(cpy_r_mod_obj, 1);
        CPy_INCREF(__tmp7509);
        PyObject *__tmp7510;
        if (likely(PyUnicode_Check(__tmp7509)))
            __tmp7510 = __tmp7509;
        else {
            CPy_TypeError("str", __tmp7509); 
            __tmp7510 = NULL;
        }
        cpy_r_r34.f1 = __tmp7510;
    }
    if (unlikely(cpy_r_r34.f0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 832, CPyStatic_suggestions___globals);
        goto CPyL115;
    }
    cpy_r_r35 = cpy_r_r34.f0;
    CPy_INCREF(cpy_r_r35);
    cpy_r_mod = cpy_r_r35;
    cpy_r_r36 = cpy_r_r34.f1;
    CPy_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r34.f0);
    CPy_DECREF(cpy_r_r34.f1);
    cpy_r_obj = cpy_r_r36;
    cpy_r_r37 = ((mypy___suggestions___TypeFormatterObject *)cpy_r_self)->_module;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "visit_instance", "TypeFormatter", "module", 837, CPyStatic_suggestions___globals);
        goto CPyL116;
    }
    CPy_INCREF(cpy_r_r37);
CPyL34: ;
    cpy_r_r38 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r39 = cpy_r_r37 != cpy_r_r38;
    if (!cpy_r_r39) goto CPyL117;
    if (likely(cpy_r_r37 != Py_None))
        cpy_r_r40 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_instance", 837, CPyStatic_suggestions___globals, "str", cpy_r_r37);
        goto CPyL116;
    }
    cpy_r_r41 = CPyStr_IsTrue(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (!cpy_r_r41) goto CPyL53;
    cpy_r_r42 = CPyStatics[224]; /* '.' */
    cpy_r_r43 = PyUnicode_Split(cpy_r_obj, cpy_r_r42, -1);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 838, CPyStatic_suggestions___globals);
        goto CPyL116;
    }
    cpy_r_parts = cpy_r_r43;
    cpy_r_r44 = ((mypy___suggestions___TypeFormatterObject *)cpy_r_self)->_graph;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "visit_instance", "TypeFormatter", "graph", 839, CPyStatic_suggestions___globals);
        goto CPyL118;
    }
    CPy_INCREF(cpy_r_r44);
CPyL39: ;
    cpy_r_r45 = ((mypy___suggestions___TypeFormatterObject *)cpy_r_self)->_module;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "visit_instance", "TypeFormatter", "module", 839, CPyStatic_suggestions___globals);
        goto CPyL119;
    }
    CPy_INCREF(cpy_r_r45);
CPyL40: ;
    if (likely(cpy_r_r45 != Py_None))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_instance", 839, CPyStatic_suggestions___globals, "str", cpy_r_r45);
        goto CPyL119;
    }
    cpy_r_r47 = CPyDict_GetItem(cpy_r_r44, cpy_r_r46);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 839, CPyStatic_suggestions___globals);
        goto CPyL118;
    }
    if (likely(Py_TYPE(cpy_r_r47) == CPyType_mypy___build___State))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_instance", 839, CPyStatic_suggestions___globals, "mypy.build.State", cpy_r_r47);
        goto CPyL118;
    }
    cpy_r_r49 = ((mypy___build___StateObject *)cpy_r_r48)->_tree;
    CPy_INCREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    cpy_r_tree = cpy_r_r49;
    cpy_r_r50 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r51 = cpy_r_tree != cpy_r_r50;
    if (!cpy_r_r51) goto CPyL120;
    cpy_r_r52 = CPyList_GetItemShort(cpy_r_parts, 0);
    CPy_DECREF(cpy_r_parts);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 840, CPyStatic_suggestions___globals);
        goto CPyL121;
    }
    if (likely(PyUnicode_Check(cpy_r_r52)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_instance", 840, CPyStatic_suggestions___globals, "str", cpy_r_r52);
        goto CPyL121;
    }
    if (likely(cpy_r_tree != Py_None))
        cpy_r_r54 = cpy_r_tree;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_instance", 840, CPyStatic_suggestions___globals, "mypy.nodes.MypyFile", cpy_r_tree);
        goto CPyL122;
    }
    cpy_r_r55 = ((mypy___nodes___MypyFileObject *)cpy_r_r54)->_names;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "visit_instance", "MypyFile", "names", 840, CPyStatic_suggestions___globals);
        goto CPyL122;
    }
    CPy_INCREF(cpy_r_r55);
CPyL48: ;
    CPy_DECREF(cpy_r_tree);
    cpy_r_r56 = PyDict_Contains(cpy_r_r55, cpy_r_r53);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 840, CPyStatic_suggestions___globals);
        goto CPyL116;
    }
    cpy_r_r58 = cpy_r_r56;
    if (cpy_r_r58) {
        goto CPyL123;
    } else
        goto CPyL53;
CPyL50: ;
    cpy_r_r59 = ((mypy___suggestions___TypeFormatterObject *)cpy_r_self)->_module;
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AttributeError("mypy/suggestions.py", "visit_instance", "TypeFormatter", "module", 841, CPyStatic_suggestions___globals);
        goto CPyL124;
    }
    CPy_INCREF(cpy_r_r59);
CPyL51: ;
    if (likely(cpy_r_r59 != Py_None))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_instance", 841, CPyStatic_suggestions___globals, "str", cpy_r_r59);
        goto CPyL124;
    }
    cpy_r_mod = cpy_r_r60;
CPyL53: ;
    cpy_r_r61.f0 = cpy_r_mod;
    cpy_r_r61.f1 = cpy_r_obj;
    CPy_INCREF(cpy_r_r61.f0);
    CPy_INCREF(cpy_r_r61.f1);
    cpy_r_r62 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r63 = CPyStatics[3659]; /* 'tuple' */
    cpy_r_r64.f0 = cpy_r_r62;
    cpy_r_r64.f1 = cpy_r_r63;
    CPy_INCREF(cpy_r_r64.f0);
    CPy_INCREF(cpy_r_r64.f1);
    cpy_r_r65 = cpy_r_r61.f0;
    CPy_INCREF(cpy_r_r65);
    cpy_r_r66 = cpy_r_r61.f1;
    CPy_INCREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r61.f0);
    CPy_DECREF(cpy_r_r61.f1);
    cpy_r_r67 = cpy_r_r64.f0;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = cpy_r_r64.f1;
    CPy_INCREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r64.f0);
    CPy_DECREF(cpy_r_r64.f1);
    cpy_r_r69 = PyUnicode_Compare(cpy_r_r65, cpy_r_r67);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r70 = cpy_r_r69 == -1;
    if (!cpy_r_r70) goto CPyL56;
    cpy_r_r71 = PyErr_Occurred();
    cpy_r_r72 = cpy_r_r71 != NULL;
    if (!cpy_r_r72) goto CPyL56;
    cpy_r_r73 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 843, CPyStatic_suggestions___globals);
        goto CPyL125;
    }
CPyL56: ;
    cpy_r_r74 = cpy_r_r69 == 0;
    cpy_r_r75 = cpy_r_r74 ? Py_True : Py_False;
    cpy_r_r76 = PyObject_IsTrue(cpy_r_r75);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 843, CPyStatic_suggestions___globals);
        goto CPyL125;
    }
    cpy_r_r78 = cpy_r_r76;
    if (!cpy_r_r78) goto CPyL126;
    cpy_r_r79 = PyUnicode_Compare(cpy_r_r66, cpy_r_r68);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r80 = cpy_r_r79 == -1;
    if (!cpy_r_r80) goto CPyL61;
    cpy_r_r81 = PyErr_Occurred();
    cpy_r_r82 = cpy_r_r81 != NULL;
    if (!cpy_r_r82) goto CPyL61;
    cpy_r_r83 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 843, CPyStatic_suggestions___globals);
        goto CPyL116;
    }
CPyL61: ;
    cpy_r_r84 = cpy_r_r79 == 0;
    cpy_r_r85 = cpy_r_r84 ? Py_True : Py_False;
    cpy_r_r86 = PyObject_IsTrue(cpy_r_r85);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 843, CPyStatic_suggestions___globals);
        goto CPyL116;
    }
    cpy_r_r88 = cpy_r_r86;
    if (cpy_r_r88) goto CPyL64;
CPyL63: ;
    cpy_r_r89 = 0;
    goto CPyL65;
CPyL64: ;
    cpy_r_r89 = 1;
CPyL65: ;
    if (cpy_r_r89) {
        goto CPyL127;
    } else
        goto CPyL73;
CPyL66: ;
    cpy_r_r90 = CPyStatics[21]; /* 'typing' */
    CPy_INCREF(cpy_r_r90);
    cpy_r_r91 = cpy_r_r90;
    cpy_r_r92 = CPyStatics[3686]; /* 'Tuple[' */
    cpy_r_r93 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r93);
    cpy_r_r94 = CPySequenceTuple_GetItem(cpy_r_r93, 0);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 844, CPyStatic_suggestions___globals);
        goto CPyL128;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r94, CPyType_types___Type)))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_instance", 844, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r94);
        goto CPyL128;
    }
    cpy_r_r96 = CPY_GET_METHOD(cpy_r_r95, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r95, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 844, CPyStatic_suggestions___globals);
        goto CPyL128;
    }
    if (likely(PyUnicode_Check(cpy_r_r96)))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_instance", 844, CPyStatic_suggestions___globals, "str", cpy_r_r96);
        goto CPyL128;
    }
    cpy_r_r98 = PyUnicode_Concat(cpy_r_r92, cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 844, CPyStatic_suggestions___globals);
        goto CPyL128;
    }
    cpy_r_r99 = CPyStatics[3682]; /* ', ...]' */
    cpy_r_r100 = PyUnicode_Concat(cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 844, CPyStatic_suggestions___globals);
        goto CPyL128;
    }
    cpy_r_r101 = cpy_r_r100;
    cpy_r_mod = cpy_r_r91;
    cpy_r_obj = cpy_r_r101;
    goto CPyL79;
CPyL73: ;
    cpy_r_r102 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r102);
    cpy_r_r103 = PyObject_IsTrue(cpy_r_r102);
    CPy_DECREF(cpy_r_r102);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 845, CPyStatic_suggestions___globals);
        goto CPyL116;
    }
    cpy_r_r105 = cpy_r_r103;
    if (!cpy_r_r105) goto CPyL79;
    cpy_r_r106 = CPyStatics[207]; /* '[' */
    cpy_r_r107 = ((mypy___types___InstanceObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r107);
    cpy_r_r108 = CPyDef_types___TypeStrVisitor___list_str(cpy_r_self, cpy_r_r107);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 846, CPyStatic_suggestions___globals);
        goto CPyL116;
    }
    cpy_r_r109 = CPyStatics[208]; /* ']' */
    cpy_r_r110 = CPyStr_Build(3, cpy_r_r106, cpy_r_r108, cpy_r_r109);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 846, CPyStatic_suggestions___globals);
        goto CPyL116;
    }
    cpy_r_r111 = CPyStr_Append(cpy_r_obj, cpy_r_r110);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 846, CPyStatic_suggestions___globals);
        goto CPyL129;
    }
    cpy_r_obj = cpy_r_r111;
CPyL79: ;
    PyObject *__tmp7511;
    if (unlikely(!(PyTuple_Check(cpy_r_mod_obj) && PyTuple_GET_SIZE(cpy_r_mod_obj) == 2))) {
        __tmp7511 = NULL;
        goto __LL7512;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_mod_obj, 0))))
        __tmp7511 = PyTuple_GET_ITEM(cpy_r_mod_obj, 0);
    else {
        __tmp7511 = NULL;
    }
    if (__tmp7511 == NULL) goto __LL7512;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_mod_obj, 1))))
        __tmp7511 = PyTuple_GET_ITEM(cpy_r_mod_obj, 1);
    else {
        __tmp7511 = NULL;
    }
    if (__tmp7511 == NULL) goto __LL7512;
    __tmp7511 = cpy_r_mod_obj;
__LL7512: ;
    if (unlikely(__tmp7511 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_mod_obj); cpy_r_r112 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp7513 = PyTuple_GET_ITEM(cpy_r_mod_obj, 0);
        CPy_INCREF(__tmp7513);
        PyObject *__tmp7514;
        if (likely(PyUnicode_Check(__tmp7513)))
            __tmp7514 = __tmp7513;
        else {
            CPy_TypeError("str", __tmp7513); 
            __tmp7514 = NULL;
        }
        cpy_r_r112.f0 = __tmp7514;
        PyObject *__tmp7515 = PyTuple_GET_ITEM(cpy_r_mod_obj, 1);
        CPy_INCREF(__tmp7515);
        PyObject *__tmp7516;
        if (likely(PyUnicode_Check(__tmp7515)))
            __tmp7516 = __tmp7515;
        else {
            CPy_TypeError("str", __tmp7515); 
            __tmp7516 = NULL;
        }
        cpy_r_r112.f1 = __tmp7516;
    }
    CPy_DECREF(cpy_r_mod_obj);
    if (unlikely(cpy_r_r112.f0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 848, CPyStatic_suggestions___globals);
        goto CPyL130;
    }
    cpy_r_r113 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r114 = CPyStatics[6090]; /* 'unicode' */
    cpy_r_r115.f0 = cpy_r_r113;
    cpy_r_r115.f1 = cpy_r_r114;
    CPy_INCREF(cpy_r_r115.f0);
    CPy_INCREF(cpy_r_r115.f1);
    cpy_r_r116 = cpy_r_r112.f0;
    CPy_INCREF(cpy_r_r116);
    cpy_r_r117 = cpy_r_r112.f1;
    CPy_INCREF(cpy_r_r117);
    CPy_DECREF(cpy_r_r112.f0);
    CPy_DECREF(cpy_r_r112.f1);
    cpy_r_r118 = cpy_r_r115.f0;
    CPy_INCREF(cpy_r_r118);
    cpy_r_r119 = cpy_r_r115.f1;
    CPy_INCREF(cpy_r_r119);
    CPy_DECREF(cpy_r_r115.f0);
    CPy_DECREF(cpy_r_r115.f1);
    cpy_r_r120 = PyUnicode_Compare(cpy_r_r116, cpy_r_r118);
    CPy_DECREF(cpy_r_r116);
    CPy_DECREF(cpy_r_r118);
    cpy_r_r121 = cpy_r_r120 == -1;
    if (!cpy_r_r121) goto CPyL83;
    cpy_r_r122 = PyErr_Occurred();
    cpy_r_r123 = cpy_r_r122 != NULL;
    if (!cpy_r_r123) goto CPyL83;
    cpy_r_r124 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 848, CPyStatic_suggestions___globals);
        goto CPyL131;
    }
CPyL83: ;
    cpy_r_r125 = cpy_r_r120 == 0;
    cpy_r_r126 = cpy_r_r125 ? Py_True : Py_False;
    cpy_r_r127 = PyObject_IsTrue(cpy_r_r126);
    cpy_r_r128 = cpy_r_r127 >= 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 848, CPyStatic_suggestions___globals);
        goto CPyL131;
    }
    cpy_r_r129 = cpy_r_r127;
    if (!cpy_r_r129) goto CPyL132;
    cpy_r_r130 = PyUnicode_Compare(cpy_r_r117, cpy_r_r119);
    CPy_DECREF(cpy_r_r117);
    CPy_DECREF(cpy_r_r119);
    cpy_r_r131 = cpy_r_r130 == -1;
    if (!cpy_r_r131) goto CPyL88;
    cpy_r_r132 = PyErr_Occurred();
    cpy_r_r133 = cpy_r_r132 != NULL;
    if (!cpy_r_r133) goto CPyL88;
    cpy_r_r134 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 848, CPyStatic_suggestions___globals);
        goto CPyL130;
    }
CPyL88: ;
    cpy_r_r135 = cpy_r_r130 == 0;
    cpy_r_r136 = cpy_r_r135 ? Py_True : Py_False;
    cpy_r_r137 = PyObject_IsTrue(cpy_r_r136);
    cpy_r_r138 = cpy_r_r137 >= 0;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 848, CPyStatic_suggestions___globals);
        goto CPyL130;
    }
    cpy_r_r139 = cpy_r_r137;
    if (cpy_r_r139) goto CPyL91;
CPyL90: ;
    cpy_r_r140 = 0;
    goto CPyL92;
CPyL91: ;
    cpy_r_r140 = 1;
CPyL92: ;
    if (cpy_r_r140) {
        goto CPyL133;
    } else
        goto CPyL94;
CPyL93: ;
    cpy_r_r141 = CPyStatics[6091]; /* 'Text' */
    CPy_INCREF(cpy_r_r141);
    return cpy_r_r141;
CPyL94: ;
    cpy_r_r142 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r143 = PyUnicode_Compare(cpy_r_mod, cpy_r_r142);
    cpy_r_r144 = cpy_r_r143 == -1;
    if (!cpy_r_r144) goto CPyL97;
    cpy_r_r145 = PyErr_Occurred();
    cpy_r_r146 = cpy_r_r145 != NULL;
    if (!cpy_r_r146) goto CPyL97;
    cpy_r_r147 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r147)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 850, CPyStatic_suggestions___globals);
        goto CPyL130;
    }
CPyL97: ;
    cpy_r_r148 = cpy_r_r143 == 0;
    if (cpy_r_r148) {
        goto CPyL134;
    } else
        goto CPyL99;
CPyL98: ;
    return cpy_r_obj;
CPyL99: ;
    cpy_r_r149 = CPyStatics[224]; /* '.' */
    cpy_r_r150 = PySequence_Contains(cpy_r_obj, cpy_r_r149);
    cpy_r_r151 = cpy_r_r150 >= 0;
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 853, CPyStatic_suggestions___globals);
        goto CPyL130;
    }
    cpy_r_r152 = cpy_r_r150;
    cpy_r_r153 = cpy_r_r152 ^ 1;
    if (!cpy_r_r153) goto CPyL102;
    cpy_r_r154 = CPyStatics[224]; /* '.' */
    CPy_INCREF(cpy_r_r154);
    cpy_r_r155 = cpy_r_r154;
    goto CPyL103;
CPyL102: ;
    cpy_r_r156 = CPyStatics[171]; /* ':' */
    CPy_INCREF(cpy_r_r156);
    cpy_r_r155 = cpy_r_r156;
CPyL103: ;
    cpy_r_delim = cpy_r_r155;
    cpy_r_r157 = PyUnicode_Concat(cpy_r_mod, cpy_r_delim);
    CPy_DECREF(cpy_r_mod);
    CPy_DECREF(cpy_r_delim);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 854, CPyStatic_suggestions___globals);
        goto CPyL135;
    }
    cpy_r_r158 = PyUnicode_Concat(cpy_r_r157, cpy_r_obj);
    CPy_DECREF(cpy_r_r157);
    CPy_DECREF(cpy_r_obj);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 854, CPyStatic_suggestions___globals);
        goto CPyL106;
    }
    return cpy_r_r158;
CPyL106: ;
    cpy_r_r159 = NULL;
    return cpy_r_r159;
CPyL107: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL3;
CPyL108: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL6;
CPyL109: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL9;
CPyL110: ;
    CPy_DecRef(cpy_r_s);
    goto CPyL106;
CPyL111: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r12);
    goto CPyL12;
CPyL112: ;
    CPy_DecRef(cpy_r_s);
    goto CPyL17;
CPyL113: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL106;
CPyL114: ;
    CPy_DECREF(cpy_r_mod_obj);
    goto CPyL30;
CPyL115: ;
    CPy_DecRef(cpy_r_mod_obj);
    goto CPyL106;
CPyL116: ;
    CPy_DecRef(cpy_r_mod_obj);
    CPy_DecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_obj);
    goto CPyL106;
CPyL117: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL53;
CPyL118: ;
    CPy_DecRef(cpy_r_mod_obj);
    CPy_DecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_parts);
    goto CPyL106;
CPyL119: ;
    CPy_DecRef(cpy_r_mod_obj);
    CPy_DecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_parts);
    CPy_DecRef(cpy_r_r44);
    goto CPyL106;
CPyL120: ;
    CPy_DECREF(cpy_r_parts);
    CPy_DECREF(cpy_r_tree);
    goto CPyL53;
CPyL121: ;
    CPy_DecRef(cpy_r_mod_obj);
    CPy_DecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_tree);
    goto CPyL106;
CPyL122: ;
    CPy_DecRef(cpy_r_mod_obj);
    CPy_DecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_tree);
    CPy_DecRef(cpy_r_r53);
    goto CPyL106;
CPyL123: ;
    CPy_DECREF(cpy_r_mod);
    goto CPyL50;
CPyL124: ;
    CPy_DecRef(cpy_r_mod_obj);
    CPy_DecRef(cpy_r_obj);
    goto CPyL106;
CPyL125: ;
    CPy_DecRef(cpy_r_mod_obj);
    CPy_DecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r68);
    goto CPyL106;
CPyL126: ;
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r68);
    goto CPyL63;
CPyL127: ;
    CPy_DECREF(cpy_r_mod);
    CPy_DECREF(cpy_r_obj);
    goto CPyL66;
CPyL128: ;
    CPy_DecRef(cpy_r_mod_obj);
    CPy_DecRef(cpy_r_r91);
    goto CPyL106;
CPyL129: ;
    CPy_DecRef(cpy_r_mod_obj);
    CPy_DecRef(cpy_r_mod);
    goto CPyL106;
CPyL130: ;
    CPy_DecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_obj);
    goto CPyL106;
CPyL131: ;
    CPy_DecRef(cpy_r_mod);
    CPy_DecRef(cpy_r_obj);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_r119);
    goto CPyL106;
CPyL132: ;
    CPy_DECREF(cpy_r_r117);
    CPy_DECREF(cpy_r_r119);
    goto CPyL90;
CPyL133: ;
    CPy_DECREF(cpy_r_mod);
    CPy_DECREF(cpy_r_obj);
    goto CPyL93;
CPyL134: ;
    CPy_DECREF(cpy_r_mod);
    goto CPyL98;
CPyL135: ;
    CPy_DecRef(cpy_r_obj);
    goto CPyL106;
}

PyObject *CPyPy_suggestions___TypeFormatter___visit_instance(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___TypeFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.TypeFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___TypeFormatter___visit_instance(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_instance", 823, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___TypeFormatter___visit_instance__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_suggestions___TypeFormatter___visit_instance(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_suggestions___TypeFormatter___visit_instance__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_instance__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___TypeFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.TypeFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___Instance))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Instance", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___TypeFormatter___visit_instance__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_instance__TypeVisitor_glue", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___TypeFormatter___visit_tuple_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_fallback_name;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    cpy_r_r0 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_partial_fallback;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_tuple_type", 857, CPyStatic_suggestions___globals);
        goto CPyL15;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL12;
    cpy_r_r4 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_partial_fallback;
    cpy_r_r5 = ((mypy___types___InstanceObject *)cpy_r_r4)->_type;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_tuple_type", 857, CPyStatic_suggestions___globals);
        goto CPyL15;
    }
    if (!cpy_r_r6) goto CPyL12;
    cpy_r_r7 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_partial_fallback;
    cpy_r_r8 = ((mypy___types___InstanceObject *)cpy_r_r7)->_type;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPY_GET_ATTR(cpy_r_r8, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_tuple_type", 858, CPyStatic_suggestions___globals);
        goto CPyL15;
    }
CPyL5: ;
    cpy_r_fallback_name = cpy_r_r9;
    cpy_r_r10 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_fallback_name, cpy_r_r10);
    CPy_DECREF(cpy_r_fallback_name);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL8;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL8;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_tuple_type", 859, CPyStatic_suggestions___globals);
        goto CPyL15;
    }
CPyL8: ;
    cpy_r_r16 = cpy_r_r11 != 0;
    if (!cpy_r_r16) goto CPyL12;
    cpy_r_r17 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_partial_fallback;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = CPyDef_types___Instance___accept(cpy_r_r17, cpy_r_self);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_tuple_type", 860, CPyStatic_suggestions___globals);
        goto CPyL15;
    }
    if (likely(PyUnicode_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_tuple_type", 860, CPyStatic_suggestions___globals, "str", cpy_r_r18);
        goto CPyL15;
    }
    return cpy_r_r19;
CPyL12: ;
    cpy_r_r20 = ((mypy___types___TupleTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyDef_types___TypeStrVisitor___list_str(cpy_r_self, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_tuple_type", 861, CPyStatic_suggestions___globals);
        goto CPyL15;
    }
    cpy_r_s = cpy_r_r21;
    cpy_r_r22 = CPyStatics[3686]; /* 'Tuple[' */
    cpy_r_r23 = CPyStatics[208]; /* ']' */
    cpy_r_r24 = CPyStr_Build(3, cpy_r_r22, cpy_r_s, cpy_r_r23);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_tuple_type", 862, CPyStatic_suggestions___globals);
        goto CPyL15;
    }
    return cpy_r_r24;
CPyL15: ;
    cpy_r_r25 = NULL;
    return cpy_r_r25;
}

PyObject *CPyPy_suggestions___TypeFormatter___visit_tuple_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___TypeFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.TypeFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___TypeFormatter___visit_tuple_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_tuple_type", 856, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___TypeFormatter___visit_tuple_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_suggestions___TypeFormatter___visit_tuple_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_suggestions___TypeFormatter___visit_tuple_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_tuple_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___TypeFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.TypeFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TupleType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___TypeFormatter___visit_tuple_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_tuple_type__TypeVisitor_glue", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___TypeFormatter___visit_uninhabited_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = CPyStatics[507]; /* 'Any' */
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_suggestions___TypeFormatter___visit_uninhabited_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___TypeFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.TypeFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___TypeFormatter___visit_uninhabited_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_uninhabited_type", 864, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___TypeFormatter___visit_uninhabited_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_suggestions___TypeFormatter___visit_uninhabited_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_suggestions___TypeFormatter___visit_uninhabited_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_uninhabited_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___TypeFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.TypeFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UninhabitedType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UninhabitedType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___TypeFormatter___visit_uninhabited_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_uninhabited_type__TypeVisitor_glue", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___TypeFormatter___visit_typeddict_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___types___TypedDictTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_types___Instance___accept(cpy_r_r0, cpy_r_self);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_typeddict_type", 868, CPyStatic_suggestions___globals);
        goto CPyL3;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_typeddict_type", 868, CPyStatic_suggestions___globals, "str", cpy_r_r1);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_suggestions___TypeFormatter___visit_typeddict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___TypeFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.TypeFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___TypeFormatter___visit_typeddict_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_typeddict_type", 867, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___TypeFormatter___visit_typeddict_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_suggestions___TypeFormatter___visit_typeddict_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_suggestions___TypeFormatter___visit_typeddict_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_typeddict_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___TypeFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.TypeFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypedDictType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypedDictType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___TypeFormatter___visit_typeddict_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_typeddict_type__TypeVisitor_glue", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___TypeFormatter___visit_union_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
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
    cpy_r_r0 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_items;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 == 4;
    if (!cpy_r_r4) goto CPyL8;
    cpy_r_r5 = CPyDef_types_utils___is_optional(cpy_r_t);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_union_type", 871, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
    if (!cpy_r_r5) goto CPyL8;
    cpy_r_r6 = CPyStatics[3581]; /* 'Optional[' */
    cpy_r_r7 = CPyDef_types_utils___remove_optional(cpy_r_t);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_union_type", 872, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
    cpy_r_r8 = CPY_GET_METHOD(cpy_r_r7, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r7, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_union_type", 872, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_union_type", 872, CPyStatic_suggestions___globals, "str", cpy_r_r8);
        goto CPyL10;
    }
    cpy_r_r10 = CPyStatics[208]; /* ']' */
    cpy_r_r11 = CPyStr_Build(3, cpy_r_r6, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_union_type", 872, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
    return cpy_r_r11;
CPyL8: ;
    cpy_r_r12 = CPyDef_types___TypeStrVisitor___visit_union_type(cpy_r_self, cpy_r_t);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_union_type", 874, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
    return cpy_r_r12;
CPyL10: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
}

PyObject *CPyPy_suggestions___TypeFormatter___visit_union_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___TypeFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.TypeFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___TypeFormatter___visit_union_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_union_type", 870, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___TypeFormatter___visit_union_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_suggestions___TypeFormatter___visit_union_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_suggestions___TypeFormatter___visit_union_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_union_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___TypeFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.TypeFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___TypeFormatter___visit_union_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_union_type__TypeVisitor_glue", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___TypeFormatter___visit_callable_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_arg_str;
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
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_args;
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
    cpy_r_r0 = CPyDef_suggestions___is_tricky_callable(cpy_r_t);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_callable_type", 878, CPyStatic_suggestions___globals);
        goto CPyL18;
    }
    if (!cpy_r_r0) goto CPyL3;
    cpy_r_r1 = CPyStatics[5575]; /* '...' */
    CPy_INCREF(cpy_r_r1);
    cpy_r_arg_str = cpy_r_r1;
    goto CPyL14;
CPyL3: ;
    cpy_r_r2 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = PyList_New(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_callable_type", 885, CPyStatic_suggestions___globals);
        goto CPyL19;
    }
    cpy_r_r6 = 0;
CPyL5: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL20;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r6);
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_callable_type", 885, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r11);
        goto CPyL21;
    }
    cpy_r_typ = cpy_r_r12;
    cpy_r_r13 = CPY_GET_METHOD(cpy_r_typ, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_typ, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_callable_type", 885, CPyStatic_suggestions___globals);
        goto CPyL21;
    }
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_callable_type", 885, CPyStatic_suggestions___globals, "str", cpy_r_r13);
        goto CPyL21;
    }
    cpy_r_r15 = CPyList_SetItemUnsafe(cpy_r_r5, cpy_r_r6, cpy_r_r14);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_callable_type", 885, CPyStatic_suggestions___globals);
        goto CPyL21;
    }
    cpy_r_r16 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r16;
    goto CPyL5;
CPyL11: ;
    cpy_r_args = cpy_r_r5;
    cpy_r_r17 = CPyStatics[207]; /* '[' */
    cpy_r_r18 = CPyStatics[71]; /* ', ' */
    cpy_r_r19 = PyUnicode_Join(cpy_r_r18, cpy_r_args);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_callable_type", 886, CPyStatic_suggestions___globals);
        goto CPyL18;
    }
    cpy_r_r20 = CPyStatics[208]; /* ']' */
    cpy_r_r21 = CPyStr_Build(3, cpy_r_r17, cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_callable_type", 886, CPyStatic_suggestions___globals);
        goto CPyL18;
    }
    cpy_r_arg_str = cpy_r_r21;
CPyL14: ;
    cpy_r_r22 = CPyStatics[3693]; /* 'Callable[' */
    cpy_r_r23 = CPyStatics[71]; /* ', ' */
    cpy_r_r24 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPY_GET_METHOD(cpy_r_r24, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r24, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_callable_type", 888, CPyStatic_suggestions___globals);
        goto CPyL22;
    }
    if (likely(PyUnicode_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_callable_type", 888, CPyStatic_suggestions___globals, "str", cpy_r_r25);
        goto CPyL22;
    }
    cpy_r_r27 = CPyStatics[208]; /* ']' */
    cpy_r_r28 = CPyStr_Build(5, cpy_r_r22, cpy_r_arg_str, cpy_r_r23, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_arg_str);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_callable_type", 888, CPyStatic_suggestions___globals);
        goto CPyL18;
    }
    return cpy_r_r28;
CPyL18: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL19: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL18;
CPyL20: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL11;
CPyL21: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_arg_str);
    goto CPyL18;
}

PyObject *CPyPy_suggestions___TypeFormatter___visit_callable_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___TypeFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.TypeFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___TypeFormatter___visit_callable_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_callable_type", 876, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___TypeFormatter___visit_callable_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_suggestions___TypeFormatter___visit_callable_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_suggestions___TypeFormatter___visit_callable_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_callable_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___TypeFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.TypeFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___TypeFormatter___visit_callable_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_callable_type__TypeVisitor_glue", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___make_suggestion_anys(PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyDef_suggestions___MakeSuggestionAny();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "make_suggestion_anys", 900, CPyStatic_suggestions___globals);
        goto CPyL4;
    }
    cpy_r_r1 = CPY_GET_METHOD(cpy_r_t, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_t, cpy_r_r0); /* accept */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "make_suggestion_anys", 900, CPyStatic_suggestions___globals);
        goto CPyL4;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "make_suggestion_anys", 900, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_suggestions___make_suggestion_anys(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:make_suggestion_anys", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___Type)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___make_suggestion_anys(arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "make_suggestion_anys", 894, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___MakeSuggestionAny___visit_any(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___types___AnyTypeObject *)cpy_r_t)->_missing_import_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL7;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_any", 905, CPyStatic_suggestions___globals, "str", cpy_r_r0);
        goto CPyL6;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4) goto CPyL5;
CPyL3: ;
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_types___AnyType___copy_modified(cpy_r_t, 18, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_any", 906, CPyStatic_suggestions___globals);
        goto CPyL6;
    }
    return cpy_r_r6;
CPyL5: ;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL6: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL7: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_suggestions___MakeSuggestionAny___visit_any(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___MakeSuggestionAny))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.MakeSuggestionAny", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___MakeSuggestionAny___visit_any(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_any", 904, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___MakeSuggestionAny___visit_any__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_suggestions___MakeSuggestionAny___visit_any(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_suggestions___MakeSuggestionAny___visit_any__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_any__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___MakeSuggestionAny))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.MakeSuggestionAny", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___AnyType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.AnyType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___MakeSuggestionAny___visit_any__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_any__TypeVisitor_glue", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___MakeSuggestionAny___visit_type_alias_type(PyObject *cpy_r_self, PyObject *cpy_r_t) {
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
    PyObject *cpy_r_a;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = ((mypy___types___TypeAliasTypeObject *)cpy_r_t)->_args;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_type_alias_type", 911, CPyStatic_suggestions___globals);
        goto CPyL11;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL12;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_types___Type)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_type_alias_type", 911, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r9);
        goto CPyL13;
    }
    cpy_r_a = cpy_r_r10;
    cpy_r_r11 = CPY_GET_METHOD(cpy_r_a, CPyType_types___Type, 9, mypy___types___TypeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_a, cpy_r_self); /* accept */
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_type_alias_type", 911, CPyStatic_suggestions___globals);
        goto CPyL13;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "visit_type_alias_type", 911, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r11);
        goto CPyL13;
    }
    cpy_r_r13 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r12);
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_type_alias_type", 911, CPyStatic_suggestions___globals);
        goto CPyL13;
    }
    cpy_r_r14 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r14;
    goto CPyL2;
CPyL8: ;
    cpy_r_r15 = CPyDef_types___TypeAliasType___copy_modified(cpy_r_t, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "visit_type_alias_type", 911, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
    return cpy_r_r15;
CPyL10: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL8;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL10;
}

PyObject *CPyPy_suggestions___MakeSuggestionAny___visit_type_alias_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___MakeSuggestionAny))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.MakeSuggestionAny", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___MakeSuggestionAny___visit_type_alias_type(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_type_alias_type", 910, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___MakeSuggestionAny___visit_type_alias_type__TypeVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_suggestions___MakeSuggestionAny___visit_type_alias_type(cpy_r_self, cpy_r_t);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_suggestions___MakeSuggestionAny___visit_type_alias_type__TypeVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", 0};
    static CPyArg_Parser parser = {"O:visit_type_alias_type__TypeVisitor_glue", kwlist, 0};
    PyObject *obj_t;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_suggestions___MakeSuggestionAny))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.suggestions.MakeSuggestionAny", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___TypeAliasType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.TypeAliasType", obj_t); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___MakeSuggestionAny___visit_type_alias_type__TypeVisitor_glue(arg_self, arg_t);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "visit_type_alias_type__TypeVisitor_glue", -1, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___generate_type_combinations(PyObject *cpy_r_types) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_joined_type;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_union_type;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyDef_join___join_type_list(cpy_r_types);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "generate_type_combinations", 920, CPyStatic_suggestions___globals);
        goto CPyL9;
    }
    cpy_r_joined_type = cpy_r_r0;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = 2;
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_typeops___make_simplified_union(cpy_r_types, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "generate_type_combinations", 921, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
    cpy_r_union_type = cpy_r_r5;
    cpy_r_r6 = PyObject_RichCompare(cpy_r_joined_type, cpy_r_union_type, 2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "generate_type_combinations", 922, CPyStatic_suggestions___globals);
        goto CPyL11;
    }
    if (unlikely(!PyBool_Check(cpy_r_r6))) {
        CPy_TypeError("bool", cpy_r_r6); cpy_r_r7 = 2;
    } else
        cpy_r_r7 = cpy_r_r6 == Py_True;
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "generate_type_combinations", 922, CPyStatic_suggestions___globals);
        goto CPyL11;
    }
    if (cpy_r_r7) {
        goto CPyL12;
    } else
        goto CPyL7;
CPyL5: ;
    cpy_r_r8 = PyList_New(1);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "generate_type_combinations", 923, CPyStatic_suggestions___globals);
        goto CPyL10;
    }
    cpy_r_r9 = (CPyPtr)&((PyListObject *)cpy_r_r8)->ob_item;
    cpy_r_r10 = *(CPyPtr *)cpy_r_r9;
    *(PyObject * *)cpy_r_r10 = cpy_r_joined_type;
    return cpy_r_r8;
CPyL7: ;
    cpy_r_r11 = PyList_New(2);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "generate_type_combinations", 925, CPyStatic_suggestions___globals);
        goto CPyL11;
    }
    cpy_r_r12 = (CPyPtr)&((PyListObject *)cpy_r_r11)->ob_item;
    cpy_r_r13 = *(CPyPtr *)cpy_r_r12;
    *(PyObject * *)cpy_r_r13 = cpy_r_joined_type;
    cpy_r_r14 = cpy_r_r13 + 8;
    *(PyObject * *)cpy_r_r14 = cpy_r_union_type;
    return cpy_r_r11;
CPyL9: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL10: ;
    CPy_DecRef(cpy_r_joined_type);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_joined_type);
    CPy_DecRef(cpy_r_union_type);
    goto CPyL9;
CPyL12: ;
    CPy_DECREF(cpy_r_union_type);
    goto CPyL5;
}

PyObject *CPyPy_suggestions___generate_type_combinations(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:generate_type_combinations", kwlist, 0};
    PyObject *obj_types;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_types)) {
        return NULL;
    }
    PyObject *arg_types;
    if (likely(PyList_Check(obj_types)))
        arg_types = obj_types;
    else {
        CPy_TypeError("list", obj_types); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___generate_type_combinations(arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "generate_type_combinations", 914, CPyStatic_suggestions___globals);
    return NULL;
}

CPyTagged CPyDef_suggestions___count_errors(PyObject *cpy_r_msgs) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyTagged cpy_r_r18;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "count_errors", 929, CPyStatic_suggestions___globals);
        goto CPyL9;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_msgs)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL8;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_msgs, cpy_r_r1);
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "count_errors", 929, CPyStatic_suggestions___globals, "str", cpy_r_r6);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r7);
    cpy_r_x = cpy_r_r7;
    cpy_r_r8 = CPyStatics[6092]; /* ' error: ' */
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = PySequence_Contains(cpy_r_x, cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/suggestions.py", "count_errors", 929, CPyStatic_suggestions___globals);
        goto CPyL11;
    }
    cpy_r_r11 = cpy_r_r9;
    if (!cpy_r_r11) goto CPyL12;
    cpy_r_r12 = PyList_Append(cpy_r_r0, cpy_r_x);
    CPy_DECREF(cpy_r_x);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/suggestions.py", "count_errors", 929, CPyStatic_suggestions___globals);
        goto CPyL13;
    }
CPyL7: ;
    cpy_r_r14 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r14;
    goto CPyL2;
CPyL8: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r17 = cpy_r_r16 << 1;
    return cpy_r_r17;
CPyL9: ;
    cpy_r_r18 = CPY_INT_TAG;
    return cpy_r_r18;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r6);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_x);
    goto CPyL9;
CPyL12: ;
    CPy_DECREF(cpy_r_x);
    goto CPyL7;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
}

PyObject *CPyPy_suggestions___count_errors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"msgs", 0};
    static CPyArg_Parser parser = {"O:count_errors", kwlist, 0};
    PyObject *obj_msgs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_msgs)) {
        return NULL;
    }
    PyObject *arg_msgs;
    if (likely(PyList_Check(obj_msgs)))
        arg_msgs = obj_msgs;
    else {
        CPy_TypeError("list", obj_msgs); 
        goto fail;
    }
    CPyTagged retval = CPyDef_suggestions___count_errors(arg_msgs);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "count_errors", 928, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___refine_type(PyObject *cpy_r_ti, PyObject *cpy_r_si) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
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
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    CPyPtr cpy_r_r45;
    int64_t cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_ta;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_sa;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyPtr cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyPtr cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyPtr cpy_r_r76;
    int64_t cpy_r_r77;
    CPyTagged cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyPtr cpy_r_r81;
    int64_t cpy_r_r82;
    CPyTagged cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    CPyTagged cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyTagged cpy_r_r92;
    CPyPtr cpy_r_r93;
    int64_t cpy_r_r94;
    CPyTagged cpy_r_r95;
    char cpy_r_r96;
    CPyPtr cpy_r_r97;
    int64_t cpy_r_r98;
    CPyTagged cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_ta_2;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_sa_2;
    PyObject *cpy_r_r105;
    int32_t cpy_r_r106;
    char cpy_r_r107;
    CPyTagged cpy_r_r108;
    CPyTagged cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    CPyPtr cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    CPyPtr cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    CPyPtr cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_ti);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_type", 956, CPyStatic_suggestions___globals);
        goto CPyL70;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 956, CPyStatic_suggestions___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL70;
    }
    cpy_r_t = cpy_r_r1;
    cpy_r_r2 = CPyDef_types___get_proper_type(cpy_r_si);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_type", 957, CPyStatic_suggestions___globals);
        goto CPyL71;
    }
    if (likely(cpy_r_r2 != Py_None))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 957, CPyStatic_suggestions___globals, "mypy.types.ProperType", cpy_r_r2);
        goto CPyL71;
    }
    cpy_r_s = cpy_r_r3;
    cpy_r_r4 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL14;
    cpy_r_r8 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL72;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___AnyType))
        cpy_r_r12 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 961, CPyStatic_suggestions___globals, "mypy.types.AnyType", cpy_r_t);
        goto CPyL73;
    }
    cpy_r_r13 = ((mypy___types___AnyTypeObject *)cpy_r_r12)->_missing_import_name;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_r13 != cpy_r_r14;
    if (!cpy_r_r15) goto CPyL74;
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r16 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 961, CPyStatic_suggestions___globals, "str", cpy_r_r13);
        goto CPyL73;
    }
    cpy_r_r17 = CPyStr_IsTrue(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (cpy_r_r17) {
        goto CPyL75;
    } else
        goto CPyL72;
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___AnyType))
        cpy_r_r18 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 961, CPyStatic_suggestions___globals, "mypy.types.AnyType", cpy_r_t);
        goto CPyL70;
    }
    cpy_r_r19 = cpy_r_r18;
    goto CPyL13;
CPyL12: ;
    cpy_r_r19 = cpy_r_s;
CPyL13: ;
    return cpy_r_r19;
CPyL14: ;
    cpy_r_r20 = (PyObject *)CPyType_types___Instance;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    if (!cpy_r_r23) goto CPyL35;
    cpy_r_r24 = (PyObject *)CPyType_types___Instance;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL35;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r28 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 963, CPyStatic_suggestions___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL73;
    }
    cpy_r_r29 = ((mypy___types___InstanceObject *)cpy_r_r28)->_type;
    CPy_INCREF(cpy_r_r29);
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___Instance))
        cpy_r_r30 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 963, CPyStatic_suggestions___globals, "mypy.types.Instance", cpy_r_s);
        goto CPyL76;
    }
    cpy_r_r31 = ((mypy___types___InstanceObject *)cpy_r_r30)->_type;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = cpy_r_r29 == cpy_r_r31;
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r31);
    if (!cpy_r_r32) goto CPyL35;
    CPy_INCREF(cpy_r_t);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r33 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 964, CPyStatic_suggestions___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL73;
    }
    cpy_r_r34 = PyList_New(0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_type", 964, CPyStatic_suggestions___globals);
        goto CPyL77;
    }
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r35 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 964, CPyStatic_suggestions___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL78;
    }
    cpy_r_r36 = ((mypy___types___InstanceObject *)cpy_r_r35)->_args;
    CPy_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_t);
    cpy_r_r37 = 0;
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___Instance))
        cpy_r_r38 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 964, CPyStatic_suggestions___globals, "mypy.types.Instance", cpy_r_s);
        goto CPyL79;
    }
    cpy_r_r39 = ((mypy___types___InstanceObject *)cpy_r_r38)->_args;
    CPy_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_s);
    cpy_r_r40 = 0;
CPyL24: ;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_r36)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 << 1;
    cpy_r_r44 = (Py_ssize_t)cpy_r_r37 < (Py_ssize_t)cpy_r_r43;
    if (!cpy_r_r44) goto CPyL80;
    cpy_r_r45 = (CPyPtr)&((PyVarObject *)cpy_r_r39)->ob_size;
    cpy_r_r46 = *(int64_t *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 << 1;
    cpy_r_r48 = (Py_ssize_t)cpy_r_r40 < (Py_ssize_t)cpy_r_r47;
    if (!cpy_r_r48) goto CPyL80;
    cpy_r_r49 = CPySequenceTuple_GetItem(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_type", 964, CPyStatic_suggestions___globals);
        goto CPyL81;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r49, CPyType_types___Type)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 964, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r49);
        goto CPyL81;
    }
    cpy_r_ta = cpy_r_r50;
    cpy_r_r51 = CPySequenceTuple_GetItem(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_type", 964, CPyStatic_suggestions___globals);
        goto CPyL82;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r51, CPyType_types___Type)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 964, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r51);
        goto CPyL82;
    }
    cpy_r_sa = cpy_r_r52;
    cpy_r_r53 = CPyDef_suggestions___refine_type(cpy_r_ta, cpy_r_sa);
    CPy_DECREF(cpy_r_ta);
    CPy_DECREF(cpy_r_sa);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_type", 964, CPyStatic_suggestions___globals);
        goto CPyL81;
    }
    cpy_r_r54 = PyList_Append(cpy_r_r34, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_type", 964, CPyStatic_suggestions___globals);
        goto CPyL81;
    }
    cpy_r_r56 = cpy_r_r37 + 2;
    cpy_r_r37 = cpy_r_r56;
    cpy_r_r57 = cpy_r_r40 + 2;
    cpy_r_r40 = cpy_r_r57;
    goto CPyL24;
CPyL33: ;
    cpy_r_r58 = NULL;
    cpy_r_r59 = CPyDef_types___Instance___copy_modified(cpy_r_r33, cpy_r_r34, cpy_r_r58);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_type", 964, CPyStatic_suggestions___globals);
        goto CPyL70;
    }
    return cpy_r_r59;
CPyL35: ;
    cpy_r_r60 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r61 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r62 = *(PyObject * *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 == cpy_r_r60;
    if (!cpy_r_r63) goto CPyL59;
    cpy_r_r64 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r65 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r66 = *(PyObject * *)cpy_r_r65;
    cpy_r_r67 = cpy_r_r66 == cpy_r_r64;
    if (!cpy_r_r67) goto CPyL59;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___TupleType))
        cpy_r_r68 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 969, CPyStatic_suggestions___globals, "mypy.types.TupleType", cpy_r_t);
        goto CPyL73;
    }
    cpy_r_r69 = ((mypy___types___TupleTypeObject *)cpy_r_r68)->_partial_fallback;
    CPy_INCREF(cpy_r_r69);
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___TupleType))
        cpy_r_r70 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 969, CPyStatic_suggestions___globals, "mypy.types.TupleType", cpy_r_s);
        goto CPyL83;
    }
    cpy_r_r71 = ((mypy___types___TupleTypeObject *)cpy_r_r70)->_partial_fallback;
    CPy_INCREF(cpy_r_r71);
    cpy_r_r72 = CPyDef_types___Instance_____eq__(cpy_r_r69, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_type", 969, CPyStatic_suggestions___globals);
        goto CPyL73;
    }
    if (unlikely(!PyBool_Check(cpy_r_r72))) {
        CPy_TypeError("bool", cpy_r_r72); cpy_r_r73 = 2;
    } else
        cpy_r_r73 = cpy_r_r72 == Py_True;
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_type", 969, CPyStatic_suggestions___globals);
        goto CPyL73;
    }
    if (!cpy_r_r73) goto CPyL59;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___TupleType))
        cpy_r_r74 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 970, CPyStatic_suggestions___globals, "mypy.types.TupleType", cpy_r_t);
        goto CPyL73;
    }
    cpy_r_r75 = ((mypy___types___TupleTypeObject *)cpy_r_r74)->_items;
    cpy_r_r76 = (CPyPtr)&((PyVarObject *)cpy_r_r75)->ob_size;
    cpy_r_r77 = *(int64_t *)cpy_r_r76;
    cpy_r_r78 = cpy_r_r77 << 1;
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___TupleType))
        cpy_r_r79 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 970, CPyStatic_suggestions___globals, "mypy.types.TupleType", cpy_r_s);
        goto CPyL73;
    }
    cpy_r_r80 = ((mypy___types___TupleTypeObject *)cpy_r_r79)->_items;
    cpy_r_r81 = (CPyPtr)&((PyVarObject *)cpy_r_r80)->ob_size;
    cpy_r_r82 = *(int64_t *)cpy_r_r81;
    cpy_r_r83 = cpy_r_r82 << 1;
    cpy_r_r84 = cpy_r_r78 == cpy_r_r83;
    if (!cpy_r_r84) goto CPyL59;
    CPy_INCREF(cpy_r_t);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___TupleType))
        cpy_r_r85 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 972, CPyStatic_suggestions___globals, "mypy.types.TupleType", cpy_r_t);
        goto CPyL73;
    }
    cpy_r_r86 = PyList_New(0);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_type", 972, CPyStatic_suggestions___globals);
        goto CPyL84;
    }
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___TupleType))
        cpy_r_r87 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 972, CPyStatic_suggestions___globals, "mypy.types.TupleType", cpy_r_t);
        goto CPyL85;
    }
    cpy_r_r88 = ((mypy___types___TupleTypeObject *)cpy_r_r87)->_items;
    CPy_INCREF(cpy_r_r88);
    CPy_DECREF(cpy_r_t);
    cpy_r_r89 = 0;
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___TupleType))
        cpy_r_r90 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 972, CPyStatic_suggestions___globals, "mypy.types.TupleType", cpy_r_s);
        goto CPyL86;
    }
    cpy_r_r91 = ((mypy___types___TupleTypeObject *)cpy_r_r90)->_items;
    CPy_INCREF(cpy_r_r91);
    CPy_DECREF(cpy_r_s);
    cpy_r_r92 = 0;
CPyL50: ;
    cpy_r_r93 = (CPyPtr)&((PyVarObject *)cpy_r_r88)->ob_size;
    cpy_r_r94 = *(int64_t *)cpy_r_r93;
    cpy_r_r95 = cpy_r_r94 << 1;
    cpy_r_r96 = (Py_ssize_t)cpy_r_r89 < (Py_ssize_t)cpy_r_r95;
    if (!cpy_r_r96) goto CPyL87;
    cpy_r_r97 = (CPyPtr)&((PyVarObject *)cpy_r_r91)->ob_size;
    cpy_r_r98 = *(int64_t *)cpy_r_r97;
    cpy_r_r99 = cpy_r_r98 << 1;
    cpy_r_r100 = (Py_ssize_t)cpy_r_r92 < (Py_ssize_t)cpy_r_r99;
    if (!cpy_r_r100) goto CPyL87;
    cpy_r_r101 = CPyList_GetItemUnsafe(cpy_r_r88, cpy_r_r89);
    if (likely(PyObject_TypeCheck(cpy_r_r101, CPyType_types___Type)))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 972, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r101);
        goto CPyL88;
    }
    cpy_r_ta_2 = cpy_r_r102;
    cpy_r_r103 = CPyList_GetItemUnsafe(cpy_r_r91, cpy_r_r92);
    if (likely(PyObject_TypeCheck(cpy_r_r103, CPyType_types___Type)))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 972, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r103);
        goto CPyL89;
    }
    cpy_r_sa_2 = cpy_r_r104;
    cpy_r_r105 = CPyDef_suggestions___refine_type(cpy_r_ta_2, cpy_r_sa_2);
    CPy_DECREF(cpy_r_ta_2);
    CPy_DECREF(cpy_r_sa_2);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_type", 972, CPyStatic_suggestions___globals);
        goto CPyL88;
    }
    cpy_r_r106 = PyList_Append(cpy_r_r86, cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    cpy_r_r107 = cpy_r_r106 >= 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_type", 972, CPyStatic_suggestions___globals);
        goto CPyL88;
    }
    cpy_r_r108 = cpy_r_r89 + 2;
    cpy_r_r89 = cpy_r_r108;
    cpy_r_r109 = cpy_r_r92 + 2;
    cpy_r_r92 = cpy_r_r109;
    goto CPyL50;
CPyL57: ;
    cpy_r_r110 = NULL;
    cpy_r_r111 = CPyDef_types___TupleType___copy_modified(cpy_r_r85, cpy_r_r110, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_type", 972, CPyStatic_suggestions___globals);
        goto CPyL70;
    }
    return cpy_r_r111;
CPyL59: ;
    cpy_r_r112 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r113 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r114 = *(PyObject * *)cpy_r_r113;
    cpy_r_r115 = cpy_r_r114 == cpy_r_r112;
    if (!cpy_r_r115) goto CPyL65;
    cpy_r_r116 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r117 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r118 = *(PyObject * *)cpy_r_r117;
    cpy_r_r119 = cpy_r_r118 == cpy_r_r116;
    if (!cpy_r_r119) goto CPyL65;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___CallableType))
        cpy_r_r120 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 975, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_t);
        goto CPyL90;
    }
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___CallableType))
        cpy_r_r121 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 975, CPyStatic_suggestions___globals, "mypy.types.CallableType", cpy_r_s);
        goto CPyL91;
    }
    cpy_r_r122 = CPyDef_suggestions___refine_callable(cpy_r_r120, cpy_r_r121);
    CPy_DECREF(cpy_r_r120);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_type", 975, CPyStatic_suggestions___globals);
        goto CPyL70;
    }
    return cpy_r_r122;
CPyL65: ;
    cpy_r_r123 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r124 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r125 = *(PyObject * *)cpy_r_r124;
    cpy_r_r126 = cpy_r_r125 == cpy_r_r123;
    if (!cpy_r_r126) goto CPyL92;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r127 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_type", 978, CPyStatic_suggestions___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL90;
    }
    cpy_r_r128 = CPyDef_suggestions___refine_union(cpy_r_r127, cpy_r_s);
    CPy_DECREF(cpy_r_r127);
    CPy_DECREF(cpy_r_s);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_type", 978, CPyStatic_suggestions___globals);
        goto CPyL70;
    }
    return cpy_r_r128;
CPyL69: ;
    return cpy_r_t;
CPyL70: ;
    cpy_r_r129 = NULL;
    return cpy_r_r129;
CPyL71: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL70;
CPyL72: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL12;
CPyL73: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_s);
    goto CPyL70;
CPyL74: ;
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_r13);
    goto CPyL12;
CPyL75: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL10;
CPyL76: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r29);
    goto CPyL70;
CPyL77: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r33);
    goto CPyL70;
CPyL78: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    goto CPyL70;
CPyL79: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    goto CPyL70;
CPyL80: ;
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r39);
    goto CPyL33;
CPyL81: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r39);
    goto CPyL70;
CPyL82: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_ta);
    goto CPyL70;
CPyL83: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r69);
    goto CPyL70;
CPyL84: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r85);
    goto CPyL70;
CPyL85: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r86);
    goto CPyL70;
CPyL86: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r88);
    goto CPyL70;
CPyL87: ;
    CPy_DECREF(cpy_r_r88);
    CPy_DECREF(cpy_r_r91);
    goto CPyL57;
CPyL88: ;
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r91);
    goto CPyL70;
CPyL89: ;
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r86);
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_ta_2);
    goto CPyL70;
CPyL90: ;
    CPy_DecRef(cpy_r_s);
    goto CPyL70;
CPyL91: ;
    CPy_DecRef(cpy_r_r120);
    goto CPyL70;
CPyL92: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL69;
}

PyObject *CPyPy_suggestions___refine_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ti", "si", 0};
    static CPyArg_Parser parser = {"OO:refine_type", kwlist, 0};
    PyObject *obj_ti;
    PyObject *obj_si;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ti, &obj_si)) {
        return NULL;
    }
    PyObject *arg_ti;
    if (likely(PyObject_TypeCheck(obj_ti, CPyType_types___Type)))
        arg_ti = obj_ti;
    else {
        CPy_TypeError("mypy.types.Type", obj_ti); 
        goto fail;
    }
    PyObject *arg_si;
    if (likely(PyObject_TypeCheck(obj_si, CPyType_types___Type)))
        arg_si = obj_si;
    else {
        CPy_TypeError("mypy.types.Type", obj_si); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___refine_type(arg_ti, arg_si);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "refine_type", 932, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___refine_union(PyObject *cpy_r_t, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_rhs_items;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_new_items;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_lhs;
    char cpy_r_refined;
    CPyTagged cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_rhs;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_new;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject **cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyTagged cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    tuple_T3OOO cpy_r_r59;
    tuple_T3OOO cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    tuple_T3OOO cpy_r_r72;
    tuple_T3OOO cpy_r_r73;
    PyObject *cpy_r_r74;
    tuple_T3OOO cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject **cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    cpy_r_r0 = PyObject_RichCompare(cpy_r_t, cpy_r_s, 2);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 996, CPyStatic_suggestions___globals);
        goto CPyL60;
    }
    if (unlikely(!PyBool_Check(cpy_r_r0))) {
        CPy_TypeError("bool", cpy_r_r0); cpy_r_r1 = 2;
    } else
        cpy_r_r1 = cpy_r_r0 == Py_True;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 996, CPyStatic_suggestions___globals);
        goto CPyL60;
    }
    if (!cpy_r_r1) goto CPyL4;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL4: ;
    cpy_r_r2 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_s)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL7;
    if (likely(Py_TYPE(cpy_r_s) == CPyType_types___UnionType))
        cpy_r_r6 = cpy_r_s;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_union", 999, CPyStatic_suggestions___globals, "mypy.types.UnionType", cpy_r_s);
        goto CPyL60;
    }
    cpy_r_r7 = ((mypy___types___UnionTypeObject *)cpy_r_r6)->_items;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = cpy_r_r7;
    goto CPyL9;
CPyL7: ;
    cpy_r_r9 = PyList_New(1);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 999, CPyStatic_suggestions___globals);
        goto CPyL60;
    }
    cpy_r_r10 = (CPyPtr)&((PyListObject *)cpy_r_r9)->ob_item;
    cpy_r_r11 = *(CPyPtr *)cpy_r_r10;
    CPy_INCREF(cpy_r_s);
    *(PyObject * *)cpy_r_r11 = cpy_r_s;
    cpy_r_r8 = cpy_r_r9;
CPyL9: ;
    cpy_r_rhs_items = cpy_r_r8;
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 1001, CPyStatic_suggestions___globals);
        goto CPyL61;
    }
    cpy_r_new_items = cpy_r_r12;
    cpy_r_r13 = ((mypy___types___UnionTypeObject *)cpy_r_t)->_items;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = 0;
CPyL11: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL62;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r13, cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_types___Type)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_union", 1002, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r19);
        goto CPyL63;
    }
    cpy_r_lhs = cpy_r_r20;
    cpy_r_refined = 0;
    cpy_r_r21 = 0;
CPyL14: ;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_rhs_items)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r24;
    if (!cpy_r_r25) goto CPyL23;
    cpy_r_r26 = CPyList_GetItemUnsafe(cpy_r_rhs_items, cpy_r_r21);
    if (likely(PyObject_TypeCheck(cpy_r_r26, CPyType_types___Type)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_union", 1004, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r26);
        goto CPyL64;
    }
    cpy_r_rhs = cpy_r_r27;
    cpy_r_r28 = CPyDef_suggestions___refine_type(cpy_r_lhs, cpy_r_rhs);
    CPy_DECREF(cpy_r_rhs);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 1005, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    cpy_r_new = cpy_r_r28;
    cpy_r_r29 = PyObject_RichCompare(cpy_r_new, cpy_r_lhs, 3);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 1006, CPyStatic_suggestions___globals);
        goto CPyL65;
    }
    if (unlikely(!PyBool_Check(cpy_r_r29))) {
        CPy_TypeError("bool", cpy_r_r29); cpy_r_r30 = 2;
    } else
        cpy_r_r30 = cpy_r_r29 == Py_True;
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 1006, CPyStatic_suggestions___globals);
        goto CPyL65;
    }
    if (!cpy_r_r30) goto CPyL66;
    cpy_r_r31 = PyList_Append(cpy_r_new_items, cpy_r_new);
    CPy_DECREF(cpy_r_new);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 1007, CPyStatic_suggestions___globals);
        goto CPyL64;
    }
    cpy_r_refined = 1;
CPyL22: ;
    cpy_r_r33 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r33;
    goto CPyL14;
CPyL23: ;
    if (cpy_r_refined) goto CPyL67;
    cpy_r_r34 = PyList_Append(cpy_r_new_items, cpy_r_lhs);
    CPy_DECREF(cpy_r_lhs);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 1010, CPyStatic_suggestions___globals);
        goto CPyL63;
    }
CPyL25: ;
    cpy_r_r36 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r36;
    goto CPyL11;
CPyL26: ;
    cpy_r_r37 = CPyStatic_state___state;
    if (unlikely(cpy_r_r37 == NULL)) {
        goto CPyL68;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 1014, CPyStatic_suggestions___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r39 = CPyStatics[692]; /* 'strict_optional_set' */
    cpy_r_r40 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r41[2] = {cpy_r_r37, cpy_r_r40};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = PyObject_VectorcallMethod(cpy_r_r39, cpy_r_r42, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 1014, CPyStatic_suggestions___globals);
        goto CPyL69;
    }
    cpy_r_r44 = PyObject_Type(cpy_r_r43);
    cpy_r_r45 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 1014, CPyStatic_suggestions___globals);
        goto CPyL70;
    }
    cpy_r_r47 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r47);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 1014, CPyStatic_suggestions___globals);
        goto CPyL71;
    }
    PyObject *cpy_r_r49[1] = {cpy_r_r43};
    cpy_r_r50 = (PyObject **)&cpy_r_r49;
    cpy_r_r51 = _PyObject_Vectorcall(cpy_r_r48, cpy_r_r50, 1, 0);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 1014, CPyStatic_suggestions___globals);
        goto CPyL71;
    } else
        goto CPyL72;
CPyL33: ;
    cpy_r_r52 = 1;
    cpy_r_r53 = CPY_INT_TAG;
    cpy_r_r54 = CPY_INT_TAG;
    cpy_r_r55 = 2;
    cpy_r_r56 = 2;
    cpy_r_r57 = CPyDef_typeops___make_simplified_union(cpy_r_new_items, cpy_r_r53, cpy_r_r54, cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_new_items);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 1015, CPyStatic_suggestions___globals);
        goto CPyL36;
    }
    cpy_r_r58 = cpy_r_r57;
    goto CPyL45;
CPyL36: ;
    cpy_r_r59 = CPy_CatchError();
    cpy_r_r52 = 0;
    cpy_r_r60 = CPy_GetExcInfo();
    cpy_r_r61 = cpy_r_r60.f0;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r62 = cpy_r_r60.f1;
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63 = cpy_r_r60.f2;
    CPy_INCREF(cpy_r_r63);
    CPy_DecRef(cpy_r_r60.f0);
    CPy_DecRef(cpy_r_r60.f1);
    CPy_DecRef(cpy_r_r60.f2);
    PyObject *cpy_r_r64[4] = {cpy_r_r43, cpy_r_r61, cpy_r_r62, cpy_r_r63};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = _PyObject_Vectorcall(cpy_r_r46, cpy_r_r65, 4, 0);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 1014, CPyStatic_suggestions___globals);
        goto CPyL73;
    }
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r63);
    cpy_r_r67 = PyObject_IsTrue(cpy_r_r66);
    CPy_DecRef(cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 1014, CPyStatic_suggestions___globals);
        goto CPyL42;
    }
    cpy_r_r69 = cpy_r_r67;
    if (cpy_r_r69) goto CPyL41;
    CPy_Reraise();
    if (!0) {
        goto CPyL42;
    } else
        goto CPyL74;
CPyL40: ;
    CPy_Unreachable();
CPyL41: ;
    CPy_RestoreExcInfo(cpy_r_r59);
    CPy_DecRef(cpy_r_r59.f0);
    CPy_DecRef(cpy_r_r59.f1);
    CPy_DecRef(cpy_r_r59.f2);
    goto CPyL44;
CPyL42: ;
    CPy_RestoreExcInfo(cpy_r_r59);
    CPy_DecRef(cpy_r_r59.f0);
    CPy_DecRef(cpy_r_r59.f1);
    CPy_DecRef(cpy_r_r59.f2);
    cpy_r_r70 = CPy_KeepPropagating();
    if (!cpy_r_r70) {
        goto CPyL46;
    } else
        goto CPyL75;
CPyL43: ;
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r71 = NULL;
    cpy_r_r58 = cpy_r_r71;
CPyL45: ;
    tuple_T3OOO __tmp7517 = { NULL, NULL, NULL };
    cpy_r_r72 = __tmp7517;
    cpy_r_r73 = cpy_r_r72;
    goto CPyL47;
CPyL46: ;
    cpy_r_r74 = NULL;
    cpy_r_r58 = cpy_r_r74;
    cpy_r_r75 = CPy_CatchError();
    cpy_r_r73 = cpy_r_r75;
CPyL47: ;
    if (!cpy_r_r52) goto CPyL76;
    cpy_r_r76 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r77[4] = {cpy_r_r43, cpy_r_r76, cpy_r_r76, cpy_r_r76};
    cpy_r_r78 = (PyObject **)&cpy_r_r77;
    cpy_r_r79 = _PyObject_Vectorcall(cpy_r_r46, cpy_r_r78, 4, 0);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_union", 1014, CPyStatic_suggestions___globals);
        goto CPyL77;
    } else
        goto CPyL78;
CPyL49: ;
    CPy_DECREF(cpy_r_r43);
CPyL50: ;
    if (cpy_r_r73.f0 == NULL) {
        goto CPyL53;
    } else
        goto CPyL79;
CPyL51: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL55;
    } else
        goto CPyL80;
CPyL52: ;
    CPy_Unreachable();
CPyL53: ;
    if (cpy_r_r58 == NULL) goto CPyL59;
    return cpy_r_r58;
CPyL55: ;
    if (cpy_r_r73.f0 == NULL) goto CPyL57;
    CPy_RestoreExcInfo(cpy_r_r73);
    CPy_XDECREF(cpy_r_r73.f0);
    CPy_XDECREF(cpy_r_r73.f1);
    CPy_XDECREF(cpy_r_r73.f2);
CPyL57: ;
    cpy_r_r80 = CPy_KeepPropagating();
    if (!cpy_r_r80) goto CPyL60;
    CPy_Unreachable();
CPyL59: ;
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r81 = NULL;
    return cpy_r_r81;
CPyL61: ;
    CPy_DecRef(cpy_r_rhs_items);
    goto CPyL60;
CPyL62: ;
    CPy_DECREF(cpy_r_rhs_items);
    CPy_DECREF(cpy_r_r13);
    goto CPyL26;
CPyL63: ;
    CPy_DecRef(cpy_r_rhs_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_r13);
    goto CPyL60;
CPyL64: ;
    CPy_DecRef(cpy_r_rhs_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_lhs);
    goto CPyL60;
CPyL65: ;
    CPy_DecRef(cpy_r_rhs_items);
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_new);
    goto CPyL60;
CPyL66: ;
    CPy_DECREF(cpy_r_new);
    goto CPyL22;
CPyL67: ;
    CPy_DECREF(cpy_r_lhs);
    goto CPyL25;
CPyL68: ;
    CPy_DecRef(cpy_r_new_items);
    goto CPyL27;
CPyL69: ;
    CPy_DecRef(cpy_r_new_items);
    goto CPyL60;
CPyL70: ;
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r44);
    goto CPyL60;
CPyL71: ;
    CPy_DecRef(cpy_r_new_items);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r46);
    goto CPyL60;
CPyL72: ;
    CPy_DECREF(cpy_r_r51);
    goto CPyL33;
CPyL73: ;
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    CPy_DecRef(cpy_r_r63);
    goto CPyL42;
CPyL74: ;
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r59.f0);
    CPy_DecRef(cpy_r_r59.f1);
    CPy_DecRef(cpy_r_r59.f2);
    goto CPyL40;
CPyL75: ;
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r46);
    goto CPyL43;
CPyL76: ;
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r46);
    goto CPyL50;
CPyL77: ;
    CPy_DecRef(cpy_r_r43);
    CPy_XDecRef(cpy_r_r58);
    goto CPyL55;
CPyL78: ;
    CPy_DECREF(cpy_r_r79);
    goto CPyL49;
CPyL79: ;
    CPy_XDECREF(cpy_r_r58);
    goto CPyL51;
CPyL80: ;
    CPy_XDECREF(cpy_r_r73.f0);
    CPy_XDECREF(cpy_r_r73.f1);
    CPy_XDECREF(cpy_r_r73.f2);
    goto CPyL52;
}

PyObject *CPyPy_suggestions___refine_union(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", "s", 0};
    static CPyArg_Parser parser = {"OO:refine_union", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_t, &obj_s)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___UnionType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.UnionType", obj_t); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(PyObject_TypeCheck(obj_s, CPyType_types___ProperType)))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_s); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___refine_union(arg_t, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "refine_union", 985, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___refine_callable(PyObject *cpy_r_t, PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
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
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_r17;
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
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    CPyPtr cpy_r_r42;
    int64_t cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_ta;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_sa;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyTagged cpy_r_r65;
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
    cpy_r_r0 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_fallback;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_fallback;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_types___Instance_____ne__(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_callable", 1023, CPyStatic_suggestions___globals);
        goto CPyL28;
    }
    if (unlikely(!PyBool_Check(cpy_r_r2))) {
        CPy_TypeError("bool", cpy_r_r2); cpy_r_r3 = 2;
    } else
        cpy_r_r3 = cpy_r_r2 == Py_True;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_callable", 1023, CPyStatic_suggestions___globals);
        goto CPyL28;
    }
    if (!cpy_r_r3) goto CPyL4;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL4: ;
    cpy_r_r4 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_is_ellipsis_args;
    if (!cpy_r_r4) goto CPyL10;
CPyL5: ;
    cpy_r_r5 = CPyDef_suggestions___is_tricky_callable(cpy_r_s);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_callable", 1026, CPyStatic_suggestions___globals);
        goto CPyL28;
    }
    if (cpy_r_r5) goto CPyL10;
    cpy_r_r6 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_ret_type;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDef_suggestions___refine_type(cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_callable", 1027, CPyStatic_suggestions___globals);
        goto CPyL28;
    }
    cpy_r_r9 = NULL;
    cpy_r_r10 = NULL;
    cpy_r_r11 = NULL;
    cpy_r_r12 = NULL;
    cpy_r_r13 = NULL;
    cpy_r_r14 = NULL;
    cpy_r_r15 = NULL;
    cpy_r_r16 = CPY_INT_TAG;
    cpy_r_r17 = CPY_INT_TAG;
    cpy_r_r18 = NULL;
    cpy_r_r19 = NULL;
    cpy_r_r20 = NULL;
    cpy_r_r21 = NULL;
    cpy_r_r22 = NULL;
    cpy_r_r23 = NULL;
    cpy_r_r24 = NULL;
    cpy_r_r25 = NULL;
    cpy_r_r26 = NULL;
    cpy_r_r27 = CPyDef_types___CallableType___copy_modified(cpy_r_s, cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r8, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_callable", 1027, CPyStatic_suggestions___globals);
        goto CPyL28;
    }
    return cpy_r_r27;
CPyL10: ;
    cpy_r_r28 = CPyDef_suggestions___is_tricky_callable(cpy_r_t);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_callable", 1029, CPyStatic_suggestions___globals);
        goto CPyL28;
    }
    if (cpy_r_r28) goto CPyL15;
    cpy_r_r29 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_kinds;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_arg_kinds;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = PyObject_RichCompare(cpy_r_r29, cpy_r_r30, 3);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_callable", 1029, CPyStatic_suggestions___globals);
        goto CPyL28;
    }
    if (unlikely(!PyBool_Check(cpy_r_r31))) {
        CPy_TypeError("bool", cpy_r_r31); cpy_r_r32 = 2;
    } else
        cpy_r_r32 = cpy_r_r31 == Py_True;
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_callable", 1029, CPyStatic_suggestions___globals);
        goto CPyL28;
    }
    if (!cpy_r_r32) goto CPyL16;
CPyL15: ;
    CPy_INCREF(cpy_r_t);
    return cpy_r_t;
CPyL16: ;
    cpy_r_r33 = PyList_New(0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_callable", 1033, CPyStatic_suggestions___globals);
        goto CPyL28;
    }
    cpy_r_r34 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_arg_types;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = 0;
    cpy_r_r36 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_arg_types;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = 0;
CPyL18: ;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_r34)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r35 < (Py_ssize_t)cpy_r_r40;
    if (!cpy_r_r41) goto CPyL29;
    cpy_r_r42 = (CPyPtr)&((PyVarObject *)cpy_r_r36)->ob_size;
    cpy_r_r43 = *(int64_t *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 << 1;
    cpy_r_r45 = (Py_ssize_t)cpy_r_r37 < (Py_ssize_t)cpy_r_r44;
    if (!cpy_r_r45) goto CPyL29;
    cpy_r_r46 = CPyList_GetItemUnsafe(cpy_r_r34, cpy_r_r35);
    if (likely(PyObject_TypeCheck(cpy_r_r46, CPyType_types___Type)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_callable", 1033, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r46);
        goto CPyL30;
    }
    cpy_r_ta = cpy_r_r47;
    cpy_r_r48 = CPyList_GetItemUnsafe(cpy_r_r36, cpy_r_r37);
    if (likely(PyObject_TypeCheck(cpy_r_r48, CPyType_types___Type)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "refine_callable", 1033, CPyStatic_suggestions___globals, "mypy.types.Type", cpy_r_r48);
        goto CPyL31;
    }
    cpy_r_sa = cpy_r_r49;
    cpy_r_r50 = CPyDef_suggestions___refine_type(cpy_r_ta, cpy_r_sa);
    CPy_DECREF(cpy_r_ta);
    CPy_DECREF(cpy_r_sa);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_callable", 1033, CPyStatic_suggestions___globals);
        goto CPyL30;
    }
    cpy_r_r51 = PyList_Append(cpy_r_r33, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_callable", 1033, CPyStatic_suggestions___globals);
        goto CPyL30;
    }
    cpy_r_r53 = cpy_r_r35 + 2;
    cpy_r_r35 = cpy_r_r53;
    cpy_r_r54 = cpy_r_r37 + 2;
    cpy_r_r37 = cpy_r_r54;
    goto CPyL18;
CPyL25: ;
    cpy_r_r55 = ((mypy___types___CallableTypeObject *)cpy_r_t)->_ret_type;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = ((mypy___types___CallableTypeObject *)cpy_r_s)->_ret_type;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = CPyDef_suggestions___refine_type(cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_callable", 1034, CPyStatic_suggestions___globals);
        goto CPyL32;
    }
    cpy_r_r58 = NULL;
    cpy_r_r59 = NULL;
    cpy_r_r60 = NULL;
    cpy_r_r61 = NULL;
    cpy_r_r62 = NULL;
    cpy_r_r63 = NULL;
    cpy_r_r64 = CPY_INT_TAG;
    cpy_r_r65 = CPY_INT_TAG;
    cpy_r_r66 = NULL;
    cpy_r_r67 = NULL;
    cpy_r_r68 = NULL;
    cpy_r_r69 = NULL;
    cpy_r_r70 = NULL;
    cpy_r_r71 = NULL;
    cpy_r_r72 = NULL;
    cpy_r_r73 = NULL;
    cpy_r_r74 = NULL;
    cpy_r_r75 = CPyDef_types___CallableType___copy_modified(cpy_r_t, cpy_r_r33, cpy_r_r58, cpy_r_r59, cpy_r_r57, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_r71, cpy_r_r72, cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "refine_callable", 1032, CPyStatic_suggestions___globals);
        goto CPyL28;
    }
    return cpy_r_r75;
CPyL28: ;
    cpy_r_r76 = NULL;
    return cpy_r_r76;
CPyL29: ;
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r36);
    goto CPyL25;
CPyL30: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    goto CPyL28;
CPyL31: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_ta);
    goto CPyL28;
CPyL32: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL28;
}

PyObject *CPyPy_suggestions___refine_callable(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t", "s", 0};
    static CPyArg_Parser parser = {"OO:refine_callable", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_t, &obj_s)) {
        return NULL;
    }
    PyObject *arg_t;
    if (likely(Py_TYPE(obj_t) == CPyType_types___CallableType))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_t); 
        goto fail;
    }
    PyObject *arg_s;
    if (likely(Py_TYPE(obj_s) == CPyType_types___CallableType))
        arg_s = obj_s;
    else {
        CPy_TypeError("mypy.types.CallableType", obj_s); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___refine_callable(arg_t, arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "refine_callable", 1018, CPyStatic_suggestions___globals);
    return NULL;
}

PyObject *CPyDef_suggestions___dedup(PyObject *cpy_r_old) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_new;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_x;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "dedup", 1042, CPyStatic_suggestions___globals);
        goto CPyL8;
    }
    cpy_r_new = cpy_r_r0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_old)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL7;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_old, cpy_r_r1);
    cpy_r_x = cpy_r_r6;
    cpy_r_r7 = PySequence_Contains(cpy_r_new, cpy_r_x);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/suggestions.py", "dedup", 1044, CPyStatic_suggestions___globals);
        goto CPyL9;
    }
    cpy_r_r9 = cpy_r_r7;
    cpy_r_r10 = cpy_r_r9 ^ 1;
    if (!cpy_r_r10) goto CPyL10;
    cpy_r_r11 = PyList_Append(cpy_r_new, cpy_r_x);
    CPy_DECREF(cpy_r_x);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/suggestions.py", "dedup", 1045, CPyStatic_suggestions___globals);
        goto CPyL11;
    }
CPyL6: ;
    cpy_r_r13 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r13;
    goto CPyL2;
CPyL7: ;
    return cpy_r_new;
CPyL8: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
CPyL9: ;
    CPy_DecRef(cpy_r_new);
    CPy_DecRef(cpy_r_x);
    goto CPyL8;
CPyL10: ;
    CPy_DECREF(cpy_r_x);
    goto CPyL6;
CPyL11: ;
    CPy_DecRef(cpy_r_new);
    goto CPyL8;
}

PyObject *CPyPy_suggestions___dedup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"old", 0};
    static CPyArg_Parser parser = {"O:dedup", kwlist, 0};
    PyObject *obj_old;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_old)) {
        return NULL;
    }
    PyObject *arg_old;
    if (likely(PyList_Check(obj_old)))
        arg_old = obj_old;
    else {
        CPy_TypeError("list", obj_old); 
        goto fail;
    }
    PyObject *retval = CPyDef_suggestions___dedup(arg_old);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/suggestions.py", "dedup", 1041, CPyStatic_suggestions___globals);
    return NULL;
}

char CPyDef_suggestions_____top_level__(void) {
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
    PyObject **cpy_r_r11;
    void *cpy_r_r13;
    void *cpy_r_r15;
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
    char cpy_r_r103;
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
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject **cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    int32_t cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    int32_t cpy_r_r152;
    char cpy_r_r153;
    PyObject **cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    int32_t cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject **cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    int32_t cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    int32_t cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    int32_t cpy_r_r205;
    char cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    int32_t cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    int32_t cpy_r_r213;
    char cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    int32_t cpy_r_r217;
    char cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    int32_t cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    int32_t cpy_r_r225;
    char cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    int32_t cpy_r_r229;
    char cpy_r_r230;
    PyObject **cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    int32_t cpy_r_r236;
    char cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    char cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    int32_t cpy_r_r252;
    char cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    int32_t cpy_r_r256;
    char cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    char cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    int32_t cpy_r_r269;
    char cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    int32_t cpy_r_r273;
    char cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    char cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    int32_t cpy_r_r286;
    char cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    int32_t cpy_r_r290;
    char cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject *cpy_r_r301;
    int32_t cpy_r_r302;
    char cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    int32_t cpy_r_r306;
    char cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    char cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    int32_t cpy_r_r325;
    char cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    int32_t cpy_r_r329;
    char cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject **cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    int32_t cpy_r_r341;
    char cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject **cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    int32_t cpy_r_r353;
    char cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    char cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    int32_t cpy_r_r369;
    char cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    int32_t cpy_r_r373;
    char cpy_r_r374;
    PyObject *cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject **cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    int32_t cpy_r_r386;
    char cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    char cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    int32_t cpy_r_r397;
    char cpy_r_r398;
    PyObject *cpy_r_r399;
    PyObject *cpy_r_r400;
    int32_t cpy_r_r401;
    char cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject **cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    int32_t cpy_r_r412;
    char cpy_r_r413;
    char cpy_r_r414;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", -1, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_suggestions___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 25, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_itertools;
    cpy_r_r10 = (PyObject **)&CPyModule_json;
    cpy_r_r11 = (PyObject **)&CPyModule_os;
    PyObject **cpy_r_r12[3] = {cpy_r_r9, cpy_r_r10, cpy_r_r11};
    cpy_r_r13 = (void *)&cpy_r_r12;
    int64_t cpy_r_r14[3] = {27, 28, 29};
    cpy_r_r15 = (void *)&cpy_r_r14;
    cpy_r_r16 = CPyStatics[9829]; /* (('itertools', 'itertools', 'itertools'),
                                     ('json', 'json', 'json'), ('os', 'os', 'os')) */
    cpy_r_r17 = CPyStatic_suggestions___globals;
    cpy_r_r18 = CPyStatics[6093]; /* 'mypy/suggestions.py' */
    cpy_r_r19 = CPyStatics[17]; /* '<module>' */
    cpy_r_r20 = CPyImport_ImportMany(cpy_r_r16, cpy_r_r13, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_r15);
    if (!cpy_r_r20) goto CPyL137;
    cpy_r_r21 = CPyStatics[9084]; /* ('contextmanager',) */
    cpy_r_r22 = CPyStatics[78]; /* 'contextlib' */
    cpy_r_r23 = CPyStatic_suggestions___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 30, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_contextlib = cpy_r_r24;
    CPy_INCREF(CPyModule_contextlib);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9830]; /* ('Callable', 'Iterator', 'NamedTuple', 'TypeVar', 'cast') */
    cpy_r_r26 = CPyStatics[21]; /* 'typing' */
    cpy_r_r27 = CPyStatic_suggestions___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 31, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_typing = cpy_r_r28;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9831]; /* ('TypedDict',) */
    cpy_r_r30 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r31 = CPyStatic_suggestions___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 32, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_typing_extensions = cpy_r_r32;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9595]; /* ('map_actuals_to_formals',) */
    cpy_r_r34 = CPyStatics[64]; /* 'mypy.argmap' */
    cpy_r_r35 = CPyStatic_suggestions___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 34, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___argmap = cpy_r_r36;
    CPy_INCREF(CPyModule_mypy___argmap);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9832]; /* ('Graph', 'State') */
    cpy_r_r38 = CPyStatics[238]; /* 'mypy.build' */
    cpy_r_r39 = CPyStatic_suggestions___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 35, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___build = cpy_r_r40;
    CPy_INCREF(CPyModule_mypy___build);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[9833]; /* ('has_any_type',) */
    cpy_r_r42 = CPyStatics[904]; /* 'mypy.checkexpr' */
    cpy_r_r43 = CPyStatic_suggestions___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 36, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___checkexpr = cpy_r_r44;
    CPy_INCREF(CPyModule_mypy___checkexpr);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[9431]; /* ('InvalidSourceList', 'SourceFinder') */
    cpy_r_r46 = CPyStatics[1991]; /* 'mypy.find_sources' */
    cpy_r_r47 = CPyStatic_suggestions___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 37, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___find_sources = cpy_r_r48;
    CPy_INCREF(CPyModule_mypy___find_sources);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[9834]; /* ('join_type_list',) */
    cpy_r_r50 = CPyStatics[92]; /* 'mypy.join' */
    cpy_r_r51 = CPyStatic_suggestions___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 38, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___join = cpy_r_r52;
    CPy_INCREF(CPyModule_mypy___join);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatics[9835]; /* ('meet_type_list',) */
    cpy_r_r54 = CPyStatics[932]; /* 'mypy.meet' */
    cpy_r_r55 = CPyStatic_suggestions___globals;
    cpy_r_r56 = CPyImport_ImportFromMany(cpy_r_r54, cpy_r_r53, cpy_r_r53, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 39, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___meet = cpy_r_r56;
    CPy_INCREF(CPyModule_mypy___meet);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r57 = CPyStatics[9433]; /* ('PYTHON_EXTENSIONS',) */
    cpy_r_r58 = CPyStatics[576]; /* 'mypy.modulefinder' */
    cpy_r_r59 = CPyStatic_suggestions___globals;
    cpy_r_r60 = CPyImport_ImportFromMany(cpy_r_r58, cpy_r_r57, cpy_r_r57, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 40, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___modulefinder = cpy_r_r60;
    CPy_INCREF(CPyModule_mypy___modulefinder);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r61 = CPyStatics[9836]; /* ('ARG_STAR', 'ARG_STAR2', 'ArgKind', 'CallExpr',
                                     'Decorator', 'Expression', 'FuncDef', 'MypyFile',
                                     'RefExpr', 'ReturnStmt', 'SymbolNode', 'SymbolTable',
                                     'TypeInfo', 'reverse_builtin_aliases') */
    cpy_r_r62 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r63 = CPyStatic_suggestions___globals;
    cpy_r_r64 = CPyImport_ImportFromMany(cpy_r_r62, cpy_r_r61, cpy_r_r61, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 41, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___nodes = cpy_r_r64;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r65 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r66 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r67 = CPyStatic_suggestions___globals;
    cpy_r_r68 = CPyImport_ImportFromMany(cpy_r_r66, cpy_r_r65, cpy_r_r65, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 57, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___options = cpy_r_r68;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r69 = CPyStatics[9837]; /* ('FunctionContext', 'MethodContext', 'Plugin') */
    cpy_r_r70 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r71 = CPyStatic_suggestions___globals;
    cpy_r_r72 = CPyImport_ImportFromMany(cpy_r_r70, cpy_r_r69, cpy_r_r69, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 58, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___plugin = cpy_r_r72;
    CPy_INCREF(CPyModule_mypy___plugin);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r73 = CPyStatics[9435]; /* ('FineGrainedBuildManager',) */
    cpy_r_r74 = CPyStatics[1999]; /* 'mypy.server.update' */
    cpy_r_r75 = CPyStatic_suggestions___globals;
    cpy_r_r76 = CPyImport_ImportFromMany(cpy_r_r74, cpy_r_r73, cpy_r_r73, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 59, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___server___update = cpy_r_r76;
    CPy_INCREF(CPyModule_mypy___server___update);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r77 = CPyStatics[9201]; /* ('state',) */
    cpy_r_r78 = CPyStatics[1020]; /* 'mypy.state' */
    cpy_r_r79 = CPyStatic_suggestions___globals;
    cpy_r_r80 = CPyImport_ImportFromMany(cpy_r_r78, cpy_r_r77, cpy_r_r77, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 60, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___state = cpy_r_r80;
    CPy_INCREF(CPyModule_mypy___state);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r81 = CPyStatics[9398]; /* ('TraverserVisitor',) */
    cpy_r_r82 = CPyStatics[1029]; /* 'mypy.traverser' */
    cpy_r_r83 = CPyStatic_suggestions___globals;
    cpy_r_r84 = CPyImport_ImportFromMany(cpy_r_r82, cpy_r_r81, cpy_r_r81, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 61, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___traverser = cpy_r_r84;
    CPy_INCREF(CPyModule_mypy___traverser);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r85 = CPyStatics[9357]; /* ('make_simplified_union',) */
    cpy_r_r86 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r87 = CPyStatic_suggestions___globals;
    cpy_r_r88 = CPyImport_ImportFromMany(cpy_r_r86, cpy_r_r85, cpy_r_r85, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 62, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___typeops = cpy_r_r88;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r89 = CPyStatics[9838]; /* ('AnyType', 'CallableType', 'FunctionLike', 'Instance',
                                     'NoneType', 'ProperType', 'TupleType', 'Type',
                                     'TypeAliasType', 'TypedDictType', 'TypeOfAny',
                                     'TypeStrVisitor', 'TypeTranslator', 'TypeVarType',
                                     'UninhabitedType', 'UnionType', 'get_proper_type') */
    cpy_r_r90 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r91 = CPyStatic_suggestions___globals;
    cpy_r_r92 = CPyImport_ImportFromMany(cpy_r_r90, cpy_r_r89, cpy_r_r89, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 63, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___types = cpy_r_r92;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r93 = CPyStatics[9839]; /* ('is_optional', 'remove_optional') */
    cpy_r_r94 = CPyStatics[1079]; /* 'mypy.types_utils' */
    cpy_r_r95 = CPyStatic_suggestions___globals;
    cpy_r_r96 = CPyImport_ImportFromMany(cpy_r_r94, cpy_r_r93, cpy_r_r93, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 82, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___types_utils = cpy_r_r96;
    CPy_INCREF(CPyModule_mypy___types_utils);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r97 = CPyStatics[9840]; /* ('split_target',) */
    cpy_r_r98 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r99 = CPyStatic_suggestions___globals;
    cpy_r_r100 = CPyImport_ImportFromMany(cpy_r_r98, cpy_r_r97, cpy_r_r97, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 83, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_mypy___util = cpy_r_r100;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r101 = CPyModule_typing;
    cpy_r_r102 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r103 = cpy_r_r101 != cpy_r_r102;
    if (cpy_r_r103) goto CPyL28;
    cpy_r_r104 = CPyStatics[21]; /* 'typing' */
    cpy_r_r105 = PyImport_Import(cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_typing = cpy_r_r105;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r105);
CPyL28: ;
    cpy_r_r106 = PyImport_GetModuleDict();
    cpy_r_r107 = CPyStatics[21]; /* 'typing' */
    cpy_r_r108 = CPyDict_GetItem(cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r109 = CPyStatics[620]; /* '_TypedDict' */
    cpy_r_r110 = CPyObject_GetAttr(cpy_r_r108, cpy_r_r109);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r111 = PyTuple_Pack(1, cpy_r_r110);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r112 = CPyModule_typing;
    cpy_r_r113 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r114 = cpy_r_r112 != cpy_r_r113;
    if (cpy_r_r114) goto CPyL34;
    cpy_r_r115 = CPyStatics[21]; /* 'typing' */
    cpy_r_r116 = PyImport_Import(cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals);
        goto CPyL138;
    }
    CPyModule_typing = cpy_r_r116;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r116);
CPyL34: ;
    cpy_r_r117 = PyImport_GetModuleDict();
    cpy_r_r118 = CPyStatics[21]; /* 'typing' */
    cpy_r_r119 = CPyDict_GetItem(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals);
        goto CPyL138;
    }
    cpy_r_r120 = CPyStatics[621]; /* '_TypedDictMeta' */
    cpy_r_r121 = CPyObject_GetAttr(cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals);
        goto CPyL138;
    }
    cpy_r_r122 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r123 = PyObject_HasAttr(cpy_r_r121, cpy_r_r122);
    if (!cpy_r_r123) goto CPyL41;
    cpy_r_r124 = CPyStatics[6096]; /* 'PyAnnotateSignature' */
    cpy_r_r125 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r126 = CPyObject_GetAttr(cpy_r_r121, cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals);
        goto CPyL139;
    }
    PyObject *cpy_r_r127[2] = {cpy_r_r124, cpy_r_r111};
    cpy_r_r128 = (PyObject **)&cpy_r_r127;
    cpy_r_r129 = _PyObject_Vectorcall(cpy_r_r126, cpy_r_r128, 2, 0);
    CPy_DECREF(cpy_r_r126);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals);
        goto CPyL139;
    }
    if (likely(PyDict_Check(cpy_r_r129)))
        cpy_r_r130 = cpy_r_r129;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals, "dict", cpy_r_r129);
        goto CPyL139;
    }
    cpy_r_r131 = cpy_r_r130;
    goto CPyL43;
CPyL41: ;
    cpy_r_r132 = PyDict_New();
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals);
        goto CPyL139;
    }
    cpy_r_r131 = cpy_r_r132;
CPyL43: ;
    cpy_r_r133 = PyDict_New();
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals);
        goto CPyL140;
    }
    cpy_r_r134 = (PyObject *)&PyType_Type;
    cpy_r_r135 = CPyStatics[4635]; /* 'return_type' */
    cpy_r_r136 = CPyDict_SetItem(cpy_r_r133, cpy_r_r135, cpy_r_r134);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 87, CPyStatic_suggestions___globals);
        goto CPyL141;
    }
    cpy_r_r138 = (PyObject *)&PyType_Type;
    cpy_r_r139 = CPyStatics[1125]; /* 'arg_types' */
    cpy_r_r140 = CPyDict_SetItem(cpy_r_r133, cpy_r_r139, cpy_r_r138);
    cpy_r_r141 = cpy_r_r140 >= 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 88, CPyStatic_suggestions___globals);
        goto CPyL141;
    }
    cpy_r_r142 = CPyStatics[6096]; /* 'PyAnnotateSignature' */
    cpy_r_r143 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r144 = CPyDict_SetItem(cpy_r_r131, cpy_r_r143, cpy_r_r133);
    CPy_DECREF(cpy_r_r133);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals);
        goto CPyL140;
    }
    cpy_r_r146 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r147 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r148 = CPyDict_SetItem(cpy_r_r131, cpy_r_r147, cpy_r_r146);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals);
        goto CPyL140;
    }
    cpy_r_r150 = CPyStatics[2002]; /* 'mypy.suggestions' */
    cpy_r_r151 = CPyStatics[619]; /* '__module__' */
    cpy_r_r152 = CPyDict_SetItem(cpy_r_r131, cpy_r_r151, cpy_r_r150);
    cpy_r_r153 = cpy_r_r152 >= 0;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals);
        goto CPyL140;
    }
    PyObject *cpy_r_r154[3] = {cpy_r_r142, cpy_r_r111, cpy_r_r131};
    cpy_r_r155 = (PyObject **)&cpy_r_r154;
    cpy_r_r156 = _PyObject_Vectorcall(cpy_r_r121, cpy_r_r155, 3, 0);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals);
        goto CPyL142;
    }
    CPy_DECREF(cpy_r_r111);
    CPy_DECREF(cpy_r_r131);
    CPyType_suggestions___PyAnnotateSignature = (PyTypeObject *)cpy_r_r156;
    CPy_INCREF(CPyType_suggestions___PyAnnotateSignature);
    cpy_r_r157 = CPyStatic_suggestions___globals;
    cpy_r_r158 = CPyStatics[6096]; /* 'PyAnnotateSignature' */
    cpy_r_r159 = CPyDict_SetItem(cpy_r_r157, cpy_r_r158, cpy_r_r156);
    CPy_DECREF(cpy_r_r156);
    cpy_r_r160 = cpy_r_r159 >= 0;
    if (unlikely(!cpy_r_r160)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 86, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r161 = (PyObject *)CPyType_suggestions___PyAnnotateSignature;
    cpy_r_r162 = CPyModule_typing;
    cpy_r_r163 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r164 = cpy_r_r162 != cpy_r_r163;
    if (cpy_r_r164) goto CPyL54;
    cpy_r_r165 = CPyStatics[21]; /* 'typing' */
    cpy_r_r166 = PyImport_Import(cpy_r_r165);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    CPyModule_typing = cpy_r_r166;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r166);
CPyL54: ;
    cpy_r_r167 = PyImport_GetModuleDict();
    cpy_r_r168 = CPyStatics[21]; /* 'typing' */
    cpy_r_r169 = CPyDict_GetItem(cpy_r_r167, cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r170 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r171 = CPyObject_GetAttr(cpy_r_r169, cpy_r_r170);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r172 = PyTuple_Pack(1, cpy_r_r171);
    CPy_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r173 = CPyModule_typing;
    cpy_r_r174 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r175 = cpy_r_r173 != cpy_r_r174;
    if (cpy_r_r175) goto CPyL60;
    cpy_r_r176 = CPyStatics[21]; /* 'typing' */
    cpy_r_r177 = PyImport_Import(cpy_r_r176);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals);
        goto CPyL143;
    }
    CPyModule_typing = cpy_r_r177;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r177);
CPyL60: ;
    cpy_r_r178 = PyImport_GetModuleDict();
    cpy_r_r179 = CPyStatics[21]; /* 'typing' */
    cpy_r_r180 = CPyDict_GetItem(cpy_r_r178, cpy_r_r179);
    if (unlikely(cpy_r_r180 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals);
        goto CPyL143;
    }
    cpy_r_r181 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r182 = CPyObject_GetAttr(cpy_r_r180, cpy_r_r181);
    CPy_DECREF(cpy_r_r180);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals);
        goto CPyL143;
    }
    cpy_r_r183 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r184 = PyObject_HasAttr(cpy_r_r182, cpy_r_r183);
    if (!cpy_r_r184) goto CPyL67;
    cpy_r_r185 = CPyStatics[6067]; /* 'Callsite' */
    cpy_r_r186 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r187 = CPyObject_GetAttr(cpy_r_r182, cpy_r_r186);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals);
        goto CPyL144;
    }
    PyObject *cpy_r_r188[2] = {cpy_r_r185, cpy_r_r172};
    cpy_r_r189 = (PyObject **)&cpy_r_r188;
    cpy_r_r190 = _PyObject_Vectorcall(cpy_r_r187, cpy_r_r189, 2, 0);
    CPy_DECREF(cpy_r_r187);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals);
        goto CPyL144;
    }
    if (likely(PyDict_Check(cpy_r_r190)))
        cpy_r_r191 = cpy_r_r190;
    else {
        CPy_TypeErrorTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals, "dict", cpy_r_r190);
        goto CPyL144;
    }
    cpy_r_r192 = cpy_r_r191;
    goto CPyL69;
CPyL67: ;
    cpy_r_r193 = PyDict_New();
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals);
        goto CPyL144;
    }
    cpy_r_r192 = cpy_r_r193;
CPyL69: ;
    cpy_r_r194 = PyDict_New();
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals);
        goto CPyL145;
    }
    cpy_r_r195 = (PyObject *)&PyUnicode_Type;
    cpy_r_r196 = CPyStatics[142]; /* 'path' */
    cpy_r_r197 = CPyDict_SetItem(cpy_r_r194, cpy_r_r196, cpy_r_r195);
    cpy_r_r198 = cpy_r_r197 >= 0;
    if (unlikely(!cpy_r_r198)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 92, CPyStatic_suggestions___globals);
        goto CPyL146;
    }
    cpy_r_r199 = (PyObject *)&PyLong_Type;
    cpy_r_r200 = CPyStatics[2272]; /* 'line' */
    cpy_r_r201 = CPyDict_SetItem(cpy_r_r194, cpy_r_r200, cpy_r_r199);
    cpy_r_r202 = cpy_r_r201 >= 0;
    if (unlikely(!cpy_r_r202)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 93, CPyStatic_suggestions___globals);
        goto CPyL146;
    }
    cpy_r_r203 = (PyObject *)&PyList_Type;
    cpy_r_r204 = CPyStatics[1610]; /* 'arg_kinds' */
    cpy_r_r205 = CPyDict_SetItem(cpy_r_r194, cpy_r_r204, cpy_r_r203);
    cpy_r_r206 = cpy_r_r205 >= 0;
    if (unlikely(!cpy_r_r206)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 94, CPyStatic_suggestions___globals);
        goto CPyL146;
    }
    cpy_r_r207 = (PyObject *)&PyList_Type;
    cpy_r_r208 = CPyStatics[4374]; /* 'callee_arg_names' */
    cpy_r_r209 = CPyDict_SetItem(cpy_r_r194, cpy_r_r208, cpy_r_r207);
    cpy_r_r210 = cpy_r_r209 >= 0;
    if (unlikely(!cpy_r_r210)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 95, CPyStatic_suggestions___globals);
        goto CPyL146;
    }
    cpy_r_r211 = (PyObject *)&PyList_Type;
    cpy_r_r212 = CPyStatics[1611]; /* 'arg_names' */
    cpy_r_r213 = CPyDict_SetItem(cpy_r_r194, cpy_r_r212, cpy_r_r211);
    cpy_r_r214 = cpy_r_r213 >= 0;
    if (unlikely(!cpy_r_r214)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 96, CPyStatic_suggestions___globals);
        goto CPyL146;
    }
    cpy_r_r215 = (PyObject *)&PyList_Type;
    cpy_r_r216 = CPyStatics[1125]; /* 'arg_types' */
    cpy_r_r217 = CPyDict_SetItem(cpy_r_r194, cpy_r_r216, cpy_r_r215);
    cpy_r_r218 = cpy_r_r217 >= 0;
    if (unlikely(!cpy_r_r218)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 97, CPyStatic_suggestions___globals);
        goto CPyL146;
    }
    cpy_r_r219 = CPyStatics[6067]; /* 'Callsite' */
    cpy_r_r220 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r221 = CPyDict_SetItem(cpy_r_r192, cpy_r_r220, cpy_r_r194);
    CPy_DECREF(cpy_r_r194);
    cpy_r_r222 = cpy_r_r221 >= 0;
    if (unlikely(!cpy_r_r222)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals);
        goto CPyL145;
    }
    cpy_r_r223 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r224 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r225 = CPyDict_SetItem(cpy_r_r192, cpy_r_r224, cpy_r_r223);
    cpy_r_r226 = cpy_r_r225 >= 0;
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals);
        goto CPyL145;
    }
    cpy_r_r227 = CPyStatics[2002]; /* 'mypy.suggestions' */
    cpy_r_r228 = CPyStatics[619]; /* '__module__' */
    cpy_r_r229 = CPyDict_SetItem(cpy_r_r192, cpy_r_r228, cpy_r_r227);
    cpy_r_r230 = cpy_r_r229 >= 0;
    if (unlikely(!cpy_r_r230)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals);
        goto CPyL145;
    }
    PyObject *cpy_r_r231[3] = {cpy_r_r219, cpy_r_r172, cpy_r_r192};
    cpy_r_r232 = (PyObject **)&cpy_r_r231;
    cpy_r_r233 = _PyObject_Vectorcall(cpy_r_r182, cpy_r_r232, 3, 0);
    CPy_DECREF(cpy_r_r182);
    if (unlikely(cpy_r_r233 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals);
        goto CPyL147;
    }
    CPy_DECREF(cpy_r_r172);
    CPy_DECREF(cpy_r_r192);
    CPyType_suggestions___Callsite = (PyTypeObject *)cpy_r_r233;
    CPy_INCREF(CPyType_suggestions___Callsite);
    cpy_r_r234 = CPyStatic_suggestions___globals;
    cpy_r_r235 = CPyStatics[6067]; /* 'Callsite' */
    cpy_r_r236 = CPyDict_SetItem(cpy_r_r234, cpy_r_r235, cpy_r_r233);
    CPy_DECREF(cpy_r_r233);
    cpy_r_r237 = cpy_r_r236 >= 0;
    if (unlikely(!cpy_r_r237)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 91, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r238 = (PyObject *)CPyType_suggestions___Callsite;
    cpy_r_r239 = (PyObject *)CPyType_plugin___Plugin;
    cpy_r_r240 = PyTuple_Pack(1, cpy_r_r239);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 100, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r241 = CPyStatics[2002]; /* 'mypy.suggestions' */
    cpy_r_r242 = (PyObject *)CPyType_suggestions___SuggestionPlugin_template;
    cpy_r_r243 = CPyType_FromTemplate(cpy_r_r242, cpy_r_r240, cpy_r_r241);
    CPy_DECREF(cpy_r_r240);
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 100, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r244 = CPyDef_suggestions___SuggestionPlugin_trait_vtable_setup();
    if (unlikely(cpy_r_r244 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", -1, CPyStatic_suggestions___globals);
        goto CPyL148;
    }
    cpy_r_r245 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r246 = CPyStatics[1629]; /* 'target' */
    cpy_r_r247 = CPyStatics[6097]; /* 'mystery_hits' */
    cpy_r_r248 = CPyStatics[1569]; /* 'python_version' */
    cpy_r_r249 = CPyStatics[4380]; /* '_modules' */
    cpy_r_r250 = CPyStatics[159]; /* 'options' */
    cpy_r_r251 = PyTuple_Pack(5, cpy_r_r246, cpy_r_r247, cpy_r_r248, cpy_r_r249, cpy_r_r250);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 100, CPyStatic_suggestions___globals);
        goto CPyL148;
    }
    cpy_r_r252 = PyObject_SetAttr(cpy_r_r243, cpy_r_r245, cpy_r_r251);
    CPy_DECREF(cpy_r_r251);
    cpy_r_r253 = cpy_r_r252 >= 0;
    if (unlikely(!cpy_r_r253)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 100, CPyStatic_suggestions___globals);
        goto CPyL148;
    }
    CPyType_suggestions___SuggestionPlugin = (PyTypeObject *)cpy_r_r243;
    CPy_INCREF(CPyType_suggestions___SuggestionPlugin);
    cpy_r_r254 = CPyStatic_suggestions___globals;
    cpy_r_r255 = CPyStatics[6098]; /* 'SuggestionPlugin' */
    cpy_r_r256 = CPyDict_SetItem(cpy_r_r254, cpy_r_r255, cpy_r_r243);
    CPy_DECREF(cpy_r_r243);
    cpy_r_r257 = cpy_r_r256 >= 0;
    if (unlikely(!cpy_r_r257)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 100, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r258 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r259 = PyTuple_Pack(1, cpy_r_r258);
    if (unlikely(cpy_r_r259 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 140, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r260 = CPyStatics[2002]; /* 'mypy.suggestions' */
    cpy_r_r261 = (PyObject *)CPyType_suggestions___ReturnFinder_template;
    cpy_r_r262 = CPyType_FromTemplate(cpy_r_r261, cpy_r_r259, cpy_r_r260);
    CPy_DECREF(cpy_r_r259);
    if (unlikely(cpy_r_r262 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 140, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r263 = CPyDef_suggestions___ReturnFinder_trait_vtable_setup();
    if (unlikely(cpy_r_r263 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", -1, CPyStatic_suggestions___globals);
        goto CPyL149;
    }
    cpy_r_r264 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r265 = CPyStatics[5484]; /* 'typemap' */
    cpy_r_r266 = CPyStatics[1105]; /* 'return_types' */
    cpy_r_r267 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r268 = PyTuple_Pack(3, cpy_r_r265, cpy_r_r266, cpy_r_r267);
    if (unlikely(cpy_r_r268 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 140, CPyStatic_suggestions___globals);
        goto CPyL149;
    }
    cpy_r_r269 = PyObject_SetAttr(cpy_r_r262, cpy_r_r264, cpy_r_r268);
    CPy_DECREF(cpy_r_r268);
    cpy_r_r270 = cpy_r_r269 >= 0;
    if (unlikely(!cpy_r_r270)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 140, CPyStatic_suggestions___globals);
        goto CPyL149;
    }
    CPyType_suggestions___ReturnFinder = (PyTypeObject *)cpy_r_r262;
    CPy_INCREF(CPyType_suggestions___ReturnFinder);
    cpy_r_r271 = CPyStatic_suggestions___globals;
    cpy_r_r272 = CPyStatics[6099]; /* 'ReturnFinder' */
    cpy_r_r273 = CPyDict_SetItem(cpy_r_r271, cpy_r_r272, cpy_r_r262);
    CPy_DECREF(cpy_r_r262);
    cpy_r_r274 = cpy_r_r273 >= 0;
    if (unlikely(!cpy_r_r274)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 140, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r275 = (PyObject *)CPyType_traverser___TraverserVisitor;
    cpy_r_r276 = PyTuple_Pack(1, cpy_r_r275);
    if (unlikely(cpy_r_r276 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 163, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r277 = CPyStatics[2002]; /* 'mypy.suggestions' */
    cpy_r_r278 = (PyObject *)CPyType_suggestions___ArgUseFinder_template;
    cpy_r_r279 = CPyType_FromTemplate(cpy_r_r278, cpy_r_r276, cpy_r_r277);
    CPy_DECREF(cpy_r_r276);
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 163, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r280 = CPyDef_suggestions___ArgUseFinder_trait_vtable_setup();
    if (unlikely(cpy_r_r280 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", -1, CPyStatic_suggestions___globals);
        goto CPyL150;
    }
    cpy_r_r281 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r282 = CPyStatics[5484]; /* 'typemap' */
    cpy_r_r283 = CPyStatics[1125]; /* 'arg_types' */
    cpy_r_r284 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r285 = PyTuple_Pack(3, cpy_r_r282, cpy_r_r283, cpy_r_r284);
    if (unlikely(cpy_r_r285 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 163, CPyStatic_suggestions___globals);
        goto CPyL150;
    }
    cpy_r_r286 = PyObject_SetAttr(cpy_r_r279, cpy_r_r281, cpy_r_r285);
    CPy_DECREF(cpy_r_r285);
    cpy_r_r287 = cpy_r_r286 >= 0;
    if (unlikely(!cpy_r_r287)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 163, CPyStatic_suggestions___globals);
        goto CPyL150;
    }
    CPyType_suggestions___ArgUseFinder = (PyTypeObject *)cpy_r_r279;
    CPy_INCREF(CPyType_suggestions___ArgUseFinder);
    cpy_r_r288 = CPyStatic_suggestions___globals;
    cpy_r_r289 = CPyStatics[6100]; /* 'ArgUseFinder' */
    cpy_r_r290 = CPyDict_SetItem(cpy_r_r288, cpy_r_r289, cpy_r_r279);
    CPy_DECREF(cpy_r_r279);
    cpy_r_r291 = cpy_r_r290 >= 0;
    if (unlikely(!cpy_r_r291)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 163, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r292 = CPyModule_builtins;
    cpy_r_r293 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r294 = CPyObject_GetAttr(cpy_r_r292, cpy_r_r293);
    if (unlikely(cpy_r_r294 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 213, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r295 = PyTuple_Pack(1, cpy_r_r294);
    CPy_DECREF(cpy_r_r294);
    if (unlikely(cpy_r_r295 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 213, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r296 = CPyStatics[2002]; /* 'mypy.suggestions' */
    cpy_r_r297 = (PyObject *)CPyType_suggestions___SuggestionFailure_template;
    cpy_r_r298 = CPyType_FromTemplate(cpy_r_r297, cpy_r_r295, cpy_r_r296);
    CPy_DECREF(cpy_r_r295);
    if (unlikely(cpy_r_r298 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 213, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r299 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r300 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r301 = PyTuple_Pack(1, cpy_r_r300);
    if (unlikely(cpy_r_r301 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 213, CPyStatic_suggestions___globals);
        goto CPyL151;
    }
    cpy_r_r302 = PyObject_SetAttr(cpy_r_r298, cpy_r_r299, cpy_r_r301);
    CPy_DECREF(cpy_r_r301);
    cpy_r_r303 = cpy_r_r302 >= 0;
    if (unlikely(!cpy_r_r303)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 213, CPyStatic_suggestions___globals);
        goto CPyL151;
    }
    CPyType_suggestions___SuggestionFailure = (PyTypeObject *)cpy_r_r298;
    CPy_INCREF(CPyType_suggestions___SuggestionFailure);
    cpy_r_r304 = CPyStatic_suggestions___globals;
    cpy_r_r305 = CPyStatics[2001]; /* 'SuggestionFailure' */
    cpy_r_r306 = CPyDict_SetItem(cpy_r_r304, cpy_r_r305, cpy_r_r298);
    CPy_DECREF(cpy_r_r298);
    cpy_r_r307 = cpy_r_r306 >= 0;
    if (unlikely(!cpy_r_r307)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 213, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r308 = NULL;
    cpy_r_r309 = CPyStatics[2002]; /* 'mypy.suggestions' */
    cpy_r_r310 = (PyObject *)CPyType_suggestions___SuggestionEngine_template;
    cpy_r_r311 = CPyType_FromTemplate(cpy_r_r310, cpy_r_r308, cpy_r_r309);
    if (unlikely(cpy_r_r311 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 232, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r312 = CPyDef_suggestions___SuggestionEngine_trait_vtable_setup();
    if (unlikely(cpy_r_r312 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", -1, CPyStatic_suggestions___globals);
        goto CPyL152;
    }
    cpy_r_r313 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r314 = CPyStatics[6101]; /* 'fgmanager' */
    cpy_r_r315 = CPyStatics[606]; /* 'manager' */
    cpy_r_r316 = CPyStatics[170]; /* 'plugin' */
    cpy_r_r317 = CPyStatics[607]; /* 'graph' */
    cpy_r_r318 = CPyStatics[2670]; /* 'finder' */
    cpy_r_r319 = CPyStatics[6102]; /* 'give_json' */
    cpy_r_r320 = CPyStatics[1715]; /* 'no_errors' */
    cpy_r_r321 = CPyStatics[1717]; /* 'flex_any' */
    cpy_r_r322 = CPyStatics[1719]; /* 'max_guesses' */
    cpy_r_r323 = CPyStatics[1718]; /* 'use_fixme' */
    cpy_r_r324 = PyTuple_Pack(10, cpy_r_r314, cpy_r_r315, cpy_r_r316, cpy_r_r317, cpy_r_r318, cpy_r_r319, cpy_r_r320, cpy_r_r321, cpy_r_r322, cpy_r_r323);
    if (unlikely(cpy_r_r324 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 232, CPyStatic_suggestions___globals);
        goto CPyL152;
    }
    cpy_r_r325 = PyObject_SetAttr(cpy_r_r311, cpy_r_r313, cpy_r_r324);
    CPy_DECREF(cpy_r_r324);
    cpy_r_r326 = cpy_r_r325 >= 0;
    if (unlikely(!cpy_r_r326)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 232, CPyStatic_suggestions___globals);
        goto CPyL152;
    }
    CPyType_suggestions___SuggestionEngine = (PyTypeObject *)cpy_r_r311;
    CPy_INCREF(CPyType_suggestions___SuggestionEngine);
    cpy_r_r327 = CPyStatic_suggestions___globals;
    cpy_r_r328 = CPyStatics[2000]; /* 'SuggestionEngine' */
    cpy_r_r329 = CPyDict_SetItem(cpy_r_r327, cpy_r_r328, cpy_r_r311);
    CPy_DECREF(cpy_r_r311);
    cpy_r_r330 = cpy_r_r329 >= 0;
    if (unlikely(!cpy_r_r330)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 232, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r331 = (PyObject *)CPyType_suggestions___SuggestionEngine;
    cpy_r_r332 = CPyStatics[6068]; /* 'restore_after' */
    cpy_r_r333 = CPyObject_GetAttr(cpy_r_r331, cpy_r_r332);
    if (unlikely(cpy_r_r333 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 290, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r334 = CPyStatic_suggestions___globals;
    cpy_r_r335 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r336 = CPyDict_GetItem(cpy_r_r334, cpy_r_r335);
    if (unlikely(cpy_r_r336 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 289, CPyStatic_suggestions___globals);
        goto CPyL153;
    }
    PyObject *cpy_r_r337[1] = {cpy_r_r333};
    cpy_r_r338 = (PyObject **)&cpy_r_r337;
    cpy_r_r339 = _PyObject_Vectorcall(cpy_r_r336, cpy_r_r338, 1, 0);
    CPy_DECREF(cpy_r_r336);
    if (unlikely(cpy_r_r339 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 290, CPyStatic_suggestions___globals);
        goto CPyL153;
    }
    CPy_DECREF(cpy_r_r333);
    cpy_r_r340 = CPyStatics[6068]; /* 'restore_after' */
    cpy_r_r341 = PyObject_SetAttr(cpy_r_r331, cpy_r_r340, cpy_r_r339);
    CPy_DECREF(cpy_r_r339);
    cpy_r_r342 = cpy_r_r341 >= 0;
    if (unlikely(!cpy_r_r342)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 290, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r343 = (PyObject *)CPyType_suggestions___SuggestionEngine;
    cpy_r_r344 = CPyStatics[6069]; /* 'with_export_types' */
    cpy_r_r345 = CPyObject_GetAttr(cpy_r_r343, cpy_r_r344);
    if (unlikely(cpy_r_r345 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 301, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r346 = CPyStatic_suggestions___globals;
    cpy_r_r347 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r348 = CPyDict_GetItem(cpy_r_r346, cpy_r_r347);
    if (unlikely(cpy_r_r348 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 300, CPyStatic_suggestions___globals);
        goto CPyL154;
    }
    PyObject *cpy_r_r349[1] = {cpy_r_r345};
    cpy_r_r350 = (PyObject **)&cpy_r_r349;
    cpy_r_r351 = _PyObject_Vectorcall(cpy_r_r348, cpy_r_r350, 1, 0);
    CPy_DECREF(cpy_r_r348);
    if (unlikely(cpy_r_r351 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 301, CPyStatic_suggestions___globals);
        goto CPyL154;
    }
    CPy_DECREF(cpy_r_r345);
    cpy_r_r352 = CPyStatics[6069]; /* 'with_export_types' */
    cpy_r_r353 = PyObject_SetAttr(cpy_r_r343, cpy_r_r352, cpy_r_r351);
    CPy_DECREF(cpy_r_r351);
    cpy_r_r354 = cpy_r_r353 >= 0;
    if (unlikely(!cpy_r_r354)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 301, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r355 = (PyObject *)CPyType_types___TypeStrVisitor;
    cpy_r_r356 = PyTuple_Pack(1, cpy_r_r355);
    if (unlikely(cpy_r_r356 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 808, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r357 = CPyStatics[2002]; /* 'mypy.suggestions' */
    cpy_r_r358 = (PyObject *)CPyType_suggestions___TypeFormatter_template;
    cpy_r_r359 = CPyType_FromTemplate(cpy_r_r358, cpy_r_r356, cpy_r_r357);
    CPy_DECREF(cpy_r_r356);
    if (unlikely(cpy_r_r359 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 808, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r360 = CPyDef_suggestions___TypeFormatter_trait_vtable_setup();
    if (unlikely(cpy_r_r360 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", -1, CPyStatic_suggestions___globals);
        goto CPyL155;
    }
    cpy_r_r361 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r362 = CPyStatics[408]; /* 'module' */
    cpy_r_r363 = CPyStatics[607]; /* 'graph' */
    cpy_r_r364 = CPyStatics[5570]; /* 'id_mapper' */
    cpy_r_r365 = CPyStatics[5733]; /* 'any_as_dots' */
    cpy_r_r366 = CPyStatics[159]; /* 'options' */
    cpy_r_r367 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r368 = PyTuple_Pack(6, cpy_r_r362, cpy_r_r363, cpy_r_r364, cpy_r_r365, cpy_r_r366, cpy_r_r367);
    if (unlikely(cpy_r_r368 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 808, CPyStatic_suggestions___globals);
        goto CPyL155;
    }
    cpy_r_r369 = PyObject_SetAttr(cpy_r_r359, cpy_r_r361, cpy_r_r368);
    CPy_DECREF(cpy_r_r368);
    cpy_r_r370 = cpy_r_r369 >= 0;
    if (unlikely(!cpy_r_r370)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 808, CPyStatic_suggestions___globals);
        goto CPyL155;
    }
    CPyType_suggestions___TypeFormatter = (PyTypeObject *)cpy_r_r359;
    CPy_INCREF(CPyType_suggestions___TypeFormatter);
    cpy_r_r371 = CPyStatic_suggestions___globals;
    cpy_r_r372 = CPyStatics[6103]; /* 'TypeFormatter' */
    cpy_r_r373 = CPyDict_SetItem(cpy_r_r371, cpy_r_r372, cpy_r_r359);
    CPy_DECREF(cpy_r_r359);
    cpy_r_r374 = cpy_r_r373 >= 0;
    if (unlikely(!cpy_r_r374)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 808, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r375 = CPyStatics[6104]; /* 'TType' */
    cpy_r_r376 = (PyObject *)CPyType_types___Type;
    cpy_r_r377 = CPyStatic_suggestions___globals;
    cpy_r_r378 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r379 = CPyDict_GetItem(cpy_r_r377, cpy_r_r378);
    if (unlikely(cpy_r_r379 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 891, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    PyObject *cpy_r_r380[2] = {cpy_r_r375, cpy_r_r376};
    cpy_r_r381 = (PyObject **)&cpy_r_r380;
    cpy_r_r382 = CPyStatics[9381]; /* ('bound',) */
    cpy_r_r383 = _PyObject_Vectorcall(cpy_r_r379, cpy_r_r381, 1, cpy_r_r382);
    CPy_DECREF(cpy_r_r379);
    if (unlikely(cpy_r_r383 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 891, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r384 = CPyStatic_suggestions___globals;
    cpy_r_r385 = CPyStatics[6104]; /* 'TType' */
    cpy_r_r386 = CPyDict_SetItem(cpy_r_r384, cpy_r_r385, cpy_r_r383);
    CPy_DECREF(cpy_r_r383);
    cpy_r_r387 = cpy_r_r386 >= 0;
    if (unlikely(!cpy_r_r387)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 891, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r388 = (PyObject *)CPyType_type_visitor___TypeTranslator;
    cpy_r_r389 = PyTuple_Pack(1, cpy_r_r388);
    if (unlikely(cpy_r_r389 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 903, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r390 = CPyStatics[2002]; /* 'mypy.suggestions' */
    cpy_r_r391 = (PyObject *)CPyType_suggestions___MakeSuggestionAny_template;
    cpy_r_r392 = CPyType_FromTemplate(cpy_r_r391, cpy_r_r389, cpy_r_r390);
    CPy_DECREF(cpy_r_r389);
    if (unlikely(cpy_r_r392 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 903, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r393 = CPyDef_suggestions___MakeSuggestionAny_trait_vtable_setup();
    if (unlikely(cpy_r_r393 == 2)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", -1, CPyStatic_suggestions___globals);
        goto CPyL156;
    }
    cpy_r_r394 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r395 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r396 = PyTuple_Pack(1, cpy_r_r395);
    if (unlikely(cpy_r_r396 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 903, CPyStatic_suggestions___globals);
        goto CPyL156;
    }
    cpy_r_r397 = PyObject_SetAttr(cpy_r_r392, cpy_r_r394, cpy_r_r396);
    CPy_DECREF(cpy_r_r396);
    cpy_r_r398 = cpy_r_r397 >= 0;
    if (unlikely(!cpy_r_r398)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 903, CPyStatic_suggestions___globals);
        goto CPyL156;
    }
    CPyType_suggestions___MakeSuggestionAny = (PyTypeObject *)cpy_r_r392;
    CPy_INCREF(CPyType_suggestions___MakeSuggestionAny);
    cpy_r_r399 = CPyStatic_suggestions___globals;
    cpy_r_r400 = CPyStatics[6105]; /* 'MakeSuggestionAny' */
    cpy_r_r401 = CPyDict_SetItem(cpy_r_r399, cpy_r_r400, cpy_r_r392);
    CPy_DECREF(cpy_r_r392);
    cpy_r_r402 = cpy_r_r401 >= 0;
    if (unlikely(!cpy_r_r402)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 903, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r403 = CPyStatics[1088]; /* 'T' */
    cpy_r_r404 = CPyStatic_suggestions___globals;
    cpy_r_r405 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r406 = CPyDict_GetItem(cpy_r_r404, cpy_r_r405);
    if (unlikely(cpy_r_r406 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 1038, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    PyObject *cpy_r_r407[1] = {cpy_r_r403};
    cpy_r_r408 = (PyObject **)&cpy_r_r407;
    cpy_r_r409 = _PyObject_Vectorcall(cpy_r_r406, cpy_r_r408, 1, 0);
    CPy_DECREF(cpy_r_r406);
    if (unlikely(cpy_r_r409 == NULL)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 1038, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    cpy_r_r410 = CPyStatic_suggestions___globals;
    cpy_r_r411 = CPyStatics[1088]; /* 'T' */
    cpy_r_r412 = CPyDict_SetItem(cpy_r_r410, cpy_r_r411, cpy_r_r409);
    CPy_DECREF(cpy_r_r409);
    cpy_r_r413 = cpy_r_r412 >= 0;
    if (unlikely(!cpy_r_r413)) {
        CPy_AddTraceback("mypy/suggestions.py", "<module>", 1038, CPyStatic_suggestions___globals);
        goto CPyL137;
    }
    return 1;
CPyL137: ;
    cpy_r_r414 = 2;
    return cpy_r_r414;
CPyL138: ;
    CPy_DecRef(cpy_r_r111);
    goto CPyL137;
CPyL139: ;
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r121);
    goto CPyL137;
CPyL140: ;
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_r131);
    goto CPyL137;
CPyL141: ;
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r133);
    goto CPyL137;
CPyL142: ;
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r131);
    goto CPyL137;
CPyL143: ;
    CPy_DecRef(cpy_r_r172);
    goto CPyL137;
CPyL144: ;
    CPy_DecRef(cpy_r_r172);
    CPy_DecRef(cpy_r_r182);
    goto CPyL137;
CPyL145: ;
    CPy_DecRef(cpy_r_r172);
    CPy_DecRef(cpy_r_r182);
    CPy_DecRef(cpy_r_r192);
    goto CPyL137;
CPyL146: ;
    CPy_DecRef(cpy_r_r172);
    CPy_DecRef(cpy_r_r182);
    CPy_DecRef(cpy_r_r192);
    CPy_DecRef(cpy_r_r194);
    goto CPyL137;
CPyL147: ;
    CPy_DecRef(cpy_r_r172);
    CPy_DecRef(cpy_r_r192);
    goto CPyL137;
CPyL148: ;
    CPy_DecRef(cpy_r_r243);
    goto CPyL137;
CPyL149: ;
    CPy_DecRef(cpy_r_r262);
    goto CPyL137;
CPyL150: ;
    CPy_DecRef(cpy_r_r279);
    goto CPyL137;
CPyL151: ;
    CPy_DecRef(cpy_r_r298);
    goto CPyL137;
CPyL152: ;
    CPy_DecRef(cpy_r_r311);
    goto CPyL137;
CPyL153: ;
    CPy_DecRef(cpy_r_r333);
    goto CPyL137;
CPyL154: ;
    CPy_DecRef(cpy_r_r345);
    goto CPyL137;
CPyL155: ;
    CPy_DecRef(cpy_r_r359);
    goto CPyL137;
CPyL156: ;
    CPy_DecRef(cpy_r_r392);
    goto CPyL137;
}
