#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
checkstrformat___ConversionSpecifier_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *checkstrformat___ConversionSpecifier_setup(PyTypeObject *type);
PyObject *CPyDef_checkstrformat___ConversionSpecifier(PyObject *cpy_r_match, CPyTagged cpy_r_start_pos, char cpy_r_non_standard_format_spec);

static PyObject *
checkstrformat___ConversionSpecifier_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_checkstrformat___ConversionSpecifier) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = checkstrformat___ConversionSpecifier_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_checkstrformat___ConversionSpecifier_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
checkstrformat___ConversionSpecifier_traverse(mypy___checkstrformat___ConversionSpecifierObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_whole_seq);
    if (CPyTagged_CheckLong(self->_start_pos)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_start_pos));
    }
    Py_VISIT(self->_key);
    Py_VISIT(self->_conv_type);
    Py_VISIT(self->_flags);
    Py_VISIT(self->_width);
    Py_VISIT(self->_precision);
    Py_VISIT(self->_format_spec);
    Py_VISIT(self->_conversion);
    Py_VISIT(self->_field);
    return 0;
}

static int
checkstrformat___ConversionSpecifier_clear(mypy___checkstrformat___ConversionSpecifierObject *self)
{
    Py_CLEAR(self->_whole_seq);
    if (CPyTagged_CheckLong(self->_start_pos)) {
        CPyTagged __tmp = self->_start_pos;
        self->_start_pos = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_key);
    Py_CLEAR(self->_conv_type);
    Py_CLEAR(self->_flags);
    Py_CLEAR(self->_width);
    Py_CLEAR(self->_precision);
    Py_CLEAR(self->_format_spec);
    Py_CLEAR(self->_conversion);
    Py_CLEAR(self->_field);
    return 0;
}

static void
checkstrformat___ConversionSpecifier_dealloc(mypy___checkstrformat___ConversionSpecifierObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, checkstrformat___ConversionSpecifier_dealloc)
    checkstrformat___ConversionSpecifier_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem checkstrformat___ConversionSpecifier_vtable[3];
static bool
CPyDef_checkstrformat___ConversionSpecifier_trait_vtable_setup(void)
{
    CPyVTableItem checkstrformat___ConversionSpecifier_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_checkstrformat___ConversionSpecifier_____init__,
        (CPyVTableItem)CPyDef_checkstrformat___ConversionSpecifier___has_key,
        (CPyVTableItem)CPyDef_checkstrformat___ConversionSpecifier___has_star,
    };
    memcpy(checkstrformat___ConversionSpecifier_vtable, checkstrformat___ConversionSpecifier_vtable_scratch, sizeof(checkstrformat___ConversionSpecifier_vtable));
    return 1;
}

static PyObject *
checkstrformat___ConversionSpecifier_get_whole_seq(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure);
static int
checkstrformat___ConversionSpecifier_set_whole_seq(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure);
static PyObject *
checkstrformat___ConversionSpecifier_get_start_pos(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure);
static int
checkstrformat___ConversionSpecifier_set_start_pos(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure);
static PyObject *
checkstrformat___ConversionSpecifier_get_key(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure);
static int
checkstrformat___ConversionSpecifier_set_key(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure);
static PyObject *
checkstrformat___ConversionSpecifier_get_conv_type(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure);
static int
checkstrformat___ConversionSpecifier_set_conv_type(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure);
static PyObject *
checkstrformat___ConversionSpecifier_get_flags(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure);
static int
checkstrformat___ConversionSpecifier_set_flags(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure);
static PyObject *
checkstrformat___ConversionSpecifier_get_width(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure);
static int
checkstrformat___ConversionSpecifier_set_width(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure);
static PyObject *
checkstrformat___ConversionSpecifier_get_precision(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure);
static int
checkstrformat___ConversionSpecifier_set_precision(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure);
static PyObject *
checkstrformat___ConversionSpecifier_get_format_spec(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure);
static int
checkstrformat___ConversionSpecifier_set_format_spec(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure);
static PyObject *
checkstrformat___ConversionSpecifier_get_non_standard_format_spec(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure);
static int
checkstrformat___ConversionSpecifier_set_non_standard_format_spec(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure);
static PyObject *
checkstrformat___ConversionSpecifier_get_conversion(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure);
static int
checkstrformat___ConversionSpecifier_set_conversion(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure);
static PyObject *
checkstrformat___ConversionSpecifier_get_field(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure);
static int
checkstrformat___ConversionSpecifier_set_field(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure);

static PyGetSetDef checkstrformat___ConversionSpecifier_getseters[] = {
    {"whole_seq",
     (getter)checkstrformat___ConversionSpecifier_get_whole_seq, (setter)checkstrformat___ConversionSpecifier_set_whole_seq,
     NULL, NULL},
    {"start_pos",
     (getter)checkstrformat___ConversionSpecifier_get_start_pos, (setter)checkstrformat___ConversionSpecifier_set_start_pos,
     NULL, NULL},
    {"key",
     (getter)checkstrformat___ConversionSpecifier_get_key, (setter)checkstrformat___ConversionSpecifier_set_key,
     NULL, NULL},
    {"conv_type",
     (getter)checkstrformat___ConversionSpecifier_get_conv_type, (setter)checkstrformat___ConversionSpecifier_set_conv_type,
     NULL, NULL},
    {"flags",
     (getter)checkstrformat___ConversionSpecifier_get_flags, (setter)checkstrformat___ConversionSpecifier_set_flags,
     NULL, NULL},
    {"width",
     (getter)checkstrformat___ConversionSpecifier_get_width, (setter)checkstrformat___ConversionSpecifier_set_width,
     NULL, NULL},
    {"precision",
     (getter)checkstrformat___ConversionSpecifier_get_precision, (setter)checkstrformat___ConversionSpecifier_set_precision,
     NULL, NULL},
    {"format_spec",
     (getter)checkstrformat___ConversionSpecifier_get_format_spec, (setter)checkstrformat___ConversionSpecifier_set_format_spec,
     NULL, NULL},
    {"non_standard_format_spec",
     (getter)checkstrformat___ConversionSpecifier_get_non_standard_format_spec, (setter)checkstrformat___ConversionSpecifier_set_non_standard_format_spec,
     NULL, NULL},
    {"conversion",
     (getter)checkstrformat___ConversionSpecifier_get_conversion, (setter)checkstrformat___ConversionSpecifier_set_conversion,
     NULL, NULL},
    {"field",
     (getter)checkstrformat___ConversionSpecifier_get_field, (setter)checkstrformat___ConversionSpecifier_set_field,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef checkstrformat___ConversionSpecifier_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_checkstrformat___ConversionSpecifier_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"has_key",
     (PyCFunction)CPyPy_checkstrformat___ConversionSpecifier___has_key,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"has_star",
     (PyCFunction)CPyPy_checkstrformat___ConversionSpecifier___has_star,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_checkstrformat___ConversionSpecifier_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ConversionSpecifier",
    .tp_new = checkstrformat___ConversionSpecifier_new,
    .tp_dealloc = (destructor)checkstrformat___ConversionSpecifier_dealloc,
    .tp_traverse = (traverseproc)checkstrformat___ConversionSpecifier_traverse,
    .tp_clear = (inquiry)checkstrformat___ConversionSpecifier_clear,
    .tp_getset = checkstrformat___ConversionSpecifier_getseters,
    .tp_methods = checkstrformat___ConversionSpecifier_methods,
    .tp_init = checkstrformat___ConversionSpecifier_init,
    .tp_basicsize = sizeof(mypy___checkstrformat___ConversionSpecifierObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_checkstrformat___ConversionSpecifier_template = &CPyType_checkstrformat___ConversionSpecifier_template_;

static PyObject *
checkstrformat___ConversionSpecifier_setup(PyTypeObject *type)
{
    mypy___checkstrformat___ConversionSpecifierObject *self;
    self = (mypy___checkstrformat___ConversionSpecifierObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = checkstrformat___ConversionSpecifier_vtable;
    self->_start_pos = CPY_INT_TAG;
    self->_non_standard_format_spec = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_checkstrformat___ConversionSpecifier(PyObject *cpy_r_match, CPyTagged cpy_r_start_pos, char cpy_r_non_standard_format_spec)
{
    PyObject *self = checkstrformat___ConversionSpecifier_setup(CPyType_checkstrformat___ConversionSpecifier);
    if (self == NULL)
        return NULL;
    char res = CPyDef_checkstrformat___ConversionSpecifier_____init__(self, cpy_r_match, cpy_r_start_pos, cpy_r_non_standard_format_spec);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
checkstrformat___ConversionSpecifier_get_whole_seq(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure)
{
    if (unlikely(self->_whole_seq == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'whole_seq' of 'ConversionSpecifier' undefined");
        return NULL;
    }
    CPy_INCREF(self->_whole_seq);
    PyObject *retval = self->_whole_seq;
    return retval;
}

static int
checkstrformat___ConversionSpecifier_set_whole_seq(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConversionSpecifier' object attribute 'whole_seq' cannot be deleted");
        return -1;
    }
    if (self->_whole_seq != NULL) {
        CPy_DECREF(self->_whole_seq);
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
    self->_whole_seq = tmp;
    return 0;
}

static PyObject *
checkstrformat___ConversionSpecifier_get_start_pos(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure)
{
    if (unlikely(self->_start_pos == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'start_pos' of 'ConversionSpecifier' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_start_pos);
    PyObject *retval = CPyTagged_StealAsObject(self->_start_pos);
    return retval;
}

static int
checkstrformat___ConversionSpecifier_set_start_pos(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConversionSpecifier' object attribute 'start_pos' cannot be deleted");
        return -1;
    }
    if (self->_start_pos != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_start_pos);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_start_pos = tmp;
    return 0;
}

static PyObject *
checkstrformat___ConversionSpecifier_get_key(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure)
{
    if (unlikely(self->_key == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'key' of 'ConversionSpecifier' undefined");
        return NULL;
    }
    CPy_INCREF(self->_key);
    PyObject *retval = self->_key;
    return retval;
}

static int
checkstrformat___ConversionSpecifier_set_key(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConversionSpecifier' object attribute 'key' cannot be deleted");
        return -1;
    }
    if (self->_key != NULL) {
        CPy_DECREF(self->_key);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1549;
    tmp = value;
    if (tmp != NULL) goto __LL1549;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1549;
    CPy_TypeError("union[str, object, None]", value); 
    tmp = NULL;
__LL1549: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_key = tmp;
    return 0;
}

static PyObject *
checkstrformat___ConversionSpecifier_get_conv_type(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure)
{
    if (unlikely(self->_conv_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'conv_type' of 'ConversionSpecifier' undefined");
        return NULL;
    }
    CPy_INCREF(self->_conv_type);
    PyObject *retval = self->_conv_type;
    return retval;
}

static int
checkstrformat___ConversionSpecifier_set_conv_type(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConversionSpecifier' object attribute 'conv_type' cannot be deleted");
        return -1;
    }
    if (self->_conv_type != NULL) {
        CPy_DECREF(self->_conv_type);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1550;
    tmp = value;
    if (tmp != NULL) goto __LL1550;
    CPy_TypeError("union[str, object]", value); 
    tmp = NULL;
__LL1550: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_conv_type = tmp;
    return 0;
}

static PyObject *
checkstrformat___ConversionSpecifier_get_flags(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure)
{
    if (unlikely(self->_flags == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'flags' of 'ConversionSpecifier' undefined");
        return NULL;
    }
    CPy_INCREF(self->_flags);
    PyObject *retval = self->_flags;
    return retval;
}

static int
checkstrformat___ConversionSpecifier_set_flags(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConversionSpecifier' object attribute 'flags' cannot be deleted");
        return -1;
    }
    if (self->_flags != NULL) {
        CPy_DECREF(self->_flags);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1551;
    tmp = value;
    if (tmp != NULL) goto __LL1551;
    CPy_TypeError("union[str, object]", value); 
    tmp = NULL;
__LL1551: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_flags = tmp;
    return 0;
}

static PyObject *
checkstrformat___ConversionSpecifier_get_width(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure)
{
    if (unlikely(self->_width == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'width' of 'ConversionSpecifier' undefined");
        return NULL;
    }
    CPy_INCREF(self->_width);
    PyObject *retval = self->_width;
    return retval;
}

static int
checkstrformat___ConversionSpecifier_set_width(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConversionSpecifier' object attribute 'width' cannot be deleted");
        return -1;
    }
    if (self->_width != NULL) {
        CPy_DECREF(self->_width);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1552;
    tmp = value;
    if (tmp != NULL) goto __LL1552;
    CPy_TypeError("union[str, object]", value); 
    tmp = NULL;
__LL1552: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_width = tmp;
    return 0;
}

static PyObject *
checkstrformat___ConversionSpecifier_get_precision(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure)
{
    if (unlikely(self->_precision == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'precision' of 'ConversionSpecifier' undefined");
        return NULL;
    }
    CPy_INCREF(self->_precision);
    PyObject *retval = self->_precision;
    return retval;
}

static int
checkstrformat___ConversionSpecifier_set_precision(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConversionSpecifier' object attribute 'precision' cannot be deleted");
        return -1;
    }
    if (self->_precision != NULL) {
        CPy_DECREF(self->_precision);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1553;
    tmp = value;
    if (tmp != NULL) goto __LL1553;
    CPy_TypeError("union[str, object]", value); 
    tmp = NULL;
__LL1553: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_precision = tmp;
    return 0;
}

static PyObject *
checkstrformat___ConversionSpecifier_get_format_spec(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure)
{
    if (unlikely(self->_format_spec == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'format_spec' of 'ConversionSpecifier' undefined");
        return NULL;
    }
    CPy_INCREF(self->_format_spec);
    PyObject *retval = self->_format_spec;
    return retval;
}

static int
checkstrformat___ConversionSpecifier_set_format_spec(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConversionSpecifier' object attribute 'format_spec' cannot be deleted");
        return -1;
    }
    if (self->_format_spec != NULL) {
        CPy_DECREF(self->_format_spec);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1554;
    tmp = value;
    if (tmp != NULL) goto __LL1554;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1554;
    CPy_TypeError("union[str, object, None]", value); 
    tmp = NULL;
__LL1554: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_format_spec = tmp;
    return 0;
}

static PyObject *
checkstrformat___ConversionSpecifier_get_non_standard_format_spec(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure)
{
    PyObject *retval = self->_non_standard_format_spec ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
checkstrformat___ConversionSpecifier_set_non_standard_format_spec(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConversionSpecifier' object attribute 'non_standard_format_spec' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_non_standard_format_spec = tmp;
    return 0;
}

static PyObject *
checkstrformat___ConversionSpecifier_get_conversion(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure)
{
    if (unlikely(self->_conversion == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'conversion' of 'ConversionSpecifier' undefined");
        return NULL;
    }
    CPy_INCREF(self->_conversion);
    PyObject *retval = self->_conversion;
    return retval;
}

static int
checkstrformat___ConversionSpecifier_set_conversion(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConversionSpecifier' object attribute 'conversion' cannot be deleted");
        return -1;
    }
    if (self->_conversion != NULL) {
        CPy_DECREF(self->_conversion);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1555;
    tmp = value;
    if (tmp != NULL) goto __LL1555;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1555;
    CPy_TypeError("union[str, object, None]", value); 
    tmp = NULL;
__LL1555: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_conversion = tmp;
    return 0;
}

static PyObject *
checkstrformat___ConversionSpecifier_get_field(mypy___checkstrformat___ConversionSpecifierObject *self, void *closure)
{
    if (unlikely(self->_field == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'field' of 'ConversionSpecifier' undefined");
        return NULL;
    }
    CPy_INCREF(self->_field);
    PyObject *retval = self->_field;
    return retval;
}

static int
checkstrformat___ConversionSpecifier_set_field(mypy___checkstrformat___ConversionSpecifierObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ConversionSpecifier' object attribute 'field' cannot be deleted");
        return -1;
    }
    if (self->_field != NULL) {
        CPy_DECREF(self->_field);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1556;
    tmp = value;
    if (tmp != NULL) goto __LL1556;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1556;
    CPy_TypeError("union[str, object, None]", value); 
    tmp = NULL;
__LL1556: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_field = tmp;
    return 0;
}

static int
checkstrformat___StringFormatterChecker_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *checkstrformat___StringFormatterChecker_setup(PyTypeObject *type);
PyObject *CPyDef_checkstrformat___StringFormatterChecker(PyObject *cpy_r_exprchk, PyObject *cpy_r_chk, PyObject *cpy_r_msg);

static PyObject *
checkstrformat___StringFormatterChecker_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_checkstrformat___StringFormatterChecker) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = checkstrformat___StringFormatterChecker_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_checkstrformat___StringFormatterChecker_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
checkstrformat___StringFormatterChecker_traverse(mypy___checkstrformat___StringFormatterCheckerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_chk);
    Py_VISIT(self->_msg);
    Py_VISIT(self->_exprchk);
    return 0;
}

static int
checkstrformat___StringFormatterChecker_clear(mypy___checkstrformat___StringFormatterCheckerObject *self)
{
    Py_CLEAR(self->_chk);
    Py_CLEAR(self->_msg);
    Py_CLEAR(self->_exprchk);
    return 0;
}

static void
checkstrformat___StringFormatterChecker_dealloc(mypy___checkstrformat___StringFormatterCheckerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, checkstrformat___StringFormatterChecker_dealloc)
    checkstrformat___StringFormatterChecker_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem checkstrformat___StringFormatterChecker_vtable[25];
static bool
CPyDef_checkstrformat___StringFormatterChecker_trait_vtable_setup(void)
{
    CPyVTableItem checkstrformat___StringFormatterChecker_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker_____init__,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___check_str_format_call,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___check_specs_in_format_call,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___perform_special_format_checks,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___find_replacements_in_call,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___get_expr_by_position,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___get_expr_by_name,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___auto_generate_keys,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___apply_field_accessors,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___validate_and_transform_accessors,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___check_str_interpolation,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___analyze_conversion_specifiers,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___check_simple_str_interpolation,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___check_mapping_str_interpolation,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___build_dict_type,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___build_replacement_checkers,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___replacement_checkers,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___checkers_for_star,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___check_placeholder_type,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___checkers_for_regular_type,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___check_s_special_cases,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___checkers_for_c_type,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___conversion_type,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___named_type,
        (CPyVTableItem)CPyDef_checkstrformat___StringFormatterChecker___accept,
    };
    memcpy(checkstrformat___StringFormatterChecker_vtable, checkstrformat___StringFormatterChecker_vtable_scratch, sizeof(checkstrformat___StringFormatterChecker_vtable));
    return 1;
}

static PyObject *
checkstrformat___StringFormatterChecker_get_chk(mypy___checkstrformat___StringFormatterCheckerObject *self, void *closure);
static int
checkstrformat___StringFormatterChecker_set_chk(mypy___checkstrformat___StringFormatterCheckerObject *self, PyObject *value, void *closure);
static PyObject *
checkstrformat___StringFormatterChecker_get_msg(mypy___checkstrformat___StringFormatterCheckerObject *self, void *closure);
static int
checkstrformat___StringFormatterChecker_set_msg(mypy___checkstrformat___StringFormatterCheckerObject *self, PyObject *value, void *closure);
static PyObject *
checkstrformat___StringFormatterChecker_get_exprchk(mypy___checkstrformat___StringFormatterCheckerObject *self, void *closure);
static int
checkstrformat___StringFormatterChecker_set_exprchk(mypy___checkstrformat___StringFormatterCheckerObject *self, PyObject *value, void *closure);

static PyGetSetDef checkstrformat___StringFormatterChecker_getseters[] = {
    {"chk",
     (getter)checkstrformat___StringFormatterChecker_get_chk, (setter)checkstrformat___StringFormatterChecker_set_chk,
     NULL, NULL},
    {"msg",
     (getter)checkstrformat___StringFormatterChecker_get_msg, (setter)checkstrformat___StringFormatterChecker_set_msg,
     NULL, NULL},
    {"exprchk",
     (getter)checkstrformat___StringFormatterChecker_get_exprchk, (setter)checkstrformat___StringFormatterChecker_set_exprchk,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef checkstrformat___StringFormatterChecker_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_str_format_call",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___check_str_format_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_specs_in_format_call",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___check_specs_in_format_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"perform_special_format_checks",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___perform_special_format_checks,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"find_replacements_in_call",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___find_replacements_in_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_expr_by_position",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___get_expr_by_position,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_expr_by_name",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___get_expr_by_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"auto_generate_keys",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___auto_generate_keys,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"apply_field_accessors",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___apply_field_accessors,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"validate_and_transform_accessors",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___validate_and_transform_accessors,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_str_interpolation",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___check_str_interpolation,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"analyze_conversion_specifiers",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___analyze_conversion_specifiers,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_simple_str_interpolation",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___check_simple_str_interpolation,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_mapping_str_interpolation",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___check_mapping_str_interpolation,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"build_dict_type",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___build_dict_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"build_replacement_checkers",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___build_replacement_checkers,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"replacement_checkers",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___replacement_checkers,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"checkers_for_star",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___checkers_for_star,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_placeholder_type",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___check_placeholder_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"checkers_for_regular_type",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___checkers_for_regular_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"check_s_special_cases",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___check_s_special_cases,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"checkers_for_c_type",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___checkers_for_c_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"conversion_type",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___conversion_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"named_type",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___named_type,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_checkstrformat___StringFormatterChecker___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_checkstrformat___StringFormatterChecker_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "StringFormatterChecker",
    .tp_new = checkstrformat___StringFormatterChecker_new,
    .tp_dealloc = (destructor)checkstrformat___StringFormatterChecker_dealloc,
    .tp_traverse = (traverseproc)checkstrformat___StringFormatterChecker_traverse,
    .tp_clear = (inquiry)checkstrformat___StringFormatterChecker_clear,
    .tp_getset = checkstrformat___StringFormatterChecker_getseters,
    .tp_methods = checkstrformat___StringFormatterChecker_methods,
    .tp_init = checkstrformat___StringFormatterChecker_init,
    .tp_basicsize = sizeof(mypy___checkstrformat___StringFormatterCheckerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_checkstrformat___StringFormatterChecker_template = &CPyType_checkstrformat___StringFormatterChecker_template_;

static PyObject *
checkstrformat___StringFormatterChecker_setup(PyTypeObject *type)
{
    mypy___checkstrformat___StringFormatterCheckerObject *self;
    self = (mypy___checkstrformat___StringFormatterCheckerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = checkstrformat___StringFormatterChecker_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_checkstrformat___StringFormatterChecker(PyObject *cpy_r_exprchk, PyObject *cpy_r_chk, PyObject *cpy_r_msg)
{
    PyObject *self = checkstrformat___StringFormatterChecker_setup(CPyType_checkstrformat___StringFormatterChecker);
    if (self == NULL)
        return NULL;
    char res = CPyDef_checkstrformat___StringFormatterChecker_____init__(self, cpy_r_exprchk, cpy_r_chk, cpy_r_msg);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
checkstrformat___StringFormatterChecker_get_chk(mypy___checkstrformat___StringFormatterCheckerObject *self, void *closure)
{
    if (unlikely(self->_chk == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'chk' of 'StringFormatterChecker' undefined");
        return NULL;
    }
    CPy_INCREF(self->_chk);
    PyObject *retval = self->_chk;
    return retval;
}

static int
checkstrformat___StringFormatterChecker_set_chk(mypy___checkstrformat___StringFormatterCheckerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StringFormatterChecker' object attribute 'chk' cannot be deleted");
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
checkstrformat___StringFormatterChecker_get_msg(mypy___checkstrformat___StringFormatterCheckerObject *self, void *closure)
{
    if (unlikely(self->_msg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'msg' of 'StringFormatterChecker' undefined");
        return NULL;
    }
    CPy_INCREF(self->_msg);
    PyObject *retval = self->_msg;
    return retval;
}

static int
checkstrformat___StringFormatterChecker_set_msg(mypy___checkstrformat___StringFormatterCheckerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StringFormatterChecker' object attribute 'msg' cannot be deleted");
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
checkstrformat___StringFormatterChecker_get_exprchk(mypy___checkstrformat___StringFormatterCheckerObject *self, void *closure)
{
    if (unlikely(self->_exprchk == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'exprchk' of 'StringFormatterChecker' undefined");
        return NULL;
    }
    CPy_INCREF(self->_exprchk);
    PyObject *retval = self->_exprchk;
    return retval;
}

static int
checkstrformat___StringFormatterChecker_set_exprchk(mypy___checkstrformat___StringFormatterCheckerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StringFormatterChecker' object attribute 'exprchk' cannot be deleted");
        return -1;
    }
    if (self->_exprchk != NULL) {
        CPy_DECREF(self->_exprchk);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_checkexpr___ExpressionChecker))
        tmp = value;
    else {
        CPy_TypeError("mypy.checkexpr.ExpressionChecker", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_exprchk = tmp;
    return 0;
}

static PyObject *checkstrformat___checkers_for_star_StringFormatterChecker_env_setup(PyTypeObject *type);
PyObject *CPyDef_checkstrformat___checkers_for_star_StringFormatterChecker_env(void);

static PyObject *
checkstrformat___checkers_for_star_StringFormatterChecker_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_checkstrformat___checkers_for_star_StringFormatterChecker_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return checkstrformat___checkers_for_star_StringFormatterChecker_env_setup(type);
}

static int
checkstrformat___checkers_for_star_StringFormatterChecker_env_traverse(mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_context);
    Py_VISIT(self->_expected);
    Py_VISIT(self->_check_type);
    Py_VISIT(self->_check_expr);
    return 0;
}

static int
checkstrformat___checkers_for_star_StringFormatterChecker_env_clear(mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_context);
    Py_CLEAR(self->_expected);
    Py_CLEAR(self->_check_type);
    Py_CLEAR(self->_check_expr);
    return 0;
}

static void
checkstrformat___checkers_for_star_StringFormatterChecker_env_dealloc(mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, checkstrformat___checkers_for_star_StringFormatterChecker_env_dealloc)
    checkstrformat___checkers_for_star_StringFormatterChecker_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem checkstrformat___checkers_for_star_StringFormatterChecker_env_vtable[1];
static bool
CPyDef_checkstrformat___checkers_for_star_StringFormatterChecker_env_trait_vtable_setup(void)
{
    CPyVTableItem checkstrformat___checkers_for_star_StringFormatterChecker_env_vtable_scratch[] = {
        NULL
    };
    memcpy(checkstrformat___checkers_for_star_StringFormatterChecker_env_vtable, checkstrformat___checkers_for_star_StringFormatterChecker_env_vtable_scratch, sizeof(checkstrformat___checkers_for_star_StringFormatterChecker_env_vtable));
    return 1;
}

static PyMethodDef checkstrformat___checkers_for_star_StringFormatterChecker_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_checkstrformat___checkers_for_star_StringFormatterChecker_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "checkers_for_star_StringFormatterChecker_env",
    .tp_new = checkstrformat___checkers_for_star_StringFormatterChecker_env_new,
    .tp_dealloc = (destructor)checkstrformat___checkers_for_star_StringFormatterChecker_env_dealloc,
    .tp_traverse = (traverseproc)checkstrformat___checkers_for_star_StringFormatterChecker_env_traverse,
    .tp_clear = (inquiry)checkstrformat___checkers_for_star_StringFormatterChecker_env_clear,
    .tp_methods = checkstrformat___checkers_for_star_StringFormatterChecker_env_methods,
    .tp_basicsize = sizeof(mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_checkstrformat___checkers_for_star_StringFormatterChecker_env_template = &CPyType_checkstrformat___checkers_for_star_StringFormatterChecker_env_template_;

static PyObject *
checkstrformat___checkers_for_star_StringFormatterChecker_env_setup(PyTypeObject *type)
{
    mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *self;
    self = (mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = checkstrformat___checkers_for_star_StringFormatterChecker_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_checkstrformat___checkers_for_star_StringFormatterChecker_env(void)
{
    PyObject *self = checkstrformat___checkers_for_star_StringFormatterChecker_env_setup(CPyType_checkstrformat___checkers_for_star_StringFormatterChecker_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_____get__(self, instance, owner);
}
PyMemberDef checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_setup(PyTypeObject *type);
PyObject *CPyDef_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj(void);

static PyObject *
checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_setup(type);
}

static int
checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_traverse(mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject))));
    return 0;
}

static int
checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_clear(mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject))));
    return 0;
}

static void
checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_dealloc(mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_dealloc)
    checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_vtable[2];
static bool
CPyDef_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_trait_vtable_setup(void)
{
    CPyVTableItem checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_____call__,
        (CPyVTableItem)CPyDef_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_____get__,
    };
    memcpy(checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_vtable, checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_vtable_scratch, sizeof(checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_vtable));
    return 1;
}

static PyMethodDef checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "check_type_checkers_for_star_StringFormatterChecker_obj",
    .tp_new = checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_new,
    .tp_dealloc = (destructor)checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_dealloc,
    .tp_traverse = (traverseproc)checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_traverse,
    .tp_clear = (inquiry)checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_clear,
    .tp_methods = checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj,
    .tp_members = checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_members,
    .tp_basicsize = sizeof(mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject),
    .tp_weaklistoffset = sizeof(mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_template = &CPyType_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_template_;

static PyObject *
checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_setup(PyTypeObject *type)
{
    mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject *self;
    self = (mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_vtable;
    self->vectorcall = CPyPy_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj(void)
{
    PyObject *self = checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_setup(CPyType_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_____get__(self, instance, owner);
}
PyMemberDef checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_setup(PyTypeObject *type);
PyObject *CPyDef_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj(void);

static PyObject *
checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_setup(type);
}

static int
checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_traverse(mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject))));
    return 0;
}

static int
checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_clear(mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject))));
    return 0;
}

static void
checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_dealloc(mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_dealloc)
    checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_vtable[2];
static bool
CPyDef_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_trait_vtable_setup(void)
{
    CPyVTableItem checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_____call__,
        (CPyVTableItem)CPyDef_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_____get__,
    };
    memcpy(checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_vtable, checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_vtable_scratch, sizeof(checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_vtable));
    return 1;
}

static PyMethodDef checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "check_expr_checkers_for_star_StringFormatterChecker_obj",
    .tp_new = checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_new,
    .tp_dealloc = (destructor)checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_dealloc,
    .tp_traverse = (traverseproc)checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_traverse,
    .tp_clear = (inquiry)checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_clear,
    .tp_methods = checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj,
    .tp_members = checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_members,
    .tp_basicsize = sizeof(mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject),
    .tp_weaklistoffset = sizeof(mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_template = &CPyType_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_template_;

static PyObject *
checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_setup(PyTypeObject *type)
{
    mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject *self;
    self = (mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_vtable;
    self->vectorcall = CPyPy_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj(void)
{
    PyObject *self = checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_setup(CPyType_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_setup(PyTypeObject *type);
PyObject *CPyDef_checkstrformat___checkers_for_regular_type_StringFormatterChecker_env(void);

static PyObject *
checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_checkstrformat___checkers_for_regular_type_StringFormatterChecker_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_setup(type);
}

static int
checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_traverse(mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_conv_type);
    Py_VISIT(self->_context);
    Py_VISIT(self->_expr);
    Py_VISIT(self->_expected_type);
    Py_VISIT(self->_check_type);
    Py_VISIT(self->_check_expr);
    return 0;
}

static int
checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_clear(mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_conv_type);
    Py_CLEAR(self->_context);
    Py_CLEAR(self->_expr);
    Py_CLEAR(self->_expected_type);
    Py_CLEAR(self->_check_type);
    Py_CLEAR(self->_check_expr);
    return 0;
}

static void
checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_dealloc(mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_dealloc)
    checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_vtable[1];
static bool
CPyDef_checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_trait_vtable_setup(void)
{
    CPyVTableItem checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_vtable_scratch[] = {
        NULL
    };
    memcpy(checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_vtable, checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_vtable_scratch, sizeof(checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_vtable));
    return 1;
}

static PyMethodDef checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "checkers_for_regular_type_StringFormatterChecker_env",
    .tp_new = checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_new,
    .tp_dealloc = (destructor)checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_dealloc,
    .tp_traverse = (traverseproc)checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_traverse,
    .tp_clear = (inquiry)checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_clear,
    .tp_methods = checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_methods,
    .tp_basicsize = sizeof(mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_template = &CPyType_checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_template_;

static PyObject *
checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_setup(PyTypeObject *type)
{
    mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *self;
    self = (mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_checkstrformat___checkers_for_regular_type_StringFormatterChecker_env(void)
{
    PyObject *self = checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_setup(CPyType_checkstrformat___checkers_for_regular_type_StringFormatterChecker_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_____get__(self, instance, owner);
}
PyMemberDef checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_setup(PyTypeObject *type);
PyObject *CPyDef_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj(void);

static PyObject *
checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_setup(type);
}

static int
checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_traverse(mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject))));
    return 0;
}

static int
checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_clear(mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject))));
    return 0;
}

static void
checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_dealloc(mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_dealloc)
    checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_vtable[2];
static bool
CPyDef_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_trait_vtable_setup(void)
{
    CPyVTableItem checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_____call__,
        (CPyVTableItem)CPyDef_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_____get__,
    };
    memcpy(checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_vtable, checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_vtable_scratch, sizeof(checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_vtable));
    return 1;
}

static PyMethodDef checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "check_type_checkers_for_regular_type_StringFormatterChecker_obj",
    .tp_new = checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_new,
    .tp_dealloc = (destructor)checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_dealloc,
    .tp_traverse = (traverseproc)checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_traverse,
    .tp_clear = (inquiry)checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_clear,
    .tp_methods = checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj,
    .tp_members = checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_members,
    .tp_basicsize = sizeof(mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject),
    .tp_weaklistoffset = sizeof(mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_template = &CPyType_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_template_;

static PyObject *
checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_setup(PyTypeObject *type)
{
    mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject *self;
    self = (mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_vtable;
    self->vectorcall = CPyPy_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj(void)
{
    PyObject *self = checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_setup(CPyType_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_____get__(self, instance, owner);
}
PyMemberDef checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_setup(PyTypeObject *type);
PyObject *CPyDef_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj(void);

static PyObject *
checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_setup(type);
}

static int
checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_traverse(mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject))));
    return 0;
}

static int
checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_clear(mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject))));
    return 0;
}

static void
checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_dealloc(mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_dealloc)
    checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_vtable[2];
static bool
CPyDef_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_trait_vtable_setup(void)
{
    CPyVTableItem checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_____call__,
        (CPyVTableItem)CPyDef_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_____get__,
    };
    memcpy(checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_vtable, checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_vtable_scratch, sizeof(checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_vtable));
    return 1;
}

static PyMethodDef checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "check_expr_checkers_for_regular_type_StringFormatterChecker_obj",
    .tp_new = checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_new,
    .tp_dealloc = (destructor)checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_dealloc,
    .tp_traverse = (traverseproc)checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_traverse,
    .tp_clear = (inquiry)checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_clear,
    .tp_methods = checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj,
    .tp_members = checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_members,
    .tp_basicsize = sizeof(mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject),
    .tp_weaklistoffset = sizeof(mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_template = &CPyType_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_template_;

static PyObject *
checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_setup(PyTypeObject *type)
{
    mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject *self;
    self = (mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_vtable;
    self->vectorcall = CPyPy_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj(void)
{
    PyObject *self = checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_setup(CPyType_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *checkstrformat___checkers_for_c_type_StringFormatterChecker_env_setup(PyTypeObject *type);
PyObject *CPyDef_checkstrformat___checkers_for_c_type_StringFormatterChecker_env(void);

static PyObject *
checkstrformat___checkers_for_c_type_StringFormatterChecker_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_checkstrformat___checkers_for_c_type_StringFormatterChecker_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return checkstrformat___checkers_for_c_type_StringFormatterChecker_env_setup(type);
}

static int
checkstrformat___checkers_for_c_type_StringFormatterChecker_env_traverse(mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_context);
    Py_VISIT(self->_format_expr);
    Py_VISIT(self->_expected_type);
    Py_VISIT(self->_check_type);
    Py_VISIT(self->_check_expr);
    Py_VISIT(self->_type);
    return 0;
}

static int
checkstrformat___checkers_for_c_type_StringFormatterChecker_env_clear(mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_context);
    Py_CLEAR(self->_format_expr);
    Py_CLEAR(self->_expected_type);
    Py_CLEAR(self->_check_type);
    Py_CLEAR(self->_check_expr);
    Py_CLEAR(self->_type);
    return 0;
}

static void
checkstrformat___checkers_for_c_type_StringFormatterChecker_env_dealloc(mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, checkstrformat___checkers_for_c_type_StringFormatterChecker_env_dealloc)
    checkstrformat___checkers_for_c_type_StringFormatterChecker_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem checkstrformat___checkers_for_c_type_StringFormatterChecker_env_vtable[1];
static bool
CPyDef_checkstrformat___checkers_for_c_type_StringFormatterChecker_env_trait_vtable_setup(void)
{
    CPyVTableItem checkstrformat___checkers_for_c_type_StringFormatterChecker_env_vtable_scratch[] = {
        NULL
    };
    memcpy(checkstrformat___checkers_for_c_type_StringFormatterChecker_env_vtable, checkstrformat___checkers_for_c_type_StringFormatterChecker_env_vtable_scratch, sizeof(checkstrformat___checkers_for_c_type_StringFormatterChecker_env_vtable));
    return 1;
}

static PyMethodDef checkstrformat___checkers_for_c_type_StringFormatterChecker_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_checkstrformat___checkers_for_c_type_StringFormatterChecker_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "checkers_for_c_type_StringFormatterChecker_env",
    .tp_new = checkstrformat___checkers_for_c_type_StringFormatterChecker_env_new,
    .tp_dealloc = (destructor)checkstrformat___checkers_for_c_type_StringFormatterChecker_env_dealloc,
    .tp_traverse = (traverseproc)checkstrformat___checkers_for_c_type_StringFormatterChecker_env_traverse,
    .tp_clear = (inquiry)checkstrformat___checkers_for_c_type_StringFormatterChecker_env_clear,
    .tp_methods = checkstrformat___checkers_for_c_type_StringFormatterChecker_env_methods,
    .tp_basicsize = sizeof(mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_checkstrformat___checkers_for_c_type_StringFormatterChecker_env_template = &CPyType_checkstrformat___checkers_for_c_type_StringFormatterChecker_env_template_;

static PyObject *
checkstrformat___checkers_for_c_type_StringFormatterChecker_env_setup(PyTypeObject *type)
{
    mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *self;
    self = (mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = checkstrformat___checkers_for_c_type_StringFormatterChecker_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_checkstrformat___checkers_for_c_type_StringFormatterChecker_env(void)
{
    PyObject *self = checkstrformat___checkers_for_c_type_StringFormatterChecker_env_setup(CPyType_checkstrformat___checkers_for_c_type_StringFormatterChecker_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_____get__(self, instance, owner);
}
PyMemberDef checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_setup(PyTypeObject *type);
PyObject *CPyDef_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj(void);

static PyObject *
checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_setup(type);
}

static int
checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_traverse(mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject))));
    return 0;
}

static int
checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_clear(mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject))));
    return 0;
}

static void
checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_dealloc(mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_dealloc)
    checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_vtable[2];
static bool
CPyDef_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_trait_vtable_setup(void)
{
    CPyVTableItem checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_____call__,
        (CPyVTableItem)CPyDef_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_____get__,
    };
    memcpy(checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_vtable, checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_vtable_scratch, sizeof(checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_vtable));
    return 1;
}

static PyMethodDef checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "check_type_checkers_for_c_type_StringFormatterChecker_obj",
    .tp_new = checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_new,
    .tp_dealloc = (destructor)checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_dealloc,
    .tp_traverse = (traverseproc)checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_traverse,
    .tp_clear = (inquiry)checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_clear,
    .tp_methods = checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj,
    .tp_members = checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_members,
    .tp_basicsize = sizeof(mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject),
    .tp_weaklistoffset = sizeof(mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_template = &CPyType_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_template_;

static PyObject *
checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_setup(PyTypeObject *type)
{
    mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject *self;
    self = (mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_vtable;
    self->vectorcall = CPyPy_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj(void)
{
    PyObject *self = checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_setup(CPyType_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_____get__(self, instance, owner);
}
PyMemberDef checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_setup(PyTypeObject *type);
PyObject *CPyDef_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj(void);

static PyObject *
checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_setup(type);
}

static int
checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_traverse(mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject))));
    return 0;
}

static int
checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_clear(mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject))));
    return 0;
}

static void
checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_dealloc(mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_dealloc)
    checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_vtable[2];
static bool
CPyDef_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_trait_vtable_setup(void)
{
    CPyVTableItem checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_____call__,
        (CPyVTableItem)CPyDef_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_____get__,
    };
    memcpy(checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_vtable, checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_vtable_scratch, sizeof(checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_vtable));
    return 1;
}

static PyMethodDef checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "check_expr_checkers_for_c_type_StringFormatterChecker_obj",
    .tp_new = checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_new,
    .tp_dealloc = (destructor)checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_dealloc,
    .tp_traverse = (traverseproc)checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_traverse,
    .tp_clear = (inquiry)checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_clear,
    .tp_methods = checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj,
    .tp_members = checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_members,
    .tp_basicsize = sizeof(mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject),
    .tp_weaklistoffset = sizeof(mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_template = &CPyType_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_template_;

static PyObject *
checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_setup(PyTypeObject *type)
{
    mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject *self;
    self = (mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_vtable;
    self->vectorcall = CPyPy_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj(void)
{
    PyObject *self = checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_setup(CPyType_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef checkstrformatmodule_methods[] = {
    {"compile_format_re", (PyCFunction)CPyPy_checkstrformat___compile_format_re, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"compile_new_format_re", (PyCFunction)CPyPy_checkstrformat___compile_new_format_re, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"parse_conversion_specifiers", (PyCFunction)CPyPy_checkstrformat___parse_conversion_specifiers, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"parse_format_value", (PyCFunction)CPyPy_checkstrformat___parse_format_value, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_non_escaped_targets", (PyCFunction)CPyPy_checkstrformat___find_non_escaped_targets, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"has_type_component", (PyCFunction)CPyPy_checkstrformat___has_type_component, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef checkstrformatmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.checkstrformat",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    checkstrformatmodule_methods
};

PyObject *CPyInit_mypy___checkstrformat(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___checkstrformat_internal) {
        Py_INCREF(CPyModule_mypy___checkstrformat_internal);
        return CPyModule_mypy___checkstrformat_internal;
    }
    CPyModule_mypy___checkstrformat_internal = PyModule_Create(&checkstrformatmodule);
    if (unlikely(CPyModule_mypy___checkstrformat_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___checkstrformat_internal, "__name__");
    CPyStatic_checkstrformat___globals = PyModule_GetDict(CPyModule_mypy___checkstrformat_internal);
    if (unlikely(CPyStatic_checkstrformat___globals == NULL))
        goto fail;
    CPyType_checkstrformat___checkers_for_star_StringFormatterChecker_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_checkstrformat___checkers_for_star_StringFormatterChecker_env_template, NULL, modname);
    if (unlikely(!CPyType_checkstrformat___checkers_for_star_StringFormatterChecker_env))
        goto fail;
    CPyType_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_template, NULL, modname);
    if (unlikely(!CPyType_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj))
        goto fail;
    CPyType_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_template, NULL, modname);
    if (unlikely(!CPyType_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj))
        goto fail;
    CPyType_checkstrformat___checkers_for_regular_type_StringFormatterChecker_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_checkstrformat___checkers_for_regular_type_StringFormatterChecker_env_template, NULL, modname);
    if (unlikely(!CPyType_checkstrformat___checkers_for_regular_type_StringFormatterChecker_env))
        goto fail;
    CPyType_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_template, NULL, modname);
    if (unlikely(!CPyType_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj))
        goto fail;
    CPyType_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_template, NULL, modname);
    if (unlikely(!CPyType_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj))
        goto fail;
    CPyType_checkstrformat___checkers_for_c_type_StringFormatterChecker_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_checkstrformat___checkers_for_c_type_StringFormatterChecker_env_template, NULL, modname);
    if (unlikely(!CPyType_checkstrformat___checkers_for_c_type_StringFormatterChecker_env))
        goto fail;
    CPyType_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_template, NULL, modname);
    if (unlikely(!CPyType_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj))
        goto fail;
    CPyType_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_template, NULL, modname);
    if (unlikely(!CPyType_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_checkstrformat_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___checkstrformat_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___checkstrformat_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_checkstrformat___FORMAT_RE);
    CPyStatic_checkstrformat___FORMAT_RE = NULL;
    CPy_XDECREF(CPyStatic_checkstrformat___FORMAT_RE_NEW);
    CPyStatic_checkstrformat___FORMAT_RE_NEW = NULL;
    CPy_XDECREF(CPyStatic_checkstrformat___FORMAT_RE_NEW_CUSTOM);
    CPyStatic_checkstrformat___FORMAT_RE_NEW_CUSTOM = NULL;
    CPy_XDECREF(CPyStatic_checkstrformat___NUMERIC_TYPES_OLD);
    CPyStatic_checkstrformat___NUMERIC_TYPES_OLD = NULL;
    CPy_XDECREF(CPyStatic_checkstrformat___NUMERIC_TYPES_NEW);
    CPyStatic_checkstrformat___NUMERIC_TYPES_NEW = NULL;
    CPy_XDECREF(CPyStatic_checkstrformat___REQUIRE_INT_OLD);
    CPyStatic_checkstrformat___REQUIRE_INT_OLD = NULL;
    CPy_XDECREF(CPyStatic_checkstrformat___REQUIRE_INT_NEW);
    CPyStatic_checkstrformat___REQUIRE_INT_NEW = NULL;
    CPy_XDECREF(CPyStatic_checkstrformat___FLOAT_TYPES);
    CPyStatic_checkstrformat___FLOAT_TYPES = NULL;
    Py_CLEAR(CPyType_checkstrformat___ConversionSpecifier);
    Py_CLEAR(CPyType_checkstrformat___StringFormatterChecker);
    Py_CLEAR(CPyType_checkstrformat___checkers_for_star_StringFormatterChecker_env);
    Py_CLEAR(CPyType_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj);
    Py_CLEAR(CPyType_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj);
    Py_CLEAR(CPyType_checkstrformat___checkers_for_regular_type_StringFormatterChecker_env);
    Py_CLEAR(CPyType_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj);
    Py_CLEAR(CPyType_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj);
    Py_CLEAR(CPyType_checkstrformat___checkers_for_c_type_StringFormatterChecker_env);
    Py_CLEAR(CPyType_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj);
    Py_CLEAR(CPyType_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj);
    return NULL;
}

PyObject *CPyDef_checkstrformat___compile_format_re(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_key_re;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_flags_re;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_width_re;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_precision_re;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_length_mod_re;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_type_re;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_format_re;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = CPyStatics[1379]; /* '(\\((?P<key>[^)]*)\\))?' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_key_re = cpy_r_r0;
    cpy_r_r1 = CPyStatics[1380]; /* '(?P<flags>[#0\\-+ ]*)' */
    CPy_INCREF(cpy_r_r1);
    cpy_r_flags_re = cpy_r_r1;
    cpy_r_r2 = CPyStatics[1381]; /* '(?P<width>[1-9][0-9]*|\\*)?' */
    CPy_INCREF(cpy_r_r2);
    cpy_r_width_re = cpy_r_r2;
    cpy_r_r3 = CPyStatics[1382]; /* '(?:\\.(?P<precision>\\*|[0-9]+)?)?' */
    CPy_INCREF(cpy_r_r3);
    cpy_r_precision_re = cpy_r_r3;
    cpy_r_r4 = CPyStatics[1383]; /* '[hlL]?' */
    CPy_INCREF(cpy_r_r4);
    cpy_r_length_mod_re = cpy_r_r4;
    cpy_r_r5 = CPyStatics[1384]; /* '(?P<type>.)?' */
    CPy_INCREF(cpy_r_r5);
    cpy_r_type_re = cpy_r_r5;
    cpy_r_r6 = CPyStatics[1183]; /* '%' */
    cpy_r_r7 = PyUnicode_Concat(cpy_r_r6, cpy_r_key_re);
    CPy_DECREF(cpy_r_key_re);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "compile_format_re", 85, CPyStatic_checkstrformat___globals);
        goto CPyL10;
    }
    cpy_r_r8 = PyUnicode_Concat(cpy_r_r7, cpy_r_flags_re);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_flags_re);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "compile_format_re", 85, CPyStatic_checkstrformat___globals);
        goto CPyL11;
    }
    cpy_r_r9 = PyUnicode_Concat(cpy_r_r8, cpy_r_width_re);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_width_re);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "compile_format_re", 85, CPyStatic_checkstrformat___globals);
        goto CPyL12;
    }
    cpy_r_r10 = PyUnicode_Concat(cpy_r_r9, cpy_r_precision_re);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_precision_re);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "compile_format_re", 85, CPyStatic_checkstrformat___globals);
        goto CPyL13;
    }
    cpy_r_r11 = PyUnicode_Concat(cpy_r_r10, cpy_r_length_mod_re);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_length_mod_re);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "compile_format_re", 85, CPyStatic_checkstrformat___globals);
        goto CPyL14;
    }
    cpy_r_r12 = PyUnicode_Concat(cpy_r_r11, cpy_r_type_re);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_type_re);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "compile_format_re", 85, CPyStatic_checkstrformat___globals);
        goto CPyL9;
    }
    cpy_r_format_re = cpy_r_r12;
    cpy_r_r13 = CPyModule_re;
    cpy_r_r14 = CPyStatics[1385]; /* 'compile' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "compile_format_re", 86, CPyStatic_checkstrformat___globals);
        goto CPyL15;
    }
    PyObject *cpy_r_r16[1] = {cpy_r_format_re};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = _PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 1, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "compile_format_re", 86, CPyStatic_checkstrformat___globals);
        goto CPyL15;
    }
    CPy_DECREF(cpy_r_format_re);
    return cpy_r_r18;
CPyL9: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL10: ;
    CPy_DecRef(cpy_r_flags_re);
    CPy_DecRef(cpy_r_width_re);
    CPy_DecRef(cpy_r_precision_re);
    CPy_DecRef(cpy_r_length_mod_re);
    CPy_DecRef(cpy_r_type_re);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_width_re);
    CPy_DecRef(cpy_r_precision_re);
    CPy_DecRef(cpy_r_length_mod_re);
    CPy_DecRef(cpy_r_type_re);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_precision_re);
    CPy_DecRef(cpy_r_length_mod_re);
    CPy_DecRef(cpy_r_type_re);
    goto CPyL9;
CPyL13: ;
    CPy_DecRef(cpy_r_length_mod_re);
    CPy_DecRef(cpy_r_type_re);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_type_re);
    goto CPyL9;
CPyL15: ;
    CPy_DecRef(cpy_r_format_re);
    goto CPyL9;
}

PyObject *CPyPy_checkstrformat___compile_format_re(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":compile_format_re", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *retval = CPyDef_checkstrformat___compile_format_re();
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "compile_format_re", 73, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___compile_new_format_re(char cpy_r_custom_spec) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_field;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_conversion;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_fill_align;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_num_spec;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_conv_type;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_format_spec;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = CPyStatics[1386]; /* '(?P<field>(?P<key>[^.[!:]*)([^:!]+)?)' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_field = cpy_r_r0;
    cpy_r_r1 = CPyStatics[1387]; /* '(?P<conversion>![^:])?' */
    CPy_INCREF(cpy_r_r1);
    cpy_r_conversion = cpy_r_r1;
    if (cpy_r_custom_spec) goto CPyL6;
    cpy_r_r2 = CPyStatics[1388]; /* '(?P<fill_align>.?[<>=^])?' */
    CPy_INCREF(cpy_r_r2);
    cpy_r_fill_align = cpy_r_r2;
    cpy_r_r3 = CPyStatics[1389]; /* ('(?P<flags>[+\\- '
                                    ']?#?0?)(?P<width>\\d+)?[_,]?(?P<precision>\\.\\d+)?') */
    CPy_INCREF(cpy_r_r3);
    cpy_r_num_spec = cpy_r_r3;
    cpy_r_r4 = CPyStatics[1384]; /* '(?P<type>.)?' */
    CPy_INCREF(cpy_r_r4);
    cpy_r_conv_type = cpy_r_r4;
    cpy_r_r5 = CPyStatics[1390]; /* '(?P<format_spec>:' */
    cpy_r_r6 = PyUnicode_Concat(cpy_r_r5, cpy_r_fill_align);
    CPy_DECREF(cpy_r_fill_align);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "compile_new_format_re", 113, CPyStatic_checkstrformat___globals);
        goto CPyL13;
    }
    cpy_r_r7 = PyUnicode_Concat(cpy_r_r6, cpy_r_num_spec);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_num_spec);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "compile_new_format_re", 113, CPyStatic_checkstrformat___globals);
        goto CPyL14;
    }
    cpy_r_r8 = PyUnicode_Concat(cpy_r_r7, cpy_r_conv_type);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_conv_type);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "compile_new_format_re", 113, CPyStatic_checkstrformat___globals);
        goto CPyL15;
    }
    cpy_r_r9 = CPyStatics[1391]; /* ')?' */
    cpy_r_r10 = PyUnicode_Concat(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "compile_new_format_re", 113, CPyStatic_checkstrformat___globals);
        goto CPyL15;
    }
    cpy_r_format_spec = cpy_r_r10;
    goto CPyL7;
CPyL6: ;
    cpy_r_r11 = CPyStatics[1392]; /* '(?P<format_spec>:.*)?' */
    CPy_INCREF(cpy_r_r11);
    cpy_r_format_spec = cpy_r_r11;
CPyL7: ;
    cpy_r_r12 = PyUnicode_Concat(cpy_r_field, cpy_r_conversion);
    CPy_DECREF(cpy_r_field);
    CPy_DECREF(cpy_r_conversion);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "compile_new_format_re", 118, CPyStatic_checkstrformat___globals);
        goto CPyL16;
    }
    cpy_r_r13 = PyUnicode_Concat(cpy_r_r12, cpy_r_format_spec);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_format_spec);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "compile_new_format_re", 118, CPyStatic_checkstrformat___globals);
        goto CPyL12;
    }
    cpy_r_r14 = CPyModule_re;
    cpy_r_r15 = CPyStatics[1385]; /* 'compile' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "compile_new_format_re", 118, CPyStatic_checkstrformat___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_r13};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "compile_new_format_re", 118, CPyStatic_checkstrformat___globals);
        goto CPyL17;
    }
    CPy_DECREF(cpy_r_r13);
    return cpy_r_r19;
CPyL12: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL13: ;
    CPy_DecRef(cpy_r_field);
    CPy_DecRef(cpy_r_conversion);
    CPy_DecRef(cpy_r_num_spec);
    CPy_DecRef(cpy_r_conv_type);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_field);
    CPy_DecRef(cpy_r_conversion);
    CPy_DecRef(cpy_r_conv_type);
    goto CPyL12;
CPyL15: ;
    CPy_DecRef(cpy_r_field);
    CPy_DecRef(cpy_r_conversion);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_format_spec);
    goto CPyL12;
CPyL17: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL12;
}

PyObject *CPyPy_checkstrformat___compile_new_format_re(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"custom_spec", 0};
    static CPyArg_Parser parser = {"O:compile_new_format_re", kwlist, 0};
    PyObject *obj_custom_spec;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_custom_spec)) {
        return NULL;
    }
    char arg_custom_spec;
    if (unlikely(!PyBool_Check(obj_custom_spec))) {
        CPy_TypeError("bool", obj_custom_spec); goto fail;
    } else
        arg_custom_spec = obj_custom_spec == Py_True;
    PyObject *retval = CPyDef_checkstrformat___compile_new_format_re(arg_custom_spec);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "compile_new_format_re", 89, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___ConversionSpecifier_____init__(PyObject *cpy_r_self, PyObject *cpy_r_match, CPyTagged cpy_r_start_pos, char cpy_r_non_standard_format_spec) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_m_dict;
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
    char cpy_r_r30;
    if (cpy_r_start_pos != CPY_INT_TAG) goto CPyL18;
    cpy_r_start_pos = -2;
CPyL2: ;
    if (cpy_r_non_standard_format_spec != 2) goto CPyL4;
    cpy_r_non_standard_format_spec = 0;
CPyL4: ;
    cpy_r_r0 = CPyStatics[1393]; /* 'group' */
    PyObject *cpy_r_r1[1] = {cpy_r_match};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "__init__", 142, CPyStatic_checkstrformat___globals);
        goto CPyL19;
    }
    if (likely(PyUnicode_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "__init__", 142, CPyStatic_checkstrformat___globals, "str", cpy_r_r3);
        goto CPyL19;
    }
    ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_self)->_whole_seq = cpy_r_r4;
    ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_self)->_start_pos = cpy_r_start_pos;
    cpy_r_r5 = CPyStatics[1394]; /* 'groupdict' */
    PyObject *cpy_r_r6[1] = {cpy_r_match};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "__init__", 145, CPyStatic_checkstrformat___globals);
        goto CPyL17;
    }
    if (likely(PyDict_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "__init__", 145, CPyStatic_checkstrformat___globals, "dict", cpy_r_r8);
        goto CPyL17;
    }
    cpy_r_m_dict = cpy_r_r9;
    cpy_r_r10 = CPyStatics[228]; /* 'key' */
    cpy_r_r11 = CPyDict_GetWithNone(cpy_r_m_dict, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "__init__", 146, CPyStatic_checkstrformat___globals);
        goto CPyL20;
    }
    ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_self)->_key = cpy_r_r11;
    cpy_r_r12 = CPyStatics[802]; /* 'type' */
    cpy_r_r13 = CPyStatics[163]; /* '' */
    cpy_r_r14 = CPyDict_Get(cpy_r_m_dict, cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "__init__", 149, CPyStatic_checkstrformat___globals);
        goto CPyL20;
    }
    ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_self)->_conv_type = cpy_r_r14;
    cpy_r_r15 = CPyStatics[1395]; /* 'flags' */
    cpy_r_r16 = CPyStatics[163]; /* '' */
    cpy_r_r17 = CPyDict_Get(cpy_r_m_dict, cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "__init__", 150, CPyStatic_checkstrformat___globals);
        goto CPyL20;
    }
    ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_self)->_flags = cpy_r_r17;
    cpy_r_r18 = CPyStatics[1396]; /* 'width' */
    cpy_r_r19 = CPyStatics[163]; /* '' */
    cpy_r_r20 = CPyDict_Get(cpy_r_m_dict, cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "__init__", 151, CPyStatic_checkstrformat___globals);
        goto CPyL20;
    }
    ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_self)->_width = cpy_r_r20;
    cpy_r_r21 = CPyStatics[1397]; /* 'precision' */
    cpy_r_r22 = CPyStatics[163]; /* '' */
    cpy_r_r23 = CPyDict_Get(cpy_r_m_dict, cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "__init__", 152, CPyStatic_checkstrformat___globals);
        goto CPyL20;
    }
    ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_self)->_precision = cpy_r_r23;
    cpy_r_r24 = CPyStatics[1398]; /* 'format_spec' */
    cpy_r_r25 = CPyDict_GetWithNone(cpy_r_m_dict, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "__init__", 155, CPyStatic_checkstrformat___globals);
        goto CPyL20;
    }
    ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_self)->_format_spec = cpy_r_r25;
    ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_self)->_non_standard_format_spec = cpy_r_non_standard_format_spec;
    cpy_r_r26 = CPyStatics[1399]; /* 'conversion' */
    cpy_r_r27 = CPyDict_GetWithNone(cpy_r_m_dict, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "__init__", 158, CPyStatic_checkstrformat___globals);
        goto CPyL20;
    }
    ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_self)->_conversion = cpy_r_r27;
    cpy_r_r28 = CPyStatics[1400]; /* 'field' */
    cpy_r_r29 = CPyDict_GetWithNone(cpy_r_m_dict, cpy_r_r28);
    CPy_DECREF(cpy_r_m_dict);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "__init__", 161, CPyStatic_checkstrformat___globals);
        goto CPyL17;
    }
    ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_self)->_field = cpy_r_r29;
    return 1;
CPyL17: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL18: ;
    CPyTagged_INCREF(cpy_r_start_pos);
    goto CPyL2;
CPyL19: ;
    CPyTagged_DecRef(cpy_r_start_pos);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_m_dict);
    goto CPyL17;
}

PyObject *CPyPy_checkstrformat___ConversionSpecifier_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"match", "start_pos", "non_standard_format_spec", 0};
    PyObject *obj_match;
    PyObject *obj_start_pos = NULL;
    PyObject *obj_non_standard_format_spec = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|OO", "__init__", kwlist, &obj_match, &obj_start_pos, &obj_non_standard_format_spec)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___ConversionSpecifier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.ConversionSpecifier", obj_self); 
        goto fail;
    }
    PyObject *arg_match = obj_match;
    CPyTagged arg_start_pos;
    if (obj_start_pos == NULL) {
        arg_start_pos = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_start_pos)))
        arg_start_pos = CPyTagged_BorrowFromObject(obj_start_pos);
    else {
        CPy_TypeError("int", obj_start_pos); goto fail;
    }
    char arg_non_standard_format_spec;
    if (obj_non_standard_format_spec == NULL) {
        arg_non_standard_format_spec = 2;
    } else if (unlikely(!PyBool_Check(obj_non_standard_format_spec))) {
        CPy_TypeError("bool", obj_non_standard_format_spec); goto fail;
    } else
        arg_non_standard_format_spec = obj_non_standard_format_spec == Py_True;
    char retval = CPyDef_checkstrformat___ConversionSpecifier_____init__(arg_self, arg_match, arg_start_pos, arg_non_standard_format_spec);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "__init__", 139, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___ConversionSpecifier___has_key(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_self)->_key;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    return cpy_r_r2;
}

PyObject *CPyPy_checkstrformat___ConversionSpecifier___has_key(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":has_key", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___ConversionSpecifier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.ConversionSpecifier", obj_self); 
        goto fail;
    }
    char retval = CPyDef_checkstrformat___ConversionSpecifier___has_key(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "has_key", 163, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___ConversionSpecifier___has_star(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_self)->_width;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[282]; /* '*' */
    cpy_r_r2 = PyObject_RichCompare(cpy_r_r0, cpy_r_r1, 2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "has_star", 167, CPyStatic_checkstrformat___globals);
        goto CPyL8;
    }
    cpy_r_r3 = PyObject_IsTrue(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "has_star", 167, CPyStatic_checkstrformat___globals);
        goto CPyL9;
    }
    cpy_r_r5 = cpy_r_r3;
    if (!cpy_r_r5) goto CPyL10;
    cpy_r_r6 = cpy_r_r2;
    goto CPyL6;
CPyL4: ;
    cpy_r_r7 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_self)->_precision;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyStatics[282]; /* '*' */
    cpy_r_r9 = PyObject_RichCompare(cpy_r_r7, cpy_r_r8, 2);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "has_star", 167, CPyStatic_checkstrformat___globals);
        goto CPyL8;
    }
    cpy_r_r6 = cpy_r_r9;
CPyL6: ;
    if (unlikely(!PyBool_Check(cpy_r_r6))) {
        CPy_TypeError("bool", cpy_r_r6); cpy_r_r10 = 2;
    } else
        cpy_r_r10 = cpy_r_r6 == Py_True;
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "has_star", 167, CPyStatic_checkstrformat___globals);
        goto CPyL8;
    }
    return cpy_r_r10;
CPyL8: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
CPyL9: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
CPyL10: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_checkstrformat___ConversionSpecifier___has_star(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":has_star", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___ConversionSpecifier))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.ConversionSpecifier", obj_self); 
        goto fail;
    }
    char retval = CPyDef_checkstrformat___ConversionSpecifier___has_star(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "has_star", 166, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___parse_conversion_specifiers(PyObject *cpy_r_format_str) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_specifiers;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_m;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_conversion_specifiers", 172, CPyStatic_checkstrformat___globals);
        goto CPyL14;
    }
    cpy_r_specifiers = cpy_r_r0;
    cpy_r_r1 = CPyStatic_checkstrformat___FORMAT_RE;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL15;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"FORMAT_RE\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_conversion_specifiers", 173, CPyStatic_checkstrformat___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r3 = CPyModule_re;
    cpy_r_r4 = CPyStatics[1401]; /* 'finditer' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_conversion_specifiers", 173, CPyStatic_checkstrformat___globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r6[2] = {cpy_r_r1, cpy_r_format_str};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 2, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_conversion_specifiers", 173, CPyStatic_checkstrformat___globals);
        goto CPyL16;
    }
    cpy_r_r9 = PyObject_GetIter(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_conversion_specifiers", 173, CPyStatic_checkstrformat___globals);
        goto CPyL16;
    }
CPyL7: ;
    cpy_r_r10 = PyIter_Next(cpy_r_r9);
    if (cpy_r_r10 == NULL) goto CPyL17;
    cpy_r_m = cpy_r_r10;
    cpy_r_r11 = CPyStatics[1402]; /* 'start' */
    PyObject *cpy_r_r12[1] = {cpy_r_m};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r11, cpy_r_r13, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_conversion_specifiers", 174, CPyStatic_checkstrformat___globals);
        goto CPyL18;
    }
    if (likely(PyLong_Check(cpy_r_r14)))
        cpy_r_r15 = CPyTagged_FromObject(cpy_r_r14);
    else {
        CPy_TypeError("int", cpy_r_r14); cpy_r_r15 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_conversion_specifiers", 174, CPyStatic_checkstrformat___globals);
        goto CPyL18;
    }
    cpy_r_r16 = 2;
    cpy_r_r17 = CPyDef_checkstrformat___ConversionSpecifier(cpy_r_m, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_m);
    CPyTagged_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_conversion_specifiers", 174, CPyStatic_checkstrformat___globals);
        goto CPyL19;
    }
    cpy_r_r18 = PyList_Append(cpy_r_specifiers, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_conversion_specifiers", 174, CPyStatic_checkstrformat___globals);
        goto CPyL19;
    } else
        goto CPyL7;
CPyL12: ;
    cpy_r_r20 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_conversion_specifiers", 173, CPyStatic_checkstrformat___globals);
        goto CPyL16;
    }
    return cpy_r_specifiers;
CPyL14: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL15: ;
    CPy_DecRef(cpy_r_specifiers);
    goto CPyL2;
CPyL16: ;
    CPy_DecRef(cpy_r_specifiers);
    goto CPyL14;
CPyL17: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL12;
CPyL18: ;
    CPy_DecRef(cpy_r_specifiers);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_m);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_specifiers);
    CPy_DecRef(cpy_r_r9);
    goto CPyL14;
}

PyObject *CPyPy_checkstrformat___parse_conversion_specifiers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"format_str", 0};
    static CPyArg_Parser parser = {"O:parse_conversion_specifiers", kwlist, 0};
    PyObject *obj_format_str;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_format_str)) {
        return NULL;
    }
    PyObject *arg_format_str;
    if (likely(PyUnicode_Check(obj_format_str)))
        arg_format_str = obj_format_str;
    else {
        CPy_TypeError("str", obj_format_str); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkstrformat___parse_conversion_specifiers(arg_format_str);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "parse_conversion_specifiers", 170, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___parse_format_value(PyObject *cpy_r_format_value, PyObject *cpy_r_ctx, PyObject *cpy_r_msg, char cpy_r_nested) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_top_targets;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    tuple_T2OI cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_target;
    CPyTagged cpy_r_r14;
    CPyTagged cpy_r_start_pos;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_match;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_conv_spec;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_custom_match;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_sub_conv_specs;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyTagged cpy_r_r105;
    PyObject *cpy_r_r106;
    if (cpy_r_nested != 2) goto CPyL2;
    cpy_r_nested = 0;
CPyL2: ;
    cpy_r_r0 = CPyDef_checkstrformat___find_non_escaped_targets(cpy_r_format_value, cpy_r_ctx, cpy_r_msg);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 186, CPyStatic_checkstrformat___globals);
        goto CPyL68;
    }
    cpy_r_top_targets = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_top_targets == cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL69;
    } else
        goto CPyL5;
CPyL4: ;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    return cpy_r_r3;
CPyL5: ;
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 190, CPyStatic_checkstrformat___globals);
        goto CPyL70;
    }
    cpy_r_result = cpy_r_r4;
    if (likely(cpy_r_top_targets != Py_None))
        cpy_r_r5 = cpy_r_top_targets;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "parse_format_value", 191, CPyStatic_checkstrformat___globals, "list", cpy_r_top_targets);
        goto CPyL71;
    }
    cpy_r_r6 = 0;
CPyL8: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL72;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    PyObject *__tmp1557;
    if (unlikely(!(PyTuple_Check(cpy_r_r11) && PyTuple_GET_SIZE(cpy_r_r11) == 2))) {
        __tmp1557 = NULL;
        goto __LL1558;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r11, 0))))
        __tmp1557 = PyTuple_GET_ITEM(cpy_r_r11, 0);
    else {
        __tmp1557 = NULL;
    }
    if (__tmp1557 == NULL) goto __LL1558;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r11, 1))))
        __tmp1557 = PyTuple_GET_ITEM(cpy_r_r11, 1);
    else {
        __tmp1557 = NULL;
    }
    if (__tmp1557 == NULL) goto __LL1558;
    __tmp1557 = cpy_r_r11;
__LL1558: ;
    if (unlikely(__tmp1557 == NULL)) {
        CPy_TypeError("tuple[str, int]", cpy_r_r11); cpy_r_r12 = (tuple_T2OI) { NULL, CPY_INT_TAG };
    } else {
        PyObject *__tmp1559 = PyTuple_GET_ITEM(cpy_r_r11, 0);
        CPy_INCREF(__tmp1559);
        PyObject *__tmp1560;
        if (likely(PyUnicode_Check(__tmp1559)))
            __tmp1560 = __tmp1559;
        else {
            CPy_TypeError("str", __tmp1559); 
            __tmp1560 = NULL;
        }
        cpy_r_r12.f0 = __tmp1560;
        PyObject *__tmp1561 = PyTuple_GET_ITEM(cpy_r_r11, 1);
        CPyTagged __tmp1562;
        if (likely(PyLong_Check(__tmp1561)))
            __tmp1562 = CPyTagged_FromObject(__tmp1561);
        else {
            CPy_TypeError("int", __tmp1561); __tmp1562 = CPY_INT_TAG;
        }
        cpy_r_r12.f1 = __tmp1562;
    }
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 191, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    cpy_r_r13 = cpy_r_r12.f0;
    CPy_INCREF(cpy_r_r13);
    cpy_r_target = cpy_r_r13;
    cpy_r_r14 = cpy_r_r12.f1;
    CPyTagged_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r12.f0);
    CPyTagged_DECREF(cpy_r_r12.f1);
    cpy_r_start_pos = cpy_r_r14;
    cpy_r_r15 = CPyStatic_checkstrformat___FORMAT_RE_NEW;
    if (unlikely(cpy_r_r15 == NULL)) {
        goto CPyL74;
    } else
        goto CPyL13;
CPyL11: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"FORMAT_RE_NEW\" was not set");
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 192, CPyStatic_checkstrformat___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r17 = CPyStatics[1403]; /* 'fullmatch' */
    PyObject *cpy_r_r18[2] = {cpy_r_r15, cpy_r_target};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = PyObject_VectorcallMethod(cpy_r_r17, cpy_r_r19, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 192, CPyStatic_checkstrformat___globals);
        goto CPyL75;
    }
    cpy_r_match = cpy_r_r20;
    cpy_r_r21 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r22 = cpy_r_match != cpy_r_r21;
    if (!cpy_r_r22) goto CPyL76;
    CPy_INCREF(cpy_r_match);
    cpy_r_r23 = cpy_r_match;
    cpy_r_r24 = PyObject_IsTrue(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 192, CPyStatic_checkstrformat___globals);
        goto CPyL77;
    }
    cpy_r_r26 = cpy_r_r24;
    if (cpy_r_r26) {
        goto CPyL78;
    } else
        goto CPyL76;
CPyL18: ;
    cpy_r_r27 = 2;
    cpy_r_r28 = CPyDef_checkstrformat___ConversionSpecifier(cpy_r_match, cpy_r_start_pos, cpy_r_r27);
    CPy_DECREF(cpy_r_match);
    CPyTagged_DECREF(cpy_r_start_pos);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 194, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    cpy_r_conv_spec = cpy_r_r28;
    goto CPyL35;
CPyL20: ;
    cpy_r_r29 = CPyStatic_checkstrformat___FORMAT_RE_NEW_CUSTOM;
    if (unlikely(cpy_r_r29 == NULL)) {
        goto CPyL79;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"FORMAT_RE_NEW_CUSTOM\" was not set");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 196, CPyStatic_checkstrformat___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r31 = CPyStatics[1403]; /* 'fullmatch' */
    PyObject *cpy_r_r32[2] = {cpy_r_r29, cpy_r_target};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = PyObject_VectorcallMethod(cpy_r_r31, cpy_r_r33, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 196, CPyStatic_checkstrformat___globals);
        goto CPyL75;
    }
    CPy_DECREF(cpy_r_target);
    cpy_r_custom_match = cpy_r_r34;
    cpy_r_r35 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r36 = cpy_r_custom_match != cpy_r_r35;
    if (!cpy_r_r36) goto CPyL80;
    CPy_INCREF(cpy_r_custom_match);
    cpy_r_r37 = cpy_r_custom_match;
    cpy_r_r38 = PyObject_IsTrue(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 196, CPyStatic_checkstrformat___globals);
        goto CPyL81;
    }
    cpy_r_r40 = cpy_r_r38;
    if (!cpy_r_r40) goto CPyL80;
    cpy_r_r41 = CPyDef_checkstrformat___ConversionSpecifier(cpy_r_custom_match, cpy_r_start_pos, 1);
    CPy_DECREF(cpy_r_custom_match);
    CPyTagged_DECREF(cpy_r_start_pos);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 198, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    cpy_r_conv_spec = cpy_r_r41;
    goto CPyL35;
CPyL30: ;
    cpy_r_r42 = CPyStatics[1404]; /* 'Invalid conversion specifier in format string' */
    cpy_r_r43 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (likely(cpy_r_r43 != NULL)) goto CPyL33;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r44 = 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 205, CPyStatic_checkstrformat___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r45 = NULL;
    cpy_r_r46 = 2;
    cpy_r_r47 = NULL;
    cpy_r_r48 = CPyDef_messages___MessageBuilder___fail(cpy_r_msg, cpy_r_r42, cpy_r_ctx, cpy_r_r43, cpy_r_r45, cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 202, CPyStatic_checkstrformat___globals);
        goto CPyL68;
    }
    cpy_r_r49 = Py_None;
    CPy_INCREF(cpy_r_r49);
    return cpy_r_r49;
CPyL35: ;
    cpy_r_r50 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_conv_spec)->_key;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = PyObject_IsTrue(cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 209, CPyStatic_checkstrformat___globals);
        goto CPyL82;
    }
    cpy_r_r53 = cpy_r_r51;
    if (!cpy_r_r53) goto CPyL46;
    cpy_r_r54 = CPyStatics[1405]; /* '{' */
    cpy_r_r55 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_conv_spec)->_key;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = PySequence_Contains(cpy_r_r55, cpy_r_r54);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 209, CPyStatic_checkstrformat___globals);
        goto CPyL82;
    }
    cpy_r_r58 = cpy_r_r56;
    if (cpy_r_r58) goto CPyL83;
    cpy_r_r59 = CPyStatics[1406]; /* '}' */
    cpy_r_r60 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_conv_spec)->_key;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61 = PySequence_Contains(cpy_r_r60, cpy_r_r59);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 209, CPyStatic_checkstrformat___globals);
        goto CPyL82;
    }
    cpy_r_r63 = cpy_r_r61;
    if (cpy_r_r63) {
        goto CPyL83;
    } else
        goto CPyL46;
CPyL41: ;
    cpy_r_r64 = CPyStatics[1407]; /* 'Conversion value must not contain { or }' */
    cpy_r_r65 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (likely(cpy_r_r65 != NULL)) goto CPyL44;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r66 = 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 210, CPyStatic_checkstrformat___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r67 = NULL;
    cpy_r_r68 = 2;
    cpy_r_r69 = NULL;
    cpy_r_r70 = CPyDef_messages___MessageBuilder___fail(cpy_r_msg, cpy_r_r64, cpy_r_ctx, cpy_r_r65, cpy_r_r67, cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 210, CPyStatic_checkstrformat___globals);
        goto CPyL68;
    }
    cpy_r_r71 = Py_None;
    CPy_INCREF(cpy_r_r71);
    return cpy_r_r71;
CPyL46: ;
    cpy_r_r72 = PyList_Append(cpy_r_result, cpy_r_conv_spec);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 212, CPyStatic_checkstrformat___globals);
        goto CPyL82;
    }
    cpy_r_r74 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_conv_spec)->_format_spec;
    CPy_INCREF(cpy_r_r74);
    cpy_r_r75 = PyObject_IsTrue(cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 216, CPyStatic_checkstrformat___globals);
        goto CPyL82;
    }
    cpy_r_r77 = cpy_r_r75;
    if (!cpy_r_r77) goto CPyL84;
    cpy_r_r78 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_conv_spec)->_non_standard_format_spec;
    if (!cpy_r_r78) goto CPyL84;
CPyL50: ;
    cpy_r_r79 = CPyStatics[1405]; /* '{' */
    cpy_r_r80 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_conv_spec)->_format_spec;
    CPy_INCREF(cpy_r_r80);
    cpy_r_r81 = PySequence_Contains(cpy_r_r80, cpy_r_r79);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 218, CPyStatic_checkstrformat___globals);
        goto CPyL82;
    }
    cpy_r_r83 = cpy_r_r81;
    if (cpy_r_r83) goto CPyL54;
    cpy_r_r84 = CPyStatics[1406]; /* '}' */
    cpy_r_r85 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_conv_spec)->_format_spec;
    CPy_INCREF(cpy_r_r85);
    cpy_r_r86 = PySequence_Contains(cpy_r_r85, cpy_r_r84);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 218, CPyStatic_checkstrformat___globals);
        goto CPyL82;
    }
    cpy_r_r88 = cpy_r_r86;
    if (!cpy_r_r88) goto CPyL84;
CPyL54: ;
    if (cpy_r_nested) {
        goto CPyL85;
    } else
        goto CPyL60;
CPyL55: ;
    cpy_r_r89 = CPyStatics[1408]; /* 'Formatting nesting must be at most two levels deep' */
    cpy_r_r90 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (likely(cpy_r_r90 != NULL)) goto CPyL58;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r91 = 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 224, CPyStatic_checkstrformat___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL58: ;
    cpy_r_r92 = NULL;
    cpy_r_r93 = 2;
    cpy_r_r94 = NULL;
    cpy_r_r95 = CPyDef_messages___MessageBuilder___fail(cpy_r_msg, cpy_r_r89, cpy_r_ctx, cpy_r_r90, cpy_r_r92, cpy_r_r93, cpy_r_r94);
    if (unlikely(cpy_r_r95 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 221, CPyStatic_checkstrformat___globals);
        goto CPyL68;
    }
    cpy_r_r96 = Py_None;
    CPy_INCREF(cpy_r_r96);
    return cpy_r_r96;
CPyL60: ;
    cpy_r_r97 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_conv_spec)->_format_spec;
    CPy_INCREF(cpy_r_r97);
    CPy_DECREF(cpy_r_conv_spec);
    if (likely(PyUnicode_Check(cpy_r_r97)))
        cpy_r_r98 = cpy_r_r97;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "parse_format_value", 227, CPyStatic_checkstrformat___globals, "str", cpy_r_r97);
        goto CPyL73;
    }
    cpy_r_r99 = CPyDef_checkstrformat___parse_format_value(cpy_r_r98, cpy_r_ctx, cpy_r_msg, 1);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 227, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    cpy_r_sub_conv_specs = cpy_r_r99;
    cpy_r_r100 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r101 = cpy_r_sub_conv_specs == cpy_r_r100;
    if (cpy_r_r101) {
        goto CPyL86;
    } else
        goto CPyL64;
CPyL63: ;
    cpy_r_r102 = Py_None;
    CPy_INCREF(cpy_r_r102);
    return cpy_r_r102;
CPyL64: ;
    if (likely(cpy_r_sub_conv_specs != Py_None))
        cpy_r_r103 = cpy_r_sub_conv_specs;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "parse_format_value", 230, CPyStatic_checkstrformat___globals, "list", cpy_r_sub_conv_specs);
        goto CPyL73;
    }
    cpy_r_r104 = CPyList_Extend(cpy_r_result, cpy_r_r103);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 230, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    } else
        goto CPyL87;
CPyL66: ;
    cpy_r_r105 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r105;
    goto CPyL8;
CPyL67: ;
    return cpy_r_result;
CPyL68: ;
    cpy_r_r106 = NULL;
    return cpy_r_r106;
CPyL69: ;
    CPy_DECREF(cpy_r_top_targets);
    goto CPyL4;
CPyL70: ;
    CPy_DecRef(cpy_r_top_targets);
    goto CPyL68;
CPyL71: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL68;
CPyL72: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL67;
CPyL73: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r5);
    goto CPyL68;
CPyL74: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_target);
    CPyTagged_DecRef(cpy_r_start_pos);
    goto CPyL11;
CPyL75: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_target);
    CPyTagged_DecRef(cpy_r_start_pos);
    goto CPyL68;
CPyL76: ;
    CPy_DECREF(cpy_r_match);
    goto CPyL20;
CPyL77: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_target);
    CPyTagged_DecRef(cpy_r_start_pos);
    CPy_DecRef(cpy_r_match);
    goto CPyL68;
CPyL78: ;
    CPy_DECREF(cpy_r_target);
    goto CPyL18;
CPyL79: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_target);
    CPyTagged_DecRef(cpy_r_start_pos);
    goto CPyL21;
CPyL80: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_r5);
    CPyTagged_DECREF(cpy_r_start_pos);
    CPy_DECREF(cpy_r_custom_match);
    goto CPyL30;
CPyL81: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r5);
    CPyTagged_DecRef(cpy_r_start_pos);
    CPy_DecRef(cpy_r_custom_match);
    goto CPyL68;
CPyL82: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_conv_spec);
    goto CPyL68;
CPyL83: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_conv_spec);
    goto CPyL41;
CPyL84: ;
    CPy_DECREF(cpy_r_conv_spec);
    goto CPyL66;
CPyL85: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_conv_spec);
    goto CPyL55;
CPyL86: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_sub_conv_specs);
    goto CPyL63;
CPyL87: ;
    CPy_DECREF(cpy_r_r104);
    goto CPyL66;
}

PyObject *CPyPy_checkstrformat___parse_format_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"format_value", "ctx", "msg", "nested", 0};
    static CPyArg_Parser parser = {"OOO|O:parse_format_value", kwlist, 0};
    PyObject *obj_format_value;
    PyObject *obj_ctx;
    PyObject *obj_msg;
    PyObject *obj_nested = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_format_value, &obj_ctx, &obj_msg, &obj_nested)) {
        return NULL;
    }
    PyObject *arg_format_value;
    if (likely(PyUnicode_Check(obj_format_value)))
        arg_format_value = obj_format_value;
    else {
        CPy_TypeError("str", obj_format_value); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(Py_TYPE(obj_msg) == CPyType_messages___MessageBuilder))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("mypy.messages.MessageBuilder", obj_msg); 
        goto fail;
    }
    char arg_nested;
    if (obj_nested == NULL) {
        arg_nested = 2;
    } else if (unlikely(!PyBool_Check(obj_nested))) {
        CPy_TypeError("bool", obj_nested); goto fail;
    } else
        arg_nested = obj_nested == Py_True;
    PyObject *retval = CPyDef_checkstrformat___parse_format_value(arg_format_value, arg_ctx, arg_msg, arg_nested);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "parse_format_value", 178, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___find_non_escaped_targets(PyObject *cpy_r_format_value, PyObject *cpy_r_ctx, PyObject *cpy_r_msg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_next_spec;
    CPyTagged cpy_r_pos;
    CPyTagged cpy_r_nesting;
    int64_t cpy_r_r2;
    char cpy_r_r3;
    CPyTagged cpy_r_r4;
    int64_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_c;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    int64_t cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    int64_t cpy_r_r22;
    char cpy_r_r23;
    int64_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    int64_t cpy_r_r45;
    char cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyTagged cpy_r_r48;
    int64_t cpy_r_r49;
    char cpy_r_r50;
    int64_t cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    CPyTagged cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    int64_t cpy_r_r91;
    char cpy_r_r92;
    CPyTagged cpy_r_r93;
    CPyTagged cpy_r_r94;
    tuple_T2OI cpy_r_r95;
    PyObject *cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    CPyTagged cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 246, CPyStatic_checkstrformat___globals);
        goto CPyL68;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r1);
    cpy_r_next_spec = cpy_r_r1;
    cpy_r_pos = 0;
    cpy_r_nesting = 0;
CPyL2: ;
    cpy_r_r2 = CPyStr_Size_size_t(cpy_r_format_value);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 250, CPyStatic_checkstrformat___globals);
        goto CPyL69;
    }
    cpy_r_r4 = cpy_r_r2 << 1;
    cpy_r_r5 = cpy_r_pos & 1;
    cpy_r_r6 = cpy_r_r5 != 0;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = CPyTagged_IsLt_(cpy_r_pos, cpy_r_r4);
    if (cpy_r_r7) {
        goto CPyL6;
    } else
        goto CPyL70;
CPyL5: ;
    cpy_r_r8 = (Py_ssize_t)cpy_r_pos < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r8) goto CPyL70;
CPyL6: ;
    cpy_r_r9 = CPyStr_GetItem(cpy_r_format_value, cpy_r_pos);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 251, CPyStatic_checkstrformat___globals);
        goto CPyL69;
    }
    cpy_r_c = cpy_r_r9;
    cpy_r_r10 = cpy_r_nesting != 0;
    if (cpy_r_r10) goto CPyL44;
    cpy_r_r11 = CPyStatics[1405]; /* '{' */
    cpy_r_r12 = PyUnicode_Compare(cpy_r_c, cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 == -1;
    if (!cpy_r_r13) goto CPyL11;
    cpy_r_r14 = PyErr_Occurred();
    cpy_r_r15 = cpy_r_r14 != NULL;
    if (!cpy_r_r15) goto CPyL11;
    cpy_r_r16 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 254, CPyStatic_checkstrformat___globals);
        goto CPyL71;
    }
CPyL11: ;
    cpy_r_r17 = cpy_r_r12 == 0;
    if (!cpy_r_r17) goto CPyL24;
    cpy_r_r18 = CPyStr_Size_size_t(cpy_r_format_value);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 255, CPyStatic_checkstrformat___globals);
        goto CPyL71;
    }
    cpy_r_r20 = cpy_r_r18 << 1;
    cpy_r_r21 = CPyTagged_Subtract(cpy_r_r20, 2);
    cpy_r_r22 = cpy_r_pos & 1;
    cpy_r_r23 = cpy_r_r22 != 0;
    if (cpy_r_r23) goto CPyL15;
    cpy_r_r24 = cpy_r_r21 & 1;
    cpy_r_r25 = cpy_r_r24 != 0;
    if (!cpy_r_r25) goto CPyL16;
CPyL15: ;
    cpy_r_r26 = CPyTagged_IsLt_(cpy_r_pos, cpy_r_r21);
    CPyTagged_DECREF(cpy_r_r21);
    if (cpy_r_r26) {
        goto CPyL17;
    } else
        goto CPyL72;
CPyL16: ;
    cpy_r_r27 = (Py_ssize_t)cpy_r_pos < (Py_ssize_t)cpy_r_r21;
    CPyTagged_DECREF(cpy_r_r21);
    if (!cpy_r_r27) goto CPyL72;
CPyL17: ;
    cpy_r_r28 = CPyTagged_Add(cpy_r_pos, 2);
    cpy_r_r29 = CPyStr_GetItem(cpy_r_format_value, cpy_r_r28);
    CPyTagged_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 255, CPyStatic_checkstrformat___globals);
        goto CPyL71;
    }
    cpy_r_r30 = CPyStatics[1405]; /* '{' */
    cpy_r_r31 = PyUnicode_Compare(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r32 = cpy_r_r31 == -1;
    if (!cpy_r_r32) goto CPyL21;
    cpy_r_r33 = PyErr_Occurred();
    cpy_r_r34 = cpy_r_r33 != NULL;
    if (!cpy_r_r34) goto CPyL21;
    cpy_r_r35 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 255, CPyStatic_checkstrformat___globals);
        goto CPyL71;
    }
CPyL21: ;
    cpy_r_r36 = cpy_r_r31 == 0;
    if (!cpy_r_r36) goto CPyL72;
    cpy_r_r37 = CPyTagged_Add(cpy_r_pos, 2);
    CPyTagged_DECREF(cpy_r_pos);
    cpy_r_pos = cpy_r_r37;
    goto CPyL24;
CPyL23: ;
    cpy_r_nesting = 2;
CPyL24: ;
    cpy_r_r38 = CPyStatics[1406]; /* '}' */
    cpy_r_r39 = PyUnicode_Compare(cpy_r_c, cpy_r_r38);
    CPy_DECREF(cpy_r_c);
    cpy_r_r40 = cpy_r_r39 == -1;
    if (!cpy_r_r40) goto CPyL27;
    cpy_r_r41 = PyErr_Occurred();
    cpy_r_r42 = cpy_r_r41 != NULL;
    if (!cpy_r_r42) goto CPyL27;
    cpy_r_r43 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 259, CPyStatic_checkstrformat___globals);
        goto CPyL69;
    }
CPyL27: ;
    cpy_r_r44 = cpy_r_r39 == 0;
    if (!cpy_r_r44) goto CPyL60;
    cpy_r_r45 = CPyStr_Size_size_t(cpy_r_format_value);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 260, CPyStatic_checkstrformat___globals);
        goto CPyL69;
    }
    cpy_r_r47 = cpy_r_r45 << 1;
    cpy_r_r48 = CPyTagged_Subtract(cpy_r_r47, 2);
    cpy_r_r49 = cpy_r_pos & 1;
    cpy_r_r50 = cpy_r_r49 != 0;
    if (cpy_r_r50) goto CPyL31;
    cpy_r_r51 = cpy_r_r48 & 1;
    cpy_r_r52 = cpy_r_r51 != 0;
    if (!cpy_r_r52) goto CPyL32;
CPyL31: ;
    cpy_r_r53 = CPyTagged_IsLt_(cpy_r_pos, cpy_r_r48);
    CPyTagged_DECREF(cpy_r_r48);
    if (cpy_r_r53) {
        goto CPyL33;
    } else
        goto CPyL73;
CPyL32: ;
    cpy_r_r54 = (Py_ssize_t)cpy_r_pos < (Py_ssize_t)cpy_r_r48;
    CPyTagged_DECREF(cpy_r_r48);
    if (!cpy_r_r54) goto CPyL73;
CPyL33: ;
    cpy_r_r55 = CPyTagged_Add(cpy_r_pos, 2);
    cpy_r_r56 = CPyStr_GetItem(cpy_r_format_value, cpy_r_r55);
    CPyTagged_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 260, CPyStatic_checkstrformat___globals);
        goto CPyL69;
    }
    cpy_r_r57 = CPyStatics[1406]; /* '}' */
    cpy_r_r58 = PyUnicode_Compare(cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r59 = cpy_r_r58 == -1;
    if (!cpy_r_r59) goto CPyL37;
    cpy_r_r60 = PyErr_Occurred();
    cpy_r_r61 = cpy_r_r60 != NULL;
    if (!cpy_r_r61) goto CPyL37;
    cpy_r_r62 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 260, CPyStatic_checkstrformat___globals);
        goto CPyL69;
    }
CPyL37: ;
    cpy_r_r63 = cpy_r_r58 == 0;
    if (!cpy_r_r63) goto CPyL73;
    cpy_r_r64 = CPyTagged_Add(cpy_r_pos, 2);
    CPyTagged_DECREF(cpy_r_pos);
    cpy_r_pos = cpy_r_r64;
    goto CPyL60;
CPyL39: ;
    cpy_r_r65 = CPyStatics[1409]; /* ('Invalid conversion specifier in format string: '
                                     'unexpected }') */
    cpy_r_r66 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (likely(cpy_r_r66 != NULL)) goto CPyL42;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r67 = 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 266, CPyStatic_checkstrformat___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r68 = NULL;
    cpy_r_r69 = 2;
    cpy_r_r70 = NULL;
    cpy_r_r71 = CPyDef_messages___MessageBuilder___fail(cpy_r_msg, cpy_r_r65, cpy_r_ctx, cpy_r_r66, cpy_r_r68, cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 263, CPyStatic_checkstrformat___globals);
        goto CPyL68;
    }
    cpy_r_r72 = Py_None;
    CPy_INCREF(cpy_r_r72);
    return cpy_r_r72;
CPyL44: ;
    cpy_r_r73 = CPyStatics[1405]; /* '{' */
    cpy_r_r74 = PyUnicode_Compare(cpy_r_c, cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 == -1;
    if (!cpy_r_r75) goto CPyL47;
    cpy_r_r76 = PyErr_Occurred();
    cpy_r_r77 = cpy_r_r76 != NULL;
    if (!cpy_r_r77) goto CPyL47;
    cpy_r_r78 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 271, CPyStatic_checkstrformat___globals);
        goto CPyL71;
    }
CPyL47: ;
    cpy_r_r79 = cpy_r_r74 == 0;
    if (!cpy_r_r79) goto CPyL49;
    cpy_r_r80 = CPyTagged_Add(cpy_r_nesting, 2);
    CPyTagged_DECREF(cpy_r_nesting);
    cpy_r_nesting = cpy_r_r80;
CPyL49: ;
    cpy_r_r81 = CPyStatics[1406]; /* '}' */
    cpy_r_r82 = PyUnicode_Compare(cpy_r_c, cpy_r_r81);
    cpy_r_r83 = cpy_r_r82 == -1;
    if (!cpy_r_r83) goto CPyL52;
    cpy_r_r84 = PyErr_Occurred();
    cpy_r_r85 = cpy_r_r84 != NULL;
    if (!cpy_r_r85) goto CPyL52;
    cpy_r_r86 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 273, CPyStatic_checkstrformat___globals);
        goto CPyL71;
    }
CPyL52: ;
    cpy_r_r87 = cpy_r_r82 == 0;
    if (!cpy_r_r87) goto CPyL54;
    cpy_r_r88 = CPyTagged_Subtract(cpy_r_nesting, 2);
    CPyTagged_DECREF(cpy_r_nesting);
    cpy_r_nesting = cpy_r_r88;
CPyL54: ;
    cpy_r_r89 = cpy_r_nesting != 0;
    if (!cpy_r_r89) goto CPyL74;
    cpy_r_r90 = CPyStr_Append(cpy_r_next_spec, cpy_r_c);
    CPy_DECREF(cpy_r_c);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 276, CPyStatic_checkstrformat___globals);
        goto CPyL75;
    }
    cpy_r_next_spec = cpy_r_r90;
    goto CPyL60;
CPyL57: ;
    cpy_r_r91 = CPyStr_Size_size_t(cpy_r_next_spec);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 278, CPyStatic_checkstrformat___globals);
        goto CPyL69;
    }
    cpy_r_r93 = cpy_r_r91 << 1;
    cpy_r_r94 = CPyTagged_Subtract(cpy_r_pos, cpy_r_r93);
    cpy_r_r95.f0 = cpy_r_next_spec;
    cpy_r_r95.f1 = cpy_r_r94;
    CPy_INCREF(cpy_r_r95.f0);
    CPyTagged_INCREF(cpy_r_r95.f1);
    CPy_DECREF(cpy_r_next_spec);
    CPyTagged_DECREF(cpy_r_r94);
    cpy_r_r96 = PyTuple_New(2);
    if (unlikely(cpy_r_r96 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1563 = cpy_r_r95.f0;
    PyTuple_SET_ITEM(cpy_r_r96, 0, __tmp1563);
    PyObject *__tmp1564 = CPyTagged_StealAsObject(cpy_r_r95.f1);
    PyTuple_SET_ITEM(cpy_r_r96, 1, __tmp1564);
    cpy_r_r97 = PyList_Append(cpy_r_result, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 278, CPyStatic_checkstrformat___globals);
        goto CPyL75;
    }
    cpy_r_r99 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r99);
    cpy_r_next_spec = cpy_r_r99;
CPyL60: ;
    cpy_r_r100 = CPyTagged_Add(cpy_r_pos, 2);
    CPyTagged_DECREF(cpy_r_pos);
    cpy_r_pos = cpy_r_r100;
    goto CPyL2;
CPyL61: ;
    cpy_r_r101 = cpy_r_nesting != 0;
    CPyTagged_DECREF(cpy_r_nesting);
    if (cpy_r_r101) {
        goto CPyL76;
    } else
        goto CPyL67;
CPyL62: ;
    cpy_r_r102 = CPyStatics[1410]; /* ('Invalid conversion specifier in format string: '
                                      'unmatched {') */
    cpy_r_r103 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (likely(cpy_r_r103 != NULL)) goto CPyL65;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r104 = 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 285, CPyStatic_checkstrformat___globals);
        goto CPyL68;
    }
    CPy_Unreachable();
CPyL65: ;
    cpy_r_r105 = NULL;
    cpy_r_r106 = 2;
    cpy_r_r107 = NULL;
    cpy_r_r108 = CPyDef_messages___MessageBuilder___fail(cpy_r_msg, cpy_r_r102, cpy_r_ctx, cpy_r_r103, cpy_r_r105, cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 282, CPyStatic_checkstrformat___globals);
        goto CPyL68;
    }
    cpy_r_r109 = Py_None;
    CPy_INCREF(cpy_r_r109);
    return cpy_r_r109;
CPyL67: ;
    return cpy_r_result;
CPyL68: ;
    cpy_r_r110 = NULL;
    return cpy_r_r110;
CPyL69: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_next_spec);
    CPyTagged_DecRef(cpy_r_pos);
    CPyTagged_DecRef(cpy_r_nesting);
    goto CPyL68;
CPyL70: ;
    CPy_DECREF(cpy_r_next_spec);
    CPyTagged_DECREF(cpy_r_pos);
    goto CPyL61;
CPyL71: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_next_spec);
    CPyTagged_DecRef(cpy_r_pos);
    CPyTagged_DecRef(cpy_r_nesting);
    CPy_DecRef(cpy_r_c);
    goto CPyL68;
CPyL72: ;
    CPyTagged_DECREF(cpy_r_nesting);
    goto CPyL23;
CPyL73: ;
    CPy_DECREF(cpy_r_result);
    CPy_DECREF(cpy_r_next_spec);
    CPyTagged_DECREF(cpy_r_pos);
    CPyTagged_DECREF(cpy_r_nesting);
    goto CPyL39;
CPyL74: ;
    CPy_DECREF(cpy_r_c);
    goto CPyL57;
CPyL75: ;
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_pos);
    CPyTagged_DecRef(cpy_r_nesting);
    goto CPyL68;
CPyL76: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL62;
}

PyObject *CPyPy_checkstrformat___find_non_escaped_targets(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"format_value", "ctx", "msg", 0};
    static CPyArg_Parser parser = {"OOO:find_non_escaped_targets", kwlist, 0};
    PyObject *obj_format_value;
    PyObject *obj_ctx;
    PyObject *obj_msg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_format_value, &obj_ctx, &obj_msg)) {
        return NULL;
    }
    PyObject *arg_format_value;
    if (likely(PyUnicode_Check(obj_format_value)))
        arg_format_value = obj_format_value;
    else {
        CPy_TypeError("str", obj_format_value); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(Py_TYPE(obj_msg) == CPyType_messages___MessageBuilder))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("mypy.messages.MessageBuilder", obj_msg); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkstrformat___find_non_escaped_targets(arg_format_value, arg_ctx, arg_msg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "find_non_escaped_targets", 234, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___StringFormatterChecker_____init__(PyObject *cpy_r_self, PyObject *cpy_r_exprchk, PyObject *cpy_r_chk, PyObject *cpy_r_msg) {
    CPy_INCREF(cpy_r_chk);
    ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk = cpy_r_chk;
    CPy_INCREF(cpy_r_exprchk);
    ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_exprchk = cpy_r_exprchk;
    CPy_INCREF(cpy_r_msg);
    ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg = cpy_r_msg;
    return 1;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"exprchk", "chk", "msg", 0};
    PyObject *obj_exprchk;
    PyObject *obj_chk;
    PyObject *obj_msg;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO", "__init__", kwlist, &obj_exprchk, &obj_chk, &obj_msg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_exprchk;
    if (likely(Py_TYPE(obj_exprchk) == CPyType_checkexpr___ExpressionChecker))
        arg_exprchk = obj_exprchk;
    else {
        CPy_TypeError("mypy.checkexpr.ExpressionChecker", obj_exprchk); 
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
    char retval = CPyDef_checkstrformat___StringFormatterChecker_____init__(arg_self, arg_exprchk, arg_chk, arg_msg);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "__init__", 304, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___StringFormatterChecker___check_str_format_call(PyObject *cpy_r_self, PyObject *cpy_r_call, PyObject *cpy_r_format_value) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_conv_specs;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = 2;
    cpy_r_r2 = CPyDef_checkstrformat___parse_format_value(cpy_r_format_value, cpy_r_call, cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_format_call", 336, CPyStatic_checkstrformat___globals);
        goto CPyL10;
    }
    cpy_r_conv_specs = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_conv_specs == cpy_r_r3;
    if (cpy_r_r4) {
        goto CPyL11;
    } else
        goto CPyL3;
CPyL2: ;
    return 1;
CPyL3: ;
    CPy_INCREF(cpy_r_conv_specs);
    if (likely(cpy_r_conv_specs != Py_None))
        cpy_r_r5 = cpy_r_conv_specs;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_str_format_call", 339, CPyStatic_checkstrformat___globals, "list", cpy_r_conv_specs);
        goto CPyL12;
    }
    cpy_r_r6 = CPyDef_checkstrformat___StringFormatterChecker___auto_generate_keys(cpy_r_self, cpy_r_r5, cpy_r_call);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_format_call", 339, CPyStatic_checkstrformat___globals);
        goto CPyL12;
    }
    if (cpy_r_r6) {
        goto CPyL7;
    } else
        goto CPyL13;
CPyL6: ;
    return 1;
CPyL7: ;
    if (likely(cpy_r_conv_specs != Py_None))
        cpy_r_r7 = cpy_r_conv_specs;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_str_format_call", 341, CPyStatic_checkstrformat___globals, "list", cpy_r_conv_specs);
        goto CPyL10;
    }
    cpy_r_r8 = CPyDef_checkstrformat___StringFormatterChecker___check_specs_in_format_call(cpy_r_self, cpy_r_call, cpy_r_r7, cpy_r_format_value);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_format_call", 341, CPyStatic_checkstrformat___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL11: ;
    CPy_DECREF(cpy_r_conv_specs);
    goto CPyL2;
CPyL12: ;
    CPy_DecRef(cpy_r_conv_specs);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_conv_specs);
    goto CPyL6;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___check_str_format_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"call", "format_value", 0};
    static CPyArg_Parser parser = {"OO:check_str_format_call", kwlist, 0};
    PyObject *obj_call;
    PyObject *obj_format_value;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_call, &obj_format_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_call;
    if (likely(Py_TYPE(obj_call) == CPyType_nodes___CallExpr))
        arg_call = obj_call;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_call); 
        goto fail;
    }
    PyObject *arg_format_value;
    if (likely(PyUnicode_Check(obj_format_value)))
        arg_format_value = obj_format_value;
    else {
        CPy_TypeError("str", obj_format_value); 
        goto fail;
    }
    char retval = CPyDef_checkstrformat___StringFormatterChecker___check_str_format_call(arg_self, arg_call, arg_format_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "check_str_format_call", 315, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___StringFormatterChecker___check_specs_in_format_call(PyObject *cpy_r_self, PyObject *cpy_r_call, PyObject *cpy_r_specs, PyObject *cpy_r_format_value) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
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
    PyObject *cpy_r_s_2;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_replacements;
    CPyPtr cpy_r_r29;
    int64_t cpy_r_r30;
    CPyTagged cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyPtr cpy_r_r39;
    int64_t cpy_r_r40;
    CPyTagged cpy_r_r41;
    char cpy_r_r42;
    CPyPtr cpy_r_r43;
    int64_t cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_spec;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_repl;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_actual_type;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
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
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    int32_t cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyTagged cpy_r_r110;
    CPyTagged cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_expected_type;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyPtr cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    CPyPtr cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_format_str;
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
    int32_t cpy_r_r143;
    char cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_a_type;
    PyObject *cpy_r_r169;
    CPyPtr cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    CPyPtr cpy_r_r178;
    CPyPtr cpy_r_r179;
    PyObject *cpy_r_actual_items;
    CPyTagged cpy_r_r180;
    CPyPtr cpy_r_r181;
    int64_t cpy_r_r182;
    CPyTagged cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    char cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    char cpy_r_r193;
    CPyTagged cpy_r_r194;
    CPyTagged cpy_r_r195;
    CPyTagged cpy_r_r196;
    char cpy_r_r197;
    cpy_r_r0 = 1;
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_specs)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL7;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_specs, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_checkstrformat___ConversionSpecifier))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 350, CPyStatic_checkstrformat___globals, "mypy.checkstrformat.ConversionSpecifier", cpy_r_r6);
        goto CPyL108;
    }
    cpy_r_s = cpy_r_r7;
    cpy_r_r8 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_s)->_key;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_s);
    cpy_r_r9 = PyObject_Not(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 350, CPyStatic_checkstrformat___globals);
        goto CPyL108;
    }
    cpy_r_r11 = cpy_r_r9;
    if (!cpy_r_r11) goto CPyL6;
    cpy_r_r0 = 0;
    goto CPyL7;
CPyL6: ;
    cpy_r_r12 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r12;
    goto CPyL1;
CPyL7: ;
    if (cpy_r_r0) goto CPyL10;
    PyErr_SetString(PyExc_AssertionError, "Keys must be auto-generated first!");
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 350, CPyStatic_checkstrformat___globals);
        goto CPyL108;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_specs)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = PyList_New(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 351, CPyStatic_checkstrformat___globals);
        goto CPyL108;
    }
    cpy_r_r17 = 0;
CPyL12: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_specs)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL17;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_specs, cpy_r_r17);
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_checkstrformat___ConversionSpecifier))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 351, CPyStatic_checkstrformat___globals, "mypy.checkstrformat.ConversionSpecifier", cpy_r_r22);
        goto CPyL109;
    }
    cpy_r_s_2 = cpy_r_r23;
    cpy_r_r24 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_s_2)->_key;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_s_2);
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 351, CPyStatic_checkstrformat___globals, "str", cpy_r_r24);
        goto CPyL109;
    }
    cpy_r_r26 = CPyList_SetItemUnsafe(cpy_r_r16, cpy_r_r17, cpy_r_r25);
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 351, CPyStatic_checkstrformat___globals);
        goto CPyL109;
    }
    cpy_r_r27 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r27;
    goto CPyL12;
CPyL17: ;
    cpy_r_r28 = CPyDef_checkstrformat___StringFormatterChecker___find_replacements_in_call(cpy_r_self, cpy_r_call, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 351, CPyStatic_checkstrformat___globals);
        goto CPyL108;
    }
    cpy_r_replacements = cpy_r_r28;
    cpy_r_r29 = (CPyPtr)&((PyVarObject *)cpy_r_replacements)->ob_size;
    cpy_r_r30 = *(int64_t *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r30 << 1;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_specs)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = cpy_r_r31 == cpy_r_r34;
    if (cpy_r_r35) {
        goto CPyL21;
    } else
        goto CPyL110;
CPyL19: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r36 = 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 352, CPyStatic_checkstrformat___globals);
        goto CPyL108;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r37 = 0;
    cpy_r_r38 = 0;
CPyL22: ;
    cpy_r_r39 = (CPyPtr)&((PyVarObject *)cpy_r_specs)->ob_size;
    cpy_r_r40 = *(int64_t *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 << 1;
    cpy_r_r42 = (Py_ssize_t)cpy_r_r37 < (Py_ssize_t)cpy_r_r41;
    if (!cpy_r_r42) goto CPyL111;
    cpy_r_r43 = (CPyPtr)&((PyVarObject *)cpy_r_replacements)->ob_size;
    cpy_r_r44 = *(int64_t *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 << 1;
    cpy_r_r46 = (Py_ssize_t)cpy_r_r38 < (Py_ssize_t)cpy_r_r45;
    if (!cpy_r_r46) goto CPyL111;
    cpy_r_r47 = CPyList_GetItemUnsafe(cpy_r_specs, cpy_r_r37);
    if (likely(Py_TYPE(cpy_r_r47) == CPyType_checkstrformat___ConversionSpecifier))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 353, CPyStatic_checkstrformat___globals, "mypy.checkstrformat.ConversionSpecifier", cpy_r_r47);
        goto CPyL112;
    }
    cpy_r_spec = cpy_r_r48;
    cpy_r_r49 = CPyList_GetItemUnsafe(cpy_r_replacements, cpy_r_r38);
    if (likely(PyObject_TypeCheck(cpy_r_r49, CPyType_nodes___Expression)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 353, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_r49);
        goto CPyL113;
    }
    cpy_r_repl = cpy_r_r50;
    cpy_r_r51 = CPyDef_checkstrformat___StringFormatterChecker___apply_field_accessors(cpy_r_self, cpy_r_spec, cpy_r_repl, cpy_r_call);
    CPy_DECREF(cpy_r_repl);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 354, CPyStatic_checkstrformat___globals);
        goto CPyL113;
    }
    cpy_r_repl = cpy_r_r51;
    cpy_r_r52 = (PyObject *)CPyType_nodes___TempNode;
    cpy_r_r53 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r54 = *(PyObject * *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 == cpy_r_r52;
    if (!cpy_r_r55) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_repl) == CPyType_nodes___TempNode))
        cpy_r_r56 = cpy_r_repl;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 355, CPyStatic_checkstrformat___globals, "mypy.nodes.TempNode", cpy_r_repl);
        goto CPyL114;
    }
    cpy_r_r57 = ((mypy___nodes___TempNodeObject *)cpy_r_r56)->_type;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = cpy_r_r57;
    goto CPyL32;
CPyL30: ;
    cpy_r_r59 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r59);
    cpy_r_r60 = CPyDef_checker___TypeChecker___lookup_type(cpy_r_r59, cpy_r_repl);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 355, CPyStatic_checkstrformat___globals);
        goto CPyL114;
    }
    cpy_r_r58 = cpy_r_r60;
CPyL32: ;
    cpy_r_actual_type = cpy_r_r58;
    cpy_r_r61 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r62 = cpy_r_actual_type != cpy_r_r61;
    if (cpy_r_r62) {
        goto CPyL35;
    } else
        goto CPyL115;
CPyL33: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r63 = 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 356, CPyStatic_checkstrformat___globals);
        goto CPyL108;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r64 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_format_spec;
    CPy_INCREF(cpy_r_r64);
    cpy_r_r65 = PyObject_IsTrue(cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 360, CPyStatic_checkstrformat___globals);
        goto CPyL116;
    }
    cpy_r_r67 = cpy_r_r65;
    if (!cpy_r_r67) goto CPyL55;
    cpy_r_r68 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_non_standard_format_spec;
    if (!cpy_r_r68) goto CPyL55;
CPyL38: ;
    cpy_r_r69 = CPyStatics[1405]; /* '{' */
    cpy_r_r70 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_format_spec;
    CPy_INCREF(cpy_r_r70);
    cpy_r_r71 = PySequence_Contains(cpy_r_r70, cpy_r_r69);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 364, CPyStatic_checkstrformat___globals);
        goto CPyL116;
    }
    cpy_r_r73 = cpy_r_r71;
    if (cpy_r_r73) goto CPyL55;
    cpy_r_r74 = CPyStatics[1406]; /* '}' */
    cpy_r_r75 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_format_spec;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = PySequence_Contains(cpy_r_r75, cpy_r_r74);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 364, CPyStatic_checkstrformat___globals);
        goto CPyL116;
    }
    cpy_r_r78 = cpy_r_r76;
    if (cpy_r_r78) goto CPyL55;
    cpy_r_r79 = CPyStatics[1411]; /* '__format__' */
    cpy_r_r80 = CPyDef_typeops___custom_special_method(cpy_r_actual_type, cpy_r_r79, 1);
    if (unlikely(cpy_r_r80 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 367, CPyStatic_checkstrformat___globals);
        goto CPyL116;
    }
    if (!cpy_r_r80) goto CPyL117;
    cpy_r_r81 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_conversion;
    CPy_INCREF(cpy_r_r81);
    cpy_r_r82 = PyObject_IsTrue(cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 368, CPyStatic_checkstrformat___globals);
        goto CPyL116;
    }
    cpy_r_r84 = cpy_r_r82;
    if (cpy_r_r84) {
        goto CPyL117;
    } else
        goto CPyL55;
CPyL46: ;
    cpy_r_r85 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r85);
    cpy_r_r86 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_format_spec;
    CPy_INCREF(cpy_r_r86);
    CPy_DECREF(cpy_r_spec);
    cpy_r_r87 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r88 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r89 = CPyStatics[9016]; /* 1 */
    cpy_r_r90 = PySlice_New(cpy_r_r89, cpy_r_r87, cpy_r_r88);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 372, CPyStatic_checkstrformat___globals);
        goto CPyL118;
    }
    cpy_r_r91 = cpy_r_r86;
    cpy_r_r92 = PyObject_GetItem(cpy_r_r91, cpy_r_r90);
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 372, CPyStatic_checkstrformat___globals);
        goto CPyL119;
    }
    cpy_r_r93 = cpy_r_r92;
    cpy_r_r94 = PyObject_Str(cpy_r_r93);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 372, CPyStatic_checkstrformat___globals);
        goto CPyL119;
    }
    cpy_r_r95 = CPyStatics[1412]; /* 'Unrecognized format specification "' */
    cpy_r_r96 = CPyStatics[178]; /* '"' */
    cpy_r_r97 = CPyStr_Build(3, cpy_r_r95, cpy_r_r94, cpy_r_r96);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 372, CPyStatic_checkstrformat___globals);
        goto CPyL119;
    }
    cpy_r_r98 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r98 == NULL)) {
        goto CPyL120;
    } else
        goto CPyL54;
CPyL52: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r99 = 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 374, CPyStatic_checkstrformat___globals);
        goto CPyL108;
    }
    CPy_Unreachable();
CPyL54: ;
    cpy_r_r100 = NULL;
    cpy_r_r101 = 2;
    cpy_r_r102 = NULL;
    cpy_r_r103 = CPyDef_messages___MessageBuilder___fail(cpy_r_r85, cpy_r_r97, cpy_r_call, cpy_r_r98, cpy_r_r100, cpy_r_r101, cpy_r_r102);
    CPy_DECREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r103 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 371, CPyStatic_checkstrformat___globals);
        goto CPyL112;
    } else
        goto CPyL106;
CPyL55: ;
    cpy_r_r104 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_conv_type;
    CPy_INCREF(cpy_r_r104);
    cpy_r_r105 = PyObject_IsTrue(cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    cpy_r_r106 = cpy_r_r105 >= 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 378, CPyStatic_checkstrformat___globals);
        goto CPyL116;
    }
    cpy_r_r107 = cpy_r_r105;
    if (cpy_r_r107) goto CPyL59;
    cpy_r_r108 = NULL;
    cpy_r_r109 = NULL;
    cpy_r_r110 = CPY_INT_TAG;
    cpy_r_r111 = CPY_INT_TAG;
    cpy_r_r112 = CPyDef_types___AnyType(12, cpy_r_r108, cpy_r_r109, cpy_r_r110, cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 379, CPyStatic_checkstrformat___globals);
        goto CPyL116;
    }
    cpy_r_expected_type = cpy_r_r112;
    goto CPyL72;
CPyL59: ;
    cpy_r_r113 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_callee;
    cpy_r_r114 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r115 = (CPyPtr)&((PyObject *)cpy_r_r113)->ob_type;
    cpy_r_r116 = *(PyObject * *)cpy_r_r115;
    cpy_r_r117 = cpy_r_r116 == cpy_r_r114;
    if (cpy_r_r117) {
        goto CPyL62;
    } else
        goto CPyL121;
CPyL60: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r118 = 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 381, CPyStatic_checkstrformat___globals);
        goto CPyL108;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r119 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_callee;
    if (likely(Py_TYPE(cpy_r_r119) == CPyType_nodes___MemberExpr))
        cpy_r_r120 = cpy_r_r119;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 382, CPyStatic_checkstrformat___globals, "mypy.nodes.MemberExpr", cpy_r_r119);
        goto CPyL116;
    }
    cpy_r_r121 = ((mypy___nodes___MemberExprObject *)cpy_r_r120)->_expr;
    cpy_r_r122 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r123 = (CPyPtr)&((PyObject *)cpy_r_r121)->ob_type;
    cpy_r_r124 = *(PyObject * *)cpy_r_r123;
    cpy_r_r125 = cpy_r_r124 == cpy_r_r122;
    if (!cpy_r_r125) goto CPyL67;
    cpy_r_r126 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_callee;
    if (likely(Py_TYPE(cpy_r_r126) == CPyType_nodes___MemberExpr))
        cpy_r_r127 = cpy_r_r126;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 383, CPyStatic_checkstrformat___globals, "mypy.nodes.MemberExpr", cpy_r_r126);
        goto CPyL116;
    }
    cpy_r_r128 = ((mypy___nodes___MemberExprObject *)cpy_r_r127)->_expr;
    CPy_INCREF(cpy_r_r128);
    if (likely(Py_TYPE(cpy_r_r128) == CPyType_nodes___StrExpr))
        cpy_r_r129 = cpy_r_r128;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 383, CPyStatic_checkstrformat___globals, "mypy.nodes.StrExpr", cpy_r_r128);
        goto CPyL116;
    }
    cpy_r_format_str = cpy_r_r129;
    goto CPyL69;
CPyL67: ;
    cpy_r_r130 = CPyDef_nodes___StrExpr(cpy_r_format_value);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 385, CPyStatic_checkstrformat___globals);
        goto CPyL116;
    }
    cpy_r_format_str = cpy_r_r130;
CPyL69: ;
    cpy_r_r131 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_conv_type;
    CPy_INCREF(cpy_r_r131);
    if (likely(PyUnicode_Check(cpy_r_r131)))
        cpy_r_r132 = cpy_r_r131;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 386, CPyStatic_checkstrformat___globals, "str", cpy_r_r131);
        goto CPyL122;
    }
    cpy_r_r133 = CPyDef_checkstrformat___StringFormatterChecker___conversion_type(cpy_r_self, cpy_r_r132, cpy_r_call, cpy_r_format_str, 1);
    CPy_DECREF(cpy_r_r132);
    CPy_DECREF(cpy_r_format_str);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 386, CPyStatic_checkstrformat___globals);
        goto CPyL116;
    }
    cpy_r_expected_type = cpy_r_r133;
CPyL72: ;
    cpy_r_r134 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_conversion;
    cpy_r_r135 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r136 = cpy_r_r134 != cpy_r_r135;
    if (cpy_r_r136) {
        goto CPyL123;
    } else
        goto CPyL87;
CPyL73: ;
    cpy_r_r137 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_conversion;
    CPy_INCREF(cpy_r_r137);
    cpy_r_r138 = cpy_r_r137;
    cpy_r_r139 = CPyStatics[9016]; /* 1 */
    cpy_r_r140 = PyObject_GetItem(cpy_r_r138, cpy_r_r139);
    CPy_DECREF(cpy_r_r138);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 391, CPyStatic_checkstrformat___globals);
        goto CPyL124;
    }
    cpy_r_r141 = cpy_r_r140;
    cpy_r_r142 = CPyStatics[1413]; /* 'rsa' */
    cpy_r_r143 = PySequence_Contains(cpy_r_r142, cpy_r_r141);
    CPy_DECREF(cpy_r_r141);
    cpy_r_r144 = cpy_r_r143 >= 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 391, CPyStatic_checkstrformat___globals);
        goto CPyL124;
    }
    cpy_r_r145 = cpy_r_r143;
    cpy_r_r146 = cpy_r_r145 ^ 1;
    if (!cpy_r_r146) goto CPyL85;
    cpy_r_r147 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r147);
    cpy_r_r148 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_conversion;
    CPy_INCREF(cpy_r_r148);
    cpy_r_r149 = cpy_r_r148;
    cpy_r_r150 = CPyStatics[9016]; /* 1 */
    cpy_r_r151 = PyObject_GetItem(cpy_r_r149, cpy_r_r150);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 394, CPyStatic_checkstrformat___globals);
        goto CPyL125;
    }
    cpy_r_r152 = cpy_r_r151;
    cpy_r_r153 = PyObject_Str(cpy_r_r152);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 393, CPyStatic_checkstrformat___globals);
        goto CPyL125;
    }
    cpy_r_r154 = CPyStatics[1414]; /* 'Invalid conversion type "' */
    cpy_r_r155 = CPyStatics[1415]; /* '", must be one of "r", "s" or "a"' */
    cpy_r_r156 = CPyStr_Build(3, cpy_r_r154, cpy_r_r153, cpy_r_r155);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 393, CPyStatic_checkstrformat___globals);
        goto CPyL125;
    }
    cpy_r_r157 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r157 == NULL)) {
        goto CPyL126;
    } else
        goto CPyL84;
CPyL82: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r158 = 0;
    if (unlikely(!cpy_r_r158)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 396, CPyStatic_checkstrformat___globals);
        goto CPyL108;
    }
    CPy_Unreachable();
CPyL84: ;
    cpy_r_r159 = NULL;
    cpy_r_r160 = 2;
    cpy_r_r161 = NULL;
    cpy_r_r162 = CPyDef_messages___MessageBuilder___fail(cpy_r_r147, cpy_r_r156, cpy_r_call, cpy_r_r157, cpy_r_r159, cpy_r_r160, cpy_r_r161);
    CPy_DECREF(cpy_r_r156);
    CPy_DECREF(cpy_r_r147);
    if (unlikely(cpy_r_r162 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 392, CPyStatic_checkstrformat___globals);
        goto CPyL124;
    }
CPyL85: ;
    cpy_r_r163 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r164 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_self, cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 398, CPyStatic_checkstrformat___globals);
        goto CPyL124;
    }
    cpy_r_actual_type = cpy_r_r164;
CPyL87: ;
    cpy_r_r165 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r166 = cpy_r_expected_type == cpy_r_r165;
    if (cpy_r_r166) goto CPyL127;
    cpy_r_r167 = CPyDef_types___get_proper_type(cpy_r_actual_type);
    CPy_DECREF(cpy_r_actual_type);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 404, CPyStatic_checkstrformat___globals);
        goto CPyL124;
    }
    if (likely(cpy_r_r167 != Py_None))
        cpy_r_r168 = cpy_r_r167;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 404, CPyStatic_checkstrformat___globals, "mypy.types.ProperType", cpy_r_r167);
        goto CPyL124;
    }
    cpy_r_a_type = cpy_r_r168;
    cpy_r_r169 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r170 = (CPyPtr)&((PyObject *)cpy_r_a_type)->ob_type;
    cpy_r_r171 = *(PyObject * *)cpy_r_r170;
    cpy_r_r172 = cpy_r_r171 == cpy_r_r169;
    if (!cpy_r_r172) goto CPyL94;
    if (likely(Py_TYPE(cpy_r_a_type) == CPyType_types___UnionType))
        cpy_r_r173 = cpy_r_a_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 406, CPyStatic_checkstrformat___globals, "mypy.types.UnionType", cpy_r_a_type);
        goto CPyL128;
    }
    cpy_r_r174 = ((mypy___types___UnionTypeObject *)cpy_r_r173)->_items;
    CPy_INCREF(cpy_r_r174);
    CPy_DECREF(cpy_r_a_type);
    cpy_r_r175 = CPyDef_types___get_proper_types(cpy_r_r174);
    CPy_DECREF(cpy_r_r174);
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 406, CPyStatic_checkstrformat___globals);
        goto CPyL124;
    }
    cpy_r_r176 = cpy_r_r175;
    goto CPyL96;
CPyL94: ;
    cpy_r_r177 = PyList_New(1);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 406, CPyStatic_checkstrformat___globals);
        goto CPyL128;
    }
    cpy_r_r178 = (CPyPtr)&((PyListObject *)cpy_r_r177)->ob_item;
    cpy_r_r179 = *(CPyPtr *)cpy_r_r178;
    *(PyObject * *)cpy_r_r179 = cpy_r_a_type;
    cpy_r_r176 = cpy_r_r177;
CPyL96: ;
    cpy_r_actual_items = cpy_r_r176;
    cpy_r_r180 = 0;
CPyL97: ;
    cpy_r_r181 = (CPyPtr)&((PyVarObject *)cpy_r_actual_items)->ob_size;
    cpy_r_r182 = *(int64_t *)cpy_r_r181;
    cpy_r_r183 = cpy_r_r182 << 1;
    cpy_r_r184 = (Py_ssize_t)cpy_r_r180 < (Py_ssize_t)cpy_r_r183;
    if (!cpy_r_r184) goto CPyL129;
    cpy_r_r185 = CPyList_GetItemUnsafe(cpy_r_actual_items, cpy_r_r180);
    if (likely(PyObject_TypeCheck(cpy_r_r185, CPyType_types___ProperType)))
        cpy_r_r186 = cpy_r_r185;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 408, CPyStatic_checkstrformat___globals, "mypy.types.ProperType", cpy_r_r185);
        goto CPyL130;
    }
    cpy_r_a_type = cpy_r_r186;
    cpy_r_r187 = CPyStatics[1411]; /* '__format__' */
    cpy_r_r188 = 2;
    cpy_r_r189 = CPyDef_typeops___custom_special_method(cpy_r_a_type, cpy_r_r187, cpy_r_r188);
    if (unlikely(cpy_r_r189 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 409, CPyStatic_checkstrformat___globals);
        goto CPyL131;
    }
    if (cpy_r_r189) goto CPyL132;
    CPy_INCREF(cpy_r_expected_type);
    if (likely(cpy_r_expected_type != Py_None))
        cpy_r_r190 = cpy_r_expected_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 411, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_expected_type);
        goto CPyL131;
    }
    cpy_r_r191 = CPyDef_checkstrformat___StringFormatterChecker___check_placeholder_type(cpy_r_self, cpy_r_a_type, cpy_r_r190, cpy_r_call);
    CPy_DECREF(cpy_r_r190);
    if (unlikely(cpy_r_r191 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 411, CPyStatic_checkstrformat___globals);
        goto CPyL131;
    }
    CPy_INCREF(cpy_r_expected_type);
    if (likely(cpy_r_expected_type != Py_None))
        cpy_r_r192 = cpy_r_expected_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 412, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_expected_type);
        goto CPyL131;
    }
    cpy_r_r193 = CPyDef_checkstrformat___StringFormatterChecker___perform_special_format_checks(cpy_r_self, cpy_r_spec, cpy_r_call, cpy_r_repl, cpy_r_a_type, cpy_r_r192);
    CPy_DECREF(cpy_r_a_type);
    CPy_DECREF(cpy_r_r192);
    if (unlikely(cpy_r_r193 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 412, CPyStatic_checkstrformat___globals);
        goto CPyL130;
    }
CPyL105: ;
    cpy_r_r194 = cpy_r_r180 + 2;
    cpy_r_r180 = cpy_r_r194;
    goto CPyL97;
CPyL106: ;
    cpy_r_r195 = cpy_r_r37 + 2;
    cpy_r_r37 = cpy_r_r195;
    cpy_r_r196 = cpy_r_r38 + 2;
    cpy_r_r38 = cpy_r_r196;
    goto CPyL22;
CPyL107: ;
    return 1;
CPyL108: ;
    cpy_r_r197 = 2;
    return cpy_r_r197;
CPyL109: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL108;
CPyL110: ;
    CPy_DECREF(cpy_r_replacements);
    goto CPyL19;
CPyL111: ;
    CPy_DECREF(cpy_r_replacements);
    goto CPyL107;
CPyL112: ;
    CPy_DecRef(cpy_r_replacements);
    goto CPyL108;
CPyL113: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_spec);
    goto CPyL108;
CPyL114: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_spec);
    CPy_DecRef(cpy_r_repl);
    goto CPyL108;
CPyL115: ;
    CPy_DECREF(cpy_r_replacements);
    CPy_DECREF(cpy_r_spec);
    CPy_DECREF(cpy_r_repl);
    CPy_DECREF(cpy_r_actual_type);
    goto CPyL33;
CPyL116: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_spec);
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_actual_type);
    goto CPyL108;
CPyL117: ;
    CPy_DECREF(cpy_r_repl);
    CPy_DECREF(cpy_r_actual_type);
    goto CPyL46;
CPyL118: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r86);
    goto CPyL108;
CPyL119: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_r85);
    goto CPyL108;
CPyL120: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_r85);
    CPy_DecRef(cpy_r_r97);
    goto CPyL52;
CPyL121: ;
    CPy_DECREF(cpy_r_replacements);
    CPy_DECREF(cpy_r_spec);
    CPy_DECREF(cpy_r_repl);
    CPy_DECREF(cpy_r_actual_type);
    goto CPyL60;
CPyL122: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_spec);
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_actual_type);
    CPy_DecRef(cpy_r_format_str);
    goto CPyL108;
CPyL123: ;
    CPy_DECREF(cpy_r_actual_type);
    goto CPyL73;
CPyL124: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_spec);
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_expected_type);
    goto CPyL108;
CPyL125: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_spec);
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_expected_type);
    CPy_DecRef(cpy_r_r147);
    goto CPyL108;
CPyL126: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_spec);
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_expected_type);
    CPy_DecRef(cpy_r_r147);
    CPy_DecRef(cpy_r_r156);
    goto CPyL82;
CPyL127: ;
    CPy_DECREF(cpy_r_spec);
    CPy_DECREF(cpy_r_repl);
    CPy_DECREF(cpy_r_actual_type);
    CPy_DECREF(cpy_r_expected_type);
    goto CPyL106;
CPyL128: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_spec);
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_expected_type);
    CPy_DecRef(cpy_r_a_type);
    goto CPyL108;
CPyL129: ;
    CPy_DECREF(cpy_r_spec);
    CPy_DECREF(cpy_r_repl);
    CPy_DECREF(cpy_r_expected_type);
    CPy_DECREF(cpy_r_actual_items);
    goto CPyL106;
CPyL130: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_spec);
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_expected_type);
    CPy_DecRef(cpy_r_actual_items);
    goto CPyL108;
CPyL131: ;
    CPy_DecRef(cpy_r_replacements);
    CPy_DecRef(cpy_r_spec);
    CPy_DecRef(cpy_r_repl);
    CPy_DecRef(cpy_r_expected_type);
    CPy_DecRef(cpy_r_a_type);
    CPy_DecRef(cpy_r_actual_items);
    goto CPyL108;
CPyL132: ;
    CPy_DECREF(cpy_r_a_type);
    goto CPyL105;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___check_specs_in_format_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"call", "specs", "format_value", 0};
    static CPyArg_Parser parser = {"OOO:check_specs_in_format_call", kwlist, 0};
    PyObject *obj_call;
    PyObject *obj_specs;
    PyObject *obj_format_value;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_call, &obj_specs, &obj_format_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_call;
    if (likely(Py_TYPE(obj_call) == CPyType_nodes___CallExpr))
        arg_call = obj_call;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_call); 
        goto fail;
    }
    PyObject *arg_specs;
    if (likely(PyList_Check(obj_specs)))
        arg_specs = obj_specs;
    else {
        CPy_TypeError("list", obj_specs); 
        goto fail;
    }
    PyObject *arg_format_value;
    if (likely(PyUnicode_Check(obj_format_value)))
        arg_format_value = obj_format_value;
    else {
        CPy_TypeError("str", obj_format_value); 
        goto fail;
    }
    char retval = CPyDef_checkstrformat___StringFormatterChecker___check_specs_in_format_call(arg_self, arg_call, arg_specs, arg_format_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "check_specs_in_format_call", 343, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___StringFormatterChecker___perform_special_format_checks(PyObject *cpy_r_self, PyObject *cpy_r_spec, PyObject *cpy_r_call, PyObject *cpy_r_repl, PyObject *cpy_r_actual_type, PyObject *cpy_r_expected_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
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
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int64_t cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_c_typ;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyPtr cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int64_t cpy_r_r59;
    char cpy_r_r60;
    CPyTagged cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyPtr cpy_r_r101;
    CPyPtr cpy_r_r102;
    CPyPtr cpy_r_r103;
    CPyTagged cpy_r_r104;
    CPyTagged cpy_r_r105;
    char cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_numeric_types;
    PyObject *cpy_r_r109;
    int32_t cpy_r_r110;
    char cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    char cpy_r_r143;
    cpy_r_r0 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_conv_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[1416]; /* 'c' */
    cpy_r_r2 = PyObject_RichCompare(cpy_r_r0, cpy_r_r1, 2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 423, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    cpy_r_r3 = PyObject_IsTrue(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 423, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    cpy_r_r5 = cpy_r_r3;
    if (!cpy_r_r5) goto CPyL34;
    cpy_r_r6 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL5;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL6;
CPyL5: ;
    cpy_r_r11 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_repl)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    cpy_r_r10 = cpy_r_r14;
CPyL6: ;
    if (!cpy_r_r10) goto CPyL16;
    CPy_INCREF(cpy_r_repl);
    if (Py_TYPE(cpy_r_repl) == CPyType_nodes___StrExpr)
        cpy_r_r15 = cpy_r_repl;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL1565;
    if (Py_TYPE(cpy_r_repl) == CPyType_nodes___BytesExpr)
        cpy_r_r15 = cpy_r_repl;
    else {
        cpy_r_r15 = NULL;
    }
    if (cpy_r_r15 != NULL) goto __LL1565;
    CPy_TypeErrorTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 424, CPyStatic_checkstrformat___globals, "union[mypy.nodes.StrExpr, mypy.nodes.BytesExpr]", cpy_r_repl);
    goto CPyL73;
__LL1565: ;
    cpy_r_r16 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_r15)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL11;
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_nodes___StrExpr))
        cpy_r_r20 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 424, CPyStatic_checkstrformat___globals, "mypy.nodes.StrExpr", cpy_r_r15);
        goto CPyL73;
    }
    cpy_r_r21 = ((mypy___nodes___StrExprObject *)cpy_r_r20)->_value;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21;
    goto CPyL13;
CPyL11: ;
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_nodes___BytesExpr))
        cpy_r_r23 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 424, CPyStatic_checkstrformat___globals, "mypy.nodes.BytesExpr", cpy_r_r15);
        goto CPyL73;
    }
    cpy_r_r24 = ((mypy___nodes___BytesExprObject *)cpy_r_r23)->_value;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r22 = cpy_r_r24;
CPyL13: ;
    cpy_r_r25 = CPyStr_Size_size_t(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 424, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    cpy_r_r27 = cpy_r_r25 << 1;
    cpy_r_r28 = cpy_r_r27 != 2;
    if (!cpy_r_r28) goto CPyL16;
    cpy_r_r29 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = CPyDef_messages___MessageBuilder___requires_int_or_char(cpy_r_r29, cpy_r_call, 1);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 425, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
CPyL16: ;
    cpy_r_r31 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = CPyDef_checker___TypeChecker___lookup_type(cpy_r_r31, cpy_r_repl);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 426, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    cpy_r_r33 = CPyDef_types___get_proper_type(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 426, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    if (likely(cpy_r_r33 != Py_None))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 426, CPyStatic_checkstrformat___globals, "mypy.types.ProperType", cpy_r_r33);
        goto CPyL73;
    }
    cpy_r_c_typ = cpy_r_r34;
    cpy_r_r35 = (PyObject *)CPyType_types___Instance;
    cpy_r_r36 = (CPyPtr)&((PyObject *)cpy_r_c_typ)->ob_type;
    cpy_r_r37 = *(PyObject * *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 == cpy_r_r35;
    if (!cpy_r_r38) goto CPyL25;
    if (likely(Py_TYPE(cpy_r_c_typ) == CPyType_types___Instance))
        cpy_r_r39 = cpy_r_c_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 427, CPyStatic_checkstrformat___globals, "mypy.types.Instance", cpy_r_c_typ);
        goto CPyL74;
    }
    cpy_r_r40 = ((mypy___types___InstanceObject *)cpy_r_r39)->_last_known_value;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r42 = cpy_r_r40 != cpy_r_r41;
    CPy_DECREF(cpy_r_r40);
    if (!cpy_r_r42) goto CPyL25;
    if (likely(Py_TYPE(cpy_r_c_typ) == CPyType_types___Instance))
        cpy_r_r43 = cpy_r_c_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 428, CPyStatic_checkstrformat___globals, "mypy.types.Instance", cpy_r_c_typ);
        goto CPyL74;
    }
    cpy_r_r44 = ((mypy___types___InstanceObject *)cpy_r_r43)->_last_known_value;
    CPy_INCREF(cpy_r_r44);
    if (likely(cpy_r_r44 != Py_None))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 428, CPyStatic_checkstrformat___globals, "mypy.types.LiteralType", cpy_r_r44);
        goto CPyL74;
    }
    CPy_DECREF(cpy_r_c_typ);
    cpy_r_c_typ = cpy_r_r45;
CPyL25: ;
    cpy_r_r46 = (PyObject *)CPyType_types___LiteralType;
    cpy_r_r47 = (CPyPtr)&((PyObject *)cpy_r_c_typ)->ob_type;
    cpy_r_r48 = *(PyObject * *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 == cpy_r_r46;
    if (!cpy_r_r49) goto CPyL75;
    if (likely(Py_TYPE(cpy_r_c_typ) == CPyType_types___LiteralType))
        cpy_r_r50 = cpy_r_c_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 429, CPyStatic_checkstrformat___globals, "mypy.types.LiteralType", cpy_r_c_typ);
        goto CPyL74;
    }
    cpy_r_r51 = ((mypy___types___LiteralTypeObject *)cpy_r_r50)->_value;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = (PyObject *)&PyUnicode_Type;
    cpy_r_r53 = PyObject_IsInstance(cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 429, CPyStatic_checkstrformat___globals);
        goto CPyL74;
    }
    cpy_r_r55 = cpy_r_r53;
    if (!cpy_r_r55) goto CPyL75;
    if (likely(Py_TYPE(cpy_r_c_typ) == CPyType_types___LiteralType))
        cpy_r_r56 = cpy_r_c_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 430, CPyStatic_checkstrformat___globals, "mypy.types.LiteralType", cpy_r_c_typ);
        goto CPyL74;
    }
    cpy_r_r57 = ((mypy___types___LiteralTypeObject *)cpy_r_r56)->_value;
    CPy_INCREF(cpy_r_r57);
    if (likely(PyUnicode_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 430, CPyStatic_checkstrformat___globals, "str", cpy_r_r57);
        goto CPyL74;
    }
    CPy_DECREF(cpy_r_c_typ);
    cpy_r_r59 = CPyStr_Size_size_t(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 430, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    cpy_r_r61 = cpy_r_r59 << 1;
    cpy_r_r62 = cpy_r_r61 != 2;
    if (!cpy_r_r62) goto CPyL34;
    cpy_r_r63 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r63);
    cpy_r_r64 = CPyDef_messages___MessageBuilder___requires_int_or_char(cpy_r_r63, cpy_r_call, 1);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 431, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
CPyL34: ;
    cpy_r_r65 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_conv_type;
    CPy_INCREF(cpy_r_r65);
    cpy_r_r66 = PyObject_IsTrue(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 432, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    cpy_r_r68 = cpy_r_r66;
    if (!cpy_r_r68) goto CPyL39;
    cpy_r_r69 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_conv_type;
    CPy_INCREF(cpy_r_r69);
    cpy_r_r70 = CPyStatics[1417]; /* 's' */
    cpy_r_r71 = PyObject_RichCompare(cpy_r_r69, cpy_r_r70, 2);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 432, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    cpy_r_r72 = PyObject_IsTrue(cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 432, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    cpy_r_r74 = cpy_r_r72;
    if (!cpy_r_r74) goto CPyL49;
CPyL39: ;
    cpy_r_r75 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_conversion;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = PyObject_IsTrue(cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 432, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    cpy_r_r78 = cpy_r_r76;
    if (cpy_r_r78) goto CPyL49;
    cpy_r_r79 = CPyStatics[1179]; /* 'builtins.bytes' */
    cpy_r_r80 = CPyDef_checkstrformat___has_type_component(cpy_r_actual_type, cpy_r_r79);
    if (unlikely(cpy_r_r80 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 433, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    if (!cpy_r_r80) goto CPyL49;
    cpy_r_r81 = CPyStatics[1418]; /* '__str__' */
    cpy_r_r82 = 2;
    cpy_r_r83 = CPyDef_typeops___custom_special_method(cpy_r_actual_type, cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 433, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    if (cpy_r_r83) goto CPyL49;
    cpy_r_r84 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r84);
    cpy_r_r85 = CPyStatics[1419]; /* ('If x = b\'abc\' then f"{x}" or "{}".format(x) '
                                     'produces "b\'abc\'", not "abc". If this is desired '
                                     'behavior, use f"{x!r}" or "{!r}".format(x). '
                                     'Otherwise, decode the bytes') */
    cpy_r_r86 = CPyStatic_errorcodes___STR_BYTES_PY3;
    if (unlikely(cpy_r_r86 == NULL)) {
        goto CPyL76;
    } else
        goto CPyL48;
CPyL46: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STR_BYTES_PY3\" was not set");
    cpy_r_r87 = 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 441, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    CPy_Unreachable();
CPyL48: ;
    cpy_r_r88 = NULL;
    cpy_r_r89 = 2;
    cpy_r_r90 = NULL;
    cpy_r_r91 = CPyDef_messages___MessageBuilder___fail(cpy_r_r84, cpy_r_r85, cpy_r_call, cpy_r_r86, cpy_r_r88, cpy_r_r89, cpy_r_r90);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 436, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
CPyL49: ;
    cpy_r_r92 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_flags;
    CPy_INCREF(cpy_r_r92);
    cpy_r_r93 = PyObject_IsTrue(cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 443, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    cpy_r_r95 = cpy_r_r93;
    if (!cpy_r_r95) goto CPyL72;
    cpy_r_r96 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r97 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_self, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 445, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    cpy_r_r98 = CPyStatics[1180]; /* 'builtins.float' */
    cpy_r_r99 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_self, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 445, CPyStatic_checkstrformat___globals);
        goto CPyL77;
    }
    cpy_r_r100 = PyList_New(2);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 445, CPyStatic_checkstrformat___globals);
        goto CPyL78;
    }
    cpy_r_r101 = (CPyPtr)&((PyListObject *)cpy_r_r100)->ob_item;
    cpy_r_r102 = *(CPyPtr *)cpy_r_r101;
    *(PyObject * *)cpy_r_r102 = cpy_r_r97;
    cpy_r_r103 = cpy_r_r102 + 8;
    *(PyObject * *)cpy_r_r103 = cpy_r_r99;
    cpy_r_r104 = CPY_INT_TAG;
    cpy_r_r105 = CPY_INT_TAG;
    cpy_r_r106 = 2;
    cpy_r_r107 = 2;
    cpy_r_r108 = CPyDef_types___UnionType(cpy_r_r100, cpy_r_r104, cpy_r_r105, cpy_r_r106, cpy_r_r107);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 444, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    cpy_r_numeric_types = cpy_r_r108;
    cpy_r_r109 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_conv_type;
    CPy_INCREF(cpy_r_r109);
    cpy_r_r110 = PyObject_IsTrue(cpy_r_r109);
    CPy_DECREF(cpy_r_r109);
    cpy_r_r111 = cpy_r_r110 >= 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 448, CPyStatic_checkstrformat___globals);
        goto CPyL79;
    }
    cpy_r_r112 = cpy_r_r110;
    if (!cpy_r_r112) goto CPyL62;
    cpy_r_r113 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_conv_type;
    CPy_INCREF(cpy_r_r113);
    cpy_r_r114 = CPyStatic_checkstrformat___NUMERIC_TYPES_NEW;
    if (unlikely(cpy_r_r114 == NULL)) {
        goto CPyL80;
    } else
        goto CPyL60;
CPyL58: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"NUMERIC_TYPES_NEW\" was not set");
    cpy_r_r115 = 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 449, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    CPy_Unreachable();
CPyL60: ;
    cpy_r_r116 = PySet_Contains(cpy_r_r114, cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 449, CPyStatic_checkstrformat___globals);
        goto CPyL79;
    }
    cpy_r_r118 = cpy_r_r116;
    cpy_r_r119 = cpy_r_r118 ^ 1;
    if (cpy_r_r119) goto CPyL81;
CPyL62: ;
    cpy_r_r120 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_conv_type;
    CPy_INCREF(cpy_r_r120);
    cpy_r_r121 = PyObject_IsTrue(cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 450, CPyStatic_checkstrformat___globals);
        goto CPyL79;
    }
    cpy_r_r123 = cpy_r_r121;
    if (cpy_r_r123) goto CPyL82;
    cpy_r_r124 = NULL;
    cpy_r_r125 = 2;
    cpy_r_r126 = 2;
    cpy_r_r127 = 2;
    cpy_r_r128 = 2;
    cpy_r_r129 = 2;
    cpy_r_r130 = NULL;
    cpy_r_r131 = CPyDef_subtypes___is_subtype(cpy_r_actual_type, cpy_r_numeric_types, cpy_r_r124, cpy_r_r125, cpy_r_r126, cpy_r_r127, cpy_r_r128, cpy_r_r129, cpy_r_r130);
    CPy_DECREF(cpy_r_numeric_types);
    if (unlikely(cpy_r_r131 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 451, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    if (cpy_r_r131) goto CPyL72;
    cpy_r_r132 = CPyStatics[1411]; /* '__format__' */
    cpy_r_r133 = 2;
    cpy_r_r134 = CPyDef_typeops___custom_special_method(cpy_r_actual_type, cpy_r_r132, cpy_r_r133);
    if (unlikely(cpy_r_r134 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 452, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    if (cpy_r_r134) goto CPyL72;
CPyL68: ;
    cpy_r_r135 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r135);
    cpy_r_r136 = CPyStatics[1420]; /* 'Numeric flags are only allowed for numeric types' */
    cpy_r_r137 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r137 == NULL)) {
        goto CPyL83;
    } else
        goto CPyL71;
CPyL69: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r138 = 0;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 457, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
    CPy_Unreachable();
CPyL71: ;
    cpy_r_r139 = NULL;
    cpy_r_r140 = 2;
    cpy_r_r141 = NULL;
    cpy_r_r142 = CPyDef_messages___MessageBuilder___fail(cpy_r_r135, cpy_r_r136, cpy_r_call, cpy_r_r137, cpy_r_r139, cpy_r_r140, cpy_r_r141);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r142 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 454, CPyStatic_checkstrformat___globals);
        goto CPyL73;
    }
CPyL72: ;
    return 1;
CPyL73: ;
    cpy_r_r143 = 2;
    return cpy_r_r143;
CPyL74: ;
    CPy_DecRef(cpy_r_c_typ);
    goto CPyL73;
CPyL75: ;
    CPy_DECREF(cpy_r_c_typ);
    goto CPyL34;
CPyL76: ;
    CPy_DecRef(cpy_r_r84);
    goto CPyL46;
CPyL77: ;
    CPy_DecRef(cpy_r_r97);
    goto CPyL73;
CPyL78: ;
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r99);
    goto CPyL73;
CPyL79: ;
    CPy_DecRef(cpy_r_numeric_types);
    goto CPyL73;
CPyL80: ;
    CPy_DecRef(cpy_r_numeric_types);
    CPy_DecRef(cpy_r_r113);
    goto CPyL58;
CPyL81: ;
    CPy_DECREF(cpy_r_numeric_types);
    goto CPyL68;
CPyL82: ;
    CPy_DECREF(cpy_r_numeric_types);
    goto CPyL72;
CPyL83: ;
    CPy_DecRef(cpy_r_r135);
    goto CPyL69;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___perform_special_format_checks(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"spec", "call", "repl", "actual_type", "expected_type", 0};
    static CPyArg_Parser parser = {"OOOOO:perform_special_format_checks", kwlist, 0};
    PyObject *obj_spec;
    PyObject *obj_call;
    PyObject *obj_repl;
    PyObject *obj_actual_type;
    PyObject *obj_expected_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_spec, &obj_call, &obj_repl, &obj_actual_type, &obj_expected_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_spec;
    if (likely(Py_TYPE(obj_spec) == CPyType_checkstrformat___ConversionSpecifier))
        arg_spec = obj_spec;
    else {
        CPy_TypeError("mypy.checkstrformat.ConversionSpecifier", obj_spec); 
        goto fail;
    }
    PyObject *arg_call;
    if (likely(Py_TYPE(obj_call) == CPyType_nodes___CallExpr))
        arg_call = obj_call;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_call); 
        goto fail;
    }
    PyObject *arg_repl;
    if (likely(PyObject_TypeCheck(obj_repl, CPyType_nodes___Expression)))
        arg_repl = obj_repl;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_repl); 
        goto fail;
    }
    PyObject *arg_actual_type;
    if (likely(PyObject_TypeCheck(obj_actual_type, CPyType_types___Type)))
        arg_actual_type = obj_actual_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_actual_type); 
        goto fail;
    }
    PyObject *arg_expected_type;
    if (likely(PyObject_TypeCheck(obj_expected_type, CPyType_types___Type)))
        arg_expected_type = obj_expected_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_expected_type); 
        goto fail;
    }
    char retval = CPyDef_checkstrformat___StringFormatterChecker___perform_special_format_checks(arg_self, arg_spec, arg_call, arg_repl, arg_actual_type, arg_expected_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "perform_special_format_checks", 414, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___StringFormatterChecker___find_replacements_in_call(PyObject *cpy_r_self, PyObject *cpy_r_call, PyObject *cpy_r_keys) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_used;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_key;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_expr;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    CPyTagged cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyPtr cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    CPyTagged cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyTagged cpy_r_r70;
    CPyPtr cpy_r_r71;
    int64_t cpy_r_r72;
    CPyTagged cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_kind;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    CPyTagged cpy_r_r86;
    CPyPtr cpy_r_r87;
    int64_t cpy_r_r88;
    CPyTagged cpy_r_r89;
    CPyTagged cpy_r_total_explicit;
    CPyPtr cpy_r_r90;
    int64_t cpy_r_r91;
    CPyTagged cpy_r_r92;
    int64_t cpy_r_r93;
    char cpy_r_r94;
    int64_t cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 465, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = PySet_New(NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 466, CPyStatic_checkstrformat___globals);
        goto CPyL59;
    }
    cpy_r_used = cpy_r_r1;
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_keys)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL36;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_keys, cpy_r_r2);
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 467, CPyStatic_checkstrformat___globals, "str", cpy_r_r7);
        goto CPyL60;
    }
    cpy_r_key = cpy_r_r8;
    cpy_r_r9 = CPyStatics[1421]; /* 'isdecimal' */
    PyObject *cpy_r_r10[1] = {cpy_r_key};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r9, cpy_r_r11, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 468, CPyStatic_checkstrformat___globals);
        goto CPyL61;
    }
    if (unlikely(!PyBool_Check(cpy_r_r12))) {
        CPy_TypeError("bool", cpy_r_r12); cpy_r_r13 = 2;
    } else
        cpy_r_r13 = cpy_r_r12 == Py_True;
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 468, CPyStatic_checkstrformat___globals);
        goto CPyL61;
    }
    if (!cpy_r_r13) goto CPyL20;
    cpy_r_r14 = CPyLong_FromStr(cpy_r_key);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 469, CPyStatic_checkstrformat___globals);
        goto CPyL61;
    }
    if (likely(PyLong_Check(cpy_r_r14)))
        cpy_r_r15 = CPyTagged_FromObject(cpy_r_r14);
    else {
        CPy_TypeError("int", cpy_r_r14); cpy_r_r15 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 469, CPyStatic_checkstrformat___globals);
        goto CPyL61;
    }
    cpy_r_r16 = CPyDef_checkstrformat___StringFormatterChecker___get_expr_by_position(cpy_r_self, cpy_r_r15, cpy_r_call);
    CPyTagged_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 469, CPyStatic_checkstrformat___globals);
        goto CPyL61;
    }
    cpy_r_expr = cpy_r_r16;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_expr != cpy_r_r17;
    if (cpy_r_r18) {
        goto CPyL62;
    } else
        goto CPyL63;
CPyL12: ;
    cpy_r_r19 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyStatics[1422]; /* ('Cannot find replacement for positional format '
                                     'specifier ') */
    cpy_r_r21 = CPyStr_Build(2, cpy_r_r20, cpy_r_key);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 472, CPyStatic_checkstrformat___globals);
        goto CPyL64;
    }
    cpy_r_r22 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r22 == NULL)) {
        goto CPyL65;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 475, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r24 = NULL;
    cpy_r_r25 = 2;
    cpy_r_r26 = NULL;
    cpy_r_r27 = CPyDef_messages___MessageBuilder___fail(cpy_r_r19, cpy_r_r21, cpy_r_call, cpy_r_r22, cpy_r_r24, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 471, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    cpy_r_r28 = NULL;
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPY_INT_TAG;
    cpy_r_r31 = CPY_INT_TAG;
    cpy_r_r32 = CPyDef_types___AnyType(10, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 477, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    cpy_r_r33 = 2;
    cpy_r_r34 = NULL;
    cpy_r_r35 = CPyDef_nodes___TempNode(cpy_r_r32, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 477, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    cpy_r_expr = cpy_r_r35;
    goto CPyL30;
CPyL20: ;
    cpy_r_r36 = CPyDef_checkstrformat___StringFormatterChecker___get_expr_by_name(cpy_r_self, cpy_r_key, cpy_r_call);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 479, CPyStatic_checkstrformat___globals);
        goto CPyL61;
    }
    cpy_r_expr = cpy_r_r36;
    cpy_r_r37 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r38 = cpy_r_expr != cpy_r_r37;
    if (cpy_r_r38) {
        goto CPyL62;
    } else
        goto CPyL66;
CPyL22: ;
    cpy_r_r39 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r39);
    cpy_r_r40 = CPyStatics[1423]; /* 'Cannot find replacement for named format specifier "' */
    cpy_r_r41 = CPyStatics[178]; /* '"' */
    cpy_r_r42 = CPyStr_Build(3, cpy_r_r40, cpy_r_key, cpy_r_r41);
    CPy_DECREF(cpy_r_key);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 482, CPyStatic_checkstrformat___globals);
        goto CPyL67;
    }
    cpy_r_r43 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r43 == NULL)) {
        goto CPyL68;
    } else
        goto CPyL26;
CPyL24: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r44 = 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 484, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r45 = NULL;
    cpy_r_r46 = 2;
    cpy_r_r47 = NULL;
    cpy_r_r48 = CPyDef_messages___MessageBuilder___fail(cpy_r_r39, cpy_r_r42, cpy_r_call, cpy_r_r43, cpy_r_r45, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 481, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    cpy_r_r49 = NULL;
    cpy_r_r50 = NULL;
    cpy_r_r51 = CPY_INT_TAG;
    cpy_r_r52 = CPY_INT_TAG;
    cpy_r_r53 = CPyDef_types___AnyType(10, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 486, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    cpy_r_r54 = 2;
    cpy_r_r55 = NULL;
    cpy_r_r56 = CPyDef_nodes___TempNode(cpy_r_r53, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 486, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    cpy_r_expr = cpy_r_r56;
CPyL30: ;
    CPy_INCREF(cpy_r_expr);
    if (likely(cpy_r_expr != Py_None))
        cpy_r_r57 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 487, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_expr);
        goto CPyL69;
    }
    cpy_r_r58 = PyList_Append(cpy_r_result, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 487, CPyStatic_checkstrformat___globals);
        goto CPyL69;
    }
    cpy_r_r60 = (PyObject *)CPyType_nodes___TempNode;
    cpy_r_r61 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r62 = *(PyObject * *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 == cpy_r_r60;
    if (cpy_r_r63) goto CPyL70;
    if (likely(cpy_r_expr != Py_None))
        cpy_r_r64 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 489, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_expr);
        goto CPyL60;
    }
    cpy_r_r65 = PySet_Add(cpy_r_used, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 489, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
CPyL35: ;
    cpy_r_r67 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r67;
    goto CPyL3;
CPyL36: ;
    cpy_r_r68 = PyList_New(0);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 492, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    cpy_r_r69 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_kinds;
    CPy_INCREF(cpy_r_r69);
    cpy_r_r70 = 0;
CPyL38: ;
    cpy_r_r71 = (CPyPtr)&((PyVarObject *)cpy_r_r69)->ob_size;
    cpy_r_r72 = *(int64_t *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 << 1;
    cpy_r_r74 = (Py_ssize_t)cpy_r_r70 < (Py_ssize_t)cpy_r_r73;
    if (!cpy_r_r74) goto CPyL71;
    cpy_r_r75 = CPyList_GetItemUnsafe(cpy_r_r69, cpy_r_r70);
    if (likely(Py_TYPE(cpy_r_r75) == CPyType_nodes___ArgKind))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 492, CPyStatic_checkstrformat___globals, "mypy.nodes.ArgKind", cpy_r_r75);
        goto CPyL72;
    }
    CPy_INCREF(cpy_r_r76);
    cpy_r_kind = cpy_r_r76;
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r77 == NULL)) {
        goto CPyL73;
    } else
        goto CPyL43;
CPyL41: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r78 = 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 492, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r79 = cpy_r_kind == cpy_r_r77;
    if (!cpy_r_r79) goto CPyL45;
    cpy_r_r80 = cpy_r_r79;
    goto CPyL49;
CPyL45: ;
    cpy_r_r81 = CPyStatic_nodes___ARG_NAMED;
    if (unlikely(cpy_r_r81 == NULL)) {
        goto CPyL74;
    } else
        goto CPyL48;
CPyL46: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r82 = 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 492, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL48: ;
    cpy_r_r83 = cpy_r_kind == cpy_r_r81;
    cpy_r_r80 = cpy_r_r83;
CPyL49: ;
    if (!cpy_r_r80) goto CPyL75;
    cpy_r_r84 = PyList_Append(cpy_r_r68, cpy_r_kind);
    CPy_DECREF(cpy_r_kind);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 492, CPyStatic_checkstrformat___globals);
        goto CPyL76;
    }
CPyL51: ;
    cpy_r_r86 = cpy_r_r70 + 2;
    cpy_r_r70 = cpy_r_r86;
    goto CPyL38;
CPyL52: ;
    cpy_r_r87 = (CPyPtr)&((PyVarObject *)cpy_r_r68)->ob_size;
    cpy_r_r88 = *(int64_t *)cpy_r_r87;
    CPy_DECREF(cpy_r_r68);
    cpy_r_r89 = cpy_r_r88 << 1;
    cpy_r_total_explicit = cpy_r_r89;
    cpy_r_r90 = (CPyPtr)&((PySetObject *)cpy_r_used)->used;
    cpy_r_r91 = *(int64_t *)cpy_r_r90;
    CPy_DECREF(cpy_r_used);
    cpy_r_r92 = cpy_r_r91 << 1;
    cpy_r_r93 = cpy_r_r92 & 1;
    cpy_r_r94 = cpy_r_r93 != 0;
    if (cpy_r_r94) goto CPyL54;
    cpy_r_r95 = cpy_r_total_explicit & 1;
    cpy_r_r96 = cpy_r_r95 != 0;
    if (!cpy_r_r96) goto CPyL55;
CPyL54: ;
    cpy_r_r97 = CPyTagged_IsLt_(cpy_r_r92, cpy_r_total_explicit);
    CPyTagged_DECREF(cpy_r_total_explicit);
    if (cpy_r_r97) {
        goto CPyL56;
    } else
        goto CPyL57;
CPyL55: ;
    cpy_r_r98 = (Py_ssize_t)cpy_r_r92 < (Py_ssize_t)cpy_r_total_explicit;
    CPyTagged_DECREF(cpy_r_total_explicit);
    if (!cpy_r_r98) goto CPyL57;
CPyL56: ;
    cpy_r_r99 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r99);
    cpy_r_r100 = CPyDef_messages___MessageBuilder___too_many_string_formatting_arguments(cpy_r_r99, cpy_r_call);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 494, CPyStatic_checkstrformat___globals);
        goto CPyL59;
    }
CPyL57: ;
    return cpy_r_result;
CPyL58: ;
    cpy_r_r101 = NULL;
    return cpy_r_r101;
CPyL59: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL58;
CPyL60: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_used);
    goto CPyL58;
CPyL61: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_used);
    CPy_DecRef(cpy_r_key);
    goto CPyL58;
CPyL62: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL30;
CPyL63: ;
    CPy_DECREF(cpy_r_expr);
    goto CPyL12;
CPyL64: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_used);
    CPy_DecRef(cpy_r_r19);
    goto CPyL58;
CPyL65: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_used);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    goto CPyL14;
CPyL66: ;
    CPy_DECREF(cpy_r_expr);
    goto CPyL22;
CPyL67: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_used);
    CPy_DecRef(cpy_r_r39);
    goto CPyL58;
CPyL68: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_used);
    CPy_DecRef(cpy_r_r39);
    CPy_DecRef(cpy_r_r42);
    goto CPyL24;
CPyL69: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_used);
    CPy_DecRef(cpy_r_expr);
    goto CPyL58;
CPyL70: ;
    CPy_DECREF(cpy_r_expr);
    goto CPyL35;
CPyL71: ;
    CPy_DECREF(cpy_r_r69);
    goto CPyL52;
CPyL72: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_used);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_r75);
    goto CPyL58;
CPyL73: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_used);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_kind);
    goto CPyL41;
CPyL74: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_used);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r69);
    CPy_DecRef(cpy_r_kind);
    goto CPyL46;
CPyL75: ;
    CPy_DECREF(cpy_r_kind);
    goto CPyL51;
CPyL76: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_used);
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r69);
    goto CPyL58;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___find_replacements_in_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"call", "keys", 0};
    static CPyArg_Parser parser = {"OO:find_replacements_in_call", kwlist, 0};
    PyObject *obj_call;
    PyObject *obj_keys;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_call, &obj_keys)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_call;
    if (likely(Py_TYPE(obj_call) == CPyType_nodes___CallExpr))
        arg_call = obj_call;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_call); 
        goto fail;
    }
    PyObject *arg_keys;
    if (likely(PyList_Check(obj_keys)))
        arg_keys = obj_keys;
    else {
        CPy_TypeError("list", obj_keys); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkstrformat___StringFormatterChecker___find_replacements_in_call(arg_self, arg_call, arg_keys);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "find_replacements_in_call", 460, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___StringFormatterChecker___get_expr_by_position(PyObject *cpy_r_self, CPyTagged cpy_r_pos, PyObject *cpy_r_call) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_kind;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_pos_args;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    int64_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
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
    PyObject *cpy_r_arg_2;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_kind_2;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    CPyTagged cpy_r_r55;
    CPyTagged cpy_r_r56;
    PyObject *cpy_r_star_args;
    CPyPtr cpy_r_r57;
    int64_t cpy_r_r58;
    CPyTagged cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_star_arg;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_varargs_type;
    PyObject *cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyTagged cpy_r_r88;
    CPyTagged cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyPtr cpy_r_r92;
    CPyPtr cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_iter_info;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 503, CPyStatic_checkstrformat___globals);
        goto CPyL53;
    }
    cpy_r_r1 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_args;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
    cpy_r_r3 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_kinds;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL54;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r12) goto CPyL54;
    cpy_r_r13 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r13, CPyType_nodes___Expression)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_position", 503, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_r13);
        goto CPyL55;
    }
    cpy_r_arg = cpy_r_r14;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_nodes___ArgKind))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_position", 503, CPyStatic_checkstrformat___globals, "mypy.nodes.ArgKind", cpy_r_r15);
        goto CPyL56;
    }
    cpy_r_kind = cpy_r_r16;
    cpy_r_r17 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r17 == NULL)) {
        goto CPyL57;
    } else
        goto CPyL9;
CPyL7: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 503, CPyStatic_checkstrformat___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r19 = cpy_r_kind == cpy_r_r17;
    CPy_DECREF(cpy_r_kind);
    if (!cpy_r_r19) goto CPyL58;
    cpy_r_r20 = PyList_Append(cpy_r_r0, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 503, CPyStatic_checkstrformat___globals);
        goto CPyL55;
    }
CPyL11: ;
    cpy_r_r22 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r22;
    cpy_r_r23 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r23;
    goto CPyL2;
CPyL12: ;
    cpy_r_pos_args = cpy_r_r0;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_pos_args)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = cpy_r_pos & 1;
    cpy_r_r28 = cpy_r_r27 != 0;
    if (!cpy_r_r28) goto CPyL14;
    cpy_r_r29 = CPyTagged_IsLt_(cpy_r_pos, cpy_r_r26);
    if (cpy_r_r29) {
        goto CPyL15;
    } else
        goto CPyL59;
CPyL14: ;
    cpy_r_r30 = (Py_ssize_t)cpy_r_pos < (Py_ssize_t)cpy_r_r26;
    if (!cpy_r_r30) goto CPyL59;
CPyL15: ;
    cpy_r_r31 = CPyList_GetItem(cpy_r_pos_args, cpy_r_pos);
    CPy_DECREF(cpy_r_pos_args);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 505, CPyStatic_checkstrformat___globals);
        goto CPyL53;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r31, CPyType_nodes___Expression)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_position", 505, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_r31);
        goto CPyL53;
    }
    return cpy_r_r32;
CPyL18: ;
    cpy_r_r33 = PyList_New(0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 506, CPyStatic_checkstrformat___globals);
        goto CPyL53;
    }
    cpy_r_r34 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_args;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = 0;
    cpy_r_r36 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_kinds;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = 0;
CPyL20: ;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_r34)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r35 < (Py_ssize_t)cpy_r_r40;
    if (!cpy_r_r41) goto CPyL60;
    cpy_r_r42 = (CPyPtr)&((PyVarObject *)cpy_r_r36)->ob_size;
    cpy_r_r43 = *(int64_t *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 << 1;
    cpy_r_r45 = (Py_ssize_t)cpy_r_r37 < (Py_ssize_t)cpy_r_r44;
    if (!cpy_r_r45) goto CPyL60;
    cpy_r_r46 = CPyList_GetItemUnsafe(cpy_r_r34, cpy_r_r35);
    if (likely(PyObject_TypeCheck(cpy_r_r46, CPyType_nodes___Expression)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_position", 506, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_r46);
        goto CPyL61;
    }
    cpy_r_arg_2 = cpy_r_r47;
    cpy_r_r48 = CPyList_GetItemUnsafe(cpy_r_r36, cpy_r_r37);
    if (likely(Py_TYPE(cpy_r_r48) == CPyType_nodes___ArgKind))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_position", 506, CPyStatic_checkstrformat___globals, "mypy.nodes.ArgKind", cpy_r_r48);
        goto CPyL62;
    }
    cpy_r_kind_2 = cpy_r_r49;
    cpy_r_r50 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r50 == NULL)) {
        goto CPyL63;
    } else
        goto CPyL27;
CPyL25: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 506, CPyStatic_checkstrformat___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r52 = cpy_r_kind_2 == cpy_r_r50;
    CPy_DECREF(cpy_r_kind_2);
    if (!cpy_r_r52) goto CPyL64;
    cpy_r_r53 = PyList_Append(cpy_r_r33, cpy_r_arg_2);
    CPy_DECREF(cpy_r_arg_2);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 506, CPyStatic_checkstrformat___globals);
        goto CPyL61;
    }
CPyL29: ;
    cpy_r_r55 = cpy_r_r35 + 2;
    cpy_r_r35 = cpy_r_r55;
    cpy_r_r56 = cpy_r_r37 + 2;
    cpy_r_r37 = cpy_r_r56;
    goto CPyL20;
CPyL30: ;
    cpy_r_star_args = cpy_r_r33;
    cpy_r_r57 = (CPyPtr)&((PyVarObject *)cpy_r_star_args)->ob_size;
    cpy_r_r58 = *(int64_t *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 << 1;
    cpy_r_r60 = cpy_r_r59 != 0;
    if (cpy_r_r60) {
        goto CPyL32;
    } else
        goto CPyL65;
CPyL31: ;
    cpy_r_r61 = Py_None;
    CPy_INCREF(cpy_r_r61);
    return cpy_r_r61;
CPyL32: ;
    cpy_r_r62 = CPyList_GetItemShort(cpy_r_star_args, 0);
    CPy_DECREF(cpy_r_star_args);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 511, CPyStatic_checkstrformat___globals);
        goto CPyL53;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r62, CPyType_nodes___Expression)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_position", 511, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_r62);
        goto CPyL53;
    }
    cpy_r_star_arg = cpy_r_r63;
    cpy_r_r64 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r64);
    cpy_r_r65 = CPyDef_checker___TypeChecker___lookup_type(cpy_r_r64, cpy_r_star_arg);
    CPy_DECREF(cpy_r_star_arg);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 512, CPyStatic_checkstrformat___globals);
        goto CPyL53;
    }
    cpy_r_r66 = CPyDef_types___get_proper_type(cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 512, CPyStatic_checkstrformat___globals);
        goto CPyL53;
    }
    if (likely(cpy_r_r66 != Py_None))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_position", 512, CPyStatic_checkstrformat___globals, "mypy.types.ProperType", cpy_r_r66);
        goto CPyL53;
    }
    cpy_r_varargs_type = cpy_r_r67;
    cpy_r_r68 = (PyObject *)CPyType_types___Instance;
    cpy_r_r69 = (CPyPtr)&((PyObject *)cpy_r_varargs_type)->ob_type;
    cpy_r_r70 = *(PyObject * *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 == cpy_r_r68;
    if (!cpy_r_r71) goto CPyL66;
    if (likely(Py_TYPE(cpy_r_varargs_type) == CPyType_types___Instance))
        cpy_r_r72 = cpy_r_varargs_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_position", 513, CPyStatic_checkstrformat___globals, "mypy.types.Instance", cpy_r_varargs_type);
        goto CPyL67;
    }
    cpy_r_r73 = ((mypy___types___InstanceObject *)cpy_r_r72)->_type;
    CPy_INCREF(cpy_r_r73);
    cpy_r_r74 = CPyStatics[696]; /* 'typing.Sequence' */
    cpy_r_r75 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 513, CPyStatic_checkstrformat___globals);
        goto CPyL67;
    }
    if (cpy_r_r75) {
        goto CPyL44;
    } else
        goto CPyL66;
CPyL41: ;
    cpy_r_r76 = NULL;
    cpy_r_r77 = NULL;
    cpy_r_r78 = CPY_INT_TAG;
    cpy_r_r79 = CPY_INT_TAG;
    cpy_r_r80 = CPyDef_types___AnyType(12, cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 517, CPyStatic_checkstrformat___globals);
        goto CPyL53;
    }
    cpy_r_r81 = 2;
    cpy_r_r82 = NULL;
    cpy_r_r83 = CPyDef_nodes___TempNode(cpy_r_r80, cpy_r_r81, cpy_r_r82);
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 517, CPyStatic_checkstrformat___globals);
        goto CPyL53;
    }
    return cpy_r_r83;
CPyL44: ;
    cpy_r_r84 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r84);
    cpy_r_r85 = CPyStatics[696]; /* 'typing.Sequence' */
    cpy_r_r86 = NULL;
    cpy_r_r87 = NULL;
    cpy_r_r88 = CPY_INT_TAG;
    cpy_r_r89 = CPY_INT_TAG;
    cpy_r_r90 = CPyDef_types___AnyType(12, cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 519, CPyStatic_checkstrformat___globals);
        goto CPyL68;
    }
    cpy_r_r91 = PyList_New(1);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 519, CPyStatic_checkstrformat___globals);
        goto CPyL69;
    }
    cpy_r_r92 = (CPyPtr)&((PyListObject *)cpy_r_r91)->ob_item;
    cpy_r_r93 = *(CPyPtr *)cpy_r_r92;
    *(PyObject * *)cpy_r_r93 = cpy_r_r90;
    cpy_r_r94 = CPyDef_checker___TypeChecker___named_generic_type(cpy_r_r84, cpy_r_r85, cpy_r_r91);
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 518, CPyStatic_checkstrformat___globals);
        goto CPyL67;
    }
    cpy_r_r95 = ((mypy___types___InstanceObject *)cpy_r_r94)->_type;
    CPy_INCREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r94);
    cpy_r_iter_info = cpy_r_r95;
    if (likely(Py_TYPE(cpy_r_varargs_type) == CPyType_types___Instance))
        cpy_r_r96 = cpy_r_varargs_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_position", 521, CPyStatic_checkstrformat___globals, "mypy.types.Instance", cpy_r_varargs_type);
        goto CPyL70;
    }
    cpy_r_r97 = CPyDef_maptype___map_instance_to_supertype(cpy_r_r96, cpy_r_iter_info);
    CPy_DECREF(cpy_r_r96);
    CPy_DECREF(cpy_r_iter_info);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 521, CPyStatic_checkstrformat___globals);
        goto CPyL53;
    }
    cpy_r_r98 = ((mypy___types___InstanceObject *)cpy_r_r97)->_args;
    CPy_INCREF(cpy_r_r98);
    CPy_DECREF(cpy_r_r97);
    cpy_r_r99 = CPySequenceTuple_GetItem(cpy_r_r98, 0);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 521, CPyStatic_checkstrformat___globals);
        goto CPyL53;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r99, CPyType_types___Type)))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_position", 521, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_r99);
        goto CPyL53;
    }
    cpy_r_r101 = 2;
    cpy_r_r102 = NULL;
    cpy_r_r103 = CPyDef_nodes___TempNode(cpy_r_r100, cpy_r_r101, cpy_r_r102);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 521, CPyStatic_checkstrformat___globals);
        goto CPyL53;
    }
    return cpy_r_r103;
CPyL53: ;
    cpy_r_r104 = NULL;
    return cpy_r_r104;
CPyL54: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    goto CPyL12;
CPyL55: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL53;
CPyL56: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_arg);
    goto CPyL53;
CPyL57: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_kind);
    goto CPyL7;
CPyL58: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL11;
CPyL59: ;
    CPy_DECREF(cpy_r_pos_args);
    goto CPyL18;
CPyL60: ;
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r36);
    goto CPyL30;
CPyL61: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    goto CPyL53;
CPyL62: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_arg_2);
    goto CPyL53;
CPyL63: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r36);
    CPy_DecRef(cpy_r_arg_2);
    CPy_DecRef(cpy_r_kind_2);
    goto CPyL25;
CPyL64: ;
    CPy_DECREF(cpy_r_arg_2);
    goto CPyL29;
CPyL65: ;
    CPy_DECREF(cpy_r_star_args);
    goto CPyL31;
CPyL66: ;
    CPy_DECREF(cpy_r_varargs_type);
    goto CPyL41;
CPyL67: ;
    CPy_DecRef(cpy_r_varargs_type);
    goto CPyL53;
CPyL68: ;
    CPy_DecRef(cpy_r_varargs_type);
    CPy_DecRef(cpy_r_r84);
    goto CPyL53;
CPyL69: ;
    CPy_DecRef(cpy_r_varargs_type);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_r90);
    goto CPyL53;
CPyL70: ;
    CPy_DecRef(cpy_r_iter_info);
    goto CPyL53;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___get_expr_by_position(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"pos", "call", 0};
    static CPyArg_Parser parser = {"OO:get_expr_by_position", kwlist, 0};
    PyObject *obj_pos;
    PyObject *obj_call;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_pos, &obj_call)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    CPyTagged arg_pos;
    if (likely(PyLong_Check(obj_pos)))
        arg_pos = CPyTagged_BorrowFromObject(obj_pos);
    else {
        CPy_TypeError("int", obj_pos); goto fail;
    }
    PyObject *arg_call;
    if (likely(Py_TYPE(obj_call) == CPyType_nodes___CallExpr))
        arg_call = obj_call;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_call); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkstrformat___StringFormatterChecker___get_expr_by_position(arg_self, arg_pos, arg_call);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_position", 497, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___StringFormatterChecker___get_expr_by_name(PyObject *cpy_r_self, PyObject *cpy_r_key, PyObject *cpy_r_call) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_kind;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_named_args;
    CPyPtr cpy_r_r36;
    int64_t cpy_r_r37;
    CPyTagged cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyPtr cpy_r_r47;
    int64_t cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    CPyPtr cpy_r_r51;
    int64_t cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_arg_2;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_kind_2;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_star_args_2;
    CPyPtr cpy_r_r66;
    int64_t cpy_r_r67;
    CPyTagged cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_star_arg_2;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_kwargs_type;
    PyObject *cpy_r_r77;
    CPyPtr cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyTagged cpy_r_r87;
    CPyTagged cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyTagged cpy_r_r95;
    CPyTagged cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_any_type;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyPtr cpy_r_r101;
    CPyPtr cpy_r_r102;
    CPyPtr cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_mapping_info;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 529, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    cpy_r_r1 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_args;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
    cpy_r_r3 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_kinds;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = 0;
    cpy_r_r5 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_names;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = 0;
CPyL2: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL59;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL59;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL59;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r19, CPyType_nodes___Expression)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_name", 529, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_r19);
        goto CPyL60;
    }
    cpy_r_arg = cpy_r_r20;
    cpy_r_r21 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_nodes___ArgKind))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_name", 529, CPyStatic_checkstrformat___globals, "mypy.nodes.ArgKind", cpy_r_r21);
        goto CPyL61;
    }
    cpy_r_kind = cpy_r_r22;
    cpy_r_r23 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    if (PyUnicode_Check(cpy_r_r23))
        cpy_r_r24 = cpy_r_r23;
    else {
        cpy_r_r24 = NULL;
    }
    if (cpy_r_r24 != NULL) goto __LL1566;
    if (cpy_r_r23 == Py_None)
        cpy_r_r24 = cpy_r_r23;
    else {
        cpy_r_r24 = NULL;
    }
    if (cpy_r_r24 != NULL) goto __LL1566;
    CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_name", 529, CPyStatic_checkstrformat___globals, "str or None", cpy_r_r23);
    goto CPyL62;
__LL1566: ;
    cpy_r_name = cpy_r_r24;
    cpy_r_r25 = CPyStatic_nodes___ARG_NAMED;
    if (unlikely(cpy_r_r25 == NULL)) {
        goto CPyL63;
    } else
        goto CPyL11;
CPyL9: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 532, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r27 = cpy_r_kind == cpy_r_r25;
    CPy_DECREF(cpy_r_kind);
    if (cpy_r_r27) {
        goto CPyL13;
    } else
        goto CPyL64;
CPyL12: ;
    cpy_r_r28 = cpy_r_r27;
    goto CPyL16;
CPyL13: ;
    cpy_r_r29 = PyObject_RichCompare(cpy_r_name, cpy_r_key, 2);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 532, CPyStatic_checkstrformat___globals);
        goto CPyL61;
    }
    if (unlikely(!PyBool_Check(cpy_r_r29))) {
        CPy_TypeError("bool", cpy_r_r29); cpy_r_r30 = 2;
    } else
        cpy_r_r30 = cpy_r_r29 == Py_True;
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 532, CPyStatic_checkstrformat___globals);
        goto CPyL61;
    }
    cpy_r_r28 = cpy_r_r30;
CPyL16: ;
    if (!cpy_r_r28) goto CPyL65;
    cpy_r_r31 = PyList_Append(cpy_r_r0, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 529, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
CPyL18: ;
    cpy_r_r33 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r33;
    cpy_r_r34 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r34;
    cpy_r_r35 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r35;
    goto CPyL2;
CPyL19: ;
    cpy_r_named_args = cpy_r_r0;
    cpy_r_r36 = (CPyPtr)&((PyVarObject *)cpy_r_named_args)->ob_size;
    cpy_r_r37 = *(int64_t *)cpy_r_r36;
    cpy_r_r38 = cpy_r_r37 << 1;
    cpy_r_r39 = cpy_r_r38 != 0;
    if (!cpy_r_r39) goto CPyL66;
    cpy_r_r40 = CPyList_GetItemShort(cpy_r_named_args, 0);
    CPy_DECREF(cpy_r_named_args);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 535, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r40, CPyType_nodes___Expression)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_name", 535, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_r40);
        goto CPyL58;
    }
    return cpy_r_r41;
CPyL23: ;
    cpy_r_r42 = PyList_New(0);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 536, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    cpy_r_r43 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_args;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = 0;
    cpy_r_r45 = ((mypy___nodes___CallExprObject *)cpy_r_call)->_arg_kinds;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = 0;
CPyL25: ;
    cpy_r_r47 = (CPyPtr)&((PyVarObject *)cpy_r_r43)->ob_size;
    cpy_r_r48 = *(int64_t *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 << 1;
    cpy_r_r50 = (Py_ssize_t)cpy_r_r44 < (Py_ssize_t)cpy_r_r49;
    if (!cpy_r_r50) goto CPyL67;
    cpy_r_r51 = (CPyPtr)&((PyVarObject *)cpy_r_r45)->ob_size;
    cpy_r_r52 = *(int64_t *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 << 1;
    cpy_r_r54 = (Py_ssize_t)cpy_r_r46 < (Py_ssize_t)cpy_r_r53;
    if (!cpy_r_r54) goto CPyL67;
    cpy_r_r55 = CPyList_GetItemUnsafe(cpy_r_r43, cpy_r_r44);
    if (likely(PyObject_TypeCheck(cpy_r_r55, CPyType_nodes___Expression)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_name", 536, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_r55);
        goto CPyL68;
    }
    cpy_r_arg_2 = cpy_r_r56;
    cpy_r_r57 = CPyList_GetItemUnsafe(cpy_r_r45, cpy_r_r46);
    if (likely(Py_TYPE(cpy_r_r57) == CPyType_nodes___ArgKind))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_name", 536, CPyStatic_checkstrformat___globals, "mypy.nodes.ArgKind", cpy_r_r57);
        goto CPyL69;
    }
    cpy_r_kind_2 = cpy_r_r58;
    cpy_r_r59 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r59 == NULL)) {
        goto CPyL70;
    } else
        goto CPyL32;
CPyL30: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r60 = 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 536, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r61 = cpy_r_kind_2 == cpy_r_r59;
    CPy_DECREF(cpy_r_kind_2);
    if (!cpy_r_r61) goto CPyL71;
    cpy_r_r62 = PyList_Append(cpy_r_r42, cpy_r_arg_2);
    CPy_DECREF(cpy_r_arg_2);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 536, CPyStatic_checkstrformat___globals);
        goto CPyL68;
    }
CPyL34: ;
    cpy_r_r64 = cpy_r_r44 + 2;
    cpy_r_r44 = cpy_r_r64;
    cpy_r_r65 = cpy_r_r46 + 2;
    cpy_r_r46 = cpy_r_r65;
    goto CPyL25;
CPyL35: ;
    cpy_r_star_args_2 = cpy_r_r42;
    cpy_r_r66 = (CPyPtr)&((PyVarObject *)cpy_r_star_args_2)->ob_size;
    cpy_r_r67 = *(int64_t *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 << 1;
    cpy_r_r69 = cpy_r_r68 != 0;
    if (cpy_r_r69) {
        goto CPyL37;
    } else
        goto CPyL72;
CPyL36: ;
    cpy_r_r70 = Py_None;
    CPy_INCREF(cpy_r_r70);
    return cpy_r_r70;
CPyL37: ;
    cpy_r_r71 = CPyList_GetItemShort(cpy_r_star_args_2, 0);
    CPy_DECREF(cpy_r_star_args_2);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 539, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r71, CPyType_nodes___Expression)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_name", 539, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_r71);
        goto CPyL58;
    }
    cpy_r_star_arg_2 = cpy_r_r72;
    cpy_r_r73 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r73);
    cpy_r_r74 = CPyDef_checker___TypeChecker___lookup_type(cpy_r_r73, cpy_r_star_arg_2);
    CPy_DECREF(cpy_r_star_arg_2);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 540, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    cpy_r_r75 = CPyDef_types___get_proper_type(cpy_r_r74);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 540, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    if (likely(cpy_r_r75 != Py_None))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_name", 540, CPyStatic_checkstrformat___globals, "mypy.types.ProperType", cpy_r_r75);
        goto CPyL58;
    }
    cpy_r_kwargs_type = cpy_r_r76;
    cpy_r_r77 = (PyObject *)CPyType_types___Instance;
    cpy_r_r78 = (CPyPtr)&((PyObject *)cpy_r_kwargs_type)->ob_type;
    cpy_r_r79 = *(PyObject * *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 == cpy_r_r77;
    if (!cpy_r_r80) goto CPyL73;
    if (likely(Py_TYPE(cpy_r_kwargs_type) == CPyType_types___Instance))
        cpy_r_r81 = cpy_r_kwargs_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_name", 541, CPyStatic_checkstrformat___globals, "mypy.types.Instance", cpy_r_kwargs_type);
        goto CPyL74;
    }
    cpy_r_r82 = ((mypy___types___InstanceObject *)cpy_r_r81)->_type;
    CPy_INCREF(cpy_r_r82);
    cpy_r_r83 = CPyStatics[892]; /* 'typing.Mapping' */
    cpy_r_r84 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r82, cpy_r_r83);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r84 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 541, CPyStatic_checkstrformat___globals);
        goto CPyL74;
    }
    if (cpy_r_r84) {
        goto CPyL49;
    } else
        goto CPyL73;
CPyL46: ;
    cpy_r_r85 = NULL;
    cpy_r_r86 = NULL;
    cpy_r_r87 = CPY_INT_TAG;
    cpy_r_r88 = CPY_INT_TAG;
    cpy_r_r89 = CPyDef_types___AnyType(12, cpy_r_r85, cpy_r_r86, cpy_r_r87, cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 545, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    cpy_r_r90 = 2;
    cpy_r_r91 = NULL;
    cpy_r_r92 = CPyDef_nodes___TempNode(cpy_r_r89, cpy_r_r90, cpy_r_r91);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 545, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    return cpy_r_r92;
CPyL49: ;
    cpy_r_r93 = NULL;
    cpy_r_r94 = NULL;
    cpy_r_r95 = CPY_INT_TAG;
    cpy_r_r96 = CPY_INT_TAG;
    cpy_r_r97 = CPyDef_types___AnyType(12, cpy_r_r93, cpy_r_r94, cpy_r_r95, cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 546, CPyStatic_checkstrformat___globals);
        goto CPyL74;
    }
    cpy_r_any_type = cpy_r_r97;
    cpy_r_r98 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r98);
    cpy_r_r99 = CPyStatics[892]; /* 'typing.Mapping' */
    cpy_r_r100 = PyList_New(2);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 547, CPyStatic_checkstrformat___globals);
        goto CPyL75;
    }
    cpy_r_r101 = (CPyPtr)&((PyListObject *)cpy_r_r100)->ob_item;
    cpy_r_r102 = *(CPyPtr *)cpy_r_r101;
    CPy_INCREF(cpy_r_any_type);
    *(PyObject * *)cpy_r_r102 = cpy_r_any_type;
    cpy_r_r103 = cpy_r_r102 + 8;
    *(PyObject * *)cpy_r_r103 = cpy_r_any_type;
    cpy_r_r104 = CPyDef_checker___TypeChecker___named_generic_type(cpy_r_r98, cpy_r_r99, cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 547, CPyStatic_checkstrformat___globals);
        goto CPyL74;
    }
    cpy_r_r105 = ((mypy___types___InstanceObject *)cpy_r_r104)->_type;
    CPy_INCREF(cpy_r_r105);
    CPy_DECREF(cpy_r_r104);
    cpy_r_mapping_info = cpy_r_r105;
    if (likely(Py_TYPE(cpy_r_kwargs_type) == CPyType_types___Instance))
        cpy_r_r106 = cpy_r_kwargs_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_name", 548, CPyStatic_checkstrformat___globals, "mypy.types.Instance", cpy_r_kwargs_type);
        goto CPyL76;
    }
    cpy_r_r107 = CPyDef_maptype___map_instance_to_supertype(cpy_r_r106, cpy_r_mapping_info);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_mapping_info);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 548, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    cpy_r_r108 = ((mypy___types___InstanceObject *)cpy_r_r107)->_args;
    CPy_INCREF(cpy_r_r108);
    CPy_DECREF(cpy_r_r107);
    cpy_r_r109 = CPySequenceTuple_GetItem(cpy_r_r108, 2);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 548, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r109, CPyType_types___Type)))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "get_expr_by_name", 548, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_r109);
        goto CPyL58;
    }
    cpy_r_r111 = 2;
    cpy_r_r112 = NULL;
    cpy_r_r113 = CPyDef_nodes___TempNode(cpy_r_r110, cpy_r_r111, cpy_r_r112);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 548, CPyStatic_checkstrformat___globals);
        goto CPyL58;
    }
    return cpy_r_r113;
CPyL58: ;
    cpy_r_r114 = NULL;
    return cpy_r_r114;
CPyL59: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r5);
    goto CPyL19;
CPyL60: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    goto CPyL58;
CPyL61: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_arg);
    goto CPyL58;
CPyL62: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_kind);
    goto CPyL58;
CPyL63: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_kind);
    CPy_DecRef(cpy_r_name);
    goto CPyL9;
CPyL64: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL12;
CPyL65: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL18;
CPyL66: ;
    CPy_DECREF(cpy_r_named_args);
    goto CPyL23;
CPyL67: ;
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r45);
    goto CPyL35;
CPyL68: ;
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r45);
    goto CPyL58;
CPyL69: ;
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_arg_2);
    goto CPyL58;
CPyL70: ;
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_arg_2);
    CPy_DecRef(cpy_r_kind_2);
    goto CPyL30;
CPyL71: ;
    CPy_DECREF(cpy_r_arg_2);
    goto CPyL34;
CPyL72: ;
    CPy_DECREF(cpy_r_star_args_2);
    goto CPyL36;
CPyL73: ;
    CPy_DECREF(cpy_r_kwargs_type);
    goto CPyL46;
CPyL74: ;
    CPy_DecRef(cpy_r_kwargs_type);
    goto CPyL58;
CPyL75: ;
    CPy_DecRef(cpy_r_kwargs_type);
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r98);
    goto CPyL58;
CPyL76: ;
    CPy_DecRef(cpy_r_mapping_info);
    goto CPyL58;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___get_expr_by_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", "call", 0};
    static CPyArg_Parser parser = {"OO:get_expr_by_name", kwlist, 0};
    PyObject *obj_key;
    PyObject *obj_call;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_key, &obj_call)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_key;
    if (likely(PyUnicode_Check(obj_key)))
        arg_key = obj_key;
    else {
        CPy_TypeError("str", obj_key); 
        goto fail;
    }
    PyObject *arg_call;
    if (likely(Py_TYPE(obj_call) == CPyType_nodes___CallExpr))
        arg_call = obj_call;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_call); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkstrformat___StringFormatterChecker___get_expr_by_name(arg_self, arg_key, arg_call);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "get_expr_by_name", 523, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___StringFormatterChecker___auto_generate_keys(PyObject *cpy_r_self, PyObject *cpy_r_all_specs, PyObject *cpy_r_ctx) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_some_defined;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_s_2;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_all_defined;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_next_index;
    CPyTagged cpy_r_r46;
    CPyPtr cpy_r_r47;
    int64_t cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_spec;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_str_index;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyTagged cpy_r_r69;
    char cpy_r_r70;
    cpy_r_r0 = 0;
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_all_specs)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL13;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_all_specs, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_checkstrformat___ConversionSpecifier))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "auto_generate_keys", 555, CPyStatic_checkstrformat___globals, "mypy.checkstrformat.ConversionSpecifier", cpy_r_r6);
        goto CPyL44;
    }
    cpy_r_s = cpy_r_r7;
    cpy_r_r8 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_s)->_key;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = PyObject_IsTrue(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "auto_generate_keys", 555, CPyStatic_checkstrformat___globals);
        goto CPyL45;
    }
    cpy_r_r11 = cpy_r_r9;
    if (cpy_r_r11) {
        goto CPyL46;
    } else
        goto CPyL47;
CPyL5: ;
    cpy_r_r12 = cpy_r_r8;
    goto CPyL9;
CPyL6: ;
    cpy_r_r13 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_s)->_key;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_s);
    cpy_r_r14 = cpy_r_r13;
    cpy_r_r15 = CPyStatics[1421]; /* 'isdecimal' */
    PyObject *cpy_r_r16[1] = {cpy_r_r14};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_VectorcallMethod(cpy_r_r15, cpy_r_r17, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "auto_generate_keys", 555, CPyStatic_checkstrformat___globals);
        goto CPyL48;
    }
    CPy_DECREF(cpy_r_r14);
    cpy_r_r19 = cpy_r_r18;
    cpy_r_r12 = cpy_r_r19;
CPyL9: ;
    cpy_r_r20 = PyObject_IsTrue(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "auto_generate_keys", -1, CPyStatic_checkstrformat___globals);
        goto CPyL44;
    }
    cpy_r_r22 = cpy_r_r20;
    if (!cpy_r_r22) goto CPyL12;
    cpy_r_r0 = 1;
    goto CPyL13;
CPyL12: ;
    cpy_r_r23 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r23;
    goto CPyL1;
CPyL13: ;
    cpy_r_some_defined = cpy_r_r0;
    cpy_r_r24 = 1;
    cpy_r_r25 = 0;
CPyL14: ;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_all_specs)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = (Py_ssize_t)cpy_r_r25 < (Py_ssize_t)cpy_r_r28;
    if (!cpy_r_r29) goto CPyL20;
    cpy_r_r30 = CPyList_GetItemUnsafe(cpy_r_all_specs, cpy_r_r25);
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_checkstrformat___ConversionSpecifier))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "auto_generate_keys", 556, CPyStatic_checkstrformat___globals, "mypy.checkstrformat.ConversionSpecifier", cpy_r_r30);
        goto CPyL44;
    }
    cpy_r_s_2 = cpy_r_r31;
    cpy_r_r32 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_s_2)->_key;
    CPy_INCREF(cpy_r_r32);
    CPy_DECREF(cpy_r_s_2);
    cpy_r_r33 = PyObject_IsTrue(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "auto_generate_keys", 556, CPyStatic_checkstrformat___globals);
        goto CPyL44;
    }
    cpy_r_r35 = cpy_r_r33;
    cpy_r_r36 = cpy_r_r35 ^ 1;
    if (!cpy_r_r36) goto CPyL19;
    cpy_r_r24 = 0;
    goto CPyL20;
CPyL19: ;
    cpy_r_r37 = cpy_r_r25 + 2;
    cpy_r_r25 = cpy_r_r37;
    goto CPyL14;
CPyL20: ;
    cpy_r_all_defined = cpy_r_r24;
    if (!cpy_r_some_defined) goto CPyL27;
    if (cpy_r_all_defined) goto CPyL27;
    cpy_r_r38 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[1424]; /* ('Cannot combine automatic field numbering and manual '
                                     'field specification') */
    cpy_r_r40 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r40 == NULL)) {
        goto CPyL49;
    } else
        goto CPyL25;
CPyL23: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "auto_generate_keys", 561, CPyStatic_checkstrformat___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r42 = NULL;
    cpy_r_r43 = 2;
    cpy_r_r44 = NULL;
    cpy_r_r45 = CPyDef_messages___MessageBuilder___fail(cpy_r_r38, cpy_r_r39, cpy_r_ctx, cpy_r_r40, cpy_r_r42, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "auto_generate_keys", 558, CPyStatic_checkstrformat___globals);
        goto CPyL44;
    }
    return 0;
CPyL27: ;
    if (!cpy_r_all_defined) goto CPyL29;
    return 1;
CPyL29: ;
    cpy_r_next_index = 0;
    cpy_r_r46 = 0;
CPyL30: ;
    cpy_r_r47 = (CPyPtr)&((PyVarObject *)cpy_r_all_specs)->ob_size;
    cpy_r_r48 = *(int64_t *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 << 1;
    cpy_r_r50 = (Py_ssize_t)cpy_r_r46 < (Py_ssize_t)cpy_r_r49;
    if (!cpy_r_r50) goto CPyL50;
    cpy_r_r51 = CPyList_GetItemUnsafe(cpy_r_all_specs, cpy_r_r46);
    if (likely(Py_TYPE(cpy_r_r51) == CPyType_checkstrformat___ConversionSpecifier))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "auto_generate_keys", 567, CPyStatic_checkstrformat___globals, "mypy.checkstrformat.ConversionSpecifier", cpy_r_r51);
        goto CPyL51;
    }
    cpy_r_spec = cpy_r_r52;
    cpy_r_r53 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_key;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = PyObject_IsTrue(cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "auto_generate_keys", 568, CPyStatic_checkstrformat___globals);
        goto CPyL52;
    }
    cpy_r_r56 = cpy_r_r54;
    if (cpy_r_r56) goto CPyL53;
    cpy_r_r57 = CPyTagged_Str(cpy_r_next_index);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "auto_generate_keys", 569, CPyStatic_checkstrformat___globals);
        goto CPyL52;
    }
    cpy_r_str_index = cpy_r_r57;
    CPy_INCREF(cpy_r_str_index);
    CPy_DECREF(((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_key);
    ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_key = cpy_r_str_index;
    cpy_r_r59 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_field;
    CPy_INCREF(cpy_r_r59);
    cpy_r_r60 = PyObject_IsTrue(cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "auto_generate_keys", 572, CPyStatic_checkstrformat___globals);
        goto CPyL54;
    }
    cpy_r_r62 = cpy_r_r60;
    if (cpy_r_r62) goto CPyL38;
    CPy_DECREF(((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_field);
    ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_field = cpy_r_str_index;
    CPy_DECREF(cpy_r_spec);
    goto CPyL41;
CPyL38: ;
    cpy_r_r64 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_field;
    CPy_INCREF(cpy_r_r64);
    cpy_r_r65 = PyNumber_Add(cpy_r_str_index, cpy_r_r64);
    CPy_DECREF(cpy_r_str_index);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "auto_generate_keys", 575, CPyStatic_checkstrformat___globals);
        goto CPyL52;
    }
    if (likely(PyUnicode_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "auto_generate_keys", 575, CPyStatic_checkstrformat___globals, "str", cpy_r_r65);
        goto CPyL52;
    }
    CPy_DECREF(((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_field);
    ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_field = cpy_r_r66;
    CPy_DECREF(cpy_r_spec);
CPyL41: ;
    cpy_r_r68 = CPyTagged_Add(cpy_r_next_index, 2);
    CPyTagged_DECREF(cpy_r_next_index);
    cpy_r_next_index = cpy_r_r68;
CPyL42: ;
    cpy_r_r69 = cpy_r_r46 + 2;
    cpy_r_r46 = cpy_r_r69;
    goto CPyL30;
CPyL43: ;
    return 1;
CPyL44: ;
    cpy_r_r70 = 2;
    return cpy_r_r70;
CPyL45: ;
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r8);
    goto CPyL44;
CPyL46: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL6;
CPyL47: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL5;
CPyL48: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL44;
CPyL49: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL23;
CPyL50: ;
    CPyTagged_DECREF(cpy_r_next_index);
    goto CPyL43;
CPyL51: ;
    CPyTagged_DecRef(cpy_r_next_index);
    goto CPyL44;
CPyL52: ;
    CPyTagged_DecRef(cpy_r_next_index);
    CPy_DecRef(cpy_r_spec);
    goto CPyL44;
CPyL53: ;
    CPy_DECREF(cpy_r_spec);
    goto CPyL42;
CPyL54: ;
    CPyTagged_DecRef(cpy_r_next_index);
    CPy_DecRef(cpy_r_spec);
    CPy_DecRef(cpy_r_str_index);
    goto CPyL44;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___auto_generate_keys(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"all_specs", "ctx", 0};
    static CPyArg_Parser parser = {"OO:auto_generate_keys", kwlist, 0};
    PyObject *obj_all_specs;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_all_specs, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_all_specs;
    if (likely(PyList_Check(obj_all_specs)))
        arg_all_specs = obj_all_specs;
    else {
        CPy_TypeError("list", obj_all_specs); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    char retval = CPyDef_checkstrformat___StringFormatterChecker___auto_generate_keys(arg_self, arg_all_specs, arg_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "auto_generate_keys", 550, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___StringFormatterChecker___apply_field_accessors(PyObject *cpy_r_self, PyObject *cpy_r_spec, PyObject *cpy_r_repl, PyObject *cpy_r_ctx) {
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
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_temp_errors;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_dummy;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_temp_ast;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyPtr cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyPtr cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyTagged cpy_r_r82;
    CPyTagged cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyTagged cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    CPyTagged cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    cpy_r_r0 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_key;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 586, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    cpy_r_r3 = cpy_r_r1;
    if (cpy_r_r3) goto CPyL4;
    PyErr_SetString(PyExc_AssertionError, "Keys must be auto-generated first!");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 586, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_field;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_key;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = PyObject_RichCompare(cpy_r_r5, cpy_r_r6, 2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 587, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    cpy_r_r8 = PyObject_IsTrue(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 587, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL8;
    CPy_INCREF(cpy_r_repl);
    return cpy_r_repl;
CPyL8: ;
    cpy_r_r11 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_field;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = PyObject_IsTrue(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 589, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    cpy_r_r14 = cpy_r_r12;
    if (cpy_r_r14) goto CPyL12;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r15 = 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 589, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r16 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    cpy_r_r17 = ((mypy___checker___TypeCheckerObject *)cpy_r_r16)->_options;
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "apply_field_accessors", "TypeChecker", "options", 591, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    CPy_INCREF(cpy_r_r17);
CPyL13: ;
    cpy_r_r18 = NULL;
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyDef_mypy___errors___Errors(cpy_r_r17, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 591, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    cpy_r_temp_errors = cpy_r_r20;
    cpy_r_r21 = CPyStatics[1425]; /* '__dummy_name__' */
    cpy_r_r22 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_field;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_key;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPyObject_Size(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 592, CPyStatic_checkstrformat___globals);
        goto CPyL61;
    } else
        goto CPyL62;
CPyL15: ;
    cpy_r_r25 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_key;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPyObject_Size(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 592, CPyStatic_checkstrformat___globals);
        goto CPyL61;
    }
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r29 = CPyTagged_StealAsObject(cpy_r_r26);
    cpy_r_r30 = PySlice_New(cpy_r_r29, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 592, CPyStatic_checkstrformat___globals);
        goto CPyL61;
    }
    cpy_r_r31 = cpy_r_r22;
    cpy_r_r32 = PyObject_GetItem(cpy_r_r31, cpy_r_r30);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 592, CPyStatic_checkstrformat___globals);
        goto CPyL63;
    }
    cpy_r_r33 = cpy_r_r32;
    cpy_r_r34 = PyNumber_Add(cpy_r_r21, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 592, CPyStatic_checkstrformat___globals);
        goto CPyL63;
    }
    if (likely(PyUnicode_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "apply_field_accessors", 592, CPyStatic_checkstrformat___globals, "str", cpy_r_r34);
        goto CPyL63;
    }
    cpy_r_dummy = cpy_r_r35;
    cpy_r_r36 = CPyStatics[1426]; /* '<format>' */
    cpy_r_r37 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    cpy_r_r38 = ((mypy___checker___TypeCheckerObject *)cpy_r_r37)->_options;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "apply_field_accessors", "TypeChecker", "options", 594, CPyStatic_checkstrformat___globals);
        goto CPyL64;
    }
    CPy_INCREF(cpy_r_r38);
CPyL22: ;
    cpy_r_r39 = Py_None;
    cpy_r_r40 = CPyDef_parse___parse(cpy_r_dummy, cpy_r_r36, cpy_r_r39, cpy_r_temp_errors, cpy_r_r38);
    CPy_DECREF(cpy_r_dummy);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 593, CPyStatic_checkstrformat___globals);
        goto CPyL63;
    }
    cpy_r_temp_ast = cpy_r_r40;
    cpy_r_r41 = CPyDef_mypy___errors___Errors___is_errors(cpy_r_temp_errors);
    CPy_DECREF(cpy_r_temp_errors);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 596, CPyStatic_checkstrformat___globals);
        goto CPyL65;
    }
    if (cpy_r_r41) {
        goto CPyL66;
    } else
        goto CPyL34;
CPyL25: ;
    cpy_r_r42 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[1427]; /* 'Syntax error in format specifier "' */
    cpy_r_r44 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_field;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = PyObject_Str(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 598, CPyStatic_checkstrformat___globals);
        goto CPyL67;
    }
    cpy_r_r46 = CPyStatics[178]; /* '"' */
    cpy_r_r47 = CPyStr_Build(3, cpy_r_r43, cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 598, CPyStatic_checkstrformat___globals);
        goto CPyL67;
    }
    cpy_r_r48 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r48 == NULL)) {
        goto CPyL68;
    } else
        goto CPyL30;
CPyL28: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r49 = 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 600, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r50 = NULL;
    cpy_r_r51 = 2;
    cpy_r_r52 = NULL;
    cpy_r_r53 = CPyDef_messages___MessageBuilder___fail(cpy_r_r42, cpy_r_r47, cpy_r_ctx, cpy_r_r48, cpy_r_r50, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 597, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    cpy_r_r54 = NULL;
    cpy_r_r55 = NULL;
    cpy_r_r56 = CPY_INT_TAG;
    cpy_r_r57 = CPY_INT_TAG;
    cpy_r_r58 = CPyDef_types___AnyType(10, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 602, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    cpy_r_r59 = 2;
    cpy_r_r60 = NULL;
    cpy_r_r61 = CPyDef_nodes___TempNode(cpy_r_r58, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 602, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    return cpy_r_r61;
CPyL34: ;
    cpy_r_r62 = (PyObject *)CPyType_nodes___MypyFile;
    cpy_r_r63 = (CPyPtr)&((PyObject *)cpy_r_temp_ast)->ob_type;
    cpy_r_r64 = *(PyObject * *)cpy_r_r63;
    cpy_r_r65 = cpy_r_r64 == cpy_r_r62;
    if (cpy_r_r65) {
        goto CPyL37;
    } else
        goto CPyL69;
CPyL35: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r66 = 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 605, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL37: ;
    if (likely(Py_TYPE(cpy_r_temp_ast) == CPyType_nodes___MypyFile))
        cpy_r_r67 = cpy_r_temp_ast;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "apply_field_accessors", 606, CPyStatic_checkstrformat___globals, "mypy.nodes.MypyFile", cpy_r_temp_ast);
        goto CPyL65;
    }
    cpy_r_r68 = ((mypy___nodes___MypyFileObject *)cpy_r_r67)->_defs;
    cpy_r_r69 = CPyList_GetItemShort(cpy_r_r68, 0);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 606, CPyStatic_checkstrformat___globals);
        goto CPyL65;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r69, CPyType_nodes___Statement)))
        cpy_r_r70 = cpy_r_r69;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "apply_field_accessors", 606, CPyStatic_checkstrformat___globals, "mypy.nodes.Statement", cpy_r_r69);
        goto CPyL65;
    }
    CPy_DECREF(cpy_r_temp_ast);
    cpy_r_temp_ast = cpy_r_r70;
    cpy_r_r71 = (PyObject *)CPyType_nodes___ExpressionStmt;
    cpy_r_r72 = (CPyPtr)&((PyObject *)cpy_r_temp_ast)->ob_type;
    cpy_r_r73 = *(PyObject * *)cpy_r_r72;
    cpy_r_r74 = cpy_r_r73 == cpy_r_r71;
    if (cpy_r_r74) {
        goto CPyL43;
    } else
        goto CPyL70;
CPyL41: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r75 = 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 607, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    CPy_Unreachable();
CPyL43: ;
    if (likely(Py_TYPE(cpy_r_temp_ast) == CPyType_nodes___ExpressionStmt))
        cpy_r_r76 = cpy_r_temp_ast;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "apply_field_accessors", 608, CPyStatic_checkstrformat___globals, "mypy.nodes.ExpressionStmt", cpy_r_temp_ast);
        goto CPyL65;
    }
    cpy_r_r77 = ((mypy___nodes___ExpressionStmtObject *)cpy_r_r76)->_expr;
    CPy_INCREF(cpy_r_r77);
    CPy_DECREF(cpy_r_temp_ast);
    cpy_r_temp_ast = cpy_r_r77;
    CPy_INCREF(cpy_r_temp_ast);
    if (likely(PyObject_TypeCheck(cpy_r_temp_ast, CPyType_nodes___Expression)))
        cpy_r_r78 = cpy_r_temp_ast;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "apply_field_accessors", 609, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_temp_ast);
        goto CPyL65;
    }
    cpy_r_r79 = CPyDef_checkstrformat___StringFormatterChecker___validate_and_transform_accessors(cpy_r_self, cpy_r_r78, cpy_r_repl, cpy_r_spec, cpy_r_ctx);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 609, CPyStatic_checkstrformat___globals);
        goto CPyL65;
    }
    if (cpy_r_r79) {
        goto CPyL50;
    } else
        goto CPyL71;
CPyL47: ;
    cpy_r_r80 = NULL;
    cpy_r_r81 = NULL;
    cpy_r_r82 = CPY_INT_TAG;
    cpy_r_r83 = CPY_INT_TAG;
    cpy_r_r84 = CPyDef_types___AnyType(10, cpy_r_r80, cpy_r_r81, cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 610, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    cpy_r_r85 = 2;
    cpy_r_r86 = NULL;
    cpy_r_r87 = CPyDef_nodes___TempNode(cpy_r_r84, cpy_r_r85, cpy_r_r86);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 610, CPyStatic_checkstrformat___globals);
        goto CPyL60;
    }
    return cpy_r_r87;
CPyL50: ;
    cpy_r_r88 = ((mypy___nodes___ContextObject *)cpy_r_ctx)->_line;
    if (unlikely(cpy_r_r88 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/checkstrformat.py", "apply_field_accessors", "Context", "line", 614, CPyStatic_checkstrformat___globals);
        goto CPyL65;
    }
    CPyTagged_INCREF(cpy_r_r88);
CPyL51: ;
    if (likely(PyObject_TypeCheck(cpy_r_temp_ast, CPyType_nodes___Expression)))
        cpy_r_r89 = cpy_r_temp_ast;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "apply_field_accessors", 614, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_temp_ast);
        goto CPyL72;
    }
    if (((mypy___nodes___ContextObject *)cpy_r_r89)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___nodes___ContextObject *)cpy_r_r89)->_line);
    }
    ((mypy___nodes___ContextObject *)cpy_r_r89)->_line = cpy_r_r88;
    cpy_r_r90 = 1;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 614, CPyStatic_checkstrformat___globals);
        goto CPyL65;
    }
    cpy_r_r91 = ((mypy___nodes___ContextObject *)cpy_r_ctx)->_column;
    if (unlikely(cpy_r_r91 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/checkstrformat.py", "apply_field_accessors", "Context", "column", 615, CPyStatic_checkstrformat___globals);
        goto CPyL65;
    }
    CPyTagged_INCREF(cpy_r_r91);
CPyL54: ;
    if (likely(PyObject_TypeCheck(cpy_r_temp_ast, CPyType_nodes___Expression)))
        cpy_r_r92 = cpy_r_temp_ast;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "apply_field_accessors", 615, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_temp_ast);
        goto CPyL73;
    }
    if (((mypy___nodes___ContextObject *)cpy_r_r92)->_column != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___nodes___ContextObject *)cpy_r_r92)->_column);
    }
    ((mypy___nodes___ContextObject *)cpy_r_r92)->_column = cpy_r_r91;
    cpy_r_r93 = 1;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 615, CPyStatic_checkstrformat___globals);
        goto CPyL65;
    }
    cpy_r_r94 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_exprchk;
    CPy_INCREF(cpy_r_r94);
    CPy_INCREF(cpy_r_temp_ast);
    if (likely(PyObject_TypeCheck(cpy_r_temp_ast, CPyType_nodes___Expression)))
        cpy_r_r95 = cpy_r_temp_ast;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "apply_field_accessors", 616, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_temp_ast);
        goto CPyL74;
    }
    cpy_r_r96 = NULL;
    cpy_r_r97 = 2;
    cpy_r_r98 = 2;
    cpy_r_r99 = 2;
    cpy_r_r100 = CPyDef_checkexpr___ExpressionChecker___accept(cpy_r_r94, cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98, cpy_r_r99);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 616, CPyStatic_checkstrformat___globals);
        goto CPyL65;
    } else
        goto CPyL75;
CPyL58: ;
    if (likely(PyObject_TypeCheck(cpy_r_temp_ast, CPyType_nodes___Expression)))
        cpy_r_r101 = cpy_r_temp_ast;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "apply_field_accessors", 617, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_temp_ast);
        goto CPyL60;
    }
    return cpy_r_r101;
CPyL60: ;
    cpy_r_r102 = NULL;
    return cpy_r_r102;
CPyL61: ;
    CPy_DecRef(cpy_r_temp_errors);
    CPy_DecRef(cpy_r_r22);
    goto CPyL60;
CPyL62: ;
    CPyTagged_DECREF(cpy_r_r24);
    goto CPyL15;
CPyL63: ;
    CPy_DecRef(cpy_r_temp_errors);
    goto CPyL60;
CPyL64: ;
    CPy_DecRef(cpy_r_temp_errors);
    CPy_DecRef(cpy_r_dummy);
    goto CPyL60;
CPyL65: ;
    CPy_DecRef(cpy_r_temp_ast);
    goto CPyL60;
CPyL66: ;
    CPy_DECREF(cpy_r_temp_ast);
    goto CPyL25;
CPyL67: ;
    CPy_DecRef(cpy_r_r42);
    goto CPyL60;
CPyL68: ;
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r47);
    goto CPyL28;
CPyL69: ;
    CPy_DECREF(cpy_r_temp_ast);
    goto CPyL35;
CPyL70: ;
    CPy_DECREF(cpy_r_temp_ast);
    goto CPyL41;
CPyL71: ;
    CPy_DECREF(cpy_r_temp_ast);
    goto CPyL47;
CPyL72: ;
    CPy_DecRef(cpy_r_temp_ast);
    CPyTagged_DecRef(cpy_r_r88);
    goto CPyL60;
CPyL73: ;
    CPy_DecRef(cpy_r_temp_ast);
    CPyTagged_DecRef(cpy_r_r91);
    goto CPyL60;
CPyL74: ;
    CPy_DecRef(cpy_r_temp_ast);
    CPy_DecRef(cpy_r_r94);
    goto CPyL60;
CPyL75: ;
    CPy_DECREF(cpy_r_r100);
    goto CPyL58;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___apply_field_accessors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"spec", "repl", "ctx", 0};
    static CPyArg_Parser parser = {"OOO:apply_field_accessors", kwlist, 0};
    PyObject *obj_spec;
    PyObject *obj_repl;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_spec, &obj_repl, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_spec;
    if (likely(Py_TYPE(obj_spec) == CPyType_checkstrformat___ConversionSpecifier))
        arg_spec = obj_spec;
    else {
        CPy_TypeError("mypy.checkstrformat.ConversionSpecifier", obj_spec); 
        goto fail;
    }
    PyObject *arg_repl;
    if (likely(PyObject_TypeCheck(obj_repl, CPyType_nodes___Expression)))
        arg_repl = obj_repl;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_repl); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkstrformat___StringFormatterChecker___apply_field_accessors(arg_self, arg_spec, arg_repl, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "apply_field_accessors", 579, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___StringFormatterChecker___validate_and_transform_accessors(PyObject *cpy_r_self, PyObject *cpy_r_temp_ast, PyObject *cpy_r_original_repl, PyObject *cpy_r_spec, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_node;
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
    int32_t cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyTagged cpy_r_r55;
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
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyPtr cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyPtr cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    CPyPtr cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyPtr cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    CPyPtr cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    CPyTagged cpy_r_r117;
    char cpy_r_r118;
    CPyTagged cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    cpy_r_r0 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_temp_ast)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r3;
    goto CPyL3;
CPyL2: ;
    cpy_r_r5 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_temp_ast)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    cpy_r_r4 = cpy_r_r8;
CPyL3: ;
    if (cpy_r_r4) goto CPyL11;
    cpy_r_r9 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_field;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = PyObject_Str(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 640, CPyStatic_checkstrformat___globals);
        goto CPyL72;
    }
    cpy_r_r12 = CPyStatics[1428]; /* ('Only index and member expressions are allowed in '
                                     'format field accessors; got "') */
    cpy_r_r13 = CPyStatics[178]; /* '"' */
    cpy_r_r14 = CPyStr_Build(3, cpy_r_r12, cpy_r_r11, cpy_r_r13);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 640, CPyStatic_checkstrformat___globals);
        goto CPyL72;
    }
    cpy_r_r15 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r15 == NULL)) {
        goto CPyL73;
    } else
        goto CPyL9;
CPyL7: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r16 = 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 643, CPyStatic_checkstrformat___globals);
        goto CPyL71;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r17 = NULL;
    cpy_r_r18 = 2;
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyDef_messages___MessageBuilder___fail(cpy_r_r9, cpy_r_r14, cpy_r_ctx, cpy_r_r15, cpy_r_r17, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 639, CPyStatic_checkstrformat___globals);
        goto CPyL71;
    }
    return 0;
CPyL11: ;
    cpy_r_r21 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_temp_ast)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    if (!cpy_r_r24) goto CPyL14;
    if (likely(Py_TYPE(cpy_r_temp_ast) == CPyType_nodes___MemberExpr))
        cpy_r_r25 = cpy_r_temp_ast;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 647, CPyStatic_checkstrformat___globals, "mypy.nodes.MemberExpr", cpy_r_temp_ast);
        goto CPyL71;
    }
    cpy_r_r26 = ((mypy___nodes___MemberExprObject *)cpy_r_r25)->_expr;
    CPy_INCREF(cpy_r_r26);
    cpy_r_node = cpy_r_r26;
    goto CPyL47;
CPyL14: ;
    if (likely(Py_TYPE(cpy_r_temp_ast) == CPyType_nodes___IndexExpr))
        cpy_r_r27 = cpy_r_temp_ast;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 649, CPyStatic_checkstrformat___globals, "mypy.nodes.IndexExpr", cpy_r_temp_ast);
        goto CPyL71;
    }
    cpy_r_r28 = ((mypy___nodes___IndexExprObject *)cpy_r_r27)->_base;
    CPy_INCREF(cpy_r_r28);
    cpy_r_node = cpy_r_r28;
    if (likely(Py_TYPE(cpy_r_temp_ast) == CPyType_nodes___IndexExpr))
        cpy_r_r29 = cpy_r_temp_ast;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 650, CPyStatic_checkstrformat___globals, "mypy.nodes.IndexExpr", cpy_r_temp_ast);
        goto CPyL74;
    }
    cpy_r_r30 = ((mypy___nodes___IndexExprObject *)cpy_r_r29)->_index;
    cpy_r_r31 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_r30)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL18;
    cpy_r_r35 = cpy_r_r34;
    goto CPyL19;
CPyL18: ;
    cpy_r_r36 = (PyObject *)CPyType_nodes___IntExpr;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_r30)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    cpy_r_r35 = cpy_r_r39;
CPyL19: ;
    if (cpy_r_r35) {
        goto CPyL40;
    } else
        goto CPyL75;
CPyL20: ;
    cpy_r_r40 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_key;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = PyObject_IsTrue(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 651, CPyStatic_checkstrformat___globals);
        goto CPyL71;
    }
    cpy_r_r43 = cpy_r_r41;
    if (cpy_r_r43) goto CPyL24;
    PyErr_SetString(PyExc_AssertionError, "Call this method only after auto-generating keys!");
    cpy_r_r44 = 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 651, CPyStatic_checkstrformat___globals);
        goto CPyL71;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r45 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_field;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = PyObject_IsTrue(cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 652, CPyStatic_checkstrformat___globals);
        goto CPyL71;
    }
    cpy_r_r48 = cpy_r_r46;
    if (cpy_r_r48) goto CPyL28;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r49 = 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 652, CPyStatic_checkstrformat___globals);
        goto CPyL71;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r50 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_field;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_key;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = CPyObject_Size(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 655, CPyStatic_checkstrformat___globals);
        goto CPyL76;
    } else
        goto CPyL77;
CPyL29: ;
    cpy_r_r54 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_spec)->_key;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = CPyObject_Size(cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 655, CPyStatic_checkstrformat___globals);
        goto CPyL76;
    }
    cpy_r_r56 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r57 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r58 = CPyTagged_StealAsObject(cpy_r_r55);
    cpy_r_r59 = PySlice_New(cpy_r_r58, cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 655, CPyStatic_checkstrformat___globals);
        goto CPyL76;
    }
    cpy_r_r60 = cpy_r_r51;
    cpy_r_r61 = PyObject_GetItem(cpy_r_r60, cpy_r_r59);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 655, CPyStatic_checkstrformat___globals);
        goto CPyL78;
    }
    cpy_r_r62 = cpy_r_r61;
    cpy_r_r63 = PyObject_Str(cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 654, CPyStatic_checkstrformat___globals);
        goto CPyL78;
    }
    cpy_r_r64 = CPyStatics[1429]; /* 'Invalid index expression in format field accessor "' */
    cpy_r_r65 = CPyStatics[178]; /* '"' */
    cpy_r_r66 = CPyStr_Build(3, cpy_r_r64, cpy_r_r63, cpy_r_r65);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 654, CPyStatic_checkstrformat___globals);
        goto CPyL78;
    }
    cpy_r_r67 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r67 == NULL)) {
        goto CPyL79;
    } else
        goto CPyL38;
CPyL36: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r68 = 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 657, CPyStatic_checkstrformat___globals);
        goto CPyL71;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r69 = NULL;
    cpy_r_r70 = 2;
    cpy_r_r71 = NULL;
    cpy_r_r72 = CPyDef_messages___MessageBuilder___fail(cpy_r_r50, cpy_r_r66, cpy_r_ctx, cpy_r_r67, cpy_r_r69, cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r72 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 653, CPyStatic_checkstrformat___globals);
        goto CPyL71;
    }
    return 0;
CPyL40: ;
    if (likely(Py_TYPE(cpy_r_temp_ast) == CPyType_nodes___IndexExpr))
        cpy_r_r73 = cpy_r_temp_ast;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 660, CPyStatic_checkstrformat___globals, "mypy.nodes.IndexExpr", cpy_r_temp_ast);
        goto CPyL74;
    }
    cpy_r_r74 = ((mypy___nodes___IndexExprObject *)cpy_r_r73)->_index;
    cpy_r_r75 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r76 = (CPyPtr)&((PyObject *)cpy_r_r74)->ob_type;
    cpy_r_r77 = *(PyObject * *)cpy_r_r76;
    cpy_r_r78 = cpy_r_r77 == cpy_r_r75;
    if (!cpy_r_r78) goto CPyL47;
    if (likely(Py_TYPE(cpy_r_temp_ast) == CPyType_nodes___IndexExpr))
        cpy_r_r79 = cpy_r_temp_ast;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 661, CPyStatic_checkstrformat___globals, "mypy.nodes.IndexExpr", cpy_r_temp_ast);
        goto CPyL74;
    }
    cpy_r_r80 = ((mypy___nodes___IndexExprObject *)cpy_r_r79)->_index;
    if (likely(Py_TYPE(cpy_r_r80) == CPyType_nodes___NameExpr))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 661, CPyStatic_checkstrformat___globals, "mypy.nodes.NameExpr", cpy_r_r80);
        goto CPyL74;
    }
    cpy_r_r82 = ((mypy___nodes___NameExprObject *)cpy_r_r81)->_name;
    CPy_INCREF(cpy_r_r82);
    cpy_r_r83 = CPyDef_nodes___StrExpr(cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 661, CPyStatic_checkstrformat___globals);
        goto CPyL74;
    }
    if (likely(Py_TYPE(cpy_r_temp_ast) == CPyType_nodes___IndexExpr))
        cpy_r_r84 = cpy_r_temp_ast;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 661, CPyStatic_checkstrformat___globals, "mypy.nodes.IndexExpr", cpy_r_temp_ast);
        goto CPyL80;
    }
    CPy_DECREF(((mypy___nodes___IndexExprObject *)cpy_r_r84)->_index);
    ((mypy___nodes___IndexExprObject *)cpy_r_r84)->_index = cpy_r_r83;
CPyL47: ;
    cpy_r_r86 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r87 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r88 = *(PyObject * *)cpy_r_r87;
    cpy_r_r89 = cpy_r_r88 == cpy_r_r86;
    if (!cpy_r_r89) goto CPyL65;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___NameExpr))
        cpy_r_r90 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 662, CPyStatic_checkstrformat___globals, "mypy.nodes.NameExpr", cpy_r_node);
        goto CPyL74;
    }
    cpy_r_r91 = ((mypy___nodes___NameExprObject *)cpy_r_r90)->_name;
    CPy_INCREF(cpy_r_r91);
    cpy_r_r92 = CPyStatics[1425]; /* '__dummy_name__' */
    cpy_r_r93 = PyUnicode_Compare(cpy_r_r91, cpy_r_r92);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r94 = cpy_r_r93 == -1;
    if (!cpy_r_r94) goto CPyL52;
    cpy_r_r95 = PyErr_Occurred();
    cpy_r_r96 = cpy_r_r95 != NULL;
    if (!cpy_r_r96) goto CPyL52;
    cpy_r_r97 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 662, CPyStatic_checkstrformat___globals);
        goto CPyL74;
    }
CPyL52: ;
    cpy_r_r98 = cpy_r_r93 == 0;
    if (cpy_r_r98) {
        goto CPyL81;
    } else
        goto CPyL65;
CPyL53: ;
    cpy_r_r99 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r100 = (CPyPtr)&((PyObject *)cpy_r_temp_ast)->ob_type;
    cpy_r_r101 = *(PyObject * *)cpy_r_r100;
    cpy_r_r102 = cpy_r_r101 == cpy_r_r99;
    if (!cpy_r_r102) goto CPyL55;
    cpy_r_r103 = cpy_r_r102;
    goto CPyL56;
CPyL55: ;
    cpy_r_r104 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r105 = (CPyPtr)&((PyObject *)cpy_r_temp_ast)->ob_type;
    cpy_r_r106 = *(PyObject * *)cpy_r_r105;
    cpy_r_r107 = cpy_r_r106 == cpy_r_r104;
    cpy_r_r103 = cpy_r_r107;
CPyL56: ;
    if (cpy_r_r103) goto CPyL59;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r108 = 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 664, CPyStatic_checkstrformat___globals);
        goto CPyL71;
    }
    CPy_Unreachable();
CPyL59: ;
    cpy_r_r109 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r110 = (CPyPtr)&((PyObject *)cpy_r_temp_ast)->ob_type;
    cpy_r_r111 = *(PyObject * *)cpy_r_r110;
    cpy_r_r112 = cpy_r_r111 == cpy_r_r109;
    if (!cpy_r_r112) goto CPyL62;
    if (likely(Py_TYPE(cpy_r_temp_ast) == CPyType_nodes___IndexExpr))
        cpy_r_r113 = cpy_r_temp_ast;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 666, CPyStatic_checkstrformat___globals, "mypy.nodes.IndexExpr", cpy_r_temp_ast);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_original_repl);
    CPy_DECREF(((mypy___nodes___IndexExprObject *)cpy_r_r113)->_base);
    ((mypy___nodes___IndexExprObject *)cpy_r_r113)->_base = cpy_r_original_repl;
    goto CPyL64;
CPyL62: ;
    if (likely(Py_TYPE(cpy_r_temp_ast) == CPyType_nodes___MemberExpr))
        cpy_r_r115 = cpy_r_temp_ast;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 668, CPyStatic_checkstrformat___globals, "mypy.nodes.MemberExpr", cpy_r_temp_ast);
        goto CPyL71;
    }
    CPy_INCREF(cpy_r_original_repl);
    CPy_DECREF(((mypy___nodes___MemberExprObject *)cpy_r_r115)->_expr);
    ((mypy___nodes___MemberExprObject *)cpy_r_r115)->_expr = cpy_r_original_repl;
CPyL64: ;
    return 1;
CPyL65: ;
    cpy_r_r117 = ((mypy___nodes___ContextObject *)cpy_r_ctx)->_line;
    if (unlikely(cpy_r_r117 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/checkstrformat.py", "validate_and_transform_accessors", "Context", "line", 670, CPyStatic_checkstrformat___globals);
        goto CPyL74;
    }
    CPyTagged_INCREF(cpy_r_r117);
CPyL66: ;
    if (((mypy___nodes___ContextObject *)cpy_r_node)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___nodes___ContextObject *)cpy_r_node)->_line);
    }
    ((mypy___nodes___ContextObject *)cpy_r_node)->_line = cpy_r_r117;
    cpy_r_r118 = 1;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 670, CPyStatic_checkstrformat___globals);
        goto CPyL74;
    }
    cpy_r_r119 = ((mypy___nodes___ContextObject *)cpy_r_ctx)->_column;
    if (unlikely(cpy_r_r119 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/checkstrformat.py", "validate_and_transform_accessors", "Context", "column", 671, CPyStatic_checkstrformat___globals);
        goto CPyL74;
    }
    CPyTagged_INCREF(cpy_r_r119);
CPyL68: ;
    if (((mypy___nodes___ContextObject *)cpy_r_node)->_column != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___nodes___ContextObject *)cpy_r_node)->_column);
    }
    ((mypy___nodes___ContextObject *)cpy_r_node)->_column = cpy_r_r119;
    cpy_r_r120 = 1;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 671, CPyStatic_checkstrformat___globals);
        goto CPyL74;
    }
    cpy_r_r121 = CPyDef_checkstrformat___StringFormatterChecker___validate_and_transform_accessors(cpy_r_self, cpy_r_node, cpy_r_original_repl, cpy_r_spec, cpy_r_ctx);
    CPy_DECREF(cpy_r_node);
    if (unlikely(cpy_r_r121 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 672, CPyStatic_checkstrformat___globals);
        goto CPyL71;
    }
    return cpy_r_r121;
CPyL71: ;
    cpy_r_r122 = 2;
    return cpy_r_r122;
CPyL72: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL71;
CPyL73: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r14);
    goto CPyL7;
CPyL74: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL71;
CPyL75: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL20;
CPyL76: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r51);
    goto CPyL71;
CPyL77: ;
    CPyTagged_DECREF(cpy_r_r53);
    goto CPyL29;
CPyL78: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL71;
CPyL79: ;
    CPy_DecRef(cpy_r_r50);
    CPy_DecRef(cpy_r_r66);
    goto CPyL36;
CPyL80: ;
    CPy_DecRef(cpy_r_node);
    CPy_DecRef(cpy_r_r83);
    goto CPyL71;
CPyL81: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL53;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___validate_and_transform_accessors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"temp_ast", "original_repl", "spec", "ctx", 0};
    static CPyArg_Parser parser = {"OOOO:validate_and_transform_accessors", kwlist, 0};
    PyObject *obj_temp_ast;
    PyObject *obj_original_repl;
    PyObject *obj_spec;
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_temp_ast, &obj_original_repl, &obj_spec, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_temp_ast;
    if (likely(PyObject_TypeCheck(obj_temp_ast, CPyType_nodes___Expression)))
        arg_temp_ast = obj_temp_ast;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_temp_ast); 
        goto fail;
    }
    PyObject *arg_original_repl;
    if (likely(PyObject_TypeCheck(obj_original_repl, CPyType_nodes___Expression)))
        arg_original_repl = obj_original_repl;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_original_repl); 
        goto fail;
    }
    PyObject *arg_spec;
    if (likely(Py_TYPE(obj_spec) == CPyType_checkstrformat___ConversionSpecifier))
        arg_spec = obj_spec;
    else {
        CPy_TypeError("mypy.checkstrformat.ConversionSpecifier", obj_spec); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyObject_TypeCheck(obj_ctx, CPyType_nodes___Context)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_ctx); 
        goto fail;
    }
    char retval = CPyDef_checkstrformat___StringFormatterChecker___validate_and_transform_accessors(arg_self, arg_temp_ast, arg_original_repl, arg_spec, arg_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "validate_and_transform_accessors", 619, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___StringFormatterChecker___check_str_interpolation(PyObject *cpy_r_self, PyObject *cpy_r_expr, PyObject *cpy_r_replacements) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
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
    PyObject *cpy_r_specifiers;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_has_mapping_keys;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    tuple_T2II cpy_r_r23;
    tuple_T2II cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
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
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    cpy_r_r0 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_exprchk;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = NULL;
    cpy_r_r2 = 2;
    cpy_r_r3 = 2;
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_checkexpr___ExpressionChecker___accept(cpy_r_r0, cpy_r_expr, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_interpolation", 682, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    } else
        goto CPyL36;
CPyL1: ;
    cpy_r_r6 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL4;
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___StrExpr))
        cpy_r_r10 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_str_interpolation", 683, CPyStatic_checkstrformat___globals, "mypy.nodes.StrExpr", cpy_r_expr);
        goto CPyL35;
    }
    cpy_r_r11 = ((mypy___nodes___StrExprObject *)cpy_r_r10)->_value;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11;
    goto CPyL6;
CPyL4: ;
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___BytesExpr))
        cpy_r_r13 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_str_interpolation", 683, CPyStatic_checkstrformat___globals, "mypy.nodes.BytesExpr", cpy_r_expr);
        goto CPyL35;
    }
    cpy_r_r14 = ((mypy___nodes___BytesExprObject *)cpy_r_r13)->_value;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r12 = cpy_r_r14;
CPyL6: ;
    cpy_r_r15 = CPyDef_checkstrformat___parse_conversion_specifiers(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_interpolation", 683, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
    cpy_r_specifiers = cpy_r_r15;
    cpy_r_r16 = CPyDef_checkstrformat___StringFormatterChecker___analyze_conversion_specifiers(cpy_r_self, cpy_r_specifiers, cpy_r_expr);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_interpolation", 684, CPyStatic_checkstrformat___globals);
        goto CPyL37;
    }
    cpy_r_has_mapping_keys = cpy_r_r16;
    cpy_r_r17 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    if (!cpy_r_r20) goto CPyL19;
    cpy_r_r21 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    cpy_r_r22 = ((mypy___checker___TypeCheckerObject *)cpy_r_r21)->_options;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_str_interpolation", "TypeChecker", "options", 685, CPyStatic_checkstrformat___globals);
        goto CPyL38;
    }
CPyL10: ;
    cpy_r_r23 = ((mypy___options___OptionsObject *)cpy_r_r22)->_python_version;
    CPyTagged_INCREF(cpy_r_r23.f0);
    CPyTagged_INCREF(cpy_r_r23.f1);
    cpy_r_r24.f0 = 6;
    cpy_r_r24.f1 = 10;
    CPyTagged_INCREF(cpy_r_r24.f0);
    CPyTagged_INCREF(cpy_r_r24.f1);
    cpy_r_r25 = PyTuple_New(2);
    if (unlikely(cpy_r_r25 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1567 = CPyTagged_StealAsObject(cpy_r_r23.f0);
    PyTuple_SET_ITEM(cpy_r_r25, 0, __tmp1567);
    PyObject *__tmp1568 = CPyTagged_StealAsObject(cpy_r_r23.f1);
    PyTuple_SET_ITEM(cpy_r_r25, 1, __tmp1568);
    cpy_r_r26 = PyTuple_New(2);
    if (unlikely(cpy_r_r26 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1569 = CPyTagged_StealAsObject(cpy_r_r24.f0);
    PyTuple_SET_ITEM(cpy_r_r26, 0, __tmp1569);
    PyObject *__tmp1570 = CPyTagged_StealAsObject(cpy_r_r24.f1);
    PyTuple_SET_ITEM(cpy_r_r26, 1, __tmp1570);
    cpy_r_r27 = PyObject_RichCompare(cpy_r_r25, cpy_r_r26, 0);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_interpolation", 685, CPyStatic_checkstrformat___globals);
        goto CPyL38;
    }
    if (unlikely(!PyBool_Check(cpy_r_r27))) {
        CPy_TypeError("bool", cpy_r_r27); cpy_r_r28 = 2;
    } else
        cpy_r_r28 = cpy_r_r27 == Py_True;
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_interpolation", 685, CPyStatic_checkstrformat___globals);
        goto CPyL38;
    }
    if (cpy_r_r28) {
        goto CPyL39;
    } else
        goto CPyL19;
CPyL13: ;
    cpy_r_r29 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = CPyStatics[1430]; /* ('Bytes formatting is only supported in Python 3.5 and '
                                     'later') */
    cpy_r_r31 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r31 == NULL)) {
        goto CPyL40;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_interpolation", 689, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r33 = NULL;
    cpy_r_r34 = 2;
    cpy_r_r35 = NULL;
    cpy_r_r36 = CPyDef_messages___MessageBuilder___fail(cpy_r_r29, cpy_r_r30, cpy_r_replacements, cpy_r_r31, cpy_r_r33, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_interpolation", 686, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
    cpy_r_r37 = NULL;
    cpy_r_r38 = NULL;
    cpy_r_r39 = CPY_INT_TAG;
    cpy_r_r40 = CPY_INT_TAG;
    cpy_r_r41 = CPyDef_types___AnyType(10, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_interpolation", 691, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
    return cpy_r_r41;
CPyL19: ;
    cpy_r_r42 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r43 = cpy_r_has_mapping_keys == cpy_r_r42;
    if (cpy_r_r43) goto CPyL41;
    if (unlikely(!PyBool_Check(cpy_r_has_mapping_keys))) {
        CPy_TypeError("bool", cpy_r_has_mapping_keys); cpy_r_r44 = 2;
    } else
        cpy_r_r44 = cpy_r_has_mapping_keys == Py_True;
    CPy_DECREF(cpy_r_has_mapping_keys);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_interpolation", 695, CPyStatic_checkstrformat___globals);
        goto CPyL37;
    }
    if (!cpy_r_r44) goto CPyL23;
    cpy_r_r45 = CPyDef_checkstrformat___StringFormatterChecker___check_mapping_str_interpolation(cpy_r_self, cpy_r_specifiers, cpy_r_replacements, cpy_r_expr);
    CPy_DECREF(cpy_r_specifiers);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_interpolation", 696, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    } else
        goto CPyL24;
CPyL23: ;
    cpy_r_r46 = CPyDef_checkstrformat___StringFormatterChecker___check_simple_str_interpolation(cpy_r_self, cpy_r_specifiers, cpy_r_replacements, cpy_r_expr);
    CPy_DECREF(cpy_r_specifiers);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_interpolation", 698, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
CPyL24: ;
    cpy_r_r47 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r48 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r49 = *(PyObject * *)cpy_r_r48;
    cpy_r_r50 = cpy_r_r49 == cpy_r_r47;
    if (!cpy_r_r50) goto CPyL27;
    cpy_r_r51 = CPyStatics[1179]; /* 'builtins.bytes' */
    cpy_r_r52 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_self, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_interpolation", 701, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
    return cpy_r_r52;
CPyL27: ;
    cpy_r_r53 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    if (!cpy_r_r56) goto CPyL30;
    cpy_r_r57 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r58 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_self, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_interpolation", 703, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
    return cpy_r_r58;
CPyL30: ;
    cpy_r_r59 = 0 ? Py_True : Py_False;
    cpy_r_r60 = PyObject_IsTrue(cpy_r_r59);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_interpolation", -1, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
    cpy_r_r62 = cpy_r_r60;
    if (cpy_r_r62) goto CPyL34;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r63 = 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_str_interpolation", 705, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
    CPy_Unreachable();
CPyL34: ;
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r64 = NULL;
    return cpy_r_r64;
CPyL36: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL1;
CPyL37: ;
    CPy_DecRef(cpy_r_specifiers);
    goto CPyL35;
CPyL38: ;
    CPy_DecRef(cpy_r_specifiers);
    CPy_DecRef(cpy_r_has_mapping_keys);
    goto CPyL35;
CPyL39: ;
    CPy_DECREF(cpy_r_specifiers);
    CPy_DECREF(cpy_r_has_mapping_keys);
    goto CPyL13;
CPyL40: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL14;
CPyL41: ;
    CPy_DECREF(cpy_r_specifiers);
    CPy_DECREF(cpy_r_has_mapping_keys);
    goto CPyL24;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___check_str_interpolation(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", "replacements", 0};
    static CPyArg_Parser parser = {"OO:check_str_interpolation", kwlist, 0};
    PyObject *obj_expr;
    PyObject *obj_replacements;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr, &obj_replacements)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (Py_TYPE(obj_expr) == CPyType_nodes___StrExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1571;
    if (Py_TYPE(obj_expr) == CPyType_nodes___BytesExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1571;
    CPy_TypeError("union[mypy.nodes.StrExpr, mypy.nodes.BytesExpr]", obj_expr); 
    goto fail;
__LL1571: ;
    PyObject *arg_replacements;
    if (likely(PyObject_TypeCheck(obj_replacements, CPyType_nodes___Expression)))
        arg_replacements = obj_replacements;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_replacements); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkstrformat___StringFormatterChecker___check_str_interpolation(arg_self, arg_expr, arg_replacements);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "check_str_interpolation", 678, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___StringFormatterChecker___analyze_conversion_specifiers(PyObject *cpy_r_self, PyObject *cpy_r_specifiers, PyObject *cpy_r_context) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_specifier;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_has_star;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_specifier_2;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_has_key;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyPtr cpy_r_r22;
    int64_t cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_specifier_3;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_all_have_keys;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    cpy_r_r0 = 0;
    cpy_r_r1 = 0;
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_specifiers)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL7;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_specifiers, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_checkstrformat___ConversionSpecifier))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "analyze_conversion_specifiers", 710, CPyStatic_checkstrformat___globals, "mypy.checkstrformat.ConversionSpecifier", cpy_r_r6);
        goto CPyL35;
    }
    cpy_r_specifier = cpy_r_r7;
    cpy_r_r8 = CPyDef_checkstrformat___ConversionSpecifier___has_star(cpy_r_specifier);
    CPy_DECREF(cpy_r_specifier);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "analyze_conversion_specifiers", 710, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
    if (!cpy_r_r8) goto CPyL6;
    cpy_r_r0 = 1;
    goto CPyL7;
CPyL6: ;
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL1;
CPyL7: ;
    cpy_r_has_star = cpy_r_r0;
    cpy_r_r10 = 0;
    cpy_r_r11 = 0;
CPyL8: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_specifiers)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL14;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_specifiers, cpy_r_r11);
    if (likely(Py_TYPE(cpy_r_r16) == CPyType_checkstrformat___ConversionSpecifier))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "analyze_conversion_specifiers", 711, CPyStatic_checkstrformat___globals, "mypy.checkstrformat.ConversionSpecifier", cpy_r_r16);
        goto CPyL35;
    }
    cpy_r_specifier_2 = cpy_r_r17;
    cpy_r_r18 = CPyDef_checkstrformat___ConversionSpecifier___has_key(cpy_r_specifier_2);
    CPy_DECREF(cpy_r_specifier_2);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "analyze_conversion_specifiers", 711, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
    if (!cpy_r_r18) goto CPyL13;
    cpy_r_r10 = 1;
    goto CPyL14;
CPyL13: ;
    cpy_r_r19 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r19;
    goto CPyL8;
CPyL14: ;
    cpy_r_has_key = cpy_r_r10;
    cpy_r_r20 = 1;
    cpy_r_r21 = 0;
CPyL15: ;
    cpy_r_r22 = (CPyPtr)&((PyVarObject *)cpy_r_specifiers)->ob_size;
    cpy_r_r23 = *(int64_t *)cpy_r_r22;
    cpy_r_r24 = cpy_r_r23 << 1;
    cpy_r_r25 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r24;
    if (!cpy_r_r25) goto CPyL26;
    cpy_r_r26 = CPyList_GetItemUnsafe(cpy_r_specifiers, cpy_r_r21);
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_checkstrformat___ConversionSpecifier))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "analyze_conversion_specifiers", 712, CPyStatic_checkstrformat___globals, "mypy.checkstrformat.ConversionSpecifier", cpy_r_r26);
        goto CPyL35;
    }
    cpy_r_specifier_3 = cpy_r_r27;
    cpy_r_r28 = CPyDef_checkstrformat___ConversionSpecifier___has_key(cpy_r_specifier_3);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "analyze_conversion_specifiers", 713, CPyStatic_checkstrformat___globals);
        goto CPyL36;
    }
    if (cpy_r_r28) {
        goto CPyL37;
    } else
        goto CPyL20;
CPyL19: ;
    cpy_r_r29 = cpy_r_r28 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = cpy_r_r29;
    goto CPyL22;
CPyL20: ;
    cpy_r_r31 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier_3)->_conv_type;
    CPy_INCREF(cpy_r_r31);
    CPy_DECREF(cpy_r_specifier_3);
    cpy_r_r32 = CPyStatics[1183]; /* '%' */
    cpy_r_r33 = PyObject_RichCompare(cpy_r_r31, cpy_r_r32, 2);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "analyze_conversion_specifiers", 713, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
    cpy_r_r30 = cpy_r_r33;
CPyL22: ;
    cpy_r_r34 = PyObject_Not(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "analyze_conversion_specifiers", 712, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
    cpy_r_r36 = cpy_r_r34;
    if (!cpy_r_r36) goto CPyL25;
    cpy_r_r20 = 0;
    goto CPyL26;
CPyL25: ;
    cpy_r_r37 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r37;
    goto CPyL15;
CPyL26: ;
    cpy_r_all_have_keys = cpy_r_r20;
    if (!cpy_r_has_key) goto CPyL30;
    if (!cpy_r_has_star) goto CPyL30;
    cpy_r_r38 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyDef_messages___MessageBuilder___string_interpolation_with_star_and_key(cpy_r_r38, cpy_r_context);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "analyze_conversion_specifiers", 717, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
    cpy_r_r40 = Py_None;
    CPy_INCREF(cpy_r_r40);
    return cpy_r_r40;
CPyL30: ;
    if (!cpy_r_has_key) goto CPyL34;
    if (cpy_r_all_have_keys) goto CPyL34;
    cpy_r_r41 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = CPyDef_messages___MessageBuilder___string_interpolation_mixing_key_and_non_keys(cpy_r_r41, cpy_r_context);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "analyze_conversion_specifiers", 720, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
    cpy_r_r43 = Py_None;
    CPy_INCREF(cpy_r_r43);
    return cpy_r_r43;
CPyL34: ;
    cpy_r_r44 = cpy_r_has_key ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r44);
    return cpy_r_r44;
CPyL35: ;
    cpy_r_r45 = NULL;
    return cpy_r_r45;
CPyL36: ;
    CPy_DecRef(cpy_r_specifier_3);
    goto CPyL35;
CPyL37: ;
    CPy_DECREF(cpy_r_specifier_3);
    goto CPyL19;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___analyze_conversion_specifiers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"specifiers", "context", 0};
    static CPyArg_Parser parser = {"OO:analyze_conversion_specifiers", kwlist, 0};
    PyObject *obj_specifiers;
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_specifiers, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_specifiers;
    if (likely(PyList_Check(obj_specifiers)))
        arg_specifiers = obj_specifiers;
    else {
        CPy_TypeError("list", obj_specifiers); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkstrformat___StringFormatterChecker___analyze_conversion_specifiers(arg_self, arg_specifiers, arg_context);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "analyze_conversion_specifiers", 707, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___StringFormatterChecker___check_simple_str_interpolation(PyObject *cpy_r_self, PyObject *cpy_r_specifiers, PyObject *cpy_r_replacements, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_checkers;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_rhs_type;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_rep_types;
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
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    int64_t cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyPtr cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    CPyPtr cpy_r_r51;
    int64_t cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_typ;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_temp_node;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyPtr cpy_r_r65;
    CPyPtr cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyPtr cpy_r_r68;
    int64_t cpy_r_r69;
    CPyTagged cpy_r_r70;
    CPyPtr cpy_r_r71;
    int64_t cpy_r_r72;
    CPyTagged cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyPtr cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyPtr cpy_r_r93;
    int64_t cpy_r_r94;
    CPyTagged cpy_r_r95;
    CPyPtr cpy_r_r96;
    int64_t cpy_r_r97;
    CPyTagged cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    CPyPtr cpy_r_r103;
    int64_t cpy_r_r104;
    CPyTagged cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    tuple_T2OO cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_check_node;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_check_type;
    PyObject *cpy_r_r112;
    CPyPtr cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    CPyPtr cpy_r_r118;
    int64_t cpy_r_r119;
    CPyTagged cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject **cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject **cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    CPyPtr cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    CPyTagged cpy_r_r139;
    CPyPtr cpy_r_r140;
    int64_t cpy_r_r141;
    CPyTagged cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r146;
    CPyPtr cpy_r_r147;
    PyObject *cpy_r_r148;
    char cpy_r_r149;
    CPyTagged cpy_r_r150;
    PyObject *cpy_r_r151;
    CPyTagged cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    CPyTagged cpy_r_r155;
    CPyPtr cpy_r_r156;
    int64_t cpy_r_r157;
    CPyTagged cpy_r_r158;
    char cpy_r_r159;
    CPyPtr cpy_r_r160;
    int64_t cpy_r_r161;
    CPyTagged cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    tuple_T2OO cpy_r_r165;
    tuple_T2OO cpy_r_checks;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_rep_node;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject **cpy_r_r171;
    PyObject *cpy_r_r172;
    CPyTagged cpy_r_r173;
    CPyTagged cpy_r_r174;
    PyObject *cpy_r_r175;
    CPyTagged cpy_r_r176;
    CPyTagged cpy_r_r177;
    CPyPtr cpy_r_r178;
    int64_t cpy_r_r179;
    CPyTagged cpy_r_r180;
    char cpy_r_r181;
    CPyPtr cpy_r_r182;
    int64_t cpy_r_r183;
    CPyTagged cpy_r_r184;
    char cpy_r_r185;
    PyObject *cpy_r_r186;
    tuple_T2OO cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_rep_type;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject **cpy_r_r193;
    PyObject *cpy_r_r194;
    CPyTagged cpy_r_r195;
    CPyTagged cpy_r_r196;
    char cpy_r_r197;
    cpy_r_r0 = CPyDef_checkstrformat___StringFormatterChecker___build_replacement_checkers(cpy_r_self, cpy_r_specifiers, cpy_r_replacements, cpy_r_expr);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 731, CPyStatic_checkstrformat___globals);
        goto CPyL93;
    }
    cpy_r_checkers = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_checkers == cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL94;
    } else
        goto CPyL3;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPyDef_checkstrformat___StringFormatterChecker___accept(cpy_r_self, cpy_r_replacements, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 735, CPyStatic_checkstrformat___globals);
        goto CPyL95;
    }
    cpy_r_r5 = CPyDef_types___get_proper_type(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 735, CPyStatic_checkstrformat___globals);
        goto CPyL95;
    }
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 735, CPyStatic_checkstrformat___globals, "mypy.types.ProperType", cpy_r_r5);
        goto CPyL95;
    }
    cpy_r_rhs_type = cpy_r_r6;
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 736, CPyStatic_checkstrformat___globals);
        goto CPyL96;
    }
    cpy_r_rep_types = cpy_r_r7;
    CPy_DECREF(cpy_r_rep_types);
    cpy_r_r8 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_rhs_type)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL10;
    if (likely(Py_TYPE(cpy_r_rhs_type) == CPyType_types___TupleType))
        cpy_r_r12 = cpy_r_rhs_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 738, CPyStatic_checkstrformat___globals, "mypy.types.TupleType", cpy_r_rhs_type);
        goto CPyL96;
    }
    cpy_r_r13 = ((mypy___types___TupleTypeObject *)cpy_r_r12)->_items;
    CPy_INCREF(cpy_r_r13);
    cpy_r_rep_types = cpy_r_r13;
    goto CPyL39;
CPyL10: ;
    cpy_r_r14 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_rhs_type)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (cpy_r_r17) {
        goto CPyL97;
    } else
        goto CPyL12;
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r18 = (PyObject *)CPyType_types___Instance;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_rhs_type)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL26;
    if (likely(Py_TYPE(cpy_r_rhs_type) == CPyType_types___Instance))
        cpy_r_r22 = cpy_r_rhs_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 741, CPyStatic_checkstrformat___globals, "mypy.types.Instance", cpy_r_rhs_type);
        goto CPyL96;
    }
    cpy_r_r23 = ((mypy___types___InstanceObject *)cpy_r_r22)->_type;
    cpy_r_r24 = CPY_GET_ATTR(cpy_r_r23, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 741, CPyStatic_checkstrformat___globals);
        goto CPyL96;
    }
CPyL15: ;
    cpy_r_r25 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r26 = PyUnicode_Compare(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r27 = cpy_r_r26 == -1;
    if (!cpy_r_r27) goto CPyL18;
    cpy_r_r28 = PyErr_Occurred();
    cpy_r_r29 = cpy_r_r28 != NULL;
    if (!cpy_r_r29) goto CPyL18;
    cpy_r_r30 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 741, CPyStatic_checkstrformat___globals);
        goto CPyL96;
    }
CPyL18: ;
    cpy_r_r31 = cpy_r_r26 == 0;
    if (!cpy_r_r31) goto CPyL26;
    if (likely(Py_TYPE(cpy_r_rhs_type) == CPyType_types___Instance))
        cpy_r_r32 = cpy_r_rhs_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 743, CPyStatic_checkstrformat___globals, "mypy.types.Instance", cpy_r_rhs_type);
        goto CPyL96;
    }
    cpy_r_r33 = ((mypy___types___InstanceObject *)cpy_r_r32)->_args;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = CPySequenceTuple_GetItem(cpy_r_r33, 0);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 743, CPyStatic_checkstrformat___globals);
        goto CPyL96;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r34, CPyType_types___Type)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 743, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_r34);
        goto CPyL96;
    }
    cpy_r_r36 = PyList_New(1);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 743, CPyStatic_checkstrformat___globals);
        goto CPyL98;
    }
    cpy_r_r37 = (CPyPtr)&((PyListObject *)cpy_r_r36)->ob_item;
    cpy_r_r38 = *(CPyPtr *)cpy_r_r37;
    *(PyObject * *)cpy_r_r38 = cpy_r_r35;
    if (likely(cpy_r_checkers != Py_None))
        cpy_r_r39 = cpy_r_checkers;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 743, CPyStatic_checkstrformat___globals, "list", cpy_r_checkers);
        goto CPyL99;
    }
    cpy_r_r40 = (CPyPtr)&((PyVarObject *)cpy_r_r39)->ob_size;
    cpy_r_r41 = *(int64_t *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 << 1;
    cpy_r_r43 = CPySequence_Multiply(cpy_r_r36, cpy_r_r42);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 743, CPyStatic_checkstrformat___globals);
        goto CPyL96;
    }
    cpy_r_rep_types = cpy_r_r43;
    goto CPyL39;
CPyL26: ;
    cpy_r_r44 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r45 = (CPyPtr)&((PyObject *)cpy_r_rhs_type)->ob_type;
    cpy_r_r46 = *(PyObject * *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 == cpy_r_r44;
    if (cpy_r_r47) {
        goto CPyL100;
    } else
        goto CPyL37;
CPyL27: ;
    if (likely(Py_TYPE(cpy_r_rhs_type) == CPyType_types___UnionType))
        cpy_r_r48 = cpy_r_rhs_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 745, CPyStatic_checkstrformat___globals, "mypy.types.UnionType", cpy_r_rhs_type);
        goto CPyL93;
    }
    cpy_r_r49 = CPyDef_types___UnionType___relevant_items(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 745, CPyStatic_checkstrformat___globals);
        goto CPyL93;
    }
    cpy_r_r50 = 0;
CPyL30: ;
    cpy_r_r51 = (CPyPtr)&((PyVarObject *)cpy_r_r49)->ob_size;
    cpy_r_r52 = *(int64_t *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 << 1;
    cpy_r_r54 = (Py_ssize_t)cpy_r_r50 < (Py_ssize_t)cpy_r_r53;
    if (!cpy_r_r54) goto CPyL101;
    cpy_r_r55 = CPyList_GetItemUnsafe(cpy_r_r49, cpy_r_r50);
    if (likely(PyObject_TypeCheck(cpy_r_r55, CPyType_types___Type)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 745, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_r55);
        goto CPyL102;
    }
    cpy_r_typ = cpy_r_r56;
    cpy_r_r57 = 2;
    cpy_r_r58 = NULL;
    cpy_r_r59 = CPyDef_nodes___TempNode(cpy_r_typ, cpy_r_r57, cpy_r_r58);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 746, CPyStatic_checkstrformat___globals);
        goto CPyL102;
    }
    cpy_r_temp_node = cpy_r_r59;
    cpy_r_r60 = ((mypy___nodes___ContextObject *)cpy_r_replacements)->_line;
    if (unlikely(cpy_r_r60 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_simple_str_interpolation", "Expression", "line", 747, CPyStatic_checkstrformat___globals);
        goto CPyL103;
    }
    CPyTagged_INCREF(cpy_r_r60);
CPyL34: ;
    CPyTagged_DECREF(((mypy___nodes___TempNodeObject *)cpy_r_temp_node)->_line);
    ((mypy___nodes___TempNodeObject *)cpy_r_temp_node)->_line = cpy_r_r60;
    cpy_r_r62 = CPyDef_checkstrformat___StringFormatterChecker___check_simple_str_interpolation(cpy_r_self, cpy_r_specifiers, cpy_r_temp_node, cpy_r_expr);
    CPy_DECREF(cpy_r_temp_node);
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 748, CPyStatic_checkstrformat___globals);
        goto CPyL102;
    }
    cpy_r_r63 = cpy_r_r50 + 2;
    cpy_r_r50 = cpy_r_r63;
    goto CPyL30;
CPyL36: ;
    return 1;
CPyL37: ;
    cpy_r_r64 = PyList_New(1);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 751, CPyStatic_checkstrformat___globals);
        goto CPyL96;
    }
    cpy_r_r65 = (CPyPtr)&((PyListObject *)cpy_r_r64)->ob_item;
    cpy_r_r66 = *(CPyPtr *)cpy_r_r65;
    CPy_INCREF(cpy_r_rhs_type);
    *(PyObject * *)cpy_r_r66 = cpy_r_rhs_type;
    cpy_r_rep_types = cpy_r_r64;
CPyL39: ;
    if (likely(cpy_r_checkers != Py_None))
        cpy_r_r67 = cpy_r_checkers;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 753, CPyStatic_checkstrformat___globals, "list", cpy_r_checkers);
        goto CPyL104;
    }
    cpy_r_r68 = (CPyPtr)&((PyVarObject *)cpy_r_r67)->ob_size;
    cpy_r_r69 = *(int64_t *)cpy_r_r68;
    cpy_r_r70 = cpy_r_r69 << 1;
    cpy_r_r71 = (CPyPtr)&((PyVarObject *)cpy_r_rep_types)->ob_size;
    cpy_r_r72 = *(int64_t *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 << 1;
    cpy_r_r74 = (Py_ssize_t)cpy_r_r70 > (Py_ssize_t)cpy_r_r73;
    if (cpy_r_r74) {
        goto CPyL105;
    } else
        goto CPyL47;
CPyL41: ;
    cpy_r_r75 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = CPyStatics[757]; /* 'typing.Iterable' */
    cpy_r_r77 = CPyDef_checker___TypeChecker___named_type(cpy_r_r75, cpy_r_r76);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 755, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r78 = NULL;
    cpy_r_r79 = 2;
    cpy_r_r80 = 2;
    cpy_r_r81 = 2;
    cpy_r_r82 = 2;
    cpy_r_r83 = 2;
    cpy_r_r84 = NULL;
    cpy_r_r85 = CPyDef_subtypes___is_subtype(cpy_r_rhs_type, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r82, cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 755, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    if (!cpy_r_r85) goto CPyL107;
    cpy_r_r86 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r87 = (CPyPtr)&((PyObject *)cpy_r_rhs_type)->ob_type;
    cpy_r_r88 = *(PyObject * *)cpy_r_r87;
    CPy_DECREF(cpy_r_rhs_type);
    cpy_r_r89 = cpy_r_r88 == cpy_r_r86;
    if (cpy_r_r89) goto CPyL46;
    return 1;
CPyL46: ;
    cpy_r_r90 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r90);
    cpy_r_r91 = CPyDef_messages___MessageBuilder___too_few_string_formatting_arguments(cpy_r_r90, cpy_r_replacements);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 760, CPyStatic_checkstrformat___globals);
        goto CPyL93;
    } else
        goto CPyL92;
CPyL47: ;
    if (likely(cpy_r_checkers != Py_None))
        cpy_r_r92 = cpy_r_checkers;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 761, CPyStatic_checkstrformat___globals, "list", cpy_r_checkers);
        goto CPyL104;
    }
    cpy_r_r93 = (CPyPtr)&((PyVarObject *)cpy_r_r92)->ob_size;
    cpy_r_r94 = *(int64_t *)cpy_r_r93;
    cpy_r_r95 = cpy_r_r94 << 1;
    cpy_r_r96 = (CPyPtr)&((PyVarObject *)cpy_r_rep_types)->ob_size;
    cpy_r_r97 = *(int64_t *)cpy_r_r96;
    cpy_r_r98 = cpy_r_r97 << 1;
    cpy_r_r99 = (Py_ssize_t)cpy_r_r95 < (Py_ssize_t)cpy_r_r98;
    if (cpy_r_r99) {
        goto CPyL108;
    } else
        goto CPyL50;
CPyL49: ;
    cpy_r_r100 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r100);
    cpy_r_r101 = CPyDef_messages___MessageBuilder___too_many_string_formatting_arguments(cpy_r_r100, cpy_r_replacements);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r101 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 762, CPyStatic_checkstrformat___globals);
        goto CPyL93;
    } else
        goto CPyL92;
CPyL50: ;
    if (likely(cpy_r_checkers != Py_None))
        cpy_r_r102 = cpy_r_checkers;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 764, CPyStatic_checkstrformat___globals, "list", cpy_r_checkers);
        goto CPyL104;
    }
    cpy_r_r103 = (CPyPtr)&((PyVarObject *)cpy_r_r102)->ob_size;
    cpy_r_r104 = *(int64_t *)cpy_r_r103;
    cpy_r_r105 = cpy_r_r104 << 1;
    cpy_r_r106 = cpy_r_r105 == 2;
    if (cpy_r_r106) {
        goto CPyL109;
    } else
        goto CPyL110;
CPyL52: ;
    if (likely(cpy_r_checkers != Py_None))
        cpy_r_r107 = cpy_r_checkers;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 765, CPyStatic_checkstrformat___globals, "list", cpy_r_checkers);
        goto CPyL96;
    }
    cpy_r_r108 = CPyList_GetItemShort(cpy_r_r107, 0);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 765, CPyStatic_checkstrformat___globals);
        goto CPyL96;
    }
    PyObject *__tmp1572;
    if (unlikely(!(PyTuple_Check(cpy_r_r108) && PyTuple_GET_SIZE(cpy_r_r108) == 2))) {
        __tmp1572 = NULL;
        goto __LL1573;
    }
    __tmp1572 = PyTuple_GET_ITEM(cpy_r_r108, 0);
    if (__tmp1572 == NULL) goto __LL1573;
    __tmp1572 = PyTuple_GET_ITEM(cpy_r_r108, 1);
    if (__tmp1572 == NULL) goto __LL1573;
    __tmp1572 = cpy_r_r108;
__LL1573: ;
    if (unlikely(__tmp1572 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r108); cpy_r_r109 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1574 = PyTuple_GET_ITEM(cpy_r_r108, 0);
        CPy_INCREF(__tmp1574);
        PyObject *__tmp1575;
        __tmp1575 = __tmp1574;
        cpy_r_r109.f0 = __tmp1575;
        PyObject *__tmp1576 = PyTuple_GET_ITEM(cpy_r_r108, 1);
        CPy_INCREF(__tmp1576);
        PyObject *__tmp1577;
        __tmp1577 = __tmp1576;
        cpy_r_r109.f1 = __tmp1577;
    }
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 765, CPyStatic_checkstrformat___globals);
        goto CPyL96;
    }
    CPy_DECREF(cpy_r_checkers);
    cpy_r_r110 = cpy_r_r109.f0;
    CPy_INCREF(cpy_r_r110);
    cpy_r_check_node = cpy_r_r110;
    cpy_r_r111 = cpy_r_r109.f1;
    CPy_INCREF(cpy_r_r111);
    CPy_DECREF(cpy_r_r109.f0);
    CPy_DECREF(cpy_r_r109.f1);
    cpy_r_check_type = cpy_r_r111;
    cpy_r_r112 = (PyObject *)CPyType_types___TupleType;
    cpy_r_r113 = (CPyPtr)&((PyObject *)cpy_r_rhs_type)->ob_type;
    cpy_r_r114 = *(PyObject * *)cpy_r_r113;
    cpy_r_r115 = cpy_r_r114 == cpy_r_r112;
    if (!cpy_r_r115) goto CPyL111;
    if (likely(Py_TYPE(cpy_r_rhs_type) == CPyType_types___TupleType))
        cpy_r_r116 = cpy_r_rhs_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 766, CPyStatic_checkstrformat___globals, "mypy.types.TupleType", cpy_r_rhs_type);
        goto CPyL112;
    }
    cpy_r_r117 = ((mypy___types___TupleTypeObject *)cpy_r_r116)->_items;
    cpy_r_r118 = (CPyPtr)&((PyVarObject *)cpy_r_r117)->ob_size;
    cpy_r_r119 = *(int64_t *)cpy_r_r118;
    cpy_r_r120 = cpy_r_r119 << 1;
    cpy_r_r121 = cpy_r_r120 == 2;
    if (cpy_r_r121) {
        goto CPyL113;
    } else
        goto CPyL111;
CPyL58: ;
    if (likely(Py_TYPE(cpy_r_rhs_type) == CPyType_types___TupleType))
        cpy_r_r122 = cpy_r_rhs_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 767, CPyStatic_checkstrformat___globals, "mypy.types.TupleType", cpy_r_rhs_type);
        goto CPyL114;
    }
    cpy_r_r123 = ((mypy___types___TupleTypeObject *)cpy_r_r122)->_items;
    cpy_r_r124 = CPyList_GetItemShort(cpy_r_r123, 0);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 767, CPyStatic_checkstrformat___globals);
        goto CPyL114;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r124, CPyType_types___Type)))
        cpy_r_r125 = cpy_r_r124;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 767, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_r124);
        goto CPyL114;
    }
    CPy_DECREF(cpy_r_rhs_type);
    PyObject *cpy_r_r126[1] = {cpy_r_r125};
    cpy_r_r127 = (PyObject **)&cpy_r_r126;
    cpy_r_r128 = _PyObject_Vectorcall(cpy_r_check_type, cpy_r_r127, 1, 0);
    CPy_DECREF(cpy_r_check_type);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 767, CPyStatic_checkstrformat___globals);
        goto CPyL115;
    } else
        goto CPyL116;
CPyL62: ;
    CPy_DECREF(cpy_r_r125);
    goto CPyL92;
CPyL63: ;
    PyObject *cpy_r_r129[1] = {cpy_r_replacements};
    cpy_r_r130 = (PyObject **)&cpy_r_r129;
    cpy_r_r131 = _PyObject_Vectorcall(cpy_r_check_node, cpy_r_r130, 1, 0);
    CPy_DECREF(cpy_r_check_node);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 769, CPyStatic_checkstrformat___globals);
        goto CPyL93;
    } else
        goto CPyL117;
CPyL64: ;
    cpy_r_r132 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r133 = (CPyPtr)&((PyObject *)cpy_r_replacements)->ob_type;
    cpy_r_r134 = *(PyObject * *)cpy_r_r133;
    cpy_r_r135 = cpy_r_r134 == cpy_r_r132;
    if (!cpy_r_r135) goto CPyL83;
    cpy_r_r136 = 0;
    if (likely(Py_TYPE(cpy_r_replacements) == CPyType_nodes___TupleExpr))
        cpy_r_r137 = cpy_r_replacements;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 771, CPyStatic_checkstrformat___globals, "mypy.nodes.TupleExpr", cpy_r_replacements);
        goto CPyL118;
    }
    cpy_r_r138 = ((mypy___nodes___TupleExprObject *)cpy_r_r137)->_items;
    CPy_INCREF(cpy_r_r138);
    cpy_r_r139 = 0;
CPyL67: ;
    cpy_r_r140 = (CPyPtr)&((PyVarObject *)cpy_r_r138)->ob_size;
    cpy_r_r141 = *(int64_t *)cpy_r_r140;
    cpy_r_r142 = cpy_r_r141 << 1;
    cpy_r_r143 = (Py_ssize_t)cpy_r_r139 < (Py_ssize_t)cpy_r_r142;
    if (!cpy_r_r143) goto CPyL119;
    cpy_r_r144 = CPyList_GetItemUnsafe(cpy_r_r138, cpy_r_r139);
    if (likely(PyObject_TypeCheck(cpy_r_r144, CPyType_nodes___Expression)))
        cpy_r_r145 = cpy_r_r144;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 770, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_r144);
        goto CPyL120;
    }
    cpy_r_item = cpy_r_r145;
    cpy_r_r146 = (PyObject *)CPyType_nodes___StarExpr;
    cpy_r_r147 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r148 = *(PyObject * *)cpy_r_r147;
    CPy_DECREF(cpy_r_item);
    cpy_r_r149 = cpy_r_r148 == cpy_r_r146;
    if (cpy_r_r149) {
        goto CPyL121;
    } else
        goto CPyL71;
CPyL70: ;
    cpy_r_r136 = 1;
    goto CPyL72;
CPyL71: ;
    cpy_r_r150 = cpy_r_r139 + 2;
    cpy_r_r139 = cpy_r_r150;
    goto CPyL67;
CPyL72: ;
    if (cpy_r_r136) {
        goto CPyL83;
    } else
        goto CPyL122;
CPyL73: ;
    if (likely(cpy_r_checkers != Py_None))
        cpy_r_r151 = cpy_r_checkers;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 773, CPyStatic_checkstrformat___globals, "list", cpy_r_checkers);
        goto CPyL93;
    }
    cpy_r_r152 = 0;
    if (likely(Py_TYPE(cpy_r_replacements) == CPyType_nodes___TupleExpr))
        cpy_r_r153 = cpy_r_replacements;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 773, CPyStatic_checkstrformat___globals, "mypy.nodes.TupleExpr", cpy_r_replacements);
        goto CPyL123;
    }
    cpy_r_r154 = ((mypy___nodes___TupleExprObject *)cpy_r_r153)->_items;
    CPy_INCREF(cpy_r_r154);
    cpy_r_r155 = 0;
CPyL76: ;
    cpy_r_r156 = (CPyPtr)&((PyVarObject *)cpy_r_r151)->ob_size;
    cpy_r_r157 = *(int64_t *)cpy_r_r156;
    cpy_r_r158 = cpy_r_r157 << 1;
    cpy_r_r159 = (Py_ssize_t)cpy_r_r152 < (Py_ssize_t)cpy_r_r158;
    if (!cpy_r_r159) goto CPyL124;
    cpy_r_r160 = (CPyPtr)&((PyVarObject *)cpy_r_r154)->ob_size;
    cpy_r_r161 = *(int64_t *)cpy_r_r160;
    cpy_r_r162 = cpy_r_r161 << 1;
    cpy_r_r163 = (Py_ssize_t)cpy_r_r155 < (Py_ssize_t)cpy_r_r162;
    if (!cpy_r_r163) goto CPyL124;
    cpy_r_r164 = CPyList_GetItemUnsafe(cpy_r_r151, cpy_r_r152);
    PyObject *__tmp1578;
    if (unlikely(!(PyTuple_Check(cpy_r_r164) && PyTuple_GET_SIZE(cpy_r_r164) == 2))) {
        __tmp1578 = NULL;
        goto __LL1579;
    }
    __tmp1578 = PyTuple_GET_ITEM(cpy_r_r164, 0);
    if (__tmp1578 == NULL) goto __LL1579;
    __tmp1578 = PyTuple_GET_ITEM(cpy_r_r164, 1);
    if (__tmp1578 == NULL) goto __LL1579;
    __tmp1578 = cpy_r_r164;
__LL1579: ;
    if (unlikely(__tmp1578 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r164); cpy_r_r165 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1580 = PyTuple_GET_ITEM(cpy_r_r164, 0);
        CPy_INCREF(__tmp1580);
        PyObject *__tmp1581;
        __tmp1581 = __tmp1580;
        cpy_r_r165.f0 = __tmp1581;
        PyObject *__tmp1582 = PyTuple_GET_ITEM(cpy_r_r164, 1);
        CPy_INCREF(__tmp1582);
        PyObject *__tmp1583;
        __tmp1583 = __tmp1582;
        cpy_r_r165.f1 = __tmp1583;
    }
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r165.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 773, CPyStatic_checkstrformat___globals);
        goto CPyL125;
    }
    cpy_r_checks = cpy_r_r165;
    cpy_r_r166 = CPyList_GetItemUnsafe(cpy_r_r154, cpy_r_r155);
    if (likely(PyObject_TypeCheck(cpy_r_r166, CPyType_nodes___Expression)))
        cpy_r_r167 = cpy_r_r166;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 773, CPyStatic_checkstrformat___globals, "mypy.nodes.Expression", cpy_r_r166);
        goto CPyL126;
    }
    cpy_r_rep_node = cpy_r_r167;
    cpy_r_r168 = cpy_r_checks.f0;
    CPy_INCREF(cpy_r_r168);
    cpy_r_check_node = cpy_r_r168;
    cpy_r_r169 = cpy_r_checks.f1;
    CPy_INCREF(cpy_r_r169);
    CPy_DECREF(cpy_r_checks.f0);
    CPy_DECREF(cpy_r_checks.f1);
    cpy_r_check_type = cpy_r_r169;
    CPy_DECREF(cpy_r_check_type);
    PyObject *cpy_r_r170[1] = {cpy_r_rep_node};
    cpy_r_r171 = (PyObject **)&cpy_r_r170;
    cpy_r_r172 = _PyObject_Vectorcall(cpy_r_check_node, cpy_r_r171, 1, 0);
    CPy_DECREF(cpy_r_check_node);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 775, CPyStatic_checkstrformat___globals);
        goto CPyL127;
    } else
        goto CPyL128;
CPyL81: ;
    CPy_DECREF(cpy_r_rep_node);
    cpy_r_r173 = cpy_r_r152 + 2;
    cpy_r_r152 = cpy_r_r173;
    cpy_r_r174 = cpy_r_r155 + 2;
    cpy_r_r155 = cpy_r_r174;
    goto CPyL76;
CPyL83: ;
    if (likely(cpy_r_checkers != Py_None))
        cpy_r_r175 = cpy_r_checkers;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 777, CPyStatic_checkstrformat___globals, "list", cpy_r_checkers);
        goto CPyL129;
    }
    cpy_r_r176 = 0;
    cpy_r_r177 = 0;
CPyL85: ;
    cpy_r_r178 = (CPyPtr)&((PyVarObject *)cpy_r_r175)->ob_size;
    cpy_r_r179 = *(int64_t *)cpy_r_r178;
    cpy_r_r180 = cpy_r_r179 << 1;
    cpy_r_r181 = (Py_ssize_t)cpy_r_r176 < (Py_ssize_t)cpy_r_r180;
    if (!cpy_r_r181) goto CPyL130;
    cpy_r_r182 = (CPyPtr)&((PyVarObject *)cpy_r_rep_types)->ob_size;
    cpy_r_r183 = *(int64_t *)cpy_r_r182;
    cpy_r_r184 = cpy_r_r183 << 1;
    cpy_r_r185 = (Py_ssize_t)cpy_r_r177 < (Py_ssize_t)cpy_r_r184;
    if (!cpy_r_r185) goto CPyL130;
    cpy_r_r186 = CPyList_GetItemUnsafe(cpy_r_r175, cpy_r_r176);
    PyObject *__tmp1584;
    if (unlikely(!(PyTuple_Check(cpy_r_r186) && PyTuple_GET_SIZE(cpy_r_r186) == 2))) {
        __tmp1584 = NULL;
        goto __LL1585;
    }
    __tmp1584 = PyTuple_GET_ITEM(cpy_r_r186, 0);
    if (__tmp1584 == NULL) goto __LL1585;
    __tmp1584 = PyTuple_GET_ITEM(cpy_r_r186, 1);
    if (__tmp1584 == NULL) goto __LL1585;
    __tmp1584 = cpy_r_r186;
__LL1585: ;
    if (unlikely(__tmp1584 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_r186); cpy_r_r187 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1586 = PyTuple_GET_ITEM(cpy_r_r186, 0);
        CPy_INCREF(__tmp1586);
        PyObject *__tmp1587;
        __tmp1587 = __tmp1586;
        cpy_r_r187.f0 = __tmp1587;
        PyObject *__tmp1588 = PyTuple_GET_ITEM(cpy_r_r186, 1);
        CPy_INCREF(__tmp1588);
        PyObject *__tmp1589;
        __tmp1589 = __tmp1588;
        cpy_r_r187.f1 = __tmp1589;
    }
    CPy_DECREF(cpy_r_r186);
    if (unlikely(cpy_r_r187.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 777, CPyStatic_checkstrformat___globals);
        goto CPyL131;
    }
    cpy_r_checks = cpy_r_r187;
    cpy_r_r188 = CPyList_GetItemUnsafe(cpy_r_rep_types, cpy_r_r177);
    if (likely(PyObject_TypeCheck(cpy_r_r188, CPyType_types___Type)))
        cpy_r_r189 = cpy_r_r188;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 777, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_r188);
        goto CPyL132;
    }
    cpy_r_rep_type = cpy_r_r189;
    cpy_r_r190 = cpy_r_checks.f0;
    CPy_INCREF(cpy_r_r190);
    cpy_r_check_node = cpy_r_r190;
    CPy_DECREF(cpy_r_check_node);
    cpy_r_r191 = cpy_r_checks.f1;
    CPy_INCREF(cpy_r_r191);
    CPy_DECREF(cpy_r_checks.f0);
    CPy_DECREF(cpy_r_checks.f1);
    cpy_r_check_type = cpy_r_r191;
    PyObject *cpy_r_r192[1] = {cpy_r_rep_type};
    cpy_r_r193 = (PyObject **)&cpy_r_r192;
    cpy_r_r194 = _PyObject_Vectorcall(cpy_r_check_type, cpy_r_r193, 1, 0);
    CPy_DECREF(cpy_r_check_type);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 779, CPyStatic_checkstrformat___globals);
        goto CPyL133;
    } else
        goto CPyL134;
CPyL90: ;
    CPy_DECREF(cpy_r_rep_type);
    cpy_r_r195 = cpy_r_r176 + 2;
    cpy_r_r176 = cpy_r_r195;
    cpy_r_r196 = cpy_r_r177 + 2;
    cpy_r_r177 = cpy_r_r196;
    goto CPyL85;
CPyL92: ;
    return 1;
CPyL93: ;
    cpy_r_r197 = 2;
    return cpy_r_r197;
CPyL94: ;
    CPy_DECREF(cpy_r_checkers);
    goto CPyL2;
CPyL95: ;
    CPy_DecRef(cpy_r_checkers);
    goto CPyL93;
CPyL96: ;
    CPy_DecRef(cpy_r_checkers);
    CPy_DecRef(cpy_r_rhs_type);
    goto CPyL93;
CPyL97: ;
    CPy_DECREF(cpy_r_checkers);
    CPy_DECREF(cpy_r_rhs_type);
    goto CPyL11;
CPyL98: ;
    CPy_DecRef(cpy_r_checkers);
    CPy_DecRef(cpy_r_rhs_type);
    CPy_DecRef(cpy_r_r35);
    goto CPyL93;
CPyL99: ;
    CPy_DecRef(cpy_r_checkers);
    CPy_DecRef(cpy_r_rhs_type);
    CPy_DecRef(cpy_r_r36);
    goto CPyL93;
CPyL100: ;
    CPy_DECREF(cpy_r_checkers);
    goto CPyL27;
CPyL101: ;
    CPy_DECREF(cpy_r_r49);
    goto CPyL36;
CPyL102: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL93;
CPyL103: ;
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_temp_node);
    goto CPyL93;
CPyL104: ;
    CPy_DecRef(cpy_r_checkers);
    CPy_DecRef(cpy_r_rhs_type);
    CPy_DecRef(cpy_r_rep_types);
    goto CPyL93;
CPyL105: ;
    CPy_DECREF(cpy_r_checkers);
    CPy_DECREF(cpy_r_rep_types);
    goto CPyL41;
CPyL106: ;
    CPy_DecRef(cpy_r_rhs_type);
    goto CPyL93;
CPyL107: ;
    CPy_DECREF(cpy_r_rhs_type);
    goto CPyL46;
CPyL108: ;
    CPy_DECREF(cpy_r_checkers);
    CPy_DECREF(cpy_r_rhs_type);
    CPy_DECREF(cpy_r_rep_types);
    goto CPyL49;
CPyL109: ;
    CPy_DECREF(cpy_r_rep_types);
    goto CPyL52;
CPyL110: ;
    CPy_DECREF(cpy_r_rhs_type);
    goto CPyL64;
CPyL111: ;
    CPy_DECREF(cpy_r_rhs_type);
    CPy_DECREF(cpy_r_check_type);
    goto CPyL63;
CPyL112: ;
    CPy_DecRef(cpy_r_rhs_type);
    CPy_DecRef(cpy_r_check_node);
    CPy_DecRef(cpy_r_check_type);
    goto CPyL93;
CPyL113: ;
    CPy_DECREF(cpy_r_check_node);
    goto CPyL58;
CPyL114: ;
    CPy_DecRef(cpy_r_rhs_type);
    CPy_DecRef(cpy_r_check_type);
    goto CPyL93;
CPyL115: ;
    CPy_DecRef(cpy_r_r125);
    goto CPyL93;
CPyL116: ;
    CPy_DECREF(cpy_r_r128);
    goto CPyL62;
CPyL117: ;
    CPy_DECREF(cpy_r_r131);
    goto CPyL92;
CPyL118: ;
    CPy_DecRef(cpy_r_checkers);
    CPy_DecRef(cpy_r_rep_types);
    goto CPyL93;
CPyL119: ;
    CPy_DECREF(cpy_r_r138);
    goto CPyL72;
CPyL120: ;
    CPy_DecRef(cpy_r_checkers);
    CPy_DecRef(cpy_r_rep_types);
    CPy_DecRef(cpy_r_r138);
    goto CPyL93;
CPyL121: ;
    CPy_DECREF(cpy_r_r138);
    goto CPyL70;
CPyL122: ;
    CPy_DECREF(cpy_r_rep_types);
    goto CPyL73;
CPyL123: ;
    CPy_DecRef(cpy_r_r151);
    goto CPyL93;
CPyL124: ;
    CPy_DECREF(cpy_r_r151);
    CPy_DECREF(cpy_r_r154);
    goto CPyL92;
CPyL125: ;
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r154);
    goto CPyL93;
CPyL126: ;
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r154);
    CPy_DecRef(cpy_r_checks.f0);
    CPy_DecRef(cpy_r_checks.f1);
    goto CPyL93;
CPyL127: ;
    CPy_DecRef(cpy_r_r151);
    CPy_DecRef(cpy_r_r154);
    CPy_DecRef(cpy_r_rep_node);
    goto CPyL93;
CPyL128: ;
    CPy_DECREF(cpy_r_r172);
    goto CPyL81;
CPyL129: ;
    CPy_DecRef(cpy_r_rep_types);
    goto CPyL93;
CPyL130: ;
    CPy_DECREF(cpy_r_rep_types);
    CPy_DECREF(cpy_r_r175);
    goto CPyL92;
CPyL131: ;
    CPy_DecRef(cpy_r_rep_types);
    CPy_DecRef(cpy_r_r175);
    goto CPyL93;
CPyL132: ;
    CPy_DecRef(cpy_r_rep_types);
    CPy_DecRef(cpy_r_checks.f0);
    CPy_DecRef(cpy_r_checks.f1);
    CPy_DecRef(cpy_r_r175);
    goto CPyL93;
CPyL133: ;
    CPy_DecRef(cpy_r_rep_types);
    CPy_DecRef(cpy_r_r175);
    CPy_DecRef(cpy_r_rep_type);
    goto CPyL93;
CPyL134: ;
    CPy_DECREF(cpy_r_r194);
    goto CPyL90;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___check_simple_str_interpolation(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"specifiers", "replacements", "expr", 0};
    static CPyArg_Parser parser = {"OOO:check_simple_str_interpolation", kwlist, 0};
    PyObject *obj_specifiers;
    PyObject *obj_replacements;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_specifiers, &obj_replacements, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_specifiers;
    if (likely(PyList_Check(obj_specifiers)))
        arg_specifiers = obj_specifiers;
    else {
        CPy_TypeError("list", obj_specifiers); 
        goto fail;
    }
    PyObject *arg_replacements;
    if (likely(PyObject_TypeCheck(obj_replacements, CPyType_nodes___Expression)))
        arg_replacements = obj_replacements;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_replacements); 
        goto fail;
    }
    PyObject *arg_expr;
    if (Py_TYPE(obj_expr) == CPyType_nodes___StrExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1590;
    if (Py_TYPE(obj_expr) == CPyType_nodes___BytesExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1590;
    CPy_TypeError("union[mypy.nodes.StrExpr, mypy.nodes.BytesExpr]", obj_expr); 
    goto fail;
__LL1590: ;
    char retval = CPyDef_checkstrformat___StringFormatterChecker___check_simple_str_interpolation(arg_self, arg_specifiers, arg_replacements, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "check_simple_str_interpolation", 724, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___StringFormatterChecker___check_mapping_str_interpolation(PyObject *cpy_r_self, PyObject *cpy_r_specifiers, PyObject *cpy_r_replacements, PyObject *cpy_r_expr) {
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
    tuple_T2OO cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_k;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_mapping;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    tuple_T2OO cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_k_2;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_v_2;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
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
    PyObject *cpy_r_key_str;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    int32_t cpy_r_r68;
    char cpy_r_r69;
    CPyTagged cpy_r_r70;
    CPyTagged cpy_r_r71;
    CPyPtr cpy_r_r72;
    int64_t cpy_r_r73;
    CPyTagged cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_specifier;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_rep_type;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_expected_type;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
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
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    int32_t cpy_r_r130;
    char cpy_r_r131;
    char cpy_r_r132;
    char cpy_r_r133;
    CPyTagged cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_dict_type;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    cpy_r_r0 = (PyObject *)CPyType_nodes___DictExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_replacements)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL71;
    cpy_r_r4 = 1;
    if (likely(Py_TYPE(cpy_r_replacements) == CPyType_nodes___DictExpr))
        cpy_r_r5 = cpy_r_replacements;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 789, CPyStatic_checkstrformat___globals, "mypy.nodes.DictExpr", cpy_r_replacements);
        goto CPyL78;
    }
    cpy_r_r6 = ((mypy___nodes___DictExprObject *)cpy_r_r5)->_items;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = 0;
CPyL3: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL79;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r6, cpy_r_r7);
    PyObject *__tmp1591;
    if (unlikely(!(PyTuple_Check(cpy_r_r12) && PyTuple_GET_SIZE(cpy_r_r12) == 2))) {
        __tmp1591 = NULL;
        goto __LL1592;
    }
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r12, 0), CPyType_nodes___Expression))
        __tmp1591 = PyTuple_GET_ITEM(cpy_r_r12, 0);
    else {
        __tmp1591 = NULL;
    }
    if (__tmp1591 != NULL) goto __LL1593;
    if (PyTuple_GET_ITEM(cpy_r_r12, 0) == Py_None)
        __tmp1591 = PyTuple_GET_ITEM(cpy_r_r12, 0);
    else {
        __tmp1591 = NULL;
    }
    if (__tmp1591 != NULL) goto __LL1593;
    __tmp1591 = NULL;
__LL1593: ;
    if (__tmp1591 == NULL) goto __LL1592;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r12, 1), CPyType_nodes___Expression)))
        __tmp1591 = PyTuple_GET_ITEM(cpy_r_r12, 1);
    else {
        __tmp1591 = NULL;
    }
    if (__tmp1591 == NULL) goto __LL1592;
    __tmp1591 = cpy_r_r12;
__LL1592: ;
    if (unlikely(__tmp1591 == NULL)) {
        CPy_TypeError("tuple[union[mypy.nodes.Expression, None], mypy.nodes.Expression]", cpy_r_r12); cpy_r_r13 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1594 = PyTuple_GET_ITEM(cpy_r_r12, 0);
        CPy_INCREF(__tmp1594);
        PyObject *__tmp1595;
        if (PyObject_TypeCheck(__tmp1594, CPyType_nodes___Expression))
            __tmp1595 = __tmp1594;
        else {
            __tmp1595 = NULL;
        }
        if (__tmp1595 != NULL) goto __LL1596;
        if (__tmp1594 == Py_None)
            __tmp1595 = __tmp1594;
        else {
            __tmp1595 = NULL;
        }
        if (__tmp1595 != NULL) goto __LL1596;
        CPy_TypeError("mypy.nodes.Expression or None", __tmp1594); 
        __tmp1595 = NULL;
__LL1596: ;
        cpy_r_r13.f0 = __tmp1595;
        PyObject *__tmp1597 = PyTuple_GET_ITEM(cpy_r_r12, 1);
        CPy_INCREF(__tmp1597);
        PyObject *__tmp1598;
        if (likely(PyObject_TypeCheck(__tmp1597, CPyType_nodes___Expression)))
            __tmp1598 = __tmp1597;
        else {
            CPy_TypeError("mypy.nodes.Expression", __tmp1597); 
            __tmp1598 = NULL;
        }
        cpy_r_r13.f1 = __tmp1598;
    }
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 788, CPyStatic_checkstrformat___globals);
        goto CPyL80;
    }
    cpy_r_r14 = cpy_r_r13.f0;
    CPy_INCREF(cpy_r_r14);
    cpy_r_k = cpy_r_r14;
    cpy_r_r15 = cpy_r_r13.f1;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r13.f0);
    CPy_DECREF(cpy_r_r13.f1);
    cpy_r_v = cpy_r_r15;
    CPy_DECREF(cpy_r_v);
    cpy_r_r16 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_k)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (cpy_r_r19) {
        goto CPyL81;
    } else
        goto CPyL7;
CPyL6: ;
    cpy_r_r20 = cpy_r_r19;
    goto CPyL8;
CPyL7: ;
    cpy_r_r21 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r22 = (CPyPtr)&((PyObject *)cpy_r_k)->ob_type;
    cpy_r_r23 = *(PyObject * *)cpy_r_r22;
    CPy_DECREF(cpy_r_k);
    cpy_r_r24 = cpy_r_r23 == cpy_r_r21;
    cpy_r_r20 = cpy_r_r24;
CPyL8: ;
    cpy_r_r25 = cpy_r_r20 ^ 1;
    if (cpy_r_r25) {
        goto CPyL82;
    } else
        goto CPyL10;
CPyL9: ;
    cpy_r_r4 = 0;
    goto CPyL11;
CPyL10: ;
    cpy_r_r26 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r26;
    goto CPyL3;
CPyL11: ;
    if (!cpy_r_r4) goto CPyL71;
    cpy_r_r27 = PyDict_New();
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 791, CPyStatic_checkstrformat___globals);
        goto CPyL78;
    }
    cpy_r_mapping = cpy_r_r27;
    if (likely(Py_TYPE(cpy_r_replacements) == CPyType_nodes___DictExpr))
        cpy_r_r28 = cpy_r_replacements;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 792, CPyStatic_checkstrformat___globals, "mypy.nodes.DictExpr", cpy_r_replacements);
        goto CPyL83;
    }
    cpy_r_r29 = ((mypy___nodes___DictExprObject *)cpy_r_r28)->_items;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = 0;
CPyL15: ;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_r29)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = (Py_ssize_t)cpy_r_r30 < (Py_ssize_t)cpy_r_r33;
    if (!cpy_r_r34) goto CPyL84;
    cpy_r_r35 = CPyList_GetItemUnsafe(cpy_r_r29, cpy_r_r30);
    PyObject *__tmp1599;
    if (unlikely(!(PyTuple_Check(cpy_r_r35) && PyTuple_GET_SIZE(cpy_r_r35) == 2))) {
        __tmp1599 = NULL;
        goto __LL1600;
    }
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r35, 0), CPyType_nodes___Expression))
        __tmp1599 = PyTuple_GET_ITEM(cpy_r_r35, 0);
    else {
        __tmp1599 = NULL;
    }
    if (__tmp1599 != NULL) goto __LL1601;
    if (PyTuple_GET_ITEM(cpy_r_r35, 0) == Py_None)
        __tmp1599 = PyTuple_GET_ITEM(cpy_r_r35, 0);
    else {
        __tmp1599 = NULL;
    }
    if (__tmp1599 != NULL) goto __LL1601;
    __tmp1599 = NULL;
__LL1601: ;
    if (__tmp1599 == NULL) goto __LL1600;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r35, 1), CPyType_nodes___Expression)))
        __tmp1599 = PyTuple_GET_ITEM(cpy_r_r35, 1);
    else {
        __tmp1599 = NULL;
    }
    if (__tmp1599 == NULL) goto __LL1600;
    __tmp1599 = cpy_r_r35;
__LL1600: ;
    if (unlikely(__tmp1599 == NULL)) {
        CPy_TypeError("tuple[union[mypy.nodes.Expression, None], mypy.nodes.Expression]", cpy_r_r35); cpy_r_r36 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1602 = PyTuple_GET_ITEM(cpy_r_r35, 0);
        CPy_INCREF(__tmp1602);
        PyObject *__tmp1603;
        if (PyObject_TypeCheck(__tmp1602, CPyType_nodes___Expression))
            __tmp1603 = __tmp1602;
        else {
            __tmp1603 = NULL;
        }
        if (__tmp1603 != NULL) goto __LL1604;
        if (__tmp1602 == Py_None)
            __tmp1603 = __tmp1602;
        else {
            __tmp1603 = NULL;
        }
        if (__tmp1603 != NULL) goto __LL1604;
        CPy_TypeError("mypy.nodes.Expression or None", __tmp1602); 
        __tmp1603 = NULL;
__LL1604: ;
        cpy_r_r36.f0 = __tmp1603;
        PyObject *__tmp1605 = PyTuple_GET_ITEM(cpy_r_r35, 1);
        CPy_INCREF(__tmp1605);
        PyObject *__tmp1606;
        if (likely(PyObject_TypeCheck(__tmp1605, CPyType_nodes___Expression)))
            __tmp1606 = __tmp1605;
        else {
            CPy_TypeError("mypy.nodes.Expression", __tmp1605); 
            __tmp1606 = NULL;
        }
        cpy_r_r36.f1 = __tmp1606;
    }
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 792, CPyStatic_checkstrformat___globals);
        goto CPyL85;
    }
    cpy_r_r37 = cpy_r_r36.f0;
    CPy_INCREF(cpy_r_r37);
    cpy_r_k_2 = cpy_r_r37;
    cpy_r_r38 = cpy_r_r36.f1;
    CPy_INCREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r36.f0);
    CPy_DECREF(cpy_r_r36.f1);
    cpy_r_v_2 = cpy_r_r38;
    cpy_r_r39 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r40 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r41 = *(PyObject * *)cpy_r_r40;
    cpy_r_r42 = cpy_r_r41 == cpy_r_r39;
    if (!cpy_r_r42) goto CPyL24;
    cpy_r_r43 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r44 = (CPyPtr)&((PyObject *)cpy_r_k_2)->ob_type;
    cpy_r_r45 = *(PyObject * *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 == cpy_r_r43;
    if (cpy_r_r46) goto CPyL24;
    cpy_r_r47 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r47);
    cpy_r_r48 = CPyStatics[1431]; /* ('Dictionary keys in bytes formatting must be bytes, '
                                     'not strings') */
    CPy_INCREF(cpy_r_expr);
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___BytesExpr))
        cpy_r_r49 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 798, CPyStatic_checkstrformat___globals, "mypy.nodes.BytesExpr", cpy_r_expr);
        goto CPyL86;
    }
    cpy_r_r50 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r50 == NULL)) {
        goto CPyL87;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 799, CPyStatic_checkstrformat___globals);
        goto CPyL78;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r52 = NULL;
    cpy_r_r53 = 2;
    cpy_r_r54 = NULL;
    cpy_r_r55 = CPyDef_messages___MessageBuilder___fail(cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r52, cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 796, CPyStatic_checkstrformat___globals);
        goto CPyL88;
    }
CPyL24: ;
    if (Py_TYPE(cpy_r_k_2) == CPyType_nodes___StrExpr)
        cpy_r_r56 = cpy_r_k_2;
    else {
        cpy_r_r56 = NULL;
    }
    if (cpy_r_r56 != NULL) goto __LL1607;
    if (Py_TYPE(cpy_r_k_2) == CPyType_nodes___BytesExpr)
        cpy_r_r56 = cpy_r_k_2;
    else {
        cpy_r_r56 = NULL;
    }
    if (cpy_r_r56 != NULL) goto __LL1607;
    CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 801, CPyStatic_checkstrformat___globals, "union[mypy.nodes.StrExpr, mypy.nodes.BytesExpr]", cpy_r_k_2);
    goto CPyL89;
__LL1607: ;
    cpy_r_r57 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r58 = (CPyPtr)&((PyObject *)cpy_r_r56)->ob_type;
    cpy_r_r59 = *(PyObject * *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 == cpy_r_r57;
    if (!cpy_r_r60) goto CPyL28;
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_nodes___StrExpr))
        cpy_r_r61 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 801, CPyStatic_checkstrformat___globals, "mypy.nodes.StrExpr", cpy_r_r56);
        goto CPyL89;
    }
    cpy_r_r62 = ((mypy___nodes___StrExprObject *)cpy_r_r61)->_value;
    CPy_INCREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62;
    goto CPyL30;
CPyL28: ;
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_nodes___BytesExpr))
        cpy_r_r64 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 801, CPyStatic_checkstrformat___globals, "mypy.nodes.BytesExpr", cpy_r_r56);
        goto CPyL89;
    }
    cpy_r_r65 = ((mypy___nodes___BytesExprObject *)cpy_r_r64)->_value;
    CPy_INCREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r63 = cpy_r_r65;
CPyL30: ;
    cpy_r_key_str = cpy_r_r63;
    cpy_r_r66 = NULL;
    cpy_r_r67 = CPyDef_checkstrformat___StringFormatterChecker___accept(cpy_r_self, cpy_r_v_2, cpy_r_r66);
    CPy_DECREF(cpy_r_v_2);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 802, CPyStatic_checkstrformat___globals);
        goto CPyL90;
    }
    cpy_r_r68 = CPyDict_SetItem(cpy_r_mapping, cpy_r_key_str, cpy_r_r67);
    CPy_DECREF(cpy_r_key_str);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r69 = cpy_r_r68 >= 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 802, CPyStatic_checkstrformat___globals);
        goto CPyL85;
    }
    cpy_r_r70 = cpy_r_r30 + 2;
    cpy_r_r30 = cpy_r_r70;
    goto CPyL15;
CPyL33: ;
    cpy_r_r71 = 0;
CPyL34: ;
    cpy_r_r72 = (CPyPtr)&((PyVarObject *)cpy_r_specifiers)->ob_size;
    cpy_r_r73 = *(int64_t *)cpy_r_r72;
    cpy_r_r74 = cpy_r_r73 << 1;
    cpy_r_r75 = (Py_ssize_t)cpy_r_r71 < (Py_ssize_t)cpy_r_r74;
    if (!cpy_r_r75) goto CPyL91;
    cpy_r_r76 = CPyList_GetItemUnsafe(cpy_r_specifiers, cpy_r_r71);
    if (likely(Py_TYPE(cpy_r_r76) == CPyType_checkstrformat___ConversionSpecifier))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 804, CPyStatic_checkstrformat___globals, "mypy.checkstrformat.ConversionSpecifier", cpy_r_r76);
        goto CPyL83;
    }
    cpy_r_specifier = cpy_r_r77;
    cpy_r_r78 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier)->_conv_type;
    CPy_INCREF(cpy_r_r78);
    cpy_r_r79 = CPyStatics[1183]; /* '%' */
    cpy_r_r80 = PyObject_RichCompare(cpy_r_r78, cpy_r_r79, 2);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 805, CPyStatic_checkstrformat___globals);
        goto CPyL92;
    }
    cpy_r_r81 = PyObject_IsTrue(cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 805, CPyStatic_checkstrformat___globals);
        goto CPyL92;
    }
    cpy_r_r83 = cpy_r_r81;
    if (cpy_r_r83) goto CPyL93;
    cpy_r_r84 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier)->_key;
    cpy_r_r85 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r86 = cpy_r_r84 != cpy_r_r85;
    if (cpy_r_r86) {
        goto CPyL42;
    } else
        goto CPyL94;
CPyL40: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r87 = 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 808, CPyStatic_checkstrformat___globals);
        goto CPyL78;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r88 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier)->_key;
    CPy_INCREF(cpy_r_r88);
    cpy_r_r89 = PyDict_Contains(cpy_r_mapping, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 809, CPyStatic_checkstrformat___globals);
        goto CPyL92;
    }
    cpy_r_r91 = cpy_r_r89;
    cpy_r_r92 = cpy_r_r91 ^ 1;
    if (cpy_r_r92) {
        goto CPyL95;
    } else
        goto CPyL48;
CPyL44: ;
    cpy_r_r93 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r93);
    cpy_r_r94 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier)->_key;
    CPy_INCREF(cpy_r_r94);
    CPy_DECREF(cpy_r_specifier);
    CPy_INCREF(cpy_r_replacements);
    if (likely(Py_TYPE(cpy_r_replacements) == CPyType_nodes___DictExpr))
        cpy_r_r95 = cpy_r_replacements;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 810, CPyStatic_checkstrformat___globals, "mypy.nodes.DictExpr", cpy_r_replacements);
        goto CPyL96;
    }
    if (likely(PyUnicode_Check(cpy_r_r94)))
        cpy_r_r96 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 810, CPyStatic_checkstrformat___globals, "str", cpy_r_r94);
        goto CPyL97;
    }
    cpy_r_r97 = CPyDef_messages___MessageBuilder___key_not_in_mapping(cpy_r_r93, cpy_r_r96, cpy_r_r95);
    CPy_DECREF(cpy_r_r96);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r97 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 810, CPyStatic_checkstrformat___globals);
        goto CPyL78;
    }
    return 1;
CPyL48: ;
    cpy_r_r98 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier)->_key;
    CPy_INCREF(cpy_r_r98);
    cpy_r_r99 = CPyDict_GetItem(cpy_r_mapping, cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 812, CPyStatic_checkstrformat___globals);
        goto CPyL92;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r99, CPyType_types___Type)))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 812, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_r99);
        goto CPyL92;
    }
    cpy_r_rep_type = cpy_r_r100;
    cpy_r_r101 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier)->_conv_type;
    cpy_r_r102 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r103 = cpy_r_r101 != cpy_r_r102;
    if (cpy_r_r103) {
        goto CPyL53;
    } else
        goto CPyL98;
CPyL51: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r104 = 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 813, CPyStatic_checkstrformat___globals);
        goto CPyL78;
    }
    CPy_Unreachable();
CPyL53: ;
    cpy_r_r105 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier)->_conv_type;
    CPy_INCREF(cpy_r_r105);
    CPy_INCREF(cpy_r_replacements);
    if (likely(Py_TYPE(cpy_r_replacements) == CPyType_nodes___DictExpr))
        cpy_r_r106 = cpy_r_replacements;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 814, CPyStatic_checkstrformat___globals, "mypy.nodes.DictExpr", cpy_r_replacements);
        goto CPyL99;
    }
    if (likely(PyUnicode_Check(cpy_r_r105)))
        cpy_r_r107 = cpy_r_r105;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 814, CPyStatic_checkstrformat___globals, "str", cpy_r_r105);
        goto CPyL100;
    }
    cpy_r_r108 = 2;
    cpy_r_r109 = CPyDef_checkstrformat___StringFormatterChecker___conversion_type(cpy_r_self, cpy_r_r107, cpy_r_r106, cpy_r_expr, cpy_r_r108);
    CPy_DECREF(cpy_r_r107);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 814, CPyStatic_checkstrformat___globals);
        goto CPyL101;
    }
    cpy_r_expected_type = cpy_r_r109;
    cpy_r_r110 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r111 = cpy_r_expected_type == cpy_r_r110;
    if (cpy_r_r111) {
        goto CPyL102;
    } else
        goto CPyL58;
CPyL57: ;
    return 1;
CPyL58: ;
    cpy_r_r112 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r112);
    if (likely(cpy_r_expected_type != Py_None))
        cpy_r_r113 = cpy_r_expected_type;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 819, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_expected_type);
        goto CPyL103;
    }
    CPy_INCREF(cpy_r_replacements);
    if (likely(Py_TYPE(cpy_r_replacements) == CPyType_nodes___DictExpr))
        cpy_r_r114 = cpy_r_replacements;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 820, CPyStatic_checkstrformat___globals, "mypy.nodes.DictExpr", cpy_r_replacements);
        goto CPyL104;
    }
    cpy_r_r115 = CPyStatics[1432]; /* 'Incompatible types in string interpolation' */
    cpy_r_r116 = CPyStatics[789]; /* 'expression has type' */
    cpy_r_r117 = CPyStatics[1433]; /* "placeholder with key '" */
    cpy_r_r118 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier)->_key;
    CPy_INCREF(cpy_r_r118);
    cpy_r_r119 = PyObject_Str(cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 823, CPyStatic_checkstrformat___globals);
        goto CPyL105;
    }
    cpy_r_r120 = CPyStatics[1434]; /* "' has type" */
    cpy_r_r121 = CPyStr_Build(3, cpy_r_r117, cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 823, CPyStatic_checkstrformat___globals);
        goto CPyL105;
    }
    cpy_r_r122 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r122 == NULL)) {
        goto CPyL106;
    } else
        goto CPyL65;
CPyL63: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r123 = 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 824, CPyStatic_checkstrformat___globals);
        goto CPyL78;
    }
    CPy_Unreachable();
CPyL65: ;
    cpy_r_r124 = NULL;
    cpy_r_r125 = NULL;
    cpy_r_r126 = CPyDef_checker___TypeChecker___check_subtype(cpy_r_r112, cpy_r_rep_type, cpy_r_r113, cpy_r_r114, cpy_r_r115, cpy_r_r116, cpy_r_r121, cpy_r_r124, cpy_r_r122, cpy_r_r125);
    CPy_DECREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r114);
    CPy_DECREF(cpy_r_r121);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r126 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 817, CPyStatic_checkstrformat___globals);
        goto CPyL101;
    }
    cpy_r_r127 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier)->_conv_type;
    CPy_INCREF(cpy_r_r127);
    CPy_DECREF(cpy_r_specifier);
    cpy_r_r128 = CPyStatics[1417]; /* 's' */
    cpy_r_r129 = PyObject_RichCompare(cpy_r_r127, cpy_r_r128, 2);
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 826, CPyStatic_checkstrformat___globals);
        goto CPyL107;
    }
    cpy_r_r130 = PyObject_IsTrue(cpy_r_r129);
    CPy_DECREF(cpy_r_r129);
    cpy_r_r131 = cpy_r_r130 >= 0;
    if (unlikely(!cpy_r_r131)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 826, CPyStatic_checkstrformat___globals);
        goto CPyL107;
    }
    cpy_r_r132 = cpy_r_r130;
    if (!cpy_r_r132) goto CPyL108;
    cpy_r_r133 = CPyDef_checkstrformat___StringFormatterChecker___check_s_special_cases(cpy_r_self, cpy_r_expr, cpy_r_rep_type, cpy_r_expr);
    CPy_DECREF(cpy_r_rep_type);
    if (unlikely(cpy_r_r133 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 827, CPyStatic_checkstrformat___globals);
        goto CPyL83;
    }
CPyL70: ;
    cpy_r_r134 = cpy_r_r71 + 2;
    cpy_r_r71 = cpy_r_r134;
    goto CPyL34;
CPyL71: ;
    cpy_r_r135 = NULL;
    cpy_r_r136 = CPyDef_checkstrformat___StringFormatterChecker___accept(cpy_r_self, cpy_r_replacements, cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 829, CPyStatic_checkstrformat___globals);
        goto CPyL78;
    }
    cpy_r_rep_type = cpy_r_r136;
    cpy_r_r137 = CPyDef_checkstrformat___StringFormatterChecker___build_dict_type(cpy_r_self, cpy_r_expr);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 830, CPyStatic_checkstrformat___globals);
        goto CPyL109;
    }
    cpy_r_dict_type = cpy_r_r137;
    cpy_r_r138 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r138);
    cpy_r_r139 = CPyStatics[1435]; /* 'Format requires a mapping' */
    cpy_r_r140 = CPyStatics[789]; /* 'expression has type' */
    cpy_r_r141 = CPyStatics[1436]; /* 'expected type for mapping is' */
    cpy_r_r142 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r142 == NULL)) {
        goto CPyL110;
    } else
        goto CPyL76;
CPyL74: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r143 = 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 838, CPyStatic_checkstrformat___globals);
        goto CPyL78;
    }
    CPy_Unreachable();
CPyL76: ;
    cpy_r_r144 = NULL;
    cpy_r_r145 = NULL;
    cpy_r_r146 = CPyDef_checker___TypeChecker___check_subtype(cpy_r_r138, cpy_r_rep_type, cpy_r_dict_type, cpy_r_replacements, cpy_r_r139, cpy_r_r140, cpy_r_r141, cpy_r_r144, cpy_r_r142, cpy_r_r145);
    CPy_DECREF(cpy_r_rep_type);
    CPy_DECREF(cpy_r_dict_type);
    CPy_DECREF(cpy_r_r138);
    if (unlikely(cpy_r_r146 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 831, CPyStatic_checkstrformat___globals);
        goto CPyL78;
    }
CPyL77: ;
    return 1;
CPyL78: ;
    cpy_r_r147 = 2;
    return cpy_r_r147;
CPyL79: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL11;
CPyL80: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL78;
CPyL81: ;
    CPy_DECREF(cpy_r_k);
    goto CPyL6;
CPyL82: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL9;
CPyL83: ;
    CPy_DecRef(cpy_r_mapping);
    goto CPyL78;
CPyL84: ;
    CPy_DECREF(cpy_r_r29);
    goto CPyL33;
CPyL85: ;
    CPy_DecRef(cpy_r_mapping);
    CPy_DecRef(cpy_r_r29);
    goto CPyL78;
CPyL86: ;
    CPy_DecRef(cpy_r_mapping);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_k_2);
    CPy_DecRef(cpy_r_v_2);
    CPy_DecRef(cpy_r_r47);
    goto CPyL78;
CPyL87: ;
    CPy_DecRef(cpy_r_mapping);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_k_2);
    CPy_DecRef(cpy_r_v_2);
    CPy_DecRef(cpy_r_r47);
    CPy_DecRef(cpy_r_r49);
    goto CPyL21;
CPyL88: ;
    CPy_DecRef(cpy_r_mapping);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_k_2);
    CPy_DecRef(cpy_r_v_2);
    goto CPyL78;
CPyL89: ;
    CPy_DecRef(cpy_r_mapping);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_v_2);
    goto CPyL78;
CPyL90: ;
    CPy_DecRef(cpy_r_mapping);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_key_str);
    goto CPyL78;
CPyL91: ;
    CPy_DECREF(cpy_r_mapping);
    goto CPyL77;
CPyL92: ;
    CPy_DecRef(cpy_r_mapping);
    CPy_DecRef(cpy_r_specifier);
    goto CPyL78;
CPyL93: ;
    CPy_DECREF(cpy_r_specifier);
    goto CPyL70;
CPyL94: ;
    CPy_DECREF(cpy_r_mapping);
    CPy_DECREF(cpy_r_specifier);
    goto CPyL40;
CPyL95: ;
    CPy_DECREF(cpy_r_mapping);
    goto CPyL44;
CPyL96: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r94);
    goto CPyL78;
CPyL97: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r95);
    goto CPyL78;
CPyL98: ;
    CPy_DECREF(cpy_r_mapping);
    CPy_DECREF(cpy_r_specifier);
    CPy_DECREF(cpy_r_rep_type);
    goto CPyL51;
CPyL99: ;
    CPy_DecRef(cpy_r_mapping);
    CPy_DecRef(cpy_r_specifier);
    CPy_DecRef(cpy_r_rep_type);
    CPy_DecRef(cpy_r_r105);
    goto CPyL78;
CPyL100: ;
    CPy_DecRef(cpy_r_mapping);
    CPy_DecRef(cpy_r_specifier);
    CPy_DecRef(cpy_r_rep_type);
    CPy_DecRef(cpy_r_r106);
    goto CPyL78;
CPyL101: ;
    CPy_DecRef(cpy_r_mapping);
    CPy_DecRef(cpy_r_specifier);
    CPy_DecRef(cpy_r_rep_type);
    goto CPyL78;
CPyL102: ;
    CPy_DECREF(cpy_r_mapping);
    CPy_DECREF(cpy_r_specifier);
    CPy_DECREF(cpy_r_rep_type);
    CPy_DECREF(cpy_r_expected_type);
    goto CPyL57;
CPyL103: ;
    CPy_DecRef(cpy_r_mapping);
    CPy_DecRef(cpy_r_specifier);
    CPy_DecRef(cpy_r_rep_type);
    CPy_DecRef(cpy_r_r112);
    goto CPyL78;
CPyL104: ;
    CPy_DecRef(cpy_r_mapping);
    CPy_DecRef(cpy_r_specifier);
    CPy_DecRef(cpy_r_rep_type);
    CPy_DecRef(cpy_r_r112);
    CPy_DecRef(cpy_r_r113);
    goto CPyL78;
CPyL105: ;
    CPy_DecRef(cpy_r_mapping);
    CPy_DecRef(cpy_r_specifier);
    CPy_DecRef(cpy_r_rep_type);
    CPy_DecRef(cpy_r_r112);
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r114);
    goto CPyL78;
CPyL106: ;
    CPy_DecRef(cpy_r_mapping);
    CPy_DecRef(cpy_r_specifier);
    CPy_DecRef(cpy_r_rep_type);
    CPy_DecRef(cpy_r_r112);
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r121);
    goto CPyL63;
CPyL107: ;
    CPy_DecRef(cpy_r_mapping);
    CPy_DecRef(cpy_r_rep_type);
    goto CPyL78;
CPyL108: ;
    CPy_DECREF(cpy_r_rep_type);
    goto CPyL70;
CPyL109: ;
    CPy_DecRef(cpy_r_rep_type);
    goto CPyL78;
CPyL110: ;
    CPy_DecRef(cpy_r_rep_type);
    CPy_DecRef(cpy_r_dict_type);
    CPy_DecRef(cpy_r_r138);
    goto CPyL74;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___check_mapping_str_interpolation(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"specifiers", "replacements", "expr", 0};
    static CPyArg_Parser parser = {"OOO:check_mapping_str_interpolation", kwlist, 0};
    PyObject *obj_specifiers;
    PyObject *obj_replacements;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_specifiers, &obj_replacements, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_specifiers;
    if (likely(PyList_Check(obj_specifiers)))
        arg_specifiers = obj_specifiers;
    else {
        CPy_TypeError("list", obj_specifiers); 
        goto fail;
    }
    PyObject *arg_replacements;
    if (likely(PyObject_TypeCheck(obj_replacements, CPyType_nodes___Expression)))
        arg_replacements = obj_replacements;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_replacements); 
        goto fail;
    }
    PyObject *arg_expr;
    if (Py_TYPE(obj_expr) == CPyType_nodes___StrExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1608;
    if (Py_TYPE(obj_expr) == CPyType_nodes___BytesExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1608;
    CPy_TypeError("union[mypy.nodes.StrExpr, mypy.nodes.BytesExpr]", obj_expr); 
    goto fail;
__LL1608: ;
    char retval = CPyDef_checkstrformat___StringFormatterChecker___check_mapping_str_interpolation(arg_self, arg_specifiers, arg_replacements, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "check_mapping_str_interpolation", 781, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___StringFormatterChecker___build_dict_type(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_any_type;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_bytes_type;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_str_type;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    CPyPtr cpy_r_r32;
    CPyPtr cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    cpy_r_r0 = NULL;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_types___AnyType(12, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "build_dict_type", 843, CPyStatic_checkstrformat___globals);
        goto CPyL18;
    }
    cpy_r_any_type = cpy_r_r4;
    cpy_r_r5 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    if (!cpy_r_r8) goto CPyL7;
    cpy_r_r9 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyStatics[1179]; /* 'builtins.bytes' */
    cpy_r_r11 = PyList_New(0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "build_dict_type", 845, CPyStatic_checkstrformat___globals);
        goto CPyL19;
    }
    cpy_r_r12 = CPyDef_checker___TypeChecker___named_generic_type(cpy_r_r9, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "build_dict_type", 845, CPyStatic_checkstrformat___globals);
        goto CPyL20;
    }
    cpy_r_bytes_type = cpy_r_r12;
    cpy_r_r13 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyStatics[1172]; /* '_typeshed.SupportsKeysAndGetItem' */
    cpy_r_r15 = PyList_New(2);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "build_dict_type", 847, CPyStatic_checkstrformat___globals);
        goto CPyL21;
    }
    cpy_r_r16 = (CPyPtr)&((PyListObject *)cpy_r_r15)->ob_item;
    cpy_r_r17 = *(CPyPtr *)cpy_r_r16;
    *(PyObject * *)cpy_r_r17 = cpy_r_bytes_type;
    cpy_r_r18 = cpy_r_r17 + 8;
    *(PyObject * *)cpy_r_r18 = cpy_r_any_type;
    cpy_r_r19 = CPyDef_checker___TypeChecker___named_generic_type(cpy_r_r13, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "build_dict_type", 846, CPyStatic_checkstrformat___globals);
        goto CPyL18;
    }
    return cpy_r_r19;
CPyL7: ;
    cpy_r_r20 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r21 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r22 = *(PyObject * *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 == cpy_r_r20;
    if (!cpy_r_r23) goto CPyL22;
    cpy_r_r24 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r26 = PyList_New(0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "build_dict_type", 850, CPyStatic_checkstrformat___globals);
        goto CPyL23;
    }
    cpy_r_r27 = CPyDef_checker___TypeChecker___named_generic_type(cpy_r_r24, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "build_dict_type", 850, CPyStatic_checkstrformat___globals);
        goto CPyL20;
    }
    cpy_r_str_type = cpy_r_r27;
    cpy_r_r28 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[1172]; /* '_typeshed.SupportsKeysAndGetItem' */
    cpy_r_r30 = PyList_New(2);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "build_dict_type", 852, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    cpy_r_r31 = (CPyPtr)&((PyListObject *)cpy_r_r30)->ob_item;
    cpy_r_r32 = *(CPyPtr *)cpy_r_r31;
    *(PyObject * *)cpy_r_r32 = cpy_r_str_type;
    cpy_r_r33 = cpy_r_r32 + 8;
    *(PyObject * *)cpy_r_r33 = cpy_r_any_type;
    cpy_r_r34 = CPyDef_checker___TypeChecker___named_generic_type(cpy_r_r28, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "build_dict_type", 851, CPyStatic_checkstrformat___globals);
        goto CPyL18;
    }
    return cpy_r_r34;
CPyL13: ;
    cpy_r_r35 = 0 ? Py_True : Py_False;
    cpy_r_r36 = PyObject_IsTrue(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "build_dict_type", -1, CPyStatic_checkstrformat___globals);
        goto CPyL18;
    }
    cpy_r_r38 = cpy_r_r36;
    if (cpy_r_r38) goto CPyL17;
    PyErr_SetString(PyExc_AssertionError, "Unreachable");
    cpy_r_r39 = 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "build_dict_type", 855, CPyStatic_checkstrformat___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
CPyL19: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r9);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_any_type);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_bytes_type);
    CPy_DecRef(cpy_r_r13);
    goto CPyL18;
CPyL22: ;
    CPy_DECREF(cpy_r_any_type);
    goto CPyL13;
CPyL23: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r24);
    goto CPyL18;
CPyL24: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r28);
    goto CPyL18;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___build_dict_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:build_dict_type", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (Py_TYPE(obj_expr) == CPyType_nodes___StrExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1609;
    if (Py_TYPE(obj_expr) == CPyType_nodes___BytesExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1609;
    CPy_TypeError("union[mypy.nodes.StrExpr, mypy.nodes.BytesExpr]", obj_expr); 
    goto fail;
__LL1609: ;
    PyObject *retval = CPyDef_checkstrformat___StringFormatterChecker___build_dict_type(arg_self, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "build_dict_type", 841, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___StringFormatterChecker___build_replacement_checkers(PyObject *cpy_r_self, PyObject *cpy_r_specifiers, PyObject *cpy_r_context, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_checkers;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_specifier;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_checker;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "build_replacement_checkers", 860, CPyStatic_checkstrformat___globals);
        goto CPyL11;
    }
    cpy_r_checkers = cpy_r_r0;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_specifiers)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL10;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_specifiers, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_checkstrformat___ConversionSpecifier))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "build_replacement_checkers", 861, CPyStatic_checkstrformat___globals, "mypy.checkstrformat.ConversionSpecifier", cpy_r_r6);
        goto CPyL12;
    }
    cpy_r_specifier = cpy_r_r7;
    cpy_r_r8 = CPyDef_checkstrformat___StringFormatterChecker___replacement_checkers(cpy_r_self, cpy_r_specifier, cpy_r_context, cpy_r_expr);
    CPy_DECREF(cpy_r_specifier);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "build_replacement_checkers", 862, CPyStatic_checkstrformat___globals);
        goto CPyL12;
    }
    cpy_r_checker = cpy_r_r8;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_checker == cpy_r_r9;
    if (cpy_r_r10) {
        goto CPyL13;
    } else
        goto CPyL7;
CPyL6: ;
    cpy_r_r11 = Py_None;
    CPy_INCREF(cpy_r_r11);
    return cpy_r_r11;
CPyL7: ;
    if (likely(cpy_r_checker != Py_None))
        cpy_r_r12 = cpy_r_checker;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "build_replacement_checkers", 865, CPyStatic_checkstrformat___globals, "list", cpy_r_checker);
        goto CPyL12;
    }
    cpy_r_r13 = CPyList_Extend(cpy_r_checkers, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "build_replacement_checkers", 865, CPyStatic_checkstrformat___globals);
        goto CPyL12;
    } else
        goto CPyL14;
CPyL9: ;
    cpy_r_r14 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r14;
    goto CPyL2;
CPyL10: ;
    return cpy_r_checkers;
CPyL11: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL12: ;
    CPy_DecRef(cpy_r_checkers);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_checkers);
    CPy_DECREF(cpy_r_checker);
    goto CPyL6;
CPyL14: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL9;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___build_replacement_checkers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"specifiers", "context", "expr", 0};
    static CPyArg_Parser parser = {"OOO:build_replacement_checkers", kwlist, 0};
    PyObject *obj_specifiers;
    PyObject *obj_context;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_specifiers, &obj_context, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_specifiers;
    if (likely(PyList_Check(obj_specifiers)))
        arg_specifiers = obj_specifiers;
    else {
        CPy_TypeError("list", obj_specifiers); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    PyObject *arg_expr;
    if (Py_TYPE(obj_expr) == CPyType_nodes___StrExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1610;
    if (Py_TYPE(obj_expr) == CPyType_nodes___BytesExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1610;
    CPy_TypeError("union[mypy.nodes.StrExpr, mypy.nodes.BytesExpr]", obj_expr); 
    goto fail;
__LL1610: ;
    PyObject *retval = CPyDef_checkstrformat___StringFormatterChecker___build_replacement_checkers(arg_self, arg_specifiers, arg_context, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "build_replacement_checkers", 857, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___StringFormatterChecker___replacement_checkers(PyObject *cpy_r_self, PyObject *cpy_r_specifier, PyObject *cpy_r_context, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_checkers;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    tuple_T2OO cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
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
    PyObject *cpy_r_c;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    tuple_T2OO cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    tuple_T2OO cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 875, CPyStatic_checkstrformat___globals);
        goto CPyL31;
    }
    cpy_r_checkers = cpy_r_r0;
    cpy_r_r1 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier)->_width;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[282]; /* '*' */
    cpy_r_r3 = PyObject_RichCompare(cpy_r_r1, cpy_r_r2, 2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 877, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
    cpy_r_r4 = PyObject_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 877, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
    cpy_r_r6 = cpy_r_r4;
    if (!cpy_r_r6) goto CPyL6;
    cpy_r_r7 = CPyDef_checkstrformat___StringFormatterChecker___checkers_for_star(cpy_r_self, cpy_r_context);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 878, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
    cpy_r_r8 = PyTuple_New(2);
    if (unlikely(cpy_r_r8 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1611 = cpy_r_r7.f0;
    PyTuple_SET_ITEM(cpy_r_r8, 0, __tmp1611);
    PyObject *__tmp1612 = cpy_r_r7.f1;
    PyTuple_SET_ITEM(cpy_r_r8, 1, __tmp1612);
    cpy_r_r9 = PyList_Append(cpy_r_checkers, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 878, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
CPyL6: ;
    cpy_r_r11 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier)->_precision;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyStatics[282]; /* '*' */
    cpy_r_r13 = PyObject_RichCompare(cpy_r_r11, cpy_r_r12, 2);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 879, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
    cpy_r_r14 = PyObject_IsTrue(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 879, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
    cpy_r_r16 = cpy_r_r14;
    if (!cpy_r_r16) goto CPyL11;
    cpy_r_r17 = CPyDef_checkstrformat___StringFormatterChecker___checkers_for_star(cpy_r_self, cpy_r_context);
    if (unlikely(cpy_r_r17.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 880, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
    cpy_r_r18 = PyTuple_New(2);
    if (unlikely(cpy_r_r18 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1613 = cpy_r_r17.f0;
    PyTuple_SET_ITEM(cpy_r_r18, 0, __tmp1613);
    PyObject *__tmp1614 = cpy_r_r17.f1;
    PyTuple_SET_ITEM(cpy_r_r18, 1, __tmp1614);
    cpy_r_r19 = PyList_Append(cpy_r_checkers, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 880, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
CPyL11: ;
    cpy_r_r21 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier)->_conv_type;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyStatics[1416]; /* 'c' */
    cpy_r_r23 = PyObject_RichCompare(cpy_r_r21, cpy_r_r22, 2);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 882, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
    cpy_r_r24 = PyObject_IsTrue(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 882, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
    cpy_r_r26 = cpy_r_r24;
    if (!cpy_r_r26) goto CPyL20;
    cpy_r_r27 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier)->_conv_type;
    CPy_INCREF(cpy_r_r27);
    if (likely(PyUnicode_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "replacement_checkers", 883, CPyStatic_checkstrformat___globals, "str", cpy_r_r27);
        goto CPyL32;
    }
    cpy_r_r29 = CPyDef_checkstrformat___StringFormatterChecker___checkers_for_c_type(cpy_r_self, cpy_r_r28, cpy_r_context, cpy_r_expr);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 883, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
    cpy_r_c = cpy_r_r29;
    cpy_r_r30 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r31 = cpy_r_c == cpy_r_r30;
    if (cpy_r_r31) {
        goto CPyL33;
    } else
        goto CPyL18;
CPyL17: ;
    cpy_r_r32 = Py_None;
    CPy_INCREF(cpy_r_r32);
    return cpy_r_r32;
CPyL18: ;
    PyObject *__tmp1615;
    if (unlikely(!(PyTuple_Check(cpy_r_c) && PyTuple_GET_SIZE(cpy_r_c) == 2))) {
        __tmp1615 = NULL;
        goto __LL1616;
    }
    __tmp1615 = PyTuple_GET_ITEM(cpy_r_c, 0);
    if (__tmp1615 == NULL) goto __LL1616;
    __tmp1615 = PyTuple_GET_ITEM(cpy_r_c, 1);
    if (__tmp1615 == NULL) goto __LL1616;
    __tmp1615 = cpy_r_c;
__LL1616: ;
    if (unlikely(__tmp1615 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_c); cpy_r_r33 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1617 = PyTuple_GET_ITEM(cpy_r_c, 0);
        CPy_INCREF(__tmp1617);
        PyObject *__tmp1618;
        __tmp1618 = __tmp1617;
        cpy_r_r33.f0 = __tmp1618;
        PyObject *__tmp1619 = PyTuple_GET_ITEM(cpy_r_c, 1);
        CPy_INCREF(__tmp1619);
        PyObject *__tmp1620;
        __tmp1620 = __tmp1619;
        cpy_r_r33.f1 = __tmp1620;
    }
    CPy_DECREF(cpy_r_c);
    if (unlikely(cpy_r_r33.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 886, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
    cpy_r_r34 = PyTuple_New(2);
    if (unlikely(cpy_r_r34 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1621 = cpy_r_r33.f0;
    PyTuple_SET_ITEM(cpy_r_r34, 0, __tmp1621);
    PyObject *__tmp1622 = cpy_r_r33.f1;
    PyTuple_SET_ITEM(cpy_r_r34, 1, __tmp1622);
    cpy_r_r35 = PyList_Append(cpy_r_checkers, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 886, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    } else
        goto CPyL30;
CPyL20: ;
    cpy_r_r37 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier)->_conv_type;
    cpy_r_r38 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r39 = cpy_r_r37 != cpy_r_r38;
    if (!cpy_r_r39) goto CPyL30;
    cpy_r_r40 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier)->_conv_type;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[1183]; /* '%' */
    cpy_r_r42 = PyObject_RichCompare(cpy_r_r40, cpy_r_r41, 3);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 887, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
    cpy_r_r43 = PyObject_IsTrue(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 887, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
    cpy_r_r45 = cpy_r_r43;
    if (!cpy_r_r45) goto CPyL30;
    cpy_r_r46 = ((mypy___checkstrformat___ConversionSpecifierObject *)cpy_r_specifier)->_conv_type;
    CPy_INCREF(cpy_r_r46);
    if (likely(PyUnicode_Check(cpy_r_r46)))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "replacement_checkers", 888, CPyStatic_checkstrformat___globals, "str", cpy_r_r46);
        goto CPyL32;
    }
    cpy_r_r48 = CPyDef_checkstrformat___StringFormatterChecker___checkers_for_regular_type(cpy_r_self, cpy_r_r47, cpy_r_context, cpy_r_expr);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 888, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
    cpy_r_c = cpy_r_r48;
    cpy_r_r49 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r50 = cpy_r_c == cpy_r_r49;
    if (cpy_r_r50) {
        goto CPyL34;
    } else
        goto CPyL28;
CPyL27: ;
    cpy_r_r51 = Py_None;
    CPy_INCREF(cpy_r_r51);
    return cpy_r_r51;
CPyL28: ;
    PyObject *__tmp1623;
    if (unlikely(!(PyTuple_Check(cpy_r_c) && PyTuple_GET_SIZE(cpy_r_c) == 2))) {
        __tmp1623 = NULL;
        goto __LL1624;
    }
    __tmp1623 = PyTuple_GET_ITEM(cpy_r_c, 0);
    if (__tmp1623 == NULL) goto __LL1624;
    __tmp1623 = PyTuple_GET_ITEM(cpy_r_c, 1);
    if (__tmp1623 == NULL) goto __LL1624;
    __tmp1623 = cpy_r_c;
__LL1624: ;
    if (unlikely(__tmp1623 == NULL)) {
        CPy_TypeError("tuple[object, object]", cpy_r_c); cpy_r_r52 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp1625 = PyTuple_GET_ITEM(cpy_r_c, 0);
        CPy_INCREF(__tmp1625);
        PyObject *__tmp1626;
        __tmp1626 = __tmp1625;
        cpy_r_r52.f0 = __tmp1626;
        PyObject *__tmp1627 = PyTuple_GET_ITEM(cpy_r_c, 1);
        CPy_INCREF(__tmp1627);
        PyObject *__tmp1628;
        __tmp1628 = __tmp1627;
        cpy_r_r52.f1 = __tmp1628;
    }
    CPy_DECREF(cpy_r_c);
    if (unlikely(cpy_r_r52.f0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 891, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
    cpy_r_r53 = PyTuple_New(2);
    if (unlikely(cpy_r_r53 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1629 = cpy_r_r52.f0;
    PyTuple_SET_ITEM(cpy_r_r53, 0, __tmp1629);
    PyObject *__tmp1630 = cpy_r_r52.f1;
    PyTuple_SET_ITEM(cpy_r_r53, 1, __tmp1630);
    cpy_r_r54 = PyList_Append(cpy_r_checkers, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 891, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
CPyL30: ;
    return cpy_r_checkers;
CPyL31: ;
    cpy_r_r56 = NULL;
    return cpy_r_r56;
CPyL32: ;
    CPy_DecRef(cpy_r_checkers);
    goto CPyL31;
CPyL33: ;
    CPy_DECREF(cpy_r_checkers);
    CPy_DECREF(cpy_r_c);
    goto CPyL17;
CPyL34: ;
    CPy_DECREF(cpy_r_checkers);
    CPy_DECREF(cpy_r_c);
    goto CPyL27;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___replacement_checkers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"specifier", "context", "expr", 0};
    static CPyArg_Parser parser = {"OOO:replacement_checkers", kwlist, 0};
    PyObject *obj_specifier;
    PyObject *obj_context;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_specifier, &obj_context, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_specifier;
    if (likely(Py_TYPE(obj_specifier) == CPyType_checkstrformat___ConversionSpecifier))
        arg_specifier = obj_specifier;
    else {
        CPy_TypeError("mypy.checkstrformat.ConversionSpecifier", obj_specifier); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    PyObject *arg_expr;
    if (Py_TYPE(obj_expr) == CPyType_nodes___StrExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1631;
    if (Py_TYPE(obj_expr) == CPyType_nodes___BytesExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1631;
    CPy_TypeError("union[mypy.nodes.StrExpr, mypy.nodes.BytesExpr]", obj_expr); 
    goto fail;
__LL1631: ;
    PyObject *retval = CPyDef_checkstrformat___StringFormatterChecker___replacement_checkers(arg_self, arg_specifier, arg_context, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "replacement_checkers", 868, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "__get__", -1, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_check_type;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_expected;
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
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = ((mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "check_type_checkers_for_star_StringFormatterChecker_obj", "__mypyc_env__", 900, CPyStatic_checkstrformat___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "checkers_for_star_StringFormatterChecker_env", "check_type", -1, CPyStatic_checkstrformat___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_check_type = cpy_r_r1;
    CPy_DECREF(cpy_r_check_type);
    cpy_r_r2 = ((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "checkers_for_star_StringFormatterChecker_env", "self", 901, CPyStatic_checkstrformat___globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r4 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_type", 901, CPyStatic_checkstrformat___globals);
        goto CPyL12;
    }
    cpy_r_expected = cpy_r_r4;
    cpy_r_r5 = ((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "checkers_for_star_StringFormatterChecker_env", "self", 902, CPyStatic_checkstrformat___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_r5)->_chk;
    CPy_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = ((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_context;
    if (unlikely(cpy_r_r7 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'context' of 'checkers_for_star_StringFormatterChecker_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r7);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_type", 903, CPyStatic_checkstrformat___globals);
        goto CPyL14;
    }
CPyL6: ;
    cpy_r_r8 = CPyStatics[1437]; /* '* wants int' */
    cpy_r_r9 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r9 == NULL)) {
        goto CPyL15;
    } else
        goto CPyL9;
CPyL7: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_type", 903, CPyStatic_checkstrformat___globals);
        goto CPyL11;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r11 = NULL;
    cpy_r_r12 = NULL;
    cpy_r_r13 = NULL;
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPyDef_checker___TypeChecker___check_subtype(cpy_r_r6, cpy_r_type, cpy_r_expected, cpy_r_r7, cpy_r_r8, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r9, cpy_r_r14);
    CPy_DECREF(cpy_r_expected);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_type", 902, CPyStatic_checkstrformat___globals);
        goto CPyL11;
    }
    return cpy_r_r15;
CPyL11: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_expected);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_expected);
    CPy_DecRef(cpy_r_r6);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_expected);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL7;
}

PyObject *CPyPy_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_type)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type;
    if (likely(PyObject_TypeCheck(obj_type, CPyType_types___Type)))
        arg_type = obj_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_type); 
        goto fail;
    }
    char retval = CPyDef_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj_____call__(arg___mypyc_self__, arg_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "check_type", 900, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "__get__", -1, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_check_expr;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_type;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_expr", "check_expr_checkers_for_star_StringFormatterChecker_obj", "__mypyc_env__", 906, CPyStatic_checkstrformat___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_check_expr;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_expr", "checkers_for_star_StringFormatterChecker_env", "check_expr", -1, CPyStatic_checkstrformat___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_check_expr = cpy_r_r1;
    CPy_DECREF(cpy_r_check_expr);
    cpy_r_r2 = ((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_expr", "checkers_for_star_StringFormatterChecker_env", "self", 907, CPyStatic_checkstrformat___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_expected;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_expr", "checkers_for_star_StringFormatterChecker_env", "expected", 907, CPyStatic_checkstrformat___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = CPyDef_checkstrformat___StringFormatterChecker___accept(cpy_r_r2, cpy_r_expr, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 907, CPyStatic_checkstrformat___globals);
        goto CPyL9;
    }
    cpy_r_type = cpy_r_r4;
    cpy_r_r5 = ((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type;
    if (unlikely(cpy_r_r5 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'check_type' of 'checkers_for_star_StringFormatterChecker_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r5);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 908, CPyStatic_checkstrformat___globals);
        goto CPyL11;
    }
CPyL6: ;
    PyObject *cpy_r_r6[1] = {cpy_r_type};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 1, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 908, CPyStatic_checkstrformat___globals);
        goto CPyL11;
    } else
        goto CPyL12;
CPyL7: ;
    CPy_DECREF(cpy_r_type);
    return 1;
CPyL8: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_type);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL7;
}

PyObject *CPyPy_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj_____call__(arg___mypyc_self__, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 906, CPyStatic_checkstrformat___globals);
    return NULL;
}

tuple_T2OO CPyDef_checkstrformat___StringFormatterChecker___checkers_for_star(PyObject *cpy_r_self, PyObject *cpy_r_context) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    tuple_T2OO cpy_r_r15;
    tuple_T2OO cpy_r_r16;
    cpy_r_r0 = CPyDef_checkstrformat___checkers_for_star_StringFormatterChecker_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_star", 894, CPyStatic_checkstrformat___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_star", 894, CPyStatic_checkstrformat___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_context);
    if (((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_context != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_context);
    }
    ((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_context = cpy_r_context;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_star", 894, CPyStatic_checkstrformat___globals);
        goto CPyL16;
    }
    cpy_r_r3 = ((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "checkers_for_star", "checkers_for_star_StringFormatterChecker_env", "self", 898, CPyStatic_checkstrformat___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r5 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_star", 898, CPyStatic_checkstrformat___globals);
        goto CPyL16;
    }
    if (((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_expected != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_expected);
    }
    ((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_expected = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_star", 898, CPyStatic_checkstrformat___globals);
        goto CPyL16;
    }
    cpy_r_r7 = CPyDef_checkstrformat___check_type_checkers_for_star_StringFormatterChecker_obj();
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_star", 900, CPyStatic_checkstrformat___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject *)cpy_r_r7)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject *)cpy_r_r7)->___mypyc_env__);
    }
    ((mypy___checkstrformat___check_type_checkers_for_star_StringFormatterChecker_objObject *)cpy_r_r7)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_star", 900, CPyStatic_checkstrformat___globals);
        goto CPyL17;
    }
    if (((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type);
    }
    ((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type = cpy_r_r7;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_star", 900, CPyStatic_checkstrformat___globals);
        goto CPyL16;
    }
    cpy_r_r10 = CPyDef_checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_obj();
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_star", 906, CPyStatic_checkstrformat___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject *)cpy_r_r10)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject *)cpy_r_r10)->___mypyc_env__);
    }
    ((mypy___checkstrformat___check_expr_checkers_for_star_StringFormatterChecker_objObject *)cpy_r_r10)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_star", 906, CPyStatic_checkstrformat___globals);
        goto CPyL18;
    }
    if (((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_check_expr != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_check_expr);
    }
    ((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_check_expr = cpy_r_r10;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_star", 906, CPyStatic_checkstrformat___globals);
        goto CPyL16;
    }
    cpy_r_r13 = ((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_check_expr;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "checkers_for_star", "checkers_for_star_StringFormatterChecker_env", "check_expr", 910, CPyStatic_checkstrformat___globals);
        goto CPyL16;
    }
    CPy_INCREF(cpy_r_r13);
CPyL13: ;
    cpy_r_r14 = ((mypy___checkstrformat___checkers_for_star_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type;
    if (unlikely(cpy_r_r14 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'check_type' of 'checkers_for_star_StringFormatterChecker_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r14);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_star", 910, CPyStatic_checkstrformat___globals);
        goto CPyL19;
    }
CPyL14: ;
    cpy_r_r15.f0 = cpy_r_r13;
    cpy_r_r15.f1 = cpy_r_r14;
    CPy_INCREF(cpy_r_r15.f0);
    CPy_INCREF(cpy_r_r15.f1);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    return cpy_r_r15;
CPyL15: ;
    tuple_T2OO __tmp1632 = { NULL, NULL };
    cpy_r_r16 = __tmp1632;
    return cpy_r_r16;
CPyL16: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    goto CPyL15;
CPyL19: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL15;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___checkers_for_star(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"context", 0};
    static CPyArg_Parser parser = {"O:checkers_for_star", kwlist, 0};
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_checkstrformat___StringFormatterChecker___checkers_for_star(arg_self, arg_context);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1633 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp1633);
    PyObject *__tmp1634 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp1634);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_star", 894, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___StringFormatterChecker___check_placeholder_type(PyObject *cpy_r_self, PyObject *cpy_r_typ, PyObject *cpy_r_expected_type, PyObject *cpy_r_context) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[1432]; /* 'Incompatible types in string interpolation' */
    cpy_r_r2 = CPyStatics[789]; /* 'expression has type' */
    cpy_r_r3 = CPyStatics[1438]; /* 'placeholder has type' */
    cpy_r_r4 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r4 == NULL)) {
        goto CPyL6;
    } else
        goto CPyL3;
CPyL1: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_placeholder_type", 920, CPyStatic_checkstrformat___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r6 = NULL;
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_checker___TypeChecker___check_subtype(cpy_r_r0, cpy_r_typ, cpy_r_expected_type, cpy_r_context, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r6, cpy_r_r4, cpy_r_r7);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_placeholder_type", 913, CPyStatic_checkstrformat___globals);
        goto CPyL5;
    }
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___check_placeholder_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"typ", "expected_type", "context", 0};
    static CPyArg_Parser parser = {"OOO:check_placeholder_type", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_expected_type;
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_expected_type, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_expected_type;
    if (likely(PyObject_TypeCheck(obj_expected_type, CPyType_types___Type)))
        arg_expected_type = obj_expected_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_expected_type); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    char retval = CPyDef_checkstrformat___StringFormatterChecker___check_placeholder_type(arg_self, arg_typ, arg_expected_type, arg_context);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "check_placeholder_type", 912, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "__get__", -1, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_check_type;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_ret;
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
    char cpy_r_r23;
    char cpy_r_r24;
    cpy_r_r0 = ((mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "check_type_checkers_for_regular_type_StringFormatterChecker_obj", "__mypyc_env__", 933, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "checkers_for_regular_type_StringFormatterChecker_env", "check_type", -1, CPyStatic_checkstrformat___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_check_type = cpy_r_r1;
    CPy_DECREF(cpy_r_check_type);
    cpy_r_r2 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expected_type;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "checkers_for_regular_type_StringFormatterChecker_env", "expected_type", 934, CPyStatic_checkstrformat___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    if (likely(cpy_r_r2 != Py_None))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_type", 934, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_r2);
        goto CPyL26;
    }
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    CPy_DECREF(cpy_r_r2);
    if (cpy_r_r5) {
        goto CPyL7;
    } else
        goto CPyL27;
CPyL5: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_type", 934, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r7 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "checkers_for_regular_type_StringFormatterChecker_env", "self", 935, CPyStatic_checkstrformat___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r7);
CPyL8: ;
    cpy_r_r8 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expected_type;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "checkers_for_regular_type_StringFormatterChecker_env", "expected_type", 935, CPyStatic_checkstrformat___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r8);
CPyL9: ;
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_type", 935, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_r8);
        goto CPyL28;
    }
    cpy_r_r10 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_context;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "checkers_for_regular_type_StringFormatterChecker_env", "context", 935, CPyStatic_checkstrformat___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r10);
CPyL11: ;
    cpy_r_r11 = CPyDef_checkstrformat___StringFormatterChecker___check_placeholder_type(cpy_r_r7, cpy_r_typ, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_type", 935, CPyStatic_checkstrformat___globals);
        goto CPyL25;
    }
    cpy_r_ret = cpy_r_r11;
    if (!cpy_r_ret) goto CPyL30;
    cpy_r_r12 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_conv_type;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "checkers_for_regular_type_StringFormatterChecker_env", "conv_type", 936, CPyStatic_checkstrformat___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r12);
CPyL14: ;
    cpy_r_r13 = CPyStatics[1417]; /* 's' */
    cpy_r_r14 = PyUnicode_Compare(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = cpy_r_r14 == -1;
    if (!cpy_r_r15) goto CPyL17;
    cpy_r_r16 = PyErr_Occurred();
    cpy_r_r17 = cpy_r_r16 != NULL;
    if (!cpy_r_r17) goto CPyL17;
    cpy_r_r18 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_type", 936, CPyStatic_checkstrformat___globals);
        goto CPyL25;
    }
CPyL17: ;
    cpy_r_r19 = cpy_r_r14 == 0;
    if (!cpy_r_r19) goto CPyL30;
    cpy_r_r20 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "checkers_for_regular_type_StringFormatterChecker_env", "self", 937, CPyStatic_checkstrformat___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r20);
CPyL19: ;
    cpy_r_r21 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expr;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "checkers_for_regular_type_StringFormatterChecker_env", "expr", 937, CPyStatic_checkstrformat___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r21);
CPyL20: ;
    cpy_r_r22 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_context;
    if (unlikely(cpy_r_r22 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'context' of 'checkers_for_regular_type_StringFormatterChecker_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r22);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_type", 937, CPyStatic_checkstrformat___globals);
        goto CPyL32;
    }
CPyL21: ;
    cpy_r_r23 = CPyDef_checkstrformat___StringFormatterChecker___check_s_special_cases(cpy_r_r20, cpy_r_r21, cpy_r_typ, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_type", 937, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    cpy_r_ret = cpy_r_r23;
CPyL23: ;
    return cpy_r_ret;
CPyL24: ;
    cpy_r_r24 = 2;
    return cpy_r_r24;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL24;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL24;
CPyL27: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    goto CPyL24;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r9);
    goto CPyL24;
CPyL30: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL23;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r20);
    goto CPyL24;
CPyL32: ;
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_r21);
    goto CPyL24;
}

PyObject *CPyPy_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    char retval = CPyDef_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj_____call__(arg___mypyc_self__, arg_typ);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "check_type", 933, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "__get__", -1, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_check_expr;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_type;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_expr", "check_expr_checkers_for_regular_type_StringFormatterChecker_obj", "__mypyc_env__", 940, CPyStatic_checkstrformat___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_expr;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_expr", "checkers_for_regular_type_StringFormatterChecker_env", "check_expr", -1, CPyStatic_checkstrformat___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_check_expr = cpy_r_r1;
    CPy_DECREF(cpy_r_check_expr);
    cpy_r_r2 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_expr", "checkers_for_regular_type_StringFormatterChecker_env", "self", 941, CPyStatic_checkstrformat___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expected_type;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_expr", "checkers_for_regular_type_StringFormatterChecker_env", "expected_type", 941, CPyStatic_checkstrformat___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_expr", 941, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_r3);
        goto CPyL11;
    }
    cpy_r_r5 = CPyDef_checkstrformat___StringFormatterChecker___accept(cpy_r_r2, cpy_r_expr, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 941, CPyStatic_checkstrformat___globals);
        goto CPyL10;
    }
    cpy_r_type = cpy_r_r5;
    cpy_r_r6 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type;
    if (unlikely(cpy_r_r6 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'check_type' of 'checkers_for_regular_type_StringFormatterChecker_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r6);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 942, CPyStatic_checkstrformat___globals);
        goto CPyL12;
    }
CPyL7: ;
    PyObject *cpy_r_r7[1] = {cpy_r_type};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 1, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 942, CPyStatic_checkstrformat___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL8: ;
    CPy_DECREF(cpy_r_type);
    return 1;
CPyL9: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_type);
    goto CPyL9;
CPyL13: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL8;
}

PyObject *CPyPy_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj_____call__(arg___mypyc_self__, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 940, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___StringFormatterChecker___checkers_for_regular_type(PyObject *cpy_r_self, PyObject *cpy_r_conv_type, PyObject *cpy_r_context, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    tuple_T2OO cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = CPyDef_checkstrformat___checkers_for_regular_type_StringFormatterChecker_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_regular_type", 923, CPyStatic_checkstrformat___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_regular_type", 923, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_conv_type);
    if (((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_conv_type != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_conv_type);
    }
    ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_conv_type = cpy_r_conv_type;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_regular_type", 923, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_context);
    if (((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_context != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_context);
    }
    ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_context = cpy_r_context;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_regular_type", 923, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_expr);
    if (((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expr != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expr);
    }
    ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expr = cpy_r_expr;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_regular_type", 923, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    cpy_r_r5 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "checkers_for_regular_type", "checkers_for_regular_type_StringFormatterChecker_env", "self", 929, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r5);
CPyL6: ;
    cpy_r_r6 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_conv_type;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "checkers_for_regular_type", "checkers_for_regular_type_StringFormatterChecker_env", "conv_type", 929, CPyStatic_checkstrformat___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_context;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "checkers_for_regular_type", "checkers_for_regular_type_StringFormatterChecker_env", "context", 929, CPyStatic_checkstrformat___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r7);
CPyL8: ;
    cpy_r_r8 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expr;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "checkers_for_regular_type", "checkers_for_regular_type_StringFormatterChecker_env", "expr", 929, CPyStatic_checkstrformat___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r8);
CPyL9: ;
    cpy_r_r9 = 2;
    cpy_r_r10 = CPyDef_checkstrformat___StringFormatterChecker___conversion_type(cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_regular_type", 929, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    if (((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expected_type != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expected_type);
    }
    ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expected_type = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_regular_type", 929, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    cpy_r_r12 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expected_type;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "checkers_for_regular_type", "checkers_for_regular_type_StringFormatterChecker_env", "expected_type", 930, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r12);
CPyL12: ;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_r12 == cpy_r_r13;
    CPy_DECREF(cpy_r_r12);
    if (cpy_r_r14) {
        goto CPyL28;
    } else
        goto CPyL14;
CPyL13: ;
    cpy_r_r15 = Py_None;
    CPy_INCREF(cpy_r_r15);
    return cpy_r_r15;
CPyL14: ;
    cpy_r_r16 = CPyDef_checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_obj();
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_regular_type", 933, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject *)cpy_r_r16)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject *)cpy_r_r16)->___mypyc_env__);
    }
    ((mypy___checkstrformat___check_type_checkers_for_regular_type_StringFormatterChecker_objObject *)cpy_r_r16)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_regular_type", 933, CPyStatic_checkstrformat___globals);
        goto CPyL29;
    }
    if (((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type);
    }
    ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type = cpy_r_r16;
    cpy_r_r18 = 1;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_regular_type", 933, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    cpy_r_r19 = CPyDef_checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_obj();
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_regular_type", 940, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject *)cpy_r_r19)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject *)cpy_r_r19)->___mypyc_env__);
    }
    ((mypy___checkstrformat___check_expr_checkers_for_regular_type_StringFormatterChecker_objObject *)cpy_r_r19)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_regular_type", 940, CPyStatic_checkstrformat___globals);
        goto CPyL30;
    }
    if (((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_expr != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_expr);
    }
    ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_expr = cpy_r_r19;
    cpy_r_r21 = 1;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_regular_type", 940, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    cpy_r_r22 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_expr;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "checkers_for_regular_type", "checkers_for_regular_type_StringFormatterChecker_env", "check_expr", 944, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r22);
CPyL21: ;
    cpy_r_r23 = ((mypy___checkstrformat___checkers_for_regular_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type;
    if (unlikely(cpy_r_r23 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'check_type' of 'checkers_for_regular_type_StringFormatterChecker_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r23);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_regular_type", 944, CPyStatic_checkstrformat___globals);
        goto CPyL31;
    }
CPyL22: ;
    cpy_r_r24.f0 = cpy_r_r22;
    cpy_r_r24.f1 = cpy_r_r23;
    CPy_INCREF(cpy_r_r24.f0);
    CPy_INCREF(cpy_r_r24.f1);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = PyTuple_New(2);
    if (unlikely(cpy_r_r25 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1635 = cpy_r_r24.f0;
    PyTuple_SET_ITEM(cpy_r_r25, 0, __tmp1635);
    PyObject *__tmp1636 = cpy_r_r24.f1;
    PyTuple_SET_ITEM(cpy_r_r25, 1, __tmp1636);
    return cpy_r_r25;
CPyL23: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    goto CPyL23;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL23;
CPyL28: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL13;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16);
    goto CPyL23;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r19);
    goto CPyL23;
CPyL31: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL23;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___checkers_for_regular_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"conv_type", "context", "expr", 0};
    static CPyArg_Parser parser = {"OOO:checkers_for_regular_type", kwlist, 0};
    PyObject *obj_conv_type;
    PyObject *obj_context;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_conv_type, &obj_context, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_conv_type;
    if (likely(PyUnicode_Check(obj_conv_type)))
        arg_conv_type = obj_conv_type;
    else {
        CPy_TypeError("str", obj_conv_type); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    PyObject *arg_expr;
    if (Py_TYPE(obj_expr) == CPyType_nodes___StrExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1637;
    if (Py_TYPE(obj_expr) == CPyType_nodes___BytesExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1637;
    CPy_TypeError("union[mypy.nodes.StrExpr, mypy.nodes.BytesExpr]", obj_expr); 
    goto fail;
__LL1637: ;
    PyObject *retval = CPyDef_checkstrformat___StringFormatterChecker___checkers_for_regular_type(arg_self, arg_conv_type, arg_context, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_regular_type", 923, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___StringFormatterChecker___check_s_special_cases(PyObject *cpy_r_self, PyObject *cpy_r_expr, PyObject *cpy_r_typ, PyObject *cpy_r_context) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyPtr cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    cpy_r_r0 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL8;
    cpy_r_r4 = CPyStatics[1179]; /* 'builtins.bytes' */
    cpy_r_r5 = CPyDef_checkstrformat___has_type_component(cpy_r_typ, cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_s_special_cases", 950, CPyStatic_checkstrformat___globals);
        goto CPyL17;
    }
    if (!cpy_r_r5) goto CPyL8;
    cpy_r_r6 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyStatics[1439]; /* ('If x = b\'abc\' then "%s" % x produces "b\'abc\'", not '
                                    '"abc". If this is desired behavior use "%r" % x. '
                                    'Otherwise, decode the bytes') */
    cpy_r_r8 = CPyStatic_errorcodes___STR_BYTES_PY3;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL18;
    } else
        goto CPyL6;
CPyL4: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STR_BYTES_PY3\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_s_special_cases", 955, CPyStatic_checkstrformat___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r10 = NULL;
    cpy_r_r11 = 2;
    cpy_r_r12 = NULL;
    cpy_r_r13 = CPyDef_messages___MessageBuilder___fail(cpy_r_r6, cpy_r_r7, cpy_r_context, cpy_r_r8, cpy_r_r10, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_s_special_cases", 951, CPyStatic_checkstrformat___globals);
        goto CPyL17;
    }
    return 0;
CPyL8: ;
    cpy_r_r14 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r15 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r16 = *(PyObject * *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 == cpy_r_r14;
    if (!cpy_r_r17) goto CPyL16;
    cpy_r_r18 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r19 = CPyDef_checkstrformat___has_type_component(cpy_r_typ, cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_s_special_cases", 960, CPyStatic_checkstrformat___globals);
        goto CPyL17;
    }
    if (!cpy_r_r19) goto CPyL16;
    cpy_r_r20 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[1440]; /* "On Python 3 b'%s' requires bytes, not string" */
    cpy_r_r22 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r22 == NULL)) {
        goto CPyL19;
    } else
        goto CPyL14;
CPyL12: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_s_special_cases", 964, CPyStatic_checkstrformat___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r24 = NULL;
    cpy_r_r25 = 2;
    cpy_r_r26 = NULL;
    cpy_r_r27 = CPyDef_messages___MessageBuilder___fail(cpy_r_r20, cpy_r_r21, cpy_r_context, cpy_r_r22, cpy_r_r24, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_s_special_cases", 961, CPyStatic_checkstrformat___globals);
        goto CPyL17;
    }
    return 0;
CPyL16: ;
    return 1;
CPyL17: ;
    cpy_r_r28 = 2;
    return cpy_r_r28;
CPyL18: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL4;
CPyL19: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL12;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___check_s_special_cases(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", "typ", "context", 0};
    static CPyArg_Parser parser = {"OOO:check_s_special_cases", kwlist, 0};
    PyObject *obj_expr;
    PyObject *obj_typ;
    PyObject *obj_context;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr, &obj_typ, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (Py_TYPE(obj_expr) == CPyType_nodes___StrExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1638;
    if (Py_TYPE(obj_expr) == CPyType_nodes___BytesExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1638;
    CPy_TypeError("union[mypy.nodes.StrExpr, mypy.nodes.BytesExpr]", obj_expr); 
    goto fail;
__LL1638: ;
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    char retval = CPyDef_checkstrformat___StringFormatterChecker___check_s_special_cases(arg_self, arg_expr, arg_typ, arg_context);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "check_s_special_cases", 946, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "__get__", -1, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_check_type;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_err_msg;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
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
    char cpy_r_r26;
    cpy_r_r0 = ((mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "check_type_checkers_for_c_type_StringFormatterChecker_obj", "__mypyc_env__", 979, CPyStatic_checkstrformat___globals);
        goto CPyL20;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "checkers_for_c_type_StringFormatterChecker_env", "check_type", -1, CPyStatic_checkstrformat___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_check_type = cpy_r_r1;
    CPy_DECREF(cpy_r_check_type);
    cpy_r_r2 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expected_type;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "checkers_for_c_type_StringFormatterChecker_env", "expected_type", 980, CPyStatic_checkstrformat___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    if (likely(cpy_r_r2 != Py_None))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_type", 980, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_r2);
        goto CPyL22;
    }
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    CPy_DECREF(cpy_r_r2);
    if (cpy_r_r5) {
        goto CPyL7;
    } else
        goto CPyL23;
CPyL5: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_type", 980, CPyStatic_checkstrformat___globals);
        goto CPyL20;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r7 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_format_expr;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "checkers_for_c_type_StringFormatterChecker_env", "format_expr", 981, CPyStatic_checkstrformat___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r7);
CPyL8: ;
    cpy_r_r8 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r9 = (CPyPtr)&((PyObject *)cpy_r_r7)->ob_type;
    cpy_r_r10 = *(PyObject * *)cpy_r_r9;
    CPy_DECREF(cpy_r_r7);
    cpy_r_r11 = cpy_r_r10 == cpy_r_r8;
    if (!cpy_r_r11) goto CPyL10;
    cpy_r_r12 = CPyStatics[1441]; /* '"%c" requires an integer in range(256) or a single byte' */
    CPy_INCREF(cpy_r_r12);
    cpy_r_err_msg = cpy_r_r12;
    goto CPyL11;
CPyL10: ;
    cpy_r_r13 = CPyStatics[1442]; /* '"%c" requires int or char' */
    CPy_INCREF(cpy_r_r13);
    cpy_r_err_msg = cpy_r_r13;
CPyL11: ;
    cpy_r_r14 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "checkers_for_c_type_StringFormatterChecker_env", "self", 985, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r14);
CPyL12: ;
    cpy_r_r15 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_r14)->_chk;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expected_type;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_type", "checkers_for_c_type_StringFormatterChecker_env", "expected_type", 987, CPyStatic_checkstrformat___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r16);
CPyL13: ;
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_type", 987, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_r16);
        goto CPyL25;
    }
    cpy_r_r18 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_context;
    if (unlikely(cpy_r_r18 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'context' of 'checkers_for_c_type_StringFormatterChecker_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r18);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_type", 988, CPyStatic_checkstrformat___globals);
        goto CPyL26;
    }
CPyL15: ;
    cpy_r_r19 = CPyStatics[789]; /* 'expression has type' */
    cpy_r_r20 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r20 == NULL)) {
        goto CPyL27;
    } else
        goto CPyL18;
CPyL16: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_type", 991, CPyStatic_checkstrformat___globals);
        goto CPyL20;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r22 = NULL;
    cpy_r_r23 = NULL;
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyDef_checker___TypeChecker___check_subtype(cpy_r_r15, cpy_r_type, cpy_r_r17, cpy_r_r18, cpy_r_err_msg, cpy_r_r19, cpy_r_r22, cpy_r_r23, cpy_r_r20, cpy_r_r24);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_err_msg);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_type", 985, CPyStatic_checkstrformat___globals);
        goto CPyL20;
    }
    return cpy_r_r25;
CPyL20: ;
    cpy_r_r26 = 2;
    return cpy_r_r26;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL20;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL20;
CPyL23: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_err_msg);
    goto CPyL20;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_err_msg);
    CPy_DecRef(cpy_r_r15);
    goto CPyL20;
CPyL26: ;
    CPy_DecRef(cpy_r_err_msg);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r17);
    goto CPyL20;
CPyL27: ;
    CPy_DecRef(cpy_r_err_msg);
    CPy_DecRef(cpy_r_r15);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    goto CPyL16;
}

PyObject *CPyPy_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_type)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type;
    if (likely(PyObject_TypeCheck(obj_type, CPyType_types___Type)))
        arg_type = obj_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_type); 
        goto fail;
    }
    char retval = CPyDef_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj_____call__(arg___mypyc_self__, arg_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "check_type", 979, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "__get__", -1, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_check_expr;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_type;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    int64_t cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
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
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int64_t cpy_r_r50;
    char cpy_r_r51;
    CPyTagged cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    cpy_r_r0 = ((mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_expr", "check_expr_checkers_for_c_type_StringFormatterChecker_obj", "__mypyc_env__", 994, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_expr;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_expr", "checkers_for_c_type_StringFormatterChecker_env", "check_expr", -1, CPyStatic_checkstrformat___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_check_expr = cpy_r_r1;
    CPy_DECREF(cpy_r_check_expr);
    cpy_r_r2 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_expr", "checkers_for_c_type_StringFormatterChecker_env", "self", 996, CPyStatic_checkstrformat___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expected_type;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_expr", "checkers_for_c_type_StringFormatterChecker_env", "expected_type", 996, CPyStatic_checkstrformat___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_expr", 996, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_r3);
        goto CPyL37;
    }
    cpy_r_r5 = CPyDef_checkstrformat___StringFormatterChecker___accept(cpy_r_r2, cpy_r_expr, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 996, CPyStatic_checkstrformat___globals);
        goto CPyL36;
    }
    cpy_r_type = cpy_r_r5;
    cpy_r_r6 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_expr", "checkers_for_c_type_StringFormatterChecker_env", "check_type", 999, CPyStatic_checkstrformat___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    PyObject *cpy_r_r7[1] = {cpy_r_type};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = _PyObject_Vectorcall(cpy_r_r6, cpy_r_r8, 1, 0);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 999, CPyStatic_checkstrformat___globals);
        goto CPyL38;
    }
    CPy_DECREF(cpy_r_type);
    if (unlikely(!PyBool_Check(cpy_r_r9))) {
        CPy_TypeError("bool", cpy_r_r9); cpy_r_r10 = 2;
    } else
        cpy_r_r10 = cpy_r_r9 == Py_True;
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 999, CPyStatic_checkstrformat___globals);
        goto CPyL36;
    }
    if (!cpy_r_r10) goto CPyL39;
    cpy_r_r11 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_format_expr;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_expr", "checkers_for_c_type_StringFormatterChecker_env", "format_expr", 1002, CPyStatic_checkstrformat___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r11);
CPyL11: ;
    cpy_r_r12 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_r11)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    CPy_DECREF(cpy_r_r11);
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (!cpy_r_r15) goto CPyL19;
    cpy_r_r16 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL19;
    if (likely(Py_TYPE(cpy_r_expr) == CPyType_nodes___BytesExpr))
        cpy_r_r20 = cpy_r_expr;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_expr", 1004, CPyStatic_checkstrformat___globals, "mypy.nodes.BytesExpr", cpy_r_expr);
        goto CPyL36;
    }
    cpy_r_r21 = ((mypy___nodes___BytesExprObject *)cpy_r_r20)->_value;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = CPyStr_Size_size_t(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 1004, CPyStatic_checkstrformat___globals);
        goto CPyL36;
    }
    cpy_r_r24 = cpy_r_r22 << 1;
    cpy_r_r25 = cpy_r_r24 != 2;
    if (!cpy_r_r25) goto CPyL19;
    cpy_r_r26 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_expr", "checkers_for_c_type_StringFormatterChecker_env", "self", 1006, CPyStatic_checkstrformat___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r26);
CPyL17: ;
    cpy_r_r27 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_r26)->_msg;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_context;
    if (unlikely(cpy_r_r28 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'context' of 'checkers_for_c_type_StringFormatterChecker_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r28);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 1006, CPyStatic_checkstrformat___globals);
        goto CPyL40;
    }
CPyL18: ;
    cpy_r_r29 = 2;
    cpy_r_r30 = CPyDef_messages___MessageBuilder___requires_int_or_single_byte(cpy_r_r27, cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 1006, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    } else
        goto CPyL34;
CPyL19: ;
    cpy_r_r31 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r32 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 == cpy_r_r31;
    if (!cpy_r_r34) goto CPyL21;
    cpy_r_r35 = cpy_r_r34;
    goto CPyL22;
CPyL21: ;
    cpy_r_r36 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    cpy_r_r35 = cpy_r_r39;
CPyL22: ;
    if (!cpy_r_r35) goto CPyL39;
    CPy_INCREF(cpy_r_expr);
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___StrExpr)
        cpy_r_r40 = cpy_r_expr;
    else {
        cpy_r_r40 = NULL;
    }
    if (cpy_r_r40 != NULL) goto __LL1639;
    if (Py_TYPE(cpy_r_expr) == CPyType_nodes___BytesExpr)
        cpy_r_r40 = cpy_r_expr;
    else {
        cpy_r_r40 = NULL;
    }
    if (cpy_r_r40 != NULL) goto __LL1639;
    CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_expr", 1007, CPyStatic_checkstrformat___globals, "union[mypy.nodes.StrExpr, mypy.nodes.BytesExpr]", cpy_r_expr);
    goto CPyL36;
__LL1639: ;
    cpy_r_r41 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r42 = (CPyPtr)&((PyObject *)cpy_r_r40)->ob_type;
    cpy_r_r43 = *(PyObject * *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 == cpy_r_r41;
    if (!cpy_r_r44) goto CPyL27;
    if (likely(Py_TYPE(cpy_r_r40) == CPyType_nodes___StrExpr))
        cpy_r_r45 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_expr", 1007, CPyStatic_checkstrformat___globals, "mypy.nodes.StrExpr", cpy_r_r40);
        goto CPyL36;
    }
    cpy_r_r46 = ((mypy___nodes___StrExprObject *)cpy_r_r45)->_value;
    CPy_INCREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46;
    goto CPyL29;
CPyL27: ;
    if (likely(Py_TYPE(cpy_r_r40) == CPyType_nodes___BytesExpr))
        cpy_r_r48 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "check_expr", 1007, CPyStatic_checkstrformat___globals, "mypy.nodes.BytesExpr", cpy_r_r40);
        goto CPyL36;
    }
    cpy_r_r49 = ((mypy___nodes___BytesExprObject *)cpy_r_r48)->_value;
    CPy_INCREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r47 = cpy_r_r49;
CPyL29: ;
    cpy_r_r50 = CPyStr_Size_size_t(cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 1007, CPyStatic_checkstrformat___globals);
        goto CPyL36;
    }
    cpy_r_r52 = cpy_r_r50 << 1;
    cpy_r_r53 = cpy_r_r52 != 2;
    if (!cpy_r_r53) goto CPyL39;
    cpy_r_r54 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "check_expr", "checkers_for_c_type_StringFormatterChecker_env", "self", 1008, CPyStatic_checkstrformat___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r54);
CPyL32: ;
    cpy_r_r55 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_r54)->_msg;
    CPy_INCREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r56 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_context;
    if (unlikely(cpy_r_r56 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'context' of 'checkers_for_c_type_StringFormatterChecker_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r56);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 1008, CPyStatic_checkstrformat___globals);
        goto CPyL41;
    }
CPyL33: ;
    cpy_r_r57 = 2;
    cpy_r_r58 = CPyDef_messages___MessageBuilder___requires_int_or_char(cpy_r_r55, cpy_r_r56, cpy_r_r57);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 1008, CPyStatic_checkstrformat___globals);
        goto CPyL35;
    }
CPyL34: ;
    return 1;
CPyL35: ;
    cpy_r_r59 = 2;
    return cpy_r_r59;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL35;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL35;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_type);
    goto CPyL35;
CPyL39: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL34;
CPyL40: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL35;
CPyL41: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL35;
}

PyObject *CPyPy_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"expr", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_expr)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj_____call__(arg___mypyc_self__, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "check_expr", 994, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___StringFormatterChecker___checkers_for_c_type(PyObject *cpy_r_self, PyObject *cpy_r_type, PyObject *cpy_r_context, PyObject *cpy_r_format_expr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    tuple_T2OO cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = CPyDef_checkstrformat___checkers_for_c_type_StringFormatterChecker_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_c_type", 969, CPyStatic_checkstrformat___globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_c_type", 969, CPyStatic_checkstrformat___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_context);
    if (((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_context != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_context);
    }
    ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_context = cpy_r_context;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_c_type", 969, CPyStatic_checkstrformat___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_format_expr);
    if (((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_format_expr != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_format_expr);
    }
    ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_format_expr = cpy_r_format_expr;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_c_type", 969, CPyStatic_checkstrformat___globals);
        goto CPyL22;
    }
    cpy_r_r4 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "checkers_for_c_type", "checkers_for_c_type_StringFormatterChecker_env", "self", 975, CPyStatic_checkstrformat___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_r5 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_context;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "checkers_for_c_type", "checkers_for_c_type_StringFormatterChecker_env", "context", 975, CPyStatic_checkstrformat___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r5);
CPyL6: ;
    cpy_r_r6 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_format_expr;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "checkers_for_c_type", "checkers_for_c_type_StringFormatterChecker_env", "format_expr", 975, CPyStatic_checkstrformat___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_checkstrformat___StringFormatterChecker___conversion_type(cpy_r_r4, cpy_r_type, cpy_r_r5, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_c_type", 975, CPyStatic_checkstrformat___globals);
        goto CPyL22;
    }
    if (((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expected_type != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expected_type);
    }
    ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expected_type = cpy_r_r8;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_c_type", 975, CPyStatic_checkstrformat___globals);
        goto CPyL22;
    }
    cpy_r_r10 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_expected_type;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "checkers_for_c_type", "checkers_for_c_type_StringFormatterChecker_env", "expected_type", 976, CPyStatic_checkstrformat___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r10);
CPyL10: ;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_r10 == cpy_r_r11;
    CPy_DECREF(cpy_r_r10);
    if (cpy_r_r12) {
        goto CPyL25;
    } else
        goto CPyL12;
CPyL11: ;
    cpy_r_r13 = Py_None;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL12: ;
    cpy_r_r14 = CPyDef_checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_obj();
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_c_type", 979, CPyStatic_checkstrformat___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject *)cpy_r_r14)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject *)cpy_r_r14)->___mypyc_env__);
    }
    ((mypy___checkstrformat___check_type_checkers_for_c_type_StringFormatterChecker_objObject *)cpy_r_r14)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_c_type", 979, CPyStatic_checkstrformat___globals);
        goto CPyL26;
    }
    if (((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type);
    }
    ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type = cpy_r_r14;
    cpy_r_r16 = 1;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_c_type", 979, CPyStatic_checkstrformat___globals);
        goto CPyL22;
    }
    cpy_r_r17 = CPyDef_checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_obj();
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_c_type", 994, CPyStatic_checkstrformat___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject *)cpy_r_r17)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject *)cpy_r_r17)->___mypyc_env__);
    }
    ((mypy___checkstrformat___check_expr_checkers_for_c_type_StringFormatterChecker_objObject *)cpy_r_r17)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r18 = 1;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_c_type", 994, CPyStatic_checkstrformat___globals);
        goto CPyL27;
    }
    if (((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_expr != NULL) {
        CPy_DECREF(((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_expr);
    }
    ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_expr = cpy_r_r17;
    cpy_r_r19 = 1;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_c_type", 994, CPyStatic_checkstrformat___globals);
        goto CPyL22;
    }
    cpy_r_r20 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_expr;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "checkers_for_c_type", "checkers_for_c_type_StringFormatterChecker_env", "check_expr", 1010, CPyStatic_checkstrformat___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r20);
CPyL19: ;
    cpy_r_r21 = ((mypy___checkstrformat___checkers_for_c_type_StringFormatterChecker_envObject *)cpy_r_r0)->_check_type;
    if (unlikely(cpy_r_r21 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'check_type' of 'checkers_for_c_type_StringFormatterChecker_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r21);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_c_type", 1010, CPyStatic_checkstrformat___globals);
        goto CPyL28;
    }
CPyL20: ;
    cpy_r_r22.f0 = cpy_r_r20;
    cpy_r_r22.f1 = cpy_r_r21;
    CPy_INCREF(cpy_r_r22.f0);
    CPy_INCREF(cpy_r_r22.f1);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = PyTuple_New(2);
    if (unlikely(cpy_r_r23 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1640 = cpy_r_r22.f0;
    PyTuple_SET_ITEM(cpy_r_r23, 0, __tmp1640);
    PyObject *__tmp1641 = cpy_r_r22.f1;
    PyTuple_SET_ITEM(cpy_r_r23, 1, __tmp1641);
    return cpy_r_r23;
CPyL21: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL22: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL21;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r5);
    goto CPyL21;
CPyL25: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL11;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r14);
    goto CPyL21;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r17);
    goto CPyL21;
CPyL28: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL21;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___checkers_for_c_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"type", "context", "format_expr", 0};
    static CPyArg_Parser parser = {"OOO:checkers_for_c_type", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_context;
    PyObject *obj_format_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_context, &obj_format_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_type;
    if (likely(PyUnicode_Check(obj_type)))
        arg_type = obj_type;
    else {
        CPy_TypeError("str", obj_type); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    PyObject *arg_format_expr;
    if (Py_TYPE(obj_format_expr) == CPyType_nodes___StrExpr)
        arg_format_expr = obj_format_expr;
    else {
        arg_format_expr = NULL;
    }
    if (arg_format_expr != NULL) goto __LL1642;
    if (Py_TYPE(obj_format_expr) == CPyType_nodes___BytesExpr)
        arg_format_expr = obj_format_expr;
    else {
        arg_format_expr = NULL;
    }
    if (arg_format_expr != NULL) goto __LL1642;
    CPy_TypeError("union[mypy.nodes.StrExpr, mypy.nodes.BytesExpr]", obj_format_expr); 
    goto fail;
__LL1642: ;
    PyObject *retval = CPyDef_checkstrformat___StringFormatterChecker___checkers_for_c_type(arg_self, arg_type, arg_context, arg_format_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "checkers_for_c_type", 969, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___StringFormatterChecker___conversion_type(PyObject *cpy_r_self, PyObject *cpy_r_p, PyObject *cpy_r_context, PyObject *cpy_r_expr, char cpy_r_format_call) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_NUMERIC_TYPES;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_INT_TYPES;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    tuple_T2II cpy_r_r19;
    tuple_T2II cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    CPyPtr cpy_r_r90;
    CPyPtr cpy_r_r91;
    PyObject *cpy_r_numeric_types;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyPtr cpy_r_r97;
    CPyPtr cpy_r_r98;
    CPyPtr cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    int32_t cpy_r_r102;
    char cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    CPyTagged cpy_r_r113;
    CPyTagged cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    int32_t cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    CPyPtr cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    CPyPtr cpy_r_r133;
    CPyPtr cpy_r_r134;
    CPyPtr cpy_r_r135;
    CPyTagged cpy_r_r136;
    CPyTagged cpy_r_r137;
    char cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    CPyPtr cpy_r_r146;
    CPyPtr cpy_r_r147;
    CPyPtr cpy_r_r148;
    CPyTagged cpy_r_r149;
    CPyTagged cpy_r_r150;
    char cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    if (cpy_r_format_call != 2) goto CPyL2;
    cpy_r_format_call = 0;
CPyL2: ;
    if (!cpy_r_format_call) goto CPyL7;
    cpy_r_r0 = CPyStatic_checkstrformat___NUMERIC_TYPES_NEW;
    if (likely(cpy_r_r0 != NULL)) goto CPyL6;
    PyErr_SetString(PyExc_NameError, "value for final name \"NUMERIC_TYPES_NEW\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1023, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL6: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r0;
    goto CPyL11;
CPyL7: ;
    cpy_r_r3 = CPyStatic_checkstrformat___NUMERIC_TYPES_OLD;
    if (likely(cpy_r_r3 != NULL)) goto CPyL10;
    PyErr_SetString(PyExc_NameError, "value for final name \"NUMERIC_TYPES_OLD\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1023, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL10: ;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r2 = cpy_r_r3;
CPyL11: ;
    cpy_r_NUMERIC_TYPES = cpy_r_r2;
    if (!cpy_r_format_call) goto CPyL16;
    cpy_r_r5 = CPyStatic_checkstrformat___REQUIRE_INT_NEW;
    if (unlikely(cpy_r_r5 == NULL)) {
        goto CPyL101;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"REQUIRE_INT_NEW\" was not set");
    cpy_r_r6 = 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1024, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL15: ;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r5;
    goto CPyL20;
CPyL16: ;
    cpy_r_r8 = CPyStatic_checkstrformat___REQUIRE_INT_OLD;
    if (unlikely(cpy_r_r8 == NULL)) {
        goto CPyL102;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"REQUIRE_INT_OLD\" was not set");
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1024, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL19: ;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r7 = cpy_r_r8;
CPyL20: ;
    cpy_r_INT_TYPES = cpy_r_r7;
    cpy_r_r10 = CPyStatics[1443]; /* 'b' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_p, cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL23;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL23;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1025, CPyStatic_checkstrformat___globals);
        goto CPyL103;
    }
CPyL23: ;
    cpy_r_r16 = cpy_r_r11 == 0;
    if (!cpy_r_r16) goto CPyL42;
    if (cpy_r_format_call) {
        goto CPyL42;
    } else
        goto CPyL104;
CPyL25: ;
    cpy_r_r17 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    cpy_r_r18 = ((mypy___checker___TypeCheckerObject *)cpy_r_r17)->_options;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "conversion_type", "TypeChecker", "options", 1026, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
CPyL26: ;
    cpy_r_r19 = ((mypy___options___OptionsObject *)cpy_r_r18)->_python_version;
    CPyTagged_INCREF(cpy_r_r19.f0);
    CPyTagged_INCREF(cpy_r_r19.f1);
    cpy_r_r20.f0 = 6;
    cpy_r_r20.f1 = 10;
    CPyTagged_INCREF(cpy_r_r20.f0);
    CPyTagged_INCREF(cpy_r_r20.f1);
    cpy_r_r21 = PyTuple_New(2);
    if (unlikely(cpy_r_r21 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1643 = CPyTagged_StealAsObject(cpy_r_r19.f0);
    PyTuple_SET_ITEM(cpy_r_r21, 0, __tmp1643);
    PyObject *__tmp1644 = CPyTagged_StealAsObject(cpy_r_r19.f1);
    PyTuple_SET_ITEM(cpy_r_r21, 1, __tmp1644);
    cpy_r_r22 = PyTuple_New(2);
    if (unlikely(cpy_r_r22 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1645 = CPyTagged_StealAsObject(cpy_r_r20.f0);
    PyTuple_SET_ITEM(cpy_r_r22, 0, __tmp1645);
    PyObject *__tmp1646 = CPyTagged_StealAsObject(cpy_r_r20.f1);
    PyTuple_SET_ITEM(cpy_r_r22, 1, __tmp1646);
    cpy_r_r23 = PyObject_RichCompare(cpy_r_r21, cpy_r_r22, 0);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1026, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    if (unlikely(!PyBool_Check(cpy_r_r23))) {
        CPy_TypeError("bool", cpy_r_r23); cpy_r_r24 = 2;
    } else
        cpy_r_r24 = cpy_r_r23 == Py_True;
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1026, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    if (!cpy_r_r24) goto CPyL34;
    cpy_r_r25 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPyStatics[1444]; /* ('Format character "b" is only supported in Python 3.5 '
                                     'and later') */
    cpy_r_r27 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r27 == NULL)) {
        goto CPyL105;
    } else
        goto CPyL32;
CPyL30: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r28 = 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1030, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r29 = NULL;
    cpy_r_r30 = 2;
    cpy_r_r31 = NULL;
    cpy_r_r32 = CPyDef_messages___MessageBuilder___fail(cpy_r_r25, cpy_r_r26, cpy_r_context, cpy_r_r27, cpy_r_r29, cpy_r_r30, cpy_r_r31);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1027, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    cpy_r_r33 = Py_None;
    CPy_INCREF(cpy_r_r33);
    return cpy_r_r33;
CPyL34: ;
    cpy_r_r34 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r35 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r36 = *(PyObject * *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 == cpy_r_r34;
    if (cpy_r_r37) goto CPyL40;
    cpy_r_r38 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[1445]; /* ('Format character "b" is only supported on bytes '
                                     'patterns') */
    cpy_r_r40 = CPyStatic_errorcodes___STRING_FORMATTING;
    if (unlikely(cpy_r_r40 == NULL)) {
        goto CPyL106;
    } else
        goto CPyL38;
CPyL36: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"STRING_FORMATTING\" was not set");
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1037, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r42 = NULL;
    cpy_r_r43 = 2;
    cpy_r_r44 = NULL;
    cpy_r_r45 = CPyDef_messages___MessageBuilder___fail(cpy_r_r38, cpy_r_r39, cpy_r_context, cpy_r_r40, cpy_r_r42, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1034, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    cpy_r_r46 = Py_None;
    CPy_INCREF(cpy_r_r46);
    return cpy_r_r46;
CPyL40: ;
    cpy_r_r47 = CPyStatics[1179]; /* 'builtins.bytes' */
    cpy_r_r48 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_self, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1040, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    return cpy_r_r48;
CPyL42: ;
    cpy_r_r49 = CPyStatics[1446]; /* 'a' */
    cpy_r_r50 = PyUnicode_Compare(cpy_r_p, cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 == -1;
    if (!cpy_r_r51) goto CPyL45;
    cpy_r_r52 = PyErr_Occurred();
    cpy_r_r53 = cpy_r_r52 != NULL;
    if (!cpy_r_r53) goto CPyL45;
    cpy_r_r54 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1041, CPyStatic_checkstrformat___globals);
        goto CPyL103;
    }
CPyL45: ;
    cpy_r_r55 = cpy_r_r50 == 0;
    if (cpy_r_r55) {
        goto CPyL107;
    } else
        goto CPyL48;
CPyL46: ;
    cpy_r_r56 = NULL;
    cpy_r_r57 = NULL;
    cpy_r_r58 = CPY_INT_TAG;
    cpy_r_r59 = CPY_INT_TAG;
    cpy_r_r60 = CPyDef_types___AnyType(12, cpy_r_r56, cpy_r_r57, cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1043, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    return cpy_r_r60;
CPyL48: ;
    cpy_r_r61 = CPyStatics[1417]; /* 's' */
    cpy_r_r62 = PyUnicode_Compare(cpy_r_p, cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 == -1;
    if (!cpy_r_r63) goto CPyL51;
    cpy_r_r64 = PyErr_Occurred();
    cpy_r_r65 = cpy_r_r64 != NULL;
    if (!cpy_r_r65) goto CPyL51;
    cpy_r_r66 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", -1, CPyStatic_checkstrformat___globals);
        goto CPyL103;
    }
CPyL51: ;
    cpy_r_r67 = cpy_r_r62 == 0;
    if (!cpy_r_r67) goto CPyL53;
    cpy_r_r68 = cpy_r_r67;
    goto CPyL57;
CPyL53: ;
    cpy_r_r69 = CPyStatics[1447]; /* 'r' */
    cpy_r_r70 = PyUnicode_Compare(cpy_r_p, cpy_r_r69);
    cpy_r_r71 = cpy_r_r70 == -1;
    if (!cpy_r_r71) goto CPyL56;
    cpy_r_r72 = PyErr_Occurred();
    cpy_r_r73 = cpy_r_r72 != NULL;
    if (!cpy_r_r73) goto CPyL56;
    cpy_r_r74 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", -1, CPyStatic_checkstrformat___globals);
        goto CPyL103;
    }
CPyL56: ;
    cpy_r_r75 = cpy_r_r70 == 0;
    cpy_r_r68 = cpy_r_r75;
CPyL57: ;
    if (cpy_r_r68) {
        goto CPyL108;
    } else
        goto CPyL60;
CPyL58: ;
    cpy_r_r76 = NULL;
    cpy_r_r77 = NULL;
    cpy_r_r78 = CPY_INT_TAG;
    cpy_r_r79 = CPY_INT_TAG;
    cpy_r_r80 = CPyDef_types___AnyType(12, cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1045, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    return cpy_r_r80;
CPyL60: ;
    cpy_r_r81 = PySet_Contains(cpy_r_NUMERIC_TYPES, cpy_r_p);
    CPy_DECREF(cpy_r_NUMERIC_TYPES);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1046, CPyStatic_checkstrformat___globals);
        goto CPyL109;
    }
    cpy_r_r83 = cpy_r_r81;
    if (!cpy_r_r83) goto CPyL110;
    cpy_r_r84 = PySet_Contains(cpy_r_INT_TYPES, cpy_r_p);
    CPy_DECREF(cpy_r_INT_TYPES);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1047, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    cpy_r_r86 = cpy_r_r84;
    if (!cpy_r_r86) goto CPyL67;
    cpy_r_r87 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r88 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_self, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1048, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    cpy_r_r89 = PyList_New(1);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1048, CPyStatic_checkstrformat___globals);
        goto CPyL111;
    }
    cpy_r_r90 = (CPyPtr)&((PyListObject *)cpy_r_r89)->ob_item;
    cpy_r_r91 = *(CPyPtr *)cpy_r_r90;
    *(PyObject * *)cpy_r_r91 = cpy_r_r88;
    cpy_r_numeric_types = cpy_r_r89;
    goto CPyL80;
CPyL67: ;
    cpy_r_r92 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r93 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_self, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1051, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    cpy_r_r94 = CPyStatics[1180]; /* 'builtins.float' */
    cpy_r_r95 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_self, cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1052, CPyStatic_checkstrformat___globals);
        goto CPyL112;
    }
    cpy_r_r96 = PyList_New(2);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1050, CPyStatic_checkstrformat___globals);
        goto CPyL113;
    }
    cpy_r_r97 = (CPyPtr)&((PyListObject *)cpy_r_r96)->ob_item;
    cpy_r_r98 = *(CPyPtr *)cpy_r_r97;
    *(PyObject * *)cpy_r_r98 = cpy_r_r93;
    cpy_r_r99 = cpy_r_r98 + 8;
    *(PyObject * *)cpy_r_r99 = cpy_r_r95;
    cpy_r_numeric_types = cpy_r_r96;
    if (cpy_r_format_call) goto CPyL80;
    cpy_r_r100 = CPyStatic_checkstrformat___FLOAT_TYPES;
    if (unlikely(cpy_r_r100 == NULL)) {
        goto CPyL114;
    } else
        goto CPyL74;
CPyL72: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"FLOAT_TYPES\" was not set");
    cpy_r_r101 = 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1055, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r102 = PySet_Contains(cpy_r_r100, cpy_r_p);
    cpy_r_r103 = cpy_r_r102 >= 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1055, CPyStatic_checkstrformat___globals);
        goto CPyL115;
    }
    cpy_r_r104 = cpy_r_r102;
    if (!cpy_r_r104) goto CPyL78;
    cpy_r_r105 = CPyStatics[1448]; /* 'typing.SupportsFloat' */
    cpy_r_r106 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_self, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1056, CPyStatic_checkstrformat___globals);
        goto CPyL115;
    }
    cpy_r_r107 = PyList_Append(cpy_r_numeric_types, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1056, CPyStatic_checkstrformat___globals);
        goto CPyL115;
    } else
        goto CPyL80;
CPyL78: ;
    cpy_r_r109 = CPyStatics[1449]; /* 'typing.SupportsInt' */
    cpy_r_r110 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_self, cpy_r_r109);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1058, CPyStatic_checkstrformat___globals);
        goto CPyL115;
    }
    cpy_r_r111 = PyList_Append(cpy_r_numeric_types, cpy_r_r110);
    CPy_DECREF(cpy_r_r110);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1058, CPyStatic_checkstrformat___globals);
        goto CPyL115;
    }
CPyL80: ;
    cpy_r_r113 = CPY_INT_TAG;
    cpy_r_r114 = CPY_INT_TAG;
    cpy_r_r115 = CPyDef_types___UnionType___make_union(cpy_r_numeric_types, cpy_r_r113, cpy_r_r114);
    CPy_DECREF(cpy_r_numeric_types);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1059, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r115, CPyType_types___ProperType)))
        cpy_r_r116 = cpy_r_r115;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "conversion_type", 1059, CPyStatic_checkstrformat___globals, "mypy.types.ProperType", cpy_r_r115);
        goto CPyL100;
    }
    return cpy_r_r116;
CPyL83: ;
    cpy_r_r117 = CPyStatics[1416]; /* 'c' */
    cpy_r_r118 = PyUnicode_Compare(cpy_r_p, cpy_r_r117);
    cpy_r_r119 = cpy_r_r118 == -1;
    if (!cpy_r_r119) goto CPyL86;
    cpy_r_r120 = PyErr_Occurred();
    cpy_r_r121 = cpy_r_r120 != NULL;
    if (!cpy_r_r121) goto CPyL86;
    cpy_r_r122 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1060, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
CPyL86: ;
    cpy_r_r123 = cpy_r_r118 == 0;
    if (!cpy_r_r123) goto CPyL98;
    cpy_r_r124 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r125 = (CPyPtr)&((PyObject *)cpy_r_expr)->ob_type;
    cpy_r_r126 = *(PyObject * *)cpy_r_r125;
    cpy_r_r127 = cpy_r_r126 == cpy_r_r124;
    if (!cpy_r_r127) goto CPyL93;
    cpy_r_r128 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r129 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_self, cpy_r_r128);
    if (unlikely(cpy_r_r129 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1063, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    cpy_r_r130 = CPyStatics[1179]; /* 'builtins.bytes' */
    cpy_r_r131 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_self, cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1063, CPyStatic_checkstrformat___globals);
        goto CPyL116;
    }
    cpy_r_r132 = PyList_New(2);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1063, CPyStatic_checkstrformat___globals);
        goto CPyL117;
    }
    cpy_r_r133 = (CPyPtr)&((PyListObject *)cpy_r_r132)->ob_item;
    cpy_r_r134 = *(CPyPtr *)cpy_r_r133;
    *(PyObject * *)cpy_r_r134 = cpy_r_r129;
    cpy_r_r135 = cpy_r_r134 + 8;
    *(PyObject * *)cpy_r_r135 = cpy_r_r131;
    cpy_r_r136 = CPY_INT_TAG;
    cpy_r_r137 = CPY_INT_TAG;
    cpy_r_r138 = 2;
    cpy_r_r139 = 2;
    cpy_r_r140 = CPyDef_types___UnionType(cpy_r_r132, cpy_r_r136, cpy_r_r137, cpy_r_r138, cpy_r_r139);
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1062, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    return cpy_r_r140;
CPyL93: ;
    cpy_r_r141 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r142 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_self, cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1067, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    cpy_r_r143 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r144 = CPyDef_checkstrformat___StringFormatterChecker___named_type(cpy_r_self, cpy_r_r143);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1067, CPyStatic_checkstrformat___globals);
        goto CPyL118;
    }
    cpy_r_r145 = PyList_New(2);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1067, CPyStatic_checkstrformat___globals);
        goto CPyL119;
    }
    cpy_r_r146 = (CPyPtr)&((PyListObject *)cpy_r_r145)->ob_item;
    cpy_r_r147 = *(CPyPtr *)cpy_r_r146;
    *(PyObject * *)cpy_r_r147 = cpy_r_r142;
    cpy_r_r148 = cpy_r_r147 + 8;
    *(PyObject * *)cpy_r_r148 = cpy_r_r144;
    cpy_r_r149 = CPY_INT_TAG;
    cpy_r_r150 = CPY_INT_TAG;
    cpy_r_r151 = 2;
    cpy_r_r152 = 2;
    cpy_r_r153 = CPyDef_types___UnionType(cpy_r_r145, cpy_r_r149, cpy_r_r150, cpy_r_r151, cpy_r_r152);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1066, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    return cpy_r_r153;
CPyL98: ;
    cpy_r_r154 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_msg;
    CPy_INCREF(cpy_r_r154);
    cpy_r_r155 = CPyDef_messages___MessageBuilder___unsupported_placeholder(cpy_r_r154, cpy_r_p, cpy_r_context);
    CPy_DECREF(cpy_r_r154);
    if (unlikely(cpy_r_r155 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1070, CPyStatic_checkstrformat___globals);
        goto CPyL100;
    }
    cpy_r_r156 = Py_None;
    CPy_INCREF(cpy_r_r156);
    return cpy_r_r156;
CPyL100: ;
    cpy_r_r157 = NULL;
    return cpy_r_r157;
CPyL101: ;
    CPy_DecRef(cpy_r_NUMERIC_TYPES);
    goto CPyL13;
CPyL102: ;
    CPy_DecRef(cpy_r_NUMERIC_TYPES);
    goto CPyL17;
CPyL103: ;
    CPy_DecRef(cpy_r_NUMERIC_TYPES);
    CPy_DecRef(cpy_r_INT_TYPES);
    goto CPyL100;
CPyL104: ;
    CPy_DECREF(cpy_r_NUMERIC_TYPES);
    CPy_DECREF(cpy_r_INT_TYPES);
    goto CPyL25;
CPyL105: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL30;
CPyL106: ;
    CPy_DecRef(cpy_r_r38);
    goto CPyL36;
CPyL107: ;
    CPy_DECREF(cpy_r_NUMERIC_TYPES);
    CPy_DECREF(cpy_r_INT_TYPES);
    goto CPyL46;
CPyL108: ;
    CPy_DECREF(cpy_r_NUMERIC_TYPES);
    CPy_DECREF(cpy_r_INT_TYPES);
    goto CPyL58;
CPyL109: ;
    CPy_DecRef(cpy_r_INT_TYPES);
    goto CPyL100;
CPyL110: ;
    CPy_DECREF(cpy_r_INT_TYPES);
    goto CPyL83;
CPyL111: ;
    CPy_DecRef(cpy_r_r88);
    goto CPyL100;
CPyL112: ;
    CPy_DecRef(cpy_r_r93);
    goto CPyL100;
CPyL113: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r95);
    goto CPyL100;
CPyL114: ;
    CPy_DecRef(cpy_r_numeric_types);
    goto CPyL72;
CPyL115: ;
    CPy_DecRef(cpy_r_numeric_types);
    goto CPyL100;
CPyL116: ;
    CPy_DecRef(cpy_r_r129);
    goto CPyL100;
CPyL117: ;
    CPy_DecRef(cpy_r_r129);
    CPy_DecRef(cpy_r_r131);
    goto CPyL100;
CPyL118: ;
    CPy_DecRef(cpy_r_r142);
    goto CPyL100;
CPyL119: ;
    CPy_DecRef(cpy_r_r142);
    CPy_DecRef(cpy_r_r144);
    goto CPyL100;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___conversion_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"p", "context", "expr", "format_call", 0};
    static CPyArg_Parser parser = {"OOO|O:conversion_type", kwlist, 0};
    PyObject *obj_p;
    PyObject *obj_context;
    PyObject *obj_expr;
    PyObject *obj_format_call = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_p, &obj_context, &obj_expr, &obj_format_call)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_p;
    if (likely(PyUnicode_Check(obj_p)))
        arg_p = obj_p;
    else {
        CPy_TypeError("str", obj_p); 
        goto fail;
    }
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    PyObject *arg_expr;
    if (Py_TYPE(obj_expr) == CPyType_nodes___StrExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1647;
    if (Py_TYPE(obj_expr) == CPyType_nodes___BytesExpr)
        arg_expr = obj_expr;
    else {
        arg_expr = NULL;
    }
    if (arg_expr != NULL) goto __LL1647;
    CPy_TypeError("union[mypy.nodes.StrExpr, mypy.nodes.BytesExpr]", obj_expr); 
    goto fail;
__LL1647: ;
    char arg_format_call;
    if (obj_format_call == NULL) {
        arg_format_call = 2;
    } else if (unlikely(!PyBool_Check(obj_format_call))) {
        CPy_TypeError("bool", obj_format_call); goto fail;
    } else
        arg_format_call = obj_format_call == Py_True;
    PyObject *retval = CPyDef_checkstrformat___StringFormatterChecker___conversion_type(arg_self, arg_p, arg_context, arg_expr, arg_format_call);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "conversion_type", 1012, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___StringFormatterChecker___named_type(PyObject *cpy_r_self, PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_checker___TypeChecker___named_type(cpy_r_r0, cpy_r_name);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "named_type", 1081, CPyStatic_checkstrformat___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___named_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:named_type", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_checkstrformat___StringFormatterChecker___named_type(arg_self, arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "named_type", 1077, CPyStatic_checkstrformat___globals);
    return NULL;
}

PyObject *CPyDef_checkstrformat___StringFormatterChecker___accept(PyObject *cpy_r_self, PyObject *cpy_r_expr, PyObject *cpy_r_context) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    if (cpy_r_context != NULL) goto CPyL6;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_context = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = ((mypy___checkstrformat___StringFormatterCheckerObject *)cpy_r_self)->_chk;
    cpy_r_r2 = ((mypy___checker___TypeCheckerObject *)cpy_r_r1)->_expr_checker;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypy/checkstrformat.py", "accept", "TypeChecker", "expr_checker", 1085, CPyStatic_checkstrformat___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = 2;
    cpy_r_r4 = 2;
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_checkexpr___ExpressionChecker___accept(cpy_r_r2, cpy_r_expr, cpy_r_context, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_context);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "accept", 1085, CPyStatic_checkstrformat___globals);
        goto CPyL5;
    }
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL6: ;
    CPy_INCREF(cpy_r_context);
    goto CPyL2;
CPyL7: ;
    CPy_DecRef(cpy_r_context);
    goto CPyL5;
}

PyObject *CPyPy_checkstrformat___StringFormatterChecker___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", "context", 0};
    static CPyArg_Parser parser = {"O|O:accept", kwlist, 0};
    PyObject *obj_expr;
    PyObject *obj_context = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_expr, &obj_context)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_checkstrformat___StringFormatterChecker))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.checkstrformat.StringFormatterChecker", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    PyObject *arg_context;
    if (obj_context == NULL) {
        arg_context = NULL;
        goto __LL1648;
    }
    if (PyObject_TypeCheck(obj_context, CPyType_types___Type))
        arg_context = obj_context;
    else {
        arg_context = NULL;
    }
    if (arg_context != NULL) goto __LL1648;
    if (obj_context == Py_None)
        arg_context = obj_context;
    else {
        arg_context = NULL;
    }
    if (arg_context != NULL) goto __LL1648;
    CPy_TypeError("mypy.types.Type or None", obj_context); 
    goto fail;
__LL1648: ;
    PyObject *retval = CPyDef_checkstrformat___StringFormatterChecker___accept(arg_self, arg_expr, arg_context);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "accept", 1083, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat___has_type_component(PyObject *cpy_r_typ, PyObject *cpy_r_fullname) {
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
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
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
    PyObject *cpy_r_v;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
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
    PyObject *cpy_r_t;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    cpy_r_r0 = CPyDef_types___get_proper_type(cpy_r_typ);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "has_type_component", 1096, CPyStatic_checkstrformat___globals);
        goto CPyL33;
    }
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "has_type_component", 1096, CPyStatic_checkstrformat___globals, "mypy.types.ProperType", cpy_r_r0);
        goto CPyL33;
    }
    cpy_r_typ = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_types___Instance;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL6;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r6 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "has_type_component", 1098, CPyStatic_checkstrformat___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL34;
    }
    cpy_r_r7 = ((mypy___types___InstanceObject *)cpy_r_r6)->_type;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r8 = CPyDef_nodes___TypeInfo___has_base(cpy_r_r7, cpy_r_fullname);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "has_type_component", 1098, CPyStatic_checkstrformat___globals);
        goto CPyL33;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (!cpy_r_r12) goto CPyL21;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r13 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "has_type_component", 1100, CPyStatic_checkstrformat___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL34;
    }
    cpy_r_r14 = ((mypy___types___TypeVarTypeObject *)cpy_r_r13)->_upper_bound;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyDef_checkstrformat___has_type_component(cpy_r_r14, cpy_r_fullname);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "has_type_component", 1100, CPyStatic_checkstrformat___globals);
        goto CPyL34;
    }
    if (cpy_r_r15) {
        goto CPyL35;
    } else
        goto CPyL11;
CPyL10: ;
    cpy_r_r16 = cpy_r_r15;
    goto CPyL20;
CPyL11: ;
    cpy_r_r17 = 0;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___TypeVarType))
        cpy_r_r18 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "has_type_component", 1101, CPyStatic_checkstrformat___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL34;
    }
    cpy_r_r19 = ((mypy___types___TypeVarTypeObject *)cpy_r_r18)->_values;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r20 = 0;
CPyL13: ;
    cpy_r_r21 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r22 = *(int64_t *)cpy_r_r21;
    cpy_r_r23 = cpy_r_r22 << 1;
    cpy_r_r24 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_r23;
    if (!cpy_r_r24) goto CPyL36;
    cpy_r_r25 = CPyList_GetItemUnsafe(cpy_r_r19, cpy_r_r20);
    if (likely(PyObject_TypeCheck(cpy_r_r25, CPyType_types___Type)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "has_type_component", 1100, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_r25);
        goto CPyL37;
    }
    cpy_r_v = cpy_r_r26;
    cpy_r_r27 = CPyDef_checkstrformat___has_type_component(cpy_r_v, cpy_r_fullname);
    CPy_DECREF(cpy_r_v);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "has_type_component", 1101, CPyStatic_checkstrformat___globals);
        goto CPyL37;
    }
    if (cpy_r_r27) {
        goto CPyL38;
    } else
        goto CPyL18;
CPyL17: ;
    cpy_r_r17 = 1;
    goto CPyL19;
CPyL18: ;
    cpy_r_r28 = cpy_r_r20 + 2;
    cpy_r_r20 = cpy_r_r28;
    goto CPyL13;
CPyL19: ;
    cpy_r_r16 = cpy_r_r17;
CPyL20: ;
    return cpy_r_r16;
CPyL21: ;
    cpy_r_r29 = (PyObject *)CPyType_types___UnionType;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    if (!cpy_r_r32) goto CPyL39;
    cpy_r_r33 = 0;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r34 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "has_type_component", 1104, CPyStatic_checkstrformat___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL33;
    }
    cpy_r_r35 = CPyDef_types___UnionType___relevant_items(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "has_type_component", 1104, CPyStatic_checkstrformat___globals);
        goto CPyL33;
    }
    cpy_r_r36 = 0;
CPyL25: ;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r35)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = (Py_ssize_t)cpy_r_r36 < (Py_ssize_t)cpy_r_r39;
    if (!cpy_r_r40) goto CPyL40;
    cpy_r_r41 = CPyList_GetItemUnsafe(cpy_r_r35, cpy_r_r36);
    if (likely(PyObject_TypeCheck(cpy_r_r41, CPyType_types___Type)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/checkstrformat.py", "has_type_component", 1104, CPyStatic_checkstrformat___globals, "mypy.types.Type", cpy_r_r41);
        goto CPyL41;
    }
    cpy_r_t = cpy_r_r42;
    cpy_r_r43 = CPyDef_checkstrformat___has_type_component(cpy_r_t, cpy_r_fullname);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "has_type_component", 1104, CPyStatic_checkstrformat___globals);
        goto CPyL41;
    }
    if (cpy_r_r43) {
        goto CPyL42;
    } else
        goto CPyL30;
CPyL29: ;
    cpy_r_r33 = 1;
    goto CPyL31;
CPyL30: ;
    cpy_r_r44 = cpy_r_r36 + 2;
    cpy_r_r36 = cpy_r_r44;
    goto CPyL25;
CPyL31: ;
    return cpy_r_r33;
CPyL32: ;
    return 0;
CPyL33: ;
    cpy_r_r45 = 2;
    return cpy_r_r45;
CPyL34: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL33;
CPyL35: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL10;
CPyL36: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL19;
CPyL37: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL33;
CPyL38: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL17;
CPyL39: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL32;
CPyL40: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL31;
CPyL41: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL33;
CPyL42: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL29;
}

PyObject *CPyPy_checkstrformat___has_type_component(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", "fullname", 0};
    static CPyArg_Parser parser = {"OO:has_type_component", kwlist, 0};
    PyObject *obj_typ;
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typ, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_types___Type)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Type", obj_typ); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    char retval = CPyDef_checkstrformat___has_type_component(arg_typ, arg_fullname);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/checkstrformat.py", "has_type_component", 1088, CPyStatic_checkstrformat___globals);
    return NULL;
}

char CPyDef_checkstrformat_____top_level__(void) {
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
    void *cpy_r_r11;
    void *cpy_r_r13;
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
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r28;
    void *cpy_r_r30;
    void *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
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
    char cpy_r_r53;
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
    tuple_T2OO cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    int32_t cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    CPyPtr cpy_r_r98;
    CPyPtr cpy_r_r99;
    PyObject *cpy_r_r100;
    tuple_T2OO cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyPtr cpy_r_r109;
    CPyPtr cpy_r_r110;
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
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    tuple_T2OO cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    tuple_T2OO cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    int32_t cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    int32_t cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    int32_t cpy_r_r158;
    char cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    int32_t cpy_r_r163;
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
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    int32_t cpy_r_r178;
    char cpy_r_r179;
    int32_t cpy_r_r180;
    char cpy_r_r181;
    int32_t cpy_r_r182;
    char cpy_r_r183;
    int32_t cpy_r_r184;
    char cpy_r_r185;
    int32_t cpy_r_r186;
    char cpy_r_r187;
    int32_t cpy_r_r188;
    char cpy_r_r189;
    int32_t cpy_r_r190;
    char cpy_r_r191;
    int32_t cpy_r_r192;
    char cpy_r_r193;
    int32_t cpy_r_r194;
    char cpy_r_r195;
    int32_t cpy_r_r196;
    char cpy_r_r197;
    int32_t cpy_r_r198;
    char cpy_r_r199;
    int32_t cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    int32_t cpy_r_r204;
    char cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    int32_t cpy_r_r220;
    char cpy_r_r221;
    int32_t cpy_r_r222;
    char cpy_r_r223;
    int32_t cpy_r_r224;
    char cpy_r_r225;
    int32_t cpy_r_r226;
    char cpy_r_r227;
    int32_t cpy_r_r228;
    char cpy_r_r229;
    int32_t cpy_r_r230;
    char cpy_r_r231;
    int32_t cpy_r_r232;
    char cpy_r_r233;
    int32_t cpy_r_r234;
    char cpy_r_r235;
    int32_t cpy_r_r236;
    char cpy_r_r237;
    int32_t cpy_r_r238;
    char cpy_r_r239;
    int32_t cpy_r_r240;
    char cpy_r_r241;
    int32_t cpy_r_r242;
    char cpy_r_r243;
    int32_t cpy_r_r244;
    char cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    int32_t cpy_r_r248;
    char cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    int32_t cpy_r_r254;
    char cpy_r_r255;
    int32_t cpy_r_r256;
    char cpy_r_r257;
    int32_t cpy_r_r258;
    char cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    int32_t cpy_r_r262;
    char cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    int32_t cpy_r_r270;
    char cpy_r_r271;
    int32_t cpy_r_r272;
    char cpy_r_r273;
    int32_t cpy_r_r274;
    char cpy_r_r275;
    int32_t cpy_r_r276;
    char cpy_r_r277;
    int32_t cpy_r_r278;
    char cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    int32_t cpy_r_r282;
    char cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    PyObject *cpy_r_r287;
    PyObject *cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    int32_t cpy_r_r291;
    char cpy_r_r292;
    int32_t cpy_r_r293;
    char cpy_r_r294;
    int32_t cpy_r_r295;
    char cpy_r_r296;
    int32_t cpy_r_r297;
    char cpy_r_r298;
    int32_t cpy_r_r299;
    char cpy_r_r300;
    int32_t cpy_r_r301;
    char cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    int32_t cpy_r_r305;
    char cpy_r_r306;
    PyObject *cpy_r_r307;
    PyObject *cpy_r_r308;
    PyObject *cpy_r_r309;
    PyObject *cpy_r_r310;
    char cpy_r_r311;
    PyObject *cpy_r_r312;
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
    char cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    int32_t cpy_r_r341;
    char cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    int32_t cpy_r_r345;
    char cpy_r_r346;
    char cpy_r_r347;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", -1, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_checkstrformat___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 13, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_re;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {15};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[9267]; /* (('re', 're', 're'),) */
    cpy_r_r15 = CPyStatic_checkstrformat___globals;
    cpy_r_r16 = CPyStatics[1450]; /* 'mypy/checkstrformat.py' */
    cpy_r_r17 = CPyStatics[17]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL106;
    cpy_r_r19 = CPyStatics[9268]; /* ('TYPE_CHECKING', 'Callable', 'Dict', 'Final', 'Match',
                                     'Pattern', 'Tuple', 'Union', 'cast') */
    cpy_r_r20 = CPyStatics[21]; /* 'typing' */
    cpy_r_r21 = CPyStatic_checkstrformat___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 16, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    CPyModule_typing = cpy_r_r22;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = CPyStatics[9086]; /* ('TypeAlias',) */
    cpy_r_r24 = CPyStatics[9087]; /* ('_TypeAlias',) */
    cpy_r_r25 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r26 = CPyStatic_checkstrformat___globals;
    cpy_r_r27 = CPyImport_ImportFromMany(cpy_r_r25, cpy_r_r23, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 17, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    CPyModule_typing_extensions = cpy_r_r27;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r28 = (PyObject **)&CPyModule_mypy___errorcodes;
    PyObject **cpy_r_r29[1] = {cpy_r_r28};
    cpy_r_r30 = (void *)&cpy_r_r29;
    int64_t cpy_r_r31[1] = {19};
    cpy_r_r32 = (void *)&cpy_r_r31;
    cpy_r_r33 = CPyStatics[9269]; /* (('mypy.errorcodes', 'mypy.errorcodes', 'codes'),) */
    cpy_r_r34 = CPyStatic_checkstrformat___globals;
    cpy_r_r35 = CPyStatics[1450]; /* 'mypy/checkstrformat.py' */
    cpy_r_r36 = CPyStatics[17]; /* '<module>' */
    cpy_r_r37 = CPyImport_ImportMany(cpy_r_r33, cpy_r_r30, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r32);
    if (!cpy_r_r37) goto CPyL106;
    cpy_r_r38 = CPyStatics[9270]; /* ('Errors',) */
    cpy_r_r39 = CPyStatics[522]; /* 'mypy.errors' */
    cpy_r_r40 = CPyStatic_checkstrformat___globals;
    cpy_r_r41 = CPyImport_ImportFromMany(cpy_r_r39, cpy_r_r38, cpy_r_r38, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 20, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    CPyModule_mypy___errors = cpy_r_r41;
    CPy_INCREF(CPyModule_mypy___errors);
    CPy_DECREF(cpy_r_r41);
    cpy_r_r42 = CPyStatics[9271]; /* ('ARG_NAMED', 'ARG_POS', 'ARG_STAR', 'ARG_STAR2',
                                     'BytesExpr', 'CallExpr', 'Context', 'DictExpr',
                                     'Expression', 'ExpressionStmt', 'IndexExpr', 'IntExpr',
                                     'MemberExpr', 'MypyFile', 'NameExpr', 'Node',
                                     'StarExpr', 'StrExpr', 'TempNode', 'TupleExpr') */
    cpy_r_r43 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r44 = CPyStatic_checkstrformat___globals;
    cpy_r_r45 = CPyImport_ImportFromMany(cpy_r_r43, cpy_r_r42, cpy_r_r42, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 21, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    CPyModule_mypy___nodes = cpy_r_r45;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r46 = CPyStatics[9272]; /* ('AnyType', 'Instance', 'LiteralType', 'TupleType',
                                     'Type', 'TypeOfAny', 'TypeVarType', 'UnionType',
                                     'get_proper_type', 'get_proper_types') */
    cpy_r_r47 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r48 = CPyStatic_checkstrformat___globals;
    cpy_r_r49 = CPyImport_ImportFromMany(cpy_r_r47, cpy_r_r46, cpy_r_r46, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 43, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    CPyModule_mypy___types = cpy_r_r49;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r50 = CPyStatic_checkstrformat___globals;
    cpy_r_r51 = CPyStatics[58]; /* 'TYPE_CHECKING' */
    cpy_r_r52 = CPyDict_GetItem(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 56, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    if (unlikely(!PyBool_Check(cpy_r_r52))) {
        CPy_TypeError("bool", cpy_r_r52); cpy_r_r53 = 2;
    } else
        cpy_r_r53 = cpy_r_r52 == Py_True;
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 56, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r54 = CPyStatics[9256]; /* ('message_registry',) */
    cpy_r_r55 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r56 = CPyStatic_checkstrformat___globals;
    cpy_r_r57 = CPyImport_ImportFromMany(cpy_r_r55, cpy_r_r54, cpy_r_r54, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 61, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    CPyModule_mypy = cpy_r_r57;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r58 = CPyStatics[9081]; /* ('map_instance_to_supertype',) */
    cpy_r_r59 = CPyStatics[61]; /* 'mypy.maptype' */
    cpy_r_r60 = CPyStatic_checkstrformat___globals;
    cpy_r_r61 = CPyImport_ImportFromMany(cpy_r_r59, cpy_r_r58, cpy_r_r58, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 62, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    CPyModule_mypy___maptype = cpy_r_r61;
    CPy_INCREF(CPyModule_mypy___maptype);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r62 = CPyStatics[9135]; /* ('MessageBuilder',) */
    cpy_r_r63 = CPyStatics[530]; /* 'mypy.messages' */
    cpy_r_r64 = CPyStatic_checkstrformat___globals;
    cpy_r_r65 = CPyImport_ImportFromMany(cpy_r_r63, cpy_r_r62, cpy_r_r62, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 63, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    CPyModule_mypy___messages = cpy_r_r65;
    CPy_INCREF(CPyModule_mypy___messages);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r66 = CPyStatics[9151]; /* ('parse',) */
    cpy_r_r67 = CPyStatics[580]; /* 'mypy.parse' */
    cpy_r_r68 = CPyStatic_checkstrformat___globals;
    cpy_r_r69 = CPyImport_ImportFromMany(cpy_r_r67, cpy_r_r66, cpy_r_r66, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 64, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    CPyModule_mypy___parse = cpy_r_r69;
    CPy_INCREF(CPyModule_mypy___parse);
    CPy_DECREF(cpy_r_r69);
    cpy_r_r70 = CPyStatics[9078]; /* ('is_subtype',) */
    cpy_r_r71 = CPyStatics[26]; /* 'mypy.subtypes' */
    cpy_r_r72 = CPyStatic_checkstrformat___globals;
    cpy_r_r73 = CPyImport_ImportFromMany(cpy_r_r71, cpy_r_r70, cpy_r_r70, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 65, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    CPyModule_mypy___subtypes = cpy_r_r73;
    CPy_INCREF(CPyModule_mypy___subtypes);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r74 = CPyStatics[9273]; /* ('custom_special_method',) */
    cpy_r_r75 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r76 = CPyStatic_checkstrformat___globals;
    cpy_r_r77 = CPyImport_ImportFromMany(cpy_r_r75, cpy_r_r74, cpy_r_r74, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 66, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    CPyModule_mypy___typeops = cpy_r_r77;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r78 = CPyStatic_checkstrformat___globals;
    cpy_r_r79 = CPyStatics[84]; /* 'Union' */
    cpy_r_r80 = CPyDict_GetItem(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 68, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r81 = (PyObject *)CPyType_nodes___StrExpr;
    cpy_r_r82 = (PyObject *)CPyType_nodes___BytesExpr;
    cpy_r_r83.f0 = cpy_r_r81;
    cpy_r_r83.f1 = cpy_r_r82;
    CPy_INCREF(cpy_r_r83.f0);
    CPy_INCREF(cpy_r_r83.f1);
    cpy_r_r84 = PyTuple_New(2);
    if (unlikely(cpy_r_r84 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1649 = cpy_r_r83.f0;
    PyTuple_SET_ITEM(cpy_r_r84, 0, __tmp1649);
    PyObject *__tmp1650 = cpy_r_r83.f1;
    PyTuple_SET_ITEM(cpy_r_r84, 1, __tmp1650);
    cpy_r_r85 = PyObject_GetItem(cpy_r_r80, cpy_r_r84);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 68, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r86 = CPyStatic_checkstrformat___globals;
    cpy_r_r87 = CPyStatics[1452]; /* 'FormatStringExpr' */
    cpy_r_r88 = CPyDict_SetItem(cpy_r_r86, cpy_r_r87, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r89 = cpy_r_r88 >= 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 68, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r90 = CPyStatic_checkstrformat___globals;
    cpy_r_r91 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r92 = CPyDict_GetItem(cpy_r_r90, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 69, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r93 = CPyStatic_checkstrformat___globals;
    cpy_r_r94 = CPyStatics[19]; /* 'Callable' */
    cpy_r_r95 = CPyDict_GetItem(cpy_r_r93, cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 69, CPyStatic_checkstrformat___globals);
        goto CPyL107;
    }
    cpy_r_r96 = (PyObject *)CPyType_nodes___Expression;
    cpy_r_r97 = PyList_New(1);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 69, CPyStatic_checkstrformat___globals);
        goto CPyL108;
    }
    cpy_r_r98 = (CPyPtr)&((PyListObject *)cpy_r_r97)->ob_item;
    cpy_r_r99 = *(CPyPtr *)cpy_r_r98;
    CPy_INCREF(cpy_r_r96);
    *(PyObject * *)cpy_r_r99 = cpy_r_r96;
    cpy_r_r100 = Py_None;
    cpy_r_r101.f0 = cpy_r_r97;
    cpy_r_r101.f1 = cpy_r_r100;
    CPy_INCREF(cpy_r_r101.f0);
    CPy_INCREF(cpy_r_r101.f1);
    CPy_DECREF(cpy_r_r97);
    cpy_r_r102 = PyTuple_New(2);
    if (unlikely(cpy_r_r102 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1651 = cpy_r_r101.f0;
    PyTuple_SET_ITEM(cpy_r_r102, 0, __tmp1651);
    PyObject *__tmp1652 = cpy_r_r101.f1;
    PyTuple_SET_ITEM(cpy_r_r102, 1, __tmp1652);
    cpy_r_r103 = PyObject_GetItem(cpy_r_r95, cpy_r_r102);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 69, CPyStatic_checkstrformat___globals);
        goto CPyL107;
    }
    cpy_r_r104 = CPyStatic_checkstrformat___globals;
    cpy_r_r105 = CPyStatics[19]; /* 'Callable' */
    cpy_r_r106 = CPyDict_GetItem(cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 69, CPyStatic_checkstrformat___globals);
        goto CPyL109;
    }
    cpy_r_r107 = (PyObject *)CPyType_types___Type;
    cpy_r_r108 = PyList_New(1);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 69, CPyStatic_checkstrformat___globals);
        goto CPyL110;
    }
    cpy_r_r109 = (CPyPtr)&((PyListObject *)cpy_r_r108)->ob_item;
    cpy_r_r110 = *(CPyPtr *)cpy_r_r109;
    CPy_INCREF(cpy_r_r107);
    *(PyObject * *)cpy_r_r110 = cpy_r_r107;
    cpy_r_r111 = (PyObject *)&PyBool_Type;
    cpy_r_r112.f0 = cpy_r_r108;
    cpy_r_r112.f1 = cpy_r_r111;
    CPy_INCREF(cpy_r_r112.f0);
    CPy_INCREF(cpy_r_r112.f1);
    CPy_DECREF(cpy_r_r108);
    cpy_r_r113 = PyTuple_New(2);
    if (unlikely(cpy_r_r113 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1653 = cpy_r_r112.f0;
    PyTuple_SET_ITEM(cpy_r_r113, 0, __tmp1653);
    PyObject *__tmp1654 = cpy_r_r112.f1;
    PyTuple_SET_ITEM(cpy_r_r113, 1, __tmp1654);
    cpy_r_r114 = PyObject_GetItem(cpy_r_r106, cpy_r_r113);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 69, CPyStatic_checkstrformat___globals);
        goto CPyL109;
    }
    cpy_r_r115.f0 = cpy_r_r103;
    cpy_r_r115.f1 = cpy_r_r114;
    CPy_INCREF(cpy_r_r115.f0);
    CPy_INCREF(cpy_r_r115.f1);
    CPy_DECREF(cpy_r_r103);
    CPy_DECREF(cpy_r_r114);
    cpy_r_r116 = PyTuple_New(2);
    if (unlikely(cpy_r_r116 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1655 = cpy_r_r115.f0;
    PyTuple_SET_ITEM(cpy_r_r116, 0, __tmp1655);
    PyObject *__tmp1656 = cpy_r_r115.f1;
    PyTuple_SET_ITEM(cpy_r_r116, 1, __tmp1656);
    cpy_r_r117 = PyObject_GetItem(cpy_r_r92, cpy_r_r116);
    CPy_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 69, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r118 = CPyStatic_checkstrformat___globals;
    cpy_r_r119 = CPyStatics[1453]; /* 'Checkers' */
    cpy_r_r120 = CPyDict_SetItem(cpy_r_r118, cpy_r_r119, cpy_r_r117);
    CPy_DECREF(cpy_r_r117);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 69, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r122 = CPyStatic_checkstrformat___globals;
    cpy_r_r123 = CPyStatics[509]; /* 'Dict' */
    cpy_r_r124 = CPyDict_GetItem(cpy_r_r122, cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 70, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r125 = CPyStatic_checkstrformat___globals;
    cpy_r_r126 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r127 = CPyDict_GetItem(cpy_r_r125, cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 70, CPyStatic_checkstrformat___globals);
        goto CPyL111;
    }
    cpy_r_r128 = (PyObject *)&PyLong_Type;
    cpy_r_r129 = (PyObject *)&PyLong_Type;
    cpy_r_r130.f0 = cpy_r_r128;
    cpy_r_r130.f1 = cpy_r_r129;
    CPy_INCREF(cpy_r_r130.f0);
    CPy_INCREF(cpy_r_r130.f1);
    cpy_r_r131 = PyTuple_New(2);
    if (unlikely(cpy_r_r131 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1657 = cpy_r_r130.f0;
    PyTuple_SET_ITEM(cpy_r_r131, 0, __tmp1657);
    PyObject *__tmp1658 = cpy_r_r130.f1;
    PyTuple_SET_ITEM(cpy_r_r131, 1, __tmp1658);
    cpy_r_r132 = PyObject_GetItem(cpy_r_r127, cpy_r_r131);
    CPy_DECREF(cpy_r_r127);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 70, CPyStatic_checkstrformat___globals);
        goto CPyL111;
    }
    cpy_r_r133 = CPyStatic_checkstrformat___globals;
    cpy_r_r134 = CPyStatics[1451]; /* 'Match' */
    cpy_r_r135 = CPyDict_GetItem(cpy_r_r133, cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 70, CPyStatic_checkstrformat___globals);
        goto CPyL112;
    }
    cpy_r_r136 = (PyObject *)&PyUnicode_Type;
    cpy_r_r137 = PyObject_GetItem(cpy_r_r135, cpy_r_r136);
    CPy_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 70, CPyStatic_checkstrformat___globals);
        goto CPyL112;
    }
    cpy_r_r138.f0 = cpy_r_r132;
    cpy_r_r138.f1 = cpy_r_r137;
    CPy_INCREF(cpy_r_r138.f0);
    CPy_INCREF(cpy_r_r138.f1);
    CPy_DECREF(cpy_r_r132);
    CPy_DECREF(cpy_r_r137);
    cpy_r_r139 = PyTuple_New(2);
    if (unlikely(cpy_r_r139 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp1659 = cpy_r_r138.f0;
    PyTuple_SET_ITEM(cpy_r_r139, 0, __tmp1659);
    PyObject *__tmp1660 = cpy_r_r138.f1;
    PyTuple_SET_ITEM(cpy_r_r139, 1, __tmp1660);
    cpy_r_r140 = PyObject_GetItem(cpy_r_r124, cpy_r_r139);
    CPy_DECREF(cpy_r_r124);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 70, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r141 = CPyStatic_checkstrformat___globals;
    cpy_r_r142 = CPyStatics[1454]; /* 'MatchMap' */
    cpy_r_r143 = CPyDict_SetItem(cpy_r_r141, cpy_r_r142, cpy_r_r140);
    CPy_DECREF(cpy_r_r140);
    cpy_r_r144 = cpy_r_r143 >= 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 70, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r145 = CPyDef_checkstrformat___compile_format_re();
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 121, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    CPyStatic_checkstrformat___FORMAT_RE = cpy_r_r145;
    CPy_INCREF(CPyStatic_checkstrformat___FORMAT_RE);
    cpy_r_r146 = CPyStatic_checkstrformat___globals;
    cpy_r_r147 = CPyStatics[1455]; /* 'FORMAT_RE' */
    cpy_r_r148 = CPyDict_SetItem(cpy_r_r146, cpy_r_r147, cpy_r_r145);
    CPy_DECREF(cpy_r_r145);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 121, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r150 = CPyDef_checkstrformat___compile_new_format_re(0);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 122, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    CPyStatic_checkstrformat___FORMAT_RE_NEW = cpy_r_r150;
    CPy_INCREF(CPyStatic_checkstrformat___FORMAT_RE_NEW);
    cpy_r_r151 = CPyStatic_checkstrformat___globals;
    cpy_r_r152 = CPyStatics[1456]; /* 'FORMAT_RE_NEW' */
    cpy_r_r153 = CPyDict_SetItem(cpy_r_r151, cpy_r_r152, cpy_r_r150);
    CPy_DECREF(cpy_r_r150);
    cpy_r_r154 = cpy_r_r153 >= 0;
    if (unlikely(!cpy_r_r154)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 122, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r155 = CPyDef_checkstrformat___compile_new_format_re(1);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 123, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    CPyStatic_checkstrformat___FORMAT_RE_NEW_CUSTOM = cpy_r_r155;
    CPy_INCREF(CPyStatic_checkstrformat___FORMAT_RE_NEW_CUSTOM);
    cpy_r_r156 = CPyStatic_checkstrformat___globals;
    cpy_r_r157 = CPyStatics[1457]; /* 'FORMAT_RE_NEW_CUSTOM' */
    cpy_r_r158 = CPyDict_SetItem(cpy_r_r156, cpy_r_r157, cpy_r_r155);
    CPy_DECREF(cpy_r_r155);
    cpy_r_r159 = cpy_r_r158 >= 0;
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 123, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r160 = CPyStatics[1425]; /* '__dummy_name__' */
    cpy_r_r161 = CPyStatic_checkstrformat___globals;
    cpy_r_r162 = CPyStatics[1458]; /* 'DUMMY_FIELD_NAME' */
    cpy_r_r163 = CPyDict_SetItem(cpy_r_r161, cpy_r_r162, cpy_r_r160);
    cpy_r_r164 = cpy_r_r163 >= 0;
    if (unlikely(!cpy_r_r164)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 124, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r165 = CPyStatics[1459]; /* 'd' */
    cpy_r_r166 = CPyStatics[1460]; /* 'i' */
    cpy_r_r167 = CPyStatics[1461]; /* 'o' */
    cpy_r_r168 = CPyStatics[1462]; /* 'u' */
    cpy_r_r169 = CPyStatics[280]; /* 'x' */
    cpy_r_r170 = CPyStatics[1463]; /* 'X' */
    cpy_r_r171 = CPyStatics[1464]; /* 'e' */
    cpy_r_r172 = CPyStatics[1465]; /* 'E' */
    cpy_r_r173 = CPyStatics[1466]; /* 'f' */
    cpy_r_r174 = CPyStatics[1467]; /* 'F' */
    cpy_r_r175 = CPyStatics[1468]; /* 'g' */
    cpy_r_r176 = CPyStatics[1469]; /* 'G' */
    cpy_r_r177 = PySet_New(NULL);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 127, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r178 = PySet_Add(cpy_r_r177, cpy_r_r165);
    cpy_r_r179 = cpy_r_r178 >= 0;
    if (unlikely(!cpy_r_r179)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 127, CPyStatic_checkstrformat___globals);
        goto CPyL113;
    }
    cpy_r_r180 = PySet_Add(cpy_r_r177, cpy_r_r166);
    cpy_r_r181 = cpy_r_r180 >= 0;
    if (unlikely(!cpy_r_r181)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 127, CPyStatic_checkstrformat___globals);
        goto CPyL113;
    }
    cpy_r_r182 = PySet_Add(cpy_r_r177, cpy_r_r167);
    cpy_r_r183 = cpy_r_r182 >= 0;
    if (unlikely(!cpy_r_r183)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 127, CPyStatic_checkstrformat___globals);
        goto CPyL113;
    }
    cpy_r_r184 = PySet_Add(cpy_r_r177, cpy_r_r168);
    cpy_r_r185 = cpy_r_r184 >= 0;
    if (unlikely(!cpy_r_r185)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 127, CPyStatic_checkstrformat___globals);
        goto CPyL113;
    }
    cpy_r_r186 = PySet_Add(cpy_r_r177, cpy_r_r169);
    cpy_r_r187 = cpy_r_r186 >= 0;
    if (unlikely(!cpy_r_r187)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 127, CPyStatic_checkstrformat___globals);
        goto CPyL113;
    }
    cpy_r_r188 = PySet_Add(cpy_r_r177, cpy_r_r170);
    cpy_r_r189 = cpy_r_r188 >= 0;
    if (unlikely(!cpy_r_r189)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 127, CPyStatic_checkstrformat___globals);
        goto CPyL113;
    }
    cpy_r_r190 = PySet_Add(cpy_r_r177, cpy_r_r171);
    cpy_r_r191 = cpy_r_r190 >= 0;
    if (unlikely(!cpy_r_r191)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 127, CPyStatic_checkstrformat___globals);
        goto CPyL113;
    }
    cpy_r_r192 = PySet_Add(cpy_r_r177, cpy_r_r172);
    cpy_r_r193 = cpy_r_r192 >= 0;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 127, CPyStatic_checkstrformat___globals);
        goto CPyL113;
    }
    cpy_r_r194 = PySet_Add(cpy_r_r177, cpy_r_r173);
    cpy_r_r195 = cpy_r_r194 >= 0;
    if (unlikely(!cpy_r_r195)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 127, CPyStatic_checkstrformat___globals);
        goto CPyL113;
    }
    cpy_r_r196 = PySet_Add(cpy_r_r177, cpy_r_r174);
    cpy_r_r197 = cpy_r_r196 >= 0;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 127, CPyStatic_checkstrformat___globals);
        goto CPyL113;
    }
    cpy_r_r198 = PySet_Add(cpy_r_r177, cpy_r_r175);
    cpy_r_r199 = cpy_r_r198 >= 0;
    if (unlikely(!cpy_r_r199)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 127, CPyStatic_checkstrformat___globals);
        goto CPyL113;
    }
    cpy_r_r200 = PySet_Add(cpy_r_r177, cpy_r_r176);
    cpy_r_r201 = cpy_r_r200 >= 0;
    if (unlikely(!cpy_r_r201)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 127, CPyStatic_checkstrformat___globals);
        goto CPyL113;
    }
    CPyStatic_checkstrformat___NUMERIC_TYPES_OLD = cpy_r_r177;
    CPy_INCREF(CPyStatic_checkstrformat___NUMERIC_TYPES_OLD);
    cpy_r_r202 = CPyStatic_checkstrformat___globals;
    cpy_r_r203 = CPyStatics[1470]; /* 'NUMERIC_TYPES_OLD' */
    cpy_r_r204 = CPyDict_SetItem(cpy_r_r202, cpy_r_r203, cpy_r_r177);
    CPy_DECREF(cpy_r_r177);
    cpy_r_r205 = cpy_r_r204 >= 0;
    if (unlikely(!cpy_r_r205)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 127, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r206 = CPyStatics[1443]; /* 'b' */
    cpy_r_r207 = CPyStatics[1459]; /* 'd' */
    cpy_r_r208 = CPyStatics[1461]; /* 'o' */
    cpy_r_r209 = CPyStatics[1464]; /* 'e' */
    cpy_r_r210 = CPyStatics[1465]; /* 'E' */
    cpy_r_r211 = CPyStatics[1466]; /* 'f' */
    cpy_r_r212 = CPyStatics[1467]; /* 'F' */
    cpy_r_r213 = CPyStatics[1468]; /* 'g' */
    cpy_r_r214 = CPyStatics[1469]; /* 'G' */
    cpy_r_r215 = CPyStatics[445]; /* 'n' */
    cpy_r_r216 = CPyStatics[280]; /* 'x' */
    cpy_r_r217 = CPyStatics[1463]; /* 'X' */
    cpy_r_r218 = CPyStatics[1183]; /* '%' */
    cpy_r_r219 = PySet_New(NULL);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 128, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r220 = PySet_Add(cpy_r_r219, cpy_r_r206);
    cpy_r_r221 = cpy_r_r220 >= 0;
    if (unlikely(!cpy_r_r221)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 128, CPyStatic_checkstrformat___globals);
        goto CPyL114;
    }
    cpy_r_r222 = PySet_Add(cpy_r_r219, cpy_r_r207);
    cpy_r_r223 = cpy_r_r222 >= 0;
    if (unlikely(!cpy_r_r223)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 128, CPyStatic_checkstrformat___globals);
        goto CPyL114;
    }
    cpy_r_r224 = PySet_Add(cpy_r_r219, cpy_r_r208);
    cpy_r_r225 = cpy_r_r224 >= 0;
    if (unlikely(!cpy_r_r225)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 128, CPyStatic_checkstrformat___globals);
        goto CPyL114;
    }
    cpy_r_r226 = PySet_Add(cpy_r_r219, cpy_r_r209);
    cpy_r_r227 = cpy_r_r226 >= 0;
    if (unlikely(!cpy_r_r227)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 128, CPyStatic_checkstrformat___globals);
        goto CPyL114;
    }
    cpy_r_r228 = PySet_Add(cpy_r_r219, cpy_r_r210);
    cpy_r_r229 = cpy_r_r228 >= 0;
    if (unlikely(!cpy_r_r229)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 128, CPyStatic_checkstrformat___globals);
        goto CPyL114;
    }
    cpy_r_r230 = PySet_Add(cpy_r_r219, cpy_r_r211);
    cpy_r_r231 = cpy_r_r230 >= 0;
    if (unlikely(!cpy_r_r231)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 128, CPyStatic_checkstrformat___globals);
        goto CPyL114;
    }
    cpy_r_r232 = PySet_Add(cpy_r_r219, cpy_r_r212);
    cpy_r_r233 = cpy_r_r232 >= 0;
    if (unlikely(!cpy_r_r233)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 128, CPyStatic_checkstrformat___globals);
        goto CPyL114;
    }
    cpy_r_r234 = PySet_Add(cpy_r_r219, cpy_r_r213);
    cpy_r_r235 = cpy_r_r234 >= 0;
    if (unlikely(!cpy_r_r235)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 128, CPyStatic_checkstrformat___globals);
        goto CPyL114;
    }
    cpy_r_r236 = PySet_Add(cpy_r_r219, cpy_r_r214);
    cpy_r_r237 = cpy_r_r236 >= 0;
    if (unlikely(!cpy_r_r237)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 128, CPyStatic_checkstrformat___globals);
        goto CPyL114;
    }
    cpy_r_r238 = PySet_Add(cpy_r_r219, cpy_r_r215);
    cpy_r_r239 = cpy_r_r238 >= 0;
    if (unlikely(!cpy_r_r239)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 128, CPyStatic_checkstrformat___globals);
        goto CPyL114;
    }
    cpy_r_r240 = PySet_Add(cpy_r_r219, cpy_r_r216);
    cpy_r_r241 = cpy_r_r240 >= 0;
    if (unlikely(!cpy_r_r241)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 128, CPyStatic_checkstrformat___globals);
        goto CPyL114;
    }
    cpy_r_r242 = PySet_Add(cpy_r_r219, cpy_r_r217);
    cpy_r_r243 = cpy_r_r242 >= 0;
    if (unlikely(!cpy_r_r243)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 128, CPyStatic_checkstrformat___globals);
        goto CPyL114;
    }
    cpy_r_r244 = PySet_Add(cpy_r_r219, cpy_r_r218);
    cpy_r_r245 = cpy_r_r244 >= 0;
    if (unlikely(!cpy_r_r245)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 128, CPyStatic_checkstrformat___globals);
        goto CPyL114;
    }
    CPyStatic_checkstrformat___NUMERIC_TYPES_NEW = cpy_r_r219;
    CPy_INCREF(CPyStatic_checkstrformat___NUMERIC_TYPES_NEW);
    cpy_r_r246 = CPyStatic_checkstrformat___globals;
    cpy_r_r247 = CPyStatics[1471]; /* 'NUMERIC_TYPES_NEW' */
    cpy_r_r248 = CPyDict_SetItem(cpy_r_r246, cpy_r_r247, cpy_r_r219);
    CPy_DECREF(cpy_r_r219);
    cpy_r_r249 = cpy_r_r248 >= 0;
    if (unlikely(!cpy_r_r249)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 128, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r250 = CPyStatics[1461]; /* 'o' */
    cpy_r_r251 = CPyStatics[280]; /* 'x' */
    cpy_r_r252 = CPyStatics[1463]; /* 'X' */
    cpy_r_r253 = PySet_New(NULL);
    if (unlikely(cpy_r_r253 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 131, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r254 = PySet_Add(cpy_r_r253, cpy_r_r250);
    cpy_r_r255 = cpy_r_r254 >= 0;
    if (unlikely(!cpy_r_r255)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 131, CPyStatic_checkstrformat___globals);
        goto CPyL115;
    }
    cpy_r_r256 = PySet_Add(cpy_r_r253, cpy_r_r251);
    cpy_r_r257 = cpy_r_r256 >= 0;
    if (unlikely(!cpy_r_r257)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 131, CPyStatic_checkstrformat___globals);
        goto CPyL115;
    }
    cpy_r_r258 = PySet_Add(cpy_r_r253, cpy_r_r252);
    cpy_r_r259 = cpy_r_r258 >= 0;
    if (unlikely(!cpy_r_r259)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 131, CPyStatic_checkstrformat___globals);
        goto CPyL115;
    }
    CPyStatic_checkstrformat___REQUIRE_INT_OLD = cpy_r_r253;
    CPy_INCREF(CPyStatic_checkstrformat___REQUIRE_INT_OLD);
    cpy_r_r260 = CPyStatic_checkstrformat___globals;
    cpy_r_r261 = CPyStatics[1472]; /* 'REQUIRE_INT_OLD' */
    cpy_r_r262 = CPyDict_SetItem(cpy_r_r260, cpy_r_r261, cpy_r_r253);
    CPy_DECREF(cpy_r_r253);
    cpy_r_r263 = cpy_r_r262 >= 0;
    if (unlikely(!cpy_r_r263)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 131, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r264 = CPyStatics[1443]; /* 'b' */
    cpy_r_r265 = CPyStatics[1459]; /* 'd' */
    cpy_r_r266 = CPyStatics[1461]; /* 'o' */
    cpy_r_r267 = CPyStatics[280]; /* 'x' */
    cpy_r_r268 = CPyStatics[1463]; /* 'X' */
    cpy_r_r269 = PySet_New(NULL);
    if (unlikely(cpy_r_r269 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 132, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r270 = PySet_Add(cpy_r_r269, cpy_r_r264);
    cpy_r_r271 = cpy_r_r270 >= 0;
    if (unlikely(!cpy_r_r271)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 132, CPyStatic_checkstrformat___globals);
        goto CPyL116;
    }
    cpy_r_r272 = PySet_Add(cpy_r_r269, cpy_r_r265);
    cpy_r_r273 = cpy_r_r272 >= 0;
    if (unlikely(!cpy_r_r273)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 132, CPyStatic_checkstrformat___globals);
        goto CPyL116;
    }
    cpy_r_r274 = PySet_Add(cpy_r_r269, cpy_r_r266);
    cpy_r_r275 = cpy_r_r274 >= 0;
    if (unlikely(!cpy_r_r275)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 132, CPyStatic_checkstrformat___globals);
        goto CPyL116;
    }
    cpy_r_r276 = PySet_Add(cpy_r_r269, cpy_r_r267);
    cpy_r_r277 = cpy_r_r276 >= 0;
    if (unlikely(!cpy_r_r277)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 132, CPyStatic_checkstrformat___globals);
        goto CPyL116;
    }
    cpy_r_r278 = PySet_Add(cpy_r_r269, cpy_r_r268);
    cpy_r_r279 = cpy_r_r278 >= 0;
    if (unlikely(!cpy_r_r279)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 132, CPyStatic_checkstrformat___globals);
        goto CPyL116;
    }
    CPyStatic_checkstrformat___REQUIRE_INT_NEW = cpy_r_r269;
    CPy_INCREF(CPyStatic_checkstrformat___REQUIRE_INT_NEW);
    cpy_r_r280 = CPyStatic_checkstrformat___globals;
    cpy_r_r281 = CPyStatics[1473]; /* 'REQUIRE_INT_NEW' */
    cpy_r_r282 = CPyDict_SetItem(cpy_r_r280, cpy_r_r281, cpy_r_r269);
    CPy_DECREF(cpy_r_r269);
    cpy_r_r283 = cpy_r_r282 >= 0;
    if (unlikely(!cpy_r_r283)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 132, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r284 = CPyStatics[1464]; /* 'e' */
    cpy_r_r285 = CPyStatics[1465]; /* 'E' */
    cpy_r_r286 = CPyStatics[1466]; /* 'f' */
    cpy_r_r287 = CPyStatics[1467]; /* 'F' */
    cpy_r_r288 = CPyStatics[1468]; /* 'g' */
    cpy_r_r289 = CPyStatics[1469]; /* 'G' */
    cpy_r_r290 = PySet_New(NULL);
    if (unlikely(cpy_r_r290 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 135, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r291 = PySet_Add(cpy_r_r290, cpy_r_r284);
    cpy_r_r292 = cpy_r_r291 >= 0;
    if (unlikely(!cpy_r_r292)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 135, CPyStatic_checkstrformat___globals);
        goto CPyL117;
    }
    cpy_r_r293 = PySet_Add(cpy_r_r290, cpy_r_r285);
    cpy_r_r294 = cpy_r_r293 >= 0;
    if (unlikely(!cpy_r_r294)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 135, CPyStatic_checkstrformat___globals);
        goto CPyL117;
    }
    cpy_r_r295 = PySet_Add(cpy_r_r290, cpy_r_r286);
    cpy_r_r296 = cpy_r_r295 >= 0;
    if (unlikely(!cpy_r_r296)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 135, CPyStatic_checkstrformat___globals);
        goto CPyL117;
    }
    cpy_r_r297 = PySet_Add(cpy_r_r290, cpy_r_r287);
    cpy_r_r298 = cpy_r_r297 >= 0;
    if (unlikely(!cpy_r_r298)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 135, CPyStatic_checkstrformat___globals);
        goto CPyL117;
    }
    cpy_r_r299 = PySet_Add(cpy_r_r290, cpy_r_r288);
    cpy_r_r300 = cpy_r_r299 >= 0;
    if (unlikely(!cpy_r_r300)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 135, CPyStatic_checkstrformat___globals);
        goto CPyL117;
    }
    cpy_r_r301 = PySet_Add(cpy_r_r290, cpy_r_r289);
    cpy_r_r302 = cpy_r_r301 >= 0;
    if (unlikely(!cpy_r_r302)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 135, CPyStatic_checkstrformat___globals);
        goto CPyL117;
    }
    CPyStatic_checkstrformat___FLOAT_TYPES = cpy_r_r290;
    CPy_INCREF(CPyStatic_checkstrformat___FLOAT_TYPES);
    cpy_r_r303 = CPyStatic_checkstrformat___globals;
    cpy_r_r304 = CPyStatics[1474]; /* 'FLOAT_TYPES' */
    cpy_r_r305 = CPyDict_SetItem(cpy_r_r303, cpy_r_r304, cpy_r_r290);
    CPy_DECREF(cpy_r_r290);
    cpy_r_r306 = cpy_r_r305 >= 0;
    if (unlikely(!cpy_r_r306)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 135, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r307 = NULL;
    cpy_r_r308 = CPyStatics[1230]; /* 'mypy.checkstrformat' */
    cpy_r_r309 = (PyObject *)CPyType_checkstrformat___ConversionSpecifier_template;
    cpy_r_r310 = CPyType_FromTemplate(cpy_r_r309, cpy_r_r307, cpy_r_r308);
    if (unlikely(cpy_r_r310 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 138, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r311 = CPyDef_checkstrformat___ConversionSpecifier_trait_vtable_setup();
    if (unlikely(cpy_r_r311 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", -1, CPyStatic_checkstrformat___globals);
        goto CPyL118;
    }
    cpy_r_r312 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r313 = CPyStatics[1475]; /* 'whole_seq' */
    cpy_r_r314 = CPyStatics[1476]; /* 'start_pos' */
    cpy_r_r315 = CPyStatics[228]; /* 'key' */
    cpy_r_r316 = CPyStatics[1477]; /* 'conv_type' */
    cpy_r_r317 = CPyStatics[1395]; /* 'flags' */
    cpy_r_r318 = CPyStatics[1396]; /* 'width' */
    cpy_r_r319 = CPyStatics[1397]; /* 'precision' */
    cpy_r_r320 = CPyStatics[1398]; /* 'format_spec' */
    cpy_r_r321 = CPyStatics[1478]; /* 'non_standard_format_spec' */
    cpy_r_r322 = CPyStatics[1399]; /* 'conversion' */
    cpy_r_r323 = CPyStatics[1400]; /* 'field' */
    cpy_r_r324 = PyTuple_Pack(11, cpy_r_r313, cpy_r_r314, cpy_r_r315, cpy_r_r316, cpy_r_r317, cpy_r_r318, cpy_r_r319, cpy_r_r320, cpy_r_r321, cpy_r_r322, cpy_r_r323);
    if (unlikely(cpy_r_r324 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 138, CPyStatic_checkstrformat___globals);
        goto CPyL118;
    }
    cpy_r_r325 = PyObject_SetAttr(cpy_r_r310, cpy_r_r312, cpy_r_r324);
    CPy_DECREF(cpy_r_r324);
    cpy_r_r326 = cpy_r_r325 >= 0;
    if (unlikely(!cpy_r_r326)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 138, CPyStatic_checkstrformat___globals);
        goto CPyL118;
    }
    CPyType_checkstrformat___ConversionSpecifier = (PyTypeObject *)cpy_r_r310;
    CPy_INCREF(CPyType_checkstrformat___ConversionSpecifier);
    cpy_r_r327 = CPyStatic_checkstrformat___globals;
    cpy_r_r328 = CPyStatics[1479]; /* 'ConversionSpecifier' */
    cpy_r_r329 = CPyDict_SetItem(cpy_r_r327, cpy_r_r328, cpy_r_r310);
    CPy_DECREF(cpy_r_r310);
    cpy_r_r330 = cpy_r_r329 >= 0;
    if (unlikely(!cpy_r_r330)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 138, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r331 = NULL;
    cpy_r_r332 = CPyStatics[1230]; /* 'mypy.checkstrformat' */
    cpy_r_r333 = (PyObject *)CPyType_checkstrformat___StringFormatterChecker_template;
    cpy_r_r334 = CPyType_FromTemplate(cpy_r_r333, cpy_r_r331, cpy_r_r332);
    if (unlikely(cpy_r_r334 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 291, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    cpy_r_r335 = CPyDef_checkstrformat___StringFormatterChecker_trait_vtable_setup();
    if (unlikely(cpy_r_r335 == 2)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", -1, CPyStatic_checkstrformat___globals);
        goto CPyL119;
    }
    cpy_r_r336 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r337 = CPyStatics[1295]; /* 'chk' */
    cpy_r_r338 = CPyStatics[1098]; /* 'msg' */
    cpy_r_r339 = CPyStatics[1480]; /* 'exprchk' */
    cpy_r_r340 = PyTuple_Pack(3, cpy_r_r337, cpy_r_r338, cpy_r_r339);
    if (unlikely(cpy_r_r340 == NULL)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 291, CPyStatic_checkstrformat___globals);
        goto CPyL119;
    }
    cpy_r_r341 = PyObject_SetAttr(cpy_r_r334, cpy_r_r336, cpy_r_r340);
    CPy_DECREF(cpy_r_r340);
    cpy_r_r342 = cpy_r_r341 >= 0;
    if (unlikely(!cpy_r_r342)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 291, CPyStatic_checkstrformat___globals);
        goto CPyL119;
    }
    CPyType_checkstrformat___StringFormatterChecker = (PyTypeObject *)cpy_r_r334;
    CPy_INCREF(CPyType_checkstrformat___StringFormatterChecker);
    cpy_r_r343 = CPyStatic_checkstrformat___globals;
    cpy_r_r344 = CPyStatics[1229]; /* 'StringFormatterChecker' */
    cpy_r_r345 = CPyDict_SetItem(cpy_r_r343, cpy_r_r344, cpy_r_r334);
    CPy_DECREF(cpy_r_r334);
    cpy_r_r346 = cpy_r_r345 >= 0;
    if (unlikely(!cpy_r_r346)) {
        CPy_AddTraceback("mypy/checkstrformat.py", "<module>", 291, CPyStatic_checkstrformat___globals);
        goto CPyL106;
    }
    return 1;
CPyL106: ;
    cpy_r_r347 = 2;
    return cpy_r_r347;
CPyL107: ;
    CPy_DecRef(cpy_r_r92);
    goto CPyL106;
CPyL108: ;
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r95);
    goto CPyL106;
CPyL109: ;
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r103);
    goto CPyL106;
CPyL110: ;
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r106);
    goto CPyL106;
CPyL111: ;
    CPy_DecRef(cpy_r_r124);
    goto CPyL106;
CPyL112: ;
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_r132);
    goto CPyL106;
CPyL113: ;
    CPy_DecRef(cpy_r_r177);
    goto CPyL106;
CPyL114: ;
    CPy_DecRef(cpy_r_r219);
    goto CPyL106;
CPyL115: ;
    CPy_DecRef(cpy_r_r253);
    goto CPyL106;
CPyL116: ;
    CPy_DecRef(cpy_r_r269);
    goto CPyL106;
CPyL117: ;
    CPy_DecRef(cpy_r_r290);
    goto CPyL106;
CPyL118: ;
    CPy_DecRef(cpy_r_r310);
    goto CPyL106;
CPyL119: ;
    CPy_DecRef(cpy_r_r334);
    goto CPyL106;
}
