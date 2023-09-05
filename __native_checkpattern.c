#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
checkpattern___PatternChecker_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyMemberDef checkpattern___PatternChecker_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___checkpattern___PatternCheckerObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___checkpattern___PatternCheckerObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *checkpattern___PatternChecker_setup(PyTypeObject *type);
PyObject *CPyDef_checkpattern___PatternChecker(PyObject *cpy_r_chk, PyObject *cpy_r_msg, PyObject *cpy_r_plugin, PyObject *cpy_r_options);

static PyObject *
checkpattern___PatternChecker_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_checkpattern___PatternChecker) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = checkpattern___PatternChecker_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_checkpattern___PatternChecker_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
checkpattern___PatternChecker_traverse(mypy___checkpattern___PatternCheckerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_chk);
    Py_VISIT(self->_msg);
    Py_VISIT(self->_plugin);
    Py_VISIT(self->_subject);
    Py_VISIT(self->_subject_type);
    Py_VISIT(self->_type_context);
    Py_VISIT(self->_self_match_types);
    Py_VISIT(self->_non_sequence_match_types);
    Py_VISIT(self->_options);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___checkpattern___PatternCheckerObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___checkpattern___PatternCheckerObject))));
    return 0;
}

static int
checkpattern___PatternChecker_clear(mypy___checkpattern___PatternCheckerObject *self)
{
    Py_CLEAR(self->_chk);
    Py_CLEAR(self->_msg);
    Py_CLEAR(self->_plugin);
    Py_CLEAR(self->_subject);
    Py_CLEAR(self->_subject_type);
    Py_CLEAR(self->_type_context);
    Py_CLEAR(self->_self_match_types);
    Py_CLEAR(self->_non_sequence_match_types);
    Py_CLEAR(self->_options);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___checkpattern___PatternCheckerObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___checkpattern___PatternCheckerObject))));
    return 0;
}

static void
checkpattern___PatternChecker_dealloc(mypy___checkpattern___PatternCheckerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, checkpattern___PatternChecker_dealloc)
    checkpattern___PatternChecker_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem checkpattern___PatternChecker_vtable[24];
static CPyVTableItem checkpattern___PatternChecker_mypy___visitor___PatternVisitor_trait_vtable[8];
static size_t checkpattern___PatternChecker_mypy___visitor___PatternVisitor_offset_table[1];
static bool
CPyDef_checkpattern___PatternChecker_trait_vtable_setup(void)
{
    CPyVTableItem checkpattern___PatternChecker_mypy___visitor___PatternVisitor_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___visit_as_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___visit_or_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___visit_value_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___visit_singleton_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___visit_sequence_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___visit_starred_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___visit_mapping_pattern__PatternVisitor_glue,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___visit_class_pattern__PatternVisitor_glue,
    };
    memcpy(checkpattern___PatternChecker_mypy___visitor___PatternVisitor_trait_vtable, checkpattern___PatternChecker_mypy___visitor___PatternVisitor_trait_vtable_scratch, sizeof(checkpattern___PatternChecker_mypy___visitor___PatternVisitor_trait_vtable));
    size_t checkpattern___PatternChecker_mypy___visitor___PatternVisitor_offset_table_scratch[] = {
        0
    };
    memcpy(checkpattern___PatternChecker_mypy___visitor___PatternVisitor_offset_table, checkpattern___PatternChecker_mypy___visitor___PatternVisitor_offset_table_scratch, sizeof(checkpattern___PatternChecker_mypy___visitor___PatternVisitor_offset_table));
    CPyVTableItem checkpattern___PatternChecker_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_mypy___visitor___PatternVisitor, (CPyVTableItem)checkpattern___PatternChecker_mypy___visitor___PatternVisitor_trait_vtable, (CPyVTableItem)checkpattern___PatternChecker_mypy___visitor___PatternVisitor_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker_____init__,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___accept,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___visit_as_pattern,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___visit_or_pattern,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___visit_value_pattern,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___visit_singleton_pattern,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___visit_sequence_pattern,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___get_sequence_type,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___contract_starred_pattern_types,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___expand_starred_pattern_types,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___visit_starred_pattern,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___visit_mapping_pattern,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___get_mapping_item_type,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___get_simple_mapping_item_type,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___visit_class_pattern,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___should_self_match,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___can_match_sequence,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___generate_types_from_names,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___update_type_map,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___construct_sequence_child,
        (CPyVTableItem)CPyDef_checkpattern___PatternChecker___early_non_match,
    };
    memcpy(checkpattern___PatternChecker_vtable, checkpattern___PatternChecker_vtable_scratch, sizeof(checkpattern___PatternChecker_vtable));
    return 1;
}

static PyObject *
checkpattern___PatternChecker_get_chk(mypy___checkpattern___PatternCheckerObject *self, void *closure);
static int
checkpattern___PatternChecker_set_chk(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure);
static PyObject *
checkpattern___PatternChecker_get_msg(mypy___checkpattern___PatternCheckerObject *self, void *closure);
static int
checkpattern___PatternChecker_set_msg(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure);
static PyObject *
checkpattern___PatternChecker_get_plugin(mypy___checkpattern___PatternCheckerObject *self, void *closure);
static int
checkpattern___PatternChecker_set_plugin(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure);
static PyObject *
checkpattern___PatternChecker_get_subject(mypy___checkpattern___PatternCheckerObject *self, void *closure);
static int
checkpattern___PatternChecker_set_subject(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure);
static PyObject *
checkpattern___PatternChecker_get_subject_type(mypy___checkpattern___PatternCheckerObject *self, void *closure);
static int
checkpattern___PatternChecker_set_subject_type(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure);
static PyObject *
checkpattern___PatternChecker_get_type_context(mypy___checkpattern___PatternCheckerObject *self, void *closure);
static int
checkpattern___PatternChecker_set_type_context(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure);
static PyObject *
checkpattern___PatternChecker_get_self_match_types(mypy___checkpattern___PatternCheckerObject *self, void *closure);
static int
checkpattern___PatternChecker_set_self_match_types(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure);
static PyObject *
checkpattern___PatternChecker_get_non_sequence_match_types(mypy___checkpattern___PatternCheckerObject *self, void *closure);
static int
checkpattern___PatternChecker_set_non_sequence_match_types(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure);
static PyObject *
checkpattern___PatternChecker_get_options(mypy___checkpattern___PatternCheckerObject *self, void *closure);
static int
checkpattern___PatternChecker_set_options(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure);

static PyGetSetDef checkpattern___PatternChecker_getseters[] = {
    {"chk",
     (getter)checkpattern___PatternChecker_get_chk, (setter)checkpattern___PatternChecker_set_chk,
     NULL, NULL},
    {"msg",
     (getter)checkpattern___PatternChecker_get_msg, (setter)checkpattern___PatternChecker_set_msg,
     NULL, NULL},
    {"plugin",
     (getter)checkpattern___PatternChecker_get_plugin, (setter)checkpattern___PatternChecker_set_plugin,
     NULL, NULL},
    {"subject",
     (getter)checkpattern___PatternChecker_get_subject, (setter)checkpattern___PatternChecker_set_subject,
     NULL, NULL},
    {"subject_type",
     (getter)checkpattern___PatternChecker_get_subject_type, (setter)checkpattern___PatternChecker_set_subject_type,
     NULL, NULL},
    {"type_context",
     (getter)checkpattern___PatternChecker_get_type_context, (setter)checkpattern___PatternChecker_set_type_context,
     NULL, NULL},
    {"self_match_types",
     (getter)checkpattern___PatternChecker_get_self_match_types, (setter)checkpattern___PatternChecker_set_self_match_types,
     NULL, NULL},
    {"non_sequence_match_types",
     (getter)checkpattern___PatternChecker_get_non_sequence_match_types, (setter)checkpattern___PatternChecker_set_non_sequence_match_types,
     NULL, NULL},
    {"options",
     (getter)checkpattern___PatternChecker_get_options, (setter)checkpattern___PatternChecker_set_options,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef checkpattern___PatternChecker_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_checkpattern___PatternChecker_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_as_pattern",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___visit_as_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_or_pattern",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___visit_or_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_value_pattern",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___visit_value_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_singleton_pattern",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___visit_singleton_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_sequence_pattern",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___visit_sequence_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_sequence_type",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___get_sequence_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"contract_starred_pattern_types",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___contract_starred_pattern_types,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"expand_starred_pattern_types",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___expand_starred_pattern_types,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_starred_pattern",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___visit_starred_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_mapping_pattern",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___visit_mapping_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_mapping_item_type",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___get_mapping_item_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_simple_mapping_item_type",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___get_simple_mapping_item_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"visit_class_pattern",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___visit_class_pattern,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"should_self_match",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___should_self_match,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"can_match_sequence",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___can_match_sequence,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"generate_types_from_names",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___generate_types_from_names,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"update_type_map",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___update_type_map,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"construct_sequence_child",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___construct_sequence_child,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"early_non_match",
     (PyCFunction)CPyPy_checkpattern___PatternChecker___early_non_match,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_checkpattern___PatternChecker_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "PatternChecker",
    .tp_new = checkpattern___PatternChecker_new,
    .tp_dealloc = (destructor)checkpattern___PatternChecker_dealloc,
    .tp_traverse = (traverseproc)checkpattern___PatternChecker_traverse,
    .tp_clear = (inquiry)checkpattern___PatternChecker_clear,
    .tp_getset = checkpattern___PatternChecker_getseters,
    .tp_methods = checkpattern___PatternChecker_methods,
    .tp_init = checkpattern___PatternChecker_init,
    .tp_members = checkpattern___PatternChecker_members,
    .tp_basicsize = sizeof(mypy___checkpattern___PatternCheckerObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___checkpattern___PatternCheckerObject),
    .tp_weaklistoffset = sizeof(mypy___checkpattern___PatternCheckerObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_checkpattern___PatternChecker_template = &CPyType_checkpattern___PatternChecker_template_;

static PyObject *
checkpattern___PatternChecker_setup(PyTypeObject *type)
{
    mypy___checkpattern___PatternCheckerObject *self;
    self = (mypy___checkpattern___PatternCheckerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = checkpattern___PatternChecker_vtable + 3;
    return (PyObject *)self;
}

PyObject *CPyDef_checkpattern___PatternChecker(PyObject *cpy_r_chk, PyObject *cpy_r_msg, PyObject *cpy_r_plugin, PyObject *cpy_r_options)
{
    PyObject *self = checkpattern___PatternChecker_setup(CPyType_checkpattern___PatternChecker);
    if (self == NULL)
        return NULL;
    char res = CPyDef_checkpattern___PatternChecker_____init__(self, cpy_r_chk, cpy_r_msg, cpy_r_plugin, cpy_r_options);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
checkpattern___PatternChecker_get_chk(mypy___checkpattern___PatternCheckerObject *self, void *closure)
{
    if (unlikely(self->_chk == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'chk' of 'PatternChecker' undefined");
        return NULL;
    }
    CPy_INCREF(self->_chk);
    PyObject *retval = self->_chk;
    return retval;
}

static int
checkpattern___PatternChecker_set_chk(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PatternChecker' object attribute 'chk' cannot be deleted");
        return -1;
    }
    if (self->_chk != NULL) {
        CPy_DECREF(self->_chk);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_checker___TypeChecker))
        tmp = value;
    else {
        CPy_TypeError("mypy.checker.TypeChecker", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_chk = tmp;
    return 0;
}

static PyObject *
checkpattern___PatternChecker_get_msg(mypy___checkpattern___PatternCheckerObject *self, void *closure)
{
    if (unlikely(self->_msg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'msg' of 'PatternChecker' undefined");
        return NULL;
    }
    CPy_INCREF(self->_msg);
    PyObject *retval = self->_msg;
    return retval;
}

static int
checkpattern___PatternChecker_set_msg(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PatternChecker' object attribute 'msg' cannot be deleted");
        return -1;
    }
    if (self->_msg != NULL) {
        CPy_DECREF(self->_msg);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_messages___MessageBuilder))
        tmp = value;
    else {
        CPy_TypeError("mypy.messages.MessageBuilder", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_msg = tmp;
    return 0;
}

static PyObject *
checkpattern___PatternChecker_get_plugin(mypy___checkpattern___PatternCheckerObject *self, void *closure)
{
    if (unlikely(self->_plugin == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'plugin' of 'PatternChecker' undefined");
        return NULL;
    }
    CPy_INCREF(self->_plugin);
    PyObject *retval = self->_plugin;
    return retval;
}

static int
checkpattern___PatternChecker_set_plugin(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PatternChecker' object attribute 'plugin' cannot be deleted");
        return -1;
    }
    if (self->_plugin != NULL) {
        CPy_DECREF(self->_plugin);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_plugin___Plugin)))
        tmp = value;
    else {
        CPy_TypeError("mypy.plugin.Plugin", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_plugin = tmp;
    return 0;
}

static PyObject *
checkpattern___PatternChecker_get_subject(mypy___checkpattern___PatternCheckerObject *self, void *closure)
{
    if (unlikely(self->_subject == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'subject' of 'PatternChecker' undefined");
        return NULL;
    }
    CPy_INCREF(self->_subject);
    PyObject *retval = self->_subject;
    return retval;
}

static int
checkpattern___PatternChecker_set_subject(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PatternChecker' object attribute 'subject' cannot be deleted");
        return -1;
    }
    if (self->_subject != NULL) {
        CPy_DECREF(self->_subject);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_nodes___Expression)))
        tmp = value;
    else {
        CPy_TypeError("mypy.nodes.Expression", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_subject = tmp;
    return 0;
}

static PyObject *
checkpattern___PatternChecker_get_subject_type(mypy___checkpattern___PatternCheckerObject *self, void *closure)
{
    if (unlikely(self->_subject_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'subject_type' of 'PatternChecker' undefined");
        return NULL;
    }
    CPy_INCREF(self->_subject_type);
    PyObject *retval = self->_subject_type;
    return retval;
}

static int
checkpattern___PatternChecker_set_subject_type(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PatternChecker' object attribute 'subject_type' cannot be deleted");
        return -1;
    }
    if (self->_subject_type != NULL) {
        CPy_DECREF(self->_subject_type);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_types___Type)))
        tmp = value;
    else {
        CPy_TypeError("mypy.types.Type", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_subject_type = tmp;
    return 0;
}

static PyObject *
checkpattern___PatternChecker_get_type_context(mypy___checkpattern___PatternCheckerObject *self, void *closure)
{
    if (unlikely(self->_type_context == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'type_context' of 'PatternChecker' undefined");
        return NULL;
    }
    CPy_INCREF(self->_type_context);
    PyObject *retval = self->_type_context;
    return retval;
}

static int
checkpattern___PatternChecker_set_type_context(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PatternChecker' object attribute 'type_context' cannot be deleted");
        return -1;
    }
    if (self->_type_context != NULL) {
        CPy_DECREF(self->_type_context);
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
    self->_type_context = tmp;
    return 0;
}

static PyObject *
checkpattern___PatternChecker_get_self_match_types(mypy___checkpattern___PatternCheckerObject *self, void *closure)
{
    if (unlikely(self->_self_match_types == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'self_match_types' of 'PatternChecker' undefined");
        return NULL;
    }
    CPy_INCREF(self->_self_match_types);
    PyObject *retval = self->_self_match_types;
    return retval;
}

static int
checkpattern___PatternChecker_set_self_match_types(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PatternChecker' object attribute 'self_match_types' cannot be deleted");
        return -1;
    }
    if (self->_self_match_types != NULL) {
        CPy_DECREF(self->_self_match_types);
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
    self->_self_match_types = tmp;
    return 0;
}

static PyObject *
checkpattern___PatternChecker_get_non_sequence_match_types(mypy___checkpattern___PatternCheckerObject *self, void *closure)
{
    if (unlikely(self->_non_sequence_match_types == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'non_sequence_match_types' of 'PatternChecker' undefined");
        return NULL;
    }
    CPy_INCREF(self->_non_sequence_match_types);
    PyObject *retval = self->_non_sequence_match_types;
    return retval;
}

static int
checkpattern___PatternChecker_set_non_sequence_match_types(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PatternChecker' object attribute 'non_sequence_match_types' cannot be deleted");
        return -1;
    }
    if (self->_non_sequence_match_types != NULL) {
        CPy_DECREF(self->_non_sequence_match_types);
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
    self->_non_sequence_match_types = tmp;
    return 0;
}

static PyObject *
checkpattern___PatternChecker_get_options(mypy___checkpattern___PatternCheckerObject *self, void *closure)
{
    if (unlikely(self->_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options' of 'PatternChecker' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options);
    PyObject *retval = self->_options;
    return retval;
}

static int
checkpattern___PatternChecker_set_options(mypy___checkpattern___PatternCheckerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'PatternChecker' object attribute 'options' cannot be deleted");
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
static PyMethodDef checkpatternmodule_methods[] = {
    {"get_match_arg_names", (PyCFunction)CPyPy_checkpattern___get_match_arg_names, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_var", (PyCFunction)CPyPy_checkpattern___get_var, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_type_range", (PyCFunction)CPyPy_checkpattern___get_type_range, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_uninhabited", (PyCFunction)CPyPy_checkpattern___is_uninhabited, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef checkpatternmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.checkpattern",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    checkpatternmodule_methods
};

PyObject *CPyInit_mypy___checkpattern(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___checkpattern_internal) {
        Py_INCREF(CPyModule_mypy___checkpattern_internal);
        return CPyModule_mypy___checkpattern_internal;
    }
    CPyModule_mypy___checkpattern_internal = PyModule_Create(&checkpatternmodule);
    if (unlikely(CPyModule_mypy___checkpattern_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___checkpattern_internal, "__name__");
    CPyStatic_checkpattern___globals = PyModule_GetDict(CPyModule_mypy___checkpattern_internal);
    if (unlikely(CPyStatic_checkpattern___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_checkpattern_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___checkpattern_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___checkpattern_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_checkpattern___self_match_type_names);
    CPyStatic_checkpattern___self_match_type_names = NULL;
    CPy_XDECREF(CPyStatic_checkpattern___non_sequence_match_type_names);
    CPyStatic_checkpattern___non_sequence_match_type_names = NULL;
    Py_CLEAR(CPyType_checkpattern___PatternType);
    Py_CLEAR(CPyType_checkpattern___PatternChecker);
    return NULL;
}

char CPyDef_checkpattern___PatternChecker_____init__(PyObject *cpy_r_self, PyObject *cpy_r_chk, PyObject *cpy_r_msg, PyObject *cpy_r_plugin, PyObject *cpy_r_options) {
    char cpy_r_r0;
    char cpy_r_r1;
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
    char cpy_r_r13;
    char cpy_r_r14;
    CPy_INCREF(cpy_r_chk);
    if (((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk != NULL) {
        CPy_DECREF(((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk);
    }
    ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk = cpy_r_chk;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("mypy/checkpattern.py", "__init__", 112, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_msg);
    if (((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg != NULL) {
        CPy_DECREF(((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg);
    }
    ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg = cpy_r_msg;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/checkpattern.py", "__init__", 113, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_plugin);
    if (((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_plugin != NULL) {
        CPy_DECREF(((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_plugin);
    }
    ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_plugin = cpy_r_plugin;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "__init__", 114, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "__init__", 116, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    if (((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_type_context != NULL) {
        CPy_DECREF(((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_type_context);
    }
    ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_type_context = cpy_r_r3;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/checkpattern.py", "__init__", 116, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    cpy_r_r5 = CPyStatic_checkpattern___self_match_type_names;
    if (likely(cpy_r_r5 != NULL)) goto CPyL8;
    PyErr_SetString(PyExc_NameError, "value for final name \"self_match_type_names\" was not set");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/checkpattern.py", "__init__", 117, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r7 = CPyDef_checkpattern___PatternChecker___generate_types_from_names(cpy_r_self, cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "__init__", 117, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    if (((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_self_match_types != NULL) {
        CPy_DECREF(((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_self_match_types);
    }
    ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_self_match_types = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/checkpattern.py", "__init__", 117, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    cpy_r_r9 = CPyStatic_checkpattern___non_sequence_match_type_names;
    if (likely(cpy_r_r9 != NULL)) goto CPyL13;
    PyErr_SetString(PyExc_NameError, "value for final name \"non_sequence_match_type_names\" was not set");
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/checkpattern.py", "__init__", 119, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r11 = CPyDef_checkpattern___PatternChecker___generate_types_from_names(cpy_r_self, cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "__init__", 118, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    if (((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_non_sequence_match_types != NULL) {
        CPy_DECREF(((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_non_sequence_match_types);
    }
    ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_non_sequence_match_types = cpy_r_r11;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/checkpattern.py", "__init__", 118, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_options);
    if (((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_options != NULL) {
        CPy_DECREF(((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_options);
    }
    ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_options = cpy_r_options;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/checkpattern.py", "__init__", 121, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    return 1;
CPyL17: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
}

PyObject *CPyPy_checkpattern___PatternChecker_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"chk", "msg", "plugin", "options", 0};
    PyObject *obj_chk;
    PyObject *obj_msg;
    PyObject *obj_plugin;
    PyObject *obj_options;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOO", "__init__", kwlist, &obj_chk, &obj_msg, &obj_plugin, &obj_options)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_chk;
    if (likely(Py_TYPE(obj_chk) == CPyType_checker___TypeChecker))
        arg_chk = obj_chk;
    else {
        CPy_TypeError("mypy.checker.TypeChecker", obj_chk); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(Py_TYPE(obj_msg) == CPyType_messages___MessageBuilder))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("mypy.messages.MessageBuilder", obj_msg); 
        goto fail;
    }
    PyObject *arg_plugin;
    if (likely(PyObject_TypeCheck(obj_plugin, CPyType_plugin___Plugin)))
        arg_plugin = obj_plugin;
    else {
        CPy_TypeError("mypy.plugin.Plugin", obj_plugin); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_checkpattern___PatternChecker_____init__(arg_self, arg_chk, arg_msg, arg_plugin, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "__init__", 109, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___accept(PyObject *cpy_r_self, PyObject *cpy_r_o, PyObject *cpy_r_type_context) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_type_context;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "accept", "PatternChecker", "type_context", 124, CPyStatic_checkpattern___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyList_Append(cpy_r_r0, cpy_r_type_context);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "accept", 124, CPyStatic_checkpattern___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPY_GET_METHOD_TRAIT(cpy_r_o, CPyType_patterns___Pattern, 5, mypy___patterns___PatternObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_o, cpy_r_self); /* accept */
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "accept", 125, CPyStatic_checkpattern___globals);
        goto CPyL8;
    }
    if (likely(PyTuple_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "accept", 125, CPyStatic_checkpattern___globals, "tuple", cpy_r_r3);
        goto CPyL8;
    }
    cpy_r_result = cpy_r_r4;
    cpy_r_r5 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_type_context;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "accept", "PatternChecker", "type_context", 126, CPyStatic_checkpattern___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = CPyList_PopLast(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "accept", 126, CPyStatic_checkpattern___globals);
        goto CPyL9;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r6, CPyType_types___Type)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeError("mypy.types.Type", cpy_r_r6); 
        cpy_r_r7 = NULL;
    }
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "accept", 126, CPyStatic_checkpattern___globals);
        goto CPyL9;
    } else
        goto CPyL10;
CPyL7: ;
    return cpy_r_result;
CPyL8: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL9: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL8;
CPyL10: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL7;
}

PyObject *CPyPy_checkpattern___PatternChecker___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", "type_context", 0};
    static CPyArg_Parser parser = {"OO:accept", kwlist, 0};
    PyObject *obj_o;
    PyObject *obj_type_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_o, &obj_type_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(PyObject_TypeCheck(obj_o, CPyType_patterns___Pattern)))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.Pattern", obj_o); 
        goto fail;
    }
    PyObject *arg_type_context;
    if (likely(PyObject_TypeCheck(obj_type_context, CPyType_types___Type)))
        arg_type_context = obj_type_context;
    else {
        CPy_TypeError("mypy.types.Type", obj_type_context); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___accept(arg_self, arg_o, arg_type_context);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "accept", 123, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___visit_as_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_current_type;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_pattern_type;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_rest_type;
    PyObject *cpy_r_type_map;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
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
    CPyPtr cpy_r_r32;
    CPyPtr cpy_r_r33;
    tuple_T2OO cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    tuple_T2OO cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r__;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject **cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    cpy_r_r0 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_type_context;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_as_pattern", "PatternChecker", "type_context", 131, CPyStatic_checkpattern___globals);
        goto CPyL34;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 131, CPyStatic_checkpattern___globals);
        goto CPyL34;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_as_pattern", 131, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL34;
    }
    cpy_r_current_type = cpy_r_r2;
    cpy_r_r3 = ((mypy___patterns___AsPatternObject *)cpy_r_o)->_pattern;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL14;
    cpy_r_r6 = ((mypy___patterns___AsPatternObject *)cpy_r_o)->_pattern;
    CPy_INCREF(cpy_r_r6);
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_as_pattern", 133, CPyStatic_checkpattern___globals, "mypy.patterns.Pattern", cpy_r_r6);
        goto CPyL35;
    }
    cpy_r_r8 = CPyDef_checkpattern___PatternChecker___accept(cpy_r_self, cpy_r_r7, cpy_r_current_type);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 133, CPyStatic_checkpattern___globals);
        goto CPyL35;
    }
    cpy_r_pattern_type = cpy_r_r8;
    cpy_r_r9 = CPySequence_CheckUnpackCount(cpy_r_pattern_type, 3);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 134, CPyStatic_checkpattern___globals);
        goto CPyL36;
    }
    cpy_r_r11 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 134, CPyStatic_checkpattern___globals);
        goto CPyL36;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_as_pattern", 134, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r11);
        goto CPyL36;
    }
    cpy_r_r13 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 2);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 134, CPyStatic_checkpattern___globals);
        goto CPyL37;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_types___Type)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_as_pattern", 134, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r13);
        goto CPyL37;
    }
    cpy_r_r15 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 4);
    CPy_DECREF(cpy_r_pattern_type);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 134, CPyStatic_checkpattern___globals);
        goto CPyL38;
    }
    if (likely(PyDict_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_as_pattern", 134, CPyStatic_checkpattern___globals, "dict", cpy_r_r15);
        goto CPyL38;
    }
    cpy_r_typ = cpy_r_r12;
    cpy_r_rest_type = cpy_r_r14;
    cpy_r_type_map = cpy_r_r16;
    goto CPyL17;
CPyL14: ;
    CPy_INCREF(cpy_r_current_type);
    cpy_r_r17 = cpy_r_current_type;
    cpy_r_r18 = 2;
    cpy_r_r19 = CPY_INT_TAG;
    cpy_r_r20 = CPY_INT_TAG;
    cpy_r_r21 = CPyDef_types___UninhabitedType(cpy_r_r18, cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 136, CPyStatic_checkpattern___globals);
        goto CPyL39;
    }
    cpy_r_r22 = cpy_r_r21;
    cpy_r_r23 = PyDict_New();
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 136, CPyStatic_checkpattern___globals);
        goto CPyL40;
    }
    cpy_r_r24 = cpy_r_r23;
    cpy_r_typ = cpy_r_r17;
    cpy_r_rest_type = cpy_r_r22;
    cpy_r_type_map = cpy_r_r24;
CPyL17: ;
    cpy_r_r25 = CPyDef_checkpattern___is_uninhabited(cpy_r_typ);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 138, CPyStatic_checkpattern___globals);
        goto CPyL41;
    }
    if (cpy_r_r25) goto CPyL42;
    cpy_r_r26 = ((mypy___patterns___AsPatternObject *)cpy_r_o)->_name;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_r26 != cpy_r_r27;
    if (!cpy_r_r28) goto CPyL42;
    cpy_r_r29 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_as_pattern", "PatternChecker", "chk", 139, CPyStatic_checkpattern___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r29);
CPyL21: ;
    cpy_r_r30 = CPyDef_checkpattern___get_type_range(cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 140, CPyStatic_checkpattern___globals);
        goto CPyL43;
    }
    cpy_r_r31 = PyList_New(1);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 140, CPyStatic_checkpattern___globals);
        goto CPyL44;
    }
    cpy_r_r32 = (CPyPtr)&((PyListObject *)cpy_r_r31)->ob_item;
    cpy_r_r33 = *(CPyPtr *)cpy_r_r32;
    *(PyObject * *)cpy_r_r33 = cpy_r_r30;
    cpy_r_r34 = CPyDef_checker___TypeChecker___conditional_types_with_intersection(cpy_r_r29, cpy_r_current_type, cpy_r_r31, cpy_r_o, cpy_r_current_type);
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r34.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 139, CPyStatic_checkpattern___globals);
        goto CPyL45;
    }
    cpy_r_r35 = cpy_r_r34.f0;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = cpy_r_r34.f1;
    CPy_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r34.f0);
    CPy_DECREF(cpy_r_r34.f1);
    if (likely(cpy_r_r35 != Py_None))
        cpy_r_r37 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_as_pattern", 139, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r35);
        goto CPyL46;
    }
    if (likely(cpy_r_r36 != Py_None))
        cpy_r_r38 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_as_pattern", 139, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r36);
        goto CPyL47;
    }
    cpy_r_r39.f0 = cpy_r_r37;
    cpy_r_r39.f1 = cpy_r_r38;
    CPy_INCREF(cpy_r_r39.f0);
    CPy_INCREF(cpy_r_r39.f1);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39.f0;
    CPy_INCREF(cpy_r_r40);
    cpy_r_typ = cpy_r_r40;
    cpy_r_r41 = cpy_r_r39.f1;
    CPy_INCREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r39.f0);
    CPy_DECREF(cpy_r_r39.f1);
    cpy_r__ = cpy_r_r41;
    CPy_DECREF(cpy_r__);
    cpy_r_r42 = CPyDef_checkpattern___is_uninhabited(cpy_r_typ);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 142, CPyStatic_checkpattern___globals);
        goto CPyL48;
    }
    if (cpy_r_r42) goto CPyL30;
    cpy_r_r43 = ((mypy___patterns___AsPatternObject *)cpy_r_o)->_name;
    CPy_INCREF(cpy_r_r43);
    if (likely(cpy_r_r43 != Py_None))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_as_pattern", 143, CPyStatic_checkpattern___globals, "mypy.nodes.NameExpr", cpy_r_r43);
        goto CPyL48;
    }
    cpy_r_r45 = CPyDict_SetItem(cpy_r_type_map, cpy_r_r44, cpy_r_typ);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 143, CPyStatic_checkpattern___globals);
        goto CPyL48;
    }
CPyL30: ;
    cpy_r_r47 = CPyStatic_checkpattern___globals;
    cpy_r_r48 = CPyStatics[1351]; /* 'PatternType' */
    cpy_r_r49 = CPyDict_GetItem(cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 145, CPyStatic_checkpattern___globals);
        goto CPyL48;
    }
    PyObject *cpy_r_r50[3] = {cpy_r_typ, cpy_r_rest_type, cpy_r_type_map};
    cpy_r_r51 = (PyObject **)&cpy_r_r50;
    cpy_r_r52 = _PyObject_Vectorcall(cpy_r_r49, cpy_r_r51, 3, 0);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 145, CPyStatic_checkpattern___globals);
        goto CPyL48;
    }
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_rest_type);
    CPy_DECREF(cpy_r_type_map);
    if (likely(PyTuple_Check(cpy_r_r52)))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_as_pattern", 145, CPyStatic_checkpattern___globals, "tuple", cpy_r_r52);
        goto CPyL34;
    }
    return cpy_r_r53;
CPyL34: ;
    cpy_r_r54 = NULL;
    return cpy_r_r54;
CPyL35: ;
    CPy_DecRef(cpy_r_current_type);
    goto CPyL34;
CPyL36: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_type);
    goto CPyL34;
CPyL37: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_type);
    CPy_DecRef(cpy_r_r12);
    goto CPyL34;
CPyL38: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r14);
    goto CPyL34;
CPyL39: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_r17);
    goto CPyL34;
CPyL40: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r22);
    goto CPyL34;
CPyL41: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_type_map);
    goto CPyL34;
CPyL42: ;
    CPy_DECREF(cpy_r_current_type);
    goto CPyL30;
CPyL43: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_type_map);
    CPy_DecRef(cpy_r_r29);
    goto CPyL34;
CPyL44: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_type_map);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r30);
    goto CPyL34;
CPyL45: ;
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_type_map);
    goto CPyL34;
CPyL46: ;
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_type_map);
    CPy_DecRef(cpy_r_r36);
    goto CPyL34;
CPyL47: ;
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_type_map);
    CPy_DecRef(cpy_r_r37);
    goto CPyL34;
CPyL48: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_type_map);
    goto CPyL34;
}

PyObject *CPyPy_checkpattern___PatternChecker___visit_as_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_as_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___AsPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___visit_as_pattern(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern", 130, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___visit_as_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_checkpattern___PatternChecker___visit_as_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_checkpattern___PatternChecker___visit_as_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_as_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___AsPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___visit_as_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "visit_as_pattern__PatternVisitor_glue", -1, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___visit_or_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_current_type;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_pattern_types;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_pattern;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_pattern_type;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_types;
    CPyTagged cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_capture_types;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    int64_t cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    tuple_T4CIOO cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_expr;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    tuple_T2OO cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    CPyTagged cpy_r_r66;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyTagged cpy_r_r69;
    CPyPtr cpy_r_r70;
    int64_t cpy_r_r71;
    CPyTagged cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyTagged cpy_r_r79;
    int64_t cpy_r_r80;
    CPyTagged cpy_r_r81;
    PyObject *cpy_r_r82;
    tuple_T4CIOO cpy_r_r83;
    CPyTagged cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_expr_2;
    PyObject *cpy_r__;
    PyObject *cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_vars;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyTagged cpy_r_r110;
    int64_t cpy_r_r111;
    CPyTagged cpy_r_r112;
    PyObject *cpy_r_r113;
    tuple_T4CIOO cpy_r_r114;
    CPyTagged cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    tuple_T2OO cpy_r_r124;
    PyObject *cpy_r_r125;
    int32_t cpy_r_r126;
    char cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    CPyTagged cpy_r_r130;
    CPyTagged cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_captures;
    CPyTagged cpy_r_r133;
    int64_t cpy_r_r134;
    CPyTagged cpy_r_r135;
    PyObject *cpy_r_r136;
    tuple_T4CIOO cpy_r_r137;
    CPyTagged cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_var;
    PyObject *cpy_r_capture_list;
    char cpy_r_r144;
    CPyTagged cpy_r_r145;
    CPyTagged cpy_r_r146;
    PyObject *cpy_r_r147;
    CPyTagged cpy_r_r148;
    CPyPtr cpy_r_r149;
    int64_t cpy_r_r150;
    CPyTagged cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    tuple_T2OO cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r___2;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_other;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    CPyTagged cpy_r_r159;
    PyObject *cpy_r_r160;
    tuple_T2OO cpy_r_r161;
    PyObject *cpy_r_r162;
    int32_t cpy_r_r163;
    char cpy_r_r164;
    char cpy_r_r165;
    char cpy_r_r166;
    CPyTagged cpy_r_r167;
    CPyTagged cpy_r_r168;
    char cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_union_type;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject **cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    cpy_r_r0 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_type_context;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_or_pattern", "PatternChecker", "type_context", 148, CPyStatic_checkpattern___globals);
        goto CPyL101;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 148, CPyStatic_checkpattern___globals);
        goto CPyL101;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 148, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL101;
    }
    cpy_r_current_type = cpy_r_r2;
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 153, CPyStatic_checkpattern___globals);
        goto CPyL102;
    }
    cpy_r_pattern_types = cpy_r_r3;
    cpy_r_r4 = ((mypy___patterns___OrPatternObject *)cpy_r_o)->_patterns;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = 0;
CPyL5: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL103;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r4, cpy_r_r5);
    if (likely(PyObject_TypeCheck(cpy_r_r10, CPyType_patterns___Pattern)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 154, CPyStatic_checkpattern___globals, "mypy.patterns.Pattern", cpy_r_r10);
        goto CPyL104;
    }
    cpy_r_pattern = cpy_r_r11;
    cpy_r_r12 = CPyDef_checkpattern___PatternChecker___accept(cpy_r_self, cpy_r_pattern, cpy_r_current_type);
    CPy_DECREF(cpy_r_pattern);
    CPy_DECREF(cpy_r_current_type);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 155, CPyStatic_checkpattern___globals);
        goto CPyL105;
    }
    cpy_r_pattern_type = cpy_r_r12;
    cpy_r_r13 = PyList_Append(cpy_r_pattern_types, cpy_r_pattern_type);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 156, CPyStatic_checkpattern___globals);
        goto CPyL106;
    }
    cpy_r_r15 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 2);
    CPy_DECREF(cpy_r_pattern_type);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 157, CPyStatic_checkpattern___globals);
        goto CPyL105;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_types___Type)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 157, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r15);
        goto CPyL105;
    }
    cpy_r_current_type = cpy_r_r16;
    cpy_r_r17 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r17;
    goto CPyL5;
CPyL13: ;
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 162, CPyStatic_checkpattern___globals);
        goto CPyL107;
    }
    cpy_r_types = cpy_r_r18;
    cpy_r_r19 = 0;
CPyL15: ;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_pattern_types)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r22;
    if (!cpy_r_r23) goto CPyL25;
    cpy_r_r24 = CPyList_GetItemUnsafe(cpy_r_pattern_types, cpy_r_r19);
    if (likely(PyTuple_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 163, CPyStatic_checkpattern___globals, "tuple", cpy_r_r24);
        goto CPyL108;
    }
    cpy_r_pattern_type = cpy_r_r25;
    cpy_r_r26 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 164, CPyStatic_checkpattern___globals);
        goto CPyL109;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r26, CPyType_types___Type)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 164, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r26);
        goto CPyL109;
    }
    cpy_r_r28 = CPyDef_checkpattern___is_uninhabited(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 164, CPyStatic_checkpattern___globals);
        goto CPyL109;
    }
    if (cpy_r_r28) goto CPyL110;
    cpy_r_r29 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 0);
    CPy_DECREF(cpy_r_pattern_type);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 165, CPyStatic_checkpattern___globals);
        goto CPyL108;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r29, CPyType_types___Type)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 165, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r29);
        goto CPyL108;
    }
    cpy_r_r31 = PyList_Append(cpy_r_types, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 165, CPyStatic_checkpattern___globals);
        goto CPyL108;
    }
CPyL24: ;
    cpy_r_r33 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r33;
    goto CPyL15;
CPyL25: ;
    cpy_r_r34 = (PyObject *)&PyList_Type;
    cpy_r_r35 = CPyStatic_checkpattern___globals;
    cpy_r_r36 = CPyStatics[73]; /* 'defaultdict' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 170, CPyStatic_checkpattern___globals);
        goto CPyL108;
    }
    PyObject *cpy_r_r38[1] = {cpy_r_r34};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = _PyObject_Vectorcall(cpy_r_r37, cpy_r_r39, 1, 0);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 170, CPyStatic_checkpattern___globals);
        goto CPyL108;
    }
    if (likely(PyDict_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 170, CPyStatic_checkpattern___globals, "dict", cpy_r_r40);
        goto CPyL108;
    }
    cpy_r_capture_types = cpy_r_r41;
    cpy_r_r42 = CPyList_GetItemShort(cpy_r_pattern_types, 0);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 172, CPyStatic_checkpattern___globals);
        goto CPyL111;
    }
    if (likely(PyTuple_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 172, CPyStatic_checkpattern___globals, "tuple", cpy_r_r42);
        goto CPyL111;
    }
    cpy_r_r44 = CPySequenceTuple_GetItem(cpy_r_r43, 4);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 172, CPyStatic_checkpattern___globals);
        goto CPyL111;
    }
    if (likely(PyDict_Check(cpy_r_r44)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 172, CPyStatic_checkpattern___globals, "dict", cpy_r_r44);
        goto CPyL111;
    }
    cpy_r_r46 = 0;
    cpy_r_r47 = PyDict_Size(cpy_r_r45);
    cpy_r_r48 = cpy_r_r47 << 1;
    cpy_r_r49 = CPyDict_GetItemsIter(cpy_r_r45);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 172, CPyStatic_checkpattern___globals);
        goto CPyL112;
    }
CPyL33: ;
    cpy_r_r50 = CPyDict_NextItem(cpy_r_r49, cpy_r_r46);
    cpy_r_r51 = cpy_r_r50.f1;
    cpy_r_r46 = cpy_r_r51;
    cpy_r_r52 = cpy_r_r50.f0;
    if (!cpy_r_r52) goto CPyL113;
    cpy_r_r53 = cpy_r_r50.f2;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = cpy_r_r50.f3;
    CPy_INCREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r50.f2);
    CPy_DECREF(cpy_r_r50.f3);
    if (likely(PyObject_TypeCheck(cpy_r_r53, CPyType_nodes___Expression)))
        cpy_r_r55 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 172, CPyStatic_checkpattern___globals, "mypy.nodes.Expression", cpy_r_r53);
        goto CPyL114;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r54, CPyType_types___Type)))
        cpy_r_r56 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 172, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r54);
        goto CPyL115;
    }
    cpy_r_expr = cpy_r_r55;
    cpy_r_typ = cpy_r_r56;
    cpy_r_r57 = CPyDef_checkpattern___get_var(cpy_r_expr);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 173, CPyStatic_checkpattern___globals);
        goto CPyL116;
    }
    cpy_r_node = cpy_r_r57;
    cpy_r_r58 = CPyDict_GetItem(cpy_r_capture_types, cpy_r_node);
    CPy_DECREF(cpy_r_node);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 174, CPyStatic_checkpattern___globals);
        goto CPyL116;
    }
    if (likely(PyList_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 174, CPyStatic_checkpattern___globals, "list", cpy_r_r58);
        goto CPyL116;
    }
    cpy_r_r60.f0 = cpy_r_expr;
    cpy_r_r60.f1 = cpy_r_typ;
    CPy_INCREF(cpy_r_r60.f0);
    CPy_INCREF(cpy_r_r60.f1);
    CPy_DECREF(cpy_r_expr);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r61 = PyTuple_New(2);
    if (unlikely(cpy_r_r61 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1512 = cpy_r_r60.f0;
    PyTuple_SET_ITEM(cpy_r_r61, 0, __tmp1512);
    PyObject *__tmp1513 = cpy_r_r60.f1;
    PyTuple_SET_ITEM(cpy_r_r61, 1, __tmp1513);
    cpy_r_r62 = PyList_Append(cpy_r_r59, cpy_r_r61);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 174, CPyStatic_checkpattern___globals);
        goto CPyL117;
    }
    cpy_r_r64 = CPyDict_CheckSize(cpy_r_r45, cpy_r_r48);
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 172, CPyStatic_checkpattern___globals);
        goto CPyL117;
    } else
        goto CPyL33;
CPyL41: ;
    cpy_r_r65 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 172, CPyStatic_checkpattern___globals);
        goto CPyL111;
    }
    cpy_r_r66 = 0;
    cpy_r_i = 0;
    cpy_r_r67 = CPyList_GetSlice(cpy_r_pattern_types, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_pattern_types);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 177, CPyStatic_checkpattern___globals);
        goto CPyL118;
    }
    if (likely(PyList_Check(cpy_r_r67)))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 177, CPyStatic_checkpattern___globals, "list", cpy_r_r67);
        goto CPyL118;
    }
    cpy_r_r69 = 0;
CPyL45: ;
    cpy_r_r70 = (CPyPtr)&((PyVarObject *)cpy_r_r68)->ob_size;
    cpy_r_r71 = *(int64_t *)cpy_r_r70;
    cpy_r_r72 = cpy_r_r71 << 1;
    cpy_r_r73 = (Py_ssize_t)cpy_r_r69 < (Py_ssize_t)cpy_r_r72;
    if (!cpy_r_r73) goto CPyL119;
    cpy_r_r74 = CPyList_GetItemUnsafe(cpy_r_r68, cpy_r_r69);
    if (likely(PyTuple_Check(cpy_r_r74)))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 177, CPyStatic_checkpattern___globals, "tuple", cpy_r_r74);
        goto CPyL120;
    }
    cpy_r_pattern_type = cpy_r_r75;
    cpy_r_r76 = PySet_New(NULL);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 178, CPyStatic_checkpattern___globals);
        goto CPyL121;
    }
    cpy_r_r77 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 4);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 178, CPyStatic_checkpattern___globals);
        goto CPyL122;
    }
    if (likely(PyDict_Check(cpy_r_r77)))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 178, CPyStatic_checkpattern___globals, "dict", cpy_r_r77);
        goto CPyL122;
    }
    cpy_r_r79 = 0;
    cpy_r_r80 = PyDict_Size(cpy_r_r78);
    cpy_r_r81 = cpy_r_r80 << 1;
    cpy_r_r82 = CPyDict_GetItemsIter(cpy_r_r78);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 178, CPyStatic_checkpattern___globals);
        goto CPyL123;
    }
CPyL51: ;
    cpy_r_r83 = CPyDict_NextItem(cpy_r_r82, cpy_r_r79);
    cpy_r_r84 = cpy_r_r83.f1;
    cpy_r_r79 = cpy_r_r84;
    cpy_r_r85 = cpy_r_r83.f0;
    if (!cpy_r_r85) goto CPyL124;
    cpy_r_r86 = cpy_r_r83.f2;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r87 = cpy_r_r83.f3;
    CPy_INCREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r83.f2);
    CPy_DECREF(cpy_r_r83.f3);
    if (likely(PyObject_TypeCheck(cpy_r_r86, CPyType_nodes___Expression)))
        cpy_r_r88 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 178, CPyStatic_checkpattern___globals, "mypy.nodes.Expression", cpy_r_r86);
        goto CPyL125;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r87, CPyType_types___Type)))
        cpy_r_r89 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 178, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r87);
        goto CPyL126;
    }
    cpy_r_expr_2 = cpy_r_r88;
    cpy_r__ = cpy_r_r89;
    CPy_DECREF(cpy_r__);
    cpy_r_r90 = CPyDef_checkpattern___get_var(cpy_r_expr_2);
    CPy_DECREF(cpy_r_expr_2);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 178, CPyStatic_checkpattern___globals);
        goto CPyL127;
    }
    cpy_r_r91 = PySet_Add(cpy_r_r76, cpy_r_r90);
    CPy_DECREF(cpy_r_r90);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 178, CPyStatic_checkpattern___globals);
        goto CPyL127;
    }
    cpy_r_r93 = CPyDict_CheckSize(cpy_r_r78, cpy_r_r81);
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 178, CPyStatic_checkpattern___globals);
        goto CPyL127;
    } else
        goto CPyL51;
CPyL57: ;
    cpy_r_r94 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 178, CPyStatic_checkpattern___globals);
        goto CPyL122;
    }
    cpy_r_vars = cpy_r_r76;
    cpy_r_r95 = CPyDict_KeysView(cpy_r_capture_types);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 179, CPyStatic_checkpattern___globals);
        goto CPyL128;
    }
    cpy_r_r96 = PyObject_RichCompare(cpy_r_r95, cpy_r_vars, 3);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_vars);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 179, CPyStatic_checkpattern___globals);
        goto CPyL121;
    }
    if (unlikely(!PyBool_Check(cpy_r_r96))) {
        CPy_TypeError("bool", cpy_r_r96); cpy_r_r97 = 2;
    } else
        cpy_r_r97 = cpy_r_r96 == Py_True;
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 179, CPyStatic_checkpattern___globals);
        goto CPyL121;
    }
    if (!cpy_r_r97) goto CPyL129;
    cpy_r_r98 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_or_pattern", "PatternChecker", "msg", 180, CPyStatic_checkpattern___globals);
        goto CPyL121;
    }
    CPy_INCREF(cpy_r_r98);
CPyL63: ;
    cpy_r_r99 = CPyStatics[1352]; /* 'Alternative patterns bind different names' */
    cpy_r_r100 = ((mypy___patterns___OrPatternObject *)cpy_r_o)->_patterns;
    cpy_r_r101 = CPyList_GetItem(cpy_r_r100, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 180, CPyStatic_checkpattern___globals);
        goto CPyL130;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r101, CPyType_patterns___Pattern)))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 180, CPyStatic_checkpattern___globals, "mypy.patterns.Pattern", cpy_r_r101);
        goto CPyL130;
    }
    cpy_r_r103 = NULL;
    cpy_r_r104 = NULL;
    cpy_r_r105 = 2;
    cpy_r_r106 = NULL;
    cpy_r_r107 = CPyDef_messages___MessageBuilder___fail(cpy_r_r98, cpy_r_r99, cpy_r_r102, cpy_r_r103, cpy_r_r104, cpy_r_r105, cpy_r_r106);
    CPy_DECREF(cpy_r_r102);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r107 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 180, CPyStatic_checkpattern___globals);
        goto CPyL131;
    }
CPyL66: ;
    cpy_r_r108 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 4);
    CPy_DECREF(cpy_r_pattern_type);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 181, CPyStatic_checkpattern___globals);
        goto CPyL132;
    }
    if (likely(PyDict_Check(cpy_r_r108)))
        cpy_r_r109 = cpy_r_r108;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 181, CPyStatic_checkpattern___globals, "dict", cpy_r_r108);
        goto CPyL132;
    }
    cpy_r_r110 = 0;
    cpy_r_r111 = PyDict_Size(cpy_r_r109);
    cpy_r_r112 = cpy_r_r111 << 1;
    cpy_r_r113 = CPyDict_GetItemsIter(cpy_r_r109);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 181, CPyStatic_checkpattern___globals);
        goto CPyL133;
    }
CPyL69: ;
    cpy_r_r114 = CPyDict_NextItem(cpy_r_r113, cpy_r_r110);
    cpy_r_r115 = cpy_r_r114.f1;
    cpy_r_r110 = cpy_r_r115;
    cpy_r_r116 = cpy_r_r114.f0;
    if (!cpy_r_r116) goto CPyL134;
    cpy_r_r117 = cpy_r_r114.f2;
    CPy_INCREF(cpy_r_r117);
    cpy_r_r118 = cpy_r_r114.f3;
    CPy_INCREF(cpy_r_r118);
    CPy_DECREF(cpy_r_r114.f2);
    CPy_DECREF(cpy_r_r114.f3);
    if (likely(PyObject_TypeCheck(cpy_r_r117, CPyType_nodes___Expression)))
        cpy_r_r119 = cpy_r_r117;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 181, CPyStatic_checkpattern___globals, "mypy.nodes.Expression", cpy_r_r117);
        goto CPyL135;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r118, CPyType_types___Type)))
        cpy_r_r120 = cpy_r_r118;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 181, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r118);
        goto CPyL136;
    }
    cpy_r_expr = cpy_r_r119;
    cpy_r_typ = cpy_r_r120;
    cpy_r_r121 = CPyDef_checkpattern___get_var(cpy_r_expr);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 182, CPyStatic_checkpattern___globals);
        goto CPyL137;
    }
    cpy_r_node = cpy_r_r121;
    cpy_r_r122 = CPyDict_GetItem(cpy_r_capture_types, cpy_r_node);
    CPy_DECREF(cpy_r_node);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 183, CPyStatic_checkpattern___globals);
        goto CPyL137;
    }
    if (likely(PyList_Check(cpy_r_r122)))
        cpy_r_r123 = cpy_r_r122;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 183, CPyStatic_checkpattern___globals, "list", cpy_r_r122);
        goto CPyL137;
    }
    cpy_r_r124.f0 = cpy_r_expr;
    cpy_r_r124.f1 = cpy_r_typ;
    CPy_INCREF(cpy_r_r124.f0);
    CPy_INCREF(cpy_r_r124.f1);
    CPy_DECREF(cpy_r_expr);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r125 = PyTuple_New(2);
    if (unlikely(cpy_r_r125 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1514 = cpy_r_r124.f0;
    PyTuple_SET_ITEM(cpy_r_r125, 0, __tmp1514);
    PyObject *__tmp1515 = cpy_r_r124.f1;
    PyTuple_SET_ITEM(cpy_r_r125, 1, __tmp1515);
    cpy_r_r126 = PyList_Append(cpy_r_r123, cpy_r_r125);
    CPy_DECREF(cpy_r_r123);
    CPy_DECREF(cpy_r_r125);
    cpy_r_r127 = cpy_r_r126 >= 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 183, CPyStatic_checkpattern___globals);
        goto CPyL138;
    }
    cpy_r_r128 = CPyDict_CheckSize(cpy_r_r109, cpy_r_r112);
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 181, CPyStatic_checkpattern___globals);
        goto CPyL138;
    } else
        goto CPyL69;
CPyL77: ;
    cpy_r_r129 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 181, CPyStatic_checkpattern___globals);
        goto CPyL132;
    }
    cpy_r_r130 = cpy_r_r66 + 2;
    cpy_r_r66 = cpy_r_r130;
    cpy_r_i = cpy_r_r130;
    cpy_r_r131 = cpy_r_r69 + 2;
    cpy_r_r69 = cpy_r_r131;
    goto CPyL45;
CPyL79: ;
    cpy_r_r132 = PyDict_New();
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 185, CPyStatic_checkpattern___globals);
        goto CPyL139;
    }
    cpy_r_captures = cpy_r_r132;
    cpy_r_r133 = 0;
    cpy_r_r134 = PyDict_Size(cpy_r_capture_types);
    cpy_r_r135 = cpy_r_r134 << 1;
    cpy_r_r136 = CPyDict_GetItemsIter(cpy_r_capture_types);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 186, CPyStatic_checkpattern___globals);
        goto CPyL140;
    }
CPyL81: ;
    cpy_r_r137 = CPyDict_NextItem(cpy_r_r136, cpy_r_r133);
    cpy_r_r138 = cpy_r_r137.f1;
    cpy_r_r133 = cpy_r_r138;
    cpy_r_r139 = cpy_r_r137.f0;
    if (!cpy_r_r139) goto CPyL141;
    cpy_r_r140 = cpy_r_r137.f2;
    CPy_INCREF(cpy_r_r140);
    cpy_r_r141 = cpy_r_r137.f3;
    CPy_INCREF(cpy_r_r141);
    CPy_DECREF(cpy_r_r137.f2);
    CPy_DECREF(cpy_r_r137.f3);
    if (likely(Py_TYPE(cpy_r_r140) == CPyType_nodes___Var))
        cpy_r_r142 = cpy_r_r140;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 186, CPyStatic_checkpattern___globals, "mypy.nodes.Var", cpy_r_r140);
        goto CPyL142;
    }
    if (likely(PyList_Check(cpy_r_r141)))
        cpy_r_r143 = cpy_r_r141;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 186, CPyStatic_checkpattern___globals, "list", cpy_r_r141);
        goto CPyL143;
    }
    cpy_r_var = cpy_r_r142;
    CPy_DECREF(cpy_r_var);
    cpy_r_capture_list = cpy_r_r143;
    cpy_r_r144 = 2;
    cpy_r_r145 = CPY_INT_TAG;
    cpy_r_r146 = CPY_INT_TAG;
    cpy_r_r147 = CPyDef_types___UninhabitedType(cpy_r_r144, cpy_r_r145, cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 187, CPyStatic_checkpattern___globals);
        goto CPyL144;
    }
    cpy_r_typ = cpy_r_r147;
    cpy_r_r148 = 0;
CPyL86: ;
    cpy_r_r149 = (CPyPtr)&((PyVarObject *)cpy_r_capture_list)->ob_size;
    cpy_r_r150 = *(int64_t *)cpy_r_r149;
    cpy_r_r151 = cpy_r_r150 << 1;
    cpy_r_r152 = (Py_ssize_t)cpy_r_r148 < (Py_ssize_t)cpy_r_r151;
    if (!cpy_r_r152) goto CPyL91;
    cpy_r_r153 = CPyList_GetItemUnsafe(cpy_r_capture_list, cpy_r_r148);
    PyObject *__tmp1516;
    if (unlikely(!(PyTuple_Check(cpy_r_r153) && PyTuple_GET_SIZE(cpy_r_r153) == 2))) {
        __tmp1516 = NULL;
        goto __LL1517;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r153, 0), CPyType_nodes___Expression)))
        __tmp1516 = PyTuple_GET_ITEM(cpy_r_r153, 0);
    else {
        __tmp1516 = NULL;
    }
    if (__tmp1516 == NULL) goto __LL1517;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r153, 1), CPyType_types___Type)))
        __tmp1516 = PyTuple_GET_ITEM(cpy_r_r153, 1);
    else {
        __tmp1516 = NULL;
    }
    if (__tmp1516 == NULL) goto __LL1517;
    __tmp1516 = cpy_r_r153;
__LL1517: ;
    if (unlikely(__tmp1516 == NULL)) {
        CPy_TypeError("tuple[mypy.nodes.Expression, mypy.types.Type]", cpy_r_r153); cpy_r_r154 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1518 = PyTuple_GET_ITEM(cpy_r_r153, 0);
        CPy_INCREF(__tmp1518);
        PyObject *__tmp1519;
        if (likely(PyObject_TypeCheck(__tmp1518, CPyType_nodes___Expression)))
            __tmp1519 = __tmp1518;
        else {
            CPy_TypeError("mypy.nodes.Expression", __tmp1518); 
            __tmp1519 = NULL;
        }
        cpy_r_r154.f0 = __tmp1519;
        PyObject *__tmp1520 = PyTuple_GET_ITEM(cpy_r_r153, 1);
        CPy_INCREF(__tmp1520);
        PyObject *__tmp1521;
        if (likely(PyObject_TypeCheck(__tmp1520, CPyType_types___Type)))
            __tmp1521 = __tmp1520;
        else {
            CPy_TypeError("mypy.types.Type", __tmp1520); 
            __tmp1521 = NULL;
        }
        cpy_r_r154.f1 = __tmp1521;
    }
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r154.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 188, CPyStatic_checkpattern___globals);
        goto CPyL145;
    }
    cpy_r_r155 = cpy_r_r154.f0;
    CPy_INCREF(cpy_r_r155);
    cpy_r___2 = cpy_r_r155;
    CPy_DECREF(cpy_r___2);
    cpy_r_r156 = cpy_r_r154.f1;
    CPy_INCREF(cpy_r_r156);
    CPy_DECREF(cpy_r_r154.f0);
    CPy_DECREF(cpy_r_r154.f1);
    cpy_r_other = cpy_r_r156;
    cpy_r_r157 = NULL;
    cpy_r_r158 = CPyDef_join___join_types(cpy_r_typ, cpy_r_other, cpy_r_r157);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_other);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 189, CPyStatic_checkpattern___globals);
        goto CPyL144;
    }
    cpy_r_typ = cpy_r_r158;
    cpy_r_r159 = cpy_r_r148 + 2;
    cpy_r_r148 = cpy_r_r159;
    goto CPyL86;
CPyL91: ;
    cpy_r_r160 = CPyList_GetItemShort(cpy_r_capture_list, 0);
    CPy_DECREF(cpy_r_capture_list);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 191, CPyStatic_checkpattern___globals);
        goto CPyL146;
    }
    PyObject *__tmp1522;
    if (unlikely(!(PyTuple_Check(cpy_r_r160) && PyTuple_GET_SIZE(cpy_r_r160) == 2))) {
        __tmp1522 = NULL;
        goto __LL1523;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r160, 0), CPyType_nodes___Expression)))
        __tmp1522 = PyTuple_GET_ITEM(cpy_r_r160, 0);
    else {
        __tmp1522 = NULL;
    }
    if (__tmp1522 == NULL) goto __LL1523;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r160, 1), CPyType_types___Type)))
        __tmp1522 = PyTuple_GET_ITEM(cpy_r_r160, 1);
    else {
        __tmp1522 = NULL;
    }
    if (__tmp1522 == NULL) goto __LL1523;
    __tmp1522 = cpy_r_r160;
__LL1523: ;
    if (unlikely(__tmp1522 == NULL)) {
        CPy_TypeError("tuple[mypy.nodes.Expression, mypy.types.Type]", cpy_r_r160); cpy_r_r161 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1524 = PyTuple_GET_ITEM(cpy_r_r160, 0);
        CPy_INCREF(__tmp1524);
        PyObject *__tmp1525;
        if (likely(PyObject_TypeCheck(__tmp1524, CPyType_nodes___Expression)))
            __tmp1525 = __tmp1524;
        else {
            CPy_TypeError("mypy.nodes.Expression", __tmp1524); 
            __tmp1525 = NULL;
        }
        cpy_r_r161.f0 = __tmp1525;
        PyObject *__tmp1526 = PyTuple_GET_ITEM(cpy_r_r160, 1);
        CPy_INCREF(__tmp1526);
        PyObject *__tmp1527;
        if (likely(PyObject_TypeCheck(__tmp1526, CPyType_types___Type)))
            __tmp1527 = __tmp1526;
        else {
            CPy_TypeError("mypy.types.Type", __tmp1526); 
            __tmp1527 = NULL;
        }
        cpy_r_r161.f1 = __tmp1527;
    }
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r161.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 191, CPyStatic_checkpattern___globals);
        goto CPyL146;
    }
    cpy_r_r162 = cpy_r_r161.f0;
    CPy_INCREF(cpy_r_r162);
    CPy_DECREF(cpy_r_r161.f0);
    CPy_DECREF(cpy_r_r161.f1);
    cpy_r_r163 = CPyDict_SetItem(cpy_r_captures, cpy_r_r162, cpy_r_typ);
    CPy_DECREF(cpy_r_r162);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r164 = cpy_r_r163 >= 0;
    if (unlikely(!cpy_r_r164)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 191, CPyStatic_checkpattern___globals);
        goto CPyL147;
    }
    cpy_r_r165 = CPyDict_CheckSize(cpy_r_capture_types, cpy_r_r135);
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 186, CPyStatic_checkpattern___globals);
        goto CPyL147;
    } else
        goto CPyL81;
CPyL95: ;
    cpy_r_r166 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 186, CPyStatic_checkpattern___globals);
        goto CPyL148;
    }
    cpy_r_r167 = CPY_INT_TAG;
    cpy_r_r168 = CPY_INT_TAG;
    cpy_r_r169 = 2;
    cpy_r_r170 = 2;
    cpy_r_r171 = CPyDef_typeops___make_simplified_union(cpy_r_types, cpy_r_r167, cpy_r_r168, cpy_r_r169, cpy_r_r170);
    CPy_DECREF(cpy_r_types);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 193, CPyStatic_checkpattern___globals);
        goto CPyL149;
    }
    cpy_r_union_type = cpy_r_r171;
    cpy_r_r172 = CPyStatic_checkpattern___globals;
    cpy_r_r173 = CPyStatics[1351]; /* 'PatternType' */
    cpy_r_r174 = CPyDict_GetItem(cpy_r_r172, cpy_r_r173);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 194, CPyStatic_checkpattern___globals);
        goto CPyL150;
    }
    PyObject *cpy_r_r175[3] = {cpy_r_union_type, cpy_r_current_type, cpy_r_captures};
    cpy_r_r176 = (PyObject **)&cpy_r_r175;
    cpy_r_r177 = _PyObject_Vectorcall(cpy_r_r174, cpy_r_r176, 3, 0);
    CPy_DECREF(cpy_r_r174);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 194, CPyStatic_checkpattern___globals);
        goto CPyL150;
    }
    CPy_DECREF(cpy_r_union_type);
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_captures);
    if (likely(PyTuple_Check(cpy_r_r177)))
        cpy_r_r178 = cpy_r_r177;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_or_pattern", 194, CPyStatic_checkpattern___globals, "tuple", cpy_r_r177);
        goto CPyL101;
    }
    return cpy_r_r178;
CPyL101: ;
    cpy_r_r179 = NULL;
    return cpy_r_r179;
CPyL102: ;
    CPy_DecRef(cpy_r_current_type);
    goto CPyL101;
CPyL103: ;
    CPy_DECREF(cpy_r_r4);
    goto CPyL13;
CPyL104: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_types);
    CPy_DecRef(cpy_r_r4);
    goto CPyL101;
CPyL105: ;
    CPy_DecRef(cpy_r_pattern_types);
    CPy_DecRef(cpy_r_r4);
    goto CPyL101;
CPyL106: ;
    CPy_DecRef(cpy_r_pattern_types);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_pattern_type);
    goto CPyL101;
CPyL107: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_types);
    goto CPyL101;
CPyL108: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_types);
    CPy_DecRef(cpy_r_types);
    goto CPyL101;
CPyL109: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_types);
    CPy_DecRef(cpy_r_pattern_type);
    CPy_DecRef(cpy_r_types);
    goto CPyL101;
CPyL110: ;
    CPy_DECREF(cpy_r_pattern_type);
    goto CPyL24;
CPyL111: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_types);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    goto CPyL101;
CPyL112: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_types);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_r45);
    goto CPyL101;
CPyL113: ;
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r50.f2);
    CPy_DECREF(cpy_r_r50.f3);
    goto CPyL41;
CPyL114: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_types);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r54);
    goto CPyL101;
CPyL115: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_types);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r55);
    goto CPyL101;
CPyL116: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_types);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_typ);
    goto CPyL101;
CPyL117: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_types);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r49);
    goto CPyL101;
CPyL118: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL101;
CPyL119: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r68);
    goto CPyL79;
CPyL120: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r68);
    goto CPyL101;
CPyL121: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r68);
    goto CPyL101;
CPyL122: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r76);
    goto CPyL101;
CPyL123: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r78);
    goto CPyL101;
CPyL124: ;
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r82);
    CPy_DECREF(cpy_r_r83.f2);
    CPy_DECREF(cpy_r_r83.f3);
    goto CPyL57;
CPyL125: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r87);
    goto CPyL101;
CPyL126: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r82);
    CPy_DecRef(cpy_r_r88);
    goto CPyL101;
CPyL127: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r76);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r82);
    goto CPyL101;
CPyL128: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_vars);
    goto CPyL101;
CPyL129: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL66;
CPyL130: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r98);
    goto CPyL101;
CPyL131: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_pattern_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_r68);
    goto CPyL101;
CPyL132: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_r68);
    goto CPyL101;
CPyL133: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r109);
    goto CPyL101;
CPyL134: ;
    CPy_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r114.f2);
    CPy_DECREF(cpy_r_r114.f3);
    goto CPyL77;
CPyL135: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r109);
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r118);
    goto CPyL101;
CPyL136: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r109);
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r119);
    goto CPyL101;
CPyL137: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_expr);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r109);
    CPy_DecRef(cpy_r_r113);
    goto CPyL101;
CPyL138: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r109);
    CPy_DecRef(cpy_r_r113);
    goto CPyL101;
CPyL139: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    goto CPyL101;
CPyL140: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_captures);
    goto CPyL101;
CPyL141: ;
    CPy_DECREF(cpy_r_capture_types);
    CPy_DECREF(cpy_r_r136);
    CPy_DECREF(cpy_r_r137.f2);
    CPy_DECREF(cpy_r_r137.f3);
    goto CPyL95;
CPyL142: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r141);
    goto CPyL101;
CPyL143: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r142);
    goto CPyL101;
CPyL144: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_capture_list);
    goto CPyL101;
CPyL145: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_capture_list);
    goto CPyL101;
CPyL146: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r136);
    goto CPyL101;
CPyL147: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_capture_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r136);
    goto CPyL101;
CPyL148: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_captures);
    goto CPyL101;
CPyL149: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    goto CPyL101;
CPyL150: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_union_type);
    goto CPyL101;
}

PyObject *CPyPy_checkpattern___PatternChecker___visit_or_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_or_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___OrPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.OrPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___visit_or_pattern(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern", 147, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___visit_or_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_checkpattern___PatternChecker___visit_or_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_checkpattern___PatternChecker___visit_or_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_or_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___OrPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.OrPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___visit_or_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "visit_or_pattern__PatternVisitor_glue", -1, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___visit_value_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_current_type;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    CPyPtr cpy_r_r16;
    tuple_T2OO cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    tuple_T2OO cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_narrowed_type;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_rest_type;
    PyObject *cpy_r_r25;
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
    CPyPtr cpy_r_r36;
    CPyPtr cpy_r_r37;
    CPyPtr cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    cpy_r_r0 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_type_context;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_value_pattern", "PatternChecker", "type_context", 197, CPyStatic_checkpattern___globals);
        goto CPyL30;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern", 197, CPyStatic_checkpattern___globals);
        goto CPyL30;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_value_pattern", 197, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL30;
    }
    cpy_r_current_type = cpy_r_r2;
    cpy_r_r3 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_value_pattern", "PatternChecker", "chk", 198, CPyStatic_checkpattern___globals);
        goto CPyL31;
    }
CPyL4: ;
    cpy_r_r4 = ((mypy___checker___TypeCheckerObject *)cpy_r_r3)->_expr_checker;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_value_pattern", "TypeChecker", "expr_checker", 198, CPyStatic_checkpattern___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_r5 = ((mypy___patterns___ValuePatternObject *)cpy_r_o)->_expr;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = NULL;
    cpy_r_r7 = 2;
    cpy_r_r8 = 2;
    cpy_r_r9 = 2;
    cpy_r_r10 = CPyDef_checkexpr___ExpressionChecker___accept(cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern", 198, CPyStatic_checkpattern___globals);
        goto CPyL31;
    }
    cpy_r_typ = cpy_r_r10;
    cpy_r_r11 = CPyDef_typeops___coerce_to_literal(cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern", 199, CPyStatic_checkpattern___globals);
        goto CPyL31;
    }
    cpy_r_typ = cpy_r_r11;
    cpy_r_r12 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_value_pattern", "PatternChecker", "chk", 200, CPyStatic_checkpattern___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r12);
CPyL8: ;
    cpy_r_r13 = CPyDef_checkpattern___get_type_range(cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern", 201, CPyStatic_checkpattern___globals);
        goto CPyL33;
    }
    cpy_r_r14 = PyList_New(1);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern", 201, CPyStatic_checkpattern___globals);
        goto CPyL34;
    }
    cpy_r_r15 = (CPyPtr)&((PyListObject *)cpy_r_r14)->ob_item;
    cpy_r_r16 = *(CPyPtr *)cpy_r_r15;
    *(PyObject * *)cpy_r_r16 = cpy_r_r13;
    cpy_r_r17 = CPyDef_checker___TypeChecker___conditional_types_with_intersection(cpy_r_r12, cpy_r_current_type, cpy_r_r14, cpy_r_o, cpy_r_current_type);
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r17.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern", 200, CPyStatic_checkpattern___globals);
        goto CPyL30;
    }
    cpy_r_r18 = cpy_r_r17.f0;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = cpy_r_r17.f1;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r17.f0);
    CPy_DECREF(cpy_r_r17.f1);
    if (likely(cpy_r_r18 != Py_None))
        cpy_r_r20 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_value_pattern", 200, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r18);
        goto CPyL35;
    }
    if (likely(cpy_r_r19 != Py_None))
        cpy_r_r21 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_value_pattern", 200, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r19);
        goto CPyL36;
    }
    cpy_r_r22.f0 = cpy_r_r20;
    cpy_r_r22.f1 = cpy_r_r21;
    CPy_INCREF(cpy_r_r22.f0);
    CPy_INCREF(cpy_r_r22.f1);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22.f0;
    CPy_INCREF(cpy_r_r23);
    cpy_r_narrowed_type = cpy_r_r23;
    cpy_r_r24 = cpy_r_r22.f1;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r22.f0);
    CPy_DECREF(cpy_r_r22.f1);
    cpy_r_rest_type = cpy_r_r24;
    cpy_r_r25 = CPyDef_types___get_proper_type(cpy_r_narrowed_type);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern", 203, CPyStatic_checkpattern___globals);
        goto CPyL37;
    }
    cpy_r_r26 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r27 = (CPyPtr)&((PyObject *)cpy_r_r25)->ob_type;
    cpy_r_r28 = *(PyObject * *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 == cpy_r_r26;
    if (cpy_r_r29) {
        goto CPyL38;
    } else
        goto CPyL16;
CPyL15: ;
    cpy_r_r30 = cpy_r_r29;
    goto CPyL17;
CPyL16: ;
    cpy_r_r31 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_r25)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    CPy_DECREF(cpy_r_r25);
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    cpy_r_r30 = cpy_r_r34;
CPyL17: ;
    if (cpy_r_r30) goto CPyL25;
    cpy_r_r35 = PyList_New(2);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern", 204, CPyStatic_checkpattern___globals);
        goto CPyL37;
    }
    cpy_r_r36 = (CPyPtr)&((PyListObject *)cpy_r_r35)->ob_item;
    cpy_r_r37 = *(CPyPtr *)cpy_r_r36;
    CPy_INCREF(cpy_r_narrowed_type);
    *(PyObject * *)cpy_r_r37 = cpy_r_narrowed_type;
    cpy_r_r38 = cpy_r_r37 + 8;
    *(PyObject * *)cpy_r_r38 = cpy_r_rest_type;
    cpy_r_r39 = CPY_INT_TAG;
    cpy_r_r40 = CPY_INT_TAG;
    cpy_r_r41 = CPyDef_types___UnionType___make_union(cpy_r_r35, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern", 204, CPyStatic_checkpattern___globals);
        goto CPyL39;
    }
    cpy_r_r42 = PyDict_New();
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern", 204, CPyStatic_checkpattern___globals);
        goto CPyL40;
    }
    cpy_r_r43 = CPyStatic_checkpattern___globals;
    cpy_r_r44 = CPyStatics[1351]; /* 'PatternType' */
    cpy_r_r45 = CPyDict_GetItem(cpy_r_r43, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern", 204, CPyStatic_checkpattern___globals);
        goto CPyL41;
    }
    PyObject *cpy_r_r46[3] = {cpy_r_narrowed_type, cpy_r_r41, cpy_r_r42};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = _PyObject_Vectorcall(cpy_r_r45, cpy_r_r47, 3, 0);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern", 204, CPyStatic_checkpattern___globals);
        goto CPyL41;
    }
    CPy_DECREF(cpy_r_narrowed_type);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r42);
    if (likely(PyTuple_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_value_pattern", 204, CPyStatic_checkpattern___globals, "tuple", cpy_r_r48);
        goto CPyL30;
    }
    return cpy_r_r49;
CPyL25: ;
    cpy_r_r50 = PyDict_New();
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern", 205, CPyStatic_checkpattern___globals);
        goto CPyL37;
    }
    cpy_r_r51 = CPyStatic_checkpattern___globals;
    cpy_r_r52 = CPyStatics[1351]; /* 'PatternType' */
    cpy_r_r53 = CPyDict_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern", 205, CPyStatic_checkpattern___globals);
        goto CPyL42;
    }
    PyObject *cpy_r_r54[3] = {cpy_r_narrowed_type, cpy_r_rest_type, cpy_r_r50};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = _PyObject_Vectorcall(cpy_r_r53, cpy_r_r55, 3, 0);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern", 205, CPyStatic_checkpattern___globals);
        goto CPyL42;
    }
    CPy_DECREF(cpy_r_narrowed_type);
    CPy_DECREF(cpy_r_rest_type);
    CPy_DECREF(cpy_r_r50);
    if (likely(PyTuple_Check(cpy_r_r56)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_value_pattern", 205, CPyStatic_checkpattern___globals, "tuple", cpy_r_r56);
        goto CPyL30;
    }
    return cpy_r_r57;
CPyL30: ;
    cpy_r_r58 = NULL;
    return cpy_r_r58;
CPyL31: ;
    CPy_DecRef(cpy_r_current_type);
    goto CPyL30;
CPyL32: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    goto CPyL30;
CPyL33: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_r12);
    goto CPyL30;
CPyL34: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    goto CPyL30;
CPyL35: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL30;
CPyL36: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL30;
CPyL37: ;
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_rest_type);
    goto CPyL30;
CPyL38: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL15;
CPyL39: ;
    CPy_DecRef(cpy_r_narrowed_type);
    goto CPyL30;
CPyL40: ;
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_r41);
    goto CPyL30;
CPyL41: ;
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    goto CPyL30;
CPyL42: ;
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_r50);
    goto CPyL30;
}

PyObject *CPyPy_checkpattern___PatternChecker___visit_value_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_value_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ValuePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ValuePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___visit_value_pattern(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern", 196, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___visit_value_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_checkpattern___PatternChecker___visit_value_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_checkpattern___PatternChecker___visit_value_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_value_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ValuePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ValuePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___visit_value_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "visit_value_pattern__PatternVisitor_glue", -1, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___visit_singleton_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_current_type;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    CPyPtr cpy_r_r32;
    tuple_T2OO cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    tuple_T2OO cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_narrowed_type;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_rest_type;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    cpy_r_r0 = NULL;
    cpy_r_typ = cpy_r_r0;
    cpy_r_r1 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_type_context;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_singleton_pattern", "PatternChecker", "type_context", 208, CPyStatic_checkpattern___globals);
        goto CPyL33;
    }
CPyL1: ;
    cpy_r_r2 = CPyList_GetItemShort(cpy_r_r1, -2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 208, CPyStatic_checkpattern___globals);
        goto CPyL33;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r2, CPyType_types___Type)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 208, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r2);
        goto CPyL33;
    }
    cpy_r_current_type = cpy_r_r3;
    cpy_r_r4 = ((mypy___patterns___SingletonPatternObject *)cpy_r_o)->_value;
    CPy_INCREF(cpy_r_r4);
    cpy_r_value = cpy_r_r4;
    cpy_r_r5 = (PyObject *)&PyBool_Type;
    cpy_r_r6 = PyObject_IsInstance(cpy_r_value, cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 210, CPyStatic_checkpattern___globals);
        goto CPyL34;
    }
    cpy_r_r8 = cpy_r_r6;
    if (cpy_r_r8) {
        goto CPyL35;
    } else
        goto CPyL10;
CPyL5: ;
    cpy_r_r9 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_singleton_pattern", "PatternChecker", "chk", 211, CPyStatic_checkpattern___globals);
        goto CPyL36;
    }
CPyL6: ;
    cpy_r_r10 = ((mypy___checker___TypeCheckerObject *)cpy_r_r9)->_expr_checker;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_singleton_pattern", "TypeChecker", "expr_checker", 211, CPyStatic_checkpattern___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r10);
CPyL7: ;
    if (unlikely(!PyBool_Check(cpy_r_value))) {
        CPy_TypeError("bool", cpy_r_value); cpy_r_r11 = 2;
    } else
        cpy_r_r11 = cpy_r_value == Py_True;
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 211, CPyStatic_checkpattern___globals);
        goto CPyL37;
    }
    cpy_r_r12 = CPyStatics[831]; /* 'builtins.bool' */
    cpy_r_r13 = cpy_r_r11 ? Py_True : Py_False;
    cpy_r_r14 = CPyDef_checkexpr___ExpressionChecker___infer_literal_expr_type(cpy_r_r10, cpy_r_r13, cpy_r_r12);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 211, CPyStatic_checkpattern___globals);
        goto CPyL38;
    }
    cpy_r_typ = cpy_r_r14;
    goto CPyL18;
CPyL10: ;
    if (unlikely(cpy_r_value != Py_None)) {
        CPy_TypeError("None", cpy_r_value); cpy_r_r15 = 2;
    } else
        cpy_r_r15 = 1;
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 212, CPyStatic_checkpattern___globals);
        goto CPyL39;
    }
    cpy_r_r16 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r17 = Py_None;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r16;
    if (cpy_r_r18) {
        goto CPyL40;
    } else
        goto CPyL14;
CPyL12: ;
    cpy_r_r19 = CPY_INT_TAG;
    cpy_r_r20 = CPY_INT_TAG;
    cpy_r_r21 = CPyDef_types___NoneType(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 213, CPyStatic_checkpattern___globals);
        goto CPyL38;
    }
    cpy_r_typ = cpy_r_r21;
    goto CPyL18;
CPyL14: ;
    cpy_r_r22 = 0 ? Py_True : Py_False;
    cpy_r_r23 = PyObject_IsTrue(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern", -1, CPyStatic_checkpattern___globals);
        goto CPyL39;
    }
    cpy_r_r25 = cpy_r_r23;
    if (cpy_r_r25) {
        goto CPyL18;
    } else
        goto CPyL41;
CPyL16: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 215, CPyStatic_checkpattern___globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r27 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_singleton_pattern", "PatternChecker", "chk", 217, CPyStatic_checkpattern___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r27);
CPyL19: ;
    if (cpy_r_typ == NULL) {
        goto CPyL42;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"typ\" referenced before assignment");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 218, CPyStatic_checkpattern___globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r29 = CPyDef_checkpattern___get_type_range(cpy_r_typ);
    CPy_XDECREF(cpy_r_typ);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 218, CPyStatic_checkpattern___globals);
        goto CPyL43;
    }
    cpy_r_r30 = PyList_New(1);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 218, CPyStatic_checkpattern___globals);
        goto CPyL44;
    }
    cpy_r_r31 = (CPyPtr)&((PyListObject *)cpy_r_r30)->ob_item;
    cpy_r_r32 = *(CPyPtr *)cpy_r_r31;
    *(PyObject * *)cpy_r_r32 = cpy_r_r29;
    cpy_r_r33 = CPyDef_checker___TypeChecker___conditional_types_with_intersection(cpy_r_r27, cpy_r_current_type, cpy_r_r30, cpy_r_o, cpy_r_current_type);
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r33.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 217, CPyStatic_checkpattern___globals);
        goto CPyL32;
    }
    cpy_r_r34 = cpy_r_r33.f0;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = cpy_r_r33.f1;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r33.f0);
    CPy_DECREF(cpy_r_r33.f1);
    if (likely(cpy_r_r34 != Py_None))
        cpy_r_r36 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 217, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r34);
        goto CPyL45;
    }
    if (likely(cpy_r_r35 != Py_None))
        cpy_r_r37 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 217, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r35);
        goto CPyL46;
    }
    cpy_r_r38.f0 = cpy_r_r36;
    cpy_r_r38.f1 = cpy_r_r37;
    CPy_INCREF(cpy_r_r38.f0);
    CPy_INCREF(cpy_r_r38.f1);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38.f0;
    CPy_INCREF(cpy_r_r39);
    cpy_r_narrowed_type = cpy_r_r39;
    cpy_r_r40 = cpy_r_r38.f1;
    CPy_INCREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r38.f0);
    CPy_DECREF(cpy_r_r38.f1);
    cpy_r_rest_type = cpy_r_r40;
    cpy_r_r41 = PyDict_New();
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 220, CPyStatic_checkpattern___globals);
        goto CPyL47;
    }
    cpy_r_r42 = CPyStatic_checkpattern___globals;
    cpy_r_r43 = CPyStatics[1351]; /* 'PatternType' */
    cpy_r_r44 = CPyDict_GetItem(cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 220, CPyStatic_checkpattern___globals);
        goto CPyL48;
    }
    PyObject *cpy_r_r45[3] = {cpy_r_narrowed_type, cpy_r_rest_type, cpy_r_r41};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = _PyObject_Vectorcall(cpy_r_r44, cpy_r_r46, 3, 0);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 220, CPyStatic_checkpattern___globals);
        goto CPyL48;
    }
    CPy_DECREF(cpy_r_narrowed_type);
    CPy_DECREF(cpy_r_rest_type);
    CPy_DECREF(cpy_r_r41);
    if (likely(PyTuple_Check(cpy_r_r47)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 220, CPyStatic_checkpattern___globals, "tuple", cpy_r_r47);
        goto CPyL32;
    }
    return cpy_r_r48;
CPyL32: ;
    cpy_r_r49 = NULL;
    return cpy_r_r49;
CPyL33: ;
    CPy_XDecRef(cpy_r_typ);
    goto CPyL32;
CPyL34: ;
    CPy_XDecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_value);
    goto CPyL32;
CPyL35: ;
    CPy_XDECREF(cpy_r_typ);
    goto CPyL5;
CPyL36: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_value);
    goto CPyL32;
CPyL37: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_r10);
    goto CPyL32;
CPyL38: ;
    CPy_DecRef(cpy_r_current_type);
    goto CPyL32;
CPyL39: ;
    CPy_XDecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_current_type);
    goto CPyL32;
CPyL40: ;
    CPy_XDECREF(cpy_r_typ);
    goto CPyL12;
CPyL41: ;
    CPy_XDECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_current_type);
    goto CPyL16;
CPyL42: ;
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_r27);
    goto CPyL20;
CPyL43: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_r27);
    goto CPyL32;
CPyL44: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r29);
    goto CPyL32;
CPyL45: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL32;
CPyL46: ;
    CPy_DecRef(cpy_r_r36);
    goto CPyL32;
CPyL47: ;
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_rest_type);
    goto CPyL32;
CPyL48: ;
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_r41);
    goto CPyL32;
}

PyObject *CPyPy_checkpattern___PatternChecker___visit_singleton_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_singleton_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SingletonPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SingletonPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___visit_singleton_pattern(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern", 207, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___visit_singleton_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_checkpattern___PatternChecker___visit_singleton_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_checkpattern___PatternChecker___visit_singleton_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_singleton_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SingletonPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SingletonPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___visit_singleton_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "visit_singleton_pattern__PatternVisitor_glue", -1, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___visit_sequence_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_current_type;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_p;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_star_positions;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_star_position;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    int64_t cpy_r_r35;
    CPyTagged cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    int64_t cpy_r_r41;
    CPyTagged cpy_r_r42;
    CPyTagged cpy_r_required_patterns;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_inner_types;
    CPyPtr cpy_r_r52;
    int64_t cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyTagged cpy_r_r55;
    CPyTagged cpy_r_size_diff;
    int64_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    int64_t cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_inner_type;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyPtr cpy_r_r76;
    CPyPtr cpy_r_r77;
    PyObject *cpy_r_r78;
    CPyPtr cpy_r_r79;
    int64_t cpy_r_r80;
    CPyTagged cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_contracted_new_inner_types;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_contracted_rest_inner_types;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_captures;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_contracted_inner_types;
    PyObject *cpy_r_r87;
    CPyTagged cpy_r_r88;
    CPyTagged cpy_r_r89;
    CPyPtr cpy_r_r90;
    int64_t cpy_r_r91;
    CPyTagged cpy_r_r92;
    char cpy_r_r93;
    CPyPtr cpy_r_r94;
    int64_t cpy_r_r95;
    CPyTagged cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_p_2;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_pattern_type;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_rest;
    PyObject *cpy_r_type_map;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    CPyTagged cpy_r_r116;
    CPyTagged cpy_r_r117;
    CPyPtr cpy_r_r118;
    int64_t cpy_r_r119;
    CPyTagged cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_new_inner_types;
    CPyPtr cpy_r_r122;
    int64_t cpy_r_r123;
    CPyTagged cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_rest_inner_types;
    PyObject *cpy_r_rest_type;
    PyObject *cpy_r_r126;
    CPyPtr cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_narrowed_inner_types;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_inner_rest_types;
    CPyTagged cpy_r_r132;
    CPyTagged cpy_r_r133;
    CPyPtr cpy_r_r134;
    int64_t cpy_r_r135;
    CPyTagged cpy_r_r136;
    char cpy_r_r137;
    CPyPtr cpy_r_r138;
    int64_t cpy_r_r139;
    CPyTagged cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_new_inner_type;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    CPyPtr cpy_r_r150;
    CPyPtr cpy_r_r151;
    tuple_T2OO cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    tuple_T2OO cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_narrowed_inner_type;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_inner_rest_type;
    int32_t cpy_r_r160;
    char cpy_r_r161;
    int32_t cpy_r_r162;
    char cpy_r_r163;
    CPyTagged cpy_r_r164;
    CPyTagged cpy_r_r165;
    char cpy_r_r166;
    CPyTagged cpy_r_r167;
    CPyPtr cpy_r_r168;
    int64_t cpy_r_r169;
    CPyTagged cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_typ_2;
    char cpy_r_r174;
    char cpy_r_r175;
    char cpy_r_r176;
    CPyTagged cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    CPyTagged cpy_r_r180;
    CPyTagged cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_new_type;
    char cpy_r_r184;
    CPyTagged cpy_r_r185;
    CPyTagged cpy_r_r186;
    PyObject *cpy_r_r187;
    char cpy_r_r188;
    CPyTagged cpy_r_r189;
    CPyPtr cpy_r_r190;
    int64_t cpy_r_r191;
    CPyTagged cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_typ_3;
    char cpy_r_r196;
    char cpy_r_r197;
    CPyTagged cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    CPyTagged cpy_r_r201;
    CPyTagged cpy_r_r202;
    char cpy_r_r203;
    PyObject *cpy_r_r204;
    char cpy_r_r205;
    CPyTagged cpy_r_r206;
    CPyTagged cpy_r_r207;
    PyObject *cpy_r_r208;
    CPyTagged cpy_r_r209;
    CPyPtr cpy_r_r210;
    int64_t cpy_r_r211;
    CPyTagged cpy_r_r212;
    char cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    CPyTagged cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    char cpy_r_r221;
    char cpy_r_r222;
    char cpy_r_r223;
    char cpy_r_r224;
    char cpy_r_r225;
    PyObject *cpy_r_r226;
    char cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    CPyPtr cpy_r_r231;
    CPyPtr cpy_r_r232;
    tuple_T2OO cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    tuple_T2OO cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r__;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject **cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    cpy_r_r0 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_type_context;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_sequence_pattern", "PatternChecker", "type_context", 226, CPyStatic_checkpattern___globals);
        goto CPyL135;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 226, CPyStatic_checkpattern___globals);
        goto CPyL135;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 226, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL135;
    }
    cpy_r_r3 = CPyDef_types___get_proper_type(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 226, CPyStatic_checkpattern___globals);
        goto CPyL135;
    }
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 226, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_r3);
        goto CPyL135;
    }
    cpy_r_current_type = cpy_r_r4;
    cpy_r_r5 = CPyDef_checkpattern___PatternChecker___can_match_sequence(cpy_r_self, cpy_r_current_type);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 227, CPyStatic_checkpattern___globals);
        goto CPyL136;
    }
    if (cpy_r_r5) {
        goto CPyL9;
    } else
        goto CPyL137;
CPyL7: ;
    cpy_r_r6 = CPyDef_checkpattern___PatternChecker___early_non_match(cpy_r_self);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 228, CPyStatic_checkpattern___globals);
        goto CPyL135;
    }
    return cpy_r_r6;
CPyL9: ;
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 229, CPyStatic_checkpattern___globals);
        goto CPyL136;
    }
    cpy_r_r8 = 0;
    cpy_r_i = 0;
    cpy_r_r9 = ((mypy___patterns___SequencePatternObject *)cpy_r_o)->_patterns;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = 0;
CPyL11: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL138;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r9, cpy_r_r10);
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_patterns___Pattern)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 229, CPyStatic_checkpattern___globals, "mypy.patterns.Pattern", cpy_r_r15);
        goto CPyL139;
    }
    cpy_r_p = cpy_r_r16;
    cpy_r_r17 = (PyObject *)CPyType_patterns___StarredPattern;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_p)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    CPy_DECREF(cpy_r_p);
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (!cpy_r_r20) goto CPyL140;
    cpy_r_r21 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r22 = PyList_Append(cpy_r_r7, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 229, CPyStatic_checkpattern___globals);
        goto CPyL141;
    }
CPyL15: ;
    cpy_r_r24 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r24;
    cpy_r_i = cpy_r_r24;
    cpy_r_r25 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r25;
    goto CPyL11;
CPyL16: ;
    cpy_r_star_positions = cpy_r_r7;
    cpy_r_r26 = Py_None;
    CPy_INCREF(cpy_r_r26);
    cpy_r_star_position = cpy_r_r26;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_star_positions)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = cpy_r_r29 == 2;
    if (cpy_r_r30) {
        goto CPyL142;
    } else
        goto CPyL20;
CPyL17: ;
    cpy_r_r31 = CPyList_GetItemShort(cpy_r_star_positions, 0);
    CPy_DECREF(cpy_r_star_positions);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 232, CPyStatic_checkpattern___globals);
        goto CPyL136;
    }
    if (likely(PyLong_Check(cpy_r_r31)))
        cpy_r_r32 = CPyTagged_FromObject(cpy_r_r31);
    else {
        CPy_TypeError("int", cpy_r_r31); cpy_r_r32 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 232, CPyStatic_checkpattern___globals);
        goto CPyL136;
    }
    cpy_r_r33 = CPyTagged_StealAsObject(cpy_r_r32);
    cpy_r_star_position = cpy_r_r33;
    goto CPyL24;
CPyL20: ;
    cpy_r_r34 = (CPyPtr)&((PyVarObject *)cpy_r_star_positions)->ob_size;
    cpy_r_r35 = *(int64_t *)cpy_r_r34;
    CPy_DECREF(cpy_r_star_positions);
    cpy_r_r36 = cpy_r_r35 << 1;
    cpy_r_r37 = (Py_ssize_t)cpy_r_r36 >= (Py_ssize_t)4;
    if (!cpy_r_r37) goto CPyL24;
    if (0) {
        goto CPyL24;
    } else
        goto CPyL143;
CPyL22: ;
    PyErr_SetString(PyExc_AssertionError, "Parser should prevent multiple starred patterns");
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 234, CPyStatic_checkpattern___globals);
        goto CPyL135;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r39 = ((mypy___patterns___SequencePatternObject *)cpy_r_o)->_patterns;
    cpy_r_r40 = (CPyPtr)&((PyVarObject *)cpy_r_r39)->ob_size;
    cpy_r_r41 = *(int64_t *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 << 1;
    cpy_r_required_patterns = cpy_r_r42;
    cpy_r_r43 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r44 = cpy_r_star_position != cpy_r_r43;
    if (!cpy_r_r44) goto CPyL26;
    cpy_r_r45 = CPyTagged_Subtract(cpy_r_required_patterns, 2);
    CPyTagged_DECREF(cpy_r_required_patterns);
    cpy_r_required_patterns = cpy_r_r45;
CPyL26: ;
    cpy_r_r46 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r47 = (CPyPtr)&((PyObject *)cpy_r_current_type)->ob_type;
    cpy_r_r48 = *(PyObject * *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 == cpy_r_r46;
    if (!cpy_r_r49) goto CPyL39;
    if (likely(Py_TYPE(cpy_r_current_type) == CPyType_types___TupleType))
        cpy_r_r50 = cpy_r_current_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 243, CPyStatic_checkpattern___globals, "mypy.types.TupleType", cpy_r_current_type);
        goto CPyL144;
    }
    cpy_r_r51 = ((mypy___types___TupleTypeObject *)cpy_r_r50)->_items;
    CPy_INCREF(cpy_r_r51);
    cpy_r_inner_types = cpy_r_r51;
    cpy_r_r52 = (CPyPtr)&((PyVarObject *)cpy_r_inner_types)->ob_size;
    cpy_r_r53 = *(int64_t *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 << 1;
    cpy_r_r55 = CPyTagged_Subtract(cpy_r_r54, cpy_r_required_patterns);
    cpy_r_size_diff = cpy_r_r55;
    cpy_r_r56 = cpy_r_size_diff & 1;
    cpy_r_r57 = cpy_r_r56 != 0;
    if (!cpy_r_r57) goto CPyL30;
    cpy_r_r58 = CPyTagged_IsLt_(cpy_r_size_diff, 0);
    if (cpy_r_r58) {
        goto CPyL145;
    } else
        goto CPyL33;
CPyL30: ;
    cpy_r_r59 = (Py_ssize_t)cpy_r_size_diff < (Py_ssize_t)0;
    if (cpy_r_r59) {
        goto CPyL145;
    } else
        goto CPyL33;
CPyL31: ;
    cpy_r_r60 = CPyDef_checkpattern___PatternChecker___early_non_match(cpy_r_self);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 246, CPyStatic_checkpattern___globals);
        goto CPyL135;
    }
    return cpy_r_r60;
CPyL33: ;
    cpy_r_r61 = cpy_r_size_diff & 1;
    cpy_r_r62 = cpy_r_r61 != 0;
    if (!cpy_r_r62) goto CPyL35;
    cpy_r_r63 = CPyTagged_IsLt_(0, cpy_r_size_diff);
    CPyTagged_DECREF(cpy_r_size_diff);
    if (cpy_r_r63) {
        goto CPyL36;
    } else
        goto CPyL48;
CPyL35: ;
    cpy_r_r64 = (Py_ssize_t)cpy_r_size_diff > (Py_ssize_t)0;
    CPyTagged_DECREF(cpy_r_size_diff);
    if (!cpy_r_r64) goto CPyL48;
CPyL36: ;
    cpy_r_r65 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r66 = cpy_r_star_position == cpy_r_r65;
    if (cpy_r_r66) {
        goto CPyL146;
    } else
        goto CPyL48;
CPyL37: ;
    cpy_r_r67 = CPyDef_checkpattern___PatternChecker___early_non_match(cpy_r_self);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 248, CPyStatic_checkpattern___globals);
        goto CPyL135;
    }
    return cpy_r_r67;
CPyL39: ;
    cpy_r_r68 = CPyDef_checkpattern___PatternChecker___get_sequence_type(cpy_r_self, cpy_r_current_type, cpy_r_o);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 250, CPyStatic_checkpattern___globals);
        goto CPyL144;
    }
    cpy_r_inner_type = cpy_r_r68;
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = cpy_r_inner_type == cpy_r_r69;
    if (cpy_r_r70) {
        goto CPyL147;
    } else
        goto CPyL44;
CPyL41: ;
    cpy_r_r71 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_sequence_pattern", "PatternChecker", "chk", 252, CPyStatic_checkpattern___globals);
        goto CPyL144;
    }
    CPy_INCREF(cpy_r_r71);
CPyL42: ;
    cpy_r_r72 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r73 = CPyDef_checker___TypeChecker___named_type(cpy_r_r71, cpy_r_r72);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 252, CPyStatic_checkpattern___globals);
        goto CPyL144;
    }
    cpy_r_inner_type = cpy_r_r73;
CPyL44: ;
    if (likely(cpy_r_inner_type != Py_None))
        cpy_r_r74 = cpy_r_inner_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 253, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_inner_type);
        goto CPyL144;
    }
    cpy_r_r75 = PyList_New(1);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 253, CPyStatic_checkpattern___globals);
        goto CPyL148;
    }
    cpy_r_r76 = (CPyPtr)&((PyListObject *)cpy_r_r75)->ob_item;
    cpy_r_r77 = *(CPyPtr *)cpy_r_r76;
    *(PyObject * *)cpy_r_r77 = cpy_r_r74;
    cpy_r_r78 = ((mypy___patterns___SequencePatternObject *)cpy_r_o)->_patterns;
    cpy_r_r79 = (CPyPtr)&((PyVarObject *)cpy_r_r78)->ob_size;
    cpy_r_r80 = *(int64_t *)cpy_r_r79;
    cpy_r_r81 = cpy_r_r80 << 1;
    cpy_r_r82 = CPySequence_Multiply(cpy_r_r75, cpy_r_r81);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 253, CPyStatic_checkpattern___globals);
        goto CPyL144;
    }
    cpy_r_inner_types = cpy_r_r82;
CPyL48: ;
    cpy_r_r83 = PyList_New(0);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 258, CPyStatic_checkpattern___globals);
        goto CPyL149;
    }
    cpy_r_contracted_new_inner_types = cpy_r_r83;
    cpy_r_r84 = PyList_New(0);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 259, CPyStatic_checkpattern___globals);
        goto CPyL150;
    }
    cpy_r_contracted_rest_inner_types = cpy_r_r84;
    cpy_r_r85 = PyDict_New();
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 260, CPyStatic_checkpattern___globals);
        goto CPyL151;
    }
    cpy_r_captures = cpy_r_r85;
    cpy_r_r86 = CPyDef_checkpattern___PatternChecker___contract_starred_pattern_types(cpy_r_self, cpy_r_inner_types, cpy_r_star_position, cpy_r_required_patterns);
    CPyTagged_DECREF(cpy_r_required_patterns);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 262, CPyStatic_checkpattern___globals);
        goto CPyL152;
    }
    cpy_r_contracted_inner_types = cpy_r_r86;
    cpy_r_r87 = ((mypy___patterns___SequencePatternObject *)cpy_r_o)->_patterns;
    CPy_INCREF(cpy_r_r87);
    cpy_r_r88 = 0;
    cpy_r_r89 = 0;
CPyL53: ;
    cpy_r_r90 = (CPyPtr)&((PyVarObject *)cpy_r_r87)->ob_size;
    cpy_r_r91 = *(int64_t *)cpy_r_r90;
    cpy_r_r92 = cpy_r_r91 << 1;
    cpy_r_r93 = (Py_ssize_t)cpy_r_r88 < (Py_ssize_t)cpy_r_r92;
    if (!cpy_r_r93) goto CPyL153;
    cpy_r_r94 = (CPyPtr)&((PyVarObject *)cpy_r_contracted_inner_types)->ob_size;
    cpy_r_r95 = *(int64_t *)cpy_r_r94;
    cpy_r_r96 = cpy_r_r95 << 1;
    cpy_r_r97 = (Py_ssize_t)cpy_r_r89 < (Py_ssize_t)cpy_r_r96;
    if (!cpy_r_r97) goto CPyL153;
    cpy_r_r98 = CPyList_GetItemUnsafe(cpy_r_r87, cpy_r_r88);
    if (likely(PyObject_TypeCheck(cpy_r_r98, CPyType_patterns___Pattern)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 265, CPyStatic_checkpattern___globals, "mypy.patterns.Pattern", cpy_r_r98);
        goto CPyL154;
    }
    cpy_r_p_2 = cpy_r_r99;
    cpy_r_r100 = CPyList_GetItemUnsafe(cpy_r_contracted_inner_types, cpy_r_r89);
    if (likely(PyObject_TypeCheck(cpy_r_r100, CPyType_types___Type)))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 265, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r100);
        goto CPyL155;
    }
    cpy_r_t = cpy_r_r101;
    cpy_r_r102 = CPyDef_checkpattern___PatternChecker___accept(cpy_r_self, cpy_r_p_2, cpy_r_t);
    CPy_DECREF(cpy_r_p_2);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 266, CPyStatic_checkpattern___globals);
        goto CPyL154;
    }
    cpy_r_pattern_type = cpy_r_r102;
    cpy_r_r103 = CPySequence_CheckUnpackCount(cpy_r_pattern_type, 3);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 267, CPyStatic_checkpattern___globals);
        goto CPyL156;
    }
    cpy_r_r105 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 0);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 267, CPyStatic_checkpattern___globals);
        goto CPyL156;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r105, CPyType_types___Type)))
        cpy_r_r106 = cpy_r_r105;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 267, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r105);
        goto CPyL156;
    }
    cpy_r_r107 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 2);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 267, CPyStatic_checkpattern___globals);
        goto CPyL157;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r107, CPyType_types___Type)))
        cpy_r_r108 = cpy_r_r107;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 267, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r107);
        goto CPyL157;
    }
    cpy_r_r109 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 4);
    CPy_DECREF(cpy_r_pattern_type);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 267, CPyStatic_checkpattern___globals);
        goto CPyL158;
    }
    if (likely(PyDict_Check(cpy_r_r109)))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 267, CPyStatic_checkpattern___globals, "dict", cpy_r_r109);
        goto CPyL158;
    }
    cpy_r_typ = cpy_r_r106;
    cpy_r_rest = cpy_r_r108;
    cpy_r_type_map = cpy_r_r110;
    cpy_r_r111 = PyList_Append(cpy_r_contracted_new_inner_types, cpy_r_typ);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 268, CPyStatic_checkpattern___globals);
        goto CPyL159;
    }
    cpy_r_r113 = PyList_Append(cpy_r_contracted_rest_inner_types, cpy_r_rest);
    CPy_DECREF(cpy_r_rest);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 269, CPyStatic_checkpattern___globals);
        goto CPyL160;
    }
    cpy_r_r115 = CPyDef_checkpattern___PatternChecker___update_type_map(cpy_r_self, cpy_r_captures, cpy_r_type_map);
    CPy_DECREF(cpy_r_type_map);
    if (unlikely(cpy_r_r115 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 270, CPyStatic_checkpattern___globals);
        goto CPyL154;
    }
    cpy_r_r116 = cpy_r_r88 + 2;
    cpy_r_r88 = cpy_r_r116;
    cpy_r_r117 = cpy_r_r89 + 2;
    cpy_r_r89 = cpy_r_r117;
    goto CPyL53;
CPyL69: ;
    cpy_r_r118 = (CPyPtr)&((PyVarObject *)cpy_r_inner_types)->ob_size;
    cpy_r_r119 = *(int64_t *)cpy_r_r118;
    cpy_r_r120 = cpy_r_r119 << 1;
    cpy_r_r121 = CPyDef_checkpattern___PatternChecker___expand_starred_pattern_types(cpy_r_self, cpy_r_contracted_new_inner_types, cpy_r_star_position, cpy_r_r120);
    CPy_DECREF(cpy_r_contracted_new_inner_types);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 272, CPyStatic_checkpattern___globals);
        goto CPyL161;
    }
    cpy_r_new_inner_types = cpy_r_r121;
    cpy_r_r122 = (CPyPtr)&((PyVarObject *)cpy_r_inner_types)->ob_size;
    cpy_r_r123 = *(int64_t *)cpy_r_r122;
    cpy_r_r124 = cpy_r_r123 << 1;
    cpy_r_r125 = CPyDef_checkpattern___PatternChecker___expand_starred_pattern_types(cpy_r_self, cpy_r_contracted_rest_inner_types, cpy_r_star_position, cpy_r_r124);
    CPy_DECREF(cpy_r_contracted_rest_inner_types);
    CPy_DECREF(cpy_r_star_position);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 275, CPyStatic_checkpattern___globals);
        goto CPyL162;
    }
    cpy_r_rest_inner_types = cpy_r_r125;
    CPy_INCREF(cpy_r_current_type);
    cpy_r_rest_type = cpy_r_current_type;
    cpy_r_r126 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r127 = (CPyPtr)&((PyObject *)cpy_r_current_type)->ob_type;
    cpy_r_r128 = *(PyObject * *)cpy_r_r127;
    cpy_r_r129 = cpy_r_r128 == cpy_r_r126;
    if (!cpy_r_r129) goto CPyL163;
    cpy_r_r130 = PyList_New(0);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 285, CPyStatic_checkpattern___globals);
        goto CPyL164;
    }
    cpy_r_narrowed_inner_types = cpy_r_r130;
    cpy_r_r131 = PyList_New(0);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 286, CPyStatic_checkpattern___globals);
        goto CPyL165;
    }
    cpy_r_inner_rest_types = cpy_r_r131;
    cpy_r_r132 = 0;
    cpy_r_r133 = 0;
CPyL75: ;
    cpy_r_r134 = (CPyPtr)&((PyVarObject *)cpy_r_inner_types)->ob_size;
    cpy_r_r135 = *(int64_t *)cpy_r_r134;
    cpy_r_r136 = cpy_r_r135 << 1;
    cpy_r_r137 = (Py_ssize_t)cpy_r_r132 < (Py_ssize_t)cpy_r_r136;
    if (!cpy_r_r137) goto CPyL166;
    cpy_r_r138 = (CPyPtr)&((PyVarObject *)cpy_r_new_inner_types)->ob_size;
    cpy_r_r139 = *(int64_t *)cpy_r_r138;
    cpy_r_r140 = cpy_r_r139 << 1;
    cpy_r_r141 = (Py_ssize_t)cpy_r_r133 < (Py_ssize_t)cpy_r_r140;
    if (!cpy_r_r141) goto CPyL166;
    cpy_r_r142 = CPyList_GetItemUnsafe(cpy_r_inner_types, cpy_r_r132);
    if (likely(PyObject_TypeCheck(cpy_r_r142, CPyType_types___Type)))
        cpy_r_r143 = cpy_r_r142;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 287, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r142);
        goto CPyL167;
    }
    cpy_r_inner_type = cpy_r_r143;
    cpy_r_r144 = CPyList_GetItemUnsafe(cpy_r_new_inner_types, cpy_r_r133);
    if (likely(PyObject_TypeCheck(cpy_r_r144, CPyType_types___Type)))
        cpy_r_r145 = cpy_r_r144;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 287, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r144);
        goto CPyL168;
    }
    cpy_r_new_inner_type = cpy_r_r145;
    cpy_r_r146 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_sequence_pattern", "PatternChecker", "chk", 291, CPyStatic_checkpattern___globals);
        goto CPyL169;
    }
    CPy_INCREF(cpy_r_r146);
CPyL80: ;
    if (likely(cpy_r_inner_type != Py_None))
        cpy_r_r147 = cpy_r_inner_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 292, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_inner_type);
        goto CPyL170;
    }
    cpy_r_r148 = CPyDef_checkpattern___get_type_range(cpy_r_r147);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 292, CPyStatic_checkpattern___globals);
        goto CPyL170;
    }
    cpy_r_r149 = PyList_New(1);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 292, CPyStatic_checkpattern___globals);
        goto CPyL171;
    }
    cpy_r_r150 = (CPyPtr)&((PyListObject *)cpy_r_r149)->ob_item;
    cpy_r_r151 = *(CPyPtr *)cpy_r_r150;
    *(PyObject * *)cpy_r_r151 = cpy_r_r148;
    cpy_r_r152 = CPyDef_checker___TypeChecker___conditional_types_with_intersection(cpy_r_r146, cpy_r_new_inner_type, cpy_r_r149, cpy_r_o, cpy_r_new_inner_type);
    CPy_DECREF(cpy_r_new_inner_type);
    CPy_DECREF(cpy_r_r149);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r152.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 291, CPyStatic_checkpattern___globals);
        goto CPyL167;
    }
    cpy_r_r153 = cpy_r_r152.f0;
    CPy_INCREF(cpy_r_r153);
    cpy_r_r154 = cpy_r_r152.f1;
    CPy_INCREF(cpy_r_r154);
    CPy_DECREF(cpy_r_r152.f0);
    CPy_DECREF(cpy_r_r152.f1);
    if (likely(cpy_r_r153 != Py_None))
        cpy_r_r155 = cpy_r_r153;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 291, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r153);
        goto CPyL172;
    }
    if (likely(cpy_r_r154 != Py_None))
        cpy_r_r156 = cpy_r_r154;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 291, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r154);
        goto CPyL173;
    }
    cpy_r_r157.f0 = cpy_r_r155;
    cpy_r_r157.f1 = cpy_r_r156;
    CPy_INCREF(cpy_r_r157.f0);
    CPy_INCREF(cpy_r_r157.f1);
    CPy_DECREF(cpy_r_r155);
    CPy_DECREF(cpy_r_r156);
    cpy_r_r158 = cpy_r_r157.f0;
    CPy_INCREF(cpy_r_r158);
    cpy_r_narrowed_inner_type = cpy_r_r158;
    cpy_r_r159 = cpy_r_r157.f1;
    CPy_INCREF(cpy_r_r159);
    CPy_DECREF(cpy_r_r157.f0);
    CPy_DECREF(cpy_r_r157.f1);
    cpy_r_inner_rest_type = cpy_r_r159;
    cpy_r_r160 = PyList_Append(cpy_r_narrowed_inner_types, cpy_r_narrowed_inner_type);
    CPy_DECREF(cpy_r_narrowed_inner_type);
    cpy_r_r161 = cpy_r_r160 >= 0;
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 294, CPyStatic_checkpattern___globals);
        goto CPyL174;
    }
    cpy_r_r162 = PyList_Append(cpy_r_inner_rest_types, cpy_r_inner_rest_type);
    CPy_DECREF(cpy_r_inner_rest_type);
    cpy_r_r163 = cpy_r_r162 >= 0;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 295, CPyStatic_checkpattern___globals);
        goto CPyL167;
    }
    cpy_r_r164 = cpy_r_r132 + 2;
    cpy_r_r132 = cpy_r_r164;
    cpy_r_r165 = cpy_r_r133 + 2;
    cpy_r_r133 = cpy_r_r165;
    goto CPyL75;
CPyL89: ;
    cpy_r_r166 = 1;
    cpy_r_r167 = 0;
CPyL90: ;
    cpy_r_r168 = (CPyPtr)&((PyVarObject *)cpy_r_narrowed_inner_types)->ob_size;
    cpy_r_r169 = *(int64_t *)cpy_r_r168;
    cpy_r_r170 = cpy_r_r169 << 1;
    cpy_r_r171 = (Py_ssize_t)cpy_r_r167 < (Py_ssize_t)cpy_r_r170;
    if (!cpy_r_r171) goto CPyL96;
    cpy_r_r172 = CPyList_GetItemUnsafe(cpy_r_narrowed_inner_types, cpy_r_r167);
    if (likely(PyObject_TypeCheck(cpy_r_r172, CPyType_types___Type)))
        cpy_r_r173 = cpy_r_r172;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 296, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r172);
        goto CPyL175;
    }
    cpy_r_typ_2 = cpy_r_r173;
    cpy_r_r174 = CPyDef_checkpattern___is_uninhabited(cpy_r_typ_2);
    CPy_DECREF(cpy_r_typ_2);
    if (unlikely(cpy_r_r174 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 296, CPyStatic_checkpattern___globals);
        goto CPyL175;
    }
    cpy_r_r175 = cpy_r_r174 ^ 1;
    cpy_r_r176 = cpy_r_r175 ^ 1;
    if (!cpy_r_r176) goto CPyL95;
    cpy_r_r166 = 0;
    goto CPyL96;
CPyL95: ;
    cpy_r_r177 = cpy_r_r167 + 2;
    cpy_r_r167 = cpy_r_r177;
    goto CPyL90;
CPyL96: ;
    if (!cpy_r_r166) goto CPyL176;
    if (likely(Py_TYPE(cpy_r_current_type) == CPyType_types___TupleType))
        cpy_r_r178 = cpy_r_current_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 297, CPyStatic_checkpattern___globals, "mypy.types.TupleType", cpy_r_current_type);
        goto CPyL175;
    }
    cpy_r_r179 = ((mypy___types___TupleTypeObject *)cpy_r_r178)->_partial_fallback;
    CPy_INCREF(cpy_r_r179);
    cpy_r_r180 = CPY_INT_TAG;
    cpy_r_r181 = CPY_INT_TAG;
    cpy_r_r182 = 2;
    cpy_r_r183 = CPyDef_types___TupleType(cpy_r_narrowed_inner_types, cpy_r_r179, cpy_r_r180, cpy_r_r181, cpy_r_r182);
    CPy_DECREF(cpy_r_narrowed_inner_types);
    CPy_DECREF(cpy_r_r179);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 297, CPyStatic_checkpattern___globals);
        goto CPyL177;
    }
    cpy_r_new_type = cpy_r_r183;
    goto CPyL102;
CPyL100: ;
    cpy_r_r184 = 2;
    cpy_r_r185 = CPY_INT_TAG;
    cpy_r_r186 = CPY_INT_TAG;
    cpy_r_r187 = CPyDef_types___UninhabitedType(cpy_r_r184, cpy_r_r185, cpy_r_r186);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 299, CPyStatic_checkpattern___globals);
        goto CPyL177;
    }
    cpy_r_new_type = cpy_r_r187;
CPyL102: ;
    cpy_r_r188 = 1;
    cpy_r_r189 = 0;
CPyL103: ;
    cpy_r_r190 = (CPyPtr)&((PyVarObject *)cpy_r_inner_rest_types)->ob_size;
    cpy_r_r191 = *(int64_t *)cpy_r_r190;
    cpy_r_r192 = cpy_r_r191 << 1;
    cpy_r_r193 = (Py_ssize_t)cpy_r_r189 < (Py_ssize_t)cpy_r_r192;
    if (!cpy_r_r193) goto CPyL178;
    cpy_r_r194 = CPyList_GetItemUnsafe(cpy_r_inner_rest_types, cpy_r_r189);
    if (likely(PyObject_TypeCheck(cpy_r_r194, CPyType_types___Type)))
        cpy_r_r195 = cpy_r_r194;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 301, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r194);
        goto CPyL179;
    }
    cpy_r_typ_3 = cpy_r_r195;
    cpy_r_r196 = CPyDef_checkpattern___is_uninhabited(cpy_r_typ_3);
    CPy_DECREF(cpy_r_typ_3);
    if (unlikely(cpy_r_r196 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 301, CPyStatic_checkpattern___globals);
        goto CPyL179;
    }
    cpy_r_r197 = cpy_r_r196 ^ 1;
    if (cpy_r_r197) {
        goto CPyL180;
    } else
        goto CPyL108;
CPyL107: ;
    cpy_r_r188 = 0;
    goto CPyL109;
CPyL108: ;
    cpy_r_r198 = cpy_r_r189 + 2;
    cpy_r_r189 = cpy_r_r198;
    goto CPyL103;
CPyL109: ;
    if (cpy_r_r188) {
        goto CPyL181;
    } else
        goto CPyL182;
CPyL110: ;
    if (likely(Py_TYPE(cpy_r_current_type) == CPyType_types___TupleType))
        cpy_r_r199 = cpy_r_current_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 303, CPyStatic_checkpattern___globals, "mypy.types.TupleType", cpy_r_current_type);
        goto CPyL183;
    }
    cpy_r_r200 = ((mypy___types___TupleTypeObject *)cpy_r_r199)->_partial_fallback;
    CPy_INCREF(cpy_r_r200);
    CPy_DECREF(cpy_r_current_type);
    cpy_r_r201 = CPY_INT_TAG;
    cpy_r_r202 = CPY_INT_TAG;
    cpy_r_r203 = 2;
    cpy_r_r204 = CPyDef_types___TupleType(cpy_r_rest_inner_types, cpy_r_r200, cpy_r_r201, cpy_r_r202, cpy_r_r203);
    CPy_DECREF(cpy_r_rest_inner_types);
    CPy_DECREF(cpy_r_r200);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 303, CPyStatic_checkpattern___globals);
        goto CPyL184;
    }
    cpy_r_rest_type = cpy_r_r204;
    goto CPyL131;
CPyL113: ;
    cpy_r_r205 = 2;
    cpy_r_r206 = CPY_INT_TAG;
    cpy_r_r207 = CPY_INT_TAG;
    cpy_r_r208 = CPyDef_types___UninhabitedType(cpy_r_r205, cpy_r_r206, cpy_r_r207);
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 305, CPyStatic_checkpattern___globals);
        goto CPyL185;
    }
    cpy_r_new_inner_type = cpy_r_r208;
    cpy_r_r209 = 0;
CPyL115: ;
    cpy_r_r210 = (CPyPtr)&((PyVarObject *)cpy_r_new_inner_types)->ob_size;
    cpy_r_r211 = *(int64_t *)cpy_r_r210;
    cpy_r_r212 = cpy_r_r211 << 1;
    cpy_r_r213 = (Py_ssize_t)cpy_r_r209 < (Py_ssize_t)cpy_r_r212;
    if (!cpy_r_r213) goto CPyL186;
    cpy_r_r214 = CPyList_GetItemUnsafe(cpy_r_new_inner_types, cpy_r_r209);
    if (likely(PyObject_TypeCheck(cpy_r_r214, CPyType_types___Type)))
        cpy_r_r215 = cpy_r_r214;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 306, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r214);
        goto CPyL187;
    }
    cpy_r_typ = cpy_r_r215;
    cpy_r_r216 = NULL;
    cpy_r_r217 = CPyDef_join___join_types(cpy_r_new_inner_type, cpy_r_typ, cpy_r_r216);
    CPy_DECREF(cpy_r_new_inner_type);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 307, CPyStatic_checkpattern___globals);
        goto CPyL185;
    }
    cpy_r_new_inner_type = cpy_r_r217;
    cpy_r_r218 = cpy_r_r209 + 2;
    cpy_r_r209 = cpy_r_r218;
    goto CPyL115;
CPyL120: ;
    cpy_r_r219 = CPyDef_checkpattern___PatternChecker___construct_sequence_child(cpy_r_self, cpy_r_current_type, cpy_r_new_inner_type);
    CPy_DECREF(cpy_r_new_inner_type);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 308, CPyStatic_checkpattern___globals);
        goto CPyL188;
    }
    cpy_r_new_type = cpy_r_r219;
    cpy_r_r220 = NULL;
    cpy_r_r221 = 2;
    cpy_r_r222 = 2;
    cpy_r_r223 = 2;
    cpy_r_r224 = 2;
    cpy_r_r225 = 2;
    cpy_r_r226 = NULL;
    cpy_r_r227 = CPyDef_subtypes___is_subtype(cpy_r_new_type, cpy_r_current_type, cpy_r_r220, cpy_r_r221, cpy_r_r222, cpy_r_r223, cpy_r_r224, cpy_r_r225, cpy_r_r226);
    if (unlikely(cpy_r_r227 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 309, CPyStatic_checkpattern___globals);
        goto CPyL189;
    }
    if (!cpy_r_r227) goto CPyL190;
    cpy_r_r228 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_sequence_pattern", "PatternChecker", "chk", 310, CPyStatic_checkpattern___globals);
        goto CPyL189;
    }
    CPy_INCREF(cpy_r_r228);
CPyL124: ;
    cpy_r_r229 = CPyDef_checkpattern___get_type_range(cpy_r_new_type);
    CPy_DECREF(cpy_r_new_type);
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 311, CPyStatic_checkpattern___globals);
        goto CPyL191;
    }
    cpy_r_r230 = PyList_New(1);
    if (unlikely(cpy_r_r230 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 311, CPyStatic_checkpattern___globals);
        goto CPyL192;
    }
    cpy_r_r231 = (CPyPtr)&((PyListObject *)cpy_r_r230)->ob_item;
    cpy_r_r232 = *(CPyPtr *)cpy_r_r231;
    *(PyObject * *)cpy_r_r232 = cpy_r_r229;
    cpy_r_r233 = CPyDef_checker___TypeChecker___conditional_types_with_intersection(cpy_r_r228, cpy_r_current_type, cpy_r_r230, cpy_r_o, cpy_r_current_type);
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_r230);
    CPy_DECREF(cpy_r_r228);
    if (unlikely(cpy_r_r233.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 310, CPyStatic_checkpattern___globals);
        goto CPyL193;
    }
    cpy_r_r234 = cpy_r_r233.f0;
    CPy_INCREF(cpy_r_r234);
    cpy_r_r235 = cpy_r_r233.f1;
    CPy_INCREF(cpy_r_r235);
    CPy_DECREF(cpy_r_r233.f0);
    CPy_DECREF(cpy_r_r233.f1);
    if (likely(cpy_r_r234 != Py_None))
        cpy_r_r236 = cpy_r_r234;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 310, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r234);
        goto CPyL194;
    }
    if (likely(cpy_r_r235 != Py_None))
        cpy_r_r237 = cpy_r_r235;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 310, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r235);
        goto CPyL195;
    }
    cpy_r_r238.f0 = cpy_r_r236;
    cpy_r_r238.f1 = cpy_r_r237;
    CPy_INCREF(cpy_r_r238.f0);
    CPy_INCREF(cpy_r_r238.f1);
    CPy_DECREF(cpy_r_r236);
    CPy_DECREF(cpy_r_r237);
    cpy_r_r239 = cpy_r_r238.f0;
    CPy_INCREF(cpy_r_r239);
    cpy_r_new_type = cpy_r_r239;
    cpy_r_r240 = cpy_r_r238.f1;
    CPy_INCREF(cpy_r_r240);
    CPy_DECREF(cpy_r_r238.f0);
    CPy_DECREF(cpy_r_r238.f1);
    cpy_r__ = cpy_r_r240;
    CPy_DECREF(cpy_r__);
    goto CPyL131;
CPyL130: ;
    cpy_r_new_type = cpy_r_current_type;
CPyL131: ;
    cpy_r_r241 = CPyStatic_checkpattern___globals;
    cpy_r_r242 = CPyStatics[1351]; /* 'PatternType' */
    cpy_r_r243 = CPyDict_GetItem(cpy_r_r241, cpy_r_r242);
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 315, CPyStatic_checkpattern___globals);
        goto CPyL196;
    }
    PyObject *cpy_r_r244[3] = {cpy_r_new_type, cpy_r_rest_type, cpy_r_captures};
    cpy_r_r245 = (PyObject **)&cpy_r_r244;
    cpy_r_r246 = _PyObject_Vectorcall(cpy_r_r243, cpy_r_r245, 3, 0);
    CPy_DECREF(cpy_r_r243);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 315, CPyStatic_checkpattern___globals);
        goto CPyL196;
    }
    CPy_DECREF(cpy_r_new_type);
    CPy_DECREF(cpy_r_rest_type);
    CPy_DECREF(cpy_r_captures);
    if (likely(PyTuple_Check(cpy_r_r246)))
        cpy_r_r247 = cpy_r_r246;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 315, CPyStatic_checkpattern___globals, "tuple", cpy_r_r246);
        goto CPyL135;
    }
    return cpy_r_r247;
CPyL135: ;
    cpy_r_r248 = NULL;
    return cpy_r_r248;
CPyL136: ;
    CPy_DecRef(cpy_r_current_type);
    goto CPyL135;
CPyL137: ;
    CPy_DECREF(cpy_r_current_type);
    goto CPyL7;
CPyL138: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r9);
    goto CPyL16;
CPyL139: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r9);
    goto CPyL135;
CPyL140: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL15;
CPyL141: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r9);
    goto CPyL135;
CPyL142: ;
    CPy_DECREF(cpy_r_star_position);
    goto CPyL17;
CPyL143: ;
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_star_position);
    goto CPyL22;
CPyL144: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_star_position);
    CPyTagged_DecRef(cpy_r_required_patterns);
    goto CPyL135;
CPyL145: ;
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_star_position);
    CPyTagged_DECREF(cpy_r_required_patterns);
    CPy_DECREF(cpy_r_inner_types);
    CPyTagged_DECREF(cpy_r_size_diff);
    goto CPyL31;
CPyL146: ;
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_star_position);
    CPyTagged_DECREF(cpy_r_required_patterns);
    CPy_DECREF(cpy_r_inner_types);
    goto CPyL37;
CPyL147: ;
    CPy_DECREF(cpy_r_inner_type);
    goto CPyL41;
CPyL148: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_star_position);
    CPyTagged_DecRef(cpy_r_required_patterns);
    CPy_DecRef(cpy_r_r74);
    goto CPyL135;
CPyL149: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_star_position);
    CPyTagged_DecRef(cpy_r_required_patterns);
    CPy_DecRef(cpy_r_inner_types);
    goto CPyL135;
CPyL150: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_star_position);
    CPyTagged_DecRef(cpy_r_required_patterns);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_contracted_new_inner_types);
    goto CPyL135;
CPyL151: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_star_position);
    CPyTagged_DecRef(cpy_r_required_patterns);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_contracted_new_inner_types);
    CPy_DecRef(cpy_r_contracted_rest_inner_types);
    goto CPyL135;
CPyL152: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_star_position);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_contracted_new_inner_types);
    CPy_DecRef(cpy_r_contracted_rest_inner_types);
    CPy_DecRef(cpy_r_captures);
    goto CPyL135;
CPyL153: ;
    CPy_DECREF(cpy_r_contracted_inner_types);
    CPy_DECREF(cpy_r_r87);
    goto CPyL69;
CPyL154: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_star_position);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_contracted_new_inner_types);
    CPy_DecRef(cpy_r_contracted_rest_inner_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_contracted_inner_types);
    CPy_DecRef(cpy_r_r87);
    goto CPyL135;
CPyL155: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_star_position);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_contracted_new_inner_types);
    CPy_DecRef(cpy_r_contracted_rest_inner_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_contracted_inner_types);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_p_2);
    goto CPyL135;
CPyL156: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_star_position);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_contracted_new_inner_types);
    CPy_DecRef(cpy_r_contracted_rest_inner_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_contracted_inner_types);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_pattern_type);
    goto CPyL135;
CPyL157: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_star_position);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_contracted_new_inner_types);
    CPy_DecRef(cpy_r_contracted_rest_inner_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_contracted_inner_types);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_pattern_type);
    CPy_DecRef(cpy_r_r106);
    goto CPyL135;
CPyL158: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_star_position);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_contracted_new_inner_types);
    CPy_DecRef(cpy_r_contracted_rest_inner_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_contracted_inner_types);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r106);
    CPy_DecRef(cpy_r_r108);
    goto CPyL135;
CPyL159: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_star_position);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_contracted_new_inner_types);
    CPy_DecRef(cpy_r_contracted_rest_inner_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_contracted_inner_types);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_rest);
    CPy_DecRef(cpy_r_type_map);
    goto CPyL135;
CPyL160: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_star_position);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_contracted_new_inner_types);
    CPy_DecRef(cpy_r_contracted_rest_inner_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_contracted_inner_types);
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_type_map);
    goto CPyL135;
CPyL161: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_star_position);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_contracted_rest_inner_types);
    CPy_DecRef(cpy_r_captures);
    goto CPyL135;
CPyL162: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_new_inner_types);
    goto CPyL135;
CPyL163: ;
    CPy_DECREF(cpy_r_inner_types);
    CPy_DECREF(cpy_r_rest_inner_types);
    goto CPyL113;
CPyL164: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_new_inner_types);
    CPy_DecRef(cpy_r_rest_inner_types);
    CPy_DecRef(cpy_r_rest_type);
    goto CPyL135;
CPyL165: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_new_inner_types);
    CPy_DecRef(cpy_r_rest_inner_types);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_inner_types);
    goto CPyL135;
CPyL166: ;
    CPy_DECREF(cpy_r_inner_types);
    CPy_DECREF(cpy_r_new_inner_types);
    goto CPyL89;
CPyL167: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_new_inner_types);
    CPy_DecRef(cpy_r_rest_inner_types);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_inner_types);
    CPy_DecRef(cpy_r_inner_rest_types);
    goto CPyL135;
CPyL168: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_inner_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_new_inner_types);
    CPy_DecRef(cpy_r_rest_inner_types);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_inner_types);
    CPy_DecRef(cpy_r_inner_rest_types);
    goto CPyL135;
CPyL169: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_inner_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_new_inner_types);
    CPy_DecRef(cpy_r_rest_inner_types);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_inner_types);
    CPy_DecRef(cpy_r_inner_rest_types);
    CPy_DecRef(cpy_r_new_inner_type);
    goto CPyL135;
CPyL170: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_new_inner_types);
    CPy_DecRef(cpy_r_rest_inner_types);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_inner_types);
    CPy_DecRef(cpy_r_inner_rest_types);
    CPy_DecRef(cpy_r_new_inner_type);
    CPy_DecRef(cpy_r_r146);
    goto CPyL135;
CPyL171: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_new_inner_types);
    CPy_DecRef(cpy_r_rest_inner_types);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_inner_types);
    CPy_DecRef(cpy_r_inner_rest_types);
    CPy_DecRef(cpy_r_new_inner_type);
    CPy_DecRef(cpy_r_r146);
    CPy_DecRef(cpy_r_r148);
    goto CPyL135;
CPyL172: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_new_inner_types);
    CPy_DecRef(cpy_r_rest_inner_types);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_inner_types);
    CPy_DecRef(cpy_r_inner_rest_types);
    CPy_DecRef(cpy_r_r154);
    goto CPyL135;
CPyL173: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_new_inner_types);
    CPy_DecRef(cpy_r_rest_inner_types);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_inner_types);
    CPy_DecRef(cpy_r_inner_rest_types);
    CPy_DecRef(cpy_r_r155);
    goto CPyL135;
CPyL174: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_inner_types);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_new_inner_types);
    CPy_DecRef(cpy_r_rest_inner_types);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_inner_types);
    CPy_DecRef(cpy_r_inner_rest_types);
    CPy_DecRef(cpy_r_inner_rest_type);
    goto CPyL135;
CPyL175: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_rest_inner_types);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_inner_types);
    CPy_DecRef(cpy_r_inner_rest_types);
    goto CPyL135;
CPyL176: ;
    CPy_DECREF(cpy_r_narrowed_inner_types);
    goto CPyL100;
CPyL177: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_rest_inner_types);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_inner_rest_types);
    goto CPyL135;
CPyL178: ;
    CPy_DECREF(cpy_r_inner_rest_types);
    goto CPyL109;
CPyL179: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_rest_inner_types);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_inner_rest_types);
    CPy_DecRef(cpy_r_new_type);
    goto CPyL135;
CPyL180: ;
    CPy_DECREF(cpy_r_inner_rest_types);
    goto CPyL107;
CPyL181: ;
    CPy_DECREF(cpy_r_rest_type);
    goto CPyL110;
CPyL182: ;
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_rest_inner_types);
    goto CPyL131;
CPyL183: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_rest_inner_types);
    CPy_DecRef(cpy_r_new_type);
    goto CPyL135;
CPyL184: ;
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_new_type);
    goto CPyL135;
CPyL185: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_new_inner_types);
    CPy_DecRef(cpy_r_rest_type);
    goto CPyL135;
CPyL186: ;
    CPy_DECREF(cpy_r_new_inner_types);
    goto CPyL120;
CPyL187: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_new_inner_types);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_new_inner_type);
    goto CPyL135;
CPyL188: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_rest_type);
    goto CPyL135;
CPyL189: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_new_type);
    goto CPyL135;
CPyL190: ;
    CPy_DECREF(cpy_r_new_type);
    goto CPyL130;
CPyL191: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_r228);
    goto CPyL135;
CPyL192: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_r228);
    CPy_DecRef(cpy_r_r229);
    goto CPyL135;
CPyL193: ;
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_rest_type);
    goto CPyL135;
CPyL194: ;
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_r235);
    goto CPyL135;
CPyL195: ;
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_r236);
    goto CPyL135;
CPyL196: ;
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_new_type);
    goto CPyL135;
}

PyObject *CPyPy_checkpattern___PatternChecker___visit_sequence_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_sequence_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SequencePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SequencePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___visit_sequence_pattern(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern", 222, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___visit_sequence_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_checkpattern___PatternChecker___visit_sequence_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_checkpattern___PatternChecker___visit_sequence_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_sequence_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___SequencePattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.SequencePattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___visit_sequence_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "visit_sequence_pattern__PatternVisitor_glue", -1, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___get_sequence_type(PyObject *cpy_r_self, PyObject *cpy_r_t, PyObject *cpy_r_context) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
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
    PyObject *cpy_r_item;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_items;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_item_2;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_not_none_items;
    CPyPtr cpy_r_r44;
    int64_t cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyPtr cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyPtr cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_t);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_sequence_type", 318, CPyStatic_checkpattern___globals);
        goto CPyL44;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_sequence_type", 318, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL44;
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
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_sequence_type", 320, CPyStatic_checkpattern___globals, "mypy.types.AnyType", cpy_r_t);
        goto CPyL44;
    }
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = CPyDef_types___AnyType(14, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_sequence_type", 320, CPyStatic_checkpattern___globals);
        goto CPyL44;
    }
    return cpy_r_r10;
CPyL6: ;
    cpy_r_r11 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL27;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___UnionType))
        cpy_r_r15 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_sequence_type", 322, CPyStatic_checkpattern___globals, "mypy.types.UnionType", cpy_r_t);
        goto CPyL45;
    }
    cpy_r_r16 = ((mypy___types___UnionTypeObject *)cpy_r_r15)->_items;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_t);
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = PyList_New(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_sequence_type", 322, CPyStatic_checkpattern___globals);
        goto CPyL46;
    }
    cpy_r_r20 = 0;
CPyL10: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r23;
    if (!cpy_r_r24) goto CPyL47;
    cpy_r_r25 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r20);
    if (likely(PyObject_TypeCheck(cpy_r_r25, CPyType_types___Type)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_sequence_type", 322, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r25);
        goto CPyL48;
    }
    cpy_r_item = cpy_r_r26;
    cpy_r_r27 = CPyDef_checkpattern___PatternChecker___get_sequence_type(cpy_r_self, cpy_r_item, cpy_r_context);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_sequence_type", 322, CPyStatic_checkpattern___globals);
        goto CPyL48;
    }
    cpy_r_r28 = CPyList_SetItemUnsafe(cpy_r_r19, cpy_r_r20, cpy_r_r27);
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_sequence_type", 322, CPyStatic_checkpattern___globals);
        goto CPyL48;
    }
    cpy_r_r29 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r29;
    goto CPyL10;
CPyL15: ;
    cpy_r_items = cpy_r_r19;
    cpy_r_r30 = PyList_New(0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_sequence_type", 323, CPyStatic_checkpattern___globals);
        goto CPyL49;
    }
    cpy_r_r31 = 0;
CPyL17: ;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_items)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = (Py_ssize_t)cpy_r_r31 < (Py_ssize_t)cpy_r_r34;
    if (!cpy_r_r35) goto CPyL50;
    cpy_r_r36 = CPyList_GetItemUnsafe(cpy_r_items, cpy_r_r31);
    if (PyObject_TypeCheck(cpy_r_r36, CPyType_types___Type))
        cpy_r_r37 = cpy_r_r36;
    else {
        cpy_r_r37 = NULL;
    }
    if (cpy_r_r37 != NULL) goto __LL1528;
    if (cpy_r_r36 == Py_None)
        cpy_r_r37 = cpy_r_r36;
    else {
        cpy_r_r37 = NULL;
    }
    if (cpy_r_r37 != NULL) goto __LL1528;
    CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_sequence_type", 323, CPyStatic_checkpattern___globals, "mypy.types.Type or None", cpy_r_r36);
    goto CPyL51;
__LL1528: ;
    cpy_r_item_2 = cpy_r_r37;
    cpy_r_r38 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r39 = cpy_r_item_2 != cpy_r_r38;
    if (!cpy_r_r39) goto CPyL52;
    if (likely(cpy_r_item_2 != Py_None))
        cpy_r_r40 = cpy_r_item_2;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_sequence_type", 323, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_item_2);
        goto CPyL51;
    }
    cpy_r_r41 = PyList_Append(cpy_r_r30, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_sequence_type", 323, CPyStatic_checkpattern___globals);
        goto CPyL51;
    }
CPyL22: ;
    cpy_r_r43 = cpy_r_r31 + 2;
    cpy_r_r31 = cpy_r_r43;
    goto CPyL17;
CPyL23: ;
    cpy_r_not_none_items = cpy_r_r30;
    cpy_r_r44 = (CPyPtr)&((PyVarObject *)cpy_r_not_none_items)->ob_size;
    cpy_r_r45 = *(int64_t *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 << 1;
    cpy_r_r47 = cpy_r_r46 != 0;
    if (!cpy_r_r47) goto CPyL53;
    cpy_r_r48 = CPY_INT_TAG;
    cpy_r_r49 = CPY_INT_TAG;
    cpy_r_r50 = 2;
    cpy_r_r51 = 2;
    cpy_r_r52 = CPyDef_typeops___make_simplified_union(cpy_r_not_none_items, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_not_none_items);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_sequence_type", 325, CPyStatic_checkpattern___globals);
        goto CPyL44;
    }
    return cpy_r_r52;
CPyL26: ;
    cpy_r_r53 = Py_None;
    CPy_INCREF(cpy_r_r53);
    return cpy_r_r53;
CPyL27: ;
    cpy_r_r54 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "get_sequence_type", "PatternChecker", "chk", 329, CPyStatic_checkpattern___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_r54);
CPyL28: ;
    CPy_INCREF(cpy_r_t);
    if (likely(PyObject_TypeCheck(cpy_r_t, CPyType_types___ProperType)))
        cpy_r_r55 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_sequence_type", 329, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_t);
        goto CPyL54;
    }
    cpy_r_r56 = CPyDef_checker___TypeChecker___type_is_iterable(cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_sequence_type", 329, CPyStatic_checkpattern___globals);
        goto CPyL45;
    }
    if (!cpy_r_r56) goto CPyL55;
    cpy_r_r57 = (PyObject *)CPyType_types___Instance;
    cpy_r_r58 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r59 = *(PyObject * *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 == cpy_r_r57;
    if (!cpy_r_r60) goto CPyL33;
    cpy_r_r61 = cpy_r_r60;
    goto CPyL34;
CPyL33: ;
    cpy_r_r62 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r63 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r64 = *(PyObject * *)cpy_r_r63;
    cpy_r_r65 = cpy_r_r64 == cpy_r_r62;
    cpy_r_r61 = cpy_r_r65;
CPyL34: ;
    if (!cpy_r_r61) goto CPyL55;
    cpy_r_r66 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r67 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r68 = *(PyObject * *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 == cpy_r_r66;
    if (!cpy_r_r69) goto CPyL39;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___TupleType))
        cpy_r_r70 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_sequence_type", 331, CPyStatic_checkpattern___globals, "mypy.types.TupleType", cpy_r_t);
        goto CPyL44;
    }
    cpy_r_r71 = CPyDef_typeops___tuple_fallback(cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_sequence_type", 331, CPyStatic_checkpattern___globals);
        goto CPyL44;
    }
    cpy_r_t = cpy_r_r71;
CPyL39: ;
    cpy_r_r72 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "get_sequence_type", "PatternChecker", "chk", 332, CPyStatic_checkpattern___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_r72);
CPyL40: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r73 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_sequence_type", 332, CPyStatic_checkpattern___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL56;
    }
    cpy_r_r74 = CPyDef_checker___TypeChecker___iterable_item_type(cpy_r_r72, cpy_r_r73, cpy_r_context);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_sequence_type", 332, CPyStatic_checkpattern___globals);
        goto CPyL44;
    }
    return cpy_r_r74;
CPyL43: ;
    cpy_r_r75 = Py_None;
    CPy_INCREF(cpy_r_r75);
    return cpy_r_r75;
CPyL44: ;
    cpy_r_r76 = NULL;
    return cpy_r_r76;
CPyL45: ;
    CPy_DecRef(cpy_r_t);
    goto CPyL44;
CPyL46: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL44;
CPyL47: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL15;
CPyL48: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    goto CPyL44;
CPyL49: ;
    CPy_DecRef(cpy_r_items);
    goto CPyL44;
CPyL50: ;
    CPy_DECREF(cpy_r_items);
    goto CPyL23;
CPyL51: ;
    CPy_DecRef(cpy_r_items);
    CPy_DecRef(cpy_r_r30);
    goto CPyL44;
CPyL52: ;
    CPy_DECREF(cpy_r_item_2);
    goto CPyL22;
CPyL53: ;
    CPy_DECREF(cpy_r_not_none_items);
    goto CPyL26;
CPyL54: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r54);
    goto CPyL44;
CPyL55: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL43;
CPyL56: ;
    CPy_DecRef(cpy_r_r72);
    goto CPyL44;
}

PyObject *CPyPy_checkpattern___PatternChecker___get_sequence_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"t", "context", 0};
    static CPyArg_Parser parser = {"OO:get_sequence_type", kwlist, 0};
    PyObject *obj_t;
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_t, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___Type)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_t); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___get_sequence_type(arg_self, arg_t, arg_context);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "get_sequence_type", 317, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___contract_starred_pattern_types(PyObject *cpy_r_self, PyObject *cpy_r_types, PyObject *cpy_r_star_pos, CPyTagged cpy_r_num_patterns) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_new_types;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_star_length;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_star_pos == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r_types);
    return cpy_r_types;
CPyL2: ;
    if (likely(PyLong_Check(cpy_r_star_pos)))
        cpy_r_r2 = CPyTagged_FromObject(cpy_r_star_pos);
    else {
        CPy_TypeError("int", cpy_r_star_pos); cpy_r_r2 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/checkpattern.py", "contract_starred_pattern_types", 350, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    cpy_r_r3 = CPyList_GetSlice(cpy_r_types, 0, cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "contract_starred_pattern_types", 350, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    if (likely(PyList_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "contract_starred_pattern_types", 350, CPyStatic_checkpattern___globals, "list", cpy_r_r3);
        goto CPyL17;
    }
    cpy_r_new_types = cpy_r_r4;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = CPyTagged_Subtract(cpy_r_r7, cpy_r_num_patterns);
    cpy_r_star_length = cpy_r_r8;
    if (likely(PyLong_Check(cpy_r_star_pos)))
        cpy_r_r9 = CPyTagged_FromObject(cpy_r_star_pos);
    else {
        CPy_TypeError("int", cpy_r_star_pos); cpy_r_r9 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/checkpattern.py", "contract_starred_pattern_types", 352, CPyStatic_checkpattern___globals);
        goto CPyL18;
    }
    if (likely(PyLong_Check(cpy_r_star_pos)))
        cpy_r_r10 = CPyTagged_FromObject(cpy_r_star_pos);
    else {
        CPy_TypeError("int", cpy_r_star_pos); cpy_r_r10 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/checkpattern.py", "contract_starred_pattern_types", 352, CPyStatic_checkpattern___globals);
        goto CPyL19;
    }
    cpy_r_r11 = CPyTagged_Add(cpy_r_r10, cpy_r_star_length);
    CPyTagged_DECREF(cpy_r_r10);
    cpy_r_r12 = CPyList_GetSlice(cpy_r_types, cpy_r_r9, cpy_r_r11);
    CPyTagged_DECREF(cpy_r_r9);
    CPyTagged_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "contract_starred_pattern_types", 352, CPyStatic_checkpattern___globals);
        goto CPyL18;
    }
    if (likely(PyList_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "contract_starred_pattern_types", 352, CPyStatic_checkpattern___globals, "list", cpy_r_r12);
        goto CPyL18;
    }
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = CPY_INT_TAG;
    cpy_r_r16 = 2;
    cpy_r_r17 = 2;
    cpy_r_r18 = CPyDef_typeops___make_simplified_union(cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "contract_starred_pattern_types", 352, CPyStatic_checkpattern___globals);
        goto CPyL18;
    }
    cpy_r_r19 = PyList_Append(cpy_r_new_types, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/checkpattern.py", "contract_starred_pattern_types", 352, CPyStatic_checkpattern___globals);
        goto CPyL18;
    }
    if (likely(PyLong_Check(cpy_r_star_pos)))
        cpy_r_r21 = CPyTagged_FromObject(cpy_r_star_pos);
    else {
        CPy_TypeError("int", cpy_r_star_pos); cpy_r_r21 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/checkpattern.py", "contract_starred_pattern_types", 353, CPyStatic_checkpattern___globals);
        goto CPyL18;
    }
    cpy_r_r22 = CPyTagged_Add(cpy_r_r21, cpy_r_star_length);
    CPyTagged_DECREF(cpy_r_r21);
    CPyTagged_DECREF(cpy_r_star_length);
    cpy_r_r23 = CPyList_GetSlice(cpy_r_types, cpy_r_r22, 9223372036854775806LL);
    CPyTagged_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "contract_starred_pattern_types", 353, CPyStatic_checkpattern___globals);
        goto CPyL20;
    }
    if (likely(PyList_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "contract_starred_pattern_types", 353, CPyStatic_checkpattern___globals, "list", cpy_r_r23);
        goto CPyL20;
    }
    cpy_r_r25 = PyNumber_InPlaceAdd(cpy_r_new_types, cpy_r_r24);
    CPy_DECREF(cpy_r_new_types);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "contract_starred_pattern_types", 353, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    if (likely(PyList_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "contract_starred_pattern_types", 353, CPyStatic_checkpattern___globals, "list", cpy_r_r25);
        goto CPyL17;
    }
    cpy_r_new_types = cpy_r_r26;
    return cpy_r_new_types;
CPyL17: ;
    cpy_r_r27 = NULL;
    return cpy_r_r27;
CPyL18: ;
    CPy_DecRef(cpy_r_new_types);
    CPyTagged_DecRef(cpy_r_star_length);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_new_types);
    CPyTagged_DecRef(cpy_r_star_length);
    CPyTagged_DecRef(cpy_r_r9);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_new_types);
    goto CPyL17;
}

PyObject *CPyPy_checkpattern___PatternChecker___contract_starred_pattern_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"types", "star_pos", "num_patterns", 0};
    static CPyArg_Parser parser = {"OOO:contract_starred_pattern_types", kwlist, 0};
    PyObject *obj_types;
    PyObject *obj_star_pos;
    PyObject *obj_num_patterns;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_types, &obj_star_pos, &obj_num_patterns)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_types;
    if (likely(PyList_Check(obj_types)))
        arg_types = obj_types;
    else {
        CPy_TypeError("list", obj_types); 
        goto fail;
    }
    PyObject *arg_star_pos;
    if (PyLong_Check(obj_star_pos))
        arg_star_pos = obj_star_pos;
    else {
        arg_star_pos = NULL;
    }
    if (arg_star_pos != NULL) goto __LL1529;
    if (obj_star_pos == Py_None)
        arg_star_pos = obj_star_pos;
    else {
        arg_star_pos = NULL;
    }
    if (arg_star_pos != NULL) goto __LL1529;
    CPy_TypeError("int or None", obj_star_pos); 
    goto fail;
__LL1529: ;
    CPyTagged arg_num_patterns;
    if (likely(PyLong_Check(obj_num_patterns)))
        arg_num_patterns = CPyTagged_BorrowFromObject(obj_num_patterns);
    else {
        CPy_TypeError("int", obj_num_patterns); goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___contract_starred_pattern_types(arg_self, arg_types, arg_star_pos, arg_num_patterns);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "contract_starred_pattern_types", 336, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___expand_starred_pattern_types(PyObject *cpy_r_self, PyObject *cpy_r_types, PyObject *cpy_r_star_pos, CPyTagged cpy_r_num_types) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_new_types;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_star_length;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_star_pos == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r_types);
    return cpy_r_types;
CPyL2: ;
    if (likely(PyLong_Check(cpy_r_star_pos)))
        cpy_r_r2 = CPyTagged_FromObject(cpy_r_star_pos);
    else {
        CPy_TypeError("int", cpy_r_star_pos); cpy_r_r2 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/checkpattern.py", "expand_starred_pattern_types", 367, CPyStatic_checkpattern___globals);
        goto CPyL18;
    }
    cpy_r_r3 = CPyList_GetSlice(cpy_r_types, 0, cpy_r_r2);
    CPyTagged_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "expand_starred_pattern_types", 367, CPyStatic_checkpattern___globals);
        goto CPyL18;
    }
    if (likely(PyList_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "expand_starred_pattern_types", 367, CPyStatic_checkpattern___globals, "list", cpy_r_r3);
        goto CPyL18;
    }
    cpy_r_new_types = cpy_r_r4;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = CPyTagged_Subtract(cpy_r_num_types, cpy_r_r7);
    cpy_r_r9 = CPyTagged_Add(cpy_r_r8, 2);
    CPyTagged_DECREF(cpy_r_r8);
    cpy_r_star_length = cpy_r_r9;
    if (likely(PyLong_Check(cpy_r_star_pos)))
        cpy_r_r10 = CPyTagged_FromObject(cpy_r_star_pos);
    else {
        CPy_TypeError("int", cpy_r_star_pos); cpy_r_r10 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/checkpattern.py", "expand_starred_pattern_types", 369, CPyStatic_checkpattern___globals);
        goto CPyL19;
    }
    cpy_r_r11 = CPyList_GetItem(cpy_r_types, cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "expand_starred_pattern_types", 369, CPyStatic_checkpattern___globals);
        goto CPyL19;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___Type)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "expand_starred_pattern_types", 369, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r11);
        goto CPyL19;
    }
    cpy_r_r13 = PyList_New(1);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "expand_starred_pattern_types", 369, CPyStatic_checkpattern___globals);
        goto CPyL20;
    }
    cpy_r_r14 = (CPyPtr)&((PyListObject *)cpy_r_r13)->ob_item;
    cpy_r_r15 = *(CPyPtr *)cpy_r_r14;
    *(PyObject * *)cpy_r_r15 = cpy_r_r12;
    cpy_r_r16 = CPySequence_Multiply(cpy_r_r13, cpy_r_star_length);
    CPy_DECREF(cpy_r_r13);
    CPyTagged_DECREF(cpy_r_star_length);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "expand_starred_pattern_types", 369, CPyStatic_checkpattern___globals);
        goto CPyL21;
    }
    cpy_r_r17 = PyNumber_InPlaceAdd(cpy_r_new_types, cpy_r_r16);
    CPy_DECREF(cpy_r_new_types);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "expand_starred_pattern_types", 369, CPyStatic_checkpattern___globals);
        goto CPyL18;
    }
    if (likely(PyList_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "expand_starred_pattern_types", 369, CPyStatic_checkpattern___globals, "list", cpy_r_r17);
        goto CPyL18;
    }
    cpy_r_new_types = cpy_r_r18;
    if (likely(PyLong_Check(cpy_r_star_pos)))
        cpy_r_r19 = CPyTagged_FromObject(cpy_r_star_pos);
    else {
        CPy_TypeError("int", cpy_r_star_pos); cpy_r_r19 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r19 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/checkpattern.py", "expand_starred_pattern_types", 370, CPyStatic_checkpattern___globals);
        goto CPyL21;
    }
    cpy_r_r20 = CPyTagged_Add(cpy_r_r19, 2);
    CPyTagged_DECREF(cpy_r_r19);
    cpy_r_r21 = CPyList_GetSlice(cpy_r_types, cpy_r_r20, 9223372036854775806LL);
    CPyTagged_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "expand_starred_pattern_types", 370, CPyStatic_checkpattern___globals);
        goto CPyL21;
    }
    if (likely(PyList_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "expand_starred_pattern_types", 370, CPyStatic_checkpattern___globals, "list", cpy_r_r21);
        goto CPyL21;
    }
    cpy_r_r23 = PyNumber_InPlaceAdd(cpy_r_new_types, cpy_r_r22);
    CPy_DECREF(cpy_r_new_types);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "expand_starred_pattern_types", 370, CPyStatic_checkpattern___globals);
        goto CPyL18;
    }
    if (likely(PyList_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "expand_starred_pattern_types", 370, CPyStatic_checkpattern___globals, "list", cpy_r_r23);
        goto CPyL18;
    }
    cpy_r_new_types = cpy_r_r24;
    return cpy_r_new_types;
CPyL18: ;
    cpy_r_r25 = NULL;
    return cpy_r_r25;
CPyL19: ;
    CPy_DecRef(cpy_r_new_types);
    CPyTagged_DecRef(cpy_r_star_length);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_new_types);
    CPyTagged_DecRef(cpy_r_star_length);
    CPy_DecRef(cpy_r_r12);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_new_types);
    goto CPyL18;
}

PyObject *CPyPy_checkpattern___PatternChecker___expand_starred_pattern_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"types", "star_pos", "num_types", 0};
    static CPyArg_Parser parser = {"OOO:expand_starred_pattern_types", kwlist, 0};
    PyObject *obj_types;
    PyObject *obj_star_pos;
    PyObject *obj_num_types;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_types, &obj_star_pos, &obj_num_types)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_types;
    if (likely(PyList_Check(obj_types)))
        arg_types = obj_types;
    else {
        CPy_TypeError("list", obj_types); 
        goto fail;
    }
    PyObject *arg_star_pos;
    if (PyLong_Check(obj_star_pos))
        arg_star_pos = obj_star_pos;
    else {
        arg_star_pos = NULL;
    }
    if (arg_star_pos != NULL) goto __LL1530;
    if (obj_star_pos == Py_None)
        arg_star_pos = obj_star_pos;
    else {
        arg_star_pos = NULL;
    }
    if (arg_star_pos != NULL) goto __LL1530;
    CPy_TypeError("int or None", obj_star_pos); 
    goto fail;
__LL1530: ;
    CPyTagged arg_num_types;
    if (likely(PyLong_Check(obj_num_types)))
        arg_num_types = CPyTagged_BorrowFromObject(obj_num_types);
    else {
        CPy_TypeError("int", obj_num_types); goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___expand_starred_pattern_types(arg_self, arg_types, arg_star_pos, arg_num_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "expand_starred_pattern_types", 357, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___visit_starred_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_captures;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    CPyPtr cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_list_type;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_starred_pattern", 375, CPyStatic_checkpattern___globals);
        goto CPyL18;
    }
    cpy_r_captures = cpy_r_r0;
    cpy_r_r1 = ((mypy___patterns___StarredPatternObject *)cpy_r_o)->_capture;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL10;
    cpy_r_r4 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_starred_pattern", "PatternChecker", "chk", 377, CPyStatic_checkpattern___globals);
        goto CPyL19;
    }
    CPy_INCREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[796]; /* 'builtins.list' */
    cpy_r_r6 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_type_context;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_starred_pattern", "PatternChecker", "type_context", 377, CPyStatic_checkpattern___globals);
        goto CPyL20;
    }
CPyL4: ;
    cpy_r_r7 = CPyList_GetItemShort(cpy_r_r6, -2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_starred_pattern", 377, CPyStatic_checkpattern___globals);
        goto CPyL20;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_types___Type)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_starred_pattern", 377, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r7);
        goto CPyL20;
    }
    cpy_r_r9 = PyList_New(1);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_starred_pattern", 377, CPyStatic_checkpattern___globals);
        goto CPyL21;
    }
    cpy_r_r10 = (CPyPtr)&((PyListObject *)cpy_r_r9)->ob_item;
    cpy_r_r11 = *(CPyPtr *)cpy_r_r10;
    *(PyObject * *)cpy_r_r11 = cpy_r_r8;
    cpy_r_r12 = CPyDef_checker___TypeChecker___named_generic_type(cpy_r_r4, cpy_r_r5, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_starred_pattern", 377, CPyStatic_checkpattern___globals);
        goto CPyL19;
    }
    cpy_r_list_type = cpy_r_r12;
    cpy_r_r13 = ((mypy___patterns___StarredPatternObject *)cpy_r_o)->_capture;
    CPy_INCREF(cpy_r_r13);
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_starred_pattern", 378, CPyStatic_checkpattern___globals, "mypy.nodes.NameExpr", cpy_r_r13);
        goto CPyL22;
    }
    cpy_r_r15 = CPyDict_SetItem(cpy_r_captures, cpy_r_r14, cpy_r_list_type);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_list_type);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_starred_pattern", 378, CPyStatic_checkpattern___globals);
        goto CPyL19;
    }
CPyL10: ;
    cpy_r_r17 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_type_context;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_starred_pattern", "PatternChecker", "type_context", 379, CPyStatic_checkpattern___globals);
        goto CPyL19;
    }
CPyL11: ;
    cpy_r_r18 = CPyList_GetItemShort(cpy_r_r17, -2);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_starred_pattern", 379, CPyStatic_checkpattern___globals);
        goto CPyL19;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r18, CPyType_types___Type)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_starred_pattern", 379, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r18);
        goto CPyL19;
    }
    cpy_r_r20 = 2;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = CPyDef_types___UninhabitedType(cpy_r_r20, cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_starred_pattern", 379, CPyStatic_checkpattern___globals);
        goto CPyL23;
    }
    cpy_r_r24 = CPyStatic_checkpattern___globals;
    cpy_r_r25 = CPyStatics[1351]; /* 'PatternType' */
    cpy_r_r26 = CPyDict_GetItem(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_starred_pattern", 379, CPyStatic_checkpattern___globals);
        goto CPyL24;
    }
    PyObject *cpy_r_r27[3] = {cpy_r_r19, cpy_r_r23, cpy_r_captures};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r26, cpy_r_r28, 3, 0);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_starred_pattern", 379, CPyStatic_checkpattern___globals);
        goto CPyL24;
    }
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_captures);
    if (likely(PyTuple_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_starred_pattern", 379, CPyStatic_checkpattern___globals, "tuple", cpy_r_r29);
        goto CPyL18;
    }
    return cpy_r_r30;
CPyL18: ;
    cpy_r_r31 = NULL;
    return cpy_r_r31;
CPyL19: ;
    CPy_DecRef(cpy_r_captures);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r4);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r8);
    goto CPyL18;
CPyL22: ;
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_list_type);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r19);
    goto CPyL18;
CPyL24: ;
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r23);
    goto CPyL18;
}

PyObject *CPyPy_checkpattern___PatternChecker___visit_starred_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_starred_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___StarredPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.StarredPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___visit_starred_pattern(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "visit_starred_pattern", 374, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___visit_starred_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_checkpattern___PatternChecker___visit_starred_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_checkpattern___PatternChecker___visit_starred_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_starred_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___StarredPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.StarredPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___visit_starred_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "visit_starred_pattern__PatternVisitor_glue", -1, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___visit_mapping_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_current_type;
    char cpy_r_can_match;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_captures;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_inner_type;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_pattern_type;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_mapping;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_mapping_inst;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_dict_typeinfo;
    PyObject *cpy_r_r62;
    CPyTagged cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_rest_type;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_object_type;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    CPyPtr cpy_r_r75;
    CPyPtr cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_new_type;
    char cpy_r_r85;
    CPyTagged cpy_r_r86;
    CPyTagged cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject **cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    cpy_r_r0 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_type_context;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_mapping_pattern", "PatternChecker", "type_context", 382, CPyStatic_checkpattern___globals);
        goto CPyL58;
    }
CPyL1: ;
    cpy_r_r1 = CPyList_GetItemShort(cpy_r_r0, -2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 382, CPyStatic_checkpattern___globals);
        goto CPyL58;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 382, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL58;
    }
    cpy_r_r3 = CPyDef_types___get_proper_type(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 382, CPyStatic_checkpattern___globals);
        goto CPyL58;
    }
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 382, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_r3);
        goto CPyL58;
    }
    cpy_r_current_type = cpy_r_r4;
    cpy_r_can_match = 1;
    cpy_r_r5 = PyDict_New();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 384, CPyStatic_checkpattern___globals);
        goto CPyL59;
    }
    cpy_r_captures = cpy_r_r5;
    cpy_r_r6 = ((mypy___patterns___MappingPatternObject *)cpy_r_o)->_keys;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = 0;
    cpy_r_r8 = ((mypy___patterns___MappingPatternObject *)cpy_r_o)->_values;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = 0;
CPyL7: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL60;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r16;
    if (!cpy_r_r17) goto CPyL60;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_r6, cpy_r_r7);
    if (likely(PyObject_TypeCheck(cpy_r_r18, CPyType_nodes___Expression)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 385, CPyStatic_checkpattern___globals, "mypy.nodes.Expression", cpy_r_r18);
        goto CPyL61;
    }
    cpy_r_key = cpy_r_r19;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_r8, cpy_r_r9);
    if (likely(PyObject_TypeCheck(cpy_r_r20, CPyType_patterns___Pattern)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 385, CPyStatic_checkpattern___globals, "mypy.patterns.Pattern", cpy_r_r20);
        goto CPyL62;
    }
    cpy_r_value = cpy_r_r21;
    cpy_r_r22 = CPyDef_checkpattern___PatternChecker___get_mapping_item_type(cpy_r_self, cpy_r_o, cpy_r_current_type, cpy_r_key);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 386, CPyStatic_checkpattern___globals);
        goto CPyL63;
    }
    cpy_r_inner_type = cpy_r_r22;
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_inner_type == cpy_r_r23;
    if (cpy_r_r24) {
        goto CPyL64;
    } else
        goto CPyL16;
CPyL13: ;
    cpy_r_can_match = 0;
    cpy_r_r25 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_mapping_pattern", "PatternChecker", "chk", 389, CPyStatic_checkpattern___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r25);
CPyL14: ;
    cpy_r_r26 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r27 = CPyDef_checker___TypeChecker___named_type(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 389, CPyStatic_checkpattern___globals);
        goto CPyL63;
    }
    cpy_r_inner_type = cpy_r_r27;
CPyL16: ;
    if (likely(cpy_r_inner_type != Py_None))
        cpy_r_r28 = cpy_r_inner_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 390, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_inner_type);
        goto CPyL63;
    }
    cpy_r_r29 = CPyDef_checkpattern___PatternChecker___accept(cpy_r_self, cpy_r_value, cpy_r_r28);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 390, CPyStatic_checkpattern___globals);
        goto CPyL61;
    }
    cpy_r_pattern_type = cpy_r_r29;
    cpy_r_r30 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 391, CPyStatic_checkpattern___globals);
        goto CPyL65;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r30, CPyType_types___Type)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 391, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r30);
        goto CPyL65;
    }
    cpy_r_r32 = CPyDef_checkpattern___is_uninhabited(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 391, CPyStatic_checkpattern___globals);
        goto CPyL65;
    }
    if (cpy_r_r32) {
        goto CPyL66;
    } else
        goto CPyL23;
CPyL22: ;
    cpy_r_can_match = 0;
    goto CPyL26;
CPyL23: ;
    cpy_r_r33 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 4);
    CPy_DECREF(cpy_r_pattern_type);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 394, CPyStatic_checkpattern___globals);
        goto CPyL61;
    }
    if (likely(PyDict_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 394, CPyStatic_checkpattern___globals, "dict", cpy_r_r33);
        goto CPyL61;
    }
    cpy_r_r35 = CPyDef_checkpattern___PatternChecker___update_type_map(cpy_r_self, cpy_r_captures, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 394, CPyStatic_checkpattern___globals);
        goto CPyL61;
    }
CPyL26: ;
    cpy_r_r36 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r36;
    cpy_r_r37 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r37;
    goto CPyL7;
CPyL27: ;
    cpy_r_r38 = ((mypy___patterns___MappingPatternObject *)cpy_r_o)->_rest;
    cpy_r_r39 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r40 = cpy_r_r38 != cpy_r_r39;
    if (!cpy_r_r40) goto CPyL47;
    cpy_r_r41 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_mapping_pattern", "PatternChecker", "chk", 397, CPyStatic_checkpattern___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r41);
CPyL29: ;
    cpy_r_r42 = CPyStatics[892]; /* 'typing.Mapping' */
    cpy_r_r43 = CPyDef_checker___TypeChecker___named_type(cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 397, CPyStatic_checkpattern___globals);
        goto CPyL67;
    }
    cpy_r_mapping = cpy_r_r43;
    cpy_r_r44 = NULL;
    cpy_r_r45 = 2;
    cpy_r_r46 = 2;
    cpy_r_r47 = 2;
    cpy_r_r48 = 2;
    cpy_r_r49 = 2;
    cpy_r_r50 = NULL;
    cpy_r_r51 = CPyDef_subtypes___is_subtype(cpy_r_current_type, cpy_r_mapping, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 398, CPyStatic_checkpattern___globals);
        goto CPyL68;
    }
    if (!cpy_r_r51) goto CPyL69;
    cpy_r_r52 = (PyObject *)CPyType_types___Instance;
    cpy_r_r53 = (CPyPtr)&((PyObject *)cpy_r_current_type)->ob_type;
    cpy_r_r54 = *(PyObject * *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 == cpy_r_r52;
    if (!cpy_r_r55) goto CPyL69;
    CPy_INCREF(cpy_r_current_type);
    if (likely(Py_TYPE(cpy_r_current_type) == CPyType_types___Instance))
        cpy_r_r56 = cpy_r_current_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 399, CPyStatic_checkpattern___globals, "mypy.types.Instance", cpy_r_current_type);
        goto CPyL68;
    }
    cpy_r_r57 = ((mypy___types___InstanceObject *)cpy_r_mapping)->_type;
    CPy_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_mapping);
    cpy_r_r58 = CPyDef_maptype___map_instance_to_supertype(cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 399, CPyStatic_checkpattern___globals);
        goto CPyL67;
    }
    cpy_r_mapping_inst = cpy_r_r58;
    cpy_r_r59 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_mapping_pattern", "PatternChecker", "chk", 400, CPyStatic_checkpattern___globals);
        goto CPyL70;
    }
    CPy_INCREF(cpy_r_r59);
CPyL36: ;
    cpy_r_r60 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r61 = CPyDef_checker___TypeChecker___lookup_typeinfo(cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 400, CPyStatic_checkpattern___globals);
        goto CPyL70;
    }
    cpy_r_dict_typeinfo = cpy_r_r61;
    cpy_r_r62 = ((mypy___types___InstanceObject *)cpy_r_mapping_inst)->_args;
    CPy_INCREF(cpy_r_r62);
    CPy_DECREF(cpy_r_mapping_inst);
    cpy_r_r63 = CPY_INT_TAG;
    cpy_r_r64 = CPY_INT_TAG;
    cpy_r_r65 = NULL;
    cpy_r_r66 = NULL;
    cpy_r_r67 = CPyDef_types___Instance(cpy_r_dict_typeinfo, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_dict_typeinfo);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 401, CPyStatic_checkpattern___globals);
        goto CPyL67;
    }
    cpy_r_rest_type = cpy_r_r67;
    goto CPyL45;
CPyL39: ;
    cpy_r_r68 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_mapping_pattern", "PatternChecker", "chk", 403, CPyStatic_checkpattern___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r68);
CPyL40: ;
    cpy_r_r69 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r70 = CPyDef_checker___TypeChecker___named_type(cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 403, CPyStatic_checkpattern___globals);
        goto CPyL67;
    }
    cpy_r_object_type = cpy_r_r70;
    cpy_r_r71 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_mapping_pattern", "PatternChecker", "chk", 404, CPyStatic_checkpattern___globals);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_r71);
CPyL42: ;
    cpy_r_r72 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r73 = PyList_New(2);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 405, CPyStatic_checkpattern___globals);
        goto CPyL72;
    }
    cpy_r_r74 = (CPyPtr)&((PyListObject *)cpy_r_r73)->ob_item;
    cpy_r_r75 = *(CPyPtr *)cpy_r_r74;
    CPy_INCREF(cpy_r_object_type);
    *(PyObject * *)cpy_r_r75 = cpy_r_object_type;
    cpy_r_r76 = cpy_r_r75 + 8;
    *(PyObject * *)cpy_r_r76 = cpy_r_object_type;
    cpy_r_r77 = CPyDef_checker___TypeChecker___named_generic_type(cpy_r_r71, cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 404, CPyStatic_checkpattern___globals);
        goto CPyL67;
    }
    cpy_r_rest_type = cpy_r_r77;
CPyL45: ;
    cpy_r_r78 = ((mypy___patterns___MappingPatternObject *)cpy_r_o)->_rest;
    CPy_INCREF(cpy_r_r78);
    if (likely(cpy_r_r78 != Py_None))
        cpy_r_r79 = cpy_r_r78;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 408, CPyStatic_checkpattern___globals, "mypy.nodes.NameExpr", cpy_r_r78);
        goto CPyL73;
    }
    cpy_r_r80 = CPyDict_SetItem(cpy_r_captures, cpy_r_r79, cpy_r_rest_type);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_rest_type);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 408, CPyStatic_checkpattern___globals);
        goto CPyL67;
    }
CPyL47: ;
    if (!cpy_r_can_match) goto CPyL52;
    cpy_r_r82 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_type_context;
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_mapping_pattern", "PatternChecker", "type_context", 412, CPyStatic_checkpattern___globals);
        goto CPyL67;
    }
CPyL49: ;
    cpy_r_r83 = CPyList_GetItemShort(cpy_r_r82, -2);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 412, CPyStatic_checkpattern___globals);
        goto CPyL67;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r83, CPyType_types___Type)))
        cpy_r_r84 = cpy_r_r83;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 412, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r83);
        goto CPyL67;
    }
    cpy_r_new_type = cpy_r_r84;
    goto CPyL54;
CPyL52: ;
    cpy_r_r85 = 2;
    cpy_r_r86 = CPY_INT_TAG;
    cpy_r_r87 = CPY_INT_TAG;
    cpy_r_r88 = CPyDef_types___UninhabitedType(cpy_r_r85, cpy_r_r86, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 414, CPyStatic_checkpattern___globals);
        goto CPyL67;
    }
    cpy_r_new_type = cpy_r_r88;
CPyL54: ;
    cpy_r_r89 = CPyStatic_checkpattern___globals;
    cpy_r_r90 = CPyStatics[1351]; /* 'PatternType' */
    cpy_r_r91 = CPyDict_GetItem(cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 415, CPyStatic_checkpattern___globals);
        goto CPyL74;
    }
    PyObject *cpy_r_r92[3] = {cpy_r_new_type, cpy_r_current_type, cpy_r_captures};
    cpy_r_r93 = (PyObject **)&cpy_r_r92;
    cpy_r_r94 = _PyObject_Vectorcall(cpy_r_r91, cpy_r_r93, 3, 0);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 415, CPyStatic_checkpattern___globals);
        goto CPyL74;
    }
    CPy_DECREF(cpy_r_new_type);
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_captures);
    if (likely(PyTuple_Check(cpy_r_r94)))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 415, CPyStatic_checkpattern___globals, "tuple", cpy_r_r94);
        goto CPyL58;
    }
    return cpy_r_r95;
CPyL58: ;
    cpy_r_r96 = NULL;
    return cpy_r_r96;
CPyL59: ;
    CPy_DecRef(cpy_r_current_type);
    goto CPyL58;
CPyL60: ;
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r8);
    goto CPyL27;
CPyL61: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    goto CPyL58;
CPyL62: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_key);
    goto CPyL58;
CPyL63: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_value);
    goto CPyL58;
CPyL64: ;
    CPy_DECREF(cpy_r_inner_type);
    goto CPyL13;
CPyL65: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_pattern_type);
    goto CPyL58;
CPyL66: ;
    CPy_DECREF(cpy_r_pattern_type);
    goto CPyL22;
CPyL67: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    goto CPyL58;
CPyL68: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_mapping);
    goto CPyL58;
CPyL69: ;
    CPy_DECREF(cpy_r_mapping);
    goto CPyL39;
CPyL70: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_mapping_inst);
    goto CPyL58;
CPyL71: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_object_type);
    goto CPyL58;
CPyL72: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_object_type);
    CPy_DecRef(cpy_r_r71);
    goto CPyL58;
CPyL73: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_rest_type);
    goto CPyL58;
CPyL74: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_new_type);
    goto CPyL58;
}

PyObject *CPyPy_checkpattern___PatternChecker___visit_mapping_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mapping_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___MappingPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___visit_mapping_pattern(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern", 381, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___visit_mapping_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_checkpattern___PatternChecker___visit_mapping_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_checkpattern___PatternChecker___visit_mapping_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_mapping_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___MappingPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___visit_mapping_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "visit_mapping_pattern__PatternVisitor_glue", -1, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___get_mapping_item_type(PyObject *cpy_r_self, PyObject *cpy_r_pattern, PyObject *cpy_r_mapping_type, PyObject *cpy_r_key) {
    char cpy_r_r0;
    char cpy_r_has_local_errors;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_local_errors__redef__;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    tuple_T3OOO cpy_r_r20;
    tuple_T3OOO cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    tuple_T3OOO cpy_r_r27;
    tuple_T3OOO cpy_r_r28;
    tuple_T3OOO cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_local_errors;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    tuple_T3OOO cpy_r_r44;
    tuple_T3OOO cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    tuple_T3OOO cpy_r_r51;
    tuple_T3OOO cpy_r_r52;
    tuple_T3OOO cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    tuple_T3OOO cpy_r_r65;
    tuple_T3OOO cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    tuple_T3OOO cpy_r_r72;
    tuple_T3OOO cpy_r_r73;
    tuple_T3OOO cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    cpy_r_r0 = 2;
    cpy_r_has_local_errors = cpy_r_r0;
    cpy_r_r1 = NULL;
    cpy_r_result = cpy_r_r1;
    cpy_r_r2 = CPyDef_types___get_proper_type(cpy_r_mapping_type);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 420, CPyStatic_checkpattern___globals);
        goto CPyL92;
    }
    if (likely(cpy_r_r2 != Py_None))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_mapping_item_type", 420, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_r2);
        goto CPyL92;
    }
    cpy_r_mapping_type = cpy_r_r3;
    cpy_r_r4 = (PyObject *)CPyType_types___TypedDictType;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_mapping_type)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL62;
    cpy_r_r8 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "get_mapping_item_type", "PatternChecker", "msg", 422, CPyStatic_checkpattern___globals);
        goto CPyL93;
    }
    CPy_INCREF(cpy_r_r8);
CPyL4: ;
    cpy_r_r9 = NULL;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_messages___MessageBuilder___filter_errors(cpy_r_r8, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 422, CPyStatic_checkpattern___globals);
        goto CPyL93;
    }
    cpy_r_r12 = CPyDef_mypy___errors___ErrorWatcher_____enter__(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 422, CPyStatic_checkpattern___globals);
        goto CPyL94;
    }
    cpy_r_r13 = 1;
    cpy_r_local_errors__redef__ = cpy_r_r12;
    cpy_r_r14 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "get_mapping_item_type", "PatternChecker", "chk", 423, CPyStatic_checkpattern___globals);
        goto CPyL95;
    }
CPyL8: ;
    cpy_r_r15 = ((mypy___checker___TypeCheckerObject *)cpy_r_r14)->_expr_checker;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "get_mapping_item_type", "TypeChecker", "expr_checker", 423, CPyStatic_checkpattern___globals);
        goto CPyL95;
    }
    CPy_INCREF(cpy_r_r15);
CPyL9: ;
    CPy_INCREF(cpy_r_mapping_type);
    if (likely(Py_TYPE(cpy_r_mapping_type) == CPyType_types___TypedDictType))
        cpy_r_r16 = cpy_r_mapping_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_mapping_item_type", 424, CPyStatic_checkpattern___globals, "mypy.types.TypedDictType", cpy_r_mapping_type);
        goto CPyL96;
    }
    cpy_r_r17 = 2;
    cpy_r_r18 = CPyDef_checkexpr___ExpressionChecker___visit_typeddict_index_expr(cpy_r_r15, cpy_r_r16, cpy_r_key, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 423, CPyStatic_checkpattern___globals);
        goto CPyL95;
    } else
        goto CPyL97;
CPyL11: ;
    cpy_r_result = cpy_r_r18;
    cpy_r_r19 = CPyDef_mypy___errors___ErrorWatcher___has_new_errors(cpy_r_local_errors__redef__);
    CPy_DECREF(cpy_r_local_errors__redef__);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 426, CPyStatic_checkpattern___globals);
        goto CPyL13;
    }
    cpy_r_has_local_errors = cpy_r_r19;
    goto CPyL20;
CPyL13: ;
    cpy_r_r20 = CPy_CatchError();
    cpy_r_r13 = 0;
    cpy_r_r21 = CPy_GetExcInfo();
    cpy_r_r22 = cpy_r_r21.f0;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = cpy_r_r21.f1;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = cpy_r_r21.f2;
    CPy_INCREF(cpy_r_r24);
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    CPy_DecRef(cpy_r_r21.f2);
    cpy_r_r25 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r11, cpy_r_r22, cpy_r_r23, cpy_r_r24);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 422, CPyStatic_checkpattern___globals);
        goto CPyL18;
    }
    if (cpy_r_r25) goto CPyL17;
    CPy_Reraise();
    if (!0) {
        goto CPyL18;
    } else
        goto CPyL98;
CPyL16: ;
    CPy_Unreachable();
CPyL17: ;
    CPy_RestoreExcInfo(cpy_r_r20);
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    goto CPyL20;
CPyL18: ;
    CPy_RestoreExcInfo(cpy_r_r20);
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    cpy_r_r26 = CPy_KeepPropagating();
    if (!cpy_r_r26) {
        goto CPyL21;
    } else
        goto CPyL99;
CPyL19: ;
    CPy_Unreachable();
CPyL20: ;
    tuple_T3OOO __tmp1531 = { NULL, NULL, NULL };
    cpy_r_r27 = __tmp1531;
    cpy_r_r28 = cpy_r_r27;
    goto CPyL22;
CPyL21: ;
    cpy_r_r29 = CPy_CatchError();
    cpy_r_r28 = cpy_r_r29;
CPyL22: ;
    if (!cpy_r_r13) goto CPyL100;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r11, cpy_r_r30, cpy_r_r30, cpy_r_r30);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 422, CPyStatic_checkpattern___globals);
        goto CPyL101;
    }
CPyL24: ;
    if (cpy_r_r28.f0 == NULL) {
        goto CPyL31;
    } else
        goto CPyL102;
CPyL25: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL27;
    } else
        goto CPyL103;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    if (cpy_r_r28.f0 == NULL) goto CPyL29;
    CPy_RestoreExcInfo(cpy_r_r28);
    CPy_XDECREF(cpy_r_r28.f0);
    CPy_XDECREF(cpy_r_r28.f1);
    CPy_XDECREF(cpy_r_r28.f2);
CPyL29: ;
    cpy_r_r32 = CPy_KeepPropagating();
    if (!cpy_r_r32) goto CPyL91;
    CPy_Unreachable();
CPyL31: ;
    if (cpy_r_has_local_errors == 2) {
        goto CPyL104;
    } else
        goto CPyL34;
CPyL32: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"has_local_errors\" referenced before assignment");
    cpy_r_r33 = 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", -1, CPyStatic_checkpattern___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL34: ;
    if (!cpy_r_has_local_errors) goto CPyL105;
    cpy_r_r34 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "get_mapping_item_type", "PatternChecker", "msg", 430, CPyStatic_checkpattern___globals);
        goto CPyL93;
    }
    CPy_INCREF(cpy_r_r34);
CPyL36: ;
    cpy_r_r35 = NULL;
    cpy_r_r36 = 2;
    cpy_r_r37 = CPyDef_messages___MessageBuilder___filter_errors(cpy_r_r34, cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 430, CPyStatic_checkpattern___globals);
        goto CPyL93;
    }
    cpy_r_r38 = CPyDef_mypy___errors___ErrorWatcher_____enter__(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 430, CPyStatic_checkpattern___globals);
        goto CPyL106;
    }
    cpy_r_r39 = 1;
    cpy_r_local_errors = cpy_r_r38;
    if (likely(Py_TYPE(cpy_r_mapping_type) == CPyType_types___TypedDictType))
        cpy_r_r40 = cpy_r_mapping_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_mapping_item_type", 431, CPyStatic_checkpattern___globals, "mypy.types.TypedDictType", cpy_r_mapping_type);
        goto CPyL107;
    }
    cpy_r_r41 = CPyDef_checkpattern___PatternChecker___get_simple_mapping_item_type(cpy_r_self, cpy_r_pattern, cpy_r_r40, cpy_r_key);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 431, CPyStatic_checkpattern___globals);
        goto CPyL107;
    } else
        goto CPyL108;
CPyL41: ;
    cpy_r_result = cpy_r_r41;
    cpy_r_r42 = CPyDef_mypy___errors___ErrorWatcher___has_new_errors(cpy_r_local_errors);
    CPy_DECREF(cpy_r_local_errors);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 433, CPyStatic_checkpattern___globals);
        goto CPyL44;
    }
    if (cpy_r_r42) {
        goto CPyL109;
    } else
        goto CPyL51;
CPyL43: ;
    cpy_r_r43 = Py_None;
    CPy_INCREF(cpy_r_r43);
    cpy_r_result = cpy_r_r43;
    goto CPyL51;
CPyL44: ;
    cpy_r_r44 = CPy_CatchError();
    cpy_r_r39 = 0;
    cpy_r_r45 = CPy_GetExcInfo();
    cpy_r_r46 = cpy_r_r45.f0;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = cpy_r_r45.f1;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = cpy_r_r45.f2;
    CPy_INCREF(cpy_r_r48);
    CPy_DecRef(cpy_r_r45.f0);
    CPy_DecRef(cpy_r_r45.f1);
    CPy_DecRef(cpy_r_r45.f2);
    cpy_r_r49 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r37, cpy_r_r46, cpy_r_r47, cpy_r_r48);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 430, CPyStatic_checkpattern___globals);
        goto CPyL49;
    }
    if (cpy_r_r49) goto CPyL48;
    CPy_Reraise();
    if (!0) {
        goto CPyL49;
    } else
        goto CPyL110;
CPyL47: ;
    CPy_Unreachable();
CPyL48: ;
    CPy_RestoreExcInfo(cpy_r_r44);
    CPy_DecRef(cpy_r_r44.f0);
    CPy_DecRef(cpy_r_r44.f1);
    CPy_DecRef(cpy_r_r44.f2);
    goto CPyL51;
CPyL49: ;
    CPy_RestoreExcInfo(cpy_r_r44);
    CPy_DecRef(cpy_r_r44.f0);
    CPy_DecRef(cpy_r_r44.f1);
    CPy_DecRef(cpy_r_r44.f2);
    cpy_r_r50 = CPy_KeepPropagating();
    if (!cpy_r_r50) {
        goto CPyL52;
    } else
        goto CPyL111;
CPyL50: ;
    CPy_Unreachable();
CPyL51: ;
    tuple_T3OOO __tmp1532 = { NULL, NULL, NULL };
    cpy_r_r51 = __tmp1532;
    cpy_r_r52 = cpy_r_r51;
    goto CPyL53;
CPyL52: ;
    cpy_r_r53 = CPy_CatchError();
    cpy_r_r52 = cpy_r_r53;
CPyL53: ;
    if (!cpy_r_r39) goto CPyL112;
    cpy_r_r54 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r55 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r37, cpy_r_r54, cpy_r_r54, cpy_r_r54);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 430, CPyStatic_checkpattern___globals);
        goto CPyL113;
    }
CPyL55: ;
    if (cpy_r_r52.f0 == NULL) {
        goto CPyL87;
    } else
        goto CPyL114;
CPyL56: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL58;
    } else
        goto CPyL115;
CPyL57: ;
    CPy_Unreachable();
CPyL58: ;
    if (cpy_r_r52.f0 == NULL) goto CPyL60;
    CPy_RestoreExcInfo(cpy_r_r52);
    CPy_XDECREF(cpy_r_r52.f0);
    CPy_XDECREF(cpy_r_r52.f1);
    CPy_XDECREF(cpy_r_r52.f2);
CPyL60: ;
    cpy_r_r56 = CPy_KeepPropagating();
    if (!cpy_r_r56) goto CPyL91;
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r57 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "get_mapping_item_type", "PatternChecker", "msg", 436, CPyStatic_checkpattern___globals);
        goto CPyL93;
    }
    CPy_INCREF(cpy_r_r57);
CPyL63: ;
    cpy_r_r58 = NULL;
    cpy_r_r59 = 2;
    cpy_r_r60 = CPyDef_messages___MessageBuilder___filter_errors(cpy_r_r57, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 436, CPyStatic_checkpattern___globals);
        goto CPyL93;
    }
    cpy_r_r61 = CPyDef_mypy___errors___ErrorWatcher_____enter__(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 436, CPyStatic_checkpattern___globals);
        goto CPyL116;
    } else
        goto CPyL117;
CPyL65: ;
    cpy_r_r62 = 1;
    if (likely(PyObject_TypeCheck(cpy_r_mapping_type, CPyType_types___ProperType)))
        cpy_r_r63 = cpy_r_mapping_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_mapping_item_type", 437, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_mapping_type);
        goto CPyL69;
    }
    cpy_r_r64 = CPyDef_checkpattern___PatternChecker___get_simple_mapping_item_type(cpy_r_self, cpy_r_pattern, cpy_r_r63, cpy_r_key);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 437, CPyStatic_checkpattern___globals);
        goto CPyL69;
    } else
        goto CPyL118;
CPyL68: ;
    cpy_r_result = cpy_r_r64;
    goto CPyL76;
CPyL69: ;
    cpy_r_r65 = CPy_CatchError();
    cpy_r_r62 = 0;
    cpy_r_r66 = CPy_GetExcInfo();
    cpy_r_r67 = cpy_r_r66.f0;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = cpy_r_r66.f1;
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69 = cpy_r_r66.f2;
    CPy_INCREF(cpy_r_r69);
    CPy_DecRef(cpy_r_r66.f0);
    CPy_DecRef(cpy_r_r66.f1);
    CPy_DecRef(cpy_r_r66.f2);
    cpy_r_r70 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r60, cpy_r_r67, cpy_r_r68, cpy_r_r69);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r69);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 436, CPyStatic_checkpattern___globals);
        goto CPyL74;
    }
    if (cpy_r_r70) goto CPyL73;
    CPy_Reraise();
    if (!0) {
        goto CPyL74;
    } else
        goto CPyL119;
CPyL72: ;
    CPy_Unreachable();
CPyL73: ;
    CPy_RestoreExcInfo(cpy_r_r65);
    CPy_DecRef(cpy_r_r65.f0);
    CPy_DecRef(cpy_r_r65.f1);
    CPy_DecRef(cpy_r_r65.f2);
    goto CPyL76;
CPyL74: ;
    CPy_RestoreExcInfo(cpy_r_r65);
    CPy_DecRef(cpy_r_r65.f0);
    CPy_DecRef(cpy_r_r65.f1);
    CPy_DecRef(cpy_r_r65.f2);
    cpy_r_r71 = CPy_KeepPropagating();
    if (!cpy_r_r71) {
        goto CPyL77;
    } else
        goto CPyL120;
CPyL75: ;
    CPy_Unreachable();
CPyL76: ;
    tuple_T3OOO __tmp1533 = { NULL, NULL, NULL };
    cpy_r_r72 = __tmp1533;
    cpy_r_r73 = cpy_r_r72;
    goto CPyL78;
CPyL77: ;
    cpy_r_r74 = CPy_CatchError();
    cpy_r_r73 = cpy_r_r74;
CPyL78: ;
    if (!cpy_r_r62) goto CPyL121;
    cpy_r_r75 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r76 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r60, cpy_r_r75, cpy_r_r75, cpy_r_r75);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 436, CPyStatic_checkpattern___globals);
        goto CPyL122;
    }
CPyL80: ;
    if (cpy_r_r73.f0 == NULL) {
        goto CPyL87;
    } else
        goto CPyL123;
CPyL81: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL83;
    } else
        goto CPyL124;
CPyL82: ;
    CPy_Unreachable();
CPyL83: ;
    if (cpy_r_r73.f0 == NULL) goto CPyL85;
    CPy_RestoreExcInfo(cpy_r_r73);
    CPy_XDECREF(cpy_r_r73.f0);
    CPy_XDECREF(cpy_r_r73.f1);
    CPy_XDECREF(cpy_r_r73.f2);
CPyL85: ;
    cpy_r_r77 = CPy_KeepPropagating();
    if (!cpy_r_r77) goto CPyL91;
    CPy_Unreachable();
CPyL87: ;
    if (cpy_r_result != NULL) goto CPyL90;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"result\" referenced before assignment");
    cpy_r_r78 = 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", -1, CPyStatic_checkpattern___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL90: ;
    return cpy_r_result;
CPyL91: ;
    cpy_r_r79 = NULL;
    return cpy_r_r79;
CPyL92: ;
    CPy_XDecRef(cpy_r_result);
    goto CPyL91;
CPyL93: ;
    CPy_DecRef(cpy_r_mapping_type);
    CPy_XDecRef(cpy_r_result);
    goto CPyL91;
CPyL94: ;
    CPy_DecRef(cpy_r_mapping_type);
    CPy_XDecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r11);
    goto CPyL91;
CPyL95: ;
    CPy_DecRef(cpy_r_local_errors__redef__);
    goto CPyL13;
CPyL96: ;
    CPy_DecRef(cpy_r_local_errors__redef__);
    CPy_DecRef(cpy_r_r15);
    goto CPyL13;
CPyL97: ;
    CPy_XDECREF(cpy_r_result);
    goto CPyL11;
CPyL98: ;
    CPy_DecRef(cpy_r_mapping_type);
    CPy_XDecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    goto CPyL16;
CPyL99: ;
    CPy_DecRef(cpy_r_mapping_type);
    CPy_XDecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r11);
    goto CPyL19;
CPyL100: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL24;
CPyL101: ;
    CPy_DecRef(cpy_r_mapping_type);
    CPy_XDecRef(cpy_r_result);
    goto CPyL27;
CPyL102: ;
    CPy_DECREF(cpy_r_mapping_type);
    CPy_XDECREF(cpy_r_result);
    goto CPyL25;
CPyL103: ;
    CPy_XDECREF(cpy_r_r28.f0);
    CPy_XDECREF(cpy_r_r28.f1);
    CPy_XDECREF(cpy_r_r28.f2);
    goto CPyL26;
CPyL104: ;
    CPy_DECREF(cpy_r_mapping_type);
    CPy_XDECREF(cpy_r_result);
    goto CPyL32;
CPyL105: ;
    CPy_DECREF(cpy_r_mapping_type);
    goto CPyL87;
CPyL106: ;
    CPy_DecRef(cpy_r_mapping_type);
    CPy_XDecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r37);
    goto CPyL91;
CPyL107: ;
    CPy_DecRef(cpy_r_local_errors);
    goto CPyL44;
CPyL108: ;
    CPy_XDECREF(cpy_r_result);
    goto CPyL41;
CPyL109: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL43;
CPyL110: ;
    CPy_XDecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r44.f0);
    CPy_DecRef(cpy_r_r44.f1);
    CPy_DecRef(cpy_r_r44.f2);
    goto CPyL47;
CPyL111: ;
    CPy_XDecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r37);
    goto CPyL50;
CPyL112: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL55;
CPyL113: ;
    CPy_XDecRef(cpy_r_result);
    goto CPyL58;
CPyL114: ;
    CPy_XDECREF(cpy_r_result);
    goto CPyL56;
CPyL115: ;
    CPy_XDECREF(cpy_r_r52.f0);
    CPy_XDECREF(cpy_r_r52.f1);
    CPy_XDECREF(cpy_r_r52.f2);
    goto CPyL57;
CPyL116: ;
    CPy_DecRef(cpy_r_mapping_type);
    CPy_XDecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r60);
    goto CPyL91;
CPyL117: ;
    CPy_DECREF(cpy_r_r61);
    goto CPyL65;
CPyL118: ;
    CPy_XDECREF(cpy_r_result);
    goto CPyL68;
CPyL119: ;
    CPy_XDecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r65.f0);
    CPy_DecRef(cpy_r_r65.f1);
    CPy_DecRef(cpy_r_r65.f2);
    goto CPyL72;
CPyL120: ;
    CPy_XDecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r60);
    goto CPyL75;
CPyL121: ;
    CPy_DECREF(cpy_r_r60);
    goto CPyL80;
CPyL122: ;
    CPy_XDecRef(cpy_r_result);
    goto CPyL83;
CPyL123: ;
    CPy_XDECREF(cpy_r_result);
    goto CPyL81;
CPyL124: ;
    CPy_XDECREF(cpy_r_r73.f0);
    CPy_XDECREF(cpy_r_r73.f1);
    CPy_XDECREF(cpy_r_r73.f2);
    goto CPyL82;
}

PyObject *CPyPy_checkpattern___PatternChecker___get_mapping_item_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"pattern", "mapping_type", "key", 0};
    static CPyArg_Parser parser = {"OOO:get_mapping_item_type", kwlist, 0};
    PyObject *obj_pattern;
    PyObject *obj_mapping_type;
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_pattern, &obj_mapping_type, &obj_key)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_pattern;
    if (likely(Py_TYPE(obj_pattern) == CPyType_patterns___MappingPattern))
        arg_pattern = obj_pattern;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_pattern); 
        goto fail;
    }
    PyObject *arg_mapping_type;
    if (likely(PyObject_TypeCheck(obj_mapping_type, CPyType_types___Type)))
        arg_mapping_type = obj_mapping_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_mapping_type); 
        goto fail;
    }
    PyObject *arg_key;
    if (likely(PyObject_TypeCheck(obj_key, CPyType_nodes___Expression)))
        arg_key = obj_key;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_key); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___get_mapping_item_type(arg_self, arg_pattern, arg_mapping_type, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "get_mapping_item_type", 417, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___get_simple_mapping_item_type(PyObject *cpy_r_self, PyObject *cpy_r_pattern, PyObject *cpy_r_mapping_type, PyObject *cpy_r_key) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    tuple_T2OO cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r14;
    PyObject *cpy_r__;
    PyObject *cpy_r_r15;
    cpy_r_r0 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "get_simple_mapping_item_type", "PatternChecker", "chk", 443, CPyStatic_checkpattern___globals);
        goto CPyL9;
    }
CPyL1: ;
    cpy_r_r1 = ((mypy___checker___TypeCheckerObject *)cpy_r_r0)->_expr_checker;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "get_simple_mapping_item_type", "TypeChecker", "expr_checker", 443, CPyStatic_checkpattern___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = CPyStatics[1197]; /* '__getitem__' */
    cpy_r_r3 = PyList_New(1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_simple_mapping_item_type", 444, CPyStatic_checkpattern___globals);
        goto CPyL10;
    }
    cpy_r_r4 = (CPyPtr)&((PyListObject *)cpy_r_r3)->ob_item;
    cpy_r_r5 = *(CPyPtr *)cpy_r_r4;
    CPy_INCREF(cpy_r_key);
    *(PyObject * *)cpy_r_r5 = cpy_r_key;
    cpy_r_r6 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r6 == NULL)) {
        goto CPyL11;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r7 = 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_simple_mapping_item_type", 444, CPyStatic_checkpattern___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r8 = PyList_New(1);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_simple_mapping_item_type", 444, CPyStatic_checkpattern___globals);
        goto CPyL12;
    }
    cpy_r_r9 = (CPyPtr)&((PyListObject *)cpy_r_r8)->ob_item;
    cpy_r_r10 = *(CPyPtr *)cpy_r_r9;
    CPy_INCREF(cpy_r_r6);
    *(PyObject * *)cpy_r_r10 = cpy_r_r6;
    cpy_r_r11 = NULL;
    cpy_r_r12 = CPyDef_checkexpr___ExpressionChecker___check_method_call_by_name(cpy_r_r1, cpy_r_r2, cpy_r_mapping_type, cpy_r_r3, cpy_r_r8, cpy_r_pattern, cpy_r_r11);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r12.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_simple_mapping_item_type", 443, CPyStatic_checkpattern___globals);
        goto CPyL9;
    }
    cpy_r_r13 = cpy_r_r12.f0;
    CPy_INCREF(cpy_r_r13);
    cpy_r_result = cpy_r_r13;
    cpy_r_r14 = cpy_r_r12.f1;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r12.f0);
    CPy_DECREF(cpy_r_r12.f1);
    cpy_r__ = cpy_r_r14;
    CPy_DECREF(cpy_r__);
    return cpy_r_result;
CPyL9: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL4;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL9;
}

PyObject *CPyPy_checkpattern___PatternChecker___get_simple_mapping_item_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"pattern", "mapping_type", "key", 0};
    static CPyArg_Parser parser = {"OOO:get_simple_mapping_item_type", kwlist, 0};
    PyObject *obj_pattern;
    PyObject *obj_mapping_type;
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_pattern, &obj_mapping_type, &obj_key)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_pattern;
    if (likely(Py_TYPE(obj_pattern) == CPyType_patterns___MappingPattern))
        arg_pattern = obj_pattern;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_pattern); 
        goto fail;
    }
    PyObject *arg_mapping_type;
    if (likely(PyObject_TypeCheck(obj_mapping_type, CPyType_types___Type)))
        arg_mapping_type = obj_mapping_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_mapping_type); 
        goto fail;
    }
    PyObject *arg_key;
    if (likely(PyObject_TypeCheck(obj_key, CPyType_nodes___Expression)))
        arg_key = obj_key;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_key); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___get_simple_mapping_item_type(arg_self, arg_pattern, arg_mapping_type, arg_key);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "get_simple_mapping_item_type", 440, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___visit_class_pattern(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    char cpy_r_r0;
    char cpy_r_has_local_errors;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_match_args_type;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_current_type;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_type_info;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_any_type;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    CPyPtr cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyPtr cpy_r_r64;
    int64_t cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyTagged cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r73;
    CPyPtr cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    CPyPtr cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject **cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyPtr cpy_r_r110;
    CPyPtr cpy_r_r111;
    tuple_T2OO cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    tuple_T2OO cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_new_type;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_rest_type;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_narrowed_type;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_keyword_pairs;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_match_arg_set;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_captures;
    PyObject *cpy_r_r126;
    CPyPtr cpy_r_r127;
    int64_t cpy_r_r128;
    CPyTagged cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    CPyPtr cpy_r_r133;
    int64_t cpy_r_r134;
    CPyTagged cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_pattern_type;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    char cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject **cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_local_errors__redef__;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    char cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    char cpy_r_r184;
    tuple_T3OOO cpy_r_r185;
    tuple_T3OOO cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    char cpy_r_r190;
    char cpy_r_r191;
    tuple_T3OOO cpy_r_r192;
    tuple_T3OOO cpy_r_r193;
    tuple_T3OOO cpy_r_r194;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    char cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject **cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    char cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_proper_match_args_type;
    PyObject *cpy_r_r217;
    CPyPtr cpy_r_r218;
    PyObject *cpy_r_r219;
    char cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_match_arg_names;
    PyObject *cpy_r_r223;
    CPyPtr cpy_r_r224;
    int64_t cpy_r_r225;
    CPyTagged cpy_r_r226;
    CPyPtr cpy_r_r227;
    int64_t cpy_r_r228;
    CPyTagged cpy_r_r229;
    char cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    char cpy_r_r235;
    PyObject *cpy_r_r236;
    char cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    CPyPtr cpy_r_r241;
    CPyPtr cpy_r_r242;
    PyObject *cpy_r_r243;
    CPyPtr cpy_r_r244;
    int64_t cpy_r_r245;
    CPyTagged cpy_r_r246;
    PyObject *cpy_r_r247;
    CPyTagged cpy_r_r248;
    PyObject *cpy_r_r249;
    CPyTagged cpy_r_r250;
    CPyPtr cpy_r_r251;
    int64_t cpy_r_r252;
    CPyTagged cpy_r_r253;
    char cpy_r_r254;
    CPyPtr cpy_r_r255;
    int64_t cpy_r_r256;
    CPyTagged cpy_r_r257;
    char cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_arg_name;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_pos;
    tuple_T2OO cpy_r_r263;
    PyObject *cpy_r_r264;
    int32_t cpy_r_r265;
    char cpy_r_r266;
    PyObject *cpy_r_r267;
    char cpy_r_r268;
    PyObject *cpy_r_r269;
    int32_t cpy_r_r270;
    char cpy_r_r271;
    CPyTagged cpy_r_r272;
    CPyTagged cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_keyword_arg_set;
    char cpy_r_has_duplicates;
    PyObject *cpy_r_r275;
    CPyTagged cpy_r_r276;
    PyObject *cpy_r_r277;
    CPyTagged cpy_r_r278;
    CPyPtr cpy_r_r279;
    int64_t cpy_r_r280;
    CPyTagged cpy_r_r281;
    char cpy_r_r282;
    CPyPtr cpy_r_r283;
    int64_t cpy_r_r284;
    CPyTagged cpy_r_r285;
    char cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_value;
    tuple_T2OO cpy_r_r291;
    PyObject *cpy_r_r292;
    int32_t cpy_r_r293;
    char cpy_r_r294;
    int32_t cpy_r_r295;
    char cpy_r_r296;
    char cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject **cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    char cpy_r_r307;
    PyObject *cpy_r_r308;
    char cpy_r_r309;
    int32_t cpy_r_r310;
    char cpy_r_r311;
    char cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject **cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    char cpy_r_r322;
    PyObject *cpy_r_r323;
    char cpy_r_r324;
    int32_t cpy_r_r325;
    char cpy_r_r326;
    CPyTagged cpy_r_r327;
    CPyTagged cpy_r_r328;
    PyObject *cpy_r_r329;
    char cpy_r_can_match;
    CPyTagged cpy_r_r330;
    CPyPtr cpy_r_r331;
    int64_t cpy_r_r332;
    CPyTagged cpy_r_r333;
    char cpy_r_r334;
    PyObject *cpy_r_r335;
    tuple_T2OO cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_keyword;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_pattern;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_key_type;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    char cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    char cpy_r_r345;
    PyObject *cpy_r_local_errors;
    PyObject *cpy_r_r346;
    char cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    char cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    char cpy_r_r355;
    char cpy_r_r356;
    PyObject *cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    CPyTagged cpy_r_r360;
    CPyTagged cpy_r_r361;
    PyObject *cpy_r_r362;
    char cpy_r_r363;
    tuple_T3OOO cpy_r_r364;
    tuple_T3OOO cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    char cpy_r_r369;
    char cpy_r_r370;
    tuple_T3OOO cpy_r_r371;
    tuple_T3OOO cpy_r_r372;
    tuple_T3OOO cpy_r_r373;
    PyObject *cpy_r_r374;
    char cpy_r_r375;
    char cpy_r_r376;
    char cpy_r_r377;
    PyObject *cpy_r_r378;
    PyObject *cpy_r_r379;
    char cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    CPyTagged cpy_r_r383;
    CPyTagged cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    PyObject **cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    char cpy_r_r397;
    PyObject *cpy_r_r398;
    char cpy_r_r399;
    PyObject *cpy_r_r400;
    PyObject *cpy_r_r401;
    int32_t cpy_r_r402;
    char cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_inner_type;
    PyObject *cpy_r_inner_rest_type;
    PyObject *cpy_r_inner_captures;
    char cpy_r_r410;
    char cpy_r_r411;
    char cpy_r_r412;
    CPyTagged cpy_r_r413;
    char cpy_r_r414;
    CPyTagged cpy_r_r415;
    CPyTagged cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject **cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject *cpy_r_r424;
    PyObject *cpy_r_r425;
    cpy_r_r0 = 2;
    cpy_r_has_local_errors = cpy_r_r0;
    cpy_r_r1 = NULL;
    cpy_r_match_args_type = cpy_r_r1;
    cpy_r_r2 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_type_context;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "type_context", 449, CPyStatic_checkpattern___globals);
        goto CPyL257;
    }
CPyL1: ;
    cpy_r_r3 = CPyList_GetItemShort(cpy_r_r2, -2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 449, CPyStatic_checkpattern___globals);
        goto CPyL257;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r3, CPyType_types___Type)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 449, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r3);
        goto CPyL257;
    }
    cpy_r_r5 = CPyDef_types___get_proper_type(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 449, CPyStatic_checkpattern___globals);
        goto CPyL257;
    }
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 449, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_r5);
        goto CPyL257;
    }
    cpy_r_current_type = cpy_r_r6;
    cpy_r_r7 = ((mypy___patterns___ClassPatternObject *)cpy_r_o)->_class_ref;
    cpy_r_r8 = ((mypy___nodes___RefExprObject *)cpy_r_r7)->_node;
    CPy_INCREF(cpy_r_r8);
    cpy_r_type_info = cpy_r_r8;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_type_info == cpy_r_r9;
    if (cpy_r_r10) {
        goto CPyL258;
    } else
        goto CPyL13;
CPyL6: ;
    cpy_r_r11 = NULL;
    cpy_r_r12 = NULL;
    cpy_r_r13 = CPY_INT_TAG;
    cpy_r_r14 = CPY_INT_TAG;
    cpy_r_r15 = CPyDef_types___AnyType(10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 456, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    cpy_r_r16 = NULL;
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPY_INT_TAG;
    cpy_r_r19 = CPY_INT_TAG;
    cpy_r_r20 = CPyDef_types___AnyType(10, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 456, CPyStatic_checkpattern___globals);
        goto CPyL259;
    }
    cpy_r_r21 = PyDict_New();
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 456, CPyStatic_checkpattern___globals);
        goto CPyL260;
    }
    cpy_r_r22 = CPyStatic_checkpattern___globals;
    cpy_r_r23 = CPyStatics[1351]; /* 'PatternType' */
    cpy_r_r24 = CPyDict_GetItem(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 456, CPyStatic_checkpattern___globals);
        goto CPyL261;
    }
    PyObject *cpy_r_r25[3] = {cpy_r_r15, cpy_r_r20, cpy_r_r21};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r26, 3, 0);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 456, CPyStatic_checkpattern___globals);
        goto CPyL261;
    }
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r21);
    if (likely(PyTuple_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 456, CPyStatic_checkpattern___globals, "tuple", cpy_r_r27);
        goto CPyL256;
    }
    return cpy_r_r28;
CPyL13: ;
    cpy_r_r29 = (PyObject *)CPyType_nodes___TypeAlias;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_type_info)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL20;
    if (likely(Py_TYPE(cpy_r_type_info) == CPyType_nodes___TypeAlias))
        cpy_r_r33 = cpy_r_type_info;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 457, CPyStatic_checkpattern___globals, "mypy.nodes.TypeAlias", cpy_r_type_info);
        goto CPyL262;
    }
    cpy_r_r34 = ((mypy___nodes___TypeAliasObject *)cpy_r_r33)->_no_args;
    if (cpy_r_r34) {
        goto CPyL20;
    } else
        goto CPyL263;
CPyL16: ;
    cpy_r_r35 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "msg", 458, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    CPy_INCREF(cpy_r_r35);
CPyL17: ;
    cpy_r_r36 = CPyStatics[1353]; /* ('Class pattern class must not be a type alias with '
                                     'type parameters') */
    cpy_r_r37 = NULL;
    cpy_r_r38 = NULL;
    cpy_r_r39 = 2;
    cpy_r_r40 = NULL;
    cpy_r_r41 = CPyDef_messages___MessageBuilder___fail(cpy_r_r35, cpy_r_r36, cpy_r_o, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 458, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    cpy_r_r42 = CPyDef_checkpattern___PatternChecker___early_non_match(cpy_r_self);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 459, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    return cpy_r_r42;
CPyL20: ;
    cpy_r_r43 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r44 = (CPyPtr)&((PyObject *)cpy_r_type_info)->ob_type;
    cpy_r_r45 = *(PyObject * *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 == cpy_r_r43;
    if (!cpy_r_r46) goto CPyL22;
    cpy_r_r47 = cpy_r_r46;
    goto CPyL23;
CPyL22: ;
    cpy_r_r48 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r49 = (CPyPtr)&((PyObject *)cpy_r_type_info)->ob_type;
    cpy_r_r50 = *(PyObject * *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 == cpy_r_r48;
    cpy_r_r47 = cpy_r_r51;
CPyL23: ;
    if (!cpy_r_r47) goto CPyL32;
    cpy_r_r52 = NULL;
    cpy_r_r53 = NULL;
    cpy_r_r54 = CPY_INT_TAG;
    cpy_r_r55 = CPY_INT_TAG;
    cpy_r_r56 = CPyDef_types___AnyType(16, cpy_r_r52, cpy_r_r53, cpy_r_r54, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 461, CPyStatic_checkpattern___globals);
        goto CPyL262;
    }
    cpy_r_any_type = cpy_r_r56;
    CPy_INCREF(cpy_r_type_info);
    if (likely((Py_TYPE(cpy_r_type_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_type_info) == CPyType_nodes___TypeInfo)))
        cpy_r_r57 = cpy_r_type_info;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 462, CPyStatic_checkpattern___globals, "mypy.nodes.TypeInfo", cpy_r_type_info);
        goto CPyL264;
    }
    cpy_r_r58 = PyList_New(1);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 462, CPyStatic_checkpattern___globals);
        goto CPyL265;
    }
    cpy_r_r59 = (CPyPtr)&((PyListObject *)cpy_r_r58)->ob_item;
    cpy_r_r60 = *(CPyPtr *)cpy_r_r59;
    *(PyObject * *)cpy_r_r60 = cpy_r_any_type;
    if (likely((Py_TYPE(cpy_r_type_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_type_info) == CPyType_nodes___TypeInfo)))
        cpy_r_r61 = cpy_r_type_info;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 462, CPyStatic_checkpattern___globals, "mypy.nodes.TypeInfo", cpy_r_type_info);
        goto CPyL266;
    }
    cpy_r_r62 = ((mypy___nodes___TypeInfoObject *)cpy_r_r61)->_defn;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "TypeInfo", "defn", 462, CPyStatic_checkpattern___globals);
        goto CPyL266;
    }
CPyL29: ;
    cpy_r_r63 = ((mypy___nodes___ClassDefObject *)cpy_r_r62)->_type_vars;
    cpy_r_r64 = (CPyPtr)&((PyVarObject *)cpy_r_r63)->ob_size;
    cpy_r_r65 = *(int64_t *)cpy_r_r64;
    cpy_r_r66 = cpy_r_r65 << 1;
    CPy_DECREF(cpy_r_type_info);
    cpy_r_r67 = CPySequence_Multiply(cpy_r_r58, cpy_r_r66);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 462, CPyStatic_checkpattern___globals);
        goto CPyL267;
    }
    cpy_r_r68 = CPY_INT_TAG;
    cpy_r_r69 = CPY_INT_TAG;
    cpy_r_r70 = NULL;
    cpy_r_r71 = NULL;
    cpy_r_r72 = CPyDef_types___Instance(cpy_r_r57, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 462, CPyStatic_checkpattern___globals);
        goto CPyL268;
    }
    cpy_r_typ = cpy_r_r72;
    goto CPyL52;
CPyL32: ;
    cpy_r_r73 = (PyObject *)CPyType_nodes___TypeAlias;
    cpy_r_r74 = (CPyPtr)&((PyObject *)cpy_r_type_info)->ob_type;
    cpy_r_r75 = *(PyObject * *)cpy_r_r74;
    cpy_r_r76 = cpy_r_r75 == cpy_r_r73;
    if (!cpy_r_r76) goto CPyL269;
    if (likely(Py_TYPE(cpy_r_type_info) == CPyType_nodes___TypeAlias))
        cpy_r_r77 = cpy_r_type_info;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 464, CPyStatic_checkpattern___globals, "mypy.nodes.TypeAlias", cpy_r_type_info);
        goto CPyL262;
    }
    cpy_r_r78 = ((mypy___nodes___TypeAliasObject *)cpy_r_r77)->_target;
    CPy_INCREF(cpy_r_r78);
    CPy_DECREF(cpy_r_type_info);
    cpy_r_typ = cpy_r_r78;
    goto CPyL52;
CPyL35: ;
    cpy_r_r79 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r80 = (CPyPtr)&((PyObject *)cpy_r_type_info)->ob_type;
    cpy_r_r81 = *(PyObject * *)cpy_r_r80;
    cpy_r_r82 = cpy_r_r81 == cpy_r_r79;
    if (!cpy_r_r82) goto CPyL43;
    if (likely(Py_TYPE(cpy_r_type_info) == CPyType_nodes___Var))
        cpy_r_r83 = cpy_r_type_info;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 466, CPyStatic_checkpattern___globals, "mypy.nodes.Var", cpy_r_type_info);
        goto CPyL270;
    }
    cpy_r_r84 = ((mypy___nodes___VarObject *)cpy_r_r83)->_type;
    cpy_r_r85 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r86 = cpy_r_r84 != cpy_r_r85;
    if (!cpy_r_r86) goto CPyL43;
    if (likely(Py_TYPE(cpy_r_type_info) == CPyType_nodes___Var))
        cpy_r_r87 = cpy_r_type_info;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 467, CPyStatic_checkpattern___globals, "mypy.nodes.Var", cpy_r_type_info);
        goto CPyL270;
    }
    cpy_r_r88 = ((mypy___nodes___VarObject *)cpy_r_r87)->_type;
    CPy_INCREF(cpy_r_r88);
    if (likely(cpy_r_r88 != Py_None))
        cpy_r_r89 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 467, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r88);
        goto CPyL270;
    }
    CPy_DECREF(cpy_r_type_info);
    cpy_r_r90 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "options", 467, CPyStatic_checkpattern___globals);
        goto CPyL271;
    }
    CPy_INCREF(cpy_r_r90);
CPyL41: ;
    cpy_r_r91 = CPyDef_types___Type___str_with_options(cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r90);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 467, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    cpy_r_name = cpy_r_r91;
    goto CPyL46;
CPyL43: ;
    if (likely(cpy_r_type_info != Py_None))
        cpy_r_r92 = cpy_r_type_info;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 469, CPyStatic_checkpattern___globals, "mypy.nodes.SymbolNode", cpy_r_type_info);
        goto CPyL256;
    }
    cpy_r_r93 = CPY_GET_ATTR_TRAIT(cpy_r_r92, CPyType_nodes___SymbolNode, 5, mypy___nodes___SymbolNodeObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 469, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
CPyL45: ;
    cpy_r_name = cpy_r_r93;
CPyL46: ;
    cpy_r_r94 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "msg", 470, CPyStatic_checkpattern___globals);
        goto CPyL272;
    }
    CPy_INCREF(cpy_r_r94);
CPyL47: ;
    cpy_r_r95 = CPyStatics[1354]; /* 'Expected type in class pattern; found "{}"' */
    cpy_r_r96 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r97[2] = {cpy_r_r95, cpy_r_name};
    cpy_r_r98 = (PyObject **)&cpy_r_r97;
    cpy_r_r99 = PyObject_VectorcallMethod(cpy_r_r96, cpy_r_r98, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 470, CPyStatic_checkpattern___globals);
        goto CPyL273;
    }
    CPy_DECREF(cpy_r_name);
    if (likely(PyUnicode_Check(cpy_r_r99)))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 470, CPyStatic_checkpattern___globals, "str", cpy_r_r99);
        goto CPyL274;
    }
    cpy_r_r101 = NULL;
    cpy_r_r102 = NULL;
    cpy_r_r103 = 2;
    cpy_r_r104 = NULL;
    cpy_r_r105 = CPyDef_messages___MessageBuilder___fail(cpy_r_r94, cpy_r_r100, cpy_r_o, cpy_r_r101, cpy_r_r102, cpy_r_r103, cpy_r_r104);
    CPy_DECREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r105 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 470, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    cpy_r_r106 = CPyDef_checkpattern___PatternChecker___early_non_match(cpy_r_self);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 471, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    return cpy_r_r106;
CPyL52: ;
    cpy_r_r107 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "chk", 473, CPyStatic_checkpattern___globals);
        goto CPyL275;
    }
    CPy_INCREF(cpy_r_r107);
CPyL53: ;
    cpy_r_r108 = CPyDef_checkpattern___get_type_range(cpy_r_typ);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 474, CPyStatic_checkpattern___globals);
        goto CPyL276;
    }
    cpy_r_r109 = PyList_New(1);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 474, CPyStatic_checkpattern___globals);
        goto CPyL277;
    }
    cpy_r_r110 = (CPyPtr)&((PyListObject *)cpy_r_r109)->ob_item;
    cpy_r_r111 = *(CPyPtr *)cpy_r_r110;
    *(PyObject * *)cpy_r_r111 = cpy_r_r108;
    cpy_r_r112 = CPyDef_checker___TypeChecker___conditional_types_with_intersection(cpy_r_r107, cpy_r_current_type, cpy_r_r109, cpy_r_o, cpy_r_current_type);
    CPy_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r112.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 473, CPyStatic_checkpattern___globals);
        goto CPyL275;
    }
    cpy_r_r113 = cpy_r_r112.f0;
    CPy_INCREF(cpy_r_r113);
    cpy_r_r114 = cpy_r_r112.f1;
    CPy_INCREF(cpy_r_r114);
    CPy_DECREF(cpy_r_r112.f0);
    CPy_DECREF(cpy_r_r112.f1);
    if (likely(cpy_r_r113 != Py_None))
        cpy_r_r115 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 473, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r113);
        goto CPyL278;
    }
    if (likely(cpy_r_r114 != Py_None))
        cpy_r_r116 = cpy_r_r114;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 473, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r114);
        goto CPyL279;
    }
    cpy_r_r117.f0 = cpy_r_r115;
    cpy_r_r117.f1 = cpy_r_r116;
    CPy_INCREF(cpy_r_r117.f0);
    CPy_INCREF(cpy_r_r117.f1);
    CPy_DECREF(cpy_r_r115);
    CPy_DECREF(cpy_r_r116);
    cpy_r_r118 = cpy_r_r117.f0;
    CPy_INCREF(cpy_r_r118);
    cpy_r_new_type = cpy_r_r118;
    cpy_r_r119 = cpy_r_r117.f1;
    CPy_INCREF(cpy_r_r119);
    CPy_DECREF(cpy_r_r117.f0);
    CPy_DECREF(cpy_r_r117.f1);
    cpy_r_rest_type = cpy_r_r119;
    cpy_r_r120 = CPyDef_checkpattern___is_uninhabited(cpy_r_new_type);
    if (unlikely(cpy_r_r120 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 476, CPyStatic_checkpattern___globals);
        goto CPyL280;
    }
    if (cpy_r_r120) {
        goto CPyL281;
    } else
        goto CPyL62;
CPyL60: ;
    cpy_r_r121 = CPyDef_checkpattern___PatternChecker___early_non_match(cpy_r_self);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 477, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    return cpy_r_r121;
CPyL62: ;
    cpy_r_r122 = CPyDef_meet___narrow_declared_type(cpy_r_current_type, cpy_r_new_type);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 479, CPyStatic_checkpattern___globals);
        goto CPyL280;
    }
    cpy_r_narrowed_type = cpy_r_r122;
    cpy_r_r123 = PyList_New(0);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 484, CPyStatic_checkpattern___globals);
        goto CPyL282;
    }
    cpy_r_keyword_pairs = cpy_r_r123;
    cpy_r_r124 = PySet_New(NULL);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 485, CPyStatic_checkpattern___globals);
        goto CPyL283;
    }
    cpy_r_match_arg_set = cpy_r_r124;
    cpy_r_r125 = PyDict_New();
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 487, CPyStatic_checkpattern___globals);
        goto CPyL284;
    }
    cpy_r_captures = cpy_r_r125;
    cpy_r_r126 = ((mypy___patterns___ClassPatternObject *)cpy_r_o)->_positionals;
    cpy_r_r127 = (CPyPtr)&((PyVarObject *)cpy_r_r126)->ob_size;
    cpy_r_r128 = *(int64_t *)cpy_r_r127;
    cpy_r_r129 = cpy_r_r128 << 1;
    cpy_r_r130 = cpy_r_r129 != 0;
    if (!cpy_r_r130) goto CPyL285;
    cpy_r_r131 = CPyDef_checkpattern___PatternChecker___should_self_match(cpy_r_self, cpy_r_typ);
    if (unlikely(cpy_r_r131 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 490, CPyStatic_checkpattern___globals);
        goto CPyL286;
    }
    if (cpy_r_r131) {
        goto CPyL287;
    } else
        goto CPyL93;
CPyL69: ;
    cpy_r_r132 = ((mypy___patterns___ClassPatternObject *)cpy_r_o)->_positionals;
    cpy_r_r133 = (CPyPtr)&((PyVarObject *)cpy_r_r132)->ob_size;
    cpy_r_r134 = *(int64_t *)cpy_r_r133;
    cpy_r_r135 = cpy_r_r134 << 1;
    cpy_r_r136 = (Py_ssize_t)cpy_r_r135 > (Py_ssize_t)2;
    if (!cpy_r_r136) goto CPyL72;
    cpy_r_r137 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "msg", 492, CPyStatic_checkpattern___globals);
        goto CPyL288;
    }
    CPy_INCREF(cpy_r_r137);
CPyL71: ;
    cpy_r_r138 = CPyStatics[1355]; /* 'Too many positional patterns for class pattern' */
    cpy_r_r139 = NULL;
    cpy_r_r140 = NULL;
    cpy_r_r141 = 2;
    cpy_r_r142 = NULL;
    cpy_r_r143 = CPyDef_messages___MessageBuilder___fail(cpy_r_r137, cpy_r_r138, cpy_r_o, cpy_r_r139, cpy_r_r140, cpy_r_r141, cpy_r_r142);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r143 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 492, CPyStatic_checkpattern___globals);
        goto CPyL288;
    }
CPyL72: ;
    cpy_r_r144 = ((mypy___patterns___ClassPatternObject *)cpy_r_o)->_positionals;
    cpy_r_r145 = CPyList_GetItemShort(cpy_r_r144, 0);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 493, CPyStatic_checkpattern___globals);
        goto CPyL288;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r145, CPyType_patterns___Pattern)))
        cpy_r_r146 = cpy_r_r145;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 493, CPyStatic_checkpattern___globals, "mypy.patterns.Pattern", cpy_r_r145);
        goto CPyL288;
    }
    cpy_r_r147 = CPyDef_checkpattern___PatternChecker___accept(cpy_r_self, cpy_r_r146, cpy_r_narrowed_type);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 493, CPyStatic_checkpattern___globals);
        goto CPyL288;
    }
    cpy_r_pattern_type = cpy_r_r147;
    cpy_r_r148 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 0);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 494, CPyStatic_checkpattern___globals);
        goto CPyL289;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r148, CPyType_types___Type)))
        cpy_r_r149 = cpy_r_r148;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 494, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r148);
        goto CPyL289;
    }
    cpy_r_r150 = CPyDef_checkpattern___is_uninhabited(cpy_r_r149);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r150 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 494, CPyStatic_checkpattern___globals);
        goto CPyL289;
    }
    if (cpy_r_r150) {
        goto CPyL90;
    } else
        goto CPyL290;
CPyL79: ;
    cpy_r_r151 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 0);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 496, CPyStatic_checkpattern___globals);
        goto CPyL291;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r151, CPyType_types___Type)))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 496, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r151);
        goto CPyL291;
    }
    cpy_r_r153 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 2);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 497, CPyStatic_checkpattern___globals);
        goto CPyL292;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r153, CPyType_types___Type)))
        cpy_r_r154 = cpy_r_r153;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 497, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r153);
        goto CPyL292;
    }
    cpy_r_r155 = NULL;
    cpy_r_r156 = CPyDef_join___join_types(cpy_r_rest_type, cpy_r_r154, cpy_r_r155);
    CPy_DECREF(cpy_r_rest_type);
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 497, CPyStatic_checkpattern___globals);
        goto CPyL293;
    }
    cpy_r_r157 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 4);
    CPy_DECREF(cpy_r_pattern_type);
    if (unlikely(cpy_r_r157 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 498, CPyStatic_checkpattern___globals);
        goto CPyL294;
    }
    if (likely(PyDict_Check(cpy_r_r157)))
        cpy_r_r158 = cpy_r_r157;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 498, CPyStatic_checkpattern___globals, "dict", cpy_r_r157);
        goto CPyL294;
    }
    cpy_r_r159 = CPyStatic_checkpattern___globals;
    cpy_r_r160 = CPyStatics[1351]; /* 'PatternType' */
    cpy_r_r161 = CPyDict_GetItem(cpy_r_r159, cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 495, CPyStatic_checkpattern___globals);
        goto CPyL295;
    }
    PyObject *cpy_r_r162[3] = {cpy_r_r152, cpy_r_r156, cpy_r_r158};
    cpy_r_r163 = (PyObject **)&cpy_r_r162;
    cpy_r_r164 = _PyObject_Vectorcall(cpy_r_r161, cpy_r_r163, 3, 0);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 495, CPyStatic_checkpattern___globals);
        goto CPyL295;
    }
    CPy_DECREF(cpy_r_r152);
    CPy_DECREF(cpy_r_r156);
    CPy_DECREF(cpy_r_r158);
    if (likely(PyTuple_Check(cpy_r_r164)))
        cpy_r_r165 = cpy_r_r164;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 495, CPyStatic_checkpattern___globals, "tuple", cpy_r_r164);
        goto CPyL256;
    }
    return cpy_r_r165;
CPyL90: ;
    cpy_r_r166 = CPySequenceTuple_GetItem(cpy_r_pattern_type, 4);
    CPy_DECREF(cpy_r_pattern_type);
    if (unlikely(cpy_r_r166 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 500, CPyStatic_checkpattern___globals);
        goto CPyL288;
    }
    if (likely(PyDict_Check(cpy_r_r166)))
        cpy_r_r167 = cpy_r_r166;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 500, CPyStatic_checkpattern___globals, "dict", cpy_r_r166);
        goto CPyL288;
    }
    cpy_r_captures = cpy_r_r167;
    goto CPyL158;
CPyL93: ;
    cpy_r_r168 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "msg", 502, CPyStatic_checkpattern___globals);
        goto CPyL286;
    }
    CPy_INCREF(cpy_r_r168);
CPyL94: ;
    cpy_r_r169 = NULL;
    cpy_r_r170 = 2;
    cpy_r_r171 = CPyDef_messages___MessageBuilder___filter_errors(cpy_r_r168, cpy_r_r169, cpy_r_r170);
    CPy_DECREF(cpy_r_r168);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 502, CPyStatic_checkpattern___globals);
        goto CPyL286;
    }
    cpy_r_r172 = CPyDef_mypy___errors___ErrorWatcher_____enter__(cpy_r_r171);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 502, CPyStatic_checkpattern___globals);
        goto CPyL296;
    }
    cpy_r_r173 = 1;
    cpy_r_local_errors__redef__ = cpy_r_r172;
    cpy_r_r174 = CPyStatics[786]; /* '__match_args__' */
    cpy_r_r175 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "msg", 510, CPyStatic_checkpattern___globals);
        goto CPyL297;
    }
    CPy_INCREF(cpy_r_r175);
CPyL98: ;
    cpy_r_r176 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "chk", 512, CPyStatic_checkpattern___globals);
        goto CPyL298;
    }
    CPy_INCREF(cpy_r_r176);
CPyL99: ;
    cpy_r_r177 = NULL;
    cpy_r_r178 = 2;
    cpy_r_r179 = NULL;
    cpy_r_r180 = NULL;
    cpy_r_r181 = 2;
    cpy_r_r182 = 2;
    cpy_r_r183 = CPyDef_checkmember___analyze_member_access(cpy_r_r174, cpy_r_typ, cpy_r_o, 0, 0, 0, cpy_r_r175, cpy_r_typ, cpy_r_r176, cpy_r_r177, cpy_r_r178, cpy_r_r179, cpy_r_r180, cpy_r_r181, cpy_r_r182);
    CPy_DECREF(cpy_r_r175);
    CPy_DECREF(cpy_r_r176);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 503, CPyStatic_checkpattern___globals);
        goto CPyL297;
    } else
        goto CPyL299;
CPyL100: ;
    cpy_r_match_args_type = cpy_r_r183;
    cpy_r_r184 = CPyDef_mypy___errors___ErrorWatcher___has_new_errors(cpy_r_local_errors__redef__);
    CPy_DECREF(cpy_r_local_errors__redef__);
    if (unlikely(cpy_r_r184 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 514, CPyStatic_checkpattern___globals);
        goto CPyL102;
    }
    cpy_r_has_local_errors = cpy_r_r184;
    goto CPyL109;
CPyL102: ;
    cpy_r_r185 = CPy_CatchError();
    cpy_r_r173 = 0;
    cpy_r_r186 = CPy_GetExcInfo();
    cpy_r_r187 = cpy_r_r186.f0;
    CPy_INCREF(cpy_r_r187);
    cpy_r_r188 = cpy_r_r186.f1;
    CPy_INCREF(cpy_r_r188);
    cpy_r_r189 = cpy_r_r186.f2;
    CPy_INCREF(cpy_r_r189);
    CPy_DecRef(cpy_r_r186.f0);
    CPy_DecRef(cpy_r_r186.f1);
    CPy_DecRef(cpy_r_r186.f2);
    cpy_r_r190 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r171, cpy_r_r187, cpy_r_r188, cpy_r_r189);
    CPy_DecRef(cpy_r_r187);
    CPy_DecRef(cpy_r_r188);
    CPy_DecRef(cpy_r_r189);
    if (unlikely(cpy_r_r190 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 502, CPyStatic_checkpattern___globals);
        goto CPyL107;
    }
    if (cpy_r_r190) goto CPyL106;
    CPy_Reraise();
    if (!0) {
        goto CPyL107;
    } else
        goto CPyL300;
CPyL105: ;
    CPy_Unreachable();
CPyL106: ;
    CPy_RestoreExcInfo(cpy_r_r185);
    CPy_DecRef(cpy_r_r185.f0);
    CPy_DecRef(cpy_r_r185.f1);
    CPy_DecRef(cpy_r_r185.f2);
    goto CPyL109;
CPyL107: ;
    CPy_RestoreExcInfo(cpy_r_r185);
    CPy_DecRef(cpy_r_r185.f0);
    CPy_DecRef(cpy_r_r185.f1);
    CPy_DecRef(cpy_r_r185.f2);
    cpy_r_r191 = CPy_KeepPropagating();
    if (!cpy_r_r191) {
        goto CPyL110;
    } else
        goto CPyL301;
CPyL108: ;
    CPy_Unreachable();
CPyL109: ;
    tuple_T3OOO __tmp1534 = { NULL, NULL, NULL };
    cpy_r_r192 = __tmp1534;
    cpy_r_r193 = cpy_r_r192;
    goto CPyL111;
CPyL110: ;
    cpy_r_r194 = CPy_CatchError();
    cpy_r_r193 = cpy_r_r194;
CPyL111: ;
    if (!cpy_r_r173) goto CPyL302;
    cpy_r_r195 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r196 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r171, cpy_r_r195, cpy_r_r195, cpy_r_r195);
    CPy_DECREF(cpy_r_r171);
    if (unlikely(cpy_r_r196 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 502, CPyStatic_checkpattern___globals);
        goto CPyL303;
    }
CPyL113: ;
    if (cpy_r_r193.f0 == NULL) {
        goto CPyL120;
    } else
        goto CPyL304;
CPyL114: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL116;
    } else
        goto CPyL305;
CPyL115: ;
    CPy_Unreachable();
CPyL116: ;
    if (cpy_r_r193.f0 == NULL) goto CPyL118;
    CPy_RestoreExcInfo(cpy_r_r193);
    CPy_XDECREF(cpy_r_r193.f0);
    CPy_XDECREF(cpy_r_r193.f1);
    CPy_XDECREF(cpy_r_r193.f2);
CPyL118: ;
    cpy_r_r197 = CPy_KeepPropagating();
    if (!cpy_r_r197) goto CPyL256;
    CPy_Unreachable();
CPyL120: ;
    if (cpy_r_has_local_errors == 2) {
        goto CPyL306;
    } else
        goto CPyL123;
CPyL121: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"has_local_errors\" referenced before assignment");
    cpy_r_r198 = 0;
    if (unlikely(!cpy_r_r198)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", -1, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    CPy_Unreachable();
CPyL123: ;
    if (cpy_r_has_local_errors) {
        goto CPyL307;
    } else
        goto CPyL132;
CPyL124: ;
    cpy_r_r199 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "msg", 516, CPyStatic_checkpattern___globals);
        goto CPyL308;
    }
    CPy_INCREF(cpy_r_r199);
CPyL125: ;
    cpy_r_r200 = CPyStatics[1356]; /* 'Class "{}" doesn\'t define "__match_args__"' */
    cpy_r_r201 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "options", 518, CPyStatic_checkpattern___globals);
        goto CPyL309;
    }
    CPy_INCREF(cpy_r_r201);
CPyL126: ;
    cpy_r_r202 = CPyDef_types___Type___str_with_options(cpy_r_typ, cpy_r_r201);
    CPy_DECREF(cpy_r_r201);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 518, CPyStatic_checkpattern___globals);
        goto CPyL310;
    }
    cpy_r_r203 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r204[2] = {cpy_r_r200, cpy_r_r202};
    cpy_r_r205 = (PyObject **)&cpy_r_r204;
    cpy_r_r206 = PyObject_VectorcallMethod(cpy_r_r203, cpy_r_r205, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 517, CPyStatic_checkpattern___globals);
        goto CPyL311;
    }
    CPy_DECREF(cpy_r_r202);
    if (likely(PyUnicode_Check(cpy_r_r206)))
        cpy_r_r207 = cpy_r_r206;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 517, CPyStatic_checkpattern___globals, "str", cpy_r_r206);
        goto CPyL310;
    }
    cpy_r_r208 = NULL;
    cpy_r_r209 = NULL;
    cpy_r_r210 = 2;
    cpy_r_r211 = NULL;
    cpy_r_r212 = CPyDef_messages___MessageBuilder___fail(cpy_r_r199, cpy_r_r207, cpy_r_o, cpy_r_r208, cpy_r_r209, cpy_r_r210, cpy_r_r211);
    CPy_DECREF(cpy_r_r207);
    CPy_DECREF(cpy_r_r199);
    if (unlikely(cpy_r_r212 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 516, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    cpy_r_r213 = CPyDef_checkpattern___PatternChecker___early_non_match(cpy_r_self);
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 522, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    return cpy_r_r213;
CPyL132: ;
    if (cpy_r_match_args_type == NULL) {
        goto CPyL312;
    } else
        goto CPyL135;
CPyL133: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"match_args_type\" referenced before assignment");
    cpy_r_r214 = 0;
    if (unlikely(!cpy_r_r214)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 524, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    CPy_Unreachable();
CPyL135: ;
    cpy_r_r215 = CPyDef_types___get_proper_type(cpy_r_match_args_type);
    CPy_XDECREF(cpy_r_match_args_type);
    if (unlikely(cpy_r_r215 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 524, CPyStatic_checkpattern___globals);
        goto CPyL313;
    }
    if (likely(cpy_r_r215 != Py_None))
        cpy_r_r216 = cpy_r_r215;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 524, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_r215);
        goto CPyL313;
    }
    cpy_r_proper_match_args_type = cpy_r_r216;
    cpy_r_r217 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r218 = (CPyPtr)&((PyObject *)cpy_r_proper_match_args_type)->ob_type;
    cpy_r_r219 = *(PyObject * *)cpy_r_r218;
    cpy_r_r220 = cpy_r_r219 == cpy_r_r217;
    if (!cpy_r_r220) goto CPyL314;
    if (likely(Py_TYPE(cpy_r_proper_match_args_type) == CPyType_types___TupleType))
        cpy_r_r221 = cpy_r_proper_match_args_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 526, CPyStatic_checkpattern___globals, "mypy.types.TupleType", cpy_r_proper_match_args_type);
        goto CPyL313;
    }
    cpy_r_r222 = CPyDef_checkpattern___get_match_arg_names(cpy_r_r221);
    CPy_DECREF(cpy_r_r221);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 526, CPyStatic_checkpattern___globals);
        goto CPyL313;
    }
    cpy_r_match_arg_names = cpy_r_r222;
    cpy_r_r223 = ((mypy___patterns___ClassPatternObject *)cpy_r_o)->_positionals;
    cpy_r_r224 = (CPyPtr)&((PyVarObject *)cpy_r_r223)->ob_size;
    cpy_r_r225 = *(int64_t *)cpy_r_r224;
    cpy_r_r226 = cpy_r_r225 << 1;
    cpy_r_r227 = (CPyPtr)&((PyVarObject *)cpy_r_match_arg_names)->ob_size;
    cpy_r_r228 = *(int64_t *)cpy_r_r227;
    cpy_r_r229 = cpy_r_r228 << 1;
    cpy_r_r230 = (Py_ssize_t)cpy_r_r226 > (Py_ssize_t)cpy_r_r229;
    if (cpy_r_r230) {
        goto CPyL315;
    } else
        goto CPyL148;
CPyL141: ;
    cpy_r_r231 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "msg", 529, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    CPy_INCREF(cpy_r_r231);
CPyL142: ;
    cpy_r_r232 = CPyStatics[1355]; /* 'Too many positional patterns for class pattern' */
    cpy_r_r233 = NULL;
    cpy_r_r234 = NULL;
    cpy_r_r235 = 2;
    cpy_r_r236 = NULL;
    cpy_r_r237 = CPyDef_messages___MessageBuilder___fail(cpy_r_r231, cpy_r_r232, cpy_r_o, cpy_r_r233, cpy_r_r234, cpy_r_r235, cpy_r_r236);
    CPy_DECREF(cpy_r_r231);
    if (unlikely(cpy_r_r237 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 529, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    cpy_r_r238 = CPyDef_checkpattern___PatternChecker___early_non_match(cpy_r_self);
    if (unlikely(cpy_r_r238 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 530, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    return cpy_r_r238;
CPyL145: ;
    cpy_r_r239 = PyList_New(1);
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 532, CPyStatic_checkpattern___globals);
        goto CPyL313;
    }
    cpy_r_r240 = Py_None;
    cpy_r_r241 = (CPyPtr)&((PyListObject *)cpy_r_r239)->ob_item;
    cpy_r_r242 = *(CPyPtr *)cpy_r_r241;
    CPy_INCREF(cpy_r_r240);
    *(PyObject * *)cpy_r_r242 = cpy_r_r240;
    cpy_r_r243 = ((mypy___patterns___ClassPatternObject *)cpy_r_o)->_positionals;
    cpy_r_r244 = (CPyPtr)&((PyVarObject *)cpy_r_r243)->ob_size;
    cpy_r_r245 = *(int64_t *)cpy_r_r244;
    cpy_r_r246 = cpy_r_r245 << 1;
    cpy_r_r247 = CPySequence_Multiply(cpy_r_r239, cpy_r_r246);
    CPy_DECREF(cpy_r_r239);
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 532, CPyStatic_checkpattern___globals);
        goto CPyL313;
    }
    cpy_r_match_arg_names = cpy_r_r247;
CPyL148: ;
    cpy_r_r248 = 0;
    cpy_r_r249 = ((mypy___patterns___ClassPatternObject *)cpy_r_o)->_positionals;
    CPy_INCREF(cpy_r_r249);
    cpy_r_r250 = 0;
CPyL149: ;
    cpy_r_r251 = (CPyPtr)&((PyVarObject *)cpy_r_match_arg_names)->ob_size;
    cpy_r_r252 = *(int64_t *)cpy_r_r251;
    cpy_r_r253 = cpy_r_r252 << 1;
    cpy_r_r254 = (Py_ssize_t)cpy_r_r248 < (Py_ssize_t)cpy_r_r253;
    if (!cpy_r_r254) goto CPyL316;
    cpy_r_r255 = (CPyPtr)&((PyVarObject *)cpy_r_r249)->ob_size;
    cpy_r_r256 = *(int64_t *)cpy_r_r255;
    cpy_r_r257 = cpy_r_r256 << 1;
    cpy_r_r258 = (Py_ssize_t)cpy_r_r250 < (Py_ssize_t)cpy_r_r257;
    if (!cpy_r_r258) goto CPyL316;
    cpy_r_r259 = CPyList_GetItemUnsafe(cpy_r_match_arg_names, cpy_r_r248);
    if (PyUnicode_Check(cpy_r_r259))
        cpy_r_r260 = cpy_r_r259;
    else {
        cpy_r_r260 = NULL;
    }
    if (cpy_r_r260 != NULL) goto __LL1535;
    if (cpy_r_r259 == Py_None)
        cpy_r_r260 = cpy_r_r259;
    else {
        cpy_r_r260 = NULL;
    }
    if (cpy_r_r260 != NULL) goto __LL1535;
    CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 534, CPyStatic_checkpattern___globals, "str or None", cpy_r_r259);
    goto CPyL317;
__LL1535: ;
    cpy_r_arg_name = cpy_r_r260;
    cpy_r_r261 = CPyList_GetItemUnsafe(cpy_r_r249, cpy_r_r250);
    if (likely(PyObject_TypeCheck(cpy_r_r261, CPyType_patterns___Pattern)))
        cpy_r_r262 = cpy_r_r261;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 534, CPyStatic_checkpattern___globals, "mypy.patterns.Pattern", cpy_r_r261);
        goto CPyL318;
    }
    cpy_r_pos = cpy_r_r262;
    cpy_r_r263.f0 = cpy_r_arg_name;
    cpy_r_r263.f1 = cpy_r_pos;
    CPy_INCREF(cpy_r_r263.f0);
    CPy_INCREF(cpy_r_r263.f1);
    CPy_DECREF(cpy_r_pos);
    cpy_r_r264 = PyTuple_New(2);
    if (unlikely(cpy_r_r264 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1536 = cpy_r_r263.f0;
    PyTuple_SET_ITEM(cpy_r_r264, 0, __tmp1536);
    PyObject *__tmp1537 = cpy_r_r263.f1;
    PyTuple_SET_ITEM(cpy_r_r264, 1, __tmp1537);
    cpy_r_r265 = PyList_Append(cpy_r_keyword_pairs, cpy_r_r264);
    CPy_DECREF(cpy_r_r264);
    cpy_r_r266 = cpy_r_r265 >= 0;
    if (unlikely(!cpy_r_r266)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 535, CPyStatic_checkpattern___globals);
        goto CPyL318;
    }
    cpy_r_r267 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r268 = cpy_r_arg_name != cpy_r_r267;
    if (!cpy_r_r268) goto CPyL319;
    if (likely(cpy_r_arg_name != Py_None))
        cpy_r_r269 = cpy_r_arg_name;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 537, CPyStatic_checkpattern___globals, "str", cpy_r_arg_name);
        goto CPyL317;
    }
    cpy_r_r270 = PySet_Add(cpy_r_match_arg_set, cpy_r_r269);
    CPy_DECREF(cpy_r_r269);
    cpy_r_r271 = cpy_r_r270 >= 0;
    if (unlikely(!cpy_r_r271)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 537, CPyStatic_checkpattern___globals);
        goto CPyL317;
    }
CPyL157: ;
    cpy_r_r272 = cpy_r_r248 + 2;
    cpy_r_r248 = cpy_r_r272;
    cpy_r_r273 = cpy_r_r250 + 2;
    cpy_r_r250 = cpy_r_r273;
    goto CPyL149;
CPyL158: ;
    cpy_r_r274 = PySet_New(NULL);
    if (unlikely(cpy_r_r274 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 542, CPyStatic_checkpattern___globals);
        goto CPyL313;
    }
    cpy_r_keyword_arg_set = cpy_r_r274;
    cpy_r_has_duplicates = 0;
    cpy_r_r275 = ((mypy___patterns___ClassPatternObject *)cpy_r_o)->_keyword_keys;
    CPy_INCREF(cpy_r_r275);
    cpy_r_r276 = 0;
    cpy_r_r277 = ((mypy___patterns___ClassPatternObject *)cpy_r_o)->_keyword_values;
    CPy_INCREF(cpy_r_r277);
    cpy_r_r278 = 0;
CPyL160: ;
    cpy_r_r279 = (CPyPtr)&((PyVarObject *)cpy_r_r275)->ob_size;
    cpy_r_r280 = *(int64_t *)cpy_r_r279;
    cpy_r_r281 = cpy_r_r280 << 1;
    cpy_r_r282 = (Py_ssize_t)cpy_r_r276 < (Py_ssize_t)cpy_r_r281;
    if (!cpy_r_r282) goto CPyL320;
    cpy_r_r283 = (CPyPtr)&((PyVarObject *)cpy_r_r277)->ob_size;
    cpy_r_r284 = *(int64_t *)cpy_r_r283;
    cpy_r_r285 = cpy_r_r284 << 1;
    cpy_r_r286 = (Py_ssize_t)cpy_r_r278 < (Py_ssize_t)cpy_r_r285;
    if (!cpy_r_r286) goto CPyL320;
    cpy_r_r287 = CPyList_GetItemUnsafe(cpy_r_r275, cpy_r_r276);
    if (likely(PyUnicode_Check(cpy_r_r287)))
        cpy_r_r288 = cpy_r_r287;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 544, CPyStatic_checkpattern___globals, "str", cpy_r_r287);
        goto CPyL321;
    }
    cpy_r_key = cpy_r_r288;
    cpy_r_r289 = CPyList_GetItemUnsafe(cpy_r_r277, cpy_r_r278);
    if (likely(PyObject_TypeCheck(cpy_r_r289, CPyType_patterns___Pattern)))
        cpy_r_r290 = cpy_r_r289;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 544, CPyStatic_checkpattern___globals, "mypy.patterns.Pattern", cpy_r_r289);
        goto CPyL322;
    }
    cpy_r_value = cpy_r_r290;
    cpy_r_r291.f0 = cpy_r_key;
    cpy_r_r291.f1 = cpy_r_value;
    CPy_INCREF(cpy_r_r291.f0);
    CPy_INCREF(cpy_r_r291.f1);
    cpy_r_r292 = PyTuple_New(2);
    if (unlikely(cpy_r_r292 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1538 = cpy_r_r291.f0;
    PyTuple_SET_ITEM(cpy_r_r292, 0, __tmp1538);
    PyObject *__tmp1539 = cpy_r_r291.f1;
    PyTuple_SET_ITEM(cpy_r_r292, 1, __tmp1539);
    cpy_r_r293 = PyList_Append(cpy_r_keyword_pairs, cpy_r_r292);
    CPy_DECREF(cpy_r_r292);
    cpy_r_r294 = cpy_r_r293 >= 0;
    if (unlikely(!cpy_r_r294)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 545, CPyStatic_checkpattern___globals);
        goto CPyL323;
    }
    cpy_r_r295 = PySet_Contains(cpy_r_match_arg_set, cpy_r_key);
    cpy_r_r296 = cpy_r_r295 >= 0;
    if (unlikely(!cpy_r_r296)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 546, CPyStatic_checkpattern___globals);
        goto CPyL323;
    }
    cpy_r_r297 = cpy_r_r295;
    if (!cpy_r_r297) goto CPyL172;
    cpy_r_r298 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r298 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "msg", 547, CPyStatic_checkpattern___globals);
        goto CPyL323;
    }
    CPy_INCREF(cpy_r_r298);
CPyL168: ;
    cpy_r_r299 = CPyStatics[1357]; /* 'Keyword "{}" already matches a positional pattern' */
    cpy_r_r300 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r301[2] = {cpy_r_r299, cpy_r_key};
    cpy_r_r302 = (PyObject **)&cpy_r_r301;
    cpy_r_r303 = PyObject_VectorcallMethod(cpy_r_r300, cpy_r_r302, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r303 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 548, CPyStatic_checkpattern___globals);
        goto CPyL324;
    }
    if (likely(PyUnicode_Check(cpy_r_r303)))
        cpy_r_r304 = cpy_r_r303;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 548, CPyStatic_checkpattern___globals, "str", cpy_r_r303);
        goto CPyL324;
    }
    cpy_r_r305 = NULL;
    cpy_r_r306 = NULL;
    cpy_r_r307 = 2;
    cpy_r_r308 = NULL;
    cpy_r_r309 = CPyDef_messages___MessageBuilder___fail(cpy_r_r298, cpy_r_r304, cpy_r_value, cpy_r_r305, cpy_r_r306, cpy_r_r307, cpy_r_r308);
    CPy_DECREF(cpy_r_r304);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_r298);
    if (unlikely(cpy_r_r309 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 547, CPyStatic_checkpattern___globals);
        goto CPyL322;
    }
    cpy_r_has_duplicates = 1;
    goto CPyL179;
CPyL172: ;
    cpy_r_r310 = PySet_Contains(cpy_r_keyword_arg_set, cpy_r_key);
    cpy_r_r311 = cpy_r_r310 >= 0;
    if (unlikely(!cpy_r_r311)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 551, CPyStatic_checkpattern___globals);
        goto CPyL323;
    }
    cpy_r_r312 = cpy_r_r310;
    if (!cpy_r_r312) goto CPyL325;
    cpy_r_r313 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r313 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "msg", 552, CPyStatic_checkpattern___globals);
        goto CPyL323;
    }
    CPy_INCREF(cpy_r_r313);
CPyL175: ;
    cpy_r_r314 = CPyStatics[1358]; /* 'Duplicate keyword pattern "{}"' */
    cpy_r_r315 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r316[2] = {cpy_r_r314, cpy_r_key};
    cpy_r_r317 = (PyObject **)&cpy_r_r316;
    cpy_r_r318 = PyObject_VectorcallMethod(cpy_r_r315, cpy_r_r317, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r318 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 553, CPyStatic_checkpattern___globals);
        goto CPyL326;
    }
    if (likely(PyUnicode_Check(cpy_r_r318)))
        cpy_r_r319 = cpy_r_r318;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 553, CPyStatic_checkpattern___globals, "str", cpy_r_r318);
        goto CPyL326;
    }
    cpy_r_r320 = NULL;
    cpy_r_r321 = NULL;
    cpy_r_r322 = 2;
    cpy_r_r323 = NULL;
    cpy_r_r324 = CPyDef_messages___MessageBuilder___fail(cpy_r_r313, cpy_r_r319, cpy_r_value, cpy_r_r320, cpy_r_r321, cpy_r_r322, cpy_r_r323);
    CPy_DECREF(cpy_r_r319);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_r313);
    if (unlikely(cpy_r_r324 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 552, CPyStatic_checkpattern___globals);
        goto CPyL322;
    }
    cpy_r_has_duplicates = 1;
CPyL179: ;
    cpy_r_r325 = PySet_Add(cpy_r_keyword_arg_set, cpy_r_key);
    CPy_DECREF(cpy_r_key);
    cpy_r_r326 = cpy_r_r325 >= 0;
    if (unlikely(!cpy_r_r326)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 556, CPyStatic_checkpattern___globals);
        goto CPyL321;
    }
    cpy_r_r327 = cpy_r_r276 + 2;
    cpy_r_r276 = cpy_r_r327;
    cpy_r_r328 = cpy_r_r278 + 2;
    cpy_r_r278 = cpy_r_r328;
    goto CPyL160;
CPyL181: ;
    if (cpy_r_has_duplicates) {
        goto CPyL327;
    } else
        goto CPyL184;
CPyL182: ;
    cpy_r_r329 = CPyDef_checkpattern___PatternChecker___early_non_match(cpy_r_self);
    if (unlikely(cpy_r_r329 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 559, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    return cpy_r_r329;
CPyL184: ;
    cpy_r_can_match = 1;
    cpy_r_r330 = 0;
CPyL185: ;
    cpy_r_r331 = (CPyPtr)&((PyVarObject *)cpy_r_keyword_pairs)->ob_size;
    cpy_r_r332 = *(int64_t *)cpy_r_r331;
    cpy_r_r333 = cpy_r_r332 << 1;
    cpy_r_r334 = (Py_ssize_t)cpy_r_r330 < (Py_ssize_t)cpy_r_r333;
    if (!cpy_r_r334) goto CPyL328;
    cpy_r_r335 = CPyList_GetItemUnsafe(cpy_r_keyword_pairs, cpy_r_r330);
    PyObject *__tmp1540;
    if (unlikely(!(PyTuple_Check(cpy_r_r335) && PyTuple_GET_SIZE(cpy_r_r335) == 2))) {
        __tmp1540 = NULL;
        goto __LL1541;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r335, 0)))
        __tmp1540 = PyTuple_GET_ITEM(cpy_r_r335, 0);
    else {
        __tmp1540 = NULL;
    }
    if (__tmp1540 != NULL) goto __LL1542;
    if (PyTuple_GET_ITEM(cpy_r_r335, 0) == Py_None)
        __tmp1540 = PyTuple_GET_ITEM(cpy_r_r335, 0);
    else {
        __tmp1540 = NULL;
    }
    if (__tmp1540 != NULL) goto __LL1542;
    __tmp1540 = NULL;
__LL1542: ;
    if (__tmp1540 == NULL) goto __LL1541;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r335, 1), CPyType_patterns___Pattern)))
        __tmp1540 = PyTuple_GET_ITEM(cpy_r_r335, 1);
    else {
        __tmp1540 = NULL;
    }
    if (__tmp1540 == NULL) goto __LL1541;
    __tmp1540 = cpy_r_r335;
__LL1541: ;
    if (unlikely(__tmp1540 == NULL)) {
        CPy_TypeError("tuple[union[str, None], mypy.patterns.Pattern]", cpy_r_r335); cpy_r_r336 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1543 = PyTuple_GET_ITEM(cpy_r_r335, 0);
        CPy_INCREF(__tmp1543);
        PyObject *__tmp1544;
        if (PyUnicode_Check(__tmp1543))
            __tmp1544 = __tmp1543;
        else {
            __tmp1544 = NULL;
        }
        if (__tmp1544 != NULL) goto __LL1545;
        if (__tmp1543 == Py_None)
            __tmp1544 = __tmp1543;
        else {
            __tmp1544 = NULL;
        }
        if (__tmp1544 != NULL) goto __LL1545;
        CPy_TypeError("str or None", __tmp1543); 
        __tmp1544 = NULL;
__LL1545: ;
        cpy_r_r336.f0 = __tmp1544;
        PyObject *__tmp1546 = PyTuple_GET_ITEM(cpy_r_r335, 1);
        CPy_INCREF(__tmp1546);
        PyObject *__tmp1547;
        if (likely(PyObject_TypeCheck(__tmp1546, CPyType_patterns___Pattern)))
            __tmp1547 = __tmp1546;
        else {
            CPy_TypeError("mypy.patterns.Pattern", __tmp1546); 
            __tmp1547 = NULL;
        }
        cpy_r_r336.f1 = __tmp1547;
    }
    CPy_DECREF(cpy_r_r335);
    if (unlikely(cpy_r_r336.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 565, CPyStatic_checkpattern___globals);
        goto CPyL329;
    }
    cpy_r_r337 = cpy_r_r336.f0;
    CPy_INCREF(cpy_r_r337);
    cpy_r_keyword = cpy_r_r337;
    cpy_r_r338 = cpy_r_r336.f1;
    CPy_INCREF(cpy_r_r338);
    CPy_DECREF(cpy_r_r336.f0);
    CPy_DECREF(cpy_r_r336.f1);
    cpy_r_pattern = cpy_r_r338;
    cpy_r_r339 = Py_None;
    CPy_INCREF(cpy_r_r339);
    cpy_r_key_type = cpy_r_r339;
    cpy_r_r340 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r340 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "msg", 567, CPyStatic_checkpattern___globals);
        goto CPyL330;
    }
    CPy_INCREF(cpy_r_r340);
CPyL188: ;
    cpy_r_r341 = NULL;
    cpy_r_r342 = 2;
    cpy_r_r343 = CPyDef_messages___MessageBuilder___filter_errors(cpy_r_r340, cpy_r_r341, cpy_r_r342);
    CPy_DECREF(cpy_r_r340);
    if (unlikely(cpy_r_r343 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 567, CPyStatic_checkpattern___globals);
        goto CPyL330;
    }
    cpy_r_r344 = CPyDef_mypy___errors___ErrorWatcher_____enter__(cpy_r_r343);
    if (unlikely(cpy_r_r344 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 567, CPyStatic_checkpattern___globals);
        goto CPyL331;
    }
    cpy_r_r345 = 1;
    cpy_r_local_errors = cpy_r_r344;
    cpy_r_r346 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r347 = cpy_r_keyword != cpy_r_r346;
    if (!cpy_r_r347) goto CPyL197;
    CPy_INCREF(cpy_r_keyword);
    if (likely(cpy_r_keyword != Py_None))
        cpy_r_r348 = cpy_r_keyword;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 570, CPyStatic_checkpattern___globals, "str", cpy_r_keyword);
        goto CPyL332;
    }
    cpy_r_r349 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r349 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "msg", 576, CPyStatic_checkpattern___globals);
        goto CPyL333;
    }
    CPy_INCREF(cpy_r_r349);
CPyL194: ;
    cpy_r_r350 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r350 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "chk", 578, CPyStatic_checkpattern___globals);
        goto CPyL334;
    }
    CPy_INCREF(cpy_r_r350);
CPyL195: ;
    cpy_r_r351 = NULL;
    cpy_r_r352 = 2;
    cpy_r_r353 = NULL;
    cpy_r_r354 = NULL;
    cpy_r_r355 = 2;
    cpy_r_r356 = 2;
    cpy_r_r357 = CPyDef_checkmember___analyze_member_access(cpy_r_r348, cpy_r_narrowed_type, cpy_r_pattern, 0, 0, 0, cpy_r_r349, cpy_r_new_type, cpy_r_r350, cpy_r_r351, cpy_r_r352, cpy_r_r353, cpy_r_r354, cpy_r_r355, cpy_r_r356);
    CPy_DECREF(cpy_r_r348);
    CPy_DECREF(cpy_r_r349);
    CPy_DECREF(cpy_r_r350);
    if (unlikely(cpy_r_r357 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 569, CPyStatic_checkpattern___globals);
        goto CPyL332;
    } else
        goto CPyL335;
CPyL196: ;
    cpy_r_key_type = cpy_r_r357;
    goto CPyL199;
CPyL197: ;
    cpy_r_r358 = NULL;
    cpy_r_r359 = NULL;
    cpy_r_r360 = CPY_INT_TAG;
    cpy_r_r361 = CPY_INT_TAG;
    cpy_r_r362 = CPyDef_types___AnyType(10, cpy_r_r358, cpy_r_r359, cpy_r_r360, cpy_r_r361);
    if (unlikely(cpy_r_r362 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 581, CPyStatic_checkpattern___globals);
        goto CPyL332;
    } else
        goto CPyL336;
CPyL198: ;
    cpy_r_key_type = cpy_r_r362;
CPyL199: ;
    cpy_r_r363 = CPyDef_mypy___errors___ErrorWatcher___has_new_errors(cpy_r_local_errors);
    CPy_DECREF(cpy_r_local_errors);
    if (unlikely(cpy_r_r363 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 582, CPyStatic_checkpattern___globals);
        goto CPyL201;
    }
    cpy_r_has_local_errors = cpy_r_r363;
    goto CPyL208;
CPyL201: ;
    cpy_r_r364 = CPy_CatchError();
    cpy_r_r345 = 0;
    cpy_r_r365 = CPy_GetExcInfo();
    cpy_r_r366 = cpy_r_r365.f0;
    CPy_INCREF(cpy_r_r366);
    cpy_r_r367 = cpy_r_r365.f1;
    CPy_INCREF(cpy_r_r367);
    cpy_r_r368 = cpy_r_r365.f2;
    CPy_INCREF(cpy_r_r368);
    CPy_DecRef(cpy_r_r365.f0);
    CPy_DecRef(cpy_r_r365.f1);
    CPy_DecRef(cpy_r_r365.f2);
    cpy_r_r369 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r343, cpy_r_r366, cpy_r_r367, cpy_r_r368);
    CPy_DecRef(cpy_r_r366);
    CPy_DecRef(cpy_r_r367);
    CPy_DecRef(cpy_r_r368);
    if (unlikely(cpy_r_r369 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 567, CPyStatic_checkpattern___globals);
        goto CPyL206;
    }
    if (cpy_r_r369) goto CPyL205;
    CPy_Reraise();
    if (!0) {
        goto CPyL206;
    } else
        goto CPyL337;
CPyL204: ;
    CPy_Unreachable();
CPyL205: ;
    CPy_RestoreExcInfo(cpy_r_r364);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r364.f2);
    goto CPyL208;
CPyL206: ;
    CPy_RestoreExcInfo(cpy_r_r364);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r364.f2);
    cpy_r_r370 = CPy_KeepPropagating();
    if (!cpy_r_r370) {
        goto CPyL209;
    } else
        goto CPyL338;
CPyL207: ;
    CPy_Unreachable();
CPyL208: ;
    tuple_T3OOO __tmp1548 = { NULL, NULL, NULL };
    cpy_r_r371 = __tmp1548;
    cpy_r_r372 = cpy_r_r371;
    goto CPyL210;
CPyL209: ;
    cpy_r_r373 = CPy_CatchError();
    cpy_r_r372 = cpy_r_r373;
CPyL210: ;
    if (!cpy_r_r345) goto CPyL339;
    cpy_r_r374 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r375 = CPyDef_mypy___errors___ErrorWatcher_____exit__(cpy_r_r343, cpy_r_r374, cpy_r_r374, cpy_r_r374);
    CPy_DECREF(cpy_r_r343);
    if (unlikely(cpy_r_r375 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 567, CPyStatic_checkpattern___globals);
        goto CPyL340;
    }
CPyL212: ;
    if (cpy_r_r372.f0 == NULL) {
        goto CPyL219;
    } else
        goto CPyL341;
CPyL213: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL215;
    } else
        goto CPyL342;
CPyL214: ;
    CPy_Unreachable();
CPyL215: ;
    if (cpy_r_r372.f0 == NULL) goto CPyL217;
    CPy_RestoreExcInfo(cpy_r_r372);
    CPy_XDECREF(cpy_r_r372.f0);
    CPy_XDECREF(cpy_r_r372.f1);
    CPy_XDECREF(cpy_r_r372.f2);
CPyL217: ;
    cpy_r_r376 = CPy_KeepPropagating();
    if (!cpy_r_r376) goto CPyL256;
    CPy_Unreachable();
CPyL219: ;
    if (cpy_r_has_local_errors == 2) {
        goto CPyL343;
    } else
        goto CPyL222;
CPyL220: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"has_local_errors\" referenced before assignment");
    cpy_r_r377 = 0;
    if (unlikely(!cpy_r_r377)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", -1, CPyStatic_checkpattern___globals);
        goto CPyL256;
    }
    CPy_Unreachable();
CPyL222: ;
    if (cpy_r_has_local_errors) goto CPyL344;
    if (likely(cpy_r_key_type != Py_None))
        cpy_r_r378 = cpy_r_key_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 583, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_key_type);
        goto CPyL330;
    }
    cpy_r_r379 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r380 = cpy_r_r378 == cpy_r_r379;
    if (cpy_r_r380) {
        goto CPyL344;
    } else
        goto CPyL345;
CPyL225: ;
    cpy_r_r381 = NULL;
    cpy_r_r382 = NULL;
    cpy_r_r383 = CPY_INT_TAG;
    cpy_r_r384 = CPY_INT_TAG;
    cpy_r_r385 = CPyDef_types___AnyType(10, cpy_r_r381, cpy_r_r382, cpy_r_r383, cpy_r_r384);
    if (unlikely(cpy_r_r385 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 584, CPyStatic_checkpattern___globals);
        goto CPyL346;
    }
    cpy_r_key_type = cpy_r_r385;
    cpy_r_r386 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r386 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "msg", 585, CPyStatic_checkpattern___globals);
        goto CPyL330;
    }
    CPy_INCREF(cpy_r_r386);
CPyL227: ;
    cpy_r_r387 = CPyStatics[1359]; /* 'Class "{}" has no attribute "{}"' */
    cpy_r_r388 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_options;
    if (unlikely(cpy_r_r388 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "visit_class_pattern", "PatternChecker", "options", 587, CPyStatic_checkpattern___globals);
        goto CPyL347;
    }
    CPy_INCREF(cpy_r_r388);
CPyL228: ;
    cpy_r_r389 = CPyDef_types___Type___str_with_options(cpy_r_typ, cpy_r_r388);
    CPy_DECREF(cpy_r_r388);
    if (unlikely(cpy_r_r389 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 587, CPyStatic_checkpattern___globals);
        goto CPyL347;
    }
    cpy_r_r390 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r391[3] = {cpy_r_r387, cpy_r_r389, cpy_r_keyword};
    cpy_r_r392 = (PyObject **)&cpy_r_r391;
    cpy_r_r393 = PyObject_VectorcallMethod(cpy_r_r390, cpy_r_r392, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r393 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 586, CPyStatic_checkpattern___globals);
        goto CPyL348;
    }
    CPy_DECREF(cpy_r_r389);
    CPy_DECREF(cpy_r_keyword);
    if (likely(PyUnicode_Check(cpy_r_r393)))
        cpy_r_r394 = cpy_r_r393;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 586, CPyStatic_checkpattern___globals, "str", cpy_r_r393);
        goto CPyL349;
    }
    cpy_r_r395 = NULL;
    cpy_r_r396 = NULL;
    cpy_r_r397 = 2;
    cpy_r_r398 = NULL;
    cpy_r_r399 = CPyDef_messages___MessageBuilder___fail(cpy_r_r386, cpy_r_r394, cpy_r_pattern, cpy_r_r395, cpy_r_r396, cpy_r_r397, cpy_r_r398);
    CPy_DECREF(cpy_r_r394);
    CPy_DECREF(cpy_r_r386);
    if (unlikely(cpy_r_r399 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 585, CPyStatic_checkpattern___globals);
        goto CPyL350;
    }
CPyL232: ;
    if (likely(cpy_r_key_type != Py_None))
        cpy_r_r400 = cpy_r_key_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 592, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_key_type);
        goto CPyL351;
    }
    cpy_r_r401 = CPyDef_checkpattern___PatternChecker___accept(cpy_r_self, cpy_r_pattern, cpy_r_r400);
    CPy_DECREF(cpy_r_pattern);
    CPy_DECREF(cpy_r_r400);
    if (unlikely(cpy_r_r401 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 592, CPyStatic_checkpattern___globals);
        goto CPyL329;
    }
    cpy_r_r402 = CPySequence_CheckUnpackCount(cpy_r_r401, 3);
    cpy_r_r403 = cpy_r_r402 >= 0;
    if (unlikely(!cpy_r_r403)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 592, CPyStatic_checkpattern___globals);
        goto CPyL352;
    }
    cpy_r_r404 = CPySequenceTuple_GetItem(cpy_r_r401, 0);
    if (unlikely(cpy_r_r404 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 592, CPyStatic_checkpattern___globals);
        goto CPyL352;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r404, CPyType_types___Type)))
        cpy_r_r405 = cpy_r_r404;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 592, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r404);
        goto CPyL352;
    }
    cpy_r_r406 = CPySequenceTuple_GetItem(cpy_r_r401, 2);
    if (unlikely(cpy_r_r406 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 592, CPyStatic_checkpattern___globals);
        goto CPyL353;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r406, CPyType_types___Type)))
        cpy_r_r407 = cpy_r_r406;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 592, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r406);
        goto CPyL353;
    }
    cpy_r_r408 = CPySequenceTuple_GetItem(cpy_r_r401, 4);
    CPy_DECREF(cpy_r_r401);
    if (unlikely(cpy_r_r408 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 592, CPyStatic_checkpattern___globals);
        goto CPyL354;
    }
    if (likely(PyDict_Check(cpy_r_r408)))
        cpy_r_r409 = cpy_r_r408;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 592, CPyStatic_checkpattern___globals, "dict", cpy_r_r408);
        goto CPyL354;
    }
    cpy_r_inner_type = cpy_r_r405;
    cpy_r_inner_rest_type = cpy_r_r407;
    cpy_r_inner_captures = cpy_r_r409;
    cpy_r_r410 = CPyDef_checkpattern___is_uninhabited(cpy_r_inner_type);
    CPy_DECREF(cpy_r_inner_type);
    if (unlikely(cpy_r_r410 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 593, CPyStatic_checkpattern___globals);
        goto CPyL355;
    }
    if (cpy_r_r410) {
        goto CPyL356;
    } else
        goto CPyL244;
CPyL243: ;
    cpy_r_can_match = 0;
    goto CPyL248;
CPyL244: ;
    cpy_r_r411 = CPyDef_checkpattern___PatternChecker___update_type_map(cpy_r_self, cpy_r_captures, cpy_r_inner_captures);
    CPy_DECREF(cpy_r_inner_captures);
    if (unlikely(cpy_r_r411 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 596, CPyStatic_checkpattern___globals);
        goto CPyL357;
    }
    cpy_r_r412 = CPyDef_checkpattern___is_uninhabited(cpy_r_inner_rest_type);
    CPy_DECREF(cpy_r_inner_rest_type);
    if (unlikely(cpy_r_r412 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 597, CPyStatic_checkpattern___globals);
        goto CPyL329;
    }
    if (cpy_r_r412) {
        goto CPyL248;
    } else
        goto CPyL358;
CPyL247: ;
    CPy_INCREF(cpy_r_current_type);
    cpy_r_rest_type = cpy_r_current_type;
CPyL248: ;
    cpy_r_r413 = cpy_r_r330 + 2;
    cpy_r_r330 = cpy_r_r413;
    goto CPyL185;
CPyL249: ;
    if (cpy_r_can_match) {
        goto CPyL252;
    } else
        goto CPyL359;
CPyL250: ;
    cpy_r_r414 = 2;
    cpy_r_r415 = CPY_INT_TAG;
    cpy_r_r416 = CPY_INT_TAG;
    cpy_r_r417 = CPyDef_types___UninhabitedType(cpy_r_r414, cpy_r_r415, cpy_r_r416);
    if (unlikely(cpy_r_r417 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 601, CPyStatic_checkpattern___globals);
        goto CPyL360;
    }
    cpy_r_new_type = cpy_r_r417;
CPyL252: ;
    cpy_r_r418 = CPyStatic_checkpattern___globals;
    cpy_r_r419 = CPyStatics[1351]; /* 'PatternType' */
    cpy_r_r420 = CPyDict_GetItem(cpy_r_r418, cpy_r_r419);
    if (unlikely(cpy_r_r420 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 602, CPyStatic_checkpattern___globals);
        goto CPyL361;
    }
    PyObject *cpy_r_r421[3] = {cpy_r_new_type, cpy_r_rest_type, cpy_r_captures};
    cpy_r_r422 = (PyObject **)&cpy_r_r421;
    cpy_r_r423 = _PyObject_Vectorcall(cpy_r_r420, cpy_r_r422, 3, 0);
    CPy_DECREF(cpy_r_r420);
    if (unlikely(cpy_r_r423 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 602, CPyStatic_checkpattern___globals);
        goto CPyL361;
    }
    CPy_DECREF(cpy_r_new_type);
    CPy_DECREF(cpy_r_rest_type);
    CPy_DECREF(cpy_r_captures);
    if (likely(PyTuple_Check(cpy_r_r423)))
        cpy_r_r424 = cpy_r_r423;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "visit_class_pattern", 602, CPyStatic_checkpattern___globals, "tuple", cpy_r_r423);
        goto CPyL256;
    }
    return cpy_r_r424;
CPyL256: ;
    cpy_r_r425 = NULL;
    return cpy_r_r425;
CPyL257: ;
    CPy_XDecRef(cpy_r_match_args_type);
    goto CPyL256;
CPyL258: ;
    CPy_XDECREF(cpy_r_match_args_type);
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_type_info);
    goto CPyL6;
CPyL259: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL256;
CPyL260: ;
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r20);
    goto CPyL256;
CPyL261: ;
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r21);
    goto CPyL256;
CPyL262: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_type_info);
    goto CPyL256;
CPyL263: ;
    CPy_XDECREF(cpy_r_match_args_type);
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_type_info);
    goto CPyL16;
CPyL264: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_type_info);
    CPy_DecRef(cpy_r_any_type);
    goto CPyL256;
CPyL265: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_type_info);
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r57);
    goto CPyL256;
CPyL266: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_type_info);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r58);
    goto CPyL256;
CPyL267: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_r57);
    goto CPyL256;
CPyL268: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    goto CPyL256;
CPyL269: ;
    CPy_XDECREF(cpy_r_match_args_type);
    CPy_DECREF(cpy_r_current_type);
    goto CPyL35;
CPyL270: ;
    CPy_DecRef(cpy_r_type_info);
    goto CPyL256;
CPyL271: ;
    CPy_DecRef(cpy_r_r89);
    goto CPyL256;
CPyL272: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL256;
CPyL273: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r94);
    goto CPyL256;
CPyL274: ;
    CPy_DecRef(cpy_r_r94);
    goto CPyL256;
CPyL275: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    goto CPyL256;
CPyL276: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r107);
    goto CPyL256;
CPyL277: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r107);
    CPy_DecRef(cpy_r_r108);
    goto CPyL256;
CPyL278: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r114);
    goto CPyL256;
CPyL279: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r115);
    goto CPyL256;
CPyL280: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    goto CPyL256;
CPyL281: ;
    CPy_XDECREF(cpy_r_match_args_type);
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_new_type);
    CPy_DECREF(cpy_r_rest_type);
    goto CPyL60;
CPyL282: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    goto CPyL256;
CPyL283: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    goto CPyL256;
CPyL284: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_match_arg_set);
    goto CPyL256;
CPyL285: ;
    CPy_XDECREF(cpy_r_match_args_type);
    goto CPyL158;
CPyL286: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_match_arg_set);
    CPy_DecRef(cpy_r_captures);
    goto CPyL256;
CPyL287: ;
    CPy_XDECREF(cpy_r_match_args_type);
    CPy_DECREF(cpy_r_captures);
    goto CPyL69;
CPyL288: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_match_arg_set);
    goto CPyL256;
CPyL289: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_match_arg_set);
    CPy_DecRef(cpy_r_pattern_type);
    goto CPyL256;
CPyL290: ;
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_new_type);
    CPy_DECREF(cpy_r_narrowed_type);
    CPy_DECREF(cpy_r_keyword_pairs);
    CPy_DECREF(cpy_r_match_arg_set);
    goto CPyL79;
CPyL291: ;
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_pattern_type);
    goto CPyL256;
CPyL292: ;
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_pattern_type);
    CPy_DecRef(cpy_r_r152);
    goto CPyL256;
CPyL293: ;
    CPy_DecRef(cpy_r_pattern_type);
    CPy_DecRef(cpy_r_r152);
    goto CPyL256;
CPyL294: ;
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r156);
    goto CPyL256;
CPyL295: ;
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r156);
    CPy_DecRef(cpy_r_r158);
    goto CPyL256;
CPyL296: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_match_arg_set);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r171);
    goto CPyL256;
CPyL297: ;
    CPy_DecRef(cpy_r_local_errors__redef__);
    goto CPyL102;
CPyL298: ;
    CPy_DecRef(cpy_r_local_errors__redef__);
    CPy_DecRef(cpy_r_r175);
    goto CPyL102;
CPyL299: ;
    CPy_XDECREF(cpy_r_match_args_type);
    goto CPyL100;
CPyL300: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_match_arg_set);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r171);
    CPy_DecRef(cpy_r_r185.f0);
    CPy_DecRef(cpy_r_r185.f1);
    CPy_DecRef(cpy_r_r185.f2);
    goto CPyL105;
CPyL301: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_match_arg_set);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r171);
    goto CPyL108;
CPyL302: ;
    CPy_DECREF(cpy_r_r171);
    goto CPyL113;
CPyL303: ;
    CPy_XDecRef(cpy_r_match_args_type);
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_match_arg_set);
    CPy_DecRef(cpy_r_captures);
    goto CPyL116;
CPyL304: ;
    CPy_XDECREF(cpy_r_match_args_type);
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_new_type);
    CPy_DECREF(cpy_r_rest_type);
    CPy_DECREF(cpy_r_narrowed_type);
    CPy_DECREF(cpy_r_keyword_pairs);
    CPy_DECREF(cpy_r_match_arg_set);
    CPy_DECREF(cpy_r_captures);
    goto CPyL114;
CPyL305: ;
    CPy_XDECREF(cpy_r_r193.f0);
    CPy_XDECREF(cpy_r_r193.f1);
    CPy_XDECREF(cpy_r_r193.f2);
    goto CPyL115;
CPyL306: ;
    CPy_XDECREF(cpy_r_match_args_type);
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_new_type);
    CPy_DECREF(cpy_r_rest_type);
    CPy_DECREF(cpy_r_narrowed_type);
    CPy_DECREF(cpy_r_keyword_pairs);
    CPy_DECREF(cpy_r_match_arg_set);
    CPy_DECREF(cpy_r_captures);
    goto CPyL121;
CPyL307: ;
    CPy_XDECREF(cpy_r_match_args_type);
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_new_type);
    CPy_DECREF(cpy_r_rest_type);
    CPy_DECREF(cpy_r_narrowed_type);
    CPy_DECREF(cpy_r_keyword_pairs);
    CPy_DECREF(cpy_r_match_arg_set);
    CPy_DECREF(cpy_r_captures);
    goto CPyL124;
CPyL308: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL256;
CPyL309: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r199);
    goto CPyL256;
CPyL310: ;
    CPy_DecRef(cpy_r_r199);
    goto CPyL256;
CPyL311: ;
    CPy_DecRef(cpy_r_r199);
    CPy_DecRef(cpy_r_r202);
    goto CPyL256;
CPyL312: ;
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_new_type);
    CPy_DECREF(cpy_r_rest_type);
    CPy_DECREF(cpy_r_narrowed_type);
    CPy_DECREF(cpy_r_keyword_pairs);
    CPy_DECREF(cpy_r_match_arg_set);
    CPy_DECREF(cpy_r_captures);
    goto CPyL133;
CPyL313: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_match_arg_set);
    CPy_DecRef(cpy_r_captures);
    goto CPyL256;
CPyL314: ;
    CPy_DECREF(cpy_r_proper_match_args_type);
    goto CPyL145;
CPyL315: ;
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_new_type);
    CPy_DECREF(cpy_r_rest_type);
    CPy_DECREF(cpy_r_narrowed_type);
    CPy_DECREF(cpy_r_keyword_pairs);
    CPy_DECREF(cpy_r_match_arg_set);
    CPy_DECREF(cpy_r_captures);
    CPy_DECREF(cpy_r_match_arg_names);
    goto CPyL141;
CPyL316: ;
    CPy_DECREF(cpy_r_match_arg_names);
    CPy_DECREF(cpy_r_r249);
    goto CPyL158;
CPyL317: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_match_arg_set);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_match_arg_names);
    CPy_DecRef(cpy_r_r249);
    goto CPyL256;
CPyL318: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_match_arg_set);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_match_arg_names);
    CPy_DecRef(cpy_r_r249);
    CPy_DecRef(cpy_r_arg_name);
    goto CPyL256;
CPyL319: ;
    CPy_DECREF(cpy_r_arg_name);
    goto CPyL157;
CPyL320: ;
    CPy_DECREF(cpy_r_match_arg_set);
    CPy_DECREF(cpy_r_keyword_arg_set);
    CPy_DECREF(cpy_r_r275);
    CPy_DECREF(cpy_r_r277);
    goto CPyL181;
CPyL321: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_match_arg_set);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_keyword_arg_set);
    CPy_DecRef(cpy_r_r275);
    CPy_DecRef(cpy_r_r277);
    goto CPyL256;
CPyL322: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_match_arg_set);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_keyword_arg_set);
    CPy_DecRef(cpy_r_r275);
    CPy_DecRef(cpy_r_r277);
    CPy_DecRef(cpy_r_key);
    goto CPyL256;
CPyL323: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_match_arg_set);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_keyword_arg_set);
    CPy_DecRef(cpy_r_r275);
    CPy_DecRef(cpy_r_r277);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    goto CPyL256;
CPyL324: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_match_arg_set);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_keyword_arg_set);
    CPy_DecRef(cpy_r_r275);
    CPy_DecRef(cpy_r_r277);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r298);
    goto CPyL256;
CPyL325: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL179;
CPyL326: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_match_arg_set);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_keyword_arg_set);
    CPy_DecRef(cpy_r_r275);
    CPy_DecRef(cpy_r_r277);
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r313);
    goto CPyL256;
CPyL327: ;
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_new_type);
    CPy_DECREF(cpy_r_rest_type);
    CPy_DECREF(cpy_r_narrowed_type);
    CPy_DECREF(cpy_r_keyword_pairs);
    CPy_DECREF(cpy_r_captures);
    goto CPyL182;
CPyL328: ;
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_narrowed_type);
    CPy_DECREF(cpy_r_keyword_pairs);
    goto CPyL249;
CPyL329: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    goto CPyL256;
CPyL330: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_keyword);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_key_type);
    goto CPyL256;
CPyL331: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_keyword);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_key_type);
    CPy_DecRef(cpy_r_r343);
    goto CPyL256;
CPyL332: ;
    CPy_DecRef(cpy_r_local_errors);
    goto CPyL201;
CPyL333: ;
    CPy_DecRef(cpy_r_local_errors);
    CPy_DecRef(cpy_r_r348);
    goto CPyL201;
CPyL334: ;
    CPy_DecRef(cpy_r_local_errors);
    CPy_DecRef(cpy_r_r348);
    CPy_DecRef(cpy_r_r349);
    goto CPyL201;
CPyL335: ;
    CPy_DECREF(cpy_r_key_type);
    goto CPyL196;
CPyL336: ;
    CPy_DECREF(cpy_r_key_type);
    goto CPyL198;
CPyL337: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_keyword);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_key_type);
    CPy_DecRef(cpy_r_r343);
    CPy_DecRef(cpy_r_r364.f0);
    CPy_DecRef(cpy_r_r364.f1);
    CPy_DecRef(cpy_r_r364.f2);
    goto CPyL204;
CPyL338: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_keyword);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_key_type);
    CPy_DecRef(cpy_r_r343);
    goto CPyL207;
CPyL339: ;
    CPy_DECREF(cpy_r_r343);
    goto CPyL212;
CPyL340: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_keyword);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_key_type);
    goto CPyL215;
CPyL341: ;
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_new_type);
    CPy_DECREF(cpy_r_rest_type);
    CPy_DECREF(cpy_r_narrowed_type);
    CPy_DECREF(cpy_r_keyword_pairs);
    CPy_DECREF(cpy_r_captures);
    CPy_DECREF(cpy_r_keyword);
    CPy_DECREF(cpy_r_pattern);
    CPy_DECREF(cpy_r_key_type);
    goto CPyL213;
CPyL342: ;
    CPy_XDECREF(cpy_r_r372.f0);
    CPy_XDECREF(cpy_r_r372.f1);
    CPy_XDECREF(cpy_r_r372.f2);
    goto CPyL214;
CPyL343: ;
    CPy_DECREF(cpy_r_current_type);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_new_type);
    CPy_DECREF(cpy_r_rest_type);
    CPy_DECREF(cpy_r_narrowed_type);
    CPy_DECREF(cpy_r_keyword_pairs);
    CPy_DECREF(cpy_r_captures);
    CPy_DECREF(cpy_r_keyword);
    CPy_DECREF(cpy_r_pattern);
    CPy_DECREF(cpy_r_key_type);
    goto CPyL220;
CPyL344: ;
    CPy_DECREF(cpy_r_key_type);
    goto CPyL225;
CPyL345: ;
    CPy_DECREF(cpy_r_keyword);
    goto CPyL232;
CPyL346: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_keyword);
    CPy_DecRef(cpy_r_pattern);
    goto CPyL256;
CPyL347: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_keyword);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_key_type);
    CPy_DecRef(cpy_r_r386);
    goto CPyL256;
CPyL348: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_keyword);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_key_type);
    CPy_DecRef(cpy_r_r386);
    CPy_DecRef(cpy_r_r389);
    goto CPyL256;
CPyL349: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_key_type);
    CPy_DecRef(cpy_r_r386);
    goto CPyL256;
CPyL350: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_pattern);
    CPy_DecRef(cpy_r_key_type);
    goto CPyL256;
CPyL351: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_pattern);
    goto CPyL256;
CPyL352: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r401);
    goto CPyL256;
CPyL353: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r401);
    CPy_DecRef(cpy_r_r405);
    goto CPyL256;
CPyL354: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_r405);
    CPy_DecRef(cpy_r_r407);
    goto CPyL256;
CPyL355: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_inner_rest_type);
    CPy_DecRef(cpy_r_inner_captures);
    goto CPyL256;
CPyL356: ;
    CPy_DECREF(cpy_r_inner_rest_type);
    CPy_DECREF(cpy_r_inner_captures);
    goto CPyL243;
CPyL357: ;
    CPy_DecRef(cpy_r_current_type);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_narrowed_type);
    CPy_DecRef(cpy_r_keyword_pairs);
    CPy_DecRef(cpy_r_captures);
    CPy_DecRef(cpy_r_inner_rest_type);
    goto CPyL256;
CPyL358: ;
    CPy_DECREF(cpy_r_rest_type);
    goto CPyL247;
CPyL359: ;
    CPy_DECREF(cpy_r_new_type);
    goto CPyL250;
CPyL360: ;
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_captures);
    goto CPyL256;
CPyL361: ;
    CPy_DecRef(cpy_r_new_type);
    CPy_DecRef(cpy_r_rest_type);
    CPy_DecRef(cpy_r_captures);
    goto CPyL256;
}

PyObject *CPyPy_checkpattern___PatternChecker___visit_class_pattern(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_pattern", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ClassPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ClassPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___visit_class_pattern(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern", 448, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___visit_class_pattern__PatternVisitor_glue(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_checkpattern___PatternChecker___visit_class_pattern(cpy_r_self, cpy_r_o);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_checkpattern___PatternChecker___visit_class_pattern__PatternVisitor_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:visit_class_pattern__PatternVisitor_glue", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_patterns___ClassPattern))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.patterns.ClassPattern", obj_o); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___visit_class_pattern__PatternVisitor_glue(arg_self, arg_o);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "visit_class_pattern__PatternVisitor_glue", -1, CPyStatic_checkpattern___globals);
    return NULL;
}

char CPyDef_checkpattern___PatternChecker___should_self_match(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_other;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "should_self_match", 605, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "should_self_match", 605, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL17;
    }
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___Instance;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL7;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r6 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "should_self_match", 606, CPyStatic_checkpattern___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL18;
    }
    cpy_r_r7 = ((mypy___types___InstanceObject *)cpy_r_r6)->_type;
    cpy_r_r8 = ((mypy___nodes___TypeInfoObject *)cpy_r_r7)->_is_named_tuple;
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AttributeError("mypy/checkpattern.py", "should_self_match", "TypeInfo", "is_named_tuple", 606, CPyStatic_checkpattern___globals);
        goto CPyL18;
    }
CPyL5: ;
    if (cpy_r_r8) {
        goto CPyL19;
    } else
        goto CPyL7;
CPyL6: ;
    return 0;
CPyL7: ;
    cpy_r_r9 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_self_match_types;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "should_self_match", "PatternChecker", "self_match_types", 608, CPyStatic_checkpattern___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r9);
CPyL8: ;
    cpy_r_r10 = 0;
CPyL9: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL20;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r9, cpy_r_r10);
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_types___Type)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "should_self_match", 608, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r15);
        goto CPyL21;
    }
    cpy_r_other = cpy_r_r16;
    CPy_INCREF(cpy_r_typ);
    if (likely(PyObject_TypeCheck(cpy_r_typ, CPyType_types___ProperType)))
        cpy_r_r17 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "should_self_match", 609, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_typ);
        goto CPyL22;
    }
    cpy_r_r18 = NULL;
    cpy_r_r19 = 2;
    cpy_r_r20 = 2;
    cpy_r_r21 = 2;
    cpy_r_r22 = 2;
    cpy_r_r23 = 2;
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyDef_subtypes___is_subtype(cpy_r_r17, cpy_r_other, cpy_r_r18, cpy_r_r19, cpy_r_r20, cpy_r_r21, cpy_r_r22, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_other);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "should_self_match", 609, CPyStatic_checkpattern___globals);
        goto CPyL21;
    }
    if (cpy_r_r25) {
        goto CPyL23;
    } else
        goto CPyL15;
CPyL14: ;
    return 1;
CPyL15: ;
    cpy_r_r26 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r26;
    goto CPyL9;
CPyL16: ;
    return 0;
CPyL17: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
CPyL18: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL6;
CPyL20: ;
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_r9);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r9);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_other);
    goto CPyL17;
CPyL23: ;
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_r9);
    goto CPyL14;
}

PyObject *CPyPy_checkpattern___PatternChecker___should_self_match(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:should_self_match", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_checkpattern___PatternChecker___should_self_match(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "should_self_match", 604, CPyStatic_checkpattern___globals);
    return NULL;
}

char CPyDef_checkpattern___PatternChecker___can_match_sequence(PyObject *cpy_r_self, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_other;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_sequence;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    cpy_r_r0 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL12;
    cpy_r_r4 = 0;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r5 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "can_match_sequence", 615, CPyStatic_checkpattern___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL28;
    }
    cpy_r_r6 = ((mypy___types___UnionTypeObject *)cpy_r_r5)->_items;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = 0;
CPyL3: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL29;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r6, cpy_r_r7);
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_types___Type)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "can_match_sequence", 615, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r12);
        goto CPyL30;
    }
    cpy_r_item = cpy_r_r13;
    cpy_r_r14 = CPyDef_types___get_proper_type(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "can_match_sequence", 615, CPyStatic_checkpattern___globals);
        goto CPyL30;
    }
    if (likely(cpy_r_r14 != Py_None))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "can_match_sequence", 615, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_r14);
        goto CPyL30;
    }
    cpy_r_r16 = CPyDef_checkpattern___PatternChecker___can_match_sequence(cpy_r_self, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "can_match_sequence", 615, CPyStatic_checkpattern___globals);
        goto CPyL30;
    }
    if (cpy_r_r16) {
        goto CPyL31;
    } else
        goto CPyL10;
CPyL9: ;
    cpy_r_r4 = 1;
    goto CPyL11;
CPyL10: ;
    cpy_r_r17 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r17;
    goto CPyL3;
CPyL11: ;
    return cpy_r_r4;
CPyL12: ;
    cpy_r_r18 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_non_sequence_match_types;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "can_match_sequence", "PatternChecker", "non_sequence_match_types", 616, CPyStatic_checkpattern___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r18);
CPyL13: ;
    cpy_r_r19 = 0;
CPyL14: ;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r22;
    if (!cpy_r_r23) goto CPyL32;
    cpy_r_r24 = CPyList_GetItemUnsafe(cpy_r_r18, cpy_r_r19);
    if (likely(PyObject_TypeCheck(cpy_r_r24, CPyType_types___Type)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "can_match_sequence", 616, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r24);
        goto CPyL33;
    }
    cpy_r_other = cpy_r_r25;
    cpy_r_r26 = NULL;
    cpy_r_r27 = 2;
    cpy_r_r28 = 2;
    cpy_r_r29 = 2;
    cpy_r_r30 = 2;
    cpy_r_r31 = NULL;
    cpy_r_r32 = CPyDef_subtypes___is_subtype(cpy_r_typ, cpy_r_other, cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_r29, 1, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_other);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "can_match_sequence", 619, CPyStatic_checkpattern___globals);
        goto CPyL33;
    }
    if (cpy_r_r32) {
        goto CPyL34;
    } else
        goto CPyL19;
CPyL18: ;
    return 0;
CPyL19: ;
    cpy_r_r33 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r33;
    goto CPyL14;
CPyL20: ;
    cpy_r_r34 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "can_match_sequence", "PatternChecker", "chk", 621, CPyStatic_checkpattern___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r34);
CPyL21: ;
    cpy_r_r35 = CPyStatics[696]; /* 'typing.Sequence' */
    cpy_r_r36 = CPyDef_checker___TypeChecker___named_type(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "can_match_sequence", 621, CPyStatic_checkpattern___globals);
        goto CPyL28;
    }
    cpy_r_sequence = cpy_r_r36;
    cpy_r_r37 = NULL;
    cpy_r_r38 = 2;
    cpy_r_r39 = 2;
    cpy_r_r40 = 2;
    cpy_r_r41 = 2;
    cpy_r_r42 = 2;
    cpy_r_r43 = NULL;
    cpy_r_r44 = CPyDef_subtypes___is_subtype(cpy_r_typ, cpy_r_sequence, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "can_match_sequence", 623, CPyStatic_checkpattern___globals);
        goto CPyL35;
    }
    if (cpy_r_r44) {
        goto CPyL36;
    } else
        goto CPyL25;
CPyL24: ;
    cpy_r_r45 = cpy_r_r44;
    goto CPyL27;
CPyL25: ;
    cpy_r_r46 = NULL;
    cpy_r_r47 = 2;
    cpy_r_r48 = 2;
    cpy_r_r49 = 2;
    cpy_r_r50 = 2;
    cpy_r_r51 = 2;
    cpy_r_r52 = NULL;
    cpy_r_r53 = CPyDef_subtypes___is_subtype(cpy_r_sequence, cpy_r_typ, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_sequence);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "can_match_sequence", 623, CPyStatic_checkpattern___globals);
        goto CPyL28;
    }
    cpy_r_r45 = cpy_r_r53;
CPyL27: ;
    return cpy_r_r45;
CPyL28: ;
    cpy_r_r54 = 2;
    return cpy_r_r54;
CPyL29: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL11;
CPyL30: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL28;
CPyL31: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL9;
CPyL32: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL20;
CPyL33: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL28;
CPyL34: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL18;
CPyL35: ;
    CPy_DecRef(cpy_r_sequence);
    goto CPyL28;
CPyL36: ;
    CPy_DECREF(cpy_r_sequence);
    goto CPyL24;
}

PyObject *CPyPy_checkpattern___PatternChecker___can_match_sequence(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:can_match_sequence", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___ProperType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_checkpattern___PatternChecker___can_match_sequence(arg_self, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "can_match_sequence", 613, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___generate_types_from_names(PyObject *cpy_r_self, PyObject *cpy_r_type_names) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_types;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    tuple_T3OOO cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "generate_types_from_names", 626, CPyStatic_checkpattern___globals);
        goto CPyL20;
    }
    cpy_r_types = cpy_r_r0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_type_names)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL19;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_type_names, cpy_r_r1);
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "generate_types_from_names", 627, CPyStatic_checkpattern___globals, "str", cpy_r_r6);
        goto CPyL21;
    }
    cpy_r_name = cpy_r_r7;
    cpy_r_r8 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "generate_types_from_names", "PatternChecker", "chk", 629, CPyStatic_checkpattern___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r8);
CPyL6: ;
    cpy_r_r9 = CPyDef_checker___TypeChecker___named_type(cpy_r_r8, cpy_r_name);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "generate_types_from_names", 629, CPyStatic_checkpattern___globals);
        goto CPyL8;
    }
    cpy_r_r10 = PyList_Append(cpy_r_types, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/checkpattern.py", "generate_types_from_names", 629, CPyStatic_checkpattern___globals);
    } else
        goto CPyL22;
CPyL8: ;
    cpy_r_r12 = CPy_CatchError();
    cpy_r_r13 = CPyModule_builtins;
    cpy_r_r14 = CPyStatics[712]; /* 'KeyError' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "generate_types_from_names", 630, CPyStatic_checkpattern___globals);
        goto CPyL23;
    }
    cpy_r_r16 = CPy_ExceptionMatches(cpy_r_r15);
    CPy_DecRef(cpy_r_r15);
    if (!cpy_r_r16) goto CPyL24;
    cpy_r_r17 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r17;
    cpy_r_r18 = CPyStatics[1360]; /* 'builtins.' */
    cpy_r_r19 = CPyStr_Startswith(cpy_r_name, cpy_r_r18);
    CPy_DecRef(cpy_r_name);
    if (cpy_r_r19) {
        goto CPyL25;
    } else
        goto CPyL26;
CPyL11: ;
    CPy_Raise(cpy_r_e);
    CPy_DecRef(cpy_r_e);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/checkpattern.py", "generate_types_from_names", 633, CPyStatic_checkpattern___globals);
        goto CPyL16;
    } else
        goto CPyL27;
CPyL12: ;
    CPy_Unreachable();
CPyL13: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL16;
    } else
        goto CPyL28;
CPyL14: ;
    CPy_Unreachable();
CPyL15: ;
    CPy_RestoreExcInfo(cpy_r_r12);
    CPy_DecRef(cpy_r_r12.f0);
    CPy_DecRef(cpy_r_r12.f1);
    CPy_DecRef(cpy_r_r12.f2);
    goto CPyL18;
CPyL16: ;
    CPy_RestoreExcInfo(cpy_r_r12);
    CPy_DecRef(cpy_r_r12.f0);
    CPy_DecRef(cpy_r_r12.f1);
    CPy_DecRef(cpy_r_r12.f2);
    cpy_r_r20 = CPy_KeepPropagating();
    if (!cpy_r_r20) goto CPyL20;
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r21 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r21;
    goto CPyL2;
CPyL19: ;
    return cpy_r_types;
CPyL20: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL21: ;
    CPy_DecRef(cpy_r_types);
    goto CPyL20;
CPyL22: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL18;
CPyL23: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_name);
    goto CPyL16;
CPyL24: ;
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_name);
    goto CPyL13;
CPyL25: ;
    CPy_DecRef(cpy_r_e);
    goto CPyL15;
CPyL26: ;
    CPy_DecRef(cpy_r_types);
    goto CPyL11;
CPyL27: ;
    CPy_DecRef(cpy_r_r12.f0);
    CPy_DecRef(cpy_r_r12.f1);
    CPy_DecRef(cpy_r_r12.f2);
    goto CPyL12;
CPyL28: ;
    CPy_DecRef(cpy_r_r12.f0);
    CPy_DecRef(cpy_r_r12.f1);
    CPy_DecRef(cpy_r_r12.f2);
    goto CPyL14;
}

PyObject *CPyPy_checkpattern___PatternChecker___generate_types_from_names(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"type_names", 0};
    static CPyArg_Parser parser = {"O:generate_types_from_names", kwlist, 0};
    PyObject *obj_type_names;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_type_names)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_type_names;
    if (likely(PyList_Check(obj_type_names)))
        arg_type_names = obj_type_names;
    else {
        CPy_TypeError("list", obj_type_names); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___generate_types_from_names(arg_self, arg_type_names);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "generate_types_from_names", 625, CPyStatic_checkpattern___globals);
    return NULL;
}

char CPyDef_checkpattern___PatternChecker___update_type_map(PyObject *cpy_r_self, PyObject *cpy_r_original_type_map, PyObject *cpy_r_extra_type_map) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T3CIO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_expr;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_already_captured;
    CPyTagged cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    tuple_T4CIOO cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_expr_2;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject **cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 641, CPyStatic_checkpattern___globals);
        goto CPyL25;
    }
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_original_type_map);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetKeysIter(cpy_r_original_type_map);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 641, CPyStatic_checkpattern___globals);
        goto CPyL26;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextKey(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL27;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r5.f2);
    if (likely(PyObject_TypeCheck(cpy_r_r8, CPyType_nodes___Expression)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "update_type_map", 641, CPyStatic_checkpattern___globals, "mypy.nodes.Expression", cpy_r_r8);
        goto CPyL28;
    }
    cpy_r_expr = cpy_r_r9;
    cpy_r_r10 = CPyDef_mypy___literals___literal_hash(cpy_r_expr);
    CPy_DECREF(cpy_r_expr);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 641, CPyStatic_checkpattern___globals);
        goto CPyL28;
    }
    cpy_r_r11 = PySet_Add(cpy_r_r0, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 641, CPyStatic_checkpattern___globals);
        goto CPyL28;
    }
    cpy_r_r13 = CPyDict_CheckSize(cpy_r_original_type_map, cpy_r_r3);
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 641, CPyStatic_checkpattern___globals);
        goto CPyL28;
    } else
        goto CPyL2;
CPyL7: ;
    cpy_r_r14 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 641, CPyStatic_checkpattern___globals);
        goto CPyL26;
    }
    cpy_r_already_captured = cpy_r_r0;
    cpy_r_r15 = 0;
    cpy_r_r16 = PyDict_Size(cpy_r_extra_type_map);
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = CPyDict_GetItemsIter(cpy_r_extra_type_map);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 642, CPyStatic_checkpattern___globals);
        goto CPyL29;
    }
CPyL9: ;
    cpy_r_r19 = CPyDict_NextItem(cpy_r_r18, cpy_r_r15);
    cpy_r_r20 = cpy_r_r19.f1;
    cpy_r_r15 = cpy_r_r20;
    cpy_r_r21 = cpy_r_r19.f0;
    if (!cpy_r_r21) goto CPyL30;
    cpy_r_r22 = cpy_r_r19.f2;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = cpy_r_r19.f3;
    CPy_INCREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r19.f2);
    CPy_DECREF(cpy_r_r19.f3);
    if (likely(PyObject_TypeCheck(cpy_r_r22, CPyType_nodes___Expression)))
        cpy_r_r24 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "update_type_map", 642, CPyStatic_checkpattern___globals, "mypy.nodes.Expression", cpy_r_r22);
        goto CPyL31;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r23, CPyType_types___Type)))
        cpy_r_r25 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "update_type_map", 642, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r23);
        goto CPyL32;
    }
    cpy_r_expr_2 = cpy_r_r24;
    cpy_r_typ = cpy_r_r25;
    cpy_r_r26 = CPyDef_mypy___literals___literal_hash(cpy_r_expr_2);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 643, CPyStatic_checkpattern___globals);
        goto CPyL33;
    }
    cpy_r_r27 = PySet_Contains(cpy_r_already_captured, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 643, CPyStatic_checkpattern___globals);
        goto CPyL33;
    }
    cpy_r_r29 = cpy_r_r27;
    if (cpy_r_r29) {
        goto CPyL34;
    } else
        goto CPyL21;
CPyL15: ;
    cpy_r_r30 = CPyDef_checkpattern___get_var(cpy_r_expr_2);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 644, CPyStatic_checkpattern___globals);
        goto CPyL35;
    }
    cpy_r_node = cpy_r_r30;
    cpy_r_r31 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_msg;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "update_type_map", "PatternChecker", "msg", 645, CPyStatic_checkpattern___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r31);
CPyL17: ;
    cpy_r_r32 = CPyStatics[1361]; /* 'Multiple assignments to name "{}" in pattern' */
    cpy_r_r33 = CPY_GET_ATTR(cpy_r_node, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_node);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 646, CPyStatic_checkpattern___globals);
        goto CPyL37;
    }
CPyL18: ;
    cpy_r_r34 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r35[2] = {cpy_r_r32, cpy_r_r33};
    cpy_r_r36 = (PyObject **)&cpy_r_r35;
    cpy_r_r37 = PyObject_VectorcallMethod(cpy_r_r34, cpy_r_r36, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 646, CPyStatic_checkpattern___globals);
        goto CPyL38;
    }
    CPy_DECREF(cpy_r_r33);
    if (likely(PyUnicode_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "update_type_map", 646, CPyStatic_checkpattern___globals, "str", cpy_r_r37);
        goto CPyL37;
    }
    cpy_r_r39 = NULL;
    cpy_r_r40 = NULL;
    cpy_r_r41 = 2;
    cpy_r_r42 = NULL;
    cpy_r_r43 = CPyDef_messages___MessageBuilder___fail(cpy_r_r31, cpy_r_r38, cpy_r_expr_2, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_expr_2);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 645, CPyStatic_checkpattern___globals);
        goto CPyL39;
    } else
        goto CPyL22;
CPyL21: ;
    cpy_r_r44 = CPyDict_SetItem(cpy_r_original_type_map, cpy_r_expr_2, cpy_r_typ);
    CPy_DECREF(cpy_r_expr_2);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 649, CPyStatic_checkpattern___globals);
        goto CPyL39;
    }
CPyL22: ;
    cpy_r_r46 = CPyDict_CheckSize(cpy_r_extra_type_map, cpy_r_r17);
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 642, CPyStatic_checkpattern___globals);
        goto CPyL39;
    } else
        goto CPyL9;
CPyL23: ;
    cpy_r_r47 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 642, CPyStatic_checkpattern___globals);
        goto CPyL25;
    }
    return 1;
CPyL25: ;
    cpy_r_r48 = 2;
    return cpy_r_r48;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL25;
CPyL27: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    goto CPyL7;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL25;
CPyL29: ;
    CPy_DecRef(cpy_r_already_captured);
    goto CPyL25;
CPyL30: ;
    CPy_DECREF(cpy_r_already_captured);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19.f2);
    CPy_DECREF(cpy_r_r19.f3);
    goto CPyL23;
CPyL31: ;
    CPy_DecRef(cpy_r_already_captured);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r23);
    goto CPyL25;
CPyL32: ;
    CPy_DecRef(cpy_r_already_captured);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r24);
    goto CPyL25;
CPyL33: ;
    CPy_DecRef(cpy_r_already_captured);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_expr_2);
    CPy_DecRef(cpy_r_typ);
    goto CPyL25;
CPyL34: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL15;
CPyL35: ;
    CPy_DecRef(cpy_r_already_captured);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_expr_2);
    goto CPyL25;
CPyL36: ;
    CPy_DecRef(cpy_r_already_captured);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_expr_2);
    CPy_DecRef(cpy_r_node);
    goto CPyL25;
CPyL37: ;
    CPy_DecRef(cpy_r_already_captured);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_expr_2);
    CPy_DecRef(cpy_r_r31);
    goto CPyL25;
CPyL38: ;
    CPy_DecRef(cpy_r_already_captured);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_expr_2);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r33);
    goto CPyL25;
CPyL39: ;
    CPy_DecRef(cpy_r_already_captured);
    CPy_DecRef(cpy_r_r18);
    goto CPyL25;
}

PyObject *CPyPy_checkpattern___PatternChecker___update_type_map(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"original_type_map", "extra_type_map", 0};
    static CPyArg_Parser parser = {"OO:update_type_map", kwlist, 0};
    PyObject *obj_original_type_map;
    PyObject *obj_extra_type_map;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_original_type_map, &obj_extra_type_map)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_original_type_map;
    if (likely(PyDict_Check(obj_original_type_map)))
        arg_original_type_map = obj_original_type_map;
    else {
        CPy_TypeError("dict", obj_original_type_map); 
        goto fail;
    }
    PyObject *arg_extra_type_map;
    if (likely(PyDict_Check(obj_extra_type_map)))
        arg_extra_type_map = obj_extra_type_map;
    else {
        CPy_TypeError("dict", obj_extra_type_map); 
        goto fail;
    }
    char retval = CPyDef_checkpattern___PatternChecker___update_type_map(arg_self, arg_original_type_map, arg_extra_type_map);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "update_type_map", 636, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___construct_sequence_child(PyObject *cpy_r_self, PyObject *cpy_r_outer_type, PyObject *cpy_r_inner_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_proper_type;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
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
    PyObject *cpy_r_item;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_types;
    CPyTagged cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_sequence;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
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
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_empty_type;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_partial_type;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_outer_type);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 663, CPyStatic_checkpattern___globals);
        goto CPyL42;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "construct_sequence_child", 663, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL42;
    }
    cpy_r_proper_type = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_proper_type)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL43;
    cpy_r_r6 = PyList_New(0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 665, CPyStatic_checkpattern___globals);
        goto CPyL44;
    }
    if (likely(Py_TYPE(cpy_r_proper_type) == CPyType_types___UnionType))
        cpy_r_r7 = cpy_r_proper_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "construct_sequence_child", 667, CPyStatic_checkpattern___globals, "mypy.types.UnionType", cpy_r_proper_type);
        goto CPyL45;
    }
    cpy_r_r8 = ((mypy___types___UnionTypeObject *)cpy_r_r7)->_items;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_proper_type);
    cpy_r_r9 = 0;
CPyL6: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL46;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r8, cpy_r_r9);
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_types___Type)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "construct_sequence_child", 665, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r14);
        goto CPyL47;
    }
    cpy_r_item = cpy_r_r15;
    cpy_r_r16 = CPyDef_types___get_proper_type(cpy_r_item);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 668, CPyStatic_checkpattern___globals);
        goto CPyL48;
    }
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "construct_sequence_child", 668, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_r16);
        goto CPyL48;
    }
    cpy_r_r18 = CPyDef_checkpattern___PatternChecker___can_match_sequence(cpy_r_self, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 668, CPyStatic_checkpattern___globals);
        goto CPyL48;
    }
    if (!cpy_r_r18) goto CPyL49;
    cpy_r_r19 = CPyDef_checkpattern___PatternChecker___construct_sequence_child(cpy_r_self, cpy_r_item, cpy_r_inner_type);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 666, CPyStatic_checkpattern___globals);
        goto CPyL47;
    }
    cpy_r_r20 = PyList_Append(cpy_r_r6, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 665, CPyStatic_checkpattern___globals);
        goto CPyL47;
    }
CPyL14: ;
    cpy_r_r22 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r22;
    goto CPyL6;
CPyL15: ;
    cpy_r_types = cpy_r_r6;
    cpy_r_r23 = CPY_INT_TAG;
    cpy_r_r24 = CPY_INT_TAG;
    cpy_r_r25 = 2;
    cpy_r_r26 = 2;
    cpy_r_r27 = CPyDef_typeops___make_simplified_union(cpy_r_types, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_types);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 670, CPyStatic_checkpattern___globals);
        goto CPyL42;
    }
    return cpy_r_r27;
CPyL17: ;
    cpy_r_r28 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "construct_sequence_child", "PatternChecker", "chk", 671, CPyStatic_checkpattern___globals);
        goto CPyL42;
    }
    CPy_INCREF(cpy_r_r28);
CPyL18: ;
    cpy_r_r29 = CPyStatics[696]; /* 'typing.Sequence' */
    cpy_r_r30 = PyList_New(1);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 671, CPyStatic_checkpattern___globals);
        goto CPyL50;
    }
    cpy_r_r31 = (CPyPtr)&((PyListObject *)cpy_r_r30)->ob_item;
    cpy_r_r32 = *(CPyPtr *)cpy_r_r31;
    CPy_INCREF(cpy_r_inner_type);
    *(PyObject * *)cpy_r_r32 = cpy_r_inner_type;
    cpy_r_r33 = CPyDef_checker___TypeChecker___named_generic_type(cpy_r_r28, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 671, CPyStatic_checkpattern___globals);
        goto CPyL42;
    }
    cpy_r_sequence = cpy_r_r33;
    cpy_r_r34 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_chk;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "construct_sequence_child", "PatternChecker", "chk", 672, CPyStatic_checkpattern___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r34);
CPyL21: ;
    cpy_r_r35 = CPyStatics[696]; /* 'typing.Sequence' */
    cpy_r_r36 = CPyDef_checker___TypeChecker___named_type(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 672, CPyStatic_checkpattern___globals);
        goto CPyL51;
    }
    cpy_r_r37 = NULL;
    cpy_r_r38 = 2;
    cpy_r_r39 = 2;
    cpy_r_r40 = 2;
    cpy_r_r41 = 2;
    cpy_r_r42 = 2;
    cpy_r_r43 = NULL;
    cpy_r_r44 = CPyDef_subtypes___is_subtype(cpy_r_outer_type, cpy_r_r36, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 672, CPyStatic_checkpattern___globals);
        goto CPyL51;
    }
    if (!cpy_r_r44) goto CPyL41;
    cpy_r_r45 = CPyDef_types___get_proper_type(cpy_r_outer_type);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 673, CPyStatic_checkpattern___globals);
        goto CPyL51;
    }
    if (likely(cpy_r_r45 != Py_None))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "construct_sequence_child", 673, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_r45);
        goto CPyL51;
    }
    cpy_r_proper_type = cpy_r_r46;
    cpy_r_r47 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r48 = (CPyPtr)&((PyObject *)cpy_r_proper_type)->ob_type;
    cpy_r_r49 = *(PyObject * *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 == cpy_r_r47;
    if (!cpy_r_r50) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_proper_type) == CPyType_types___TupleType))
        cpy_r_r51 = cpy_r_proper_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "construct_sequence_child", 675, CPyStatic_checkpattern___globals, "mypy.types.TupleType", cpy_r_proper_type);
        goto CPyL51;
    }
    cpy_r_r52 = CPyDef_typeops___tuple_fallback(cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 675, CPyStatic_checkpattern___globals);
        goto CPyL51;
    }
    cpy_r_proper_type = cpy_r_r52;
CPyL30: ;
    cpy_r_r53 = (PyObject *)CPyType_types___Instance;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_proper_type)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    if (cpy_r_r56) {
        goto CPyL33;
    } else
        goto CPyL52;
CPyL31: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r57 = 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 676, CPyStatic_checkpattern___globals);
        goto CPyL42;
    }
    CPy_Unreachable();
CPyL33: ;
    if (likely(Py_TYPE(cpy_r_proper_type) == CPyType_types___Instance))
        cpy_r_r58 = cpy_r_proper_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "construct_sequence_child", 677, CPyStatic_checkpattern___globals, "mypy.types.Instance", cpy_r_proper_type);
        goto CPyL53;
    }
    cpy_r_r59 = ((mypy___types___InstanceObject *)cpy_r_r58)->_type;
    CPy_INCREF(cpy_r_r59);
    cpy_r_r60 = CPyDef_typevars___fill_typevars(cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 677, CPyStatic_checkpattern___globals);
        goto CPyL53;
    }
    cpy_r_empty_type = cpy_r_r60;
    cpy_r_r61 = CPyDef_expandtype___expand_type_by_instance(cpy_r_empty_type, cpy_r_sequence);
    CPy_DECREF(cpy_r_empty_type);
    CPy_DECREF(cpy_r_sequence);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 678, CPyStatic_checkpattern___globals);
        goto CPyL44;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r61, CPyType_types___ProperType)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "construct_sequence_child", 678, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_r61);
        goto CPyL44;
    }
    cpy_r_partial_type = cpy_r_r62;
    if (likely(Py_TYPE(cpy_r_proper_type) == CPyType_types___Instance))
        cpy_r_r63 = cpy_r_proper_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "construct_sequence_child", 679, CPyStatic_checkpattern___globals, "mypy.types.Instance", cpy_r_proper_type);
        goto CPyL54;
    }
    cpy_r_r64 = CPyDef_expandtype___expand_type_by_instance(cpy_r_partial_type, cpy_r_r63);
    CPy_DECREF(cpy_r_partial_type);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 679, CPyStatic_checkpattern___globals);
        goto CPyL42;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r64, CPyType_types___ProperType)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "construct_sequence_child", 679, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_r64);
        goto CPyL42;
    }
    return cpy_r_r65;
CPyL41: ;
    return cpy_r_sequence;
CPyL42: ;
    cpy_r_r66 = NULL;
    return cpy_r_r66;
CPyL43: ;
    CPy_DECREF(cpy_r_proper_type);
    goto CPyL17;
CPyL44: ;
    CPy_DecRef(cpy_r_proper_type);
    goto CPyL42;
CPyL45: ;
    CPy_DecRef(cpy_r_proper_type);
    CPy_DecRef(cpy_r_r6);
    goto CPyL42;
CPyL46: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL15;
CPyL47: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    goto CPyL42;
CPyL48: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_item);
    goto CPyL42;
CPyL49: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL14;
CPyL50: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL42;
CPyL51: ;
    CPy_DecRef(cpy_r_sequence);
    goto CPyL42;
CPyL52: ;
    CPy_DECREF(cpy_r_proper_type);
    CPy_DECREF(cpy_r_sequence);
    goto CPyL31;
CPyL53: ;
    CPy_DecRef(cpy_r_proper_type);
    CPy_DecRef(cpy_r_sequence);
    goto CPyL42;
CPyL54: ;
    CPy_DecRef(cpy_r_partial_type);
    goto CPyL42;
}

PyObject *CPyPy_checkpattern___PatternChecker___construct_sequence_child(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"outer_type", "inner_type", 0};
    static CPyArg_Parser parser = {"OO:construct_sequence_child", kwlist, 0};
    PyObject *obj_outer_type;
    PyObject *obj_inner_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_outer_type, &obj_inner_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_outer_type;
    if (likely(PyObject_TypeCheck(obj_outer_type, CPyType_types___Type)))
        arg_outer_type = obj_outer_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_outer_type); 
        goto fail;
    }
    PyObject *arg_inner_type;
    if (likely(PyObject_TypeCheck(obj_inner_type, CPyType_types___Type)))
        arg_inner_type = obj_inner_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_inner_type); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___construct_sequence_child(arg_self, arg_outer_type, arg_inner_type);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "construct_sequence_child", 651, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___PatternChecker___early_non_match(PyObject *cpy_r_self) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = 2;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPyDef_types___UninhabitedType(cpy_r_r0, cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "early_non_match", 684, CPyStatic_checkpattern___globals);
        goto CPyL9;
    }
    cpy_r_r4 = ((mypy___checkpattern___PatternCheckerObject *)cpy_r_self)->_type_context;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/checkpattern.py", "early_non_match", "PatternChecker", "type_context", 684, CPyStatic_checkpattern___globals);
        goto CPyL10;
    }
CPyL2: ;
    cpy_r_r5 = CPyList_GetItemShort(cpy_r_r4, -2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "early_non_match", 684, CPyStatic_checkpattern___globals);
        goto CPyL10;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r5, CPyType_types___Type)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "early_non_match", 684, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r5);
        goto CPyL10;
    }
    cpy_r_r7 = PyDict_New();
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "early_non_match", 684, CPyStatic_checkpattern___globals);
        goto CPyL11;
    }
    cpy_r_r8 = CPyStatic_checkpattern___globals;
    cpy_r_r9 = CPyStatics[1351]; /* 'PatternType' */
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "early_non_match", 684, CPyStatic_checkpattern___globals);
        goto CPyL12;
    }
    PyObject *cpy_r_r11[3] = {cpy_r_r3, cpy_r_r6, cpy_r_r7};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 3, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "early_non_match", 684, CPyStatic_checkpattern___globals);
        goto CPyL12;
    }
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    if (likely(PyTuple_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "early_non_match", 684, CPyStatic_checkpattern___globals, "tuple", cpy_r_r13);
        goto CPyL9;
    }
    return cpy_r_r14;
CPyL9: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL10: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL9;
}

PyObject *CPyPy_checkpattern___PatternChecker___early_non_match(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":early_non_match", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkpattern___PatternChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkpattern.PatternChecker", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___PatternChecker___early_non_match(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "early_non_match", 683, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___get_match_arg_names(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_args;
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
    PyObject *cpy_r_values;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_match_arg_names", 688, CPyStatic_checkpattern___globals);
        goto CPyL15;
    }
    cpy_r_args = cpy_r_r0;
    cpy_r_r1 = ((mypy___types___TupleTypeObject *)cpy_r_typ)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL16;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_types___Type)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_match_arg_names", 689, CPyStatic_checkpattern___globals, "mypy.types.Type", cpy_r_r7);
        goto CPyL17;
    }
    cpy_r_item = cpy_r_r8;
    cpy_r_r9 = CPyDef_typeops___try_getting_str_literals_from_type(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_match_arg_names", 690, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    cpy_r_values = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_values == cpy_r_r10;
    if (cpy_r_r11) goto CPyL18;
    if (likely(cpy_r_values != Py_None))
        cpy_r_r12 = cpy_r_values;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_match_arg_names", 691, CPyStatic_checkpattern___globals, "list", cpy_r_values);
        goto CPyL19;
    }
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = cpy_r_r15 != 2;
    if (cpy_r_r16) {
        goto CPyL18;
    } else
        goto CPyL9;
CPyL8: ;
    cpy_r_r17 = Py_None;
    cpy_r_r18 = PyList_Append(cpy_r_args, cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_match_arg_names", 692, CPyStatic_checkpattern___globals);
        goto CPyL17;
    } else
        goto CPyL13;
CPyL9: ;
    if (likely(cpy_r_values != Py_None))
        cpy_r_r20 = cpy_r_values;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_match_arg_names", 694, CPyStatic_checkpattern___globals, "list", cpy_r_values);
        goto CPyL19;
    }
    cpy_r_r21 = CPyList_GetItemShort(cpy_r_r20, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_match_arg_names", 694, CPyStatic_checkpattern___globals);
        goto CPyL19;
    }
    if (likely(PyUnicode_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_match_arg_names", 694, CPyStatic_checkpattern___globals, "str", cpy_r_r21);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_values);
    cpy_r_r23 = PyList_Append(cpy_r_args, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_match_arg_names", 694, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
CPyL13: ;
    cpy_r_r25 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r25;
    goto CPyL2;
CPyL14: ;
    return cpy_r_args;
CPyL15: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL16: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL14;
CPyL17: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r1);
    goto CPyL15;
CPyL18: ;
    CPy_DECREF(cpy_r_values);
    goto CPyL8;
CPyL19: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_values);
    goto CPyL15;
}

PyObject *CPyPy_checkpattern___get_match_arg_names(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:get_match_arg_names", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___TupleType))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.TupleType", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkpattern___get_match_arg_names(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "get_match_arg_names", 687, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___get_var(PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_var", 703, CPyStatic_checkpattern___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL3: ;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___NameExpr))
        cpy_r_r5 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_var", 704, CPyStatic_checkpattern___globals, "mypy.nodes.NameExpr", cpy_r_expr);
        goto CPyL9;
    }
    cpy_r_r6 = ((mypy___nodes___NameExprObject *)cpy_r_r5)->_node;
    CPy_INCREF(cpy_r_r6);
    cpy_r_node = cpy_r_r6;
    cpy_r_r7 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (cpy_r_r10) {
        goto CPyL7;
    } else
        goto CPyL10;
CPyL5: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_var", 705, CPyStatic_checkpattern___globals);
        goto CPyL9;
    }
    CPy_Unreachable();
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r12 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_var", 706, CPyStatic_checkpattern___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL9;
    }
    return cpy_r_r12;
CPyL9: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL10: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL5;
}

PyObject *CPyPy_checkpattern___get_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:get_var", kwlist, 0};
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
    PyObject *retval = CPyDef_checkpattern___get_var(arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "get_var", 698, CPyStatic_checkpattern___globals);
    return NULL;
}

PyObject *CPyDef_checkpattern___get_type_range(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
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
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_type_range", 710, CPyStatic_checkpattern___globals);
        goto CPyL17;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_type_range", 710, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL17;
    }
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___Instance;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL12;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r6 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_type_range", 713, CPyStatic_checkpattern___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL18;
    }
    cpy_r_r7 = ((mypy___types___InstanceObject *)cpy_r_r6)->_last_known_value;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_r7 != cpy_r_r8;
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r9) goto CPyL12;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r10 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_type_range", 714, CPyStatic_checkpattern___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL18;
    }
    cpy_r_r11 = ((mypy___types___InstanceObject *)cpy_r_r10)->_last_known_value;
    if (likely(cpy_r_r11 != Py_None))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_type_range", 714, CPyStatic_checkpattern___globals, "mypy.types.LiteralType", cpy_r_r11);
        goto CPyL18;
    }
    cpy_r_r13 = ((mypy___types___LiteralTypeObject *)cpy_r_r12)->_value;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = (PyObject *)&PyBool_Type;
    cpy_r_r15 = PyObject_IsInstance(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_type_range", 714, CPyStatic_checkpattern___globals);
        goto CPyL18;
    }
    cpy_r_r17 = cpy_r_r15;
    if (!cpy_r_r17) goto CPyL12;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r18 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_type_range", 716, CPyStatic_checkpattern___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL18;
    }
    cpy_r_r19 = ((mypy___types___InstanceObject *)cpy_r_r18)->_last_known_value;
    CPy_INCREF(cpy_r_r19);
    if (likely(cpy_r_r19 != Py_None))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_type_range", 716, CPyStatic_checkpattern___globals, "mypy.types.LiteralType", cpy_r_r19);
        goto CPyL18;
    }
    CPy_DECREF(cpy_r_typ);
    cpy_r_typ = cpy_r_r20;
CPyL12: ;
    if (likely(PyObject_TypeCheck(cpy_r_typ, CPyType_types___ProperType)))
        cpy_r_r21 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_type_range", 717, CPyStatic_checkpattern___globals, "mypy.types.ProperType", cpy_r_typ);
        goto CPyL17;
    }
    cpy_r_r22 = CPyModule_mypy___checker;
    cpy_r_r23 = CPyStatics[871]; /* 'TypeRange' */
    cpy_r_r24 = CPyObject_GetAttr(cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_type_range", 717, CPyStatic_checkpattern___globals);
        goto CPyL19;
    }
    cpy_r_r25 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r26[2] = {cpy_r_r21, cpy_r_r25};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = CPyStatics[9169]; /* ('is_upper_bound',) */
    cpy_r_r29 = _PyObject_Vectorcall(cpy_r_r24, cpy_r_r27, 1, cpy_r_r28);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "get_type_range", 717, CPyStatic_checkpattern___globals);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_r21);
    if (likely(PyTuple_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "get_type_range", 717, CPyStatic_checkpattern___globals, "tuple", cpy_r_r29);
        goto CPyL17;
    }
    return cpy_r_r30;
CPyL17: ;
    cpy_r_r31 = NULL;
    return cpy_r_r31;
CPyL18: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL17;
}

PyObject *CPyPy_checkpattern___get_type_range(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:get_type_range", kwlist, 0};
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
    PyObject *retval = CPyDef_checkpattern___get_type_range(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "get_type_range", 709, CPyStatic_checkpattern___globals);
    return NULL;
}

char CPyDef_checkpattern___is_uninhabited(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "is_uninhabited", 721, CPyStatic_checkpattern___globals);
        goto CPyL2;
    }
    cpy_r_r1 = (PyObject *)CPyType_types___UninhabitedType;
    cpy_r_r2 = (CPyPtr)&((PyObject *)cpy_r_r0)->ob_type;
    cpy_r_r3 = *(PyObject * *)cpy_r_r2;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 == cpy_r_r1;
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_checkpattern___is_uninhabited(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:is_uninhabited", kwlist, 0};
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
    char retval = CPyDef_checkpattern___is_uninhabited(arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkpattern.py", "is_uninhabited", 720, CPyStatic_checkpattern___globals);
    return NULL;
}

char CPyDef_checkpattern_____top_level__(void) {
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
    PyObject **cpy_r_r17;
    void *cpy_r_r19;
    void *cpy_r_r21;
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
    int32_t cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyPtr cpy_r_r115;
    CPyPtr cpy_r_r116;
    CPyPtr cpy_r_r117;
    CPyPtr cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
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
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject **cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    int32_t cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    int32_t cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    int32_t cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    int32_t cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    int32_t cpy_r_r178;
    char cpy_r_r179;
    PyObject **cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    int32_t cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    char cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    int32_t cpy_r_r210;
    char cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    int32_t cpy_r_r214;
    char cpy_r_r215;
    char cpy_r_r216;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", -1, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_checkpattern___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 3, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9083]; /* ('defaultdict',) */
    cpy_r_r10 = CPyStatics[76]; /* 'collections' */
    cpy_r_r11 = CPyStatic_checkpattern___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 5, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_collections = cpy_r_r12;
    CPy_INCREF(CPyModule_collections);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9254]; /* ('Final', 'NamedTuple') */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_checkpattern___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 6, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = (PyObject **)&CPyModule_mypy___checker;
    PyObject **cpy_r_r18[1] = {cpy_r_r17};
    cpy_r_r19 = (void *)&cpy_r_r18;
    int64_t cpy_r_r20[1] = {8};
    cpy_r_r21 = (void *)&cpy_r_r20;
    cpy_r_r22 = CPyStatics[9255]; /* (('mypy.checker', 'mypy', 'mypy'),) */
    cpy_r_r23 = CPyStatic_checkpattern___globals;
    cpy_r_r24 = CPyStatics[1362]; /* 'mypy/checkpattern.py' */
    cpy_r_r25 = CPyStatics[17]; /* '<module>' */
    cpy_r_r26 = CPyImport_ImportMany(cpy_r_r22, cpy_r_r19, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r21);
    if (!cpy_r_r26) goto CPyL64;
    cpy_r_r27 = CPyStatics[9256]; /* ('message_registry',) */
    cpy_r_r28 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r29 = CPyStatic_checkpattern___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r27, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 9, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy = cpy_r_r30;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[9257]; /* ('analyze_member_access',) */
    cpy_r_r32 = CPyStatics[913]; /* 'mypy.checkmember' */
    cpy_r_r33 = CPyStatic_checkpattern___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 10, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy___checkmember = cpy_r_r34;
    CPy_INCREF(CPyModule_mypy___checkmember);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[9258]; /* ('expand_type_by_instance',) */
    cpy_r_r36 = CPyStatics[31]; /* 'mypy.expandtype' */
    cpy_r_r37 = CPyStatic_checkpattern___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 11, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy___expandtype = cpy_r_r38;
    CPy_INCREF(CPyModule_mypy___expandtype);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[9186]; /* ('join_types',) */
    cpy_r_r40 = CPyStatics[92]; /* 'mypy.join' */
    cpy_r_r41 = CPyStatic_checkpattern___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 12, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy___join = cpy_r_r42;
    CPy_INCREF(CPyModule_mypy___join);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[9259]; /* ('literal_hash',) */
    cpy_r_r44 = CPyStatics[97]; /* 'mypy.literals' */
    cpy_r_r45 = CPyStatic_checkpattern___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 13, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy___literals = cpy_r_r46;
    CPy_INCREF(CPyModule_mypy___literals);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[9081]; /* ('map_instance_to_supertype',) */
    cpy_r_r48 = CPyStatics[61]; /* 'mypy.maptype' */
    cpy_r_r49 = CPyStatic_checkpattern___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 14, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy___maptype = cpy_r_r50;
    CPy_INCREF(CPyModule_mypy___maptype);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[9260]; /* ('narrow_declared_type',) */
    cpy_r_r52 = CPyStatics[932]; /* 'mypy.meet' */
    cpy_r_r53 = CPyStatic_checkpattern___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 15, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy___meet = cpy_r_r54;
    CPy_INCREF(CPyModule_mypy___meet);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = CPyStatics[9135]; /* ('MessageBuilder',) */
    cpy_r_r56 = CPyStatics[530]; /* 'mypy.messages' */
    cpy_r_r57 = CPyStatic_checkpattern___globals;
    cpy_r_r58 = CPyImport_ImportFromMany(cpy_r_r56, cpy_r_r55, cpy_r_r55, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 16, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy___messages = cpy_r_r58;
    CPy_INCREF(CPyModule_mypy___messages);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r59 = CPyStatics[9261]; /* ('ARG_POS', 'Context', 'Expression', 'NameExpr',
                                     'TypeAlias', 'TypeInfo', 'Var') */
    cpy_r_r60 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r61 = CPyStatic_checkpattern___globals;
    cpy_r_r62 = CPyImport_ImportFromMany(cpy_r_r60, cpy_r_r59, cpy_r_r59, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 17, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy___nodes = cpy_r_r62;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r63 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r64 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r65 = CPyStatic_checkpattern___globals;
    cpy_r_r66 = CPyImport_ImportFromMany(cpy_r_r64, cpy_r_r63, cpy_r_r63, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 18, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy___options = cpy_r_r66;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r67 = CPyStatics[9262]; /* ('AsPattern', 'ClassPattern', 'MappingPattern',
                                     'OrPattern', 'Pattern', 'SequencePattern',
                                     'SingletonPattern', 'StarredPattern', 'ValuePattern') */
    cpy_r_r68 = CPyStatics[1004]; /* 'mypy.patterns' */
    cpy_r_r69 = CPyStatic_checkpattern___globals;
    cpy_r_r70 = CPyImport_ImportFromMany(cpy_r_r68, cpy_r_r67, cpy_r_r67, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 19, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy___patterns = cpy_r_r70;
    CPy_INCREF(CPyModule_mypy___patterns);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r71 = CPyStatics[9263]; /* ('Plugin',) */
    cpy_r_r72 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r73 = CPyStatic_checkpattern___globals;
    cpy_r_r74 = CPyImport_ImportFromMany(cpy_r_r72, cpy_r_r71, cpy_r_r71, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 30, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy___plugin = cpy_r_r74;
    CPy_INCREF(CPyModule_mypy___plugin);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r75 = CPyStatics[9078]; /* ('is_subtype',) */
    cpy_r_r76 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r77 = CPyStatic_checkpattern___globals;
    cpy_r_r78 = CPyImport_ImportFromMany(cpy_r_r76, cpy_r_r75, cpy_r_r75, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 31, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy___subtypes = cpy_r_r78;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r79 = CPyStatics[9264]; /* ('coerce_to_literal', 'make_simplified_union',
                                     'try_getting_str_literals_from_type', 'tuple_fallback') */
    cpy_r_r80 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r81 = CPyStatic_checkpattern___globals;
    cpy_r_r82 = CPyImport_ImportFromMany(cpy_r_r80, cpy_r_r79, cpy_r_r79, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 32, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy___typeops = cpy_r_r82;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r83 = CPyStatics[9265]; /* ('AnyType', 'Instance', 'LiteralType', 'NoneType',
                                     'ProperType', 'TupleType', 'Type', 'TypedDictType',
                                     'TypeOfAny', 'UninhabitedType', 'UnionType',
                                     'get_proper_type') */
    cpy_r_r84 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r85 = CPyStatic_checkpattern___globals;
    cpy_r_r86 = CPyImport_ImportFromMany(cpy_r_r84, cpy_r_r83, cpy_r_r83, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 38, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy___types = cpy_r_r86;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r87 = CPyStatics[9242]; /* ('fill_typevars',) */
    cpy_r_r88 = CPyStatics[110]; /* 'mypy.typevars' */
    cpy_r_r89 = CPyStatic_checkpattern___globals;
    cpy_r_r90 = CPyImport_ImportFromMany(cpy_r_r88, cpy_r_r87, cpy_r_r87, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 52, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy___typevars = cpy_r_r90;
    CPy_INCREF(CPyModule_mypy___typevars);
    CPy_DECREF(cpy_r_r90);
    cpy_r_r91 = CPyStatics[9266]; /* ('PatternVisitor',) */
    cpy_r_r92 = CPyStatics[1087]; /* 'mypy.visitor' */
    cpy_r_r93 = CPyStatic_checkpattern___globals;
    cpy_r_r94 = CPyImport_ImportFromMany(cpy_r_r92, cpy_r_r91, cpy_r_r91, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 53, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_mypy___visitor = cpy_r_r94;
    CPy_INCREF(CPyModule_mypy___visitor);
    CPy_DECREF(cpy_r_r94);
    cpy_r_r95 = CPyStatics[831]; /* 'builtins.bool' */
    cpy_r_r96 = CPyStatics[1222]; /* 'builtins.bytearray' */
    cpy_r_r97 = CPyStatics[1179]; /* 'builtins.bytes' */
    cpy_r_r98 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r99 = CPyStatics[1180]; /* 'builtins.float' */
    cpy_r_r100 = CPyStatics[889]; /* 'builtins.frozenset' */
    cpy_r_r101 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r102 = CPyStatics[796]; /* 'builtins.list' */
    cpy_r_r103 = CPyStatics[797]; /* 'builtins.set' */
    cpy_r_r104 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r105 = CPyStatics[24]; /* 'builtins.tuple' */
    CPy_INCREF(cpy_r_r95);
    CPy_INCREF(cpy_r_r96);
    CPy_INCREF(cpy_r_r97);
    CPy_INCREF(cpy_r_r98);
    CPy_INCREF(cpy_r_r99);
    CPy_INCREF(cpy_r_r100);
    CPy_INCREF(cpy_r_r101);
    CPy_INCREF(cpy_r_r102);
    CPy_INCREF(cpy_r_r103);
    CPy_INCREF(cpy_r_r104);
    CPy_INCREF(cpy_r_r105);
    cpy_r_r106 = CPyList_Build(11, cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98, cpy_r_r99, cpy_r_r100, cpy_r_r101, cpy_r_r102, cpy_r_r103, cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 55, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyStatic_checkpattern___self_match_type_names = cpy_r_r106;
    CPy_INCREF(CPyStatic_checkpattern___self_match_type_names);
    cpy_r_r107 = CPyStatic_checkpattern___globals;
    cpy_r_r108 = CPyStatics[1371]; /* 'self_match_type_names' */
    cpy_r_r109 = CPyDict_SetItem(cpy_r_r107, cpy_r_r108, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r110 = cpy_r_r109 >= 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 55, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    cpy_r_r111 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r112 = CPyStatics[1179]; /* 'builtins.bytes' */
    cpy_r_r113 = CPyStatics[1222]; /* 'builtins.bytearray' */
    cpy_r_r114 = PyList_New(3);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 69, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    cpy_r_r115 = (CPyPtr)&((PyListObject *)cpy_r_r114)->ob_item;
    cpy_r_r116 = *(CPyPtr *)cpy_r_r115;
    CPy_INCREF(cpy_r_r111);
    *(PyObject * *)cpy_r_r116 = cpy_r_r111;
    cpy_r_r117 = cpy_r_r116 + 8;
    CPy_INCREF(cpy_r_r112);
    *(PyObject * *)cpy_r_r117 = cpy_r_r112;
    cpy_r_r118 = cpy_r_r116 + 16;
    CPy_INCREF(cpy_r_r113);
    *(PyObject * *)cpy_r_r118 = cpy_r_r113;
    CPyStatic_checkpattern___non_sequence_match_type_names = cpy_r_r114;
    CPy_INCREF(CPyStatic_checkpattern___non_sequence_match_type_names);
    cpy_r_r119 = CPyStatic_checkpattern___globals;
    cpy_r_r120 = CPyStatics[1372]; /* 'non_sequence_match_type_names' */
    cpy_r_r121 = CPyDict_SetItem(cpy_r_r119, cpy_r_r120, cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 69, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    cpy_r_r123 = CPyModule_typing;
    cpy_r_r124 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r125 = cpy_r_r123 != cpy_r_r124;
    if (cpy_r_r125) goto CPyL31;
    cpy_r_r126 = CPyStatics[21]; /* 'typing' */
    cpy_r_r127 = PyImport_Import(cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    CPyModule_typing = cpy_r_r127;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r127);
CPyL31: ;
    cpy_r_r128 = PyImport_GetModuleDict();
    cpy_r_r129 = CPyStatics[21]; /* 'typing' */
    cpy_r_r130 = CPyDict_GetItem(cpy_r_r128, cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    cpy_r_r131 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r132 = CPyObject_GetAttr(cpy_r_r130, cpy_r_r131);
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    cpy_r_r133 = PyTuple_Pack(1, cpy_r_r132);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    cpy_r_r134 = CPyModule_typing;
    cpy_r_r135 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r136 = cpy_r_r134 != cpy_r_r135;
    if (cpy_r_r136) goto CPyL37;
    cpy_r_r137 = CPyStatics[21]; /* 'typing' */
    cpy_r_r138 = PyImport_Import(cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals);
        goto CPyL65;
    }
    CPyModule_typing = cpy_r_r138;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r138);
CPyL37: ;
    cpy_r_r139 = PyImport_GetModuleDict();
    cpy_r_r140 = CPyStatics[21]; /* 'typing' */
    cpy_r_r141 = CPyDict_GetItem(cpy_r_r139, cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals);
        goto CPyL65;
    }
    cpy_r_r142 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r143 = CPyObject_GetAttr(cpy_r_r141, cpy_r_r142);
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals);
        goto CPyL65;
    }
    cpy_r_r144 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r145 = PyObject_HasAttr(cpy_r_r143, cpy_r_r144);
    if (!cpy_r_r145) goto CPyL44;
    cpy_r_r146 = CPyStatics[1351]; /* 'PatternType' */
    cpy_r_r147 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r148 = CPyObject_GetAttr(cpy_r_r143, cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals);
        goto CPyL66;
    }
    PyObject *cpy_r_r149[2] = {cpy_r_r146, cpy_r_r133};
    cpy_r_r150 = (PyObject **)&cpy_r_r149;
    cpy_r_r151 = _PyObject_Vectorcall(cpy_r_r148, cpy_r_r150, 2, 0);
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals);
        goto CPyL66;
    }
    if (likely(PyDict_Check(cpy_r_r151)))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals, "dict", cpy_r_r151);
        goto CPyL66;
    }
    cpy_r_r153 = cpy_r_r152;
    goto CPyL46;
CPyL44: ;
    cpy_r_r154 = PyDict_New();
    if (unlikely(cpy_r_r154 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals);
        goto CPyL66;
    }
    cpy_r_r153 = cpy_r_r154;
CPyL46: ;
    cpy_r_r155 = PyDict_New();
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals);
        goto CPyL67;
    }
    cpy_r_r156 = (PyObject *)CPyType_types___Type;
    cpy_r_r157 = CPyStatics[802]; /* 'type' */
    cpy_r_r158 = CPyDict_SetItem(cpy_r_r155, cpy_r_r157, cpy_r_r156);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 76, CPyStatic_checkpattern___globals);
        goto CPyL68;
    }
    cpy_r_r160 = (PyObject *)CPyType_types___Type;
    cpy_r_r161 = CPyStatics[1373]; /* 'rest_type' */
    cpy_r_r162 = CPyDict_SetItem(cpy_r_r155, cpy_r_r161, cpy_r_r160);
    cpy_r_r163 = cpy_r_r162 >= 0;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 77, CPyStatic_checkpattern___globals);
        goto CPyL68;
    }
    cpy_r_r164 = (PyObject *)&PyDict_Type;
    cpy_r_r165 = CPyStatics[1374]; /* 'captures' */
    cpy_r_r166 = CPyDict_SetItem(cpy_r_r155, cpy_r_r165, cpy_r_r164);
    cpy_r_r167 = cpy_r_r166 >= 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 78, CPyStatic_checkpattern___globals);
        goto CPyL68;
    }
    cpy_r_r168 = CPyStatics[1351]; /* 'PatternType' */
    cpy_r_r169 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r170 = CPyDict_SetItem(cpy_r_r153, cpy_r_r169, cpy_r_r155);
    CPy_DECREF(cpy_r_r155);
    cpy_r_r171 = cpy_r_r170 >= 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals);
        goto CPyL67;
    }
    cpy_r_r172 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r173 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r174 = CPyDict_SetItem(cpy_r_r153, cpy_r_r173, cpy_r_r172);
    cpy_r_r175 = cpy_r_r174 >= 0;
    if (unlikely(!cpy_r_r175)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals);
        goto CPyL67;
    }
    cpy_r_r176 = CPyStatics[915]; /* 'mypy.checkpattern' */
    cpy_r_r177 = CPyStatics[619]; /* '__module__' */
    cpy_r_r178 = CPyDict_SetItem(cpy_r_r153, cpy_r_r177, cpy_r_r176);
    cpy_r_r179 = cpy_r_r178 >= 0;
    if (unlikely(!cpy_r_r179)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals);
        goto CPyL67;
    }
    PyObject *cpy_r_r180[3] = {cpy_r_r168, cpy_r_r133, cpy_r_r153};
    cpy_r_r181 = (PyObject **)&cpy_r_r180;
    cpy_r_r182 = _PyObject_Vectorcall(cpy_r_r143, cpy_r_r181, 3, 0);
    CPy_DECREF(cpy_r_r143);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_r133);
    CPy_DECREF(cpy_r_r153);
    CPyType_checkpattern___PatternType = (PyTypeObject *)cpy_r_r182;
    CPy_INCREF(CPyType_checkpattern___PatternType);
    cpy_r_r183 = CPyStatic_checkpattern___globals;
    cpy_r_r184 = CPyStatics[1351]; /* 'PatternType' */
    cpy_r_r185 = CPyDict_SetItem(cpy_r_r183, cpy_r_r184, cpy_r_r182);
    CPy_DECREF(cpy_r_r182);
    cpy_r_r186 = cpy_r_r185 >= 0;
    if (unlikely(!cpy_r_r186)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 75, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    cpy_r_r187 = (PyObject *)CPyType_checkpattern___PatternType;
    cpy_r_r188 = (PyObject *)CPyType_mypy___visitor___PatternVisitor;
    cpy_r_r189 = CPyStatic_checkpattern___globals;
    cpy_r_r190 = CPyStatics[1351]; /* 'PatternType' */
    cpy_r_r191 = CPyDict_GetItem(cpy_r_r189, cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 81, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    cpy_r_r192 = PyObject_GetItem(cpy_r_r188, cpy_r_r191);
    CPy_DECREF(cpy_r_r191);
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 81, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    cpy_r_r193 = PyTuple_Pack(1, cpy_r_r192);
    CPy_DECREF(cpy_r_r192);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 81, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    cpy_r_r194 = CPyStatics[915]; /* 'mypy.checkpattern' */
    cpy_r_r195 = (PyObject *)CPyType_checkpattern___PatternChecker_template;
    cpy_r_r196 = CPyType_FromTemplate(cpy_r_r195, cpy_r_r193, cpy_r_r194);
    CPy_DECREF(cpy_r_r193);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 81, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    cpy_r_r197 = CPyDef_checkpattern___PatternChecker_trait_vtable_setup();
    if (unlikely(cpy_r_r197 == 2)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", -1, CPyStatic_checkpattern___globals);
        goto CPyL70;
    }
    cpy_r_r198 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r199 = CPyStatics[1295]; /* 'chk' */
    cpy_r_r200 = CPyStatics[1098]; /* 'msg' */
    cpy_r_r201 = CPyStatics[170]; /* 'plugin' */
    cpy_r_r202 = CPyStatics[1375]; /* 'subject' */
    cpy_r_r203 = CPyStatics[1376]; /* 'subject_type' */
    cpy_r_r204 = CPyStatics[1296]; /* 'type_context' */
    cpy_r_r205 = CPyStatics[1377]; /* 'self_match_types' */
    cpy_r_r206 = CPyStatics[1378]; /* 'non_sequence_match_types' */
    cpy_r_r207 = CPyStatics[159]; /* 'options' */
    cpy_r_r208 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r209 = PyTuple_Pack(10, cpy_r_r199, cpy_r_r200, cpy_r_r201, cpy_r_r202, cpy_r_r203, cpy_r_r204, cpy_r_r205, cpy_r_r206, cpy_r_r207, cpy_r_r208);
    if (unlikely(cpy_r_r209 == NULL)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 81, CPyStatic_checkpattern___globals);
        goto CPyL70;
    }
    cpy_r_r210 = PyObject_SetAttr(cpy_r_r196, cpy_r_r198, cpy_r_r209);
    CPy_DECREF(cpy_r_r209);
    cpy_r_r211 = cpy_r_r210 >= 0;
    if (unlikely(!cpy_r_r211)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 81, CPyStatic_checkpattern___globals);
        goto CPyL70;
    }
    CPyType_checkpattern___PatternChecker = (PyTypeObject *)cpy_r_r196;
    CPy_INCREF(CPyType_checkpattern___PatternChecker);
    cpy_r_r212 = CPyStatic_checkpattern___globals;
    cpy_r_r213 = CPyStatics[914]; /* 'PatternChecker' */
    cpy_r_r214 = CPyDict_SetItem(cpy_r_r212, cpy_r_r213, cpy_r_r196);
    CPy_DECREF(cpy_r_r196);
    cpy_r_r215 = cpy_r_r214 >= 0;
    if (unlikely(!cpy_r_r215)) {
        CPy_AddTraceback("mypy/checkpattern.py", "<module>", 81, CPyStatic_checkpattern___globals);
        goto CPyL64;
    }
    return 1;
CPyL64: ;
    cpy_r_r216 = 2;
    return cpy_r_r216;
CPyL65: ;
    CPy_DecRef(cpy_r_r133);
    goto CPyL64;
CPyL66: ;
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r143);
    goto CPyL64;
CPyL67: ;
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r143);
    CPy_DecRef(cpy_r_r153);
    goto CPyL64;
CPyL68: ;
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r143);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r155);
    goto CPyL64;
CPyL69: ;
    CPy_DecRef(cpy_r_r133);
    CPy_DecRef(cpy_r_r153);
    goto CPyL64;
CPyL70: ;
    CPy_DecRef(cpy_r_r196);
    goto CPyL64;
}
