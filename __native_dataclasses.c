#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
dataclasses___DataclassAttribute_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *dataclasses___DataclassAttribute_setup(PyTypeObject *type);
PyObject *CPyDef_dataclasses___DataclassAttribute(PyObject *cpy_r_name, PyObject *cpy_r_alias, char cpy_r_is_in_init, char cpy_r_is_init_var, char cpy_r_has_default, CPyTagged cpy_r_line, CPyTagged cpy_r_column, PyObject *cpy_r_type, PyObject *cpy_r_info, char cpy_r_kw_only, char cpy_r_is_neither_frozen_nor_nonfrozen, PyObject *cpy_r_api);

static PyObject *
dataclasses___DataclassAttribute_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataclasses___DataclassAttribute) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = dataclasses___DataclassAttribute_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_dataclasses___DataclassAttribute_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
dataclasses___DataclassAttribute_traverse(mypy___plugins___dataclasses___DataclassAttributeObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_name);
    Py_VISIT(self->_alias);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    if (CPyTagged_CheckLong(self->_column)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_column));
    }
    Py_VISIT(self->_type);
    Py_VISIT(self->_info);
    Py_VISIT(self->__api);
    return 0;
}

static int
dataclasses___DataclassAttribute_clear(mypy___plugins___dataclasses___DataclassAttributeObject *self)
{
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_alias);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_column)) {
        CPyTagged __tmp = self->_column;
        self->_column = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_info);
    Py_CLEAR(self->__api);
    return 0;
}

static void
dataclasses___DataclassAttribute_dealloc(mypy___plugins___dataclasses___DataclassAttributeObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataclasses___DataclassAttribute_dealloc)
    dataclasses___DataclassAttribute_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataclasses___DataclassAttribute_vtable[7];
static bool
CPyDef_dataclasses___DataclassAttribute_trait_vtable_setup(void)
{
    CPyVTableItem dataclasses___DataclassAttribute_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dataclasses___DataclassAttribute_____init__,
        (CPyVTableItem)CPyDef_dataclasses___DataclassAttribute___to_argument,
        (CPyVTableItem)CPyDef_dataclasses___DataclassAttribute___expand_type,
        (CPyVTableItem)CPyDef_dataclasses___DataclassAttribute___to_var,
        (CPyVTableItem)CPyDef_dataclasses___DataclassAttribute___serialize,
        (CPyVTableItem)CPyDef_dataclasses___DataclassAttribute___deserialize,
        (CPyVTableItem)CPyDef_dataclasses___DataclassAttribute___expand_typevar_from_subtype,
    };
    memcpy(dataclasses___DataclassAttribute_vtable, dataclasses___DataclassAttribute_vtable_scratch, sizeof(dataclasses___DataclassAttribute_vtable));
    return 1;
}

static PyObject *
dataclasses___DataclassAttribute_get_name(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure);
static int
dataclasses___DataclassAttribute_set_name(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure);
static PyObject *
dataclasses___DataclassAttribute_get_alias(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure);
static int
dataclasses___DataclassAttribute_set_alias(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure);
static PyObject *
dataclasses___DataclassAttribute_get_is_in_init(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure);
static int
dataclasses___DataclassAttribute_set_is_in_init(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure);
static PyObject *
dataclasses___DataclassAttribute_get_is_init_var(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure);
static int
dataclasses___DataclassAttribute_set_is_init_var(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure);
static PyObject *
dataclasses___DataclassAttribute_get_has_default(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure);
static int
dataclasses___DataclassAttribute_set_has_default(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure);
static PyObject *
dataclasses___DataclassAttribute_get_line(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure);
static int
dataclasses___DataclassAttribute_set_line(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure);
static PyObject *
dataclasses___DataclassAttribute_get_column(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure);
static int
dataclasses___DataclassAttribute_set_column(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure);
static PyObject *
dataclasses___DataclassAttribute_get_type(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure);
static int
dataclasses___DataclassAttribute_set_type(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure);
static PyObject *
dataclasses___DataclassAttribute_get_info(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure);
static int
dataclasses___DataclassAttribute_set_info(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure);
static PyObject *
dataclasses___DataclassAttribute_get_kw_only(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure);
static int
dataclasses___DataclassAttribute_set_kw_only(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure);
static PyObject *
dataclasses___DataclassAttribute_get_is_neither_frozen_nor_nonfrozen(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure);
static int
dataclasses___DataclassAttribute_set_is_neither_frozen_nor_nonfrozen(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure);
static PyObject *
dataclasses___DataclassAttribute_get__api(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure);
static int
dataclasses___DataclassAttribute_set__api(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure);

static PyGetSetDef dataclasses___DataclassAttribute_getseters[] = {
    {"name",
     (getter)dataclasses___DataclassAttribute_get_name, (setter)dataclasses___DataclassAttribute_set_name,
     NULL, NULL},
    {"alias",
     (getter)dataclasses___DataclassAttribute_get_alias, (setter)dataclasses___DataclassAttribute_set_alias,
     NULL, NULL},
    {"is_in_init",
     (getter)dataclasses___DataclassAttribute_get_is_in_init, (setter)dataclasses___DataclassAttribute_set_is_in_init,
     NULL, NULL},
    {"is_init_var",
     (getter)dataclasses___DataclassAttribute_get_is_init_var, (setter)dataclasses___DataclassAttribute_set_is_init_var,
     NULL, NULL},
    {"has_default",
     (getter)dataclasses___DataclassAttribute_get_has_default, (setter)dataclasses___DataclassAttribute_set_has_default,
     NULL, NULL},
    {"line",
     (getter)dataclasses___DataclassAttribute_get_line, (setter)dataclasses___DataclassAttribute_set_line,
     NULL, NULL},
    {"column",
     (getter)dataclasses___DataclassAttribute_get_column, (setter)dataclasses___DataclassAttribute_set_column,
     NULL, NULL},
    {"type",
     (getter)dataclasses___DataclassAttribute_get_type, (setter)dataclasses___DataclassAttribute_set_type,
     NULL, NULL},
    {"info",
     (getter)dataclasses___DataclassAttribute_get_info, (setter)dataclasses___DataclassAttribute_set_info,
     NULL, NULL},
    {"kw_only",
     (getter)dataclasses___DataclassAttribute_get_kw_only, (setter)dataclasses___DataclassAttribute_set_kw_only,
     NULL, NULL},
    {"is_neither_frozen_nor_nonfrozen",
     (getter)dataclasses___DataclassAttribute_get_is_neither_frozen_nor_nonfrozen, (setter)dataclasses___DataclassAttribute_set_is_neither_frozen_nor_nonfrozen,
     NULL, NULL},
    {"_api",
     (getter)dataclasses___DataclassAttribute_get__api, (setter)dataclasses___DataclassAttribute_set__api,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef dataclasses___DataclassAttribute_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_dataclasses___DataclassAttribute_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"to_argument",
     (PyCFunction)CPyPy_dataclasses___DataclassAttribute___to_argument,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"expand_type",
     (PyCFunction)CPyPy_dataclasses___DataclassAttribute___expand_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"to_var",
     (PyCFunction)CPyPy_dataclasses___DataclassAttribute___to_var,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serialize",
     (PyCFunction)CPyPy_dataclasses___DataclassAttribute___serialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"deserialize",
     (PyCFunction)CPyPy_dataclasses___DataclassAttribute___deserialize,
     METH_FASTCALL | METH_KEYWORDS | METH_CLASS, NULL},
    {"expand_typevar_from_subtype",
     (PyCFunction)CPyPy_dataclasses___DataclassAttribute___expand_typevar_from_subtype,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataclasses___DataclassAttribute_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "DataclassAttribute",
    .tp_new = dataclasses___DataclassAttribute_new,
    .tp_dealloc = (destructor)dataclasses___DataclassAttribute_dealloc,
    .tp_traverse = (traverseproc)dataclasses___DataclassAttribute_traverse,
    .tp_clear = (inquiry)dataclasses___DataclassAttribute_clear,
    .tp_getset = dataclasses___DataclassAttribute_getseters,
    .tp_methods = dataclasses___DataclassAttribute_methods,
    .tp_init = dataclasses___DataclassAttribute_init,
    .tp_basicsize = sizeof(mypy___plugins___dataclasses___DataclassAttributeObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dataclasses___DataclassAttribute_template = &CPyType_dataclasses___DataclassAttribute_template_;

static PyObject *
dataclasses___DataclassAttribute_setup(PyTypeObject *type)
{
    mypy___plugins___dataclasses___DataclassAttributeObject *self;
    self = (mypy___plugins___dataclasses___DataclassAttributeObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataclasses___DataclassAttribute_vtable;
    self->_is_in_init = 2;
    self->_is_init_var = 2;
    self->_has_default = 2;
    self->_line = CPY_INT_TAG;
    self->_column = CPY_INT_TAG;
    self->_kw_only = 2;
    self->_is_neither_frozen_nor_nonfrozen = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_dataclasses___DataclassAttribute(PyObject *cpy_r_name, PyObject *cpy_r_alias, char cpy_r_is_in_init, char cpy_r_is_init_var, char cpy_r_has_default, CPyTagged cpy_r_line, CPyTagged cpy_r_column, PyObject *cpy_r_type, PyObject *cpy_r_info, char cpy_r_kw_only, char cpy_r_is_neither_frozen_nor_nonfrozen, PyObject *cpy_r_api)
{
    PyObject *self = dataclasses___DataclassAttribute_setup(CPyType_dataclasses___DataclassAttribute);
    if (self == NULL)
        return NULL;
    char res = CPyDef_dataclasses___DataclassAttribute_____init__(self, cpy_r_name, cpy_r_alias, cpy_r_is_in_init, cpy_r_is_init_var, cpy_r_has_default, cpy_r_line, cpy_r_column, cpy_r_type, cpy_r_info, cpy_r_kw_only, cpy_r_is_neither_frozen_nor_nonfrozen, cpy_r_api);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
dataclasses___DataclassAttribute_get_name(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure)
{
    if (unlikely(self->_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'name' of 'DataclassAttribute' undefined");
        return NULL;
    }
    CPy_INCREF(self->_name);
    PyObject *retval = self->_name;
    return retval;
}

static int
dataclasses___DataclassAttribute_set_name(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataclassAttribute' object attribute 'name' cannot be deleted");
        return -1;
    }
    if (self->_name != NULL) {
        CPy_DECREF(self->_name);
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
    self->_name = tmp;
    return 0;
}

static PyObject *
dataclasses___DataclassAttribute_get_alias(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure)
{
    if (unlikely(self->_alias == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'alias' of 'DataclassAttribute' undefined");
        return NULL;
    }
    CPy_INCREF(self->_alias);
    PyObject *retval = self->_alias;
    return retval;
}

static int
dataclasses___DataclassAttribute_set_alias(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataclassAttribute' object attribute 'alias' cannot be deleted");
        return -1;
    }
    if (self->_alias != NULL) {
        CPy_DECREF(self->_alias);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4800;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4800;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL4800: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_alias = tmp;
    return 0;
}

static PyObject *
dataclasses___DataclassAttribute_get_is_in_init(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure)
{
    PyObject *retval = self->_is_in_init ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
dataclasses___DataclassAttribute_set_is_in_init(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataclassAttribute' object attribute 'is_in_init' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_in_init = tmp;
    return 0;
}

static PyObject *
dataclasses___DataclassAttribute_get_is_init_var(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure)
{
    PyObject *retval = self->_is_init_var ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
dataclasses___DataclassAttribute_set_is_init_var(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataclassAttribute' object attribute 'is_init_var' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_init_var = tmp;
    return 0;
}

static PyObject *
dataclasses___DataclassAttribute_get_has_default(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure)
{
    PyObject *retval = self->_has_default ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
dataclasses___DataclassAttribute_set_has_default(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataclassAttribute' object attribute 'has_default' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_has_default = tmp;
    return 0;
}

static PyObject *
dataclasses___DataclassAttribute_get_line(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure)
{
    if (unlikely(self->_line == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'line' of 'DataclassAttribute' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_line);
    PyObject *retval = CPyTagged_StealAsObject(self->_line);
    return retval;
}

static int
dataclasses___DataclassAttribute_set_line(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataclassAttribute' object attribute 'line' cannot be deleted");
        return -1;
    }
    if (self->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_line);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_line = tmp;
    return 0;
}

static PyObject *
dataclasses___DataclassAttribute_get_column(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure)
{
    if (unlikely(self->_column == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'column' of 'DataclassAttribute' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_column);
    PyObject *retval = CPyTagged_StealAsObject(self->_column);
    return retval;
}

static int
dataclasses___DataclassAttribute_set_column(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataclassAttribute' object attribute 'column' cannot be deleted");
        return -1;
    }
    if (self->_column != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_column);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_column = tmp;
    return 0;
}

static PyObject *
dataclasses___DataclassAttribute_get_type(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure)
{
    if (unlikely(self->_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'type' of 'DataclassAttribute' undefined");
        return NULL;
    }
    CPy_INCREF(self->_type);
    PyObject *retval = self->_type;
    return retval;
}

static int
dataclasses___DataclassAttribute_set_type(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataclassAttribute' object attribute 'type' cannot be deleted");
        return -1;
    }
    if (self->_type != NULL) {
        CPy_DECREF(self->_type);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_types___Type))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4801;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4801;
    CPy_TypeError("mypy.types.Type or None", value); 
    tmp = NULL;
__LL4801: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_type = tmp;
    return 0;
}

static PyObject *
dataclasses___DataclassAttribute_get_info(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure)
{
    if (unlikely(self->_info == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'info' of 'DataclassAttribute' undefined");
        return NULL;
    }
    CPy_INCREF(self->_info);
    PyObject *retval = self->_info;
    return retval;
}

static int
dataclasses___DataclassAttribute_set_info(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataclassAttribute' object attribute 'info' cannot be deleted");
        return -1;
    }
    if (self->_info != NULL) {
        CPy_DECREF(self->_info);
    }
    PyObject *tmp;
    if (likely((Py_TYPE(value) == CPyType_nodes___FakeInfo) || (Py_TYPE(value) == CPyType_nodes___TypeInfo)))
        tmp = value;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_info = tmp;
    return 0;
}

static PyObject *
dataclasses___DataclassAttribute_get_kw_only(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure)
{
    PyObject *retval = self->_kw_only ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
dataclasses___DataclassAttribute_set_kw_only(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataclassAttribute' object attribute 'kw_only' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_kw_only = tmp;
    return 0;
}

static PyObject *
dataclasses___DataclassAttribute_get_is_neither_frozen_nor_nonfrozen(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure)
{
    PyObject *retval = self->_is_neither_frozen_nor_nonfrozen ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
dataclasses___DataclassAttribute_set_is_neither_frozen_nor_nonfrozen(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataclassAttribute' object attribute 'is_neither_frozen_nor_nonfrozen' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_neither_frozen_nor_nonfrozen = tmp;
    return 0;
}

static PyObject *
dataclasses___DataclassAttribute_get__api(mypy___plugins___dataclasses___DataclassAttributeObject *self, void *closure)
{
    if (unlikely(self->__api == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_api' of 'DataclassAttribute' undefined");
        return NULL;
    }
    CPy_INCREF(self->__api);
    PyObject *retval = self->__api;
    return retval;
}

static int
dataclasses___DataclassAttribute_set__api(mypy___plugins___dataclasses___DataclassAttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataclassAttribute' object attribute '_api' cannot be deleted");
        return -1;
    }
    if (self->__api != NULL) {
        CPy_DECREF(self->__api);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_semanal___SemanticAnalyzer))
        tmp = value;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__api = tmp;
    return 0;
}

static int
dataclasses___DataclassTransformer_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *dataclasses___DataclassTransformer_setup(PyTypeObject *type);
PyObject *CPyDef_dataclasses___DataclassTransformer(PyObject *cpy_r_cls, PyObject *cpy_r_reason, PyObject *cpy_r_spec, PyObject *cpy_r_api);

static PyObject *
dataclasses___DataclassTransformer_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataclasses___DataclassTransformer) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = dataclasses___DataclassTransformer_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_dataclasses___DataclassTransformer_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
dataclasses___DataclassTransformer_traverse(mypy___plugins___dataclasses___DataclassTransformerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->__cls);
    Py_VISIT(self->__reason);
    Py_VISIT(self->__spec);
    Py_VISIT(self->__api);
    return 0;
}

static int
dataclasses___DataclassTransformer_clear(mypy___plugins___dataclasses___DataclassTransformerObject *self)
{
    Py_CLEAR(self->__cls);
    Py_CLEAR(self->__reason);
    Py_CLEAR(self->__spec);
    Py_CLEAR(self->__api);
    return 0;
}

static void
dataclasses___DataclassTransformer_dealloc(mypy___plugins___dataclasses___DataclassTransformerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataclasses___DataclassTransformer_dealloc)
    dataclasses___DataclassTransformer_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataclasses___DataclassTransformer_vtable[17];
static bool
CPyDef_dataclasses___DataclassTransformer_trait_vtable_setup(void)
{
    CPyVTableItem dataclasses___DataclassTransformer_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer_____init__,
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer___transform,
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer____add_internal_replace_method,
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer____add_internal_post_init_method,
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer___add_slots,
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer___reset_init_only_vars,
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer____get_assignment_statements_from_if_statement,
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer____get_assignment_statements_from_block,
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer___collect_attributes,
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer____freeze,
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer____propertize_callables,
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer____is_kw_only_type,
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer____add_dataclass_fields_magic_attribute,
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer____collect_field_args,
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer____get_bool_arg,
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer____get_default_init_value_for_field_specifier,
        (CPyVTableItem)CPyDef_dataclasses___DataclassTransformer____infer_dataclass_attr_init_type,
    };
    memcpy(dataclasses___DataclassTransformer_vtable, dataclasses___DataclassTransformer_vtable_scratch, sizeof(dataclasses___DataclassTransformer_vtable));
    return 1;
}

static PyObject *
dataclasses___DataclassTransformer_get__cls(mypy___plugins___dataclasses___DataclassTransformerObject *self, void *closure);
static int
dataclasses___DataclassTransformer_set__cls(mypy___plugins___dataclasses___DataclassTransformerObject *self, PyObject *value, void *closure);
static PyObject *
dataclasses___DataclassTransformer_get__reason(mypy___plugins___dataclasses___DataclassTransformerObject *self, void *closure);
static int
dataclasses___DataclassTransformer_set__reason(mypy___plugins___dataclasses___DataclassTransformerObject *self, PyObject *value, void *closure);
static PyObject *
dataclasses___DataclassTransformer_get__spec(mypy___plugins___dataclasses___DataclassTransformerObject *self, void *closure);
static int
dataclasses___DataclassTransformer_set__spec(mypy___plugins___dataclasses___DataclassTransformerObject *self, PyObject *value, void *closure);
static PyObject *
dataclasses___DataclassTransformer_get__api(mypy___plugins___dataclasses___DataclassTransformerObject *self, void *closure);
static int
dataclasses___DataclassTransformer_set__api(mypy___plugins___dataclasses___DataclassTransformerObject *self, PyObject *value, void *closure);

static PyGetSetDef dataclasses___DataclassTransformer_getseters[] = {
    {"_cls",
     (getter)dataclasses___DataclassTransformer_get__cls, (setter)dataclasses___DataclassTransformer_set__cls,
     NULL, NULL},
    {"_reason",
     (getter)dataclasses___DataclassTransformer_get__reason, (setter)dataclasses___DataclassTransformer_set__reason,
     NULL, NULL},
    {"_spec",
     (getter)dataclasses___DataclassTransformer_get__spec, (setter)dataclasses___DataclassTransformer_set__spec,
     NULL, NULL},
    {"_api",
     (getter)dataclasses___DataclassTransformer_get__api, (setter)dataclasses___DataclassTransformer_set__api,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef dataclasses___DataclassTransformer_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"transform",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer___transform,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_add_internal_replace_method",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer____add_internal_replace_method,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_add_internal_post_init_method",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer____add_internal_post_init_method,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_slots",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer___add_slots,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"reset_init_only_vars",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer___reset_init_only_vars,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_get_assignment_statements_from_if_statement",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer____get_assignment_statements_from_if_statement,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_get_assignment_statements_from_block",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer____get_assignment_statements_from_block,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"collect_attributes",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer___collect_attributes,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_freeze",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer____freeze,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_propertize_callables",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer____propertize_callables,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_is_kw_only_type",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer____is_kw_only_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_add_dataclass_fields_magic_attribute",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer____add_dataclass_fields_magic_attribute,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_collect_field_args",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer____collect_field_args,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_get_bool_arg",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer____get_bool_arg,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_get_default_init_value_for_field_specifier",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer____get_default_init_value_for_field_specifier,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_infer_dataclass_attr_init_type",
     (PyCFunction)CPyPy_dataclasses___DataclassTransformer____infer_dataclass_attr_init_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataclasses___DataclassTransformer_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "DataclassTransformer",
    .tp_new = dataclasses___DataclassTransformer_new,
    .tp_dealloc = (destructor)dataclasses___DataclassTransformer_dealloc,
    .tp_traverse = (traverseproc)dataclasses___DataclassTransformer_traverse,
    .tp_clear = (inquiry)dataclasses___DataclassTransformer_clear,
    .tp_getset = dataclasses___DataclassTransformer_getseters,
    .tp_methods = dataclasses___DataclassTransformer_methods,
    .tp_init = dataclasses___DataclassTransformer_init,
    .tp_basicsize = sizeof(mypy___plugins___dataclasses___DataclassTransformerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dataclasses___DataclassTransformer_template = &CPyType_dataclasses___DataclassTransformer_template_;

static PyObject *
dataclasses___DataclassTransformer_setup(PyTypeObject *type)
{
    mypy___plugins___dataclasses___DataclassTransformerObject *self;
    self = (mypy___plugins___dataclasses___DataclassTransformerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataclasses___DataclassTransformer_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_dataclasses___DataclassTransformer(PyObject *cpy_r_cls, PyObject *cpy_r_reason, PyObject *cpy_r_spec, PyObject *cpy_r_api)
{
    PyObject *self = dataclasses___DataclassTransformer_setup(CPyType_dataclasses___DataclassTransformer);
    if (self == NULL)
        return NULL;
    char res = CPyDef_dataclasses___DataclassTransformer_____init__(self, cpy_r_cls, cpy_r_reason, cpy_r_spec, cpy_r_api);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
dataclasses___DataclassTransformer_get__cls(mypy___plugins___dataclasses___DataclassTransformerObject *self, void *closure)
{
    if (unlikely(self->__cls == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_cls' of 'DataclassTransformer' undefined");
        return NULL;
    }
    CPy_INCREF(self->__cls);
    PyObject *retval = self->__cls;
    return retval;
}

static int
dataclasses___DataclassTransformer_set__cls(mypy___plugins___dataclasses___DataclassTransformerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataclassTransformer' object attribute '_cls' cannot be deleted");
        return -1;
    }
    if (self->__cls != NULL) {
        CPy_DECREF(self->__cls);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_nodes___ClassDef))
        tmp = value;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__cls = tmp;
    return 0;
}

static PyObject *
dataclasses___DataclassTransformer_get__reason(mypy___plugins___dataclasses___DataclassTransformerObject *self, void *closure)
{
    if (unlikely(self->__reason == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_reason' of 'DataclassTransformer' undefined");
        return NULL;
    }
    CPy_INCREF(self->__reason);
    PyObject *retval = self->__reason;
    return retval;
}

static int
dataclasses___DataclassTransformer_set__reason(mypy___plugins___dataclasses___DataclassTransformerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataclassTransformer' object attribute '_reason' cannot be deleted");
        return -1;
    }
    if (self->__reason != NULL) {
        CPy_DECREF(self->__reason);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_nodes___Expression))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4802;
    if (PyObject_TypeCheck(value, CPyType_nodes___Statement))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4802;
    CPy_TypeError("union[mypy.nodes.Expression, mypy.nodes.Statement]", value); 
    tmp = NULL;
__LL4802: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__reason = tmp;
    return 0;
}

static PyObject *
dataclasses___DataclassTransformer_get__spec(mypy___plugins___dataclasses___DataclassTransformerObject *self, void *closure)
{
    if (unlikely(self->__spec == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_spec' of 'DataclassTransformer' undefined");
        return NULL;
    }
    CPy_INCREF(self->__spec);
    PyObject *retval = self->__spec;
    return retval;
}

static int
dataclasses___DataclassTransformer_set__spec(mypy___plugins___dataclasses___DataclassTransformerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataclassTransformer' object attribute '_spec' cannot be deleted");
        return -1;
    }
    if (self->__spec != NULL) {
        CPy_DECREF(self->__spec);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_nodes___DataclassTransformSpec))
        tmp = value;
    else {
        CPy_TypeError("mypy.nodes.DataclassTransformSpec", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__spec = tmp;
    return 0;
}

static PyObject *
dataclasses___DataclassTransformer_get__api(mypy___plugins___dataclasses___DataclassTransformerObject *self, void *closure)
{
    if (unlikely(self->__api == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_api' of 'DataclassTransformer' undefined");
        return NULL;
    }
    CPy_INCREF(self->__api);
    PyObject *retval = self->__api;
    return retval;
}

static int
dataclasses___DataclassTransformer_set__api(mypy___plugins___dataclasses___DataclassTransformerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'DataclassTransformer' object attribute '_api' cannot be deleted");
        return -1;
    }
    if (self->__api != NULL) {
        CPy_DECREF(self->__api);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_semanal___SemanticAnalyzer))
        tmp = value;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__api = tmp;
    return 0;
}

static PyObject *dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_setup(PyTypeObject *type);
PyObject *CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env(void);

static PyObject *
dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_setup(type);
}

static int
dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_traverse(mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_stmt);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->_body);
    Py_VISIT(self->___mypyc_temp__2);
    Py_VISIT(self->___mypyc_temp__3.f0);
    Py_VISIT(self->___mypyc_temp__3.f1);
    Py_VISIT(self->___mypyc_temp__3.f2);
    Py_VISIT(self->___mypyc_temp__4);
    Py_VISIT(self->___mypyc_temp__5.f0);
    Py_VISIT(self->___mypyc_temp__5.f1);
    Py_VISIT(self->___mypyc_temp__5.f2);
    return 0;
}

static int
dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_clear(mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_stmt);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->_body);
    Py_CLEAR(self->___mypyc_temp__2);
    Py_CLEAR(self->___mypyc_temp__3.f0);
    Py_CLEAR(self->___mypyc_temp__3.f1);
    Py_CLEAR(self->___mypyc_temp__3.f2);
    Py_CLEAR(self->___mypyc_temp__4);
    Py_CLEAR(self->___mypyc_temp__5.f0);
    Py_CLEAR(self->___mypyc_temp__5.f1);
    Py_CLEAR(self->___mypyc_temp__5.f2);
    return 0;
}

static void
dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_dealloc(mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_dealloc)
    dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_vtable[1];
static bool
CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_trait_vtable_setup(void)
{
    CPyVTableItem dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_vtable_scratch[] = {
        NULL
    };
    memcpy(dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_vtable, dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_vtable_scratch, sizeof(dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_vtable));
    return 1;
}

static PyMethodDef dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_get_assignment_statements_from_if_statement_DataclassTransformer_env",
    .tp_new = dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_new,
    .tp_dealloc = (destructor)dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_dealloc,
    .tp_traverse = (traverseproc)dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_traverse,
    .tp_clear = (inquiry)dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_clear,
    .tp_methods = dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_methods,
    .tp_basicsize = sizeof(mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_template = &CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_template_;

static PyObject *
dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_setup(PyTypeObject *type)
{
    mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *self;
    self = (mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__1 = CPY_INT_TAG;
    self->___mypyc_temp__3 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__5 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env(void)
{
    PyObject *self = dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_setup(CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_setup(PyTypeObject *type);
PyObject *CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen(void);

static PyObject *
dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_setup(type);
}

static int
dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_traverse(mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_clear(mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_dealloc(mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_dealloc)
    dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_vtable[6];
static bool
CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_trait_vtable_setup(void)
{
    CPyVTableItem dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____next__,
        (CPyVTableItem)CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen___send,
        (CPyVTableItem)CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____iter__,
        (CPyVTableItem)CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen___throw,
        (CPyVTableItem)CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen___close,
    };
    memcpy(dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_vtable, dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_vtable_scratch, sizeof(dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_vtable));
    return 1;
}

static PyMethodDef dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_get_assignment_statements_from_if_statement_DataclassTransformer_gen",
    .tp_new = dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_new,
    .tp_dealloc = (destructor)dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_dealloc,
    .tp_traverse = (traverseproc)dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_traverse,
    .tp_clear = (inquiry)dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_clear,
    .tp_methods = dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_methods,
    .tp_iter = CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____iter__,
    .tp_iternext = CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____next__,
    .tp_basicsize = sizeof(mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_template = &CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_template_;

static PyObject *
dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_setup(PyTypeObject *type)
{
    mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_genObject *self;
    self = (mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen(void)
{
    PyObject *self = dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_setup(CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_setup(PyTypeObject *type);
PyObject *CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_env(void);

static PyObject *
dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_setup(type);
}

static int
dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_traverse(mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_block);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__6);
    Py_VISIT(self->_stmt);
    Py_VISIT(self->___mypyc_temp__8);
    Py_VISIT(self->___mypyc_temp__9.f0);
    Py_VISIT(self->___mypyc_temp__9.f1);
    Py_VISIT(self->___mypyc_temp__9.f2);
    return 0;
}

static int
dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_clear(mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_block);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___mypyc_temp__6);
    Py_CLEAR(self->_stmt);
    Py_CLEAR(self->___mypyc_temp__8);
    Py_CLEAR(self->___mypyc_temp__9.f0);
    Py_CLEAR(self->___mypyc_temp__9.f1);
    Py_CLEAR(self->___mypyc_temp__9.f2);
    return 0;
}

static void
dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_dealloc(mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_dealloc)
    dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_vtable[1];
static bool
CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_trait_vtable_setup(void)
{
    CPyVTableItem dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_vtable_scratch[] = {
        NULL
    };
    memcpy(dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_vtable, dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_vtable_scratch, sizeof(dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_vtable));
    return 1;
}

static PyMethodDef dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_get_assignment_statements_from_block_DataclassTransformer_env",
    .tp_new = dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_new,
    .tp_dealloc = (destructor)dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_dealloc,
    .tp_traverse = (traverseproc)dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_traverse,
    .tp_clear = (inquiry)dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_clear,
    .tp_methods = dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_methods,
    .tp_basicsize = sizeof(mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_template = &CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_template_;

static PyObject *
dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_setup(PyTypeObject *type)
{
    mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *self;
    self = (mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__7 = CPY_INT_TAG;
    self->___mypyc_temp__9 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_env(void)
{
    PyObject *self = dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_setup(CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_setup(PyTypeObject *type);
PyObject *CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen(void);

static PyObject *
dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_setup(type);
}

static int
dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_traverse(mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_clear(mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_dealloc(mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_dealloc)
    dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_vtable[6];
static bool
CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_trait_vtable_setup(void)
{
    CPyVTableItem dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____next__,
        (CPyVTableItem)CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen___send,
        (CPyVTableItem)CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____iter__,
        (CPyVTableItem)CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen___throw,
        (CPyVTableItem)CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen___close,
    };
    memcpy(dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_vtable, dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_vtable_scratch, sizeof(dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_vtable));
    return 1;
}

static PyMethodDef dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_get_assignment_statements_from_block_DataclassTransformer_gen",
    .tp_new = dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_new,
    .tp_dealloc = (destructor)dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_dealloc,
    .tp_traverse = (traverseproc)dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_traverse,
    .tp_clear = (inquiry)dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_clear,
    .tp_methods = dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_methods,
    .tp_iter = CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____iter__,
    .tp_iternext = CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____next__,
    .tp_basicsize = sizeof(mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_template = &CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_template_;

static PyObject *
dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_setup(PyTypeObject *type)
{
    mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_genObject *self;
    self = (mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen(void)
{
    PyObject *self = dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_setup(CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *dataclasses___collect_attributes_DataclassTransformer_env_setup(PyTypeObject *type);
PyObject *CPyDef_dataclasses___collect_attributes_DataclassTransformer_env(void);

static PyObject *
dataclasses___collect_attributes_DataclassTransformer_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataclasses___collect_attributes_DataclassTransformer_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return dataclasses___collect_attributes_DataclassTransformer_env_setup(type);
}

static int
dataclasses___collect_attributes_DataclassTransformer_env_traverse(mypy___plugins___dataclasses___collect_attributes_DataclassTransformer_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_cls);
    Py_VISIT(self->_found_attrs);
    Py_VISIT(self->_info);
    Py_VISIT(self->_data);
    Py_VISIT(self->_name);
    Py_VISIT(self->_attr);
    Py_VISIT(self->_sym_node);
    Py_VISIT(self->_current_attr_names);
    Py_VISIT(self->_stmt);
    Py_VISIT(self->_lhs);
    Py_VISIT(self->_sym);
    Py_VISIT(self->_node);
    Py_VISIT(self->_node_type);
    Py_VISIT(self->_field_args);
    Py_VISIT(self->_is_in_init_param);
    Py_VISIT(self->_field_kw_only_param);
    Py_VISIT(self->_value);
    Py_VISIT(self->_typ);
    Py_VISIT(self->_alias);
    Py_VISIT(self->_init_type);
    Py_VISIT(self->_all_attrs);
    return 0;
}

static int
dataclasses___collect_attributes_DataclassTransformer_env_clear(mypy___plugins___dataclasses___collect_attributes_DataclassTransformer_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_cls);
    Py_CLEAR(self->_found_attrs);
    Py_CLEAR(self->_info);
    Py_CLEAR(self->_data);
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_attr);
    Py_CLEAR(self->_sym_node);
    Py_CLEAR(self->_current_attr_names);
    Py_CLEAR(self->_stmt);
    Py_CLEAR(self->_lhs);
    Py_CLEAR(self->_sym);
    Py_CLEAR(self->_node);
    Py_CLEAR(self->_node_type);
    Py_CLEAR(self->_field_args);
    Py_CLEAR(self->_is_in_init_param);
    Py_CLEAR(self->_field_kw_only_param);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_typ);
    Py_CLEAR(self->_alias);
    Py_CLEAR(self->_init_type);
    Py_CLEAR(self->_all_attrs);
    return 0;
}

static void
dataclasses___collect_attributes_DataclassTransformer_env_dealloc(mypy___plugins___dataclasses___collect_attributes_DataclassTransformer_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataclasses___collect_attributes_DataclassTransformer_env_dealloc)
    dataclasses___collect_attributes_DataclassTransformer_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataclasses___collect_attributes_DataclassTransformer_env_vtable[1];
static bool
CPyDef_dataclasses___collect_attributes_DataclassTransformer_env_trait_vtable_setup(void)
{
    CPyVTableItem dataclasses___collect_attributes_DataclassTransformer_env_vtable_scratch[] = {
        NULL
    };
    memcpy(dataclasses___collect_attributes_DataclassTransformer_env_vtable, dataclasses___collect_attributes_DataclassTransformer_env_vtable_scratch, sizeof(dataclasses___collect_attributes_DataclassTransformer_env_vtable));
    return 1;
}

static PyMethodDef dataclasses___collect_attributes_DataclassTransformer_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataclasses___collect_attributes_DataclassTransformer_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "collect_attributes_DataclassTransformer_env",
    .tp_new = dataclasses___collect_attributes_DataclassTransformer_env_new,
    .tp_dealloc = (destructor)dataclasses___collect_attributes_DataclassTransformer_env_dealloc,
    .tp_traverse = (traverseproc)dataclasses___collect_attributes_DataclassTransformer_env_traverse,
    .tp_clear = (inquiry)dataclasses___collect_attributes_DataclassTransformer_env_clear,
    .tp_methods = dataclasses___collect_attributes_DataclassTransformer_env_methods,
    .tp_basicsize = sizeof(mypy___plugins___dataclasses___collect_attributes_DataclassTransformer_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_dataclasses___collect_attributes_DataclassTransformer_env_template = &CPyType_dataclasses___collect_attributes_DataclassTransformer_env_template_;

static PyObject *
dataclasses___collect_attributes_DataclassTransformer_env_setup(PyTypeObject *type)
{
    mypy___plugins___dataclasses___collect_attributes_DataclassTransformer_envObject *self;
    self = (mypy___plugins___dataclasses___collect_attributes_DataclassTransformer_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataclasses___collect_attributes_DataclassTransformer_env_vtable;
    self->_found_dataclass_supertype = 2;
    self->_kw_only = 2;
    self->_is_init_var = 2;
    self->_has_field_call = 2;
    self->_is_in_init = 2;
    self->_has_default = 2;
    self->_is_kw_only = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_dataclasses___collect_attributes_DataclassTransformer_env(void)
{
    PyObject *self = dataclasses___collect_attributes_DataclassTransformer_env_setup(CPyType_dataclasses___collect_attributes_DataclassTransformer_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_____get__(self, instance, owner);
}
PyMemberDef dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_setup(PyTypeObject *type);
PyObject *CPyDef_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj(void);

static PyObject *
dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_setup(type);
}

static int
dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_traverse(mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject))));
    return 0;
}

static int
dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_clear(mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject))));
    return 0;
}

static void
dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_dealloc(mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_dealloc)
    dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_vtable[2];
static bool
CPyDef_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_trait_vtable_setup(void)
{
    CPyVTableItem dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_____call__,
        (CPyVTableItem)CPyDef_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_____get__,
    };
    memcpy(dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_vtable, dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_vtable_scratch, sizeof(dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_vtable));
    return 1;
}

static PyMethodDef dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_collect_attributes_DataclassTransformer_obj",
    .tp_new = dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_new,
    .tp_dealloc = (destructor)dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_dealloc,
    .tp_traverse = (traverseproc)dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_traverse,
    .tp_clear = (inquiry)dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_clear,
    .tp_methods = dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj,
    .tp_members = dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_members,
    .tp_basicsize = sizeof(mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject),
    .tp_weaklistoffset = sizeof(mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_template = &CPyType_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_template_;

static PyObject *
dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_setup(PyTypeObject *type)
{
    mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject *self;
    self = (mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_vtable;
    self->vectorcall = CPyPy_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj(void)
{
    PyObject *self = dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_setup(CPyType_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef dataclassesmodule_methods[] = {
    {"add_dataclass_tag", (PyCFunction)CPyPy_dataclasses___add_dataclass_tag, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"dataclass_tag_callback", (PyCFunction)CPyPy_dataclasses___dataclass_tag_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"dataclass_class_maker_callback", (PyCFunction)CPyPy_dataclasses___dataclass_class_maker_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_get_transform_spec", (PyCFunction)CPyPy_dataclasses____get_transform_spec, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_is_dataclasses_decorator", (PyCFunction)CPyPy_dataclasses____is_dataclasses_decorator, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_has_direct_dataclass_transform_metaclass", (PyCFunction)CPyPy_dataclasses____has_direct_dataclass_transform_metaclass, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_fail_not_dataclass", (PyCFunction)CPyPy_dataclasses____fail_not_dataclass, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_get_expanded_dataclasses_fields", (PyCFunction)CPyPy_dataclasses____get_expanded_dataclasses_fields, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_meet_replace_sigs", (PyCFunction)CPyPy_dataclasses____meet_replace_sigs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"replace_function_sig_callback", (PyCFunction)CPyPy_dataclasses___replace_function_sig_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_processed_dataclass", (PyCFunction)CPyPy_dataclasses___is_processed_dataclass, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_post_init", (PyCFunction)CPyPy_dataclasses___check_post_init, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef dataclassesmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.plugins.dataclasses",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    dataclassesmodule_methods
};

PyObject *CPyInit_mypy___plugins___dataclasses(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___plugins___dataclasses_internal) {
        Py_INCREF(CPyModule_mypy___plugins___dataclasses_internal);
        return CPyModule_mypy___plugins___dataclasses_internal;
    }
    CPyModule_mypy___plugins___dataclasses_internal = PyModule_Create(&dataclassesmodule);
    if (unlikely(CPyModule_mypy___plugins___dataclasses_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___plugins___dataclasses_internal, "__name__");
    CPyStatic_dataclasses___globals = PyModule_GetDict(CPyModule_mypy___plugins___dataclasses_internal);
    if (unlikely(CPyStatic_dataclasses___globals == NULL))
        goto fail;
    CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env_template, NULL, modname);
    if (unlikely(!CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env))
        goto fail;
    CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_template, NULL, modname);
    if (unlikely(!CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen))
        goto fail;
    CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_env_template, NULL, modname);
    if (unlikely(!CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_env))
        goto fail;
    CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_template, NULL, modname);
    if (unlikely(!CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen))
        goto fail;
    CPyType_dataclasses___collect_attributes_DataclassTransformer_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_dataclasses___collect_attributes_DataclassTransformer_env_template, NULL, modname);
    if (unlikely(!CPyType_dataclasses___collect_attributes_DataclassTransformer_env))
        goto fail;
    CPyType_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_template, NULL, modname);
    if (unlikely(!CPyType_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_dataclasses_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___plugins___dataclasses_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___plugins___dataclasses_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_dataclasses___dataclass_makers);
    CPyStatic_dataclasses___dataclass_makers = NULL;
    CPy_XDECREF(CPyStatic_dataclasses____TRANSFORM_SPEC_FOR_DATACLASSES);
    CPyStatic_dataclasses____TRANSFORM_SPEC_FOR_DATACLASSES = NULL;
    Py_CLEAR(CPyType_dataclasses___DataclassAttribute);
    Py_CLEAR(CPyType_dataclasses___DataclassTransformer);
    Py_CLEAR(CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env);
    Py_CLEAR(CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen);
    Py_CLEAR(CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_env);
    Py_CLEAR(CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen);
    Py_CLEAR(CPyType_dataclasses___collect_attributes_DataclassTransformer_env);
    Py_CLEAR(CPyType_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj);
    return NULL;
}

char CPyDef_dataclasses___DataclassAttribute_____init__(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_alias, char cpy_r_is_in_init, char cpy_r_is_init_var, char cpy_r_has_default, CPyTagged cpy_r_line, CPyTagged cpy_r_column, PyObject *cpy_r_type, PyObject *cpy_r_info, char cpy_r_kw_only, char cpy_r_is_neither_frozen_nor_nonfrozen, PyObject *cpy_r_api) {
    CPy_INCREF(cpy_r_name);
    ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_name = cpy_r_name;
    CPy_INCREF(cpy_r_alias);
    ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_alias = cpy_r_alias;
    ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_is_in_init = cpy_r_is_in_init;
    ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_is_init_var = cpy_r_is_init_var;
    ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_has_default = cpy_r_has_default;
    CPyTagged_INCREF(cpy_r_line);
    ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_line = cpy_r_line;
    CPyTagged_INCREF(cpy_r_column);
    ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_column = cpy_r_column;
    CPy_INCREF(cpy_r_type);
    ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_type = cpy_r_type;
    CPy_INCREF(cpy_r_info);
    ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_info = cpy_r_info;
    ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_kw_only = cpy_r_kw_only;
    ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_is_neither_frozen_nor_nonfrozen = cpy_r_is_neither_frozen_nor_nonfrozen;
    CPy_INCREF(cpy_r_api);
    ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->__api = cpy_r_api;
    return 1;
}

PyObject *CPyPy_dataclasses___DataclassAttribute_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "alias", "is_in_init", "is_init_var", "has_default", "line", "column", "type", "info", "kw_only", "is_neither_frozen_nor_nonfrozen", "api", 0};
    PyObject *obj_name;
    PyObject *obj_alias;
    PyObject *obj_is_in_init;
    PyObject *obj_is_init_var;
    PyObject *obj_has_default;
    PyObject *obj_line;
    PyObject *obj_column;
    PyObject *obj_type;
    PyObject *obj_info;
    PyObject *obj_kw_only;
    PyObject *obj_is_neither_frozen_nor_nonfrozen;
    PyObject *obj_api;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOOOOOO", "__init__", kwlist, &obj_name, &obj_alias, &obj_is_in_init, &obj_is_init_var, &obj_has_default, &obj_line, &obj_column, &obj_type, &obj_info, &obj_kw_only, &obj_is_neither_frozen_nor_nonfrozen, &obj_api)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassAttribute))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassAttribute", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_alias;
    if (PyUnicode_Check(obj_alias))
        arg_alias = obj_alias;
    else {
        arg_alias = NULL;
    }
    if (arg_alias != NULL) goto __LL4803;
    if (obj_alias == Py_None)
        arg_alias = obj_alias;
    else {
        arg_alias = NULL;
    }
    if (arg_alias != NULL) goto __LL4803;
    CPy_TypeError("str or None", obj_alias); 
    goto fail;
__LL4803: ;
    char arg_is_in_init;
    if (unlikely(!PyBool_Check(obj_is_in_init))) {
        CPy_TypeError("bool", obj_is_in_init); goto fail;
    } else
        arg_is_in_init = obj_is_in_init == Py_True;
    char arg_is_init_var;
    if (unlikely(!PyBool_Check(obj_is_init_var))) {
        CPy_TypeError("bool", obj_is_init_var); goto fail;
    } else
        arg_is_init_var = obj_is_init_var == Py_True;
    char arg_has_default;
    if (unlikely(!PyBool_Check(obj_has_default))) {
        CPy_TypeError("bool", obj_has_default); goto fail;
    } else
        arg_has_default = obj_has_default == Py_True;
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    CPyTagged arg_column;
    if (likely(PyLong_Check(obj_column)))
        arg_column = CPyTagged_BorrowFromObject(obj_column);
    else {
        CPy_TypeError("int", obj_column); goto fail;
    }
    PyObject *arg_type;
    if (PyObject_TypeCheck(obj_type, CPyType_types___Type))
        arg_type = obj_type;
    else {
        arg_type = NULL;
    }
    if (arg_type != NULL) goto __LL4804;
    if (obj_type == Py_None)
        arg_type = obj_type;
    else {
        arg_type = NULL;
    }
    if (arg_type != NULL) goto __LL4804;
    CPy_TypeError("mypy.types.Type or None", obj_type); 
    goto fail;
__LL4804: ;
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    char arg_kw_only;
    if (unlikely(!PyBool_Check(obj_kw_only))) {
        CPy_TypeError("bool", obj_kw_only); goto fail;
    } else
        arg_kw_only = obj_kw_only == Py_True;
    char arg_is_neither_frozen_nor_nonfrozen;
    if (unlikely(!PyBool_Check(obj_is_neither_frozen_nor_nonfrozen))) {
        CPy_TypeError("bool", obj_is_neither_frozen_nor_nonfrozen); goto fail;
    } else
        arg_is_neither_frozen_nor_nonfrozen = obj_is_neither_frozen_nor_nonfrozen == Py_True;
    PyObject *arg_api;
    if (likely(Py_TYPE(obj_api) == CPyType_semanal___SemanticAnalyzer))
        arg_api = obj_api;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_api); 
        goto fail;
    }
    char retval = CPyDef_dataclasses___DataclassAttribute_____init__(arg_self, arg_name, arg_alias, arg_is_in_init, arg_is_init_var, arg_has_default, arg_line, arg_column, arg_type, arg_info, arg_kw_only, arg_is_neither_frozen_nor_nonfrozen, arg_api);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "__init__", 93, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses___DataclassAttribute___to_argument(PyObject *cpy_r_self, PyObject *cpy_r_current_info, PyObject *cpy_r_of) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_arg_kind;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
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
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    cpy_r_r0 = NULL;
    cpy_r_arg_kind = cpy_r_r0;
    cpy_r_r1 = CPyStatics[288]; /* '__init__' */
    cpy_r_r2 = PyUnicode_Compare(cpy_r_of, cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 == -1;
    if (!cpy_r_r3) goto CPyL3;
    cpy_r_r4 = PyErr_Occurred();
    cpy_r_r5 = cpy_r_r4 != NULL;
    if (!cpy_r_r5) goto CPyL3;
    cpy_r_r6 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_argument", 124, CPyStatic_dataclasses___globals);
        goto CPyL56;
    }
CPyL3: ;
    cpy_r_r7 = cpy_r_r2 == 0;
    if (cpy_r_r7) {
        goto CPyL57;
    } else
        goto CPyL25;
CPyL4: ;
    cpy_r_r8 = CPyStatic_nodes___ARG_POS;
    if (likely(cpy_r_r8 != NULL)) goto CPyL7;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_argument", 125, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL7: ;
    CPy_INCREF(cpy_r_r8);
    cpy_r_arg_kind = cpy_r_r8;
    cpy_r_r10 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_kw_only;
    if (!cpy_r_r10) goto CPyL13;
CPyL8: ;
    cpy_r_r11 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_has_default;
    if (cpy_r_r11) {
        goto CPyL58;
    } else
        goto CPyL13;
CPyL9: ;
    cpy_r_r12 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (likely(cpy_r_r12 != NULL)) goto CPyL12;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_argument", 127, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL12: ;
    CPy_INCREF(cpy_r_r12);
    cpy_r_arg_kind = cpy_r_r12;
    goto CPyL48;
CPyL13: ;
    cpy_r_r14 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_kw_only;
    if (!cpy_r_r14) goto CPyL19;
CPyL14: ;
    cpy_r_r15 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_has_default;
    if (cpy_r_r15) {
        goto CPyL19;
    } else
        goto CPyL59;
CPyL15: ;
    cpy_r_r16 = CPyStatic_nodes___ARG_NAMED;
    if (likely(cpy_r_r16 != NULL)) goto CPyL18;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_argument", 129, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL18: ;
    CPy_INCREF(cpy_r_r16);
    cpy_r_arg_kind = cpy_r_r16;
    goto CPyL48;
CPyL19: ;
    cpy_r_r18 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_kw_only;
    if (cpy_r_r18) goto CPyL48;
CPyL20: ;
    cpy_r_r19 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_has_default;
    if (cpy_r_r19) {
        goto CPyL60;
    } else
        goto CPyL48;
CPyL21: ;
    cpy_r_r20 = CPyStatic_nodes___ARG_OPT;
    if (likely(cpy_r_r20 != NULL)) goto CPyL24;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_OPT\" was not set");
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_argument", 131, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL24: ;
    CPy_INCREF(cpy_r_r20);
    cpy_r_arg_kind = cpy_r_r20;
    goto CPyL48;
CPyL25: ;
    cpy_r_r22 = CPyStatics[3798]; /* 'replace' */
    cpy_r_r23 = PyUnicode_Compare(cpy_r_of, cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 == -1;
    if (!cpy_r_r24) goto CPyL28;
    cpy_r_r25 = PyErr_Occurred();
    cpy_r_r26 = cpy_r_r25 != NULL;
    if (!cpy_r_r26) goto CPyL28;
    cpy_r_r27 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_argument", 132, CPyStatic_dataclasses___globals);
        goto CPyL56;
    }
CPyL28: ;
    cpy_r_r28 = cpy_r_r23 == 0;
    if (cpy_r_r28) {
        goto CPyL61;
    } else
        goto CPyL40;
CPyL29: ;
    cpy_r_r29 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_is_init_var;
    if (!cpy_r_r29) goto CPyL35;
CPyL30: ;
    cpy_r_r30 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_has_default;
    if (cpy_r_r30) goto CPyL35;
CPyL31: ;
    cpy_r_r31 = CPyStatic_nodes___ARG_NAMED;
    if (likely(cpy_r_r31 != NULL)) goto CPyL34;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_argument", 133, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL34: ;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r31;
    goto CPyL39;
CPyL35: ;
    cpy_r_r34 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (likely(cpy_r_r34 != NULL)) goto CPyL38;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r35 = 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_argument", 133, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL38: ;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r33 = cpy_r_r34;
CPyL39: ;
    cpy_r_arg_kind = cpy_r_r33;
    goto CPyL48;
CPyL40: ;
    cpy_r_r36 = CPyStatics[719]; /* '__post_init__' */
    cpy_r_r37 = PyUnicode_Compare(cpy_r_of, cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 == -1;
    if (!cpy_r_r38) goto CPyL43;
    cpy_r_r39 = PyErr_Occurred();
    cpy_r_r40 = cpy_r_r39 != NULL;
    if (!cpy_r_r40) goto CPyL43;
    cpy_r_r41 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_argument", 134, CPyStatic_dataclasses___globals);
        goto CPyL56;
    }
CPyL43: ;
    cpy_r_r42 = cpy_r_r37 == 0;
    if (cpy_r_r42) {
        goto CPyL62;
    } else
        goto CPyL48;
CPyL44: ;
    cpy_r_r43 = CPyStatic_nodes___ARG_POS;
    if (likely(cpy_r_r43 != NULL)) goto CPyL47;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r44 = 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_argument", 147, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL47: ;
    CPy_INCREF(cpy_r_r43);
    cpy_r_arg_kind = cpy_r_r43;
CPyL48: ;
    cpy_r_r45 = CPyDef_dataclasses___DataclassAttribute___to_var(cpy_r_self, cpy_r_current_info);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_argument", 149, CPyStatic_dataclasses___globals);
        goto CPyL56;
    }
    cpy_r_r46 = CPyDef_dataclasses___DataclassAttribute___expand_type(cpy_r_self, cpy_r_current_info);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_argument", 150, CPyStatic_dataclasses___globals);
        goto CPyL63;
    }
    cpy_r_r47 = Py_None;
    cpy_r_r48 = 2;
    if (cpy_r_arg_kind == NULL) {
        goto CPyL64;
    } else
        goto CPyL53;
CPyL51: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"arg_kind\" referenced before assignment");
    cpy_r_r49 = 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_argument", 148, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL53: ;
    cpy_r_r50 = CPyDef_nodes___Argument(cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_arg_kind, cpy_r_r48);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r46);
    CPy_XDECREF(cpy_r_arg_kind);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_argument", 148, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    return cpy_r_r50;
CPyL55: ;
    cpy_r_r51 = NULL;
    return cpy_r_r51;
CPyL56: ;
    CPy_XDecRef(cpy_r_arg_kind);
    goto CPyL55;
CPyL57: ;
    CPy_XDECREF(cpy_r_arg_kind);
    goto CPyL4;
CPyL58: ;
    CPy_DECREF(cpy_r_arg_kind);
    goto CPyL9;
CPyL59: ;
    CPy_DECREF(cpy_r_arg_kind);
    goto CPyL15;
CPyL60: ;
    CPy_DECREF(cpy_r_arg_kind);
    goto CPyL21;
CPyL61: ;
    CPy_XDECREF(cpy_r_arg_kind);
    goto CPyL29;
CPyL62: ;
    CPy_XDECREF(cpy_r_arg_kind);
    goto CPyL44;
CPyL63: ;
    CPy_XDecRef(cpy_r_arg_kind);
    CPy_DecRef(cpy_r_r45);
    goto CPyL55;
CPyL64: ;
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_r46);
    goto CPyL51;
}

PyObject *CPyPy_dataclasses___DataclassAttribute___to_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"current_info", "of", 0};
    static CPyArg_Parser parser = {"O|$@O:to_argument", kwlist, 0};
    PyObject *obj_current_info;
    PyObject *obj_of;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_current_info, &obj_of)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassAttribute))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassAttribute", obj_self); 
        goto fail;
    }
    PyObject *arg_current_info;
    if (likely((Py_TYPE(obj_current_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_current_info) == CPyType_nodes___TypeInfo)))
        arg_current_info = obj_current_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_current_info); 
        goto fail;
    }
    PyObject *arg_of;
    if (likely(PyUnicode_Check(obj_of)))
        arg_of = obj_of;
    else {
        CPy_TypeError("str", obj_of); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses___DataclassAttribute___to_argument(arg_self, arg_current_info, arg_of);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_argument", 121, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses___DataclassAttribute___expand_type(PyObject *cpy_r_self, PyObject *cpy_r_current_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
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
    tuple_T3OOO cpy_r_r36;
    tuple_T3OOO cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject **cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    tuple_T3OOO cpy_r_r49;
    tuple_T3OOO cpy_r_r50;
    PyObject *cpy_r_r51;
    tuple_T3OOO cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    size_t __tmp4805;
    cpy_r_r0 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_type;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL42;
    cpy_r_r3 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_info;
    cpy_r_r4 = ((mypy___nodes___TypeInfoObject *)cpy_r_r3)->_self_type;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "expand_type", "TypeInfo", "self_type", 156, CPyStatic_dataclasses___globals);
        goto CPyL43;
    }
CPyL2: ;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_r4 != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL42;
    cpy_r_r7 = CPyStatic_state___state;
    if (likely(cpy_r_r7 != NULL)) goto CPyL6;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_type", 161, CPyStatic_dataclasses___globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r9 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->__api;
    __tmp4805 = CPy_FindAttrOffset(CPyType_plugin___SemanticAnalyzerPluginInterface, ((mypy___plugin___SemanticAnalyzerPluginInterfaceObject *)cpy_r_r9)->vtable, 1);
    cpy_r_r10 = *(PyObject * *)((char *)cpy_r_r9 + __tmp4805);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "expand_type", "SemanticAnalyzerPluginInterface", "options", 161, CPyStatic_dataclasses___globals);
        goto CPyL43;
    }
CPyL7: ;
    cpy_r_r11 = ((mypy___options___OptionsObject *)cpy_r_r10)->_strict_optional;
    cpy_r_r12 = CPyStatics[692]; /* 'strict_optional_set' */
    cpy_r_r13 = cpy_r_r11 ? Py_True : Py_False;
    PyObject *cpy_r_r14[2] = {cpy_r_r7, cpy_r_r13};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r12, cpy_r_r15, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_type", 161, CPyStatic_dataclasses___globals);
        goto CPyL43;
    }
    cpy_r_r17 = PyObject_Type(cpy_r_r16);
    cpy_r_r18 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_type", 161, CPyStatic_dataclasses___globals);
        goto CPyL44;
    }
    cpy_r_r20 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r20);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_type", 161, CPyStatic_dataclasses___globals);
        goto CPyL45;
    }
    PyObject *cpy_r_r22[1] = {cpy_r_r16};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r23, 1, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_type", 161, CPyStatic_dataclasses___globals);
        goto CPyL45;
    } else
        goto CPyL46;
CPyL11: ;
    cpy_r_r25 = 1;
    cpy_r_r26 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_type;
    CPy_INCREF(cpy_r_r26);
    if (likely(cpy_r_r26 != Py_None))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "expand_type", 163, CPyStatic_dataclasses___globals, "mypy.types.Type", cpy_r_r26);
        goto CPyL19;
    }
    cpy_r_r28 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_info;
    cpy_r_r29 = ((mypy___nodes___TypeInfoObject *)cpy_r_r28)->_self_type;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "expand_type", "TypeInfo", "self_type", 163, CPyStatic_dataclasses___globals);
        goto CPyL47;
    }
CPyL14: ;
    if (likely(cpy_r_r29 != Py_None))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "expand_type", 163, CPyStatic_dataclasses___globals, "mypy.types.TypeVarType", cpy_r_r29);
        goto CPyL47;
    }
    cpy_r_r31 = ((mypy___types___TypeVarTypeObject *)cpy_r_r30)->_id;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = CPyDef_typevars___fill_typevars(cpy_r_current_info);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_type", 163, CPyStatic_dataclasses___globals);
        goto CPyL48;
    }
    cpy_r_r33 = CPyDict_Build(1, cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_type", 163, CPyStatic_dataclasses___globals);
        goto CPyL47;
    }
    cpy_r_r34 = CPyDef_expandtype___expand_type(cpy_r_r27, cpy_r_r33);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_type", 162, CPyStatic_dataclasses___globals);
        goto CPyL19;
    }
    cpy_r_r35 = cpy_r_r34;
    goto CPyL28;
CPyL19: ;
    cpy_r_r36 = CPy_CatchError();
    cpy_r_r25 = 0;
    cpy_r_r37 = CPy_GetExcInfo();
    cpy_r_r38 = cpy_r_r37.f0;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = cpy_r_r37.f1;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = cpy_r_r37.f2;
    CPy_INCREF(cpy_r_r40);
    CPy_DecRef(cpy_r_r37.f0);
    CPy_DecRef(cpy_r_r37.f1);
    CPy_DecRef(cpy_r_r37.f2);
    PyObject *cpy_r_r41[4] = {cpy_r_r16, cpy_r_r38, cpy_r_r39, cpy_r_r40};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = _PyObject_Vectorcall(cpy_r_r19, cpy_r_r42, 4, 0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_type", 161, CPyStatic_dataclasses___globals);
        goto CPyL49;
    }
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r40);
    cpy_r_r44 = PyObject_IsTrue(cpy_r_r43);
    CPy_DecRef(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_type", 161, CPyStatic_dataclasses___globals);
        goto CPyL25;
    }
    cpy_r_r46 = cpy_r_r44;
    if (cpy_r_r46) goto CPyL24;
    CPy_Reraise();
    if (!0) {
        goto CPyL25;
    } else
        goto CPyL50;
CPyL23: ;
    CPy_Unreachable();
CPyL24: ;
    CPy_RestoreExcInfo(cpy_r_r36);
    CPy_DecRef(cpy_r_r36.f0);
    CPy_DecRef(cpy_r_r36.f1);
    CPy_DecRef(cpy_r_r36.f2);
    goto CPyL27;
CPyL25: ;
    CPy_RestoreExcInfo(cpy_r_r36);
    CPy_DecRef(cpy_r_r36.f0);
    CPy_DecRef(cpy_r_r36.f1);
    CPy_DecRef(cpy_r_r36.f2);
    cpy_r_r47 = CPy_KeepPropagating();
    if (!cpy_r_r47) {
        goto CPyL29;
    } else
        goto CPyL51;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r48 = NULL;
    cpy_r_r35 = cpy_r_r48;
CPyL28: ;
    tuple_T3OOO __tmp4806 = { NULL, NULL, NULL };
    cpy_r_r49 = __tmp4806;
    cpy_r_r50 = cpy_r_r49;
    goto CPyL30;
CPyL29: ;
    cpy_r_r51 = NULL;
    cpy_r_r35 = cpy_r_r51;
    cpy_r_r52 = CPy_CatchError();
    cpy_r_r50 = cpy_r_r52;
CPyL30: ;
    if (!cpy_r_r25) goto CPyL52;
    cpy_r_r53 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r54[4] = {cpy_r_r16, cpy_r_r53, cpy_r_r53, cpy_r_r53};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = _PyObject_Vectorcall(cpy_r_r19, cpy_r_r55, 4, 0);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_type", 161, CPyStatic_dataclasses___globals);
        goto CPyL53;
    } else
        goto CPyL54;
CPyL32: ;
    CPy_DECREF(cpy_r_r16);
CPyL33: ;
    if (cpy_r_r50.f0 == NULL) {
        goto CPyL36;
    } else
        goto CPyL55;
CPyL34: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL38;
    } else
        goto CPyL56;
CPyL35: ;
    CPy_Unreachable();
CPyL36: ;
    if (cpy_r_r35 == NULL) goto CPyL42;
    return cpy_r_r35;
CPyL38: ;
    if (cpy_r_r50.f0 == NULL) goto CPyL40;
    CPy_RestoreExcInfo(cpy_r_r50);
    CPy_XDECREF(cpy_r_r50.f0);
    CPy_XDECREF(cpy_r_r50.f1);
    CPy_XDECREF(cpy_r_r50.f2);
CPyL40: ;
    cpy_r_r57 = CPy_KeepPropagating();
    if (!cpy_r_r57) goto CPyL43;
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r58 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_type;
    CPy_INCREF(cpy_r_r58);
    return cpy_r_r58;
CPyL43: ;
    cpy_r_r59 = NULL;
    return cpy_r_r59;
CPyL44: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    goto CPyL43;
CPyL45: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    goto CPyL43;
CPyL46: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL11;
CPyL47: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL19;
CPyL48: ;
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r31);
    goto CPyL19;
CPyL49: ;
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r40);
    goto CPyL25;
CPyL50: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r36.f0);
    CPy_DecRef(cpy_r_r36.f1);
    CPy_DecRef(cpy_r_r36.f2);
    goto CPyL23;
CPyL51: ;
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r19);
    goto CPyL26;
CPyL52: ;
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r19);
    goto CPyL33;
CPyL53: ;
    CPy_DecRef(cpy_r_r16);
    CPy_XDecRef(cpy_r_r35);
    goto CPyL38;
CPyL54: ;
    CPy_DECREF(cpy_r_r56);
    goto CPyL32;
CPyL55: ;
    CPy_XDECREF(cpy_r_r35);
    goto CPyL34;
CPyL56: ;
    CPy_XDECREF(cpy_r_r50.f0);
    CPy_XDECREF(cpy_r_r50.f1);
    CPy_XDECREF(cpy_r_r50.f2);
    goto CPyL35;
}

PyObject *CPyPy_dataclasses___DataclassAttribute___expand_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"current_info", 0};
    static CPyArg_Parser parser = {"O:expand_type", kwlist, 0};
    PyObject *obj_current_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_current_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassAttribute))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassAttribute", obj_self); 
        goto fail;
    }
    PyObject *arg_current_info;
    if (likely((Py_TYPE(obj_current_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_current_info) == CPyType_nodes___TypeInfo)))
        arg_current_info = obj_current_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_current_info); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses___DataclassAttribute___expand_type(arg_self, arg_current_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_type", 155, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses___DataclassAttribute___to_var(PyObject *cpy_r_self, PyObject *cpy_r_current_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_alias;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL10;
    CPy_INCREF(cpy_r_r0);
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "to_var", 168, CPyStatic_dataclasses___globals, "str", cpy_r_r0);
        goto CPyL11;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL10;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r5 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "to_var", 168, CPyStatic_dataclasses___globals, "str", cpy_r_r0);
        goto CPyL9;
    }
    cpy_r_r6 = cpy_r_r5;
    goto CPyL6;
CPyL5: ;
    cpy_r_r7 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r6 = cpy_r_r7;
CPyL6: ;
    cpy_r_r8 = CPyDef_dataclasses___DataclassAttribute___expand_type(cpy_r_self, cpy_r_current_info);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_var", 168, CPyStatic_dataclasses___globals);
        goto CPyL12;
    }
    cpy_r_r9 = CPyDef_nodes___Var(cpy_r_r6, cpy_r_r8);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_var", 168, CPyStatic_dataclasses___globals);
        goto CPyL9;
    }
    return cpy_r_r9;
CPyL9: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL10: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL9;
}

PyObject *CPyPy_dataclasses___DataclassAttribute___to_var(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"current_info", 0};
    static CPyArg_Parser parser = {"O:to_var", kwlist, 0};
    PyObject *obj_current_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_current_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassAttribute))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassAttribute", obj_self); 
        goto fail;
    }
    PyObject *arg_current_info;
    if (likely((Py_TYPE(obj_current_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_current_info) == CPyType_nodes___TypeInfo)))
        arg_current_info = obj_current_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_current_info); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses___DataclassAttribute___to_var(arg_self, arg_current_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "to_var", 167, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses___DataclassAttribute___serialize(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    cpy_r_r0 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "serialize", 171, CPyStatic_dataclasses___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = CPyStatics[2329]; /* 'name' */
    cpy_r_r5 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStatics[2565]; /* 'alias' */
    cpy_r_r7 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_alias;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyStatics[4493]; /* 'is_in_init' */
    cpy_r_r9 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_is_in_init;
    cpy_r_r10 = CPyStatics[4494]; /* 'is_init_var' */
    cpy_r_r11 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_is_init_var;
    cpy_r_r12 = CPyStatics[4383]; /* 'has_default' */
    cpy_r_r13 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_has_default;
    cpy_r_r14 = CPyStatics[2272]; /* 'line' */
    cpy_r_r15 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_line;
    CPyTagged_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyStatics[2273]; /* 'column' */
    cpy_r_r17 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_column;
    CPyTagged_INCREF(cpy_r_r17);
    cpy_r_r18 = CPyStatics[802]; /* 'type' */
    cpy_r_r19 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_type;
    CPy_INCREF(cpy_r_r19);
    if (likely(cpy_r_r19 != Py_None))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "serialize", 180, CPyStatic_dataclasses___globals, "mypy.types.Type", cpy_r_r19);
        goto CPyL8;
    }
    cpy_r_r21 = CPY_GET_METHOD(cpy_r_r20, CPyType_types___Type, 12, mypy___types___TypeObject, PyObject * (*)(PyObject *))(cpy_r_r20); /* serialize */
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "serialize", 180, CPyStatic_dataclasses___globals);
        goto CPyL8;
    }
    cpy_r_r22 = CPyStatics[4385]; /* 'kw_only' */
    cpy_r_r23 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_kw_only;
    cpy_r_r24 = CPyStatics[4495]; /* 'is_neither_frozen_nor_nonfrozen' */
    cpy_r_r25 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_is_neither_frozen_nor_nonfrozen;
    cpy_r_r26 = cpy_r_r9 ? Py_True : Py_False;
    cpy_r_r27 = cpy_r_r11 ? Py_True : Py_False;
    cpy_r_r28 = cpy_r_r13 ? Py_True : Py_False;
    cpy_r_r29 = CPyTagged_StealAsObject(cpy_r_r15);
    cpy_r_r30 = CPyTagged_StealAsObject(cpy_r_r17);
    cpy_r_r31 = cpy_r_r23 ? Py_True : Py_False;
    cpy_r_r32 = cpy_r_r25 ? Py_True : Py_False;
    cpy_r_r33 = CPyDict_Build(10, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r26, cpy_r_r10, cpy_r_r27, cpy_r_r12, cpy_r_r28, cpy_r_r14, cpy_r_r29, cpy_r_r16, cpy_r_r30, cpy_r_r18, cpy_r_r21, cpy_r_r22, cpy_r_r31, cpy_r_r24, cpy_r_r32);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "serialize", 172, CPyStatic_dataclasses___globals);
        goto CPyL7;
    }
    return cpy_r_r33;
CPyL7: ;
    cpy_r_r34 = NULL;
    return cpy_r_r34;
CPyL8: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_r15);
    CPyTagged_DecRef(cpy_r_r17);
    goto CPyL7;
}

PyObject *CPyPy_dataclasses___DataclassAttribute___serialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassAttribute))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassAttribute", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses___DataclassAttribute___serialize(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "serialize", 170, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses___DataclassAttribute___deserialize(PyObject *cpy_r_cls, PyObject *cpy_r_info, PyObject *cpy_r_data, PyObject *cpy_r_api) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = CPyDict_Copy(cpy_r_data);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "deserialize", 189, CPyStatic_dataclasses___globals);
        goto CPyL11;
    }
    cpy_r_data = cpy_r_r0;
    cpy_r_r1 = CPyStatics[802]; /* 'type' */
    cpy_r_r2 = CPyStatics[795]; /* 'pop' */
    PyObject *cpy_r_r3[2] = {cpy_r_data, cpy_r_r1};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "deserialize", 190, CPyStatic_dataclasses___globals);
        goto CPyL12;
    }
    if (PyUnicode_Check(cpy_r_r5))
        cpy_r_r6 = cpy_r_r5;
    else {
        cpy_r_r6 = NULL;
    }
    if (cpy_r_r6 != NULL) goto __LL4807;
    if (PyDict_Check(cpy_r_r5))
        cpy_r_r6 = cpy_r_r5;
    else {
        cpy_r_r6 = NULL;
    }
    if (cpy_r_r6 != NULL) goto __LL4807;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "deserialize", 190, CPyStatic_dataclasses___globals, "union[str, dict]", cpy_r_r5);
    goto CPyL12;
__LL4807: ;
    cpy_r_r7 = CPyDef_plugins___common___deserialize_and_fixup_type(cpy_r_r6, cpy_r_api);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "deserialize", 190, CPyStatic_dataclasses___globals);
        goto CPyL12;
    }
    cpy_r_typ = cpy_r_r7;
    cpy_r_r8 = CPyStatics[802]; /* 'type' */
    cpy_r_r9 = CPyStatics[2563]; /* 'info' */
    cpy_r_r10 = CPyDict_Build(2, cpy_r_r8, cpy_r_typ, cpy_r_r9, cpy_r_info);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "deserialize", 191, CPyStatic_dataclasses___globals);
        goto CPyL12;
    }
    cpy_r_r11 = CPyDict_UpdateInDisplay(cpy_r_r10, cpy_r_data);
    CPy_DECREF(cpy_r_data);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "deserialize", 191, CPyStatic_dataclasses___globals);
        goto CPyL13;
    }
    cpy_r_r13 = CPyStatics[4369]; /* 'api' */
    cpy_r_r14 = CPyDict_SetItem(cpy_r_r10, cpy_r_r13, cpy_r_api);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "deserialize", 191, CPyStatic_dataclasses___globals);
        goto CPyL13;
    }
    cpy_r_r16 = PyTuple_Pack(0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "deserialize", 191, CPyStatic_dataclasses___globals);
        goto CPyL13;
    }
    cpy_r_r17 = PyObject_Call(cpy_r_cls, cpy_r_r16, cpy_r_r10);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "deserialize", 191, CPyStatic_dataclasses___globals);
        goto CPyL11;
    }
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_dataclasses___DataclassAttribute))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "deserialize", 191, CPyStatic_dataclasses___globals, "mypy.plugins.dataclasses.DataclassAttribute", cpy_r_r17);
        goto CPyL11;
    }
    return cpy_r_r18;
CPyL11: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL12: ;
    CPy_DecRef(cpy_r_data);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL11;
}

PyObject *CPyPy_dataclasses___DataclassAttribute___deserialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_cls = self;
    static const char * const kwlist[] = {"info", "data", "api", 0};
    static CPyArg_Parser parser = {"OOO:deserialize", kwlist, 0};
    PyObject *obj_info;
    PyObject *obj_data;
    PyObject *obj_api;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_info, &obj_data, &obj_api)) {
        return NULL;
    }
    PyObject *arg_cls = obj_cls;
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_data;
    if (likely(PyDict_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("dict", obj_data); 
        goto fail;
    }
    PyObject *arg_api;
    if (likely(Py_TYPE(obj_api) == CPyType_semanal___SemanticAnalyzer))
        arg_api = obj_api;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_api); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses___DataclassAttribute___deserialize(arg_cls, arg_info, arg_data, arg_api);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "deserialize", 186, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___DataclassAttribute___expand_typevar_from_subtype(PyObject *cpy_r_self, PyObject *cpy_r_sub_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    tuple_T3OOO cpy_r_r27;
    tuple_T3OOO cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    tuple_T3OOO cpy_r_r39;
    tuple_T3OOO cpy_r_r40;
    tuple_T3OOO cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    size_t __tmp4808;
    cpy_r_r0 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_type;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL33;
    cpy_r_r3 = CPyStatic_state___state;
    if (likely(cpy_r_r3 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_typevar_from_subtype", 197, CPyStatic_dataclasses___globals);
        goto CPyL34;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->__api;
    __tmp4808 = CPy_FindAttrOffset(CPyType_plugin___SemanticAnalyzerPluginInterface, ((mypy___plugin___SemanticAnalyzerPluginInterfaceObject *)cpy_r_r5)->vtable, 1);
    cpy_r_r6 = *(PyObject * *)((char *)cpy_r_r5 + __tmp4808);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "expand_typevar_from_subtype", "SemanticAnalyzerPluginInterface", "options", 197, CPyStatic_dataclasses___globals);
        goto CPyL34;
    }
CPyL5: ;
    cpy_r_r7 = ((mypy___options___OptionsObject *)cpy_r_r6)->_strict_optional;
    cpy_r_r8 = CPyStatics[692]; /* 'strict_optional_set' */
    cpy_r_r9 = cpy_r_r7 ? Py_True : Py_False;
    PyObject *cpy_r_r10[2] = {cpy_r_r3, cpy_r_r9};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r11, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_typevar_from_subtype", 197, CPyStatic_dataclasses___globals);
        goto CPyL34;
    }
    cpy_r_r13 = PyObject_Type(cpy_r_r12);
    cpy_r_r14 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_typevar_from_subtype", 197, CPyStatic_dataclasses___globals);
        goto CPyL35;
    }
    cpy_r_r16 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r16);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_typevar_from_subtype", 197, CPyStatic_dataclasses___globals);
        goto CPyL36;
    }
    PyObject *cpy_r_r18[1] = {cpy_r_r12};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r17, cpy_r_r19, 1, 0);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_typevar_from_subtype", 197, CPyStatic_dataclasses___globals);
        goto CPyL36;
    } else
        goto CPyL37;
CPyL9: ;
    cpy_r_r21 = 1;
    cpy_r_r22 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_type;
    CPy_INCREF(cpy_r_r22);
    if (likely(cpy_r_r22 != Py_None))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "expand_typevar_from_subtype", 198, CPyStatic_dataclasses___globals, "mypy.types.Type", cpy_r_r22);
        goto CPyL13;
    }
    cpy_r_r24 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_info;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyDef_typeops___map_type_from_supertype(cpy_r_r23, cpy_r_sub_type, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_typevar_from_subtype", 198, CPyStatic_dataclasses___globals);
        goto CPyL13;
    }
    CPy_DECREF(((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_type);
    ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_self)->_type = cpy_r_r25;
    goto CPyL21;
CPyL13: ;
    cpy_r_r27 = CPy_CatchError();
    cpy_r_r21 = 0;
    cpy_r_r28 = CPy_GetExcInfo();
    cpy_r_r29 = cpy_r_r28.f0;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = cpy_r_r28.f1;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = cpy_r_r28.f2;
    CPy_INCREF(cpy_r_r31);
    CPy_DecRef(cpy_r_r28.f0);
    CPy_DecRef(cpy_r_r28.f1);
    CPy_DecRef(cpy_r_r28.f2);
    PyObject *cpy_r_r32[4] = {cpy_r_r12, cpy_r_r29, cpy_r_r30, cpy_r_r31};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r33, 4, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_typevar_from_subtype", 197, CPyStatic_dataclasses___globals);
        goto CPyL38;
    }
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    cpy_r_r35 = PyObject_IsTrue(cpy_r_r34);
    CPy_DecRef(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_typevar_from_subtype", 197, CPyStatic_dataclasses___globals);
        goto CPyL19;
    }
    cpy_r_r37 = cpy_r_r35;
    if (cpy_r_r37) goto CPyL18;
    CPy_Reraise();
    if (!0) {
        goto CPyL19;
    } else
        goto CPyL39;
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    CPy_RestoreExcInfo(cpy_r_r27);
    CPy_DecRef(cpy_r_r27.f0);
    CPy_DecRef(cpy_r_r27.f1);
    CPy_DecRef(cpy_r_r27.f2);
    goto CPyL21;
CPyL19: ;
    CPy_RestoreExcInfo(cpy_r_r27);
    CPy_DecRef(cpy_r_r27.f0);
    CPy_DecRef(cpy_r_r27.f1);
    CPy_DecRef(cpy_r_r27.f2);
    cpy_r_r38 = CPy_KeepPropagating();
    if (!cpy_r_r38) {
        goto CPyL22;
    } else
        goto CPyL40;
CPyL20: ;
    CPy_Unreachable();
CPyL21: ;
    tuple_T3OOO __tmp4809 = { NULL, NULL, NULL };
    cpy_r_r39 = __tmp4809;
    cpy_r_r40 = cpy_r_r39;
    goto CPyL23;
CPyL22: ;
    cpy_r_r41 = CPy_CatchError();
    cpy_r_r40 = cpy_r_r41;
CPyL23: ;
    if (!cpy_r_r21) goto CPyL41;
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r43[4] = {cpy_r_r12, cpy_r_r42, cpy_r_r42, cpy_r_r42};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r44, 4, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_typevar_from_subtype", 197, CPyStatic_dataclasses___globals);
        goto CPyL42;
    } else
        goto CPyL43;
CPyL25: ;
    CPy_DECREF(cpy_r_r12);
CPyL26: ;
    if (cpy_r_r40.f0 == NULL) goto CPyL33;
    CPy_Reraise();
    if (!0) {
        goto CPyL29;
    } else
        goto CPyL44;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    if (cpy_r_r40.f0 == NULL) goto CPyL31;
    CPy_RestoreExcInfo(cpy_r_r40);
    CPy_XDECREF(cpy_r_r40.f0);
    CPy_XDECREF(cpy_r_r40.f1);
    CPy_XDECREF(cpy_r_r40.f2);
CPyL31: ;
    cpy_r_r46 = CPy_KeepPropagating();
    if (!cpy_r_r46) goto CPyL34;
    CPy_Unreachable();
CPyL33: ;
    return 1;
CPyL34: ;
    cpy_r_r47 = 2;
    return cpy_r_r47;
CPyL35: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    goto CPyL34;
CPyL36: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    goto CPyL34;
CPyL37: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL9;
CPyL38: ;
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    goto CPyL19;
CPyL39: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r27.f0);
    CPy_DecRef(cpy_r_r27.f1);
    CPy_DecRef(cpy_r_r27.f2);
    goto CPyL17;
CPyL40: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r15);
    goto CPyL20;
CPyL41: ;
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r15);
    goto CPyL26;
CPyL42: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL29;
CPyL43: ;
    CPy_DECREF(cpy_r_r45);
    goto CPyL25;
CPyL44: ;
    CPy_XDECREF(cpy_r_r40.f0);
    CPy_XDECREF(cpy_r_r40.f1);
    CPy_XDECREF(cpy_r_r40.f2);
    goto CPyL28;
}

PyObject *CPyPy_dataclasses___DataclassAttribute___expand_typevar_from_subtype(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"sub_type", 0};
    static CPyArg_Parser parser = {"O:expand_typevar_from_subtype", kwlist, 0};
    PyObject *obj_sub_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_sub_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassAttribute))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassAttribute", obj_self); 
        goto fail;
    }
    PyObject *arg_sub_type;
    if (likely((Py_TYPE(obj_sub_type) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_sub_type) == CPyType_nodes___TypeInfo)))
        arg_sub_type = obj_sub_type;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_sub_type); 
        goto fail;
    }
    char retval = CPyDef_dataclasses___DataclassAttribute___expand_typevar_from_subtype(arg_self, arg_sub_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "expand_typevar_from_subtype", 193, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___DataclassTransformer_____init__(PyObject *cpy_r_self, PyObject *cpy_r_cls, PyObject *cpy_r_reason, PyObject *cpy_r_spec, PyObject *cpy_r_api) {
    CPy_INCREF(cpy_r_cls);
    ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls = cpy_r_cls;
    CPy_INCREF(cpy_r_reason);
    ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__reason = cpy_r_reason;
    CPy_INCREF(cpy_r_spec);
    ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__spec = cpy_r_spec;
    CPy_INCREF(cpy_r_api);
    ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api = cpy_r_api;
    return 1;
}

PyObject *CPyPy_dataclasses___DataclassTransformer_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"cls", "reason", "spec", "api", 0};
    PyObject *obj_cls;
    PyObject *obj_reason;
    PyObject *obj_spec;
    PyObject *obj_api;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOO", "__init__", kwlist, &obj_cls, &obj_reason, &obj_spec, &obj_api)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    PyObject *arg_cls;
    if (likely(Py_TYPE(obj_cls) == CPyType_nodes___ClassDef))
        arg_cls = obj_cls;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cls); 
        goto fail;
    }
    PyObject *arg_reason;
    if (PyObject_TypeCheck(obj_reason, CPyType_nodes___Expression))
        arg_reason = obj_reason;
    else {
        arg_reason = NULL;
    }
    if (arg_reason != NULL) goto __LL4810;
    if (PyObject_TypeCheck(obj_reason, CPyType_nodes___Statement))
        arg_reason = obj_reason;
    else {
        arg_reason = NULL;
    }
    if (arg_reason != NULL) goto __LL4810;
    CPy_TypeError("union[mypy.nodes.Expression, mypy.nodes.Statement]", obj_reason); 
    goto fail;
__LL4810: ;
    PyObject *arg_spec;
    if (likely(Py_TYPE(obj_spec) == CPyType_nodes___DataclassTransformSpec))
        arg_spec = obj_spec;
    else {
        CPy_TypeError("mypy.nodes.DataclassTransformSpec", obj_spec); 
        goto fail;
    }
    PyObject *arg_api;
    if (likely(Py_TYPE(obj_api) == CPyType_semanal___SemanticAnalyzer))
        arg_api = obj_api;
    else {
        CPy_TypeError("mypy.plugin.SemanticAnalyzerPluginInterface", obj_api); 
        goto fail;
    }
    char retval = CPyDef_dataclasses___DataclassTransformer_____init__(arg_self, arg_cls, arg_reason, arg_spec, arg_api);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "__init__", 211, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___DataclassTransformer___transform(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_attributes;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_decorator_arguments;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    tuple_T2II cpy_r_r50;
    tuple_T2II cpy_r_py_version;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    int64_t cpy_r_r67;
    CPyTagged cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyTagged cpy_r_r72;
    CPyPtr cpy_r_r73;
    int64_t cpy_r_r74;
    CPyTagged cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_attr_2;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    CPyTagged cpy_r_r88;
    PyObject *cpy_r_args;
    char cpy_r_r89;
    CPyTagged cpy_r_r90;
    CPyPtr cpy_r_r91;
    int64_t cpy_r_r92;
    CPyTagged cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    CPyTagged cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_nameless_var;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyTagged cpy_r_r110;
    CPyTagged cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    CPyTagged cpy_r_r120;
    CPyTagged cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    CPyPtr cpy_r_r129;
    CPyPtr cpy_r_r130;
    PyObject *cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    CPyTagged cpy_r_r137;
    CPyTagged cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_obj_type;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    CPyTagged cpy_r_r168;
    CPyTagged cpy_r_r169;
    PyObject *cpy_r_r170;
    CPyTagged cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_self_tvar_expr;
    char cpy_r_r173;
    char cpy_r_r174;
    char cpy_r_r175;
    char cpy_r_r176;
    char cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    int32_t cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    char cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    char cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    CPyPtr cpy_r_r201;
    CPyPtr cpy_r_r202;
    CPyPtr cpy_r_r203;
    CPyPtr cpy_r_r204;
    CPyPtr cpy_r_r205;
    CPyTagged cpy_r_r206;
    CPyPtr cpy_r_r207;
    int64_t cpy_r_r208;
    CPyTagged cpy_r_r209;
    char cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_method_name;
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
    CPyTagged cpy_r_r226;
    CPyTagged cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    CPyTagged cpy_r_r230;
    CPyTagged cpy_r_r231;
    CPyTagged cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_order_tvar_def;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_order_return_type;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    char cpy_r_r241;
    PyObject *cpy_r_r242;
    char cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    CPyPtr cpy_r_r246;
    CPyPtr cpy_r_r247;
    PyObject *cpy_r_order_args;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_existing_method;
    PyObject *cpy_r_r249;
    char cpy_r_r250;
    PyObject *cpy_r_r251;
    char cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    PyObject *cpy_r_r255;
    char cpy_r_r256;
    PyObject *cpy_r_r257;
    int32_t cpy_r_r258;
    char cpy_r_r259;
    char cpy_r_r260;
    char cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    char cpy_r_r269;
    char cpy_r_r270;
    PyObject *cpy_r_r271;
    char cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    char cpy_r_r275;
    char cpy_r_r276;
    char cpy_r_r277;
    CPyTagged cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_parent_decorator_arguments;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    CPyTagged cpy_r_r283;
    CPyPtr cpy_r_r284;
    int64_t cpy_r_r285;
    CPyTagged cpy_r_r286;
    char cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_parent;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    PyObject *cpy_r_r293;
    PyObject *cpy_r_parent_args;
    PyObject *cpy_r_r294;
    char cpy_r_r295;
    PyObject *cpy_r_r296;
    int64_t cpy_r_r297;
    CPyTagged cpy_r_r298;
    char cpy_r_r299;
    char cpy_r_r300;
    PyObject *cpy_r_r301;
    int32_t cpy_r_r302;
    char cpy_r_r303;
    CPyTagged cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    char cpy_r_r307;
    char cpy_r_r308;
    CPyTagged cpy_r_r309;
    CPyPtr cpy_r_r310;
    int64_t cpy_r_r311;
    CPyTagged cpy_r_r312;
    char cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    PyObject *cpy_r_parent_2;
    PyObject *cpy_r_r316;
    PyObject *cpy_r_r317;
    int32_t cpy_r_r318;
    char cpy_r_r319;
    char cpy_r_r320;
    CPyTagged cpy_r_r321;
    PyObject *cpy_r_r322;
    PyObject *cpy_r_r323;
    char cpy_r_r324;
    char cpy_r_r325;
    PyObject *cpy_r_r326;
    char cpy_r_r327;
    PyObject *cpy_r_r328;
    char cpy_r_r329;
    PyObject *cpy_r_r330;
    char cpy_r_r331;
    char cpy_r_r332;
    CPyTagged cpy_r_r333;
    CPyPtr cpy_r_r334;
    int64_t cpy_r_r335;
    CPyTagged cpy_r_r336;
    char cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_parent_3;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    int32_t cpy_r_r342;
    char cpy_r_r343;
    char cpy_r_r344;
    CPyTagged cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    char cpy_r_r348;
    char cpy_r_r349;
    PyObject *cpy_r_r350;
    char cpy_r_r351;
    PyObject *cpy_r_r352;
    char cpy_r_r353;
    char cpy_r_r354;
    PyObject *cpy_r_r355;
    PyObject *cpy_r_r356;
    char cpy_r_r357;
    PyObject *cpy_r_r358;
    tuple_T2II cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    char cpy_r_r363;
    char cpy_r_r364;
    PyObject *cpy_r_r365;
    char cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    char cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    int32_t cpy_r_r372;
    char cpy_r_r373;
    char cpy_r_r374;
    char cpy_r_r375;
    PyObject *cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    PyObject *cpy_r_r379;
    char cpy_r_r380;
    PyObject *cpy_r_r381;
    CPyPtr cpy_r_r382;
    int64_t cpy_r_r383;
    CPyTagged cpy_r_r384;
    char cpy_r_r385;
    tuple_T2II cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    char cpy_r_r390;
    PyObject *cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    PyObject *cpy_r_r394;
    PyObject *cpy_r_str_type;
    PyObject *cpy_r_r395;
    PyObject *cpy_r_r396;
    CPyTagged cpy_r_r397;
    CPyPtr cpy_r_r398;
    int64_t cpy_r_r399;
    CPyTagged cpy_r_r400;
    char cpy_r_r401;
    PyObject *cpy_r_r402;
    PyObject *cpy_r_r403;
    PyObject *cpy_r_attr_3;
    char cpy_r_r404;
    PyObject *cpy_r_r405;
    CPyTagged cpy_r_r406;
    CPyTagged cpy_r_r407;
    PyObject *cpy_r_r408;
    int32_t cpy_r_r409;
    char cpy_r_r410;
    CPyTagged cpy_r_r411;
    PyObject *cpy_r_literals;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    PyObject *cpy_r_r415;
    CPyTagged cpy_r_r416;
    CPyTagged cpy_r_r417;
    char cpy_r_r418;
    PyObject *cpy_r_r419;
    PyObject *cpy_r_match_args_type;
    PyObject *cpy_r_r420;
    PyObject *cpy_r_r421;
    PyObject *cpy_r_r422;
    char cpy_r_r423;
    char cpy_r_r424;
    char cpy_r_r425;
    PyObject *cpy_r_r426;
    char cpy_r_r427;
    char cpy_r_r428;
    char cpy_r_r429;
    PyObject *cpy_r_r430;
    PyObject *cpy_r_r431;
    char cpy_r_r432;
    char cpy_r_r433;
    PyObject *cpy_r_r434;
    char cpy_r_r435;
    PyObject *cpy_r_r436;
    PyObject *cpy_r_r437;
    int32_t cpy_r_r438;
    char cpy_r_r439;
    char cpy_r_r440;
    PyObject *cpy_r_r441;
    char cpy_r_r442;
    PyObject *cpy_r_r443;
    PyObject *cpy_r_r444;
    CPyPtr cpy_r_r445;
    int64_t cpy_r_r446;
    PyObject *cpy_r_r447;
    CPyTagged cpy_r_r448;
    CPyPtr cpy_r_r449;
    int64_t cpy_r_r450;
    CPyTagged cpy_r_r451;
    char cpy_r_r452;
    PyObject *cpy_r_r453;
    PyObject *cpy_r_r454;
    PyObject *cpy_r_attr_4;
    PyObject *cpy_r_r455;
    char cpy_r_r456;
    CPyTagged cpy_r_r457;
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
    char cpy_r_r468;
    size_t __tmp4811;
    cpy_r_r0 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    cpy_r_r1 = ((mypy___nodes___ClassDefObject *)cpy_r_r0)->_info;
    CPy_INCREF(cpy_r_r1);
    cpy_r_info = cpy_r_r1;
    cpy_r_r2 = CPyDef_dataclasses___DataclassTransformer___collect_attributes(cpy_r_self);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 231, CPyStatic_dataclasses___globals);
        goto CPyL245;
    }
    cpy_r_attributes = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_attributes == cpy_r_r3;
    if (cpy_r_r4) {
        goto CPyL246;
    } else
        goto CPyL3;
CPyL2: ;
    return 0;
CPyL3: ;
    CPy_INCREF(cpy_r_attributes);
    if (likely(cpy_r_attributes != Py_None))
        cpy_r_r5 = cpy_r_attributes;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 235, CPyStatic_dataclasses___globals, "list", cpy_r_attributes);
        goto CPyL247;
    }
    cpy_r_r6 = 0;
CPyL5: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL248;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_dataclasses___DataclassAttribute))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 235, CPyStatic_dataclasses___globals, "mypy.plugins.dataclasses.DataclassAttribute", cpy_r_r11);
        goto CPyL249;
    }
    cpy_r_attr = cpy_r_r12;
    cpy_r_r13 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_type;
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_r13 == cpy_r_r14;
    CPy_DECREF(cpy_r_attr);
    if (cpy_r_r15) {
        goto CPyL250;
    } else
        goto CPyL9;
CPyL8: ;
    return 0;
CPyL9: ;
    cpy_r_r16 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r16;
    goto CPyL5;
CPyL10: ;
    cpy_r_r17 = CPyStatics[4384]; /* 'init' */
    cpy_r_r18 = CPyStatics[4384]; /* 'init' */
    cpy_r_r19 = CPyDef_dataclasses___DataclassTransformer____get_bool_arg(cpy_r_self, cpy_r_r18, 1);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 239, CPyStatic_dataclasses___globals);
        goto CPyL247;
    }
    cpy_r_r20 = CPyStatics[4392]; /* 'eq' */
    cpy_r_r21 = CPyStatics[4392]; /* 'eq' */
    cpy_r_r22 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__spec;
    cpy_r_r23 = ((mypy___nodes___DataclassTransformSpecObject *)cpy_r_r22)->_eq_default;
    cpy_r_r24 = CPyDef_dataclasses___DataclassTransformer____get_bool_arg(cpy_r_self, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 240, CPyStatic_dataclasses___globals);
        goto CPyL247;
    }
    cpy_r_r25 = CPyStatics[665]; /* 'order' */
    cpy_r_r26 = CPyStatics[665]; /* 'order' */
    cpy_r_r27 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__spec;
    cpy_r_r28 = ((mypy___nodes___DataclassTransformSpecObject *)cpy_r_r27)->_order_default;
    cpy_r_r29 = CPyDef_dataclasses___DataclassTransformer____get_bool_arg(cpy_r_self, cpy_r_r26, cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 241, CPyStatic_dataclasses___globals);
        goto CPyL247;
    }
    cpy_r_r30 = CPyStatics[4400]; /* 'frozen' */
    cpy_r_r31 = CPyStatics[4400]; /* 'frozen' */
    cpy_r_r32 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__spec;
    cpy_r_r33 = ((mypy___nodes___DataclassTransformSpecObject *)cpy_r_r32)->_frozen_default;
    cpy_r_r34 = CPyDef_dataclasses___DataclassTransformer____get_bool_arg(cpy_r_self, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 242, CPyStatic_dataclasses___globals);
        goto CPyL247;
    }
    cpy_r_r35 = CPyStatics[4006]; /* 'slots' */
    cpy_r_r36 = CPyStatics[4006]; /* 'slots' */
    cpy_r_r37 = CPyDef_dataclasses___DataclassTransformer____get_bool_arg(cpy_r_self, cpy_r_r36, 0);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 243, CPyStatic_dataclasses___globals);
        goto CPyL247;
    }
    cpy_r_r38 = CPyStatics[4398]; /* 'match_args' */
    cpy_r_r39 = CPyStatics[4398]; /* 'match_args' */
    cpy_r_r40 = CPyDef_dataclasses___DataclassTransformer____get_bool_arg(cpy_r_self, cpy_r_r39, 1);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 244, CPyStatic_dataclasses___globals);
        goto CPyL247;
    }
    cpy_r_r41 = cpy_r_r19 ? Py_True : Py_False;
    cpy_r_r42 = cpy_r_r24 ? Py_True : Py_False;
    cpy_r_r43 = cpy_r_r29 ? Py_True : Py_False;
    cpy_r_r44 = cpy_r_r34 ? Py_True : Py_False;
    cpy_r_r45 = cpy_r_r37 ? Py_True : Py_False;
    cpy_r_r46 = cpy_r_r40 ? Py_True : Py_False;
    cpy_r_r47 = CPyDict_Build(6, cpy_r_r17, cpy_r_r41, cpy_r_r20, cpy_r_r42, cpy_r_r25, cpy_r_r43, cpy_r_r30, cpy_r_r44, cpy_r_r35, cpy_r_r45, cpy_r_r38, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 238, CPyStatic_dataclasses___globals);
        goto CPyL247;
    }
    cpy_r_decorator_arguments = cpy_r_r47;
    cpy_r_r48 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    __tmp4811 = CPy_FindAttrOffset(CPyType_plugin___SemanticAnalyzerPluginInterface, ((mypy___plugin___SemanticAnalyzerPluginInterfaceObject *)cpy_r_r48)->vtable, 1);
    cpy_r_r49 = *(PyObject * *)((char *)cpy_r_r48 + __tmp4811);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "transform", "SemanticAnalyzerPluginInterface", "options", 246, CPyStatic_dataclasses___globals);
        goto CPyL251;
    }
CPyL18: ;
    cpy_r_r50 = ((mypy___options___OptionsObject *)cpy_r_r49)->_python_version;
    CPyTagged_INCREF(cpy_r_r50.f0);
    CPyTagged_INCREF(cpy_r_r50.f1);
    cpy_r_py_version = cpy_r_r50;
    cpy_r_r51 = CPyStatics[4384]; /* 'init' */
    cpy_r_r52 = CPyDict_GetItem(cpy_r_decorator_arguments, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 253, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    if (unlikely(!PyBool_Check(cpy_r_r52))) {
        CPy_TypeError("bool", cpy_r_r52); cpy_r_r53 = 2;
    } else
        cpy_r_r53 = cpy_r_r52 == Py_True;
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 253, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    if (!cpy_r_r53) goto CPyL74;
    cpy_r_r54 = CPyStatics[288]; /* '__init__' */
    cpy_r_r55 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "transform", "TypeInfo", "names", 254, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    CPy_INCREF(cpy_r_r55);
CPyL22: ;
    cpy_r_r56 = PyDict_Contains(cpy_r_r55, cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 254, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    cpy_r_r58 = cpy_r_r56;
    cpy_r_r59 = cpy_r_r58 ^ 1;
    if (cpy_r_r59) goto CPyL28;
    cpy_r_r60 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "transform", "TypeInfo", "names", 254, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    CPy_INCREF(cpy_r_r60);
CPyL25: ;
    cpy_r_r61 = CPyStatics[288]; /* '__init__' */
    cpy_r_r62 = CPyDict_GetItem(cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 254, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    if (likely(Py_TYPE(cpy_r_r62) == CPyType_nodes___SymbolTableNode))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 254, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode", cpy_r_r62);
        goto CPyL252;
    }
    cpy_r_r64 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r63)->_plugin_generated;
    CPy_DECREF(cpy_r_r63);
    if (!cpy_r_r64) goto CPyL74;
CPyL28: ;
    CPy_INCREF(cpy_r_attributes);
    if (likely(cpy_r_attributes != Py_None))
        cpy_r_r65 = cpy_r_attributes;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 255, CPyStatic_dataclasses___globals, "list", cpy_r_attributes);
        goto CPyL252;
    }
    cpy_r_r66 = (CPyPtr)&((PyVarObject *)cpy_r_r65)->ob_size;
    cpy_r_r67 = *(int64_t *)cpy_r_r66;
    CPy_DECREF(cpy_r_r65);
    cpy_r_r68 = cpy_r_r67 << 1;
    cpy_r_r69 = cpy_r_r68 != 0;
    if (!cpy_r_r69) goto CPyL74;
    cpy_r_r70 = PyList_New(0);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 257, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    CPy_INCREF(cpy_r_attributes);
    if (likely(cpy_r_attributes != Py_None))
        cpy_r_r71 = cpy_r_attributes;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 259, CPyStatic_dataclasses___globals, "list", cpy_r_attributes);
        goto CPyL253;
    }
    cpy_r_r72 = 0;
CPyL33: ;
    cpy_r_r73 = (CPyPtr)&((PyVarObject *)cpy_r_r71)->ob_size;
    cpy_r_r74 = *(int64_t *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r74 << 1;
    cpy_r_r76 = (Py_ssize_t)cpy_r_r72 < (Py_ssize_t)cpy_r_r75;
    if (!cpy_r_r76) goto CPyL254;
    cpy_r_r77 = CPyList_GetItemUnsafe(cpy_r_r71, cpy_r_r72);
    if (likely(Py_TYPE(cpy_r_r77) == CPyType_dataclasses___DataclassAttribute))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 257, CPyStatic_dataclasses___globals, "mypy.plugins.dataclasses.DataclassAttribute", cpy_r_r77);
        goto CPyL255;
    }
    cpy_r_attr_2 = cpy_r_r78;
    cpy_r_r79 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr_2)->_is_in_init;
    if (cpy_r_r79) goto CPyL37;
CPyL36: ;
    cpy_r_r80 = cpy_r_r79;
    goto CPyL39;
CPyL37: ;
    cpy_r_r81 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr_2)->_type;
    CPy_INCREF(cpy_r_r81);
    cpy_r_r82 = CPyDef_dataclasses___DataclassTransformer____is_kw_only_type(cpy_r_self, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 260, CPyStatic_dataclasses___globals);
        goto CPyL256;
    }
    cpy_r_r83 = cpy_r_r82 ^ 1;
    cpy_r_r80 = cpy_r_r83;
CPyL39: ;
    if (!cpy_r_r80) goto CPyL257;
    cpy_r_r84 = CPyStatics[288]; /* '__init__' */
    cpy_r_r85 = CPyDef_dataclasses___DataclassAttribute___to_argument(cpy_r_attr_2, cpy_r_info, cpy_r_r84);
    CPy_DECREF(cpy_r_attr_2);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 258, CPyStatic_dataclasses___globals);
        goto CPyL255;
    }
    cpy_r_r86 = PyList_Append(cpy_r_r70, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 257, CPyStatic_dataclasses___globals);
        goto CPyL255;
    }
CPyL42: ;
    cpy_r_r88 = cpy_r_r72 + 2;
    cpy_r_r72 = cpy_r_r88;
    goto CPyL33;
CPyL43: ;
    cpy_r_args = cpy_r_r70;
    cpy_r_r89 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_fallback_to_any;
    if (unlikely(cpy_r_r89 == 2)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "transform", "TypeInfo", "fallback_to_any", 263, CPyStatic_dataclasses___globals);
        goto CPyL258;
    }
CPyL44: ;
    if (!cpy_r_r89) goto CPyL72;
CPyL45: ;
    cpy_r_r90 = 0;
CPyL46: ;
    cpy_r_r91 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r92 = *(int64_t *)cpy_r_r91;
    cpy_r_r93 = cpy_r_r92 << 1;
    cpy_r_r94 = (Py_ssize_t)cpy_r_r90 < (Py_ssize_t)cpy_r_r93;
    if (!cpy_r_r94) goto CPyL57;
    cpy_r_r95 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r90);
    if (likely(Py_TYPE(cpy_r_r95) == CPyType_nodes___Argument))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 267, CPyStatic_dataclasses___globals, "mypy.nodes.Argument", cpy_r_r95);
        goto CPyL258;
    }
    cpy_r_arg = cpy_r_r96;
    cpy_r_r97 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_kind;
    CPy_INCREF(cpy_r_r97);
    cpy_r_r98 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r98 == NULL)) {
        goto CPyL259;
    } else
        goto CPyL51;
CPyL49: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r99 = 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 268, CPyStatic_dataclasses___globals);
        goto CPyL244;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r100 = cpy_r_r97 == cpy_r_r98;
    CPy_DECREF(cpy_r_r97);
    if (!cpy_r_r100) goto CPyL260;
    cpy_r_r101 = CPyStatic_nodes___ARG_OPT;
    if (unlikely(cpy_r_r101 == NULL)) {
        goto CPyL261;
    } else
        goto CPyL55;
CPyL53: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_OPT\" was not set");
    cpy_r_r102 = 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 269, CPyStatic_dataclasses___globals);
        goto CPyL244;
    }
    CPy_Unreachable();
CPyL55: ;
    CPy_INCREF(cpy_r_r101);
    CPy_DECREF(((mypy___nodes___ArgumentObject *)cpy_r_arg)->_kind);
    ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_kind = cpy_r_r101;
    CPy_DECREF(cpy_r_arg);
CPyL56: ;
    cpy_r_r104 = cpy_r_r90 + 2;
    cpy_r_r90 = cpy_r_r104;
    goto CPyL46;
CPyL57: ;
    cpy_r_r105 = CPyStatics[163]; /* '' */
    cpy_r_r106 = NULL;
    cpy_r_r107 = CPyDef_nodes___Var(cpy_r_r105, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 271, CPyStatic_dataclasses___globals);
        goto CPyL258;
    }
    cpy_r_nameless_var = cpy_r_r107;
    cpy_r_r108 = NULL;
    cpy_r_r109 = NULL;
    cpy_r_r110 = CPY_INT_TAG;
    cpy_r_r111 = CPY_INT_TAG;
    cpy_r_r112 = CPyDef_types___AnyType(4, cpy_r_r108, cpy_r_r109, cpy_r_r110, cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 273, CPyStatic_dataclasses___globals);
        goto CPyL262;
    }
    cpy_r_r113 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r113 == NULL)) {
        goto CPyL263;
    } else
        goto CPyL62;
CPyL60: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r114 = 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 273, CPyStatic_dataclasses___globals);
        goto CPyL244;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r115 = Py_None;
    cpy_r_r116 = 2;
    cpy_r_r117 = CPyDef_nodes___Argument(cpy_r_nameless_var, cpy_r_r112, cpy_r_r115, cpy_r_r113, cpy_r_r116);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 273, CPyStatic_dataclasses___globals);
        goto CPyL262;
    }
    cpy_r_r118 = NULL;
    cpy_r_r119 = NULL;
    cpy_r_r120 = CPY_INT_TAG;
    cpy_r_r121 = CPY_INT_TAG;
    cpy_r_r122 = CPyDef_types___AnyType(4, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 275, CPyStatic_dataclasses___globals);
        goto CPyL264;
    }
    cpy_r_r123 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r123 == NULL)) {
        goto CPyL265;
    } else
        goto CPyL67;
CPyL65: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r124 = 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 275, CPyStatic_dataclasses___globals);
        goto CPyL244;
    }
    CPy_Unreachable();
CPyL67: ;
    cpy_r_r125 = Py_None;
    cpy_r_r126 = 2;
    cpy_r_r127 = CPyDef_nodes___Argument(cpy_r_nameless_var, cpy_r_r122, cpy_r_r125, cpy_r_r123, cpy_r_r126);
    CPy_DECREF(cpy_r_nameless_var);
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 275, CPyStatic_dataclasses___globals);
        goto CPyL266;
    }
    cpy_r_r128 = PyList_New(1);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 272, CPyStatic_dataclasses___globals);
        goto CPyL267;
    }
    cpy_r_r129 = (CPyPtr)&((PyListObject *)cpy_r_r128)->ob_item;
    cpy_r_r130 = *(CPyPtr *)cpy_r_r129;
    *(PyObject * *)cpy_r_r130 = cpy_r_r117;
    cpy_r_r131 = CPyList_Extend(cpy_r_r128, cpy_r_args);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 272, CPyStatic_dataclasses___globals);
        goto CPyL268;
    } else
        goto CPyL269;
CPyL70: ;
    cpy_r_r132 = PyList_Append(cpy_r_r128, cpy_r_r127);
    CPy_DECREF(cpy_r_r127);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 272, CPyStatic_dataclasses___globals);
        goto CPyL270;
    }
    cpy_r_args = cpy_r_r128;
CPyL72: ;
    cpy_r_r134 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r134);
    cpy_r_r135 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    CPy_INCREF(cpy_r_r135);
    cpy_r_r136 = CPyStatics[288]; /* '__init__' */
    cpy_r_r137 = CPY_INT_TAG;
    cpy_r_r138 = CPY_INT_TAG;
    cpy_r_r139 = CPyDef_types___NoneType(cpy_r_r137, cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 279, CPyStatic_dataclasses___globals);
        goto CPyL271;
    }
    cpy_r_r140 = NULL;
    cpy_r_r141 = NULL;
    cpy_r_r142 = 2;
    cpy_r_r143 = 2;
    cpy_r_r144 = CPyDef_plugins___common___add_method_to_class(cpy_r_r134, cpy_r_r135, cpy_r_r136, cpy_r_args, cpy_r_r139, cpy_r_r140, cpy_r_r141, cpy_r_r142, cpy_r_r143);
    CPy_DECREF(cpy_r_r134);
    CPy_DECREF(cpy_r_r135);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r144 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 278, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
CPyL74: ;
    cpy_r_r145 = CPyStatics[4392]; /* 'eq' */
    cpy_r_r146 = CPyDict_GetItem(cpy_r_decorator_arguments, cpy_r_r145);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 283, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    if (unlikely(!PyBool_Check(cpy_r_r146))) {
        CPy_TypeError("bool", cpy_r_r146); cpy_r_r147 = 2;
    } else
        cpy_r_r147 = cpy_r_r146 == Py_True;
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r147 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 283, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    if (!cpy_r_r147) goto CPyL79;
    cpy_r_r148 = CPyStatics[753]; /* '__eq__' */
    cpy_r_r149 = CPyDef_nodes___TypeInfo___get(cpy_r_info, cpy_r_r148);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 284, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    cpy_r_r150 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r151 = cpy_r_r149 == cpy_r_r150;
    CPy_DECREF(cpy_r_r149);
    if (cpy_r_r151) goto CPyL82;
CPyL79: ;
    cpy_r_r152 = CPyStatics[665]; /* 'order' */
    cpy_r_r153 = CPyDict_GetItem(cpy_r_decorator_arguments, cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 285, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    if (unlikely(!PyBool_Check(cpy_r_r153))) {
        CPy_TypeError("bool", cpy_r_r153); cpy_r_r154 = 2;
    } else
        cpy_r_r154 = cpy_r_r153 == Py_True;
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r154 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 285, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    if (!cpy_r_r154) goto CPyL92;
CPyL82: ;
    cpy_r_r155 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r155);
    cpy_r_r156 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r157 = NULL;
    cpy_r_r158 = CPY_GET_METHOD_TRAIT(cpy_r_r155, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r155, cpy_r_r156, cpy_r_r157); /* named_type */
    CPy_DECREF(cpy_r_r155);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 288, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    cpy_r_obj_type = cpy_r_r158;
    cpy_r_r159 = CPyStatics[4496]; /* '_DT' */
    cpy_r_r160 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 291, CPyStatic_dataclasses___globals);
        goto CPyL272;
    }
CPyL84: ;
    cpy_r_r161 = CPyStatics[224]; /* '.' */
    cpy_r_r162 = PyUnicode_Concat(cpy_r_r160, cpy_r_r161);
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 291, CPyStatic_dataclasses___globals);
        goto CPyL272;
    }
    cpy_r_r163 = CPyStatics[4496]; /* '_DT' */
    cpy_r_r164 = PyUnicode_Concat(cpy_r_r162, cpy_r_r163);
    CPy_DECREF(cpy_r_r162);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 291, CPyStatic_dataclasses___globals);
        goto CPyL272;
    }
    cpy_r_r165 = PyList_New(0);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 292, CPyStatic_dataclasses___globals);
        goto CPyL273;
    }
    cpy_r_r166 = NULL;
    cpy_r_r167 = NULL;
    cpy_r_r168 = CPY_INT_TAG;
    cpy_r_r169 = CPY_INT_TAG;
    cpy_r_r170 = CPyDef_types___AnyType(8, cpy_r_r166, cpy_r_r167, cpy_r_r168, cpy_r_r169);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 294, CPyStatic_dataclasses___globals);
        goto CPyL274;
    }
    cpy_r_r171 = CPY_INT_TAG;
    cpy_r_r172 = CPyDef_nodes___TypeVarExpr(cpy_r_r159, cpy_r_r164, cpy_r_r165, cpy_r_obj_type, cpy_r_r170, cpy_r_r171);
    CPy_DECREF(cpy_r_r164);
    CPy_DECREF(cpy_r_r165);
    CPy_DECREF(cpy_r_obj_type);
    CPy_DECREF(cpy_r_r170);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 289, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    cpy_r_self_tvar_expr = cpy_r_r172;
    cpy_r_r173 = 2;
    cpy_r_r174 = 2;
    cpy_r_r175 = 2;
    cpy_r_r176 = 2;
    cpy_r_r177 = 2;
    cpy_r_r178 = CPyDef_nodes___SymbolTableNode(4, cpy_r_self_tvar_expr, cpy_r_r173, cpy_r_r174, cpy_r_r175, cpy_r_r176, cpy_r_r177);
    CPy_DECREF(cpy_r_self_tvar_expr);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 296, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    cpy_r_r179 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "transform", "TypeInfo", "names", 296, CPyStatic_dataclasses___globals);
        goto CPyL275;
    }
    CPy_INCREF(cpy_r_r179);
CPyL91: ;
    cpy_r_r180 = CPyStatics[4496]; /* '_DT' */
    cpy_r_r181 = CPyDict_SetItem(cpy_r_r179, cpy_r_r180, cpy_r_r178);
    CPy_DECREF(cpy_r_r179);
    CPy_DECREF(cpy_r_r178);
    cpy_r_r182 = cpy_r_r181 >= 0;
    if (unlikely(!cpy_r_r182)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 296, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
CPyL92: ;
    cpy_r_r183 = CPyStatics[665]; /* 'order' */
    cpy_r_r184 = CPyDict_GetItem(cpy_r_decorator_arguments, cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 299, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    if (unlikely(!PyBool_Check(cpy_r_r184))) {
        CPy_TypeError("bool", cpy_r_r184); cpy_r_r185 = 2;
    } else
        cpy_r_r185 = cpy_r_r184 == Py_True;
    CPy_DECREF(cpy_r_r184);
    if (unlikely(cpy_r_r185 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 299, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    if (!cpy_r_r185) goto CPyL134;
    cpy_r_r186 = CPyStatics[4392]; /* 'eq' */
    cpy_r_r187 = CPyDict_GetItem(cpy_r_decorator_arguments, cpy_r_r186);
    if (unlikely(cpy_r_r187 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 300, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    if (unlikely(!PyBool_Check(cpy_r_r187))) {
        CPy_TypeError("bool", cpy_r_r187); cpy_r_r188 = 2;
    } else
        cpy_r_r188 = cpy_r_r187 == Py_True;
    CPy_DECREF(cpy_r_r187);
    if (unlikely(cpy_r_r188 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 300, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    if (cpy_r_r188) goto CPyL99;
    cpy_r_r189 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r189);
    cpy_r_r190 = CPyStatics[4497]; /* '"eq" must be True if "order" is True' */
    cpy_r_r191 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__reason;
    CPy_INCREF(cpy_r_r191);
    cpy_r_r192 = 2;
    cpy_r_r193 = 2;
    cpy_r_r194 = NULL;
    cpy_r_r195 = CPY_GET_METHOD_TRAIT(cpy_r_r189, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r189, cpy_r_r190, cpy_r_r191, cpy_r_r192, cpy_r_r193, cpy_r_r194); /* fail */
    CPy_DECREF(cpy_r_r191);
    CPy_DECREF(cpy_r_r189);
    if (unlikely(cpy_r_r195 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 301, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
CPyL99: ;
    cpy_r_r196 = CPyStatics[4196]; /* '__lt__' */
    cpy_r_r197 = CPyStatics[4198]; /* '__gt__' */
    cpy_r_r198 = CPyStatics[4199]; /* '__le__' */
    cpy_r_r199 = CPyStatics[4197]; /* '__ge__' */
    cpy_r_r200 = PyList_New(4);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 303, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    cpy_r_r201 = (CPyPtr)&((PyListObject *)cpy_r_r200)->ob_item;
    cpy_r_r202 = *(CPyPtr *)cpy_r_r201;
    CPy_INCREF(cpy_r_r196);
    *(PyObject * *)cpy_r_r202 = cpy_r_r196;
    cpy_r_r203 = cpy_r_r202 + 8;
    CPy_INCREF(cpy_r_r197);
    *(PyObject * *)cpy_r_r203 = cpy_r_r197;
    cpy_r_r204 = cpy_r_r202 + 16;
    CPy_INCREF(cpy_r_r198);
    *(PyObject * *)cpy_r_r204 = cpy_r_r198;
    cpy_r_r205 = cpy_r_r202 + 24;
    CPy_INCREF(cpy_r_r199);
    *(PyObject * *)cpy_r_r205 = cpy_r_r199;
    cpy_r_r206 = 0;
CPyL101: ;
    cpy_r_r207 = (CPyPtr)&((PyVarObject *)cpy_r_r200)->ob_size;
    cpy_r_r208 = *(int64_t *)cpy_r_r207;
    cpy_r_r209 = cpy_r_r208 << 1;
    cpy_r_r210 = (Py_ssize_t)cpy_r_r206 < (Py_ssize_t)cpy_r_r209;
    if (!cpy_r_r210) goto CPyL276;
    cpy_r_r211 = CPyList_GetItemUnsafe(cpy_r_r200, cpy_r_r206);
    if (likely(PyUnicode_Check(cpy_r_r211)))
        cpy_r_r212 = cpy_r_r211;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 303, CPyStatic_dataclasses___globals, "str", cpy_r_r211);
        goto CPyL277;
    }
    cpy_r_method_name = cpy_r_r212;
    cpy_r_r213 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r213);
    cpy_r_r214 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r215 = NULL;
    cpy_r_r216 = CPY_GET_METHOD_TRAIT(cpy_r_r213, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r213, cpy_r_r214, cpy_r_r215); /* named_type */
    CPy_DECREF(cpy_r_r213);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 306, CPyStatic_dataclasses___globals);
        goto CPyL278;
    }
    cpy_r_obj_type = cpy_r_r216;
    cpy_r_r217 = CPyStatics[4496]; /* '_DT' */
    cpy_r_r218 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 309, CPyStatic_dataclasses___globals);
        goto CPyL279;
    }
CPyL105: ;
    cpy_r_r219 = CPyStatics[224]; /* '.' */
    cpy_r_r220 = PyUnicode_Concat(cpy_r_r218, cpy_r_r219);
    CPy_DECREF(cpy_r_r218);
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 309, CPyStatic_dataclasses___globals);
        goto CPyL279;
    }
    cpy_r_r221 = CPyStatics[4496]; /* '_DT' */
    cpy_r_r222 = PyUnicode_Concat(cpy_r_r220, cpy_r_r221);
    CPy_DECREF(cpy_r_r220);
    if (unlikely(cpy_r_r222 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 309, CPyStatic_dataclasses___globals);
        goto CPyL279;
    }
    cpy_r_r223 = PyList_New(0);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 311, CPyStatic_dataclasses___globals);
        goto CPyL280;
    }
    cpy_r_r224 = NULL;
    cpy_r_r225 = NULL;
    cpy_r_r226 = CPY_INT_TAG;
    cpy_r_r227 = CPY_INT_TAG;
    cpy_r_r228 = CPyDef_types___AnyType(8, cpy_r_r224, cpy_r_r225, cpy_r_r226, cpy_r_r227);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 313, CPyStatic_dataclasses___globals);
        goto CPyL281;
    }
    cpy_r_r229 = CPyStatics[9017]; /* -1 */
    cpy_r_r230 = CPY_INT_TAG;
    cpy_r_r231 = CPY_INT_TAG;
    cpy_r_r232 = CPY_INT_TAG;
    cpy_r_r233 = CPyDef_types___TypeVarType(cpy_r_r217, cpy_r_r222, cpy_r_r229, cpy_r_r223, cpy_r_obj_type, cpy_r_r228, cpy_r_r230, cpy_r_r231, cpy_r_r232);
    CPy_DECREF(cpy_r_r222);
    CPy_DECREF(cpy_r_r223);
    CPy_DECREF(cpy_r_obj_type);
    CPy_DECREF(cpy_r_r228);
    if (unlikely(cpy_r_r233 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 307, CPyStatic_dataclasses___globals);
        goto CPyL278;
    }
    cpy_r_order_tvar_def = cpy_r_r233;
    cpy_r_r234 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r234);
    cpy_r_r235 = CPyStatics[831]; /* 'builtins.bool' */
    cpy_r_r236 = NULL;
    cpy_r_r237 = CPY_GET_METHOD_TRAIT(cpy_r_r234, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r234, cpy_r_r235, cpy_r_r236); /* named_type */
    CPy_DECREF(cpy_r_r234);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 315, CPyStatic_dataclasses___globals);
        goto CPyL282;
    }
    cpy_r_order_return_type = cpy_r_r237;
    cpy_r_r238 = CPyStatics[4414]; /* 'other' */
    cpy_r_r239 = CPyDef_nodes___Var(cpy_r_r238, cpy_r_order_tvar_def);
    if (unlikely(cpy_r_r239 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 317, CPyStatic_dataclasses___globals);
        goto CPyL283;
    }
    cpy_r_r240 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r240 == NULL)) {
        goto CPyL284;
    } else
        goto CPyL115;
CPyL113: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r241 = 0;
    if (unlikely(!cpy_r_r241)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 317, CPyStatic_dataclasses___globals);
        goto CPyL244;
    }
    CPy_Unreachable();
CPyL115: ;
    cpy_r_r242 = Py_None;
    cpy_r_r243 = 2;
    cpy_r_r244 = CPyDef_nodes___Argument(cpy_r_r239, cpy_r_order_tvar_def, cpy_r_r242, cpy_r_r240, cpy_r_r243);
    CPy_DECREF(cpy_r_r239);
    if (unlikely(cpy_r_r244 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 317, CPyStatic_dataclasses___globals);
        goto CPyL283;
    }
    cpy_r_r245 = PyList_New(1);
    if (unlikely(cpy_r_r245 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 316, CPyStatic_dataclasses___globals);
        goto CPyL285;
    }
    cpy_r_r246 = (CPyPtr)&((PyListObject *)cpy_r_r245)->ob_item;
    cpy_r_r247 = *(CPyPtr *)cpy_r_r246;
    *(PyObject * *)cpy_r_r247 = cpy_r_r244;
    cpy_r_order_args = cpy_r_r245;
    cpy_r_r248 = CPyDef_nodes___TypeInfo___get(cpy_r_info, cpy_r_method_name);
    if (unlikely(cpy_r_r248 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 320, CPyStatic_dataclasses___globals);
        goto CPyL286;
    }
    cpy_r_existing_method = cpy_r_r248;
    cpy_r_r249 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r250 = cpy_r_existing_method != cpy_r_r249;
    if (!cpy_r_r250) goto CPyL287;
    if (likely(cpy_r_existing_method != Py_None))
        cpy_r_r251 = cpy_r_existing_method;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 321, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode", cpy_r_existing_method);
        goto CPyL288;
    }
    cpy_r_r252 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r251)->_plugin_generated;
    if (cpy_r_r252) goto CPyL287;
CPyL121: ;
    if (likely(cpy_r_existing_method != Py_None))
        cpy_r_r253 = cpy_r_existing_method;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 322, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode", cpy_r_existing_method);
        goto CPyL288;
    }
    cpy_r_r254 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r253)->_node;
    CPy_INCREF(cpy_r_r254);
    cpy_r_r255 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r256 = cpy_r_r254 != cpy_r_r255;
    if (!cpy_r_r256) goto CPyL289;
    if (likely(cpy_r_r254 != Py_None))
        cpy_r_r257 = cpy_r_r254;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 322, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolNode", cpy_r_r254);
        goto CPyL288;
    }
    cpy_r_r258 = PyObject_IsTrue(cpy_r_r257);
    CPy_DECREF(cpy_r_r257);
    cpy_r_r259 = cpy_r_r258 >= 0;
    if (unlikely(!cpy_r_r259)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 322, CPyStatic_dataclasses___globals);
        goto CPyL288;
    }
    cpy_r_r260 = cpy_r_r258;
    if (cpy_r_r260) {
        goto CPyL128;
    } else
        goto CPyL290;
CPyL126: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r261 = 0;
    if (unlikely(!cpy_r_r261)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 322, CPyStatic_dataclasses___globals);
        goto CPyL244;
    }
    CPy_Unreachable();
CPyL128: ;
    cpy_r_r262 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r262);
    cpy_r_r263 = CPyStatics[4498]; /* 'You may not have a custom "' */
    cpy_r_r264 = CPyStatics[4499]; /* '" method when "order" is True' */
    cpy_r_r265 = CPyStr_Build(3, cpy_r_r263, cpy_r_method_name, cpy_r_r264);
    if (unlikely(cpy_r_r265 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 324, CPyStatic_dataclasses___globals);
        goto CPyL291;
    }
    if (likely(cpy_r_existing_method != Py_None))
        cpy_r_r266 = cpy_r_existing_method;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 325, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode", cpy_r_existing_method);
        goto CPyL292;
    }
    cpy_r_r267 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r266)->_node;
    CPy_INCREF(cpy_r_r267);
    if (likely(cpy_r_r267 != Py_None))
        cpy_r_r268 = cpy_r_r267;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 325, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolNode", cpy_r_r267);
        goto CPyL292;
    }
    CPy_DECREF(cpy_r_existing_method);
    cpy_r_r269 = 2;
    cpy_r_r270 = 2;
    cpy_r_r271 = NULL;
    cpy_r_r272 = CPY_GET_METHOD_TRAIT(cpy_r_r262, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r262, cpy_r_r265, cpy_r_r268, cpy_r_r269, cpy_r_r270, cpy_r_r271); /* fail */
    CPy_DECREF(cpy_r_r265);
    CPy_DECREF(cpy_r_r268);
    CPy_DECREF(cpy_r_r262);
    if (unlikely(cpy_r_r272 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 323, CPyStatic_dataclasses___globals);
        goto CPyL286;
    }
CPyL132: ;
    cpy_r_r273 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r273);
    cpy_r_r274 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    CPy_INCREF(cpy_r_r274);
    cpy_r_r275 = 2;
    cpy_r_r276 = 2;
    cpy_r_r277 = CPyDef_plugins___common___add_method_to_class(cpy_r_r273, cpy_r_r274, cpy_r_method_name, cpy_r_order_args, cpy_r_order_return_type, cpy_r_order_tvar_def, cpy_r_order_tvar_def, cpy_r_r275, cpy_r_r276);
    CPy_DECREF(cpy_r_r273);
    CPy_DECREF(cpy_r_r274);
    CPy_DECREF(cpy_r_method_name);
    CPy_DECREF(cpy_r_order_args);
    CPy_DECREF(cpy_r_order_return_type);
    CPy_DECREF(cpy_r_order_tvar_def);
    if (unlikely(cpy_r_r277 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 328, CPyStatic_dataclasses___globals);
        goto CPyL277;
    }
    cpy_r_r278 = cpy_r_r206 + 2;
    cpy_r_r206 = cpy_r_r278;
    goto CPyL101;
CPyL134: ;
    cpy_r_r279 = PyList_New(0);
    if (unlikely(cpy_r_r279 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 338, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    cpy_r_parent_decorator_arguments = cpy_r_r279;
    cpy_r_r280 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r280 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "transform", "TypeInfo", "mro", 339, CPyStatic_dataclasses___globals);
        goto CPyL293;
    }
    CPy_INCREF(cpy_r_r280);
CPyL136: ;
    cpy_r_r281 = CPyList_GetSlice(cpy_r_r280, 2, -2);
    CPy_DECREF(cpy_r_r280);
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 339, CPyStatic_dataclasses___globals);
        goto CPyL293;
    }
    if (likely(PyList_Check(cpy_r_r281)))
        cpy_r_r282 = cpy_r_r281;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 339, CPyStatic_dataclasses___globals, "list", cpy_r_r281);
        goto CPyL293;
    }
    cpy_r_r283 = 0;
CPyL139: ;
    cpy_r_r284 = (CPyPtr)&((PyVarObject *)cpy_r_r282)->ob_size;
    cpy_r_r285 = *(int64_t *)cpy_r_r284;
    cpy_r_r286 = cpy_r_r285 << 1;
    cpy_r_r287 = (Py_ssize_t)cpy_r_r283 < (Py_ssize_t)cpy_r_r286;
    if (!cpy_r_r287) goto CPyL294;
    cpy_r_r288 = CPyList_GetItemUnsafe(cpy_r_r282, cpy_r_r283);
    if (likely((Py_TYPE(cpy_r_r288) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r288) == CPyType_nodes___TypeInfo)))
        cpy_r_r289 = cpy_r_r288;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 339, CPyStatic_dataclasses___globals, "mypy.nodes.TypeInfo", cpy_r_r288);
        goto CPyL295;
    }
    cpy_r_parent = cpy_r_r289;
    cpy_r_r290 = ((mypy___nodes___TypeInfoObject *)cpy_r_parent)->_metadata;
    if (unlikely(cpy_r_r290 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "transform", "TypeInfo", "metadata", 340, CPyStatic_dataclasses___globals);
        goto CPyL296;
    }
    CPy_INCREF(cpy_r_r290);
CPyL142: ;
    cpy_r_r291 = CPyStatics[4500]; /* 'dataclass' */
    cpy_r_r292 = CPyDict_GetWithNone(cpy_r_r290, cpy_r_r291);
    CPy_DECREF(cpy_r_r290);
    if (unlikely(cpy_r_r292 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 340, CPyStatic_dataclasses___globals);
        goto CPyL296;
    }
    if (PyDict_Check(cpy_r_r292))
        cpy_r_r293 = cpy_r_r292;
    else {
        cpy_r_r293 = NULL;
    }
    if (cpy_r_r293 != NULL) goto __LL4812;
    if (cpy_r_r292 == Py_None)
        cpy_r_r293 = cpy_r_r292;
    else {
        cpy_r_r293 = NULL;
    }
    if (cpy_r_r293 != NULL) goto __LL4812;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 340, CPyStatic_dataclasses___globals, "dict or None", cpy_r_r292);
    goto CPyL296;
__LL4812: ;
    cpy_r_parent_args = cpy_r_r293;
    cpy_r_r294 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r295 = cpy_r_parent_args != cpy_r_r294;
    if (!cpy_r_r295) goto CPyL297;
    CPy_INCREF(cpy_r_parent_args);
    if (likely(cpy_r_parent_args != Py_None))
        cpy_r_r296 = cpy_r_parent_args;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 340, CPyStatic_dataclasses___globals, "dict", cpy_r_parent_args);
        goto CPyL298;
    }
    cpy_r_r297 = PyDict_Size(cpy_r_r296);
    CPy_DECREF(cpy_r_r296);
    cpy_r_r298 = cpy_r_r297 << 1;
    cpy_r_r299 = cpy_r_r298 != 0;
    if (!cpy_r_r299) goto CPyL297;
    cpy_r_r300 = CPyDef_dataclasses____has_direct_dataclass_transform_metaclass(cpy_r_parent);
    CPy_DECREF(cpy_r_parent);
    if (unlikely(cpy_r_r300 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 345, CPyStatic_dataclasses___globals);
        goto CPyL299;
    }
    if (cpy_r_r300) goto CPyL300;
    if (likely(cpy_r_parent_args != Py_None))
        cpy_r_r301 = cpy_r_parent_args;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 346, CPyStatic_dataclasses___globals, "dict", cpy_r_parent_args);
        goto CPyL295;
    }
    cpy_r_r302 = PyList_Append(cpy_r_parent_decorator_arguments, cpy_r_r301);
    CPy_DECREF(cpy_r_r301);
    cpy_r_r303 = cpy_r_r302 >= 0;
    if (unlikely(!cpy_r_r303)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 346, CPyStatic_dataclasses___globals);
        goto CPyL295;
    }
CPyL151: ;
    cpy_r_r304 = cpy_r_r283 + 2;
    cpy_r_r283 = cpy_r_r304;
    goto CPyL139;
CPyL152: ;
    cpy_r_r305 = CPyStatics[4400]; /* 'frozen' */
    cpy_r_r306 = CPyDict_GetItem(cpy_r_decorator_arguments, cpy_r_r305);
    if (unlikely(cpy_r_r306 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 348, CPyStatic_dataclasses___globals);
        goto CPyL293;
    }
    if (unlikely(!PyBool_Check(cpy_r_r306))) {
        CPy_TypeError("bool", cpy_r_r306); cpy_r_r307 = 2;
    } else
        cpy_r_r307 = cpy_r_r306 == Py_True;
    CPy_DECREF(cpy_r_r306);
    if (unlikely(cpy_r_r307 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 348, CPyStatic_dataclasses___globals);
        goto CPyL293;
    }
    if (!cpy_r_r307) goto CPyL169;
    cpy_r_r308 = 0;
    cpy_r_r309 = 0;
CPyL156: ;
    cpy_r_r310 = (CPyPtr)&((PyVarObject *)cpy_r_parent_decorator_arguments)->ob_size;
    cpy_r_r311 = *(int64_t *)cpy_r_r310;
    cpy_r_r312 = cpy_r_r311 << 1;
    cpy_r_r313 = (Py_ssize_t)cpy_r_r309 < (Py_ssize_t)cpy_r_r312;
    if (!cpy_r_r313) goto CPyL301;
    cpy_r_r314 = CPyList_GetItemUnsafe(cpy_r_parent_decorator_arguments, cpy_r_r309);
    if (likely(PyDict_Check(cpy_r_r314)))
        cpy_r_r315 = cpy_r_r314;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 349, CPyStatic_dataclasses___globals, "dict", cpy_r_r314);
        goto CPyL293;
    }
    cpy_r_parent_2 = cpy_r_r315;
    cpy_r_r316 = CPyStatics[4400]; /* 'frozen' */
    cpy_r_r317 = CPyDict_GetItem(cpy_r_parent_2, cpy_r_r316);
    CPy_DECREF(cpy_r_parent_2);
    if (unlikely(cpy_r_r317 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 349, CPyStatic_dataclasses___globals);
        goto CPyL293;
    }
    cpy_r_r318 = PyObject_Not(cpy_r_r317);
    CPy_DECREF(cpy_r_r317);
    cpy_r_r319 = cpy_r_r318 >= 0;
    if (unlikely(!cpy_r_r319)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 349, CPyStatic_dataclasses___globals);
        goto CPyL293;
    }
    cpy_r_r320 = cpy_r_r318;
    if (cpy_r_r320) {
        goto CPyL302;
    } else
        goto CPyL162;
CPyL161: ;
    cpy_r_r308 = 1;
    goto CPyL163;
CPyL162: ;
    cpy_r_r321 = cpy_r_r309 + 2;
    cpy_r_r309 = cpy_r_r321;
    goto CPyL156;
CPyL163: ;
    if (!cpy_r_r308) goto CPyL165;
    cpy_r_r322 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r322);
    cpy_r_r323 = CPyStatics[4501]; /* 'Cannot inherit frozen dataclass from a non-frozen one' */
    cpy_r_r324 = 2;
    cpy_r_r325 = 2;
    cpy_r_r326 = NULL;
    cpy_r_r327 = CPY_GET_METHOD_TRAIT(cpy_r_r322, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r322, cpy_r_r323, cpy_r_info, cpy_r_r324, cpy_r_r325, cpy_r_r326); /* fail */
    CPy_DECREF(cpy_r_r322);
    if (unlikely(cpy_r_r327 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 350, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
CPyL165: ;
    CPy_INCREF(cpy_r_attributes);
    if (likely(cpy_r_attributes != Py_None))
        cpy_r_r328 = cpy_r_attributes;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 351, CPyStatic_dataclasses___globals, "list", cpy_r_attributes);
        goto CPyL252;
    }
    cpy_r_r329 = CPyDef_dataclasses___DataclassTransformer____propertize_callables(cpy_r_self, cpy_r_r328, 0);
    CPy_DECREF(cpy_r_r328);
    if (unlikely(cpy_r_r329 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 351, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    CPy_INCREF(cpy_r_attributes);
    if (likely(cpy_r_attributes != Py_None))
        cpy_r_r330 = cpy_r_attributes;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 352, CPyStatic_dataclasses___globals, "list", cpy_r_attributes);
        goto CPyL252;
    }
    cpy_r_r331 = CPyDef_dataclasses___DataclassTransformer____freeze(cpy_r_self, cpy_r_r330);
    CPy_DECREF(cpy_r_r330);
    if (unlikely(cpy_r_r331 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 352, CPyStatic_dataclasses___globals);
        goto CPyL252;
    } else
        goto CPyL181;
CPyL169: ;
    cpy_r_r332 = 0;
    cpy_r_r333 = 0;
CPyL170: ;
    cpy_r_r334 = (CPyPtr)&((PyVarObject *)cpy_r_parent_decorator_arguments)->ob_size;
    cpy_r_r335 = *(int64_t *)cpy_r_r334;
    cpy_r_r336 = cpy_r_r335 << 1;
    cpy_r_r337 = (Py_ssize_t)cpy_r_r333 < (Py_ssize_t)cpy_r_r336;
    if (!cpy_r_r337) goto CPyL303;
    cpy_r_r338 = CPyList_GetItemUnsafe(cpy_r_parent_decorator_arguments, cpy_r_r333);
    if (likely(PyDict_Check(cpy_r_r338)))
        cpy_r_r339 = cpy_r_r338;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 354, CPyStatic_dataclasses___globals, "dict", cpy_r_r338);
        goto CPyL293;
    }
    cpy_r_parent_3 = cpy_r_r339;
    cpy_r_r340 = CPyStatics[4400]; /* 'frozen' */
    cpy_r_r341 = CPyDict_GetItem(cpy_r_parent_3, cpy_r_r340);
    CPy_DECREF(cpy_r_parent_3);
    if (unlikely(cpy_r_r341 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 354, CPyStatic_dataclasses___globals);
        goto CPyL293;
    }
    cpy_r_r342 = PyObject_IsTrue(cpy_r_r341);
    CPy_DECREF(cpy_r_r341);
    cpy_r_r343 = cpy_r_r342 >= 0;
    if (unlikely(!cpy_r_r343)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 354, CPyStatic_dataclasses___globals);
        goto CPyL293;
    }
    cpy_r_r344 = cpy_r_r342;
    if (cpy_r_r344) {
        goto CPyL304;
    } else
        goto CPyL176;
CPyL175: ;
    cpy_r_r332 = 1;
    goto CPyL177;
CPyL176: ;
    cpy_r_r345 = cpy_r_r333 + 2;
    cpy_r_r333 = cpy_r_r345;
    goto CPyL170;
CPyL177: ;
    if (!cpy_r_r332) goto CPyL179;
    cpy_r_r346 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r346);
    cpy_r_r347 = CPyStatics[4502]; /* 'Cannot inherit non-frozen dataclass from a frozen one' */
    cpy_r_r348 = 2;
    cpy_r_r349 = 2;
    cpy_r_r350 = NULL;
    cpy_r_r351 = CPY_GET_METHOD_TRAIT(cpy_r_r346, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r346, cpy_r_r347, cpy_r_info, cpy_r_r348, cpy_r_r349, cpy_r_r350); /* fail */
    CPy_DECREF(cpy_r_r346);
    if (unlikely(cpy_r_r351 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 355, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
CPyL179: ;
    CPy_INCREF(cpy_r_attributes);
    if (likely(cpy_r_attributes != Py_None))
        cpy_r_r352 = cpy_r_attributes;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 356, CPyStatic_dataclasses___globals, "list", cpy_r_attributes);
        goto CPyL252;
    }
    cpy_r_r353 = 2;
    cpy_r_r354 = CPyDef_dataclasses___DataclassTransformer____propertize_callables(cpy_r_self, cpy_r_r352, cpy_r_r353);
    CPy_DECREF(cpy_r_r352);
    if (unlikely(cpy_r_r354 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 356, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
CPyL181: ;
    cpy_r_r355 = CPyStatics[4006]; /* 'slots' */
    cpy_r_r356 = CPyDict_GetItem(cpy_r_decorator_arguments, cpy_r_r355);
    if (unlikely(cpy_r_r356 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 358, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    if (unlikely(!PyBool_Check(cpy_r_r356))) {
        CPy_TypeError("bool", cpy_r_r356); cpy_r_r357 = 2;
    } else
        cpy_r_r357 = cpy_r_r356 == Py_True;
    CPy_DECREF(cpy_r_r356);
    if (unlikely(cpy_r_r357 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 358, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    if (!cpy_r_r357) goto CPyL188;
    CPy_INCREF(cpy_r_attributes);
    if (likely(cpy_r_attributes != Py_None))
        cpy_r_r358 = cpy_r_attributes;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 359, CPyStatic_dataclasses___globals, "list", cpy_r_attributes);
        goto CPyL252;
    }
    cpy_r_r359.f0 = 6;
    cpy_r_r359.f1 = 20;
    CPyTagged_INCREF(cpy_r_r359.f0);
    CPyTagged_INCREF(cpy_r_r359.f1);
    CPyTagged_INCREF(cpy_r_py_version.f0);
    CPyTagged_INCREF(cpy_r_py_version.f1);
    cpy_r_r360 = PyTuple_New(2);
    if (unlikely(cpy_r_r360 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4813 = CPyTagged_StealAsObject(cpy_r_py_version.f0);
    PyTuple_SET_ITEM(cpy_r_r360, 0, __tmp4813);
    PyObject *__tmp4814 = CPyTagged_StealAsObject(cpy_r_py_version.f1);
    PyTuple_SET_ITEM(cpy_r_r360, 1, __tmp4814);
    cpy_r_r361 = PyTuple_New(2);
    if (unlikely(cpy_r_r361 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4815 = CPyTagged_StealAsObject(cpy_r_r359.f0);
    PyTuple_SET_ITEM(cpy_r_r361, 0, __tmp4815);
    PyObject *__tmp4816 = CPyTagged_StealAsObject(cpy_r_r359.f1);
    PyTuple_SET_ITEM(cpy_r_r361, 1, __tmp4816);
    cpy_r_r362 = PyObject_RichCompare(cpy_r_r360, cpy_r_r361, 5);
    CPy_DECREF(cpy_r_r360);
    CPy_DECREF(cpy_r_r361);
    if (unlikely(cpy_r_r362 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 359, CPyStatic_dataclasses___globals);
        goto CPyL305;
    }
    if (unlikely(!PyBool_Check(cpy_r_r362))) {
        CPy_TypeError("bool", cpy_r_r362); cpy_r_r363 = 2;
    } else
        cpy_r_r363 = cpy_r_r362 == Py_True;
    CPy_DECREF(cpy_r_r362);
    if (unlikely(cpy_r_r363 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 359, CPyStatic_dataclasses___globals);
        goto CPyL305;
    }
    cpy_r_r364 = CPyDef_dataclasses___DataclassTransformer___add_slots(cpy_r_self, cpy_r_info, cpy_r_r358, cpy_r_r363);
    CPy_DECREF(cpy_r_r358);
    if (unlikely(cpy_r_r364 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 359, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
CPyL188: ;
    CPy_INCREF(cpy_r_attributes);
    if (likely(cpy_r_attributes != Py_None))
        cpy_r_r365 = cpy_r_attributes;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 361, CPyStatic_dataclasses___globals, "list", cpy_r_attributes);
        goto CPyL252;
    }
    cpy_r_r366 = CPyDef_dataclasses___DataclassTransformer___reset_init_only_vars(cpy_r_self, cpy_r_info, cpy_r_r365);
    CPy_DECREF(cpy_r_r365);
    if (unlikely(cpy_r_r366 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 361, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    cpy_r_r367 = CPyStatics[4398]; /* 'match_args' */
    cpy_r_r368 = CPyDict_GetItem(cpy_r_decorator_arguments, cpy_r_r367);
    if (unlikely(cpy_r_r368 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 364, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    if (unlikely(!PyBool_Check(cpy_r_r368))) {
        CPy_TypeError("bool", cpy_r_r368); cpy_r_r369 = 2;
    } else
        cpy_r_r369 = cpy_r_r368 == Py_True;
    CPy_DECREF(cpy_r_r368);
    if (unlikely(cpy_r_r369 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 364, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    if (!cpy_r_r369) goto CPyL306;
    cpy_r_r370 = CPyStatics[786]; /* '__match_args__' */
    cpy_r_r371 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r371 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "transform", "TypeInfo", "names", 366, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    CPy_INCREF(cpy_r_r371);
CPyL194: ;
    cpy_r_r372 = PyDict_Contains(cpy_r_r371, cpy_r_r370);
    CPy_DECREF(cpy_r_r371);
    cpy_r_r373 = cpy_r_r372 >= 0;
    if (unlikely(!cpy_r_r373)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 366, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    cpy_r_r374 = cpy_r_r372;
    cpy_r_r375 = cpy_r_r374 ^ 1;
    if (cpy_r_r375) goto CPyL200;
    cpy_r_r376 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r376 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "transform", "TypeInfo", "names", 366, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    CPy_INCREF(cpy_r_r376);
CPyL197: ;
    cpy_r_r377 = CPyStatics[786]; /* '__match_args__' */
    cpy_r_r378 = CPyDict_GetItem(cpy_r_r376, cpy_r_r377);
    CPy_DECREF(cpy_r_r376);
    if (unlikely(cpy_r_r378 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 366, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    if (likely(Py_TYPE(cpy_r_r378) == CPyType_nodes___SymbolTableNode))
        cpy_r_r379 = cpy_r_r378;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 366, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode", cpy_r_r378);
        goto CPyL252;
    }
    cpy_r_r380 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r379)->_plugin_generated;
    CPy_DECREF(cpy_r_r379);
    if (!cpy_r_r380) goto CPyL306;
CPyL200: ;
    CPy_INCREF(cpy_r_attributes);
    if (likely(cpy_r_attributes != Py_None))
        cpy_r_r381 = cpy_r_attributes;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 368, CPyStatic_dataclasses___globals, "list", cpy_r_attributes);
        goto CPyL252;
    }
    cpy_r_r382 = (CPyPtr)&((PyVarObject *)cpy_r_r381)->ob_size;
    cpy_r_r383 = *(int64_t *)cpy_r_r382;
    CPy_DECREF(cpy_r_r381);
    cpy_r_r384 = cpy_r_r383 << 1;
    cpy_r_r385 = cpy_r_r384 != 0;
    if (!cpy_r_r385) goto CPyL306;
    cpy_r_r386.f0 = 6;
    cpy_r_r386.f1 = 20;
    CPyTagged_INCREF(cpy_r_r386.f0);
    CPyTagged_INCREF(cpy_r_r386.f1);
    cpy_r_r387 = PyTuple_New(2);
    if (unlikely(cpy_r_r387 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4817 = CPyTagged_StealAsObject(cpy_r_py_version.f0);
    PyTuple_SET_ITEM(cpy_r_r387, 0, __tmp4817);
    PyObject *__tmp4818 = CPyTagged_StealAsObject(cpy_r_py_version.f1);
    PyTuple_SET_ITEM(cpy_r_r387, 1, __tmp4818);
    cpy_r_r388 = PyTuple_New(2);
    if (unlikely(cpy_r_r388 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4819 = CPyTagged_StealAsObject(cpy_r_r386.f0);
    PyTuple_SET_ITEM(cpy_r_r388, 0, __tmp4819);
    PyObject *__tmp4820 = CPyTagged_StealAsObject(cpy_r_r386.f1);
    PyTuple_SET_ITEM(cpy_r_r388, 1, __tmp4820);
    cpy_r_r389 = PyObject_RichCompare(cpy_r_r387, cpy_r_r388, 5);
    CPy_DECREF(cpy_r_r387);
    CPy_DECREF(cpy_r_r388);
    if (unlikely(cpy_r_r389 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 369, CPyStatic_dataclasses___globals);
        goto CPyL251;
    }
    if (unlikely(!PyBool_Check(cpy_r_r389))) {
        CPy_TypeError("bool", cpy_r_r389); cpy_r_r390 = 2;
    } else
        cpy_r_r390 = cpy_r_r389 == Py_True;
    CPy_DECREF(cpy_r_r389);
    if (unlikely(cpy_r_r390 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 369, CPyStatic_dataclasses___globals);
        goto CPyL251;
    }
    if (!cpy_r_r390) goto CPyL218;
    cpy_r_r391 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r391);
    cpy_r_r392 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r393 = NULL;
    cpy_r_r394 = CPY_GET_METHOD_TRAIT(cpy_r_r391, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r391, cpy_r_r392, cpy_r_r393); /* named_type */
    CPy_DECREF(cpy_r_r391);
    if (unlikely(cpy_r_r394 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 371, CPyStatic_dataclasses___globals);
        goto CPyL251;
    }
    cpy_r_str_type = cpy_r_r394;
    cpy_r_r395 = PyList_New(0);
    if (unlikely(cpy_r_r395 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 372, CPyStatic_dataclasses___globals);
        goto CPyL307;
    }
    CPy_INCREF(cpy_r_attributes);
    if (likely(cpy_r_attributes != Py_None))
        cpy_r_r396 = cpy_r_attributes;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 373, CPyStatic_dataclasses___globals, "list", cpy_r_attributes);
        goto CPyL308;
    }
    cpy_r_r397 = 0;
CPyL209: ;
    cpy_r_r398 = (CPyPtr)&((PyVarObject *)cpy_r_r396)->ob_size;
    cpy_r_r399 = *(int64_t *)cpy_r_r398;
    cpy_r_r400 = cpy_r_r399 << 1;
    cpy_r_r401 = (Py_ssize_t)cpy_r_r397 < (Py_ssize_t)cpy_r_r400;
    if (!cpy_r_r401) goto CPyL309;
    cpy_r_r402 = CPyList_GetItemUnsafe(cpy_r_r396, cpy_r_r397);
    if (likely(Py_TYPE(cpy_r_r402) == CPyType_dataclasses___DataclassAttribute))
        cpy_r_r403 = cpy_r_r402;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 372, CPyStatic_dataclasses___globals, "mypy.plugins.dataclasses.DataclassAttribute", cpy_r_r402);
        goto CPyL310;
    }
    cpy_r_attr_3 = cpy_r_r403;
    cpy_r_r404 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr_3)->_is_in_init;
    if (!cpy_r_r404) goto CPyL311;
CPyL212: ;
    cpy_r_r405 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr_3)->_name;
    CPy_INCREF(cpy_r_r405);
    CPy_DECREF(cpy_r_attr_3);
    cpy_r_r406 = CPY_INT_TAG;
    cpy_r_r407 = CPY_INT_TAG;
    cpy_r_r408 = CPyDef_types___LiteralType(cpy_r_r405, cpy_r_str_type, cpy_r_r406, cpy_r_r407);
    CPy_DECREF(cpy_r_r405);
    if (unlikely(cpy_r_r408 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 373, CPyStatic_dataclasses___globals);
        goto CPyL310;
    }
    cpy_r_r409 = PyList_Append(cpy_r_r395, cpy_r_r408);
    CPy_DECREF(cpy_r_r408);
    cpy_r_r410 = cpy_r_r409 >= 0;
    if (unlikely(!cpy_r_r410)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 372, CPyStatic_dataclasses___globals);
        goto CPyL310;
    }
CPyL214: ;
    cpy_r_r411 = cpy_r_r397 + 2;
    cpy_r_r397 = cpy_r_r411;
    goto CPyL209;
CPyL215: ;
    cpy_r_literals = cpy_r_r395;
    cpy_r_r412 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r412);
    cpy_r_r413 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r414 = NULL;
    cpy_r_r415 = CPY_GET_METHOD_TRAIT(cpy_r_r412, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r412, cpy_r_r413, cpy_r_r414); /* named_type */
    CPy_DECREF(cpy_r_r412);
    if (unlikely(cpy_r_r415 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 375, CPyStatic_dataclasses___globals);
        goto CPyL312;
    }
    cpy_r_r416 = CPY_INT_TAG;
    cpy_r_r417 = CPY_INT_TAG;
    cpy_r_r418 = 2;
    cpy_r_r419 = CPyDef_types___TupleType(cpy_r_literals, cpy_r_r415, cpy_r_r416, cpy_r_r417, cpy_r_r418);
    CPy_DECREF(cpy_r_literals);
    CPy_DECREF(cpy_r_r415);
    if (unlikely(cpy_r_r419 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 375, CPyStatic_dataclasses___globals);
        goto CPyL251;
    }
    cpy_r_match_args_type = cpy_r_r419;
    cpy_r_r420 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r420);
    cpy_r_r421 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    CPy_INCREF(cpy_r_r421);
    cpy_r_r422 = CPyStatics[786]; /* '__match_args__' */
    cpy_r_r423 = 2;
    cpy_r_r424 = 2;
    cpy_r_r425 = 2;
    cpy_r_r426 = NULL;
    cpy_r_r427 = 2;
    cpy_r_r428 = CPyDef_plugins___common___add_attribute_to_class(cpy_r_r420, cpy_r_r421, cpy_r_r422, cpy_r_match_args_type, cpy_r_r423, cpy_r_r424, cpy_r_r425, cpy_r_r426, cpy_r_r427);
    CPy_DECREF(cpy_r_r420);
    CPy_DECREF(cpy_r_r421);
    CPy_DECREF(cpy_r_match_args_type);
    if (unlikely(cpy_r_r428 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 376, CPyStatic_dataclasses___globals);
        goto CPyL251;
    }
CPyL218: ;
    cpy_r_r429 = CPyDef_dataclasses___DataclassTransformer____add_dataclass_fields_magic_attribute(cpy_r_self);
    if (unlikely(cpy_r_r429 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 378, CPyStatic_dataclasses___globals);
        goto CPyL251;
    }
    cpy_r_r430 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__spec;
    CPy_INCREF(cpy_r_r430);
    cpy_r_r431 = CPyStatic_dataclasses____TRANSFORM_SPEC_FOR_DATACLASSES;
    if (unlikely(cpy_r_r431 == NULL)) {
        goto CPyL313;
    } else
        goto CPyL222;
CPyL220: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_TRANSFORM_SPEC_FOR_DATACLASSES\" was not set");
    cpy_r_r432 = 0;
    if (unlikely(!cpy_r_r432)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 380, CPyStatic_dataclasses___globals);
        goto CPyL244;
    }
    CPy_Unreachable();
CPyL222: ;
    cpy_r_r433 = cpy_r_r430 == cpy_r_r431;
    CPy_DECREF(cpy_r_r430);
    if (!cpy_r_r433) goto CPyL225;
    CPy_INCREF(cpy_r_attributes);
    if (likely(cpy_r_attributes != Py_None))
        cpy_r_r434 = cpy_r_attributes;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 381, CPyStatic_dataclasses___globals, "list", cpy_r_attributes);
        goto CPyL251;
    }
    cpy_r_r435 = CPyDef_dataclasses___DataclassTransformer____add_internal_replace_method(cpy_r_self, cpy_r_r434);
    CPy_DECREF(cpy_r_r434);
    if (unlikely(cpy_r_r435 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 381, CPyStatic_dataclasses___globals);
        goto CPyL251;
    }
CPyL225: ;
    cpy_r_r436 = CPyStatics[719]; /* '__post_init__' */
    cpy_r_r437 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r437 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "transform", "TypeInfo", "names", 382, CPyStatic_dataclasses___globals);
        goto CPyL251;
    }
    CPy_INCREF(cpy_r_r437);
CPyL226: ;
    cpy_r_r438 = PyDict_Contains(cpy_r_r437, cpy_r_r436);
    CPy_DECREF(cpy_r_r437);
    cpy_r_r439 = cpy_r_r438 >= 0;
    if (unlikely(!cpy_r_r439)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 382, CPyStatic_dataclasses___globals);
        goto CPyL251;
    }
    cpy_r_r440 = cpy_r_r438;
    if (!cpy_r_r440) goto CPyL230;
    CPy_INCREF(cpy_r_attributes);
    if (likely(cpy_r_attributes != Py_None))
        cpy_r_r441 = cpy_r_attributes;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 383, CPyStatic_dataclasses___globals, "list", cpy_r_attributes);
        goto CPyL251;
    }
    cpy_r_r442 = CPyDef_dataclasses___DataclassTransformer____add_internal_post_init_method(cpy_r_self, cpy_r_r441);
    CPy_DECREF(cpy_r_r441);
    if (unlikely(cpy_r_r442 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 383, CPyStatic_dataclasses___globals);
        goto CPyL251;
    }
CPyL230: ;
    cpy_r_r443 = CPyStatics[4399]; /* 'attributes' */
    if (likely(cpy_r_attributes != Py_None))
        cpy_r_r444 = cpy_r_attributes;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 386, CPyStatic_dataclasses___globals, "list", cpy_r_attributes);
        goto CPyL314;
    }
    cpy_r_r445 = (CPyPtr)&((PyVarObject *)cpy_r_r444)->ob_size;
    cpy_r_r446 = *(int64_t *)cpy_r_r445;
    cpy_r_r447 = PyList_New(cpy_r_r446);
    if (unlikely(cpy_r_r447 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 386, CPyStatic_dataclasses___globals);
        goto CPyL315;
    }
    cpy_r_r448 = 0;
CPyL233: ;
    cpy_r_r449 = (CPyPtr)&((PyVarObject *)cpy_r_r444)->ob_size;
    cpy_r_r450 = *(int64_t *)cpy_r_r449;
    cpy_r_r451 = cpy_r_r450 << 1;
    cpy_r_r452 = (Py_ssize_t)cpy_r_r448 < (Py_ssize_t)cpy_r_r451;
    if (!cpy_r_r452) goto CPyL316;
    cpy_r_r453 = CPyList_GetItemUnsafe(cpy_r_r444, cpy_r_r448);
    if (likely(Py_TYPE(cpy_r_r453) == CPyType_dataclasses___DataclassAttribute))
        cpy_r_r454 = cpy_r_r453;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "transform", 386, CPyStatic_dataclasses___globals, "mypy.plugins.dataclasses.DataclassAttribute", cpy_r_r453);
        goto CPyL317;
    }
    cpy_r_attr_4 = cpy_r_r454;
    cpy_r_r455 = CPyDef_dataclasses___DataclassAttribute___serialize(cpy_r_attr_4);
    CPy_DECREF(cpy_r_attr_4);
    if (unlikely(cpy_r_r455 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 386, CPyStatic_dataclasses___globals);
        goto CPyL317;
    }
    cpy_r_r456 = CPyList_SetItemUnsafe(cpy_r_r447, cpy_r_r448, cpy_r_r455);
    if (unlikely(!cpy_r_r456)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 386, CPyStatic_dataclasses___globals);
        goto CPyL317;
    }
    cpy_r_r457 = cpy_r_r448 + 2;
    cpy_r_r448 = cpy_r_r457;
    goto CPyL233;
CPyL238: ;
    cpy_r_r458 = CPyStatics[4400]; /* 'frozen' */
    cpy_r_r459 = CPyStatics[4400]; /* 'frozen' */
    cpy_r_r460 = CPyDict_GetItem(cpy_r_decorator_arguments, cpy_r_r459);
    CPy_DECREF(cpy_r_decorator_arguments);
    if (unlikely(cpy_r_r460 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 387, CPyStatic_dataclasses___globals);
        goto CPyL318;
    }
    if (unlikely(!PyBool_Check(cpy_r_r460))) {
        CPy_TypeError("bool", cpy_r_r460); cpy_r_r461 = 2;
    } else
        cpy_r_r461 = cpy_r_r460 == Py_True;
    CPy_DECREF(cpy_r_r460);
    if (unlikely(cpy_r_r461 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 387, CPyStatic_dataclasses___globals);
        goto CPyL318;
    }
    cpy_r_r462 = cpy_r_r461 ? Py_True : Py_False;
    cpy_r_r463 = CPyDict_Build(2, cpy_r_r443, cpy_r_r447, cpy_r_r458, cpy_r_r462);
    CPy_DECREF(cpy_r_r447);
    if (unlikely(cpy_r_r463 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 385, CPyStatic_dataclasses___globals);
        goto CPyL245;
    }
    cpy_r_r464 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_metadata;
    if (unlikely(cpy_r_r464 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'metadata' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r464);
    }
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r464 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 385, CPyStatic_dataclasses___globals);
        goto CPyL319;
    }
CPyL242: ;
    cpy_r_r465 = CPyStatics[4500]; /* 'dataclass' */
    cpy_r_r466 = CPyDict_SetItem(cpy_r_r464, cpy_r_r465, cpy_r_r463);
    CPy_DECREF(cpy_r_r464);
    CPy_DECREF(cpy_r_r463);
    cpy_r_r467 = cpy_r_r466 >= 0;
    if (unlikely(!cpy_r_r467)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 385, CPyStatic_dataclasses___globals);
        goto CPyL244;
    }
    return 1;
CPyL244: ;
    cpy_r_r468 = 2;
    return cpy_r_r468;
CPyL245: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL244;
CPyL246: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_attributes);
    goto CPyL2;
CPyL247: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    goto CPyL244;
CPyL248: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL10;
CPyL249: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_r5);
    goto CPyL244;
CPyL250: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_attributes);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL251: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    goto CPyL244;
CPyL252: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    goto CPyL244;
CPyL253: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r70);
    goto CPyL244;
CPyL254: ;
    CPy_DECREF(cpy_r_r71);
    goto CPyL43;
CPyL255: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r71);
    goto CPyL244;
CPyL256: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_attr_2);
    goto CPyL244;
CPyL257: ;
    CPy_DECREF(cpy_r_attr_2);
    goto CPyL42;
CPyL258: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_args);
    goto CPyL244;
CPyL259: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_r97);
    goto CPyL49;
CPyL260: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL56;
CPyL261: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg);
    goto CPyL53;
CPyL262: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_nameless_var);
    goto CPyL244;
CPyL263: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_nameless_var);
    CPy_DecRef(cpy_r_r112);
    goto CPyL60;
CPyL264: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_nameless_var);
    CPy_DecRef(cpy_r_r117);
    goto CPyL244;
CPyL265: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_nameless_var);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_r122);
    goto CPyL65;
CPyL266: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r117);
    goto CPyL244;
CPyL267: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_r127);
    goto CPyL244;
CPyL268: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r127);
    CPy_DecRef(cpy_r_r128);
    goto CPyL244;
CPyL269: ;
    CPy_DECREF(cpy_r_r131);
    goto CPyL70;
CPyL270: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r128);
    goto CPyL244;
CPyL271: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r135);
    goto CPyL244;
CPyL272: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_obj_type);
    goto CPyL244;
CPyL273: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_r164);
    goto CPyL244;
CPyL274: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r165);
    goto CPyL244;
CPyL275: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r178);
    goto CPyL244;
CPyL276: ;
    CPy_DECREF(cpy_r_r200);
    goto CPyL134;
CPyL277: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r200);
    goto CPyL244;
CPyL278: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_method_name);
    goto CPyL244;
CPyL279: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_method_name);
    goto CPyL244;
CPyL280: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_method_name);
    CPy_DecRef(cpy_r_r222);
    goto CPyL244;
CPyL281: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_method_name);
    CPy_DecRef(cpy_r_r222);
    CPy_DecRef(cpy_r_r223);
    goto CPyL244;
CPyL282: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_method_name);
    CPy_DecRef(cpy_r_order_tvar_def);
    goto CPyL244;
CPyL283: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_method_name);
    CPy_DecRef(cpy_r_order_tvar_def);
    CPy_DecRef(cpy_r_order_return_type);
    goto CPyL244;
CPyL284: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_method_name);
    CPy_DecRef(cpy_r_order_tvar_def);
    CPy_DecRef(cpy_r_order_return_type);
    CPy_DecRef(cpy_r_r239);
    goto CPyL113;
CPyL285: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_method_name);
    CPy_DecRef(cpy_r_order_tvar_def);
    CPy_DecRef(cpy_r_order_return_type);
    CPy_DecRef(cpy_r_r244);
    goto CPyL244;
CPyL286: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_method_name);
    CPy_DecRef(cpy_r_order_tvar_def);
    CPy_DecRef(cpy_r_order_return_type);
    CPy_DecRef(cpy_r_order_args);
    goto CPyL244;
CPyL287: ;
    CPy_DECREF(cpy_r_existing_method);
    goto CPyL132;
CPyL288: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_method_name);
    CPy_DecRef(cpy_r_order_tvar_def);
    CPy_DecRef(cpy_r_order_return_type);
    CPy_DecRef(cpy_r_order_args);
    CPy_DecRef(cpy_r_existing_method);
    goto CPyL244;
CPyL289: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_attributes);
    CPy_DECREF(cpy_r_decorator_arguments);
    CPyTagged_DECREF(cpy_r_py_version.f0);
    CPyTagged_DECREF(cpy_r_py_version.f1);
    CPy_DECREF(cpy_r_r200);
    CPy_DECREF(cpy_r_method_name);
    CPy_DECREF(cpy_r_order_tvar_def);
    CPy_DECREF(cpy_r_order_return_type);
    CPy_DECREF(cpy_r_order_args);
    CPy_DECREF(cpy_r_existing_method);
    CPy_DECREF(cpy_r_r254);
    goto CPyL126;
CPyL290: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_attributes);
    CPy_DECREF(cpy_r_decorator_arguments);
    CPyTagged_DECREF(cpy_r_py_version.f0);
    CPyTagged_DECREF(cpy_r_py_version.f1);
    CPy_DECREF(cpy_r_r200);
    CPy_DECREF(cpy_r_method_name);
    CPy_DECREF(cpy_r_order_tvar_def);
    CPy_DECREF(cpy_r_order_return_type);
    CPy_DECREF(cpy_r_order_args);
    CPy_DECREF(cpy_r_existing_method);
    goto CPyL126;
CPyL291: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_method_name);
    CPy_DecRef(cpy_r_order_tvar_def);
    CPy_DecRef(cpy_r_order_return_type);
    CPy_DecRef(cpy_r_order_args);
    CPy_DecRef(cpy_r_existing_method);
    CPy_DecRef(cpy_r_r262);
    goto CPyL244;
CPyL292: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r200);
    CPy_DecRef(cpy_r_method_name);
    CPy_DecRef(cpy_r_order_tvar_def);
    CPy_DecRef(cpy_r_order_return_type);
    CPy_DecRef(cpy_r_order_args);
    CPy_DecRef(cpy_r_existing_method);
    CPy_DecRef(cpy_r_r262);
    CPy_DecRef(cpy_r_r265);
    goto CPyL244;
CPyL293: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_parent_decorator_arguments);
    goto CPyL244;
CPyL294: ;
    CPy_DECREF(cpy_r_r282);
    goto CPyL152;
CPyL295: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_parent_decorator_arguments);
    CPy_DecRef(cpy_r_r282);
    goto CPyL244;
CPyL296: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_parent_decorator_arguments);
    CPy_DecRef(cpy_r_r282);
    CPy_DecRef(cpy_r_parent);
    goto CPyL244;
CPyL297: ;
    CPy_DECREF(cpy_r_parent);
    CPy_DECREF(cpy_r_parent_args);
    goto CPyL151;
CPyL298: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_parent_decorator_arguments);
    CPy_DecRef(cpy_r_r282);
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_parent_args);
    goto CPyL244;
CPyL299: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_parent_decorator_arguments);
    CPy_DecRef(cpy_r_r282);
    CPy_DecRef(cpy_r_parent_args);
    goto CPyL244;
CPyL300: ;
    CPy_DECREF(cpy_r_parent_args);
    goto CPyL151;
CPyL301: ;
    CPy_DECREF(cpy_r_parent_decorator_arguments);
    goto CPyL163;
CPyL302: ;
    CPy_DECREF(cpy_r_parent_decorator_arguments);
    goto CPyL161;
CPyL303: ;
    CPy_DECREF(cpy_r_parent_decorator_arguments);
    goto CPyL177;
CPyL304: ;
    CPy_DECREF(cpy_r_parent_decorator_arguments);
    goto CPyL175;
CPyL305: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPyTagged_DecRef(cpy_r_py_version.f0);
    CPyTagged_DecRef(cpy_r_py_version.f1);
    CPy_DecRef(cpy_r_r358);
    goto CPyL244;
CPyL306: ;
    CPyTagged_DECREF(cpy_r_py_version.f0);
    CPyTagged_DECREF(cpy_r_py_version.f1);
    goto CPyL218;
CPyL307: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPy_DecRef(cpy_r_str_type);
    goto CPyL244;
CPyL308: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r395);
    goto CPyL244;
CPyL309: ;
    CPy_DECREF(cpy_r_str_type);
    CPy_DECREF(cpy_r_r396);
    goto CPyL215;
CPyL310: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r395);
    CPy_DecRef(cpy_r_r396);
    goto CPyL244;
CPyL311: ;
    CPy_DECREF(cpy_r_attr_3);
    goto CPyL214;
CPyL312: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPy_DecRef(cpy_r_literals);
    goto CPyL244;
CPyL313: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPy_DecRef(cpy_r_r430);
    goto CPyL220;
CPyL314: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_decorator_arguments);
    goto CPyL244;
CPyL315: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPy_DecRef(cpy_r_r444);
    goto CPyL244;
CPyL316: ;
    CPy_DECREF(cpy_r_r444);
    goto CPyL238;
CPyL317: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_decorator_arguments);
    CPy_DecRef(cpy_r_r444);
    CPy_DecRef(cpy_r_r447);
    goto CPyL244;
CPyL318: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r447);
    goto CPyL244;
CPyL319: ;
    CPy_DecRef(cpy_r_r463);
    goto CPyL244;
}

PyObject *CPyPy_dataclasses___DataclassTransformer___transform(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":transform", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    char retval = CPyDef_dataclasses___DataclassTransformer___transform(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "transform", 225, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___DataclassTransformer____add_internal_replace_method(PyObject *cpy_r_self, PyObject *cpy_r_attributes) {
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
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[4503]; /* '__mypy-replace' */
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = PyList_New(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_internal_replace_method", 401, CPyStatic_dataclasses___globals);
        goto CPyL11;
    }
    cpy_r_r6 = 0;
CPyL2: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL7;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_attributes, cpy_r_r6);
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_dataclasses___DataclassAttribute))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_add_internal_replace_method", 401, CPyStatic_dataclasses___globals, "mypy.plugins.dataclasses.DataclassAttribute", cpy_r_r11);
        goto CPyL12;
    }
    cpy_r_attr = cpy_r_r12;
    cpy_r_r13 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    cpy_r_r14 = ((mypy___nodes___ClassDefObject *)cpy_r_r13)->_info;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyStatics[3798]; /* 'replace' */
    cpy_r_r16 = CPyDef_dataclasses___DataclassAttribute___to_argument(cpy_r_attr, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_internal_replace_method", 401, CPyStatic_dataclasses___globals);
        goto CPyL12;
    }
    cpy_r_r17 = CPyList_SetItemUnsafe(cpy_r_r5, cpy_r_r6, cpy_r_r16);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_internal_replace_method", 401, CPyStatic_dataclasses___globals);
        goto CPyL12;
    }
    cpy_r_r18 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r18;
    goto CPyL2;
CPyL7: ;
    cpy_r_r19 = CPY_INT_TAG;
    cpy_r_r20 = CPY_INT_TAG;
    cpy_r_r21 = CPyDef_types___NoneType(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_internal_replace_method", 402, CPyStatic_dataclasses___globals);
        goto CPyL12;
    }
    cpy_r_r22 = NULL;
    cpy_r_r23 = NULL;
    cpy_r_r24 = 2;
    cpy_r_r25 = CPyDef_plugins___common___add_method_to_class(cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r5, cpy_r_r21, cpy_r_r22, cpy_r_r23, cpy_r_r24, 1);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_internal_replace_method", 397, CPyStatic_dataclasses___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL10;
}

PyObject *CPyPy_dataclasses___DataclassTransformer____add_internal_replace_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"attributes", 0};
    static CPyArg_Parser parser = {"O:_add_internal_replace_method", kwlist, 0};
    PyObject *obj_attributes;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_attributes)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    PyObject *arg_attributes;
    if (likely(PyList_Check(obj_attributes)))
        arg_attributes = obj_attributes;
    else {
        CPy_TypeError("list", obj_attributes); 
        goto fail;
    }
    char retval = CPyDef_dataclasses___DataclassTransformer____add_internal_replace_method(arg_self, arg_attributes);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_internal_replace_method", 392, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___DataclassTransformer____add_internal_post_init_method(PyObject *cpy_r_self, PyObject *cpy_r_attributes) {
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
    PyObject *cpy_r_attr;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[4504]; /* '__mypy-post_init' */
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_internal_post_init_method", 411, CPyStatic_dataclasses___globals);
        goto CPyL12;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL8;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_attributes, cpy_r_r4);
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_dataclasses___DataclassAttribute))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_add_internal_post_init_method", 411, CPyStatic_dataclasses___globals, "mypy.plugins.dataclasses.DataclassAttribute", cpy_r_r9);
        goto CPyL13;
    }
    cpy_r_attr = cpy_r_r10;
    cpy_r_r11 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_is_init_var;
    if (!cpy_r_r11) goto CPyL14;
CPyL5: ;
    cpy_r_r12 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    cpy_r_r13 = ((mypy___nodes___ClassDefObject *)cpy_r_r12)->_info;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyStatics[719]; /* '__post_init__' */
    cpy_r_r15 = CPyDef_dataclasses___DataclassAttribute___to_argument(cpy_r_attr, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_internal_post_init_method", 412, CPyStatic_dataclasses___globals);
        goto CPyL13;
    }
    cpy_r_r16 = PyList_Append(cpy_r_r3, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_internal_post_init_method", 411, CPyStatic_dataclasses___globals);
        goto CPyL13;
    }
CPyL7: ;
    cpy_r_r18 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r18;
    goto CPyL2;
CPyL8: ;
    cpy_r_r19 = CPY_INT_TAG;
    cpy_r_r20 = CPY_INT_TAG;
    cpy_r_r21 = CPyDef_types___NoneType(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_internal_post_init_method", 416, CPyStatic_dataclasses___globals);
        goto CPyL13;
    }
    cpy_r_r22 = NULL;
    cpy_r_r23 = NULL;
    cpy_r_r24 = 2;
    cpy_r_r25 = 2;
    cpy_r_r26 = CPyDef_plugins___common___add_method_to_class(cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r21, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_internal_post_init_method", 407, CPyStatic_dataclasses___globals);
        goto CPyL11;
    }
    return 1;
CPyL11: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL11;
CPyL14: ;
    CPy_DECREF(cpy_r_attr);
    goto CPyL7;
}

PyObject *CPyPy_dataclasses___DataclassTransformer____add_internal_post_init_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"attributes", 0};
    static CPyArg_Parser parser = {"O:_add_internal_post_init_method", kwlist, 0};
    PyObject *obj_attributes;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_attributes)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    PyObject *arg_attributes;
    if (likely(PyList_Check(obj_attributes)))
        arg_attributes = obj_attributes;
    else {
        CPy_TypeError("list", obj_attributes); 
        goto fail;
    }
    char retval = CPyDef_dataclasses___DataclassTransformer____add_internal_post_init_method(arg_self, arg_attributes);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_internal_post_init_method", 406, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___DataclassTransformer___add_slots(PyObject *cpy_r_self, PyObject *cpy_r_info, PyObject *cpy_r_attributes, char cpy_r_correct_version) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_generated_slots;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
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
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r__;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_slots_type;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    if (cpy_r_correct_version) goto CPyL3;
    cpy_r_r0 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[4505]; /* ('Keyword argument "slots" for "dataclass" is only valid '
                                    'in Python 3.10 and higher') */
    cpy_r_r2 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__reason;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 2;
    cpy_r_r4 = 2;
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPY_GET_METHOD_TRAIT(cpy_r_r0, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5); /* fail */
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 425, CPyStatic_dataclasses___globals);
        goto CPyL35;
    }
    return 1;
CPyL3: ;
    cpy_r_r7 = PySet_New(NULL);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 432, CPyStatic_dataclasses___globals);
        goto CPyL35;
    }
    cpy_r_r8 = 0;
CPyL5: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r12) goto CPyL9;
    cpy_r_r13 = CPyList_GetItemUnsafe(cpy_r_attributes, cpy_r_r8);
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_dataclasses___DataclassAttribute))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "add_slots", 432, CPyStatic_dataclasses___globals, "mypy.plugins.dataclasses.DataclassAttribute", cpy_r_r13);
        goto CPyL36;
    }
    cpy_r_attr = cpy_r_r14;
    cpy_r_r15 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_name;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_attr);
    cpy_r_r16 = PySet_Add(cpy_r_r7, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 432, CPyStatic_dataclasses___globals);
        goto CPyL36;
    }
    cpy_r_r18 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r18;
    goto CPyL5;
CPyL9: ;
    cpy_r_generated_slots = cpy_r_r7;
    cpy_r_r19 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_slots;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "add_slots", "TypeInfo", "slots", 433, CPyStatic_dataclasses___globals);
        goto CPyL37;
    }
CPyL10: ;
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_r19 != cpy_r_r20;
    if (!cpy_r_r21) goto CPyL16;
    cpy_r_r22 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_slots;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "add_slots", "TypeInfo", "slots", 433, CPyStatic_dataclasses___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r22);
CPyL12: ;
    if (likely(cpy_r_r22 != Py_None))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "add_slots", 433, CPyStatic_dataclasses___globals, "set", cpy_r_r22);
        goto CPyL37;
    }
    cpy_r_r24 = PyObject_RichCompare(cpy_r_r23, cpy_r_generated_slots, 3);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 433, CPyStatic_dataclasses___globals);
        goto CPyL37;
    }
    if (unlikely(!PyBool_Check(cpy_r_r24))) {
        CPy_TypeError("bool", cpy_r_r24); cpy_r_r25 = 2;
    } else
        cpy_r_r25 = cpy_r_r24 == Py_True;
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 433, CPyStatic_dataclasses___globals);
        goto CPyL37;
    }
    if (cpy_r_r25) goto CPyL38;
CPyL16: ;
    cpy_r_r26 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "add_slots", "TypeInfo", "names", 433, CPyStatic_dataclasses___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r26);
CPyL17: ;
    cpy_r_r27 = CPyStatics[785]; /* '__slots__' */
    cpy_r_r28 = CPyDict_GetWithNone(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 433, CPyStatic_dataclasses___globals);
        goto CPyL37;
    }
    if (Py_TYPE(cpy_r_r28) == CPyType_nodes___SymbolTableNode)
        cpy_r_r29 = cpy_r_r28;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL4821;
    if (cpy_r_r28 == Py_None)
        cpy_r_r29 = cpy_r_r28;
    else {
        cpy_r_r29 = NULL;
    }
    if (cpy_r_r29 != NULL) goto __LL4821;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "add_slots", 433, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r28);
    goto CPyL37;
__LL4821: ;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_r29 != cpy_r_r30;
    CPy_DECREF(cpy_r_r29);
    if (cpy_r_r31) {
        goto CPyL38;
    } else
        goto CPyL23;
CPyL20: ;
    cpy_r_r32 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    cpy_r_r34 = ((mypy___nodes___ClassDefObject *)cpy_r_r33)->_name;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[178]; /* '"' */
    cpy_r_r36 = CPyStatics[4506]; /* ('" both defines "__slots__" and is used with '
                                     '"slots=True"') */
    cpy_r_r37 = CPyStr_Build(3, cpy_r_r35, cpy_r_r34, cpy_r_r36);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 441, CPyStatic_dataclasses___globals);
        goto CPyL39;
    }
    cpy_r_r38 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = 2;
    cpy_r_r40 = 2;
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPY_GET_METHOD_TRAIT(cpy_r_r32, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r32, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41); /* fail */
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 440, CPyStatic_dataclasses___globals);
        goto CPyL35;
    }
    return 1;
CPyL23: ;
    CPy_INCREF(cpy_r_generated_slots);
    if (((mypy___nodes___TypeInfoObject *)cpy_r_info)->_slots != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_info)->_slots);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_slots = cpy_r_generated_slots;
    cpy_r_r43 = 1;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 447, CPyStatic_dataclasses___globals);
        goto CPyL37;
    }
    cpy_r_r44 = PyList_New(0);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 451, CPyStatic_dataclasses___globals);
        goto CPyL37;
    }
    cpy_r_r45 = PyObject_GetIter(cpy_r_generated_slots);
    CPy_DECREF(cpy_r_generated_slots);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 451, CPyStatic_dataclasses___globals);
        goto CPyL40;
    }
CPyL26: ;
    cpy_r_r46 = PyIter_Next(cpy_r_r45);
    if (cpy_r_r46 == NULL) goto CPyL41;
    if (likely(PyUnicode_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "add_slots", 451, CPyStatic_dataclasses___globals, "str", cpy_r_r46);
        goto CPyL42;
    }
    cpy_r__ = cpy_r_r47;
    CPy_DECREF(cpy_r__);
    cpy_r_r48 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r50 = NULL;
    cpy_r_r51 = CPY_GET_METHOD_TRAIT(cpy_r_r48, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r48, cpy_r_r49, cpy_r_r50); /* named_type */
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 451, CPyStatic_dataclasses___globals);
        goto CPyL42;
    }
    cpy_r_r52 = PyList_Append(cpy_r_r44, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 451, CPyStatic_dataclasses___globals);
        goto CPyL42;
    } else
        goto CPyL26;
CPyL30: ;
    cpy_r_r54 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 451, CPyStatic_dataclasses___globals);
        goto CPyL40;
    }
    cpy_r_r55 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r57 = NULL;
    cpy_r_r58 = CPY_GET_METHOD_TRAIT(cpy_r_r55, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r55, cpy_r_r56, cpy_r_r57); /* named_type */
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 452, CPyStatic_dataclasses___globals);
        goto CPyL40;
    }
    cpy_r_r59 = CPY_INT_TAG;
    cpy_r_r60 = CPY_INT_TAG;
    cpy_r_r61 = 2;
    cpy_r_r62 = CPyDef_types___TupleType(cpy_r_r44, cpy_r_r58, cpy_r_r59, cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 450, CPyStatic_dataclasses___globals);
        goto CPyL35;
    }
    cpy_r_slots_type = cpy_r_r62;
    cpy_r_r63 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    CPy_INCREF(cpy_r_r64);
    cpy_r_r65 = CPyStatics[785]; /* '__slots__' */
    cpy_r_r66 = 2;
    cpy_r_r67 = 2;
    cpy_r_r68 = 2;
    cpy_r_r69 = NULL;
    cpy_r_r70 = 2;
    cpy_r_r71 = CPyDef_plugins___common___add_attribute_to_class(cpy_r_r63, cpy_r_r64, cpy_r_r65, cpy_r_slots_type, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_slots_type);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 454, CPyStatic_dataclasses___globals);
        goto CPyL35;
    }
    return 1;
CPyL35: ;
    cpy_r_r72 = 2;
    return cpy_r_r72;
CPyL36: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL35;
CPyL37: ;
    CPy_DecRef(cpy_r_generated_slots);
    goto CPyL35;
CPyL38: ;
    CPy_DECREF(cpy_r_generated_slots);
    goto CPyL20;
CPyL39: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL35;
CPyL40: ;
    CPy_DecRef(cpy_r_r44);
    goto CPyL35;
CPyL41: ;
    CPy_DECREF(cpy_r_r45);
    goto CPyL30;
CPyL42: ;
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r45);
    goto CPyL35;
}

PyObject *CPyPy_dataclasses___DataclassTransformer___add_slots(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"info", "attributes", "correct_version", 0};
    static CPyArg_Parser parser = {"OO|$@O:add_slots", kwlist, 0};
    PyObject *obj_info;
    PyObject *obj_attributes;
    PyObject *obj_correct_version;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_info, &obj_attributes, &obj_correct_version)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_attributes;
    if (likely(PyList_Check(obj_attributes)))
        arg_attributes = obj_attributes;
    else {
        CPy_TypeError("list", obj_attributes); 
        goto fail;
    }
    char arg_correct_version;
    if (unlikely(!PyBool_Check(obj_correct_version))) {
        CPy_TypeError("bool", obj_correct_version); goto fail;
    } else
        arg_correct_version = obj_correct_version == Py_True;
    char retval = CPyDef_dataclasses___DataclassTransformer___add_slots(arg_self, arg_info, arg_attributes, arg_correct_version);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_slots", 419, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___DataclassTransformer___reset_init_only_vars(PyObject *cpy_r_self, PyObject *cpy_r_info, PyObject *cpy_r_attributes) {
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_attr;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
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
    PyObject *cpy_r_stmt;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_lvalue;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    CPyTagged cpy_r_r58;
    char cpy_r_r59;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL32;
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_attributes, cpy_r_r0);
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_dataclasses___DataclassAttribute))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "reset_init_only_vars", 458, CPyStatic_dataclasses___globals, "mypy.plugins.dataclasses.DataclassAttribute", cpy_r_r5);
        goto CPyL33;
    }
    cpy_r_attr = cpy_r_r6;
    cpy_r_r7 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_is_init_var;
    if (!cpy_r_r7) goto CPyL34;
CPyL4: ;
    cpy_r_r8 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_name;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "reset_init_only_vars", "TypeInfo", "names", 460, CPyStatic_dataclasses___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r9);
CPyL5: ;
    cpy_r_r10 = PyDict_Contains(cpy_r_r9, cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "reset_init_only_vars", 460, CPyStatic_dataclasses___globals);
        goto CPyL36;
    }
    cpy_r_r12 = cpy_r_r10;
    if (!cpy_r_r12) goto CPyL9;
    cpy_r_r13 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "reset_init_only_vars", "TypeInfo", "names", 461, CPyStatic_dataclasses___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r13);
CPyL8: ;
    cpy_r_r14 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_name;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = PyObject_DelItem(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "reset_init_only_vars", 461, CPyStatic_dataclasses___globals);
        goto CPyL36;
    } else
        goto CPyL12;
CPyL9: ;
    cpy_r_r17 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_is_init_var;
    if (cpy_r_r17) {
        goto CPyL12;
    } else
        goto CPyL37;
CPyL10: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "reset_init_only_vars", 464, CPyStatic_dataclasses___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r19 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_defn;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "reset_init_only_vars", "TypeInfo", "defn", 465, CPyStatic_dataclasses___globals);
        goto CPyL36;
    }
CPyL13: ;
    cpy_r_r20 = ((mypy___nodes___ClassDefObject *)cpy_r_r19)->_defs;
    cpy_r_r21 = ((mypy___nodes___BlockObject *)cpy_r_r20)->_body;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = 0;
CPyL14: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r21)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL38;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_r21, cpy_r_r22);
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_nodes___Statement)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "reset_init_only_vars", 465, CPyStatic_dataclasses___globals, "mypy.nodes.Statement", cpy_r_r27);
        goto CPyL39;
    }
    cpy_r_stmt = cpy_r_r28;
    cpy_r_r29 = (PyObject *)CPyType_nodes___AssignmentStmt;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL40;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r33 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "reset_init_only_vars", 466, CPyStatic_dataclasses___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL41;
    }
    cpy_r_r34 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r33)->_unanalyzed_type;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r36 = cpy_r_r34 != cpy_r_r35;
    CPy_DECREF(cpy_r_r34);
    if (!cpy_r_r36) goto CPyL40;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r37 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "reset_init_only_vars", 467, CPyStatic_dataclasses___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL41;
    }
    cpy_r_r38 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r37)->_lvalues;
    cpy_r_r39 = CPyList_GetItemShort(cpy_r_r38, 0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "reset_init_only_vars", 467, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r39, CPyType_nodes___Expression)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "reset_init_only_vars", 467, CPyStatic_dataclasses___globals, "mypy.nodes.Expression", cpy_r_r39);
        goto CPyL41;
    }
    CPy_DECREF(cpy_r_stmt);
    cpy_r_lvalue = cpy_r_r40;
    cpy_r_r41 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (!cpy_r_r44) goto CPyL42;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r45 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "reset_init_only_vars", 468, CPyStatic_dataclasses___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL43;
    }
    cpy_r_r46 = ((mypy___nodes___NameExprObject *)cpy_r_r45)->_name;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_name;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = PyUnicode_Compare(cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 == -1;
    if (!cpy_r_r49) goto CPyL27;
    cpy_r_r50 = PyErr_Occurred();
    cpy_r_r51 = cpy_r_r50 != NULL;
    if (!cpy_r_r51) goto CPyL27;
    cpy_r_r52 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "reset_init_only_vars", 468, CPyStatic_dataclasses___globals);
        goto CPyL43;
    }
CPyL27: ;
    cpy_r_r53 = cpy_r_r48 == 0;
    if (!cpy_r_r53) goto CPyL42;
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r54 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "reset_init_only_vars", 471, CPyStatic_dataclasses___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL43;
    }
    cpy_r_r55 = Py_None;
    CPy_INCREF(cpy_r_r55);
    CPy_DECREF(((mypy___nodes___NameExprObject *)cpy_r_r54)->_node);
    ((mypy___nodes___NameExprObject *)cpy_r_r54)->_node = cpy_r_r55;
    CPy_DECREF(cpy_r_lvalue);
CPyL30: ;
    cpy_r_r57 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r57;
    goto CPyL14;
CPyL31: ;
    cpy_r_r58 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r58;
    goto CPyL1;
CPyL32: ;
    return 1;
CPyL33: ;
    cpy_r_r59 = 2;
    return cpy_r_r59;
CPyL34: ;
    CPy_DECREF(cpy_r_attr);
    goto CPyL31;
CPyL35: ;
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r8);
    goto CPyL33;
CPyL36: ;
    CPy_DecRef(cpy_r_attr);
    goto CPyL33;
CPyL37: ;
    CPy_DECREF(cpy_r_attr);
    goto CPyL10;
CPyL38: ;
    CPy_DECREF(cpy_r_attr);
    CPy_DECREF(cpy_r_r21);
    goto CPyL31;
CPyL39: ;
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r21);
    goto CPyL33;
CPyL40: ;
    CPy_DECREF(cpy_r_stmt);
    goto CPyL30;
CPyL41: ;
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_stmt);
    goto CPyL33;
CPyL42: ;
    CPy_DECREF(cpy_r_lvalue);
    goto CPyL30;
CPyL43: ;
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_lvalue);
    goto CPyL33;
}

PyObject *CPyPy_dataclasses___DataclassTransformer___reset_init_only_vars(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"info", "attributes", 0};
    static CPyArg_Parser parser = {"OO:reset_init_only_vars", kwlist, 0};
    PyObject *obj_info;
    PyObject *obj_attributes;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_info, &obj_attributes)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_attributes;
    if (likely(PyList_Check(obj_attributes)))
        arg_attributes = obj_attributes;
    else {
        CPy_TypeError("list", obj_attributes); 
        goto fail;
    }
    char retval = CPyDef_dataclasses___DataclassTransformer___reset_init_only_vars(arg_self, arg_info, arg_attributes);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "reset_init_only_vars", 456, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    tuple_T3OOO cpy_r_r39;
    char cpy_r_r40;
    PyObject **cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    tuple_T3OOO cpy_r_r45;
    char cpy_r_r46;
    tuple_T3OOO cpy_r_r47;
    tuple_T3OOO cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyTagged cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
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
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    tuple_T3OOO cpy_r_r80;
    char cpy_r_r81;
    PyObject **cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    tuple_T3OOO cpy_r_r86;
    char cpy_r_r87;
    tuple_T3OOO cpy_r_r88;
    tuple_T3OOO cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    int64_t cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    int64_t cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    int64_t cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = NULL;
    cpy_r_r3 = cpy_r_r2;
    cpy_r_r4 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_gen", "__mypyc_env__", 473, CPyStatic_dataclasses___globals);
        goto CPyL119;
    }
    CPy_INCREF(cpy_r_r4);
CPyL1: ;
    cpy_r_r5 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_next_label__;
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "__mypyc_next_label__", 473, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
    CPyTagged_INCREF(cpy_r_r5);
    goto CPyL104;
CPyL2: ;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_type != cpy_r_r6;
    if (cpy_r_r7) {
        goto CPyL121;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 473, CPyStatic_dataclasses___globals);
        goto CPyL118;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r8 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->_stmt;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "stmt", 476, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
    CPy_INCREF(cpy_r_r8);
CPyL6: ;
    cpy_r_r9 = ((mypy___nodes___IfStmtObject *)cpy_r_r8)->_body;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__0);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__0 = cpy_r_r9;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", -1, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__1 = 0;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", -1, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
CPyL8: ;
    cpy_r_r12 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__0;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "__mypyc_temp__0", 476, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
    CPy_INCREF(cpy_r_r12);
CPyL9: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__1;
    if (unlikely(cpy_r_r16 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "__mypyc_temp__1", 476, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
CPyL10: ;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r16 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r17) goto CPyL122;
    cpy_r_r18 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__0;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "__mypyc_temp__0", 476, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
    CPy_INCREF(cpy_r_r18);
CPyL12: ;
    cpy_r_r19 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__1;
    if (unlikely(cpy_r_r19 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "__mypyc_temp__1", 476, CPyStatic_dataclasses___globals);
        goto CPyL123;
    }
CPyL13: ;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_nodes___Block))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 476, CPyStatic_dataclasses___globals, "mypy.nodes.Block", cpy_r_r20);
        goto CPyL120;
    }
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->_body != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->_body);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->_body = cpy_r_r21;
    cpy_r_r22 = 1;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 476, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
    cpy_r_r23 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->_body;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "body", 477, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
    CPy_INCREF(cpy_r_r23);
CPyL16: ;
    cpy_r_r24 = ((mypy___nodes___BlockObject *)cpy_r_r23)->_is_unreachable;
    CPy_DECREF(cpy_r_r23);
    if (cpy_r_r24) goto CPyL55;
CPyL17: ;
    cpy_r_r25 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->_self;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "self", 478, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
    CPy_INCREF(cpy_r_r25);
CPyL18: ;
    cpy_r_r26 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->_body;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "body", 478, CPyStatic_dataclasses___globals);
        goto CPyL124;
    }
    CPy_INCREF(cpy_r_r26);
CPyL19: ;
    cpy_r_r27 = CPyDef_dataclasses___DataclassTransformer____get_assignment_statements_from_block(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 478, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
    cpy_r_r28 = PyObject_GetIter(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 478, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__2);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__2 = cpy_r_r28;
    cpy_r_r29 = 1;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", -1, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
    cpy_r_r30 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__2;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "__mypyc_temp__2", -1, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
    CPy_INCREF(cpy_r_r30);
CPyL23: ;
    cpy_r_r31 = CPyIter_Next(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (cpy_r_r31 != NULL) goto CPyL26;
    cpy_r_r32 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 478, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
    cpy_r_r33 = cpy_r_r32;
    CPy_DECREF(cpy_r_r33);
    goto CPyL55;
CPyL26: ;
    cpy_r_r34 = cpy_r_r31;
CPyL27: ;
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_next_label__);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_next_label__ = 2;
    cpy_r_r35 = 1;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 478, CPyStatic_dataclasses___globals);
        goto CPyL125;
    } else
        goto CPyL126;
CPyL28: ;
    return cpy_r_r34;
CPyL29: ;
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_type != cpy_r_r36;
    if (!cpy_r_r37) goto CPyL32;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 478, CPyStatic_dataclasses___globals);
        goto CPyL33;
    } else
        goto CPyL127;
CPyL31: ;
    CPy_Unreachable();
CPyL32: ;
    CPy_INCREF(cpy_r_arg);
    cpy_r_r38 = cpy_r_arg;
    goto CPyL50;
CPyL33: ;
    cpy_r_r39 = CPy_CatchError();
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__3.f0 != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__3.f0);
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__3.f1);
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__3.f2);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__3 = cpy_r_r39;
    cpy_r_r40 = 1;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", -1, CPyStatic_dataclasses___globals);
        goto CPyL128;
    }
    cpy_r_r41 = (PyObject **)&cpy_r_r1;
    cpy_r_r42 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__2;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "__mypyc_temp__2", -1, CPyStatic_dataclasses___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r42);
CPyL35: ;
    cpy_r_r43 = CPy_YieldFromErrorHandle(cpy_r_r42, cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 478, CPyStatic_dataclasses___globals);
        goto CPyL128;
    }
    if (cpy_r_r43) goto CPyL42;
    if (cpy_r_r1 == NULL) {
        goto CPyL129;
    } else
        goto CPyL40;
CPyL38: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"\" referenced before assignment");
    cpy_r_r44 = 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", -1, CPyStatic_dataclasses___globals);
        goto CPyL47;
    } else
        goto CPyL130;
CPyL39: ;
    CPy_Unreachable();
CPyL40: ;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r34 = cpy_r_r1;
    cpy_r_r45 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__3;
    if (unlikely(cpy_r_r45.f0 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "__mypyc_temp__3", -1, CPyStatic_dataclasses___globals);
        goto CPyL131;
    }
    CPy_INCREF(cpy_r_r45.f0);
    CPy_INCREF(cpy_r_r45.f1);
    CPy_INCREF(cpy_r_r45.f2);
CPyL41: ;
    CPy_RestoreExcInfo(cpy_r_r45);
    CPy_DecRef(cpy_r_r45.f0);
    CPy_DecRef(cpy_r_r45.f1);
    CPy_DecRef(cpy_r_r45.f2);
    goto CPyL27;
CPyL42: ;
    if (cpy_r_r1 == NULL) {
        goto CPyL132;
    } else
        goto CPyL45;
CPyL43: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"\" referenced before assignment");
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", -1, CPyStatic_dataclasses___globals);
        goto CPyL47;
    } else
        goto CPyL133;
CPyL44: ;
    CPy_Unreachable();
CPyL45: ;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r33 = cpy_r_r1;
    CPy_DecRef(cpy_r_r33);
    cpy_r_r47 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__3;
    if (unlikely(cpy_r_r47.f0 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "__mypyc_temp__3", -1, CPyStatic_dataclasses___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r47.f0);
    CPy_INCREF(cpy_r_r47.f1);
    CPy_INCREF(cpy_r_r47.f2);
CPyL46: ;
    CPy_RestoreExcInfo(cpy_r_r47);
    CPy_DecRef(cpy_r_r47.f0);
    CPy_DecRef(cpy_r_r47.f1);
    CPy_DecRef(cpy_r_r47.f2);
    goto CPyL55;
CPyL47: ;
    cpy_r_r48 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__3;
    if (unlikely(cpy_r_r48.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__3' of '_get_assignment_statements_from_if_statement_DataclassTransformer_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r48.f0);
        CPy_INCREF(cpy_r_r48.f1);
        CPy_INCREF(cpy_r_r48.f2);
    }
    CPy_DecRef(cpy_r_r4);
    if (unlikely(cpy_r_r48.f0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", -1, CPyStatic_dataclasses___globals);
        goto CPyL118;
    }
CPyL48: ;
    CPy_RestoreExcInfo(cpy_r_r48);
    CPy_DecRef(cpy_r_r48.f0);
    CPy_DecRef(cpy_r_r48.f1);
    CPy_DecRef(cpy_r_r48.f2);
    cpy_r_r49 = CPy_KeepPropagating();
    if (!cpy_r_r49) goto CPyL118;
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r50 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__2;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "__mypyc_temp__2", -1, CPyStatic_dataclasses___globals);
        goto CPyL134;
    }
    CPy_INCREF(cpy_r_r50);
CPyL51: ;
    cpy_r_r51 = CPyIter_Send(cpy_r_r50, cpy_r_r38);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r38);
    if (cpy_r_r51 == NULL) goto CPyL53;
    cpy_r_r34 = cpy_r_r51;
    goto CPyL27;
CPyL53: ;
    cpy_r_r52 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 478, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
    cpy_r_r33 = cpy_r_r52;
    CPy_DECREF(cpy_r_r33);
CPyL55: ;
    cpy_r_r53 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__1;
    if (unlikely(cpy_r_r53 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "__mypyc_temp__1", 476, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
CPyL56: ;
    cpy_r_r54 = cpy_r_r53 + 2;
    ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__1 = cpy_r_r54;
    cpy_r_r55 = 1;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 476, CPyStatic_dataclasses___globals);
        goto CPyL120;
    } else
        goto CPyL8;
CPyL57: ;
    cpy_r_r56 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->_stmt;
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "stmt", 479, CPyStatic_dataclasses___globals);
        goto CPyL135;
    }
    CPy_INCREF(cpy_r_r56);
CPyL58: ;
    cpy_r_r57 = ((mypy___nodes___IfStmtObject *)cpy_r_r56)->_else_body;
    cpy_r_r58 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r59 = cpy_r_r57 != cpy_r_r58;
    CPy_DECREF(cpy_r_r56);
    if (!cpy_r_r59) goto CPyL136;
    cpy_r_r60 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->_stmt;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "stmt", 479, CPyStatic_dataclasses___globals);
        goto CPyL135;
    }
    CPy_INCREF(cpy_r_r60);
CPyL60: ;
    cpy_r_r61 = ((mypy___nodes___IfStmtObject *)cpy_r_r60)->_else_body;
    if (likely(cpy_r_r61 != Py_None))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 479, CPyStatic_dataclasses___globals, "mypy.nodes.Block", cpy_r_r61);
        goto CPyL137;
    }
    cpy_r_r63 = ((mypy___nodes___BlockObject *)cpy_r_r62)->_is_unreachable;
    CPy_DECREF(cpy_r_r60);
    if (cpy_r_r63) goto CPyL136;
CPyL62: ;
    cpy_r_r64 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->_self;
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "self", 480, CPyStatic_dataclasses___globals);
        goto CPyL135;
    }
    CPy_INCREF(cpy_r_r64);
CPyL63: ;
    cpy_r_r65 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->_stmt;
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "stmt", 480, CPyStatic_dataclasses___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r65);
CPyL64: ;
    cpy_r_r66 = ((mypy___nodes___IfStmtObject *)cpy_r_r65)->_else_body;
    CPy_INCREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    if (likely(cpy_r_r66 != Py_None))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 480, CPyStatic_dataclasses___globals, "mypy.nodes.Block", cpy_r_r66);
        goto CPyL138;
    }
    cpy_r_r68 = CPyDef_dataclasses___DataclassTransformer____get_assignment_statements_from_block(cpy_r_r64, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 480, CPyStatic_dataclasses___globals);
        goto CPyL135;
    }
    cpy_r_r69 = PyObject_GetIter(cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 480, CPyStatic_dataclasses___globals);
        goto CPyL135;
    }
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__4 != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__4);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__4 = cpy_r_r69;
    cpy_r_r70 = 1;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", -1, CPyStatic_dataclasses___globals);
        goto CPyL135;
    }
    cpy_r_r71 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__4;
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "__mypyc_temp__4", -1, CPyStatic_dataclasses___globals);
        goto CPyL135;
    }
    CPy_INCREF(cpy_r_r71);
CPyL69: ;
    cpy_r_r72 = CPyIter_Next(cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    if (cpy_r_r72 == NULL) {
        goto CPyL139;
    } else
        goto CPyL72;
CPyL70: ;
    cpy_r_r73 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 480, CPyStatic_dataclasses___globals);
        goto CPyL140;
    }
    cpy_r_r74 = cpy_r_r73;
    CPy_DECREF(cpy_r_r74);
    goto CPyL101;
CPyL72: ;
    cpy_r_r75 = cpy_r_r72;
CPyL73: ;
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_next_label__);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_next_label__ = 4;
    cpy_r_r76 = 1;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 480, CPyStatic_dataclasses___globals);
        goto CPyL141;
    } else
        goto CPyL142;
CPyL74: ;
    return cpy_r_r75;
CPyL75: ;
    cpy_r_r77 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r78 = cpy_r_type != cpy_r_r77;
    if (!cpy_r_r78) goto CPyL78;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 480, CPyStatic_dataclasses___globals);
        goto CPyL79;
    } else
        goto CPyL143;
CPyL77: ;
    CPy_Unreachable();
CPyL78: ;
    CPy_INCREF(cpy_r_arg);
    cpy_r_r79 = cpy_r_arg;
    goto CPyL96;
CPyL79: ;
    cpy_r_r80 = CPy_CatchError();
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__5.f0 != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__5.f0);
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__5.f1);
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__5.f2);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__5 = cpy_r_r80;
    cpy_r_r81 = 1;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", -1, CPyStatic_dataclasses___globals);
        goto CPyL144;
    }
    cpy_r_r82 = (PyObject **)&cpy_r_r3;
    cpy_r_r83 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__4;
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "__mypyc_temp__4", -1, CPyStatic_dataclasses___globals);
        goto CPyL144;
    }
    CPy_INCREF(cpy_r_r83);
CPyL81: ;
    cpy_r_r84 = CPy_YieldFromErrorHandle(cpy_r_r83, cpy_r_r82);
    CPy_DecRef(cpy_r_r83);
    if (unlikely(cpy_r_r84 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 480, CPyStatic_dataclasses___globals);
        goto CPyL144;
    }
    if (cpy_r_r84) goto CPyL88;
    if (cpy_r_r3 != NULL) goto CPyL86;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"\" referenced before assignment");
    cpy_r_r85 = 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", -1, CPyStatic_dataclasses___globals);
        goto CPyL93;
    } else
        goto CPyL145;
CPyL85: ;
    CPy_Unreachable();
CPyL86: ;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r75 = cpy_r_r3;
    cpy_r_r86 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__5;
    if (unlikely(cpy_r_r86.f0 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "__mypyc_temp__5", -1, CPyStatic_dataclasses___globals);
        goto CPyL146;
    }
    CPy_INCREF(cpy_r_r86.f0);
    CPy_INCREF(cpy_r_r86.f1);
    CPy_INCREF(cpy_r_r86.f2);
CPyL87: ;
    CPy_RestoreExcInfo(cpy_r_r86);
    CPy_DecRef(cpy_r_r86.f0);
    CPy_DecRef(cpy_r_r86.f1);
    CPy_DecRef(cpy_r_r86.f2);
    goto CPyL73;
CPyL88: ;
    if (cpy_r_r3 != NULL) goto CPyL91;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"\" referenced before assignment");
    cpy_r_r87 = 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", -1, CPyStatic_dataclasses___globals);
        goto CPyL93;
    } else
        goto CPyL147;
CPyL90: ;
    CPy_Unreachable();
CPyL91: ;
    cpy_r_r74 = cpy_r_r3;
    CPy_DecRef(cpy_r_r74);
    cpy_r_r88 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__5;
    if (unlikely(cpy_r_r88.f0 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "__mypyc_temp__5", -1, CPyStatic_dataclasses___globals);
        goto CPyL93;
    }
    CPy_INCREF(cpy_r_r88.f0);
    CPy_INCREF(cpy_r_r88.f1);
    CPy_INCREF(cpy_r_r88.f2);
CPyL92: ;
    CPy_RestoreExcInfo(cpy_r_r88);
    CPy_DecRef(cpy_r_r88.f0);
    CPy_DecRef(cpy_r_r88.f1);
    CPy_DecRef(cpy_r_r88.f2);
    goto CPyL101;
CPyL93: ;
    cpy_r_r89 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__5;
    if (unlikely(cpy_r_r89.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__5' of '_get_assignment_statements_from_if_statement_DataclassTransformer_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r89.f0);
        CPy_INCREF(cpy_r_r89.f1);
        CPy_INCREF(cpy_r_r89.f2);
    }
    CPy_DecRef(cpy_r_r4);
    if (unlikely(cpy_r_r89.f0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", -1, CPyStatic_dataclasses___globals);
        goto CPyL118;
    }
CPyL94: ;
    CPy_RestoreExcInfo(cpy_r_r89);
    CPy_DecRef(cpy_r_r89.f0);
    CPy_DecRef(cpy_r_r89.f1);
    CPy_DecRef(cpy_r_r89.f2);
    cpy_r_r90 = CPy_KeepPropagating();
    if (!cpy_r_r90) goto CPyL118;
    CPy_Unreachable();
CPyL96: ;
    cpy_r_r91 = ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_temp__4;
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", "_get_assignment_statements_from_if_statement_DataclassTransformer_env", "__mypyc_temp__4", -1, CPyStatic_dataclasses___globals);
        goto CPyL148;
    }
    CPy_INCREF(cpy_r_r91);
CPyL97: ;
    cpy_r_r92 = CPyIter_Send(cpy_r_r91, cpy_r_r79);
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r79);
    if (cpy_r_r92 == NULL) goto CPyL149;
    cpy_r_r75 = cpy_r_r92;
    goto CPyL73;
CPyL99: ;
    cpy_r_r93 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 480, CPyStatic_dataclasses___globals);
        goto CPyL140;
    }
    cpy_r_r74 = cpy_r_r93;
    CPy_DECREF(cpy_r_r74);
CPyL101: ;
    cpy_r_r94 = Py_None;
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_next_label__);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r4)->___mypyc_next_label__ = -2;
    cpy_r_r95 = 1;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 473, CPyStatic_dataclasses___globals);
        goto CPyL118;
    }
    CPyGen_SetStopIterationValue(cpy_r_r94);
    if (!0) goto CPyL118;
    CPy_Unreachable();
CPyL104: ;
    cpy_r_r96 = cpy_r_r5 & 1;
    cpy_r_r97 = cpy_r_r96 == 0;
    if (!cpy_r_r97) goto CPyL106;
    cpy_r_r98 = cpy_r_r5 == 0;
    cpy_r_r99 = cpy_r_r98;
    goto CPyL107;
CPyL106: ;
    cpy_r_r100 = CPyTagged_IsEq_(cpy_r_r5, 0);
    cpy_r_r99 = cpy_r_r100;
CPyL107: ;
    if (cpy_r_r99) goto CPyL150;
    cpy_r_r101 = cpy_r_r5 & 1;
    cpy_r_r102 = cpy_r_r101 == 0;
    if (!cpy_r_r102) goto CPyL110;
    cpy_r_r103 = cpy_r_r5 == 2;
    cpy_r_r104 = cpy_r_r103;
    goto CPyL111;
CPyL110: ;
    cpy_r_r105 = CPyTagged_IsEq_(cpy_r_r5, 2);
    cpy_r_r104 = cpy_r_r105;
CPyL111: ;
    if (cpy_r_r104) {
        goto CPyL151;
    } else
        goto CPyL152;
CPyL112: ;
    cpy_r_r106 = cpy_r_r5 & 1;
    cpy_r_r107 = cpy_r_r106 == 0;
    if (!cpy_r_r107) goto CPyL114;
    cpy_r_r108 = cpy_r_r5 == 4;
    CPyTagged_DECREF(cpy_r_r5);
    cpy_r_r109 = cpy_r_r108;
    goto CPyL115;
CPyL114: ;
    cpy_r_r110 = CPyTagged_IsEq_(cpy_r_r5, 4);
    CPyTagged_DECREF(cpy_r_r5);
    cpy_r_r109 = cpy_r_r110;
CPyL115: ;
    if (cpy_r_r109) {
        goto CPyL75;
    } else
        goto CPyL153;
CPyL116: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r111 = 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 473, CPyStatic_dataclasses___globals);
        goto CPyL118;
    }
    CPy_Unreachable();
CPyL118: ;
    cpy_r_r112 = NULL;
    return cpy_r_r112;
CPyL119: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r3);
    goto CPyL118;
CPyL120: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL118;
CPyL121: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    goto CPyL3;
CPyL122: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL57;
CPyL123: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r18);
    goto CPyL118;
CPyL124: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r25);
    goto CPyL118;
CPyL125: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL33;
CPyL126: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    goto CPyL28;
CPyL127: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    goto CPyL31;
CPyL128: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r3);
    goto CPyL47;
CPyL129: ;
    CPy_XDecRef(cpy_r_r3);
    goto CPyL38;
CPyL130: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL39;
CPyL131: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r34);
    goto CPyL47;
CPyL132: ;
    CPy_XDecRef(cpy_r_r3);
    goto CPyL43;
CPyL133: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL44;
CPyL134: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_XDecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r38);
    goto CPyL118;
CPyL135: ;
    CPy_XDecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL118;
CPyL136: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL101;
CPyL137: ;
    CPy_XDecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r60);
    goto CPyL118;
CPyL138: ;
    CPy_XDecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r64);
    goto CPyL118;
CPyL139: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL70;
CPyL140: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL118;
CPyL141: ;
    CPy_DecRef(cpy_r_r75);
    goto CPyL79;
CPyL142: ;
    CPy_XDECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    goto CPyL74;
CPyL143: ;
    CPy_XDECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    goto CPyL77;
CPyL144: ;
    CPy_XDecRef(cpy_r_r3);
    goto CPyL93;
CPyL145: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL85;
CPyL146: ;
    CPy_XDecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r75);
    goto CPyL93;
CPyL147: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL90;
CPyL148: ;
    CPy_XDecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r79);
    goto CPyL118;
CPyL149: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL99;
CPyL150: ;
    CPyTagged_DECREF(cpy_r_r5);
    goto CPyL2;
CPyL151: ;
    CPyTagged_DECREF(cpy_r_r5);
    goto CPyL29;
CPyL152: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL112;
CPyL153: ;
    CPy_XDECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    goto CPyL116;
}

PyObject *CPyPy_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 473, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.plugins.dataclasses._get_assignment_statements_from_if_statement_DataclassTransformer_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "__next__", -1, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.plugins.dataclasses._get_assignment_statements_from_if_statement_DataclassTransformer_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "send", -1, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.plugins.dataclasses._get_assignment_statements_from_if_statement_DataclassTransformer_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "__iter__", -1, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.plugins.dataclasses._get_assignment_statements_from_if_statement_DataclassTransformer_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "throw", -1, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp4822 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp4822);
    PyObject *__tmp4823 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp4823);
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

PyObject *CPyPy_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.plugins.dataclasses._get_assignment_statements_from_if_statement_DataclassTransformer_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "close", -1, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses___DataclassTransformer____get_assignment_statements_from_if_statement(PyObject *cpy_r_self, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 473, CPyStatic_dataclasses___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 473, CPyStatic_dataclasses___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_stmt);
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r0)->_stmt != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r0)->_stmt);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r0)->_stmt = cpy_r_stmt;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 473, CPyStatic_dataclasses___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 473, CPyStatic_dataclasses___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_genObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_genObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_genObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 473, CPyStatic_dataclasses___globals);
        goto CPyL9;
    }
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_if_statement_DataclassTransformer_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 473, CPyStatic_dataclasses___globals);
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

PyObject *CPyPy_dataclasses___DataclassTransformer____get_assignment_statements_from_if_statement(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"stmt", 0};
    static CPyArg_Parser parser = {"O:_get_assignment_statements_from_if_statement", kwlist, 0};
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___IfStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.IfStmt", obj_stmt); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses___DataclassTransformer____get_assignment_statements_from_if_statement(arg_self, arg_stmt);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_if_statement", 473, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
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
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    tuple_T3OOO cpy_r_r51;
    char cpy_r_r52;
    PyObject **cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    tuple_T3OOO cpy_r_r57;
    char cpy_r_r58;
    tuple_T3OOO cpy_r_r59;
    tuple_T3OOO cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyTagged cpy_r_r65;
    CPyTagged cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    int64_t cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    int64_t cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    int64_t cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_gen", "__mypyc_env__", 482, CPyStatic_dataclasses___globals);
        goto CPyL85;
    }
    CPy_INCREF(cpy_r_r2);
CPyL1: ;
    cpy_r_r3 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_next_label__;
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "__mypyc_next_label__", 482, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
    CPyTagged_INCREF(cpy_r_r3);
    goto CPyL70;
CPyL2: ;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_type != cpy_r_r4;
    if (cpy_r_r5) {
        goto CPyL87;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 482, CPyStatic_dataclasses___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r6 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->_block;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "block", 483, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r6);
CPyL6: ;
    cpy_r_r7 = ((mypy___nodes___BlockObject *)cpy_r_r6)->_body;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__6 != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__6);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__6 = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", -1, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__7 = 0;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", -1, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
CPyL8: ;
    cpy_r_r10 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__6;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "__mypyc_temp__6", 483, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r10);
CPyL9: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r10)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__7;
    if (unlikely(cpy_r_r14 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "__mypyc_temp__7", 483, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
CPyL10: ;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r15) goto CPyL88;
    cpy_r_r16 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__6;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "__mypyc_temp__6", 483, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r16);
CPyL12: ;
    cpy_r_r17 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__7;
    if (unlikely(cpy_r_r17 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "__mypyc_temp__7", 483, CPyStatic_dataclasses___globals);
        goto CPyL89;
    }
CPyL13: ;
    cpy_r_r18 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (likely(PyObject_TypeCheck(cpy_r_r18, CPyType_nodes___Statement)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 483, CPyStatic_dataclasses___globals, "mypy.nodes.Statement", cpy_r_r18);
        goto CPyL86;
    }
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->_stmt != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->_stmt);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->_stmt = cpy_r_r19;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 483, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
    cpy_r_r21 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->_stmt;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "stmt", 484, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r21);
CPyL16: ;
    cpy_r_r22 = (PyObject *)CPyType_nodes___AssignmentStmt;
    cpy_r_r23 = (CPyPtr)&((PyObject *)cpy_r_r21)->ob_type;
    cpy_r_r24 = *(PyObject * *)cpy_r_r23;
    CPy_DECREF(cpy_r_r21);
    cpy_r_r25 = cpy_r_r24 == cpy_r_r22;
    if (cpy_r_r25) {
        goto CPyL90;
    } else
        goto CPyL24;
CPyL17: ;
    cpy_r_r26 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->_stmt;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "stmt", 485, CPyStatic_dataclasses___globals);
        goto CPyL91;
    }
    CPy_INCREF(cpy_r_r26);
CPyL18: ;
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_nodes___AssignmentStmt))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 485, CPyStatic_dataclasses___globals, "mypy.nodes.AssignmentStmt", cpy_r_r26);
        goto CPyL91;
    }
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_next_label__ = 2;
    cpy_r_r28 = 1;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 485, CPyStatic_dataclasses___globals);
        goto CPyL92;
    }
    return cpy_r_r27;
CPyL21: ;
    cpy_r_r29 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r30 = cpy_r_type != cpy_r_r29;
    if (cpy_r_r30) {
        goto CPyL93;
    } else
        goto CPyL65;
CPyL22: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 485, CPyStatic_dataclasses___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r31 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->_stmt;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "stmt", 486, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r31);
CPyL25: ;
    cpy_r_r32 = (PyObject *)CPyType_nodes___IfStmt;
    cpy_r_r33 = (CPyPtr)&((PyObject *)cpy_r_r31)->ob_type;
    cpy_r_r34 = *(PyObject * *)cpy_r_r33;
    CPy_DECREF(cpy_r_r31);
    cpy_r_r35 = cpy_r_r34 == cpy_r_r32;
    if (!cpy_r_r35) goto CPyL65;
    cpy_r_r36 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->_self;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "self", 487, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r36);
CPyL27: ;
    cpy_r_r37 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->_stmt;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "stmt", 487, CPyStatic_dataclasses___globals);
        goto CPyL94;
    }
    CPy_INCREF(cpy_r_r37);
CPyL28: ;
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_nodes___IfStmt))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 487, CPyStatic_dataclasses___globals, "mypy.nodes.IfStmt", cpy_r_r37);
        goto CPyL94;
    }
    cpy_r_r39 = CPyDef_dataclasses___DataclassTransformer____get_assignment_statements_from_if_statement(cpy_r_r36, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 487, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
    cpy_r_r40 = PyObject_GetIter(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 487, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__8 != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__8);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__8 = cpy_r_r40;
    cpy_r_r41 = 1;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", -1, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
    cpy_r_r42 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__8;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "__mypyc_temp__8", -1, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
    CPy_INCREF(cpy_r_r42);
CPyL33: ;
    cpy_r_r43 = CPyIter_Next(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (cpy_r_r43 != NULL) goto CPyL36;
    cpy_r_r44 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 487, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
    cpy_r_r45 = cpy_r_r44;
    CPy_DECREF(cpy_r_r45);
    goto CPyL65;
CPyL36: ;
    cpy_r_r46 = cpy_r_r43;
CPyL37: ;
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_next_label__ = 4;
    cpy_r_r47 = 1;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 487, CPyStatic_dataclasses___globals);
        goto CPyL95;
    } else
        goto CPyL96;
CPyL38: ;
    return cpy_r_r46;
CPyL39: ;
    cpy_r_r48 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r49 = cpy_r_type != cpy_r_r48;
    if (!cpy_r_r49) goto CPyL42;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 487, CPyStatic_dataclasses___globals);
        goto CPyL43;
    } else
        goto CPyL97;
CPyL41: ;
    CPy_Unreachable();
CPyL42: ;
    CPy_INCREF(cpy_r_arg);
    cpy_r_r50 = cpy_r_arg;
    goto CPyL60;
CPyL43: ;
    cpy_r_r51 = CPy_CatchError();
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__9.f0 != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__9.f0);
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__9.f1);
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__9.f2);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__9 = cpy_r_r51;
    cpy_r_r52 = 1;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", -1, CPyStatic_dataclasses___globals);
        goto CPyL98;
    }
    cpy_r_r53 = (PyObject **)&cpy_r_r1;
    cpy_r_r54 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__8;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "__mypyc_temp__8", -1, CPyStatic_dataclasses___globals);
        goto CPyL98;
    }
    CPy_INCREF(cpy_r_r54);
CPyL45: ;
    cpy_r_r55 = CPy_YieldFromErrorHandle(cpy_r_r54, cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 487, CPyStatic_dataclasses___globals);
        goto CPyL98;
    }
    if (cpy_r_r55) goto CPyL52;
    if (cpy_r_r1 != NULL) goto CPyL50;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"\" referenced before assignment");
    cpy_r_r56 = 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", -1, CPyStatic_dataclasses___globals);
        goto CPyL57;
    } else
        goto CPyL99;
CPyL49: ;
    CPy_Unreachable();
CPyL50: ;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r46 = cpy_r_r1;
    cpy_r_r57 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__9;
    if (unlikely(cpy_r_r57.f0 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "__mypyc_temp__9", -1, CPyStatic_dataclasses___globals);
        goto CPyL100;
    }
    CPy_INCREF(cpy_r_r57.f0);
    CPy_INCREF(cpy_r_r57.f1);
    CPy_INCREF(cpy_r_r57.f2);
CPyL51: ;
    CPy_RestoreExcInfo(cpy_r_r57);
    CPy_DecRef(cpy_r_r57.f0);
    CPy_DecRef(cpy_r_r57.f1);
    CPy_DecRef(cpy_r_r57.f2);
    goto CPyL37;
CPyL52: ;
    if (cpy_r_r1 != NULL) goto CPyL55;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"\" referenced before assignment");
    cpy_r_r58 = 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", -1, CPyStatic_dataclasses___globals);
        goto CPyL57;
    } else
        goto CPyL101;
CPyL54: ;
    CPy_Unreachable();
CPyL55: ;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r45 = cpy_r_r1;
    CPy_DecRef(cpy_r_r45);
    cpy_r_r59 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__9;
    if (unlikely(cpy_r_r59.f0 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "__mypyc_temp__9", -1, CPyStatic_dataclasses___globals);
        goto CPyL98;
    }
    CPy_INCREF(cpy_r_r59.f0);
    CPy_INCREF(cpy_r_r59.f1);
    CPy_INCREF(cpy_r_r59.f2);
CPyL56: ;
    CPy_RestoreExcInfo(cpy_r_r59);
    CPy_DecRef(cpy_r_r59.f0);
    CPy_DecRef(cpy_r_r59.f1);
    CPy_DecRef(cpy_r_r59.f2);
    goto CPyL65;
CPyL57: ;
    cpy_r_r60 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__9;
    if (unlikely(cpy_r_r60.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__mypyc_temp__9' of '_get_assignment_statements_from_block_DataclassTransformer_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r60.f0);
        CPy_INCREF(cpy_r_r60.f1);
        CPy_INCREF(cpy_r_r60.f2);
    }
    CPy_DecRef(cpy_r_r2);
    if (unlikely(cpy_r_r60.f0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", -1, CPyStatic_dataclasses___globals);
        goto CPyL84;
    }
CPyL58: ;
    CPy_RestoreExcInfo(cpy_r_r60);
    CPy_DecRef(cpy_r_r60.f0);
    CPy_DecRef(cpy_r_r60.f1);
    CPy_DecRef(cpy_r_r60.f2);
    cpy_r_r61 = CPy_KeepPropagating();
    if (!cpy_r_r61) goto CPyL84;
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r62 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__8;
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "__mypyc_temp__8", -1, CPyStatic_dataclasses___globals);
        goto CPyL102;
    }
    CPy_INCREF(cpy_r_r62);
CPyL61: ;
    cpy_r_r63 = CPyIter_Send(cpy_r_r62, cpy_r_r50);
    CPy_DECREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r50);
    if (cpy_r_r63 == NULL) goto CPyL63;
    cpy_r_r46 = cpy_r_r63;
    goto CPyL37;
CPyL63: ;
    cpy_r_r64 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 487, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
    cpy_r_r45 = cpy_r_r64;
    CPy_DECREF(cpy_r_r45);
CPyL65: ;
    cpy_r_r65 = ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__7;
    if (unlikely(cpy_r_r65 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", "_get_assignment_statements_from_block_DataclassTransformer_env", "__mypyc_temp__7", 483, CPyStatic_dataclasses___globals);
        goto CPyL86;
    }
CPyL66: ;
    cpy_r_r66 = cpy_r_r65 + 2;
    ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_temp__7 = cpy_r_r66;
    cpy_r_r67 = 1;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 483, CPyStatic_dataclasses___globals);
        goto CPyL86;
    } else
        goto CPyL8;
CPyL67: ;
    cpy_r_r68 = Py_None;
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_next_label__);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r2)->___mypyc_next_label__ = -2;
    cpy_r_r69 = 1;
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 482, CPyStatic_dataclasses___globals);
        goto CPyL84;
    }
    CPyGen_SetStopIterationValue(cpy_r_r68);
    if (!0) goto CPyL84;
    CPy_Unreachable();
CPyL70: ;
    cpy_r_r70 = cpy_r_r3 & 1;
    cpy_r_r71 = cpy_r_r70 == 0;
    if (!cpy_r_r71) goto CPyL72;
    cpy_r_r72 = cpy_r_r3 == 0;
    cpy_r_r73 = cpy_r_r72;
    goto CPyL73;
CPyL72: ;
    cpy_r_r74 = CPyTagged_IsEq_(cpy_r_r3, 0);
    cpy_r_r73 = cpy_r_r74;
CPyL73: ;
    if (cpy_r_r73) goto CPyL103;
    cpy_r_r75 = cpy_r_r3 & 1;
    cpy_r_r76 = cpy_r_r75 == 0;
    if (!cpy_r_r76) goto CPyL76;
    cpy_r_r77 = cpy_r_r3 == 2;
    cpy_r_r78 = cpy_r_r77;
    goto CPyL77;
CPyL76: ;
    cpy_r_r79 = CPyTagged_IsEq_(cpy_r_r3, 2);
    cpy_r_r78 = cpy_r_r79;
CPyL77: ;
    if (cpy_r_r78) goto CPyL104;
    cpy_r_r80 = cpy_r_r3 & 1;
    cpy_r_r81 = cpy_r_r80 == 0;
    if (!cpy_r_r81) goto CPyL80;
    cpy_r_r82 = cpy_r_r3 == 4;
    CPyTagged_DECREF(cpy_r_r3);
    cpy_r_r83 = cpy_r_r82;
    goto CPyL81;
CPyL80: ;
    cpy_r_r84 = CPyTagged_IsEq_(cpy_r_r3, 4);
    CPyTagged_DECREF(cpy_r_r3);
    cpy_r_r83 = cpy_r_r84;
CPyL81: ;
    if (cpy_r_r83) {
        goto CPyL39;
    } else
        goto CPyL105;
CPyL82: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r85 = 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 482, CPyStatic_dataclasses___globals);
        goto CPyL84;
    }
    CPy_Unreachable();
CPyL84: ;
    cpy_r_r86 = NULL;
    return cpy_r_r86;
CPyL85: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL84;
CPyL86: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL84;
CPyL87: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL3;
CPyL88: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL67;
CPyL89: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r16);
    goto CPyL84;
CPyL90: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL17;
CPyL91: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL84;
CPyL92: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL84;
CPyL93: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL22;
CPyL94: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r36);
    goto CPyL84;
CPyL95: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL43;
CPyL96: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL38;
CPyL97: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL41;
CPyL98: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL57;
CPyL99: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL49;
CPyL100: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r46);
    goto CPyL57;
CPyL101: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL54;
CPyL102: ;
    CPy_XDecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r50);
    goto CPyL84;
CPyL103: ;
    CPyTagged_DECREF(cpy_r_r3);
    goto CPyL2;
CPyL104: ;
    CPyTagged_DECREF(cpy_r_r3);
    goto CPyL21;
CPyL105: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r2);
    goto CPyL82;
}

PyObject *CPyPy_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 482, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.plugins.dataclasses._get_assignment_statements_from_block_DataclassTransformer_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "__next__", -1, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.plugins.dataclasses._get_assignment_statements_from_block_DataclassTransformer_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "send", -1, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.plugins.dataclasses._get_assignment_statements_from_block_DataclassTransformer_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "__iter__", -1, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.plugins.dataclasses._get_assignment_statements_from_block_DataclassTransformer_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "throw", -1, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp4824 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp4824);
    PyObject *__tmp4825 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp4825);
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

PyObject *CPyPy_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.plugins.dataclasses._get_assignment_statements_from_block_DataclassTransformer_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "close", -1, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses___DataclassTransformer____get_assignment_statements_from_block(PyObject *cpy_r_self, PyObject *cpy_r_block) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 482, CPyStatic_dataclasses___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 482, CPyStatic_dataclasses___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_block);
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r0)->_block != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r0)->_block);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r0)->_block = cpy_r_block;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 482, CPyStatic_dataclasses___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_dataclasses____get_assignment_statements_from_block_DataclassTransformer_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 482, CPyStatic_dataclasses___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_genObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_genObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_genObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 482, CPyStatic_dataclasses___globals);
        goto CPyL9;
    }
    if (((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___plugins___dataclasses____get_assignment_statements_from_block_DataclassTransformer_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 482, CPyStatic_dataclasses___globals);
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

PyObject *CPyPy_dataclasses___DataclassTransformer____get_assignment_statements_from_block(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"block", 0};
    static CPyArg_Parser parser = {"O:_get_assignment_statements_from_block", kwlist, 0};
    PyObject *obj_block;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_block)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    PyObject *arg_block;
    if (likely(Py_TYPE(obj_block) == CPyType_nodes___Block))
        arg_block = obj_block;
    else {
        CPy_TypeError("mypy.nodes.Block", obj_block); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses___DataclassTransformer____get_assignment_statements_from_block(arg_self, arg_block);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_assignment_statements_from_block", 482, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "__get__", -1, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_a) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "<lambda>", "__mypyc_lambda__0_collect_attributes_DataclassTransformer_obj", "__mypyc_env__", 685, CPyStatic_dataclasses___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL3;
CPyL1: ;
    cpy_r_r1 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_a)->_kw_only;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
CPyL3: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"a", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_a;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_a)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_a;
    if (likely(Py_TYPE(obj_a) == CPyType_dataclasses___DataclassAttribute))
        arg_a = obj_a;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassAttribute", obj_a); 
        goto fail;
    }
    char retval = CPyDef_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj_____call__(arg___mypyc_self__, arg_a);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "<lambda>", 685, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses___DataclassTransformer___collect_attributes(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_init_type;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_cls;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_found_attrs;
    char cpy_r_found_dataclass_supertype;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_r12;
    int64_t cpy_r_r13;
    char cpy_r_r14;
    int64_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    int64_t cpy_r_r25;
    char cpy_r_r26;
    int64_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
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
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_data;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_sym_node;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    CPyPtr cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    CPyTagged cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_current_attr_names;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_kw_only;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_stmt;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_lhs;
    PyObject *cpy_r_r124;
    CPyPtr cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_sym;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r138;
    CPyPtr cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    char cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    CPyPtr cpy_r_r145;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    CPyPtr cpy_r_r156;
    PyObject *cpy_r_r157;
    char cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    char cpy_r_r161;
    char cpy_r_is_init_var;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_node_type;
    PyObject *cpy_r_r165;
    CPyPtr cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    int32_t cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    char cpy_r_r176;
    char cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    char cpy_r_r184;
    char cpy_r_r185;
    PyObject *cpy_r_r186;
    tuple_T2CO cpy_r_r187;
    char cpy_r_r188;
    char cpy_r_has_field_call;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_field_args;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_is_in_init_param;
    PyObject *cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    char cpy_r_is_in_init;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    char cpy_r_r201;
    char cpy_r_r202;
    char cpy_r_r203;
    char cpy_r_has_default;
    PyObject *cpy_r_r204;
    int32_t cpy_r_r205;
    char cpy_r_r206;
    char cpy_r_r207;
    char cpy_r_r208;
    PyObject *cpy_r_r209;
    int32_t cpy_r_r210;
    char cpy_r_r211;
    char cpy_r_r212;
    char cpy_r_r213;
    PyObject *cpy_r_r214;
    int32_t cpy_r_r215;
    char cpy_r_r216;
    char cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    CPyPtr cpy_r_r220;
    PyObject *cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    char cpy_r_r225;
    char cpy_r_r226;
    PyObject *cpy_r_r227;
    char cpy_r_r228;
    char cpy_r_is_kw_only;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_field_kw_only_param;
    PyObject *cpy_r_r232;
    char cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_value;
    PyObject *cpy_r_r237;
    char cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    char cpy_r_r243;
    char cpy_r_r244;
    PyObject *cpy_r_r245;
    char cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    char cpy_r_r250;
    PyObject *cpy_r_r251;
    char cpy_r_r252;
    PyObject *cpy_r_r253;
    char cpy_r_r254;
    PyObject *cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r258;
    char cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    char cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    char cpy_r_r265;
    char cpy_r_r266;
    PyObject *cpy_r_r267;
    char cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    CPyTagged cpy_r_r271;
    CPyTagged cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    char cpy_r_r275;
    PyObject *cpy_r_r276;
    PyObject *cpy_r_alias;
    PyObject *cpy_r_r277;
    int32_t cpy_r_r278;
    char cpy_r_r279;
    char cpy_r_r280;
    PyObject *cpy_r_r281;
    PyObject *cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    char cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    char cpy_r_r292;
    char cpy_r_r293;
    char cpy_r_r294;
    char cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    int32_t cpy_r_r298;
    char cpy_r_r299;
    PyObject *cpy_r_r300;
    char cpy_r_r301;
    PyObject *cpy_r_r302;
    PyObject *cpy_r_r303;
    char cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    PyObject **cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    PyObject *cpy_r_r312;
    PyObject *cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject **cpy_r_r316;
    PyObject *cpy_r_r317;
    char cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    PyObject *cpy_r_r322;
    tuple_T3OOO cpy_r_r323;
    tuple_T3OOO cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject **cpy_r_r329;
    PyObject *cpy_r_r330;
    int32_t cpy_r_r331;
    char cpy_r_r332;
    char cpy_r_r333;
    char cpy_r_r334;
    tuple_T3OOO cpy_r_r335;
    tuple_T3OOO cpy_r_r336;
    tuple_T3OOO cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject **cpy_r_r340;
    PyObject *cpy_r_r341;
    char cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    CPyTagged cpy_r_r345;
    CPyTagged cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    char cpy_r_r349;
    PyObject *cpy_r_r350;
    char cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    PyObject *cpy_r_r354;
    int32_t cpy_r_r355;
    char cpy_r_r356;
    char cpy_r_r357;
    PyObject *cpy_r_r358;
    PyObject *cpy_r_all_attrs;
    PyObject *cpy_r_r359;
    char cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject **cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    char cpy_r_found_default;
    char cpy_r_found_kw_sentinel;
    CPyTagged cpy_r_r366;
    CPyPtr cpy_r_r367;
    int64_t cpy_r_r368;
    CPyTagged cpy_r_r369;
    char cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    char cpy_r_r373;
    char cpy_r_r374;
    char cpy_r_r375;
    PyObject *cpy_r_context;
    PyObject *cpy_r_r376;
    int32_t cpy_r_r377;
    char cpy_r_r378;
    char cpy_r_r379;
    CPyTagged cpy_r_r380;
    CPyTagged cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    char cpy_r_r385;
    char cpy_r_r386;
    PyObject *cpy_r_r387;
    char cpy_r_r388;
    char cpy_r_r389;
    char cpy_r_r390;
    char cpy_r_r391;
    char cpy_r_r392;
    PyObject *cpy_r_r393;
    char cpy_r_r394;
    PyObject *cpy_r_r395;
    int32_t cpy_r_r396;
    char cpy_r_r397;
    char cpy_r_r398;
    CPyTagged cpy_r_r399;
    CPyTagged cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    PyObject *cpy_r_r403;
    char cpy_r_r404;
    char cpy_r_r405;
    PyObject *cpy_r_r406;
    char cpy_r_r407;
    char cpy_r_r408;
    PyObject *cpy_r_r409;
    char cpy_r_r410;
    CPyTagged cpy_r_r411;
    PyObject *cpy_r_r412;
    size_t __tmp4830;
    cpy_r_r0 = NULL;
    cpy_r_init_type = cpy_r_r0;
    cpy_r_r1 = CPyDef_dataclasses___collect_attributes_DataclassTransformer_env();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 489, CPyStatic_dataclasses___globals);
        goto CPyL253;
    }
    cpy_r_r2 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    CPy_INCREF(cpy_r_r2);
    cpy_r_cls = cpy_r_r2;
    cpy_r_r3 = PyDict_New();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 513, CPyStatic_dataclasses___globals);
        goto CPyL254;
    }
    cpy_r_found_attrs = cpy_r_r3;
    cpy_r_found_dataclass_supertype = 0;
    cpy_r_r4 = ((mypy___nodes___ClassDefObject *)cpy_r_cls)->_info;
    cpy_r_r5 = ((mypy___nodes___TypeInfoObject *)cpy_r_r4)->_mro;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "collect_attributes", "TypeInfo", "mro", 515, CPyStatic_dataclasses___globals);
        goto CPyL255;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    cpy_r_r6 = CPyList_GetSlice(cpy_r_r5, 2, -2);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 515, CPyStatic_dataclasses___globals);
        goto CPyL255;
    }
    if (likely(PyList_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 515, CPyStatic_dataclasses___globals, "list", cpy_r_r6);
        goto CPyL255;
    }
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = CPyTagged_Subtract(cpy_r_r10, 2);
    cpy_r_r12 = cpy_r_r11;
CPyL6: ;
    cpy_r_r13 = cpy_r_r12 & 1;
    cpy_r_r14 = cpy_r_r13 == 0;
    cpy_r_r15 = 0 & 1;
    cpy_r_r16 = cpy_r_r15 == 0;
    cpy_r_r17 = cpy_r_r14 & cpy_r_r16;
    if (!cpy_r_r17) goto CPyL8;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r12 >= (Py_ssize_t)0;
    cpy_r_r19 = cpy_r_r18;
    goto CPyL9;
CPyL8: ;
    cpy_r_r20 = CPyTagged_IsLt_(cpy_r_r12, 0);
    cpy_r_r21 = cpy_r_r20 ^ 1;
    cpy_r_r19 = cpy_r_r21;
CPyL9: ;
    if (!cpy_r_r19) goto CPyL256;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = cpy_r_r12 & 1;
    cpy_r_r26 = cpy_r_r25 == 0;
    cpy_r_r27 = cpy_r_r24 & 1;
    cpy_r_r28 = cpy_r_r27 == 0;
    cpy_r_r29 = cpy_r_r26 & cpy_r_r28;
    if (!cpy_r_r29) goto CPyL12;
    cpy_r_r30 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r24;
    cpy_r_r31 = cpy_r_r30;
    goto CPyL13;
CPyL12: ;
    cpy_r_r32 = CPyTagged_IsLt_(cpy_r_r12, cpy_r_r24);
    cpy_r_r31 = cpy_r_r32;
CPyL13: ;
    if (!cpy_r_r31) goto CPyL256;
    CPyTagged_INCREF(cpy_r_r12);
    cpy_r_r33 = CPyTagged_StealAsObject(cpy_r_r12);
    if (likely(PyLong_Check(cpy_r_r33)))
        cpy_r_r34 = CPyTagged_FromObject(cpy_r_r33);
    else {
        CPy_TypeError("short_int", cpy_r_r33); cpy_r_r34 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 515, CPyStatic_dataclasses___globals);
        goto CPyL257;
    }
    cpy_r_r35 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r34);
    if (likely((Py_TYPE(cpy_r_r35) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r35) == CPyType_nodes___TypeInfo)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 515, CPyStatic_dataclasses___globals, "mypy.nodes.TypeInfo", cpy_r_r35);
        goto CPyL257;
    }
    cpy_r_info = cpy_r_r36;
    cpy_r_r37 = CPyStatics[4507]; /* 'dataclass_tag' */
    cpy_r_r38 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_metadata;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "collect_attributes", "TypeInfo", "metadata", 516, CPyStatic_dataclasses___globals);
        goto CPyL258;
    }
    CPy_INCREF(cpy_r_r38);
CPyL17: ;
    cpy_r_r39 = PyDict_Contains(cpy_r_r38, cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 516, CPyStatic_dataclasses___globals);
        goto CPyL258;
    }
    cpy_r_r41 = cpy_r_r39;
    if (!cpy_r_r41) goto CPyL23;
    cpy_r_r42 = CPyStatics[4500]; /* 'dataclass' */
    cpy_r_r43 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_metadata;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "collect_attributes", "TypeInfo", "metadata", 516, CPyStatic_dataclasses___globals);
        goto CPyL258;
    }
    CPy_INCREF(cpy_r_r43);
CPyL20: ;
    cpy_r_r44 = PyDict_Contains(cpy_r_r43, cpy_r_r42);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 516, CPyStatic_dataclasses___globals);
        goto CPyL258;
    }
    cpy_r_r46 = cpy_r_r44;
    cpy_r_r47 = cpy_r_r46 ^ 1;
    if (cpy_r_r47) {
        goto CPyL259;
    } else
        goto CPyL23;
CPyL22: ;
    cpy_r_r48 = Py_None;
    CPy_INCREF(cpy_r_r48);
    return cpy_r_r48;
CPyL23: ;
    cpy_r_r49 = CPyStatics[4500]; /* 'dataclass' */
    cpy_r_r50 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_metadata;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "collect_attributes", "TypeInfo", "metadata", 519, CPyStatic_dataclasses___globals);
        goto CPyL258;
    }
    CPy_INCREF(cpy_r_r50);
CPyL24: ;
    cpy_r_r51 = PyDict_Contains(cpy_r_r50, cpy_r_r49);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 519, CPyStatic_dataclasses___globals);
        goto CPyL258;
    }
    cpy_r_r53 = cpy_r_r51;
    cpy_r_r54 = cpy_r_r53 ^ 1;
    if (cpy_r_r54) goto CPyL260;
    cpy_r_r55 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 523, CPyStatic_dataclasses___globals);
        goto CPyL261;
    }
CPyL27: ;
    cpy_r_r57 = CPyDef_trigger___make_wildcard_trigger(cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 523, CPyStatic_dataclasses___globals);
        goto CPyL261;
    }
    cpy_r_r58 = NULL;
    cpy_r_r59 = CPY_GET_METHOD_TRAIT(cpy_r_r55, CPyType_plugin___SemanticAnalyzerPluginInterface, 12, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r55, cpy_r_r57, cpy_r_r58); /* add_plugin_dependency */
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 523, CPyStatic_dataclasses___globals);
        goto CPyL258;
    }
    cpy_r_found_dataclass_supertype = 1;
    cpy_r_r60 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_metadata;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "collect_attributes", "TypeInfo", "metadata", 526, CPyStatic_dataclasses___globals);
        goto CPyL258;
    }
    CPy_INCREF(cpy_r_r60);
CPyL30: ;
    cpy_r_r61 = CPyStatics[4500]; /* 'dataclass' */
    cpy_r_r62 = CPyDict_GetItem(cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 526, CPyStatic_dataclasses___globals);
        goto CPyL258;
    }
    if (likely(PyDict_Check(cpy_r_r62)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 526, CPyStatic_dataclasses___globals, "dict", cpy_r_r62);
        goto CPyL258;
    }
    cpy_r_r64 = CPyStatics[4399]; /* 'attributes' */
    cpy_r_r65 = CPyDict_GetItem(cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 526, CPyStatic_dataclasses___globals);
        goto CPyL258;
    }
    cpy_r_r66 = PyObject_GetIter(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 526, CPyStatic_dataclasses___globals);
        goto CPyL258;
    }
CPyL34: ;
    cpy_r_r67 = PyIter_Next(cpy_r_r66);
    if (cpy_r_r67 == NULL) goto CPyL262;
    cpy_r_data = cpy_r_r67;
    cpy_r_r68 = CPyStatics[2329]; /* 'name' */
    cpy_r_r69 = PyObject_GetItem(cpy_r_data, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 527, CPyStatic_dataclasses___globals);
        goto CPyL263;
    }
    if (likely(PyUnicode_Check(cpy_r_r69)))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 527, CPyStatic_dataclasses___globals, "str", cpy_r_r69);
        goto CPyL263;
    }
    cpy_r_name = cpy_r_r70;
    cpy_r_r71 = (PyObject *)CPyType_dataclasses___DataclassAttribute;
    cpy_r_r72 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r72);
    if (likely(PyDict_Check(cpy_r_data)))
        cpy_r_r73 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 529, CPyStatic_dataclasses___globals, "dict", cpy_r_data);
        goto CPyL264;
    }
    cpy_r_r74 = CPyDef_dataclasses___DataclassAttribute___deserialize(cpy_r_r71, cpy_r_info, cpy_r_r73, cpy_r_r72);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 529, CPyStatic_dataclasses___globals);
        goto CPyL265;
    }
    cpy_r_attr = cpy_r_r74;
    cpy_r_r75 = ((mypy___nodes___ClassDefObject *)cpy_r_cls)->_info;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = CPyDef_dataclasses___DataclassAttribute___expand_typevar_from_subtype(cpy_r_attr, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 533, CPyStatic_dataclasses___globals);
        goto CPyL266;
    }
    cpy_r_r77 = CPyDict_SetItem(cpy_r_found_attrs, cpy_r_name, cpy_r_attr);
    CPy_DECREF(cpy_r_attr);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 534, CPyStatic_dataclasses___globals);
        goto CPyL265;
    }
    cpy_r_r79 = ((mypy___nodes___ClassDefObject *)cpy_r_cls)->_info;
    cpy_r_r80 = ((mypy___nodes___TypeInfoObject *)cpy_r_r79)->_names;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "collect_attributes", "TypeInfo", "names", 536, CPyStatic_dataclasses___globals);
        goto CPyL265;
    }
    CPy_INCREF(cpy_r_r80);
CPyL42: ;
    cpy_r_r81 = CPyDict_GetWithNone(cpy_r_r80, cpy_r_name);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 536, CPyStatic_dataclasses___globals);
        goto CPyL267;
    }
    if (Py_TYPE(cpy_r_r81) == CPyType_nodes___SymbolTableNode)
        cpy_r_r82 = cpy_r_r81;
    else {
        cpy_r_r82 = NULL;
    }
    if (cpy_r_r82 != NULL) goto __LL4826;
    if (cpy_r_r81 == Py_None)
        cpy_r_r82 = cpy_r_r81;
    else {
        cpy_r_r82 = NULL;
    }
    if (cpy_r_r82 != NULL) goto __LL4826;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 536, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r81);
    goto CPyL267;
__LL4826: ;
    cpy_r_sym_node = cpy_r_r82;
    cpy_r_r83 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r84 = cpy_r_sym_node != cpy_r_r83;
    if (!cpy_r_r84) goto CPyL268;
    if (likely(cpy_r_sym_node != Py_None))
        cpy_r_r85 = cpy_r_sym_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 537, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym_node);
        goto CPyL269;
    }
    cpy_r_r86 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r85)->_node;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r87 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r88 = cpy_r_r86 != cpy_r_r87;
    if (!cpy_r_r88) goto CPyL270;
    if (likely(cpy_r_r86 != Py_None))
        cpy_r_r89 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 537, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolNode", cpy_r_r86);
        goto CPyL269;
    }
    cpy_r_r90 = PyObject_IsTrue(cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 537, CPyStatic_dataclasses___globals);
        goto CPyL269;
    }
    cpy_r_r92 = cpy_r_r90;
    if (!cpy_r_r92) goto CPyL268;
    if (likely(cpy_r_sym_node != Py_None))
        cpy_r_r93 = cpy_r_sym_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 537, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym_node);
        goto CPyL269;
    }
    cpy_r_r94 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r93)->_node;
    cpy_r_r95 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r96 = (CPyPtr)&((PyObject *)cpy_r_r94)->ob_type;
    cpy_r_r97 = *(PyObject * *)cpy_r_r96;
    cpy_r_r98 = cpy_r_r97 == cpy_r_r95;
    if (cpy_r_r98) goto CPyL268;
    cpy_r_r99 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r99);
    cpy_r_r100 = CPyStatics[4508]; /* ('Dataclass attribute may only be overridden by '
                                      'another attribute') */
    if (likely(cpy_r_sym_node != Py_None))
        cpy_r_r101 = cpy_r_sym_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 540, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym_node);
        goto CPyL271;
    }
    cpy_r_r102 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r101)->_node;
    CPy_INCREF(cpy_r_r102);
    if (likely(cpy_r_r102 != Py_None))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 540, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolNode", cpy_r_r102);
        goto CPyL271;
    }
    CPy_DECREF(cpy_r_sym_node);
    cpy_r_r104 = 2;
    cpy_r_r105 = 2;
    cpy_r_r106 = NULL;
    cpy_r_r107 = CPY_GET_METHOD_TRAIT(cpy_r_r99, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r99, cpy_r_r100, cpy_r_r103, cpy_r_r104, cpy_r_r105, cpy_r_r106); /* fail */
    CPy_DECREF(cpy_r_r103);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r107 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 538, CPyStatic_dataclasses___globals);
        goto CPyL267;
    } else
        goto CPyL34;
CPyL55: ;
    cpy_r_r108 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 526, CPyStatic_dataclasses___globals);
        goto CPyL257;
    }
CPyL56: ;
    cpy_r_r109 = cpy_r_r12 + -2;
    CPyTagged_DECREF(cpy_r_r12);
    cpy_r_r12 = cpy_r_r109;
    goto CPyL6;
CPyL57: ;
    cpy_r_r110 = PySet_New(NULL);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 544, CPyStatic_dataclasses___globals);
        goto CPyL255;
    }
    cpy_r_current_attr_names = cpy_r_r110;
    cpy_r_r111 = CPyStatics[4385]; /* 'kw_only' */
    cpy_r_r112 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__spec;
    cpy_r_r113 = ((mypy___nodes___DataclassTransformSpecObject *)cpy_r_r112)->_kw_only_default;
    cpy_r_r114 = CPyDef_dataclasses___DataclassTransformer____get_bool_arg(cpy_r_self, cpy_r_r111, cpy_r_r113);
    if (unlikely(cpy_r_r114 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 545, CPyStatic_dataclasses___globals);
        goto CPyL272;
    }
    cpy_r_kw_only = cpy_r_r114;
    cpy_r_r115 = ((mypy___nodes___ClassDefObject *)cpy_r_cls)->_defs;
    CPy_INCREF(cpy_r_r115);
    cpy_r_r116 = CPyDef_dataclasses___DataclassTransformer____get_assignment_statements_from_block(cpy_r_self, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 546, CPyStatic_dataclasses___globals);
        goto CPyL272;
    }
    cpy_r_r117 = PyObject_GetIter(cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 546, CPyStatic_dataclasses___globals);
        goto CPyL272;
    }
CPyL61: ;
    cpy_r_r118 = PyIter_Next(cpy_r_r117);
    if (cpy_r_r118 == NULL) goto CPyL273;
    if (likely(Py_TYPE(cpy_r_r118) == CPyType_nodes___AssignmentStmt))
        cpy_r_r119 = cpy_r_r118;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 546, CPyStatic_dataclasses___globals, "mypy.nodes.AssignmentStmt", cpy_r_r118);
        goto CPyL274;
    }
    cpy_r_stmt = cpy_r_r119;
    cpy_r_r120 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_new_syntax;
    if (!cpy_r_r120) goto CPyL275;
CPyL64: ;
    cpy_r_r121 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_lvalues;
    cpy_r_r122 = CPyList_GetItemShort(cpy_r_r121, 0);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 554, CPyStatic_dataclasses___globals);
        goto CPyL276;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r122, CPyType_nodes___Expression)))
        cpy_r_r123 = cpy_r_r122;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 554, CPyStatic_dataclasses___globals, "mypy.nodes.Expression", cpy_r_r122);
        goto CPyL276;
    }
    cpy_r_lhs = cpy_r_r123;
    cpy_r_r124 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r125 = (CPyPtr)&((PyObject *)cpy_r_lhs)->ob_type;
    cpy_r_r126 = *(PyObject * *)cpy_r_r125;
    cpy_r_r127 = cpy_r_r126 == cpy_r_r124;
    if (!cpy_r_r127) goto CPyL277;
    cpy_r_r128 = ((mypy___nodes___ClassDefObject *)cpy_r_cls)->_info;
    cpy_r_r129 = ((mypy___nodes___TypeInfoObject *)cpy_r_r128)->_names;
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "collect_attributes", "TypeInfo", "names", 558, CPyStatic_dataclasses___globals);
        goto CPyL278;
    }
    CPy_INCREF(cpy_r_r129);
CPyL68: ;
    if (likely(Py_TYPE(cpy_r_lhs) == CPyType_nodes___NameExpr))
        cpy_r_r130 = cpy_r_lhs;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 558, CPyStatic_dataclasses___globals, "mypy.nodes.NameExpr", cpy_r_lhs);
        goto CPyL279;
    }
    cpy_r_r131 = ((mypy___nodes___NameExprObject *)cpy_r_r130)->_name;
    CPy_INCREF(cpy_r_r131);
    cpy_r_r132 = CPyDict_GetWithNone(cpy_r_r129, cpy_r_r131);
    CPy_DECREF(cpy_r_r129);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 558, CPyStatic_dataclasses___globals);
        goto CPyL278;
    }
    if (Py_TYPE(cpy_r_r132) == CPyType_nodes___SymbolTableNode)
        cpy_r_r133 = cpy_r_r132;
    else {
        cpy_r_r133 = NULL;
    }
    if (cpy_r_r133 != NULL) goto __LL4827;
    if (cpy_r_r132 == Py_None)
        cpy_r_r133 = cpy_r_r132;
    else {
        cpy_r_r133 = NULL;
    }
    if (cpy_r_r133 != NULL) goto __LL4827;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 558, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r132);
    goto CPyL278;
__LL4827: ;
    cpy_r_sym = cpy_r_r133;
    cpy_r_r134 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r135 = cpy_r_sym == cpy_r_r134;
    if (cpy_r_r135) goto CPyL280;
    if (likely(cpy_r_sym != Py_None))
        cpy_r_r136 = cpy_r_sym;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 563, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym);
        goto CPyL281;
    }
    cpy_r_r137 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r136)->_node;
    CPy_INCREF(cpy_r_r137);
    cpy_r_node = cpy_r_r137;
    cpy_r_r138 = (PyObject *)CPyType_nodes___PlaceholderNode;
    cpy_r_r139 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r140 = *(PyObject * *)cpy_r_r139;
    cpy_r_r141 = cpy_r_r140 == cpy_r_r138;
    cpy_r_r142 = cpy_r_r141 ^ 1;
    if (cpy_r_r142) {
        goto CPyL76;
    } else
        goto CPyL282;
CPyL74: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r143 = 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 564, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    CPy_Unreachable();
CPyL76: ;
    cpy_r_r144 = (PyObject *)CPyType_nodes___TypeAlias;
    cpy_r_r145 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r146 = *(PyObject * *)cpy_r_r145;
    cpy_r_r147 = cpy_r_r146 == cpy_r_r144;
    if (cpy_r_r147) {
        goto CPyL283;
    } else
        goto CPyL79;
CPyL77: ;
    cpy_r_r148 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r148);
    cpy_r_r149 = CPyStatics[4509]; /* ('Type aliases inside dataclass definitions are not '
                                      'supported at runtime') */
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___TypeAlias))
        cpy_r_r150 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 569, CPyStatic_dataclasses___globals, "mypy.nodes.TypeAlias", cpy_r_node);
        goto CPyL284;
    }
    cpy_r_r151 = 2;
    cpy_r_r152 = 2;
    cpy_r_r153 = NULL;
    cpy_r_r154 = CPY_GET_METHOD_TRAIT(cpy_r_r148, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r148, cpy_r_r149, cpy_r_r150, cpy_r_r151, cpy_r_r152, cpy_r_r153); /* fail */
    CPy_DECREF(cpy_r_r150);
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r154 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 567, CPyStatic_dataclasses___globals);
        goto CPyL274;
    } else
        goto CPyL61;
CPyL79: ;
    cpy_r_r155 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r156 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r157 = *(PyObject * *)cpy_r_r156;
    cpy_r_r158 = cpy_r_r157 == cpy_r_r155;
    if (cpy_r_r158) {
        goto CPyL82;
    } else
        goto CPyL285;
CPyL80: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r159 = 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 576, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    CPy_Unreachable();
CPyL82: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r160 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 579, CPyStatic_dataclasses___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL286;
    }
    cpy_r_r161 = ((mypy___nodes___VarObject *)cpy_r_r160)->_is_classvar;
    if (cpy_r_r161) goto CPyL287;
CPyL84: ;
    cpy_r_is_init_var = 0;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r162 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 584, CPyStatic_dataclasses___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL286;
    }
    cpy_r_r163 = ((mypy___nodes___VarObject *)cpy_r_r162)->_type;
    CPy_INCREF(cpy_r_r163);
    cpy_r_r164 = CPyDef_types___get_proper_type(cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 584, CPyStatic_dataclasses___globals);
        goto CPyL286;
    }
    cpy_r_node_type = cpy_r_r164;
    cpy_r_r165 = (PyObject *)CPyType_types___Instance;
    cpy_r_r166 = (CPyPtr)&((PyObject *)cpy_r_node_type)->ob_type;
    cpy_r_r167 = *(PyObject * *)cpy_r_r166;
    cpy_r_r168 = cpy_r_r167 == cpy_r_r165;
    if (!cpy_r_r168) goto CPyL98;
    if (likely(Py_TYPE(cpy_r_node_type) == CPyType_types___Instance))
        cpy_r_r169 = cpy_r_node_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 587, CPyStatic_dataclasses___globals, "mypy.types.Instance", cpy_r_node_type);
        goto CPyL288;
    }
    cpy_r_r170 = ((mypy___types___InstanceObject *)cpy_r_r169)->_type;
    CPy_INCREF(cpy_r_r170);
    cpy_r_r171 = CPY_GET_ATTR(cpy_r_r170, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r170);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 587, CPyStatic_dataclasses___globals);
        goto CPyL288;
    }
CPyL89: ;
    cpy_r_r172 = CPyStatics[4510]; /* 'dataclasses.InitVar' */
    cpy_r_r173 = PyUnicode_Compare(cpy_r_r171, cpy_r_r172);
    CPy_DECREF(cpy_r_r171);
    cpy_r_r174 = cpy_r_r173 == -1;
    if (!cpy_r_r174) goto CPyL92;
    cpy_r_r175 = PyErr_Occurred();
    cpy_r_r176 = cpy_r_r175 != NULL;
    if (!cpy_r_r176) goto CPyL92;
    cpy_r_r177 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r177)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 587, CPyStatic_dataclasses___globals);
        goto CPyL288;
    }
CPyL92: ;
    cpy_r_r178 = cpy_r_r173 == 0;
    if (!cpy_r_r178) goto CPyL98;
    cpy_r_is_init_var = 1;
    if (likely(Py_TYPE(cpy_r_node_type) == CPyType_types___Instance))
        cpy_r_r179 = cpy_r_node_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 590, CPyStatic_dataclasses___globals, "mypy.types.Instance", cpy_r_node_type);
        goto CPyL288;
    }
    cpy_r_r180 = ((mypy___types___InstanceObject *)cpy_r_r179)->_args;
    CPy_INCREF(cpy_r_r180);
    cpy_r_r181 = CPySequenceTuple_GetItem(cpy_r_r180, 0);
    CPy_DECREF(cpy_r_r180);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 590, CPyStatic_dataclasses___globals);
        goto CPyL288;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r181, CPyType_types___Type)))
        cpy_r_r182 = cpy_r_r181;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 590, CPyStatic_dataclasses___globals, "mypy.types.Type", cpy_r_r181);
        goto CPyL288;
    }
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r183 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 590, CPyStatic_dataclasses___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL289;
    }
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r183)->_type);
    ((mypy___nodes___VarObject *)cpy_r_r183)->_type = cpy_r_r182;
CPyL98: ;
    cpy_r_r185 = CPyDef_dataclasses___DataclassTransformer____is_kw_only_type(cpy_r_self, cpy_r_node_type);
    CPy_DECREF(cpy_r_node_type);
    if (unlikely(cpy_r_r185 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 592, CPyStatic_dataclasses___globals);
        goto CPyL286;
    }
    if (!cpy_r_r185) goto CPyL101;
    cpy_r_kw_only = 1;
CPyL101: ;
    cpy_r_r186 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r186);
    cpy_r_r187 = CPyDef_dataclasses___DataclassTransformer____collect_field_args(cpy_r_self, cpy_r_r186);
    CPy_DECREF(cpy_r_r186);
    if (unlikely(cpy_r_r187.f0 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 595, CPyStatic_dataclasses___globals);
        goto CPyL286;
    }
    cpy_r_r188 = cpy_r_r187.f0;
    cpy_r_has_field_call = cpy_r_r188;
    cpy_r_r189 = cpy_r_r187.f1;
    CPy_INCREF(cpy_r_r189);
    CPy_DECREF(cpy_r_r187.f1);
    cpy_r_field_args = cpy_r_r189;
    cpy_r_r190 = CPyStatics[4384]; /* 'init' */
    cpy_r_r191 = CPyDict_GetWithNone(cpy_r_field_args, cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 597, CPyStatic_dataclasses___globals);
        goto CPyL290;
    }
    if (PyObject_TypeCheck(cpy_r_r191, CPyType_nodes___Expression))
        cpy_r_r192 = cpy_r_r191;
    else {
        cpy_r_r192 = NULL;
    }
    if (cpy_r_r192 != NULL) goto __LL4828;
    if (cpy_r_r191 == Py_None)
        cpy_r_r192 = cpy_r_r191;
    else {
        cpy_r_r192 = NULL;
    }
    if (cpy_r_r192 != NULL) goto __LL4828;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 597, CPyStatic_dataclasses___globals, "mypy.nodes.Expression or None", cpy_r_r191);
    goto CPyL290;
__LL4828: ;
    cpy_r_is_in_init_param = cpy_r_r192;
    cpy_r_r193 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r194 = cpy_r_is_in_init_param == cpy_r_r193;
    if (cpy_r_r194) {
        goto CPyL291;
    } else
        goto CPyL107;
CPyL105: ;
    cpy_r_r195 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r195);
    cpy_r_r196 = CPyDef_dataclasses___DataclassTransformer____get_default_init_value_for_field_specifier(cpy_r_self, cpy_r_r195);
    CPy_DECREF(cpy_r_r195);
    if (unlikely(cpy_r_r196 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 599, CPyStatic_dataclasses___globals);
        goto CPyL290;
    }
    cpy_r_is_in_init = cpy_r_r196;
    goto CPyL114;
CPyL107: ;
    cpy_r_r197 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r197);
    if (likely(cpy_r_is_in_init_param != Py_None))
        cpy_r_r198 = cpy_r_is_in_init_param;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 601, CPyStatic_dataclasses___globals, "mypy.nodes.Expression", cpy_r_is_in_init_param);
        goto CPyL292;
    }
    cpy_r_r199 = CPY_GET_METHOD_TRAIT(cpy_r_r197, CPyType_plugin___SemanticAnalyzerPluginInterface, 4, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r197, cpy_r_r198); /* parse_bool */
    CPy_DECREF(cpy_r_r198);
    CPy_DECREF(cpy_r_r197);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 601, CPyStatic_dataclasses___globals);
        goto CPyL290;
    }
    cpy_r_r200 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r201 = cpy_r_r199 != cpy_r_r200;
    if (!cpy_r_r201) goto CPyL293;
    if (unlikely(!PyBool_Check(cpy_r_r199))) {
        CPy_TypeError("bool", cpy_r_r199); cpy_r_r202 = 2;
    } else
        cpy_r_r202 = cpy_r_r199 == Py_True;
    CPy_DECREF(cpy_r_r199);
    if (unlikely(cpy_r_r202 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 601, CPyStatic_dataclasses___globals);
        goto CPyL290;
    }
    cpy_r_r203 = cpy_r_r202;
    goto CPyL113;
CPyL112: ;
    cpy_r_r203 = 0;
CPyL113: ;
    cpy_r_is_in_init = cpy_r_r203;
CPyL114: ;
    cpy_r_has_default = 0;
    if (!cpy_r_has_field_call) goto CPyL125;
    cpy_r_r204 = CPyStatics[748]; /* 'default' */
    cpy_r_r205 = PyDict_Contains(cpy_r_field_args, cpy_r_r204);
    cpy_r_r206 = cpy_r_r205 >= 0;
    if (unlikely(!cpy_r_r206)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 608, CPyStatic_dataclasses___globals);
        goto CPyL290;
    }
    cpy_r_r207 = cpy_r_r205;
    if (!cpy_r_r207) goto CPyL118;
    cpy_r_r208 = cpy_r_r207;
    goto CPyL124;
CPyL118: ;
    cpy_r_r209 = CPyStatics[4511]; /* 'default_factory' */
    cpy_r_r210 = PyDict_Contains(cpy_r_field_args, cpy_r_r209);
    cpy_r_r211 = cpy_r_r210 >= 0;
    if (unlikely(!cpy_r_r211)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 609, CPyStatic_dataclasses___globals);
        goto CPyL290;
    }
    cpy_r_r212 = cpy_r_r210;
    if (!cpy_r_r212) goto CPyL121;
    cpy_r_r213 = cpy_r_r212;
    goto CPyL123;
CPyL121: ;
    cpy_r_r214 = CPyStatics[4405]; /* 'factory' */
    cpy_r_r215 = PyDict_Contains(cpy_r_field_args, cpy_r_r214);
    cpy_r_r216 = cpy_r_r215 >= 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 611, CPyStatic_dataclasses___globals);
        goto CPyL290;
    }
    cpy_r_r217 = cpy_r_r215;
    cpy_r_r213 = cpy_r_r217;
CPyL123: ;
    cpy_r_r208 = cpy_r_r213;
CPyL124: ;
    cpy_r_has_default = cpy_r_r208;
    goto CPyL127;
CPyL125: ;
    cpy_r_r218 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    cpy_r_r219 = (PyObject *)CPyType_nodes___TempNode;
    cpy_r_r220 = (CPyPtr)&((PyObject *)cpy_r_r218)->ob_type;
    cpy_r_r221 = *(PyObject * *)cpy_r_r220;
    cpy_r_r222 = cpy_r_r221 == cpy_r_r219;
    if (cpy_r_r222) goto CPyL127;
    cpy_r_has_default = 1;
CPyL127: ;
    if (cpy_r_has_default) goto CPyL134;
    cpy_r_r223 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__spec;
    CPy_INCREF(cpy_r_r223);
    cpy_r_r224 = CPyStatic_dataclasses____TRANSFORM_SPEC_FOR_DATACLASSES;
    if (unlikely(cpy_r_r224 == NULL)) {
        goto CPyL294;
    } else
        goto CPyL131;
CPyL129: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_TRANSFORM_SPEC_FOR_DATACLASSES\" was not set");
    cpy_r_r225 = 0;
    if (unlikely(!cpy_r_r225)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 618, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    CPy_Unreachable();
CPyL131: ;
    cpy_r_r226 = cpy_r_r223 == cpy_r_r224;
    CPy_DECREF(cpy_r_r223);
    if (!cpy_r_r226) goto CPyL134;
    if (likely(cpy_r_sym != Py_None))
        cpy_r_r227 = cpy_r_sym;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 624, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym);
        goto CPyL290;
    }
    ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r227)->_implicit = 1;
CPyL134: ;
    cpy_r_is_kw_only = cpy_r_kw_only;
    cpy_r_r229 = CPyStatics[4385]; /* 'kw_only' */
    cpy_r_r230 = CPyDict_GetWithNone(cpy_r_field_args, cpy_r_r229);
    if (unlikely(cpy_r_r230 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 629, CPyStatic_dataclasses___globals);
        goto CPyL290;
    }
    if (PyObject_TypeCheck(cpy_r_r230, CPyType_nodes___Expression))
        cpy_r_r231 = cpy_r_r230;
    else {
        cpy_r_r231 = NULL;
    }
    if (cpy_r_r231 != NULL) goto __LL4829;
    if (cpy_r_r230 == Py_None)
        cpy_r_r231 = cpy_r_r230;
    else {
        cpy_r_r231 = NULL;
    }
    if (cpy_r_r231 != NULL) goto __LL4829;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 629, CPyStatic_dataclasses___globals, "mypy.nodes.Expression or None", cpy_r_r230);
    goto CPyL290;
__LL4829: ;
    cpy_r_field_kw_only_param = cpy_r_r231;
    cpy_r_r232 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r233 = cpy_r_field_kw_only_param != cpy_r_r232;
    if (!cpy_r_r233) goto CPyL295;
    cpy_r_r234 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r234);
    if (likely(cpy_r_field_kw_only_param != Py_None))
        cpy_r_r235 = cpy_r_field_kw_only_param;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 631, CPyStatic_dataclasses___globals, "mypy.nodes.Expression", cpy_r_field_kw_only_param);
        goto CPyL296;
    }
    cpy_r_r236 = CPY_GET_METHOD_TRAIT(cpy_r_r234, CPyType_plugin___SemanticAnalyzerPluginInterface, 4, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r234, cpy_r_r235); /* parse_bool */
    CPy_DECREF(cpy_r_r235);
    CPy_DECREF(cpy_r_r234);
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 631, CPyStatic_dataclasses___globals);
        goto CPyL290;
    }
    cpy_r_value = cpy_r_r236;
    cpy_r_r237 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r238 = cpy_r_value != cpy_r_r237;
    if (!cpy_r_r238) goto CPyL297;
    if (unlikely(!PyBool_Check(cpy_r_value))) {
        CPy_TypeError("bool", cpy_r_value); cpy_r_r239 = 2;
    } else
        cpy_r_r239 = cpy_r_value == Py_True;
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r239 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 633, CPyStatic_dataclasses___globals);
        goto CPyL290;
    }
    cpy_r_is_kw_only = cpy_r_r239;
    goto CPyL143;
CPyL142: ;
    cpy_r_r240 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r240);
    cpy_r_r241 = CPyStatics[4512]; /* '"kw_only" argument must be a boolean literal' */
    cpy_r_r242 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r242);
    cpy_r_r243 = 2;
    cpy_r_r244 = 2;
    cpy_r_r245 = NULL;
    cpy_r_r246 = CPY_GET_METHOD_TRAIT(cpy_r_r240, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r240, cpy_r_r241, cpy_r_r242, cpy_r_r243, cpy_r_r244, cpy_r_r245); /* fail */
    CPy_DECREF(cpy_r_r242);
    CPy_DECREF(cpy_r_r240);
    if (unlikely(cpy_r_r246 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 635, CPyStatic_dataclasses___globals);
        goto CPyL290;
    }
CPyL143: ;
    CPy_INCREF(cpy_r_sym);
    if (likely(cpy_r_sym != Py_None))
        cpy_r_r247 = cpy_r_sym;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 637, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym);
        goto CPyL290;
    }
    cpy_r_r248 = CPY_GET_ATTR(cpy_r_r247, CPyType_nodes___SymbolTableNode, 2, mypy___nodes___SymbolTableNodeObject, PyObject *); /* type */
    CPy_DECREF(cpy_r_r247);
    if (unlikely(cpy_r_r248 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 637, CPyStatic_dataclasses___globals);
        goto CPyL290;
    }
CPyL145: ;
    cpy_r_r249 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r250 = cpy_r_r248 == cpy_r_r249;
    CPy_DECREF(cpy_r_r248);
    if (!cpy_r_r250) goto CPyL298;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r251 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 637, CPyStatic_dataclasses___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL290;
    }
    cpy_r_r252 = ((mypy___nodes___VarObject *)cpy_r_r251)->_is_final;
    if (!cpy_r_r252) goto CPyL298;
CPyL148: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r253 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 637, CPyStatic_dataclasses___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL290;
    }
    cpy_r_r254 = ((mypy___nodes___VarObject *)cpy_r_r253)->_is_inferred;
    if (!cpy_r_r254) goto CPyL298;
CPyL150: ;
    cpy_r_r255 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r255);
    cpy_r_r256 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r256);
    cpy_r_r257 = CPY_GET_METHOD_TRAIT(cpy_r_r255, CPyType_plugin___SemanticAnalyzerPluginInterface, 18, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, char))(cpy_r_r255, cpy_r_r256, 1); /* analyze_simple_literal_type */
    CPy_DECREF(cpy_r_r256);
    CPy_DECREF(cpy_r_r255);
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 643, CPyStatic_dataclasses___globals);
        goto CPyL290;
    }
    cpy_r_typ = cpy_r_r257;
    cpy_r_r258 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r259 = cpy_r_typ != cpy_r_r258;
    if (!cpy_r_r259) goto CPyL299;
    if (likely(cpy_r_typ != Py_None))
        cpy_r_r260 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 645, CPyStatic_dataclasses___globals, "mypy.types.Type", cpy_r_typ);
        goto CPyL290;
    }
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r261 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 645, CPyStatic_dataclasses___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL300;
    }
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r261)->_type);
    ((mypy___nodes___VarObject *)cpy_r_r261)->_type = cpy_r_r260;
    CPy_DECREF(cpy_r_node);
    goto CPyL159;
CPyL155: ;
    cpy_r_r263 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r263);
    cpy_r_r264 = CPyStatics[4513]; /* ('Need type argument for Final[...] with non-literal '
                                      'default in dataclass') */
    cpy_r_r265 = 2;
    cpy_r_r266 = 2;
    cpy_r_r267 = NULL;
    cpy_r_r268 = CPY_GET_METHOD_TRAIT(cpy_r_r263, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r263, cpy_r_r264, cpy_r_stmt, cpy_r_r265, cpy_r_r266, cpy_r_r267); /* fail */
    CPy_DECREF(cpy_r_r263);
    if (unlikely(cpy_r_r268 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 647, CPyStatic_dataclasses___globals);
        goto CPyL290;
    }
    cpy_r_r269 = NULL;
    cpy_r_r270 = NULL;
    cpy_r_r271 = CPY_INT_TAG;
    cpy_r_r272 = CPY_INT_TAG;
    cpy_r_r273 = CPyDef_types___AnyType(10, cpy_r_r269, cpy_r_r270, cpy_r_r271, cpy_r_r272);
    if (unlikely(cpy_r_r273 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 651, CPyStatic_dataclasses___globals);
        goto CPyL290;
    }
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r274 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 651, CPyStatic_dataclasses___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL301;
    }
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r274)->_type);
    ((mypy___nodes___VarObject *)cpy_r_r274)->_type = cpy_r_r273;
    CPy_DECREF(cpy_r_node);
CPyL159: ;
    cpy_r_r276 = Py_None;
    CPy_INCREF(cpy_r_r276);
    cpy_r_alias = cpy_r_r276;
    cpy_r_r277 = CPyStatics[2565]; /* 'alias' */
    cpy_r_r278 = PyDict_Contains(cpy_r_field_args, cpy_r_r277);
    cpy_r_r279 = cpy_r_r278 >= 0;
    if (unlikely(!cpy_r_r279)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 654, CPyStatic_dataclasses___globals);
        goto CPyL302;
    }
    cpy_r_r280 = cpy_r_r278;
    if (cpy_r_r280) {
        goto CPyL303;
    } else
        goto CPyL304;
CPyL161: ;
    cpy_r_r281 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r281);
    cpy_r_r282 = CPyStatics[2565]; /* 'alias' */
    cpy_r_r283 = CPyDict_GetItem(cpy_r_field_args, cpy_r_r282);
    CPy_DECREF(cpy_r_field_args);
    if (unlikely(cpy_r_r283 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 655, CPyStatic_dataclasses___globals);
        goto CPyL305;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r283, CPyType_nodes___Expression)))
        cpy_r_r284 = cpy_r_r283;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 655, CPyStatic_dataclasses___globals, "mypy.nodes.Expression", cpy_r_r283);
        goto CPyL305;
    }
    cpy_r_r285 = CPY_GET_METHOD_TRAIT(cpy_r_r281, CPyType_plugin___SemanticAnalyzerPluginInterface, 5, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_r281, cpy_r_r284); /* parse_str_literal */
    CPy_DECREF(cpy_r_r284);
    CPy_DECREF(cpy_r_r281);
    if (unlikely(cpy_r_r285 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 655, CPyStatic_dataclasses___globals);
        goto CPyL281;
    }
    cpy_r_alias = cpy_r_r285;
    cpy_r_r286 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r287 = cpy_r_alias == cpy_r_r286;
    if (!cpy_r_r287) goto CPyL169;
    cpy_r_r288 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r288);
    cpy_r_r289 = CPyStatics[3327]; /* ('"alias" argument to dataclass field must be a string '
                                      'literal') */
    cpy_r_r290 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r290);
    cpy_r_r291 = CPyStatic_errorcodes___LITERAL_REQ;
    if (unlikely(cpy_r_r291 == NULL)) {
        goto CPyL306;
    } else
        goto CPyL168;
CPyL166: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"LITERAL_REQ\" was not set");
    cpy_r_r292 = 0;
    if (unlikely(!cpy_r_r292)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 660, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    CPy_Unreachable();
CPyL168: ;
    cpy_r_r293 = 2;
    cpy_r_r294 = 2;
    cpy_r_r295 = CPY_GET_METHOD_TRAIT(cpy_r_r288, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r288, cpy_r_r289, cpy_r_r290, cpy_r_r293, cpy_r_r294, cpy_r_r291); /* fail */
    CPy_DECREF(cpy_r_r290);
    CPy_DECREF(cpy_r_r288);
    if (unlikely(cpy_r_r295 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 657, CPyStatic_dataclasses___globals);
        goto CPyL307;
    }
CPyL169: ;
    if (likely(Py_TYPE(cpy_r_lhs) == CPyType_nodes___NameExpr))
        cpy_r_r296 = cpy_r_lhs;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 663, CPyStatic_dataclasses___globals, "mypy.nodes.NameExpr", cpy_r_lhs);
        goto CPyL307;
    }
    cpy_r_r297 = ((mypy___nodes___NameExprObject *)cpy_r_r296)->_name;
    CPy_INCREF(cpy_r_r297);
    cpy_r_r298 = PySet_Add(cpy_r_current_attr_names, cpy_r_r297);
    CPy_DECREF(cpy_r_r297);
    cpy_r_r299 = cpy_r_r298 >= 0;
    if (unlikely(!cpy_r_r299)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 663, CPyStatic_dataclasses___globals);
        goto CPyL307;
    }
    cpy_r_r300 = CPyStatic_state___state;
    if (unlikely(cpy_r_r300 == NULL)) {
        goto CPyL308;
    } else
        goto CPyL174;
CPyL172: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"state\" was not set");
    cpy_r_r301 = 0;
    if (unlikely(!cpy_r_r301)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 664, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    CPy_Unreachable();
CPyL174: ;
    cpy_r_r302 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    __tmp4830 = CPy_FindAttrOffset(CPyType_plugin___SemanticAnalyzerPluginInterface, ((mypy___plugin___SemanticAnalyzerPluginInterfaceObject *)cpy_r_r302)->vtable, 1);
    cpy_r_r303 = *(PyObject * *)((char *)cpy_r_r302 + __tmp4830);
    if (unlikely(cpy_r_r303 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "collect_attributes", "SemanticAnalyzerPluginInterface", "options", 664, CPyStatic_dataclasses___globals);
        goto CPyL307;
    }
CPyL175: ;
    cpy_r_r304 = ((mypy___options___OptionsObject *)cpy_r_r303)->_strict_optional;
    cpy_r_r305 = CPyStatics[692]; /* 'strict_optional_set' */
    cpy_r_r306 = cpy_r_r304 ? Py_True : Py_False;
    PyObject *cpy_r_r307[2] = {cpy_r_r300, cpy_r_r306};
    cpy_r_r308 = (PyObject **)&cpy_r_r307;
    cpy_r_r309 = PyObject_VectorcallMethod(cpy_r_r305, cpy_r_r308, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r309 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 664, CPyStatic_dataclasses___globals);
        goto CPyL307;
    }
    cpy_r_r310 = PyObject_Type(cpy_r_r309);
    cpy_r_r311 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r312 = CPyObject_GetAttr(cpy_r_r310, cpy_r_r311);
    if (unlikely(cpy_r_r312 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 664, CPyStatic_dataclasses___globals);
        goto CPyL309;
    }
    cpy_r_r313 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r314 = CPyObject_GetAttr(cpy_r_r310, cpy_r_r313);
    CPy_DECREF(cpy_r_r310);
    if (unlikely(cpy_r_r314 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 664, CPyStatic_dataclasses___globals);
        goto CPyL310;
    }
    PyObject *cpy_r_r315[1] = {cpy_r_r309};
    cpy_r_r316 = (PyObject **)&cpy_r_r315;
    cpy_r_r317 = _PyObject_Vectorcall(cpy_r_r314, cpy_r_r316, 1, 0);
    CPy_DECREF(cpy_r_r314);
    if (unlikely(cpy_r_r317 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 664, CPyStatic_dataclasses___globals);
        goto CPyL310;
    } else
        goto CPyL311;
CPyL179: ;
    cpy_r_r318 = 1;
    if (likely(cpy_r_sym != Py_None))
        cpy_r_r319 = cpy_r_sym;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 665, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym);
        goto CPyL184;
    }
    if (likely(Py_TYPE(cpy_r_lhs) == CPyType_nodes___NameExpr))
        cpy_r_r320 = cpy_r_lhs;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 665, CPyStatic_dataclasses___globals, "mypy.nodes.NameExpr", cpy_r_lhs);
        goto CPyL312;
    }
    cpy_r_r321 = ((mypy___nodes___NameExprObject *)cpy_r_r320)->_name;
    CPy_INCREF(cpy_r_r321);
    cpy_r_r322 = CPyDef_dataclasses___DataclassTransformer____infer_dataclass_attr_init_type(cpy_r_self, cpy_r_r319, cpy_r_r321, cpy_r_stmt);
    CPy_DECREF(cpy_r_r319);
    CPy_DECREF(cpy_r_r321);
    if (unlikely(cpy_r_r322 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 665, CPyStatic_dataclasses___globals);
        goto CPyL184;
    } else
        goto CPyL313;
CPyL183: ;
    cpy_r_init_type = cpy_r_r322;
    goto CPyL192;
CPyL184: ;
    cpy_r_r323 = CPy_CatchError();
    cpy_r_r318 = 0;
    cpy_r_r324 = CPy_GetExcInfo();
    cpy_r_r325 = cpy_r_r324.f0;
    CPy_INCREF(cpy_r_r325);
    cpy_r_r326 = cpy_r_r324.f1;
    CPy_INCREF(cpy_r_r326);
    cpy_r_r327 = cpy_r_r324.f2;
    CPy_INCREF(cpy_r_r327);
    CPy_DecRef(cpy_r_r324.f0);
    CPy_DecRef(cpy_r_r324.f1);
    CPy_DecRef(cpy_r_r324.f2);
    PyObject *cpy_r_r328[4] = {cpy_r_r309, cpy_r_r325, cpy_r_r326, cpy_r_r327};
    cpy_r_r329 = (PyObject **)&cpy_r_r328;
    cpy_r_r330 = _PyObject_Vectorcall(cpy_r_r312, cpy_r_r329, 4, 0);
    if (unlikely(cpy_r_r330 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 664, CPyStatic_dataclasses___globals);
        goto CPyL314;
    }
    CPy_DecRef(cpy_r_r325);
    CPy_DecRef(cpy_r_r326);
    CPy_DecRef(cpy_r_r327);
    cpy_r_r331 = PyObject_IsTrue(cpy_r_r330);
    CPy_DecRef(cpy_r_r330);
    cpy_r_r332 = cpy_r_r331 >= 0;
    if (unlikely(!cpy_r_r332)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 664, CPyStatic_dataclasses___globals);
        goto CPyL190;
    }
    cpy_r_r333 = cpy_r_r331;
    if (cpy_r_r333) goto CPyL189;
    CPy_Reraise();
    if (!0) {
        goto CPyL190;
    } else
        goto CPyL315;
CPyL188: ;
    CPy_Unreachable();
CPyL189: ;
    CPy_RestoreExcInfo(cpy_r_r323);
    CPy_DecRef(cpy_r_r323.f0);
    CPy_DecRef(cpy_r_r323.f1);
    CPy_DecRef(cpy_r_r323.f2);
    goto CPyL192;
CPyL190: ;
    CPy_RestoreExcInfo(cpy_r_r323);
    CPy_DecRef(cpy_r_r323.f0);
    CPy_DecRef(cpy_r_r323.f1);
    CPy_DecRef(cpy_r_r323.f2);
    cpy_r_r334 = CPy_KeepPropagating();
    if (!cpy_r_r334) {
        goto CPyL193;
    } else
        goto CPyL316;
CPyL191: ;
    CPy_Unreachable();
CPyL192: ;
    tuple_T3OOO __tmp4831 = { NULL, NULL, NULL };
    cpy_r_r335 = __tmp4831;
    cpy_r_r336 = cpy_r_r335;
    goto CPyL194;
CPyL193: ;
    cpy_r_r337 = CPy_CatchError();
    cpy_r_r336 = cpy_r_r337;
CPyL194: ;
    if (!cpy_r_r318) goto CPyL317;
    cpy_r_r338 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r339[4] = {cpy_r_r309, cpy_r_r338, cpy_r_r338, cpy_r_r338};
    cpy_r_r340 = (PyObject **)&cpy_r_r339;
    cpy_r_r341 = _PyObject_Vectorcall(cpy_r_r312, cpy_r_r340, 4, 0);
    CPy_DECREF(cpy_r_r312);
    if (unlikely(cpy_r_r341 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 664, CPyStatic_dataclasses___globals);
        goto CPyL318;
    } else
        goto CPyL319;
CPyL196: ;
    CPy_DECREF(cpy_r_r309);
CPyL197: ;
    if (cpy_r_r336.f0 == NULL) {
        goto CPyL204;
    } else
        goto CPyL320;
CPyL198: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL200;
    } else
        goto CPyL321;
CPyL199: ;
    CPy_Unreachable();
CPyL200: ;
    if (cpy_r_r336.f0 == NULL) goto CPyL202;
    CPy_RestoreExcInfo(cpy_r_r336);
    CPy_XDECREF(cpy_r_r336.f0);
    CPy_XDECREF(cpy_r_r336.f1);
    CPy_XDECREF(cpy_r_r336.f2);
CPyL202: ;
    cpy_r_r342 = CPy_KeepPropagating();
    if (!cpy_r_r342) goto CPyL252;
    CPy_Unreachable();
CPyL204: ;
    if (likely(Py_TYPE(cpy_r_lhs) == CPyType_nodes___NameExpr))
        cpy_r_r343 = cpy_r_lhs;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 667, CPyStatic_dataclasses___globals, "mypy.nodes.NameExpr", cpy_r_lhs);
        goto CPyL322;
    }
    cpy_r_r344 = ((mypy___nodes___NameExprObject *)cpy_r_r343)->_name;
    CPy_INCREF(cpy_r_r344);
    cpy_r_r345 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_line;
    CPyTagged_INCREF(cpy_r_r345);
    cpy_r_r346 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_column;
    CPyTagged_INCREF(cpy_r_r346);
    CPy_DECREF(cpy_r_stmt);
    cpy_r_r347 = ((mypy___nodes___ClassDefObject *)cpy_r_cls)->_info;
    CPy_INCREF(cpy_r_r347);
    cpy_r_r348 = ((mypy___nodes___ClassDefObject *)cpy_r_cls)->_info;
    CPy_INCREF(cpy_r_r348);
    cpy_r_r349 = CPyDef_dataclasses____has_direct_dataclass_transform_metaclass(cpy_r_r348);
    CPy_DECREF(cpy_r_r348);
    if (unlikely(cpy_r_r349 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 677, CPyStatic_dataclasses___globals);
        goto CPyL323;
    }
    cpy_r_r350 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r350);
    if (cpy_r_init_type == NULL) {
        goto CPyL324;
    } else
        goto CPyL209;
CPyL207: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"init_type\" referenced before assignment");
    cpy_r_r351 = 0;
    if (unlikely(!cpy_r_r351)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 666, CPyStatic_dataclasses___globals);
        goto CPyL252;
    }
    CPy_Unreachable();
CPyL209: ;
    cpy_r_r352 = CPyDef_dataclasses___DataclassAttribute(cpy_r_r344, cpy_r_alias, cpy_r_is_in_init, cpy_r_is_init_var, cpy_r_has_default, cpy_r_r345, cpy_r_r346, cpy_r_init_type, cpy_r_r347, cpy_r_is_kw_only, cpy_r_r349, cpy_r_r350);
    CPy_DECREF(cpy_r_r344);
    CPy_DECREF(cpy_r_alias);
    CPyTagged_DECREF(cpy_r_r345);
    CPyTagged_DECREF(cpy_r_r346);
    CPy_DECREF(cpy_r_r347);
    CPy_DECREF(cpy_r_r350);
    if (unlikely(cpy_r_r352 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 666, CPyStatic_dataclasses___globals);
        goto CPyL325;
    }
    if (likely(Py_TYPE(cpy_r_lhs) == CPyType_nodes___NameExpr))
        cpy_r_r353 = cpy_r_lhs;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 666, CPyStatic_dataclasses___globals, "mypy.nodes.NameExpr", cpy_r_lhs);
        goto CPyL326;
    }
    cpy_r_r354 = ((mypy___nodes___NameExprObject *)cpy_r_r353)->_name;
    CPy_INCREF(cpy_r_r354);
    CPy_DECREF(cpy_r_lhs);
    cpy_r_r355 = CPyDict_SetItem(cpy_r_found_attrs, cpy_r_r354, cpy_r_r352);
    CPy_DECREF(cpy_r_r354);
    CPy_DECREF(cpy_r_r352);
    cpy_r_r356 = cpy_r_r355 >= 0;
    if (unlikely(!cpy_r_r356)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 666, CPyStatic_dataclasses___globals);
        goto CPyL274;
    } else
        goto CPyL61;
CPyL212: ;
    cpy_r_r357 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r357)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 546, CPyStatic_dataclasses___globals);
        goto CPyL327;
    }
    cpy_r_r358 = CPyDict_Values(cpy_r_found_attrs);
    CPy_DECREF(cpy_r_found_attrs);
    if (unlikely(cpy_r_r358 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 683, CPyStatic_dataclasses___globals);
        goto CPyL328;
    }
    cpy_r_all_attrs = cpy_r_r358;
    if (!cpy_r_found_dataclass_supertype) goto CPyL329;
    cpy_r_r359 = CPyDef_dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_obj();
    if (unlikely(cpy_r_r359 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 685, CPyStatic_dataclasses___globals);
        goto CPyL330;
    }
    if (((mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject *)cpy_r_r359)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject *)cpy_r_r359)->___mypyc_env__);
    }
    ((mypy___plugins___dataclasses_____mypyc_lambda__0_collect_attributes_DataclassTransformer_objObject *)cpy_r_r359)->___mypyc_env__ = cpy_r_r1;
    cpy_r_r360 = 1;
    if (unlikely(!cpy_r_r360)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 685, CPyStatic_dataclasses___globals);
        goto CPyL331;
    }
    cpy_r_r361 = CPyStatics[227]; /* 'sort' */
    PyObject *cpy_r_r362[2] = {cpy_r_all_attrs, cpy_r_r359};
    cpy_r_r363 = (PyObject **)&cpy_r_r362;
    cpy_r_r364 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r365 = PyObject_VectorcallMethod(cpy_r_r361, cpy_r_r363, 9223372036854775809ULL, cpy_r_r364);
    if (unlikely(cpy_r_r365 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 685, CPyStatic_dataclasses___globals);
        goto CPyL331;
    } else
        goto CPyL332;
CPyL218: ;
    CPy_DECREF(cpy_r_r359);
CPyL219: ;
    cpy_r_found_default = 0;
    cpy_r_found_kw_sentinel = 0;
    cpy_r_r366 = 0;
CPyL220: ;
    cpy_r_r367 = (CPyPtr)&((PyVarObject *)cpy_r_all_attrs)->ob_size;
    cpy_r_r368 = *(int64_t *)cpy_r_r367;
    cpy_r_r369 = cpy_r_r368 << 1;
    cpy_r_r370 = (Py_ssize_t)cpy_r_r366 < (Py_ssize_t)cpy_r_r369;
    if (!cpy_r_r370) goto CPyL333;
    cpy_r_r371 = CPyList_GetItemUnsafe(cpy_r_all_attrs, cpy_r_r366);
    if (likely(Py_TYPE(cpy_r_r371) == CPyType_dataclasses___DataclassAttribute))
        cpy_r_r372 = cpy_r_r371;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 692, CPyStatic_dataclasses___globals, "mypy.plugins.dataclasses.DataclassAttribute", cpy_r_r371);
        goto CPyL334;
    }
    cpy_r_attr = cpy_r_r372;
    if (!cpy_r_found_default) goto CPyL231;
    cpy_r_r373 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_is_in_init;
    if (!cpy_r_r373) goto CPyL231;
CPyL224: ;
    cpy_r_r374 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_has_default;
    if (cpy_r_r374) goto CPyL231;
CPyL225: ;
    cpy_r_r375 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_kw_only;
    if (cpy_r_r375) goto CPyL231;
CPyL226: ;
    CPy_INCREF(cpy_r_cls);
    cpy_r_context = cpy_r_cls;
    cpy_r_r376 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_name;
    CPy_INCREF(cpy_r_r376);
    cpy_r_r377 = PySet_Contains(cpy_r_current_attr_names, cpy_r_r376);
    CPy_DECREF(cpy_r_r376);
    cpy_r_r378 = cpy_r_r377 >= 0;
    if (unlikely(!cpy_r_r378)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 700, CPyStatic_dataclasses___globals);
        goto CPyL335;
    }
    cpy_r_r379 = cpy_r_r377;
    if (cpy_r_r379) {
        goto CPyL336;
    } else
        goto CPyL230;
CPyL228: ;
    cpy_r_r380 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_line;
    CPyTagged_INCREF(cpy_r_r380);
    cpy_r_r381 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_column;
    CPyTagged_INCREF(cpy_r_r381);
    cpy_r_r382 = CPyDef_nodes___Context(cpy_r_r380, cpy_r_r381);
    CPyTagged_DECREF(cpy_r_r380);
    CPyTagged_DECREF(cpy_r_r381);
    if (unlikely(cpy_r_r382 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 701, CPyStatic_dataclasses___globals);
        goto CPyL337;
    }
    cpy_r_context = cpy_r_r382;
CPyL230: ;
    cpy_r_r383 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r383);
    cpy_r_r384 = CPyStatics[4514]; /* ('Attributes without a default cannot follow '
                                      'attributes with one') */
    cpy_r_r385 = 2;
    cpy_r_r386 = 2;
    cpy_r_r387 = NULL;
    cpy_r_r388 = CPY_GET_METHOD_TRAIT(cpy_r_r383, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r383, cpy_r_r384, cpy_r_context, cpy_r_r385, cpy_r_r386, cpy_r_r387); /* fail */
    CPy_DECREF(cpy_r_context);
    CPy_DECREF(cpy_r_r383);
    if (unlikely(cpy_r_r388 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 702, CPyStatic_dataclasses___globals);
        goto CPyL337;
    }
CPyL231: ;
    if (!cpy_r_found_default) goto CPyL233;
    cpy_r_r389 = cpy_r_found_default;
    goto CPyL237;
CPyL233: ;
    cpy_r_r390 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_has_default;
    if (cpy_r_r390) goto CPyL235;
CPyL234: ;
    cpy_r_r391 = cpy_r_r390;
    goto CPyL236;
CPyL235: ;
    cpy_r_r392 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_is_in_init;
    cpy_r_r391 = cpy_r_r392;
CPyL236: ;
    cpy_r_r389 = cpy_r_r391;
CPyL237: ;
    cpy_r_found_default = cpy_r_r389;
    if (!cpy_r_found_kw_sentinel) goto CPyL245;
    cpy_r_r393 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_type;
    CPy_INCREF(cpy_r_r393);
    cpy_r_r394 = CPyDef_dataclasses___DataclassTransformer____is_kw_only_type(cpy_r_self, cpy_r_r393);
    CPy_DECREF(cpy_r_r393);
    if (unlikely(cpy_r_r394 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 707, CPyStatic_dataclasses___globals);
        goto CPyL337;
    }
    if (!cpy_r_r394) goto CPyL245;
    CPy_INCREF(cpy_r_cls);
    cpy_r_context = cpy_r_cls;
    cpy_r_r395 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_name;
    CPy_INCREF(cpy_r_r395);
    cpy_r_r396 = PySet_Contains(cpy_r_current_attr_names, cpy_r_r395);
    CPy_DECREF(cpy_r_r395);
    cpy_r_r397 = cpy_r_r396 >= 0;
    if (unlikely(!cpy_r_r397)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 709, CPyStatic_dataclasses___globals);
        goto CPyL335;
    }
    cpy_r_r398 = cpy_r_r396;
    if (cpy_r_r398) {
        goto CPyL338;
    } else
        goto CPyL244;
CPyL242: ;
    cpy_r_r399 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_line;
    CPyTagged_INCREF(cpy_r_r399);
    cpy_r_r400 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_column;
    CPyTagged_INCREF(cpy_r_r400);
    cpy_r_r401 = CPyDef_nodes___Context(cpy_r_r399, cpy_r_r400);
    CPyTagged_DECREF(cpy_r_r399);
    CPyTagged_DECREF(cpy_r_r400);
    if (unlikely(cpy_r_r401 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 710, CPyStatic_dataclasses___globals);
        goto CPyL337;
    }
    cpy_r_context = cpy_r_r401;
CPyL244: ;
    cpy_r_r402 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r402);
    cpy_r_r403 = CPyStatics[4515]; /* ('There may not be more than one field with the '
                                      'KW_ONLY type') */
    cpy_r_r404 = 2;
    cpy_r_r405 = 2;
    cpy_r_r406 = NULL;
    cpy_r_r407 = CPY_GET_METHOD_TRAIT(cpy_r_r402, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r402, cpy_r_r403, cpy_r_context, cpy_r_r404, cpy_r_r405, cpy_r_r406); /* fail */
    CPy_DECREF(cpy_r_context);
    CPy_DECREF(cpy_r_r402);
    if (unlikely(cpy_r_r407 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 711, CPyStatic_dataclasses___globals);
        goto CPyL337;
    }
CPyL245: ;
    if (cpy_r_found_kw_sentinel) {
        goto CPyL339;
    } else
        goto CPyL247;
CPyL246: ;
    cpy_r_r408 = cpy_r_found_kw_sentinel;
    goto CPyL249;
CPyL247: ;
    cpy_r_r409 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_type;
    CPy_INCREF(cpy_r_r409);
    CPy_DECREF(cpy_r_attr);
    cpy_r_r410 = CPyDef_dataclasses___DataclassTransformer____is_kw_only_type(cpy_r_self, cpy_r_r409);
    CPy_DECREF(cpy_r_r409);
    if (unlikely(cpy_r_r410 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 714, CPyStatic_dataclasses___globals);
        goto CPyL334;
    }
    cpy_r_r408 = cpy_r_r410;
CPyL249: ;
    cpy_r_found_kw_sentinel = cpy_r_r408;
    cpy_r_r411 = cpy_r_r366 + 2;
    cpy_r_r366 = cpy_r_r411;
    goto CPyL220;
CPyL251: ;
    return cpy_r_all_attrs;
CPyL252: ;
    cpy_r_r412 = NULL;
    return cpy_r_r412;
CPyL253: ;
    CPy_XDecRef(cpy_r_init_type);
    goto CPyL252;
CPyL254: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    goto CPyL252;
CPyL255: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    goto CPyL252;
CPyL256: ;
    CPy_DECREF(cpy_r_r7);
    CPyTagged_DECREF(cpy_r_r12);
    goto CPyL57;
CPyL257: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_r12);
    goto CPyL252;
CPyL258: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_info);
    goto CPyL252;
CPyL259: ;
    CPy_XDECREF(cpy_r_init_type);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_cls);
    CPy_DECREF(cpy_r_found_attrs);
    CPy_DECREF(cpy_r_r7);
    CPyTagged_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_info);
    goto CPyL22;
CPyL260: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL56;
CPyL261: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r55);
    goto CPyL252;
CPyL262: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_r66);
    goto CPyL55;
CPyL263: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_data);
    goto CPyL252;
CPyL264: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r72);
    goto CPyL252;
CPyL265: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_name);
    goto CPyL252;
CPyL266: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_attr);
    goto CPyL252;
CPyL267: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r66);
    goto CPyL252;
CPyL268: ;
    CPy_DECREF(cpy_r_sym_node);
    goto CPyL34;
CPyL269: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_sym_node);
    goto CPyL252;
CPyL270: ;
    CPy_DECREF(cpy_r_sym_node);
    CPy_DECREF(cpy_r_r86);
    goto CPyL34;
CPyL271: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_r7);
    CPyTagged_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_sym_node);
    CPy_DecRef(cpy_r_r99);
    goto CPyL252;
CPyL272: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    goto CPyL252;
CPyL273: ;
    CPy_XDECREF(cpy_r_init_type);
    CPy_DECREF(cpy_r_r117);
    goto CPyL212;
CPyL274: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    goto CPyL252;
CPyL275: ;
    CPy_DECREF(cpy_r_stmt);
    goto CPyL61;
CPyL276: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    goto CPyL252;
CPyL277: ;
    CPy_DECREF(cpy_r_stmt);
    CPy_DECREF(cpy_r_lhs);
    goto CPyL61;
CPyL278: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    goto CPyL252;
CPyL279: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_r129);
    goto CPyL252;
CPyL280: ;
    CPy_DECREF(cpy_r_stmt);
    CPy_DECREF(cpy_r_lhs);
    CPy_DECREF(cpy_r_sym);
    goto CPyL61;
CPyL281: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    goto CPyL252;
CPyL282: ;
    CPy_XDECREF(cpy_r_init_type);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_cls);
    CPy_DECREF(cpy_r_found_attrs);
    CPy_DECREF(cpy_r_current_attr_names);
    CPy_DECREF(cpy_r_r117);
    CPy_DECREF(cpy_r_stmt);
    CPy_DECREF(cpy_r_lhs);
    CPy_DECREF(cpy_r_sym);
    CPy_DECREF(cpy_r_node);
    goto CPyL74;
CPyL283: ;
    CPy_DECREF(cpy_r_stmt);
    CPy_DECREF(cpy_r_lhs);
    CPy_DECREF(cpy_r_sym);
    goto CPyL77;
CPyL284: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_r148);
    goto CPyL252;
CPyL285: ;
    CPy_XDECREF(cpy_r_init_type);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_cls);
    CPy_DECREF(cpy_r_found_attrs);
    CPy_DECREF(cpy_r_current_attr_names);
    CPy_DECREF(cpy_r_r117);
    CPy_DECREF(cpy_r_stmt);
    CPy_DECREF(cpy_r_lhs);
    CPy_DECREF(cpy_r_sym);
    CPy_DECREF(cpy_r_node);
    goto CPyL80;
CPyL286: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_node);
    goto CPyL252;
CPyL287: ;
    CPy_DECREF(cpy_r_stmt);
    CPy_DECREF(cpy_r_lhs);
    CPy_DECREF(cpy_r_sym);
    CPy_DECREF(cpy_r_node);
    goto CPyL61;
CPyL288: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_node_type);
    goto CPyL252;
CPyL289: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_node_type);
    CPy_DecRef(cpy_r_r182);
    goto CPyL252;
CPyL290: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_field_args);
    goto CPyL252;
CPyL291: ;
    CPy_DECREF(cpy_r_is_in_init_param);
    goto CPyL105;
CPyL292: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_field_args);
    CPy_DecRef(cpy_r_r197);
    goto CPyL252;
CPyL293: ;
    CPy_DECREF(cpy_r_r199);
    goto CPyL112;
CPyL294: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_field_args);
    CPy_DecRef(cpy_r_r223);
    goto CPyL129;
CPyL295: ;
    CPy_DECREF(cpy_r_field_kw_only_param);
    goto CPyL143;
CPyL296: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_field_args);
    CPy_DecRef(cpy_r_r234);
    goto CPyL252;
CPyL297: ;
    CPy_DECREF(cpy_r_value);
    goto CPyL142;
CPyL298: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL159;
CPyL299: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL155;
CPyL300: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_field_args);
    CPy_DecRef(cpy_r_r260);
    goto CPyL252;
CPyL301: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_field_args);
    CPy_DecRef(cpy_r_r273);
    goto CPyL252;
CPyL302: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_field_args);
    CPy_DecRef(cpy_r_alias);
    goto CPyL252;
CPyL303: ;
    CPy_DECREF(cpy_r_alias);
    goto CPyL161;
CPyL304: ;
    CPy_DECREF(cpy_r_field_args);
    goto CPyL169;
CPyL305: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_r281);
    goto CPyL252;
CPyL306: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_alias);
    CPy_DecRef(cpy_r_r288);
    CPy_DecRef(cpy_r_r290);
    goto CPyL166;
CPyL307: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_alias);
    goto CPyL252;
CPyL308: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_alias);
    goto CPyL172;
CPyL309: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_alias);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r310);
    goto CPyL252;
CPyL310: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_sym);
    CPy_DecRef(cpy_r_alias);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r312);
    goto CPyL252;
CPyL311: ;
    CPy_DECREF(cpy_r_r317);
    goto CPyL179;
CPyL312: ;
    CPy_DecRef(cpy_r_r319);
    goto CPyL184;
CPyL313: ;
    CPy_XDECREF(cpy_r_init_type);
    goto CPyL183;
CPyL314: ;
    CPy_DecRef(cpy_r_r325);
    CPy_DecRef(cpy_r_r326);
    CPy_DecRef(cpy_r_r327);
    goto CPyL190;
CPyL315: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_alias);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r312);
    CPy_DecRef(cpy_r_r323.f0);
    CPy_DecRef(cpy_r_r323.f1);
    CPy_DecRef(cpy_r_r323.f2);
    goto CPyL188;
CPyL316: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_alias);
    CPy_DecRef(cpy_r_r309);
    CPy_DecRef(cpy_r_r312);
    goto CPyL191;
CPyL317: ;
    CPy_DECREF(cpy_r_r309);
    CPy_DECREF(cpy_r_r312);
    goto CPyL197;
CPyL318: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_alias);
    CPy_DecRef(cpy_r_r309);
    goto CPyL200;
CPyL319: ;
    CPy_DECREF(cpy_r_r341);
    goto CPyL196;
CPyL320: ;
    CPy_XDECREF(cpy_r_init_type);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_cls);
    CPy_DECREF(cpy_r_found_attrs);
    CPy_DECREF(cpy_r_current_attr_names);
    CPy_DECREF(cpy_r_r117);
    CPy_DECREF(cpy_r_stmt);
    CPy_DECREF(cpy_r_lhs);
    CPy_DECREF(cpy_r_alias);
    goto CPyL198;
CPyL321: ;
    CPy_XDECREF(cpy_r_r336.f0);
    CPy_XDECREF(cpy_r_r336.f1);
    CPy_XDECREF(cpy_r_r336.f2);
    goto CPyL199;
CPyL322: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_alias);
    goto CPyL252;
CPyL323: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_alias);
    CPy_DecRef(cpy_r_r344);
    CPyTagged_DecRef(cpy_r_r345);
    CPyTagged_DecRef(cpy_r_r346);
    CPy_DecRef(cpy_r_r347);
    goto CPyL252;
CPyL324: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_cls);
    CPy_DECREF(cpy_r_found_attrs);
    CPy_DECREF(cpy_r_current_attr_names);
    CPy_DECREF(cpy_r_r117);
    CPy_DECREF(cpy_r_lhs);
    CPy_DECREF(cpy_r_alias);
    CPy_DECREF(cpy_r_r344);
    CPyTagged_DECREF(cpy_r_r345);
    CPyTagged_DECREF(cpy_r_r346);
    CPy_DECREF(cpy_r_r347);
    CPy_DECREF(cpy_r_r350);
    goto CPyL207;
CPyL325: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_lhs);
    goto CPyL252;
CPyL326: ;
    CPy_XDecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_r117);
    CPy_DecRef(cpy_r_lhs);
    CPy_DecRef(cpy_r_r352);
    goto CPyL252;
CPyL327: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_found_attrs);
    CPy_DecRef(cpy_r_current_attr_names);
    goto CPyL252;
CPyL328: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_current_attr_names);
    goto CPyL252;
CPyL329: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL219;
CPyL330: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_all_attrs);
    goto CPyL252;
CPyL331: ;
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_r359);
    goto CPyL252;
CPyL332: ;
    CPy_DECREF(cpy_r_r365);
    goto CPyL218;
CPyL333: ;
    CPy_DECREF(cpy_r_cls);
    CPy_DECREF(cpy_r_current_attr_names);
    goto CPyL251;
CPyL334: ;
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_all_attrs);
    goto CPyL252;
CPyL335: ;
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_all_attrs);
    CPy_DecRef(cpy_r_context);
    goto CPyL252;
CPyL336: ;
    CPy_DECREF(cpy_r_context);
    goto CPyL228;
CPyL337: ;
    CPy_DecRef(cpy_r_cls);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_current_attr_names);
    CPy_DecRef(cpy_r_all_attrs);
    goto CPyL252;
CPyL338: ;
    CPy_DECREF(cpy_r_context);
    goto CPyL242;
CPyL339: ;
    CPy_DECREF(cpy_r_attr);
    goto CPyL246;
}

PyObject *CPyPy_dataclasses___DataclassTransformer___collect_attributes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":collect_attributes", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses___DataclassTransformer___collect_attributes(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "collect_attributes", 489, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___DataclassTransformer____freeze(PyObject *cpy_r_self, PyObject *cpy_r_attributes) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_info;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_attr;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_sym_node;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_var;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    cpy_r_r0 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    cpy_r_r1 = ((mypy___nodes___ClassDefObject *)cpy_r_r0)->_info;
    CPy_INCREF(cpy_r_r1);
    cpy_r_info = cpy_r_r1;
    cpy_r_r2 = 0;
CPyL1: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL30;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_attributes, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_dataclasses___DataclassAttribute))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_freeze", 722, CPyStatic_dataclasses___globals, "mypy.plugins.dataclasses.DataclassAttribute", cpy_r_r7);
        goto CPyL31;
    }
    cpy_r_attr = cpy_r_r8;
    cpy_r_r9 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_is_neither_frozen_nor_nonfrozen;
    if (cpy_r_r9) goto CPyL32;
CPyL4: ;
    cpy_r_r10 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_freeze", "TypeInfo", "names", 730, CPyStatic_dataclasses___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r10);
CPyL5: ;
    cpy_r_r11 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_name;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDict_GetWithNone(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_freeze", 730, CPyStatic_dataclasses___globals);
        goto CPyL33;
    }
    if (Py_TYPE(cpy_r_r12) == CPyType_nodes___SymbolTableNode)
        cpy_r_r13 = cpy_r_r12;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL4832;
    if (cpy_r_r12 == Py_None)
        cpy_r_r13 = cpy_r_r12;
    else {
        cpy_r_r13 = NULL;
    }
    if (cpy_r_r13 != NULL) goto __LL4832;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_freeze", 730, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r12);
    goto CPyL33;
__LL4832: ;
    cpy_r_sym_node = cpy_r_r13;
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_sym_node != cpy_r_r14;
    if (cpy_r_r15) {
        goto CPyL34;
    } else
        goto CPyL35;
CPyL8: ;
    if (likely(cpy_r_sym_node != Py_None))
        cpy_r_r16 = cpy_r_sym_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_freeze", 732, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym_node);
        goto CPyL36;
    }
    cpy_r_r17 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r16)->_node;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_sym_node);
    cpy_r_var = cpy_r_r17;
    cpy_r_r18 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_var)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL37;
    if (likely(Py_TYPE(cpy_r_var) == CPyType_nodes___Var))
        cpy_r_r22 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_freeze", 734, CPyStatic_dataclasses___globals, "mypy.nodes.Var", cpy_r_var);
        goto CPyL38;
    }
    ((mypy___nodes___VarObject *)cpy_r_r22)->_is_property = 1;
    CPy_DECREF(cpy_r_var);
    goto CPyL27;
CPyL12: ;
    cpy_r_r24 = CPyDef_dataclasses___DataclassAttribute___to_var(cpy_r_attr, cpy_r_info);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_freeze", 736, CPyStatic_dataclasses___globals);
        goto CPyL31;
    }
    cpy_r_var = cpy_r_r24;
    if (likely(Py_TYPE(cpy_r_var) == CPyType_nodes___Var))
        cpy_r_r25 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_freeze", 737, CPyStatic_dataclasses___globals, "mypy.nodes.Var", cpy_r_var);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_info);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r25)->_info);
    ((mypy___nodes___VarObject *)cpy_r_r25)->_info = cpy_r_info;
    if (likely(Py_TYPE(cpy_r_var) == CPyType_nodes___Var))
        cpy_r_r27 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_freeze", 738, CPyStatic_dataclasses___globals, "mypy.nodes.Var", cpy_r_var);
        goto CPyL38;
    }
    ((mypy___nodes___VarObject *)cpy_r_r27)->_is_property = 1;
    cpy_r_r29 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_freeze", 739, CPyStatic_dataclasses___globals);
        goto CPyL38;
    }
CPyL16: ;
    cpy_r_r30 = CPyStatics[224]; /* '.' */
    cpy_r_r31 = PyUnicode_Concat(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_freeze", 739, CPyStatic_dataclasses___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_var);
    if (likely(Py_TYPE(cpy_r_var) == CPyType_nodes___Var))
        cpy_r_r32 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_freeze", 739, CPyStatic_dataclasses___globals, "mypy.nodes.Var", cpy_r_var);
        goto CPyL39;
    }
    cpy_r_r33 = CPY_GET_ATTR(cpy_r_r32, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_freeze", 739, CPyStatic_dataclasses___globals);
        goto CPyL39;
    }
CPyL19: ;
    cpy_r_r34 = PyUnicode_Concat(cpy_r_r31, cpy_r_r33);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_freeze", 739, CPyStatic_dataclasses___globals);
        goto CPyL38;
    }
    if (likely(Py_TYPE(cpy_r_var) == CPyType_nodes___Var))
        cpy_r_r35 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_freeze", 739, CPyStatic_dataclasses___globals, "mypy.nodes.Var", cpy_r_var);
        goto CPyL40;
    }
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r35)->__fullname);
    ((mypy___nodes___VarObject *)cpy_r_r35)->__fullname = cpy_r_r34;
    CPy_INCREF(cpy_r_var);
    if (likely(Py_TYPE(cpy_r_var) == CPyType_nodes___Var))
        cpy_r_r37 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_freeze", 740, CPyStatic_dataclasses___globals, "mypy.nodes.Var", cpy_r_var);
        goto CPyL38;
    }
    cpy_r_r38 = 2;
    cpy_r_r39 = 2;
    cpy_r_r40 = 2;
    cpy_r_r41 = 2;
    cpy_r_r42 = 2;
    cpy_r_r43 = CPyDef_nodes___SymbolTableNode(4, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_freeze", 740, CPyStatic_dataclasses___globals);
        goto CPyL38;
    }
    cpy_r_r44 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_freeze", "TypeInfo", "names", 740, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r44);
CPyL24: ;
    if (likely(Py_TYPE(cpy_r_var) == CPyType_nodes___Var))
        cpy_r_r45 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_freeze", 740, CPyStatic_dataclasses___globals, "mypy.nodes.Var", cpy_r_var);
        goto CPyL42;
    }
    cpy_r_r46 = CPY_GET_ATTR(cpy_r_r45, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_freeze", 740, CPyStatic_dataclasses___globals);
        goto CPyL42;
    }
CPyL26: ;
    cpy_r_r47 = CPyDict_SetItem(cpy_r_r44, cpy_r_r46, cpy_r_r43);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_freeze", 740, CPyStatic_dataclasses___globals);
        goto CPyL31;
    }
CPyL27: ;
    cpy_r_r49 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r49;
    goto CPyL1;
CPyL28: ;
    return 1;
CPyL29: ;
    cpy_r_r50 = 2;
    return cpy_r_r50;
CPyL30: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL28;
CPyL31: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL29;
CPyL32: ;
    CPy_DECREF(cpy_r_attr);
    goto CPyL27;
CPyL33: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attr);
    goto CPyL29;
CPyL34: ;
    CPy_DECREF(cpy_r_attr);
    goto CPyL8;
CPyL35: ;
    CPy_DECREF(cpy_r_sym_node);
    goto CPyL12;
CPyL36: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_sym_node);
    goto CPyL29;
CPyL37: ;
    CPy_DECREF(cpy_r_var);
    goto CPyL27;
CPyL38: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_var);
    goto CPyL29;
CPyL39: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_r31);
    goto CPyL29;
CPyL40: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_r34);
    goto CPyL29;
CPyL41: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_r43);
    goto CPyL29;
CPyL42: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r44);
    goto CPyL29;
}

PyObject *CPyPy_dataclasses___DataclassTransformer____freeze(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"attributes", 0};
    static CPyArg_Parser parser = {"O:_freeze", kwlist, 0};
    PyObject *obj_attributes;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_attributes)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    PyObject *arg_attributes;
    if (likely(PyList_Check(obj_attributes)))
        arg_attributes = obj_attributes;
    else {
        CPy_TypeError("list", obj_attributes); 
        goto fail;
    }
    char retval = CPyDef_dataclasses___DataclassTransformer____freeze(arg_self, arg_attributes);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_freeze", 717, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___DataclassTransformer____propertize_callables(PyObject *cpy_r_self, PyObject *cpy_r_attributes, char cpy_r_settable) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_info;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_var;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    if (cpy_r_settable != 2) goto CPyL2;
    cpy_r_settable = 1;
CPyL2: ;
    cpy_r_r0 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    cpy_r_r1 = ((mypy___nodes___ClassDefObject *)cpy_r_r0)->_info;
    CPy_INCREF(cpy_r_r1);
    cpy_r_info = cpy_r_r1;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL19;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_attributes, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_dataclasses___DataclassAttribute))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_propertize_callables", 753, CPyStatic_dataclasses___globals, "mypy.plugins.dataclasses.DataclassAttribute", cpy_r_r7);
        goto CPyL20;
    }
    cpy_r_attr = cpy_r_r8;
    cpy_r_r9 = ((mypy___plugins___dataclasses___DataclassAttributeObject *)cpy_r_attr)->_type;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyDef_types___get_proper_type(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_propertize_callables", 754, CPyStatic_dataclasses___globals);
        goto CPyL21;
    }
    cpy_r_r11 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_r10)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    CPy_DECREF(cpy_r_r10);
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL22;
    cpy_r_r15 = CPyDef_dataclasses___DataclassAttribute___to_var(cpy_r_attr, cpy_r_info);
    CPy_DECREF(cpy_r_attr);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_propertize_callables", 755, CPyStatic_dataclasses___globals);
        goto CPyL20;
    }
    cpy_r_var = cpy_r_r15;
    CPy_INCREF(cpy_r_info);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_var)->_info);
    ((mypy___nodes___VarObject *)cpy_r_var)->_info = cpy_r_info;
    ((mypy___nodes___VarObject *)cpy_r_var)->_is_property = 1;
    ((mypy___nodes___VarObject *)cpy_r_var)->_is_settable_property = cpy_r_settable;
    cpy_r_r19 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_propertize_callables", 759, CPyStatic_dataclasses___globals);
        goto CPyL23;
    }
CPyL9: ;
    cpy_r_r20 = CPyStatics[224]; /* '.' */
    cpy_r_r21 = PyUnicode_Concat(cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_propertize_callables", 759, CPyStatic_dataclasses___globals);
        goto CPyL23;
    }
    cpy_r_r22 = CPY_GET_ATTR(cpy_r_var, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_propertize_callables", 759, CPyStatic_dataclasses___globals);
        goto CPyL24;
    }
CPyL11: ;
    cpy_r_r23 = PyUnicode_Concat(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_propertize_callables", 759, CPyStatic_dataclasses___globals);
        goto CPyL23;
    }
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_var)->__fullname);
    ((mypy___nodes___VarObject *)cpy_r_var)->__fullname = cpy_r_r23;
    cpy_r_r25 = 2;
    cpy_r_r26 = 2;
    cpy_r_r27 = 2;
    cpy_r_r28 = 2;
    cpy_r_r29 = 2;
    cpy_r_r30 = CPyDef_nodes___SymbolTableNode(4, cpy_r_var, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_propertize_callables", 760, CPyStatic_dataclasses___globals);
        goto CPyL23;
    }
    cpy_r_r31 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_names;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_propertize_callables", "TypeInfo", "names", 760, CPyStatic_dataclasses___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r31);
CPyL14: ;
    cpy_r_r32 = CPY_GET_ATTR(cpy_r_var, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_var);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_propertize_callables", 760, CPyStatic_dataclasses___globals);
        goto CPyL26;
    }
CPyL15: ;
    cpy_r_r33 = CPyDict_SetItem(cpy_r_r31, cpy_r_r32, cpy_r_r30);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_propertize_callables", 760, CPyStatic_dataclasses___globals);
        goto CPyL20;
    }
CPyL16: ;
    cpy_r_r35 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r35;
    goto CPyL3;
CPyL17: ;
    return 1;
CPyL18: ;
    cpy_r_r36 = 2;
    return cpy_r_r36;
CPyL19: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attr);
    goto CPyL18;
CPyL22: ;
    CPy_DECREF(cpy_r_attr);
    goto CPyL16;
CPyL23: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_var);
    goto CPyL18;
CPyL24: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_r21);
    goto CPyL18;
CPyL25: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_r30);
    goto CPyL18;
CPyL26: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    goto CPyL18;
}

PyObject *CPyPy_dataclasses___DataclassTransformer____propertize_callables(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"attributes", "settable", 0};
    static CPyArg_Parser parser = {"O|O:_propertize_callables", kwlist, 0};
    PyObject *obj_attributes;
    PyObject *obj_settable = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_attributes, &obj_settable)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    PyObject *arg_attributes;
    if (likely(PyList_Check(obj_attributes)))
        arg_attributes = obj_attributes;
    else {
        CPy_TypeError("list", obj_attributes); 
        goto fail;
    }
    char arg_settable;
    if (obj_settable == NULL) {
        arg_settable = 2;
    } else if (unlikely(!PyBool_Check(obj_settable))) {
        CPy_TypeError("bool", obj_settable); goto fail;
    } else
        arg_settable = obj_settable == Py_True;
    char retval = CPyDef_dataclasses___DataclassTransformer____propertize_callables(arg_self, arg_attributes, arg_settable);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_propertize_callables", 742, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___DataclassTransformer____is_kw_only_type(PyObject *cpy_r_self, PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_node_type;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_node == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    return 0;
CPyL2: ;
    CPy_INCREF(cpy_r_node);
    if (likely(cpy_r_node != Py_None))
        cpy_r_r2 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_is_kw_only_type", 766, CPyStatic_dataclasses___globals, "mypy.types.Type", cpy_r_node);
        goto CPyL13;
    }
    cpy_r_r3 = CPyDef_types___get_proper_type(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_is_kw_only_type", 766, CPyStatic_dataclasses___globals);
        goto CPyL13;
    }
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_is_kw_only_type", 766, CPyStatic_dataclasses___globals, "mypy.types.ProperType", cpy_r_r3);
        goto CPyL13;
    }
    cpy_r_node_type = cpy_r_r4;
    cpy_r_r5 = (PyObject *)CPyType_types___Instance;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_node_type)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    if (cpy_r_r8) {
        goto CPyL7;
    } else
        goto CPyL14;
CPyL6: ;
    return 0;
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_node_type) == CPyType_types___Instance))
        cpy_r_r9 = cpy_r_node_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_is_kw_only_type", 769, CPyStatic_dataclasses___globals, "mypy.types.Instance", cpy_r_node_type);
        goto CPyL15;
    }
    cpy_r_r10 = ((mypy___types___InstanceObject *)cpy_r_r9)->_type;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_node_type);
    cpy_r_r11 = CPY_GET_ATTR(cpy_r_r10, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_is_kw_only_type", 769, CPyStatic_dataclasses___globals);
        goto CPyL13;
    }
CPyL9: ;
    cpy_r_r12 = CPyStatics[4516]; /* 'dataclasses.KW_ONLY' */
    cpy_r_r13 = PyUnicode_Compare(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r14 = cpy_r_r13 == -1;
    if (!cpy_r_r14) goto CPyL12;
    cpy_r_r15 = PyErr_Occurred();
    cpy_r_r16 = cpy_r_r15 != NULL;
    if (!cpy_r_r16) goto CPyL12;
    cpy_r_r17 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_is_kw_only_type", 769, CPyStatic_dataclasses___globals);
        goto CPyL13;
    }
CPyL12: ;
    cpy_r_r18 = cpy_r_r13 == 0;
    return cpy_r_r18;
CPyL13: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL14: ;
    CPy_DECREF(cpy_r_node_type);
    goto CPyL6;
CPyL15: ;
    CPy_DecRef(cpy_r_node_type);
    goto CPyL13;
}

PyObject *CPyPy_dataclasses___DataclassTransformer____is_kw_only_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:_is_kw_only_type", kwlist, 0};
    PyObject *obj_node;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_node)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    PyObject *arg_node;
    if (PyObject_TypeCheck(obj_node, CPyType_types___Type))
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL4833;
    if (obj_node == Py_None)
        arg_node = obj_node;
    else {
        arg_node = NULL;
    }
    if (arg_node != NULL) goto __LL4833;
    CPy_TypeError("mypy.types.Type or None", obj_node); 
    goto fail;
__LL4833: ;
    char retval = CPyDef_dataclasses___DataclassTransformer____is_kw_only_type(arg_self, arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_is_kw_only_type", 762, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___DataclassTransformer____add_dataclass_fields_magic_attribute(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_attr_name;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_any_type;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_field_type;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyPtr cpy_r_r28;
    CPyPtr cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_attr_type;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_var;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    cpy_r_r0 = CPyStatics[4517]; /* '__dataclass_fields__' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_attr_name = cpy_r_r0;
    cpy_r_r1 = NULL;
    cpy_r_r2 = NULL;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPY_INT_TAG;
    cpy_r_r5 = CPyDef_types___AnyType(4, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_dataclass_fields_magic_attribute", 773, CPyStatic_dataclasses___globals);
        goto CPyL25;
    }
    cpy_r_any_type = cpy_r_r5;
    cpy_r_r6 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__spec;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyStatic_dataclasses____TRANSFORM_SPEC_FOR_DATACLASSES;
    if (unlikely(cpy_r_r7 == NULL)) {
        goto CPyL26;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_TRANSFORM_SPEC_FOR_DATACLASSES\" was not set");
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_dataclass_fields_magic_attribute", 780, CPyStatic_dataclasses___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r9 = cpy_r_r6 == cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r9) goto CPyL12;
    cpy_r_r10 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyStatics[4518]; /* 'dataclasses.Field' */
    cpy_r_r12 = PyList_New(1);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_dataclass_fields_magic_attribute", 781, CPyStatic_dataclasses___globals);
        goto CPyL27;
    }
    cpy_r_r13 = (CPyPtr)&((PyListObject *)cpy_r_r12)->ob_item;
    cpy_r_r14 = *(CPyPtr *)cpy_r_r13;
    CPy_INCREF(cpy_r_any_type);
    *(PyObject * *)cpy_r_r14 = cpy_r_any_type;
    cpy_r_r15 = CPY_GET_METHOD_TRAIT(cpy_r_r10, CPyType_plugin___SemanticAnalyzerPluginInterface, 2, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r10, cpy_r_r11, cpy_r_r12); /* named_type_or_none */
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_dataclass_fields_magic_attribute", 781, CPyStatic_dataclasses___globals);
        goto CPyL28;
    }
    cpy_r_r16 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r17 = cpy_r_r15 != cpy_r_r16;
    if (cpy_r_r17) {
        goto CPyL29;
    } else
        goto CPyL30;
CPyL8: ;
    if (Py_TYPE(cpy_r_r15) == CPyType_types___Instance)
        cpy_r_r18 = cpy_r_r15;
    else {
        cpy_r_r18 = NULL;
    }
    if (cpy_r_r18 != NULL) goto __LL4834;
    if (Py_TYPE(cpy_r_r15) == CPyType_types___AnyType)
        cpy_r_r18 = cpy_r_r15;
    else {
        cpy_r_r18 = NULL;
    }
    if (cpy_r_r18 != NULL) goto __LL4834;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_add_dataclass_fields_magic_attribute", 781, CPyStatic_dataclasses___globals, "union[mypy.types.Instance, mypy.types.AnyType]", cpy_r_r15);
    goto CPyL25;
__LL4834: ;
    cpy_r_r19 = cpy_r_r18;
    goto CPyL11;
CPyL10: ;
    cpy_r_r19 = cpy_r_any_type;
CPyL11: ;
    cpy_r_field_type = cpy_r_r19;
    goto CPyL13;
CPyL12: ;
    cpy_r_field_type = cpy_r_any_type;
CPyL13: ;
    cpy_r_r20 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[798]; /* 'builtins.dict' */
    cpy_r_r22 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPY_GET_METHOD_TRAIT(cpy_r_r22, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r22, cpy_r_r23, cpy_r_r24); /* named_type */
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_dataclass_fields_magic_attribute", 785, CPyStatic_dataclasses___globals);
        goto CPyL31;
    }
    cpy_r_r26 = PyList_New(2);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_dataclass_fields_magic_attribute", 785, CPyStatic_dataclasses___globals);
        goto CPyL32;
    }
    cpy_r_r27 = (CPyPtr)&((PyListObject *)cpy_r_r26)->ob_item;
    cpy_r_r28 = *(CPyPtr *)cpy_r_r27;
    *(PyObject * *)cpy_r_r28 = cpy_r_r25;
    cpy_r_r29 = cpy_r_r28 + 8;
    *(PyObject * *)cpy_r_r29 = cpy_r_field_type;
    cpy_r_r30 = CPY_GET_METHOD_TRAIT(cpy_r_r20, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r20, cpy_r_r21, cpy_r_r26); /* named_type */
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_dataclass_fields_magic_attribute", 784, CPyStatic_dataclasses___globals);
        goto CPyL25;
    }
    cpy_r_attr_type = cpy_r_r30;
    cpy_r_r31 = CPyDef_nodes___Var(cpy_r_attr_name, cpy_r_attr_type);
    CPy_DECREF(cpy_r_attr_type);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_dataclass_fields_magic_attribute", 787, CPyStatic_dataclasses___globals);
        goto CPyL25;
    }
    cpy_r_var = cpy_r_r31;
    cpy_r_r32 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    cpy_r_r33 = ((mypy___nodes___ClassDefObject *)cpy_r_r32)->_info;
    CPy_INCREF(cpy_r_r33);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_var)->_info);
    ((mypy___nodes___VarObject *)cpy_r_var)->_info = cpy_r_r33;
    cpy_r_r35 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    cpy_r_r36 = ((mypy___nodes___ClassDefObject *)cpy_r_r35)->_info;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = CPY_GET_ATTR(cpy_r_r36, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_dataclass_fields_magic_attribute", 789, CPyStatic_dataclasses___globals);
        goto CPyL33;
    }
CPyL18: ;
    cpy_r_r38 = CPyStatics[224]; /* '.' */
    cpy_r_r39 = PyUnicode_Concat(cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_dataclass_fields_magic_attribute", 789, CPyStatic_dataclasses___globals);
        goto CPyL33;
    }
    cpy_r_r40 = PyUnicode_Concat(cpy_r_r39, cpy_r_attr_name);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_dataclass_fields_magic_attribute", 789, CPyStatic_dataclasses___globals);
        goto CPyL33;
    }
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_var)->__fullname);
    ((mypy___nodes___VarObject *)cpy_r_var)->__fullname = cpy_r_r40;
    ((mypy___nodes___VarObject *)cpy_r_var)->_is_classvar = 1;
    cpy_r_r43 = 2;
    cpy_r_r44 = 2;
    cpy_r_r45 = 2;
    cpy_r_r46 = 2;
    cpy_r_r47 = CPyDef_nodes___SymbolTableNode(4, cpy_r_var, cpy_r_r43, cpy_r_r44, cpy_r_r45, 1, cpy_r_r46);
    CPy_DECREF(cpy_r_var);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_dataclass_fields_magic_attribute", 791, CPyStatic_dataclasses___globals);
        goto CPyL25;
    }
    cpy_r_r48 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    cpy_r_r49 = ((mypy___nodes___ClassDefObject *)cpy_r_r48)->_info;
    cpy_r_r50 = ((mypy___nodes___TypeInfoObject *)cpy_r_r49)->_names;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_add_dataclass_fields_magic_attribute", "TypeInfo", "names", 791, CPyStatic_dataclasses___globals);
        goto CPyL34;
    }
    CPy_INCREF(cpy_r_r50);
CPyL22: ;
    cpy_r_r51 = CPyDict_SetItem(cpy_r_r50, cpy_r_attr_name, cpy_r_r47);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_attr_name);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_dataclass_fields_magic_attribute", 791, CPyStatic_dataclasses___globals);
        goto CPyL24;
    }
    return 1;
CPyL24: ;
    cpy_r_r53 = 2;
    return cpy_r_r53;
CPyL25: ;
    CPy_DecRef(cpy_r_attr_name);
    goto CPyL24;
CPyL26: ;
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r6);
    goto CPyL2;
CPyL27: ;
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r10);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_any_type);
    goto CPyL24;
CPyL29: ;
    CPy_DECREF(cpy_r_any_type);
    goto CPyL8;
CPyL30: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL10;
CPyL31: ;
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_field_type);
    CPy_DecRef(cpy_r_r20);
    goto CPyL24;
CPyL32: ;
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_field_type);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r25);
    goto CPyL24;
CPyL33: ;
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_var);
    goto CPyL24;
CPyL34: ;
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_r47);
    goto CPyL24;
}

PyObject *CPyPy_dataclasses___DataclassTransformer____add_dataclass_fields_magic_attribute(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":_add_dataclass_fields_magic_attribute", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    char retval = CPyDef_dataclasses___DataclassTransformer____add_dataclass_fields_magic_attribute(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_add_dataclass_fields_magic_attribute", 771, CPyStatic_dataclasses___globals);
    return NULL;
}

tuple_T2CO CPyDef_dataclasses___DataclassTransformer____collect_field_args(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
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
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyPtr cpy_r_r39;
    int64_t cpy_r_r40;
    CPyTagged cpy_r_r41;
    char cpy_r_r42;
    CPyPtr cpy_r_r43;
    int64_t cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    CPyPtr cpy_r_r47;
    int64_t cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_kind;
    PyObject *cpy_r_r57;
    PyObject **cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_message;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    tuple_T2CO cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    CPyTagged cpy_r_r90;
    CPyTagged cpy_r_r91;
    CPyTagged cpy_r_r92;
    tuple_T2CO cpy_r_r93;
    PyObject *cpy_r_r94;
    tuple_T2CO cpy_r_r95;
    tuple_T2CO cpy_r_r96;
    cpy_r_r0 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL48;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r4 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 802, CPyStatic_dataclasses___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL50;
    }
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_r4)->_callee;
    cpy_r_r6 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_r5)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL4;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL5;
CPyL4: ;
    cpy_r_r11 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_r5)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    cpy_r_r10 = cpy_r_r14;
CPyL5: ;
    if (!cpy_r_r10) goto CPyL7;
    cpy_r_r15 = cpy_r_r10;
    goto CPyL8;
CPyL7: ;
    cpy_r_r16 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_r5)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    cpy_r_r15 = cpy_r_r19;
CPyL8: ;
    if (!cpy_r_r15) goto CPyL48;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r20 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 803, CPyStatic_dataclasses___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL50;
    }
    cpy_r_r21 = ((mypy___nodes___CallExprObject *)cpy_r_r20)->_callee;
    CPy_INCREF(cpy_r_r21);
    if (likely((Py_TYPE(cpy_r_r21) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r21) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r21) == CPyType_nodes___RefExpr)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 803, CPyStatic_dataclasses___globals, "mypy.nodes.RefExpr", cpy_r_r21);
        goto CPyL50;
    }
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_r22, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 803, CPyStatic_dataclasses___globals);
        goto CPyL50;
    }
CPyL12: ;
    cpy_r_r24 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__spec;
    cpy_r_r25 = ((mypy___nodes___DataclassTransformSpecObject *)cpy_r_r24)->_field_specifiers;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = PySequence_Contains(cpy_r_r25, cpy_r_r23);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 803, CPyStatic_dataclasses___globals);
        goto CPyL50;
    }
    cpy_r_r28 = cpy_r_r26;
    if (!cpy_r_r28) goto CPyL48;
    cpy_r_r29 = PyDict_New();
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 806, CPyStatic_dataclasses___globals);
        goto CPyL50;
    }
    cpy_r_args = cpy_r_r29;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r30 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 807, CPyStatic_dataclasses___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL51;
    }
    cpy_r_r31 = ((mypy___nodes___CallExprObject *)cpy_r_r30)->_arg_names;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = 0;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r33 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 807, CPyStatic_dataclasses___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL52;
    }
    cpy_r_r34 = ((mypy___nodes___CallExprObject *)cpy_r_r33)->_args;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = 0;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r36 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 807, CPyStatic_dataclasses___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL53;
    }
    cpy_r_r37 = ((mypy___nodes___CallExprObject *)cpy_r_r36)->_arg_kinds;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = 0;
CPyL19: ;
    cpy_r_r39 = (CPyPtr)&((PyVarObject *)cpy_r_r31)->ob_size;
    cpy_r_r40 = *(int64_t *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 << 1;
    cpy_r_r42 = (Py_ssize_t)cpy_r_r32 < (Py_ssize_t)cpy_r_r41;
    if (!cpy_r_r42) goto CPyL54;
    cpy_r_r43 = (CPyPtr)&((PyVarObject *)cpy_r_r34)->ob_size;
    cpy_r_r44 = *(int64_t *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 << 1;
    cpy_r_r46 = (Py_ssize_t)cpy_r_r35 < (Py_ssize_t)cpy_r_r45;
    if (!cpy_r_r46) goto CPyL54;
    cpy_r_r47 = (CPyPtr)&((PyVarObject *)cpy_r_r37)->ob_size;
    cpy_r_r48 = *(int64_t *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 << 1;
    cpy_r_r50 = (Py_ssize_t)cpy_r_r38 < (Py_ssize_t)cpy_r_r49;
    if (!cpy_r_r50) goto CPyL54;
    cpy_r_r51 = CPyList_GetItemUnsafe(cpy_r_r31, cpy_r_r32);
    if (PyUnicode_Check(cpy_r_r51))
        cpy_r_r52 = cpy_r_r51;
    else {
        cpy_r_r52 = NULL;
    }
    if (cpy_r_r52 != NULL) goto __LL4835;
    if (cpy_r_r51 == Py_None)
        cpy_r_r52 = cpy_r_r51;
    else {
        cpy_r_r52 = NULL;
    }
    if (cpy_r_r52 != NULL) goto __LL4835;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 807, CPyStatic_dataclasses___globals, "str or None", cpy_r_r51);
    goto CPyL55;
__LL4835: ;
    cpy_r_name = cpy_r_r52;
    cpy_r_r53 = CPyList_GetItemUnsafe(cpy_r_r34, cpy_r_r35);
    if (likely(PyObject_TypeCheck(cpy_r_r53, CPyType_nodes___Expression)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 807, CPyStatic_dataclasses___globals, "mypy.nodes.Expression", cpy_r_r53);
        goto CPyL56;
    }
    cpy_r_arg = cpy_r_r54;
    cpy_r_r55 = CPyList_GetItemUnsafe(cpy_r_r37, cpy_r_r38);
    if (likely(Py_TYPE(cpy_r_r55) == CPyType_nodes___ArgKind))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 807, CPyStatic_dataclasses___globals, "mypy.nodes.ArgKind", cpy_r_r55);
        goto CPyL57;
    }
    cpy_r_kind = cpy_r_r56;
    cpy_r_r57 = CPyStatics[54]; /* 'is_named' */
    PyObject *cpy_r_r58[1] = {cpy_r_kind};
    cpy_r_r59 = (PyObject **)&cpy_r_r58;
    cpy_r_r60 = PyObject_VectorcallMethod(cpy_r_r57, cpy_r_r59, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 808, CPyStatic_dataclasses___globals);
        goto CPyL58;
    }
    if (unlikely(!PyBool_Check(cpy_r_r60))) {
        CPy_TypeError("bool", cpy_r_r60); cpy_r_r61 = 2;
    } else
        cpy_r_r61 = cpy_r_r60 == Py_True;
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 808, CPyStatic_dataclasses___globals);
        goto CPyL58;
    }
    if (cpy_r_r61) {
        goto CPyL59;
    } else
        goto CPyL60;
CPyL28: ;
    cpy_r_r62 = CPyStatics[54]; /* 'is_named' */
    cpy_r_r63 = 1 ? Py_True : Py_False;
    PyObject *cpy_r_r64[2] = {cpy_r_kind, cpy_r_r63};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = CPyStatics[9077]; /* ('star',) */
    cpy_r_r67 = PyObject_VectorcallMethod(cpy_r_r62, cpy_r_r65, 9223372036854775809ULL, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 809, CPyStatic_dataclasses___globals);
        goto CPyL61;
    }
    CPy_DECREF(cpy_r_kind);
    if (unlikely(!PyBool_Check(cpy_r_r67))) {
        CPy_TypeError("bool", cpy_r_r67); cpy_r_r68 = 2;
    } else
        cpy_r_r68 = cpy_r_r67 == Py_True;
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 809, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    if (cpy_r_r68) {
        goto CPyL62;
    } else
        goto CPyL32;
CPyL31: ;
    cpy_r_r69 = CPyStatics[4519]; /* 'Unpacking **kwargs in "field()" is not supported' */
    CPy_INCREF(cpy_r_r69);
    cpy_r_message = cpy_r_r69;
    goto CPyL37;
CPyL32: ;
    cpy_r_r70 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__spec;
    CPy_INCREF(cpy_r_r70);
    cpy_r_r71 = CPyStatic_dataclasses____TRANSFORM_SPEC_FOR_DATACLASSES;
    if (unlikely(cpy_r_r71 == NULL)) {
        goto CPyL63;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"_TRANSFORM_SPEC_FOR_DATACLASSES\" was not set");
    cpy_r_r72 = 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 814, CPyStatic_dataclasses___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r73 = cpy_r_r70 == cpy_r_r71;
    CPy_DECREF(cpy_r_r70);
    cpy_r_r74 = cpy_r_r73 ^ 1;
    if (cpy_r_r74) {
        goto CPyL46;
    } else
        goto CPyL64;
CPyL36: ;
    cpy_r_r75 = CPyStatics[4520]; /* '"field()" does not accept positional arguments' */
    CPy_INCREF(cpy_r_r75);
    cpy_r_message = cpy_r_r75;
CPyL37: ;
    cpy_r_r76 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r76);
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___CallExpr))
        cpy_r_r77 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 822, CPyStatic_dataclasses___globals, "mypy.nodes.CallExpr", cpy_r_expr);
        goto CPyL65;
    }
    cpy_r_r78 = 2;
    cpy_r_r79 = 2;
    cpy_r_r80 = NULL;
    cpy_r_r81 = CPY_GET_METHOD_TRAIT(cpy_r_r76, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r76, cpy_r_message, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80); /* fail */
    CPy_DECREF(cpy_r_message);
    CPy_DECREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r81 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 822, CPyStatic_dataclasses___globals);
        goto CPyL50;
    }
    cpy_r_r82 = PyDict_New();
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 823, CPyStatic_dataclasses___globals);
        goto CPyL50;
    }
    cpy_r_r83.f0 = 1;
    cpy_r_r83.f1 = cpy_r_r82;
    CPy_INCREF(cpy_r_r83.f1);
    CPy_DECREF(cpy_r_r82);
    return cpy_r_r83;
CPyL41: ;
    cpy_r_r84 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r85 = cpy_r_name != cpy_r_r84;
    if (cpy_r_r85) {
        goto CPyL44;
    } else
        goto CPyL66;
CPyL42: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r86 = 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 824, CPyStatic_dataclasses___globals);
        goto CPyL50;
    }
    CPy_Unreachable();
CPyL44: ;
    if (likely(cpy_r_name != Py_None))
        cpy_r_r87 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 825, CPyStatic_dataclasses___globals, "str", cpy_r_name);
        goto CPyL67;
    }
    cpy_r_r88 = CPyDict_SetItem(cpy_r_args, cpy_r_r87, cpy_r_arg);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 825, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
CPyL46: ;
    cpy_r_r90 = cpy_r_r32 + 2;
    cpy_r_r32 = cpy_r_r90;
    cpy_r_r91 = cpy_r_r35 + 2;
    cpy_r_r35 = cpy_r_r91;
    cpy_r_r92 = cpy_r_r38 + 2;
    cpy_r_r38 = cpy_r_r92;
    goto CPyL19;
CPyL47: ;
    cpy_r_r93.f0 = 1;
    cpy_r_r93.f1 = cpy_r_args;
    CPy_INCREF(cpy_r_r93.f1);
    CPy_DECREF(cpy_r_args);
    return cpy_r_r93;
CPyL48: ;
    cpy_r_r94 = PyDict_New();
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 827, CPyStatic_dataclasses___globals);
        goto CPyL50;
    }
    cpy_r_r95.f0 = 0;
    cpy_r_r95.f1 = cpy_r_r94;
    CPy_INCREF(cpy_r_r95.f1);
    CPy_DECREF(cpy_r_r94);
    return cpy_r_r95;
CPyL50: ;
    tuple_T2CO __tmp4836 = { 2, NULL };
    cpy_r_r96 = __tmp4836;
    return cpy_r_r96;
CPyL51: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL50;
CPyL52: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r31);
    goto CPyL50;
CPyL53: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r34);
    goto CPyL50;
CPyL54: ;
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r37);
    goto CPyL47;
CPyL55: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r37);
    goto CPyL50;
CPyL56: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_name);
    goto CPyL50;
CPyL57: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_arg);
    goto CPyL50;
CPyL58: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_kind);
    goto CPyL50;
CPyL59: ;
    CPy_DECREF(cpy_r_kind);
    goto CPyL41;
CPyL60: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_arg);
    goto CPyL28;
CPyL61: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_kind);
    goto CPyL50;
CPyL62: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r37);
    goto CPyL31;
CPyL63: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r70);
    goto CPyL33;
CPyL64: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r37);
    goto CPyL36;
CPyL65: ;
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_r76);
    goto CPyL50;
CPyL66: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_arg);
    goto CPyL42;
CPyL67: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_arg);
    goto CPyL50;
}

PyObject *CPyPy_dataclasses___DataclassTransformer____collect_field_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:_collect_field_args", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    tuple_T2CO retval = CPyDef_dataclasses___DataclassTransformer____collect_field_args(arg_self, arg_expr);
    if (retval.f0 == 2) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4837 = retval.f0 ? Py_True : Py_False;
    CPy_INCREF(__tmp4837);
    PyTuple_SET_ITEM(retbox, 0, __tmp4837);
    PyObject *__tmp4838 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp4838);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_collect_field_args", 795, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___DataclassTransformer____get_bool_arg(PyObject *cpy_r_self, PyObject *cpy_r_name, char cpy_r_default) {
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
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_expression;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    cpy_r_r0 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__reason;
    cpy_r_r1 = (PyObject *)CPyType_nodes___Expression;
    cpy_r_r2 = CPy_TypeCheck(cpy_r_r0, cpy_r_r1);
    if (!cpy_r_r2) goto CPyL7;
    cpy_r_r3 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__reason;
    CPy_INCREF(cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r4, CPyType_nodes___Expression)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_bool_arg", 834, CPyStatic_dataclasses___globals, "mypy.nodes.Expression", cpy_r_r4);
        goto CPyL16;
    }
    cpy_r_r6 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyStatic_dataclasses___globals;
    cpy_r_r8 = CPyStatics[4377]; /* 'ClassDefContext' */
    cpy_r_r9 = CPyDict_GetItem(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_bool_arg", 834, CPyStatic_dataclasses___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r10[3] = {cpy_r_r3, cpy_r_r5, cpy_r_r6};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 3, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_bool_arg", 834, CPyStatic_dataclasses___globals);
        goto CPyL17;
    }
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (likely(PyTuple_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_bool_arg", 834, CPyStatic_dataclasses___globals, "tuple", cpy_r_r12);
        goto CPyL15;
    }
    cpy_r_r14 = CPyDef_plugins___common____get_decorator_bool_argument(cpy_r_r13, cpy_r_name, cpy_r_default);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_bool_arg", 833, CPyStatic_dataclasses___globals);
        goto CPyL15;
    }
    return cpy_r_r14;
CPyL7: ;
    cpy_r_r15 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__cls;
    cpy_r_r16 = ((mypy___nodes___ClassDefObject *)cpy_r_r15)->_keywords;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDict_GetWithNone(cpy_r_r16, cpy_r_name);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_bool_arg", 839, CPyStatic_dataclasses___globals);
        goto CPyL15;
    }
    if (PyObject_TypeCheck(cpy_r_r17, CPyType_nodes___Expression))
        cpy_r_r18 = cpy_r_r17;
    else {
        cpy_r_r18 = NULL;
    }
    if (cpy_r_r18 != NULL) goto __LL4839;
    if (cpy_r_r17 == Py_None)
        cpy_r_r18 = cpy_r_r17;
    else {
        cpy_r_r18 = NULL;
    }
    if (cpy_r_r18 != NULL) goto __LL4839;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_bool_arg", 839, CPyStatic_dataclasses___globals, "mypy.nodes.Expression or None", cpy_r_r17);
    goto CPyL15;
__LL4839: ;
    cpy_r_expression = cpy_r_r18;
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_expression != cpy_r_r19;
    if (!cpy_r_r20) goto CPyL18;
    cpy_r_r21 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r21);
    if (likely(cpy_r_expression != Py_None))
        cpy_r_r22 = cpy_r_expression;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_bool_arg", 841, CPyStatic_dataclasses___globals, "mypy.nodes.Expression", cpy_r_expression);
        goto CPyL19;
    }
    cpy_r_r23 = cpy_r_default ? Py_True : Py_False;
    cpy_r_r24 = CPyDef_semanal_shared___require_bool_literal_argument(cpy_r_r21, cpy_r_r22, cpy_r_name, cpy_r_r23);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_bool_arg", 841, CPyStatic_dataclasses___globals);
        goto CPyL15;
    }
    if (unlikely(!PyBool_Check(cpy_r_r24))) {
        CPy_TypeError("bool", cpy_r_r24); cpy_r_r25 = 2;
    } else
        cpy_r_r25 = cpy_r_r24 == Py_True;
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_bool_arg", 841, CPyStatic_dataclasses___globals);
        goto CPyL15;
    }
    return cpy_r_r25;
CPyL14: ;
    return cpy_r_default;
CPyL15: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL16: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL15;
CPyL18: ;
    CPy_DECREF(cpy_r_expression);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL15;
}

PyObject *CPyPy_dataclasses___DataclassTransformer____get_bool_arg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "default", 0};
    static CPyArg_Parser parser = {"OO:_get_bool_arg", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_default;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_default)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char arg_default;
    if (unlikely(!PyBool_Check(obj_default))) {
        CPy_TypeError("bool", obj_default); goto fail;
    } else
        arg_default = obj_default == Py_True;
    char retval = CPyDef_dataclasses___DataclassTransformer____get_bool_arg(arg_self, arg_name, arg_default);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_bool_arg", 829, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___DataclassTransformer____get_default_init_value_for_field_specifier(PyObject *cpy_r_self, PyObject *cpy_r_call) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_specifier_type;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_parameter;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_literals;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    cpy_r_r0 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_call)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (cpy_r_r3) goto CPyL2;
    return 1;
CPyL2: ;
    CPy_INCREF(cpy_r_call);
    if (likely(Py_TYPE(cpy_r_call) == CPyType_nodes___CallExpr))
        cpy_r_r4 = cpy_r_call;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_default_init_value_for_field_specifier", 854, CPyStatic_dataclasses___globals, "mypy.nodes.CallExpr", cpy_r_call);
        goto CPyL22;
    }
    cpy_r_r5 = CPyDef_plugins___common____get_callee_type(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_default_init_value_for_field_specifier", 854, CPyStatic_dataclasses___globals);
        goto CPyL22;
    }
    cpy_r_specifier_type = cpy_r_r5;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_specifier_type == cpy_r_r6;
    if (cpy_r_r7) {
        goto CPyL23;
    } else
        goto CPyL6;
CPyL5: ;
    return 1;
CPyL6: ;
    if (likely(cpy_r_specifier_type != Py_None))
        cpy_r_r8 = cpy_r_specifier_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_default_init_value_for_field_specifier", 858, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_specifier_type);
        goto CPyL22;
    }
    cpy_r_r9 = CPyStatics[4384]; /* 'init' */
    cpy_r_r10 = CPyDef_types___CallableType___argument_by_name(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_default_init_value_for_field_specifier", 858, CPyStatic_dataclasses___globals);
        goto CPyL22;
    }
    cpy_r_parameter = cpy_r_r10;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_parameter == cpy_r_r11;
    if (cpy_r_r12) {
        goto CPyL24;
    } else
        goto CPyL10;
CPyL9: ;
    return 1;
CPyL10: ;
    if (likely(cpy_r_parameter != Py_None))
        cpy_r_r13 = cpy_r_parameter;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_default_init_value_for_field_specifier", 862, CPyStatic_dataclasses___globals, "tuple", cpy_r_parameter);
        goto CPyL22;
    }
    cpy_r_r14 = CPySequenceTuple_GetItem(cpy_r_r13, 4);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_default_init_value_for_field_specifier", 862, CPyStatic_dataclasses___globals);
        goto CPyL22;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_types___Type)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_default_init_value_for_field_specifier", 862, CPyStatic_dataclasses___globals, "mypy.types.Type", cpy_r_r14);
        goto CPyL22;
    }
    cpy_r_r16 = (PyObject *)&PyBool_Type;
    cpy_r_r17 = CPyStatics[831]; /* 'builtins.bool' */
    cpy_r_r18 = CPyDef_typeops___try_getting_literals_from_type(cpy_r_r15, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_default_init_value_for_field_specifier", 862, CPyStatic_dataclasses___globals);
        goto CPyL22;
    }
    cpy_r_literals = cpy_r_r18;
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_literals == cpy_r_r19;
    if (cpy_r_r20) goto CPyL25;
    if (likely(cpy_r_literals != Py_None))
        cpy_r_r21 = cpy_r_literals;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_default_init_value_for_field_specifier", 863, CPyStatic_dataclasses___globals, "list", cpy_r_literals);
        goto CPyL26;
    }
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_r21)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = cpy_r_r24 != 2;
    if (cpy_r_r25) {
        goto CPyL25;
    } else
        goto CPyL18;
CPyL17: ;
    return 1;
CPyL18: ;
    if (likely(cpy_r_literals != Py_None))
        cpy_r_r26 = cpy_r_literals;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_default_init_value_for_field_specifier", 866, CPyStatic_dataclasses___globals, "list", cpy_r_literals);
        goto CPyL26;
    }
    cpy_r_r27 = CPyList_GetItemShort(cpy_r_r26, 0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_default_init_value_for_field_specifier", 866, CPyStatic_dataclasses___globals);
        goto CPyL26;
    }
    if (unlikely(!PyBool_Check(cpy_r_r27))) {
        CPy_TypeError("bool", cpy_r_r27); cpy_r_r28 = 2;
    } else
        cpy_r_r28 = cpy_r_r27 == Py_True;
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_default_init_value_for_field_specifier", 866, CPyStatic_dataclasses___globals);
        goto CPyL26;
    }
    CPy_DECREF(cpy_r_literals);
    return cpy_r_r28;
CPyL22: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL23: ;
    CPy_DECREF(cpy_r_specifier_type);
    goto CPyL5;
CPyL24: ;
    CPy_DECREF(cpy_r_parameter);
    goto CPyL9;
CPyL25: ;
    CPy_DECREF(cpy_r_literals);
    goto CPyL17;
CPyL26: ;
    CPy_DecRef(cpy_r_literals);
    goto CPyL22;
}

PyObject *CPyPy_dataclasses___DataclassTransformer____get_default_init_value_for_field_specifier(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"call", 0};
    static CPyArg_Parser parser = {"O:_get_default_init_value_for_field_specifier", kwlist, 0};
    PyObject *obj_call;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_call)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    PyObject *arg_call;
    if (likely(PyObject_TypeCheck(obj_call, CPyType_nodes___Expression)))
        arg_call = obj_call;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_call); 
        goto fail;
    }
    char retval = CPyDef_dataclasses___DataclassTransformer____get_default_init_value_for_field_specifier(arg_self, arg_call);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_default_init_value_for_field_specifier", 844, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses___DataclassTransformer____infer_dataclass_attr_init_type(PyObject *cpy_r_self, PyObject *cpy_r_sym, PyObject *cpy_r_name, PyObject *cpy_r_context) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_default;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_t;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_setter;
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
    PyObject *cpy_r_super_info;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
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
    PyObject *cpy_r_setter_type;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    CPyPtr cpy_r_r60;
    CPyPtr cpy_r_r61;
    CPyPtr cpy_r_r62;
    CPyPtr cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
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
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_sym, CPyType_nodes___SymbolTableNode, 2, mypy___nodes___SymbolTableNodeObject, PyObject *); /* type */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 875, CPyStatic_dataclasses___globals);
        goto CPyL64;
    }
CPyL1: ;
    cpy_r_default = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_sym)->_implicit;
    if (!cpy_r_r1) goto CPyL3;
CPyL2: ;
    return cpy_r_default;
CPyL3: ;
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_sym, CPyType_nodes___SymbolTableNode, 2, mypy___nodes___SymbolTableNodeObject, PyObject *); /* type */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 878, CPyStatic_dataclasses___globals);
        goto CPyL65;
    }
CPyL4: ;
    cpy_r_r3 = CPyDef_types___get_proper_type(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 878, CPyStatic_dataclasses___globals);
        goto CPyL65;
    }
    cpy_r_t = cpy_r_r3;
    cpy_r_r4 = (PyObject *)CPyType_types___Instance;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (cpy_r_r7) {
        goto CPyL7;
    } else
        goto CPyL66;
CPyL6: ;
    return cpy_r_default;
CPyL7: ;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r8 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 886, CPyStatic_dataclasses___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL67;
    }
    cpy_r_r9 = ((mypy___types___InstanceObject *)cpy_r_r8)->_type;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyStatics[793]; /* '__set__' */
    cpy_r_r11 = CPyDef_nodes___TypeInfo___get(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 886, CPyStatic_dataclasses___globals);
        goto CPyL67;
    }
    cpy_r_setter = cpy_r_r11;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_setter != cpy_r_r12;
    if (!cpy_r_r13) goto CPyL68;
    if (likely(cpy_r_setter != Py_None))
        cpy_r_r14 = cpy_r_setter;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 888, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode", cpy_r_setter);
        goto CPyL69;
    }
    cpy_r_r15 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r14)->_node;
    cpy_r_r16 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL70;
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r20 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 889, CPyStatic_dataclasses___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL69;
    }
    cpy_r_r21 = ((mypy___types___InstanceObject *)cpy_r_r20)->_type;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyStatics[793]; /* '__set__' */
    cpy_r_r23 = CPyDef_nodes___TypeInfo___get_containing_type_info(cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 889, CPyStatic_dataclasses___globals);
        goto CPyL69;
    }
    cpy_r_super_info = cpy_r_r23;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_super_info != cpy_r_r24;
    if (!cpy_r_r25) goto CPyL71;
    CPy_INCREF(cpy_r_super_info);
    if (likely(cpy_r_super_info != Py_None))
        cpy_r_r26 = cpy_r_super_info;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 889, CPyStatic_dataclasses___globals, "mypy.nodes.TypeInfo", cpy_r_super_info);
        goto CPyL72;
    }
    cpy_r_r27 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 889, CPyStatic_dataclasses___globals);
        goto CPyL72;
    }
    if (cpy_r_r27) {
        goto CPyL20;
    } else
        goto CPyL71;
CPyL18: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 890, CPyStatic_dataclasses___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL20: ;
    CPy_INCREF(cpy_r_setter);
    if (likely(cpy_r_setter != Py_None))
        cpy_r_r29 = cpy_r_setter;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 891, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode", cpy_r_setter);
        goto CPyL72;
    }
    cpy_r_r30 = CPY_GET_ATTR(cpy_r_r29, CPyType_nodes___SymbolTableNode, 2, mypy___nodes___SymbolTableNodeObject, PyObject *); /* type */
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 891, CPyStatic_dataclasses___globals);
        goto CPyL72;
    }
CPyL22: ;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_r30 != cpy_r_r31;
    CPy_DECREF(cpy_r_r30);
    if (!cpy_r_r32) goto CPyL73;
    if (likely(cpy_r_setter != Py_None))
        cpy_r_r33 = cpy_r_setter;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 893, CPyStatic_dataclasses___globals, "mypy.nodes.SymbolTableNode", cpy_r_setter);
        goto CPyL74;
    }
    cpy_r_r34 = CPY_GET_ATTR(cpy_r_r33, CPyType_nodes___SymbolTableNode, 2, mypy___nodes___SymbolTableNodeObject, PyObject *); /* type */
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 893, CPyStatic_dataclasses___globals);
        goto CPyL74;
    }
CPyL25: ;
    if (likely(cpy_r_r34 != Py_None))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 893, CPyStatic_dataclasses___globals, "mypy.types.Type", cpy_r_r34);
        goto CPyL74;
    }
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r36 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 893, CPyStatic_dataclasses___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL75;
    }
    cpy_r_r37 = ((mypy___types___InstanceObject *)cpy_r_r36)->_type;
    CPy_INCREF(cpy_r_r37);
    if (likely(cpy_r_super_info != Py_None))
        cpy_r_r38 = cpy_r_super_info;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 893, CPyStatic_dataclasses___globals, "mypy.nodes.TypeInfo", cpy_r_super_info);
        goto CPyL76;
    }
    cpy_r_r39 = CPyDef_typeops___map_type_from_supertype(cpy_r_r35, cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 893, CPyStatic_dataclasses___globals);
        goto CPyL67;
    }
    cpy_r_r40 = CPyDef_types___get_proper_type(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 892, CPyStatic_dataclasses___globals);
        goto CPyL67;
    }
    if (likely(cpy_r_r40 != Py_None))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 892, CPyStatic_dataclasses___globals, "mypy.types.ProperType", cpy_r_r40);
        goto CPyL67;
    }
    cpy_r_setter_type = cpy_r_r41;
    goto CPyL34;
CPyL32: ;
    cpy_r_r42 = NULL;
    cpy_r_r43 = NULL;
    cpy_r_r44 = CPY_INT_TAG;
    cpy_r_r45 = CPY_INT_TAG;
    cpy_r_r46 = CPyDef_types___AnyType(2, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 896, CPyStatic_dataclasses___globals);
        goto CPyL64;
    }
    return cpy_r_r46;
CPyL34: ;
    cpy_r_r47 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r48 = (CPyPtr)&((PyObject *)cpy_r_setter_type)->ob_type;
    cpy_r_r49 = *(PyObject * *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 == cpy_r_r47;
    if (!cpy_r_r50) goto CPyL77;
    if (likely(Py_TYPE(cpy_r_setter_type) == CPyType_types___CallableType))
        cpy_r_r51 = cpy_r_setter_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 897, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_setter_type);
        goto CPyL78;
    }
    cpy_r_r52 = ((mypy___types___CallableTypeObject *)cpy_r_r51)->_arg_kinds;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r53 == NULL)) {
        goto CPyL79;
    } else
        goto CPyL39;
CPyL37: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r54 = 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 898, CPyStatic_dataclasses___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL39: ;
    cpy_r_r55 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r55 == NULL)) {
        goto CPyL80;
    } else
        goto CPyL42;
CPyL40: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r56 = 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 899, CPyStatic_dataclasses___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r57 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r57 == NULL)) {
        goto CPyL81;
    } else
        goto CPyL45;
CPyL43: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r58 = 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 900, CPyStatic_dataclasses___globals);
        goto CPyL64;
    }
    CPy_Unreachable();
CPyL45: ;
    cpy_r_r59 = PyList_New(3);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 897, CPyStatic_dataclasses___globals);
        goto CPyL82;
    }
    cpy_r_r60 = (CPyPtr)&((PyListObject *)cpy_r_r59)->ob_item;
    cpy_r_r61 = *(CPyPtr *)cpy_r_r60;
    CPy_INCREF(cpy_r_r53);
    *(PyObject * *)cpy_r_r61 = cpy_r_r53;
    cpy_r_r62 = cpy_r_r61 + 8;
    CPy_INCREF(cpy_r_r55);
    *(PyObject * *)cpy_r_r62 = cpy_r_r55;
    cpy_r_r63 = cpy_r_r61 + 16;
    CPy_INCREF(cpy_r_r57);
    *(PyObject * *)cpy_r_r63 = cpy_r_r57;
    cpy_r_r64 = PyObject_RichCompare(cpy_r_r52, cpy_r_r59, 2);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 897, CPyStatic_dataclasses___globals);
        goto CPyL78;
    }
    if (unlikely(!PyBool_Check(cpy_r_r64))) {
        CPy_TypeError("bool", cpy_r_r64); cpy_r_r65 = 2;
    } else
        cpy_r_r65 = cpy_r_r64 == Py_True;
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 897, CPyStatic_dataclasses___globals);
        goto CPyL78;
    }
    if (cpy_r_r65) {
        goto CPyL83;
    } else
        goto CPyL77;
CPyL49: ;
    if (likely(Py_TYPE(cpy_r_setter_type) == CPyType_types___CallableType))
        cpy_r_r66 = cpy_r_setter_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 902, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_setter_type);
        goto CPyL84;
    }
    cpy_r_r67 = ((mypy___types___CallableTypeObject *)cpy_r_r66)->_arg_types;
    cpy_r_r68 = CPyList_GetItemShort(cpy_r_r67, 4);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 902, CPyStatic_dataclasses___globals);
        goto CPyL84;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r68, CPyType_types___Type)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 902, CPyStatic_dataclasses___globals, "mypy.types.Type", cpy_r_r68);
        goto CPyL84;
    }
    CPy_DECREF(cpy_r_setter_type);
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r70 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 902, CPyStatic_dataclasses___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL85;
    }
    cpy_r_r71 = CPyDef_expandtype___expand_type_by_instance(cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 902, CPyStatic_dataclasses___globals);
        goto CPyL64;
    }
    return cpy_r_r71;
CPyL55: ;
    cpy_r_r72 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = CPyStatics[4521]; /* 'Unsupported signature for "__set__" in "' */
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r74 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 905, CPyStatic_dataclasses___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL86;
    }
    cpy_r_r75 = ((mypy___types___InstanceObject *)cpy_r_r74)->_type;
    CPy_INCREF(cpy_r_r75);
    CPy_DECREF(cpy_r_t);
    cpy_r_r76 = CPY_GET_ATTR(cpy_r_r75, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 905, CPyStatic_dataclasses___globals);
        goto CPyL87;
    }
CPyL57: ;
    cpy_r_r77 = CPyStatics[178]; /* '"' */
    cpy_r_r78 = CPyStr_Build(3, cpy_r_r73, cpy_r_r76, cpy_r_r77);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 905, CPyStatic_dataclasses___globals);
        goto CPyL87;
    }
    cpy_r_r79 = 2;
    cpy_r_r80 = 2;
    cpy_r_r81 = NULL;
    cpy_r_r82 = CPY_GET_METHOD_TRAIT(cpy_r_r72, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r72, cpy_r_r78, cpy_r_context, cpy_r_r79, cpy_r_r80, cpy_r_r81); /* fail */
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 904, CPyStatic_dataclasses___globals);
        goto CPyL65;
    } else
        goto CPyL63;
CPyL59: ;
    cpy_r_r83 = ((mypy___plugins___dataclasses___DataclassTransformerObject *)cpy_r_self)->__api;
    CPy_INCREF(cpy_r_r83);
    cpy_r_r84 = CPyStatics[4522]; /* 'Unsupported "__set__" in "' */
    if (likely(Py_TYPE(cpy_r_t) == CPyType_types___Instance))
        cpy_r_r85 = cpy_r_t;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 908, CPyStatic_dataclasses___globals, "mypy.types.Instance", cpy_r_t);
        goto CPyL88;
    }
    cpy_r_r86 = ((mypy___types___InstanceObject *)cpy_r_r85)->_type;
    CPy_INCREF(cpy_r_r86);
    CPy_DECREF(cpy_r_t);
    cpy_r_r87 = CPY_GET_ATTR(cpy_r_r86, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 908, CPyStatic_dataclasses___globals);
        goto CPyL89;
    }
CPyL61: ;
    cpy_r_r88 = CPyStatics[178]; /* '"' */
    cpy_r_r89 = CPyStr_Build(3, cpy_r_r84, cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 908, CPyStatic_dataclasses___globals);
        goto CPyL89;
    }
    cpy_r_r90 = 2;
    cpy_r_r91 = 2;
    cpy_r_r92 = NULL;
    cpy_r_r93 = CPY_GET_METHOD_TRAIT(cpy_r_r83, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r83, cpy_r_r89, cpy_r_context, cpy_r_r90, cpy_r_r91, cpy_r_r92); /* fail */
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r93 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 908, CPyStatic_dataclasses___globals);
        goto CPyL65;
    }
CPyL63: ;
    return cpy_r_default;
CPyL64: ;
    cpy_r_r94 = NULL;
    return cpy_r_r94;
CPyL65: ;
    CPy_DecRef(cpy_r_default);
    goto CPyL64;
CPyL66: ;
    CPy_DECREF(cpy_r_t);
    goto CPyL6;
CPyL67: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_t);
    goto CPyL64;
CPyL68: ;
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_setter);
    goto CPyL63;
CPyL69: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_setter);
    goto CPyL64;
CPyL70: ;
    CPy_DECREF(cpy_r_setter);
    goto CPyL59;
CPyL71: ;
    CPy_DECREF(cpy_r_default);
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_setter);
    CPy_DECREF(cpy_r_super_info);
    goto CPyL18;
CPyL72: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_setter);
    CPy_DecRef(cpy_r_super_info);
    goto CPyL64;
CPyL73: ;
    CPy_DECREF(cpy_r_default);
    CPy_DECREF(cpy_r_t);
    CPy_DECREF(cpy_r_setter);
    CPy_DECREF(cpy_r_super_info);
    goto CPyL32;
CPyL74: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_super_info);
    goto CPyL64;
CPyL75: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_super_info);
    CPy_DecRef(cpy_r_r35);
    goto CPyL64;
CPyL76: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r37);
    goto CPyL64;
CPyL77: ;
    CPy_DECREF(cpy_r_setter_type);
    goto CPyL55;
CPyL78: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_setter_type);
    goto CPyL64;
CPyL79: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_setter_type);
    CPy_DecRef(cpy_r_r52);
    goto CPyL37;
CPyL80: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_setter_type);
    CPy_DecRef(cpy_r_r52);
    goto CPyL40;
CPyL81: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_setter_type);
    CPy_DecRef(cpy_r_r52);
    goto CPyL43;
CPyL82: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_setter_type);
    CPy_DecRef(cpy_r_r52);
    goto CPyL64;
CPyL83: ;
    CPy_DECREF(cpy_r_default);
    goto CPyL49;
CPyL84: ;
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_setter_type);
    goto CPyL64;
CPyL85: ;
    CPy_DecRef(cpy_r_r69);
    goto CPyL64;
CPyL86: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r72);
    goto CPyL64;
CPyL87: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_r72);
    goto CPyL64;
CPyL88: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_t);
    CPy_DecRef(cpy_r_r83);
    goto CPyL64;
CPyL89: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_r83);
    goto CPyL64;
}

PyObject *CPyPy_dataclasses___DataclassTransformer____infer_dataclass_attr_init_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"sym", "name", "context", 0};
    static CPyArg_Parser parser = {"OOO:_infer_dataclass_attr_init_type", kwlist, 0};
    PyObject *obj_sym;
    PyObject *obj_name;
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_sym, &obj_name, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_dataclasses___DataclassTransformer))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.dataclasses.DataclassTransformer", obj_self); 
        goto fail;
    }
    PyObject *arg_sym;
    if (likely(Py_TYPE(obj_sym) == CPyType_nodes___SymbolTableNode))
        arg_sym = obj_sym;
    else {
        CPy_TypeError("mypy.nodes.SymbolTableNode", obj_sym); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses___DataclassTransformer____infer_dataclass_attr_init_type(arg_self, arg_sym, arg_name, arg_context);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_infer_dataclass_attr_init_type", 868, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___add_dataclass_tag(PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_dataclass_tag", 915, CPyStatic_dataclasses___globals);
        goto CPyL4;
    }
    cpy_r_r1 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_metadata;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "add_dataclass_tag", "TypeInfo", "metadata", 915, CPyStatic_dataclasses___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = CPyStatics[4507]; /* 'dataclass_tag' */
    cpy_r_r3 = CPyDict_SetItem(cpy_r_r1, cpy_r_r2, cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_dataclass_tag", 915, CPyStatic_dataclasses___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_dataclasses___add_dataclass_tag(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:add_dataclass_tag", kwlist, 0};
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
    char retval = CPyDef_dataclasses___add_dataclass_tag(arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "add_dataclass_tag", 913, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___dataclass_tag_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "dataclass_tag_callback", 924, CPyStatic_dataclasses___globals);
        goto CPyL4;
    }
    if (likely(Py_TYPE(cpy_r_r0) == CPyType_nodes___ClassDef))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "dataclass_tag_callback", 924, CPyStatic_dataclasses___globals, "mypy.nodes.ClassDef", cpy_r_r0);
        goto CPyL4;
    }
    cpy_r_r2 = ((mypy___nodes___ClassDefObject *)cpy_r_r1)->_info;
    CPy_INCREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = CPyDef_dataclasses___add_dataclass_tag(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "dataclass_tag_callback", 924, CPyStatic_dataclasses___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_dataclasses___dataclass_tag_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:dataclass_tag_callback", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    char retval = CPyDef_dataclasses___dataclass_tag_callback(arg_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "dataclass_tag_callback", 918, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___dataclass_class_maker_callback(PyObject *cpy_r_ctx) {
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
    PyObject *cpy_r_transformer;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "dataclass_class_maker_callback", 930, CPyStatic_dataclasses___globals);
        goto CPyL12;
    }
    if (likely(Py_TYPE(cpy_r_r0) == CPyType_nodes___ClassDef))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "dataclass_class_maker_callback", 930, CPyStatic_dataclasses___globals, "mypy.nodes.ClassDef", cpy_r_r0);
        goto CPyL12;
    }
    cpy_r_r2 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "dataclass_class_maker_callback", 930, CPyStatic_dataclasses___globals);
        goto CPyL13;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r2, CPyType_nodes___Expression)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "dataclass_class_maker_callback", 930, CPyStatic_dataclasses___globals, "mypy.nodes.Expression", cpy_r_r2);
        goto CPyL13;
    }
    cpy_r_r4 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "dataclass_class_maker_callback", 930, CPyStatic_dataclasses___globals);
        goto CPyL14;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r4, CPyType_nodes___Expression)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "dataclass_class_maker_callback", 930, CPyStatic_dataclasses___globals, "mypy.nodes.Expression", cpy_r_r4);
        goto CPyL14;
    }
    cpy_r_r6 = CPyDef_dataclasses____get_transform_spec(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "dataclass_class_maker_callback", 930, CPyStatic_dataclasses___globals);
        goto CPyL14;
    }
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "dataclass_class_maker_callback", 930, CPyStatic_dataclasses___globals);
        goto CPyL15;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "dataclass_class_maker_callback", 930, CPyStatic_dataclasses___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r7);
        goto CPyL15;
    }
    cpy_r_r9 = CPyDef_dataclasses___DataclassTransformer(cpy_r_r1, cpy_r_r3, cpy_r_r6, cpy_r_r8);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "dataclass_class_maker_callback", 929, CPyStatic_dataclasses___globals);
        goto CPyL12;
    }
    cpy_r_transformer = cpy_r_r9;
    cpy_r_r10 = CPyDef_dataclasses___DataclassTransformer___transform(cpy_r_transformer);
    CPy_DECREF(cpy_r_transformer);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "dataclass_class_maker_callback", 932, CPyStatic_dataclasses___globals);
        goto CPyL12;
    }
    return cpy_r_r10;
CPyL12: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r6);
    goto CPyL12;
}

PyObject *CPyPy_dataclasses___dataclass_class_maker_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:dataclass_class_maker_callback", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    char retval = CPyDef_dataclasses___dataclass_class_maker_callback(arg_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "dataclass_class_maker_callback", 927, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses____get_transform_spec(PyObject *cpy_r_reason) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_spec;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyDef_dataclasses____is_dataclasses_decorator(cpy_r_reason);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_transform_spec", 944, CPyStatic_dataclasses___globals);
        goto CPyL12;
    }
    if (!cpy_r_r0) goto CPyL6;
    cpy_r_r1 = CPyStatic_dataclasses____TRANSFORM_SPEC_FOR_DATACLASSES;
    if (likely(cpy_r_r1 != NULL)) goto CPyL5;
    PyErr_SetString(PyExc_NameError, "value for final name \"_TRANSFORM_SPEC_FOR_DATACLASSES\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_transform_spec", 945, CPyStatic_dataclasses___globals);
        goto CPyL12;
    }
    CPy_Unreachable();
CPyL5: ;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r3 = CPyDef_semanal_shared___find_dataclass_transform_spec(cpy_r_reason);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_transform_spec", 947, CPyStatic_dataclasses___globals);
        goto CPyL12;
    }
    cpy_r_spec = cpy_r_r3;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_spec != cpy_r_r4;
    if (cpy_r_r5) {
        goto CPyL10;
    } else
        goto CPyL13;
CPyL8: ;
    PyErr_SetString(PyExc_AssertionError, "trying to find dataclass transform spec, but reason is neither dataclasses.dataclass nor decorated with typing.dataclass_transform");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_transform_spec", 948, CPyStatic_dataclasses___globals);
        goto CPyL12;
    }
    CPy_Unreachable();
CPyL10: ;
    if (likely(cpy_r_spec != Py_None))
        cpy_r_r7 = cpy_r_spec;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_transform_spec", 952, CPyStatic_dataclasses___globals, "mypy.nodes.DataclassTransformSpec", cpy_r_spec);
        goto CPyL12;
    }
    return cpy_r_r7;
CPyL12: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL13: ;
    CPy_DECREF(cpy_r_spec);
    goto CPyL8;
}

PyObject *CPyPy_dataclasses____get_transform_spec(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"reason", 0};
    static CPyArg_Parser parser = {"O:_get_transform_spec", kwlist, 0};
    PyObject *obj_reason;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_reason)) {
        return NULL;
    }
    PyObject *arg_reason;
    if (likely(PyObject_TypeCheck(obj_reason, CPyType_nodes___Expression)))
        arg_reason = obj_reason;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_reason); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses____get_transform_spec(arg_reason);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_transform_spec", 935, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses____is_dataclasses_decorator(PyObject *cpy_r_node) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
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
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL19;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___CallExpr))
        cpy_r_r4 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_is_dataclasses_decorator", 957, CPyStatic_dataclasses___globals, "mypy.nodes.CallExpr", cpy_r_node);
        goto CPyL18;
    }
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_r4)->_callee;
    CPy_INCREF(cpy_r_r5);
    cpy_r_node = cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL5;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL6;
CPyL5: ;
    cpy_r_r11 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    cpy_r_r10 = cpy_r_r14;
CPyL6: ;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r15 = cpy_r_r10;
    goto CPyL9;
CPyL8: ;
    cpy_r_r16 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    cpy_r_r15 = cpy_r_r19;
CPyL9: ;
    if (!cpy_r_r15) goto CPyL20;
    if (likely((Py_TYPE(cpy_r_node) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_node) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_node) == CPyType_nodes___RefExpr)))
        cpy_r_r20 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_is_dataclasses_decorator", 959, CPyStatic_dataclasses___globals, "mypy.nodes.RefExpr", cpy_r_node);
        goto CPyL18;
    }
    cpy_r_r21 = CPY_GET_ATTR(cpy_r_r20, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_is_dataclasses_decorator", 959, CPyStatic_dataclasses___globals);
        goto CPyL18;
    }
CPyL12: ;
    cpy_r_r22 = CPyStatic_dataclasses___dataclass_makers;
    if (unlikely(cpy_r_r22 == NULL)) {
        goto CPyL21;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"dataclass_makers\" was not set");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_is_dataclasses_decorator", 959, CPyStatic_dataclasses___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r24 = PySet_Contains(cpy_r_r22, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_is_dataclasses_decorator", 959, CPyStatic_dataclasses___globals);
        goto CPyL18;
    }
    cpy_r_r26 = cpy_r_r24;
    return cpy_r_r26;
CPyL17: ;
    return 0;
CPyL18: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
CPyL19: ;
    CPy_INCREF(cpy_r_node);
    goto CPyL3;
CPyL20: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL13;
}

PyObject *CPyPy_dataclasses____is_dataclasses_decorator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"node", 0};
    static CPyArg_Parser parser = {"O:_is_dataclasses_decorator", kwlist, 0};
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
    char retval = CPyDef_dataclasses____is_dataclasses_decorator(arg_node);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_is_dataclasses_decorator", 955, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses____has_direct_dataclass_transform_metaclass(PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_declared_metaclass;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_has_direct_dataclass_transform_metaclass", "TypeInfo", "declared_metaclass", 965, CPyStatic_dataclasses___globals);
        goto CPyL8;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = cpy_r_r2;
    goto CPyL7;
CPyL3: ;
    cpy_r_r4 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_declared_metaclass;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_has_direct_dataclass_transform_metaclass", "TypeInfo", "declared_metaclass", 966, CPyStatic_dataclasses___globals);
        goto CPyL8;
    }
CPyL4: ;
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_has_direct_dataclass_transform_metaclass", 966, CPyStatic_dataclasses___globals, "mypy.types.Instance", cpy_r_r4);
        goto CPyL8;
    }
    cpy_r_r6 = ((mypy___types___InstanceObject *)cpy_r_r5)->_type;
    cpy_r_r7 = ((mypy___nodes___TypeInfoObject *)cpy_r_r6)->_dataclass_transform_spec;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "_has_direct_dataclass_transform_metaclass", "TypeInfo", "dataclass_transform_spec", 966, CPyStatic_dataclasses___globals);
        goto CPyL8;
    }
CPyL6: ;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_r7 != cpy_r_r8;
    cpy_r_r3 = cpy_r_r9;
CPyL7: ;
    return cpy_r_r3;
CPyL8: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
}

PyObject *CPyPy_dataclasses____has_direct_dataclass_transform_metaclass(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:_has_direct_dataclass_transform_metaclass", kwlist, 0};
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
    char retval = CPyDef_dataclasses____has_direct_dataclass_transform_metaclass(arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_has_direct_dataclass_transform_metaclass", 963, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses____fail_not_dataclass(PyObject *cpy_r_ctx, PyObject *cpy_r_t, PyObject *cpy_r_parent_t) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_t_name;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_msg;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_pt_name;
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
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    size_t __tmp4840;
    size_t __tmp4841;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 971, CPyStatic_dataclasses___globals);
        goto CPyL27;
    }
    if (likely(Py_TYPE(cpy_r_r0) == CPyType_checker___TypeChecker))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 971, CPyStatic_dataclasses___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r0);
        goto CPyL27;
    }
    __tmp4840 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r1)->vtable, 1);
    cpy_r_r2 = *(PyObject * *)((char *)cpy_r_r1 + __tmp4840);
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 971, CPyStatic_dataclasses___globals);
        goto CPyL27;
    }
CPyL3: ;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_messages___format_type_bare(cpy_r_t, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 971, CPyStatic_dataclasses___globals);
        goto CPyL27;
    }
    cpy_r_t_name = cpy_r_r5;
    cpy_r_r6 = cpy_r_parent_t == cpy_r_t;
    if (!cpy_r_r6) goto CPyL11;
    cpy_r_r7 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r11 = CPyStatics[4523]; /* 'Argument 1 to "replace" has a variable type "' */
    cpy_r_r12 = CPyStatics[4524]; /* '" not bound to a dataclass' */
    cpy_r_r13 = CPyStr_Build(3, cpy_r_r11, cpy_r_t_name, cpy_r_r12);
    CPy_DECREF(cpy_r_t_name);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 974, CPyStatic_dataclasses___globals);
        goto CPyL27;
    }
    cpy_r_r14 = cpy_r_r13;
    goto CPyL10;
CPyL8: ;
    cpy_r_r15 = CPyStatics[4525]; /* 'Argument 1 to "replace" has incompatible type "' */
    cpy_r_r16 = CPyStatics[4526]; /* '"; expected a dataclass' */
    cpy_r_r17 = CPyStr_Build(3, cpy_r_r15, cpy_r_t_name, cpy_r_r16);
    CPy_DECREF(cpy_r_t_name);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 976, CPyStatic_dataclasses___globals);
        goto CPyL27;
    }
    cpy_r_r14 = cpy_r_r17;
CPyL10: ;
    cpy_r_msg = cpy_r_r14;
    goto CPyL21;
CPyL11: ;
    cpy_r_r18 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 979, CPyStatic_dataclasses___globals);
        goto CPyL28;
    }
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_checker___TypeChecker))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 979, CPyStatic_dataclasses___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r18);
        goto CPyL28;
    }
    __tmp4841 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r19)->vtable, 1);
    cpy_r_r20 = *(PyObject * *)((char *)cpy_r_r19 + __tmp4841);
    if (unlikely(cpy_r_r20 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r20);
    }
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 979, CPyStatic_dataclasses___globals);
        goto CPyL28;
    }
CPyL14: ;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_messages___format_type_bare(cpy_r_parent_t, cpy_r_r20, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 979, CPyStatic_dataclasses___globals);
        goto CPyL28;
    }
    cpy_r_pt_name = cpy_r_r23;
    cpy_r_r24 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL18;
    cpy_r_r28 = CPyStatics[4527]; /* 'Argument 1 to "replace" has type "' */
    cpy_r_r29 = CPyStatics[4424]; /* '" whose item "' */
    cpy_r_r30 = CPyStatics[4528]; /* '" is not bound to a dataclass' */
    cpy_r_r31 = CPyStr_Build(5, cpy_r_r28, cpy_r_pt_name, cpy_r_r29, cpy_r_t_name, cpy_r_r30);
    CPy_DECREF(cpy_r_pt_name);
    CPy_DECREF(cpy_r_t_name);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 981, CPyStatic_dataclasses___globals);
        goto CPyL27;
    }
    cpy_r_r32 = cpy_r_r31;
    goto CPyL20;
CPyL18: ;
    cpy_r_r33 = CPyStatics[4525]; /* 'Argument 1 to "replace" has incompatible type "' */
    cpy_r_r34 = CPyStatics[4424]; /* '" whose item "' */
    cpy_r_r35 = CPyStatics[4529]; /* '" is not a dataclass' */
    cpy_r_r36 = CPyStr_Build(5, cpy_r_r33, cpy_r_pt_name, cpy_r_r34, cpy_r_t_name, cpy_r_r35);
    CPy_DECREF(cpy_r_pt_name);
    CPy_DECREF(cpy_r_t_name);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 983, CPyStatic_dataclasses___globals);
        goto CPyL27;
    }
    cpy_r_r32 = cpy_r_r36;
CPyL20: ;
    cpy_r_msg = cpy_r_r32;
CPyL21: ;
    cpy_r_r37 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 986, CPyStatic_dataclasses___globals);
        goto CPyL29;
    }
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_checker___TypeChecker))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 986, CPyStatic_dataclasses___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r37);
        goto CPyL29;
    }
    cpy_r_r39 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 986, CPyStatic_dataclasses___globals);
        goto CPyL30;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r39, CPyType_nodes___Context)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 986, CPyStatic_dataclasses___globals, "mypy.nodes.Context", cpy_r_r39);
        goto CPyL30;
    }
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPY_GET_METHOD_TRAIT(cpy_r_r38, CPyType_plugin___CheckerPluginInterface, 1, mypy___plugin___CheckerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *))(cpy_r_r38, cpy_r_msg, cpy_r_r40, cpy_r_r41); /* fail */
    CPy_DECREF(cpy_r_msg);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 986, CPyStatic_dataclasses___globals);
        goto CPyL27;
    }
    return 1;
CPyL27: ;
    cpy_r_r43 = 2;
    return cpy_r_r43;
CPyL28: ;
    CPy_DecRef(cpy_r_t_name);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_msg);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_msg);
    CPy_DecRef(cpy_r_r38);
    goto CPyL27;
}

PyObject *CPyPy_dataclasses____fail_not_dataclass(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "t", "parent_t", 0};
    static CPyArg_Parser parser = {"OOO:_fail_not_dataclass", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_t;
    PyObject *obj_parent_t;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_t, &obj_parent_t)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_t;
    if (likely(PyObject_TypeCheck(obj_t, CPyType_types___Type)))
        arg_t = obj_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_t); 
        goto fail;
    }
    PyObject *arg_parent_t;
    if (likely(PyObject_TypeCheck(obj_parent_t, CPyType_types___Type)))
        arg_parent_t = obj_parent_t;
    else {
        CPy_TypeError("mypy.types.Type", obj_parent_t); 
        goto fail;
    }
    char retval = CPyDef_dataclasses____fail_not_dataclass(arg_ctx, arg_t, arg_parent_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_fail_not_dataclass", 970, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses____get_expanded_dataclasses_fields(PyObject *cpy_r_ctx, PyObject *cpy_r_typ, PyObject *cpy_r_display_typ, PyObject *cpy_r_parent_typ) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_ret;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_item_types;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_replace_sym;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyPtr cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_replace_sig;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyPtr cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyPtr cpy_r_r87;
    CPyPtr cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    cpy_r_r0 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    return cpy_r_r4;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    if (!cpy_r_r8) goto CPyL23;
    cpy_r_r9 = PyList_New(0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1000, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    cpy_r_ret = cpy_r_r9;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r10 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1001, CPyStatic_dataclasses___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL63;
    }
    cpy_r_r11 = CPyDef_types___UnionType___relevant_items(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1001, CPyStatic_dataclasses___globals);
        goto CPyL63;
    }
    cpy_r_r12 = 0;
CPyL7: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL64;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_r11, cpy_r_r12);
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_types___Type)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1001, CPyStatic_dataclasses___globals, "mypy.types.Type", cpy_r_r17);
        goto CPyL65;
    }
    cpy_r_item = cpy_r_r18;
    cpy_r_r19 = CPyDef_types___get_proper_type(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1002, CPyStatic_dataclasses___globals);
        goto CPyL65;
    }
    if (likely(cpy_r_r19 != Py_None))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1002, CPyStatic_dataclasses___globals, "mypy.types.ProperType", cpy_r_r19);
        goto CPyL65;
    }
    cpy_r_item = cpy_r_r20;
    CPy_INCREF(cpy_r_item);
    if (likely(PyObject_TypeCheck(cpy_r_item, CPyType_types___ProperType)))
        cpy_r_r21 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1003, CPyStatic_dataclasses___globals, "mypy.types.ProperType", cpy_r_item);
        goto CPyL66;
    }
    if (likely(PyObject_TypeCheck(cpy_r_item, CPyType_types___ProperType)))
        cpy_r_r22 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1003, CPyStatic_dataclasses___globals, "mypy.types.ProperType", cpy_r_item);
        goto CPyL67;
    }
    cpy_r_r23 = CPyDef_dataclasses____get_expanded_dataclasses_fields(cpy_r_ctx, cpy_r_r21, cpy_r_r22, cpy_r_parent_typ);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1003, CPyStatic_dataclasses___globals);
        goto CPyL65;
    }
    cpy_r_item_types = cpy_r_r23;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_ret != cpy_r_r24;
    if (!cpy_r_r25) goto CPyL68;
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_item_types != cpy_r_r26;
    if (!cpy_r_r27) goto CPyL68;
    if (likely(cpy_r_item_types != Py_None))
        cpy_r_r28 = cpy_r_item_types;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1005, CPyStatic_dataclasses___globals, "list", cpy_r_item_types);
        goto CPyL65;
    }
    cpy_r_r29 = PyNumber_InPlaceAdd(cpy_r_ret, cpy_r_r28);
    CPy_DECREF(cpy_r_ret);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1005, CPyStatic_dataclasses___globals);
        goto CPyL69;
    }
    if (PyList_Check(cpy_r_r29))
        cpy_r_r30 = cpy_r_r29;
    else {
        cpy_r_r30 = NULL;
    }
    if (cpy_r_r30 != NULL) goto __LL4842;
    if (cpy_r_r29 == Py_None)
        cpy_r_r30 = cpy_r_r29;
    else {
        cpy_r_r30 = NULL;
    }
    if (cpy_r_r30 != NULL) goto __LL4842;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1005, CPyStatic_dataclasses___globals, "list or None", cpy_r_r29);
    goto CPyL69;
__LL4842: ;
    cpy_r_ret = cpy_r_r30;
    goto CPyL21;
CPyL20: ;
    cpy_r_r31 = Py_None;
    CPy_INCREF(cpy_r_r31);
    cpy_r_ret = cpy_r_r31;
CPyL21: ;
    cpy_r_r32 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r32;
    goto CPyL7;
CPyL22: ;
    return cpy_r_ret;
CPyL23: ;
    cpy_r_r33 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    if (!cpy_r_r36) goto CPyL29;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r37 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1011, CPyStatic_dataclasses___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL62;
    }
    cpy_r_r38 = ((mypy___types___TypeVarTypeObject *)cpy_r_r37)->_upper_bound;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyDef_types___get_proper_type(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1011, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    if (likely(cpy_r_r39 != Py_None))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1011, CPyStatic_dataclasses___globals, "mypy.types.ProperType", cpy_r_r39);
        goto CPyL62;
    }
    cpy_r_r41 = CPyDef_dataclasses____get_expanded_dataclasses_fields(cpy_r_ctx, cpy_r_r40, cpy_r_display_typ, cpy_r_parent_typ);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1010, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    return cpy_r_r41;
CPyL29: ;
    cpy_r_r42 = (PyObject *)CPyType_types___Instance;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    if (!cpy_r_r45) goto CPyL60;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r46 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1014, CPyStatic_dataclasses___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL62;
    }
    cpy_r_r47 = ((mypy___types___InstanceObject *)cpy_r_r46)->_type;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = CPyStatics[4503]; /* '__mypy-replace' */
    cpy_r_r49 = CPyDef_nodes___TypeInfo___get_method(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1014, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    cpy_r_replace_sym = cpy_r_r49;
    cpy_r_r50 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r51 = cpy_r_replace_sym == cpy_r_r50;
    if (cpy_r_r51) {
        goto CPyL70;
    } else
        goto CPyL35;
CPyL33: ;
    cpy_r_r52 = CPyDef_dataclasses____fail_not_dataclass(cpy_r_ctx, cpy_r_display_typ, cpy_r_parent_typ);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1016, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    cpy_r_r53 = Py_None;
    CPy_INCREF(cpy_r_r53);
    return cpy_r_r53;
CPyL35: ;
    if ((Py_TYPE(cpy_r_replace_sym) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_replace_sym) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_replace_sym) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r54 = cpy_r_replace_sym;
    else {
        cpy_r_r54 = NULL;
    }
    if (cpy_r_r54 != NULL) goto __LL4843;
    if (Py_TYPE(cpy_r_replace_sym) == CPyType_nodes___Decorator)
        cpy_r_r54 = cpy_r_replace_sym;
    else {
        cpy_r_r54 = NULL;
    }
    if (cpy_r_r54 != NULL) goto __LL4843;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1018, CPyStatic_dataclasses___globals, "union[mypy.nodes.FuncBase, mypy.nodes.Decorator]", cpy_r_replace_sym);
    goto CPyL62;
__LL4843: ;
    cpy_r_r55 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r56 = (CPyPtr)&((PyObject *)cpy_r_r54)->ob_type;
    cpy_r_r57 = *(PyObject * *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 == cpy_r_r55;
    if (!cpy_r_r58) goto CPyL38;
    cpy_r_r59 = cpy_r_r58;
    goto CPyL39;
CPyL38: ;
    cpy_r_r60 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r61 = (CPyPtr)&((PyObject *)cpy_r_r54)->ob_type;
    cpy_r_r62 = *(PyObject * *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 == cpy_r_r60;
    cpy_r_r59 = cpy_r_r63;
CPyL39: ;
    if (!cpy_r_r59) goto CPyL41;
    cpy_r_r64 = cpy_r_r59;
    goto CPyL42;
CPyL41: ;
    cpy_r_r65 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r66 = (CPyPtr)&((PyObject *)cpy_r_r54)->ob_type;
    cpy_r_r67 = *(PyObject * *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 == cpy_r_r65;
    cpy_r_r64 = cpy_r_r68;
CPyL42: ;
    if (!cpy_r_r64) goto CPyL45;
    if (likely((Py_TYPE(cpy_r_r54) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r54) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_r54) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r69 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1018, CPyStatic_dataclasses___globals, "mypy.nodes.FuncBase", cpy_r_r54);
        goto CPyL62;
    }
    cpy_r_r70 = ((mypy___nodes___FuncBaseObject *)cpy_r_r69)->_type;
    CPy_INCREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r71 = cpy_r_r70;
    goto CPyL48;
CPyL45: ;
    if (likely(Py_TYPE(cpy_r_r54) == CPyType_nodes___Decorator))
        cpy_r_r72 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1018, CPyStatic_dataclasses___globals, "mypy.nodes.Decorator", cpy_r_r54);
        goto CPyL62;
    }
    cpy_r_r73 = CPY_GET_ATTR(cpy_r_r72, CPyType_nodes___Decorator, 10, mypy___nodes___DecoratorObject, PyObject *); /* type */
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1018, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
CPyL47: ;
    cpy_r_r71 = cpy_r_r73;
CPyL48: ;
    cpy_r_replace_sig = cpy_r_r71;
    cpy_r_r74 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r75 = CPy_TypeCheck(cpy_r_replace_sig, cpy_r_r74);
    if (cpy_r_r75) {
        goto CPyL51;
    } else
        goto CPyL71;
CPyL49: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r76 = 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1019, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r77 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r78 = (CPyPtr)&((PyObject *)cpy_r_replace_sig)->ob_type;
    cpy_r_r79 = *(PyObject * *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 == cpy_r_r77;
    if (cpy_r_r80) {
        goto CPyL54;
    } else
        goto CPyL72;
CPyL52: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r81 = 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1020, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL54: ;
    if (likely(Py_TYPE(cpy_r_replace_sig) == CPyType_types___CallableType))
        cpy_r_r82 = cpy_r_replace_sig;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1021, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_replace_sig);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r83 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1021, CPyStatic_dataclasses___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL73;
    }
    cpy_r_r84 = CPyDef_expandtype___expand_type_by_instance(cpy_r_r82, cpy_r_r83);
    CPy_DECREF(cpy_r_r82);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1021, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    if (likely(Py_TYPE(cpy_r_r84) == CPyType_types___CallableType))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1021, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_r84);
        goto CPyL62;
    }
    cpy_r_r86 = PyList_New(1);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1021, CPyStatic_dataclasses___globals);
        goto CPyL74;
    }
    cpy_r_r87 = (CPyPtr)&((PyListObject *)cpy_r_r86)->ob_item;
    cpy_r_r88 = *(CPyPtr *)cpy_r_r87;
    *(PyObject * *)cpy_r_r88 = cpy_r_r85;
    return cpy_r_r86;
CPyL60: ;
    cpy_r_r89 = CPyDef_dataclasses____fail_not_dataclass(cpy_r_ctx, cpy_r_display_typ, cpy_r_parent_typ);
    if (unlikely(cpy_r_r89 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 1023, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    cpy_r_r90 = Py_None;
    CPy_INCREF(cpy_r_r90);
    return cpy_r_r90;
CPyL62: ;
    cpy_r_r91 = NULL;
    return cpy_r_r91;
CPyL63: ;
    CPy_DecRef(cpy_r_ret);
    goto CPyL62;
CPyL64: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL22;
CPyL65: ;
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_r11);
    goto CPyL62;
CPyL66: ;
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_item);
    goto CPyL62;
CPyL67: ;
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r21);
    goto CPyL62;
CPyL68: ;
    CPy_DECREF(cpy_r_ret);
    CPy_DECREF(cpy_r_item_types);
    goto CPyL20;
CPyL69: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL62;
CPyL70: ;
    CPy_DECREF(cpy_r_replace_sym);
    goto CPyL33;
CPyL71: ;
    CPy_DECREF(cpy_r_replace_sig);
    goto CPyL49;
CPyL72: ;
    CPy_DECREF(cpy_r_replace_sig);
    goto CPyL52;
CPyL73: ;
    CPy_DecRef(cpy_r_r82);
    goto CPyL62;
CPyL74: ;
    CPy_DecRef(cpy_r_r85);
    goto CPyL62;
}

PyObject *CPyPy_dataclasses____get_expanded_dataclasses_fields(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "typ", "display_typ", "parent_typ", 0};
    static CPyArg_Parser parser = {"OOOO:_get_expanded_dataclasses_fields", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_typ;
    PyObject *obj_display_typ;
    PyObject *obj_parent_typ;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_typ, &obj_display_typ, &obj_parent_typ)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___ProperType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_typ); 
        goto fail;
    }
    PyObject *arg_display_typ;
    if (likely(PyObject_TypeCheck(obj_display_typ, CPyType_types___ProperType)))
        arg_display_typ = obj_display_typ;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_display_typ); 
        goto fail;
    }
    PyObject *arg_parent_typ;
    if (likely(PyObject_TypeCheck(obj_parent_typ, CPyType_types___ProperType)))
        arg_parent_typ = obj_parent_typ;
    else {
        CPy_TypeError("mypy.types.ProperType", obj_parent_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses____get_expanded_dataclasses_fields(arg_ctx, arg_typ, arg_display_typ, arg_parent_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_get_expanded_dataclasses_fields", 989, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses____meet_replace_sigs(PyObject *cpy_r_sigs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    CPyPtr cpy_r_r21;
    int64_t cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_kind;
    tuple_T2OO cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_sig;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    CPyPtr cpy_r_r54;
    int64_t cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    CPyPtr cpy_r_r58;
    int64_t cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    CPyPtr cpy_r_r62;
    int64_t cpy_r_r63;
    CPyTagged cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_name_2;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_typ_2;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_kind_2;
    tuple_T2OO cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    CPyTagged cpy_r_r76;
    CPyTagged cpy_r_r77;
    CPyTagged cpy_r_r78;
    PyObject *cpy_r_sig_args;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    CPyTagged cpy_r_r85;
    CPyPtr cpy_r_r86;
    int64_t cpy_r_r87;
    CPyTagged cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_name_3;
    char cpy_r_r92;
    CPyTagged cpy_r_r93;
    CPyTagged cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    tuple_T2OO cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    tuple_T2OO cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_sig_typ;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_sig_kind;
    char cpy_r_r104;
    CPyTagged cpy_r_r105;
    CPyTagged cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    tuple_T2OO cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    tuple_T2OO cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_sig2_typ;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_sig2_kind;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    tuple_T2OO cpy_r_r127;
    PyObject *cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    CPyTagged cpy_r_r131;
    CPyTagged cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    CPyTagged cpy_r_r137;
    int64_t cpy_r_r138;
    CPyTagged cpy_r_r139;
    PyObject *cpy_r_r140;
    tuple_T3CIO cpy_r_r141;
    CPyTagged cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    tuple_T2OO cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_typ_3;
    PyObject *cpy_r_r147;
    PyObject *cpy_r__;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    char cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    CPyTagged cpy_r_r153;
    int64_t cpy_r_r154;
    CPyTagged cpy_r_r155;
    PyObject *cpy_r_r156;
    tuple_T3CIO cpy_r_r157;
    CPyTagged cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    tuple_T2OO cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r___2;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_kind_3;
    int32_t cpy_r_r164;
    char cpy_r_r165;
    char cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    CPyTagged cpy_r_r173;
    CPyTagged cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1034, CPyStatic_dataclasses___globals);
        goto CPyL91;
    }
    cpy_r_r1 = CPyList_GetItemShortBorrow(cpy_r_sigs, 0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1036, CPyStatic_dataclasses___globals);
        goto CPyL92;
    }
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_types___CallableType))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1036, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_r1);
        goto CPyL92;
    }
    cpy_r_r3 = ((mypy___types___CallableTypeObject *)cpy_r_r2)->_arg_names;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = 0;
    cpy_r_r5 = CPyList_GetItemShortBorrow(cpy_r_sigs, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1036, CPyStatic_dataclasses___globals);
        goto CPyL93;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_types___CallableType))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1036, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_r5);
        goto CPyL93;
    }
    cpy_r_r7 = ((mypy___types___CallableTypeObject *)cpy_r_r6)->_arg_types;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = 0;
    cpy_r_r9 = CPyList_GetItemShortBorrow(cpy_r_sigs, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1036, CPyStatic_dataclasses___globals);
        goto CPyL94;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_types___CallableType))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1036, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_r9);
        goto CPyL94;
    }
    cpy_r_r11 = ((mypy___types___CallableTypeObject *)cpy_r_r10)->_arg_kinds;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = 0;
CPyL8: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL95;
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r19;
    if (!cpy_r_r20) goto CPyL95;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r23;
    if (!cpy_r_r24) goto CPyL95;
    cpy_r_r25 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (PyUnicode_Check(cpy_r_r25))
        cpy_r_r26 = cpy_r_r25;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL4844;
    if (cpy_r_r25 == Py_None)
        cpy_r_r26 = cpy_r_r25;
    else {
        cpy_r_r26 = NULL;
    }
    if (cpy_r_r26 != NULL) goto __LL4844;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1034, CPyStatic_dataclasses___globals, "str or None", cpy_r_r25);
    goto CPyL96;
__LL4844: ;
    cpy_r_name = cpy_r_r26;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r8);
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_types___Type)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1034, CPyStatic_dataclasses___globals, "mypy.types.Type", cpy_r_r27);
        goto CPyL97;
    }
    cpy_r_typ = cpy_r_r28;
    cpy_r_r29 = CPyList_GetItemUnsafe(cpy_r_r11, cpy_r_r12);
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_nodes___ArgKind))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1034, CPyStatic_dataclasses___globals, "mypy.nodes.ArgKind", cpy_r_r29);
        goto CPyL98;
    }
    cpy_r_kind = cpy_r_r30;
    cpy_r_r31.f0 = cpy_r_typ;
    cpy_r_r31.f1 = cpy_r_kind;
    CPy_INCREF(cpy_r_r31.f0);
    CPy_INCREF(cpy_r_r31.f1);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_kind);
    cpy_r_r32 = PyTuple_New(2);
    if (unlikely(cpy_r_r32 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4845 = cpy_r_r31.f0;
    PyTuple_SET_ITEM(cpy_r_r32, 0, __tmp4845);
    PyObject *__tmp4846 = cpy_r_r31.f1;
    PyTuple_SET_ITEM(cpy_r_r32, 1, __tmp4846);
    cpy_r_r33 = CPyDict_SetItem(cpy_r_r0, cpy_r_name, cpy_r_r32);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1034, CPyStatic_dataclasses___globals);
        goto CPyL96;
    }
    cpy_r_r35 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r35;
    cpy_r_r36 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r36;
    cpy_r_r37 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r37;
    goto CPyL8;
CPyL16: ;
    cpy_r_args = cpy_r_r0;
    cpy_r_r38 = CPyList_GetSlice(cpy_r_sigs, 2, 9223372036854775806LL);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1039, CPyStatic_dataclasses___globals);
        goto CPyL99;
    }
    if (likely(PyList_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1039, CPyStatic_dataclasses___globals, "list", cpy_r_r38);
        goto CPyL99;
    }
    cpy_r_r40 = 0;
CPyL19: ;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_r39)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 << 1;
    cpy_r_r44 = (Py_ssize_t)cpy_r_r40 < (Py_ssize_t)cpy_r_r43;
    if (!cpy_r_r44) goto CPyL100;
    cpy_r_r45 = CPyList_GetItemUnsafe(cpy_r_r39, cpy_r_r40);
    if (likely(Py_TYPE(cpy_r_r45) == CPyType_types___CallableType))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1039, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_r45);
        goto CPyL101;
    }
    cpy_r_sig = cpy_r_r46;
    cpy_r_r47 = PyDict_New();
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1040, CPyStatic_dataclasses___globals);
        goto CPyL102;
    }
    cpy_r_r48 = ((mypy___types___CallableTypeObject *)cpy_r_sig)->_arg_names;
    CPy_INCREF(cpy_r_r48);
    cpy_r_r49 = 0;
    cpy_r_r50 = ((mypy___types___CallableTypeObject *)cpy_r_sig)->_arg_types;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = 0;
    cpy_r_r52 = ((mypy___types___CallableTypeObject *)cpy_r_sig)->_arg_kinds;
    CPy_INCREF(cpy_r_r52);
    CPy_DECREF(cpy_r_sig);
    cpy_r_r53 = 0;
CPyL23: ;
    cpy_r_r54 = (CPyPtr)&((PyVarObject *)cpy_r_r48)->ob_size;
    cpy_r_r55 = *(int64_t *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 << 1;
    cpy_r_r57 = (Py_ssize_t)cpy_r_r49 < (Py_ssize_t)cpy_r_r56;
    if (!cpy_r_r57) goto CPyL103;
    cpy_r_r58 = (CPyPtr)&((PyVarObject *)cpy_r_r50)->ob_size;
    cpy_r_r59 = *(int64_t *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 << 1;
    cpy_r_r61 = (Py_ssize_t)cpy_r_r51 < (Py_ssize_t)cpy_r_r60;
    if (!cpy_r_r61) goto CPyL103;
    cpy_r_r62 = (CPyPtr)&((PyVarObject *)cpy_r_r52)->ob_size;
    cpy_r_r63 = *(int64_t *)cpy_r_r62;
    cpy_r_r64 = cpy_r_r63 << 1;
    cpy_r_r65 = (Py_ssize_t)cpy_r_r53 < (Py_ssize_t)cpy_r_r64;
    if (!cpy_r_r65) goto CPyL103;
    cpy_r_r66 = CPyList_GetItemUnsafe(cpy_r_r48, cpy_r_r49);
    if (PyUnicode_Check(cpy_r_r66))
        cpy_r_r67 = cpy_r_r66;
    else {
        cpy_r_r67 = NULL;
    }
    if (cpy_r_r67 != NULL) goto __LL4847;
    if (cpy_r_r66 == Py_None)
        cpy_r_r67 = cpy_r_r66;
    else {
        cpy_r_r67 = NULL;
    }
    if (cpy_r_r67 != NULL) goto __LL4847;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1040, CPyStatic_dataclasses___globals, "str or None", cpy_r_r66);
    goto CPyL104;
__LL4847: ;
    cpy_r_name_2 = cpy_r_r67;
    cpy_r_r68 = CPyList_GetItemUnsafe(cpy_r_r50, cpy_r_r51);
    if (likely(PyObject_TypeCheck(cpy_r_r68, CPyType_types___Type)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1040, CPyStatic_dataclasses___globals, "mypy.types.Type", cpy_r_r68);
        goto CPyL105;
    }
    cpy_r_typ_2 = cpy_r_r69;
    cpy_r_r70 = CPyList_GetItemUnsafe(cpy_r_r52, cpy_r_r53);
    if (likely(Py_TYPE(cpy_r_r70) == CPyType_nodes___ArgKind))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1040, CPyStatic_dataclasses___globals, "mypy.nodes.ArgKind", cpy_r_r70);
        goto CPyL106;
    }
    cpy_r_kind_2 = cpy_r_r71;
    cpy_r_r72.f0 = cpy_r_typ_2;
    cpy_r_r72.f1 = cpy_r_kind_2;
    CPy_INCREF(cpy_r_r72.f0);
    CPy_INCREF(cpy_r_r72.f1);
    CPy_DECREF(cpy_r_typ_2);
    CPy_DECREF(cpy_r_kind_2);
    cpy_r_r73 = PyTuple_New(2);
    if (unlikely(cpy_r_r73 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4848 = cpy_r_r72.f0;
    PyTuple_SET_ITEM(cpy_r_r73, 0, __tmp4848);
    PyObject *__tmp4849 = cpy_r_r72.f1;
    PyTuple_SET_ITEM(cpy_r_r73, 1, __tmp4849);
    cpy_r_r74 = CPyDict_SetItem(cpy_r_r47, cpy_r_name_2, cpy_r_r73);
    CPy_DECREF(cpy_r_name_2);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1040, CPyStatic_dataclasses___globals);
        goto CPyL104;
    }
    cpy_r_r76 = cpy_r_r49 + 2;
    cpy_r_r49 = cpy_r_r76;
    cpy_r_r77 = cpy_r_r51 + 2;
    cpy_r_r51 = cpy_r_r77;
    cpy_r_r78 = cpy_r_r53 + 2;
    cpy_r_r53 = cpy_r_r78;
    goto CPyL23;
CPyL31: ;
    cpy_r_sig_args = cpy_r_r47;
    cpy_r_r79 = CPyDict_KeysView(cpy_r_args);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1044, CPyStatic_dataclasses___globals);
        goto CPyL107;
    }
    cpy_r_r80 = CPyDict_KeysView(cpy_r_sig_args);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1044, CPyStatic_dataclasses___globals);
        goto CPyL108;
    }
    cpy_r_r81 = PyList_New(0);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1044, CPyStatic_dataclasses___globals);
        goto CPyL109;
    }
    cpy_r_r82 = CPyList_Extend(cpy_r_r81, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1044, CPyStatic_dataclasses___globals);
        goto CPyL110;
    } else
        goto CPyL111;
CPyL35: ;
    cpy_r_r83 = CPyList_Extend(cpy_r_r81, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1044, CPyStatic_dataclasses___globals);
        goto CPyL112;
    } else
        goto CPyL113;
CPyL36: ;
    cpy_r_r84 = PyList_AsTuple(cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1044, CPyStatic_dataclasses___globals);
        goto CPyL107;
    }
    cpy_r_r85 = 0;
CPyL38: ;
    cpy_r_r86 = (CPyPtr)&((PyVarObject *)cpy_r_r84)->ob_size;
    cpy_r_r87 = *(int64_t *)cpy_r_r86;
    cpy_r_r88 = cpy_r_r87 << 1;
    cpy_r_r89 = (Py_ssize_t)cpy_r_r85 < (Py_ssize_t)cpy_r_r88;
    if (!cpy_r_r89) goto CPyL114;
    cpy_r_r90 = CPySequenceTuple_GetItem(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1044, CPyStatic_dataclasses___globals);
        goto CPyL115;
    }
    if (PyUnicode_Check(cpy_r_r90))
        cpy_r_r91 = cpy_r_r90;
    else {
        cpy_r_r91 = NULL;
    }
    if (cpy_r_r91 != NULL) goto __LL4850;
    if (cpy_r_r90 == Py_None)
        cpy_r_r91 = cpy_r_r90;
    else {
        cpy_r_r91 = NULL;
    }
    if (cpy_r_r91 != NULL) goto __LL4850;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1044, CPyStatic_dataclasses___globals, "str or None", cpy_r_r90);
    goto CPyL115;
__LL4850: ;
    cpy_r_name_3 = cpy_r_r91;
    cpy_r_r92 = 2;
    cpy_r_r93 = CPY_INT_TAG;
    cpy_r_r94 = CPY_INT_TAG;
    cpy_r_r95 = CPyDef_types___UninhabitedType(cpy_r_r92, cpy_r_r93, cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1045, CPyStatic_dataclasses___globals);
        goto CPyL116;
    }
    cpy_r_r96 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (unlikely(cpy_r_r96 == NULL)) {
        goto CPyL117;
    } else
        goto CPyL45;
CPyL43: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r97 = 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1045, CPyStatic_dataclasses___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL45: ;
    cpy_r_r98.f0 = cpy_r_r95;
    cpy_r_r98.f1 = cpy_r_r96;
    CPy_INCREF(cpy_r_r98.f0);
    CPy_INCREF(cpy_r_r98.f1);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r99 = PyTuple_New(2);
    if (unlikely(cpy_r_r99 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4851 = cpy_r_r98.f0;
    PyTuple_SET_ITEM(cpy_r_r99, 0, __tmp4851);
    PyObject *__tmp4852 = cpy_r_r98.f1;
    PyTuple_SET_ITEM(cpy_r_r99, 1, __tmp4852);
    cpy_r_r100 = CPyDict_Get(cpy_r_args, cpy_r_name_3, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1045, CPyStatic_dataclasses___globals);
        goto CPyL116;
    }
    PyObject *__tmp4853;
    if (unlikely(!(PyTuple_Check(cpy_r_r100) && PyTuple_GET_SIZE(cpy_r_r100) == 2))) {
        __tmp4853 = NULL;
        goto __LL4854;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r100, 0), CPyType_types___Type)))
        __tmp4853 = PyTuple_GET_ITEM(cpy_r_r100, 0);
    else {
        __tmp4853 = NULL;
    }
    if (__tmp4853 == NULL) goto __LL4854;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r100, 1)) == CPyType_nodes___ArgKind))
        __tmp4853 = PyTuple_GET_ITEM(cpy_r_r100, 1);
    else {
        __tmp4853 = NULL;
    }
    if (__tmp4853 == NULL) goto __LL4854;
    __tmp4853 = cpy_r_r100;
__LL4854: ;
    if (unlikely(__tmp4853 == NULL)) {
        CPy_TypeError("tuple[mypy.types.Type, mypy.nodes.ArgKind]", cpy_r_r100); cpy_r_r101 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp4855 = PyTuple_GET_ITEM(cpy_r_r100, 0);
        CPy_INCREF(__tmp4855);
        PyObject *__tmp4856;
        if (likely(PyObject_TypeCheck(__tmp4855, CPyType_types___Type)))
            __tmp4856 = __tmp4855;
        else {
            CPy_TypeError("mypy.types.Type", __tmp4855); 
            __tmp4856 = NULL;
        }
        cpy_r_r101.f0 = __tmp4856;
        PyObject *__tmp4857 = PyTuple_GET_ITEM(cpy_r_r100, 1);
        CPy_INCREF(__tmp4857);
        PyObject *__tmp4858;
        if (likely(Py_TYPE(__tmp4857) == CPyType_nodes___ArgKind))
            __tmp4858 = __tmp4857;
        else {
            CPy_TypeError("mypy.nodes.ArgKind", __tmp4857); 
            __tmp4858 = NULL;
        }
        cpy_r_r101.f1 = __tmp4858;
    }
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r101.f0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1045, CPyStatic_dataclasses___globals);
        goto CPyL116;
    }
    cpy_r_r102 = cpy_r_r101.f0;
    CPy_INCREF(cpy_r_r102);
    cpy_r_sig_typ = cpy_r_r102;
    cpy_r_r103 = cpy_r_r101.f1;
    CPy_INCREF(cpy_r_r103);
    CPy_DECREF(cpy_r_r101.f0);
    CPy_DECREF(cpy_r_r101.f1);
    cpy_r_sig_kind = cpy_r_r103;
    cpy_r_r104 = 2;
    cpy_r_r105 = CPY_INT_TAG;
    cpy_r_r106 = CPY_INT_TAG;
    cpy_r_r107 = CPyDef_types___UninhabitedType(cpy_r_r104, cpy_r_r105, cpy_r_r106);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1046, CPyStatic_dataclasses___globals);
        goto CPyL118;
    }
    cpy_r_r108 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (unlikely(cpy_r_r108 == NULL)) {
        goto CPyL119;
    } else
        goto CPyL51;
CPyL49: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r109 = 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1046, CPyStatic_dataclasses___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r110.f0 = cpy_r_r107;
    cpy_r_r110.f1 = cpy_r_r108;
    CPy_INCREF(cpy_r_r110.f0);
    CPy_INCREF(cpy_r_r110.f1);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r111 = PyTuple_New(2);
    if (unlikely(cpy_r_r111 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4859 = cpy_r_r110.f0;
    PyTuple_SET_ITEM(cpy_r_r111, 0, __tmp4859);
    PyObject *__tmp4860 = cpy_r_r110.f1;
    PyTuple_SET_ITEM(cpy_r_r111, 1, __tmp4860);
    cpy_r_r112 = CPyDict_Get(cpy_r_sig_args, cpy_r_name_3, cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1046, CPyStatic_dataclasses___globals);
        goto CPyL118;
    }
    PyObject *__tmp4861;
    if (unlikely(!(PyTuple_Check(cpy_r_r112) && PyTuple_GET_SIZE(cpy_r_r112) == 2))) {
        __tmp4861 = NULL;
        goto __LL4862;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r112, 0), CPyType_types___Type)))
        __tmp4861 = PyTuple_GET_ITEM(cpy_r_r112, 0);
    else {
        __tmp4861 = NULL;
    }
    if (__tmp4861 == NULL) goto __LL4862;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r112, 1)) == CPyType_nodes___ArgKind))
        __tmp4861 = PyTuple_GET_ITEM(cpy_r_r112, 1);
    else {
        __tmp4861 = NULL;
    }
    if (__tmp4861 == NULL) goto __LL4862;
    __tmp4861 = cpy_r_r112;
__LL4862: ;
    if (unlikely(__tmp4861 == NULL)) {
        CPy_TypeError("tuple[mypy.types.Type, mypy.nodes.ArgKind]", cpy_r_r112); cpy_r_r113 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp4863 = PyTuple_GET_ITEM(cpy_r_r112, 0);
        CPy_INCREF(__tmp4863);
        PyObject *__tmp4864;
        if (likely(PyObject_TypeCheck(__tmp4863, CPyType_types___Type)))
            __tmp4864 = __tmp4863;
        else {
            CPy_TypeError("mypy.types.Type", __tmp4863); 
            __tmp4864 = NULL;
        }
        cpy_r_r113.f0 = __tmp4864;
        PyObject *__tmp4865 = PyTuple_GET_ITEM(cpy_r_r112, 1);
        CPy_INCREF(__tmp4865);
        PyObject *__tmp4866;
        if (likely(Py_TYPE(__tmp4865) == CPyType_nodes___ArgKind))
            __tmp4866 = __tmp4865;
        else {
            CPy_TypeError("mypy.nodes.ArgKind", __tmp4865); 
            __tmp4866 = NULL;
        }
        cpy_r_r113.f1 = __tmp4866;
    }
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r113.f0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1046, CPyStatic_dataclasses___globals);
        goto CPyL118;
    }
    cpy_r_r114 = cpy_r_r113.f0;
    CPy_INCREF(cpy_r_r114);
    cpy_r_sig2_typ = cpy_r_r114;
    cpy_r_r115 = cpy_r_r113.f1;
    CPy_INCREF(cpy_r_r115);
    CPy_DECREF(cpy_r_r113.f0);
    CPy_DECREF(cpy_r_r113.f1);
    cpy_r_sig2_kind = cpy_r_r115;
    cpy_r_r116 = CPyDef_meet___meet_types(cpy_r_sig_typ, cpy_r_sig2_typ);
    CPy_DECREF(cpy_r_sig_typ);
    CPy_DECREF(cpy_r_sig2_typ);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1048, CPyStatic_dataclasses___globals);
        goto CPyL120;
    }
    cpy_r_r117 = cpy_r_sig_kind == cpy_r_sig2_kind;
    CPy_DECREF(cpy_r_sig_kind);
    if (cpy_r_r117) {
        goto CPyL56;
    } else
        goto CPyL121;
CPyL55: ;
    cpy_r_r118 = cpy_r_r117;
    goto CPyL60;
CPyL56: ;
    cpy_r_r119 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (unlikely(cpy_r_r119 == NULL)) {
        goto CPyL122;
    } else
        goto CPyL59;
CPyL57: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r120 = 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1049, CPyStatic_dataclasses___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL59: ;
    cpy_r_r121 = cpy_r_sig2_kind == cpy_r_r119;
    CPy_DECREF(cpy_r_sig2_kind);
    cpy_r_r118 = cpy_r_r121;
CPyL60: ;
    if (!cpy_r_r118) goto CPyL65;
    cpy_r_r122 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (unlikely(cpy_r_r122 == NULL)) {
        goto CPyL123;
    } else
        goto CPyL64;
CPyL62: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r123 = 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1049, CPyStatic_dataclasses___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL64: ;
    CPy_INCREF(cpy_r_r122);
    cpy_r_r124 = cpy_r_r122;
    goto CPyL69;
CPyL65: ;
    cpy_r_r125 = CPyStatic_nodes___ARG_NAMED;
    if (unlikely(cpy_r_r125 == NULL)) {
        goto CPyL124;
    } else
        goto CPyL68;
CPyL66: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r126 = 0;
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1049, CPyStatic_dataclasses___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL68: ;
    CPy_INCREF(cpy_r_r125);
    cpy_r_r124 = cpy_r_r125;
CPyL69: ;
    cpy_r_r127.f0 = cpy_r_r116;
    cpy_r_r127.f1 = cpy_r_r124;
    CPy_INCREF(cpy_r_r127.f0);
    CPy_INCREF(cpy_r_r127.f1);
    CPy_DECREF(cpy_r_r116);
    CPy_DECREF(cpy_r_r124);
    cpy_r_r128 = PyTuple_New(2);
    if (unlikely(cpy_r_r128 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4867 = cpy_r_r127.f0;
    PyTuple_SET_ITEM(cpy_r_r128, 0, __tmp4867);
    PyObject *__tmp4868 = cpy_r_r127.f1;
    PyTuple_SET_ITEM(cpy_r_r128, 1, __tmp4868);
    cpy_r_r129 = CPyDict_SetItem(cpy_r_args, cpy_r_name_3, cpy_r_r128);
    CPy_DECREF(cpy_r_name_3);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1047, CPyStatic_dataclasses___globals);
        goto CPyL115;
    }
    cpy_r_r131 = cpy_r_r85 + 2;
    cpy_r_r85 = cpy_r_r131;
    goto CPyL38;
CPyL71: ;
    cpy_r_r132 = cpy_r_r40 + 2;
    cpy_r_r40 = cpy_r_r132;
    goto CPyL19;
CPyL72: ;
    cpy_r_r133 = CPyList_GetItemShort(cpy_r_sigs, 0);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1052, CPyStatic_dataclasses___globals);
        goto CPyL99;
    }
    if (likely(Py_TYPE(cpy_r_r133) == CPyType_types___CallableType))
        cpy_r_r134 = cpy_r_r133;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1052, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_r133);
        goto CPyL99;
    }
    cpy_r_r135 = CPyDict_Keys(cpy_r_args);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1053, CPyStatic_dataclasses___globals);
        goto CPyL125;
    }
    cpy_r_r136 = PyList_New(0);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1054, CPyStatic_dataclasses___globals);
        goto CPyL126;
    }
    cpy_r_r137 = 0;
    cpy_r_r138 = PyDict_Size(cpy_r_args);
    cpy_r_r139 = cpy_r_r138 << 1;
    cpy_r_r140 = CPyDict_GetValuesIter(cpy_r_args);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1054, CPyStatic_dataclasses___globals);
        goto CPyL127;
    }
CPyL77: ;
    cpy_r_r141 = CPyDict_NextValue(cpy_r_r140, cpy_r_r137);
    cpy_r_r142 = cpy_r_r141.f1;
    cpy_r_r137 = cpy_r_r142;
    cpy_r_r143 = cpy_r_r141.f0;
    if (!cpy_r_r143) goto CPyL128;
    cpy_r_r144 = cpy_r_r141.f2;
    CPy_INCREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r141.f2);
    PyObject *__tmp4869;
    if (unlikely(!(PyTuple_Check(cpy_r_r144) && PyTuple_GET_SIZE(cpy_r_r144) == 2))) {
        __tmp4869 = NULL;
        goto __LL4870;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r144, 0), CPyType_types___Type)))
        __tmp4869 = PyTuple_GET_ITEM(cpy_r_r144, 0);
    else {
        __tmp4869 = NULL;
    }
    if (__tmp4869 == NULL) goto __LL4870;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r144, 1)) == CPyType_nodes___ArgKind))
        __tmp4869 = PyTuple_GET_ITEM(cpy_r_r144, 1);
    else {
        __tmp4869 = NULL;
    }
    if (__tmp4869 == NULL) goto __LL4870;
    __tmp4869 = cpy_r_r144;
__LL4870: ;
    if (unlikely(__tmp4869 == NULL)) {
        CPy_TypeError("tuple[mypy.types.Type, mypy.nodes.ArgKind]", cpy_r_r144); cpy_r_r145 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp4871 = PyTuple_GET_ITEM(cpy_r_r144, 0);
        CPy_INCREF(__tmp4871);
        PyObject *__tmp4872;
        if (likely(PyObject_TypeCheck(__tmp4871, CPyType_types___Type)))
            __tmp4872 = __tmp4871;
        else {
            CPy_TypeError("mypy.types.Type", __tmp4871); 
            __tmp4872 = NULL;
        }
        cpy_r_r145.f0 = __tmp4872;
        PyObject *__tmp4873 = PyTuple_GET_ITEM(cpy_r_r144, 1);
        CPy_INCREF(__tmp4873);
        PyObject *__tmp4874;
        if (likely(Py_TYPE(__tmp4873) == CPyType_nodes___ArgKind))
            __tmp4874 = __tmp4873;
        else {
            CPy_TypeError("mypy.nodes.ArgKind", __tmp4873); 
            __tmp4874 = NULL;
        }
        cpy_r_r145.f1 = __tmp4874;
    }
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r145.f0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1054, CPyStatic_dataclasses___globals);
        goto CPyL129;
    }
    cpy_r_r146 = cpy_r_r145.f0;
    CPy_INCREF(cpy_r_r146);
    cpy_r_typ_3 = cpy_r_r146;
    cpy_r_r147 = cpy_r_r145.f1;
    CPy_INCREF(cpy_r_r147);
    CPy_DECREF(cpy_r_r145.f0);
    CPy_DECREF(cpy_r_r145.f1);
    cpy_r__ = cpy_r_r147;
    CPy_DECREF(cpy_r__);
    cpy_r_r148 = PyList_Append(cpy_r_r136, cpy_r_typ_3);
    CPy_DECREF(cpy_r_typ_3);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1054, CPyStatic_dataclasses___globals);
        goto CPyL129;
    }
    cpy_r_r150 = CPyDict_CheckSize(cpy_r_args, cpy_r_r139);
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1054, CPyStatic_dataclasses___globals);
        goto CPyL129;
    } else
        goto CPyL77;
CPyL81: ;
    cpy_r_r151 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r151)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1054, CPyStatic_dataclasses___globals);
        goto CPyL127;
    }
    cpy_r_r152 = PyList_New(0);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1055, CPyStatic_dataclasses___globals);
        goto CPyL127;
    }
    cpy_r_r153 = 0;
    cpy_r_r154 = PyDict_Size(cpy_r_args);
    cpy_r_r155 = cpy_r_r154 << 1;
    cpy_r_r156 = CPyDict_GetValuesIter(cpy_r_args);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1055, CPyStatic_dataclasses___globals);
        goto CPyL130;
    }
CPyL84: ;
    cpy_r_r157 = CPyDict_NextValue(cpy_r_r156, cpy_r_r153);
    cpy_r_r158 = cpy_r_r157.f1;
    cpy_r_r153 = cpy_r_r158;
    cpy_r_r159 = cpy_r_r157.f0;
    if (!cpy_r_r159) goto CPyL131;
    cpy_r_r160 = cpy_r_r157.f2;
    CPy_INCREF(cpy_r_r160);
    CPy_DECREF(cpy_r_r157.f2);
    PyObject *__tmp4875;
    if (unlikely(!(PyTuple_Check(cpy_r_r160) && PyTuple_GET_SIZE(cpy_r_r160) == 2))) {
        __tmp4875 = NULL;
        goto __LL4876;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r160, 0), CPyType_types___Type)))
        __tmp4875 = PyTuple_GET_ITEM(cpy_r_r160, 0);
    else {
        __tmp4875 = NULL;
    }
    if (__tmp4875 == NULL) goto __LL4876;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r160, 1)) == CPyType_nodes___ArgKind))
        __tmp4875 = PyTuple_GET_ITEM(cpy_r_r160, 1);
    else {
        __tmp4875 = NULL;
    }
    if (__tmp4875 == NULL) goto __LL4876;
    __tmp4875 = cpy_r_r160;
__LL4876: ;
    if (unlikely(__tmp4875 == NULL)) {
        CPy_TypeError("tuple[mypy.types.Type, mypy.nodes.ArgKind]", cpy_r_r160); cpy_r_r161 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp4877 = PyTuple_GET_ITEM(cpy_r_r160, 0);
        CPy_INCREF(__tmp4877);
        PyObject *__tmp4878;
        if (likely(PyObject_TypeCheck(__tmp4877, CPyType_types___Type)))
            __tmp4878 = __tmp4877;
        else {
            CPy_TypeError("mypy.types.Type", __tmp4877); 
            __tmp4878 = NULL;
        }
        cpy_r_r161.f0 = __tmp4878;
        PyObject *__tmp4879 = PyTuple_GET_ITEM(cpy_r_r160, 1);
        CPy_INCREF(__tmp4879);
        PyObject *__tmp4880;
        if (likely(Py_TYPE(__tmp4879) == CPyType_nodes___ArgKind))
            __tmp4880 = __tmp4879;
        else {
            CPy_TypeError("mypy.nodes.ArgKind", __tmp4879); 
            __tmp4880 = NULL;
        }
        cpy_r_r161.f1 = __tmp4880;
    }
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r161.f0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1055, CPyStatic_dataclasses___globals);
        goto CPyL132;
    }
    cpy_r_r162 = cpy_r_r161.f0;
    CPy_INCREF(cpy_r_r162);
    cpy_r___2 = cpy_r_r162;
    CPy_DECREF(cpy_r___2);
    cpy_r_r163 = cpy_r_r161.f1;
    CPy_INCREF(cpy_r_r163);
    CPy_DECREF(cpy_r_r161.f0);
    CPy_DECREF(cpy_r_r161.f1);
    cpy_r_kind_3 = cpy_r_r163;
    cpy_r_r164 = PyList_Append(cpy_r_r152, cpy_r_kind_3);
    CPy_DECREF(cpy_r_kind_3);
    cpy_r_r165 = cpy_r_r164 >= 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1055, CPyStatic_dataclasses___globals);
        goto CPyL132;
    }
    cpy_r_r166 = CPyDict_CheckSize(cpy_r_args, cpy_r_r155);
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1055, CPyStatic_dataclasses___globals);
        goto CPyL132;
    } else
        goto CPyL84;
CPyL88: ;
    cpy_r_r167 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1055, CPyStatic_dataclasses___globals);
        goto CPyL133;
    }
    cpy_r_r168 = NULL;
    cpy_r_r169 = NULL;
    cpy_r_r170 = NULL;
    cpy_r_r171 = NULL;
    cpy_r_r172 = NULL;
    cpy_r_r173 = CPY_INT_TAG;
    cpy_r_r174 = CPY_INT_TAG;
    cpy_r_r175 = NULL;
    cpy_r_r176 = NULL;
    cpy_r_r177 = NULL;
    cpy_r_r178 = NULL;
    cpy_r_r179 = NULL;
    cpy_r_r180 = NULL;
    cpy_r_r181 = NULL;
    cpy_r_r182 = NULL;
    cpy_r_r183 = NULL;
    cpy_r_r184 = CPyDef_types___CallableType___copy_modified(cpy_r_r134, cpy_r_r136, cpy_r_r152, cpy_r_r135, cpy_r_r168, cpy_r_r169, cpy_r_r170, cpy_r_r171, cpy_r_r172, cpy_r_r173, cpy_r_r174, cpy_r_r175, cpy_r_r176, cpy_r_r177, cpy_r_r178, cpy_r_r179, cpy_r_r180, cpy_r_r181, cpy_r_r182, cpy_r_r183);
    CPy_DECREF(cpy_r_r136);
    CPy_DECREF(cpy_r_r152);
    CPy_DECREF(cpy_r_r135);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1052, CPyStatic_dataclasses___globals);
        goto CPyL91;
    }
    return cpy_r_r184;
CPyL91: ;
    cpy_r_r185 = NULL;
    return cpy_r_r185;
CPyL92: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL91;
CPyL93: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL91;
CPyL94: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    goto CPyL91;
CPyL95: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r11);
    goto CPyL16;
CPyL96: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r11);
    goto CPyL91;
CPyL97: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_name);
    goto CPyL91;
CPyL98: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_typ);
    goto CPyL91;
CPyL99: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL91;
CPyL100: ;
    CPy_DECREF(cpy_r_r39);
    goto CPyL72;
CPyL101: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    goto CPyL91;
CPyL102: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_sig);
    goto CPyL91;
CPyL103: ;
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r52);
    goto CPyL31;
CPyL104: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r52);
    goto CPyL91;
CPyL105: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_name_2);
    goto CPyL91;
CPyL106: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_name_2);
    CPy_DecRef(cpy_r_typ_2);
    goto CPyL91;
CPyL107: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_sig_args);
    goto CPyL91;
CPyL108: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_sig_args);
    CPy_DecRef(cpy_r_r79);
    goto CPyL91;
CPyL109: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_sig_args);
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r80);
    goto CPyL91;
CPyL110: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_sig_args);
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_r81);
    goto CPyL91;
CPyL111: ;
    CPy_DECREF(cpy_r_r82);
    goto CPyL35;
CPyL112: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_sig_args);
    CPy_DecRef(cpy_r_r81);
    goto CPyL91;
CPyL113: ;
    CPy_DECREF(cpy_r_r83);
    goto CPyL36;
CPyL114: ;
    CPy_DECREF(cpy_r_sig_args);
    CPy_DECREF(cpy_r_r84);
    goto CPyL71;
CPyL115: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_sig_args);
    CPy_DecRef(cpy_r_r84);
    goto CPyL91;
CPyL116: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_sig_args);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_name_3);
    goto CPyL91;
CPyL117: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_sig_args);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_name_3);
    CPy_DecRef(cpy_r_r95);
    goto CPyL43;
CPyL118: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_sig_args);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_name_3);
    CPy_DecRef(cpy_r_sig_typ);
    CPy_DecRef(cpy_r_sig_kind);
    goto CPyL91;
CPyL119: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_sig_args);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_name_3);
    CPy_DecRef(cpy_r_sig_typ);
    CPy_DecRef(cpy_r_sig_kind);
    CPy_DecRef(cpy_r_r107);
    goto CPyL49;
CPyL120: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_sig_args);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_name_3);
    CPy_DecRef(cpy_r_sig_kind);
    CPy_DecRef(cpy_r_sig2_kind);
    goto CPyL91;
CPyL121: ;
    CPy_DECREF(cpy_r_sig2_kind);
    goto CPyL55;
CPyL122: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_sig_args);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_name_3);
    CPy_DecRef(cpy_r_sig2_kind);
    CPy_DecRef(cpy_r_r116);
    goto CPyL57;
CPyL123: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_sig_args);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_name_3);
    CPy_DecRef(cpy_r_r116);
    goto CPyL62;
CPyL124: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_sig_args);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_name_3);
    CPy_DecRef(cpy_r_r116);
    goto CPyL66;
CPyL125: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r134);
    goto CPyL91;
CPyL126: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r135);
    goto CPyL91;
CPyL127: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r136);
    goto CPyL91;
CPyL128: ;
    CPy_DECREF(cpy_r_r140);
    CPy_DECREF(cpy_r_r141.f2);
    goto CPyL81;
CPyL129: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r140);
    goto CPyL91;
CPyL130: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r152);
    goto CPyL91;
CPyL131: ;
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r156);
    CPy_DECREF(cpy_r_r157.f2);
    goto CPyL88;
CPyL132: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r156);
    goto CPyL91;
CPyL133: ;
    CPy_DecRef(cpy_r_r134);
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r136);
    CPy_DecRef(cpy_r_r152);
    goto CPyL91;
}

PyObject *CPyPy_dataclasses____meet_replace_sigs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"sigs", 0};
    static CPyArg_Parser parser = {"O:_meet_replace_sigs", kwlist, 0};
    PyObject *obj_sigs;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_sigs)) {
        return NULL;
    }
    PyObject *arg_sigs;
    if (likely(PyList_Check(obj_sigs)))
        arg_sigs = obj_sigs;
    else {
        CPy_TypeError("list", obj_sigs); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses____meet_replace_sigs(arg_sigs);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "_meet_replace_sigs", 1030, CPyStatic_dataclasses___globals);
    return NULL;
}

PyObject *CPyDef_dataclasses___replace_function_sig_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
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
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_obj_arg;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_obj_type;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_inst_type_str;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_replace_sigs;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_replace_sig;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    CPyPtr cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    CPyPtr cpy_r_r66;
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyPtr cpy_r_r71;
    CPyPtr cpy_r_r72;
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
    CPyTagged cpy_r_r85;
    CPyTagged cpy_r_r86;
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
    size_t __tmp4881;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1064, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    if (likely(PyList_Check(cpy_r_r0)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1064, CPyStatic_dataclasses___globals, "list", cpy_r_r0);
        goto CPyL62;
    }
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = cpy_r_r4 != 4;
    if (!cpy_r_r5) goto CPyL15;
    cpy_r_r6 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1066, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_checker___TypeChecker))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1066, CPyStatic_dataclasses___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r6);
        goto CPyL62;
    }
    cpy_r_r8 = CPyStatics[178]; /* '"' */
    cpy_r_r9 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1066, CPyStatic_dataclasses___globals);
        goto CPyL63;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_types___CallableType))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1066, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_r9);
        goto CPyL63;
    }
    cpy_r_r11 = ((mypy___types___CallableTypeObject *)cpy_r_r10)->_name;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = PyObject_Str(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1066, CPyStatic_dataclasses___globals);
        goto CPyL63;
    }
    cpy_r_r13 = CPyStatics[4428]; /* '" has unexpected type annotation' */
    cpy_r_r14 = CPyStr_Build(3, cpy_r_r8, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1066, CPyStatic_dataclasses___globals);
        goto CPyL63;
    }
    cpy_r_r15 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1066, CPyStatic_dataclasses___globals);
        goto CPyL64;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_nodes___Context)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1066, CPyStatic_dataclasses___globals, "mypy.nodes.Context", cpy_r_r15);
        goto CPyL64;
    }
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPY_GET_METHOD_TRAIT(cpy_r_r7, CPyType_plugin___CheckerPluginInterface, 1, mypy___plugin___CheckerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *))(cpy_r_r7, cpy_r_r14, cpy_r_r16, cpy_r_r17); /* fail */
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1066, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    cpy_r_r19 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1067, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_types___CallableType))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1067, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_r19);
        goto CPyL62;
    }
    return cpy_r_r20;
CPyL15: ;
    cpy_r_r21 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1069, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    if (likely(PyList_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1069, CPyStatic_dataclasses___globals, "list", cpy_r_r21);
        goto CPyL62;
    }
    cpy_r_r23 = CPyList_GetItemShortBorrow(cpy_r_r22, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1069, CPyStatic_dataclasses___globals);
        goto CPyL65;
    }
    if (likely(PyList_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1069, CPyStatic_dataclasses___globals, "list", cpy_r_r23);
        goto CPyL65;
    }
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_r24)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = cpy_r_r27 != 2;
    CPy_DECREF(cpy_r_r22);
    if (!cpy_r_r28) goto CPyL23;
    cpy_r_r29 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1070, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_types___CallableType))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1070, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_r29);
        goto CPyL62;
    }
    return cpy_r_r30;
CPyL23: ;
    cpy_r_r31 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1072, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    if (likely(PyList_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1072, CPyStatic_dataclasses___globals, "list", cpy_r_r31);
        goto CPyL62;
    }
    cpy_r_r33 = CPyList_GetItemShortBorrow(cpy_r_r32, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1072, CPyStatic_dataclasses___globals);
        goto CPyL66;
    }
    if (likely(PyList_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1072, CPyStatic_dataclasses___globals, "list", cpy_r_r33);
        goto CPyL66;
    }
    cpy_r_r35 = CPyList_GetItemShort(cpy_r_r34, 0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1072, CPyStatic_dataclasses___globals);
        goto CPyL66;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r35, CPyType_nodes___Expression)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1072, CPyStatic_dataclasses___globals, "mypy.nodes.Expression", cpy_r_r35);
        goto CPyL66;
    }
    CPy_DECREF(cpy_r_r32);
    cpy_r_obj_arg = cpy_r_r36;
    cpy_r_r37 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1073, CPyStatic_dataclasses___globals);
        goto CPyL67;
    }
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_checker___TypeChecker))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1073, CPyStatic_dataclasses___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r37);
        goto CPyL67;
    }
    cpy_r_r39 = NULL;
    cpy_r_r40 = CPY_GET_METHOD_TRAIT(cpy_r_r38, CPyType_plugin___CheckerPluginInterface, 3, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r38, cpy_r_obj_arg, cpy_r_r39); /* get_expression_type */
    CPy_DECREF(cpy_r_obj_arg);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1073, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    cpy_r_r41 = CPyDef_types___get_proper_type(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1073, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    if (likely(cpy_r_r41 != Py_None))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1073, CPyStatic_dataclasses___globals, "mypy.types.ProperType", cpy_r_r41);
        goto CPyL62;
    }
    cpy_r_obj_type = cpy_r_r42;
    cpy_r_r43 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1074, CPyStatic_dataclasses___globals);
        goto CPyL68;
    }
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_checker___TypeChecker))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1074, CPyStatic_dataclasses___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r43);
        goto CPyL68;
    }
    __tmp4881 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r44)->vtable, 1);
    cpy_r_r45 = *(PyObject * *)((char *)cpy_r_r44 + __tmp4881);
    if (unlikely(cpy_r_r45 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r45);
    }
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1074, CPyStatic_dataclasses___globals);
        goto CPyL68;
    }
CPyL37: ;
    cpy_r_r46 = CPY_INT_TAG;
    cpy_r_r47 = 2;
    cpy_r_r48 = CPyDef_messages___format_type_bare(cpy_r_obj_type, cpy_r_r45, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1074, CPyStatic_dataclasses___globals);
        goto CPyL68;
    }
    cpy_r_inst_type_str = cpy_r_r48;
    cpy_r_r49 = CPyDef_dataclasses____get_expanded_dataclasses_fields(cpy_r_ctx, cpy_r_obj_type, cpy_r_obj_type, cpy_r_obj_type);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1076, CPyStatic_dataclasses___globals);
        goto CPyL69;
    }
    cpy_r_replace_sigs = cpy_r_r49;
    cpy_r_r50 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r51 = cpy_r_replace_sigs == cpy_r_r50;
    if (cpy_r_r51) {
        goto CPyL70;
    } else
        goto CPyL43;
CPyL40: ;
    cpy_r_r52 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1078, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    if (likely(Py_TYPE(cpy_r_r52) == CPyType_types___CallableType))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1078, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_r52);
        goto CPyL62;
    }
    return cpy_r_r53;
CPyL43: ;
    if (likely(cpy_r_replace_sigs != Py_None))
        cpy_r_r54 = cpy_r_replace_sigs;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1079, CPyStatic_dataclasses___globals, "list", cpy_r_replace_sigs);
        goto CPyL69;
    }
    cpy_r_r55 = CPyDef_dataclasses____meet_replace_sigs(cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1079, CPyStatic_dataclasses___globals);
        goto CPyL69;
    }
    cpy_r_replace_sig = cpy_r_r55;
    cpy_r_r56 = ((mypy___types___CallableTypeObject *)cpy_r_replace_sig)->_arg_names;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = PyList_New(1);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1082, CPyStatic_dataclasses___globals);
        goto CPyL71;
    }
    cpy_r_r58 = Py_None;
    cpy_r_r59 = (CPyPtr)&((PyListObject *)cpy_r_r57)->ob_item;
    cpy_r_r60 = *(CPyPtr *)cpy_r_r59;
    CPy_INCREF(cpy_r_r58);
    *(PyObject * *)cpy_r_r60 = cpy_r_r58;
    cpy_r_r61 = CPyList_Extend(cpy_r_r57, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1082, CPyStatic_dataclasses___globals);
        goto CPyL72;
    } else
        goto CPyL73;
CPyL47: ;
    cpy_r_r62 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r62 == NULL)) {
        goto CPyL74;
    } else
        goto CPyL50;
CPyL48: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r63 = 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1083, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    CPy_Unreachable();
CPyL50: ;
    cpy_r_r64 = ((mypy___types___CallableTypeObject *)cpy_r_replace_sig)->_arg_kinds;
    CPy_INCREF(cpy_r_r64);
    cpy_r_r65 = PyList_New(1);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1083, CPyStatic_dataclasses___globals);
        goto CPyL75;
    }
    cpy_r_r66 = (CPyPtr)&((PyListObject *)cpy_r_r65)->ob_item;
    cpy_r_r67 = *(CPyPtr *)cpy_r_r66;
    CPy_INCREF(cpy_r_r62);
    *(PyObject * *)cpy_r_r67 = cpy_r_r62;
    cpy_r_r68 = CPyList_Extend(cpy_r_r65, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1083, CPyStatic_dataclasses___globals);
        goto CPyL76;
    } else
        goto CPyL77;
CPyL52: ;
    cpy_r_r69 = ((mypy___types___CallableTypeObject *)cpy_r_replace_sig)->_arg_types;
    CPy_INCREF(cpy_r_r69);
    cpy_r_r70 = PyList_New(1);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1084, CPyStatic_dataclasses___globals);
        goto CPyL78;
    }
    cpy_r_r71 = (CPyPtr)&((PyListObject *)cpy_r_r70)->ob_item;
    cpy_r_r72 = *(CPyPtr *)cpy_r_r71;
    CPy_INCREF(cpy_r_obj_type);
    *(PyObject * *)cpy_r_r72 = cpy_r_obj_type;
    cpy_r_r73 = CPyList_Extend(cpy_r_r70, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1084, CPyStatic_dataclasses___globals);
        goto CPyL79;
    } else
        goto CPyL80;
CPyL54: ;
    cpy_r_r74 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1086, CPyStatic_dataclasses___globals);
        goto CPyL79;
    }
    if (likely(Py_TYPE(cpy_r_r74) == CPyType_types___CallableType))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1086, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_r74);
        goto CPyL79;
    }
    cpy_r_r76 = ((mypy___types___CallableTypeObject *)cpy_r_r75)->_fallback;
    CPy_INCREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1087, CPyStatic_dataclasses___globals);
        goto CPyL81;
    }
    if (likely(Py_TYPE(cpy_r_r77) == CPyType_types___CallableType))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1087, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_r77);
        goto CPyL81;
    }
    cpy_r_r79 = ((mypy___types___CallableTypeObject *)cpy_r_r78)->_name;
    CPy_INCREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r80 = PyObject_Str(cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1087, CPyStatic_dataclasses___globals);
        goto CPyL81;
    }
    cpy_r_r81 = CPyStatics[3379]; /* ' of ' */
    cpy_r_r82 = CPyStr_Build(3, cpy_r_r80, cpy_r_r81, cpy_r_inst_type_str);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_inst_type_str);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1087, CPyStatic_dataclasses___globals);
        goto CPyL82;
    }
    cpy_r_r83 = NULL;
    cpy_r_r84 = NULL;
    cpy_r_r85 = CPY_INT_TAG;
    cpy_r_r86 = CPY_INT_TAG;
    cpy_r_r87 = NULL;
    cpy_r_r88 = NULL;
    cpy_r_r89 = NULL;
    cpy_r_r90 = NULL;
    cpy_r_r91 = NULL;
    cpy_r_r92 = NULL;
    cpy_r_r93 = NULL;
    cpy_r_r94 = NULL;
    cpy_r_r95 = NULL;
    cpy_r_r96 = CPyDef_types___CallableType___copy_modified(cpy_r_replace_sig, cpy_r_r70, cpy_r_r65, cpy_r_r57, cpy_r_obj_type, cpy_r_r76, cpy_r_r82, cpy_r_r83, cpy_r_r84, cpy_r_r85, cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r89, cpy_r_r90, cpy_r_r91, cpy_r_r92, cpy_r_r93, cpy_r_r94, cpy_r_r95);
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_obj_type);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r82);
    CPy_DECREF(cpy_r_replace_sig);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1081, CPyStatic_dataclasses___globals);
        goto CPyL62;
    }
    return cpy_r_r96;
CPyL62: ;
    cpy_r_r97 = NULL;
    return cpy_r_r97;
CPyL63: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL62;
CPyL64: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r14);
    goto CPyL62;
CPyL65: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL62;
CPyL66: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL62;
CPyL67: ;
    CPy_DecRef(cpy_r_obj_arg);
    goto CPyL62;
CPyL68: ;
    CPy_DecRef(cpy_r_obj_type);
    goto CPyL62;
CPyL69: ;
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_inst_type_str);
    goto CPyL62;
CPyL70: ;
    CPy_DECREF(cpy_r_obj_type);
    CPy_DECREF(cpy_r_inst_type_str);
    CPy_DECREF(cpy_r_replace_sigs);
    goto CPyL40;
CPyL71: ;
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_replace_sig);
    CPy_DecRef(cpy_r_r56);
    goto CPyL62;
CPyL72: ;
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_replace_sig);
    CPy_DecRef(cpy_r_r57);
    goto CPyL62;
CPyL73: ;
    CPy_DECREF(cpy_r_r61);
    goto CPyL47;
CPyL74: ;
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_replace_sig);
    CPy_DecRef(cpy_r_r57);
    goto CPyL48;
CPyL75: ;
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_replace_sig);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r64);
    goto CPyL62;
CPyL76: ;
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_replace_sig);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r65);
    goto CPyL62;
CPyL77: ;
    CPy_DECREF(cpy_r_r68);
    goto CPyL52;
CPyL78: ;
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_replace_sig);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r69);
    goto CPyL62;
CPyL79: ;
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_replace_sig);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r70);
    goto CPyL62;
CPyL80: ;
    CPy_DECREF(cpy_r_r73);
    goto CPyL54;
CPyL81: ;
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_replace_sig);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r76);
    goto CPyL62;
CPyL82: ;
    CPy_DecRef(cpy_r_obj_type);
    CPy_DecRef(cpy_r_replace_sig);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r76);
    goto CPyL62;
}

PyObject *CPyPy_dataclasses___replace_function_sig_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:replace_function_sig_callback", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_dataclasses___replace_function_sig_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "replace_function_sig_callback", 1059, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___is_processed_dataclass(PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_info != cpy_r_r0;
    if (cpy_r_r1) goto CPyL2;
    cpy_r_r2 = cpy_r_r1;
    goto CPyL6;
CPyL2: ;
    cpy_r_r3 = CPyStatics[4500]; /* 'dataclass' */
    if (likely(cpy_r_info != Py_None))
        cpy_r_r4 = cpy_r_info;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "is_processed_dataclass", 1092, CPyStatic_dataclasses___globals, "mypy.nodes.TypeInfo", cpy_r_info);
        goto CPyL7;
    }
    cpy_r_r5 = ((mypy___nodes___TypeInfoObject *)cpy_r_r4)->_metadata;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/plugins/dataclasses.py", "is_processed_dataclass", "TypeInfo", "metadata", 1092, CPyStatic_dataclasses___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r5);
CPyL4: ;
    cpy_r_r6 = PyDict_Contains(cpy_r_r5, cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "is_processed_dataclass", 1092, CPyStatic_dataclasses___globals);
        goto CPyL7;
    }
    cpy_r_r8 = cpy_r_r6;
    cpy_r_r2 = cpy_r_r8;
CPyL6: ;
    return cpy_r_r2;
CPyL7: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyObject *CPyPy_dataclasses___is_processed_dataclass(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:is_processed_dataclass", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_info;
    if ((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo))
        arg_info = obj_info;
    else {
        arg_info = NULL;
    }
    if (arg_info != NULL) goto __LL4882;
    if (obj_info == Py_None)
        arg_info = obj_info;
    else {
        arg_info = NULL;
    }
    if (arg_info != NULL) goto __LL4882;
    CPy_TypeError("mypy.nodes.TypeInfo or None", obj_info); 
    goto fail;
__LL4882: ;
    char retval = CPyDef_dataclasses___is_processed_dataclass(arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "is_processed_dataclass", 1091, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses___check_post_init(PyObject *cpy_r_api, PyObject *cpy_r_defn, PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
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
    PyObject *cpy_r_r15;
    PyObject *cpy_r_ideal_sig_method;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
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
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_ideal_sig;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyPtr cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyTagged cpy_r_r81;
    CPyTagged cpy_r_r82;
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
    char cpy_r_r99;
    char cpy_r_r100;
    cpy_r_r0 = ((mypy___nodes___FuncItemObject *)cpy_r_defn)->_type;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 == cpy_r_r1;
    if (!cpy_r_r2) goto CPyL2;
    return 1;
CPyL2: ;
    cpy_r_r3 = ((mypy___nodes___FuncItemObject *)cpy_r_defn)->_type;
    cpy_r_r4 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r5 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r6 = *(PyObject * *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 == cpy_r_r4;
    if (!cpy_r_r7) goto CPyL4;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL5;
CPyL4: ;
    cpy_r_r9 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_r3)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    cpy_r_r8 = cpy_r_r12;
CPyL5: ;
    if (cpy_r_r8) goto CPyL8;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1098, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r14 = CPyStatics[4504]; /* '__mypy-post_init' */
    cpy_r_r15 = CPyDef_nodes___TypeInfo___get_method(cpy_r_info, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1100, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    cpy_r_ideal_sig_method = cpy_r_r15;
    cpy_r_r16 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r17 = cpy_r_ideal_sig_method != cpy_r_r16;
    if (cpy_r_r17) goto CPyL11;
    cpy_r_r18 = cpy_r_r17;
    goto CPyL25;
CPyL11: ;
    CPy_INCREF(cpy_r_ideal_sig_method);
    if ((Py_TYPE(cpy_r_ideal_sig_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_ideal_sig_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_ideal_sig_method) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r19 = cpy_r_ideal_sig_method;
    else {
        cpy_r_r19 = NULL;
    }
    if (cpy_r_r19 != NULL) goto __LL4883;
    if (Py_TYPE(cpy_r_ideal_sig_method) == CPyType_nodes___Decorator)
        cpy_r_r19 = cpy_r_ideal_sig_method;
    else {
        cpy_r_r19 = NULL;
    }
    if (cpy_r_r19 != NULL) goto __LL4883;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1101, CPyStatic_dataclasses___globals, "union[mypy.nodes.FuncBase, mypy.nodes.Decorator]", cpy_r_ideal_sig_method);
    goto CPyL56;
__LL4883: ;
    cpy_r_r20 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_r19)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    if (!cpy_r_r23) goto CPyL14;
    cpy_r_r24 = cpy_r_r23;
    goto CPyL15;
CPyL14: ;
    cpy_r_r25 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r26 = (CPyPtr)&((PyObject *)cpy_r_r19)->ob_type;
    cpy_r_r27 = *(PyObject * *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 == cpy_r_r25;
    cpy_r_r24 = cpy_r_r28;
CPyL15: ;
    if (!cpy_r_r24) goto CPyL17;
    cpy_r_r29 = cpy_r_r24;
    goto CPyL18;
CPyL17: ;
    cpy_r_r30 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r31 = (CPyPtr)&((PyObject *)cpy_r_r19)->ob_type;
    cpy_r_r32 = *(PyObject * *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 == cpy_r_r30;
    cpy_r_r29 = cpy_r_r33;
CPyL18: ;
    if (!cpy_r_r29) goto CPyL21;
    if (likely((Py_TYPE(cpy_r_r19) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r19) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_r19) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r34 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1101, CPyStatic_dataclasses___globals, "mypy.nodes.FuncBase", cpy_r_r19);
        goto CPyL56;
    }
    cpy_r_r35 = ((mypy___nodes___FuncBaseObject *)cpy_r_r34)->_type;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35;
    goto CPyL24;
CPyL21: ;
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_nodes___Decorator))
        cpy_r_r37 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1101, CPyStatic_dataclasses___globals, "mypy.nodes.Decorator", cpy_r_r19);
        goto CPyL56;
    }
    cpy_r_r38 = CPY_GET_ATTR(cpy_r_r37, CPyType_nodes___Decorator, 10, mypy___nodes___DecoratorObject, PyObject *); /* type */
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1101, CPyStatic_dataclasses___globals);
        goto CPyL56;
    }
CPyL23: ;
    cpy_r_r36 = cpy_r_r38;
CPyL24: ;
    cpy_r_r39 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r40 = cpy_r_r36 != cpy_r_r39;
    CPy_DECREF(cpy_r_r36);
    cpy_r_r18 = cpy_r_r40;
CPyL25: ;
    if (cpy_r_r18) {
        goto CPyL28;
    } else
        goto CPyL57;
CPyL26: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1101, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL28: ;
    if ((Py_TYPE(cpy_r_ideal_sig_method) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_ideal_sig_method) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_ideal_sig_method) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r42 = cpy_r_ideal_sig_method;
    else {
        cpy_r_r42 = NULL;
    }
    if (cpy_r_r42 != NULL) goto __LL4884;
    if (Py_TYPE(cpy_r_ideal_sig_method) == CPyType_nodes___Decorator)
        cpy_r_r42 = cpy_r_ideal_sig_method;
    else {
        cpy_r_r42 = NULL;
    }
    if (cpy_r_r42 != NULL) goto __LL4884;
    CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1102, CPyStatic_dataclasses___globals, "union[mypy.nodes.FuncBase, mypy.nodes.Decorator]", cpy_r_ideal_sig_method);
    goto CPyL55;
__LL4884: ;
    cpy_r_r43 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r44 = (CPyPtr)&((PyObject *)cpy_r_r42)->ob_type;
    cpy_r_r45 = *(PyObject * *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 == cpy_r_r43;
    if (!cpy_r_r46) goto CPyL31;
    cpy_r_r47 = cpy_r_r46;
    goto CPyL32;
CPyL31: ;
    cpy_r_r48 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r49 = (CPyPtr)&((PyObject *)cpy_r_r42)->ob_type;
    cpy_r_r50 = *(PyObject * *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 == cpy_r_r48;
    cpy_r_r47 = cpy_r_r51;
CPyL32: ;
    if (!cpy_r_r47) goto CPyL34;
    cpy_r_r52 = cpy_r_r47;
    goto CPyL35;
CPyL34: ;
    cpy_r_r53 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_r42)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    cpy_r_r52 = cpy_r_r56;
CPyL35: ;
    if (!cpy_r_r52) goto CPyL39;
    if (likely((Py_TYPE(cpy_r_r42) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r42) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_r42) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r57 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1102, CPyStatic_dataclasses___globals, "mypy.nodes.FuncBase", cpy_r_r42);
        goto CPyL55;
    }
    cpy_r_r58 = ((mypy___nodes___FuncBaseObject *)cpy_r_r57)->_type;
    CPy_INCREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r57);
    if (likely(PyObject_TypeCheck(cpy_r_r58, CPyType_types___Type)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1102, CPyStatic_dataclasses___globals, "mypy.types.Type", cpy_r_r58);
        goto CPyL55;
    }
    cpy_r_r60 = cpy_r_r59;
    goto CPyL43;
CPyL39: ;
    if (likely(Py_TYPE(cpy_r_r42) == CPyType_nodes___Decorator))
        cpy_r_r61 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1102, CPyStatic_dataclasses___globals, "mypy.nodes.Decorator", cpy_r_r42);
        goto CPyL55;
    }
    cpy_r_r62 = CPY_GET_ATTR(cpy_r_r61, CPyType_nodes___Decorator, 10, mypy___nodes___DecoratorObject, PyObject *); /* type */
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1102, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
CPyL41: ;
    if (likely(cpy_r_r62 != Py_None))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1102, CPyStatic_dataclasses___globals, "mypy.types.Type", cpy_r_r62);
        goto CPyL55;
    }
    cpy_r_r60 = cpy_r_r63;
CPyL43: ;
    cpy_r_ideal_sig = cpy_r_r60;
    cpy_r_r64 = (PyObject *)CPyType_types___ProperType;
    cpy_r_r65 = CPy_TypeCheck(cpy_r_ideal_sig, cpy_r_r64);
    if (cpy_r_r65) {
        goto CPyL46;
    } else
        goto CPyL58;
CPyL44: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r66 = 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1103, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r67 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r68 = (CPyPtr)&((PyObject *)cpy_r_ideal_sig)->ob_type;
    cpy_r_r69 = *(PyObject * *)cpy_r_r68;
    cpy_r_r70 = cpy_r_r69 == cpy_r_r67;
    if (cpy_r_r70) {
        goto CPyL49;
    } else
        goto CPyL59;
CPyL47: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r71 = 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1104, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    CPy_Unreachable();
CPyL49: ;
    if (likely(Py_TYPE(cpy_r_ideal_sig) == CPyType_types___CallableType))
        cpy_r_r72 = cpy_r_ideal_sig;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1105, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_ideal_sig);
        goto CPyL55;
    }
    cpy_r_r73 = CPyStatics[719]; /* '__post_init__' */
    cpy_r_r74 = NULL;
    cpy_r_r75 = NULL;
    cpy_r_r76 = NULL;
    cpy_r_r77 = NULL;
    cpy_r_r78 = NULL;
    cpy_r_r79 = NULL;
    cpy_r_r80 = NULL;
    cpy_r_r81 = CPY_INT_TAG;
    cpy_r_r82 = CPY_INT_TAG;
    cpy_r_r83 = NULL;
    cpy_r_r84 = NULL;
    cpy_r_r85 = NULL;
    cpy_r_r86 = NULL;
    cpy_r_r87 = NULL;
    cpy_r_r88 = NULL;
    cpy_r_r89 = NULL;
    cpy_r_r90 = NULL;
    cpy_r_r91 = NULL;
    cpy_r_r92 = CPyDef_types___CallableType___copy_modified(cpy_r_r72, cpy_r_r74, cpy_r_r75, cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r73, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r82, cpy_r_r83, cpy_r_r84, cpy_r_r85, cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r89, cpy_r_r90, cpy_r_r91);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1105, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    cpy_r_ideal_sig = cpy_r_r92;
    cpy_r_r93 = ((mypy___nodes___FuncItemObject *)cpy_r_defn)->_type;
    CPy_INCREF(cpy_r_r93);
    if (likely((Py_TYPE(cpy_r_r93) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r93) == CPyType_types___Overloaded)))
        cpy_r_r94 = cpy_r_r93;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1108, CPyStatic_dataclasses___globals, "mypy.types.FunctionLike", cpy_r_r93);
        goto CPyL60;
    }
    if (likely(Py_TYPE(cpy_r_ideal_sig) == CPyType_types___CallableType))
        cpy_r_r95 = cpy_r_ideal_sig;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1109, CPyStatic_dataclasses___globals, "mypy.types.CallableType", cpy_r_ideal_sig);
        goto CPyL61;
    }
    cpy_r_r96 = CPyStatics[719]; /* '__post_init__' */
    cpy_r_r97 = CPyStatics[719]; /* '__post_init__' */
    cpy_r_r98 = CPyStatics[4500]; /* 'dataclass' */
    cpy_r_r99 = CPyDef_checker___TypeChecker___check_override(cpy_r_api, cpy_r_r94, cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98, 0, 0, cpy_r_defn);
    CPy_DECREF(cpy_r_r94);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r99 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1107, CPyStatic_dataclasses___globals);
        goto CPyL55;
    }
    return 1;
CPyL55: ;
    cpy_r_r100 = 2;
    return cpy_r_r100;
CPyL56: ;
    CPy_DecRef(cpy_r_ideal_sig_method);
    goto CPyL55;
CPyL57: ;
    CPy_DECREF(cpy_r_ideal_sig_method);
    goto CPyL26;
CPyL58: ;
    CPy_DECREF(cpy_r_ideal_sig);
    goto CPyL44;
CPyL59: ;
    CPy_DECREF(cpy_r_ideal_sig);
    goto CPyL47;
CPyL60: ;
    CPy_DecRef(cpy_r_ideal_sig);
    goto CPyL55;
CPyL61: ;
    CPy_DecRef(cpy_r_r94);
    goto CPyL55;
}

PyObject *CPyPy_dataclasses___check_post_init(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"api", "defn", "info", 0};
    static CPyArg_Parser parser = {"OOO:check_post_init", kwlist, 0};
    PyObject *obj_api;
    PyObject *obj_defn;
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_api, &obj_defn, &obj_info)) {
        return NULL;
    }
    PyObject *arg_api;
    if (likely(Py_TYPE(obj_api) == CPyType_checker___TypeChecker))
        arg_api = obj_api;
    else {
        CPy_TypeError("mypy.checker.TypeChecker", obj_api); 
        goto fail;
    }
    PyObject *arg_defn;
    if (likely((Py_TYPE(obj_defn) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_defn) == CPyType_nodes___LambdaExpr)))
        arg_defn = obj_defn;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_defn); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    char retval = CPyDef_dataclasses___check_post_init(arg_api, arg_defn, arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/dataclasses.py", "check_post_init", 1095, CPyStatic_dataclasses___globals);
    return NULL;
}

char CPyDef_dataclasses_____top_level__(void) {
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
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    int32_t cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    tuple_T2OO cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
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
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    int32_t cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
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
    int32_t cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    char cpy_r_r150;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", -1, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_dataclasses___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 3, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9605]; /* ('TYPE_CHECKING', 'Final', 'Iterator', 'Literal') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_dataclasses___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 5, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9513]; /* ('errorcodes', 'message_registry') */
    cpy_r_r14 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r15 = CPyStatic_dataclasses___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 7, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyModule_mypy = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9585]; /* ('expand_type', 'expand_type_by_instance') */
    cpy_r_r18 = CPyStatics[31]; /* 'mypy.expandtype' */
    cpy_r_r19 = CPyStatic_dataclasses___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 8, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyModule_mypy___expandtype = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___expandtype);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9446]; /* ('meet_types',) */
    cpy_r_r22 = CPyStatics[932]; /* 'mypy.meet' */
    cpy_r_r23 = CPyStatic_dataclasses___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 9, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyModule_mypy___meet = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___meet);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9587]; /* ('format_type_bare',) */
    cpy_r_r26 = CPyStatics[530]; /* 'mypy.messages' */
    cpy_r_r27 = CPyStatic_dataclasses___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 10, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyModule_mypy___messages = cpy_r_r28;
    CPy_INCREF(CPyModule_mypy___messages);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9606]; /* ('ARG_NAMED', 'ARG_NAMED_OPT', 'ARG_OPT', 'ARG_POS',
                                     'ARG_STAR', 'ARG_STAR2', 'MDEF', 'Argument',
                                     'AssignmentStmt', 'Block', 'CallExpr', 'ClassDef',
                                     'Context', 'DataclassTransformSpec', 'Expression',
                                     'FuncDef', 'FuncItem', 'IfStmt', 'JsonDict', 'NameExpr',
                                     'Node', 'PlaceholderNode', 'RefExpr', 'Statement',
                                     'SymbolTableNode', 'TempNode', 'TypeAlias', 'TypeInfo',
                                     'TypeVarExpr', 'Var') */
    cpy_r_r30 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r31 = CPyStatic_dataclasses___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 11, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyModule_mypy___nodes = cpy_r_r32;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9607]; /* ('ClassDefContext', 'FunctionSigContext',
                                     'SemanticAnalyzerPluginInterface') */
    cpy_r_r34 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r35 = CPyStatic_dataclasses___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 43, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyModule_mypy___plugin = cpy_r_r36;
    CPy_INCREF(CPyModule_mypy___plugin);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9608]; /* ('_get_callee_type', '_get_decorator_bool_argument',
                                     'add_attribute_to_class', 'add_method_to_class',
                                     'deserialize_and_fixup_type') */
    cpy_r_r38 = CPyStatics[4441]; /* 'mypy.plugins.common' */
    cpy_r_r39 = CPyStatic_dataclasses___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 44, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyModule_mypy___plugins___common = cpy_r_r40;
    CPy_INCREF(CPyModule_mypy___plugins___common);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[9609]; /* ('find_dataclass_transform_spec',
                                     'require_bool_literal_argument') */
    cpy_r_r42 = CPyStatics[4478]; /* 'mypy.semanal_shared' */
    cpy_r_r43 = CPyStatic_dataclasses___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 51, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyModule_mypy___semanal_shared = cpy_r_r44;
    CPy_INCREF(CPyModule_mypy___semanal_shared);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[9591]; /* ('make_wildcard_trigger',) */
    cpy_r_r46 = CPyStatics[4443]; /* 'mypy.server.trigger' */
    cpy_r_r47 = CPyStatic_dataclasses___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 52, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyModule_mypy___server___trigger = cpy_r_r48;
    CPy_INCREF(CPyModule_mypy___server___trigger);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[9201]; /* ('state',) */
    cpy_r_r50 = CPyStatics[1020]; /* 'mypy.state' */
    cpy_r_r51 = CPyStatic_dataclasses___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 53, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyModule_mypy___state = cpy_r_r52;
    CPy_INCREF(CPyModule_mypy___state);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatics[9610]; /* ('map_type_from_supertype',
                                     'try_getting_literals_from_type') */
    cpy_r_r54 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r55 = CPyStatic_dataclasses___globals;
    cpy_r_r56 = CPyImport_ImportFromMany(cpy_r_r54, cpy_r_r53, cpy_r_r53, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 54, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyModule_mypy___typeops = cpy_r_r56;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r57 = CPyStatics[9611]; /* ('AnyType', 'CallableType', 'FunctionLike', 'Instance',
                                     'LiteralType', 'NoneType', 'ProperType', 'TupleType',
                                     'Type', 'TypeOfAny', 'TypeVarType', 'UninhabitedType',
                                     'UnionType', 'get_proper_type') */
    cpy_r_r58 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r59 = CPyStatic_dataclasses___globals;
    cpy_r_r60 = CPyImport_ImportFromMany(cpy_r_r58, cpy_r_r57, cpy_r_r57, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 55, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyModule_mypy___types = cpy_r_r60;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r61 = CPyStatics[9242]; /* ('fill_typevars',) */
    cpy_r_r62 = CPyStatics[110]; /* 'mypy.typevars' */
    cpy_r_r63 = CPyStatic_dataclasses___globals;
    cpy_r_r64 = CPyImport_ImportFromMany(cpy_r_r62, cpy_r_r61, cpy_r_r61, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 71, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyModule_mypy___typevars = cpy_r_r64;
    CPy_INCREF(CPyModule_mypy___typevars);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r65 = CPyStatic_dataclasses___globals;
    cpy_r_r66 = CPyStatics[58]; /* 'TYPE_CHECKING' */
    cpy_r_r67 = CPyDict_GetItem(cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 73, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    if (unlikely(!PyBool_Check(cpy_r_r67))) {
        CPy_TypeError("bool", cpy_r_r67); cpy_r_r68 = 2;
    } else
        cpy_r_r68 = cpy_r_r67 == Py_True;
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 73, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    cpy_r_r69 = CPyStatics[4500]; /* 'dataclass' */
    cpy_r_r70 = CPyStatics[4534]; /* 'dataclasses.dataclass' */
    cpy_r_r71 = PySet_New(NULL);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 77, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    cpy_r_r72 = PySet_Add(cpy_r_r71, cpy_r_r69);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 77, CPyStatic_dataclasses___globals);
        goto CPyL42;
    }
    cpy_r_r74 = PySet_Add(cpy_r_r71, cpy_r_r70);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 77, CPyStatic_dataclasses___globals);
        goto CPyL42;
    }
    CPyStatic_dataclasses___dataclass_makers = cpy_r_r71;
    CPy_INCREF(CPyStatic_dataclasses___dataclass_makers);
    cpy_r_r76 = CPyStatic_dataclasses___globals;
    cpy_r_r77 = CPyStatics[4535]; /* 'dataclass_makers' */
    cpy_r_r78 = CPyDict_SetItem(cpy_r_r76, cpy_r_r77, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 77, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    cpy_r_r80 = CPyStatics[4496]; /* '_DT' */
    cpy_r_r81 = CPyStatic_dataclasses___globals;
    cpy_r_r82 = CPyStatics[4467]; /* 'SELF_TVAR_NAME' */
    cpy_r_r83 = CPyDict_SetItem(cpy_r_r81, cpy_r_r82, cpy_r_r80);
    cpy_r_r84 = cpy_r_r83 >= 0;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 80, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    cpy_r_r85 = CPyStatics[4518]; /* 'dataclasses.Field' */
    cpy_r_r86 = CPyStatics[4536]; /* 'dataclasses.field' */
    cpy_r_r87.f0 = cpy_r_r85;
    cpy_r_r87.f1 = cpy_r_r86;
    CPy_INCREF(cpy_r_r87.f0);
    CPy_INCREF(cpy_r_r87.f1);
    cpy_r_r88 = 1 ? Py_True : Py_False;
    cpy_r_r89 = 0 ? Py_True : Py_False;
    cpy_r_r90 = 0 ? Py_True : Py_False;
    cpy_r_r91 = PyTuple_New(2);
    if (unlikely(cpy_r_r91 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4885 = cpy_r_r87.f0;
    PyTuple_SET_ITEM(cpy_r_r91, 0, __tmp4885);
    PyObject *__tmp4886 = cpy_r_r87.f1;
    PyTuple_SET_ITEM(cpy_r_r91, 1, __tmp4886);
    cpy_r_r92 = 0 ? Py_True : Py_False;
    cpy_r_r93 = CPyDef_nodes___DataclassTransformSpec(cpy_r_r88, cpy_r_r89, cpy_r_r90, cpy_r_r91, cpy_r_r92);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 81, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    CPyStatic_dataclasses____TRANSFORM_SPEC_FOR_DATACLASSES = cpy_r_r93;
    CPy_INCREF(CPyStatic_dataclasses____TRANSFORM_SPEC_FOR_DATACLASSES);
    cpy_r_r94 = CPyStatic_dataclasses___globals;
    cpy_r_r95 = CPyStatics[4537]; /* '_TRANSFORM_SPEC_FOR_DATACLASSES' */
    cpy_r_r96 = CPyDict_SetItem(cpy_r_r94, cpy_r_r95, cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    cpy_r_r97 = cpy_r_r96 >= 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 81, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    cpy_r_r98 = CPyStatics[4503]; /* '__mypy-replace' */
    cpy_r_r99 = CPyStatic_dataclasses___globals;
    cpy_r_r100 = CPyStatics[4538]; /* '_INTERNAL_REPLACE_SYM_NAME' */
    cpy_r_r101 = CPyDict_SetItem(cpy_r_r99, cpy_r_r100, cpy_r_r98);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 88, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    cpy_r_r103 = CPyStatics[4504]; /* '__mypy-post_init' */
    cpy_r_r104 = CPyStatic_dataclasses___globals;
    cpy_r_r105 = CPyStatics[4539]; /* '_INTERNAL_POST_INIT_SYM_NAME' */
    cpy_r_r106 = CPyDict_SetItem(cpy_r_r104, cpy_r_r105, cpy_r_r103);
    cpy_r_r107 = cpy_r_r106 >= 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 89, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    cpy_r_r108 = NULL;
    cpy_r_r109 = CPyStatics[4540]; /* 'mypy.plugins.dataclasses' */
    cpy_r_r110 = (PyObject *)CPyType_dataclasses___DataclassAttribute_template;
    cpy_r_r111 = CPyType_FromTemplate(cpy_r_r110, cpy_r_r108, cpy_r_r109);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 92, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    cpy_r_r112 = CPyDef_dataclasses___DataclassAttribute_trait_vtable_setup();
    if (unlikely(cpy_r_r112 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", -1, CPyStatic_dataclasses___globals);
        goto CPyL43;
    }
    cpy_r_r113 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r114 = CPyStatics[2329]; /* 'name' */
    cpy_r_r115 = CPyStatics[2565]; /* 'alias' */
    cpy_r_r116 = CPyStatics[4493]; /* 'is_in_init' */
    cpy_r_r117 = CPyStatics[4494]; /* 'is_init_var' */
    cpy_r_r118 = CPyStatics[4383]; /* 'has_default' */
    cpy_r_r119 = CPyStatics[2272]; /* 'line' */
    cpy_r_r120 = CPyStatics[2273]; /* 'column' */
    cpy_r_r121 = CPyStatics[802]; /* 'type' */
    cpy_r_r122 = CPyStatics[2563]; /* 'info' */
    cpy_r_r123 = CPyStatics[4385]; /* 'kw_only' */
    cpy_r_r124 = CPyStatics[4495]; /* 'is_neither_frozen_nor_nonfrozen' */
    cpy_r_r125 = CPyStatics[4541]; /* '_api' */
    cpy_r_r126 = PyTuple_Pack(12, cpy_r_r114, cpy_r_r115, cpy_r_r116, cpy_r_r117, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124, cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 92, CPyStatic_dataclasses___globals);
        goto CPyL43;
    }
    cpy_r_r127 = PyObject_SetAttr(cpy_r_r111, cpy_r_r113, cpy_r_r126);
    CPy_DECREF(cpy_r_r126);
    cpy_r_r128 = cpy_r_r127 >= 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 92, CPyStatic_dataclasses___globals);
        goto CPyL43;
    }
    CPyType_dataclasses___DataclassAttribute = (PyTypeObject *)cpy_r_r111;
    CPy_INCREF(CPyType_dataclasses___DataclassAttribute);
    cpy_r_r129 = CPyStatic_dataclasses___globals;
    cpy_r_r130 = CPyStatics[4542]; /* 'DataclassAttribute' */
    cpy_r_r131 = CPyDict_SetItem(cpy_r_r129, cpy_r_r130, cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 92, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    cpy_r_r133 = NULL;
    cpy_r_r134 = CPyStatics[4540]; /* 'mypy.plugins.dataclasses' */
    cpy_r_r135 = (PyObject *)CPyType_dataclasses___DataclassTransformer_template;
    cpy_r_r136 = CPyType_FromTemplate(cpy_r_r135, cpy_r_r133, cpy_r_r134);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 201, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    cpy_r_r137 = CPyDef_dataclasses___DataclassTransformer_trait_vtable_setup();
    if (unlikely(cpy_r_r137 == 2)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", -1, CPyStatic_dataclasses___globals);
        goto CPyL44;
    }
    cpy_r_r138 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r139 = CPyStatics[4474]; /* '_cls' */
    cpy_r_r140 = CPyStatics[4543]; /* '_reason' */
    cpy_r_r141 = CPyStatics[4544]; /* '_spec' */
    cpy_r_r142 = CPyStatics[4541]; /* '_api' */
    cpy_r_r143 = PyTuple_Pack(4, cpy_r_r139, cpy_r_r140, cpy_r_r141, cpy_r_r142);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 201, CPyStatic_dataclasses___globals);
        goto CPyL44;
    }
    cpy_r_r144 = PyObject_SetAttr(cpy_r_r136, cpy_r_r138, cpy_r_r143);
    CPy_DECREF(cpy_r_r143);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 201, CPyStatic_dataclasses___globals);
        goto CPyL44;
    }
    CPyType_dataclasses___DataclassTransformer = (PyTypeObject *)cpy_r_r136;
    CPy_INCREF(CPyType_dataclasses___DataclassTransformer);
    cpy_r_r146 = CPyStatic_dataclasses___globals;
    cpy_r_r147 = CPyStatics[4545]; /* 'DataclassTransformer' */
    cpy_r_r148 = CPyDict_SetItem(cpy_r_r146, cpy_r_r147, cpy_r_r136);
    CPy_DECREF(cpy_r_r136);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/plugins/dataclasses.py", "<module>", 201, CPyStatic_dataclasses___globals);
        goto CPyL41;
    }
    return 1;
CPyL41: ;
    cpy_r_r150 = 2;
    return cpy_r_r150;
CPyL42: ;
    CPy_DecRef(cpy_r_r71);
    goto CPyL41;
CPyL43: ;
    CPy_DecRef(cpy_r_r111);
    goto CPyL41;
CPyL44: ;
    CPy_DecRef(cpy_r_r136);
    goto CPyL41;
}
