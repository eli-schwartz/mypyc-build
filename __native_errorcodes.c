#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static Py_ssize_t CPyDunder___hash__errorcodes___ErrorCode(PyObject *self) {
    CPyTagged retval = CPyDef_errorcodes___ErrorCode_____hash__(self);
    if (retval == CPY_INT_TAG) {
        return -1;
    }
    Py_ssize_t val = CPyTagged_AsSsize_t(retval);
    CPyTagged_DECREF(retval);
    if (PyErr_Occurred()) return -1;
    if (val == -1) return -2;
    return val;
}
static int
errorcodes___ErrorCode_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return CPyPy_errorcodes___ErrorCode_____init__(self, args, kwds) != NULL ? 0 : -1;
}
static PyObject *CPyDunder__RichCompare_errorcodes___ErrorCode(PyObject *obj_lhs, PyObject *obj_rhs, int op) {
    switch (op) {
        case Py_EQ: {
            PyObject *arg_lhs;
            if (likely(PyObject_TypeCheck(obj_lhs, CPyType_errorcodes___ErrorCode)))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypy.errorcodes.ErrorCode", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_errorcodes___ErrorCode_____eq__(arg_lhs, arg_rhs);
        }
        case Py_NE: {
            PyObject *arg_lhs;
            if (likely(PyObject_TypeCheck(obj_lhs, CPyType_errorcodes___ErrorCode)))
                arg_lhs = obj_lhs;
            else {
                CPy_TypeError("mypy.errorcodes.ErrorCode", obj_lhs); 
                return NULL;
            }
            PyObject *arg_rhs = obj_rhs;
            return CPyDef_errorcodes___ErrorCode_____ne__(arg_lhs, arg_rhs);
        }
    }
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}
static PyObject *errorcodes___ErrorCode_setup(PyTypeObject *type);
PyObject *CPyDef_errorcodes___ErrorCode(PyObject *cpy_r_code, PyObject *cpy_r_description, PyObject *cpy_r_category, char cpy_r_default_enabled, PyObject *cpy_r_sub_code_of);

static PyObject *
errorcodes___ErrorCode_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    return errorcodes___ErrorCode_setup(type);
}

static int
errorcodes___ErrorCode_traverse(mypy___errorcodes___ErrorCodeObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_code);
    Py_VISIT(self->_description);
    Py_VISIT(self->_category);
    Py_VISIT(self->_sub_code_of);
    return 0;
}

static int
errorcodes___ErrorCode_clear(mypy___errorcodes___ErrorCodeObject *self)
{
    Py_CLEAR(self->_code);
    Py_CLEAR(self->_description);
    Py_CLEAR(self->_category);
    Py_CLEAR(self->_sub_code_of);
    return 0;
}

static void
errorcodes___ErrorCode_dealloc(mypy___errorcodes___ErrorCodeObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, errorcodes___ErrorCode_dealloc)
    errorcodes___ErrorCode_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem errorcodes___ErrorCode_vtable_shadow[5];
static bool
CPyDef_errorcodes___ErrorCode_trait_vtable_setup_shadow(void)
{
    CPyVTableItem errorcodes___ErrorCode_vtable_shadow_scratch[] = {
        (CPyVTableItem)CPyDef_errorcodes___ErrorCode_____init___3__ErrorCode_glue,
        (CPyVTableItem)CPyDef_errorcodes___ErrorCode_____str___3__ErrorCode_glue,
        (CPyVTableItem)CPyDef_errorcodes___ErrorCode_____eq___3__ErrorCode_glue,
        (CPyVTableItem)CPyDef_errorcodes___ErrorCode_____hash___3__ErrorCode_glue,
        (CPyVTableItem)CPyDef_errorcodes___ErrorCode_____ne__,
    };
    memcpy(errorcodes___ErrorCode_vtable_shadow, errorcodes___ErrorCode_vtable_shadow_scratch, sizeof(errorcodes___ErrorCode_vtable_shadow));
    return 1;
}

static CPyVTableItem errorcodes___ErrorCode_vtable[5];
static bool
CPyDef_errorcodes___ErrorCode_trait_vtable_setup(void)
{
    CPyDef_errorcodes___ErrorCode_trait_vtable_setup_shadow();
    CPyVTableItem errorcodes___ErrorCode_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_errorcodes___ErrorCode_____init__,
        (CPyVTableItem)CPyDef_errorcodes___ErrorCode_____str__,
        (CPyVTableItem)CPyDef_errorcodes___ErrorCode_____eq__,
        (CPyVTableItem)CPyDef_errorcodes___ErrorCode_____hash__,
        (CPyVTableItem)CPyDef_errorcodes___ErrorCode_____ne__,
    };
    memcpy(errorcodes___ErrorCode_vtable, errorcodes___ErrorCode_vtable_scratch, sizeof(errorcodes___ErrorCode_vtable));
    return 1;
}

static PyObject *
errorcodes___ErrorCode_get_code(mypy___errorcodes___ErrorCodeObject *self, void *closure);
static int
errorcodes___ErrorCode_set_code(mypy___errorcodes___ErrorCodeObject *self, PyObject *value, void *closure);
static PyObject *
errorcodes___ErrorCode_get_description(mypy___errorcodes___ErrorCodeObject *self, void *closure);
static int
errorcodes___ErrorCode_set_description(mypy___errorcodes___ErrorCodeObject *self, PyObject *value, void *closure);
static PyObject *
errorcodes___ErrorCode_get_category(mypy___errorcodes___ErrorCodeObject *self, void *closure);
static int
errorcodes___ErrorCode_set_category(mypy___errorcodes___ErrorCodeObject *self, PyObject *value, void *closure);
static PyObject *
errorcodes___ErrorCode_get_default_enabled(mypy___errorcodes___ErrorCodeObject *self, void *closure);
static int
errorcodes___ErrorCode_set_default_enabled(mypy___errorcodes___ErrorCodeObject *self, PyObject *value, void *closure);
static PyObject *
errorcodes___ErrorCode_get_sub_code_of(mypy___errorcodes___ErrorCodeObject *self, void *closure);
static int
errorcodes___ErrorCode_set_sub_code_of(mypy___errorcodes___ErrorCodeObject *self, PyObject *value, void *closure);

static PyGetSetDef errorcodes___ErrorCode_getseters[] = {
    {"code",
     (getter)errorcodes___ErrorCode_get_code, (setter)errorcodes___ErrorCode_set_code,
     NULL, NULL},
    {"description",
     (getter)errorcodes___ErrorCode_get_description, (setter)errorcodes___ErrorCode_set_description,
     NULL, NULL},
    {"category",
     (getter)errorcodes___ErrorCode_get_category, (setter)errorcodes___ErrorCode_set_category,
     NULL, NULL},
    {"default_enabled",
     (getter)errorcodes___ErrorCode_get_default_enabled, (setter)errorcodes___ErrorCode_set_default_enabled,
     NULL, NULL},
    {"sub_code_of",
     (getter)errorcodes___ErrorCode_get_sub_code_of, (setter)errorcodes___ErrorCode_set_sub_code_of,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef errorcodes___ErrorCode_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_errorcodes___ErrorCode_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__str__",
     (PyCFunction)CPyPy_errorcodes___ErrorCode_____str__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__eq__",
     (PyCFunction)CPyPy_errorcodes___ErrorCode_____eq__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__hash__",
     (PyCFunction)CPyPy_errorcodes___ErrorCode_____hash__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__ne__",
     (PyCFunction)CPyPy_errorcodes___ErrorCode_____ne__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_errorcodes___ErrorCode_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ErrorCode",
    .tp_new = errorcodes___ErrorCode_new,
    .tp_dealloc = (destructor)errorcodes___ErrorCode_dealloc,
    .tp_traverse = (traverseproc)errorcodes___ErrorCode_traverse,
    .tp_clear = (inquiry)errorcodes___ErrorCode_clear,
    .tp_getset = errorcodes___ErrorCode_getseters,
    .tp_methods = errorcodes___ErrorCode_methods,
    .tp_hash = CPyDunder___hash__errorcodes___ErrorCode,
    .tp_init = errorcodes___ErrorCode_init,
    .tp_str = CPyDef_errorcodes___ErrorCode_____str__,
    .tp_richcompare = CPyDunder__RichCompare_errorcodes___ErrorCode,
    .tp_basicsize = sizeof(mypy___errorcodes___ErrorCodeObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_errorcodes___ErrorCode_template = &CPyType_errorcodes___ErrorCode_template_;

static PyObject *
errorcodes___ErrorCode_setup(PyTypeObject *type)
{
    mypy___errorcodes___ErrorCodeObject *self;
    self = (mypy___errorcodes___ErrorCodeObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    if (type != CPyType_errorcodes___ErrorCode) {
        self->vtable = errorcodes___ErrorCode_vtable_shadow;
    } else {
        self->vtable = errorcodes___ErrorCode_vtable;
    }
    self->_default_enabled = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_errorcodes___ErrorCode(PyObject *cpy_r_code, PyObject *cpy_r_description, PyObject *cpy_r_category, char cpy_r_default_enabled, PyObject *cpy_r_sub_code_of)
{
    PyObject *self = errorcodes___ErrorCode_setup(CPyType_errorcodes___ErrorCode);
    if (self == NULL)
        return NULL;
    char res = CPyDef_errorcodes___ErrorCode_____init__(self, cpy_r_code, cpy_r_description, cpy_r_category, cpy_r_default_enabled, cpy_r_sub_code_of);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
errorcodes___ErrorCode_get_code(mypy___errorcodes___ErrorCodeObject *self, void *closure)
{
    if (unlikely(self->_code == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'code' of 'ErrorCode' undefined");
        return NULL;
    }
    CPy_INCREF(self->_code);
    PyObject *retval = self->_code;
    return retval;
}

static int
errorcodes___ErrorCode_set_code(mypy___errorcodes___ErrorCodeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorCode' object attribute 'code' cannot be deleted");
        return -1;
    }
    if (self->_code != NULL) {
        CPy_DECREF(self->_code);
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
    self->_code = tmp;
    return 0;
}

static PyObject *
errorcodes___ErrorCode_get_description(mypy___errorcodes___ErrorCodeObject *self, void *closure)
{
    if (unlikely(self->_description == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'description' of 'ErrorCode' undefined");
        return NULL;
    }
    CPy_INCREF(self->_description);
    PyObject *retval = self->_description;
    return retval;
}

static int
errorcodes___ErrorCode_set_description(mypy___errorcodes___ErrorCodeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorCode' object attribute 'description' cannot be deleted");
        return -1;
    }
    if (self->_description != NULL) {
        CPy_DECREF(self->_description);
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
    self->_description = tmp;
    return 0;
}

static PyObject *
errorcodes___ErrorCode_get_category(mypy___errorcodes___ErrorCodeObject *self, void *closure)
{
    if (unlikely(self->_category == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'category' of 'ErrorCode' undefined");
        return NULL;
    }
    CPy_INCREF(self->_category);
    PyObject *retval = self->_category;
    return retval;
}

static int
errorcodes___ErrorCode_set_category(mypy___errorcodes___ErrorCodeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorCode' object attribute 'category' cannot be deleted");
        return -1;
    }
    if (self->_category != NULL) {
        CPy_DECREF(self->_category);
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
    self->_category = tmp;
    return 0;
}

static PyObject *
errorcodes___ErrorCode_get_default_enabled(mypy___errorcodes___ErrorCodeObject *self, void *closure)
{
    if (unlikely(self->_default_enabled == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'default_enabled' of 'ErrorCode' undefined");
        return NULL;
    }
    PyObject *retval = self->_default_enabled ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
errorcodes___ErrorCode_set_default_enabled(mypy___errorcodes___ErrorCodeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorCode' object attribute 'default_enabled' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_default_enabled = tmp;
    return 0;
}

static PyObject *
errorcodes___ErrorCode_get_sub_code_of(mypy___errorcodes___ErrorCodeObject *self, void *closure)
{
    if (unlikely(self->_sub_code_of == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'sub_code_of' of 'ErrorCode' undefined");
        return NULL;
    }
    CPy_INCREF(self->_sub_code_of);
    PyObject *retval = self->_sub_code_of;
    return retval;
}

static int
errorcodes___ErrorCode_set_sub_code_of(mypy___errorcodes___ErrorCodeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorCode' object attribute 'sub_code_of' cannot be deleted");
        return -1;
    }
    if (self->_sub_code_of != NULL) {
        CPy_DECREF(self->_sub_code_of);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_errorcodes___ErrorCode))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2029;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2029;
    CPy_TypeError("mypy.errorcodes.ErrorCode or None", value); 
    tmp = NULL;
__LL2029: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_sub_code_of = tmp;
    return 0;
}
static PyMethodDef errorcodesmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef errorcodesmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.errorcodes",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    errorcodesmodule_methods
};

PyObject *CPyInit_mypy___errorcodes(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___errorcodes_internal) {
        Py_INCREF(CPyModule_mypy___errorcodes_internal);
        return CPyModule_mypy___errorcodes_internal;
    }
    CPyModule_mypy___errorcodes_internal = PyModule_Create(&errorcodesmodule);
    if (unlikely(CPyModule_mypy___errorcodes_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___errorcodes_internal, "__name__");
    CPyStatic_errorcodes___globals = PyModule_GetDict(CPyModule_mypy___errorcodes_internal);
    if (unlikely(CPyStatic_errorcodes___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_errorcodes_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___errorcodes_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___errorcodes_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_errorcodes___ATTR_DEFINED);
    CPyStatic_errorcodes___ATTR_DEFINED = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___NAME_DEFINED);
    CPyStatic_errorcodes___NAME_DEFINED = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___CALL_ARG);
    CPyStatic_errorcodes___CALL_ARG = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___ARG_TYPE);
    CPyStatic_errorcodes___ARG_TYPE = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___CALL_OVERLOAD);
    CPyStatic_errorcodes___CALL_OVERLOAD = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___VALID_TYPE);
    CPyStatic_errorcodes___VALID_TYPE = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___VAR_ANNOTATED);
    CPyStatic_errorcodes___VAR_ANNOTATED = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___OVERRIDE);
    CPyStatic_errorcodes___OVERRIDE = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___RETURN);
    CPyStatic_errorcodes___RETURN = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___RETURN_VALUE);
    CPyStatic_errorcodes___RETURN_VALUE = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___ASSIGNMENT);
    CPyStatic_errorcodes___ASSIGNMENT = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___METHOD_ASSIGN);
    CPyStatic_errorcodes___METHOD_ASSIGN = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___TYPE_ARG);
    CPyStatic_errorcodes___TYPE_ARG = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___TYPE_VAR);
    CPyStatic_errorcodes___TYPE_VAR = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___UNION_ATTR);
    CPyStatic_errorcodes___UNION_ATTR = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___INDEX);
    CPyStatic_errorcodes___INDEX = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___OPERATOR);
    CPyStatic_errorcodes___OPERATOR = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___LIST_ITEM);
    CPyStatic_errorcodes___LIST_ITEM = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___DICT_ITEM);
    CPyStatic_errorcodes___DICT_ITEM = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___TYPEDDICT_ITEM);
    CPyStatic_errorcodes___TYPEDDICT_ITEM = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___TYPEDDICT_UNKNOWN_KEY);
    CPyStatic_errorcodes___TYPEDDICT_UNKNOWN_KEY = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___HAS_TYPE);
    CPyStatic_errorcodes___HAS_TYPE = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___IMPORT);
    CPyStatic_errorcodes___IMPORT = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___NO_REDEF);
    CPyStatic_errorcodes___NO_REDEF = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___FUNC_RETURNS_VALUE);
    CPyStatic_errorcodes___FUNC_RETURNS_VALUE = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___ABSTRACT);
    CPyStatic_errorcodes___ABSTRACT = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___TYPE_ABSTRACT);
    CPyStatic_errorcodes___TYPE_ABSTRACT = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___VALID_NEWTYPE);
    CPyStatic_errorcodes___VALID_NEWTYPE = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___STRING_FORMATTING);
    CPyStatic_errorcodes___STRING_FORMATTING = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___STR_BYTES_PY3);
    CPyStatic_errorcodes___STR_BYTES_PY3 = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___EXIT_RETURN);
    CPyStatic_errorcodes___EXIT_RETURN = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___LITERAL_REQ);
    CPyStatic_errorcodes___LITERAL_REQ = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___UNUSED_COROUTINE);
    CPyStatic_errorcodes___UNUSED_COROUTINE = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___EMPTY_BODY);
    CPyStatic_errorcodes___EMPTY_BODY = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___SAFE_SUPER);
    CPyStatic_errorcodes___SAFE_SUPER = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___TOP_LEVEL_AWAIT);
    CPyStatic_errorcodes___TOP_LEVEL_AWAIT = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___NO_UNTYPED_DEF);
    CPyStatic_errorcodes___NO_UNTYPED_DEF = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___NO_UNTYPED_CALL);
    CPyStatic_errorcodes___NO_UNTYPED_CALL = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___REDUNDANT_CAST);
    CPyStatic_errorcodes___REDUNDANT_CAST = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___ASSERT_TYPE);
    CPyStatic_errorcodes___ASSERT_TYPE = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___COMPARISON_OVERLAP);
    CPyStatic_errorcodes___COMPARISON_OVERLAP = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___NO_ANY_UNIMPORTED);
    CPyStatic_errorcodes___NO_ANY_UNIMPORTED = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___NO_ANY_RETURN);
    CPyStatic_errorcodes___NO_ANY_RETURN = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___UNREACHABLE);
    CPyStatic_errorcodes___UNREACHABLE = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___POSSIBLY_UNDEFINED);
    CPyStatic_errorcodes___POSSIBLY_UNDEFINED = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___REDUNDANT_EXPR);
    CPyStatic_errorcodes___REDUNDANT_EXPR = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___TRUTHY_BOOL);
    CPyStatic_errorcodes___TRUTHY_BOOL = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___TRUTHY_FUNCTION);
    CPyStatic_errorcodes___TRUTHY_FUNCTION = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___TRUTHY_ITERABLE);
    CPyStatic_errorcodes___TRUTHY_ITERABLE = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___NAME_MATCH);
    CPyStatic_errorcodes___NAME_MATCH = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___NO_OVERLOAD_IMPL);
    CPyStatic_errorcodes___NO_OVERLOAD_IMPL = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___IGNORE_WITHOUT_CODE);
    CPyStatic_errorcodes___IGNORE_WITHOUT_CODE = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___UNUSED_AWAITABLE);
    CPyStatic_errorcodes___UNUSED_AWAITABLE = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___USED_BEFORE_DEF);
    CPyStatic_errorcodes___USED_BEFORE_DEF = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___UNUSED_IGNORE);
    CPyStatic_errorcodes___UNUSED_IGNORE = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___EXPLICIT_OVERRIDE_REQUIRED);
    CPyStatic_errorcodes___EXPLICIT_OVERRIDE_REQUIRED = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___SYNTAX);
    CPyStatic_errorcodes___SYNTAX = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___FILE);
    CPyStatic_errorcodes___FILE = NULL;
    CPy_XDECREF(CPyStatic_errorcodes___MISC);
    CPyStatic_errorcodes___MISC = NULL;
    Py_CLEAR(CPyType_errorcodes___ErrorCode);
    return NULL;
}

char CPyDef_errorcodes___ErrorCode_____init__(PyObject *cpy_r_self, PyObject *cpy_r_code, PyObject *cpy_r_description, PyObject *cpy_r_category, char cpy_r_default_enabled, PyObject *cpy_r_sub_code_of) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    if (cpy_r_default_enabled != 2) goto CPyL2;
    cpy_r_default_enabled = 1;
CPyL2: ;
    if (cpy_r_sub_code_of != NULL) goto CPyL27;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_sub_code_of = cpy_r_r0;
CPyL4: ;
    CPy_INCREF(cpy_r_code);
    if (((mypy___errorcodes___ErrorCodeObject *)cpy_r_self)->_code != NULL) {
        CPy_DECREF(((mypy___errorcodes___ErrorCodeObject *)cpy_r_self)->_code);
    }
    ((mypy___errorcodes___ErrorCodeObject *)cpy_r_self)->_code = cpy_r_code;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/errorcodes.py", "__init__", 27, CPyStatic_errorcodes___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_description);
    if (((mypy___errorcodes___ErrorCodeObject *)cpy_r_self)->_description != NULL) {
        CPy_DECREF(((mypy___errorcodes___ErrorCodeObject *)cpy_r_self)->_description);
    }
    ((mypy___errorcodes___ErrorCodeObject *)cpy_r_self)->_description = cpy_r_description;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/errorcodes.py", "__init__", 28, CPyStatic_errorcodes___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_category);
    if (((mypy___errorcodes___ErrorCodeObject *)cpy_r_self)->_category != NULL) {
        CPy_DECREF(((mypy___errorcodes___ErrorCodeObject *)cpy_r_self)->_category);
    }
    ((mypy___errorcodes___ErrorCodeObject *)cpy_r_self)->_category = cpy_r_category;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/errorcodes.py", "__init__", 29, CPyStatic_errorcodes___globals);
        goto CPyL28;
    }
    ((mypy___errorcodes___ErrorCodeObject *)cpy_r_self)->_default_enabled = cpy_r_default_enabled;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/errorcodes.py", "__init__", 30, CPyStatic_errorcodes___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_sub_code_of);
    if (((mypy___errorcodes___ErrorCodeObject *)cpy_r_self)->_sub_code_of != NULL) {
        CPy_DECREF(((mypy___errorcodes___ErrorCodeObject *)cpy_r_self)->_sub_code_of);
    }
    ((mypy___errorcodes___ErrorCodeObject *)cpy_r_self)->_sub_code_of = cpy_r_sub_code_of;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/errorcodes.py", "__init__", 31, CPyStatic_errorcodes___globals);
        goto CPyL28;
    }
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_sub_code_of != cpy_r_r6;
    if (!cpy_r_r7) goto CPyL29;
    if (likely(cpy_r_sub_code_of != Py_None))
        cpy_r_r8 = cpy_r_sub_code_of;
    else {
        CPy_TypeErrorTraceback("mypy/errorcodes.py", "__init__", 33, CPyStatic_errorcodes___globals, "mypy.errorcodes.ErrorCode", cpy_r_sub_code_of);
        goto CPyL28;
    }
    cpy_r_r9 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_r8)->_sub_code_of;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/errorcodes.py", "__init__", "ErrorCode", "sub_code_of", 33, CPyStatic_errorcodes___globals);
        goto CPyL28;
    }
CPyL12: ;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_r9 == cpy_r_r10;
    if (cpy_r_r11) {
        goto CPyL15;
    } else
        goto CPyL30;
CPyL13: ;
    PyErr_SetString(PyExc_AssertionError, "Nested subcategories are not supported");
    cpy_r_r12 = 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/errorcodes.py", "__init__", 33, CPyStatic_errorcodes___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r13 = CPyStatic_errorcodes___globals;
    cpy_r_r14 = CPyStatics[2028]; /* 'sub_code_map' */
    cpy_r_r15 = CPyDict_GetItem(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "__init__", 34, CPyStatic_errorcodes___globals);
        goto CPyL28;
    }
    if (likely(PyDict_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/errorcodes.py", "__init__", 34, CPyStatic_errorcodes___globals, "dict", cpy_r_r15);
        goto CPyL28;
    }
    if (likely(cpy_r_sub_code_of != Py_None))
        cpy_r_r17 = cpy_r_sub_code_of;
    else {
        CPy_TypeErrorTraceback("mypy/errorcodes.py", "__init__", 34, CPyStatic_errorcodes___globals, "mypy.errorcodes.ErrorCode", cpy_r_sub_code_of);
        goto CPyL31;
    }
    cpy_r_r18 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_r17)->_code;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/errorcodes.py", "__init__", "ErrorCode", "code", 34, CPyStatic_errorcodes___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r18);
CPyL19: ;
    CPy_DECREF(cpy_r_sub_code_of);
    cpy_r_r19 = CPyDict_GetItem(cpy_r_r16, cpy_r_r18);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "__init__", 34, CPyStatic_errorcodes___globals);
        goto CPyL26;
    }
    if (likely(PySet_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/errorcodes.py", "__init__", 34, CPyStatic_errorcodes___globals, "set", cpy_r_r19);
        goto CPyL26;
    }
    cpy_r_r21 = PySet_Add(cpy_r_r20, cpy_r_code);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/errorcodes.py", "__init__", 34, CPyStatic_errorcodes___globals);
        goto CPyL26;
    }
CPyL22: ;
    cpy_r_r23 = CPyStatic_errorcodes___globals;
    cpy_r_r24 = CPyStatics[1490]; /* 'error_codes' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "__init__", 35, CPyStatic_errorcodes___globals);
        goto CPyL26;
    }
    if (likely(PyDict_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/errorcodes.py", "__init__", 35, CPyStatic_errorcodes___globals, "dict", cpy_r_r25);
        goto CPyL26;
    }
    cpy_r_r27 = CPyDict_SetItem(cpy_r_r26, cpy_r_code, cpy_r_self);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/errorcodes.py", "__init__", 35, CPyStatic_errorcodes___globals);
        goto CPyL26;
    }
    return 1;
CPyL26: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL27: ;
    CPy_INCREF(cpy_r_sub_code_of);
    goto CPyL4;
CPyL28: ;
    CPy_DecRef(cpy_r_sub_code_of);
    goto CPyL26;
CPyL29: ;
    CPy_DECREF(cpy_r_sub_code_of);
    goto CPyL22;
CPyL30: ;
    CPy_DECREF(cpy_r_sub_code_of);
    goto CPyL13;
CPyL31: ;
    CPy_DecRef(cpy_r_sub_code_of);
    CPy_DecRef(cpy_r_r16);
    goto CPyL26;
}

PyObject *CPyPy_errorcodes___ErrorCode_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"code", "description", "category", "default_enabled", "sub_code_of", 0};
    PyObject *obj_code;
    PyObject *obj_description;
    PyObject *obj_category;
    PyObject *obj_default_enabled = NULL;
    PyObject *obj_sub_code_of = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO|OO", "__init__", kwlist, &obj_code, &obj_description, &obj_category, &obj_default_enabled, &obj_sub_code_of)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_errorcodes___ErrorCode)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errorcodes.ErrorCode", obj_self); 
        goto fail;
    }
    PyObject *arg_code;
    if (likely(PyUnicode_Check(obj_code)))
        arg_code = obj_code;
    else {
        CPy_TypeError("str", obj_code); 
        goto fail;
    }
    PyObject *arg_description;
    if (likely(PyUnicode_Check(obj_description)))
        arg_description = obj_description;
    else {
        CPy_TypeError("str", obj_description); 
        goto fail;
    }
    PyObject *arg_category;
    if (likely(PyUnicode_Check(obj_category)))
        arg_category = obj_category;
    else {
        CPy_TypeError("str", obj_category); 
        goto fail;
    }
    char arg_default_enabled;
    if (obj_default_enabled == NULL) {
        arg_default_enabled = 2;
    } else if (unlikely(!PyBool_Check(obj_default_enabled))) {
        CPy_TypeError("bool", obj_default_enabled); goto fail;
    } else
        arg_default_enabled = obj_default_enabled == Py_True;
    PyObject *arg_sub_code_of;
    if (obj_sub_code_of == NULL) {
        arg_sub_code_of = NULL;
        goto __LL2030;
    }
    if (PyObject_TypeCheck(obj_sub_code_of, CPyType_errorcodes___ErrorCode))
        arg_sub_code_of = obj_sub_code_of;
    else {
        arg_sub_code_of = NULL;
    }
    if (arg_sub_code_of != NULL) goto __LL2030;
    if (obj_sub_code_of == Py_None)
        arg_sub_code_of = obj_sub_code_of;
    else {
        arg_sub_code_of = NULL;
    }
    if (arg_sub_code_of != NULL) goto __LL2030;
    CPy_TypeError("mypy.errorcodes.ErrorCode or None", obj_sub_code_of); 
    goto fail;
__LL2030: ;
    char retval = CPyDef_errorcodes___ErrorCode_____init__(arg_self, arg_code, arg_description, arg_category, arg_default_enabled, arg_sub_code_of);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errorcodes.py", "__init__", 19, CPyStatic_errorcodes___globals);
    return NULL;
}

char CPyDef_errorcodes___ErrorCode_____init___3__ErrorCode_glue(PyObject *cpy_r_self, PyObject *cpy_r_code, PyObject *cpy_r_description, PyObject *cpy_r_category, char cpy_r_default_enabled, PyObject *cpy_r_sub_code_of) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = CPyStatics[288]; /* '__init__' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_self, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL15;
    cpy_r_r2 = PyList_New(3);
    if (cpy_r_r2 == NULL) goto CPyL16;
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    CPy_INCREF(cpy_r_code);
    *(PyObject * *)cpy_r_r4 = cpy_r_code;
    cpy_r_r5 = cpy_r_r4 + 8;
    CPy_INCREF(cpy_r_description);
    *(PyObject * *)cpy_r_r5 = cpy_r_description;
    cpy_r_r6 = cpy_r_r4 + 16;
    CPy_INCREF(cpy_r_category);
    *(PyObject * *)cpy_r_r6 = cpy_r_category;
    cpy_r_r7 = PyDict_New();
    if (cpy_r_r7 == NULL) goto CPyL17;
    cpy_r_r8 = 0;
    if (cpy_r_default_enabled == 2) goto CPyL5;
    cpy_r_r9 = cpy_r_default_enabled ? Py_True : Py_False;
    cpy_r_r10 = PyList_Append(cpy_r_r2, cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (!cpy_r_r11) {
        goto CPyL18;
    } else
        goto CPyL6;
CPyL5: ;
    cpy_r_r8 = 1;
CPyL6: ;
    if (cpy_r_sub_code_of == NULL) goto CPyL10;
    if (cpy_r_r8) goto CPyL9;
    cpy_r_r12 = PyList_Append(cpy_r_r2, cpy_r_sub_code_of);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (!cpy_r_r13) {
        goto CPyL18;
    } else
        goto CPyL11;
CPyL9: ;
    cpy_r_r14 = CPyStatics[2029]; /* 'sub_code_of' */
    cpy_r_r15 = CPyDict_SetItem(cpy_r_r7, cpy_r_r14, cpy_r_sub_code_of);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (!cpy_r_r16) {
        goto CPyL18;
    } else
        goto CPyL11;
CPyL10: ;
    cpy_r_r8 = 1;
CPyL11: ;
    cpy_r_r17 = PyList_AsTuple(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (cpy_r_r17 == NULL) goto CPyL19;
    cpy_r_r18 = PyObject_Call(cpy_r_r1, cpy_r_r17, cpy_r_r7);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r7);
    if (cpy_r_r18 == NULL) goto CPyL15;
    if (unlikely(cpy_r_r18 != Py_None)) {
        CPy_TypeError("None", cpy_r_r18); cpy_r_r19 = 2;
    } else
        cpy_r_r19 = 1;
    CPy_DECREF(cpy_r_r18);
    if (cpy_r_r19 == 2) goto CPyL15;
    return cpy_r_r19;
CPyL15: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL16: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL15;
CPyL17: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL15;
CPyL18: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r7);
    goto CPyL15;
CPyL19: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r7);
    goto CPyL15;
}

PyObject *CPyPy_errorcodes___ErrorCode_____init___3__ErrorCode_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"code", "description", "category", "default_enabled", "sub_code_of", 0};
    static CPyArg_Parser parser = {"OOO|OO:__init____ErrorCode_glue", kwlist, 0};
    PyObject *obj_code;
    PyObject *obj_description;
    PyObject *obj_category;
    PyObject *obj_default_enabled = NULL;
    PyObject *obj_sub_code_of = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_code, &obj_description, &obj_category, &obj_default_enabled, &obj_sub_code_of)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_errorcodes___ErrorCode)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errorcodes.ErrorCode", obj_self); 
        goto fail;
    }
    PyObject *arg_code;
    if (likely(PyUnicode_Check(obj_code)))
        arg_code = obj_code;
    else {
        CPy_TypeError("str", obj_code); 
        goto fail;
    }
    PyObject *arg_description;
    if (likely(PyUnicode_Check(obj_description)))
        arg_description = obj_description;
    else {
        CPy_TypeError("str", obj_description); 
        goto fail;
    }
    PyObject *arg_category;
    if (likely(PyUnicode_Check(obj_category)))
        arg_category = obj_category;
    else {
        CPy_TypeError("str", obj_category); 
        goto fail;
    }
    char arg_default_enabled;
    if (obj_default_enabled == NULL) {
        arg_default_enabled = 2;
    } else if (unlikely(!PyBool_Check(obj_default_enabled))) {
        CPy_TypeError("bool", obj_default_enabled); goto fail;
    } else
        arg_default_enabled = obj_default_enabled == Py_True;
    PyObject *arg_sub_code_of;
    if (obj_sub_code_of == NULL) {
        arg_sub_code_of = NULL;
        goto __LL2031;
    }
    if (PyObject_TypeCheck(obj_sub_code_of, CPyType_errorcodes___ErrorCode))
        arg_sub_code_of = obj_sub_code_of;
    else {
        arg_sub_code_of = NULL;
    }
    if (arg_sub_code_of != NULL) goto __LL2031;
    if (obj_sub_code_of == Py_None)
        arg_sub_code_of = obj_sub_code_of;
    else {
        arg_sub_code_of = NULL;
    }
    if (arg_sub_code_of != NULL) goto __LL2031;
    CPy_TypeError("mypy.errorcodes.ErrorCode or None", obj_sub_code_of); 
    goto fail;
__LL2031: ;
    char retval = CPyDef_errorcodes___ErrorCode_____init___3__ErrorCode_glue(arg_self, arg_code, arg_description, arg_category, arg_default_enabled, arg_sub_code_of);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errorcodes.py", "__init____ErrorCode_glue", -1, CPyStatic_errorcodes___globals);
    return NULL;
}

PyObject *CPyDef_errorcodes___ErrorCode_____str__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[2030]; /* '<ErrorCode ' */
    cpy_r_r1 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_self)->_code;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/errorcodes.py", "__str__", "ErrorCode", "code", 38, CPyStatic_errorcodes___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = CPyStatics[840]; /* '>' */
    cpy_r_r3 = CPyStr_Build(3, cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "__str__", 38, CPyStatic_errorcodes___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_errorcodes___ErrorCode_____str__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__str__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_errorcodes___ErrorCode)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errorcodes.ErrorCode", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_errorcodes___ErrorCode_____str__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errorcodes.py", "__str__", 37, CPyStatic_errorcodes___globals);
    return NULL;
}

PyObject *CPyDef_errorcodes___ErrorCode_____str___3__ErrorCode_glue(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyStatics[1418]; /* '__str__' */
    PyObject *cpy_r_r1[1] = {cpy_r_self};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyUnicode_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeError("str", cpy_r_r3); 
        cpy_r_r4 = NULL;
    }
    if (cpy_r_r4 == NULL) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_errorcodes___ErrorCode_____str___3__ErrorCode_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__str____ErrorCode_glue", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_errorcodes___ErrorCode)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errorcodes.ErrorCode", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_errorcodes___ErrorCode_____str___3__ErrorCode_glue(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errorcodes.py", "__str____ErrorCode_glue", -1, CPyStatic_errorcodes___globals);
    return NULL;
}

PyObject *CPyDef_errorcodes___ErrorCode_____eq__(PyObject *cpy_r_self, PyObject *cpy_r_other) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = (PyObject *)CPyType_errorcodes___ErrorCode;
    cpy_r_r1 = CPy_TypeCheck(cpy_r_other, cpy_r_r0);
    if (cpy_r_r1) goto CPyL2;
    cpy_r_r2 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r2);
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_self)->_code;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/errorcodes.py", "__eq__", "ErrorCode", "code", 43, CPyStatic_errorcodes___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r3);
CPyL3: ;
    if (likely(PyObject_TypeCheck(cpy_r_other, CPyType_errorcodes___ErrorCode)))
        cpy_r_r4 = cpy_r_other;
    else {
        CPy_TypeErrorTraceback("mypy/errorcodes.py", "__eq__", 43, CPyStatic_errorcodes___globals, "mypy.errorcodes.ErrorCode", cpy_r_other);
        goto CPyL10;
    }
    cpy_r_r5 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_r4)->_code;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/errorcodes.py", "__eq__", "ErrorCode", "code", 43, CPyStatic_errorcodes___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = PyUnicode_Compare(cpy_r_r3, cpy_r_r5);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 == -1;
    if (!cpy_r_r7) goto CPyL8;
    cpy_r_r8 = PyErr_Occurred();
    cpy_r_r9 = cpy_r_r8 != NULL;
    if (!cpy_r_r9) goto CPyL8;
    cpy_r_r10 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/errorcodes.py", "__eq__", 43, CPyStatic_errorcodes___globals);
        goto CPyL9;
    }
CPyL8: ;
    cpy_r_r11 = cpy_r_r6 == 0;
    cpy_r_r12 = cpy_r_r11 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r12);
    return cpy_r_r12;
CPyL9: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL10: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL9;
}

PyObject *CPyPy_errorcodes___ErrorCode_____eq__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"other", 0};
    static CPyArg_Parser parser = {"O:__eq__", kwlist, 0};
    PyObject *obj_other;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_other)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_errorcodes___ErrorCode)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errorcodes.ErrorCode", obj_self); 
        goto fail;
    }
    PyObject *arg_other = obj_other;
    PyObject *retval = CPyDef_errorcodes___ErrorCode_____eq__(arg_self, arg_other);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errorcodes.py", "__eq__", 40, CPyStatic_errorcodes___globals);
    return NULL;
}

PyObject *CPyDef_errorcodes___ErrorCode_____eq___3__ErrorCode_glue(PyObject *cpy_r_self, PyObject *cpy_r_other) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[753]; /* '__eq__' */
    PyObject *cpy_r_r1[2] = {cpy_r_self, cpy_r_other};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775810ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL2;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_errorcodes___ErrorCode_____eq___3__ErrorCode_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"other", 0};
    static CPyArg_Parser parser = {"O:__eq____ErrorCode_glue", kwlist, 0};
    PyObject *obj_other;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_other)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_errorcodes___ErrorCode)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errorcodes.ErrorCode", obj_self); 
        goto fail;
    }
    PyObject *arg_other = obj_other;
    PyObject *retval = CPyDef_errorcodes___ErrorCode_____eq___3__ErrorCode_glue(arg_self, arg_other);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errorcodes.py", "__eq____ErrorCode_glue", -1, CPyStatic_errorcodes___globals);
    return NULL;
}

CPyTagged CPyDef_errorcodes___ErrorCode_____hash__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    tuple_T1O cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    cpy_r_r0 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_self)->_code;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/errorcodes.py", "__hash__", "ErrorCode", "code", 46, CPyStatic_errorcodes___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1.f0 = cpy_r_r0;
    CPy_INCREF(cpy_r_r1.f0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = PyTuple_New(1);
    if (unlikely(cpy_r_r2 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2032 = cpy_r_r1.f0;
    PyTuple_SET_ITEM(cpy_r_r2, 0, __tmp2032);
    cpy_r_r3 = CPyObject_Hash(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/errorcodes.py", "__hash__", 46, CPyStatic_errorcodes___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = CPY_INT_TAG;
    return cpy_r_r4;
}

PyObject *CPyPy_errorcodes___ErrorCode_____hash__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__hash__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_errorcodes___ErrorCode)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errorcodes.ErrorCode", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_errorcodes___ErrorCode_____hash__(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errorcodes.py", "__hash__", 45, CPyStatic_errorcodes___globals);
    return NULL;
}

CPyTagged CPyDef_errorcodes___ErrorCode_____hash___3__ErrorCode_glue(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    cpy_r_r0 = CPyStatics[2031]; /* '__hash__' */
    PyObject *cpy_r_r1[1] = {cpy_r_self};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (cpy_r_r3 == NULL) goto CPyL3;
    if (likely(PyLong_Check(cpy_r_r3)))
        cpy_r_r4 = CPyTagged_FromObject(cpy_r_r3);
    else {
        CPy_TypeError("int", cpy_r_r3); cpy_r_r4 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4 == CPY_INT_TAG) goto CPyL3;
    return cpy_r_r4;
CPyL3: ;
    cpy_r_r5 = CPY_INT_TAG;
    return cpy_r_r5;
}

PyObject *CPyPy_errorcodes___ErrorCode_____hash___3__ErrorCode_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__hash____ErrorCode_glue", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_errorcodes___ErrorCode)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errorcodes.ErrorCode", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_errorcodes___ErrorCode_____hash___3__ErrorCode_glue(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errorcodes.py", "__hash____ErrorCode_glue", -1, CPyStatic_errorcodes___globals);
    return NULL;
}

PyObject *CPyDef_errorcodes___ErrorCode_____ne__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_rhs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPY_GET_METHOD(cpy_r___mypyc_self__, CPyType_errorcodes___ErrorCode, 2, mypy___errorcodes___ErrorCodeObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r___mypyc_self__, cpy_r_rhs); /* __eq__ */
    if (cpy_r_r0 == NULL) goto CPyL5;
    cpy_r_r1 = (PyObject *)&_Py_NotImplementedStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (cpy_r_r2) goto CPyL6;
    cpy_r_r3 = PyObject_Not(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = cpy_r_r3;
    cpy_r_r6 = cpy_r_r5 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r6);
    return cpy_r_r6;
CPyL4: ;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_errorcodes___ErrorCode_____ne__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"rhs", 0};
    static CPyArg_Parser parser = {"O:__ne__", kwlist, 0};
    PyObject *obj_rhs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_rhs)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(PyObject_TypeCheck(obj___mypyc_self__, CPyType_errorcodes___ErrorCode)))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.errorcodes.ErrorCode", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_rhs = obj_rhs;
    PyObject *retval = CPyDef_errorcodes___ErrorCode_____ne__(arg___mypyc_self__, arg_rhs);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errorcodes.py", "__ne__", -1, CPyStatic_errorcodes___globals);
    return NULL;
}

char CPyDef_errorcodes_____top_level__(void) {
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
    int32_t cpy_r_r24;
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
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    int32_t cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    int32_t cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    int32_t cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    int32_t cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    int32_t cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    int32_t cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    char cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    int32_t cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    int32_t cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    int32_t cpy_r_r195;
    char cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    char cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    int32_t cpy_r_r205;
    char cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    int32_t cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    char cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    int32_t cpy_r_r225;
    char cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    char cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    int32_t cpy_r_r235;
    char cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    char cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    int32_t cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    char cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    int32_t cpy_r_r255;
    char cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    char cpy_r_r261;
    char cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    int32_t cpy_r_r266;
    char cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    char cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    int32_t cpy_r_r276;
    char cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    char cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    int32_t cpy_r_r286;
    char cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    char cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_r294;
    PyObject *cpy_r_r295;
    int32_t cpy_r_r296;
    char cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    char cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    int32_t cpy_r_r306;
    char cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    char cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    int32_t cpy_r_r316;
    char cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    char cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    int32_t cpy_r_r326;
    char cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    char cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    PyObject *cpy_r_r334;
    PyObject *cpy_r_r335;
    int32_t cpy_r_r336;
    char cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    char cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    int32_t cpy_r_r346;
    char cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    char cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    PyObject *cpy_r_r355;
    int32_t cpy_r_r356;
    char cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_r359;
    PyObject *cpy_r_r360;
    char cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    int32_t cpy_r_r366;
    char cpy_r_r367;
    PyObject *cpy_r_r368;
    PyObject *cpy_r_r369;
    PyObject *cpy_r_r370;
    char cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    int32_t cpy_r_r376;
    char cpy_r_r377;
    PyObject *cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    char cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    int32_t cpy_r_r386;
    char cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    PyObject *cpy_r_r390;
    char cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject *cpy_r_r395;
    int32_t cpy_r_r396;
    char cpy_r_r397;
    PyObject *cpy_r_r398;
    PyObject *cpy_r_r399;
    PyObject *cpy_r_r400;
    char cpy_r_r401;
    PyObject *cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    int32_t cpy_r_r406;
    char cpy_r_r407;
    PyObject *cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    char cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    PyObject *cpy_r_r415;
    int32_t cpy_r_r416;
    char cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_r420;
    char cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    PyObject *cpy_r_r424;
    PyObject *cpy_r_r425;
    int32_t cpy_r_r426;
    char cpy_r_r427;
    PyObject *cpy_r_r428;
    PyObject *cpy_r_r429;
    PyObject *cpy_r_r430;
    char cpy_r_r431;
    PyObject *cpy_r_r432;
    PyObject *cpy_r_r433;
    PyObject *cpy_r_r434;
    PyObject *cpy_r_r435;
    int32_t cpy_r_r436;
    char cpy_r_r437;
    PyObject *cpy_r_r438;
    PyObject *cpy_r_r439;
    PyObject *cpy_r_r440;
    char cpy_r_r441;
    PyObject *cpy_r_r442;
    PyObject *cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    int32_t cpy_r_r446;
    char cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject *cpy_r_r449;
    PyObject *cpy_r_r450;
    char cpy_r_r451;
    PyObject *cpy_r_r452;
    PyObject *cpy_r_r453;
    PyObject *cpy_r_r454;
    PyObject *cpy_r_r455;
    int32_t cpy_r_r456;
    char cpy_r_r457;
    PyObject *cpy_r_r458;
    PyObject *cpy_r_r459;
    PyObject *cpy_r_r460;
    char cpy_r_r461;
    PyObject *cpy_r_r462;
    PyObject *cpy_r_r463;
    PyObject *cpy_r_r464;
    PyObject *cpy_r_r465;
    int32_t cpy_r_r466;
    char cpy_r_r467;
    PyObject *cpy_r_r468;
    PyObject *cpy_r_r469;
    PyObject *cpy_r_r470;
    char cpy_r_r471;
    PyObject *cpy_r_r472;
    PyObject *cpy_r_r473;
    PyObject *cpy_r_r474;
    PyObject *cpy_r_r475;
    int32_t cpy_r_r476;
    char cpy_r_r477;
    PyObject *cpy_r_r478;
    PyObject *cpy_r_r479;
    PyObject *cpy_r_r480;
    char cpy_r_r481;
    PyObject *cpy_r_r482;
    PyObject *cpy_r_r483;
    PyObject *cpy_r_r484;
    PyObject *cpy_r_r485;
    int32_t cpy_r_r486;
    char cpy_r_r487;
    PyObject *cpy_r_r488;
    PyObject *cpy_r_r489;
    PyObject *cpy_r_r490;
    char cpy_r_r491;
    PyObject *cpy_r_r492;
    PyObject *cpy_r_r493;
    PyObject *cpy_r_r494;
    PyObject *cpy_r_r495;
    int32_t cpy_r_r496;
    char cpy_r_r497;
    PyObject *cpy_r_r498;
    PyObject *cpy_r_r499;
    PyObject *cpy_r_r500;
    char cpy_r_r501;
    PyObject *cpy_r_r502;
    PyObject *cpy_r_r503;
    PyObject *cpy_r_r504;
    PyObject *cpy_r_r505;
    int32_t cpy_r_r506;
    char cpy_r_r507;
    PyObject *cpy_r_r508;
    PyObject *cpy_r_r509;
    PyObject *cpy_r_r510;
    PyObject *cpy_r_r511;
    PyObject *cpy_r_r512;
    PyObject *cpy_r_r513;
    PyObject *cpy_r_r514;
    int32_t cpy_r_r515;
    char cpy_r_r516;
    PyObject *cpy_r_r517;
    PyObject *cpy_r_r518;
    PyObject *cpy_r_r519;
    PyObject *cpy_r_r520;
    PyObject *cpy_r_r521;
    PyObject *cpy_r_r522;
    PyObject *cpy_r_r523;
    int32_t cpy_r_r524;
    char cpy_r_r525;
    PyObject *cpy_r_r526;
    PyObject *cpy_r_r527;
    PyObject *cpy_r_r528;
    PyObject *cpy_r_r529;
    PyObject *cpy_r_r530;
    PyObject *cpy_r_r531;
    PyObject *cpy_r_r532;
    int32_t cpy_r_r533;
    char cpy_r_r534;
    PyObject *cpy_r_r535;
    PyObject *cpy_r_r536;
    PyObject *cpy_r_r537;
    char cpy_r_r538;
    PyObject *cpy_r_r539;
    PyObject *cpy_r_r540;
    PyObject *cpy_r_r541;
    PyObject *cpy_r_r542;
    int32_t cpy_r_r543;
    char cpy_r_r544;
    PyObject *cpy_r_r545;
    PyObject *cpy_r_r546;
    PyObject *cpy_r_r547;
    PyObject *cpy_r_r548;
    PyObject *cpy_r_r549;
    PyObject *cpy_r_r550;
    PyObject *cpy_r_r551;
    int32_t cpy_r_r552;
    char cpy_r_r553;
    PyObject *cpy_r_r554;
    PyObject *cpy_r_r555;
    PyObject *cpy_r_r556;
    char cpy_r_r557;
    PyObject *cpy_r_r558;
    PyObject *cpy_r_r559;
    PyObject *cpy_r_r560;
    PyObject *cpy_r_r561;
    int32_t cpy_r_r562;
    char cpy_r_r563;
    PyObject *cpy_r_r564;
    PyObject *cpy_r_r565;
    PyObject *cpy_r_r566;
    char cpy_r_r567;
    PyObject *cpy_r_r568;
    PyObject *cpy_r_r569;
    PyObject *cpy_r_r570;
    PyObject *cpy_r_r571;
    int32_t cpy_r_r572;
    char cpy_r_r573;
    PyObject *cpy_r_r574;
    PyObject *cpy_r_r575;
    PyObject *cpy_r_r576;
    PyObject *cpy_r_r577;
    PyObject *cpy_r_r578;
    PyObject *cpy_r_r579;
    PyObject *cpy_r_r580;
    int32_t cpy_r_r581;
    char cpy_r_r582;
    PyObject *cpy_r_r583;
    PyObject *cpy_r_r584;
    PyObject *cpy_r_r585;
    PyObject *cpy_r_r586;
    PyObject *cpy_r_r587;
    PyObject *cpy_r_r588;
    PyObject *cpy_r_r589;
    int32_t cpy_r_r590;
    char cpy_r_r591;
    PyObject *cpy_r_r592;
    PyObject *cpy_r_r593;
    PyObject *cpy_r_r594;
    PyObject *cpy_r_r595;
    PyObject *cpy_r_r596;
    PyObject *cpy_r_r597;
    PyObject *cpy_r_r598;
    int32_t cpy_r_r599;
    char cpy_r_r600;
    PyObject *cpy_r_r601;
    PyObject *cpy_r_r602;
    PyObject *cpy_r_r603;
    char cpy_r_r604;
    PyObject *cpy_r_r605;
    PyObject *cpy_r_r606;
    PyObject *cpy_r_r607;
    PyObject *cpy_r_r608;
    int32_t cpy_r_r609;
    char cpy_r_r610;
    PyObject *cpy_r_r611;
    PyObject *cpy_r_r612;
    PyObject *cpy_r_r613;
    PyObject *cpy_r_r614;
    PyObject *cpy_r_r615;
    PyObject *cpy_r_r616;
    PyObject *cpy_r_r617;
    int32_t cpy_r_r618;
    char cpy_r_r619;
    PyObject *cpy_r_r620;
    PyObject *cpy_r_r621;
    PyObject *cpy_r_r622;
    PyObject *cpy_r_r623;
    PyObject *cpy_r_r624;
    PyObject *cpy_r_r625;
    PyObject *cpy_r_r626;
    int32_t cpy_r_r627;
    char cpy_r_r628;
    PyObject *cpy_r_r629;
    PyObject *cpy_r_r630;
    PyObject *cpy_r_r631;
    char cpy_r_r632;
    PyObject *cpy_r_r633;
    PyObject *cpy_r_r634;
    PyObject *cpy_r_r635;
    PyObject *cpy_r_r636;
    int32_t cpy_r_r637;
    char cpy_r_r638;
    PyObject *cpy_r_r639;
    PyObject *cpy_r_r640;
    PyObject *cpy_r_r641;
    char cpy_r_r642;
    PyObject *cpy_r_r643;
    PyObject *cpy_r_r644;
    PyObject *cpy_r_r645;
    PyObject *cpy_r_r646;
    int32_t cpy_r_r647;
    char cpy_r_r648;
    PyObject *cpy_r_r649;
    PyObject *cpy_r_r650;
    PyObject *cpy_r_r651;
    PyObject *cpy_r_r652;
    PyObject *cpy_r_r653;
    char cpy_r_r654;
    PyObject *cpy_r_r655;
    int32_t cpy_r_r656;
    char cpy_r_r657;
    PyObject *cpy_r_r658;
    PyObject *cpy_r_r659;
    PyObject *cpy_r_r660;
    char cpy_r_r661;
    PyObject *cpy_r_r662;
    PyObject *cpy_r_r663;
    PyObject *cpy_r_r664;
    PyObject *cpy_r_r665;
    int32_t cpy_r_r666;
    char cpy_r_r667;
    char cpy_r_r668;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", -1, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_errorcodes___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 6, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9083]; /* ('defaultdict',) */
    cpy_r_r10 = CPyStatics[76]; /* 'collections' */
    cpy_r_r11 = CPyStatic_errorcodes___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 8, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyModule_collections = cpy_r_r12;
    CPy_INCREF(CPyModule_collections);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9301]; /* ('Final',) */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_errorcodes___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 9, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9361]; /* ('mypyc_attr',) */
    cpy_r_r18 = CPyStatics[599]; /* 'mypy_extensions' */
    cpy_r_r19 = CPyStatic_errorcodes___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 11, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyModule_mypy_extensions = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = PyDict_New();
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 13, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r22 = CPyStatic_errorcodes___globals;
    cpy_r_r23 = CPyStatics[1490]; /* 'error_codes' */
    cpy_r_r24 = CPyDict_SetItem(cpy_r_r22, cpy_r_r23, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 13, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r26 = (PyObject *)&PySet_Type;
    cpy_r_r27 = CPyStatic_errorcodes___globals;
    cpy_r_r28 = CPyStatics[73]; /* 'defaultdict' */
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 14, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    PyObject *cpy_r_r30[1] = {cpy_r_r26};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = _PyObject_Vectorcall(cpy_r_r29, cpy_r_r31, 1, 0);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 14, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/errorcodes.py", "<module>", 14, CPyStatic_errorcodes___globals, "dict", cpy_r_r32);
        goto CPyL154;
    }
    cpy_r_r34 = CPyStatic_errorcodes___globals;
    cpy_r_r35 = CPyStatics[2028]; /* 'sub_code_map' */
    cpy_r_r36 = CPyDict_SetItem(cpy_r_r34, cpy_r_r35, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 14, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r38 = NULL;
    cpy_r_r39 = CPyStatics[924]; /* 'mypy.errorcodes' */
    cpy_r_r40 = (PyObject *)CPyType_errorcodes___ErrorCode_template;
    cpy_r_r41 = CPyType_FromTemplate(cpy_r_r40, cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 18, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r42 = CPyDef_errorcodes___ErrorCode_trait_vtable_setup();
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", -1, CPyStatic_errorcodes___globals);
        goto CPyL155;
    }
    cpy_r_r43 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r44 = CPyStatics[6]; /* 'code' */
    cpy_r_r45 = CPyStatics[1786]; /* 'description' */
    cpy_r_r46 = CPyStatics[2033]; /* 'category' */
    cpy_r_r47 = CPyStatics[2034]; /* 'default_enabled' */
    cpy_r_r48 = CPyStatics[2029]; /* 'sub_code_of' */
    cpy_r_r49 = PyTuple_Pack(5, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 18, CPyStatic_errorcodes___globals);
        goto CPyL155;
    }
    cpy_r_r50 = PyObject_SetAttr(cpy_r_r41, cpy_r_r43, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 18, CPyStatic_errorcodes___globals);
        goto CPyL155;
    }
    CPyType_errorcodes___ErrorCode = (PyTypeObject *)cpy_r_r41;
    CPy_INCREF(CPyType_errorcodes___ErrorCode);
    cpy_r_r52 = CPyStatic_errorcodes___globals;
    cpy_r_r53 = CPyStatics[923]; /* 'ErrorCode' */
    cpy_r_r54 = CPyDict_SetItem(cpy_r_r52, cpy_r_r53, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 18, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r56 = CPyStatics[2035]; /* 'attr-defined' */
    cpy_r_r57 = CPyStatics[2036]; /* 'Check that attribute exists' */
    cpy_r_r58 = CPyStatics[2037]; /* 'General' */
    cpy_r_r59 = 2;
    cpy_r_r60 = NULL;
    cpy_r_r61 = CPyDef_errorcodes___ErrorCode(cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 49, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___ATTR_DEFINED = cpy_r_r61;
    CPy_INCREF(CPyStatic_errorcodes___ATTR_DEFINED);
    cpy_r_r62 = CPyStatic_errorcodes___globals;
    cpy_r_r63 = CPyStatics[2038]; /* 'ATTR_DEFINED' */
    cpy_r_r64 = CPyDict_SetItem(cpy_r_r62, cpy_r_r63, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 49, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r66 = CPyStatics[2039]; /* 'name-defined' */
    cpy_r_r67 = CPyStatics[2040]; /* 'Check that name is defined' */
    cpy_r_r68 = CPyStatics[2037]; /* 'General' */
    cpy_r_r69 = 2;
    cpy_r_r70 = NULL;
    cpy_r_r71 = CPyDef_errorcodes___ErrorCode(cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 50, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___NAME_DEFINED = cpy_r_r71;
    CPy_INCREF(CPyStatic_errorcodes___NAME_DEFINED);
    cpy_r_r72 = CPyStatic_errorcodes___globals;
    cpy_r_r73 = CPyStatics[2041]; /* 'NAME_DEFINED' */
    cpy_r_r74 = CPyDict_SetItem(cpy_r_r72, cpy_r_r73, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 50, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r76 = CPyStatics[2042]; /* 'call-arg' */
    cpy_r_r77 = CPyStatics[2043]; /* 'Check number, names and kinds of arguments in calls' */
    cpy_r_r78 = CPyStatics[2037]; /* 'General' */
    cpy_r_r79 = 2;
    cpy_r_r80 = NULL;
    cpy_r_r81 = CPyDef_errorcodes___ErrorCode(cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 51, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___CALL_ARG = cpy_r_r81;
    CPy_INCREF(CPyStatic_errorcodes___CALL_ARG);
    cpy_r_r82 = CPyStatic_errorcodes___globals;
    cpy_r_r83 = CPyStatics[2044]; /* 'CALL_ARG' */
    cpy_r_r84 = CPyDict_SetItem(cpy_r_r82, cpy_r_r83, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 51, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r86 = CPyStatics[2045]; /* 'arg-type' */
    cpy_r_r87 = CPyStatics[2046]; /* 'Check argument types in calls' */
    cpy_r_r88 = CPyStatics[2037]; /* 'General' */
    cpy_r_r89 = 2;
    cpy_r_r90 = NULL;
    cpy_r_r91 = CPyDef_errorcodes___ErrorCode(cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 54, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___ARG_TYPE = cpy_r_r91;
    CPy_INCREF(CPyStatic_errorcodes___ARG_TYPE);
    cpy_r_r92 = CPyStatic_errorcodes___globals;
    cpy_r_r93 = CPyStatics[2047]; /* 'ARG_TYPE' */
    cpy_r_r94 = CPyDict_SetItem(cpy_r_r92, cpy_r_r93, cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r95 = cpy_r_r94 >= 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 54, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r96 = CPyStatics[2048]; /* 'call-overload' */
    cpy_r_r97 = CPyStatics[2049]; /* 'Check that an overload variant matches arguments' */
    cpy_r_r98 = CPyStatics[2037]; /* 'General' */
    cpy_r_r99 = 2;
    cpy_r_r100 = NULL;
    cpy_r_r101 = CPyDef_errorcodes___ErrorCode(cpy_r_r96, cpy_r_r97, cpy_r_r98, cpy_r_r99, cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 55, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___CALL_OVERLOAD = cpy_r_r101;
    CPy_INCREF(CPyStatic_errorcodes___CALL_OVERLOAD);
    cpy_r_r102 = CPyStatic_errorcodes___globals;
    cpy_r_r103 = CPyStatics[2050]; /* 'CALL_OVERLOAD' */
    cpy_r_r104 = CPyDict_SetItem(cpy_r_r102, cpy_r_r103, cpy_r_r101);
    CPy_DECREF(cpy_r_r101);
    cpy_r_r105 = cpy_r_r104 >= 0;
    if (unlikely(!cpy_r_r105)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 55, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r106 = CPyStatics[2051]; /* 'valid-type' */
    cpy_r_r107 = CPyStatics[2052]; /* 'Check that type (annotation) is valid' */
    cpy_r_r108 = CPyStatics[2037]; /* 'General' */
    cpy_r_r109 = 2;
    cpy_r_r110 = NULL;
    cpy_r_r111 = CPyDef_errorcodes___ErrorCode(cpy_r_r106, cpy_r_r107, cpy_r_r108, cpy_r_r109, cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 58, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___VALID_TYPE = cpy_r_r111;
    CPy_INCREF(CPyStatic_errorcodes___VALID_TYPE);
    cpy_r_r112 = CPyStatic_errorcodes___globals;
    cpy_r_r113 = CPyStatics[2053]; /* 'VALID_TYPE' */
    cpy_r_r114 = CPyDict_SetItem(cpy_r_r112, cpy_r_r113, cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    cpy_r_r115 = cpy_r_r114 >= 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 58, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r116 = CPyStatics[2054]; /* 'var-annotated' */
    cpy_r_r117 = CPyStatics[2055]; /* "Require variable annotation if type can't be inferred" */
    cpy_r_r118 = CPyStatics[2037]; /* 'General' */
    cpy_r_r119 = 2;
    cpy_r_r120 = NULL;
    cpy_r_r121 = CPyDef_errorcodes___ErrorCode(cpy_r_r116, cpy_r_r117, cpy_r_r118, cpy_r_r119, cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 61, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___VAR_ANNOTATED = cpy_r_r121;
    CPy_INCREF(CPyStatic_errorcodes___VAR_ANNOTATED);
    cpy_r_r122 = CPyStatic_errorcodes___globals;
    cpy_r_r123 = CPyStatics[2056]; /* 'VAR_ANNOTATED' */
    cpy_r_r124 = CPyDict_SetItem(cpy_r_r122, cpy_r_r123, cpy_r_r121);
    CPy_DECREF(cpy_r_r121);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 61, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r126 = CPyStatics[2057]; /* 'override' */
    cpy_r_r127 = CPyStatics[2058]; /* ('Check that method override is compatible with base '
                                      'class') */
    cpy_r_r128 = CPyStatics[2037]; /* 'General' */
    cpy_r_r129 = 2;
    cpy_r_r130 = NULL;
    cpy_r_r131 = CPyDef_errorcodes___ErrorCode(cpy_r_r126, cpy_r_r127, cpy_r_r128, cpy_r_r129, cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 64, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___OVERRIDE = cpy_r_r131;
    CPy_INCREF(CPyStatic_errorcodes___OVERRIDE);
    cpy_r_r132 = CPyStatic_errorcodes___globals;
    cpy_r_r133 = CPyStatics[2059]; /* 'OVERRIDE' */
    cpy_r_r134 = CPyDict_SetItem(cpy_r_r132, cpy_r_r133, cpy_r_r131);
    CPy_DECREF(cpy_r_r131);
    cpy_r_r135 = cpy_r_r134 >= 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 64, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r136 = CPyStatics[2060]; /* 'return' */
    cpy_r_r137 = CPyStatics[2061]; /* 'Check that function always returns a value' */
    cpy_r_r138 = CPyStatics[2037]; /* 'General' */
    cpy_r_r139 = 2;
    cpy_r_r140 = NULL;
    cpy_r_r141 = CPyDef_errorcodes___ErrorCode(cpy_r_r136, cpy_r_r137, cpy_r_r138, cpy_r_r139, cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 67, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___RETURN = cpy_r_r141;
    CPy_INCREF(CPyStatic_errorcodes___RETURN);
    cpy_r_r142 = CPyStatic_errorcodes___globals;
    cpy_r_r143 = CPyStatics[2062]; /* 'RETURN' */
    cpy_r_r144 = CPyDict_SetItem(cpy_r_r142, cpy_r_r143, cpy_r_r141);
    CPy_DECREF(cpy_r_r141);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 67, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r146 = CPyStatics[2063]; /* 'return-value' */
    cpy_r_r147 = CPyStatics[2064]; /* 'Check that return value is compatible with signature' */
    cpy_r_r148 = CPyStatics[2037]; /* 'General' */
    cpy_r_r149 = 2;
    cpy_r_r150 = NULL;
    cpy_r_r151 = CPyDef_errorcodes___ErrorCode(cpy_r_r146, cpy_r_r147, cpy_r_r148, cpy_r_r149, cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 70, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___RETURN_VALUE = cpy_r_r151;
    CPy_INCREF(CPyStatic_errorcodes___RETURN_VALUE);
    cpy_r_r152 = CPyStatic_errorcodes___globals;
    cpy_r_r153 = CPyStatics[2065]; /* 'RETURN_VALUE' */
    cpy_r_r154 = CPyDict_SetItem(cpy_r_r152, cpy_r_r153, cpy_r_r151);
    CPy_DECREF(cpy_r_r151);
    cpy_r_r155 = cpy_r_r154 >= 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 70, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r156 = CPyStatics[2066]; /* 'assignment' */
    cpy_r_r157 = CPyStatics[2067]; /* 'Check that assigned value is compatible with target' */
    cpy_r_r158 = CPyStatics[2037]; /* 'General' */
    cpy_r_r159 = 2;
    cpy_r_r160 = NULL;
    cpy_r_r161 = CPyDef_errorcodes___ErrorCode(cpy_r_r156, cpy_r_r157, cpy_r_r158, cpy_r_r159, cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 73, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___ASSIGNMENT = cpy_r_r161;
    CPy_INCREF(CPyStatic_errorcodes___ASSIGNMENT);
    cpy_r_r162 = CPyStatic_errorcodes___globals;
    cpy_r_r163 = CPyStatics[2068]; /* 'ASSIGNMENT' */
    cpy_r_r164 = CPyDict_SetItem(cpy_r_r162, cpy_r_r163, cpy_r_r161);
    CPy_DECREF(cpy_r_r161);
    cpy_r_r165 = cpy_r_r164 >= 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 73, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r166 = CPyStatics[2069]; /* 'method-assign' */
    cpy_r_r167 = CPyStatics[2070]; /* 'Check that assignment target is not a method' */
    cpy_r_r168 = CPyStatics[2037]; /* 'General' */
    cpy_r_r169 = CPyStatic_errorcodes___ASSIGNMENT;
    if (likely(cpy_r_r169 != NULL)) goto CPyL43;
    PyErr_SetString(PyExc_NameError, "value for final name \"ASSIGNMENT\" was not set");
    cpy_r_r170 = 0;
    if (unlikely(!cpy_r_r170)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 80, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r171 = 2;
    cpy_r_r172 = CPyDef_errorcodes___ErrorCode(cpy_r_r166, cpy_r_r167, cpy_r_r168, cpy_r_r171, cpy_r_r169);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 76, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___METHOD_ASSIGN = cpy_r_r172;
    CPy_INCREF(CPyStatic_errorcodes___METHOD_ASSIGN);
    cpy_r_r173 = CPyStatic_errorcodes___globals;
    cpy_r_r174 = CPyStatics[2071]; /* 'METHOD_ASSIGN' */
    cpy_r_r175 = CPyDict_SetItem(cpy_r_r173, cpy_r_r174, cpy_r_r172);
    CPy_DECREF(cpy_r_r172);
    cpy_r_r176 = cpy_r_r175 >= 0;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 76, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r177 = CPyStatics[2072]; /* 'type-arg' */
    cpy_r_r178 = CPyStatics[2073]; /* 'Check that generic type arguments are present' */
    cpy_r_r179 = CPyStatics[2037]; /* 'General' */
    cpy_r_r180 = 2;
    cpy_r_r181 = NULL;
    cpy_r_r182 = CPyDef_errorcodes___ErrorCode(cpy_r_r177, cpy_r_r178, cpy_r_r179, cpy_r_r180, cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 82, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___TYPE_ARG = cpy_r_r182;
    CPy_INCREF(CPyStatic_errorcodes___TYPE_ARG);
    cpy_r_r183 = CPyStatic_errorcodes___globals;
    cpy_r_r184 = CPyStatics[2074]; /* 'TYPE_ARG' */
    cpy_r_r185 = CPyDict_SetItem(cpy_r_r183, cpy_r_r184, cpy_r_r182);
    CPy_DECREF(cpy_r_r182);
    cpy_r_r186 = cpy_r_r185 >= 0;
    if (unlikely(!cpy_r_r186)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 82, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r187 = CPyStatics[2075]; /* 'type-var' */
    cpy_r_r188 = CPyStatics[2076]; /* 'Check that type variable values are valid' */
    cpy_r_r189 = CPyStatics[2037]; /* 'General' */
    cpy_r_r190 = 2;
    cpy_r_r191 = NULL;
    cpy_r_r192 = CPyDef_errorcodes___ErrorCode(cpy_r_r187, cpy_r_r188, cpy_r_r189, cpy_r_r190, cpy_r_r191);
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 83, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___TYPE_VAR = cpy_r_r192;
    CPy_INCREF(CPyStatic_errorcodes___TYPE_VAR);
    cpy_r_r193 = CPyStatic_errorcodes___globals;
    cpy_r_r194 = CPyStatics[920]; /* 'TYPE_VAR' */
    cpy_r_r195 = CPyDict_SetItem(cpy_r_r193, cpy_r_r194, cpy_r_r192);
    CPy_DECREF(cpy_r_r192);
    cpy_r_r196 = cpy_r_r195 >= 0;
    if (unlikely(!cpy_r_r196)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 83, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r197 = CPyStatics[2077]; /* 'union-attr' */
    cpy_r_r198 = CPyStatics[2078]; /* 'Check that attribute exists in each item of a union' */
    cpy_r_r199 = CPyStatics[2037]; /* 'General' */
    cpy_r_r200 = 2;
    cpy_r_r201 = NULL;
    cpy_r_r202 = CPyDef_errorcodes___ErrorCode(cpy_r_r197, cpy_r_r198, cpy_r_r199, cpy_r_r200, cpy_r_r201);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 84, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___UNION_ATTR = cpy_r_r202;
    CPy_INCREF(CPyStatic_errorcodes___UNION_ATTR);
    cpy_r_r203 = CPyStatic_errorcodes___globals;
    cpy_r_r204 = CPyStatics[2079]; /* 'UNION_ATTR' */
    cpy_r_r205 = CPyDict_SetItem(cpy_r_r203, cpy_r_r204, cpy_r_r202);
    CPy_DECREF(cpy_r_r202);
    cpy_r_r206 = cpy_r_r205 >= 0;
    if (unlikely(!cpy_r_r206)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 84, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r207 = CPyStatics[56]; /* 'index' */
    cpy_r_r208 = CPyStatics[2080]; /* 'Check indexing operations' */
    cpy_r_r209 = CPyStatics[2037]; /* 'General' */
    cpy_r_r210 = 2;
    cpy_r_r211 = NULL;
    cpy_r_r212 = CPyDef_errorcodes___ErrorCode(cpy_r_r207, cpy_r_r208, cpy_r_r209, cpy_r_r210, cpy_r_r211);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 87, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___INDEX = cpy_r_r212;
    CPy_INCREF(CPyStatic_errorcodes___INDEX);
    cpy_r_r213 = CPyStatic_errorcodes___globals;
    cpy_r_r214 = CPyStatics[2081]; /* 'INDEX' */
    cpy_r_r215 = CPyDict_SetItem(cpy_r_r213, cpy_r_r214, cpy_r_r212);
    CPy_DECREF(cpy_r_r212);
    cpy_r_r216 = cpy_r_r215 >= 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 87, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r217 = CPyStatics[2082]; /* 'operator' */
    cpy_r_r218 = CPyStatics[2083]; /* 'Check that operator is valid for operands' */
    cpy_r_r219 = CPyStatics[2037]; /* 'General' */
    cpy_r_r220 = 2;
    cpy_r_r221 = NULL;
    cpy_r_r222 = CPyDef_errorcodes___ErrorCode(cpy_r_r217, cpy_r_r218, cpy_r_r219, cpy_r_r220, cpy_r_r221);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 88, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___OPERATOR = cpy_r_r222;
    CPy_INCREF(CPyStatic_errorcodes___OPERATOR);
    cpy_r_r223 = CPyStatic_errorcodes___globals;
    cpy_r_r224 = CPyStatics[2084]; /* 'OPERATOR' */
    cpy_r_r225 = CPyDict_SetItem(cpy_r_r223, cpy_r_r224, cpy_r_r222);
    CPy_DECREF(cpy_r_r222);
    cpy_r_r226 = cpy_r_r225 >= 0;
    if (unlikely(!cpy_r_r226)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 88, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r227 = CPyStatics[2085]; /* 'list-item' */
    cpy_r_r228 = CPyStatics[2086]; /* 'Check list items in a list expression [item, ...]' */
    cpy_r_r229 = CPyStatics[2037]; /* 'General' */
    cpy_r_r230 = 2;
    cpy_r_r231 = NULL;
    cpy_r_r232 = CPyDef_errorcodes___ErrorCode(cpy_r_r227, cpy_r_r228, cpy_r_r229, cpy_r_r230, cpy_r_r231);
    if (unlikely(cpy_r_r232 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 89, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___LIST_ITEM = cpy_r_r232;
    CPy_INCREF(CPyStatic_errorcodes___LIST_ITEM);
    cpy_r_r233 = CPyStatic_errorcodes___globals;
    cpy_r_r234 = CPyStatics[2087]; /* 'LIST_ITEM' */
    cpy_r_r235 = CPyDict_SetItem(cpy_r_r233, cpy_r_r234, cpy_r_r232);
    CPy_DECREF(cpy_r_r232);
    cpy_r_r236 = cpy_r_r235 >= 0;
    if (unlikely(!cpy_r_r236)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 89, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r237 = CPyStatics[2088]; /* 'dict-item' */
    cpy_r_r238 = CPyStatics[2089]; /* ('Check dict items in a dict expression {key: value, '
                                      '...}') */
    cpy_r_r239 = CPyStatics[2037]; /* 'General' */
    cpy_r_r240 = 2;
    cpy_r_r241 = NULL;
    cpy_r_r242 = CPyDef_errorcodes___ErrorCode(cpy_r_r237, cpy_r_r238, cpy_r_r239, cpy_r_r240, cpy_r_r241);
    if (unlikely(cpy_r_r242 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 92, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___DICT_ITEM = cpy_r_r242;
    CPy_INCREF(CPyStatic_errorcodes___DICT_ITEM);
    cpy_r_r243 = CPyStatic_errorcodes___globals;
    cpy_r_r244 = CPyStatics[2090]; /* 'DICT_ITEM' */
    cpy_r_r245 = CPyDict_SetItem(cpy_r_r243, cpy_r_r244, cpy_r_r242);
    CPy_DECREF(cpy_r_r242);
    cpy_r_r246 = cpy_r_r245 >= 0;
    if (unlikely(!cpy_r_r246)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 92, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r247 = CPyStatics[2091]; /* 'typeddict-item' */
    cpy_r_r248 = CPyStatics[2092]; /* 'Check items when constructing TypedDict' */
    cpy_r_r249 = CPyStatics[2037]; /* 'General' */
    cpy_r_r250 = 2;
    cpy_r_r251 = NULL;
    cpy_r_r252 = CPyDef_errorcodes___ErrorCode(cpy_r_r247, cpy_r_r248, cpy_r_r249, cpy_r_r250, cpy_r_r251);
    if (unlikely(cpy_r_r252 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 95, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___TYPEDDICT_ITEM = cpy_r_r252;
    CPy_INCREF(CPyStatic_errorcodes___TYPEDDICT_ITEM);
    cpy_r_r253 = CPyStatic_errorcodes___globals;
    cpy_r_r254 = CPyStatics[2093]; /* 'TYPEDDICT_ITEM' */
    cpy_r_r255 = CPyDict_SetItem(cpy_r_r253, cpy_r_r254, cpy_r_r252);
    CPy_DECREF(cpy_r_r252);
    cpy_r_r256 = cpy_r_r255 >= 0;
    if (unlikely(!cpy_r_r256)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 95, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r257 = CPyStatics[2094]; /* 'typeddict-unknown-key' */
    cpy_r_r258 = CPyStatics[2095]; /* 'Check unknown keys when constructing TypedDict' */
    cpy_r_r259 = CPyStatics[2037]; /* 'General' */
    cpy_r_r260 = CPyStatic_errorcodes___TYPEDDICT_ITEM;
    if (likely(cpy_r_r260 != NULL)) goto CPyL64;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPEDDICT_ITEM\" was not set");
    cpy_r_r261 = 0;
    if (unlikely(!cpy_r_r261)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 102, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPy_Unreachable();
CPyL64: ;
    cpy_r_r262 = 2;
    cpy_r_r263 = CPyDef_errorcodes___ErrorCode(cpy_r_r257, cpy_r_r258, cpy_r_r259, cpy_r_r262, cpy_r_r260);
    if (unlikely(cpy_r_r263 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 98, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___TYPEDDICT_UNKNOWN_KEY = cpy_r_r263;
    CPy_INCREF(CPyStatic_errorcodes___TYPEDDICT_UNKNOWN_KEY);
    cpy_r_r264 = CPyStatic_errorcodes___globals;
    cpy_r_r265 = CPyStatics[2096]; /* 'TYPEDDICT_UNKNOWN_KEY' */
    cpy_r_r266 = CPyDict_SetItem(cpy_r_r264, cpy_r_r265, cpy_r_r263);
    CPy_DECREF(cpy_r_r263);
    cpy_r_r267 = cpy_r_r266 >= 0;
    if (unlikely(!cpy_r_r267)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 98, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r268 = CPyStatics[2097]; /* 'has-type' */
    cpy_r_r269 = CPyStatics[2098]; /* 'Check that type of reference can be determined' */
    cpy_r_r270 = CPyStatics[2037]; /* 'General' */
    cpy_r_r271 = 2;
    cpy_r_r272 = NULL;
    cpy_r_r273 = CPyDef_errorcodes___ErrorCode(cpy_r_r268, cpy_r_r269, cpy_r_r270, cpy_r_r271, cpy_r_r272);
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 104, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___HAS_TYPE = cpy_r_r273;
    CPy_INCREF(CPyStatic_errorcodes___HAS_TYPE);
    cpy_r_r274 = CPyStatic_errorcodes___globals;
    cpy_r_r275 = CPyStatics[2099]; /* 'HAS_TYPE' */
    cpy_r_r276 = CPyDict_SetItem(cpy_r_r274, cpy_r_r275, cpy_r_r273);
    CPy_DECREF(cpy_r_r273);
    cpy_r_r277 = cpy_r_r276 >= 0;
    if (unlikely(!cpy_r_r277)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 104, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r278 = CPyStatics[2100]; /* 'import' */
    cpy_r_r279 = CPyStatics[2101]; /* 'Require that imported module can be found or has stubs' */
    cpy_r_r280 = CPyStatics[2037]; /* 'General' */
    cpy_r_r281 = 2;
    cpy_r_r282 = NULL;
    cpy_r_r283 = CPyDef_errorcodes___ErrorCode(cpy_r_r278, cpy_r_r279, cpy_r_r280, cpy_r_r281, cpy_r_r282);
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 107, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___IMPORT = cpy_r_r283;
    CPy_INCREF(CPyStatic_errorcodes___IMPORT);
    cpy_r_r284 = CPyStatic_errorcodes___globals;
    cpy_r_r285 = CPyStatics[2102]; /* 'IMPORT' */
    cpy_r_r286 = CPyDict_SetItem(cpy_r_r284, cpy_r_r285, cpy_r_r283);
    CPy_DECREF(cpy_r_r283);
    cpy_r_r287 = cpy_r_r286 >= 0;
    if (unlikely(!cpy_r_r287)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 107, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r288 = CPyStatics[2103]; /* 'no-redef' */
    cpy_r_r289 = CPyStatics[2104]; /* 'Check that each name is defined once' */
    cpy_r_r290 = CPyStatics[2037]; /* 'General' */
    cpy_r_r291 = 2;
    cpy_r_r292 = NULL;
    cpy_r_r293 = CPyDef_errorcodes___ErrorCode(cpy_r_r288, cpy_r_r289, cpy_r_r290, cpy_r_r291, cpy_r_r292);
    if (unlikely(cpy_r_r293 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 110, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___NO_REDEF = cpy_r_r293;
    CPy_INCREF(CPyStatic_errorcodes___NO_REDEF);
    cpy_r_r294 = CPyStatic_errorcodes___globals;
    cpy_r_r295 = CPyStatics[2105]; /* 'NO_REDEF' */
    cpy_r_r296 = CPyDict_SetItem(cpy_r_r294, cpy_r_r295, cpy_r_r293);
    CPy_DECREF(cpy_r_r293);
    cpy_r_r297 = cpy_r_r296 >= 0;
    if (unlikely(!cpy_r_r297)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 110, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r298 = CPyStatics[2106]; /* 'func-returns-value' */
    cpy_r_r299 = CPyStatics[2107]; /* ('Check that called function returns a value in value '
                                      'context') */
    cpy_r_r300 = CPyStatics[2037]; /* 'General' */
    cpy_r_r301 = 2;
    cpy_r_r302 = NULL;
    cpy_r_r303 = CPyDef_errorcodes___ErrorCode(cpy_r_r298, cpy_r_r299, cpy_r_r300, cpy_r_r301, cpy_r_r302);
    if (unlikely(cpy_r_r303 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 111, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___FUNC_RETURNS_VALUE = cpy_r_r303;
    CPy_INCREF(CPyStatic_errorcodes___FUNC_RETURNS_VALUE);
    cpy_r_r304 = CPyStatic_errorcodes___globals;
    cpy_r_r305 = CPyStatics[2108]; /* 'FUNC_RETURNS_VALUE' */
    cpy_r_r306 = CPyDict_SetItem(cpy_r_r304, cpy_r_r305, cpy_r_r303);
    CPy_DECREF(cpy_r_r303);
    cpy_r_r307 = cpy_r_r306 >= 0;
    if (unlikely(!cpy_r_r307)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 111, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r308 = CPyStatics[2109]; /* 'abstract' */
    cpy_r_r309 = CPyStatics[2110]; /* ('Prevent instantiation of classes with abstract '
                                      'attributes') */
    cpy_r_r310 = CPyStatics[2037]; /* 'General' */
    cpy_r_r311 = 2;
    cpy_r_r312 = NULL;
    cpy_r_r313 = CPyDef_errorcodes___ErrorCode(cpy_r_r308, cpy_r_r309, cpy_r_r310, cpy_r_r311, cpy_r_r312);
    if (unlikely(cpy_r_r313 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 114, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___ABSTRACT = cpy_r_r313;
    CPy_INCREF(CPyStatic_errorcodes___ABSTRACT);
    cpy_r_r314 = CPyStatic_errorcodes___globals;
    cpy_r_r315 = CPyStatics[2111]; /* 'ABSTRACT' */
    cpy_r_r316 = CPyDict_SetItem(cpy_r_r314, cpy_r_r315, cpy_r_r313);
    CPy_DECREF(cpy_r_r313);
    cpy_r_r317 = cpy_r_r316 >= 0;
    if (unlikely(!cpy_r_r317)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 114, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r318 = CPyStatics[2112]; /* 'type-abstract' */
    cpy_r_r319 = CPyStatics[2113]; /* ('Require only concrete classes where Type[...] is '
                                      'expected') */
    cpy_r_r320 = CPyStatics[2037]; /* 'General' */
    cpy_r_r321 = 2;
    cpy_r_r322 = NULL;
    cpy_r_r323 = CPyDef_errorcodes___ErrorCode(cpy_r_r318, cpy_r_r319, cpy_r_r320, cpy_r_r321, cpy_r_r322);
    if (unlikely(cpy_r_r323 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 117, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___TYPE_ABSTRACT = cpy_r_r323;
    CPy_INCREF(CPyStatic_errorcodes___TYPE_ABSTRACT);
    cpy_r_r324 = CPyStatic_errorcodes___globals;
    cpy_r_r325 = CPyStatics[2114]; /* 'TYPE_ABSTRACT' */
    cpy_r_r326 = CPyDict_SetItem(cpy_r_r324, cpy_r_r325, cpy_r_r323);
    CPy_DECREF(cpy_r_r323);
    cpy_r_r327 = cpy_r_r326 >= 0;
    if (unlikely(!cpy_r_r327)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 117, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r328 = CPyStatics[2115]; /* 'valid-newtype' */
    cpy_r_r329 = CPyStatics[2116]; /* 'Check that argument 2 to NewType is valid' */
    cpy_r_r330 = CPyStatics[2037]; /* 'General' */
    cpy_r_r331 = 2;
    cpy_r_r332 = NULL;
    cpy_r_r333 = CPyDef_errorcodes___ErrorCode(cpy_r_r328, cpy_r_r329, cpy_r_r330, cpy_r_r331, cpy_r_r332);
    if (unlikely(cpy_r_r333 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 120, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___VALID_NEWTYPE = cpy_r_r333;
    CPy_INCREF(CPyStatic_errorcodes___VALID_NEWTYPE);
    cpy_r_r334 = CPyStatic_errorcodes___globals;
    cpy_r_r335 = CPyStatics[2117]; /* 'VALID_NEWTYPE' */
    cpy_r_r336 = CPyDict_SetItem(cpy_r_r334, cpy_r_r335, cpy_r_r333);
    CPy_DECREF(cpy_r_r333);
    cpy_r_r337 = cpy_r_r336 >= 0;
    if (unlikely(!cpy_r_r337)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 120, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r338 = CPyStatics[2118]; /* 'str-format' */
    cpy_r_r339 = CPyStatics[2119]; /* ('Check that string formatting/interpolation is '
                                      'type-safe') */
    cpy_r_r340 = CPyStatics[2037]; /* 'General' */
    cpy_r_r341 = 2;
    cpy_r_r342 = NULL;
    cpy_r_r343 = CPyDef_errorcodes___ErrorCode(cpy_r_r338, cpy_r_r339, cpy_r_r340, cpy_r_r341, cpy_r_r342);
    if (unlikely(cpy_r_r343 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 123, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___STRING_FORMATTING = cpy_r_r343;
    CPy_INCREF(CPyStatic_errorcodes___STRING_FORMATTING);
    cpy_r_r344 = CPyStatic_errorcodes___globals;
    cpy_r_r345 = CPyStatics[2120]; /* 'STRING_FORMATTING' */
    cpy_r_r346 = CPyDict_SetItem(cpy_r_r344, cpy_r_r345, cpy_r_r343);
    CPy_DECREF(cpy_r_r343);
    cpy_r_r347 = cpy_r_r346 >= 0;
    if (unlikely(!cpy_r_r347)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 123, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r348 = CPyStatics[2121]; /* 'str-bytes-safe' */
    cpy_r_r349 = CPyStatics[2122]; /* ('Warn about implicit coercions related to bytes and '
                                      'string types') */
    cpy_r_r350 = CPyStatics[2037]; /* 'General' */
    cpy_r_r351 = 2;
    cpy_r_r352 = NULL;
    cpy_r_r353 = CPyDef_errorcodes___ErrorCode(cpy_r_r348, cpy_r_r349, cpy_r_r350, cpy_r_r351, cpy_r_r352);
    if (unlikely(cpy_r_r353 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 126, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___STR_BYTES_PY3 = cpy_r_r353;
    CPy_INCREF(CPyStatic_errorcodes___STR_BYTES_PY3);
    cpy_r_r354 = CPyStatic_errorcodes___globals;
    cpy_r_r355 = CPyStatics[2123]; /* 'STR_BYTES_PY3' */
    cpy_r_r356 = CPyDict_SetItem(cpy_r_r354, cpy_r_r355, cpy_r_r353);
    CPy_DECREF(cpy_r_r353);
    cpy_r_r357 = cpy_r_r356 >= 0;
    if (unlikely(!cpy_r_r357)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 126, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r358 = CPyStatics[2124]; /* 'exit-return' */
    cpy_r_r359 = CPyStatics[2125]; /* "Warn about too general return type for '__exit__'" */
    cpy_r_r360 = CPyStatics[2037]; /* 'General' */
    cpy_r_r361 = 2;
    cpy_r_r362 = NULL;
    cpy_r_r363 = CPyDef_errorcodes___ErrorCode(cpy_r_r358, cpy_r_r359, cpy_r_r360, cpy_r_r361, cpy_r_r362);
    if (unlikely(cpy_r_r363 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 129, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___EXIT_RETURN = cpy_r_r363;
    CPy_INCREF(CPyStatic_errorcodes___EXIT_RETURN);
    cpy_r_r364 = CPyStatic_errorcodes___globals;
    cpy_r_r365 = CPyStatics[2126]; /* 'EXIT_RETURN' */
    cpy_r_r366 = CPyDict_SetItem(cpy_r_r364, cpy_r_r365, cpy_r_r363);
    CPy_DECREF(cpy_r_r363);
    cpy_r_r367 = cpy_r_r366 >= 0;
    if (unlikely(!cpy_r_r367)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 129, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r368 = CPyStatics[2127]; /* 'literal-required' */
    cpy_r_r369 = CPyStatics[2128]; /* 'Check that value is a literal' */
    cpy_r_r370 = CPyStatics[2037]; /* 'General' */
    cpy_r_r371 = 2;
    cpy_r_r372 = NULL;
    cpy_r_r373 = CPyDef_errorcodes___ErrorCode(cpy_r_r368, cpy_r_r369, cpy_r_r370, cpy_r_r371, cpy_r_r372);
    if (unlikely(cpy_r_r373 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 132, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___LITERAL_REQ = cpy_r_r373;
    CPy_INCREF(CPyStatic_errorcodes___LITERAL_REQ);
    cpy_r_r374 = CPyStatic_errorcodes___globals;
    cpy_r_r375 = CPyStatics[2129]; /* 'LITERAL_REQ' */
    cpy_r_r376 = CPyDict_SetItem(cpy_r_r374, cpy_r_r375, cpy_r_r373);
    CPy_DECREF(cpy_r_r373);
    cpy_r_r377 = cpy_r_r376 >= 0;
    if (unlikely(!cpy_r_r377)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 132, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r378 = CPyStatics[2130]; /* 'unused-coroutine' */
    cpy_r_r379 = CPyStatics[2131]; /* 'Ensure that all coroutines are used' */
    cpy_r_r380 = CPyStatics[2037]; /* 'General' */
    cpy_r_r381 = 2;
    cpy_r_r382 = NULL;
    cpy_r_r383 = CPyDef_errorcodes___ErrorCode(cpy_r_r378, cpy_r_r379, cpy_r_r380, cpy_r_r381, cpy_r_r382);
    if (unlikely(cpy_r_r383 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 133, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___UNUSED_COROUTINE = cpy_r_r383;
    CPy_INCREF(CPyStatic_errorcodes___UNUSED_COROUTINE);
    cpy_r_r384 = CPyStatic_errorcodes___globals;
    cpy_r_r385 = CPyStatics[922]; /* 'UNUSED_COROUTINE' */
    cpy_r_r386 = CPyDict_SetItem(cpy_r_r384, cpy_r_r385, cpy_r_r383);
    CPy_DECREF(cpy_r_r383);
    cpy_r_r387 = cpy_r_r386 >= 0;
    if (unlikely(!cpy_r_r387)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 133, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r388 = CPyStatics[2132]; /* 'empty-body' */
    cpy_r_r389 = CPyStatics[2133]; /* ('A dedicated error code to opt out return errors for '
                                      'empty/trivial bodies') */
    cpy_r_r390 = CPyStatics[2037]; /* 'General' */
    cpy_r_r391 = 2;
    cpy_r_r392 = NULL;
    cpy_r_r393 = CPyDef_errorcodes___ErrorCode(cpy_r_r388, cpy_r_r389, cpy_r_r390, cpy_r_r391, cpy_r_r392);
    if (unlikely(cpy_r_r393 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 138, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___EMPTY_BODY = cpy_r_r393;
    CPy_INCREF(CPyStatic_errorcodes___EMPTY_BODY);
    cpy_r_r394 = CPyStatic_errorcodes___globals;
    cpy_r_r395 = CPyStatics[2134]; /* 'EMPTY_BODY' */
    cpy_r_r396 = CPyDict_SetItem(cpy_r_r394, cpy_r_r395, cpy_r_r393);
    CPy_DECREF(cpy_r_r393);
    cpy_r_r397 = cpy_r_r396 >= 0;
    if (unlikely(!cpy_r_r397)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 138, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r398 = CPyStatics[2135]; /* 'safe-super' */
    cpy_r_r399 = CPyStatics[2136]; /* ('Warn about calls to abstract methods with '
                                      'empty/trivial bodies') */
    cpy_r_r400 = CPyStatics[2037]; /* 'General' */
    cpy_r_r401 = 2;
    cpy_r_r402 = NULL;
    cpy_r_r403 = CPyDef_errorcodes___ErrorCode(cpy_r_r398, cpy_r_r399, cpy_r_r400, cpy_r_r401, cpy_r_r402);
    if (unlikely(cpy_r_r403 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 143, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___SAFE_SUPER = cpy_r_r403;
    CPy_INCREF(CPyStatic_errorcodes___SAFE_SUPER);
    cpy_r_r404 = CPyStatic_errorcodes___globals;
    cpy_r_r405 = CPyStatics[2137]; /* 'SAFE_SUPER' */
    cpy_r_r406 = CPyDict_SetItem(cpy_r_r404, cpy_r_r405, cpy_r_r403);
    CPy_DECREF(cpy_r_r403);
    cpy_r_r407 = cpy_r_r406 >= 0;
    if (unlikely(!cpy_r_r407)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 143, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r408 = CPyStatics[2138]; /* 'top-level-await' */
    cpy_r_r409 = CPyStatics[2139]; /* 'Warn about top level await expressions' */
    cpy_r_r410 = CPyStatics[2037]; /* 'General' */
    cpy_r_r411 = 2;
    cpy_r_r412 = NULL;
    cpy_r_r413 = CPyDef_errorcodes___ErrorCode(cpy_r_r408, cpy_r_r409, cpy_r_r410, cpy_r_r411, cpy_r_r412);
    if (unlikely(cpy_r_r413 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 146, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___TOP_LEVEL_AWAIT = cpy_r_r413;
    CPy_INCREF(CPyStatic_errorcodes___TOP_LEVEL_AWAIT);
    cpy_r_r414 = CPyStatic_errorcodes___globals;
    cpy_r_r415 = CPyStatics[2140]; /* 'TOP_LEVEL_AWAIT' */
    cpy_r_r416 = CPyDict_SetItem(cpy_r_r414, cpy_r_r415, cpy_r_r413);
    CPy_DECREF(cpy_r_r413);
    cpy_r_r417 = cpy_r_r416 >= 0;
    if (unlikely(!cpy_r_r417)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 146, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r418 = CPyStatics[2141]; /* 'no-untyped-def' */
    cpy_r_r419 = CPyStatics[2142]; /* 'Check that every function has an annotation' */
    cpy_r_r420 = CPyStatics[2037]; /* 'General' */
    cpy_r_r421 = 2;
    cpy_r_r422 = NULL;
    cpy_r_r423 = CPyDef_errorcodes___ErrorCode(cpy_r_r418, cpy_r_r419, cpy_r_r420, cpy_r_r421, cpy_r_r422);
    if (unlikely(cpy_r_r423 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 151, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___NO_UNTYPED_DEF = cpy_r_r423;
    CPy_INCREF(CPyStatic_errorcodes___NO_UNTYPED_DEF);
    cpy_r_r424 = CPyStatic_errorcodes___globals;
    cpy_r_r425 = CPyStatics[2143]; /* 'NO_UNTYPED_DEF' */
    cpy_r_r426 = CPyDict_SetItem(cpy_r_r424, cpy_r_r425, cpy_r_r423);
    CPy_DECREF(cpy_r_r423);
    cpy_r_r427 = cpy_r_r426 >= 0;
    if (unlikely(!cpy_r_r427)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 151, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r428 = CPyStatics[2144]; /* 'no-untyped-call' */
    cpy_r_r429 = CPyStatics[2145]; /* ('Disallow calling functions without type annotations '
                                      'from annotated functions') */
    cpy_r_r430 = CPyStatics[2037]; /* 'General' */
    cpy_r_r431 = 2;
    cpy_r_r432 = NULL;
    cpy_r_r433 = CPyDef_errorcodes___ErrorCode(cpy_r_r428, cpy_r_r429, cpy_r_r430, cpy_r_r431, cpy_r_r432);
    if (unlikely(cpy_r_r433 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 154, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___NO_UNTYPED_CALL = cpy_r_r433;
    CPy_INCREF(CPyStatic_errorcodes___NO_UNTYPED_CALL);
    cpy_r_r434 = CPyStatic_errorcodes___globals;
    cpy_r_r435 = CPyStatics[2146]; /* 'NO_UNTYPED_CALL' */
    cpy_r_r436 = CPyDict_SetItem(cpy_r_r434, cpy_r_r435, cpy_r_r433);
    CPy_DECREF(cpy_r_r433);
    cpy_r_r437 = cpy_r_r436 >= 0;
    if (unlikely(!cpy_r_r437)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 154, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r438 = CPyStatics[2147]; /* 'redundant-cast' */
    cpy_r_r439 = CPyStatics[2148]; /* 'Check that cast changes type of expression' */
    cpy_r_r440 = CPyStatics[2037]; /* 'General' */
    cpy_r_r441 = 2;
    cpy_r_r442 = NULL;
    cpy_r_r443 = CPyDef_errorcodes___ErrorCode(cpy_r_r438, cpy_r_r439, cpy_r_r440, cpy_r_r441, cpy_r_r442);
    if (unlikely(cpy_r_r443 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 159, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___REDUNDANT_CAST = cpy_r_r443;
    CPy_INCREF(CPyStatic_errorcodes___REDUNDANT_CAST);
    cpy_r_r444 = CPyStatic_errorcodes___globals;
    cpy_r_r445 = CPyStatics[2149]; /* 'REDUNDANT_CAST' */
    cpy_r_r446 = CPyDict_SetItem(cpy_r_r444, cpy_r_r445, cpy_r_r443);
    CPy_DECREF(cpy_r_r443);
    cpy_r_r447 = cpy_r_r446 >= 0;
    if (unlikely(!cpy_r_r447)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 159, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r448 = CPyStatics[2150]; /* 'assert-type' */
    cpy_r_r449 = CPyStatics[2151]; /* 'Check that assert_type() call succeeds' */
    cpy_r_r450 = CPyStatics[2037]; /* 'General' */
    cpy_r_r451 = 2;
    cpy_r_r452 = NULL;
    cpy_r_r453 = CPyDef_errorcodes___ErrorCode(cpy_r_r448, cpy_r_r449, cpy_r_r450, cpy_r_r451, cpy_r_r452);
    if (unlikely(cpy_r_r453 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 162, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___ASSERT_TYPE = cpy_r_r453;
    CPy_INCREF(CPyStatic_errorcodes___ASSERT_TYPE);
    cpy_r_r454 = CPyStatic_errorcodes___globals;
    cpy_r_r455 = CPyStatics[2152]; /* 'ASSERT_TYPE' */
    cpy_r_r456 = CPyDict_SetItem(cpy_r_r454, cpy_r_r455, cpy_r_r453);
    CPy_DECREF(cpy_r_r453);
    cpy_r_r457 = cpy_r_r456 >= 0;
    if (unlikely(!cpy_r_r457)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 162, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r458 = CPyStatics[2153]; /* 'comparison-overlap' */
    cpy_r_r459 = CPyStatics[2154]; /* ("Check that types in comparisons and 'in' expressions "
                                      'overlap') */
    cpy_r_r460 = CPyStatics[2037]; /* 'General' */
    cpy_r_r461 = 2;
    cpy_r_r462 = NULL;
    cpy_r_r463 = CPyDef_errorcodes___ErrorCode(cpy_r_r458, cpy_r_r459, cpy_r_r460, cpy_r_r461, cpy_r_r462);
    if (unlikely(cpy_r_r463 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 163, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___COMPARISON_OVERLAP = cpy_r_r463;
    CPy_INCREF(CPyStatic_errorcodes___COMPARISON_OVERLAP);
    cpy_r_r464 = CPyStatic_errorcodes___globals;
    cpy_r_r465 = CPyStatics[2155]; /* 'COMPARISON_OVERLAP' */
    cpy_r_r466 = CPyDict_SetItem(cpy_r_r464, cpy_r_r465, cpy_r_r463);
    CPy_DECREF(cpy_r_r463);
    cpy_r_r467 = cpy_r_r466 >= 0;
    if (unlikely(!cpy_r_r467)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 163, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r468 = CPyStatics[2156]; /* 'no-any-unimported' */
    cpy_r_r469 = CPyStatics[2157]; /* 'Reject "Any" types from unfollowed imports' */
    cpy_r_r470 = CPyStatics[2037]; /* 'General' */
    cpy_r_r471 = 2;
    cpy_r_r472 = NULL;
    cpy_r_r473 = CPyDef_errorcodes___ErrorCode(cpy_r_r468, cpy_r_r469, cpy_r_r470, cpy_r_r471, cpy_r_r472);
    if (unlikely(cpy_r_r473 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 166, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___NO_ANY_UNIMPORTED = cpy_r_r473;
    CPy_INCREF(CPyStatic_errorcodes___NO_ANY_UNIMPORTED);
    cpy_r_r474 = CPyStatic_errorcodes___globals;
    cpy_r_r475 = CPyStatics[2158]; /* 'NO_ANY_UNIMPORTED' */
    cpy_r_r476 = CPyDict_SetItem(cpy_r_r474, cpy_r_r475, cpy_r_r473);
    CPy_DECREF(cpy_r_r473);
    cpy_r_r477 = cpy_r_r476 >= 0;
    if (unlikely(!cpy_r_r477)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 166, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r478 = CPyStatics[2159]; /* 'no-any-return' */
    cpy_r_r479 = CPyStatics[2160]; /* ('Reject returning value with "Any" type if return '
                                      'type is not "Any"') */
    cpy_r_r480 = CPyStatics[2037]; /* 'General' */
    cpy_r_r481 = 2;
    cpy_r_r482 = NULL;
    cpy_r_r483 = CPyDef_errorcodes___ErrorCode(cpy_r_r478, cpy_r_r479, cpy_r_r480, cpy_r_r481, cpy_r_r482);
    if (unlikely(cpy_r_r483 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 169, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___NO_ANY_RETURN = cpy_r_r483;
    CPy_INCREF(CPyStatic_errorcodes___NO_ANY_RETURN);
    cpy_r_r484 = CPyStatic_errorcodes___globals;
    cpy_r_r485 = CPyStatics[2161]; /* 'NO_ANY_RETURN' */
    cpy_r_r486 = CPyDict_SetItem(cpy_r_r484, cpy_r_r485, cpy_r_r483);
    CPy_DECREF(cpy_r_r483);
    cpy_r_r487 = cpy_r_r486 >= 0;
    if (unlikely(!cpy_r_r487)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 169, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r488 = CPyStatics[115]; /* 'unreachable' */
    cpy_r_r489 = CPyStatics[2162]; /* 'Warn about unreachable statements or expressions' */
    cpy_r_r490 = CPyStatics[2037]; /* 'General' */
    cpy_r_r491 = 2;
    cpy_r_r492 = NULL;
    cpy_r_r493 = CPyDef_errorcodes___ErrorCode(cpy_r_r488, cpy_r_r489, cpy_r_r490, cpy_r_r491, cpy_r_r492);
    if (unlikely(cpy_r_r493 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 174, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___UNREACHABLE = cpy_r_r493;
    CPy_INCREF(CPyStatic_errorcodes___UNREACHABLE);
    cpy_r_r494 = CPyStatic_errorcodes___globals;
    cpy_r_r495 = CPyStatics[2163]; /* 'UNREACHABLE' */
    cpy_r_r496 = CPyDict_SetItem(cpy_r_r494, cpy_r_r495, cpy_r_r493);
    CPy_DECREF(cpy_r_r493);
    cpy_r_r497 = cpy_r_r496 >= 0;
    if (unlikely(!cpy_r_r497)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 174, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r498 = CPyStatics[2164]; /* 'annotation-unchecked' */
    cpy_r_r499 = CPyStatics[2165]; /* 'Notify about type annotations in unchecked functions' */
    cpy_r_r500 = CPyStatics[2037]; /* 'General' */
    cpy_r_r501 = 2;
    cpy_r_r502 = NULL;
    cpy_r_r503 = CPyDef_errorcodes___ErrorCode(cpy_r_r498, cpy_r_r499, cpy_r_r500, cpy_r_r501, cpy_r_r502);
    if (unlikely(cpy_r_r503 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 177, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r504 = CPyStatic_errorcodes___globals;
    cpy_r_r505 = CPyStatics[2166]; /* 'ANNOTATION_UNCHECKED' */
    cpy_r_r506 = CPyDict_SetItem(cpy_r_r504, cpy_r_r505, cpy_r_r503);
    CPy_DECREF(cpy_r_r503);
    cpy_r_r507 = cpy_r_r506 >= 0;
    if (unlikely(!cpy_r_r507)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 177, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r508 = CPyStatics[2167]; /* 'possibly-undefined' */
    cpy_r_r509 = CPyStatics[2168]; /* ('Warn about variables that are defined only in some '
                                      'execution paths') */
    cpy_r_r510 = CPyStatics[2037]; /* 'General' */
    cpy_r_r511 = NULL;
    cpy_r_r512 = CPyDef_errorcodes___ErrorCode(cpy_r_r508, cpy_r_r509, cpy_r_r510, 0, cpy_r_r511);
    if (unlikely(cpy_r_r512 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 180, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___POSSIBLY_UNDEFINED = cpy_r_r512;
    CPy_INCREF(CPyStatic_errorcodes___POSSIBLY_UNDEFINED);
    cpy_r_r513 = CPyStatic_errorcodes___globals;
    cpy_r_r514 = CPyStatics[2169]; /* 'POSSIBLY_UNDEFINED' */
    cpy_r_r515 = CPyDict_SetItem(cpy_r_r513, cpy_r_r514, cpy_r_r512);
    CPy_DECREF(cpy_r_r512);
    cpy_r_r516 = cpy_r_r515 >= 0;
    if (unlikely(!cpy_r_r516)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 180, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r517 = CPyStatics[2170]; /* 'redundant-expr' */
    cpy_r_r518 = CPyStatics[2171]; /* 'Warn about redundant expressions' */
    cpy_r_r519 = CPyStatics[2037]; /* 'General' */
    cpy_r_r520 = NULL;
    cpy_r_r521 = CPyDef_errorcodes___ErrorCode(cpy_r_r517, cpy_r_r518, cpy_r_r519, 0, cpy_r_r520);
    if (unlikely(cpy_r_r521 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 186, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___REDUNDANT_EXPR = cpy_r_r521;
    CPy_INCREF(CPyStatic_errorcodes___REDUNDANT_EXPR);
    cpy_r_r522 = CPyStatic_errorcodes___globals;
    cpy_r_r523 = CPyStatics[2172]; /* 'REDUNDANT_EXPR' */
    cpy_r_r524 = CPyDict_SetItem(cpy_r_r522, cpy_r_r523, cpy_r_r521);
    CPy_DECREF(cpy_r_r521);
    cpy_r_r525 = cpy_r_r524 >= 0;
    if (unlikely(!cpy_r_r525)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 186, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r526 = CPyStatics[2173]; /* 'truthy-bool' */
    cpy_r_r527 = CPyStatics[2174]; /* ('Warn about expressions that could always evaluate to '
                                      'true in boolean contexts') */
    cpy_r_r528 = CPyStatics[2037]; /* 'General' */
    cpy_r_r529 = NULL;
    cpy_r_r530 = CPyDef_errorcodes___ErrorCode(cpy_r_r526, cpy_r_r527, cpy_r_r528, 0, cpy_r_r529);
    if (unlikely(cpy_r_r530 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 189, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___TRUTHY_BOOL = cpy_r_r530;
    CPy_INCREF(CPyStatic_errorcodes___TRUTHY_BOOL);
    cpy_r_r531 = CPyStatic_errorcodes___globals;
    cpy_r_r532 = CPyStatics[2175]; /* 'TRUTHY_BOOL' */
    cpy_r_r533 = CPyDict_SetItem(cpy_r_r531, cpy_r_r532, cpy_r_r530);
    CPy_DECREF(cpy_r_r530);
    cpy_r_r534 = cpy_r_r533 >= 0;
    if (unlikely(!cpy_r_r534)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 189, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r535 = CPyStatics[2176]; /* 'truthy-function' */
    cpy_r_r536 = CPyStatics[2177]; /* ('Warn about function that always evaluate to true in '
                                      'boolean contexts') */
    cpy_r_r537 = CPyStatics[2037]; /* 'General' */
    cpy_r_r538 = 2;
    cpy_r_r539 = NULL;
    cpy_r_r540 = CPyDef_errorcodes___ErrorCode(cpy_r_r535, cpy_r_r536, cpy_r_r537, cpy_r_r538, cpy_r_r539);
    if (unlikely(cpy_r_r540 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 195, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___TRUTHY_FUNCTION = cpy_r_r540;
    CPy_INCREF(CPyStatic_errorcodes___TRUTHY_FUNCTION);
    cpy_r_r541 = CPyStatic_errorcodes___globals;
    cpy_r_r542 = CPyStatics[2178]; /* 'TRUTHY_FUNCTION' */
    cpy_r_r543 = CPyDict_SetItem(cpy_r_r541, cpy_r_r542, cpy_r_r540);
    CPy_DECREF(cpy_r_r540);
    cpy_r_r544 = cpy_r_r543 >= 0;
    if (unlikely(!cpy_r_r544)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 195, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r545 = CPyStatics[2179]; /* 'truthy-iterable' */
    cpy_r_r546 = CPyStatics[2180]; /* ('Warn about Iterable expressions that could always '
                                      'evaluate to true in boolean contexts') */
    cpy_r_r547 = CPyStatics[2037]; /* 'General' */
    cpy_r_r548 = NULL;
    cpy_r_r549 = CPyDef_errorcodes___ErrorCode(cpy_r_r545, cpy_r_r546, cpy_r_r547, 0, cpy_r_r548);
    if (unlikely(cpy_r_r549 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 200, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___TRUTHY_ITERABLE = cpy_r_r549;
    CPy_INCREF(CPyStatic_errorcodes___TRUTHY_ITERABLE);
    cpy_r_r550 = CPyStatic_errorcodes___globals;
    cpy_r_r551 = CPyStatics[2181]; /* 'TRUTHY_ITERABLE' */
    cpy_r_r552 = CPyDict_SetItem(cpy_r_r550, cpy_r_r551, cpy_r_r549);
    CPy_DECREF(cpy_r_r549);
    cpy_r_r553 = cpy_r_r552 >= 0;
    if (unlikely(!cpy_r_r553)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 200, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r554 = CPyStatics[2182]; /* 'name-match' */
    cpy_r_r555 = CPyStatics[2183]; /* 'Check that type definition has consistent naming' */
    cpy_r_r556 = CPyStatics[2037]; /* 'General' */
    cpy_r_r557 = 2;
    cpy_r_r558 = NULL;
    cpy_r_r559 = CPyDef_errorcodes___ErrorCode(cpy_r_r554, cpy_r_r555, cpy_r_r556, cpy_r_r557, cpy_r_r558);
    if (unlikely(cpy_r_r559 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 206, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___NAME_MATCH = cpy_r_r559;
    CPy_INCREF(CPyStatic_errorcodes___NAME_MATCH);
    cpy_r_r560 = CPyStatic_errorcodes___globals;
    cpy_r_r561 = CPyStatics[2184]; /* 'NAME_MATCH' */
    cpy_r_r562 = CPyDict_SetItem(cpy_r_r560, cpy_r_r561, cpy_r_r559);
    CPy_DECREF(cpy_r_r559);
    cpy_r_r563 = cpy_r_r562 >= 0;
    if (unlikely(!cpy_r_r563)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 206, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r564 = CPyStatics[2185]; /* 'no-overload-impl' */
    cpy_r_r565 = CPyStatics[2186]; /* ('Check that overloaded functions outside stub files '
                                      'have an implementation') */
    cpy_r_r566 = CPyStatics[2037]; /* 'General' */
    cpy_r_r567 = 2;
    cpy_r_r568 = NULL;
    cpy_r_r569 = CPyDef_errorcodes___ErrorCode(cpy_r_r564, cpy_r_r565, cpy_r_r566, cpy_r_r567, cpy_r_r568);
    if (unlikely(cpy_r_r569 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 209, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___NO_OVERLOAD_IMPL = cpy_r_r569;
    CPy_INCREF(CPyStatic_errorcodes___NO_OVERLOAD_IMPL);
    cpy_r_r570 = CPyStatic_errorcodes___globals;
    cpy_r_r571 = CPyStatics[2187]; /* 'NO_OVERLOAD_IMPL' */
    cpy_r_r572 = CPyDict_SetItem(cpy_r_r570, cpy_r_r571, cpy_r_r569);
    CPy_DECREF(cpy_r_r569);
    cpy_r_r573 = cpy_r_r572 >= 0;
    if (unlikely(!cpy_r_r573)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 209, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r574 = CPyStatics[2188]; /* 'ignore-without-code' */
    cpy_r_r575 = CPyStatics[2189]; /* ("Warn about '# type: ignore' comments which do not "
                                      'have error codes') */
    cpy_r_r576 = CPyStatics[2037]; /* 'General' */
    cpy_r_r577 = NULL;
    cpy_r_r578 = CPyDef_errorcodes___ErrorCode(cpy_r_r574, cpy_r_r575, cpy_r_r576, 0, cpy_r_r577);
    if (unlikely(cpy_r_r578 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 214, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___IGNORE_WITHOUT_CODE = cpy_r_r578;
    CPy_INCREF(CPyStatic_errorcodes___IGNORE_WITHOUT_CODE);
    cpy_r_r579 = CPyStatic_errorcodes___globals;
    cpy_r_r580 = CPyStatics[2190]; /* 'IGNORE_WITHOUT_CODE' */
    cpy_r_r581 = CPyDict_SetItem(cpy_r_r579, cpy_r_r580, cpy_r_r578);
    CPy_DECREF(cpy_r_r578);
    cpy_r_r582 = cpy_r_r581 >= 0;
    if (unlikely(!cpy_r_r582)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 214, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r583 = CPyStatics[2191]; /* 'unused-awaitable' */
    cpy_r_r584 = CPyStatics[2192]; /* 'Ensure that all awaitable values are used' */
    cpy_r_r585 = CPyStatics[2037]; /* 'General' */
    cpy_r_r586 = NULL;
    cpy_r_r587 = CPyDef_errorcodes___ErrorCode(cpy_r_r583, cpy_r_r584, cpy_r_r585, 0, cpy_r_r586);
    if (unlikely(cpy_r_r587 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 220, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___UNUSED_AWAITABLE = cpy_r_r587;
    CPy_INCREF(CPyStatic_errorcodes___UNUSED_AWAITABLE);
    cpy_r_r588 = CPyStatic_errorcodes___globals;
    cpy_r_r589 = CPyStatics[921]; /* 'UNUSED_AWAITABLE' */
    cpy_r_r590 = CPyDict_SetItem(cpy_r_r588, cpy_r_r589, cpy_r_r587);
    CPy_DECREF(cpy_r_r587);
    cpy_r_r591 = cpy_r_r590 >= 0;
    if (unlikely(!cpy_r_r591)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 220, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r592 = CPyStatics[2193]; /* 'redundant-self' */
    cpy_r_r593 = CPyStatics[2194]; /* ('Warn about redundant Self type annotations on method '
                                      'first argument') */
    cpy_r_r594 = CPyStatics[2037]; /* 'General' */
    cpy_r_r595 = NULL;
    cpy_r_r596 = CPyDef_errorcodes___ErrorCode(cpy_r_r592, cpy_r_r593, cpy_r_r594, 0, cpy_r_r595);
    if (unlikely(cpy_r_r596 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 226, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r597 = CPyStatic_errorcodes___globals;
    cpy_r_r598 = CPyStatics[2195]; /* 'REDUNDANT_SELF_TYPE' */
    cpy_r_r599 = CPyDict_SetItem(cpy_r_r597, cpy_r_r598, cpy_r_r596);
    CPy_DECREF(cpy_r_r596);
    cpy_r_r600 = cpy_r_r599 >= 0;
    if (unlikely(!cpy_r_r600)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 226, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r601 = CPyStatics[2196]; /* 'used-before-def' */
    cpy_r_r602 = CPyStatics[2197]; /* ('Warn about variables that are used before they are '
                                      'defined') */
    cpy_r_r603 = CPyStatics[2037]; /* 'General' */
    cpy_r_r604 = 2;
    cpy_r_r605 = NULL;
    cpy_r_r606 = CPyDef_errorcodes___ErrorCode(cpy_r_r601, cpy_r_r602, cpy_r_r603, cpy_r_r604, cpy_r_r605);
    if (unlikely(cpy_r_r606 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 232, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___USED_BEFORE_DEF = cpy_r_r606;
    CPy_INCREF(CPyStatic_errorcodes___USED_BEFORE_DEF);
    cpy_r_r607 = CPyStatic_errorcodes___globals;
    cpy_r_r608 = CPyStatics[2198]; /* 'USED_BEFORE_DEF' */
    cpy_r_r609 = CPyDict_SetItem(cpy_r_r607, cpy_r_r608, cpy_r_r606);
    CPy_DECREF(cpy_r_r606);
    cpy_r_r610 = cpy_r_r609 >= 0;
    if (unlikely(!cpy_r_r610)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 232, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r611 = CPyStatics[2199]; /* 'unused-ignore' */
    cpy_r_r612 = CPyStatics[2200]; /* 'Ensure that all type ignores are used' */
    cpy_r_r613 = CPyStatics[2037]; /* 'General' */
    cpy_r_r614 = NULL;
    cpy_r_r615 = CPyDef_errorcodes___ErrorCode(cpy_r_r611, cpy_r_r612, cpy_r_r613, 0, cpy_r_r614);
    if (unlikely(cpy_r_r615 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 235, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___UNUSED_IGNORE = cpy_r_r615;
    CPy_INCREF(CPyStatic_errorcodes___UNUSED_IGNORE);
    cpy_r_r616 = CPyStatic_errorcodes___globals;
    cpy_r_r617 = CPyStatics[2201]; /* 'UNUSED_IGNORE' */
    cpy_r_r618 = CPyDict_SetItem(cpy_r_r616, cpy_r_r617, cpy_r_r615);
    CPy_DECREF(cpy_r_r615);
    cpy_r_r619 = cpy_r_r618 >= 0;
    if (unlikely(!cpy_r_r619)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 235, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r620 = CPyStatics[2202]; /* 'explicit-override' */
    cpy_r_r621 = CPyStatics[2203]; /* ('Require @override decorator if method is overriding '
                                      'a base class method') */
    cpy_r_r622 = CPyStatics[2037]; /* 'General' */
    cpy_r_r623 = NULL;
    cpy_r_r624 = CPyDef_errorcodes___ErrorCode(cpy_r_r620, cpy_r_r621, cpy_r_r622, 0, cpy_r_r623);
    if (unlikely(cpy_r_r624 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 238, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___EXPLICIT_OVERRIDE_REQUIRED = cpy_r_r624;
    CPy_INCREF(CPyStatic_errorcodes___EXPLICIT_OVERRIDE_REQUIRED);
    cpy_r_r625 = CPyStatic_errorcodes___globals;
    cpy_r_r626 = CPyStatics[2204]; /* 'EXPLICIT_OVERRIDE_REQUIRED' */
    cpy_r_r627 = CPyDict_SetItem(cpy_r_r625, cpy_r_r626, cpy_r_r624);
    CPy_DECREF(cpy_r_r624);
    cpy_r_r628 = cpy_r_r627 >= 0;
    if (unlikely(!cpy_r_r628)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 238, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r629 = CPyStatics[2205]; /* 'syntax' */
    cpy_r_r630 = CPyStatics[2206]; /* 'Report syntax errors' */
    cpy_r_r631 = CPyStatics[2037]; /* 'General' */
    cpy_r_r632 = 2;
    cpy_r_r633 = NULL;
    cpy_r_r634 = CPyDef_errorcodes___ErrorCode(cpy_r_r629, cpy_r_r630, cpy_r_r631, cpy_r_r632, cpy_r_r633);
    if (unlikely(cpy_r_r634 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 247, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___SYNTAX = cpy_r_r634;
    CPy_INCREF(CPyStatic_errorcodes___SYNTAX);
    cpy_r_r635 = CPyStatic_errorcodes___globals;
    cpy_r_r636 = CPyStatics[2207]; /* 'SYNTAX' */
    cpy_r_r637 = CPyDict_SetItem(cpy_r_r635, cpy_r_r636, cpy_r_r634);
    CPy_DECREF(cpy_r_r634);
    cpy_r_r638 = cpy_r_r637 >= 0;
    if (unlikely(!cpy_r_r638)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 247, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r639 = CPyStatics[191]; /* 'file' */
    cpy_r_r640 = CPyStatics[2208]; /* 'Internal marker for a whole file being ignored' */
    cpy_r_r641 = CPyStatics[2037]; /* 'General' */
    cpy_r_r642 = 2;
    cpy_r_r643 = NULL;
    cpy_r_r644 = CPyDef_errorcodes___ErrorCode(cpy_r_r639, cpy_r_r640, cpy_r_r641, cpy_r_r642, cpy_r_r643);
    if (unlikely(cpy_r_r644 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 251, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___FILE = cpy_r_r644;
    CPy_INCREF(CPyStatic_errorcodes___FILE);
    cpy_r_r645 = CPyStatic_errorcodes___globals;
    cpy_r_r646 = CPyStatics[1804]; /* 'FILE' */
    cpy_r_r647 = CPyDict_SetItem(cpy_r_r645, cpy_r_r646, cpy_r_r644);
    CPy_DECREF(cpy_r_r644);
    cpy_r_r648 = cpy_r_r647 >= 0;
    if (unlikely(!cpy_r_r648)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 251, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r649 = CPyStatic_errorcodes___globals;
    cpy_r_r650 = CPyStatics[1490]; /* 'error_codes' */
    cpy_r_r651 = CPyDict_GetItem(cpy_r_r649, cpy_r_r650);
    if (unlikely(cpy_r_r651 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 252, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    if (likely(PyDict_Check(cpy_r_r651)))
        cpy_r_r652 = cpy_r_r651;
    else {
        CPy_TypeErrorTraceback("mypy/errorcodes.py", "<module>", 252, CPyStatic_errorcodes___globals, "dict", cpy_r_r651);
        goto CPyL154;
    }
    cpy_r_r653 = CPyStatic_errorcodes___FILE;
    if (unlikely(cpy_r_r653 == NULL)) {
        goto CPyL156;
    } else
        goto CPyL149;
CPyL147: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"FILE\" was not set");
    cpy_r_r654 = 0;
    if (unlikely(!cpy_r_r654)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 252, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPy_Unreachable();
CPyL149: ;
    cpy_r_r655 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_r653)->_code;
    if (unlikely(cpy_r_r655 == NULL)) {
        CPy_AttributeError("mypy/errorcodes.py", "<module>", "ErrorCode", "code", 252, CPyStatic_errorcodes___globals);
        goto CPyL157;
    }
    CPy_INCREF(cpy_r_r655);
CPyL150: ;
    cpy_r_r656 = PyObject_DelItem(cpy_r_r652, cpy_r_r655);
    CPy_DECREF(cpy_r_r652);
    CPy_DECREF(cpy_r_r655);
    cpy_r_r657 = cpy_r_r656 >= 0;
    if (unlikely(!cpy_r_r657)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 252, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    cpy_r_r658 = CPyStatics[2209]; /* 'misc' */
    cpy_r_r659 = CPyStatics[2210]; /* 'Miscellaneous other checks' */
    cpy_r_r660 = CPyStatics[2037]; /* 'General' */
    cpy_r_r661 = 2;
    cpy_r_r662 = NULL;
    cpy_r_r663 = CPyDef_errorcodes___ErrorCode(cpy_r_r658, cpy_r_r659, cpy_r_r660, cpy_r_r661, cpy_r_r662);
    if (unlikely(cpy_r_r663 == NULL)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 255, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    CPyStatic_errorcodes___MISC = cpy_r_r663;
    CPy_INCREF(CPyStatic_errorcodes___MISC);
    cpy_r_r664 = CPyStatic_errorcodes___globals;
    cpy_r_r665 = CPyStatics[2211]; /* 'MISC' */
    cpy_r_r666 = CPyDict_SetItem(cpy_r_r664, cpy_r_r665, cpy_r_r663);
    CPy_DECREF(cpy_r_r663);
    cpy_r_r667 = cpy_r_r666 >= 0;
    if (unlikely(!cpy_r_r667)) {
        CPy_AddTraceback("mypy/errorcodes.py", "<module>", 255, CPyStatic_errorcodes___globals);
        goto CPyL154;
    }
    return 1;
CPyL154: ;
    cpy_r_r668 = 2;
    return cpy_r_r668;
CPyL155: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL154;
CPyL156: ;
    CPy_DecRef(cpy_r_r652);
    goto CPyL147;
CPyL157: ;
    CPy_DecRef(cpy_r_r652);
    goto CPyL154;
}
