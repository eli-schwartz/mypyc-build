#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *CPyDunder___get__message_registry___format_ErrorMessage_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_message_registry___format_ErrorMessage_obj_____get__(self, instance, owner);
}
static PyObject *message_registry___format_ErrorMessage_obj_setup(PyTypeObject *type);
PyObject *CPyDef_message_registry___format_ErrorMessage_obj(void);

static PyObject *
message_registry___format_ErrorMessage_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_message_registry___format_ErrorMessage_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return message_registry___format_ErrorMessage_obj_setup(type);
}

static int
message_registry___format_ErrorMessage_obj_traverse(mypy___message_registry___format_ErrorMessage_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
message_registry___format_ErrorMessage_obj_clear(mypy___message_registry___format_ErrorMessage_objObject *self)
{
    return 0;
}

static void
message_registry___format_ErrorMessage_obj_dealloc(mypy___message_registry___format_ErrorMessage_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, message_registry___format_ErrorMessage_obj_dealloc)
    message_registry___format_ErrorMessage_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem message_registry___format_ErrorMessage_obj_vtable[2];
static bool
CPyDef_message_registry___format_ErrorMessage_obj_trait_vtable_setup(void)
{
    CPyVTableItem message_registry___format_ErrorMessage_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_message_registry___format_ErrorMessage_obj_____call__,
        (CPyVTableItem)CPyDef_message_registry___format_ErrorMessage_obj_____get__,
    };
    memcpy(message_registry___format_ErrorMessage_obj_vtable, message_registry___format_ErrorMessage_obj_vtable_scratch, sizeof(message_registry___format_ErrorMessage_obj_vtable));
    return 1;
}

static PyMethodDef message_registry___format_ErrorMessage_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_message_registry___format_ErrorMessage_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_message_registry___format_ErrorMessage_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_message_registry___format_ErrorMessage_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "format_ErrorMessage_obj",
    .tp_new = message_registry___format_ErrorMessage_obj_new,
    .tp_dealloc = (destructor)message_registry___format_ErrorMessage_obj_dealloc,
    .tp_traverse = (traverseproc)message_registry___format_ErrorMessage_obj_traverse,
    .tp_clear = (inquiry)message_registry___format_ErrorMessage_obj_clear,
    .tp_methods = message_registry___format_ErrorMessage_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__message_registry___format_ErrorMessage_obj,
    .tp_basicsize = sizeof(mypy___message_registry___format_ErrorMessage_objObject),
    .tp_vectorcall_offset = offsetof(mypy___message_registry___format_ErrorMessage_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_message_registry___format_ErrorMessage_obj_template = &CPyType_message_registry___format_ErrorMessage_obj_template_;

static PyObject *
message_registry___format_ErrorMessage_obj_setup(PyTypeObject *type)
{
    mypy___message_registry___format_ErrorMessage_objObject *self;
    self = (mypy___message_registry___format_ErrorMessage_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = message_registry___format_ErrorMessage_obj_vtable;
    self->vectorcall = CPyPy_message_registry___format_ErrorMessage_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_message_registry___format_ErrorMessage_obj(void)
{
    PyObject *self = message_registry___format_ErrorMessage_obj_setup(CPyType_message_registry___format_ErrorMessage_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__message_registry___with_additional_msg_ErrorMessage_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_message_registry___with_additional_msg_ErrorMessage_obj_____get__(self, instance, owner);
}
static PyObject *message_registry___with_additional_msg_ErrorMessage_obj_setup(PyTypeObject *type);
PyObject *CPyDef_message_registry___with_additional_msg_ErrorMessage_obj(void);

static PyObject *
message_registry___with_additional_msg_ErrorMessage_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_message_registry___with_additional_msg_ErrorMessage_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return message_registry___with_additional_msg_ErrorMessage_obj_setup(type);
}

static int
message_registry___with_additional_msg_ErrorMessage_obj_traverse(mypy___message_registry___with_additional_msg_ErrorMessage_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
message_registry___with_additional_msg_ErrorMessage_obj_clear(mypy___message_registry___with_additional_msg_ErrorMessage_objObject *self)
{
    return 0;
}

static void
message_registry___with_additional_msg_ErrorMessage_obj_dealloc(mypy___message_registry___with_additional_msg_ErrorMessage_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, message_registry___with_additional_msg_ErrorMessage_obj_dealloc)
    message_registry___with_additional_msg_ErrorMessage_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem message_registry___with_additional_msg_ErrorMessage_obj_vtable[2];
static bool
CPyDef_message_registry___with_additional_msg_ErrorMessage_obj_trait_vtable_setup(void)
{
    CPyVTableItem message_registry___with_additional_msg_ErrorMessage_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_message_registry___with_additional_msg_ErrorMessage_obj_____call__,
        (CPyVTableItem)CPyDef_message_registry___with_additional_msg_ErrorMessage_obj_____get__,
    };
    memcpy(message_registry___with_additional_msg_ErrorMessage_obj_vtable, message_registry___with_additional_msg_ErrorMessage_obj_vtable_scratch, sizeof(message_registry___with_additional_msg_ErrorMessage_obj_vtable));
    return 1;
}

static PyMethodDef message_registry___with_additional_msg_ErrorMessage_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_message_registry___with_additional_msg_ErrorMessage_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_message_registry___with_additional_msg_ErrorMessage_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_message_registry___with_additional_msg_ErrorMessage_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "with_additional_msg_ErrorMessage_obj",
    .tp_new = message_registry___with_additional_msg_ErrorMessage_obj_new,
    .tp_dealloc = (destructor)message_registry___with_additional_msg_ErrorMessage_obj_dealloc,
    .tp_traverse = (traverseproc)message_registry___with_additional_msg_ErrorMessage_obj_traverse,
    .tp_clear = (inquiry)message_registry___with_additional_msg_ErrorMessage_obj_clear,
    .tp_methods = message_registry___with_additional_msg_ErrorMessage_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__message_registry___with_additional_msg_ErrorMessage_obj,
    .tp_basicsize = sizeof(mypy___message_registry___with_additional_msg_ErrorMessage_objObject),
    .tp_vectorcall_offset = offsetof(mypy___message_registry___with_additional_msg_ErrorMessage_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_message_registry___with_additional_msg_ErrorMessage_obj_template = &CPyType_message_registry___with_additional_msg_ErrorMessage_obj_template_;

static PyObject *
message_registry___with_additional_msg_ErrorMessage_obj_setup(PyTypeObject *type)
{
    mypy___message_registry___with_additional_msg_ErrorMessage_objObject *self;
    self = (mypy___message_registry___with_additional_msg_ErrorMessage_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = message_registry___with_additional_msg_ErrorMessage_obj_vtable;
    self->vectorcall = CPyPy_message_registry___with_additional_msg_ErrorMessage_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_message_registry___with_additional_msg_ErrorMessage_obj(void)
{
    PyObject *self = message_registry___with_additional_msg_ErrorMessage_obj_setup(CPyType_message_registry___with_additional_msg_ErrorMessage_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef message_registrymodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef message_registrymodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.message_registry",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    message_registrymodule_methods
};

PyObject *CPyInit_mypy___message_registry(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___message_registry_internal) {
        Py_INCREF(CPyModule_mypy___message_registry_internal);
        return CPyModule_mypy___message_registry_internal;
    }
    CPyModule_mypy___message_registry_internal = PyModule_Create(&message_registrymodule);
    if (unlikely(CPyModule_mypy___message_registry_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___message_registry_internal, "__name__");
    CPyStatic_message_registry___globals = PyModule_GetDict(CPyModule_mypy___message_registry_internal);
    if (unlikely(CPyStatic_message_registry___globals == NULL))
        goto fail;
    CPyType_message_registry___format_ErrorMessage_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_message_registry___format_ErrorMessage_obj_template, NULL, modname);
    if (unlikely(!CPyType_message_registry___format_ErrorMessage_obj))
        goto fail;
    CPyType_message_registry___with_additional_msg_ErrorMessage_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_message_registry___with_additional_msg_ErrorMessage_obj_template, NULL, modname);
    if (unlikely(!CPyType_message_registry___with_additional_msg_ErrorMessage_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_message_registry_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___message_registry_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___message_registry_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_message_registry___INVALID_TYPE_RAW_ENUM_VALUE);
    CPyStatic_message_registry___INVALID_TYPE_RAW_ENUM_VALUE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___NO_RETURN_VALUE_EXPECTED);
    CPyStatic_message_registry___NO_RETURN_VALUE_EXPECTED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___MISSING_RETURN_STATEMENT);
    CPyStatic_message_registry___MISSING_RETURN_STATEMENT = NULL;
    CPy_XDECREF(CPyStatic_message_registry___EMPTY_BODY_ABSTRACT);
    CPyStatic_message_registry___EMPTY_BODY_ABSTRACT = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INVALID_IMPLICIT_RETURN);
    CPyStatic_message_registry___INVALID_IMPLICIT_RETURN = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INCOMPATIBLE_RETURN_VALUE_TYPE);
    CPyStatic_message_registry___INCOMPATIBLE_RETURN_VALUE_TYPE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___RETURN_VALUE_EXPECTED);
    CPyStatic_message_registry___RETURN_VALUE_EXPECTED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___NO_RETURN_EXPECTED);
    CPyStatic_message_registry___NO_RETURN_EXPECTED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INVALID_EXCEPTION);
    CPyStatic_message_registry___INVALID_EXCEPTION = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INVALID_EXCEPTION_TYPE);
    CPyStatic_message_registry___INVALID_EXCEPTION_TYPE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INVALID_EXCEPTION_GROUP);
    CPyStatic_message_registry___INVALID_EXCEPTION_GROUP = NULL;
    CPy_XDECREF(CPyStatic_message_registry___RETURN_IN_ASYNC_GENERATOR);
    CPyStatic_message_registry___RETURN_IN_ASYNC_GENERATOR = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INVALID_RETURN_TYPE_FOR_GENERATOR);
    CPyStatic_message_registry___INVALID_RETURN_TYPE_FOR_GENERATOR = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INVALID_RETURN_TYPE_FOR_ASYNC_GENERATOR);
    CPyStatic_message_registry___INVALID_RETURN_TYPE_FOR_ASYNC_GENERATOR = NULL;
    CPy_XDECREF(CPyStatic_message_registry___YIELD_VALUE_EXPECTED);
    CPyStatic_message_registry___YIELD_VALUE_EXPECTED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INCOMPATIBLE_TYPES);
    CPyStatic_message_registry___INCOMPATIBLE_TYPES = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_ASSIGNMENT);
    CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_ASSIGNMENT = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_AWAIT);
    CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_AWAIT = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INCOMPATIBLE_REDEFINITION);
    CPyStatic_message_registry___INCOMPATIBLE_REDEFINITION = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_YIELD);
    CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_YIELD = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_YIELD_FROM);
    CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_YIELD_FROM = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_CAPTURE);
    CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_CAPTURE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___MUST_HAVE_NONE_RETURN_TYPE);
    CPyStatic_message_registry___MUST_HAVE_NONE_RETURN_TYPE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___TUPLE_INDEX_OUT_OF_RANGE);
    CPyStatic_message_registry___TUPLE_INDEX_OUT_OF_RANGE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INVALID_SLICE_INDEX);
    CPyStatic_message_registry___INVALID_SLICE_INDEX = NULL;
    CPy_XDECREF(CPyStatic_message_registry___CANNOT_INFER_LAMBDA_TYPE);
    CPyStatic_message_registry___CANNOT_INFER_LAMBDA_TYPE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___NON_INSTANCE_NEW_TYPE);
    CPyStatic_message_registry___NON_INSTANCE_NEW_TYPE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INVALID_NEW_TYPE);
    CPyStatic_message_registry___INVALID_NEW_TYPE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___BAD_CONSTRUCTOR_TYPE);
    CPyStatic_message_registry___BAD_CONSTRUCTOR_TYPE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INCONSISTENT_ABSTRACT_OVERLOAD);
    CPyStatic_message_registry___INCONSISTENT_ABSTRACT_OVERLOAD = NULL;
    CPy_XDECREF(CPyStatic_message_registry___MULTIPLE_OVERLOADS_REQUIRED);
    CPyStatic_message_registry___MULTIPLE_OVERLOADS_REQUIRED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___READ_ONLY_PROPERTY_OVERRIDES_READ_WRITE);
    CPyStatic_message_registry___READ_ONLY_PROPERTY_OVERRIDES_READ_WRITE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___RETURN_TYPE_CANNOT_BE_CONTRAVARIANT);
    CPyStatic_message_registry___RETURN_TYPE_CANNOT_BE_CONTRAVARIANT = NULL;
    CPy_XDECREF(CPyStatic_message_registry___FUNCTION_PARAMETER_CANNOT_BE_COVARIANT);
    CPyStatic_message_registry___FUNCTION_PARAMETER_CANNOT_BE_COVARIANT = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INCOMPATIBLE_IMPORT_OF);
    CPyStatic_message_registry___INCOMPATIBLE_IMPORT_OF = NULL;
    CPy_XDECREF(CPyStatic_message_registry___FUNCTION_TYPE_EXPECTED);
    CPyStatic_message_registry___FUNCTION_TYPE_EXPECTED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___ONLY_CLASS_APPLICATION);
    CPyStatic_message_registry___ONLY_CLASS_APPLICATION = NULL;
    CPy_XDECREF(CPyStatic_message_registry___RETURN_TYPE_EXPECTED);
    CPyStatic_message_registry___RETURN_TYPE_EXPECTED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___ARGUMENT_TYPE_EXPECTED);
    CPyStatic_message_registry___ARGUMENT_TYPE_EXPECTED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___KEYWORD_ARGUMENT_REQUIRES_STR_KEY_TYPE);
    CPyStatic_message_registry___KEYWORD_ARGUMENT_REQUIRES_STR_KEY_TYPE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___ALL_MUST_BE_SEQ_STR);
    CPyStatic_message_registry___ALL_MUST_BE_SEQ_STR = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INVALID_TYPEDDICT_ARGS);
    CPyStatic_message_registry___INVALID_TYPEDDICT_ARGS = NULL;
    CPy_XDECREF(CPyStatic_message_registry___TYPEDDICT_KEY_MUST_BE_STRING_LITERAL);
    CPyStatic_message_registry___TYPEDDICT_KEY_MUST_BE_STRING_LITERAL = NULL;
    CPy_XDECREF(CPyStatic_message_registry___MALFORMED_ASSERT);
    CPyStatic_message_registry___MALFORMED_ASSERT = NULL;
    CPy_XDECREF(CPyStatic_message_registry___DUPLICATE_TYPE_SIGNATURES);
    CPyStatic_message_registry___DUPLICATE_TYPE_SIGNATURES = NULL;
    CPy_XDECREF(CPyStatic_message_registry___DESCRIPTOR_SET_NOT_CALLABLE);
    CPyStatic_message_registry___DESCRIPTOR_SET_NOT_CALLABLE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___MODULE_LEVEL_GETATTRIBUTE);
    CPyStatic_message_registry___MODULE_LEVEL_GETATTRIBUTE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___NAME_NOT_IN_SLOTS);
    CPyStatic_message_registry___NAME_NOT_IN_SLOTS = NULL;
    CPy_XDECREF(CPyStatic_message_registry___TYPE_ALWAYS_TRUE);
    CPyStatic_message_registry___TYPE_ALWAYS_TRUE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___TYPE_ALWAYS_TRUE_UNIONTYPE);
    CPyStatic_message_registry___TYPE_ALWAYS_TRUE_UNIONTYPE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___FUNCTION_ALWAYS_TRUE);
    CPyStatic_message_registry___FUNCTION_ALWAYS_TRUE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___ITERABLE_ALWAYS_TRUE);
    CPyStatic_message_registry___ITERABLE_ALWAYS_TRUE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___TOO_MANY_ARGS_FOR_SUPER);
    CPyStatic_message_registry___TOO_MANY_ARGS_FOR_SUPER = NULL;
    CPy_XDECREF(CPyStatic_message_registry___SUPER_WITH_SINGLE_ARG_NOT_SUPPORTED);
    CPyStatic_message_registry___SUPER_WITH_SINGLE_ARG_NOT_SUPPORTED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___UNSUPPORTED_ARG_1_FOR_SUPER);
    CPyStatic_message_registry___UNSUPPORTED_ARG_1_FOR_SUPER = NULL;
    CPy_XDECREF(CPyStatic_message_registry___UNSUPPORTED_ARG_2_FOR_SUPER);
    CPyStatic_message_registry___UNSUPPORTED_ARG_2_FOR_SUPER = NULL;
    CPy_XDECREF(CPyStatic_message_registry___SUPER_VARARGS_NOT_SUPPORTED);
    CPyStatic_message_registry___SUPER_VARARGS_NOT_SUPPORTED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___SUPER_POSITIONAL_ARGS_REQUIRED);
    CPyStatic_message_registry___SUPER_POSITIONAL_ARGS_REQUIRED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___SUPER_ARG_2_NOT_INSTANCE_OF_ARG_1);
    CPyStatic_message_registry___SUPER_ARG_2_NOT_INSTANCE_OF_ARG_1 = NULL;
    CPy_XDECREF(CPyStatic_message_registry___TARGET_CLASS_HAS_NO_BASE_CLASS);
    CPyStatic_message_registry___TARGET_CLASS_HAS_NO_BASE_CLASS = NULL;
    CPy_XDECREF(CPyStatic_message_registry___SUPER_OUTSIDE_OF_METHOD_NOT_SUPPORTED);
    CPyStatic_message_registry___SUPER_OUTSIDE_OF_METHOD_NOT_SUPPORTED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___SUPER_ENCLOSING_POSITIONAL_ARGS_REQUIRED);
    CPyStatic_message_registry___SUPER_ENCLOSING_POSITIONAL_ARGS_REQUIRED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___MISSING_OR_INVALID_SELF_TYPE);
    CPyStatic_message_registry___MISSING_OR_INVALID_SELF_TYPE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___ERASED_SELF_TYPE_NOT_SUPERTYPE);
    CPyStatic_message_registry___ERASED_SELF_TYPE_NOT_SUPERTYPE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___CANNOT_INHERIT_FROM_FINAL);
    CPyStatic_message_registry___CANNOT_INHERIT_FROM_FINAL = NULL;
    CPy_XDECREF(CPyStatic_message_registry___DEPENDENT_FINAL_IN_CLASS_BODY);
    CPyStatic_message_registry___DEPENDENT_FINAL_IN_CLASS_BODY = NULL;
    CPy_XDECREF(CPyStatic_message_registry___CANNOT_MAKE_DELETABLE_FINAL);
    CPyStatic_message_registry___CANNOT_MAKE_DELETABLE_FINAL = NULL;
    CPy_XDECREF(CPyStatic_message_registry___ENUM_MEMBERS_ATTR_WILL_BE_OVERRIDEN);
    CPyStatic_message_registry___ENUM_MEMBERS_ATTR_WILL_BE_OVERRIDEN = NULL;
    CPy_XDECREF(CPyStatic_message_registry___CANNOT_OVERRIDE_INSTANCE_VAR);
    CPyStatic_message_registry___CANNOT_OVERRIDE_INSTANCE_VAR = NULL;
    CPy_XDECREF(CPyStatic_message_registry___CANNOT_OVERRIDE_CLASS_VAR);
    CPyStatic_message_registry___CANNOT_OVERRIDE_CLASS_VAR = NULL;
    CPy_XDECREF(CPyStatic_message_registry___RUNTIME_PROTOCOL_EXPECTED);
    CPyStatic_message_registry___RUNTIME_PROTOCOL_EXPECTED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___CANNOT_INSTANTIATE_PROTOCOL);
    CPyStatic_message_registry___CANNOT_INSTANTIATE_PROTOCOL = NULL;
    CPy_XDECREF(CPyStatic_message_registry___TOO_MANY_UNION_COMBINATIONS);
    CPyStatic_message_registry___TOO_MANY_UNION_COMBINATIONS = NULL;
    CPy_XDECREF(CPyStatic_message_registry___CONTIGUOUS_ITERABLE_EXPECTED);
    CPyStatic_message_registry___CONTIGUOUS_ITERABLE_EXPECTED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___ITERABLE_TYPE_EXPECTED);
    CPyStatic_message_registry___ITERABLE_TYPE_EXPECTED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___TYPE_GUARD_POS_ARG_REQUIRED);
    CPyStatic_message_registry___TYPE_GUARD_POS_ARG_REQUIRED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___FAILED_TO_MERGE_OVERLOADS);
    CPyStatic_message_registry___FAILED_TO_MERGE_OVERLOADS = NULL;
    CPy_XDECREF(CPyStatic_message_registry___TYPE_IGNORE_WITH_ERRCODE_ON_MODULE);
    CPyStatic_message_registry___TYPE_IGNORE_WITH_ERRCODE_ON_MODULE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___INVALID_TYPE_IGNORE);
    CPyStatic_message_registry___INVALID_TYPE_IGNORE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___TYPE_COMMENT_SYNTAX_ERROR_VALUE);
    CPyStatic_message_registry___TYPE_COMMENT_SYNTAX_ERROR_VALUE = NULL;
    CPy_XDECREF(CPyStatic_message_registry___ELLIPSIS_WITH_OTHER_TYPEARGS);
    CPyStatic_message_registry___ELLIPSIS_WITH_OTHER_TYPEARGS = NULL;
    CPy_XDECREF(CPyStatic_message_registry___TYPE_SIGNATURE_TOO_MANY_ARGS);
    CPyStatic_message_registry___TYPE_SIGNATURE_TOO_MANY_ARGS = NULL;
    CPy_XDECREF(CPyStatic_message_registry___TYPE_SIGNATURE_TOO_FEW_ARGS);
    CPyStatic_message_registry___TYPE_SIGNATURE_TOO_FEW_ARGS = NULL;
    CPy_XDECREF(CPyStatic_message_registry___ARG_CONSTRUCTOR_NAME_EXPECTED);
    CPyStatic_message_registry___ARG_CONSTRUCTOR_NAME_EXPECTED = NULL;
    CPy_XDECREF(CPyStatic_message_registry___ARG_CONSTRUCTOR_TOO_MANY_ARGS);
    CPyStatic_message_registry___ARG_CONSTRUCTOR_TOO_MANY_ARGS = NULL;
    CPy_XDECREF(CPyStatic_message_registry___MULTIPLE_VALUES_FOR_NAME_KWARG);
    CPyStatic_message_registry___MULTIPLE_VALUES_FOR_NAME_KWARG = NULL;
    CPy_XDECREF(CPyStatic_message_registry___MULTIPLE_VALUES_FOR_TYPE_KWARG);
    CPyStatic_message_registry___MULTIPLE_VALUES_FOR_TYPE_KWARG = NULL;
    CPy_XDECREF(CPyStatic_message_registry___ARG_CONSTRUCTOR_UNEXPECTED_ARG);
    CPyStatic_message_registry___ARG_CONSTRUCTOR_UNEXPECTED_ARG = NULL;
    CPy_XDECREF(CPyStatic_message_registry___ARG_NAME_EXPECTED_STRING_LITERAL);
    CPyStatic_message_registry___ARG_NAME_EXPECTED_STRING_LITERAL = NULL;
    Py_CLEAR(CPyType_message_registry___ErrorMessage);
    Py_CLEAR(CPyType_message_registry___format_ErrorMessage_obj);
    Py_CLEAR(CPyType_message_registry___with_additional_msg_ErrorMessage_obj);
    return NULL;
}

PyObject *CPyDef_message_registry___format_ErrorMessage_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_message_registry___format_ErrorMessage_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_message_registry___format_ErrorMessage_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/message_registry.py", "__get__", -1, CPyStatic_message_registry___globals);
    return NULL;
}

PyObject *CPyDef_message_registry___format_ErrorMessage_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_args, PyObject *cpy_r_kwargs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_self, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "format", 21, CPyStatic_message_registry___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r0)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "format", 21, CPyStatic_message_registry___globals, "str", cpy_r_r0);
        goto CPyL16;
    }
    cpy_r_r2 = CPyStatics[193]; /* 'format' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "format", 21, CPyStatic_message_registry___globals);
        goto CPyL16;
    }
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "format", 21, CPyStatic_message_registry___globals);
        goto CPyL17;
    }
    cpy_r_r5 = CPyList_Extend(cpy_r_r4, cpy_r_args);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "format", 21, CPyStatic_message_registry___globals);
        goto CPyL18;
    } else
        goto CPyL19;
CPyL5: ;
    cpy_r_r6 = PyDict_New();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "format", 21, CPyStatic_message_registry___globals);
        goto CPyL18;
    }
    cpy_r_r7 = CPyDict_UpdateInDisplay(cpy_r_r6, cpy_r_kwargs);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/message_registry.py", "format", 21, CPyStatic_message_registry___globals);
        goto CPyL20;
    }
    cpy_r_r9 = PyList_AsTuple(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "format", 21, CPyStatic_message_registry___globals);
        goto CPyL21;
    }
    cpy_r_r10 = PyObject_Call(cpy_r_r3, cpy_r_r9, cpy_r_r6);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "format", 21, CPyStatic_message_registry___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "format", 21, CPyStatic_message_registry___globals, "str", cpy_r_r10);
        goto CPyL16;
    }
    cpy_r_r12 = CPySequenceTuple_GetItem(cpy_r_self, 2);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "format", 21, CPyStatic_message_registry___globals);
        goto CPyL22;
    }
    if (PyObject_TypeCheck(cpy_r_r12, CPyType_errorcodes___ErrorCode))
        cpy_r_r13 = cpy_r_r12;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL3282;
    if (cpy_r_r12 == Py_None)
        cpy_r_r13 = cpy_r_r12;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL3282;
    CPy_TypeErrorTraceback("mypy/message_registry.py", "format", 21, CPyStatic_message_registry___globals, "mypy.errorcodes.ErrorCode or None", cpy_r_r12);
    goto CPyL22;
__LL3282: ;
    cpy_r_r14 = CPyStatic_message_registry___globals;
    cpy_r_r15 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "format", 21, CPyStatic_message_registry___globals);
        goto CPyL23;
    }
    PyObject *cpy_r_r17[2] = {cpy_r_r11, cpy_r_r13};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = CPyStatics[9163]; /* ('code',) */
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, cpy_r_r19);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "format", 21, CPyStatic_message_registry___globals);
        goto CPyL23;
    }
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r13);
    if (likely(PyTuple_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "format", 21, CPyStatic_message_registry___globals, "tuple", cpy_r_r20);
        goto CPyL16;
    }
    return cpy_r_r21;
CPyL16: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL17: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL16;
CPyL19: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL5;
CPyL20: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL16;
CPyL21: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL16;
CPyL22: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    goto CPyL16;
}

PyObject *CPyPy_message_registry___format_ErrorMessage_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", 0};
    static CPyArg_Parser parser = {"%O:__call__", kwlist, 0};
    PyObject *obj_self;
    PyObject *obj_args;
    PyObject *obj_kwargs;
    if (!CPyArg_ParseStackAndKeywords(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_args, &obj_kwargs, &obj_self)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject * arg_self;
    if (likely(PyTuple_Check(obj_self)))
        arg_self = obj_self;
    else {
        CPy_TypeError("tuple", obj_self); 
        goto fail;
    }
    PyObject *arg_args = obj_args;
    PyObject *arg_kwargs = obj_kwargs;
    PyObject *retval = CPyDef_message_registry___format_ErrorMessage_obj_____call__(arg___mypyc_self__, arg_self, arg_args, arg_kwargs);
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    return retval;
fail: ;
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    CPy_AddTraceback("mypy/message_registry.py", "format", 20, CPyStatic_message_registry___globals);
    return NULL;
}

PyObject *CPyDef_message_registry___with_additional_msg_ErrorMessage_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_message_registry___with_additional_msg_ErrorMessage_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_message_registry___with_additional_msg_ErrorMessage_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/message_registry.py", "__get__", -1, CPyStatic_message_registry___globals);
    return NULL;
}

PyObject *CPyDef_message_registry___with_additional_msg_ErrorMessage_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject **cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_self, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "with_additional_msg", 24, CPyStatic_message_registry___globals);
        goto CPyL9;
    }
    if (likely(PyUnicode_Check(cpy_r_r0)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "with_additional_msg", 24, CPyStatic_message_registry___globals, "str", cpy_r_r0);
        goto CPyL9;
    }
    cpy_r_r2 = PyUnicode_Concat(cpy_r_r1, cpy_r_info);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "with_additional_msg", 24, CPyStatic_message_registry___globals);
        goto CPyL9;
    }
    cpy_r_r3 = CPySequenceTuple_GetItem(cpy_r_self, 2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "with_additional_msg", 24, CPyStatic_message_registry___globals);
        goto CPyL10;
    }
    if (PyObject_TypeCheck(cpy_r_r3, CPyType_errorcodes___ErrorCode))
        cpy_r_r4 = cpy_r_r3;
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 != NULL) goto __LL3283;
    if (cpy_r_r3 == Py_None)
        cpy_r_r4 = cpy_r_r3;
    else {
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 != NULL) goto __LL3283;
    CPy_TypeErrorTraceback("mypy/message_registry.py", "with_additional_msg", 24, CPyStatic_message_registry___globals, "mypy.errorcodes.ErrorCode or None", cpy_r_r3);
    goto CPyL10;
__LL3283: ;
    cpy_r_r5 = CPyStatic_message_registry___globals;
    cpy_r_r6 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "with_additional_msg", 24, CPyStatic_message_registry___globals);
        goto CPyL11;
    }
    PyObject *cpy_r_r8[2] = {cpy_r_r2, cpy_r_r4};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = CPyStatics[9163]; /* ('code',) */
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r9, 1, cpy_r_r10);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "with_additional_msg", 24, CPyStatic_message_registry___globals);
        goto CPyL11;
    }
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r4);
    if (likely(PyTuple_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "with_additional_msg", 24, CPyStatic_message_registry___globals, "tuple", cpy_r_r11);
        goto CPyL9;
    }
    return cpy_r_r12;
CPyL9: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL10: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r4);
    goto CPyL9;
}

PyObject *CPyPy_message_registry___with_additional_msg_ErrorMessage_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", "info", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_self;
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self, &obj_info)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject * arg_self;
    if (likely(PyTuple_Check(obj_self)))
        arg_self = obj_self;
    else {
        CPy_TypeError("tuple", obj_self); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely(PyUnicode_Check(obj_info)))
        arg_info = obj_info;
    else {
        CPy_TypeError("str", obj_info); 
        goto fail;
    }
    PyObject *retval = CPyDef_message_registry___with_additional_msg_ErrorMessage_obj_____call__(arg___mypyc_self__, arg_self, arg_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/message_registry.py", "with_additional_msg", 23, CPyStatic_message_registry___globals);
    return NULL;
}

char CPyDef_message_registry_____top_level__(void) {
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
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject **cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
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
    int32_t cpy_r_r81;
    char cpy_r_r82;
    PyObject **cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject **cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject **cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject **cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject **cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject **cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    int32_t cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    char cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject **cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    int32_t cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject **cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    int32_t cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject **cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    int32_t cpy_r_r197;
    char cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject **cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    int32_t cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject **cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    int32_t cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject **cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    int32_t cpy_r_r233;
    char cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject **cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    int32_t cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject **cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    int32_t cpy_r_r257;
    char cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject **cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    int32_t cpy_r_r269;
    char cpy_r_r270;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject **cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    int32_t cpy_r_r281;
    char cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject **cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    int32_t cpy_r_r293;
    char cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    char cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    PyObject **cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject *cpy_r_r307;
    int32_t cpy_r_r308;
    char cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject **cpy_r_r315;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    int32_t cpy_r_r320;
    char cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject **cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    int32_t cpy_r_r332;
    char cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    int32_t cpy_r_r337;
    char cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    int32_t cpy_r_r342;
    char cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    int32_t cpy_r_r347;
    char cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    int32_t cpy_r_r352;
    char cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    int32_t cpy_r_r357;
    char cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    int32_t cpy_r_r362;
    char cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject **cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    int32_t cpy_r_r374;
    char cpy_r_r375;
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
    int32_t cpy_r_r391;
    char cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    PyObject **cpy_r_r398;
    PyObject *cpy_r_r399;
    PyObject *cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    int32_t cpy_r_r403;
    char cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject *cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject **cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    int32_t cpy_r_r415;
    char cpy_r_r416;
    PyObject *cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    PyObject **cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject *cpy_r_r424;
    PyObject *cpy_r_r425;
    PyObject *cpy_r_r426;
    int32_t cpy_r_r427;
    char cpy_r_r428;
    PyObject *cpy_r_r429;
    PyObject *cpy_r_r430;
    PyObject *cpy_r_r431;
    PyObject *cpy_r_r432;
    PyObject **cpy_r_r434;
    PyObject *cpy_r_r435;
    PyObject *cpy_r_r436;
    PyObject *cpy_r_r437;
    PyObject *cpy_r_r438;
    int32_t cpy_r_r439;
    char cpy_r_r440;
    PyObject *cpy_r_r441;
    PyObject *cpy_r_r442;
    PyObject *cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject **cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject *cpy_r_r450;
    int32_t cpy_r_r451;
    char cpy_r_r452;
    PyObject *cpy_r_r453;
    PyObject *cpy_r_r454;
    PyObject *cpy_r_r455;
    int32_t cpy_r_r456;
    char cpy_r_r457;
    PyObject *cpy_r_r458;
    PyObject *cpy_r_r459;
    PyObject *cpy_r_r460;
    PyObject *cpy_r_r461;
    PyObject **cpy_r_r463;
    PyObject *cpy_r_r464;
    PyObject *cpy_r_r465;
    PyObject *cpy_r_r466;
    PyObject *cpy_r_r467;
    int32_t cpy_r_r468;
    char cpy_r_r469;
    PyObject *cpy_r_r470;
    PyObject *cpy_r_r471;
    PyObject *cpy_r_r472;
    PyObject *cpy_r_r473;
    PyObject **cpy_r_r475;
    PyObject *cpy_r_r476;
    PyObject *cpy_r_r477;
    PyObject *cpy_r_r478;
    PyObject *cpy_r_r479;
    int32_t cpy_r_r480;
    char cpy_r_r481;
    PyObject *cpy_r_r482;
    PyObject *cpy_r_r483;
    PyObject *cpy_r_r484;
    PyObject *cpy_r_r485;
    PyObject **cpy_r_r487;
    PyObject *cpy_r_r488;
    PyObject *cpy_r_r489;
    PyObject *cpy_r_r490;
    PyObject *cpy_r_r491;
    int32_t cpy_r_r492;
    char cpy_r_r493;
    PyObject *cpy_r_r494;
    PyObject *cpy_r_r495;
    PyObject *cpy_r_r496;
    int32_t cpy_r_r497;
    char cpy_r_r498;
    PyObject *cpy_r_r499;
    PyObject *cpy_r_r500;
    PyObject *cpy_r_r501;
    int32_t cpy_r_r502;
    char cpy_r_r503;
    PyObject *cpy_r_r504;
    PyObject *cpy_r_r505;
    PyObject *cpy_r_r506;
    PyObject *cpy_r_r507;
    PyObject **cpy_r_r509;
    PyObject *cpy_r_r510;
    PyObject *cpy_r_r511;
    PyObject *cpy_r_r512;
    PyObject *cpy_r_r513;
    int32_t cpy_r_r514;
    char cpy_r_r515;
    PyObject *cpy_r_r516;
    PyObject *cpy_r_r517;
    PyObject *cpy_r_r518;
    PyObject *cpy_r_r519;
    PyObject **cpy_r_r521;
    PyObject *cpy_r_r522;
    PyObject *cpy_r_r523;
    PyObject *cpy_r_r524;
    PyObject *cpy_r_r525;
    int32_t cpy_r_r526;
    char cpy_r_r527;
    PyObject *cpy_r_r528;
    PyObject *cpy_r_r529;
    PyObject *cpy_r_r530;
    PyObject *cpy_r_r531;
    PyObject **cpy_r_r533;
    PyObject *cpy_r_r534;
    PyObject *cpy_r_r535;
    PyObject *cpy_r_r536;
    PyObject *cpy_r_r537;
    int32_t cpy_r_r538;
    char cpy_r_r539;
    PyObject *cpy_r_r540;
    PyObject *cpy_r_r541;
    PyObject *cpy_r_r542;
    int32_t cpy_r_r543;
    char cpy_r_r544;
    PyObject *cpy_r_r545;
    PyObject *cpy_r_r546;
    PyObject *cpy_r_r547;
    PyObject *cpy_r_r548;
    PyObject **cpy_r_r550;
    PyObject *cpy_r_r551;
    PyObject *cpy_r_r552;
    PyObject *cpy_r_r553;
    PyObject *cpy_r_r554;
    int32_t cpy_r_r555;
    char cpy_r_r556;
    PyObject *cpy_r_r557;
    PyObject *cpy_r_r558;
    PyObject *cpy_r_r559;
    PyObject *cpy_r_r560;
    PyObject **cpy_r_r562;
    PyObject *cpy_r_r563;
    PyObject *cpy_r_r564;
    PyObject *cpy_r_r565;
    PyObject *cpy_r_r566;
    int32_t cpy_r_r567;
    char cpy_r_r568;
    PyObject *cpy_r_r569;
    PyObject *cpy_r_r570;
    char cpy_r_r571;
    PyObject *cpy_r_r572;
    PyObject *cpy_r_r573;
    PyObject *cpy_r_r574;
    PyObject **cpy_r_r576;
    PyObject *cpy_r_r577;
    PyObject *cpy_r_r578;
    PyObject *cpy_r_r579;
    PyObject *cpy_r_r580;
    PyObject *cpy_r_r581;
    int32_t cpy_r_r582;
    char cpy_r_r583;
    PyObject *cpy_r_r584;
    PyObject *cpy_r_r585;
    char cpy_r_r586;
    PyObject *cpy_r_r587;
    PyObject *cpy_r_r588;
    PyObject *cpy_r_r589;
    PyObject **cpy_r_r591;
    PyObject *cpy_r_r592;
    PyObject *cpy_r_r593;
    PyObject *cpy_r_r594;
    PyObject *cpy_r_r595;
    int32_t cpy_r_r596;
    char cpy_r_r597;
    PyObject *cpy_r_r598;
    PyObject *cpy_r_r599;
    PyObject *cpy_r_r600;
    PyObject *cpy_r_r601;
    PyObject **cpy_r_r603;
    PyObject *cpy_r_r604;
    PyObject *cpy_r_r605;
    PyObject *cpy_r_r606;
    PyObject *cpy_r_r607;
    int32_t cpy_r_r608;
    char cpy_r_r609;
    PyObject *cpy_r_r610;
    PyObject *cpy_r_r611;
    char cpy_r_r612;
    PyObject *cpy_r_r613;
    PyObject *cpy_r_r614;
    PyObject *cpy_r_r615;
    PyObject **cpy_r_r617;
    PyObject *cpy_r_r618;
    PyObject *cpy_r_r619;
    PyObject *cpy_r_r620;
    PyObject *cpy_r_r621;
    int32_t cpy_r_r622;
    char cpy_r_r623;
    PyObject *cpy_r_r624;
    PyObject *cpy_r_r625;
    char cpy_r_r626;
    PyObject *cpy_r_r627;
    PyObject *cpy_r_r628;
    PyObject *cpy_r_r629;
    PyObject **cpy_r_r631;
    PyObject *cpy_r_r632;
    PyObject *cpy_r_r633;
    PyObject *cpy_r_r634;
    PyObject *cpy_r_r635;
    int32_t cpy_r_r636;
    char cpy_r_r637;
    PyObject *cpy_r_r638;
    PyObject *cpy_r_r639;
    PyObject *cpy_r_r640;
    PyObject *cpy_r_r641;
    PyObject **cpy_r_r643;
    PyObject *cpy_r_r644;
    PyObject *cpy_r_r645;
    PyObject *cpy_r_r646;
    PyObject *cpy_r_r647;
    int32_t cpy_r_r648;
    char cpy_r_r649;
    PyObject *cpy_r_r650;
    PyObject *cpy_r_r651;
    PyObject *cpy_r_r652;
    PyObject *cpy_r_r653;
    PyObject **cpy_r_r655;
    PyObject *cpy_r_r656;
    PyObject *cpy_r_r657;
    PyObject *cpy_r_r658;
    PyObject *cpy_r_r659;
    int32_t cpy_r_r660;
    char cpy_r_r661;
    PyObject *cpy_r_r662;
    PyObject *cpy_r_r663;
    PyObject *cpy_r_r664;
    PyObject *cpy_r_r665;
    PyObject **cpy_r_r667;
    PyObject *cpy_r_r668;
    PyObject *cpy_r_r669;
    PyObject *cpy_r_r670;
    PyObject *cpy_r_r671;
    int32_t cpy_r_r672;
    char cpy_r_r673;
    PyObject *cpy_r_r674;
    PyObject *cpy_r_r675;
    PyObject *cpy_r_r676;
    PyObject *cpy_r_r677;
    PyObject **cpy_r_r679;
    PyObject *cpy_r_r680;
    PyObject *cpy_r_r681;
    PyObject *cpy_r_r682;
    PyObject *cpy_r_r683;
    int32_t cpy_r_r684;
    char cpy_r_r685;
    PyObject *cpy_r_r686;
    PyObject *cpy_r_r687;
    PyObject *cpy_r_r688;
    PyObject *cpy_r_r689;
    PyObject **cpy_r_r691;
    PyObject *cpy_r_r692;
    PyObject *cpy_r_r693;
    PyObject *cpy_r_r694;
    PyObject *cpy_r_r695;
    int32_t cpy_r_r696;
    char cpy_r_r697;
    PyObject *cpy_r_r698;
    PyObject *cpy_r_r699;
    PyObject *cpy_r_r700;
    PyObject *cpy_r_r701;
    PyObject **cpy_r_r703;
    PyObject *cpy_r_r704;
    PyObject *cpy_r_r705;
    PyObject *cpy_r_r706;
    PyObject *cpy_r_r707;
    int32_t cpy_r_r708;
    char cpy_r_r709;
    PyObject *cpy_r_r710;
    PyObject *cpy_r_r711;
    PyObject *cpy_r_r712;
    PyObject *cpy_r_r713;
    PyObject **cpy_r_r715;
    PyObject *cpy_r_r716;
    PyObject *cpy_r_r717;
    PyObject *cpy_r_r718;
    PyObject *cpy_r_r719;
    int32_t cpy_r_r720;
    char cpy_r_r721;
    PyObject *cpy_r_r722;
    PyObject *cpy_r_r723;
    PyObject *cpy_r_r724;
    int32_t cpy_r_r725;
    char cpy_r_r726;
    PyObject *cpy_r_r727;
    PyObject *cpy_r_r728;
    PyObject *cpy_r_r729;
    PyObject *cpy_r_r730;
    PyObject **cpy_r_r732;
    PyObject *cpy_r_r733;
    PyObject *cpy_r_r734;
    PyObject *cpy_r_r735;
    PyObject *cpy_r_r736;
    int32_t cpy_r_r737;
    char cpy_r_r738;
    PyObject *cpy_r_r739;
    PyObject *cpy_r_r740;
    PyObject *cpy_r_r741;
    int32_t cpy_r_r742;
    char cpy_r_r743;
    PyObject *cpy_r_r744;
    PyObject *cpy_r_r745;
    PyObject *cpy_r_r746;
    PyObject *cpy_r_r747;
    PyObject **cpy_r_r749;
    PyObject *cpy_r_r750;
    PyObject *cpy_r_r751;
    PyObject *cpy_r_r752;
    PyObject *cpy_r_r753;
    int32_t cpy_r_r754;
    char cpy_r_r755;
    PyObject *cpy_r_r756;
    PyObject *cpy_r_r757;
    char cpy_r_r758;
    PyObject *cpy_r_r759;
    PyObject *cpy_r_r760;
    PyObject *cpy_r_r761;
    PyObject **cpy_r_r763;
    PyObject *cpy_r_r764;
    PyObject *cpy_r_r765;
    PyObject *cpy_r_r766;
    PyObject *cpy_r_r767;
    PyObject *cpy_r_r768;
    int32_t cpy_r_r769;
    char cpy_r_r770;
    PyObject *cpy_r_r771;
    PyObject *cpy_r_r772;
    char cpy_r_r773;
    PyObject *cpy_r_r774;
    PyObject *cpy_r_r775;
    PyObject *cpy_r_r776;
    PyObject **cpy_r_r778;
    PyObject *cpy_r_r779;
    PyObject *cpy_r_r780;
    PyObject *cpy_r_r781;
    PyObject *cpy_r_r782;
    PyObject *cpy_r_r783;
    int32_t cpy_r_r784;
    char cpy_r_r785;
    PyObject *cpy_r_r786;
    PyObject *cpy_r_r787;
    char cpy_r_r788;
    PyObject *cpy_r_r789;
    PyObject *cpy_r_r790;
    PyObject *cpy_r_r791;
    PyObject **cpy_r_r793;
    PyObject *cpy_r_r794;
    PyObject *cpy_r_r795;
    PyObject *cpy_r_r796;
    PyObject *cpy_r_r797;
    PyObject *cpy_r_r798;
    int32_t cpy_r_r799;
    char cpy_r_r800;
    PyObject *cpy_r_r801;
    PyObject *cpy_r_r802;
    char cpy_r_r803;
    PyObject *cpy_r_r804;
    PyObject *cpy_r_r805;
    PyObject *cpy_r_r806;
    PyObject **cpy_r_r808;
    PyObject *cpy_r_r809;
    PyObject *cpy_r_r810;
    PyObject *cpy_r_r811;
    PyObject *cpy_r_r812;
    PyObject *cpy_r_r813;
    int32_t cpy_r_r814;
    char cpy_r_r815;
    PyObject *cpy_r_r816;
    PyObject *cpy_r_r817;
    PyObject *cpy_r_r818;
    int32_t cpy_r_r819;
    char cpy_r_r820;
    PyObject *cpy_r_r821;
    PyObject *cpy_r_r822;
    PyObject *cpy_r_r823;
    int32_t cpy_r_r824;
    char cpy_r_r825;
    PyObject *cpy_r_r826;
    PyObject *cpy_r_r827;
    PyObject *cpy_r_r828;
    int32_t cpy_r_r829;
    char cpy_r_r830;
    PyObject *cpy_r_r831;
    PyObject *cpy_r_r832;
    PyObject *cpy_r_r833;
    int32_t cpy_r_r834;
    char cpy_r_r835;
    PyObject *cpy_r_r836;
    PyObject *cpy_r_r837;
    PyObject *cpy_r_r838;
    int32_t cpy_r_r839;
    char cpy_r_r840;
    PyObject *cpy_r_r841;
    PyObject *cpy_r_r842;
    PyObject *cpy_r_r843;
    int32_t cpy_r_r844;
    char cpy_r_r845;
    PyObject *cpy_r_r846;
    PyObject *cpy_r_r847;
    PyObject *cpy_r_r848;
    int32_t cpy_r_r849;
    char cpy_r_r850;
    PyObject *cpy_r_r851;
    PyObject *cpy_r_r852;
    PyObject *cpy_r_r853;
    int32_t cpy_r_r854;
    char cpy_r_r855;
    PyObject *cpy_r_r856;
    PyObject *cpy_r_r857;
    PyObject *cpy_r_r858;
    int32_t cpy_r_r859;
    char cpy_r_r860;
    PyObject *cpy_r_r861;
    PyObject *cpy_r_r862;
    PyObject *cpy_r_r863;
    int32_t cpy_r_r864;
    char cpy_r_r865;
    PyObject *cpy_r_r866;
    PyObject *cpy_r_r867;
    PyObject *cpy_r_r868;
    int32_t cpy_r_r869;
    char cpy_r_r870;
    PyObject *cpy_r_r871;
    PyObject *cpy_r_r872;
    PyObject *cpy_r_r873;
    int32_t cpy_r_r874;
    char cpy_r_r875;
    PyObject *cpy_r_r876;
    PyObject *cpy_r_r877;
    PyObject *cpy_r_r878;
    int32_t cpy_r_r879;
    char cpy_r_r880;
    PyObject *cpy_r_r881;
    PyObject *cpy_r_r882;
    PyObject *cpy_r_r883;
    int32_t cpy_r_r884;
    char cpy_r_r885;
    PyObject *cpy_r_r886;
    PyObject *cpy_r_r887;
    PyObject *cpy_r_r888;
    int32_t cpy_r_r889;
    char cpy_r_r890;
    PyObject *cpy_r_r891;
    PyObject *cpy_r_r892;
    PyObject *cpy_r_r893;
    int32_t cpy_r_r894;
    char cpy_r_r895;
    PyObject *cpy_r_r896;
    PyObject *cpy_r_r897;
    PyObject *cpy_r_r898;
    PyObject *cpy_r_r899;
    PyObject **cpy_r_r901;
    PyObject *cpy_r_r902;
    PyObject *cpy_r_r903;
    PyObject *cpy_r_r904;
    PyObject *cpy_r_r905;
    int32_t cpy_r_r906;
    char cpy_r_r907;
    PyObject *cpy_r_r908;
    PyObject *cpy_r_r909;
    PyObject *cpy_r_r910;
    PyObject *cpy_r_r911;
    PyObject **cpy_r_r913;
    PyObject *cpy_r_r914;
    PyObject *cpy_r_r915;
    PyObject *cpy_r_r916;
    PyObject *cpy_r_r917;
    int32_t cpy_r_r918;
    char cpy_r_r919;
    PyObject *cpy_r_r920;
    PyObject *cpy_r_r921;
    PyObject *cpy_r_r922;
    PyObject *cpy_r_r923;
    PyObject **cpy_r_r925;
    PyObject *cpy_r_r926;
    PyObject *cpy_r_r927;
    PyObject *cpy_r_r928;
    PyObject *cpy_r_r929;
    int32_t cpy_r_r930;
    char cpy_r_r931;
    PyObject *cpy_r_r932;
    PyObject *cpy_r_r933;
    PyObject *cpy_r_r934;
    PyObject *cpy_r_r935;
    PyObject **cpy_r_r937;
    PyObject *cpy_r_r938;
    PyObject *cpy_r_r939;
    PyObject *cpy_r_r940;
    PyObject *cpy_r_r941;
    int32_t cpy_r_r942;
    char cpy_r_r943;
    PyObject *cpy_r_r944;
    PyObject *cpy_r_r945;
    PyObject *cpy_r_r946;
    PyObject *cpy_r_r947;
    PyObject **cpy_r_r949;
    PyObject *cpy_r_r950;
    PyObject *cpy_r_r951;
    PyObject *cpy_r_r952;
    PyObject *cpy_r_r953;
    int32_t cpy_r_r954;
    char cpy_r_r955;
    PyObject *cpy_r_r956;
    PyObject *cpy_r_r957;
    PyObject *cpy_r_r958;
    PyObject *cpy_r_r959;
    PyObject **cpy_r_r961;
    PyObject *cpy_r_r962;
    PyObject *cpy_r_r963;
    PyObject *cpy_r_r964;
    PyObject *cpy_r_r965;
    int32_t cpy_r_r966;
    char cpy_r_r967;
    PyObject *cpy_r_r968;
    PyObject *cpy_r_r969;
    PyObject *cpy_r_r970;
    PyObject *cpy_r_r971;
    PyObject **cpy_r_r973;
    PyObject *cpy_r_r974;
    PyObject *cpy_r_r975;
    PyObject *cpy_r_r976;
    PyObject *cpy_r_r977;
    int32_t cpy_r_r978;
    char cpy_r_r979;
    PyObject *cpy_r_r980;
    PyObject *cpy_r_r981;
    PyObject *cpy_r_r982;
    PyObject *cpy_r_r983;
    PyObject **cpy_r_r985;
    PyObject *cpy_r_r986;
    PyObject *cpy_r_r987;
    PyObject *cpy_r_r988;
    PyObject *cpy_r_r989;
    int32_t cpy_r_r990;
    char cpy_r_r991;
    PyObject *cpy_r_r992;
    PyObject *cpy_r_r993;
    PyObject *cpy_r_r994;
    PyObject *cpy_r_r995;
    PyObject **cpy_r_r997;
    PyObject *cpy_r_r998;
    PyObject *cpy_r_r999;
    PyObject *cpy_r_r1000;
    PyObject *cpy_r_r1001;
    int32_t cpy_r_r1002;
    char cpy_r_r1003;
    PyObject *cpy_r_r1004;
    PyObject *cpy_r_r1005;
    PyObject *cpy_r_r1006;
    PyObject *cpy_r_r1007;
    PyObject **cpy_r_r1009;
    PyObject *cpy_r_r1010;
    PyObject *cpy_r_r1011;
    PyObject *cpy_r_r1012;
    PyObject *cpy_r_r1013;
    int32_t cpy_r_r1014;
    char cpy_r_r1015;
    PyObject *cpy_r_r1016;
    PyObject *cpy_r_r1017;
    PyObject *cpy_r_r1018;
    PyObject *cpy_r_r1019;
    PyObject **cpy_r_r1021;
    PyObject *cpy_r_r1022;
    PyObject *cpy_r_r1023;
    PyObject *cpy_r_r1024;
    PyObject *cpy_r_r1025;
    int32_t cpy_r_r1026;
    char cpy_r_r1027;
    PyObject *cpy_r_r1028;
    PyObject *cpy_r_r1029;
    PyObject *cpy_r_r1030;
    PyObject *cpy_r_r1031;
    PyObject **cpy_r_r1033;
    PyObject *cpy_r_r1034;
    PyObject *cpy_r_r1035;
    PyObject *cpy_r_r1036;
    PyObject *cpy_r_r1037;
    int32_t cpy_r_r1038;
    char cpy_r_r1039;
    PyObject *cpy_r_r1040;
    PyObject *cpy_r_r1041;
    PyObject *cpy_r_r1042;
    PyObject *cpy_r_r1043;
    PyObject **cpy_r_r1045;
    PyObject *cpy_r_r1046;
    PyObject *cpy_r_r1047;
    PyObject *cpy_r_r1048;
    PyObject *cpy_r_r1049;
    int32_t cpy_r_r1050;
    char cpy_r_r1051;
    PyObject *cpy_r_r1052;
    PyObject *cpy_r_r1053;
    PyObject *cpy_r_r1054;
    PyObject *cpy_r_r1055;
    PyObject **cpy_r_r1057;
    PyObject *cpy_r_r1058;
    PyObject *cpy_r_r1059;
    PyObject *cpy_r_r1060;
    PyObject *cpy_r_r1061;
    int32_t cpy_r_r1062;
    char cpy_r_r1063;
    PyObject *cpy_r_r1064;
    PyObject *cpy_r_r1065;
    PyObject *cpy_r_r1066;
    int32_t cpy_r_r1067;
    char cpy_r_r1068;
    PyObject *cpy_r_r1069;
    PyObject *cpy_r_r1070;
    PyObject *cpy_r_r1071;
    PyObject *cpy_r_r1072;
    PyObject **cpy_r_r1074;
    PyObject *cpy_r_r1075;
    PyObject *cpy_r_r1076;
    PyObject *cpy_r_r1077;
    PyObject *cpy_r_r1078;
    int32_t cpy_r_r1079;
    char cpy_r_r1080;
    PyObject *cpy_r_r1081;
    PyObject *cpy_r_r1082;
    PyObject *cpy_r_r1083;
    PyObject *cpy_r_r1084;
    PyObject **cpy_r_r1086;
    PyObject *cpy_r_r1087;
    PyObject *cpy_r_r1088;
    PyObject *cpy_r_r1089;
    PyObject *cpy_r_r1090;
    int32_t cpy_r_r1091;
    char cpy_r_r1092;
    PyObject *cpy_r_r1093;
    PyObject *cpy_r_r1094;
    PyObject *cpy_r_r1095;
    PyObject *cpy_r_r1096;
    PyObject **cpy_r_r1098;
    PyObject *cpy_r_r1099;
    PyObject *cpy_r_r1100;
    PyObject *cpy_r_r1101;
    PyObject *cpy_r_r1102;
    int32_t cpy_r_r1103;
    char cpy_r_r1104;
    PyObject *cpy_r_r1105;
    PyObject *cpy_r_r1106;
    PyObject *cpy_r_r1107;
    PyObject *cpy_r_r1108;
    PyObject **cpy_r_r1110;
    PyObject *cpy_r_r1111;
    PyObject *cpy_r_r1112;
    PyObject *cpy_r_r1113;
    PyObject *cpy_r_r1114;
    int32_t cpy_r_r1115;
    char cpy_r_r1116;
    PyObject *cpy_r_r1117;
    PyObject *cpy_r_r1118;
    PyObject *cpy_r_r1119;
    int32_t cpy_r_r1120;
    char cpy_r_r1121;
    PyObject *cpy_r_r1122;
    PyObject *cpy_r_r1123;
    PyObject *cpy_r_r1124;
    int32_t cpy_r_r1125;
    char cpy_r_r1126;
    PyObject *cpy_r_r1127;
    PyObject *cpy_r_r1128;
    PyObject *cpy_r_r1129;
    int32_t cpy_r_r1130;
    char cpy_r_r1131;
    PyObject *cpy_r_r1132;
    PyObject *cpy_r_r1133;
    PyObject *cpy_r_r1134;
    PyObject *cpy_r_r1135;
    PyObject **cpy_r_r1137;
    PyObject *cpy_r_r1138;
    PyObject *cpy_r_r1139;
    PyObject *cpy_r_r1140;
    PyObject *cpy_r_r1141;
    int32_t cpy_r_r1142;
    char cpy_r_r1143;
    PyObject *cpy_r_r1144;
    PyObject *cpy_r_r1145;
    PyObject *cpy_r_r1146;
    PyObject *cpy_r_r1147;
    PyObject **cpy_r_r1149;
    PyObject *cpy_r_r1150;
    PyObject *cpy_r_r1151;
    PyObject *cpy_r_r1152;
    PyObject *cpy_r_r1153;
    int32_t cpy_r_r1154;
    char cpy_r_r1155;
    PyObject *cpy_r_r1156;
    PyObject *cpy_r_r1157;
    PyObject *cpy_r_r1158;
    PyObject *cpy_r_r1159;
    PyObject **cpy_r_r1161;
    PyObject *cpy_r_r1162;
    PyObject *cpy_r_r1163;
    PyObject *cpy_r_r1164;
    PyObject *cpy_r_r1165;
    int32_t cpy_r_r1166;
    char cpy_r_r1167;
    PyObject *cpy_r_r1168;
    PyObject *cpy_r_r1169;
    PyObject *cpy_r_r1170;
    PyObject *cpy_r_r1171;
    PyObject **cpy_r_r1173;
    PyObject *cpy_r_r1174;
    PyObject *cpy_r_r1175;
    PyObject *cpy_r_r1176;
    PyObject *cpy_r_r1177;
    int32_t cpy_r_r1178;
    char cpy_r_r1179;
    PyObject *cpy_r_r1180;
    PyObject *cpy_r_r1181;
    PyObject *cpy_r_r1182;
    PyObject *cpy_r_r1183;
    PyObject **cpy_r_r1185;
    PyObject *cpy_r_r1186;
    PyObject *cpy_r_r1187;
    PyObject *cpy_r_r1188;
    PyObject *cpy_r_r1189;
    int32_t cpy_r_r1190;
    char cpy_r_r1191;
    PyObject *cpy_r_r1192;
    PyObject *cpy_r_r1193;
    PyObject *cpy_r_r1194;
    PyObject *cpy_r_r1195;
    PyObject **cpy_r_r1197;
    PyObject *cpy_r_r1198;
    PyObject *cpy_r_r1199;
    PyObject *cpy_r_r1200;
    PyObject *cpy_r_r1201;
    int32_t cpy_r_r1202;
    char cpy_r_r1203;
    PyObject *cpy_r_r1204;
    PyObject *cpy_r_r1205;
    PyObject *cpy_r_r1206;
    int32_t cpy_r_r1207;
    char cpy_r_r1208;
    PyObject *cpy_r_r1209;
    PyObject *cpy_r_r1210;
    PyObject *cpy_r_r1211;
    int32_t cpy_r_r1212;
    char cpy_r_r1213;
    PyObject *cpy_r_r1214;
    PyObject *cpy_r_r1215;
    PyObject *cpy_r_r1216;
    int32_t cpy_r_r1217;
    char cpy_r_r1218;
    PyObject *cpy_r_r1219;
    PyObject *cpy_r_r1220;
    PyObject *cpy_r_r1221;
    int32_t cpy_r_r1222;
    char cpy_r_r1223;
    PyObject *cpy_r_r1224;
    PyObject *cpy_r_r1225;
    PyObject *cpy_r_r1226;
    int32_t cpy_r_r1227;
    char cpy_r_r1228;
    PyObject *cpy_r_r1229;
    PyObject *cpy_r_r1230;
    PyObject *cpy_r_r1231;
    int32_t cpy_r_r1232;
    char cpy_r_r1233;
    PyObject *cpy_r_r1234;
    PyObject *cpy_r_r1235;
    PyObject *cpy_r_r1236;
    int32_t cpy_r_r1237;
    char cpy_r_r1238;
    PyObject *cpy_r_r1239;
    PyObject *cpy_r_r1240;
    PyObject *cpy_r_r1241;
    int32_t cpy_r_r1242;
    char cpy_r_r1243;
    PyObject *cpy_r_r1244;
    PyObject *cpy_r_r1245;
    PyObject *cpy_r_r1246;
    int32_t cpy_r_r1247;
    char cpy_r_r1248;
    PyObject *cpy_r_r1249;
    PyObject *cpy_r_r1250;
    PyObject *cpy_r_r1251;
    int32_t cpy_r_r1252;
    char cpy_r_r1253;
    PyObject *cpy_r_r1254;
    PyObject *cpy_r_r1255;
    PyObject *cpy_r_r1256;
    int32_t cpy_r_r1257;
    char cpy_r_r1258;
    PyObject *cpy_r_r1259;
    PyObject *cpy_r_r1260;
    PyObject *cpy_r_r1261;
    int32_t cpy_r_r1262;
    char cpy_r_r1263;
    PyObject *cpy_r_r1264;
    PyObject *cpy_r_r1265;
    PyObject *cpy_r_r1266;
    int32_t cpy_r_r1267;
    char cpy_r_r1268;
    PyObject *cpy_r_r1269;
    PyObject *cpy_r_r1270;
    PyObject *cpy_r_r1271;
    PyObject *cpy_r_r1272;
    PyObject **cpy_r_r1274;
    PyObject *cpy_r_r1275;
    PyObject *cpy_r_r1276;
    PyObject *cpy_r_r1277;
    PyObject *cpy_r_r1278;
    int32_t cpy_r_r1279;
    char cpy_r_r1280;
    PyObject *cpy_r_r1281;
    PyObject *cpy_r_r1282;
    char cpy_r_r1283;
    PyObject *cpy_r_r1284;
    PyObject *cpy_r_r1285;
    PyObject *cpy_r_r1286;
    PyObject **cpy_r_r1288;
    PyObject *cpy_r_r1289;
    PyObject *cpy_r_r1290;
    PyObject *cpy_r_r1291;
    PyObject *cpy_r_r1292;
    int32_t cpy_r_r1293;
    char cpy_r_r1294;
    PyObject *cpy_r_r1295;
    PyObject *cpy_r_r1296;
    char cpy_r_r1297;
    PyObject *cpy_r_r1298;
    PyObject *cpy_r_r1299;
    PyObject *cpy_r_r1300;
    PyObject **cpy_r_r1302;
    PyObject *cpy_r_r1303;
    PyObject *cpy_r_r1304;
    PyObject *cpy_r_r1305;
    PyObject *cpy_r_r1306;
    int32_t cpy_r_r1307;
    char cpy_r_r1308;
    PyObject *cpy_r_r1309;
    PyObject *cpy_r_r1310;
    char cpy_r_r1311;
    PyObject *cpy_r_r1312;
    PyObject *cpy_r_r1313;
    PyObject *cpy_r_r1314;
    PyObject **cpy_r_r1316;
    PyObject *cpy_r_r1317;
    PyObject *cpy_r_r1318;
    PyObject *cpy_r_r1319;
    PyObject *cpy_r_r1320;
    int32_t cpy_r_r1321;
    char cpy_r_r1322;
    PyObject *cpy_r_r1323;
    PyObject *cpy_r_r1324;
    char cpy_r_r1325;
    PyObject *cpy_r_r1326;
    PyObject *cpy_r_r1327;
    PyObject *cpy_r_r1328;
    PyObject **cpy_r_r1330;
    PyObject *cpy_r_r1331;
    PyObject *cpy_r_r1332;
    PyObject *cpy_r_r1333;
    PyObject *cpy_r_r1334;
    int32_t cpy_r_r1335;
    char cpy_r_r1336;
    PyObject *cpy_r_r1337;
    PyObject *cpy_r_r1338;
    char cpy_r_r1339;
    PyObject *cpy_r_r1340;
    PyObject *cpy_r_r1341;
    PyObject *cpy_r_r1342;
    PyObject **cpy_r_r1344;
    PyObject *cpy_r_r1345;
    PyObject *cpy_r_r1346;
    PyObject *cpy_r_r1347;
    PyObject *cpy_r_r1348;
    int32_t cpy_r_r1349;
    char cpy_r_r1350;
    PyObject *cpy_r_r1351;
    PyObject *cpy_r_r1352;
    char cpy_r_r1353;
    PyObject *cpy_r_r1354;
    PyObject *cpy_r_r1355;
    PyObject *cpy_r_r1356;
    PyObject **cpy_r_r1358;
    PyObject *cpy_r_r1359;
    PyObject *cpy_r_r1360;
    PyObject *cpy_r_r1361;
    PyObject *cpy_r_r1362;
    int32_t cpy_r_r1363;
    char cpy_r_r1364;
    PyObject *cpy_r_r1365;
    PyObject *cpy_r_r1366;
    char cpy_r_r1367;
    PyObject *cpy_r_r1368;
    PyObject *cpy_r_r1369;
    PyObject *cpy_r_r1370;
    PyObject **cpy_r_r1372;
    PyObject *cpy_r_r1373;
    PyObject *cpy_r_r1374;
    PyObject *cpy_r_r1375;
    PyObject *cpy_r_r1376;
    int32_t cpy_r_r1377;
    char cpy_r_r1378;
    PyObject *cpy_r_r1379;
    PyObject *cpy_r_r1380;
    char cpy_r_r1381;
    PyObject *cpy_r_r1382;
    PyObject *cpy_r_r1383;
    PyObject *cpy_r_r1384;
    PyObject **cpy_r_r1386;
    PyObject *cpy_r_r1387;
    PyObject *cpy_r_r1388;
    PyObject *cpy_r_r1389;
    PyObject *cpy_r_r1390;
    int32_t cpy_r_r1391;
    char cpy_r_r1392;
    PyObject *cpy_r_r1393;
    PyObject *cpy_r_r1394;
    char cpy_r_r1395;
    PyObject *cpy_r_r1396;
    PyObject *cpy_r_r1397;
    PyObject *cpy_r_r1398;
    PyObject **cpy_r_r1400;
    PyObject *cpy_r_r1401;
    PyObject *cpy_r_r1402;
    PyObject *cpy_r_r1403;
    PyObject *cpy_r_r1404;
    int32_t cpy_r_r1405;
    char cpy_r_r1406;
    PyObject *cpy_r_r1407;
    PyObject *cpy_r_r1408;
    char cpy_r_r1409;
    PyObject *cpy_r_r1410;
    PyObject *cpy_r_r1411;
    PyObject *cpy_r_r1412;
    PyObject **cpy_r_r1414;
    PyObject *cpy_r_r1415;
    PyObject *cpy_r_r1416;
    PyObject *cpy_r_r1417;
    PyObject *cpy_r_r1418;
    int32_t cpy_r_r1419;
    char cpy_r_r1420;
    PyObject *cpy_r_r1421;
    PyObject *cpy_r_r1422;
    char cpy_r_r1423;
    PyObject *cpy_r_r1424;
    PyObject *cpy_r_r1425;
    PyObject *cpy_r_r1426;
    PyObject **cpy_r_r1428;
    PyObject *cpy_r_r1429;
    PyObject *cpy_r_r1430;
    PyObject *cpy_r_r1431;
    PyObject *cpy_r_r1432;
    int32_t cpy_r_r1433;
    char cpy_r_r1434;
    PyObject *cpy_r_r1435;
    PyObject *cpy_r_r1436;
    char cpy_r_r1437;
    PyObject *cpy_r_r1438;
    PyObject *cpy_r_r1439;
    PyObject *cpy_r_r1440;
    PyObject **cpy_r_r1442;
    PyObject *cpy_r_r1443;
    PyObject *cpy_r_r1444;
    PyObject *cpy_r_r1445;
    PyObject *cpy_r_r1446;
    int32_t cpy_r_r1447;
    char cpy_r_r1448;
    char cpy_r_r1449;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", -1, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_message_registry___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 9, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9254]; /* ('Final', 'NamedTuple') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_message_registry___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 11, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9141]; /* ('errorcodes',) */
    cpy_r_r14 = CPyStatics[9142]; /* ('codes',) */
    cpy_r_r15 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r16 = CPyStatic_message_registry___globals;
    cpy_r_r17 = CPyImport_ImportFromMany(cpy_r_r15, cpy_r_r13, cpy_r_r14, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 13, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPyModule_mypy = cpy_r_r17;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r18 = CPyModule_typing;
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_r18 != cpy_r_r19;
    if (cpy_r_r20) goto CPyL9;
    cpy_r_r21 = CPyStatics[21]; /* 'typing' */
    cpy_r_r22 = PyImport_Import(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPyModule_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r22);
CPyL9: ;
    cpy_r_r23 = PyImport_GetModuleDict();
    cpy_r_r24 = CPyStatics[21]; /* 'typing' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r26 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r28 = PyTuple_Pack(1, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r29 = CPyModule_typing;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_r29 != cpy_r_r30;
    if (cpy_r_r31) goto CPyL15;
    cpy_r_r32 = CPyStatics[21]; /* 'typing' */
    cpy_r_r33 = PyImport_Import(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals);
        goto CPyL522;
    }
    CPyModule_typing = cpy_r_r33;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r33);
CPyL15: ;
    cpy_r_r34 = PyImport_GetModuleDict();
    cpy_r_r35 = CPyStatics[21]; /* 'typing' */
    cpy_r_r36 = CPyDict_GetItem(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals);
        goto CPyL522;
    }
    cpy_r_r37 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals);
        goto CPyL522;
    }
    cpy_r_r39 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r40 = PyObject_HasAttr(cpy_r_r38, cpy_r_r39);
    if (!cpy_r_r40) goto CPyL22;
    cpy_r_r41 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r42 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals);
        goto CPyL523;
    }
    PyObject *cpy_r_r44[2] = {cpy_r_r41, cpy_r_r28};
    cpy_r_r45 = (PyObject **)&cpy_r_r44;
    cpy_r_r46 = _PyObject_Vectorcall(cpy_r_r43, cpy_r_r45, 2, 0);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals);
        goto CPyL523;
    }
    if (likely(PyDict_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals, "dict", cpy_r_r46);
        goto CPyL523;
    }
    cpy_r_r48 = cpy_r_r47;
    goto CPyL24;
CPyL22: ;
    cpy_r_r49 = PyDict_New();
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals);
        goto CPyL523;
    }
    cpy_r_r48 = cpy_r_r49;
CPyL24: ;
    cpy_r_r50 = PyDict_New();
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals);
        goto CPyL524;
    }
    cpy_r_r51 = (PyObject *)&PyUnicode_Type;
    cpy_r_r52 = CPyStatics[2242]; /* 'value' */
    cpy_r_r53 = CPyDict_SetItem(cpy_r_r50, cpy_r_r52, cpy_r_r51);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 17, CPyStatic_message_registry___globals);
        goto CPyL525;
    }
    cpy_r_r55 = (PyObject *)&PyType_Type;
    cpy_r_r56 = CPyStatics[6]; /* 'code' */
    cpy_r_r57 = CPyDict_SetItem(cpy_r_r50, cpy_r_r56, cpy_r_r55);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 18, CPyStatic_message_registry___globals);
        goto CPyL525;
    }
    cpy_r_r59 = CPyStatics[6]; /* 'code' */
    cpy_r_r60 = Py_None;
    cpy_r_r61 = CPyDict_SetItem(cpy_r_r48, cpy_r_r59, cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 18, CPyStatic_message_registry___globals);
        goto CPyL525;
    }
    cpy_r_r63 = CPyDef_message_registry___format_ErrorMessage_obj();
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 20, CPyStatic_message_registry___globals);
        goto CPyL525;
    }
    cpy_r_r64 = CPyStatics[193]; /* 'format' */
    cpy_r_r65 = CPyDict_SetItem(cpy_r_r48, cpy_r_r64, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 20, CPyStatic_message_registry___globals);
        goto CPyL525;
    }
    cpy_r_r67 = CPyDef_message_registry___with_additional_msg_ErrorMessage_obj();
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 23, CPyStatic_message_registry___globals);
        goto CPyL525;
    }
    cpy_r_r68 = CPyStatics[873]; /* 'with_additional_msg' */
    cpy_r_r69 = CPyDict_SetItem(cpy_r_r48, cpy_r_r68, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 23, CPyStatic_message_registry___globals);
        goto CPyL525;
    }
    cpy_r_r71 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r72 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r73 = CPyDict_SetItem(cpy_r_r48, cpy_r_r72, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals);
        goto CPyL524;
    }
    cpy_r_r75 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r76 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r77 = CPyDict_SetItem(cpy_r_r48, cpy_r_r76, cpy_r_r75);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals);
        goto CPyL524;
    }
    cpy_r_r79 = CPyStatics[933]; /* 'mypy.message_registry' */
    cpy_r_r80 = CPyStatics[619]; /* '__module__' */
    cpy_r_r81 = CPyDict_SetItem(cpy_r_r48, cpy_r_r80, cpy_r_r79);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals);
        goto CPyL524;
    }
    PyObject *cpy_r_r83[3] = {cpy_r_r71, cpy_r_r28, cpy_r_r48};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r84, 3, 0);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals);
        goto CPyL526;
    }
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r48);
    CPyType_message_registry___ErrorMessage = (PyTypeObject *)cpy_r_r85;
    CPy_INCREF(CPyType_message_registry___ErrorMessage);
    cpy_r_r86 = CPyStatic_message_registry___globals;
    cpy_r_r87 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r88 = CPyDict_SetItem(cpy_r_r86, cpy_r_r87, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 16, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r90 = (PyObject *)CPyType_message_registry___ErrorMessage;
    cpy_r_r91 = CPyStatics[3113]; /* 'Invalid type: try using Literal[{}.{}] instead?' */
    cpy_r_r92 = CPyStatic_errorcodes___VALID_TYPE;
    if (likely(cpy_r_r92 != NULL)) goto CPyL40;
    PyErr_SetString(PyExc_NameError, "value for final name \"VALID_TYPE\" was not set");
    cpy_r_r93 = 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 29, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r94 = CPyStatic_message_registry___globals;
    cpy_r_r95 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r96 = CPyDict_GetItem(cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 28, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r97[2] = {cpy_r_r91, cpy_r_r92};
    cpy_r_r98 = (PyObject **)&cpy_r_r97;
    cpy_r_r99 = _PyObject_Vectorcall(cpy_r_r96, cpy_r_r98, 2, 0);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 28, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r99)))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 28, CPyStatic_message_registry___globals, "tuple", cpy_r_r99);
        goto CPyL521;
    }
    CPyStatic_message_registry___INVALID_TYPE_RAW_ENUM_VALUE = cpy_r_r100;
    CPy_INCREF(CPyStatic_message_registry___INVALID_TYPE_RAW_ENUM_VALUE);
    cpy_r_r101 = CPyStatic_message_registry___globals;
    cpy_r_r102 = CPyStatics[3114]; /* 'INVALID_TYPE_RAW_ENUM_VALUE' */
    cpy_r_r103 = CPyDict_SetItem(cpy_r_r101, cpy_r_r102, cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 28, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r105 = CPyStatics[3115]; /* 'No return value expected' */
    cpy_r_r106 = CPyStatic_errorcodes___RETURN_VALUE;
    if (likely(cpy_r_r106 != NULL)) goto CPyL47;
    PyErr_SetString(PyExc_NameError, "value for final name \"RETURN_VALUE\" was not set");
    cpy_r_r107 = 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 33, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL47: ;
    cpy_r_r108 = CPyStatic_message_registry___globals;
    cpy_r_r109 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r110 = CPyDict_GetItem(cpy_r_r108, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 33, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r111[2] = {cpy_r_r105, cpy_r_r106};
    cpy_r_r112 = (PyObject **)&cpy_r_r111;
    cpy_r_r113 = _PyObject_Vectorcall(cpy_r_r110, cpy_r_r112, 2, 0);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 33, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r113)))
        cpy_r_r114 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 33, CPyStatic_message_registry___globals, "tuple", cpy_r_r113);
        goto CPyL521;
    }
    CPyStatic_message_registry___NO_RETURN_VALUE_EXPECTED = cpy_r_r114;
    CPy_INCREF(CPyStatic_message_registry___NO_RETURN_VALUE_EXPECTED);
    cpy_r_r115 = CPyStatic_message_registry___globals;
    cpy_r_r116 = CPyStatics[3116]; /* 'NO_RETURN_VALUE_EXPECTED' */
    cpy_r_r117 = CPyDict_SetItem(cpy_r_r115, cpy_r_r116, cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 33, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r119 = CPyStatics[3117]; /* 'Missing return statement' */
    cpy_r_r120 = CPyStatic_errorcodes___RETURN;
    if (likely(cpy_r_r120 != NULL)) goto CPyL54;
    PyErr_SetString(PyExc_NameError, "value for final name \"RETURN\" was not set");
    cpy_r_r121 = 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 34, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL54: ;
    cpy_r_r122 = CPyStatic_message_registry___globals;
    cpy_r_r123 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r124 = CPyDict_GetItem(cpy_r_r122, cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 34, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r125[2] = {cpy_r_r119, cpy_r_r120};
    cpy_r_r126 = (PyObject **)&cpy_r_r125;
    cpy_r_r127 = _PyObject_Vectorcall(cpy_r_r124, cpy_r_r126, 2, 0);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 34, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r127)))
        cpy_r_r128 = cpy_r_r127;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 34, CPyStatic_message_registry___globals, "tuple", cpy_r_r127);
        goto CPyL521;
    }
    CPyStatic_message_registry___MISSING_RETURN_STATEMENT = cpy_r_r128;
    CPy_INCREF(CPyStatic_message_registry___MISSING_RETURN_STATEMENT);
    cpy_r_r129 = CPyStatic_message_registry___globals;
    cpy_r_r130 = CPyStatics[3118]; /* 'MISSING_RETURN_STATEMENT' */
    cpy_r_r131 = CPyDict_SetItem(cpy_r_r129, cpy_r_r130, cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 34, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r133 = CPyStatics[3119]; /* ('If the method is meant to be abstract, use '
                                      '@abc.abstractmethod') */
    cpy_r_r134 = CPyStatic_errorcodes___EMPTY_BODY;
    if (likely(cpy_r_r134 != NULL)) goto CPyL61;
    PyErr_SetString(PyExc_NameError, "value for final name \"EMPTY_BODY\" was not set");
    cpy_r_r135 = 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 36, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL61: ;
    cpy_r_r136 = CPyStatic_message_registry___globals;
    cpy_r_r137 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r138 = CPyDict_GetItem(cpy_r_r136, cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 35, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r139[2] = {cpy_r_r133, cpy_r_r134};
    cpy_r_r140 = (PyObject **)&cpy_r_r139;
    cpy_r_r141 = _PyObject_Vectorcall(cpy_r_r138, cpy_r_r140, 2, 0);
    CPy_DECREF(cpy_r_r138);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 35, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r141)))
        cpy_r_r142 = cpy_r_r141;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 35, CPyStatic_message_registry___globals, "tuple", cpy_r_r141);
        goto CPyL521;
    }
    CPyStatic_message_registry___EMPTY_BODY_ABSTRACT = cpy_r_r142;
    CPy_INCREF(CPyStatic_message_registry___EMPTY_BODY_ABSTRACT);
    cpy_r_r143 = CPyStatic_message_registry___globals;
    cpy_r_r144 = CPyStatics[3120]; /* 'EMPTY_BODY_ABSTRACT' */
    cpy_r_r145 = CPyDict_SetItem(cpy_r_r143, cpy_r_r144, cpy_r_r142);
    CPy_DECREF(cpy_r_r142);
    cpy_r_r146 = cpy_r_r145 >= 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 35, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r147 = CPyStatics[3121]; /* 'Implicit return in function which does not return' */
    cpy_r_r148 = CPyStatic_message_registry___globals;
    cpy_r_r149 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r150 = CPyDict_GetItem(cpy_r_r148, cpy_r_r149);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 38, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r151[1] = {cpy_r_r147};
    cpy_r_r152 = (PyObject **)&cpy_r_r151;
    cpy_r_r153 = _PyObject_Vectorcall(cpy_r_r150, cpy_r_r152, 1, 0);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 38, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r153)))
        cpy_r_r154 = cpy_r_r153;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 38, CPyStatic_message_registry___globals, "tuple", cpy_r_r153);
        goto CPyL521;
    }
    CPyStatic_message_registry___INVALID_IMPLICIT_RETURN = cpy_r_r154;
    CPy_INCREF(CPyStatic_message_registry___INVALID_IMPLICIT_RETURN);
    cpy_r_r155 = CPyStatic_message_registry___globals;
    cpy_r_r156 = CPyStatics[3122]; /* 'INVALID_IMPLICIT_RETURN' */
    cpy_r_r157 = CPyDict_SetItem(cpy_r_r155, cpy_r_r156, cpy_r_r154);
    CPy_DECREF(cpy_r_r154);
    cpy_r_r158 = cpy_r_r157 >= 0;
    if (unlikely(!cpy_r_r158)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 38, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r159 = CPyStatics[3123]; /* 'Incompatible return value type' */
    cpy_r_r160 = CPyStatic_errorcodes___RETURN_VALUE;
    if (likely(cpy_r_r160 != NULL)) goto CPyL72;
    PyErr_SetString(PyExc_NameError, "value for final name \"RETURN_VALUE\" was not set");
    cpy_r_r161 = 0;
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 40, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL72: ;
    cpy_r_r162 = CPyStatic_message_registry___globals;
    cpy_r_r163 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r164 = CPyDict_GetItem(cpy_r_r162, cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 39, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r165[2] = {cpy_r_r159, cpy_r_r160};
    cpy_r_r166 = (PyObject **)&cpy_r_r165;
    cpy_r_r167 = _PyObject_Vectorcall(cpy_r_r164, cpy_r_r166, 2, 0);
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 39, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r167)))
        cpy_r_r168 = cpy_r_r167;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 39, CPyStatic_message_registry___globals, "tuple", cpy_r_r167);
        goto CPyL521;
    }
    CPyStatic_message_registry___INCOMPATIBLE_RETURN_VALUE_TYPE = cpy_r_r168;
    CPy_INCREF(CPyStatic_message_registry___INCOMPATIBLE_RETURN_VALUE_TYPE);
    cpy_r_r169 = CPyStatic_message_registry___globals;
    cpy_r_r170 = CPyStatics[3124]; /* 'INCOMPATIBLE_RETURN_VALUE_TYPE' */
    cpy_r_r171 = CPyDict_SetItem(cpy_r_r169, cpy_r_r170, cpy_r_r168);
    CPy_DECREF(cpy_r_r168);
    cpy_r_r172 = cpy_r_r171 >= 0;
    if (unlikely(!cpy_r_r172)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 39, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r173 = CPyStatics[3125]; /* 'Return value expected' */
    cpy_r_r174 = CPyStatic_errorcodes___RETURN_VALUE;
    if (likely(cpy_r_r174 != NULL)) goto CPyL79;
    PyErr_SetString(PyExc_NameError, "value for final name \"RETURN_VALUE\" was not set");
    cpy_r_r175 = 0;
    if (unlikely(!cpy_r_r175)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 42, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL79: ;
    cpy_r_r176 = CPyStatic_message_registry___globals;
    cpy_r_r177 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r178 = CPyDict_GetItem(cpy_r_r176, cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 42, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r179[2] = {cpy_r_r173, cpy_r_r174};
    cpy_r_r180 = (PyObject **)&cpy_r_r179;
    cpy_r_r181 = _PyObject_Vectorcall(cpy_r_r178, cpy_r_r180, 2, 0);
    CPy_DECREF(cpy_r_r178);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 42, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r181)))
        cpy_r_r182 = cpy_r_r181;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 42, CPyStatic_message_registry___globals, "tuple", cpy_r_r181);
        goto CPyL521;
    }
    CPyStatic_message_registry___RETURN_VALUE_EXPECTED = cpy_r_r182;
    CPy_INCREF(CPyStatic_message_registry___RETURN_VALUE_EXPECTED);
    cpy_r_r183 = CPyStatic_message_registry___globals;
    cpy_r_r184 = CPyStatics[3126]; /* 'RETURN_VALUE_EXPECTED' */
    cpy_r_r185 = CPyDict_SetItem(cpy_r_r183, cpy_r_r184, cpy_r_r182);
    CPy_DECREF(cpy_r_r182);
    cpy_r_r186 = cpy_r_r185 >= 0;
    if (unlikely(!cpy_r_r186)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 42, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r187 = CPyStatics[3127]; /* 'Return statement in function which does not return' */
    cpy_r_r188 = CPyStatic_message_registry___globals;
    cpy_r_r189 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r190 = CPyDict_GetItem(cpy_r_r188, cpy_r_r189);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 43, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r191[1] = {cpy_r_r187};
    cpy_r_r192 = (PyObject **)&cpy_r_r191;
    cpy_r_r193 = _PyObject_Vectorcall(cpy_r_r190, cpy_r_r192, 1, 0);
    CPy_DECREF(cpy_r_r190);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 43, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r193)))
        cpy_r_r194 = cpy_r_r193;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 43, CPyStatic_message_registry___globals, "tuple", cpy_r_r193);
        goto CPyL521;
    }
    CPyStatic_message_registry___NO_RETURN_EXPECTED = cpy_r_r194;
    CPy_INCREF(CPyStatic_message_registry___NO_RETURN_EXPECTED);
    cpy_r_r195 = CPyStatic_message_registry___globals;
    cpy_r_r196 = CPyStatics[3128]; /* 'NO_RETURN_EXPECTED' */
    cpy_r_r197 = CPyDict_SetItem(cpy_r_r195, cpy_r_r196, cpy_r_r194);
    CPy_DECREF(cpy_r_r194);
    cpy_r_r198 = cpy_r_r197 >= 0;
    if (unlikely(!cpy_r_r198)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 43, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r199 = CPyStatics[3129]; /* 'Exception must be derived from BaseException' */
    cpy_r_r200 = CPyStatic_message_registry___globals;
    cpy_r_r201 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r202 = CPyDict_GetItem(cpy_r_r200, cpy_r_r201);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 44, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r203[1] = {cpy_r_r199};
    cpy_r_r204 = (PyObject **)&cpy_r_r203;
    cpy_r_r205 = _PyObject_Vectorcall(cpy_r_r202, cpy_r_r204, 1, 0);
    CPy_DECREF(cpy_r_r202);
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 44, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r205)))
        cpy_r_r206 = cpy_r_r205;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 44, CPyStatic_message_registry___globals, "tuple", cpy_r_r205);
        goto CPyL521;
    }
    CPyStatic_message_registry___INVALID_EXCEPTION = cpy_r_r206;
    CPy_INCREF(CPyStatic_message_registry___INVALID_EXCEPTION);
    cpy_r_r207 = CPyStatic_message_registry___globals;
    cpy_r_r208 = CPyStatics[3130]; /* 'INVALID_EXCEPTION' */
    cpy_r_r209 = CPyDict_SetItem(cpy_r_r207, cpy_r_r208, cpy_r_r206);
    CPy_DECREF(cpy_r_r206);
    cpy_r_r210 = cpy_r_r209 >= 0;
    if (unlikely(!cpy_r_r210)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 44, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r211 = CPyStatics[3131]; /* ('Exception type must be derived from BaseException '
                                      '(or be a tuple of exception classes)') */
    cpy_r_r212 = CPyStatic_message_registry___globals;
    cpy_r_r213 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r214 = CPyDict_GetItem(cpy_r_r212, cpy_r_r213);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 45, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r215[1] = {cpy_r_r211};
    cpy_r_r216 = (PyObject **)&cpy_r_r215;
    cpy_r_r217 = _PyObject_Vectorcall(cpy_r_r214, cpy_r_r216, 1, 0);
    CPy_DECREF(cpy_r_r214);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 45, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r217)))
        cpy_r_r218 = cpy_r_r217;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 45, CPyStatic_message_registry___globals, "tuple", cpy_r_r217);
        goto CPyL521;
    }
    CPyStatic_message_registry___INVALID_EXCEPTION_TYPE = cpy_r_r218;
    CPy_INCREF(CPyStatic_message_registry___INVALID_EXCEPTION_TYPE);
    cpy_r_r219 = CPyStatic_message_registry___globals;
    cpy_r_r220 = CPyStatics[3132]; /* 'INVALID_EXCEPTION_TYPE' */
    cpy_r_r221 = CPyDict_SetItem(cpy_r_r219, cpy_r_r220, cpy_r_r218);
    CPy_DECREF(cpy_r_r218);
    cpy_r_r222 = cpy_r_r221 >= 0;
    if (unlikely(!cpy_r_r222)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 45, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r223 = CPyStatics[3133]; /* ('Exception type in except* cannot derive from '
                                      'BaseExceptionGroup') */
    cpy_r_r224 = CPyStatic_message_registry___globals;
    cpy_r_r225 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r226 = CPyDict_GetItem(cpy_r_r224, cpy_r_r225);
    if (unlikely(cpy_r_r226 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 48, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r227[1] = {cpy_r_r223};
    cpy_r_r228 = (PyObject **)&cpy_r_r227;
    cpy_r_r229 = _PyObject_Vectorcall(cpy_r_r226, cpy_r_r228, 1, 0);
    CPy_DECREF(cpy_r_r226);
    if (unlikely(cpy_r_r229 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 48, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r229)))
        cpy_r_r230 = cpy_r_r229;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 48, CPyStatic_message_registry___globals, "tuple", cpy_r_r229);
        goto CPyL521;
    }
    CPyStatic_message_registry___INVALID_EXCEPTION_GROUP = cpy_r_r230;
    CPy_INCREF(CPyStatic_message_registry___INVALID_EXCEPTION_GROUP);
    cpy_r_r231 = CPyStatic_message_registry___globals;
    cpy_r_r232 = CPyStatics[3134]; /* 'INVALID_EXCEPTION_GROUP' */
    cpy_r_r233 = CPyDict_SetItem(cpy_r_r231, cpy_r_r232, cpy_r_r230);
    CPy_DECREF(cpy_r_r230);
    cpy_r_r234 = cpy_r_r233 >= 0;
    if (unlikely(!cpy_r_r234)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 48, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r235 = CPyStatics[3135]; /* '"return" with value in async generator is not allowed' */
    cpy_r_r236 = CPyStatic_message_registry___globals;
    cpy_r_r237 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r238 = CPyDict_GetItem(cpy_r_r236, cpy_r_r237);
    if (unlikely(cpy_r_r238 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 51, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r239[1] = {cpy_r_r235};
    cpy_r_r240 = (PyObject **)&cpy_r_r239;
    cpy_r_r241 = _PyObject_Vectorcall(cpy_r_r238, cpy_r_r240, 1, 0);
    CPy_DECREF(cpy_r_r238);
    if (unlikely(cpy_r_r241 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 51, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r241)))
        cpy_r_r242 = cpy_r_r241;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 51, CPyStatic_message_registry___globals, "tuple", cpy_r_r241);
        goto CPyL521;
    }
    CPyStatic_message_registry___RETURN_IN_ASYNC_GENERATOR = cpy_r_r242;
    CPy_INCREF(CPyStatic_message_registry___RETURN_IN_ASYNC_GENERATOR);
    cpy_r_r243 = CPyStatic_message_registry___globals;
    cpy_r_r244 = CPyStatics[3136]; /* 'RETURN_IN_ASYNC_GENERATOR' */
    cpy_r_r245 = CPyDict_SetItem(cpy_r_r243, cpy_r_r244, cpy_r_r242);
    CPy_DECREF(cpy_r_r242);
    cpy_r_r246 = cpy_r_r245 >= 0;
    if (unlikely(!cpy_r_r246)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 51, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r247 = CPyStatics[3137]; /* ('The return type of a generator function should be '
                                      '"Generator" or one of its supertypes') */
    cpy_r_r248 = CPyStatic_message_registry___globals;
    cpy_r_r249 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r250 = CPyDict_GetItem(cpy_r_r248, cpy_r_r249);
    if (unlikely(cpy_r_r250 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 54, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r251[1] = {cpy_r_r247};
    cpy_r_r252 = (PyObject **)&cpy_r_r251;
    cpy_r_r253 = _PyObject_Vectorcall(cpy_r_r250, cpy_r_r252, 1, 0);
    CPy_DECREF(cpy_r_r250);
    if (unlikely(cpy_r_r253 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 54, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r253)))
        cpy_r_r254 = cpy_r_r253;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 54, CPyStatic_message_registry___globals, "tuple", cpy_r_r253);
        goto CPyL521;
    }
    CPyStatic_message_registry___INVALID_RETURN_TYPE_FOR_GENERATOR = cpy_r_r254;
    CPy_INCREF(CPyStatic_message_registry___INVALID_RETURN_TYPE_FOR_GENERATOR);
    cpy_r_r255 = CPyStatic_message_registry___globals;
    cpy_r_r256 = CPyStatics[3138]; /* 'INVALID_RETURN_TYPE_FOR_GENERATOR' */
    cpy_r_r257 = CPyDict_SetItem(cpy_r_r255, cpy_r_r256, cpy_r_r254);
    CPy_DECREF(cpy_r_r254);
    cpy_r_r258 = cpy_r_r257 >= 0;
    if (unlikely(!cpy_r_r258)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 54, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r259 = CPyStatics[3139]; /* ('The return type of an async generator function '
                                      'should be "AsyncGenerator" or one of its supertypes') */
    cpy_r_r260 = CPyStatic_message_registry___globals;
    cpy_r_r261 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r262 = CPyDict_GetItem(cpy_r_r260, cpy_r_r261);
    if (unlikely(cpy_r_r262 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 57, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r263[1] = {cpy_r_r259};
    cpy_r_r264 = (PyObject **)&cpy_r_r263;
    cpy_r_r265 = _PyObject_Vectorcall(cpy_r_r262, cpy_r_r264, 1, 0);
    CPy_DECREF(cpy_r_r262);
    if (unlikely(cpy_r_r265 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 57, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r265)))
        cpy_r_r266 = cpy_r_r265;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 57, CPyStatic_message_registry___globals, "tuple", cpy_r_r265);
        goto CPyL521;
    }
    CPyStatic_message_registry___INVALID_RETURN_TYPE_FOR_ASYNC_GENERATOR = cpy_r_r266;
    CPy_INCREF(CPyStatic_message_registry___INVALID_RETURN_TYPE_FOR_ASYNC_GENERATOR);
    cpy_r_r267 = CPyStatic_message_registry___globals;
    cpy_r_r268 = CPyStatics[3140]; /* 'INVALID_RETURN_TYPE_FOR_ASYNC_GENERATOR' */
    cpy_r_r269 = CPyDict_SetItem(cpy_r_r267, cpy_r_r268, cpy_r_r266);
    CPy_DECREF(cpy_r_r266);
    cpy_r_r270 = cpy_r_r269 >= 0;
    if (unlikely(!cpy_r_r270)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 57, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r271 = CPyStatics[3141]; /* 'Yield value expected' */
    cpy_r_r272 = CPyStatic_message_registry___globals;
    cpy_r_r273 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r274 = CPyDict_GetItem(cpy_r_r272, cpy_r_r273);
    if (unlikely(cpy_r_r274 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 61, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r275[1] = {cpy_r_r271};
    cpy_r_r276 = (PyObject **)&cpy_r_r275;
    cpy_r_r277 = _PyObject_Vectorcall(cpy_r_r274, cpy_r_r276, 1, 0);
    CPy_DECREF(cpy_r_r274);
    if (unlikely(cpy_r_r277 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 61, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r277)))
        cpy_r_r278 = cpy_r_r277;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 61, CPyStatic_message_registry___globals, "tuple", cpy_r_r277);
        goto CPyL521;
    }
    CPyStatic_message_registry___YIELD_VALUE_EXPECTED = cpy_r_r278;
    CPy_INCREF(CPyStatic_message_registry___YIELD_VALUE_EXPECTED);
    cpy_r_r279 = CPyStatic_message_registry___globals;
    cpy_r_r280 = CPyStatics[3142]; /* 'YIELD_VALUE_EXPECTED' */
    cpy_r_r281 = CPyDict_SetItem(cpy_r_r279, cpy_r_r280, cpy_r_r278);
    CPy_DECREF(cpy_r_r278);
    cpy_r_r282 = cpy_r_r281 >= 0;
    if (unlikely(!cpy_r_r282)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 61, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r283 = CPyStatics[3143]; /* 'Incompatible types' */
    cpy_r_r284 = CPyStatic_message_registry___globals;
    cpy_r_r285 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r286 = CPyDict_GetItem(cpy_r_r284, cpy_r_r285);
    if (unlikely(cpy_r_r286 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 62, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r287[1] = {cpy_r_r283};
    cpy_r_r288 = (PyObject **)&cpy_r_r287;
    cpy_r_r289 = _PyObject_Vectorcall(cpy_r_r286, cpy_r_r288, 1, 0);
    CPy_DECREF(cpy_r_r286);
    if (unlikely(cpy_r_r289 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 62, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r289)))
        cpy_r_r290 = cpy_r_r289;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 62, CPyStatic_message_registry___globals, "tuple", cpy_r_r289);
        goto CPyL521;
    }
    CPyStatic_message_registry___INCOMPATIBLE_TYPES = cpy_r_r290;
    CPy_INCREF(CPyStatic_message_registry___INCOMPATIBLE_TYPES);
    cpy_r_r291 = CPyStatic_message_registry___globals;
    cpy_r_r292 = CPyStatics[3144]; /* 'INCOMPATIBLE_TYPES' */
    cpy_r_r293 = CPyDict_SetItem(cpy_r_r291, cpy_r_r292, cpy_r_r290);
    CPy_DECREF(cpy_r_r290);
    cpy_r_r294 = cpy_r_r293 >= 0;
    if (unlikely(!cpy_r_r294)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 62, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r295 = CPyStatics[3145]; /* 'Incompatible types in assignment' */
    cpy_r_r296 = CPyStatic_errorcodes___ASSIGNMENT;
    if (likely(cpy_r_r296 != NULL)) goto CPyL122;
    PyErr_SetString(PyExc_NameError, "value for final name \"ASSIGNMENT\" was not set");
    cpy_r_r297 = 0;
    if (unlikely(!cpy_r_r297)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 64, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL122: ;
    cpy_r_r298 = CPyStatic_message_registry___globals;
    cpy_r_r299 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r300 = CPyDict_GetItem(cpy_r_r298, cpy_r_r299);
    if (unlikely(cpy_r_r300 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 63, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r301[2] = {cpy_r_r295, cpy_r_r296};
    cpy_r_r302 = (PyObject **)&cpy_r_r301;
    cpy_r_r303 = CPyStatics[9163]; /* ('code',) */
    cpy_r_r304 = _PyObject_Vectorcall(cpy_r_r300, cpy_r_r302, 1, cpy_r_r303);
    CPy_DECREF(cpy_r_r300);
    if (unlikely(cpy_r_r304 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 63, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r304)))
        cpy_r_r305 = cpy_r_r304;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 63, CPyStatic_message_registry___globals, "tuple", cpy_r_r304);
        goto CPyL521;
    }
    CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_ASSIGNMENT = cpy_r_r305;
    CPy_INCREF(CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_ASSIGNMENT);
    cpy_r_r306 = CPyStatic_message_registry___globals;
    cpy_r_r307 = CPyStatics[3146]; /* 'INCOMPATIBLE_TYPES_IN_ASSIGNMENT' */
    cpy_r_r308 = CPyDict_SetItem(cpy_r_r306, cpy_r_r307, cpy_r_r305);
    CPy_DECREF(cpy_r_r305);
    cpy_r_r309 = cpy_r_r308 >= 0;
    if (unlikely(!cpy_r_r309)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 63, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r310 = CPyStatics[3147]; /* 'Incompatible types in "await"' */
    cpy_r_r311 = CPyStatic_message_registry___globals;
    cpy_r_r312 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r313 = CPyDict_GetItem(cpy_r_r311, cpy_r_r312);
    if (unlikely(cpy_r_r313 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 66, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r314[1] = {cpy_r_r310};
    cpy_r_r315 = (PyObject **)&cpy_r_r314;
    cpy_r_r316 = _PyObject_Vectorcall(cpy_r_r313, cpy_r_r315, 1, 0);
    CPy_DECREF(cpy_r_r313);
    if (unlikely(cpy_r_r316 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 66, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r316)))
        cpy_r_r317 = cpy_r_r316;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 66, CPyStatic_message_registry___globals, "tuple", cpy_r_r316);
        goto CPyL521;
    }
    CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_AWAIT = cpy_r_r317;
    CPy_INCREF(CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_AWAIT);
    cpy_r_r318 = CPyStatic_message_registry___globals;
    cpy_r_r319 = CPyStatics[3148]; /* 'INCOMPATIBLE_TYPES_IN_AWAIT' */
    cpy_r_r320 = CPyDict_SetItem(cpy_r_r318, cpy_r_r319, cpy_r_r317);
    CPy_DECREF(cpy_r_r317);
    cpy_r_r321 = cpy_r_r320 >= 0;
    if (unlikely(!cpy_r_r321)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 66, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r322 = CPyStatics[3149]; /* 'Incompatible redefinition' */
    cpy_r_r323 = CPyStatic_message_registry___globals;
    cpy_r_r324 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r325 = CPyDict_GetItem(cpy_r_r323, cpy_r_r324);
    if (unlikely(cpy_r_r325 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 67, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r326[1] = {cpy_r_r322};
    cpy_r_r327 = (PyObject **)&cpy_r_r326;
    cpy_r_r328 = _PyObject_Vectorcall(cpy_r_r325, cpy_r_r327, 1, 0);
    CPy_DECREF(cpy_r_r325);
    if (unlikely(cpy_r_r328 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 67, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r328)))
        cpy_r_r329 = cpy_r_r328;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 67, CPyStatic_message_registry___globals, "tuple", cpy_r_r328);
        goto CPyL521;
    }
    CPyStatic_message_registry___INCOMPATIBLE_REDEFINITION = cpy_r_r329;
    CPy_INCREF(CPyStatic_message_registry___INCOMPATIBLE_REDEFINITION);
    cpy_r_r330 = CPyStatic_message_registry___globals;
    cpy_r_r331 = CPyStatics[3150]; /* 'INCOMPATIBLE_REDEFINITION' */
    cpy_r_r332 = CPyDict_SetItem(cpy_r_r330, cpy_r_r331, cpy_r_r329);
    CPy_DECREF(cpy_r_r329);
    cpy_r_r333 = cpy_r_r332 >= 0;
    if (unlikely(!cpy_r_r333)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 67, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r334 = CPyStatics[833]; /* 'Incompatible types in "async with" for "__aenter__"' */
    cpy_r_r335 = CPyStatic_message_registry___globals;
    cpy_r_r336 = CPyStatics[3151]; /* 'INCOMPATIBLE_TYPES_IN_ASYNC_WITH_AENTER' */
    cpy_r_r337 = CPyDict_SetItem(cpy_r_r335, cpy_r_r336, cpy_r_r334);
    cpy_r_r338 = cpy_r_r337 >= 0;
    if (unlikely(!cpy_r_r338)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 69, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r339 = CPyStatics[835]; /* 'Incompatible types in "async with" for "__aexit__"' */
    cpy_r_r340 = CPyStatic_message_registry___globals;
    cpy_r_r341 = CPyStatics[3152]; /* 'INCOMPATIBLE_TYPES_IN_ASYNC_WITH_AEXIT' */
    cpy_r_r342 = CPyDict_SetItem(cpy_r_r340, cpy_r_r341, cpy_r_r339);
    cpy_r_r343 = cpy_r_r342 >= 0;
    if (unlikely(!cpy_r_r343)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 72, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r344 = CPyStatics[822]; /* 'Incompatible types in "async for"' */
    cpy_r_r345 = CPyStatic_message_registry___globals;
    cpy_r_r346 = CPyStatics[3153]; /* 'INCOMPATIBLE_TYPES_IN_ASYNC_FOR' */
    cpy_r_r347 = CPyDict_SetItem(cpy_r_r345, cpy_r_r346, cpy_r_r344);
    cpy_r_r348 = cpy_r_r347 >= 0;
    if (unlikely(!cpy_r_r348)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 74, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r349 = CPyStatics[758]; /* 'Invalid type for "__slots__"' */
    cpy_r_r350 = CPyStatic_message_registry___globals;
    cpy_r_r351 = CPyStatics[3154]; /* 'INVALID_TYPE_FOR_SLOTS' */
    cpy_r_r352 = CPyDict_SetItem(cpy_r_r350, cpy_r_r351, cpy_r_r349);
    cpy_r_r353 = cpy_r_r352 >= 0;
    if (unlikely(!cpy_r_r353)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 75, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r354 = CPyStatics[3155]; /* '"async for" outside async function' */
    cpy_r_r355 = CPyStatic_message_registry___globals;
    cpy_r_r356 = CPyStatics[3156]; /* 'ASYNC_FOR_OUTSIDE_COROUTINE' */
    cpy_r_r357 = CPyDict_SetItem(cpy_r_r355, cpy_r_r356, cpy_r_r354);
    cpy_r_r358 = cpy_r_r357 >= 0;
    if (unlikely(!cpy_r_r358)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 77, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r359 = CPyStatics[3157]; /* '"async with" outside async function' */
    cpy_r_r360 = CPyStatic_message_registry___globals;
    cpy_r_r361 = CPyStatics[3158]; /* 'ASYNC_WITH_OUTSIDE_COROUTINE' */
    cpy_r_r362 = CPyDict_SetItem(cpy_r_r360, cpy_r_r361, cpy_r_r359);
    cpy_r_r363 = cpy_r_r362 >= 0;
    if (unlikely(!cpy_r_r363)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 78, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r364 = CPyStatics[3159]; /* 'Incompatible types in "yield"' */
    cpy_r_r365 = CPyStatic_message_registry___globals;
    cpy_r_r366 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r367 = CPyDict_GetItem(cpy_r_r365, cpy_r_r366);
    if (unlikely(cpy_r_r367 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 80, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r368[1] = {cpy_r_r364};
    cpy_r_r369 = (PyObject **)&cpy_r_r368;
    cpy_r_r370 = _PyObject_Vectorcall(cpy_r_r367, cpy_r_r369, 1, 0);
    CPy_DECREF(cpy_r_r367);
    if (unlikely(cpy_r_r370 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 80, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r370)))
        cpy_r_r371 = cpy_r_r370;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 80, CPyStatic_message_registry___globals, "tuple", cpy_r_r370);
        goto CPyL521;
    }
    CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_YIELD = cpy_r_r371;
    CPy_INCREF(CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_YIELD);
    cpy_r_r372 = CPyStatic_message_registry___globals;
    cpy_r_r373 = CPyStatics[3160]; /* 'INCOMPATIBLE_TYPES_IN_YIELD' */
    cpy_r_r374 = CPyDict_SetItem(cpy_r_r372, cpy_r_r373, cpy_r_r371);
    CPy_DECREF(cpy_r_r371);
    cpy_r_r375 = cpy_r_r374 >= 0;
    if (unlikely(!cpy_r_r375)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 80, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r376 = CPyStatics[3161]; /* 'Incompatible types in "yield from"' */
    cpy_r_r377 = CPyStatic_message_registry___globals;
    cpy_r_r378 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r379 = CPyDict_GetItem(cpy_r_r377, cpy_r_r378);
    if (unlikely(cpy_r_r379 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 81, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r380[1] = {cpy_r_r376};
    cpy_r_r381 = (PyObject **)&cpy_r_r380;
    cpy_r_r382 = _PyObject_Vectorcall(cpy_r_r379, cpy_r_r381, 1, 0);
    CPy_DECREF(cpy_r_r379);
    if (unlikely(cpy_r_r382 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 81, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r382)))
        cpy_r_r383 = cpy_r_r382;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 81, CPyStatic_message_registry___globals, "tuple", cpy_r_r382);
        goto CPyL521;
    }
    CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_YIELD_FROM = cpy_r_r383;
    CPy_INCREF(CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_YIELD_FROM);
    cpy_r_r384 = CPyStatic_message_registry___globals;
    cpy_r_r385 = CPyStatics[3162]; /* 'INCOMPATIBLE_TYPES_IN_YIELD_FROM' */
    cpy_r_r386 = CPyDict_SetItem(cpy_r_r384, cpy_r_r385, cpy_r_r383);
    CPy_DECREF(cpy_r_r383);
    cpy_r_r387 = cpy_r_r386 >= 0;
    if (unlikely(!cpy_r_r387)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 81, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r388 = CPyStatics[1432]; /* 'Incompatible types in string interpolation' */
    cpy_r_r389 = CPyStatic_message_registry___globals;
    cpy_r_r390 = CPyStatics[3163]; /* 'INCOMPATIBLE_TYPES_IN_STR_INTERPOLATION' */
    cpy_r_r391 = CPyDict_SetItem(cpy_r_r389, cpy_r_r390, cpy_r_r388);
    cpy_r_r392 = cpy_r_r391 >= 0;
    if (unlikely(!cpy_r_r392)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 82, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r393 = CPyStatics[3164]; /* 'Incompatible types in capture pattern' */
    cpy_r_r394 = CPyStatic_message_registry___globals;
    cpy_r_r395 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r396 = CPyDict_GetItem(cpy_r_r394, cpy_r_r395);
    if (unlikely(cpy_r_r396 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 83, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r397[1] = {cpy_r_r393};
    cpy_r_r398 = (PyObject **)&cpy_r_r397;
    cpy_r_r399 = _PyObject_Vectorcall(cpy_r_r396, cpy_r_r398, 1, 0);
    CPy_DECREF(cpy_r_r396);
    if (unlikely(cpy_r_r399 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 83, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r399)))
        cpy_r_r400 = cpy_r_r399;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 83, CPyStatic_message_registry___globals, "tuple", cpy_r_r399);
        goto CPyL521;
    }
    CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_CAPTURE = cpy_r_r400;
    CPy_INCREF(CPyStatic_message_registry___INCOMPATIBLE_TYPES_IN_CAPTURE);
    cpy_r_r401 = CPyStatic_message_registry___globals;
    cpy_r_r402 = CPyStatics[3165]; /* 'INCOMPATIBLE_TYPES_IN_CAPTURE' */
    cpy_r_r403 = CPyDict_SetItem(cpy_r_r401, cpy_r_r402, cpy_r_r400);
    CPy_DECREF(cpy_r_r400);
    cpy_r_r404 = cpy_r_r403 >= 0;
    if (unlikely(!cpy_r_r404)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 83, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r405 = CPyStatics[3166]; /* 'The return type of "{}" must be None' */
    cpy_r_r406 = CPyStatic_message_registry___globals;
    cpy_r_r407 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r408 = CPyDict_GetItem(cpy_r_r406, cpy_r_r407);
    if (unlikely(cpy_r_r408 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 84, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r409[1] = {cpy_r_r405};
    cpy_r_r410 = (PyObject **)&cpy_r_r409;
    cpy_r_r411 = _PyObject_Vectorcall(cpy_r_r408, cpy_r_r410, 1, 0);
    CPy_DECREF(cpy_r_r408);
    if (unlikely(cpy_r_r411 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 84, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r411)))
        cpy_r_r412 = cpy_r_r411;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 84, CPyStatic_message_registry___globals, "tuple", cpy_r_r411);
        goto CPyL521;
    }
    CPyStatic_message_registry___MUST_HAVE_NONE_RETURN_TYPE = cpy_r_r412;
    CPy_INCREF(CPyStatic_message_registry___MUST_HAVE_NONE_RETURN_TYPE);
    cpy_r_r413 = CPyStatic_message_registry___globals;
    cpy_r_r414 = CPyStatics[3167]; /* 'MUST_HAVE_NONE_RETURN_TYPE' */
    cpy_r_r415 = CPyDict_SetItem(cpy_r_r413, cpy_r_r414, cpy_r_r412);
    CPy_DECREF(cpy_r_r412);
    cpy_r_r416 = cpy_r_r415 >= 0;
    if (unlikely(!cpy_r_r416)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 84, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r417 = CPyStatics[3168]; /* 'Tuple index out of range' */
    cpy_r_r418 = CPyStatic_message_registry___globals;
    cpy_r_r419 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r420 = CPyDict_GetItem(cpy_r_r418, cpy_r_r419);
    if (unlikely(cpy_r_r420 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 85, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r421[1] = {cpy_r_r417};
    cpy_r_r422 = (PyObject **)&cpy_r_r421;
    cpy_r_r423 = _PyObject_Vectorcall(cpy_r_r420, cpy_r_r422, 1, 0);
    CPy_DECREF(cpy_r_r420);
    if (unlikely(cpy_r_r423 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 85, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r423)))
        cpy_r_r424 = cpy_r_r423;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 85, CPyStatic_message_registry___globals, "tuple", cpy_r_r423);
        goto CPyL521;
    }
    CPyStatic_message_registry___TUPLE_INDEX_OUT_OF_RANGE = cpy_r_r424;
    CPy_INCREF(CPyStatic_message_registry___TUPLE_INDEX_OUT_OF_RANGE);
    cpy_r_r425 = CPyStatic_message_registry___globals;
    cpy_r_r426 = CPyStatics[3169]; /* 'TUPLE_INDEX_OUT_OF_RANGE' */
    cpy_r_r427 = CPyDict_SetItem(cpy_r_r425, cpy_r_r426, cpy_r_r424);
    CPy_DECREF(cpy_r_r424);
    cpy_r_r428 = cpy_r_r427 >= 0;
    if (unlikely(!cpy_r_r428)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 85, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r429 = CPyStatics[3170]; /* 'Slice index must be an integer, SupportsIndex or None' */
    cpy_r_r430 = CPyStatic_message_registry___globals;
    cpy_r_r431 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r432 = CPyDict_GetItem(cpy_r_r430, cpy_r_r431);
    if (unlikely(cpy_r_r432 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 86, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r433[1] = {cpy_r_r429};
    cpy_r_r434 = (PyObject **)&cpy_r_r433;
    cpy_r_r435 = _PyObject_Vectorcall(cpy_r_r432, cpy_r_r434, 1, 0);
    CPy_DECREF(cpy_r_r432);
    if (unlikely(cpy_r_r435 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 86, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r435)))
        cpy_r_r436 = cpy_r_r435;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 86, CPyStatic_message_registry___globals, "tuple", cpy_r_r435);
        goto CPyL521;
    }
    CPyStatic_message_registry___INVALID_SLICE_INDEX = cpy_r_r436;
    CPy_INCREF(CPyStatic_message_registry___INVALID_SLICE_INDEX);
    cpy_r_r437 = CPyStatic_message_registry___globals;
    cpy_r_r438 = CPyStatics[3171]; /* 'INVALID_SLICE_INDEX' */
    cpy_r_r439 = CPyDict_SetItem(cpy_r_r437, cpy_r_r438, cpy_r_r436);
    CPy_DECREF(cpy_r_r436);
    cpy_r_r440 = cpy_r_r439 >= 0;
    if (unlikely(!cpy_r_r440)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 86, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r441 = CPyStatics[3172]; /* 'Cannot infer type of lambda' */
    cpy_r_r442 = CPyStatic_message_registry___globals;
    cpy_r_r443 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r444 = CPyDict_GetItem(cpy_r_r442, cpy_r_r443);
    if (unlikely(cpy_r_r444 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 87, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r445[1] = {cpy_r_r441};
    cpy_r_r446 = (PyObject **)&cpy_r_r445;
    cpy_r_r447 = _PyObject_Vectorcall(cpy_r_r444, cpy_r_r446, 1, 0);
    CPy_DECREF(cpy_r_r444);
    if (unlikely(cpy_r_r447 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 87, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r447)))
        cpy_r_r448 = cpy_r_r447;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 87, CPyStatic_message_registry___globals, "tuple", cpy_r_r447);
        goto CPyL521;
    }
    CPyStatic_message_registry___CANNOT_INFER_LAMBDA_TYPE = cpy_r_r448;
    CPy_INCREF(CPyStatic_message_registry___CANNOT_INFER_LAMBDA_TYPE);
    cpy_r_r449 = CPyStatic_message_registry___globals;
    cpy_r_r450 = CPyStatics[3173]; /* 'CANNOT_INFER_LAMBDA_TYPE' */
    cpy_r_r451 = CPyDict_SetItem(cpy_r_r449, cpy_r_r450, cpy_r_r448);
    CPy_DECREF(cpy_r_r448);
    cpy_r_r452 = cpy_r_r451 >= 0;
    if (unlikely(!cpy_r_r452)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 87, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r453 = CPyStatics[1319]; /* ('Accessing "__init__" on an instance is unsound, '
                                      'since instance.__init__ could be from an '
                                      'incompatible subclass') */
    cpy_r_r454 = CPyStatic_message_registry___globals;
    cpy_r_r455 = CPyStatics[3174]; /* 'CANNOT_ACCESS_INIT' */
    cpy_r_r456 = CPyDict_SetItem(cpy_r_r454, cpy_r_r455, cpy_r_r453);
    cpy_r_r457 = cpy_r_r456 >= 0;
    if (unlikely(!cpy_r_r457)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 89, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r458 = CPyStatics[3175]; /* '"__new__" must return a class instance (got {})' */
    cpy_r_r459 = CPyStatic_message_registry___globals;
    cpy_r_r460 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r461 = CPyDict_GetItem(cpy_r_r459, cpy_r_r460);
    if (unlikely(cpy_r_r461 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 92, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r462[1] = {cpy_r_r458};
    cpy_r_r463 = (PyObject **)&cpy_r_r462;
    cpy_r_r464 = _PyObject_Vectorcall(cpy_r_r461, cpy_r_r463, 1, 0);
    CPy_DECREF(cpy_r_r461);
    if (unlikely(cpy_r_r464 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 92, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r464)))
        cpy_r_r465 = cpy_r_r464;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 92, CPyStatic_message_registry___globals, "tuple", cpy_r_r464);
        goto CPyL521;
    }
    CPyStatic_message_registry___NON_INSTANCE_NEW_TYPE = cpy_r_r465;
    CPy_INCREF(CPyStatic_message_registry___NON_INSTANCE_NEW_TYPE);
    cpy_r_r466 = CPyStatic_message_registry___globals;
    cpy_r_r467 = CPyStatics[3176]; /* 'NON_INSTANCE_NEW_TYPE' */
    cpy_r_r468 = CPyDict_SetItem(cpy_r_r466, cpy_r_r467, cpy_r_r465);
    CPy_DECREF(cpy_r_r465);
    cpy_r_r469 = cpy_r_r468 >= 0;
    if (unlikely(!cpy_r_r469)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 92, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r470 = CPyStatics[3177]; /* 'Incompatible return type for "__new__"' */
    cpy_r_r471 = CPyStatic_message_registry___globals;
    cpy_r_r472 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r473 = CPyDict_GetItem(cpy_r_r471, cpy_r_r472);
    if (unlikely(cpy_r_r473 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 93, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r474[1] = {cpy_r_r470};
    cpy_r_r475 = (PyObject **)&cpy_r_r474;
    cpy_r_r476 = _PyObject_Vectorcall(cpy_r_r473, cpy_r_r475, 1, 0);
    CPy_DECREF(cpy_r_r473);
    if (unlikely(cpy_r_r476 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 93, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r476)))
        cpy_r_r477 = cpy_r_r476;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 93, CPyStatic_message_registry___globals, "tuple", cpy_r_r476);
        goto CPyL521;
    }
    CPyStatic_message_registry___INVALID_NEW_TYPE = cpy_r_r477;
    CPy_INCREF(CPyStatic_message_registry___INVALID_NEW_TYPE);
    cpy_r_r478 = CPyStatic_message_registry___globals;
    cpy_r_r479 = CPyStatics[3178]; /* 'INVALID_NEW_TYPE' */
    cpy_r_r480 = CPyDict_SetItem(cpy_r_r478, cpy_r_r479, cpy_r_r477);
    CPy_DECREF(cpy_r_r477);
    cpy_r_r481 = cpy_r_r480 >= 0;
    if (unlikely(!cpy_r_r481)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 93, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r482 = CPyStatics[3179]; /* 'Unsupported decorated constructor type' */
    cpy_r_r483 = CPyStatic_message_registry___globals;
    cpy_r_r484 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r485 = CPyDict_GetItem(cpy_r_r483, cpy_r_r484);
    if (unlikely(cpy_r_r485 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 94, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r486[1] = {cpy_r_r482};
    cpy_r_r487 = (PyObject **)&cpy_r_r486;
    cpy_r_r488 = _PyObject_Vectorcall(cpy_r_r485, cpy_r_r487, 1, 0);
    CPy_DECREF(cpy_r_r485);
    if (unlikely(cpy_r_r488 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 94, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r488)))
        cpy_r_r489 = cpy_r_r488;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 94, CPyStatic_message_registry___globals, "tuple", cpy_r_r488);
        goto CPyL521;
    }
    CPyStatic_message_registry___BAD_CONSTRUCTOR_TYPE = cpy_r_r489;
    CPy_INCREF(CPyStatic_message_registry___BAD_CONSTRUCTOR_TYPE);
    cpy_r_r490 = CPyStatic_message_registry___globals;
    cpy_r_r491 = CPyStatics[3180]; /* 'BAD_CONSTRUCTOR_TYPE' */
    cpy_r_r492 = CPyDict_SetItem(cpy_r_r490, cpy_r_r491, cpy_r_r489);
    CPy_DECREF(cpy_r_r489);
    cpy_r_r493 = cpy_r_r492 >= 0;
    if (unlikely(!cpy_r_r493)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 94, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r494 = CPyStatics[3181]; /* 'Cannot assign to a method' */
    cpy_r_r495 = CPyStatic_message_registry___globals;
    cpy_r_r496 = CPyStatics[3182]; /* 'CANNOT_ASSIGN_TO_METHOD' */
    cpy_r_r497 = CPyDict_SetItem(cpy_r_r495, cpy_r_r496, cpy_r_r494);
    cpy_r_r498 = cpy_r_r497 >= 0;
    if (unlikely(!cpy_r_r498)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 95, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r499 = CPyStatics[1326]; /* 'Cannot assign to a type' */
    cpy_r_r500 = CPyStatic_message_registry___globals;
    cpy_r_r501 = CPyStatics[3183]; /* 'CANNOT_ASSIGN_TO_TYPE' */
    cpy_r_r502 = CPyDict_SetItem(cpy_r_r500, cpy_r_r501, cpy_r_r499);
    cpy_r_r503 = cpy_r_r502 >= 0;
    if (unlikely(!cpy_r_r503)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 96, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r504 = CPyStatics[3184]; /* ('Overloaded method has both abstract and non-abstract '
                                      'variants') */
    cpy_r_r505 = CPyStatic_message_registry___globals;
    cpy_r_r506 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r507 = CPyDict_GetItem(cpy_r_r505, cpy_r_r506);
    if (unlikely(cpy_r_r507 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 97, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r508[1] = {cpy_r_r504};
    cpy_r_r509 = (PyObject **)&cpy_r_r508;
    cpy_r_r510 = _PyObject_Vectorcall(cpy_r_r507, cpy_r_r509, 1, 0);
    CPy_DECREF(cpy_r_r507);
    if (unlikely(cpy_r_r510 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 97, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r510)))
        cpy_r_r511 = cpy_r_r510;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 97, CPyStatic_message_registry___globals, "tuple", cpy_r_r510);
        goto CPyL521;
    }
    CPyStatic_message_registry___INCONSISTENT_ABSTRACT_OVERLOAD = cpy_r_r511;
    CPy_INCREF(CPyStatic_message_registry___INCONSISTENT_ABSTRACT_OVERLOAD);
    cpy_r_r512 = CPyStatic_message_registry___globals;
    cpy_r_r513 = CPyStatics[3185]; /* 'INCONSISTENT_ABSTRACT_OVERLOAD' */
    cpy_r_r514 = CPyDict_SetItem(cpy_r_r512, cpy_r_r513, cpy_r_r511);
    CPy_DECREF(cpy_r_r511);
    cpy_r_r515 = cpy_r_r514 >= 0;
    if (unlikely(!cpy_r_r515)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 97, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r516 = CPyStatics[3186]; /* 'Single overload definition, multiple required' */
    cpy_r_r517 = CPyStatic_message_registry___globals;
    cpy_r_r518 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r519 = CPyDict_GetItem(cpy_r_r517, cpy_r_r518);
    if (unlikely(cpy_r_r519 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 100, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r520[1] = {cpy_r_r516};
    cpy_r_r521 = (PyObject **)&cpy_r_r520;
    cpy_r_r522 = _PyObject_Vectorcall(cpy_r_r519, cpy_r_r521, 1, 0);
    CPy_DECREF(cpy_r_r519);
    if (unlikely(cpy_r_r522 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 100, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r522)))
        cpy_r_r523 = cpy_r_r522;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 100, CPyStatic_message_registry___globals, "tuple", cpy_r_r522);
        goto CPyL521;
    }
    CPyStatic_message_registry___MULTIPLE_OVERLOADS_REQUIRED = cpy_r_r523;
    CPy_INCREF(CPyStatic_message_registry___MULTIPLE_OVERLOADS_REQUIRED);
    cpy_r_r524 = CPyStatic_message_registry___globals;
    cpy_r_r525 = CPyStatics[3187]; /* 'MULTIPLE_OVERLOADS_REQUIRED' */
    cpy_r_r526 = CPyDict_SetItem(cpy_r_r524, cpy_r_r525, cpy_r_r523);
    CPy_DECREF(cpy_r_r523);
    cpy_r_r527 = cpy_r_r526 >= 0;
    if (unlikely(!cpy_r_r527)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 100, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r528 = CPyStatics[3188]; /* 'Read-only property cannot override read-write property' */
    cpy_r_r529 = CPyStatic_message_registry___globals;
    cpy_r_r530 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r531 = CPyDict_GetItem(cpy_r_r529, cpy_r_r530);
    if (unlikely(cpy_r_r531 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 101, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r532[1] = {cpy_r_r528};
    cpy_r_r533 = (PyObject **)&cpy_r_r532;
    cpy_r_r534 = _PyObject_Vectorcall(cpy_r_r531, cpy_r_r533, 1, 0);
    CPy_DECREF(cpy_r_r531);
    if (unlikely(cpy_r_r534 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 101, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r534)))
        cpy_r_r535 = cpy_r_r534;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 101, CPyStatic_message_registry___globals, "tuple", cpy_r_r534);
        goto CPyL521;
    }
    CPyStatic_message_registry___READ_ONLY_PROPERTY_OVERRIDES_READ_WRITE = cpy_r_r535;
    CPy_INCREF(CPyStatic_message_registry___READ_ONLY_PROPERTY_OVERRIDES_READ_WRITE);
    cpy_r_r536 = CPyStatic_message_registry___globals;
    cpy_r_r537 = CPyStatics[3189]; /* 'READ_ONLY_PROPERTY_OVERRIDES_READ_WRITE' */
    cpy_r_r538 = CPyDict_SetItem(cpy_r_r536, cpy_r_r537, cpy_r_r535);
    CPy_DECREF(cpy_r_r535);
    cpy_r_r539 = cpy_r_r538 >= 0;
    if (unlikely(!cpy_r_r539)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 101, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r540 = CPyStatics[1435]; /* 'Format requires a mapping' */
    cpy_r_r541 = CPyStatic_message_registry___globals;
    cpy_r_r542 = CPyStatics[3190]; /* 'FORMAT_REQUIRES_MAPPING' */
    cpy_r_r543 = CPyDict_SetItem(cpy_r_r541, cpy_r_r542, cpy_r_r540);
    cpy_r_r544 = cpy_r_r543 >= 0;
    if (unlikely(!cpy_r_r544)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 104, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r545 = CPyStatics[3191]; /* ('Cannot use a contravariant type variable as return '
                                      'type') */
    cpy_r_r546 = CPyStatic_message_registry___globals;
    cpy_r_r547 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r548 = CPyDict_GetItem(cpy_r_r546, cpy_r_r547);
    if (unlikely(cpy_r_r548 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 105, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r549[1] = {cpy_r_r545};
    cpy_r_r550 = (PyObject **)&cpy_r_r549;
    cpy_r_r551 = _PyObject_Vectorcall(cpy_r_r548, cpy_r_r550, 1, 0);
    CPy_DECREF(cpy_r_r548);
    if (unlikely(cpy_r_r551 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 105, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r551)))
        cpy_r_r552 = cpy_r_r551;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 105, CPyStatic_message_registry___globals, "tuple", cpy_r_r551);
        goto CPyL521;
    }
    CPyStatic_message_registry___RETURN_TYPE_CANNOT_BE_CONTRAVARIANT = cpy_r_r552;
    CPy_INCREF(CPyStatic_message_registry___RETURN_TYPE_CANNOT_BE_CONTRAVARIANT);
    cpy_r_r553 = CPyStatic_message_registry___globals;
    cpy_r_r554 = CPyStatics[3192]; /* 'RETURN_TYPE_CANNOT_BE_CONTRAVARIANT' */
    cpy_r_r555 = CPyDict_SetItem(cpy_r_r553, cpy_r_r554, cpy_r_r552);
    CPy_DECREF(cpy_r_r552);
    cpy_r_r556 = cpy_r_r555 >= 0;
    if (unlikely(!cpy_r_r556)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 105, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r557 = CPyStatics[3193]; /* 'Cannot use a covariant type variable as a parameter' */
    cpy_r_r558 = CPyStatic_message_registry___globals;
    cpy_r_r559 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r560 = CPyDict_GetItem(cpy_r_r558, cpy_r_r559);
    if (unlikely(cpy_r_r560 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 108, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r561[1] = {cpy_r_r557};
    cpy_r_r562 = (PyObject **)&cpy_r_r561;
    cpy_r_r563 = _PyObject_Vectorcall(cpy_r_r560, cpy_r_r562, 1, 0);
    CPy_DECREF(cpy_r_r560);
    if (unlikely(cpy_r_r563 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 108, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r563)))
        cpy_r_r564 = cpy_r_r563;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 108, CPyStatic_message_registry___globals, "tuple", cpy_r_r563);
        goto CPyL521;
    }
    CPyStatic_message_registry___FUNCTION_PARAMETER_CANNOT_BE_COVARIANT = cpy_r_r564;
    CPy_INCREF(CPyStatic_message_registry___FUNCTION_PARAMETER_CANNOT_BE_COVARIANT);
    cpy_r_r565 = CPyStatic_message_registry___globals;
    cpy_r_r566 = CPyStatics[3194]; /* 'FUNCTION_PARAMETER_CANNOT_BE_COVARIANT' */
    cpy_r_r567 = CPyDict_SetItem(cpy_r_r565, cpy_r_r566, cpy_r_r564);
    CPy_DECREF(cpy_r_r564);
    cpy_r_r568 = cpy_r_r567 >= 0;
    if (unlikely(!cpy_r_r568)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 108, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r569 = CPyStatics[3195]; /* 'Incompatible import of "{}"' */
    cpy_r_r570 = CPyStatic_errorcodes___ASSIGNMENT;
    if (likely(cpy_r_r570 != NULL)) goto CPyL208;
    PyErr_SetString(PyExc_NameError, "value for final name \"ASSIGNMENT\" was not set");
    cpy_r_r571 = 0;
    if (unlikely(!cpy_r_r571)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 111, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL208: ;
    cpy_r_r572 = CPyStatic_message_registry___globals;
    cpy_r_r573 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r574 = CPyDict_GetItem(cpy_r_r572, cpy_r_r573);
    if (unlikely(cpy_r_r574 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 111, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r575[2] = {cpy_r_r569, cpy_r_r570};
    cpy_r_r576 = (PyObject **)&cpy_r_r575;
    cpy_r_r577 = CPyStatics[9163]; /* ('code',) */
    cpy_r_r578 = _PyObject_Vectorcall(cpy_r_r574, cpy_r_r576, 1, cpy_r_r577);
    CPy_DECREF(cpy_r_r574);
    if (unlikely(cpy_r_r578 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 111, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r578)))
        cpy_r_r579 = cpy_r_r578;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 111, CPyStatic_message_registry___globals, "tuple", cpy_r_r578);
        goto CPyL521;
    }
    CPyStatic_message_registry___INCOMPATIBLE_IMPORT_OF = cpy_r_r579;
    CPy_INCREF(CPyStatic_message_registry___INCOMPATIBLE_IMPORT_OF);
    cpy_r_r580 = CPyStatic_message_registry___globals;
    cpy_r_r581 = CPyStatics[3196]; /* 'INCOMPATIBLE_IMPORT_OF' */
    cpy_r_r582 = CPyDict_SetItem(cpy_r_r580, cpy_r_r581, cpy_r_r579);
    CPy_DECREF(cpy_r_r579);
    cpy_r_r583 = cpy_r_r582 >= 0;
    if (unlikely(!cpy_r_r583)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 111, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r584 = CPyStatics[3197]; /* 'Function is missing a type annotation' */
    cpy_r_r585 = CPyStatic_errorcodes___NO_UNTYPED_DEF;
    if (likely(cpy_r_r585 != NULL)) goto CPyL215;
    PyErr_SetString(PyExc_NameError, "value for final name \"NO_UNTYPED_DEF\" was not set");
    cpy_r_r586 = 0;
    if (unlikely(!cpy_r_r586)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 113, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL215: ;
    cpy_r_r587 = CPyStatic_message_registry___globals;
    cpy_r_r588 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r589 = CPyDict_GetItem(cpy_r_r587, cpy_r_r588);
    if (unlikely(cpy_r_r589 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 112, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r590[2] = {cpy_r_r584, cpy_r_r585};
    cpy_r_r591 = (PyObject **)&cpy_r_r590;
    cpy_r_r592 = _PyObject_Vectorcall(cpy_r_r589, cpy_r_r591, 2, 0);
    CPy_DECREF(cpy_r_r589);
    if (unlikely(cpy_r_r592 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 112, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r592)))
        cpy_r_r593 = cpy_r_r592;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 112, CPyStatic_message_registry___globals, "tuple", cpy_r_r592);
        goto CPyL521;
    }
    CPyStatic_message_registry___FUNCTION_TYPE_EXPECTED = cpy_r_r593;
    CPy_INCREF(CPyStatic_message_registry___FUNCTION_TYPE_EXPECTED);
    cpy_r_r594 = CPyStatic_message_registry___globals;
    cpy_r_r595 = CPyStatics[3198]; /* 'FUNCTION_TYPE_EXPECTED' */
    cpy_r_r596 = CPyDict_SetItem(cpy_r_r594, cpy_r_r595, cpy_r_r593);
    CPy_DECREF(cpy_r_r593);
    cpy_r_r597 = cpy_r_r596 >= 0;
    if (unlikely(!cpy_r_r597)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 112, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r598 = CPyStatics[3199]; /* 'Type application is only supported for generic classes' */
    cpy_r_r599 = CPyStatic_message_registry___globals;
    cpy_r_r600 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r601 = CPyDict_GetItem(cpy_r_r599, cpy_r_r600);
    if (unlikely(cpy_r_r601 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 115, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r602[1] = {cpy_r_r598};
    cpy_r_r603 = (PyObject **)&cpy_r_r602;
    cpy_r_r604 = _PyObject_Vectorcall(cpy_r_r601, cpy_r_r603, 1, 0);
    CPy_DECREF(cpy_r_r601);
    if (unlikely(cpy_r_r604 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 115, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r604)))
        cpy_r_r605 = cpy_r_r604;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 115, CPyStatic_message_registry___globals, "tuple", cpy_r_r604);
        goto CPyL521;
    }
    CPyStatic_message_registry___ONLY_CLASS_APPLICATION = cpy_r_r605;
    CPy_INCREF(CPyStatic_message_registry___ONLY_CLASS_APPLICATION);
    cpy_r_r606 = CPyStatic_message_registry___globals;
    cpy_r_r607 = CPyStatics[3200]; /* 'ONLY_CLASS_APPLICATION' */
    cpy_r_r608 = CPyDict_SetItem(cpy_r_r606, cpy_r_r607, cpy_r_r605);
    CPy_DECREF(cpy_r_r605);
    cpy_r_r609 = cpy_r_r608 >= 0;
    if (unlikely(!cpy_r_r609)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 115, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r610 = CPyStatics[3201]; /* 'Function is missing a return type annotation' */
    cpy_r_r611 = CPyStatic_errorcodes___NO_UNTYPED_DEF;
    if (likely(cpy_r_r611 != NULL)) goto CPyL226;
    PyErr_SetString(PyExc_NameError, "value for final name \"NO_UNTYPED_DEF\" was not set");
    cpy_r_r612 = 0;
    if (unlikely(!cpy_r_r612)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 119, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL226: ;
    cpy_r_r613 = CPyStatic_message_registry___globals;
    cpy_r_r614 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r615 = CPyDict_GetItem(cpy_r_r613, cpy_r_r614);
    if (unlikely(cpy_r_r615 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 118, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r616[2] = {cpy_r_r610, cpy_r_r611};
    cpy_r_r617 = (PyObject **)&cpy_r_r616;
    cpy_r_r618 = _PyObject_Vectorcall(cpy_r_r615, cpy_r_r617, 2, 0);
    CPy_DECREF(cpy_r_r615);
    if (unlikely(cpy_r_r618 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 118, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r618)))
        cpy_r_r619 = cpy_r_r618;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 118, CPyStatic_message_registry___globals, "tuple", cpy_r_r618);
        goto CPyL521;
    }
    CPyStatic_message_registry___RETURN_TYPE_EXPECTED = cpy_r_r619;
    CPy_INCREF(CPyStatic_message_registry___RETURN_TYPE_EXPECTED);
    cpy_r_r620 = CPyStatic_message_registry___globals;
    cpy_r_r621 = CPyStatics[3202]; /* 'RETURN_TYPE_EXPECTED' */
    cpy_r_r622 = CPyDict_SetItem(cpy_r_r620, cpy_r_r621, cpy_r_r619);
    CPy_DECREF(cpy_r_r619);
    cpy_r_r623 = cpy_r_r622 >= 0;
    if (unlikely(!cpy_r_r623)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 118, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r624 = CPyStatics[3203]; /* ('Function is missing a type annotation for one or '
                                      'more arguments') */
    cpy_r_r625 = CPyStatic_errorcodes___NO_UNTYPED_DEF;
    if (likely(cpy_r_r625 != NULL)) goto CPyL233;
    PyErr_SetString(PyExc_NameError, "value for final name \"NO_UNTYPED_DEF\" was not set");
    cpy_r_r626 = 0;
    if (unlikely(!cpy_r_r626)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 122, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL233: ;
    cpy_r_r627 = CPyStatic_message_registry___globals;
    cpy_r_r628 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r629 = CPyDict_GetItem(cpy_r_r627, cpy_r_r628);
    if (unlikely(cpy_r_r629 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 121, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r630[2] = {cpy_r_r624, cpy_r_r625};
    cpy_r_r631 = (PyObject **)&cpy_r_r630;
    cpy_r_r632 = _PyObject_Vectorcall(cpy_r_r629, cpy_r_r631, 2, 0);
    CPy_DECREF(cpy_r_r629);
    if (unlikely(cpy_r_r632 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 121, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r632)))
        cpy_r_r633 = cpy_r_r632;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 121, CPyStatic_message_registry___globals, "tuple", cpy_r_r632);
        goto CPyL521;
    }
    CPyStatic_message_registry___ARGUMENT_TYPE_EXPECTED = cpy_r_r633;
    CPy_INCREF(CPyStatic_message_registry___ARGUMENT_TYPE_EXPECTED);
    cpy_r_r634 = CPyStatic_message_registry___globals;
    cpy_r_r635 = CPyStatics[3204]; /* 'ARGUMENT_TYPE_EXPECTED' */
    cpy_r_r636 = CPyDict_SetItem(cpy_r_r634, cpy_r_r635, cpy_r_r633);
    CPy_DECREF(cpy_r_r633);
    cpy_r_r637 = cpy_r_r636 >= 0;
    if (unlikely(!cpy_r_r637)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 121, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r638 = CPyStatics[3205]; /* ('Keyword argument only valid with "str" key type in '
                                      'call to "dict"') */
    cpy_r_r639 = CPyStatic_message_registry___globals;
    cpy_r_r640 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r641 = CPyDict_GetItem(cpy_r_r639, cpy_r_r640);
    if (unlikely(cpy_r_r641 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 124, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r642[1] = {cpy_r_r638};
    cpy_r_r643 = (PyObject **)&cpy_r_r642;
    cpy_r_r644 = _PyObject_Vectorcall(cpy_r_r641, cpy_r_r643, 1, 0);
    CPy_DECREF(cpy_r_r641);
    if (unlikely(cpy_r_r644 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 124, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r644)))
        cpy_r_r645 = cpy_r_r644;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 124, CPyStatic_message_registry___globals, "tuple", cpy_r_r644);
        goto CPyL521;
    }
    CPyStatic_message_registry___KEYWORD_ARGUMENT_REQUIRES_STR_KEY_TYPE = cpy_r_r645;
    CPy_INCREF(CPyStatic_message_registry___KEYWORD_ARGUMENT_REQUIRES_STR_KEY_TYPE);
    cpy_r_r646 = CPyStatic_message_registry___globals;
    cpy_r_r647 = CPyStatics[3206]; /* 'KEYWORD_ARGUMENT_REQUIRES_STR_KEY_TYPE' */
    cpy_r_r648 = CPyDict_SetItem(cpy_r_r646, cpy_r_r647, cpy_r_r645);
    CPy_DECREF(cpy_r_r645);
    cpy_r_r649 = cpy_r_r648 >= 0;
    if (unlikely(!cpy_r_r649)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 124, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r650 = CPyStatics[3207]; /* 'Type of __all__ must be {}, not {}' */
    cpy_r_r651 = CPyStatic_message_registry___globals;
    cpy_r_r652 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r653 = CPyDict_GetItem(cpy_r_r651, cpy_r_r652);
    if (unlikely(cpy_r_r653 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 127, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r654[1] = {cpy_r_r650};
    cpy_r_r655 = (PyObject **)&cpy_r_r654;
    cpy_r_r656 = _PyObject_Vectorcall(cpy_r_r653, cpy_r_r655, 1, 0);
    CPy_DECREF(cpy_r_r653);
    if (unlikely(cpy_r_r656 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 127, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r656)))
        cpy_r_r657 = cpy_r_r656;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 127, CPyStatic_message_registry___globals, "tuple", cpy_r_r656);
        goto CPyL521;
    }
    CPyStatic_message_registry___ALL_MUST_BE_SEQ_STR = cpy_r_r657;
    CPy_INCREF(CPyStatic_message_registry___ALL_MUST_BE_SEQ_STR);
    cpy_r_r658 = CPyStatic_message_registry___globals;
    cpy_r_r659 = CPyStatics[3208]; /* 'ALL_MUST_BE_SEQ_STR' */
    cpy_r_r660 = CPyDict_SetItem(cpy_r_r658, cpy_r_r659, cpy_r_r657);
    CPy_DECREF(cpy_r_r657);
    cpy_r_r661 = cpy_r_r660 >= 0;
    if (unlikely(!cpy_r_r661)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 127, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r662 = CPyStatics[3209]; /* ('Expected keyword arguments, {...}, or dict(...) in '
                                      'TypedDict constructor') */
    cpy_r_r663 = CPyStatic_message_registry___globals;
    cpy_r_r664 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r665 = CPyDict_GetItem(cpy_r_r663, cpy_r_r664);
    if (unlikely(cpy_r_r665 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 128, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r666[1] = {cpy_r_r662};
    cpy_r_r667 = (PyObject **)&cpy_r_r666;
    cpy_r_r668 = _PyObject_Vectorcall(cpy_r_r665, cpy_r_r667, 1, 0);
    CPy_DECREF(cpy_r_r665);
    if (unlikely(cpy_r_r668 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 128, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r668)))
        cpy_r_r669 = cpy_r_r668;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 128, CPyStatic_message_registry___globals, "tuple", cpy_r_r668);
        goto CPyL521;
    }
    CPyStatic_message_registry___INVALID_TYPEDDICT_ARGS = cpy_r_r669;
    CPy_INCREF(CPyStatic_message_registry___INVALID_TYPEDDICT_ARGS);
    cpy_r_r670 = CPyStatic_message_registry___globals;
    cpy_r_r671 = CPyStatics[3210]; /* 'INVALID_TYPEDDICT_ARGS' */
    cpy_r_r672 = CPyDict_SetItem(cpy_r_r670, cpy_r_r671, cpy_r_r669);
    CPy_DECREF(cpy_r_r669);
    cpy_r_r673 = cpy_r_r672 >= 0;
    if (unlikely(!cpy_r_r673)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 128, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r674 = CPyStatics[3211]; /* 'Expected TypedDict key to be string literal' */
    cpy_r_r675 = CPyStatic_message_registry___globals;
    cpy_r_r676 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r677 = CPyDict_GetItem(cpy_r_r675, cpy_r_r676);
    if (unlikely(cpy_r_r677 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 131, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r678[1] = {cpy_r_r674};
    cpy_r_r679 = (PyObject **)&cpy_r_r678;
    cpy_r_r680 = _PyObject_Vectorcall(cpy_r_r677, cpy_r_r679, 1, 0);
    CPy_DECREF(cpy_r_r677);
    if (unlikely(cpy_r_r680 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 131, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r680)))
        cpy_r_r681 = cpy_r_r680;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 131, CPyStatic_message_registry___globals, "tuple", cpy_r_r680);
        goto CPyL521;
    }
    CPyStatic_message_registry___TYPEDDICT_KEY_MUST_BE_STRING_LITERAL = cpy_r_r681;
    CPy_INCREF(CPyStatic_message_registry___TYPEDDICT_KEY_MUST_BE_STRING_LITERAL);
    cpy_r_r682 = CPyStatic_message_registry___globals;
    cpy_r_r683 = CPyStatics[3212]; /* 'TYPEDDICT_KEY_MUST_BE_STRING_LITERAL' */
    cpy_r_r684 = CPyDict_SetItem(cpy_r_r682, cpy_r_r683, cpy_r_r681);
    CPy_DECREF(cpy_r_r681);
    cpy_r_r685 = cpy_r_r684 >= 0;
    if (unlikely(!cpy_r_r685)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 131, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r686 = CPyStatics[3213]; /* 'Assertion is always true, perhaps remove parentheses?' */
    cpy_r_r687 = CPyStatic_message_registry___globals;
    cpy_r_r688 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r689 = CPyDict_GetItem(cpy_r_r687, cpy_r_r688);
    if (unlikely(cpy_r_r689 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 134, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r690[1] = {cpy_r_r686};
    cpy_r_r691 = (PyObject **)&cpy_r_r690;
    cpy_r_r692 = _PyObject_Vectorcall(cpy_r_r689, cpy_r_r691, 1, 0);
    CPy_DECREF(cpy_r_r689);
    if (unlikely(cpy_r_r692 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 134, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r692)))
        cpy_r_r693 = cpy_r_r692;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 134, CPyStatic_message_registry___globals, "tuple", cpy_r_r692);
        goto CPyL521;
    }
    CPyStatic_message_registry___MALFORMED_ASSERT = cpy_r_r693;
    CPy_INCREF(CPyStatic_message_registry___MALFORMED_ASSERT);
    cpy_r_r694 = CPyStatic_message_registry___globals;
    cpy_r_r695 = CPyStatics[3214]; /* 'MALFORMED_ASSERT' */
    cpy_r_r696 = CPyDict_SetItem(cpy_r_r694, cpy_r_r695, cpy_r_r693);
    CPy_DECREF(cpy_r_r693);
    cpy_r_r697 = cpy_r_r696 >= 0;
    if (unlikely(!cpy_r_r697)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 134, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r698 = CPyStatics[3215]; /* 'Function has duplicate type signatures' */
    cpy_r_r699 = CPyStatic_message_registry___globals;
    cpy_r_r700 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r701 = CPyDict_GetItem(cpy_r_r699, cpy_r_r700);
    if (unlikely(cpy_r_r701 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 135, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r702[1] = {cpy_r_r698};
    cpy_r_r703 = (PyObject **)&cpy_r_r702;
    cpy_r_r704 = _PyObject_Vectorcall(cpy_r_r701, cpy_r_r703, 1, 0);
    CPy_DECREF(cpy_r_r701);
    if (unlikely(cpy_r_r704 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 135, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r704)))
        cpy_r_r705 = cpy_r_r704;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 135, CPyStatic_message_registry___globals, "tuple", cpy_r_r704);
        goto CPyL521;
    }
    CPyStatic_message_registry___DUPLICATE_TYPE_SIGNATURES = cpy_r_r705;
    CPy_INCREF(CPyStatic_message_registry___DUPLICATE_TYPE_SIGNATURES);
    cpy_r_r706 = CPyStatic_message_registry___globals;
    cpy_r_r707 = CPyStatics[3216]; /* 'DUPLICATE_TYPE_SIGNATURES' */
    cpy_r_r708 = CPyDict_SetItem(cpy_r_r706, cpy_r_r707, cpy_r_r705);
    CPy_DECREF(cpy_r_r705);
    cpy_r_r709 = cpy_r_r708 >= 0;
    if (unlikely(!cpy_r_r709)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 135, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r710 = CPyStatics[3217]; /* '{}.__set__ is not callable' */
    cpy_r_r711 = CPyStatic_message_registry___globals;
    cpy_r_r712 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r713 = CPyDict_GetItem(cpy_r_r711, cpy_r_r712);
    if (unlikely(cpy_r_r713 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 136, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r714[1] = {cpy_r_r710};
    cpy_r_r715 = (PyObject **)&cpy_r_r714;
    cpy_r_r716 = _PyObject_Vectorcall(cpy_r_r713, cpy_r_r715, 1, 0);
    CPy_DECREF(cpy_r_r713);
    if (unlikely(cpy_r_r716 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 136, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r716)))
        cpy_r_r717 = cpy_r_r716;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 136, CPyStatic_message_registry___globals, "tuple", cpy_r_r716);
        goto CPyL521;
    }
    CPyStatic_message_registry___DESCRIPTOR_SET_NOT_CALLABLE = cpy_r_r717;
    CPy_INCREF(CPyStatic_message_registry___DESCRIPTOR_SET_NOT_CALLABLE);
    cpy_r_r718 = CPyStatic_message_registry___globals;
    cpy_r_r719 = CPyStatics[3218]; /* 'DESCRIPTOR_SET_NOT_CALLABLE' */
    cpy_r_r720 = CPyDict_SetItem(cpy_r_r718, cpy_r_r719, cpy_r_r717);
    CPy_DECREF(cpy_r_r717);
    cpy_r_r721 = cpy_r_r720 >= 0;
    if (unlikely(!cpy_r_r721)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 136, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r722 = CPyStatics[1324]; /* '{}.__get__ is not callable' */
    cpy_r_r723 = CPyStatic_message_registry___globals;
    cpy_r_r724 = CPyStatics[3219]; /* 'DESCRIPTOR_GET_NOT_CALLABLE' */
    cpy_r_r725 = CPyDict_SetItem(cpy_r_r723, cpy_r_r724, cpy_r_r722);
    cpy_r_r726 = cpy_r_r725 >= 0;
    if (unlikely(!cpy_r_r726)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 137, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r727 = CPyStatics[3220]; /* '__getattribute__ is not valid at the module level' */
    cpy_r_r728 = CPyStatic_message_registry___globals;
    cpy_r_r729 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r730 = CPyDict_GetItem(cpy_r_r728, cpy_r_r729);
    if (unlikely(cpy_r_r730 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 138, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r731[1] = {cpy_r_r727};
    cpy_r_r732 = (PyObject **)&cpy_r_r731;
    cpy_r_r733 = _PyObject_Vectorcall(cpy_r_r730, cpy_r_r732, 1, 0);
    CPy_DECREF(cpy_r_r730);
    if (unlikely(cpy_r_r733 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 138, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r733)))
        cpy_r_r734 = cpy_r_r733;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 138, CPyStatic_message_registry___globals, "tuple", cpy_r_r733);
        goto CPyL521;
    }
    CPyStatic_message_registry___MODULE_LEVEL_GETATTRIBUTE = cpy_r_r734;
    CPy_INCREF(CPyStatic_message_registry___MODULE_LEVEL_GETATTRIBUTE);
    cpy_r_r735 = CPyStatic_message_registry___globals;
    cpy_r_r736 = CPyStatics[3221]; /* 'MODULE_LEVEL_GETATTRIBUTE' */
    cpy_r_r737 = CPyDict_SetItem(cpy_r_r735, cpy_r_r736, cpy_r_r734);
    CPy_DECREF(cpy_r_r734);
    cpy_r_r738 = cpy_r_r737 >= 0;
    if (unlikely(!cpy_r_r738)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 138, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r739 = CPyStatics[1327]; /* '"{}" in __slots__ conflicts with class variable access' */
    cpy_r_r740 = CPyStatic_message_registry___globals;
    cpy_r_r741 = CPyStatics[3222]; /* 'CLASS_VAR_CONFLICTS_SLOTS' */
    cpy_r_r742 = CPyDict_SetItem(cpy_r_r740, cpy_r_r741, cpy_r_r739);
    cpy_r_r743 = cpy_r_r742 >= 0;
    if (unlikely(!cpy_r_r743)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 141, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r744 = CPyStatics[3223]; /* ('Trying to assign name "{}" that is not in '
                                      '"__slots__" of type "{}"') */
    cpy_r_r745 = CPyStatic_message_registry___globals;
    cpy_r_r746 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r747 = CPyDict_GetItem(cpy_r_r745, cpy_r_r746);
    if (unlikely(cpy_r_r747 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 142, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r748[1] = {cpy_r_r744};
    cpy_r_r749 = (PyObject **)&cpy_r_r748;
    cpy_r_r750 = _PyObject_Vectorcall(cpy_r_r747, cpy_r_r749, 1, 0);
    CPy_DECREF(cpy_r_r747);
    if (unlikely(cpy_r_r750 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 142, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r750)))
        cpy_r_r751 = cpy_r_r750;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 142, CPyStatic_message_registry___globals, "tuple", cpy_r_r750);
        goto CPyL521;
    }
    CPyStatic_message_registry___NAME_NOT_IN_SLOTS = cpy_r_r751;
    CPy_INCREF(CPyStatic_message_registry___NAME_NOT_IN_SLOTS);
    cpy_r_r752 = CPyStatic_message_registry___globals;
    cpy_r_r753 = CPyStatics[3224]; /* 'NAME_NOT_IN_SLOTS' */
    cpy_r_r754 = CPyDict_SetItem(cpy_r_r752, cpy_r_r753, cpy_r_r751);
    CPy_DECREF(cpy_r_r751);
    cpy_r_r755 = cpy_r_r754 >= 0;
    if (unlikely(!cpy_r_r755)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 142, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r756 = CPyStatics[3225]; /* ('{} which does not implement __bool__ or __len__ so '
                                      'it could always be true in boolean context') */
    cpy_r_r757 = CPyStatic_errorcodes___TRUTHY_BOOL;
    if (likely(cpy_r_r757 != NULL)) goto CPyL278;
    PyErr_SetString(PyExc_NameError, "value for final name \"TRUTHY_BOOL\" was not set");
    cpy_r_r758 = 0;
    if (unlikely(!cpy_r_r758)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 148, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL278: ;
    cpy_r_r759 = CPyStatic_message_registry___globals;
    cpy_r_r760 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r761 = CPyDict_GetItem(cpy_r_r759, cpy_r_r760);
    if (unlikely(cpy_r_r761 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 145, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r762[2] = {cpy_r_r756, cpy_r_r757};
    cpy_r_r763 = (PyObject **)&cpy_r_r762;
    cpy_r_r764 = CPyStatics[9163]; /* ('code',) */
    cpy_r_r765 = _PyObject_Vectorcall(cpy_r_r761, cpy_r_r763, 1, cpy_r_r764);
    CPy_DECREF(cpy_r_r761);
    if (unlikely(cpy_r_r765 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 145, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r765)))
        cpy_r_r766 = cpy_r_r765;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 145, CPyStatic_message_registry___globals, "tuple", cpy_r_r765);
        goto CPyL521;
    }
    CPyStatic_message_registry___TYPE_ALWAYS_TRUE = cpy_r_r766;
    CPy_INCREF(CPyStatic_message_registry___TYPE_ALWAYS_TRUE);
    cpy_r_r767 = CPyStatic_message_registry___globals;
    cpy_r_r768 = CPyStatics[3226]; /* 'TYPE_ALWAYS_TRUE' */
    cpy_r_r769 = CPyDict_SetItem(cpy_r_r767, cpy_r_r768, cpy_r_r766);
    CPy_DECREF(cpy_r_r766);
    cpy_r_r770 = cpy_r_r769 >= 0;
    if (unlikely(!cpy_r_r770)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 145, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r771 = CPyStatics[3227]; /* ('{} of which no members implement __bool__ or __len__ '
                                      'so it could always be true in boolean context') */
    cpy_r_r772 = CPyStatic_errorcodes___TRUTHY_BOOL;
    if (likely(cpy_r_r772 != NULL)) goto CPyL285;
    PyErr_SetString(PyExc_NameError, "value for final name \"TRUTHY_BOOL\" was not set");
    cpy_r_r773 = 0;
    if (unlikely(!cpy_r_r773)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 153, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL285: ;
    cpy_r_r774 = CPyStatic_message_registry___globals;
    cpy_r_r775 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r776 = CPyDict_GetItem(cpy_r_r774, cpy_r_r775);
    if (unlikely(cpy_r_r776 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 150, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r777[2] = {cpy_r_r771, cpy_r_r772};
    cpy_r_r778 = (PyObject **)&cpy_r_r777;
    cpy_r_r779 = CPyStatics[9163]; /* ('code',) */
    cpy_r_r780 = _PyObject_Vectorcall(cpy_r_r776, cpy_r_r778, 1, cpy_r_r779);
    CPy_DECREF(cpy_r_r776);
    if (unlikely(cpy_r_r780 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 150, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r780)))
        cpy_r_r781 = cpy_r_r780;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 150, CPyStatic_message_registry___globals, "tuple", cpy_r_r780);
        goto CPyL521;
    }
    CPyStatic_message_registry___TYPE_ALWAYS_TRUE_UNIONTYPE = cpy_r_r781;
    CPy_INCREF(CPyStatic_message_registry___TYPE_ALWAYS_TRUE_UNIONTYPE);
    cpy_r_r782 = CPyStatic_message_registry___globals;
    cpy_r_r783 = CPyStatics[3228]; /* 'TYPE_ALWAYS_TRUE_UNIONTYPE' */
    cpy_r_r784 = CPyDict_SetItem(cpy_r_r782, cpy_r_r783, cpy_r_r781);
    CPy_DECREF(cpy_r_r781);
    cpy_r_r785 = cpy_r_r784 >= 0;
    if (unlikely(!cpy_r_r785)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 150, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r786 = CPyStatics[3229]; /* 'Function {} could always be true in boolean context' */
    cpy_r_r787 = CPyStatic_errorcodes___TRUTHY_FUNCTION;
    if (likely(cpy_r_r787 != NULL)) goto CPyL292;
    PyErr_SetString(PyExc_NameError, "value for final name \"TRUTHY_FUNCTION\" was not set");
    cpy_r_r788 = 0;
    if (unlikely(!cpy_r_r788)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 156, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL292: ;
    cpy_r_r789 = CPyStatic_message_registry___globals;
    cpy_r_r790 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r791 = CPyDict_GetItem(cpy_r_r789, cpy_r_r790);
    if (unlikely(cpy_r_r791 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 155, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r792[2] = {cpy_r_r786, cpy_r_r787};
    cpy_r_r793 = (PyObject **)&cpy_r_r792;
    cpy_r_r794 = CPyStatics[9163]; /* ('code',) */
    cpy_r_r795 = _PyObject_Vectorcall(cpy_r_r791, cpy_r_r793, 1, cpy_r_r794);
    CPy_DECREF(cpy_r_r791);
    if (unlikely(cpy_r_r795 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 155, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r795)))
        cpy_r_r796 = cpy_r_r795;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 155, CPyStatic_message_registry___globals, "tuple", cpy_r_r795);
        goto CPyL521;
    }
    CPyStatic_message_registry___FUNCTION_ALWAYS_TRUE = cpy_r_r796;
    CPy_INCREF(CPyStatic_message_registry___FUNCTION_ALWAYS_TRUE);
    cpy_r_r797 = CPyStatic_message_registry___globals;
    cpy_r_r798 = CPyStatics[3230]; /* 'FUNCTION_ALWAYS_TRUE' */
    cpy_r_r799 = CPyDict_SetItem(cpy_r_r797, cpy_r_r798, cpy_r_r796);
    CPy_DECREF(cpy_r_r796);
    cpy_r_r800 = cpy_r_r799 >= 0;
    if (unlikely(!cpy_r_r800)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 155, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r801 = CPyStatics[3231]; /* ('{} which can always be true in boolean context. '
                                      'Consider using {} instead.') */
    cpy_r_r802 = CPyStatic_errorcodes___TRUTHY_ITERABLE;
    if (likely(cpy_r_r802 != NULL)) goto CPyL299;
    PyErr_SetString(PyExc_NameError, "value for final name \"TRUTHY_ITERABLE\" was not set");
    cpy_r_r803 = 0;
    if (unlikely(!cpy_r_r803)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 160, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL299: ;
    cpy_r_r804 = CPyStatic_message_registry___globals;
    cpy_r_r805 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r806 = CPyDict_GetItem(cpy_r_r804, cpy_r_r805);
    if (unlikely(cpy_r_r806 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 158, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r807[2] = {cpy_r_r801, cpy_r_r802};
    cpy_r_r808 = (PyObject **)&cpy_r_r807;
    cpy_r_r809 = CPyStatics[9163]; /* ('code',) */
    cpy_r_r810 = _PyObject_Vectorcall(cpy_r_r806, cpy_r_r808, 1, cpy_r_r809);
    CPy_DECREF(cpy_r_r806);
    if (unlikely(cpy_r_r810 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 158, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r810)))
        cpy_r_r811 = cpy_r_r810;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 158, CPyStatic_message_registry___globals, "tuple", cpy_r_r810);
        goto CPyL521;
    }
    CPyStatic_message_registry___ITERABLE_ALWAYS_TRUE = cpy_r_r811;
    CPy_INCREF(CPyStatic_message_registry___ITERABLE_ALWAYS_TRUE);
    cpy_r_r812 = CPyStatic_message_registry___globals;
    cpy_r_r813 = CPyStatics[3232]; /* 'ITERABLE_ALWAYS_TRUE' */
    cpy_r_r814 = CPyDict_SetItem(cpy_r_r812, cpy_r_r813, cpy_r_r811);
    CPy_DECREF(cpy_r_r811);
    cpy_r_r815 = cpy_r_r814 >= 0;
    if (unlikely(!cpy_r_r815)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 158, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r816 = CPyStatics[3233]; /* '{} not callable' */
    cpy_r_r817 = CPyStatic_message_registry___globals;
    cpy_r_r818 = CPyStatics[3234]; /* 'NOT_CALLABLE' */
    cpy_r_r819 = CPyDict_SetItem(cpy_r_r817, cpy_r_r818, cpy_r_r816);
    cpy_r_r820 = cpy_r_r819 >= 0;
    if (unlikely(!cpy_r_r820)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 162, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r821 = CPyStatics[812]; /* 'Value of type {} must be used' */
    cpy_r_r822 = CPyStatic_message_registry___globals;
    cpy_r_r823 = CPyStatics[3235]; /* 'TYPE_MUST_BE_USED' */
    cpy_r_r824 = CPyDict_SetItem(cpy_r_r822, cpy_r_r823, cpy_r_r821);
    cpy_r_r825 = cpy_r_r824 >= 0;
    if (unlikely(!cpy_r_r825)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 163, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r826 = CPyStatics[1331]; /* ('Access to generic instance variables via class is '
                                      'ambiguous') */
    cpy_r_r827 = CPyStatic_message_registry___globals;
    cpy_r_r828 = CPyStatics[3236]; /* 'GENERIC_INSTANCE_VAR_CLASS_ACCESS' */
    cpy_r_r829 = CPyDict_SetItem(cpy_r_r827, cpy_r_r828, cpy_r_r826);
    cpy_r_r830 = cpy_r_r829 >= 0;
    if (unlikely(!cpy_r_r830)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 167, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r831 = CPyStatics[1330]; /* 'Access to generic class variables is ambiguous' */
    cpy_r_r832 = CPyStatic_message_registry___globals;
    cpy_r_r833 = CPyStatics[3237]; /* 'GENERIC_CLASS_VAR_ACCESS' */
    cpy_r_r834 = CPyDict_SetItem(cpy_r_r832, cpy_r_r833, cpy_r_r831);
    cpy_r_r835 = cpy_r_r834 >= 0;
    if (unlikely(!cpy_r_r835)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 169, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r836 = CPyStatics[3238]; /* 'Missing type parameters for generic type {}' */
    cpy_r_r837 = CPyStatic_message_registry___globals;
    cpy_r_r838 = CPyStatics[3239]; /* 'BARE_GENERIC' */
    cpy_r_r839 = CPyDict_SetItem(cpy_r_r837, cpy_r_r838, cpy_r_r836);
    cpy_r_r840 = cpy_r_r839 >= 0;
    if (unlikely(!cpy_r_r840)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 170, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r841 = CPyStatics[3240]; /* ('Implicit generic "Any". Use "{}" and specify generic '
                                      'parameters') */
    cpy_r_r842 = CPyStatic_message_registry___globals;
    cpy_r_r843 = CPyStatics[3241]; /* 'IMPLICIT_GENERIC_ANY_BUILTIN' */
    cpy_r_r844 = CPyDict_SetItem(cpy_r_r842, cpy_r_r843, cpy_r_r841);
    cpy_r_r845 = cpy_r_r844 >= 0;
    if (unlikely(!cpy_r_r845)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 172, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r846 = CPyStatics[3242]; /* '{} cannot be unpacked (must be tuple or TypeVarTuple)' */
    cpy_r_r847 = CPyStatic_message_registry___globals;
    cpy_r_r848 = CPyStatics[3243]; /* 'INVALID_UNPACK' */
    cpy_r_r849 = CPyDict_SetItem(cpy_r_r847, cpy_r_r848, cpy_r_r846);
    cpy_r_r850 = cpy_r_r849 >= 0;
    if (unlikely(!cpy_r_r850)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 174, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r851 = CPyStatics[3244]; /* 'Value of type variable "{}" of {} cannot be {}' */
    cpy_r_r852 = CPyStatic_message_registry___globals;
    cpy_r_r853 = CPyStatics[3245]; /* 'INCOMPATIBLE_TYPEVAR_VALUE' */
    cpy_r_r854 = CPyDict_SetItem(cpy_r_r852, cpy_r_r853, cpy_r_r851);
    cpy_r_r855 = cpy_r_r854 >= 0;
    if (unlikely(!cpy_r_r855)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 177, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r856 = CPyStatics[1332]; /* 'Type variable "{}.{}" cannot be used as an expression' */
    cpy_r_r857 = CPyStatic_message_registry___globals;
    cpy_r_r858 = CPyStatics[3246]; /* 'CANNOT_USE_TYPEVAR_AS_EXPRESSION' */
    cpy_r_r859 = CPyDict_SetItem(cpy_r_r857, cpy_r_r858, cpy_r_r856);
    cpy_r_r860 = cpy_r_r859 >= 0;
    if (unlikely(!cpy_r_r860)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 178, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r861 = CPyStatics[3247]; /* ('Type variable "{}" not valid as type argument value '
                                      'for "{}"') */
    cpy_r_r862 = CPyStatic_message_registry___globals;
    cpy_r_r863 = CPyStatics[3248]; /* 'INVALID_TYPEVAR_AS_TYPEARG' */
    cpy_r_r864 = CPyDict_SetItem(cpy_r_r862, cpy_r_r863, cpy_r_r861);
    cpy_r_r865 = cpy_r_r864 >= 0;
    if (unlikely(!cpy_r_r865)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 179, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r866 = CPyStatics[3249]; /* 'Type argument {} of "{}" must be a subtype of {}' */
    cpy_r_r867 = CPyStatic_message_registry___globals;
    cpy_r_r868 = CPyStatics[3250]; /* 'INVALID_TYPEVAR_ARG_BOUND' */
    cpy_r_r869 = CPyDict_SetItem(cpy_r_r867, cpy_r_r868, cpy_r_r866);
    cpy_r_r870 = cpy_r_r869 >= 0;
    if (unlikely(!cpy_r_r870)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 180, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r871 = CPyStatics[3251]; /* 'Invalid type argument value for "{}"' */
    cpy_r_r872 = CPyStatic_message_registry___globals;
    cpy_r_r873 = CPyStatics[3252]; /* 'INVALID_TYPEVAR_ARG_VALUE' */
    cpy_r_r874 = CPyDict_SetItem(cpy_r_r872, cpy_r_r873, cpy_r_r871);
    cpy_r_r875 = cpy_r_r874 >= 0;
    if (unlikely(!cpy_r_r875)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 181, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r876 = CPyStatics[3253]; /* 'TypeVar "{}" may only be a literal bool' */
    cpy_r_r877 = CPyStatic_message_registry___globals;
    cpy_r_r878 = CPyStatics[3254]; /* 'TYPEVAR_VARIANCE_DEF' */
    cpy_r_r879 = CPyDict_SetItem(cpy_r_r877, cpy_r_r878, cpy_r_r876);
    cpy_r_r880 = cpy_r_r879 >= 0;
    if (unlikely(!cpy_r_r880)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 182, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r881 = CPyStatics[3255]; /* '{} "{}" must be a type' */
    cpy_r_r882 = CPyStatic_message_registry___globals;
    cpy_r_r883 = CPyStatics[3256]; /* 'TYPEVAR_ARG_MUST_BE_TYPE' */
    cpy_r_r884 = CPyDict_SetItem(cpy_r_r882, cpy_r_r883, cpy_r_r881);
    cpy_r_r885 = cpy_r_r884 >= 0;
    if (unlikely(!cpy_r_r885)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 183, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r886 = CPyStatics[3257]; /* 'Unexpected argument to "TypeVar()"' */
    cpy_r_r887 = CPyStatic_message_registry___globals;
    cpy_r_r888 = CPyStatics[3258]; /* 'TYPEVAR_UNEXPECTED_ARGUMENT' */
    cpy_r_r889 = CPyDict_SetItem(cpy_r_r887, cpy_r_r888, cpy_r_r886);
    cpy_r_r890 = cpy_r_r889 >= 0;
    if (unlikely(!cpy_r_r890)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 184, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r891 = CPyStatics[735]; /* ('A function returning TypeVar should receive at least '
                                     'one argument containing the same TypeVar') */
    cpy_r_r892 = CPyStatic_message_registry___globals;
    cpy_r_r893 = CPyStatics[3259]; /* 'UNBOUND_TYPEVAR' */
    cpy_r_r894 = CPyDict_SetItem(cpy_r_r892, cpy_r_r893, cpy_r_r891);
    cpy_r_r895 = cpy_r_r894 >= 0;
    if (unlikely(!cpy_r_r895)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 186, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r896 = CPyStatics[3260]; /* 'Too many arguments for "super"' */
    cpy_r_r897 = CPyStatic_message_registry___globals;
    cpy_r_r898 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r899 = CPyDict_GetItem(cpy_r_r897, cpy_r_r898);
    if (unlikely(cpy_r_r899 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 191, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r900[1] = {cpy_r_r896};
    cpy_r_r901 = (PyObject **)&cpy_r_r900;
    cpy_r_r902 = _PyObject_Vectorcall(cpy_r_r899, cpy_r_r901, 1, 0);
    CPy_DECREF(cpy_r_r899);
    if (unlikely(cpy_r_r902 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 191, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r902)))
        cpy_r_r903 = cpy_r_r902;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 191, CPyStatic_message_registry___globals, "tuple", cpy_r_r902);
        goto CPyL521;
    }
    CPyStatic_message_registry___TOO_MANY_ARGS_FOR_SUPER = cpy_r_r903;
    CPy_INCREF(CPyStatic_message_registry___TOO_MANY_ARGS_FOR_SUPER);
    cpy_r_r904 = CPyStatic_message_registry___globals;
    cpy_r_r905 = CPyStatics[3261]; /* 'TOO_MANY_ARGS_FOR_SUPER' */
    cpy_r_r906 = CPyDict_SetItem(cpy_r_r904, cpy_r_r905, cpy_r_r903);
    CPy_DECREF(cpy_r_r903);
    cpy_r_r907 = cpy_r_r906 >= 0;
    if (unlikely(!cpy_r_r907)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 191, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r908 = CPyStatics[3262]; /* '"super" with a single argument not supported' */
    cpy_r_r909 = CPyStatic_message_registry___globals;
    cpy_r_r910 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r911 = CPyDict_GetItem(cpy_r_r909, cpy_r_r910);
    if (unlikely(cpy_r_r911 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 192, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r912[1] = {cpy_r_r908};
    cpy_r_r913 = (PyObject **)&cpy_r_r912;
    cpy_r_r914 = _PyObject_Vectorcall(cpy_r_r911, cpy_r_r913, 1, 0);
    CPy_DECREF(cpy_r_r911);
    if (unlikely(cpy_r_r914 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 192, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r914)))
        cpy_r_r915 = cpy_r_r914;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 192, CPyStatic_message_registry___globals, "tuple", cpy_r_r914);
        goto CPyL521;
    }
    CPyStatic_message_registry___SUPER_WITH_SINGLE_ARG_NOT_SUPPORTED = cpy_r_r915;
    CPy_INCREF(CPyStatic_message_registry___SUPER_WITH_SINGLE_ARG_NOT_SUPPORTED);
    cpy_r_r916 = CPyStatic_message_registry___globals;
    cpy_r_r917 = CPyStatics[3263]; /* 'SUPER_WITH_SINGLE_ARG_NOT_SUPPORTED' */
    cpy_r_r918 = CPyDict_SetItem(cpy_r_r916, cpy_r_r917, cpy_r_r915);
    CPy_DECREF(cpy_r_r915);
    cpy_r_r919 = cpy_r_r918 >= 0;
    if (unlikely(!cpy_r_r919)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 192, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r920 = CPyStatics[3264]; /* 'Unsupported argument 1 for "super"' */
    cpy_r_r921 = CPyStatic_message_registry___globals;
    cpy_r_r922 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r923 = CPyDict_GetItem(cpy_r_r921, cpy_r_r922);
    if (unlikely(cpy_r_r923 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 195, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r924[1] = {cpy_r_r920};
    cpy_r_r925 = (PyObject **)&cpy_r_r924;
    cpy_r_r926 = _PyObject_Vectorcall(cpy_r_r923, cpy_r_r925, 1, 0);
    CPy_DECREF(cpy_r_r923);
    if (unlikely(cpy_r_r926 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 195, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r926)))
        cpy_r_r927 = cpy_r_r926;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 195, CPyStatic_message_registry___globals, "tuple", cpy_r_r926);
        goto CPyL521;
    }
    CPyStatic_message_registry___UNSUPPORTED_ARG_1_FOR_SUPER = cpy_r_r927;
    CPy_INCREF(CPyStatic_message_registry___UNSUPPORTED_ARG_1_FOR_SUPER);
    cpy_r_r928 = CPyStatic_message_registry___globals;
    cpy_r_r929 = CPyStatics[3265]; /* 'UNSUPPORTED_ARG_1_FOR_SUPER' */
    cpy_r_r930 = CPyDict_SetItem(cpy_r_r928, cpy_r_r929, cpy_r_r927);
    CPy_DECREF(cpy_r_r927);
    cpy_r_r931 = cpy_r_r930 >= 0;
    if (unlikely(!cpy_r_r931)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 195, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r932 = CPyStatics[3266]; /* 'Unsupported argument 2 for "super"' */
    cpy_r_r933 = CPyStatic_message_registry___globals;
    cpy_r_r934 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r935 = CPyDict_GetItem(cpy_r_r933, cpy_r_r934);
    if (unlikely(cpy_r_r935 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 196, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r936[1] = {cpy_r_r932};
    cpy_r_r937 = (PyObject **)&cpy_r_r936;
    cpy_r_r938 = _PyObject_Vectorcall(cpy_r_r935, cpy_r_r937, 1, 0);
    CPy_DECREF(cpy_r_r935);
    if (unlikely(cpy_r_r938 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 196, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r938)))
        cpy_r_r939 = cpy_r_r938;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 196, CPyStatic_message_registry___globals, "tuple", cpy_r_r938);
        goto CPyL521;
    }
    CPyStatic_message_registry___UNSUPPORTED_ARG_2_FOR_SUPER = cpy_r_r939;
    CPy_INCREF(CPyStatic_message_registry___UNSUPPORTED_ARG_2_FOR_SUPER);
    cpy_r_r940 = CPyStatic_message_registry___globals;
    cpy_r_r941 = CPyStatics[3267]; /* 'UNSUPPORTED_ARG_2_FOR_SUPER' */
    cpy_r_r942 = CPyDict_SetItem(cpy_r_r940, cpy_r_r941, cpy_r_r939);
    CPy_DECREF(cpy_r_r939);
    cpy_r_r943 = cpy_r_r942 >= 0;
    if (unlikely(!cpy_r_r943)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 196, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r944 = CPyStatics[3268]; /* 'Varargs not supported with "super"' */
    cpy_r_r945 = CPyStatic_message_registry___globals;
    cpy_r_r946 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r947 = CPyDict_GetItem(cpy_r_r945, cpy_r_r946);
    if (unlikely(cpy_r_r947 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 197, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r948[1] = {cpy_r_r944};
    cpy_r_r949 = (PyObject **)&cpy_r_r948;
    cpy_r_r950 = _PyObject_Vectorcall(cpy_r_r947, cpy_r_r949, 1, 0);
    CPy_DECREF(cpy_r_r947);
    if (unlikely(cpy_r_r950 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 197, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r950)))
        cpy_r_r951 = cpy_r_r950;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 197, CPyStatic_message_registry___globals, "tuple", cpy_r_r950);
        goto CPyL521;
    }
    CPyStatic_message_registry___SUPER_VARARGS_NOT_SUPPORTED = cpy_r_r951;
    CPy_INCREF(CPyStatic_message_registry___SUPER_VARARGS_NOT_SUPPORTED);
    cpy_r_r952 = CPyStatic_message_registry___globals;
    cpy_r_r953 = CPyStatics[3269]; /* 'SUPER_VARARGS_NOT_SUPPORTED' */
    cpy_r_r954 = CPyDict_SetItem(cpy_r_r952, cpy_r_r953, cpy_r_r951);
    CPy_DECREF(cpy_r_r951);
    cpy_r_r955 = cpy_r_r954 >= 0;
    if (unlikely(!cpy_r_r955)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 197, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r956 = CPyStatics[3270]; /* '"super" only accepts positional arguments' */
    cpy_r_r957 = CPyStatic_message_registry___globals;
    cpy_r_r958 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r959 = CPyDict_GetItem(cpy_r_r957, cpy_r_r958);
    if (unlikely(cpy_r_r959 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 198, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r960[1] = {cpy_r_r956};
    cpy_r_r961 = (PyObject **)&cpy_r_r960;
    cpy_r_r962 = _PyObject_Vectorcall(cpy_r_r959, cpy_r_r961, 1, 0);
    CPy_DECREF(cpy_r_r959);
    if (unlikely(cpy_r_r962 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 198, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r962)))
        cpy_r_r963 = cpy_r_r962;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 198, CPyStatic_message_registry___globals, "tuple", cpy_r_r962);
        goto CPyL521;
    }
    CPyStatic_message_registry___SUPER_POSITIONAL_ARGS_REQUIRED = cpy_r_r963;
    CPy_INCREF(CPyStatic_message_registry___SUPER_POSITIONAL_ARGS_REQUIRED);
    cpy_r_r964 = CPyStatic_message_registry___globals;
    cpy_r_r965 = CPyStatics[3271]; /* 'SUPER_POSITIONAL_ARGS_REQUIRED' */
    cpy_r_r966 = CPyDict_SetItem(cpy_r_r964, cpy_r_r965, cpy_r_r963);
    CPy_DECREF(cpy_r_r963);
    cpy_r_r967 = cpy_r_r966 >= 0;
    if (unlikely(!cpy_r_r967)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 198, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r968 = CPyStatics[3272]; /* 'Argument 2 for "super" not an instance of argument 1' */
    cpy_r_r969 = CPyStatic_message_registry___globals;
    cpy_r_r970 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r971 = CPyDict_GetItem(cpy_r_r969, cpy_r_r970);
    if (unlikely(cpy_r_r971 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 199, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r972[1] = {cpy_r_r968};
    cpy_r_r973 = (PyObject **)&cpy_r_r972;
    cpy_r_r974 = _PyObject_Vectorcall(cpy_r_r971, cpy_r_r973, 1, 0);
    CPy_DECREF(cpy_r_r971);
    if (unlikely(cpy_r_r974 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 199, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r974)))
        cpy_r_r975 = cpy_r_r974;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 199, CPyStatic_message_registry___globals, "tuple", cpy_r_r974);
        goto CPyL521;
    }
    CPyStatic_message_registry___SUPER_ARG_2_NOT_INSTANCE_OF_ARG_1 = cpy_r_r975;
    CPy_INCREF(CPyStatic_message_registry___SUPER_ARG_2_NOT_INSTANCE_OF_ARG_1);
    cpy_r_r976 = CPyStatic_message_registry___globals;
    cpy_r_r977 = CPyStatics[3273]; /* 'SUPER_ARG_2_NOT_INSTANCE_OF_ARG_1' */
    cpy_r_r978 = CPyDict_SetItem(cpy_r_r976, cpy_r_r977, cpy_r_r975);
    CPy_DECREF(cpy_r_r975);
    cpy_r_r979 = cpy_r_r978 >= 0;
    if (unlikely(!cpy_r_r979)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 199, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r980 = CPyStatics[3274]; /* 'Target class has no base class' */
    cpy_r_r981 = CPyStatic_message_registry___globals;
    cpy_r_r982 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r983 = CPyDict_GetItem(cpy_r_r981, cpy_r_r982);
    if (unlikely(cpy_r_r983 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 202, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r984[1] = {cpy_r_r980};
    cpy_r_r985 = (PyObject **)&cpy_r_r984;
    cpy_r_r986 = _PyObject_Vectorcall(cpy_r_r983, cpy_r_r985, 1, 0);
    CPy_DECREF(cpy_r_r983);
    if (unlikely(cpy_r_r986 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 202, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r986)))
        cpy_r_r987 = cpy_r_r986;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 202, CPyStatic_message_registry___globals, "tuple", cpy_r_r986);
        goto CPyL521;
    }
    CPyStatic_message_registry___TARGET_CLASS_HAS_NO_BASE_CLASS = cpy_r_r987;
    CPy_INCREF(CPyStatic_message_registry___TARGET_CLASS_HAS_NO_BASE_CLASS);
    cpy_r_r988 = CPyStatic_message_registry___globals;
    cpy_r_r989 = CPyStatics[3275]; /* 'TARGET_CLASS_HAS_NO_BASE_CLASS' */
    cpy_r_r990 = CPyDict_SetItem(cpy_r_r988, cpy_r_r989, cpy_r_r987);
    CPy_DECREF(cpy_r_r987);
    cpy_r_r991 = cpy_r_r990 >= 0;
    if (unlikely(!cpy_r_r991)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 202, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r992 = CPyStatics[3276]; /* 'super() outside of a method is not supported' */
    cpy_r_r993 = CPyStatic_message_registry___globals;
    cpy_r_r994 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r995 = CPyDict_GetItem(cpy_r_r993, cpy_r_r994);
    if (unlikely(cpy_r_r995 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 203, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r996[1] = {cpy_r_r992};
    cpy_r_r997 = (PyObject **)&cpy_r_r996;
    cpy_r_r998 = _PyObject_Vectorcall(cpy_r_r995, cpy_r_r997, 1, 0);
    CPy_DECREF(cpy_r_r995);
    if (unlikely(cpy_r_r998 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 203, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r998)))
        cpy_r_r999 = cpy_r_r998;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 203, CPyStatic_message_registry___globals, "tuple", cpy_r_r998);
        goto CPyL521;
    }
    CPyStatic_message_registry___SUPER_OUTSIDE_OF_METHOD_NOT_SUPPORTED = cpy_r_r999;
    CPy_INCREF(CPyStatic_message_registry___SUPER_OUTSIDE_OF_METHOD_NOT_SUPPORTED);
    cpy_r_r1000 = CPyStatic_message_registry___globals;
    cpy_r_r1001 = CPyStatics[3277]; /* 'SUPER_OUTSIDE_OF_METHOD_NOT_SUPPORTED' */
    cpy_r_r1002 = CPyDict_SetItem(cpy_r_r1000, cpy_r_r1001, cpy_r_r999);
    CPy_DECREF(cpy_r_r999);
    cpy_r_r1003 = cpy_r_r1002 >= 0;
    if (unlikely(!cpy_r_r1003)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 203, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1004 = CPyStatics[3278]; /* ('super() requires one or more positional arguments '
                                       'in enclosing function') */
    cpy_r_r1005 = CPyStatic_message_registry___globals;
    cpy_r_r1006 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1007 = CPyDict_GetItem(cpy_r_r1005, cpy_r_r1006);
    if (unlikely(cpy_r_r1007 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 206, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1008[1] = {cpy_r_r1004};
    cpy_r_r1009 = (PyObject **)&cpy_r_r1008;
    cpy_r_r1010 = _PyObject_Vectorcall(cpy_r_r1007, cpy_r_r1009, 1, 0);
    CPy_DECREF(cpy_r_r1007);
    if (unlikely(cpy_r_r1010 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 206, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1010)))
        cpy_r_r1011 = cpy_r_r1010;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 206, CPyStatic_message_registry___globals, "tuple", cpy_r_r1010);
        goto CPyL521;
    }
    CPyStatic_message_registry___SUPER_ENCLOSING_POSITIONAL_ARGS_REQUIRED = cpy_r_r1011;
    CPy_INCREF(CPyStatic_message_registry___SUPER_ENCLOSING_POSITIONAL_ARGS_REQUIRED);
    cpy_r_r1012 = CPyStatic_message_registry___globals;
    cpy_r_r1013 = CPyStatics[3279]; /* 'SUPER_ENCLOSING_POSITIONAL_ARGS_REQUIRED' */
    cpy_r_r1014 = CPyDict_SetItem(cpy_r_r1012, cpy_r_r1013, cpy_r_r1011);
    CPy_DECREF(cpy_r_r1011);
    cpy_r_r1015 = cpy_r_r1014 >= 0;
    if (unlikely(!cpy_r_r1015)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 206, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1016 = CPyStatics[3280]; /* ('Self argument missing for a non-static method (or '
                                       'an invalid type for self)') */
    cpy_r_r1017 = CPyStatic_message_registry___globals;
    cpy_r_r1018 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1019 = CPyDict_GetItem(cpy_r_r1017, cpy_r_r1018);
    if (unlikely(cpy_r_r1019 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 211, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1020[1] = {cpy_r_r1016};
    cpy_r_r1021 = (PyObject **)&cpy_r_r1020;
    cpy_r_r1022 = _PyObject_Vectorcall(cpy_r_r1019, cpy_r_r1021, 1, 0);
    CPy_DECREF(cpy_r_r1019);
    if (unlikely(cpy_r_r1022 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 211, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1022)))
        cpy_r_r1023 = cpy_r_r1022;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 211, CPyStatic_message_registry___globals, "tuple", cpy_r_r1022);
        goto CPyL521;
    }
    CPyStatic_message_registry___MISSING_OR_INVALID_SELF_TYPE = cpy_r_r1023;
    CPy_INCREF(CPyStatic_message_registry___MISSING_OR_INVALID_SELF_TYPE);
    cpy_r_r1024 = CPyStatic_message_registry___globals;
    cpy_r_r1025 = CPyStatics[3281]; /* 'MISSING_OR_INVALID_SELF_TYPE' */
    cpy_r_r1026 = CPyDict_SetItem(cpy_r_r1024, cpy_r_r1025, cpy_r_r1023);
    CPy_DECREF(cpy_r_r1023);
    cpy_r_r1027 = cpy_r_r1026 >= 0;
    if (unlikely(!cpy_r_r1027)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 211, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1028 = CPyStatics[3282]; /* ('The erased type of self "{}" is not a supertype of '
                                       'its class "{}"') */
    cpy_r_r1029 = CPyStatic_message_registry___globals;
    cpy_r_r1030 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1031 = CPyDict_GetItem(cpy_r_r1029, cpy_r_r1030);
    if (unlikely(cpy_r_r1031 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 214, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1032[1] = {cpy_r_r1028};
    cpy_r_r1033 = (PyObject **)&cpy_r_r1032;
    cpy_r_r1034 = _PyObject_Vectorcall(cpy_r_r1031, cpy_r_r1033, 1, 0);
    CPy_DECREF(cpy_r_r1031);
    if (unlikely(cpy_r_r1034 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 214, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1034)))
        cpy_r_r1035 = cpy_r_r1034;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 214, CPyStatic_message_registry___globals, "tuple", cpy_r_r1034);
        goto CPyL521;
    }
    CPyStatic_message_registry___ERASED_SELF_TYPE_NOT_SUPERTYPE = cpy_r_r1035;
    CPy_INCREF(CPyStatic_message_registry___ERASED_SELF_TYPE_NOT_SUPERTYPE);
    cpy_r_r1036 = CPyStatic_message_registry___globals;
    cpy_r_r1037 = CPyStatics[3283]; /* 'ERASED_SELF_TYPE_NOT_SUPERTYPE' */
    cpy_r_r1038 = CPyDict_SetItem(cpy_r_r1036, cpy_r_r1037, cpy_r_r1035);
    CPy_DECREF(cpy_r_r1035);
    cpy_r_r1039 = cpy_r_r1038 >= 0;
    if (unlikely(!cpy_r_r1039)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 214, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1040 = CPyStatics[3284]; /* 'Cannot inherit from final class "{}"' */
    cpy_r_r1041 = CPyStatic_message_registry___globals;
    cpy_r_r1042 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1043 = CPyDict_GetItem(cpy_r_r1041, cpy_r_r1042);
    if (unlikely(cpy_r_r1043 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 219, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1044[1] = {cpy_r_r1040};
    cpy_r_r1045 = (PyObject **)&cpy_r_r1044;
    cpy_r_r1046 = _PyObject_Vectorcall(cpy_r_r1043, cpy_r_r1045, 1, 0);
    CPy_DECREF(cpy_r_r1043);
    if (unlikely(cpy_r_r1046 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 219, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1046)))
        cpy_r_r1047 = cpy_r_r1046;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 219, CPyStatic_message_registry___globals, "tuple", cpy_r_r1046);
        goto CPyL521;
    }
    CPyStatic_message_registry___CANNOT_INHERIT_FROM_FINAL = cpy_r_r1047;
    CPy_INCREF(CPyStatic_message_registry___CANNOT_INHERIT_FROM_FINAL);
    cpy_r_r1048 = CPyStatic_message_registry___globals;
    cpy_r_r1049 = CPyStatics[3285]; /* 'CANNOT_INHERIT_FROM_FINAL' */
    cpy_r_r1050 = CPyDict_SetItem(cpy_r_r1048, cpy_r_r1049, cpy_r_r1047);
    CPy_DECREF(cpy_r_r1047);
    cpy_r_r1051 = cpy_r_r1050 >= 0;
    if (unlikely(!cpy_r_r1051)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 219, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1052 = CPyStatics[3286]; /* ('Final name declared in class body cannot depend on '
                                       'type variables') */
    cpy_r_r1053 = CPyStatic_message_registry___globals;
    cpy_r_r1054 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1055 = CPyDict_GetItem(cpy_r_r1053, cpy_r_r1054);
    if (unlikely(cpy_r_r1055 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 220, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1056[1] = {cpy_r_r1052};
    cpy_r_r1057 = (PyObject **)&cpy_r_r1056;
    cpy_r_r1058 = _PyObject_Vectorcall(cpy_r_r1055, cpy_r_r1057, 1, 0);
    CPy_DECREF(cpy_r_r1055);
    if (unlikely(cpy_r_r1058 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 220, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1058)))
        cpy_r_r1059 = cpy_r_r1058;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 220, CPyStatic_message_registry___globals, "tuple", cpy_r_r1058);
        goto CPyL521;
    }
    CPyStatic_message_registry___DEPENDENT_FINAL_IN_CLASS_BODY = cpy_r_r1059;
    CPy_INCREF(CPyStatic_message_registry___DEPENDENT_FINAL_IN_CLASS_BODY);
    cpy_r_r1060 = CPyStatic_message_registry___globals;
    cpy_r_r1061 = CPyStatics[3287]; /* 'DEPENDENT_FINAL_IN_CLASS_BODY' */
    cpy_r_r1062 = CPyDict_SetItem(cpy_r_r1060, cpy_r_r1061, cpy_r_r1059);
    CPy_DECREF(cpy_r_r1059);
    cpy_r_r1063 = cpy_r_r1062 >= 0;
    if (unlikely(!cpy_r_r1063)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 220, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1064 = CPyStatics[1328]; /* ('Cannot access final instance attribute "{}" on '
                                       'class object') */
    cpy_r_r1065 = CPyStatic_message_registry___globals;
    cpy_r_r1066 = CPyStatics[3288]; /* 'CANNOT_ACCESS_FINAL_INSTANCE_ATTR' */
    cpy_r_r1067 = CPyDict_SetItem(cpy_r_r1065, cpy_r_r1066, cpy_r_r1064);
    cpy_r_r1068 = cpy_r_r1067 >= 0;
    if (unlikely(!cpy_r_r1068)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 224, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1069 = CPyStatics[3289]; /* 'Deletable attribute cannot be final' */
    cpy_r_r1070 = CPyStatic_message_registry___globals;
    cpy_r_r1071 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1072 = CPyDict_GetItem(cpy_r_r1070, cpy_r_r1071);
    if (unlikely(cpy_r_r1072 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 226, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1073[1] = {cpy_r_r1069};
    cpy_r_r1074 = (PyObject **)&cpy_r_r1073;
    cpy_r_r1075 = _PyObject_Vectorcall(cpy_r_r1072, cpy_r_r1074, 1, 0);
    CPy_DECREF(cpy_r_r1072);
    if (unlikely(cpy_r_r1075 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 226, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1075)))
        cpy_r_r1076 = cpy_r_r1075;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 226, CPyStatic_message_registry___globals, "tuple", cpy_r_r1075);
        goto CPyL521;
    }
    CPyStatic_message_registry___CANNOT_MAKE_DELETABLE_FINAL = cpy_r_r1076;
    CPy_INCREF(CPyStatic_message_registry___CANNOT_MAKE_DELETABLE_FINAL);
    cpy_r_r1077 = CPyStatic_message_registry___globals;
    cpy_r_r1078 = CPyStatics[3290]; /* 'CANNOT_MAKE_DELETABLE_FINAL' */
    cpy_r_r1079 = CPyDict_SetItem(cpy_r_r1077, cpy_r_r1078, cpy_r_r1076);
    CPy_DECREF(cpy_r_r1076);
    cpy_r_r1080 = cpy_r_r1079 >= 0;
    if (unlikely(!cpy_r_r1080)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 226, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1081 = CPyStatics[3291]; /* ('Assigned "__members__" will be overridden by "Enum" '
                                       'internally') */
    cpy_r_r1082 = CPyStatic_message_registry___globals;
    cpy_r_r1083 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1084 = CPyDict_GetItem(cpy_r_r1082, cpy_r_r1083);
    if (unlikely(cpy_r_r1084 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 229, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1085[1] = {cpy_r_r1081};
    cpy_r_r1086 = (PyObject **)&cpy_r_r1085;
    cpy_r_r1087 = _PyObject_Vectorcall(cpy_r_r1084, cpy_r_r1086, 1, 0);
    CPy_DECREF(cpy_r_r1084);
    if (unlikely(cpy_r_r1087 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 229, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1087)))
        cpy_r_r1088 = cpy_r_r1087;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 229, CPyStatic_message_registry___globals, "tuple", cpy_r_r1087);
        goto CPyL521;
    }
    CPyStatic_message_registry___ENUM_MEMBERS_ATTR_WILL_BE_OVERRIDEN = cpy_r_r1088;
    CPy_INCREF(CPyStatic_message_registry___ENUM_MEMBERS_ATTR_WILL_BE_OVERRIDEN);
    cpy_r_r1089 = CPyStatic_message_registry___globals;
    cpy_r_r1090 = CPyStatics[3292]; /* 'ENUM_MEMBERS_ATTR_WILL_BE_OVERRIDEN' */
    cpy_r_r1091 = CPyDict_SetItem(cpy_r_r1089, cpy_r_r1090, cpy_r_r1088);
    CPy_DECREF(cpy_r_r1088);
    cpy_r_r1092 = cpy_r_r1091 >= 0;
    if (unlikely(!cpy_r_r1092)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 229, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1093 = CPyStatics[3293]; /* ('Cannot override instance variable (previously '
                                       'declared on base class "{}") with class variable') */
    cpy_r_r1094 = CPyStatic_message_registry___globals;
    cpy_r_r1095 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1096 = CPyDict_GetItem(cpy_r_r1094, cpy_r_r1095);
    if (unlikely(cpy_r_r1096 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 234, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1097[1] = {cpy_r_r1093};
    cpy_r_r1098 = (PyObject **)&cpy_r_r1097;
    cpy_r_r1099 = _PyObject_Vectorcall(cpy_r_r1096, cpy_r_r1098, 1, 0);
    CPy_DECREF(cpy_r_r1096);
    if (unlikely(cpy_r_r1099 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 234, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1099)))
        cpy_r_r1100 = cpy_r_r1099;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 234, CPyStatic_message_registry___globals, "tuple", cpy_r_r1099);
        goto CPyL521;
    }
    CPyStatic_message_registry___CANNOT_OVERRIDE_INSTANCE_VAR = cpy_r_r1100;
    CPy_INCREF(CPyStatic_message_registry___CANNOT_OVERRIDE_INSTANCE_VAR);
    cpy_r_r1101 = CPyStatic_message_registry___globals;
    cpy_r_r1102 = CPyStatics[3294]; /* 'CANNOT_OVERRIDE_INSTANCE_VAR' */
    cpy_r_r1103 = CPyDict_SetItem(cpy_r_r1101, cpy_r_r1102, cpy_r_r1100);
    CPy_DECREF(cpy_r_r1100);
    cpy_r_r1104 = cpy_r_r1103 >= 0;
    if (unlikely(!cpy_r_r1104)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 234, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1105 = CPyStatics[3295]; /* ('Cannot override class variable (previously declared '
                                       'on base class "{}") with instance variable') */
    cpy_r_r1106 = CPyStatic_message_registry___globals;
    cpy_r_r1107 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1108 = CPyDict_GetItem(cpy_r_r1106, cpy_r_r1107);
    if (unlikely(cpy_r_r1108 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 238, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1109[1] = {cpy_r_r1105};
    cpy_r_r1110 = (PyObject **)&cpy_r_r1109;
    cpy_r_r1111 = _PyObject_Vectorcall(cpy_r_r1108, cpy_r_r1110, 1, 0);
    CPy_DECREF(cpy_r_r1108);
    if (unlikely(cpy_r_r1111 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 238, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1111)))
        cpy_r_r1112 = cpy_r_r1111;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 238, CPyStatic_message_registry___globals, "tuple", cpy_r_r1111);
        goto CPyL521;
    }
    CPyStatic_message_registry___CANNOT_OVERRIDE_CLASS_VAR = cpy_r_r1112;
    CPy_INCREF(CPyStatic_message_registry___CANNOT_OVERRIDE_CLASS_VAR);
    cpy_r_r1113 = CPyStatic_message_registry___globals;
    cpy_r_r1114 = CPyStatics[3296]; /* 'CANNOT_OVERRIDE_CLASS_VAR' */
    cpy_r_r1115 = CPyDict_SetItem(cpy_r_r1113, cpy_r_r1114, cpy_r_r1112);
    CPy_DECREF(cpy_r_r1112);
    cpy_r_r1116 = cpy_r_r1115 >= 0;
    if (unlikely(!cpy_r_r1116)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 238, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1117 = CPyStatics[3297]; /* 'ClassVar cannot contain type variables' */
    cpy_r_r1118 = CPyStatic_message_registry___globals;
    cpy_r_r1119 = CPyStatics[3298]; /* 'CLASS_VAR_WITH_TYPEVARS' */
    cpy_r_r1120 = CPyDict_SetItem(cpy_r_r1118, cpy_r_r1119, cpy_r_r1117);
    cpy_r_r1121 = cpy_r_r1120 >= 0;
    if (unlikely(!cpy_r_r1121)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 242, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1122 = CPyStatics[3299]; /* 'ClassVar cannot contain Self type in generic classes' */
    cpy_r_r1123 = CPyStatic_message_registry___globals;
    cpy_r_r1124 = CPyStatics[3300]; /* 'CLASS_VAR_WITH_GENERIC_SELF' */
    cpy_r_r1125 = CPyDict_SetItem(cpy_r_r1123, cpy_r_r1124, cpy_r_r1122);
    cpy_r_r1126 = cpy_r_r1125 >= 0;
    if (unlikely(!cpy_r_r1126)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 243, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1127 = CPyStatics[3301]; /* ('ClassVar can only be used for assignments in class '
                                       'body') */
    cpy_r_r1128 = CPyStatic_message_registry___globals;
    cpy_r_r1129 = CPyStatics[3302]; /* 'CLASS_VAR_OUTSIDE_OF_CLASS' */
    cpy_r_r1130 = CPyDict_SetItem(cpy_r_r1128, cpy_r_r1129, cpy_r_r1127);
    cpy_r_r1131 = cpy_r_r1130 >= 0;
    if (unlikely(!cpy_r_r1131)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 244, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1132 = CPyStatics[3303]; /* ('Only @runtime_checkable protocols can be used with '
                                       'instance and class checks') */
    cpy_r_r1133 = CPyStatic_message_registry___globals;
    cpy_r_r1134 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1135 = CPyDict_GetItem(cpy_r_r1133, cpy_r_r1134);
    if (unlikely(cpy_r_r1135 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 247, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1136[1] = {cpy_r_r1132};
    cpy_r_r1137 = (PyObject **)&cpy_r_r1136;
    cpy_r_r1138 = _PyObject_Vectorcall(cpy_r_r1135, cpy_r_r1137, 1, 0);
    CPy_DECREF(cpy_r_r1135);
    if (unlikely(cpy_r_r1138 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 247, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1138)))
        cpy_r_r1139 = cpy_r_r1138;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 247, CPyStatic_message_registry___globals, "tuple", cpy_r_r1138);
        goto CPyL521;
    }
    CPyStatic_message_registry___RUNTIME_PROTOCOL_EXPECTED = cpy_r_r1139;
    CPy_INCREF(CPyStatic_message_registry___RUNTIME_PROTOCOL_EXPECTED);
    cpy_r_r1140 = CPyStatic_message_registry___globals;
    cpy_r_r1141 = CPyStatics[3304]; /* 'RUNTIME_PROTOCOL_EXPECTED' */
    cpy_r_r1142 = CPyDict_SetItem(cpy_r_r1140, cpy_r_r1141, cpy_r_r1139);
    CPy_DECREF(cpy_r_r1139);
    cpy_r_r1143 = cpy_r_r1142 >= 0;
    if (unlikely(!cpy_r_r1143)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 247, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1144 = CPyStatics[3305]; /* 'Cannot instantiate protocol class "{}"' */
    cpy_r_r1145 = CPyStatic_message_registry___globals;
    cpy_r_r1146 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1147 = CPyDict_GetItem(cpy_r_r1145, cpy_r_r1146);
    if (unlikely(cpy_r_r1147 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 250, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1148[1] = {cpy_r_r1144};
    cpy_r_r1149 = (PyObject **)&cpy_r_r1148;
    cpy_r_r1150 = _PyObject_Vectorcall(cpy_r_r1147, cpy_r_r1149, 1, 0);
    CPy_DECREF(cpy_r_r1147);
    if (unlikely(cpy_r_r1150 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 250, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1150)))
        cpy_r_r1151 = cpy_r_r1150;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 250, CPyStatic_message_registry___globals, "tuple", cpy_r_r1150);
        goto CPyL521;
    }
    CPyStatic_message_registry___CANNOT_INSTANTIATE_PROTOCOL = cpy_r_r1151;
    CPy_INCREF(CPyStatic_message_registry___CANNOT_INSTANTIATE_PROTOCOL);
    cpy_r_r1152 = CPyStatic_message_registry___globals;
    cpy_r_r1153 = CPyStatics[3306]; /* 'CANNOT_INSTANTIATE_PROTOCOL' */
    cpy_r_r1154 = CPyDict_SetItem(cpy_r_r1152, cpy_r_r1153, cpy_r_r1151);
    CPy_DECREF(cpy_r_r1151);
    cpy_r_r1155 = cpy_r_r1154 >= 0;
    if (unlikely(!cpy_r_r1155)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 250, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1156 = CPyStatics[3307]; /* ('Not all union combinations were tried because there '
                                       'are too many unions') */
    cpy_r_r1157 = CPyStatic_message_registry___globals;
    cpy_r_r1158 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1159 = CPyDict_GetItem(cpy_r_r1157, cpy_r_r1158);
    if (unlikely(cpy_r_r1159 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 251, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1160[1] = {cpy_r_r1156};
    cpy_r_r1161 = (PyObject **)&cpy_r_r1160;
    cpy_r_r1162 = _PyObject_Vectorcall(cpy_r_r1159, cpy_r_r1161, 1, 0);
    CPy_DECREF(cpy_r_r1159);
    if (unlikely(cpy_r_r1162 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 251, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1162)))
        cpy_r_r1163 = cpy_r_r1162;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 251, CPyStatic_message_registry___globals, "tuple", cpy_r_r1162);
        goto CPyL521;
    }
    CPyStatic_message_registry___TOO_MANY_UNION_COMBINATIONS = cpy_r_r1163;
    CPy_INCREF(CPyStatic_message_registry___TOO_MANY_UNION_COMBINATIONS);
    cpy_r_r1164 = CPyStatic_message_registry___globals;
    cpy_r_r1165 = CPyStatics[3308]; /* 'TOO_MANY_UNION_COMBINATIONS' */
    cpy_r_r1166 = CPyDict_SetItem(cpy_r_r1164, cpy_r_r1165, cpy_r_r1163);
    CPy_DECREF(cpy_r_r1163);
    cpy_r_r1167 = cpy_r_r1166 >= 0;
    if (unlikely(!cpy_r_r1167)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 251, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1168 = CPyStatics[3309]; /* 'Contiguous iterable with same type expected' */
    cpy_r_r1169 = CPyStatic_message_registry___globals;
    cpy_r_r1170 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1171 = CPyDict_GetItem(cpy_r_r1169, cpy_r_r1170);
    if (unlikely(cpy_r_r1171 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 255, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1172[1] = {cpy_r_r1168};
    cpy_r_r1173 = (PyObject **)&cpy_r_r1172;
    cpy_r_r1174 = _PyObject_Vectorcall(cpy_r_r1171, cpy_r_r1173, 1, 0);
    CPy_DECREF(cpy_r_r1171);
    if (unlikely(cpy_r_r1174 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 255, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1174)))
        cpy_r_r1175 = cpy_r_r1174;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 255, CPyStatic_message_registry___globals, "tuple", cpy_r_r1174);
        goto CPyL521;
    }
    CPyStatic_message_registry___CONTIGUOUS_ITERABLE_EXPECTED = cpy_r_r1175;
    CPy_INCREF(CPyStatic_message_registry___CONTIGUOUS_ITERABLE_EXPECTED);
    cpy_r_r1176 = CPyStatic_message_registry___globals;
    cpy_r_r1177 = CPyStatics[3310]; /* 'CONTIGUOUS_ITERABLE_EXPECTED' */
    cpy_r_r1178 = CPyDict_SetItem(cpy_r_r1176, cpy_r_r1177, cpy_r_r1175);
    CPy_DECREF(cpy_r_r1175);
    cpy_r_r1179 = cpy_r_r1178 >= 0;
    if (unlikely(!cpy_r_r1179)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 255, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1180 = CPyStatics[3311]; /* "Invalid type '{}' for *expr (iterable expected)" */
    cpy_r_r1181 = CPyStatic_message_registry___globals;
    cpy_r_r1182 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1183 = CPyDict_GetItem(cpy_r_r1181, cpy_r_r1182);
    if (unlikely(cpy_r_r1183 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 256, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1184[1] = {cpy_r_r1180};
    cpy_r_r1185 = (PyObject **)&cpy_r_r1184;
    cpy_r_r1186 = _PyObject_Vectorcall(cpy_r_r1183, cpy_r_r1185, 1, 0);
    CPy_DECREF(cpy_r_r1183);
    if (unlikely(cpy_r_r1186 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 256, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1186)))
        cpy_r_r1187 = cpy_r_r1186;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 256, CPyStatic_message_registry___globals, "tuple", cpy_r_r1186);
        goto CPyL521;
    }
    CPyStatic_message_registry___ITERABLE_TYPE_EXPECTED = cpy_r_r1187;
    CPy_INCREF(CPyStatic_message_registry___ITERABLE_TYPE_EXPECTED);
    cpy_r_r1188 = CPyStatic_message_registry___globals;
    cpy_r_r1189 = CPyStatics[3312]; /* 'ITERABLE_TYPE_EXPECTED' */
    cpy_r_r1190 = CPyDict_SetItem(cpy_r_r1188, cpy_r_r1189, cpy_r_r1187);
    CPy_DECREF(cpy_r_r1187);
    cpy_r_r1191 = cpy_r_r1190 >= 0;
    if (unlikely(!cpy_r_r1191)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 256, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1192 = CPyStatics[3313]; /* 'Type guard requires positional argument' */
    cpy_r_r1193 = CPyStatic_message_registry___globals;
    cpy_r_r1194 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1195 = CPyDict_GetItem(cpy_r_r1193, cpy_r_r1194);
    if (unlikely(cpy_r_r1195 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 257, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1196[1] = {cpy_r_r1192};
    cpy_r_r1197 = (PyObject **)&cpy_r_r1196;
    cpy_r_r1198 = _PyObject_Vectorcall(cpy_r_r1195, cpy_r_r1197, 1, 0);
    CPy_DECREF(cpy_r_r1195);
    if (unlikely(cpy_r_r1198 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 257, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1198)))
        cpy_r_r1199 = cpy_r_r1198;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 257, CPyStatic_message_registry___globals, "tuple", cpy_r_r1198);
        goto CPyL521;
    }
    CPyStatic_message_registry___TYPE_GUARD_POS_ARG_REQUIRED = cpy_r_r1199;
    CPy_INCREF(CPyStatic_message_registry___TYPE_GUARD_POS_ARG_REQUIRED);
    cpy_r_r1200 = CPyStatic_message_registry___globals;
    cpy_r_r1201 = CPyStatics[3314]; /* 'TYPE_GUARD_POS_ARG_REQUIRED' */
    cpy_r_r1202 = CPyDict_SetItem(cpy_r_r1200, cpy_r_r1201, cpy_r_r1199);
    CPy_DECREF(cpy_r_r1199);
    cpy_r_r1203 = cpy_r_r1202 >= 0;
    if (unlikely(!cpy_r_r1203)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 257, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1204 = CPyStatics[1356]; /* 'Class "{}" doesn\'t define "__match_args__"' */
    cpy_r_r1205 = CPyStatic_message_registry___globals;
    cpy_r_r1206 = CPyStatics[3315]; /* 'MISSING_MATCH_ARGS' */
    cpy_r_r1207 = CPyDict_SetItem(cpy_r_r1205, cpy_r_r1206, cpy_r_r1204);
    cpy_r_r1208 = cpy_r_r1207 >= 0;
    if (unlikely(!cpy_r_r1208)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 260, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1209 = CPyStatics[1352]; /* 'Alternative patterns bind different names' */
    cpy_r_r1210 = CPyStatic_message_registry___globals;
    cpy_r_r1211 = CPyStatics[3316]; /* 'OR_PATTERN_ALTERNATIVE_NAMES' */
    cpy_r_r1212 = CPyDict_SetItem(cpy_r_r1210, cpy_r_r1211, cpy_r_r1209);
    cpy_r_r1213 = cpy_r_r1212 >= 0;
    if (unlikely(!cpy_r_r1213)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 261, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1214 = CPyStatics[1353]; /* ('Class pattern class must not be a type alias with '
                                       'type parameters') */
    cpy_r_r1215 = CPyStatic_message_registry___globals;
    cpy_r_r1216 = CPyStatics[3317]; /* 'CLASS_PATTERN_GENERIC_TYPE_ALIAS' */
    cpy_r_r1217 = CPyDict_SetItem(cpy_r_r1215, cpy_r_r1216, cpy_r_r1214);
    cpy_r_r1218 = cpy_r_r1217 >= 0;
    if (unlikely(!cpy_r_r1218)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 263, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1219 = CPyStatics[1354]; /* 'Expected type in class pattern; found "{}"' */
    cpy_r_r1220 = CPyStatic_message_registry___globals;
    cpy_r_r1221 = CPyStatics[3318]; /* 'CLASS_PATTERN_TYPE_REQUIRED' */
    cpy_r_r1222 = CPyDict_SetItem(cpy_r_r1220, cpy_r_r1221, cpy_r_r1219);
    cpy_r_r1223 = cpy_r_r1222 >= 0;
    if (unlikely(!cpy_r_r1223)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 265, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1224 = CPyStatics[1355]; /* 'Too many positional patterns for class pattern' */
    cpy_r_r1225 = CPyStatic_message_registry___globals;
    cpy_r_r1226 = CPyStatics[3319]; /* 'CLASS_PATTERN_TOO_MANY_POSITIONAL_ARGS' */
    cpy_r_r1227 = CPyDict_SetItem(cpy_r_r1225, cpy_r_r1226, cpy_r_r1224);
    cpy_r_r1228 = cpy_r_r1227 >= 0;
    if (unlikely(!cpy_r_r1228)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 266, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1229 = CPyStatics[1357]; /* 'Keyword "{}" already matches a positional pattern' */
    cpy_r_r1230 = CPyStatic_message_registry___globals;
    cpy_r_r1231 = CPyStatics[3320]; /* 'CLASS_PATTERN_KEYWORD_MATCHES_POSITIONAL' */
    cpy_r_r1232 = CPyDict_SetItem(cpy_r_r1230, cpy_r_r1231, cpy_r_r1229);
    cpy_r_r1233 = cpy_r_r1232 >= 0;
    if (unlikely(!cpy_r_r1233)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 268, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1234 = CPyStatics[1358]; /* 'Duplicate keyword pattern "{}"' */
    cpy_r_r1235 = CPyStatic_message_registry___globals;
    cpy_r_r1236 = CPyStatics[3321]; /* 'CLASS_PATTERN_DUPLICATE_KEYWORD_PATTERN' */
    cpy_r_r1237 = CPyDict_SetItem(cpy_r_r1235, cpy_r_r1236, cpy_r_r1234);
    cpy_r_r1238 = cpy_r_r1237 >= 0;
    if (unlikely(!cpy_r_r1238)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 270, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1239 = CPyStatics[1359]; /* 'Class "{}" has no attribute "{}"' */
    cpy_r_r1240 = CPyStatic_message_registry___globals;
    cpy_r_r1241 = CPyStatics[3322]; /* 'CLASS_PATTERN_UNKNOWN_KEYWORD' */
    cpy_r_r1242 = CPyDict_SetItem(cpy_r_r1240, cpy_r_r1241, cpy_r_r1239);
    cpy_r_r1243 = cpy_r_r1242 >= 0;
    if (unlikely(!cpy_r_r1243)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 271, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1244 = CPyStatics[3323]; /* 'Cannot have both classmethod and staticmethod' */
    cpy_r_r1245 = CPyStatic_message_registry___globals;
    cpy_r_r1246 = CPyStatics[3324]; /* 'CLASS_PATTERN_CLASS_OR_STATIC_METHOD' */
    cpy_r_r1247 = CPyDict_SetItem(cpy_r_r1245, cpy_r_r1246, cpy_r_r1244);
    cpy_r_r1248 = cpy_r_r1247 >= 0;
    if (unlikely(!cpy_r_r1248)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 272, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1249 = CPyStatics[1361]; /* 'Multiple assignments to name "{}" in pattern' */
    cpy_r_r1250 = CPyStatic_message_registry___globals;
    cpy_r_r1251 = CPyStatics[3325]; /* 'MULTIPLE_ASSIGNMENTS_IN_PATTERN' */
    cpy_r_r1252 = CPyDict_SetItem(cpy_r_r1250, cpy_r_r1251, cpy_r_r1249);
    cpy_r_r1253 = cpy_r_r1252 >= 0;
    if (unlikely(!cpy_r_r1253)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 273, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1254 = CPyStatics[788]; /* 'Cannot assign to "__match_args__"' */
    cpy_r_r1255 = CPyStatic_message_registry___globals;
    cpy_r_r1256 = CPyStatics[3326]; /* 'CANNOT_MODIFY_MATCH_ARGS' */
    cpy_r_r1257 = CPyDict_SetItem(cpy_r_r1255, cpy_r_r1256, cpy_r_r1254);
    cpy_r_r1258 = cpy_r_r1257 >= 0;
    if (unlikely(!cpy_r_r1258)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 274, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1259 = CPyStatics[3327]; /* ('"alias" argument to dataclass field must be a '
                                       'string literal') */
    cpy_r_r1260 = CPyStatic_message_registry___globals;
    cpy_r_r1261 = CPyStatics[3328]; /* 'DATACLASS_FIELD_ALIAS_MUST_BE_LITERAL' */
    cpy_r_r1262 = CPyDict_SetItem(cpy_r_r1260, cpy_r_r1261, cpy_r_r1259);
    cpy_r_r1263 = cpy_r_r1262 >= 0;
    if (unlikely(!cpy_r_r1263)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 277, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1264 = CPyStatics[787]; /* '"__post_init__" method must be an instance method' */
    cpy_r_r1265 = CPyStatic_message_registry___globals;
    cpy_r_r1266 = CPyStatics[3329]; /* 'DATACLASS_POST_INIT_MUST_BE_A_FUNCTION' */
    cpy_r_r1267 = CPyDict_SetItem(cpy_r_r1265, cpy_r_r1266, cpy_r_r1264);
    cpy_r_r1268 = cpy_r_r1267 >= 0;
    if (unlikely(!cpy_r_r1268)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 279, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1269 = CPyStatics[3330]; /* ("Condition can't be inferred, unable to merge "
                                       'overloads') */
    cpy_r_r1270 = CPyStatic_message_registry___globals;
    cpy_r_r1271 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1272 = CPyDict_GetItem(cpy_r_r1270, cpy_r_r1271);
    if (unlikely(cpy_r_r1272 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 282, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1273[1] = {cpy_r_r1269};
    cpy_r_r1274 = (PyObject **)&cpy_r_r1273;
    cpy_r_r1275 = _PyObject_Vectorcall(cpy_r_r1272, cpy_r_r1274, 1, 0);
    CPy_DECREF(cpy_r_r1272);
    if (unlikely(cpy_r_r1275 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 282, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1275)))
        cpy_r_r1276 = cpy_r_r1275;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 282, CPyStatic_message_registry___globals, "tuple", cpy_r_r1275);
        goto CPyL521;
    }
    CPyStatic_message_registry___FAILED_TO_MERGE_OVERLOADS = cpy_r_r1276;
    CPy_INCREF(CPyStatic_message_registry___FAILED_TO_MERGE_OVERLOADS);
    cpy_r_r1277 = CPyStatic_message_registry___globals;
    cpy_r_r1278 = CPyStatics[3331]; /* 'FAILED_TO_MERGE_OVERLOADS' */
    cpy_r_r1279 = CPyDict_SetItem(cpy_r_r1277, cpy_r_r1278, cpy_r_r1276);
    CPy_DECREF(cpy_r_r1276);
    cpy_r_r1280 = cpy_r_r1279 >= 0;
    if (unlikely(!cpy_r_r1280)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 282, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1281 = CPyStatics[3332]; /* ('type ignore with error code is not supported for '
                                       'modules; use `# mypy: disable-error-code="{}"`') */
    cpy_r_r1282 = CPyStatic_errorcodes___SYNTAX;
    if (likely(cpy_r_r1282 != NULL)) goto CPyL439;
    PyErr_SetString(PyExc_NameError, "value for final name \"SYNTAX\" was not set");
    cpy_r_r1283 = 0;
    if (unlikely(!cpy_r_r1283)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 288, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL439: ;
    cpy_r_r1284 = CPyStatic_message_registry___globals;
    cpy_r_r1285 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1286 = CPyDict_GetItem(cpy_r_r1284, cpy_r_r1285);
    if (unlikely(cpy_r_r1286 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 285, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1287[2] = {cpy_r_r1281, cpy_r_r1282};
    cpy_r_r1288 = (PyObject **)&cpy_r_r1287;
    cpy_r_r1289 = _PyObject_Vectorcall(cpy_r_r1286, cpy_r_r1288, 2, 0);
    CPy_DECREF(cpy_r_r1286);
    if (unlikely(cpy_r_r1289 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 285, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1289)))
        cpy_r_r1290 = cpy_r_r1289;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 285, CPyStatic_message_registry___globals, "tuple", cpy_r_r1289);
        goto CPyL521;
    }
    CPyStatic_message_registry___TYPE_IGNORE_WITH_ERRCODE_ON_MODULE = cpy_r_r1290;
    CPy_INCREF(CPyStatic_message_registry___TYPE_IGNORE_WITH_ERRCODE_ON_MODULE);
    cpy_r_r1291 = CPyStatic_message_registry___globals;
    cpy_r_r1292 = CPyStatics[3333]; /* 'TYPE_IGNORE_WITH_ERRCODE_ON_MODULE' */
    cpy_r_r1293 = CPyDict_SetItem(cpy_r_r1291, cpy_r_r1292, cpy_r_r1290);
    CPy_DECREF(cpy_r_r1290);
    cpy_r_r1294 = cpy_r_r1293 >= 0;
    if (unlikely(!cpy_r_r1294)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 285, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1295 = CPyStatics[3334]; /* 'Invalid "type: ignore" comment' */
    cpy_r_r1296 = CPyStatic_errorcodes___SYNTAX;
    if (likely(cpy_r_r1296 != NULL)) goto CPyL446;
    PyErr_SetString(PyExc_NameError, "value for final name \"SYNTAX\" was not set");
    cpy_r_r1297 = 0;
    if (unlikely(!cpy_r_r1297)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 290, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL446: ;
    cpy_r_r1298 = CPyStatic_message_registry___globals;
    cpy_r_r1299 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1300 = CPyDict_GetItem(cpy_r_r1298, cpy_r_r1299);
    if (unlikely(cpy_r_r1300 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 290, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1301[2] = {cpy_r_r1295, cpy_r_r1296};
    cpy_r_r1302 = (PyObject **)&cpy_r_r1301;
    cpy_r_r1303 = _PyObject_Vectorcall(cpy_r_r1300, cpy_r_r1302, 2, 0);
    CPy_DECREF(cpy_r_r1300);
    if (unlikely(cpy_r_r1303 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 290, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1303)))
        cpy_r_r1304 = cpy_r_r1303;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 290, CPyStatic_message_registry___globals, "tuple", cpy_r_r1303);
        goto CPyL521;
    }
    CPyStatic_message_registry___INVALID_TYPE_IGNORE = cpy_r_r1304;
    CPy_INCREF(CPyStatic_message_registry___INVALID_TYPE_IGNORE);
    cpy_r_r1305 = CPyStatic_message_registry___globals;
    cpy_r_r1306 = CPyStatics[3335]; /* 'INVALID_TYPE_IGNORE' */
    cpy_r_r1307 = CPyDict_SetItem(cpy_r_r1305, cpy_r_r1306, cpy_r_r1304);
    CPy_DECREF(cpy_r_r1304);
    cpy_r_r1308 = cpy_r_r1307 >= 0;
    if (unlikely(!cpy_r_r1308)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 290, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1309 = CPyStatics[3336]; /* 'Syntax error in type comment "{}"' */
    cpy_r_r1310 = CPyStatic_errorcodes___SYNTAX;
    if (likely(cpy_r_r1310 != NULL)) goto CPyL453;
    PyErr_SetString(PyExc_NameError, "value for final name \"SYNTAX\" was not set");
    cpy_r_r1311 = 0;
    if (unlikely(!cpy_r_r1311)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 292, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL453: ;
    cpy_r_r1312 = CPyStatic_message_registry___globals;
    cpy_r_r1313 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1314 = CPyDict_GetItem(cpy_r_r1312, cpy_r_r1313);
    if (unlikely(cpy_r_r1314 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 291, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1315[2] = {cpy_r_r1309, cpy_r_r1310};
    cpy_r_r1316 = (PyObject **)&cpy_r_r1315;
    cpy_r_r1317 = _PyObject_Vectorcall(cpy_r_r1314, cpy_r_r1316, 2, 0);
    CPy_DECREF(cpy_r_r1314);
    if (unlikely(cpy_r_r1317 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 291, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1317)))
        cpy_r_r1318 = cpy_r_r1317;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 291, CPyStatic_message_registry___globals, "tuple", cpy_r_r1317);
        goto CPyL521;
    }
    CPyStatic_message_registry___TYPE_COMMENT_SYNTAX_ERROR_VALUE = cpy_r_r1318;
    CPy_INCREF(CPyStatic_message_registry___TYPE_COMMENT_SYNTAX_ERROR_VALUE);
    cpy_r_r1319 = CPyStatic_message_registry___globals;
    cpy_r_r1320 = CPyStatics[3337]; /* 'TYPE_COMMENT_SYNTAX_ERROR_VALUE' */
    cpy_r_r1321 = CPyDict_SetItem(cpy_r_r1319, cpy_r_r1320, cpy_r_r1318);
    CPy_DECREF(cpy_r_r1318);
    cpy_r_r1322 = cpy_r_r1321 >= 0;
    if (unlikely(!cpy_r_r1322)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 291, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1323 = CPyStatics[3338]; /* ('Ellipses cannot accompany other argument types in '
                                       'function type signature') */
    cpy_r_r1324 = CPyStatic_errorcodes___SYNTAX;
    if (likely(cpy_r_r1324 != NULL)) goto CPyL460;
    PyErr_SetString(PyExc_NameError, "value for final name \"SYNTAX\" was not set");
    cpy_r_r1325 = 0;
    if (unlikely(!cpy_r_r1325)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 295, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL460: ;
    cpy_r_r1326 = CPyStatic_message_registry___globals;
    cpy_r_r1327 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1328 = CPyDict_GetItem(cpy_r_r1326, cpy_r_r1327);
    if (unlikely(cpy_r_r1328 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 294, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1329[2] = {cpy_r_r1323, cpy_r_r1324};
    cpy_r_r1330 = (PyObject **)&cpy_r_r1329;
    cpy_r_r1331 = _PyObject_Vectorcall(cpy_r_r1328, cpy_r_r1330, 2, 0);
    CPy_DECREF(cpy_r_r1328);
    if (unlikely(cpy_r_r1331 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 294, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1331)))
        cpy_r_r1332 = cpy_r_r1331;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 294, CPyStatic_message_registry___globals, "tuple", cpy_r_r1331);
        goto CPyL521;
    }
    CPyStatic_message_registry___ELLIPSIS_WITH_OTHER_TYPEARGS = cpy_r_r1332;
    CPy_INCREF(CPyStatic_message_registry___ELLIPSIS_WITH_OTHER_TYPEARGS);
    cpy_r_r1333 = CPyStatic_message_registry___globals;
    cpy_r_r1334 = CPyStatics[3339]; /* 'ELLIPSIS_WITH_OTHER_TYPEARGS' */
    cpy_r_r1335 = CPyDict_SetItem(cpy_r_r1333, cpy_r_r1334, cpy_r_r1332);
    CPy_DECREF(cpy_r_r1332);
    cpy_r_r1336 = cpy_r_r1335 >= 0;
    if (unlikely(!cpy_r_r1336)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 294, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1337 = CPyStatics[3340]; /* 'Type signature has too many arguments' */
    cpy_r_r1338 = CPyStatic_errorcodes___SYNTAX;
    if (likely(cpy_r_r1338 != NULL)) goto CPyL467;
    PyErr_SetString(PyExc_NameError, "value for final name \"SYNTAX\" was not set");
    cpy_r_r1339 = 0;
    if (unlikely(!cpy_r_r1339)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 298, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL467: ;
    cpy_r_r1340 = CPyStatic_message_registry___globals;
    cpy_r_r1341 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1342 = CPyDict_GetItem(cpy_r_r1340, cpy_r_r1341);
    if (unlikely(cpy_r_r1342 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 297, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1343[2] = {cpy_r_r1337, cpy_r_r1338};
    cpy_r_r1344 = (PyObject **)&cpy_r_r1343;
    cpy_r_r1345 = _PyObject_Vectorcall(cpy_r_r1342, cpy_r_r1344, 2, 0);
    CPy_DECREF(cpy_r_r1342);
    if (unlikely(cpy_r_r1345 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 297, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1345)))
        cpy_r_r1346 = cpy_r_r1345;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 297, CPyStatic_message_registry___globals, "tuple", cpy_r_r1345);
        goto CPyL521;
    }
    CPyStatic_message_registry___TYPE_SIGNATURE_TOO_MANY_ARGS = cpy_r_r1346;
    CPy_INCREF(CPyStatic_message_registry___TYPE_SIGNATURE_TOO_MANY_ARGS);
    cpy_r_r1347 = CPyStatic_message_registry___globals;
    cpy_r_r1348 = CPyStatics[3341]; /* 'TYPE_SIGNATURE_TOO_MANY_ARGS' */
    cpy_r_r1349 = CPyDict_SetItem(cpy_r_r1347, cpy_r_r1348, cpy_r_r1346);
    CPy_DECREF(cpy_r_r1346);
    cpy_r_r1350 = cpy_r_r1349 >= 0;
    if (unlikely(!cpy_r_r1350)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 297, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1351 = CPyStatics[3342]; /* 'Type signature has too few arguments' */
    cpy_r_r1352 = CPyStatic_errorcodes___SYNTAX;
    if (likely(cpy_r_r1352 != NULL)) goto CPyL474;
    PyErr_SetString(PyExc_NameError, "value for final name \"SYNTAX\" was not set");
    cpy_r_r1353 = 0;
    if (unlikely(!cpy_r_r1353)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 301, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL474: ;
    cpy_r_r1354 = CPyStatic_message_registry___globals;
    cpy_r_r1355 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1356 = CPyDict_GetItem(cpy_r_r1354, cpy_r_r1355);
    if (unlikely(cpy_r_r1356 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 300, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1357[2] = {cpy_r_r1351, cpy_r_r1352};
    cpy_r_r1358 = (PyObject **)&cpy_r_r1357;
    cpy_r_r1359 = _PyObject_Vectorcall(cpy_r_r1356, cpy_r_r1358, 2, 0);
    CPy_DECREF(cpy_r_r1356);
    if (unlikely(cpy_r_r1359 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 300, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1359)))
        cpy_r_r1360 = cpy_r_r1359;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 300, CPyStatic_message_registry___globals, "tuple", cpy_r_r1359);
        goto CPyL521;
    }
    CPyStatic_message_registry___TYPE_SIGNATURE_TOO_FEW_ARGS = cpy_r_r1360;
    CPy_INCREF(CPyStatic_message_registry___TYPE_SIGNATURE_TOO_FEW_ARGS);
    cpy_r_r1361 = CPyStatic_message_registry___globals;
    cpy_r_r1362 = CPyStatics[3343]; /* 'TYPE_SIGNATURE_TOO_FEW_ARGS' */
    cpy_r_r1363 = CPyDict_SetItem(cpy_r_r1361, cpy_r_r1362, cpy_r_r1360);
    CPy_DECREF(cpy_r_r1360);
    cpy_r_r1364 = cpy_r_r1363 >= 0;
    if (unlikely(!cpy_r_r1364)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 300, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1365 = CPyStatics[3344]; /* 'Expected arg constructor name' */
    cpy_r_r1366 = CPyStatic_errorcodes___SYNTAX;
    if (likely(cpy_r_r1366 != NULL)) goto CPyL481;
    PyErr_SetString(PyExc_NameError, "value for final name \"SYNTAX\" was not set");
    cpy_r_r1367 = 0;
    if (unlikely(!cpy_r_r1367)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 303, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL481: ;
    cpy_r_r1368 = CPyStatic_message_registry___globals;
    cpy_r_r1369 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1370 = CPyDict_GetItem(cpy_r_r1368, cpy_r_r1369);
    if (unlikely(cpy_r_r1370 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 303, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1371[2] = {cpy_r_r1365, cpy_r_r1366};
    cpy_r_r1372 = (PyObject **)&cpy_r_r1371;
    cpy_r_r1373 = _PyObject_Vectorcall(cpy_r_r1370, cpy_r_r1372, 2, 0);
    CPy_DECREF(cpy_r_r1370);
    if (unlikely(cpy_r_r1373 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 303, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1373)))
        cpy_r_r1374 = cpy_r_r1373;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 303, CPyStatic_message_registry___globals, "tuple", cpy_r_r1373);
        goto CPyL521;
    }
    CPyStatic_message_registry___ARG_CONSTRUCTOR_NAME_EXPECTED = cpy_r_r1374;
    CPy_INCREF(CPyStatic_message_registry___ARG_CONSTRUCTOR_NAME_EXPECTED);
    cpy_r_r1375 = CPyStatic_message_registry___globals;
    cpy_r_r1376 = CPyStatics[3345]; /* 'ARG_CONSTRUCTOR_NAME_EXPECTED' */
    cpy_r_r1377 = CPyDict_SetItem(cpy_r_r1375, cpy_r_r1376, cpy_r_r1374);
    CPy_DECREF(cpy_r_r1374);
    cpy_r_r1378 = cpy_r_r1377 >= 0;
    if (unlikely(!cpy_r_r1378)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 303, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1379 = CPyStatics[3346]; /* 'Too many arguments for argument constructor' */
    cpy_r_r1380 = CPyStatic_errorcodes___SYNTAX;
    if (likely(cpy_r_r1380 != NULL)) goto CPyL488;
    PyErr_SetString(PyExc_NameError, "value for final name \"SYNTAX\" was not set");
    cpy_r_r1381 = 0;
    if (unlikely(!cpy_r_r1381)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 305, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL488: ;
    cpy_r_r1382 = CPyStatic_message_registry___globals;
    cpy_r_r1383 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1384 = CPyDict_GetItem(cpy_r_r1382, cpy_r_r1383);
    if (unlikely(cpy_r_r1384 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 304, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1385[2] = {cpy_r_r1379, cpy_r_r1380};
    cpy_r_r1386 = (PyObject **)&cpy_r_r1385;
    cpy_r_r1387 = _PyObject_Vectorcall(cpy_r_r1384, cpy_r_r1386, 2, 0);
    CPy_DECREF(cpy_r_r1384);
    if (unlikely(cpy_r_r1387 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 304, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1387)))
        cpy_r_r1388 = cpy_r_r1387;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 304, CPyStatic_message_registry___globals, "tuple", cpy_r_r1387);
        goto CPyL521;
    }
    CPyStatic_message_registry___ARG_CONSTRUCTOR_TOO_MANY_ARGS = cpy_r_r1388;
    CPy_INCREF(CPyStatic_message_registry___ARG_CONSTRUCTOR_TOO_MANY_ARGS);
    cpy_r_r1389 = CPyStatic_message_registry___globals;
    cpy_r_r1390 = CPyStatics[3347]; /* 'ARG_CONSTRUCTOR_TOO_MANY_ARGS' */
    cpy_r_r1391 = CPyDict_SetItem(cpy_r_r1389, cpy_r_r1390, cpy_r_r1388);
    CPy_DECREF(cpy_r_r1388);
    cpy_r_r1392 = cpy_r_r1391 >= 0;
    if (unlikely(!cpy_r_r1392)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 304, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1393 = CPyStatics[3348]; /* '"{}" gets multiple values for keyword argument "name"' */
    cpy_r_r1394 = CPyStatic_errorcodes___SYNTAX;
    if (likely(cpy_r_r1394 != NULL)) goto CPyL495;
    PyErr_SetString(PyExc_NameError, "value for final name \"SYNTAX\" was not set");
    cpy_r_r1395 = 0;
    if (unlikely(!cpy_r_r1395)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 308, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL495: ;
    cpy_r_r1396 = CPyStatic_message_registry___globals;
    cpy_r_r1397 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1398 = CPyDict_GetItem(cpy_r_r1396, cpy_r_r1397);
    if (unlikely(cpy_r_r1398 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 307, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1399[2] = {cpy_r_r1393, cpy_r_r1394};
    cpy_r_r1400 = (PyObject **)&cpy_r_r1399;
    cpy_r_r1401 = _PyObject_Vectorcall(cpy_r_r1398, cpy_r_r1400, 2, 0);
    CPy_DECREF(cpy_r_r1398);
    if (unlikely(cpy_r_r1401 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 307, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1401)))
        cpy_r_r1402 = cpy_r_r1401;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 307, CPyStatic_message_registry___globals, "tuple", cpy_r_r1401);
        goto CPyL521;
    }
    CPyStatic_message_registry___MULTIPLE_VALUES_FOR_NAME_KWARG = cpy_r_r1402;
    CPy_INCREF(CPyStatic_message_registry___MULTIPLE_VALUES_FOR_NAME_KWARG);
    cpy_r_r1403 = CPyStatic_message_registry___globals;
    cpy_r_r1404 = CPyStatics[3349]; /* 'MULTIPLE_VALUES_FOR_NAME_KWARG' */
    cpy_r_r1405 = CPyDict_SetItem(cpy_r_r1403, cpy_r_r1404, cpy_r_r1402);
    CPy_DECREF(cpy_r_r1402);
    cpy_r_r1406 = cpy_r_r1405 >= 0;
    if (unlikely(!cpy_r_r1406)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 307, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1407 = CPyStatics[3350]; /* '"{}" gets multiple values for keyword argument "type"' */
    cpy_r_r1408 = CPyStatic_errorcodes___SYNTAX;
    if (likely(cpy_r_r1408 != NULL)) goto CPyL502;
    PyErr_SetString(PyExc_NameError, "value for final name \"SYNTAX\" was not set");
    cpy_r_r1409 = 0;
    if (unlikely(!cpy_r_r1409)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 311, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL502: ;
    cpy_r_r1410 = CPyStatic_message_registry___globals;
    cpy_r_r1411 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1412 = CPyDict_GetItem(cpy_r_r1410, cpy_r_r1411);
    if (unlikely(cpy_r_r1412 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 310, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1413[2] = {cpy_r_r1407, cpy_r_r1408};
    cpy_r_r1414 = (PyObject **)&cpy_r_r1413;
    cpy_r_r1415 = _PyObject_Vectorcall(cpy_r_r1412, cpy_r_r1414, 2, 0);
    CPy_DECREF(cpy_r_r1412);
    if (unlikely(cpy_r_r1415 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 310, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1415)))
        cpy_r_r1416 = cpy_r_r1415;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 310, CPyStatic_message_registry___globals, "tuple", cpy_r_r1415);
        goto CPyL521;
    }
    CPyStatic_message_registry___MULTIPLE_VALUES_FOR_TYPE_KWARG = cpy_r_r1416;
    CPy_INCREF(CPyStatic_message_registry___MULTIPLE_VALUES_FOR_TYPE_KWARG);
    cpy_r_r1417 = CPyStatic_message_registry___globals;
    cpy_r_r1418 = CPyStatics[3351]; /* 'MULTIPLE_VALUES_FOR_TYPE_KWARG' */
    cpy_r_r1419 = CPyDict_SetItem(cpy_r_r1417, cpy_r_r1418, cpy_r_r1416);
    CPy_DECREF(cpy_r_r1416);
    cpy_r_r1420 = cpy_r_r1419 >= 0;
    if (unlikely(!cpy_r_r1420)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 310, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1421 = CPyStatics[3352]; /* 'Unexpected argument "{}" for argument constructor' */
    cpy_r_r1422 = CPyStatic_errorcodes___SYNTAX;
    if (likely(cpy_r_r1422 != NULL)) goto CPyL509;
    PyErr_SetString(PyExc_NameError, "value for final name \"SYNTAX\" was not set");
    cpy_r_r1423 = 0;
    if (unlikely(!cpy_r_r1423)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 314, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL509: ;
    cpy_r_r1424 = CPyStatic_message_registry___globals;
    cpy_r_r1425 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1426 = CPyDict_GetItem(cpy_r_r1424, cpy_r_r1425);
    if (unlikely(cpy_r_r1426 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 313, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1427[2] = {cpy_r_r1421, cpy_r_r1422};
    cpy_r_r1428 = (PyObject **)&cpy_r_r1427;
    cpy_r_r1429 = _PyObject_Vectorcall(cpy_r_r1426, cpy_r_r1428, 2, 0);
    CPy_DECREF(cpy_r_r1426);
    if (unlikely(cpy_r_r1429 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 313, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1429)))
        cpy_r_r1430 = cpy_r_r1429;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 313, CPyStatic_message_registry___globals, "tuple", cpy_r_r1429);
        goto CPyL521;
    }
    CPyStatic_message_registry___ARG_CONSTRUCTOR_UNEXPECTED_ARG = cpy_r_r1430;
    CPy_INCREF(CPyStatic_message_registry___ARG_CONSTRUCTOR_UNEXPECTED_ARG);
    cpy_r_r1431 = CPyStatic_message_registry___globals;
    cpy_r_r1432 = CPyStatics[3353]; /* 'ARG_CONSTRUCTOR_UNEXPECTED_ARG' */
    cpy_r_r1433 = CPyDict_SetItem(cpy_r_r1431, cpy_r_r1432, cpy_r_r1430);
    CPy_DECREF(cpy_r_r1430);
    cpy_r_r1434 = cpy_r_r1433 >= 0;
    if (unlikely(!cpy_r_r1434)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 313, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    cpy_r_r1435 = CPyStatics[3354]; /* 'Expected string literal for argument name, got {}' */
    cpy_r_r1436 = CPyStatic_errorcodes___SYNTAX;
    if (likely(cpy_r_r1436 != NULL)) goto CPyL516;
    PyErr_SetString(PyExc_NameError, "value for final name \"SYNTAX\" was not set");
    cpy_r_r1437 = 0;
    if (unlikely(!cpy_r_r1437)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 317, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    CPy_Unreachable();
CPyL516: ;
    cpy_r_r1438 = CPyStatic_message_registry___globals;
    cpy_r_r1439 = CPyStatics[746]; /* 'ErrorMessage' */
    cpy_r_r1440 = CPyDict_GetItem(cpy_r_r1438, cpy_r_r1439);
    if (unlikely(cpy_r_r1440 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 316, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    PyObject *cpy_r_r1441[2] = {cpy_r_r1435, cpy_r_r1436};
    cpy_r_r1442 = (PyObject **)&cpy_r_r1441;
    cpy_r_r1443 = _PyObject_Vectorcall(cpy_r_r1440, cpy_r_r1442, 2, 0);
    CPy_DECREF(cpy_r_r1440);
    if (unlikely(cpy_r_r1443 == NULL)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 316, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    if (likely(PyTuple_Check(cpy_r_r1443)))
        cpy_r_r1444 = cpy_r_r1443;
    else {
        CPy_TypeErrorTraceback("mypy/message_registry.py", "<module>", 316, CPyStatic_message_registry___globals, "tuple", cpy_r_r1443);
        goto CPyL521;
    }
    CPyStatic_message_registry___ARG_NAME_EXPECTED_STRING_LITERAL = cpy_r_r1444;
    CPy_INCREF(CPyStatic_message_registry___ARG_NAME_EXPECTED_STRING_LITERAL);
    cpy_r_r1445 = CPyStatic_message_registry___globals;
    cpy_r_r1446 = CPyStatics[3355]; /* 'ARG_NAME_EXPECTED_STRING_LITERAL' */
    cpy_r_r1447 = CPyDict_SetItem(cpy_r_r1445, cpy_r_r1446, cpy_r_r1444);
    CPy_DECREF(cpy_r_r1444);
    cpy_r_r1448 = cpy_r_r1447 >= 0;
    if (unlikely(!cpy_r_r1448)) {
        CPy_AddTraceback("mypy/message_registry.py", "<module>", 316, CPyStatic_message_registry___globals);
        goto CPyL521;
    }
    return 1;
CPyL521: ;
    cpy_r_r1449 = 2;
    return cpy_r_r1449;
CPyL522: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL521;
CPyL523: ;
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r38);
    goto CPyL521;
CPyL524: ;
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r48);
    goto CPyL521;
CPyL525: ;
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r50);
    goto CPyL521;
CPyL526: ;
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r48);
    goto CPyL521;
}
