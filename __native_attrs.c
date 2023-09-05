#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
attrs___Converter_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *attrs___Converter_setup(PyTypeObject *type);
PyObject *CPyDef_attrs___Converter(PyObject *cpy_r_init_type, PyObject *cpy_r_ret_type);

static PyObject *
attrs___Converter_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_attrs___Converter) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = attrs___Converter_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_attrs___Converter_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
attrs___Converter_traverse(mypy___plugins___attrs___ConverterObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_init_type);
    Py_VISIT(self->_ret_type);
    return 0;
}

static int
attrs___Converter_clear(mypy___plugins___attrs___ConverterObject *self)
{
    Py_CLEAR(self->_init_type);
    Py_CLEAR(self->_ret_type);
    return 0;
}

static void
attrs___Converter_dealloc(mypy___plugins___attrs___ConverterObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, attrs___Converter_dealloc)
    attrs___Converter_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem attrs___Converter_vtable[1];
static bool
CPyDef_attrs___Converter_trait_vtable_setup(void)
{
    CPyVTableItem attrs___Converter_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_attrs___Converter_____init__,
    };
    memcpy(attrs___Converter_vtable, attrs___Converter_vtable_scratch, sizeof(attrs___Converter_vtable));
    return 1;
}

static PyObject *
attrs___Converter_get_init_type(mypy___plugins___attrs___ConverterObject *self, void *closure);
static int
attrs___Converter_set_init_type(mypy___plugins___attrs___ConverterObject *self, PyObject *value, void *closure);
static PyObject *
attrs___Converter_get_ret_type(mypy___plugins___attrs___ConverterObject *self, void *closure);
static int
attrs___Converter_set_ret_type(mypy___plugins___attrs___ConverterObject *self, PyObject *value, void *closure);

static PyGetSetDef attrs___Converter_getseters[] = {
    {"init_type",
     (getter)attrs___Converter_get_init_type, (setter)attrs___Converter_set_init_type,
     NULL, NULL},
    {"ret_type",
     (getter)attrs___Converter_get_ret_type, (setter)attrs___Converter_set_ret_type,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef attrs___Converter_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_attrs___Converter_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_attrs___Converter_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Converter",
    .tp_new = attrs___Converter_new,
    .tp_dealloc = (destructor)attrs___Converter_dealloc,
    .tp_traverse = (traverseproc)attrs___Converter_traverse,
    .tp_clear = (inquiry)attrs___Converter_clear,
    .tp_getset = attrs___Converter_getseters,
    .tp_methods = attrs___Converter_methods,
    .tp_init = attrs___Converter_init,
    .tp_basicsize = sizeof(mypy___plugins___attrs___ConverterObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_attrs___Converter_template = &CPyType_attrs___Converter_template_;

static PyObject *
attrs___Converter_setup(PyTypeObject *type)
{
    mypy___plugins___attrs___ConverterObject *self;
    self = (mypy___plugins___attrs___ConverterObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = attrs___Converter_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_attrs___Converter(PyObject *cpy_r_init_type, PyObject *cpy_r_ret_type)
{
    PyObject *self = attrs___Converter_setup(CPyType_attrs___Converter);
    if (self == NULL)
        return NULL;
    char res = CPyDef_attrs___Converter_____init__(self, cpy_r_init_type, cpy_r_ret_type);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
attrs___Converter_get_init_type(mypy___plugins___attrs___ConverterObject *self, void *closure)
{
    if (unlikely(self->_init_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'init_type' of 'Converter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_init_type);
    PyObject *retval = self->_init_type;
    return retval;
}

static int
attrs___Converter_set_init_type(mypy___plugins___attrs___ConverterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Converter' object attribute 'init_type' cannot be deleted");
        return -1;
    }
    if (self->_init_type != NULL) {
        CPy_DECREF(self->_init_type);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_types___Type))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4674;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4674;
    CPy_TypeError("mypy.types.Type or None", value); 
    tmp = NULL;
__LL4674: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_init_type = tmp;
    return 0;
}

static PyObject *
attrs___Converter_get_ret_type(mypy___plugins___attrs___ConverterObject *self, void *closure)
{
    if (unlikely(self->_ret_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ret_type' of 'Converter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ret_type);
    PyObject *retval = self->_ret_type;
    return retval;
}

static int
attrs___Converter_set_ret_type(mypy___plugins___attrs___ConverterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Converter' object attribute 'ret_type' cannot be deleted");
        return -1;
    }
    if (self->_ret_type != NULL) {
        CPy_DECREF(self->_ret_type);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_types___Type))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4675;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4675;
    CPy_TypeError("mypy.types.Type or None", value); 
    tmp = NULL;
__LL4675: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_ret_type = tmp;
    return 0;
}

static int
attrs___Attribute_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *attrs___Attribute_setup(PyTypeObject *type);
PyObject *CPyDef_attrs___Attribute(PyObject *cpy_r_name, PyObject *cpy_r_info, char cpy_r_has_default, char cpy_r_init, char cpy_r_kw_only, PyObject *cpy_r_converter, PyObject *cpy_r_context, PyObject *cpy_r_init_type);

static PyObject *
attrs___Attribute_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_attrs___Attribute) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = attrs___Attribute_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_attrs___Attribute_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
attrs___Attribute_traverse(mypy___plugins___attrs___AttributeObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_name);
    Py_VISIT(self->_info);
    Py_VISIT(self->_converter);
    Py_VISIT(self->_context);
    Py_VISIT(self->_init_type);
    return 0;
}

static int
attrs___Attribute_clear(mypy___plugins___attrs___AttributeObject *self)
{
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_info);
    Py_CLEAR(self->_converter);
    Py_CLEAR(self->_context);
    Py_CLEAR(self->_init_type);
    return 0;
}

static void
attrs___Attribute_dealloc(mypy___plugins___attrs___AttributeObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, attrs___Attribute_dealloc)
    attrs___Attribute_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem attrs___Attribute_vtable[5];
static bool
CPyDef_attrs___Attribute_trait_vtable_setup(void)
{
    CPyVTableItem attrs___Attribute_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_attrs___Attribute_____init__,
        (CPyVTableItem)CPyDef_attrs___Attribute___argument,
        (CPyVTableItem)CPyDef_attrs___Attribute___serialize,
        (CPyVTableItem)CPyDef_attrs___Attribute___deserialize,
        (CPyVTableItem)CPyDef_attrs___Attribute___expand_typevar_from_subtype,
    };
    memcpy(attrs___Attribute_vtable, attrs___Attribute_vtable_scratch, sizeof(attrs___Attribute_vtable));
    return 1;
}

static PyObject *
attrs___Attribute_get_name(mypy___plugins___attrs___AttributeObject *self, void *closure);
static int
attrs___Attribute_set_name(mypy___plugins___attrs___AttributeObject *self, PyObject *value, void *closure);
static PyObject *
attrs___Attribute_get_info(mypy___plugins___attrs___AttributeObject *self, void *closure);
static int
attrs___Attribute_set_info(mypy___plugins___attrs___AttributeObject *self, PyObject *value, void *closure);
static PyObject *
attrs___Attribute_get_has_default(mypy___plugins___attrs___AttributeObject *self, void *closure);
static int
attrs___Attribute_set_has_default(mypy___plugins___attrs___AttributeObject *self, PyObject *value, void *closure);
static PyObject *
attrs___Attribute_get_init(mypy___plugins___attrs___AttributeObject *self, void *closure);
static int
attrs___Attribute_set_init(mypy___plugins___attrs___AttributeObject *self, PyObject *value, void *closure);
static PyObject *
attrs___Attribute_get_kw_only(mypy___plugins___attrs___AttributeObject *self, void *closure);
static int
attrs___Attribute_set_kw_only(mypy___plugins___attrs___AttributeObject *self, PyObject *value, void *closure);
static PyObject *
attrs___Attribute_get_converter(mypy___plugins___attrs___AttributeObject *self, void *closure);
static int
attrs___Attribute_set_converter(mypy___plugins___attrs___AttributeObject *self, PyObject *value, void *closure);
static PyObject *
attrs___Attribute_get_context(mypy___plugins___attrs___AttributeObject *self, void *closure);
static int
attrs___Attribute_set_context(mypy___plugins___attrs___AttributeObject *self, PyObject *value, void *closure);
static PyObject *
attrs___Attribute_get_init_type(mypy___plugins___attrs___AttributeObject *self, void *closure);
static int
attrs___Attribute_set_init_type(mypy___plugins___attrs___AttributeObject *self, PyObject *value, void *closure);

static PyGetSetDef attrs___Attribute_getseters[] = {
    {"name",
     (getter)attrs___Attribute_get_name, (setter)attrs___Attribute_set_name,
     NULL, NULL},
    {"info",
     (getter)attrs___Attribute_get_info, (setter)attrs___Attribute_set_info,
     NULL, NULL},
    {"has_default",
     (getter)attrs___Attribute_get_has_default, (setter)attrs___Attribute_set_has_default,
     NULL, NULL},
    {"init",
     (getter)attrs___Attribute_get_init, (setter)attrs___Attribute_set_init,
     NULL, NULL},
    {"kw_only",
     (getter)attrs___Attribute_get_kw_only, (setter)attrs___Attribute_set_kw_only,
     NULL, NULL},
    {"converter",
     (getter)attrs___Attribute_get_converter, (setter)attrs___Attribute_set_converter,
     NULL, NULL},
    {"context",
     (getter)attrs___Attribute_get_context, (setter)attrs___Attribute_set_context,
     NULL, NULL},
    {"init_type",
     (getter)attrs___Attribute_get_init_type, (setter)attrs___Attribute_set_init_type,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef attrs___Attribute_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_attrs___Attribute_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"argument",
     (PyCFunction)CPyPy_attrs___Attribute___argument,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"serialize",
     (PyCFunction)CPyPy_attrs___Attribute___serialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"deserialize",
     (PyCFunction)CPyPy_attrs___Attribute___deserialize,
     METH_FASTCALL | METH_KEYWORDS | METH_CLASS, NULL},
    {"expand_typevar_from_subtype",
     (PyCFunction)CPyPy_attrs___Attribute___expand_typevar_from_subtype,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_attrs___Attribute_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Attribute",
    .tp_new = attrs___Attribute_new,
    .tp_dealloc = (destructor)attrs___Attribute_dealloc,
    .tp_traverse = (traverseproc)attrs___Attribute_traverse,
    .tp_clear = (inquiry)attrs___Attribute_clear,
    .tp_getset = attrs___Attribute_getseters,
    .tp_methods = attrs___Attribute_methods,
    .tp_init = attrs___Attribute_init,
    .tp_basicsize = sizeof(mypy___plugins___attrs___AttributeObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_attrs___Attribute_template = &CPyType_attrs___Attribute_template_;

static PyObject *
attrs___Attribute_setup(PyTypeObject *type)
{
    mypy___plugins___attrs___AttributeObject *self;
    self = (mypy___plugins___attrs___AttributeObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = attrs___Attribute_vtable;
    self->_has_default = 2;
    self->_init = 2;
    self->_kw_only = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_attrs___Attribute(PyObject *cpy_r_name, PyObject *cpy_r_info, char cpy_r_has_default, char cpy_r_init, char cpy_r_kw_only, PyObject *cpy_r_converter, PyObject *cpy_r_context, PyObject *cpy_r_init_type)
{
    PyObject *self = attrs___Attribute_setup(CPyType_attrs___Attribute);
    if (self == NULL)
        return NULL;
    char res = CPyDef_attrs___Attribute_____init__(self, cpy_r_name, cpy_r_info, cpy_r_has_default, cpy_r_init, cpy_r_kw_only, cpy_r_converter, cpy_r_context, cpy_r_init_type);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
attrs___Attribute_get_name(mypy___plugins___attrs___AttributeObject *self, void *closure)
{
    if (unlikely(self->_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'name' of 'Attribute' undefined");
        return NULL;
    }
    CPy_INCREF(self->_name);
    PyObject *retval = self->_name;
    return retval;
}

static int
attrs___Attribute_set_name(mypy___plugins___attrs___AttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Attribute' object attribute 'name' cannot be deleted");
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
attrs___Attribute_get_info(mypy___plugins___attrs___AttributeObject *self, void *closure)
{
    if (unlikely(self->_info == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'info' of 'Attribute' undefined");
        return NULL;
    }
    CPy_INCREF(self->_info);
    PyObject *retval = self->_info;
    return retval;
}

static int
attrs___Attribute_set_info(mypy___plugins___attrs___AttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Attribute' object attribute 'info' cannot be deleted");
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
attrs___Attribute_get_has_default(mypy___plugins___attrs___AttributeObject *self, void *closure)
{
    PyObject *retval = self->_has_default ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
attrs___Attribute_set_has_default(mypy___plugins___attrs___AttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Attribute' object attribute 'has_default' cannot be deleted");
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
attrs___Attribute_get_init(mypy___plugins___attrs___AttributeObject *self, void *closure)
{
    PyObject *retval = self->_init ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
attrs___Attribute_set_init(mypy___plugins___attrs___AttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Attribute' object attribute 'init' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_init = tmp;
    return 0;
}

static PyObject *
attrs___Attribute_get_kw_only(mypy___plugins___attrs___AttributeObject *self, void *closure)
{
    PyObject *retval = self->_kw_only ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
attrs___Attribute_set_kw_only(mypy___plugins___attrs___AttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Attribute' object attribute 'kw_only' cannot be deleted");
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
attrs___Attribute_get_converter(mypy___plugins___attrs___AttributeObject *self, void *closure)
{
    if (unlikely(self->_converter == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'converter' of 'Attribute' undefined");
        return NULL;
    }
    CPy_INCREF(self->_converter);
    PyObject *retval = self->_converter;
    return retval;
}

static int
attrs___Attribute_set_converter(mypy___plugins___attrs___AttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Attribute' object attribute 'converter' cannot be deleted");
        return -1;
    }
    if (self->_converter != NULL) {
        CPy_DECREF(self->_converter);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_attrs___Converter)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4676;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4676;
    CPy_TypeError("mypy.plugins.attrs.Converter or None", value); 
    tmp = NULL;
__LL4676: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_converter = tmp;
    return 0;
}

static PyObject *
attrs___Attribute_get_context(mypy___plugins___attrs___AttributeObject *self, void *closure)
{
    if (unlikely(self->_context == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'context' of 'Attribute' undefined");
        return NULL;
    }
    CPy_INCREF(self->_context);
    PyObject *retval = self->_context;
    return retval;
}

static int
attrs___Attribute_set_context(mypy___plugins___attrs___AttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Attribute' object attribute 'context' cannot be deleted");
        return -1;
    }
    if (self->_context != NULL) {
        CPy_DECREF(self->_context);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_nodes___Context)))
        tmp = value;
    else {
        CPy_TypeError("mypy.nodes.Context", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_context = tmp;
    return 0;
}

static PyObject *
attrs___Attribute_get_init_type(mypy___plugins___attrs___AttributeObject *self, void *closure)
{
    if (unlikely(self->_init_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'init_type' of 'Attribute' undefined");
        return NULL;
    }
    CPy_INCREF(self->_init_type);
    PyObject *retval = self->_init_type;
    return retval;
}

static int
attrs___Attribute_set_init_type(mypy___plugins___attrs___AttributeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Attribute' object attribute 'init_type' cannot be deleted");
        return -1;
    }
    if (self->_init_type != NULL) {
        CPy_DECREF(self->_init_type);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_types___Type))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4677;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4677;
    CPy_TypeError("mypy.types.Type or None", value); 
    tmp = NULL;
__LL4677: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_init_type = tmp;
    return 0;
}

static int
attrs___MethodAdder_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *attrs___MethodAdder_setup(PyTypeObject *type);
PyObject *CPyDef_attrs___MethodAdder(PyObject *cpy_r_ctx);

static PyObject *
attrs___MethodAdder_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_attrs___MethodAdder) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = attrs___MethodAdder_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_attrs___MethodAdder_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
attrs___MethodAdder_traverse(mypy___plugins___attrs___MethodAdderObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_ctx);
    Py_VISIT(self->_self_type);
    return 0;
}

static int
attrs___MethodAdder_clear(mypy___plugins___attrs___MethodAdderObject *self)
{
    Py_CLEAR(self->_ctx);
    Py_CLEAR(self->_self_type);
    return 0;
}

static void
attrs___MethodAdder_dealloc(mypy___plugins___attrs___MethodAdderObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, attrs___MethodAdder_dealloc)
    attrs___MethodAdder_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem attrs___MethodAdder_vtable[2];
static bool
CPyDef_attrs___MethodAdder_trait_vtable_setup(void)
{
    CPyVTableItem attrs___MethodAdder_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_attrs___MethodAdder_____init__,
        (CPyVTableItem)CPyDef_attrs___MethodAdder___add_method,
    };
    memcpy(attrs___MethodAdder_vtable, attrs___MethodAdder_vtable_scratch, sizeof(attrs___MethodAdder_vtable));
    return 1;
}

static PyObject *
attrs___MethodAdder_get_ctx(mypy___plugins___attrs___MethodAdderObject *self, void *closure);
static int
attrs___MethodAdder_set_ctx(mypy___plugins___attrs___MethodAdderObject *self, PyObject *value, void *closure);
static PyObject *
attrs___MethodAdder_get_self_type(mypy___plugins___attrs___MethodAdderObject *self, void *closure);
static int
attrs___MethodAdder_set_self_type(mypy___plugins___attrs___MethodAdderObject *self, PyObject *value, void *closure);

static PyGetSetDef attrs___MethodAdder_getseters[] = {
    {"ctx",
     (getter)attrs___MethodAdder_get_ctx, (setter)attrs___MethodAdder_set_ctx,
     NULL, NULL},
    {"self_type",
     (getter)attrs___MethodAdder_get_self_type, (setter)attrs___MethodAdder_set_self_type,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef attrs___MethodAdder_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_attrs___MethodAdder_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_method",
     (PyCFunction)CPyPy_attrs___MethodAdder___add_method,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_attrs___MethodAdder_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "MethodAdder",
    .tp_new = attrs___MethodAdder_new,
    .tp_dealloc = (destructor)attrs___MethodAdder_dealloc,
    .tp_traverse = (traverseproc)attrs___MethodAdder_traverse,
    .tp_clear = (inquiry)attrs___MethodAdder_clear,
    .tp_getset = attrs___MethodAdder_getseters,
    .tp_methods = attrs___MethodAdder_methods,
    .tp_init = attrs___MethodAdder_init,
    .tp_basicsize = sizeof(mypy___plugins___attrs___MethodAdderObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_attrs___MethodAdder_template = &CPyType_attrs___MethodAdder_template_;

static PyObject *
attrs___MethodAdder_setup(PyTypeObject *type)
{
    mypy___plugins___attrs___MethodAdderObject *self;
    self = (mypy___plugins___attrs___MethodAdderObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = attrs___MethodAdder_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_attrs___MethodAdder(PyObject *cpy_r_ctx)
{
    PyObject *self = attrs___MethodAdder_setup(CPyType_attrs___MethodAdder);
    if (self == NULL)
        return NULL;
    char res = CPyDef_attrs___MethodAdder_____init__(self, cpy_r_ctx);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
attrs___MethodAdder_get_ctx(mypy___plugins___attrs___MethodAdderObject *self, void *closure)
{
    if (unlikely(self->_ctx == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ctx' of 'MethodAdder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ctx);
    PyObject *retval = self->_ctx;
    return retval;
}

static int
attrs___MethodAdder_set_ctx(mypy___plugins___attrs___MethodAdderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MethodAdder' object attribute 'ctx' cannot be deleted");
        return -1;
    }
    if (self->_ctx != NULL) {
        CPy_DECREF(self->_ctx);
    }
    PyObject * tmp;
    if (likely(PyTuple_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("tuple", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_ctx = tmp;
    return 0;
}

static PyObject *
attrs___MethodAdder_get_self_type(mypy___plugins___attrs___MethodAdderObject *self, void *closure)
{
    if (unlikely(self->_self_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'self_type' of 'MethodAdder' undefined");
        return NULL;
    }
    CPy_INCREF(self->_self_type);
    PyObject *retval = self->_self_type;
    return retval;
}

static int
attrs___MethodAdder_set_self_type(mypy___plugins___attrs___MethodAdderObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MethodAdder' object attribute 'self_type' cannot be deleted");
        return -1;
    }
    if (self->_self_type != NULL) {
        CPy_DECREF(self->_self_type);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_types___Instance)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4678;
    if (Py_TYPE(value) == CPyType_types___TupleType)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4678;
    CPy_TypeError("union[mypy.types.Instance, mypy.types.TupleType]", value); 
    tmp = NULL;
__LL4678: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_self_type = tmp;
    return 0;
}

static PyObject *attrs____attributes_from_assignment_env_setup(PyTypeObject *type);
PyObject *CPyDef_attrs____attributes_from_assignment_env(void);

static PyObject *
attrs____attributes_from_assignment_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_attrs____attributes_from_assignment_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return attrs____attributes_from_assignment_env_setup(type);
}

static int
attrs____attributes_from_assignment_env_traverse(mypy___plugins___attrs____attributes_from_assignment_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_ctx);
    Py_VISIT(self->_stmt);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->_lvalue);
    Py_VISIT(self->_lvalues);
    Py_VISIT(self->_rvalues);
    Py_VISIT(self->___mypyc_temp__2);
    Py_VISIT(self->___mypyc_temp__4);
    Py_VISIT(self->_lhs);
    Py_VISIT(self->_rvalue);
    Py_VISIT(self->_attr);
    return 0;
}

static int
attrs____attributes_from_assignment_env_clear(mypy___plugins___attrs____attributes_from_assignment_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_ctx);
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
    Py_CLEAR(self->_lvalue);
    Py_CLEAR(self->_lvalues);
    Py_CLEAR(self->_rvalues);
    Py_CLEAR(self->___mypyc_temp__2);
    Py_CLEAR(self->___mypyc_temp__4);
    Py_CLEAR(self->_lhs);
    Py_CLEAR(self->_rvalue);
    Py_CLEAR(self->_attr);
    return 0;
}

static void
attrs____attributes_from_assignment_env_dealloc(mypy___plugins___attrs____attributes_from_assignment_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, attrs____attributes_from_assignment_env_dealloc)
    attrs____attributes_from_assignment_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem attrs____attributes_from_assignment_env_vtable[1];
static bool
CPyDef_attrs____attributes_from_assignment_env_trait_vtable_setup(void)
{
    CPyVTableItem attrs____attributes_from_assignment_env_vtable_scratch[] = {
        NULL
    };
    memcpy(attrs____attributes_from_assignment_env_vtable, attrs____attributes_from_assignment_env_vtable_scratch, sizeof(attrs____attributes_from_assignment_env_vtable));
    return 1;
}

static PyMethodDef attrs____attributes_from_assignment_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_attrs____attributes_from_assignment_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_attributes_from_assignment_env",
    .tp_new = attrs____attributes_from_assignment_env_new,
    .tp_dealloc = (destructor)attrs____attributes_from_assignment_env_dealloc,
    .tp_traverse = (traverseproc)attrs____attributes_from_assignment_env_traverse,
    .tp_clear = (inquiry)attrs____attributes_from_assignment_env_clear,
    .tp_methods = attrs____attributes_from_assignment_env_methods,
    .tp_basicsize = sizeof(mypy___plugins___attrs____attributes_from_assignment_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_attrs____attributes_from_assignment_env_template = &CPyType_attrs____attributes_from_assignment_env_template_;

static PyObject *
attrs____attributes_from_assignment_env_setup(PyTypeObject *type)
{
    mypy___plugins___attrs____attributes_from_assignment_envObject *self;
    self = (mypy___plugins___attrs____attributes_from_assignment_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = attrs____attributes_from_assignment_env_vtable;
    self->_auto_attribs = 2;
    self->_kw_only = 2;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__1 = CPY_INT_TAG;
    self->___mypyc_temp__3 = CPY_INT_TAG;
    self->___mypyc_temp__5 = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_attrs____attributes_from_assignment_env(void)
{
    PyObject *self = attrs____attributes_from_assignment_env_setup(CPyType_attrs____attributes_from_assignment_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *attrs____attributes_from_assignment_gen_setup(PyTypeObject *type);
PyObject *CPyDef_attrs____attributes_from_assignment_gen(void);

static PyObject *
attrs____attributes_from_assignment_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_attrs____attributes_from_assignment_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return attrs____attributes_from_assignment_gen_setup(type);
}

static int
attrs____attributes_from_assignment_gen_traverse(mypy___plugins___attrs____attributes_from_assignment_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
attrs____attributes_from_assignment_gen_clear(mypy___plugins___attrs____attributes_from_assignment_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
attrs____attributes_from_assignment_gen_dealloc(mypy___plugins___attrs____attributes_from_assignment_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, attrs____attributes_from_assignment_gen_dealloc)
    attrs____attributes_from_assignment_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem attrs____attributes_from_assignment_gen_vtable[6];
static bool
CPyDef_attrs____attributes_from_assignment_gen_trait_vtable_setup(void)
{
    CPyVTableItem attrs____attributes_from_assignment_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_attrs____attributes_from_assignment_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_attrs____attributes_from_assignment_gen_____next__,
        (CPyVTableItem)CPyDef_attrs____attributes_from_assignment_gen___send,
        (CPyVTableItem)CPyDef_attrs____attributes_from_assignment_gen_____iter__,
        (CPyVTableItem)CPyDef_attrs____attributes_from_assignment_gen___throw,
        (CPyVTableItem)CPyDef_attrs____attributes_from_assignment_gen___close,
    };
    memcpy(attrs____attributes_from_assignment_gen_vtable, attrs____attributes_from_assignment_gen_vtable_scratch, sizeof(attrs____attributes_from_assignment_gen_vtable));
    return 1;
}

static PyMethodDef attrs____attributes_from_assignment_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_attrs____attributes_from_assignment_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_attrs____attributes_from_assignment_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_attrs____attributes_from_assignment_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_attrs____attributes_from_assignment_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_attrs____attributes_from_assignment_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_attrs____attributes_from_assignment_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_attrs____attributes_from_assignment_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_attributes_from_assignment_gen",
    .tp_new = attrs____attributes_from_assignment_gen_new,
    .tp_dealloc = (destructor)attrs____attributes_from_assignment_gen_dealloc,
    .tp_traverse = (traverseproc)attrs____attributes_from_assignment_gen_traverse,
    .tp_clear = (inquiry)attrs____attributes_from_assignment_gen_clear,
    .tp_methods = attrs____attributes_from_assignment_gen_methods,
    .tp_iter = CPyDef_attrs____attributes_from_assignment_gen_____iter__,
    .tp_iternext = CPyDef_attrs____attributes_from_assignment_gen_____next__,
    .tp_basicsize = sizeof(mypy___plugins___attrs____attributes_from_assignment_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_attrs____attributes_from_assignment_gen_template = &CPyType_attrs____attributes_from_assignment_gen_template_;

static PyObject *
attrs____attributes_from_assignment_gen_setup(PyTypeObject *type)
{
    mypy___plugins___attrs____attributes_from_assignment_genObject *self;
    self = (mypy___plugins___attrs____attributes_from_assignment_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = attrs____attributes_from_assignment_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_attrs____attributes_from_assignment_gen(void)
{
    PyObject *self = attrs____attributes_from_assignment_gen_setup(CPyType_attrs____attributes_from_assignment_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef attrsmodule_methods[] = {
    {"_determine_eq_order", (PyCFunction)CPyPy_attrs____determine_eq_order, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_get_decorator_optional_bool_argument", (PyCFunction)CPyPy_attrs____get_decorator_optional_bool_argument, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"attr_tag_callback", (PyCFunction)CPyPy_attrs___attr_tag_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"attr_class_maker_callback", (PyCFunction)CPyPy_attrs___attr_class_maker_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_get_frozen", (PyCFunction)CPyPy_attrs____get_frozen, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_analyze_class", (PyCFunction)CPyPy_attrs____analyze_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_add_empty_metadata", (PyCFunction)CPyPy_attrs____add_empty_metadata, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_detect_auto_attribs", (PyCFunction)CPyPy_attrs____detect_auto_attribs, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_attributes_from_assignment", (PyCFunction)CPyPy_attrs____attributes_from_assignment, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_cleanup_decorator", (PyCFunction)CPyPy_attrs____cleanup_decorator, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_attribute_from_auto_attrib", (PyCFunction)CPyPy_attrs____attribute_from_auto_attrib, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_attribute_from_attrib_maker", (PyCFunction)CPyPy_attrs____attribute_from_attrib_maker, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_parse_converter", (PyCFunction)CPyPy_attrs____parse_converter, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_valid_overloaded_converter", (PyCFunction)CPyPy_attrs___is_valid_overloaded_converter, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_parse_assignments", (PyCFunction)CPyPy_attrs____parse_assignments, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_add_order", (PyCFunction)CPyPy_attrs____add_order, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_make_frozen", (PyCFunction)CPyPy_attrs____make_frozen, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_add_init", (PyCFunction)CPyPy_attrs____add_init, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_add_attrs_magic_attribute", (PyCFunction)CPyPy_attrs____add_attrs_magic_attribute, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_add_slots", (PyCFunction)CPyPy_attrs____add_slots, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_add_match_args", (PyCFunction)CPyPy_attrs____add_match_args, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_get_attrs_init_type", (PyCFunction)CPyPy_attrs____get_attrs_init_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_fail_not_attrs_class", (PyCFunction)CPyPy_attrs____fail_not_attrs_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_get_expanded_attr_types", (PyCFunction)CPyPy_attrs____get_expanded_attr_types, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_meet_fields", (PyCFunction)CPyPy_attrs____meet_fields, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"evolve_function_sig_callback", (PyCFunction)CPyPy_attrs___evolve_function_sig_callback, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef attrsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.plugins.attrs",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    attrsmodule_methods
};

PyObject *CPyInit_mypy___plugins___attrs(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___plugins___attrs_internal) {
        Py_INCREF(CPyModule_mypy___plugins___attrs_internal);
        return CPyModule_mypy___plugins___attrs_internal;
    }
    CPyModule_mypy___plugins___attrs_internal = PyModule_Create(&attrsmodule);
    if (unlikely(CPyModule_mypy___plugins___attrs_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___plugins___attrs_internal, "__name__");
    CPyStatic_attrs___globals = PyModule_GetDict(CPyModule_mypy___plugins___attrs_internal);
    if (unlikely(CPyStatic_attrs___globals == NULL))
        goto fail;
    CPyType_attrs____attributes_from_assignment_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_attrs____attributes_from_assignment_env_template, NULL, modname);
    if (unlikely(!CPyType_attrs____attributes_from_assignment_env))
        goto fail;
    CPyType_attrs____attributes_from_assignment_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_attrs____attributes_from_assignment_gen_template, NULL, modname);
    if (unlikely(!CPyType_attrs____attributes_from_assignment_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_attrs_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___plugins___attrs_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___plugins___attrs_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_attrs___attr_class_makers);
    CPyStatic_attrs___attr_class_makers = NULL;
    CPy_XDECREF(CPyStatic_attrs___attr_dataclass_makers);
    CPyStatic_attrs___attr_dataclass_makers = NULL;
    CPy_XDECREF(CPyStatic_attrs___attr_frozen_makers);
    CPyStatic_attrs___attr_frozen_makers = NULL;
    CPy_XDECREF(CPyStatic_attrs___attr_define_makers);
    CPyStatic_attrs___attr_define_makers = NULL;
    CPy_XDECREF(CPyStatic_attrs___attr_attrib_makers);
    CPyStatic_attrs___attr_attrib_makers = NULL;
    CPy_XDECREF(CPyStatic_attrs___attr_optional_converters);
    CPyStatic_attrs___attr_optional_converters = NULL;
    Py_CLEAR(CPyType_attrs___Converter);
    Py_CLEAR(CPyType_attrs___Attribute);
    Py_CLEAR(CPyType_attrs___MethodAdder);
    Py_CLEAR(CPyType_attrs____attributes_from_assignment_env);
    Py_CLEAR(CPyType_attrs____attributes_from_assignment_gen);
    return NULL;
}

char CPyDef_attrs___Converter_____init__(PyObject *cpy_r_self, PyObject *cpy_r_init_type, PyObject *cpy_r_ret_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    if (cpy_r_init_type != NULL) goto CPyL5;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_init_type = cpy_r_r0;
CPyL2: ;
    if (cpy_r_ret_type != NULL) goto CPyL6;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_ret_type = cpy_r_r1;
CPyL4: ;
    ((mypy___plugins___attrs___ConverterObject *)cpy_r_self)->_init_type = cpy_r_init_type;
    ((mypy___plugins___attrs___ConverterObject *)cpy_r_self)->_ret_type = cpy_r_ret_type;
    return 1;
CPyL5: ;
    CPy_INCREF(cpy_r_init_type);
    goto CPyL2;
CPyL6: ;
    CPy_INCREF(cpy_r_ret_type);
    goto CPyL4;
}

PyObject *CPyPy_attrs___Converter_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"init_type", "ret_type", 0};
    PyObject *obj_init_type = NULL;
    PyObject *obj_ret_type = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "|OO", "__init__", kwlist, &obj_init_type, &obj_ret_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrs___Converter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.attrs.Converter", obj_self); 
        goto fail;
    }
    PyObject *arg_init_type;
    if (obj_init_type == NULL) {
        arg_init_type = NULL;
        goto __LL4679;
    }
    if (PyObject_TypeCheck(obj_init_type, CPyType_types___Type))
        arg_init_type = obj_init_type;
    else {
        arg_init_type = NULL;
    }
    if (arg_init_type != NULL) goto __LL4679;
    if (obj_init_type == Py_None)
        arg_init_type = obj_init_type;
    else {
        arg_init_type = NULL;
    }
    if (arg_init_type != NULL) goto __LL4679;
    CPy_TypeError("mypy.types.Type or None", obj_init_type); 
    goto fail;
__LL4679: ;
    PyObject *arg_ret_type;
    if (obj_ret_type == NULL) {
        arg_ret_type = NULL;
        goto __LL4680;
    }
    if (PyObject_TypeCheck(obj_ret_type, CPyType_types___Type))
        arg_ret_type = obj_ret_type;
    else {
        arg_ret_type = NULL;
    }
    if (arg_ret_type != NULL) goto __LL4680;
    if (obj_ret_type == Py_None)
        arg_ret_type = obj_ret_type;
    else {
        arg_ret_type = NULL;
    }
    if (arg_ret_type != NULL) goto __LL4680;
    CPy_TypeError("mypy.types.Type or None", obj_ret_type); 
    goto fail;
__LL4680: ;
    char retval = CPyDef_attrs___Converter_____init__(arg_self, arg_init_type, arg_ret_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "__init__", 96, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs___Attribute_____init__(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_info, char cpy_r_has_default, char cpy_r_init, char cpy_r_kw_only, PyObject *cpy_r_converter, PyObject *cpy_r_context, PyObject *cpy_r_init_type) {
    CPy_INCREF(cpy_r_name);
    ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_name = cpy_r_name;
    CPy_INCREF(cpy_r_info);
    ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_info = cpy_r_info;
    ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_has_default = cpy_r_has_default;
    ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_init = cpy_r_init;
    ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_kw_only = cpy_r_kw_only;
    CPy_INCREF(cpy_r_converter);
    ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_converter = cpy_r_converter;
    CPy_INCREF(cpy_r_context);
    ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_context = cpy_r_context;
    CPy_INCREF(cpy_r_init_type);
    ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_init_type = cpy_r_init_type;
    return 1;
}

PyObject *CPyPy_attrs___Attribute_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "info", "has_default", "init", "kw_only", "converter", "context", "init_type", 0};
    PyObject *obj_name;
    PyObject *obj_info;
    PyObject *obj_has_default;
    PyObject *obj_init;
    PyObject *obj_kw_only;
    PyObject *obj_converter;
    PyObject *obj_context;
    PyObject *obj_init_type;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOOOOOO", "__init__", kwlist, &obj_name, &obj_info, &obj_has_default, &obj_init, &obj_kw_only, &obj_converter, &obj_context, &obj_init_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrs___Attribute))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.attrs.Attribute", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    char arg_has_default;
    if (unlikely(!PyBool_Check(obj_has_default))) {
        CPy_TypeError("bool", obj_has_default); goto fail;
    } else
        arg_has_default = obj_has_default == Py_True;
    char arg_init;
    if (unlikely(!PyBool_Check(obj_init))) {
        CPy_TypeError("bool", obj_init); goto fail;
    } else
        arg_init = obj_init == Py_True;
    char arg_kw_only;
    if (unlikely(!PyBool_Check(obj_kw_only))) {
        CPy_TypeError("bool", obj_kw_only); goto fail;
    } else
        arg_kw_only = obj_kw_only == Py_True;
    PyObject *arg_converter;
    if (Py_TYPE(obj_converter) == CPyType_attrs___Converter)
        arg_converter = obj_converter;
    else {
        arg_converter = NULL;
    }
    if (arg_converter != NULL) goto __LL4681;
    if (obj_converter == Py_None)
        arg_converter = obj_converter;
    else {
        arg_converter = NULL;
    }
    if (arg_converter != NULL) goto __LL4681;
    CPy_TypeError("mypy.plugins.attrs.Converter or None", obj_converter); 
    goto fail;
__LL4681: ;
    PyObject *arg_context;
    if (likely(PyObject_TypeCheck(obj_context, CPyType_nodes___Context)))
        arg_context = obj_context;
    else {
        CPy_TypeError("mypy.nodes.Context", obj_context); 
        goto fail;
    }
    PyObject *arg_init_type;
    if (PyObject_TypeCheck(obj_init_type, CPyType_types___Type))
        arg_init_type = obj_init_type;
    else {
        arg_init_type = NULL;
    }
    if (arg_init_type != NULL) goto __LL4682;
    if (obj_init_type == Py_None)
        arg_init_type = obj_init_type;
    else {
        arg_init_type = NULL;
    }
    if (arg_init_type != NULL) goto __LL4682;
    CPy_TypeError("mypy.types.Type or None", obj_init_type); 
    goto fail;
__LL4682: ;
    char retval = CPyDef_attrs___Attribute_____init__(arg_self, arg_name, arg_info, arg_has_default, arg_init, arg_kw_only, arg_converter, arg_context, arg_init_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "__init__", 104, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs___Attribute___argument(PyObject *cpy_r_self, PyObject *cpy_r_ctx) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_init_type;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
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
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_converter_vars;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_init_vars;
    CPyPtr cpy_r_r35;
    int64_t cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    CPyPtr cpy_r_r39;
    int64_t cpy_r_r40;
    CPyTagged cpy_r_r41;
    CPyPtr cpy_r_r42;
    int64_t cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyPtr cpy_r_r49;
    int64_t cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    CPyPtr cpy_r_r53;
    int64_t cpy_r_r54;
    CPyTagged cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_binder;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_variables;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    CPyTagged cpy_r_r78;
    CPyTagged cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_unannotated;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyTagged cpy_r_r93;
    CPyTagged cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_proper_type;
    PyObject *cpy_r_r99;
    CPyPtr cpy_r_r100;
    PyObject *cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyTagged cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_arg_kind;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject **cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    size_t __tmp4683;
    size_t __tmp4684;
    cpy_r_r0 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_init;
    if (cpy_r_r0) goto CPyL3;
CPyL1: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 126, CPyStatic_attrs___globals);
        goto CPyL95;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_init_type = cpy_r_r2;
    CPy_DECREF(cpy_r_init_type);
    cpy_r_r3 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_converter;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    CPy_DECREF(cpy_r_r3);
    if (!cpy_r_r5) goto CPyL37;
    cpy_r_r6 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_converter;
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 129, CPyStatic_attrs___globals, "mypy.plugins.attrs.Converter", cpy_r_r6);
        goto CPyL95;
    }
    cpy_r_r8 = ((mypy___plugins___attrs___ConverterObject *)cpy_r_r7)->_init_type;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 != cpy_r_r9;
    CPy_DECREF(cpy_r_r8);
    if (!cpy_r_r10) goto CPyL32;
    cpy_r_r11 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_converter;
    if (likely(cpy_r_r11 != Py_None))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 130, CPyStatic_attrs___globals, "mypy.plugins.attrs.Converter", cpy_r_r11);
        goto CPyL95;
    }
    cpy_r_r13 = ((mypy___plugins___attrs___ConverterObject *)cpy_r_r12)->_init_type;
    CPy_INCREF(cpy_r_r13);
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 130, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_r13);
        goto CPyL95;
    }
    cpy_r_init_type = cpy_r_r14;
    CPy_INCREF(cpy_r_init_type);
    if (likely(cpy_r_init_type != Py_None))
        cpy_r_r15 = cpy_r_init_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 131, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_init_type);
        goto CPyL96;
    }
    cpy_r_r16 = PyObject_IsTrue(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 131, CPyStatic_attrs___globals);
        goto CPyL96;
    }
    cpy_r_r18 = cpy_r_r16;
    if (!cpy_r_r18) goto CPyL43;
    cpy_r_r19 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_init_type;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_r19 != cpy_r_r20;
    CPy_DECREF(cpy_r_r19);
    if (!cpy_r_r21) goto CPyL43;
    cpy_r_r22 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_converter;
    if (likely(cpy_r_r22 != Py_None))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 131, CPyStatic_attrs___globals, "mypy.plugins.attrs.Converter", cpy_r_r22);
        goto CPyL96;
    }
    cpy_r_r24 = ((mypy___plugins___attrs___ConverterObject *)cpy_r_r23)->_ret_type;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r26 = cpy_r_r24 != cpy_r_r25;
    CPy_DECREF(cpy_r_r24);
    if (!cpy_r_r26) goto CPyL43;
    cpy_r_r27 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_converter;
    if (likely(cpy_r_r27 != Py_None))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 134, CPyStatic_attrs___globals, "mypy.plugins.attrs.Converter", cpy_r_r27);
        goto CPyL96;
    }
    cpy_r_r29 = ((mypy___plugins___attrs___ConverterObject *)cpy_r_r28)->_ret_type;
    CPy_INCREF(cpy_r_r29);
    if (likely(cpy_r_r29 != Py_None))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 134, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_r29);
        goto CPyL96;
    }
    cpy_r_r31 = CPyDef_typeops___get_type_vars(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 134, CPyStatic_attrs___globals);
        goto CPyL96;
    }
    cpy_r_converter_vars = cpy_r_r31;
    cpy_r_r32 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_init_type;
    CPy_INCREF(cpy_r_r32);
    if (likely(cpy_r_r32 != Py_None))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 135, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_r32);
        goto CPyL97;
    }
    cpy_r_r34 = CPyDef_typeops___get_type_vars(cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 135, CPyStatic_attrs___globals);
        goto CPyL97;
    }
    cpy_r_init_vars = cpy_r_r34;
    cpy_r_r35 = (CPyPtr)&((PyVarObject *)cpy_r_converter_vars)->ob_size;
    cpy_r_r36 = *(int64_t *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 << 1;
    cpy_r_r38 = cpy_r_r37 != 0;
    if (!cpy_r_r38) goto CPyL98;
    cpy_r_r39 = (CPyPtr)&((PyVarObject *)cpy_r_converter_vars)->ob_size;
    cpy_r_r40 = *(int64_t *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 << 1;
    cpy_r_r42 = (CPyPtr)&((PyVarObject *)cpy_r_init_vars)->ob_size;
    cpy_r_r43 = *(int64_t *)cpy_r_r42;
    cpy_r_r44 = cpy_r_r43 << 1;
    cpy_r_r45 = cpy_r_r41 == cpy_r_r44;
    if (!cpy_r_r45) goto CPyL98;
    cpy_r_r46 = PyDict_New();
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 137, CPyStatic_attrs___globals);
        goto CPyL99;
    }
    cpy_r_r47 = 0;
    cpy_r_r48 = 0;
CPyL23: ;
    cpy_r_r49 = (CPyPtr)&((PyVarObject *)cpy_r_converter_vars)->ob_size;
    cpy_r_r50 = *(int64_t *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 << 1;
    cpy_r_r52 = (Py_ssize_t)cpy_r_r47 < (Py_ssize_t)cpy_r_r51;
    if (!cpy_r_r52) goto CPyL100;
    cpy_r_r53 = (CPyPtr)&((PyVarObject *)cpy_r_init_vars)->ob_size;
    cpy_r_r54 = *(int64_t *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 << 1;
    cpy_r_r56 = (Py_ssize_t)cpy_r_r48 < (Py_ssize_t)cpy_r_r55;
    if (!cpy_r_r56) goto CPyL100;
    cpy_r_r57 = CPyList_GetItemUnsafe(cpy_r_converter_vars, cpy_r_r47);
    if (likely(Py_TYPE(cpy_r_r57) == CPyType_types___TypeVarType))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 137, CPyStatic_attrs___globals, "mypy.types.TypeVarType", cpy_r_r57);
        goto CPyL101;
    }
    cpy_r_binder = cpy_r_r58;
    cpy_r_r59 = CPyList_GetItemUnsafe(cpy_r_init_vars, cpy_r_r48);
    if (likely(Py_TYPE(cpy_r_r59) == CPyType_types___TypeVarType))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 137, CPyStatic_attrs___globals, "mypy.types.TypeVarType", cpy_r_r59);
        goto CPyL102;
    }
    cpy_r_arg = cpy_r_r60;
    cpy_r_r61 = ((mypy___types___TypeVarTypeObject *)cpy_r_binder)->_id;
    CPy_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_binder);
    cpy_r_r62 = CPyDict_SetItem(cpy_r_r46, cpy_r_r61, cpy_r_arg);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 137, CPyStatic_attrs___globals);
        goto CPyL101;
    }
    cpy_r_r64 = cpy_r_r47 + 2;
    cpy_r_r47 = cpy_r_r64;
    cpy_r_r65 = cpy_r_r48 + 2;
    cpy_r_r48 = cpy_r_r65;
    goto CPyL23;
CPyL29: ;
    cpy_r_variables = cpy_r_r46;
    if (likely(cpy_r_init_type != Py_None))
        cpy_r_r66 = cpy_r_init_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 140, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_init_type);
        goto CPyL103;
    }
    cpy_r_r67 = CPyDef_expandtype___expand_type(cpy_r_r66, cpy_r_variables);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_variables);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 140, CPyStatic_attrs___globals);
        goto CPyL95;
    }
    cpy_r_init_type = cpy_r_r67;
    goto CPyL43;
CPyL32: ;
    cpy_r_r68 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 142, CPyStatic_attrs___globals);
        goto CPyL95;
    }
    if (likely(Py_TYPE(cpy_r_r68) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 142, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r68);
        goto CPyL95;
    }
    cpy_r_r70 = CPyStatics[4382]; /* 'Cannot determine __init__ type from converter' */
    cpy_r_r71 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_context;
    CPy_INCREF(cpy_r_r71);
    cpy_r_r72 = 2;
    cpy_r_r73 = 2;
    cpy_r_r74 = NULL;
    cpy_r_r75 = CPY_GET_METHOD_TRAIT(cpy_r_r69, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r69, cpy_r_r70, cpy_r_r71, cpy_r_r72, cpy_r_r73, cpy_r_r74); /* fail */
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 142, CPyStatic_attrs___globals);
        goto CPyL95;
    }
    cpy_r_r76 = NULL;
    cpy_r_r77 = NULL;
    cpy_r_r78 = CPY_INT_TAG;
    cpy_r_r79 = CPY_INT_TAG;
    cpy_r_r80 = CPyDef_types___AnyType(10, cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 143, CPyStatic_attrs___globals);
        goto CPyL95;
    }
    cpy_r_init_type = cpy_r_r80;
    goto CPyL43;
CPyL37: ;
    cpy_r_r81 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_init_type;
    CPy_INCREF(cpy_r_r81);
    cpy_r_r82 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r83 = cpy_r_r81 != cpy_r_r82;
    if (!cpy_r_r83) goto CPyL104;
    cpy_r_r84 = cpy_r_r81;
    goto CPyL42;
CPyL39: ;
    cpy_r_r85 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_info;
    CPy_INCREF(cpy_r_r85);
    cpy_r_r86 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r86);
    cpy_r_r87 = CPyDef_nodes___TypeInfo_____getitem__(cpy_r_r85, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 145, CPyStatic_attrs___globals);
        goto CPyL95;
    }
    cpy_r_r88 = CPY_GET_ATTR(cpy_r_r87, CPyType_nodes___SymbolTableNode, 2, mypy___nodes___SymbolTableNodeObject, PyObject *); /* type */
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 145, CPyStatic_attrs___globals);
        goto CPyL95;
    }
CPyL41: ;
    cpy_r_r84 = cpy_r_r88;
CPyL42: ;
    cpy_r_init_type = cpy_r_r84;
CPyL43: ;
    cpy_r_unannotated = 0;
    cpy_r_r89 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r90 = cpy_r_init_type == cpy_r_r89;
    if (cpy_r_r90) {
        goto CPyL105;
    } else
        goto CPyL46;
CPyL44: ;
    cpy_r_unannotated = 1;
    cpy_r_r91 = NULL;
    cpy_r_r92 = NULL;
    cpy_r_r93 = CPY_INT_TAG;
    cpy_r_r94 = CPY_INT_TAG;
    cpy_r_r95 = CPyDef_types___AnyType(2, cpy_r_r91, cpy_r_r92, cpy_r_r93, cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 151, CPyStatic_attrs___globals);
        goto CPyL95;
    }
    cpy_r_init_type = cpy_r_r95;
    goto CPyL53;
CPyL46: ;
    CPy_INCREF(cpy_r_init_type);
    if (likely(cpy_r_init_type != Py_None))
        cpy_r_r96 = cpy_r_init_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 153, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_init_type);
        goto CPyL96;
    }
    cpy_r_r97 = CPyDef_types___get_proper_type(cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 153, CPyStatic_attrs___globals);
        goto CPyL96;
    }
    if (likely(cpy_r_r97 != Py_None))
        cpy_r_r98 = cpy_r_r97;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 153, CPyStatic_attrs___globals, "mypy.types.ProperType", cpy_r_r97);
        goto CPyL96;
    }
    cpy_r_proper_type = cpy_r_r98;
    cpy_r_r99 = (PyObject *)CPyType_types___AnyType;
    cpy_r_r100 = (CPyPtr)&((PyObject *)cpy_r_proper_type)->ob_type;
    cpy_r_r101 = *(PyObject * *)cpy_r_r100;
    cpy_r_r102 = cpy_r_r101 == cpy_r_r99;
    if (!cpy_r_r102) goto CPyL106;
    if (likely(Py_TYPE(cpy_r_proper_type) == CPyType_types___AnyType))
        cpy_r_r103 = cpy_r_proper_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 155, CPyStatic_attrs___globals, "mypy.types.AnyType", cpy_r_proper_type);
        goto CPyL107;
    }
    cpy_r_r104 = ((mypy___types___AnyTypeObject *)cpy_r_r103)->_type_of_any;
    cpy_r_r105 = cpy_r_r104 == 2;
    CPy_DECREF(cpy_r_proper_type);
    if (!cpy_r_r105) goto CPyL53;
    cpy_r_unannotated = 1;
CPyL53: ;
    if (!cpy_r_unannotated) goto CPyL67;
    cpy_r_r106 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 158, CPyStatic_attrs___globals);
        goto CPyL96;
    }
    if (likely(Py_TYPE(cpy_r_r106) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r107 = cpy_r_r106;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 158, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r106);
        goto CPyL96;
    }
    __tmp4683 = CPy_FindAttrOffset(CPyType_plugin___SemanticAnalyzerPluginInterface, ((mypy___plugin___SemanticAnalyzerPluginInterfaceObject *)cpy_r_r107)->vtable, 1);
    cpy_r_r108 = *(PyObject * *)((char *)cpy_r_r107 + __tmp4683);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "argument", "SemanticAnalyzerPluginInterface", "options", 158, CPyStatic_attrs___globals);
        goto CPyL108;
    }
CPyL57: ;
    cpy_r_r109 = ((mypy___options___OptionsObject *)cpy_r_r108)->_disallow_untyped_defs;
    CPy_DECREF(cpy_r_r107);
    if (!cpy_r_r109) goto CPyL67;
CPyL58: ;
    cpy_r_r110 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_info;
    CPy_INCREF(cpy_r_r110);
    cpy_r_r111 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r111);
    cpy_r_r112 = CPyDef_nodes___TypeInfo_____getitem__(cpy_r_r110, cpy_r_r111);
    CPy_DECREF(cpy_r_r111);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 163, CPyStatic_attrs___globals);
        goto CPyL96;
    }
    cpy_r_r113 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r112)->_node;
    CPy_INCREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r112);
    cpy_r_node = cpy_r_r113;
    cpy_r_r114 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r115 = cpy_r_node != cpy_r_r114;
    if (cpy_r_r115) {
        goto CPyL62;
    } else
        goto CPyL109;
CPyL60: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r116 = 0;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 164, CPyStatic_attrs___globals);
        goto CPyL95;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r117 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 165, CPyStatic_attrs___globals);
        goto CPyL110;
    }
    if (likely(Py_TYPE(cpy_r_r117) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r118 = cpy_r_r117;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 165, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r117);
        goto CPyL110;
    }
    __tmp4684 = CPy_FindAttrOffset(CPyType_plugin___SemanticAnalyzerPluginInterface, ((mypy___plugin___SemanticAnalyzerPluginInterfaceObject *)cpy_r_r118)->vtable, 3);
    cpy_r_r119 = *(PyObject * *)((char *)cpy_r_r118 + __tmp4684);
    if (unlikely(cpy_r_r119 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'msg' of 'SemanticAnalyzerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r119);
    }
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 165, CPyStatic_attrs___globals);
        goto CPyL110;
    }
CPyL65: ;
    if (likely(cpy_r_node != Py_None))
        cpy_r_r120 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 165, CPyStatic_attrs___globals, "mypy.nodes.SymbolNode", cpy_r_node);
        goto CPyL111;
    }
    cpy_r_r121 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_context;
    CPy_INCREF(cpy_r_r121);
    cpy_r_r122 = NULL;
    cpy_r_r123 = CPyDef_messages___MessageBuilder___need_annotation_for_var(cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122);
    CPy_DECREF(cpy_r_r120);
    CPy_DECREF(cpy_r_r121);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r123 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 165, CPyStatic_attrs___globals);
        goto CPyL96;
    }
CPyL67: ;
    cpy_r_r124 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_kw_only;
    if (!cpy_r_r124) goto CPyL78;
CPyL68: ;
    cpy_r_r125 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_has_default;
    if (!cpy_r_r125) goto CPyL73;
CPyL69: ;
    cpy_r_r126 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (unlikely(cpy_r_r126 == NULL)) {
        goto CPyL112;
    } else
        goto CPyL72;
CPyL70: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r127 = 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 168, CPyStatic_attrs___globals);
        goto CPyL95;
    }
    CPy_Unreachable();
CPyL72: ;
    CPy_INCREF(cpy_r_r126);
    cpy_r_r128 = cpy_r_r126;
    goto CPyL77;
CPyL73: ;
    cpy_r_r129 = CPyStatic_nodes___ARG_NAMED;
    if (unlikely(cpy_r_r129 == NULL)) {
        goto CPyL113;
    } else
        goto CPyL76;
CPyL74: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r130 = 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 168, CPyStatic_attrs___globals);
        goto CPyL95;
    }
    CPy_Unreachable();
CPyL76: ;
    CPy_INCREF(cpy_r_r129);
    cpy_r_r128 = cpy_r_r129;
CPyL77: ;
    cpy_r_arg_kind = cpy_r_r128;
    goto CPyL88;
CPyL78: ;
    cpy_r_r131 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_has_default;
    if (!cpy_r_r131) goto CPyL83;
CPyL79: ;
    cpy_r_r132 = CPyStatic_nodes___ARG_OPT;
    if (unlikely(cpy_r_r132 == NULL)) {
        goto CPyL114;
    } else
        goto CPyL82;
CPyL80: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_OPT\" was not set");
    cpy_r_r133 = 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 170, CPyStatic_attrs___globals);
        goto CPyL95;
    }
    CPy_Unreachable();
CPyL82: ;
    CPy_INCREF(cpy_r_r132);
    cpy_r_r134 = cpy_r_r132;
    goto CPyL87;
CPyL83: ;
    cpy_r_r135 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r135 == NULL)) {
        goto CPyL115;
    } else
        goto CPyL86;
CPyL84: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r136 = 0;
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 170, CPyStatic_attrs___globals);
        goto CPyL95;
    }
    CPy_Unreachable();
CPyL86: ;
    CPy_INCREF(cpy_r_r135);
    cpy_r_r134 = cpy_r_r135;
CPyL87: ;
    cpy_r_arg_kind = cpy_r_r134;
CPyL88: ;
    cpy_r_r137 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r137);
    cpy_r_r138 = CPyStatics[755]; /* '_' */
    cpy_r_r139 = CPyStatics[2233]; /* 'lstrip' */
    PyObject *cpy_r_r140[2] = {cpy_r_r137, cpy_r_r138};
    cpy_r_r141 = (PyObject **)&cpy_r_r140;
    cpy_r_r142 = PyObject_VectorcallMethod(cpy_r_r139, cpy_r_r141, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 173, CPyStatic_attrs___globals);
        goto CPyL116;
    }
    CPy_DECREF(cpy_r_r137);
    if (likely(PyUnicode_Check(cpy_r_r142)))
        cpy_r_r143 = cpy_r_r142;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 173, CPyStatic_attrs___globals, "str", cpy_r_r142);
        goto CPyL117;
    }
    CPy_INCREF(cpy_r_init_type);
    if (likely(cpy_r_init_type != Py_None))
        cpy_r_r144 = cpy_r_init_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 173, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_init_type);
        goto CPyL118;
    }
    cpy_r_r145 = CPyDef_nodes___Var(cpy_r_r143, cpy_r_r144);
    CPy_DECREF(cpy_r_r143);
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 173, CPyStatic_attrs___globals);
        goto CPyL117;
    }
    if (likely(cpy_r_init_type != Py_None))
        cpy_r_r146 = cpy_r_init_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "argument", 173, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_init_type);
        goto CPyL119;
    }
    cpy_r_r147 = Py_None;
    cpy_r_r148 = 2;
    cpy_r_r149 = CPyDef_nodes___Argument(cpy_r_r145, cpy_r_r146, cpy_r_r147, cpy_r_arg_kind, cpy_r_r148);
    CPy_DECREF(cpy_r_r145);
    CPy_DECREF(cpy_r_r146);
    CPy_DECREF(cpy_r_arg_kind);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 173, CPyStatic_attrs___globals);
        goto CPyL95;
    }
    return cpy_r_r149;
CPyL95: ;
    cpy_r_r150 = NULL;
    return cpy_r_r150;
CPyL96: ;
    CPy_DecRef(cpy_r_init_type);
    goto CPyL95;
CPyL97: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_converter_vars);
    goto CPyL95;
CPyL98: ;
    CPy_DECREF(cpy_r_converter_vars);
    CPy_DECREF(cpy_r_init_vars);
    goto CPyL43;
CPyL99: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_converter_vars);
    CPy_DecRef(cpy_r_init_vars);
    goto CPyL95;
CPyL100: ;
    CPy_DECREF(cpy_r_converter_vars);
    CPy_DECREF(cpy_r_init_vars);
    goto CPyL29;
CPyL101: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_converter_vars);
    CPy_DecRef(cpy_r_init_vars);
    CPy_DecRef(cpy_r_r46);
    goto CPyL95;
CPyL102: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_converter_vars);
    CPy_DecRef(cpy_r_init_vars);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_binder);
    goto CPyL95;
CPyL103: ;
    CPy_DecRef(cpy_r_variables);
    goto CPyL95;
CPyL104: ;
    CPy_DECREF(cpy_r_r81);
    goto CPyL39;
CPyL105: ;
    CPy_DECREF(cpy_r_init_type);
    goto CPyL44;
CPyL106: ;
    CPy_DECREF(cpy_r_proper_type);
    goto CPyL53;
CPyL107: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_proper_type);
    goto CPyL95;
CPyL108: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r107);
    goto CPyL95;
CPyL109: ;
    CPy_DECREF(cpy_r_init_type);
    CPy_DECREF(cpy_r_node);
    goto CPyL60;
CPyL110: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_node);
    goto CPyL95;
CPyL111: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r119);
    goto CPyL95;
CPyL112: ;
    CPy_DecRef(cpy_r_init_type);
    goto CPyL70;
CPyL113: ;
    CPy_DecRef(cpy_r_init_type);
    goto CPyL74;
CPyL114: ;
    CPy_DecRef(cpy_r_init_type);
    goto CPyL80;
CPyL115: ;
    CPy_DecRef(cpy_r_init_type);
    goto CPyL84;
CPyL116: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_arg_kind);
    CPy_DecRef(cpy_r_r137);
    goto CPyL95;
CPyL117: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_arg_kind);
    goto CPyL95;
CPyL118: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_arg_kind);
    CPy_DecRef(cpy_r_r143);
    goto CPyL95;
CPyL119: ;
    CPy_DecRef(cpy_r_arg_kind);
    CPy_DecRef(cpy_r_r145);
    goto CPyL95;
}

PyObject *CPyPy_attrs___Attribute___argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:argument", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrs___Attribute))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.attrs.Attribute", obj_self); 
        goto fail;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrs___Attribute___argument(arg_self, arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "argument", 124, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs___Attribute___serialize(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
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
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
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
    cpy_r_r0 = CPyStatics[2329]; /* 'name' */
    cpy_r_r1 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyStatics[4383]; /* 'has_default' */
    cpy_r_r3 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_has_default;
    cpy_r_r4 = CPyStatics[4384]; /* 'init' */
    cpy_r_r5 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_init;
    cpy_r_r6 = CPyStatics[4385]; /* 'kw_only' */
    cpy_r_r7 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_kw_only;
    cpy_r_r8 = CPyStatics[4386]; /* 'has_converter' */
    cpy_r_r9 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_converter;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_r9 != cpy_r_r10;
    cpy_r_r12 = CPyStatics[4387]; /* 'converter_init_type' */
    cpy_r_r13 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_converter;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = cpy_r_r13 != cpy_r_r14;
    CPy_DECREF(cpy_r_r13);
    if (!cpy_r_r15) goto CPyL7;
    cpy_r_r16 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_converter;
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "serialize", 184, CPyStatic_attrs___globals, "mypy.plugins.attrs.Converter", cpy_r_r16);
        goto CPyL18;
    }
    cpy_r_r18 = ((mypy___plugins___attrs___ConverterObject *)cpy_r_r17)->_init_type;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_r18 != cpy_r_r19;
    CPy_DECREF(cpy_r_r18);
    if (!cpy_r_r20) goto CPyL7;
    cpy_r_r21 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_converter;
    if (likely(cpy_r_r21 != Py_None))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "serialize", 183, CPyStatic_attrs___globals, "mypy.plugins.attrs.Converter", cpy_r_r21);
        goto CPyL18;
    }
    cpy_r_r23 = ((mypy___plugins___attrs___ConverterObject *)cpy_r_r22)->_init_type;
    CPy_INCREF(cpy_r_r23);
    if (likely(cpy_r_r23 != Py_None))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "serialize", 183, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_r23);
        goto CPyL18;
    }
    cpy_r_r25 = CPY_GET_METHOD(cpy_r_r24, CPyType_types___Type, 12, mypy___types___TypeObject, PyObject * (*)(PyObject *))(cpy_r_r24); /* serialize */
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "serialize", 183, CPyStatic_attrs___globals);
        goto CPyL18;
    }
    cpy_r_r26 = cpy_r_r25;
    goto CPyL8;
CPyL7: ;
    cpy_r_r27 = Py_None;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r26 = cpy_r_r27;
CPyL8: ;
    cpy_r_r28 = CPyStatics[4388]; /* 'context_line' */
    cpy_r_r29 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_context;
    cpy_r_r30 = ((mypy___nodes___ContextObject *)cpy_r_r29)->_line;
    if (unlikely(cpy_r_r30 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "serialize", "Context", "line", 186, CPyStatic_attrs___globals);
        goto CPyL19;
    }
    CPyTagged_INCREF(cpy_r_r30);
CPyL9: ;
    cpy_r_r31 = CPyStatics[4389]; /* 'context_column' */
    cpy_r_r32 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_context;
    cpy_r_r33 = ((mypy___nodes___ContextObject *)cpy_r_r32)->_column;
    if (unlikely(cpy_r_r33 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "serialize", "Context", "column", 187, CPyStatic_attrs___globals);
        goto CPyL20;
    }
    CPyTagged_INCREF(cpy_r_r33);
CPyL10: ;
    cpy_r_r34 = CPyStatics[4390]; /* 'init_type' */
    cpy_r_r35 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_init_type;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_r35 != cpy_r_r36;
    CPy_DECREF(cpy_r_r35);
    if (!cpy_r_r37) goto CPyL14;
    cpy_r_r38 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_init_type;
    CPy_INCREF(cpy_r_r38);
    if (likely(cpy_r_r38 != Py_None))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "serialize", 188, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_r38);
        goto CPyL21;
    }
    cpy_r_r40 = CPY_GET_METHOD(cpy_r_r39, CPyType_types___Type, 12, mypy___types___TypeObject, PyObject * (*)(PyObject *))(cpy_r_r39); /* serialize */
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "serialize", 188, CPyStatic_attrs___globals);
        goto CPyL21;
    }
    cpy_r_r41 = cpy_r_r40;
    goto CPyL15;
CPyL14: ;
    cpy_r_r42 = Py_None;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r41 = cpy_r_r42;
CPyL15: ;
    cpy_r_r43 = cpy_r_r3 ? Py_True : Py_False;
    cpy_r_r44 = cpy_r_r5 ? Py_True : Py_False;
    cpy_r_r45 = cpy_r_r7 ? Py_True : Py_False;
    cpy_r_r46 = cpy_r_r11 ? Py_True : Py_False;
    cpy_r_r47 = CPyTagged_StealAsObject(cpy_r_r30);
    cpy_r_r48 = CPyTagged_StealAsObject(cpy_r_r33);
    cpy_r_r49 = CPyDict_Build(9, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r43, cpy_r_r4, cpy_r_r44, cpy_r_r6, cpy_r_r45, cpy_r_r8, cpy_r_r46, cpy_r_r12, cpy_r_r26, cpy_r_r28, cpy_r_r47, cpy_r_r31, cpy_r_r48, cpy_r_r34, cpy_r_r41);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "serialize", 177, CPyStatic_attrs___globals);
        goto CPyL17;
    }
    return cpy_r_r49;
CPyL17: ;
    cpy_r_r50 = NULL;
    return cpy_r_r50;
CPyL18: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r26);
    goto CPyL17;
CPyL20: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r26);
    CPyTagged_DecRef(cpy_r_r30);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r26);
    CPyTagged_DecRef(cpy_r_r30);
    CPyTagged_DecRef(cpy_r_r33);
    goto CPyL17;
}

PyObject *CPyPy_attrs___Attribute___serialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":serialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrs___Attribute))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.attrs.Attribute", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrs___Attribute___serialize(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "serialize", 175, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs___Attribute___deserialize(PyObject *cpy_r_cls, PyObject *cpy_r_info, PyObject *cpy_r_data, PyObject *cpy_r_api) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_raw_init_type;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_init_type;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_raw_converter_init_type;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_converter_init_type;
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
    int32_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    cpy_r_r0 = CPyStatics[4390]; /* 'init_type' */
    cpy_r_r1 = CPyDict_GetItem(cpy_r_data, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 196, CPyStatic_attrs___globals);
        goto CPyL35;
    }
    cpy_r_raw_init_type = cpy_r_r1;
    cpy_r_r2 = PyObject_IsTrue(cpy_r_raw_init_type);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 196, CPyStatic_attrs___globals);
        goto CPyL36;
    }
    cpy_r_r4 = cpy_r_r2;
    if (!cpy_r_r4) goto CPyL37;
    if (PyUnicode_Check(cpy_r_raw_init_type))
        cpy_r_r5 = cpy_r_raw_init_type;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL4685;
    if (PyDict_Check(cpy_r_raw_init_type))
        cpy_r_r5 = cpy_r_raw_init_type;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL4685;
    CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "deserialize", 197, CPyStatic_attrs___globals, "union[str, dict]", cpy_r_raw_init_type);
    goto CPyL35;
__LL4685: ;
    cpy_r_r6 = CPyDef_plugins___common___deserialize_and_fixup_type(cpy_r_r5, cpy_r_api);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 197, CPyStatic_attrs___globals);
        goto CPyL35;
    }
    cpy_r_r7 = cpy_r_r6;
    goto CPyL7;
CPyL6: ;
    cpy_r_r8 = Py_None;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r7 = cpy_r_r8;
CPyL7: ;
    cpy_r_init_type = cpy_r_r7;
    cpy_r_r9 = CPyStatics[4387]; /* 'converter_init_type' */
    cpy_r_r10 = CPyDict_GetItem(cpy_r_data, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 198, CPyStatic_attrs___globals);
        goto CPyL38;
    }
    cpy_r_raw_converter_init_type = cpy_r_r10;
    cpy_r_r11 = PyObject_IsTrue(cpy_r_raw_converter_init_type);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 198, CPyStatic_attrs___globals);
        goto CPyL39;
    }
    cpy_r_r13 = cpy_r_r11;
    if (!cpy_r_r13) goto CPyL40;
    if (PyUnicode_Check(cpy_r_raw_converter_init_type))
        cpy_r_r14 = cpy_r_raw_converter_init_type;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL4686;
    if (PyDict_Check(cpy_r_raw_converter_init_type))
        cpy_r_r14 = cpy_r_raw_converter_init_type;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL4686;
    CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "deserialize", 200, CPyStatic_attrs___globals, "union[str, dict]", cpy_r_raw_converter_init_type);
    goto CPyL38;
__LL4686: ;
    cpy_r_r15 = CPyDef_plugins___common___deserialize_and_fixup_type(cpy_r_r14, cpy_r_api);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 200, CPyStatic_attrs___globals);
        goto CPyL38;
    }
    cpy_r_r16 = cpy_r_r15;
    goto CPyL14;
CPyL13: ;
    cpy_r_r17 = Py_None;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r16 = cpy_r_r17;
CPyL14: ;
    cpy_r_converter_init_type = cpy_r_r16;
    cpy_r_r18 = CPyStatics[2329]; /* 'name' */
    cpy_r_r19 = CPyDict_GetItem(cpy_r_data, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 206, CPyStatic_attrs___globals);
        goto CPyL41;
    }
    cpy_r_r20 = CPyStatics[4383]; /* 'has_default' */
    cpy_r_r21 = CPyDict_GetItem(cpy_r_data, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 208, CPyStatic_attrs___globals);
        goto CPyL42;
    }
    cpy_r_r22 = CPyStatics[4384]; /* 'init' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_data, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 209, CPyStatic_attrs___globals);
        goto CPyL43;
    }
    cpy_r_r24 = CPyStatics[4385]; /* 'kw_only' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_data, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 210, CPyStatic_attrs___globals);
        goto CPyL44;
    }
    cpy_r_r26 = CPyStatics[4386]; /* 'has_converter' */
    cpy_r_r27 = CPyDict_GetItem(cpy_r_data, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 211, CPyStatic_attrs___globals);
        goto CPyL45;
    }
    cpy_r_r28 = PyObject_IsTrue(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 211, CPyStatic_attrs___globals);
        goto CPyL45;
    }
    cpy_r_r30 = cpy_r_r28;
    if (!cpy_r_r30) goto CPyL46;
    cpy_r_r31 = NULL;
    cpy_r_r32 = CPyDef_attrs___Converter(cpy_r_converter_init_type, cpy_r_r31);
    CPy_DECREF(cpy_r_converter_init_type);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 211, CPyStatic_attrs___globals);
        goto CPyL47;
    }
    cpy_r_r33 = cpy_r_r32;
    goto CPyL24;
CPyL23: ;
    cpy_r_r34 = Py_None;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r33 = cpy_r_r34;
CPyL24: ;
    cpy_r_r35 = CPyStatics[4388]; /* 'context_line' */
    cpy_r_r36 = CPyDict_GetItem(cpy_r_data, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 212, CPyStatic_attrs___globals);
        goto CPyL48;
    }
    cpy_r_r37 = CPyStatics[4389]; /* 'context_column' */
    cpy_r_r38 = CPyDict_GetItem(cpy_r_data, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 212, CPyStatic_attrs___globals);
        goto CPyL49;
    }
    if (likely(PyLong_Check(cpy_r_r36)))
        cpy_r_r39 = CPyTagged_FromObject(cpy_r_r36);
    else {
        CPy_TypeError("int", cpy_r_r36); cpy_r_r39 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r39 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 212, CPyStatic_attrs___globals);
        goto CPyL50;
    }
    if (likely(PyLong_Check(cpy_r_r38)))
        cpy_r_r40 = CPyTagged_FromObject(cpy_r_r38);
    else {
        CPy_TypeError("int", cpy_r_r38); cpy_r_r40 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 212, CPyStatic_attrs___globals);
        goto CPyL51;
    }
    cpy_r_r41 = CPyDef_nodes___Context(cpy_r_r39, cpy_r_r40);
    CPyTagged_DECREF(cpy_r_r39);
    CPyTagged_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 212, CPyStatic_attrs___globals);
        goto CPyL48;
    }
    if (likely(PyUnicode_Check(cpy_r_r19)))
        cpy_r_r42 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "deserialize", 205, CPyStatic_attrs___globals, "str", cpy_r_r19);
        goto CPyL52;
    }
    if (unlikely(!PyBool_Check(cpy_r_r21))) {
        CPy_TypeError("bool", cpy_r_r21); cpy_r_r43 = 2;
    } else
        cpy_r_r43 = cpy_r_r21 == Py_True;
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 205, CPyStatic_attrs___globals);
        goto CPyL53;
    }
    if (unlikely(!PyBool_Check(cpy_r_r23))) {
        CPy_TypeError("bool", cpy_r_r23); cpy_r_r44 = 2;
    } else
        cpy_r_r44 = cpy_r_r23 == Py_True;
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 205, CPyStatic_attrs___globals);
        goto CPyL54;
    }
    if (unlikely(!PyBool_Check(cpy_r_r25))) {
        CPy_TypeError("bool", cpy_r_r25); cpy_r_r45 = 2;
    } else
        cpy_r_r45 = cpy_r_r25 == Py_True;
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 205, CPyStatic_attrs___globals);
        goto CPyL55;
    }
    cpy_r_r46 = CPyDef_attrs___Attribute(cpy_r_r42, cpy_r_info, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r33, cpy_r_r41, cpy_r_init_type);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_init_type);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 205, CPyStatic_attrs___globals);
        goto CPyL35;
    }
    return cpy_r_r46;
CPyL35: ;
    cpy_r_r47 = NULL;
    return cpy_r_r47;
CPyL36: ;
    CPy_DecRef(cpy_r_raw_init_type);
    goto CPyL35;
CPyL37: ;
    CPy_DECREF(cpy_r_raw_init_type);
    goto CPyL6;
CPyL38: ;
    CPy_DecRef(cpy_r_init_type);
    goto CPyL35;
CPyL39: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_raw_converter_init_type);
    goto CPyL35;
CPyL40: ;
    CPy_DECREF(cpy_r_raw_converter_init_type);
    goto CPyL13;
CPyL41: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_converter_init_type);
    goto CPyL35;
CPyL42: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_converter_init_type);
    CPy_DecRef(cpy_r_r19);
    goto CPyL35;
CPyL43: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_converter_init_type);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    goto CPyL35;
CPyL44: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_converter_init_type);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r23);
    goto CPyL35;
CPyL45: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_converter_init_type);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r25);
    goto CPyL35;
CPyL46: ;
    CPy_DECREF(cpy_r_converter_init_type);
    goto CPyL23;
CPyL47: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r25);
    goto CPyL35;
CPyL48: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r33);
    goto CPyL35;
CPyL49: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r36);
    goto CPyL35;
CPyL50: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r38);
    goto CPyL35;
CPyL51: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r33);
    CPyTagged_DecRef(cpy_r_r39);
    goto CPyL35;
CPyL52: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r41);
    goto CPyL35;
CPyL53: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    goto CPyL35;
CPyL54: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    goto CPyL35;
CPyL55: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r42);
    goto CPyL35;
}

PyObject *CPyPy_attrs___Attribute___deserialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_attrs___Attribute___deserialize(arg_cls, arg_info, arg_data, arg_api);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "deserialize", 192, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs___Attribute___expand_typevar_from_subtype(PyObject *cpy_r_self, PyObject *cpy_r_sub_type) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_init_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r2) goto CPyL4;
    cpy_r_r3 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_init_type;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "expand_typevar_from_subtype", 220, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_r3);
        goto CPyL6;
    }
    cpy_r_r5 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_info;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDef_typeops___map_type_from_supertype(cpy_r_r4, cpy_r_sub_type, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "expand_typevar_from_subtype", 220, CPyStatic_attrs___globals);
        goto CPyL6;
    }
    CPy_DECREF(((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_init_type);
    ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_init_type = cpy_r_r6;
    goto CPyL5;
CPyL4: ;
    cpy_r_r8 = Py_None;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_init_type);
    ((mypy___plugins___attrs___AttributeObject *)cpy_r_self)->_init_type = cpy_r_r8;
CPyL5: ;
    return 1;
CPyL6: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
}

PyObject *CPyPy_attrs___Attribute___expand_typevar_from_subtype(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"sub_type", 0};
    static CPyArg_Parser parser = {"O:expand_typevar_from_subtype", kwlist, 0};
    PyObject *obj_sub_type;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_sub_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrs___Attribute))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.attrs.Attribute", obj_self); 
        goto fail;
    }
    PyObject *arg_sub_type;
    if (likely((Py_TYPE(obj_sub_type) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_sub_type) == CPyType_nodes___TypeInfo)))
        arg_sub_type = obj_sub_type;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_sub_type); 
        goto fail;
    }
    char retval = CPyDef_attrs___Attribute___expand_typevar_from_subtype(arg_self, arg_sub_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "expand_typevar_from_subtype", 216, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs____determine_eq_order(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_cmp;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_eq;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_order;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    tuple_T2CC cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject **cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    cpy_r_r0 = CPyStatics[4391]; /* 'cmp' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_attrs____get_decorator_optional_bool_argument(cpy_r_ctx, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 230, CPyStatic_attrs___globals);
        goto CPyL32;
    }
    cpy_r_cmp = cpy_r_r2;
    cpy_r_r3 = CPyStatics[4392]; /* 'eq' */
    cpy_r_r4 = NULL;
    cpy_r_r5 = CPyDef_attrs____get_decorator_optional_bool_argument(cpy_r_ctx, cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 231, CPyStatic_attrs___globals);
        goto CPyL33;
    }
    cpy_r_eq = cpy_r_r5;
    cpy_r_r6 = CPyStatics[665]; /* 'order' */
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPyDef_attrs____get_decorator_optional_bool_argument(cpy_r_ctx, cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 232, CPyStatic_attrs___globals);
        goto CPyL34;
    }
    cpy_r_order = cpy_r_r8;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_cmp != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL13;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_eq != cpy_r_r11;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_order != cpy_r_r13;
    cpy_r_r15.f0 = cpy_r_r12;
    cpy_r_r15.f1 = cpy_r_r14;
    cpy_r_r16 = CPyModule_builtins;
    cpy_r_r17 = CPyStatics[1174]; /* 'any' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_r16, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 234, CPyStatic_attrs___globals);
        goto CPyL35;
    }
    cpy_r_r19 = PyTuple_New(2);
    if (unlikely(cpy_r_r19 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4687 = cpy_r_r15.f0 ? Py_True : Py_False;
    CPy_INCREF(__tmp4687);
    PyTuple_SET_ITEM(cpy_r_r19, 0, __tmp4687);
    PyObject *__tmp4688 = cpy_r_r15.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp4688);
    PyTuple_SET_ITEM(cpy_r_r19, 1, __tmp4688);
    PyObject *cpy_r_r20[1] = {cpy_r_r19};
    cpy_r_r21 = (PyObject **)&cpy_r_r20;
    cpy_r_r22 = _PyObject_Vectorcall(cpy_r_r18, cpy_r_r21, 1, 0);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 234, CPyStatic_attrs___globals);
        goto CPyL36;
    }
    CPy_DECREF(cpy_r_r19);
    if (unlikely(!PyBool_Check(cpy_r_r22))) {
        CPy_TypeError("bool", cpy_r_r22); cpy_r_r23 = 2;
    } else
        cpy_r_r23 = cpy_r_r22 == Py_True;
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 234, CPyStatic_attrs___globals);
        goto CPyL35;
    }
    if (!cpy_r_r23) goto CPyL13;
    cpy_r_r24 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 235, CPyStatic_attrs___globals);
        goto CPyL35;
    }
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 235, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r24);
        goto CPyL35;
    }
    cpy_r_r26 = CPyStatics[4393]; /* 'Don\'t mix "cmp" with "eq" and "order"' */
    cpy_r_r27 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 235, CPyStatic_attrs___globals);
        goto CPyL37;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_nodes___Expression)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 235, CPyStatic_attrs___globals, "mypy.nodes.Expression", cpy_r_r27);
        goto CPyL37;
    }
    cpy_r_r29 = 2;
    cpy_r_r30 = 2;
    cpy_r_r31 = NULL;
    cpy_r_r32 = CPY_GET_METHOD_TRAIT(cpy_r_r25, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r25, cpy_r_r26, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r31); /* fail */
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 235, CPyStatic_attrs___globals);
        goto CPyL35;
    }
CPyL13: ;
    cpy_r_r33 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r34 = cpy_r_cmp != cpy_r_r33;
    if (cpy_r_r34) {
        goto CPyL38;
    } else
        goto CPyL39;
CPyL14: ;
    if (unlikely(!PyBool_Check(cpy_r_cmp))) {
        CPy_TypeError("bool", cpy_r_cmp); cpy_r_r35 = 2;
    } else
        cpy_r_r35 = cpy_r_cmp == Py_True;
    CPy_DECREF(cpy_r_cmp);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 239, CPyStatic_attrs___globals);
        goto CPyL32;
    }
    return cpy_r_r35;
CPyL16: ;
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_eq == cpy_r_r36;
    if (cpy_r_r37) {
        goto CPyL40;
    } else
        goto CPyL18;
CPyL17: ;
    cpy_r_r38 = 1 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r38);
    cpy_r_eq = cpy_r_r38;
CPyL18: ;
    cpy_r_r39 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r40 = cpy_r_order == cpy_r_r39;
    if (cpy_r_r40) {
        goto CPyL41;
    } else
        goto CPyL21;
CPyL19: ;
    if (unlikely(!PyBool_Check(cpy_r_eq))) {
        CPy_TypeError("bool", cpy_r_eq); cpy_r_r41 = 2;
    } else
        cpy_r_r41 = cpy_r_eq == Py_True;
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 246, CPyStatic_attrs___globals);
        goto CPyL42;
    }
    cpy_r_r42 = cpy_r_r41 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r42);
    cpy_r_order = cpy_r_r42;
CPyL21: ;
    if (unlikely(!PyBool_Check(cpy_r_eq))) {
        CPy_TypeError("bool", cpy_r_eq); cpy_r_r43 = 2;
    } else
        cpy_r_r43 = cpy_r_eq == Py_True;
    CPy_DECREF(cpy_r_eq);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 248, CPyStatic_attrs___globals);
        goto CPyL43;
    }
    cpy_r_r44 = cpy_r_r43 ? Py_True : Py_False;
    cpy_r_r45 = 0 ? Py_True : Py_False;
    cpy_r_r46 = cpy_r_r44 == cpy_r_r45;
    if (!cpy_r_r46) goto CPyL30;
    if (unlikely(!PyBool_Check(cpy_r_order))) {
        CPy_TypeError("bool", cpy_r_order); cpy_r_r47 = 2;
    } else
        cpy_r_r47 = cpy_r_order == Py_True;
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 248, CPyStatic_attrs___globals);
        goto CPyL43;
    }
    cpy_r_r48 = cpy_r_r47 ? Py_True : Py_False;
    cpy_r_r49 = 1 ? Py_True : Py_False;
    cpy_r_r50 = cpy_r_r48 == cpy_r_r49;
    if (!cpy_r_r50) goto CPyL30;
    cpy_r_r51 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 249, CPyStatic_attrs___globals);
        goto CPyL43;
    }
    if (likely(Py_TYPE(cpy_r_r51) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 249, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r51);
        goto CPyL43;
    }
    cpy_r_r53 = CPyStatics[4394]; /* 'eq must be True if order is True' */
    cpy_r_r54 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 249, CPyStatic_attrs___globals);
        goto CPyL44;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r54, CPyType_nodes___Expression)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 249, CPyStatic_attrs___globals, "mypy.nodes.Expression", cpy_r_r54);
        goto CPyL44;
    }
    cpy_r_r56 = 2;
    cpy_r_r57 = 2;
    cpy_r_r58 = NULL;
    cpy_r_r59 = CPY_GET_METHOD_TRAIT(cpy_r_r52, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r52, cpy_r_r53, cpy_r_r55, cpy_r_r56, cpy_r_r57, cpy_r_r58); /* fail */
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 249, CPyStatic_attrs___globals);
        goto CPyL43;
    }
CPyL30: ;
    if (unlikely(!PyBool_Check(cpy_r_order))) {
        CPy_TypeError("bool", cpy_r_order); cpy_r_r60 = 2;
    } else
        cpy_r_r60 = cpy_r_order == Py_True;
    CPy_DECREF(cpy_r_order);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 251, CPyStatic_attrs___globals);
        goto CPyL32;
    }
    return cpy_r_r60;
CPyL32: ;
    cpy_r_r61 = 2;
    return cpy_r_r61;
CPyL33: ;
    CPy_DecRef(cpy_r_cmp);
    goto CPyL32;
CPyL34: ;
    CPy_DecRef(cpy_r_cmp);
    CPy_DecRef(cpy_r_eq);
    goto CPyL32;
CPyL35: ;
    CPy_DecRef(cpy_r_cmp);
    CPy_DecRef(cpy_r_eq);
    CPy_DecRef(cpy_r_order);
    goto CPyL32;
CPyL36: ;
    CPy_DecRef(cpy_r_cmp);
    CPy_DecRef(cpy_r_eq);
    CPy_DecRef(cpy_r_order);
    CPy_DecRef(cpy_r_r19);
    goto CPyL32;
CPyL37: ;
    CPy_DecRef(cpy_r_cmp);
    CPy_DecRef(cpy_r_eq);
    CPy_DecRef(cpy_r_order);
    CPy_DecRef(cpy_r_r25);
    goto CPyL32;
CPyL38: ;
    CPy_DECREF(cpy_r_eq);
    CPy_DECREF(cpy_r_order);
    goto CPyL14;
CPyL39: ;
    CPy_DECREF(cpy_r_cmp);
    goto CPyL16;
CPyL40: ;
    CPy_DECREF(cpy_r_eq);
    goto CPyL17;
CPyL41: ;
    CPy_DECREF(cpy_r_order);
    goto CPyL19;
CPyL42: ;
    CPy_DecRef(cpy_r_eq);
    goto CPyL32;
CPyL43: ;
    CPy_DecRef(cpy_r_order);
    goto CPyL32;
CPyL44: ;
    CPy_DecRef(cpy_r_order);
    CPy_DecRef(cpy_r_r52);
    goto CPyL32;
}

PyObject *CPyPy_attrs____determine_eq_order(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:_determine_eq_order", kwlist, 0};
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
    char retval = CPyDef_attrs____determine_eq_order(arg_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_determine_eq_order", 225, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs____get_decorator_optional_bool_argument(PyObject *cpy_r_ctx, PyObject *cpy_r_name, PyObject *cpy_r_default) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_attr_value;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
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
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    if (cpy_r_default != NULL) goto CPyL43;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_default = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 261, CPyStatic_attrs___globals);
        goto CPyL44;
    }
    cpy_r_r2 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_r1)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    CPy_DECREF(cpy_r_r1);
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL41;
    cpy_r_r6 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 262, CPyStatic_attrs___globals);
        goto CPyL44;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_nodes___CallExpr))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 262, CPyStatic_attrs___globals, "mypy.nodes.CallExpr", cpy_r_r6);
        goto CPyL44;
    }
    cpy_r_r8 = CPyDef_plugins___common____get_argument(cpy_r_r7, cpy_r_name);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 262, CPyStatic_attrs___globals);
        goto CPyL44;
    }
    cpy_r_attr_value = cpy_r_r8;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_attr_value != cpy_r_r9;
    if (!cpy_r_r10) goto CPyL45;
    cpy_r_r11 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_attr_value)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL46;
    if (likely(Py_TYPE(cpy_r_attr_value) == CPyType_nodes___NameExpr))
        cpy_r_r15 = cpy_r_attr_value;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 265, CPyStatic_attrs___globals, "mypy.nodes.NameExpr", cpy_r_attr_value);
        goto CPyL47;
    }
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_r15, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 265, CPyStatic_attrs___globals);
        goto CPyL47;
    }
CPyL11: ;
    cpy_r_r17 = CPyStatics[887]; /* 'builtins.True' */
    cpy_r_r18 = PyUnicode_Compare(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r19 = cpy_r_r18 == -1;
    if (!cpy_r_r19) goto CPyL14;
    cpy_r_r20 = PyErr_Occurred();
    cpy_r_r21 = cpy_r_r20 != NULL;
    if (!cpy_r_r21) goto CPyL14;
    cpy_r_r22 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 265, CPyStatic_attrs___globals);
        goto CPyL47;
    }
CPyL14: ;
    cpy_r_r23 = cpy_r_r18 == 0;
    if (cpy_r_r23) {
        goto CPyL48;
    } else
        goto CPyL16;
CPyL15: ;
    cpy_r_r24 = 1 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r24);
    return cpy_r_r24;
CPyL16: ;
    if (likely(Py_TYPE(cpy_r_attr_value) == CPyType_nodes___NameExpr))
        cpy_r_r25 = cpy_r_attr_value;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 267, CPyStatic_attrs___globals, "mypy.nodes.NameExpr", cpy_r_attr_value);
        goto CPyL47;
    }
    cpy_r_r26 = CPY_GET_ATTR(cpy_r_r25, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 267, CPyStatic_attrs___globals);
        goto CPyL47;
    }
CPyL18: ;
    cpy_r_r27 = CPyStatics[766]; /* 'builtins.False' */
    cpy_r_r28 = PyUnicode_Compare(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r29 = cpy_r_r28 == -1;
    if (!cpy_r_r29) goto CPyL21;
    cpy_r_r30 = PyErr_Occurred();
    cpy_r_r31 = cpy_r_r30 != NULL;
    if (!cpy_r_r31) goto CPyL21;
    cpy_r_r32 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 267, CPyStatic_attrs___globals);
        goto CPyL47;
    }
CPyL21: ;
    cpy_r_r33 = cpy_r_r28 == 0;
    if (cpy_r_r33) {
        goto CPyL49;
    } else
        goto CPyL23;
CPyL22: ;
    cpy_r_r34 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r34);
    return cpy_r_r34;
CPyL23: ;
    if (likely(Py_TYPE(cpy_r_attr_value) == CPyType_nodes___NameExpr))
        cpy_r_r35 = cpy_r_attr_value;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 269, CPyStatic_attrs___globals, "mypy.nodes.NameExpr", cpy_r_attr_value);
        goto CPyL47;
    }
    cpy_r_r36 = CPY_GET_ATTR(cpy_r_r35, CPyType_nodes___NameExpr, 6, mypy___nodes___NameExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 269, CPyStatic_attrs___globals);
        goto CPyL47;
    }
CPyL25: ;
    CPy_DECREF(cpy_r_attr_value);
    cpy_r_r37 = CPyStatics[743]; /* 'builtins.None' */
    cpy_r_r38 = PyUnicode_Compare(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r39 = cpy_r_r38 == -1;
    if (!cpy_r_r39) goto CPyL28;
    cpy_r_r40 = PyErr_Occurred();
    cpy_r_r41 = cpy_r_r40 != NULL;
    if (!cpy_r_r41) goto CPyL28;
    cpy_r_r42 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 269, CPyStatic_attrs___globals);
        goto CPyL44;
    }
CPyL28: ;
    cpy_r_r43 = cpy_r_r38 == 0;
    if (cpy_r_r43) {
        goto CPyL50;
    } else
        goto CPyL30;
CPyL29: ;
    cpy_r_r44 = Py_None;
    CPy_INCREF(cpy_r_r44);
    return cpy_r_r44;
CPyL30: ;
    cpy_r_r45 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 271, CPyStatic_attrs___globals);
        goto CPyL44;
    }
    if (likely(Py_TYPE(cpy_r_r45) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 271, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r45);
        goto CPyL44;
    }
    cpy_r_r47 = CPyStatics[178]; /* '"' */
    cpy_r_r48 = CPyStatics[4395]; /* '" argument must be a True, False, or None literal' */
    cpy_r_r49 = CPyStr_Build(3, cpy_r_r47, cpy_r_name, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 272, CPyStatic_attrs___globals);
        goto CPyL51;
    }
    cpy_r_r50 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 273, CPyStatic_attrs___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r50) == CPyType_nodes___CallExpr))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 273, CPyStatic_attrs___globals, "mypy.nodes.CallExpr", cpy_r_r50);
        goto CPyL52;
    }
    cpy_r_r52 = CPyStatic_errorcodes___LITERAL_REQ;
    if (unlikely(cpy_r_r52 == NULL)) {
        goto CPyL53;
    } else
        goto CPyL38;
CPyL36: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"LITERAL_REQ\" was not set");
    cpy_r_r53 = 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 274, CPyStatic_attrs___globals);
        goto CPyL42;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r54 = 2;
    cpy_r_r55 = 2;
    cpy_r_r56 = CPY_GET_METHOD_TRAIT(cpy_r_r46, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r46, cpy_r_r49, cpy_r_r51, cpy_r_r54, cpy_r_r55, cpy_r_r52); /* fail */
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 271, CPyStatic_attrs___globals);
        goto CPyL44;
    }
    return cpy_r_default;
CPyL40: ;
    return cpy_r_default;
CPyL41: ;
    return cpy_r_default;
CPyL42: ;
    cpy_r_r57 = NULL;
    return cpy_r_r57;
CPyL43: ;
    CPy_INCREF(cpy_r_default);
    goto CPyL2;
CPyL44: ;
    CPy_DecRef(cpy_r_default);
    goto CPyL42;
CPyL45: ;
    CPy_DECREF(cpy_r_attr_value);
    goto CPyL40;
CPyL46: ;
    CPy_DECREF(cpy_r_attr_value);
    goto CPyL30;
CPyL47: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_attr_value);
    goto CPyL42;
CPyL48: ;
    CPy_DECREF(cpy_r_default);
    CPy_DECREF(cpy_r_attr_value);
    goto CPyL15;
CPyL49: ;
    CPy_DECREF(cpy_r_default);
    CPy_DECREF(cpy_r_attr_value);
    goto CPyL22;
CPyL50: ;
    CPy_DECREF(cpy_r_default);
    goto CPyL29;
CPyL51: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_r46);
    goto CPyL42;
CPyL52: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r49);
    goto CPyL42;
CPyL53: ;
    CPy_DecRef(cpy_r_default);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r49);
    CPy_DecRef(cpy_r_r51);
    goto CPyL36;
}

PyObject *CPyPy_attrs____get_decorator_optional_bool_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "name", "default", 0};
    static CPyArg_Parser parser = {"OO|O:_get_decorator_optional_bool_argument", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_name;
    PyObject *obj_default = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_name, &obj_default)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_default;
    if (obj_default == NULL) {
        arg_default = NULL;
        goto __LL4689;
    }
    if (PyBool_Check(obj_default))
        arg_default = obj_default;
    else {
        arg_default = NULL;
    }
    if (arg_default != NULL) goto __LL4689;
    if (obj_default == Py_None)
        arg_default = obj_default;
    else {
        arg_default = NULL;
    }
    if (arg_default != NULL) goto __LL4689;
    CPy_TypeError("bool or None", obj_default); 
    goto fail;
__LL4689: ;
    PyObject *retval = CPyDef_attrs____get_decorator_optional_bool_argument(arg_ctx, arg_name, arg_default);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_get_decorator_optional_bool_argument", 254, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs___attr_tag_callback(PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_tag_callback", 289, CPyStatic_attrs___globals);
        goto CPyL6;
    }
    cpy_r_r1 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_tag_callback", 289, CPyStatic_attrs___globals);
        goto CPyL7;
    }
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_nodes___ClassDef))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "attr_tag_callback", 289, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r1);
        goto CPyL7;
    }
    cpy_r_r3 = ((mypy___nodes___ClassDefObject *)cpy_r_r2)->_info;
    cpy_r_r4 = ((mypy___nodes___TypeInfoObject *)cpy_r_r3)->_metadata;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "attr_tag_callback", "TypeInfo", "metadata", 289, CPyStatic_attrs___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = CPyStatics[4396]; /* 'attrs_tag' */
    cpy_r_r6 = CPyDict_SetItem(cpy_r_r4, cpy_r_r5, cpy_r_r0);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_tag_callback", 289, CPyStatic_attrs___globals);
        goto CPyL6;
    }
    return 1;
CPyL6: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL6;
}

PyObject *CPyPy_attrs___attr_tag_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:attr_tag_callback", kwlist, 0};
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
    char retval = CPyDef_attrs___attr_tag_callback(arg_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "attr_tag_callback", 282, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs___attr_class_maker_callback(PyObject *cpy_r_ctx, PyObject *cpy_r_auto_attribs_default, char cpy_r_frozen_default, char cpy_r_slots_default) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_init;
    char cpy_r_r6;
    char cpy_r_frozen;
    char cpy_r_r7;
    char cpy_r_order;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_slots;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_auto_attribs;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_kw_only;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_match_args;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
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
    PyObject *cpy_r_super_info;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_attributes;
    CPyTagged cpy_r_r42;
    CPyPtr cpy_r_r43;
    int64_t cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    CPyTagged cpy_r_r54;
    CPyPtr cpy_r_r55;
    int64_t cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    CPyPtr cpy_r_r59;
    int64_t cpy_r_r60;
    CPyTagged cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_attr_2;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    tuple_T2OO cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    CPyTagged cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    tuple_T2II cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    tuple_T2II cpy_r_r81;
    tuple_T2II cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    CPyPtr cpy_r_r89;
    int64_t cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyTagged cpy_r_r92;
    CPyPtr cpy_r_r93;
    int64_t cpy_r_r94;
    CPyTagged cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_attr_3;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    CPyTagged cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    int32_t cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_adder;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    size_t __tmp4692;
    if (cpy_r_auto_attribs_default != NULL) goto CPyL84;
    cpy_r_r0 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r0);
    cpy_r_auto_attribs_default = cpy_r_r0;
CPyL2: ;
    if (cpy_r_frozen_default != 2) goto CPyL4;
    cpy_r_frozen_default = 0;
CPyL4: ;
    if (cpy_r_slots_default != 2) goto CPyL6;
    cpy_r_slots_default = 0;
CPyL6: ;
    cpy_r_r1 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 312, CPyStatic_attrs___globals);
        goto CPyL85;
    }
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_nodes___ClassDef))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 312, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r1);
        goto CPyL85;
    }
    cpy_r_r3 = ((mypy___nodes___ClassDefObject *)cpy_r_r2)->_info;
    CPy_INCREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_info = cpy_r_r3;
    cpy_r_r4 = CPyStatics[4384]; /* 'init' */
    cpy_r_r5 = CPyDef_plugins___common____get_decorator_bool_argument(cpy_r_ctx, cpy_r_r4, 1);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 314, CPyStatic_attrs___globals);
        goto CPyL86;
    }
    cpy_r_init = cpy_r_r5;
    cpy_r_r6 = CPyDef_attrs____get_frozen(cpy_r_ctx, cpy_r_frozen_default);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 315, CPyStatic_attrs___globals);
        goto CPyL86;
    }
    cpy_r_frozen = cpy_r_r6;
    cpy_r_r7 = CPyDef_attrs____determine_eq_order(cpy_r_ctx);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 316, CPyStatic_attrs___globals);
        goto CPyL86;
    }
    cpy_r_order = cpy_r_r7;
    cpy_r_r8 = CPyStatics[4006]; /* 'slots' */
    cpy_r_r9 = CPyDef_plugins___common____get_decorator_bool_argument(cpy_r_ctx, cpy_r_r8, cpy_r_slots_default);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 317, CPyStatic_attrs___globals);
        goto CPyL86;
    }
    cpy_r_slots = cpy_r_r9;
    cpy_r_r10 = CPyStatics[4397]; /* 'auto_attribs' */
    cpy_r_r11 = CPyDef_attrs____get_decorator_optional_bool_argument(cpy_r_ctx, cpy_r_r10, cpy_r_auto_attribs_default);
    CPy_DECREF(cpy_r_auto_attribs_default);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 319, CPyStatic_attrs___globals);
        goto CPyL87;
    }
    cpy_r_auto_attribs = cpy_r_r11;
    cpy_r_r12 = CPyStatics[4385]; /* 'kw_only' */
    cpy_r_r13 = CPyDef_plugins___common____get_decorator_bool_argument(cpy_r_ctx, cpy_r_r12, 0);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 320, CPyStatic_attrs___globals);
        goto CPyL88;
    }
    cpy_r_kw_only = cpy_r_r13;
    cpy_r_r14 = CPyStatics[4398]; /* 'match_args' */
    cpy_r_r15 = CPyDef_plugins___common____get_decorator_bool_argument(cpy_r_ctx, cpy_r_r14, 1);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 321, CPyStatic_attrs___globals);
        goto CPyL88;
    }
    cpy_r_match_args = cpy_r_r15;
    cpy_r_r16 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 323, CPyStatic_attrs___globals);
        goto CPyL88;
    }
    if (likely(Py_TYPE(cpy_r_r16) == CPyType_nodes___ClassDef))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 323, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r16);
        goto CPyL88;
    }
    cpy_r_r18 = ((mypy___nodes___ClassDefObject *)cpy_r_r17)->_info;
    cpy_r_r19 = ((mypy___nodes___TypeInfoObject *)cpy_r_r18)->_mro;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "attr_class_maker_callback", "TypeInfo", "mro", 323, CPyStatic_attrs___globals);
        goto CPyL89;
    }
    CPy_INCREF(cpy_r_r19);
CPyL18: ;
    CPy_DECREF(cpy_r_r17);
    cpy_r_r20 = CPyList_GetSlice(cpy_r_r19, 2, -2);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 323, CPyStatic_attrs___globals);
        goto CPyL88;
    }
    if (likely(PyList_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 323, CPyStatic_attrs___globals, "list", cpy_r_r20);
        goto CPyL88;
    }
    cpy_r_r22 = 0;
CPyL21: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r21)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL90;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_r21, cpy_r_r22);
    if (likely((Py_TYPE(cpy_r_r27) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r27) == CPyType_nodes___TypeInfo)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 323, CPyStatic_attrs___globals, "mypy.nodes.TypeInfo", cpy_r_r27);
        goto CPyL91;
    }
    cpy_r_super_info = cpy_r_r28;
    cpy_r_r29 = CPyStatics[4396]; /* 'attrs_tag' */
    cpy_r_r30 = ((mypy___nodes___TypeInfoObject *)cpy_r_super_info)->_metadata;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "attr_class_maker_callback", "TypeInfo", "metadata", 324, CPyStatic_attrs___globals);
        goto CPyL92;
    }
    CPy_INCREF(cpy_r_r30);
CPyL24: ;
    cpy_r_r31 = PyDict_Contains(cpy_r_r30, cpy_r_r29);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 324, CPyStatic_attrs___globals);
        goto CPyL92;
    }
    cpy_r_r33 = cpy_r_r31;
    if (!cpy_r_r33) goto CPyL93;
    cpy_r_r34 = CPyStatics[1875]; /* 'attrs' */
    cpy_r_r35 = ((mypy___nodes___TypeInfoObject *)cpy_r_super_info)->_metadata;
    if (unlikely(cpy_r_r35 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'metadata' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r35);
    }
    CPy_DECREF(cpy_r_super_info);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 324, CPyStatic_attrs___globals);
        goto CPyL91;
    }
CPyL27: ;
    cpy_r_r36 = PyDict_Contains(cpy_r_r35, cpy_r_r34);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 324, CPyStatic_attrs___globals);
        goto CPyL91;
    }
    cpy_r_r38 = cpy_r_r36;
    cpy_r_r39 = cpy_r_r38 ^ 1;
    if (cpy_r_r39) {
        goto CPyL94;
    } else
        goto CPyL30;
CPyL29: ;
    return 0;
CPyL30: ;
    cpy_r_r40 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r40;
    goto CPyL21;
CPyL31: ;
    cpy_r_r41 = CPyDef_attrs____analyze_class(cpy_r_ctx, cpy_r_auto_attribs, cpy_r_kw_only);
    CPy_DECREF(cpy_r_auto_attribs);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 328, CPyStatic_attrs___globals);
        goto CPyL87;
    }
    cpy_r_attributes = cpy_r_r41;
    cpy_r_r42 = 0;
CPyL33: ;
    cpy_r_r43 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r44 = *(int64_t *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 << 1;
    cpy_r_r46 = (Py_ssize_t)cpy_r_r42 < (Py_ssize_t)cpy_r_r45;
    if (!cpy_r_r46) goto CPyL40;
    cpy_r_r47 = CPyList_GetItemUnsafe(cpy_r_attributes, cpy_r_r42);
    if (likely(Py_TYPE(cpy_r_r47) == CPyType_attrs___Attribute))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 331, CPyStatic_attrs___globals, "mypy.plugins.attrs.Attribute", cpy_r_r47);
        goto CPyL95;
    }
    cpy_r_attr = cpy_r_r48;
    cpy_r_r49 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attr)->_name;
    CPy_INCREF(cpy_r_r49);
    CPy_DECREF(cpy_r_attr);
    cpy_r_r50 = CPyDef_nodes___TypeInfo___get(cpy_r_info, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 332, CPyStatic_attrs___globals);
        goto CPyL95;
    }
    cpy_r_node = cpy_r_r50;
    cpy_r_r51 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r52 = cpy_r_node == cpy_r_r51;
    CPy_DECREF(cpy_r_node);
    if (cpy_r_r52) {
        goto CPyL96;
    } else
        goto CPyL39;
CPyL37: ;
    cpy_r_r53 = CPyDef_attrs____add_empty_metadata(cpy_r_info);
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 336, CPyStatic_attrs___globals);
        goto CPyL83;
    }
    return 1;
CPyL39: ;
    cpy_r_r54 = cpy_r_r42 + 2;
    cpy_r_r42 = cpy_r_r54;
    goto CPyL33;
CPyL40: ;
    cpy_r_r55 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r56 = *(int64_t *)cpy_r_r55;
    cpy_r_r57 = PyList_New(cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 339, CPyStatic_attrs___globals);
        goto CPyL95;
    }
    cpy_r_r58 = 0;
CPyL42: ;
    cpy_r_r59 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r60 = *(int64_t *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 << 1;
    cpy_r_r62 = (Py_ssize_t)cpy_r_r58 < (Py_ssize_t)cpy_r_r61;
    if (!cpy_r_r62) goto CPyL97;
    cpy_r_r63 = CPyList_GetItemUnsafe(cpy_r_attributes, cpy_r_r58);
    if (likely(Py_TYPE(cpy_r_r63) == CPyType_attrs___Attribute))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 339, CPyStatic_attrs___globals, "mypy.plugins.attrs.Attribute", cpy_r_r63);
        goto CPyL98;
    }
    cpy_r_attr_2 = cpy_r_r64;
    cpy_r_r65 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attr_2)->_name;
    CPy_INCREF(cpy_r_r65);
    cpy_r_r66 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attr_2)->_name;
    CPy_INCREF(cpy_r_r66);
    CPy_DECREF(cpy_r_attr_2);
    cpy_r_r67 = CPyDef_nodes___TypeInfo_____getitem__(cpy_r_info, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 339, CPyStatic_attrs___globals);
        goto CPyL99;
    }
    cpy_r_r68 = CPY_GET_ATTR(cpy_r_r67, CPyType_nodes___SymbolTableNode, 2, mypy___nodes___SymbolTableNodeObject, PyObject *); /* type */
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 339, CPyStatic_attrs___globals);
        goto CPyL99;
    }
CPyL46: ;
    cpy_r_r69.f0 = cpy_r_r65;
    cpy_r_r69.f1 = cpy_r_r68;
    CPy_INCREF(cpy_r_r69.f0);
    CPy_INCREF(cpy_r_r69.f1);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r70 = PyTuple_New(2);
    if (unlikely(cpy_r_r70 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4690 = cpy_r_r69.f0;
    PyTuple_SET_ITEM(cpy_r_r70, 0, __tmp4690);
    PyObject *__tmp4691 = cpy_r_r69.f1;
    PyTuple_SET_ITEM(cpy_r_r70, 1, __tmp4691);
    cpy_r_r71 = CPyList_SetItemUnsafe(cpy_r_r57, cpy_r_r58, cpy_r_r70);
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 339, CPyStatic_attrs___globals);
        goto CPyL98;
    }
    cpy_r_r72 = cpy_r_r58 + 2;
    cpy_r_r58 = cpy_r_r72;
    goto CPyL42;
CPyL48: ;
    cpy_r_r73 = CPyDef_attrs____add_attrs_magic_attribute(cpy_r_ctx, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 339, CPyStatic_attrs___globals);
        goto CPyL100;
    }
    if (!cpy_r_slots) goto CPyL51;
    cpy_r_r74 = CPyDef_attrs____add_slots(cpy_r_ctx, cpy_r_attributes);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 341, CPyStatic_attrs___globals);
        goto CPyL100;
    }
CPyL51: ;
    if (!cpy_r_match_args) goto CPyL61;
    cpy_r_r75 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 342, CPyStatic_attrs___globals);
        goto CPyL100;
    }
    if (likely(Py_TYPE(cpy_r_r75) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 342, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r75);
        goto CPyL100;
    }
    __tmp4692 = CPy_FindAttrOffset(CPyType_plugin___SemanticAnalyzerPluginInterface, ((mypy___plugin___SemanticAnalyzerPluginInterfaceObject *)cpy_r_r76)->vtable, 1);
    cpy_r_r77 = *(PyObject * *)((char *)cpy_r_r76 + __tmp4692);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "attr_class_maker_callback", "SemanticAnalyzerPluginInterface", "options", 342, CPyStatic_attrs___globals);
        goto CPyL101;
    }
CPyL55: ;
    cpy_r_r78 = ((mypy___options___OptionsObject *)cpy_r_r77)->_python_version;
    CPyTagged_INCREF(cpy_r_r78.f0);
    CPyTagged_INCREF(cpy_r_r78.f1);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r79 = PyTuple_New(2);
    if (unlikely(cpy_r_r79 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4693 = CPyTagged_StealAsObject(cpy_r_r78.f0);
    PyTuple_SET_ITEM(cpy_r_r79, 0, __tmp4693);
    PyObject *__tmp4694 = CPyTagged_StealAsObject(cpy_r_r78.f1);
    PyTuple_SET_ITEM(cpy_r_r79, 1, __tmp4694);
    cpy_r_r80 = CPySequenceTuple_GetSlice(cpy_r_r79, 0, 4);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 342, CPyStatic_attrs___globals);
        goto CPyL100;
    }
    PyObject *__tmp4695;
    if (unlikely(!(PyTuple_Check(cpy_r_r80) && PyTuple_GET_SIZE(cpy_r_r80) == 2))) {
        __tmp4695 = NULL;
        goto __LL4696;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r80, 0))))
        __tmp4695 = PyTuple_GET_ITEM(cpy_r_r80, 0);
    else {
        __tmp4695 = NULL;
    }
    if (__tmp4695 == NULL) goto __LL4696;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r80, 1))))
        __tmp4695 = PyTuple_GET_ITEM(cpy_r_r80, 1);
    else {
        __tmp4695 = NULL;
    }
    if (__tmp4695 == NULL) goto __LL4696;
    __tmp4695 = cpy_r_r80;
__LL4696: ;
    if (unlikely(__tmp4695 == NULL)) {
        CPy_TypeError("tuple[int, int]", cpy_r_r80); cpy_r_r81 = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    } else {
        PyObject *__tmp4697 = PyTuple_GET_ITEM(cpy_r_r80, 0);
        CPyTagged __tmp4698;
        if (likely(PyLong_Check(__tmp4697)))
            __tmp4698 = CPyTagged_FromObject(__tmp4697);
        else {
            CPy_TypeError("int", __tmp4697); __tmp4698 = CPY_INT_TAG;
        }
        cpy_r_r81.f0 = __tmp4698;
        PyObject *__tmp4699 = PyTuple_GET_ITEM(cpy_r_r80, 1);
        CPyTagged __tmp4700;
        if (likely(PyLong_Check(__tmp4699)))
            __tmp4700 = CPyTagged_FromObject(__tmp4699);
        else {
            CPy_TypeError("int", __tmp4699); __tmp4700 = CPY_INT_TAG;
        }
        cpy_r_r81.f1 = __tmp4700;
    }
    CPy_DECREF(cpy_r_r80);
    if (unlikely(cpy_r_r81.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 342, CPyStatic_attrs___globals);
        goto CPyL100;
    }
    cpy_r_r82.f0 = 6;
    cpy_r_r82.f1 = 20;
    CPyTagged_INCREF(cpy_r_r82.f0);
    CPyTagged_INCREF(cpy_r_r82.f1);
    cpy_r_r83 = PyTuple_New(2);
    if (unlikely(cpy_r_r83 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4701 = CPyTagged_StealAsObject(cpy_r_r81.f0);
    PyTuple_SET_ITEM(cpy_r_r83, 0, __tmp4701);
    PyObject *__tmp4702 = CPyTagged_StealAsObject(cpy_r_r81.f1);
    PyTuple_SET_ITEM(cpy_r_r83, 1, __tmp4702);
    cpy_r_r84 = PyTuple_New(2);
    if (unlikely(cpy_r_r84 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4703 = CPyTagged_StealAsObject(cpy_r_r82.f0);
    PyTuple_SET_ITEM(cpy_r_r84, 0, __tmp4703);
    PyObject *__tmp4704 = CPyTagged_StealAsObject(cpy_r_r82.f1);
    PyTuple_SET_ITEM(cpy_r_r84, 1, __tmp4704);
    cpy_r_r85 = PyObject_RichCompare(cpy_r_r83, cpy_r_r84, 5);
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 342, CPyStatic_attrs___globals);
        goto CPyL100;
    }
    if (unlikely(!PyBool_Check(cpy_r_r85))) {
        CPy_TypeError("bool", cpy_r_r85); cpy_r_r86 = 2;
    } else
        cpy_r_r86 = cpy_r_r85 == Py_True;
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 342, CPyStatic_attrs___globals);
        goto CPyL100;
    }
    if (!cpy_r_r86) goto CPyL61;
    cpy_r_r87 = CPyDef_attrs____add_match_args(cpy_r_ctx, cpy_r_attributes);
    if (unlikely(cpy_r_r87 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 345, CPyStatic_attrs___globals);
        goto CPyL100;
    }
CPyL61: ;
    cpy_r_r88 = CPyStatics[4399]; /* 'attributes' */
    cpy_r_r89 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r90 = *(int64_t *)cpy_r_r89;
    cpy_r_r91 = PyList_New(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 349, CPyStatic_attrs___globals);
        goto CPyL100;
    }
    cpy_r_r92 = 0;
CPyL63: ;
    cpy_r_r93 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r94 = *(int64_t *)cpy_r_r93;
    cpy_r_r95 = cpy_r_r94 << 1;
    cpy_r_r96 = (Py_ssize_t)cpy_r_r92 < (Py_ssize_t)cpy_r_r95;
    if (!cpy_r_r96) goto CPyL68;
    cpy_r_r97 = CPyList_GetItemUnsafe(cpy_r_attributes, cpy_r_r92);
    if (likely(Py_TYPE(cpy_r_r97) == CPyType_attrs___Attribute))
        cpy_r_r98 = cpy_r_r97;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 349, CPyStatic_attrs___globals, "mypy.plugins.attrs.Attribute", cpy_r_r97);
        goto CPyL102;
    }
    cpy_r_attr_3 = cpy_r_r98;
    cpy_r_r99 = CPyDef_attrs___Attribute___serialize(cpy_r_attr_3);
    CPy_DECREF(cpy_r_attr_3);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 349, CPyStatic_attrs___globals);
        goto CPyL102;
    }
    cpy_r_r100 = CPyList_SetItemUnsafe(cpy_r_r91, cpy_r_r92, cpy_r_r99);
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 349, CPyStatic_attrs___globals);
        goto CPyL102;
    }
    cpy_r_r101 = cpy_r_r92 + 2;
    cpy_r_r92 = cpy_r_r101;
    goto CPyL63;
CPyL68: ;
    cpy_r_r102 = CPyStatics[4400]; /* 'frozen' */
    cpy_r_r103 = cpy_r_frozen ? Py_True : Py_False;
    cpy_r_r104 = CPyDict_Build(2, cpy_r_r88, cpy_r_r91, cpy_r_r102, cpy_r_r103);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 348, CPyStatic_attrs___globals);
        goto CPyL100;
    }
    cpy_r_r105 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 348, CPyStatic_attrs___globals);
        goto CPyL103;
    }
    if (likely(Py_TYPE(cpy_r_r105) == CPyType_nodes___ClassDef))
        cpy_r_r106 = cpy_r_r105;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 348, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r105);
        goto CPyL103;
    }
    cpy_r_r107 = ((mypy___nodes___ClassDefObject *)cpy_r_r106)->_info;
    cpy_r_r108 = ((mypy___nodes___TypeInfoObject *)cpy_r_r107)->_metadata;
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "attr_class_maker_callback", "TypeInfo", "metadata", 348, CPyStatic_attrs___globals);
        goto CPyL104;
    }
    CPy_INCREF(cpy_r_r108);
CPyL72: ;
    CPy_DECREF(cpy_r_r106);
    cpy_r_r109 = CPyStatics[1875]; /* 'attrs' */
    cpy_r_r110 = CPyDict_SetItem(cpy_r_r108, cpy_r_r109, cpy_r_r104);
    CPy_DECREF(cpy_r_r108);
    CPy_DECREF(cpy_r_r104);
    cpy_r_r111 = cpy_r_r110 >= 0;
    if (unlikely(!cpy_r_r111)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 348, CPyStatic_attrs___globals);
        goto CPyL100;
    }
    cpy_r_r112 = CPyDef_attrs___MethodAdder(cpy_r_ctx);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 353, CPyStatic_attrs___globals);
        goto CPyL100;
    }
    cpy_r_adder = cpy_r_r112;
    if (!cpy_r_init) goto CPyL76;
    cpy_r_r113 = CPyStatics[288]; /* '__init__' */
    CPy_INCREF(cpy_r_r113);
    cpy_r_r114 = cpy_r_r113;
    goto CPyL77;
CPyL76: ;
    cpy_r_r115 = CPyStatics[4401]; /* '__attrs_init__' */
    CPy_INCREF(cpy_r_r115);
    cpy_r_r114 = cpy_r_r115;
CPyL77: ;
    cpy_r_r116 = CPyDef_attrs____add_init(cpy_r_ctx, cpy_r_attributes, cpy_r_adder, cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r116 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 355, CPyStatic_attrs___globals);
        goto CPyL105;
    }
    if (!cpy_r_order) goto CPyL106;
    cpy_r_r117 = CPyDef_attrs____add_order(cpy_r_ctx, cpy_r_adder);
    CPy_DECREF(cpy_r_adder);
    if (unlikely(cpy_r_r117 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 357, CPyStatic_attrs___globals);
        goto CPyL100;
    }
CPyL80: ;
    if (!cpy_r_frozen) goto CPyL107;
    cpy_r_r118 = CPyDef_attrs____make_frozen(cpy_r_ctx, cpy_r_attributes);
    CPy_DECREF(cpy_r_attributes);
    if (unlikely(cpy_r_r118 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 359, CPyStatic_attrs___globals);
        goto CPyL83;
    }
CPyL82: ;
    return 1;
CPyL83: ;
    cpy_r_r119 = 2;
    return cpy_r_r119;
CPyL84: ;
    CPy_INCREF(cpy_r_auto_attribs_default);
    goto CPyL2;
CPyL85: ;
    CPy_DecRef(cpy_r_auto_attribs_default);
    goto CPyL83;
CPyL86: ;
    CPy_DecRef(cpy_r_auto_attribs_default);
    CPy_DecRef(cpy_r_info);
    goto CPyL83;
CPyL87: ;
    CPy_DecRef(cpy_r_info);
    goto CPyL83;
CPyL88: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_auto_attribs);
    goto CPyL83;
CPyL89: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_auto_attribs);
    CPy_DecRef(cpy_r_r17);
    goto CPyL83;
CPyL90: ;
    CPy_DECREF(cpy_r_r21);
    goto CPyL31;
CPyL91: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_auto_attribs);
    CPy_DecRef(cpy_r_r21);
    goto CPyL83;
CPyL92: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_auto_attribs);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_super_info);
    goto CPyL83;
CPyL93: ;
    CPy_DECREF(cpy_r_super_info);
    goto CPyL30;
CPyL94: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_auto_attribs);
    CPy_DECREF(cpy_r_r21);
    goto CPyL29;
CPyL95: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    goto CPyL83;
CPyL96: ;
    CPy_DECREF(cpy_r_attributes);
    goto CPyL37;
CPyL97: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL48;
CPyL98: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_r57);
    goto CPyL83;
CPyL99: ;
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r65);
    goto CPyL83;
CPyL100: ;
    CPy_DecRef(cpy_r_attributes);
    goto CPyL83;
CPyL101: ;
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_r76);
    goto CPyL83;
CPyL102: ;
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_r91);
    goto CPyL83;
CPyL103: ;
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_r104);
    goto CPyL83;
CPyL104: ;
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r106);
    goto CPyL83;
CPyL105: ;
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_adder);
    goto CPyL83;
CPyL106: ;
    CPy_DECREF(cpy_r_adder);
    goto CPyL80;
CPyL107: ;
    CPy_DECREF(cpy_r_attributes);
    goto CPyL82;
}

PyObject *CPyPy_attrs___attr_class_maker_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "auto_attribs_default", "frozen_default", "slots_default", 0};
    static CPyArg_Parser parser = {"O|OOO:attr_class_maker_callback", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_auto_attribs_default = NULL;
    PyObject *obj_frozen_default = NULL;
    PyObject *obj_slots_default = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_auto_attribs_default, &obj_frozen_default, &obj_slots_default)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_auto_attribs_default;
    if (obj_auto_attribs_default == NULL) {
        arg_auto_attribs_default = NULL;
        goto __LL4705;
    }
    if (PyBool_Check(obj_auto_attribs_default))
        arg_auto_attribs_default = obj_auto_attribs_default;
    else {
        arg_auto_attribs_default = NULL;
    }
    if (arg_auto_attribs_default != NULL) goto __LL4705;
    if (obj_auto_attribs_default == Py_None)
        arg_auto_attribs_default = obj_auto_attribs_default;
    else {
        arg_auto_attribs_default = NULL;
    }
    if (arg_auto_attribs_default != NULL) goto __LL4705;
    CPy_TypeError("bool or None", obj_auto_attribs_default); 
    goto fail;
__LL4705: ;
    char arg_frozen_default;
    if (obj_frozen_default == NULL) {
        arg_frozen_default = 2;
    } else if (unlikely(!PyBool_Check(obj_frozen_default))) {
        CPy_TypeError("bool", obj_frozen_default); goto fail;
    } else
        arg_frozen_default = obj_frozen_default == Py_True;
    char arg_slots_default;
    if (obj_slots_default == NULL) {
        arg_slots_default = 2;
    } else if (unlikely(!PyBool_Check(obj_slots_default))) {
        CPy_TypeError("bool", obj_slots_default); goto fail;
    } else
        arg_slots_default = obj_slots_default == Py_True;
    char retval = CPyDef_attrs___attr_class_maker_callback(arg_ctx, arg_auto_attribs_default, arg_frozen_default, arg_slots_default);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "attr_class_maker_callback", 292, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs____get_frozen(PyObject *cpy_r_ctx, char cpy_r_frozen_default) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_super_info;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
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
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    cpy_r_r0 = CPyStatics[4400]; /* 'frozen' */
    cpy_r_r1 = CPyDef_plugins___common____get_decorator_bool_argument(cpy_r_ctx, cpy_r_r0, cpy_r_frozen_default);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_frozen", 366, CPyStatic_attrs___globals);
        goto CPyL23;
    }
    if (!cpy_r_r1) goto CPyL3;
    return 1;
CPyL3: ;
    cpy_r_r2 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_frozen", 369, CPyStatic_attrs___globals);
        goto CPyL23;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_nodes___ClassDef))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_frozen", 369, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r2);
        goto CPyL23;
    }
    cpy_r_r4 = ((mypy___nodes___ClassDefObject *)cpy_r_r3)->_info;
    cpy_r_r5 = ((mypy___nodes___TypeInfoObject *)cpy_r_r4)->_mro;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_get_frozen", "TypeInfo", "mro", 369, CPyStatic_attrs___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r5);
CPyL6: ;
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = CPyList_GetSlice(cpy_r_r5, 2, -2);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_frozen", 369, CPyStatic_attrs___globals);
        goto CPyL23;
    }
    if (likely(PyList_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_frozen", 369, CPyStatic_attrs___globals, "list", cpy_r_r6);
        goto CPyL23;
    }
    cpy_r_r8 = 0;
CPyL9: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r12) goto CPyL25;
    cpy_r_r13 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r8);
    if (likely((Py_TYPE(cpy_r_r13) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r13) == CPyType_nodes___TypeInfo)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_frozen", 369, CPyStatic_attrs___globals, "mypy.nodes.TypeInfo", cpy_r_r13);
        goto CPyL26;
    }
    cpy_r_super_info = cpy_r_r14;
    cpy_r_r15 = CPyStatics[1875]; /* 'attrs' */
    cpy_r_r16 = ((mypy___nodes___TypeInfoObject *)cpy_r_super_info)->_metadata;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_get_frozen", "TypeInfo", "metadata", 370, CPyStatic_attrs___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r16);
CPyL12: ;
    cpy_r_r17 = PyDict_Contains(cpy_r_r16, cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_frozen", 370, CPyStatic_attrs___globals);
        goto CPyL27;
    }
    cpy_r_r19 = cpy_r_r17;
    if (!cpy_r_r19) goto CPyL28;
    cpy_r_r20 = ((mypy___nodes___TypeInfoObject *)cpy_r_super_info)->_metadata;
    if (unlikely(cpy_r_r20 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'metadata' of 'TypeInfo' undefined");
    } else {
        CPy_INCREF(cpy_r_r20);
    }
    CPy_DECREF(cpy_r_super_info);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_frozen", 370, CPyStatic_attrs___globals);
        goto CPyL26;
    }
CPyL15: ;
    cpy_r_r21 = CPyStatics[1875]; /* 'attrs' */
    cpy_r_r22 = CPyDict_GetItem(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_frozen", 370, CPyStatic_attrs___globals);
        goto CPyL26;
    }
    if (likely(PyDict_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_frozen", 370, CPyStatic_attrs___globals, "dict", cpy_r_r22);
        goto CPyL26;
    }
    cpy_r_r24 = CPyStatics[4400]; /* 'frozen' */
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_frozen", 370, CPyStatic_attrs___globals);
        goto CPyL26;
    }
    cpy_r_r26 = PyObject_IsTrue(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_frozen", 370, CPyStatic_attrs___globals);
        goto CPyL26;
    }
    cpy_r_r28 = cpy_r_r26;
    if (cpy_r_r28) {
        goto CPyL29;
    } else
        goto CPyL21;
CPyL20: ;
    return 1;
CPyL21: ;
    cpy_r_r29 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r29;
    goto CPyL9;
CPyL22: ;
    return 0;
CPyL23: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL24: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL23;
CPyL25: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL22;
CPyL26: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_super_info);
    goto CPyL23;
CPyL28: ;
    CPy_DECREF(cpy_r_super_info);
    goto CPyL21;
CPyL29: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL20;
}

PyObject *CPyPy_attrs____get_frozen(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "frozen_default", 0};
    static CPyArg_Parser parser = {"OO:_get_frozen", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_frozen_default;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_frozen_default)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    char arg_frozen_default;
    if (unlikely(!PyBool_Check(obj_frozen_default))) {
        CPy_TypeError("bool", obj_frozen_default); goto fail;
    } else
        arg_frozen_default = obj_frozen_default == Py_True;
    char retval = CPyDef_attrs____get_frozen(arg_ctx, arg_frozen_default);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_get_frozen", 364, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs____analyze_class(PyObject *cpy_r_ctx, PyObject *cpy_r_auto_attribs, char cpy_r_kw_only) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_own_attrs;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
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
    PyObject *cpy_r_stmt;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_attr;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyPtr cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_r45;
    int64_t cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    tuple_T3CIO cpy_r_r49;
    CPyTagged cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_attribute;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r70;
    CPyPtr cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_taken_attr_names;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_super_attrs;
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
    PyObject *cpy_r_super_info;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_data;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    int32_t cpy_r_r119;
    char cpy_r_r120;
    char cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    int32_t cpy_r_r135;
    char cpy_r_r136;
    char cpy_r_r137;
    CPyTagged cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_attributes;
    char cpy_r_last_default;
    CPyTagged cpy_r_r142;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r143;
    CPyPtr cpy_r_r144;
    int64_t cpy_r_r145;
    CPyTagged cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    char cpy_r_r150;
    char cpy_r_r151;
    CPyPtr cpy_r_r152;
    int64_t cpy_r_r153;
    CPyTagged cpy_r_r154;
    int64_t cpy_r_r155;
    char cpy_r_r156;
    char cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_context;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    char cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    char cpy_r_r170;
    char cpy_r_r171;
    char cpy_r_r172;
    CPyTagged cpy_r_r173;
    CPyTagged cpy_r_r174;
    PyObject *cpy_r_r175;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 384, CPyStatic_attrs___globals);
        goto CPyL109;
    }
    cpy_r_own_attrs = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_auto_attribs == cpy_r_r1;
    if (!cpy_r_r2) goto CPyL110;
    cpy_r_r3 = CPyDef_attrs____detect_auto_attribs(cpy_r_ctx);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 386, CPyStatic_attrs___globals);
        goto CPyL111;
    }
    cpy_r_r4 = cpy_r_r3 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r4);
    cpy_r_auto_attribs = cpy_r_r4;
CPyL4: ;
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 389, CPyStatic_attrs___globals);
        goto CPyL112;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_nodes___ClassDef))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 389, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r5);
        goto CPyL112;
    }
    cpy_r_r7 = ((mypy___nodes___ClassDefObject *)cpy_r_r6)->_defs;
    cpy_r_r8 = ((mypy___nodes___BlockObject *)cpy_r_r7)->_body;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = 0;
CPyL7: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL113;
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r8, cpy_r_r9);
    if (likely(PyObject_TypeCheck(cpy_r_r14, CPyType_nodes___Statement)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 389, CPyStatic_attrs___globals, "mypy.nodes.Statement", cpy_r_r14);
        goto CPyL114;
    }
    cpy_r_stmt = cpy_r_r15;
    cpy_r_r16 = (PyObject *)CPyType_nodes___AssignmentStmt;
    cpy_r_r17 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r18 = *(PyObject * *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 == cpy_r_r16;
    if (!cpy_r_r19) goto CPyL23;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r20 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 391, CPyStatic_attrs___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL114;
    }
    if (unlikely(!PyBool_Check(cpy_r_auto_attribs))) {
        CPy_TypeError("bool", cpy_r_auto_attribs); cpy_r_r21 = 2;
    } else
        cpy_r_r21 = cpy_r_auto_attribs == Py_True;
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 391, CPyStatic_attrs___globals);
        goto CPyL115;
    }
    cpy_r_r22 = CPyDef_attrs____attributes_from_assignment(cpy_r_ctx, cpy_r_r20, cpy_r_r21, cpy_r_kw_only);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 391, CPyStatic_attrs___globals);
        goto CPyL114;
    }
    cpy_r_r23 = PyObject_GetIter(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 391, CPyStatic_attrs___globals);
        goto CPyL114;
    }
CPyL14: ;
    cpy_r_r24 = PyIter_Next(cpy_r_r23);
    if (cpy_r_r24 == NULL) goto CPyL116;
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_attrs___Attribute))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 391, CPyStatic_attrs___globals, "mypy.plugins.attrs.Attribute", cpy_r_r24);
        goto CPyL117;
    }
    cpy_r_attr = cpy_r_r25;
    if (unlikely(!PyBool_Check(cpy_r_auto_attribs))) {
        CPy_TypeError("bool", cpy_r_auto_attribs); cpy_r_r26 = 2;
    } else
        cpy_r_r26 = cpy_r_auto_attribs == Py_True;
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 396, CPyStatic_attrs___globals);
        goto CPyL118;
    }
    if (cpy_r_r26) goto CPyL21;
    cpy_r_r27 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attr)->_name;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = PyDict_Contains(cpy_r_own_attrs, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 396, CPyStatic_attrs___globals);
        goto CPyL118;
    }
    cpy_r_r30 = cpy_r_r28;
    if (!cpy_r_r30) goto CPyL21;
    cpy_r_r31 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attr)->_name;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = PyObject_DelItem(cpy_r_own_attrs, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 397, CPyStatic_attrs___globals);
        goto CPyL118;
    }
CPyL21: ;
    cpy_r_r34 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attr)->_name;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = CPyDict_SetItem(cpy_r_own_attrs, cpy_r_r34, cpy_r_attr);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_attr);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 398, CPyStatic_attrs___globals);
        goto CPyL117;
    } else
        goto CPyL14;
CPyL22: ;
    cpy_r_r37 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 391, CPyStatic_attrs___globals);
        goto CPyL114;
    } else
        goto CPyL26;
CPyL23: ;
    cpy_r_r38 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r39 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r40 = *(PyObject * *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 == cpy_r_r38;
    if (!cpy_r_r41) goto CPyL119;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___Decorator))
        cpy_r_r42 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 400, CPyStatic_attrs___globals, "mypy.nodes.Decorator", cpy_r_stmt);
        goto CPyL114;
    }
    cpy_r_r43 = CPyDef_attrs____cleanup_decorator(cpy_r_r42, cpy_r_own_attrs);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 400, CPyStatic_attrs___globals);
        goto CPyL114;
    }
CPyL26: ;
    cpy_r_r44 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r44;
    goto CPyL7;
CPyL27: ;
    cpy_r_r45 = 0;
    cpy_r_r46 = PyDict_Size(cpy_r_own_attrs);
    cpy_r_r47 = cpy_r_r46 << 1;
    cpy_r_r48 = CPyDict_GetValuesIter(cpy_r_own_attrs);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 402, CPyStatic_attrs___globals);
        goto CPyL111;
    }
CPyL28: ;
    cpy_r_r49 = CPyDict_NextValue(cpy_r_r48, cpy_r_r45);
    cpy_r_r50 = cpy_r_r49.f1;
    cpy_r_r45 = cpy_r_r50;
    cpy_r_r51 = cpy_r_r49.f0;
    if (!cpy_r_r51) goto CPyL120;
    cpy_r_r52 = cpy_r_r49.f2;
    CPy_INCREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r49.f2);
    if (likely(Py_TYPE(cpy_r_r52) == CPyType_attrs___Attribute))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 402, CPyStatic_attrs___globals, "mypy.plugins.attrs.Attribute", cpy_r_r52);
        goto CPyL121;
    }
    cpy_r_attribute = cpy_r_r53;
    cpy_r_r54 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attribute)->_name;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 405, CPyStatic_attrs___globals);
        goto CPyL122;
    }
    if (likely(Py_TYPE(cpy_r_r55) == CPyType_nodes___ClassDef))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 405, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r55);
        goto CPyL122;
    }
    cpy_r_r57 = ((mypy___nodes___ClassDefObject *)cpy_r_r56)->_info;
    cpy_r_r58 = ((mypy___nodes___TypeInfoObject *)cpy_r_r57)->_names;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_analyze_class", "TypeInfo", "names", 405, CPyStatic_attrs___globals);
        goto CPyL123;
    }
    CPy_INCREF(cpy_r_r58);
CPyL33: ;
    CPy_DECREF(cpy_r_r56);
    cpy_r_r59 = PyDict_Contains(cpy_r_r58, cpy_r_r54);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 405, CPyStatic_attrs___globals);
        goto CPyL124;
    }
    cpy_r_r61 = cpy_r_r59;
    if (!cpy_r_r61) goto CPyL125;
    cpy_r_r62 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 406, CPyStatic_attrs___globals);
        goto CPyL124;
    }
    if (likely(Py_TYPE(cpy_r_r62) == CPyType_nodes___ClassDef))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 406, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r62);
        goto CPyL124;
    }
    cpy_r_r64 = ((mypy___nodes___ClassDefObject *)cpy_r_r63)->_info;
    cpy_r_r65 = ((mypy___nodes___TypeInfoObject *)cpy_r_r64)->_names;
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_analyze_class", "TypeInfo", "names", 406, CPyStatic_attrs___globals);
        goto CPyL126;
    }
    CPy_INCREF(cpy_r_r65);
CPyL38: ;
    CPy_DECREF(cpy_r_r63);
    cpy_r_r66 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attribute)->_name;
    CPy_INCREF(cpy_r_r66);
    CPy_DECREF(cpy_r_attribute);
    cpy_r_r67 = CPyDict_GetItem(cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 406, CPyStatic_attrs___globals);
        goto CPyL121;
    }
    if (likely(Py_TYPE(cpy_r_r67) == CPyType_nodes___SymbolTableNode))
        cpy_r_r68 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 406, CPyStatic_attrs___globals, "mypy.nodes.SymbolTableNode", cpy_r_r67);
        goto CPyL121;
    }
    cpy_r_r69 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r68)->_node;
    CPy_INCREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r68);
    cpy_r_node = cpy_r_r69;
    cpy_r_r70 = (PyObject *)CPyType_nodes___PlaceholderNode;
    cpy_r_r71 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r72 = *(PyObject * *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 == cpy_r_r70;
    if (cpy_r_r73) goto CPyL127;
    cpy_r_r74 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r75 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r76 = *(PyObject * *)cpy_r_r75;
    cpy_r_r77 = cpy_r_r76 == cpy_r_r74;
    if (cpy_r_r77) {
        goto CPyL44;
    } else
        goto CPyL128;
CPyL42: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r78 = 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 410, CPyStatic_attrs___globals);
        goto CPyL109;
    }
    CPy_Unreachable();
CPyL44: ;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r79 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 411, CPyStatic_attrs___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL129;
    }
    ((mypy___nodes___VarObject *)cpy_r_r79)->_is_initialized_in_class = 0;
    CPy_DECREF(cpy_r_node);
CPyL46: ;
    cpy_r_r81 = CPyDict_CheckSize(cpy_r_own_attrs, cpy_r_r47);
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 402, CPyStatic_attrs___globals);
        goto CPyL121;
    } else
        goto CPyL28;
CPyL47: ;
    cpy_r_r82 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 402, CPyStatic_attrs___globals);
        goto CPyL111;
    }
    cpy_r_r83 = PySet_New(cpy_r_own_attrs);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 414, CPyStatic_attrs___globals);
        goto CPyL111;
    }
    cpy_r_taken_attr_names = cpy_r_r83;
    cpy_r_r84 = PyList_New(0);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 415, CPyStatic_attrs___globals);
        goto CPyL130;
    }
    cpy_r_super_attrs = cpy_r_r84;
    cpy_r_r85 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 416, CPyStatic_attrs___globals);
        goto CPyL131;
    }
    if (likely(Py_TYPE(cpy_r_r85) == CPyType_nodes___ClassDef))
        cpy_r_r86 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 416, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r85);
        goto CPyL131;
    }
    cpy_r_r87 = ((mypy___nodes___ClassDefObject *)cpy_r_r86)->_info;
    cpy_r_r88 = ((mypy___nodes___TypeInfoObject *)cpy_r_r87)->_mro;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_analyze_class", "TypeInfo", "mro", 416, CPyStatic_attrs___globals);
        goto CPyL132;
    }
    CPy_INCREF(cpy_r_r88);
CPyL53: ;
    CPy_DECREF(cpy_r_r86);
    cpy_r_r89 = CPyList_GetSlice(cpy_r_r88, 2, -2);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 416, CPyStatic_attrs___globals);
        goto CPyL131;
    }
    if (likely(PyList_Check(cpy_r_r89)))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 416, CPyStatic_attrs___globals, "list", cpy_r_r89);
        goto CPyL131;
    }
    cpy_r_r91 = 0;
CPyL56: ;
    cpy_r_r92 = (CPyPtr)&((PyVarObject *)cpy_r_r90)->ob_size;
    cpy_r_r93 = *(int64_t *)cpy_r_r92;
    cpy_r_r94 = cpy_r_r93 << 1;
    cpy_r_r95 = (Py_ssize_t)cpy_r_r91 < (Py_ssize_t)cpy_r_r94;
    if (!cpy_r_r95) goto CPyL133;
    cpy_r_r96 = CPyList_GetItemUnsafe(cpy_r_r90, cpy_r_r91);
    if (likely((Py_TYPE(cpy_r_r96) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r96) == CPyType_nodes___TypeInfo)))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 416, CPyStatic_attrs___globals, "mypy.nodes.TypeInfo", cpy_r_r96);
        goto CPyL134;
    }
    cpy_r_super_info = cpy_r_r97;
    cpy_r_r98 = CPyStatics[1875]; /* 'attrs' */
    cpy_r_r99 = ((mypy___nodes___TypeInfoObject *)cpy_r_super_info)->_metadata;
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_analyze_class", "TypeInfo", "metadata", 417, CPyStatic_attrs___globals);
        goto CPyL135;
    }
    CPy_INCREF(cpy_r_r99);
CPyL59: ;
    cpy_r_r100 = PyDict_Contains(cpy_r_r99, cpy_r_r98);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 417, CPyStatic_attrs___globals);
        goto CPyL135;
    }
    cpy_r_r102 = cpy_r_r100;
    if (!cpy_r_r102) goto CPyL136;
    cpy_r_r103 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 419, CPyStatic_attrs___globals);
        goto CPyL135;
    }
    if (likely(Py_TYPE(cpy_r_r103) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 419, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r103);
        goto CPyL135;
    }
    cpy_r_r105 = CPY_GET_ATTR(cpy_r_super_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 419, CPyStatic_attrs___globals);
        goto CPyL137;
    }
CPyL64: ;
    cpy_r_r106 = CPyDef_trigger___make_wildcard_trigger(cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 419, CPyStatic_attrs___globals);
        goto CPyL137;
    }
    cpy_r_r107 = NULL;
    cpy_r_r108 = CPY_GET_METHOD_TRAIT(cpy_r_r104, CPyType_plugin___SemanticAnalyzerPluginInterface, 12, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r104, cpy_r_r106, cpy_r_r107); /* add_plugin_dependency */
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r108 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 419, CPyStatic_attrs___globals);
        goto CPyL135;
    }
    cpy_r_r109 = ((mypy___nodes___TypeInfoObject *)cpy_r_super_info)->_metadata;
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_analyze_class", "TypeInfo", "metadata", 421, CPyStatic_attrs___globals);
        goto CPyL135;
    }
    CPy_INCREF(cpy_r_r109);
CPyL67: ;
    cpy_r_r110 = CPyStatics[1875]; /* 'attrs' */
    cpy_r_r111 = CPyDict_GetItem(cpy_r_r109, cpy_r_r110);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 421, CPyStatic_attrs___globals);
        goto CPyL135;
    }
    if (likely(PyDict_Check(cpy_r_r111)))
        cpy_r_r112 = cpy_r_r111;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 421, CPyStatic_attrs___globals, "dict", cpy_r_r111);
        goto CPyL135;
    }
    cpy_r_r113 = CPyStatics[4399]; /* 'attributes' */
    cpy_r_r114 = CPyDict_GetItem(cpy_r_r112, cpy_r_r113);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 421, CPyStatic_attrs___globals);
        goto CPyL135;
    }
    cpy_r_r115 = PyObject_GetIter(cpy_r_r114);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 421, CPyStatic_attrs___globals);
        goto CPyL135;
    }
CPyL71: ;
    cpy_r_r116 = PyIter_Next(cpy_r_r115);
    if (cpy_r_r116 == NULL) goto CPyL138;
    cpy_r_data = cpy_r_r116;
    cpy_r_r117 = CPyStatics[2329]; /* 'name' */
    cpy_r_r118 = PyObject_GetItem(cpy_r_data, cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 424, CPyStatic_attrs___globals);
        goto CPyL139;
    }
    cpy_r_r119 = PySet_Contains(cpy_r_taken_attr_names, cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    cpy_r_r120 = cpy_r_r119 >= 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 424, CPyStatic_attrs___globals);
        goto CPyL139;
    }
    cpy_r_r121 = cpy_r_r119;
    cpy_r_r122 = cpy_r_r121 ^ 1;
    if (!cpy_r_r122) goto CPyL140;
    cpy_r_r123 = (PyObject *)CPyType_attrs___Attribute;
    cpy_r_r124 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 425, CPyStatic_attrs___globals);
        goto CPyL139;
    }
    if (likely(Py_TYPE(cpy_r_r124) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r125 = cpy_r_r124;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 425, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r124);
        goto CPyL139;
    }
    if (likely(PyDict_Check(cpy_r_data)))
        cpy_r_r126 = cpy_r_data;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 425, CPyStatic_attrs___globals, "dict", cpy_r_data);
        goto CPyL141;
    }
    cpy_r_r127 = CPyDef_attrs___Attribute___deserialize(cpy_r_r123, cpy_r_super_info, cpy_r_r126, cpy_r_r125);
    CPy_DECREF(cpy_r_r126);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 425, CPyStatic_attrs___globals);
        goto CPyL142;
    }
    cpy_r_a = cpy_r_r127;
    cpy_r_r128 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 426, CPyStatic_attrs___globals);
        goto CPyL143;
    }
    if (likely(Py_TYPE(cpy_r_r128) == CPyType_nodes___ClassDef))
        cpy_r_r129 = cpy_r_r128;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 426, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r128);
        goto CPyL143;
    }
    cpy_r_r130 = ((mypy___nodes___ClassDefObject *)cpy_r_r129)->_info;
    CPy_INCREF(cpy_r_r130);
    CPy_DECREF(cpy_r_r129);
    cpy_r_r131 = CPyDef_attrs___Attribute___expand_typevar_from_subtype(cpy_r_a, cpy_r_r130);
    CPy_DECREF(cpy_r_r130);
    if (unlikely(cpy_r_r131 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 426, CPyStatic_attrs___globals);
        goto CPyL143;
    }
    cpy_r_r132 = PyList_Append(cpy_r_super_attrs, cpy_r_a);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 427, CPyStatic_attrs___globals);
        goto CPyL143;
    }
    cpy_r_r134 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_a)->_name;
    CPy_INCREF(cpy_r_r134);
    CPy_DECREF(cpy_r_a);
    cpy_r_r135 = PySet_Add(cpy_r_taken_attr_names, cpy_r_r134);
    CPy_DECREF(cpy_r_r134);
    cpy_r_r136 = cpy_r_r135 >= 0;
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 428, CPyStatic_attrs___globals);
        goto CPyL142;
    } else
        goto CPyL71;
CPyL84: ;
    cpy_r_r137 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 421, CPyStatic_attrs___globals);
        goto CPyL134;
    }
CPyL85: ;
    cpy_r_r138 = cpy_r_r91 + 2;
    cpy_r_r91 = cpy_r_r138;
    goto CPyL56;
CPyL86: ;
    cpy_r_r139 = CPyDict_Values(cpy_r_own_attrs);
    CPy_DECREF(cpy_r_own_attrs);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 429, CPyStatic_attrs___globals);
        goto CPyL144;
    }
    cpy_r_r140 = PyNumber_Add(cpy_r_super_attrs, cpy_r_r139);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 429, CPyStatic_attrs___globals);
        goto CPyL144;
    }
    if (likely(PyList_Check(cpy_r_r140)))
        cpy_r_r141 = cpy_r_r140;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 429, CPyStatic_attrs___globals, "list", cpy_r_r140);
        goto CPyL144;
    }
    cpy_r_attributes = cpy_r_r141;
    cpy_r_last_default = 0;
    cpy_r_r142 = 0;
    cpy_r_i = 0;
    cpy_r_r143 = 0;
CPyL90: ;
    cpy_r_r144 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r145 = *(int64_t *)cpy_r_r144;
    cpy_r_r146 = cpy_r_r145 << 1;
    cpy_r_r147 = (Py_ssize_t)cpy_r_r143 < (Py_ssize_t)cpy_r_r146;
    if (!cpy_r_r147) goto CPyL145;
    cpy_r_r148 = CPyList_GetItemUnsafe(cpy_r_attributes, cpy_r_r143);
    if (likely(Py_TYPE(cpy_r_r148) == CPyType_attrs___Attribute))
        cpy_r_r149 = cpy_r_r148;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 435, CPyStatic_attrs___globals, "mypy.plugins.attrs.Attribute", cpy_r_r148);
        goto CPyL146;
    }
    cpy_r_attribute = cpy_r_r149;
    cpy_r_r150 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attribute)->_init;
    if (!cpy_r_r150) goto CPyL147;
CPyL93: ;
    cpy_r_r151 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attribute)->_kw_only;
    if (cpy_r_r151) goto CPyL147;
CPyL94: ;
    cpy_r_r152 = (CPyPtr)&((PyVarObject *)cpy_r_super_attrs)->ob_size;
    cpy_r_r153 = *(int64_t *)cpy_r_r152;
    cpy_r_r154 = cpy_r_r153 << 1;
    cpy_r_r155 = cpy_r_i & 1;
    cpy_r_r156 = cpy_r_r155 != 0;
    if (!cpy_r_r156) goto CPyL96;
    cpy_r_r157 = CPyTagged_IsLt_(cpy_r_i, cpy_r_r154);
    CPyTagged_DECREF(cpy_r_i);
    if (cpy_r_r157) {
        goto CPyL98;
    } else
        goto CPyL97;
CPyL96: ;
    cpy_r_r158 = (Py_ssize_t)cpy_r_i >= (Py_ssize_t)cpy_r_r154;
    CPyTagged_DECREF(cpy_r_i);
    if (!cpy_r_r158) goto CPyL98;
CPyL97: ;
    cpy_r_r159 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attribute)->_context;
    CPy_INCREF(cpy_r_r159);
    cpy_r_r160 = cpy_r_r159;
    goto CPyL101;
CPyL98: ;
    cpy_r_r161 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 445, CPyStatic_attrs___globals);
        goto CPyL148;
    }
    if (likely(Py_TYPE(cpy_r_r161) == CPyType_nodes___ClassDef))
        cpy_r_r162 = cpy_r_r161;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 445, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r161);
        goto CPyL148;
    }
    cpy_r_r160 = cpy_r_r162;
CPyL101: ;
    cpy_r_context = cpy_r_r160;
    cpy_r_r163 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attribute)->_has_default;
    if (cpy_r_r163) goto CPyL149;
CPyL102: ;
    if (!cpy_r_last_default) goto CPyL149;
    cpy_r_r164 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 448, CPyStatic_attrs___globals);
        goto CPyL150;
    }
    if (likely(Py_TYPE(cpy_r_r164) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r165 = cpy_r_r164;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_analyze_class", 448, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r164);
        goto CPyL150;
    }
    cpy_r_r166 = CPyStatics[4402]; /* ('Non-default attributes not allowed after default '
                                      'attributes.') */
    cpy_r_r167 = 2;
    cpy_r_r168 = 2;
    cpy_r_r169 = NULL;
    cpy_r_r170 = CPY_GET_METHOD_TRAIT(cpy_r_r165, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r165, cpy_r_r166, cpy_r_context, cpy_r_r167, cpy_r_r168, cpy_r_r169); /* fail */
    CPy_DECREF(cpy_r_context);
    CPy_DECREF(cpy_r_r165);
    if (unlikely(cpy_r_r170 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 448, CPyStatic_attrs___globals);
        goto CPyL148;
    }
CPyL106: ;
    cpy_r_r171 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attribute)->_has_default;
    CPy_DECREF(cpy_r_attribute);
    cpy_r_r172 = cpy_r_last_default | cpy_r_r171;
    cpy_r_last_default = cpy_r_r172;
CPyL107: ;
    cpy_r_r173 = cpy_r_r142 + 2;
    cpy_r_r142 = cpy_r_r173;
    cpy_r_i = cpy_r_r173;
    cpy_r_r174 = cpy_r_r143 + 2;
    cpy_r_r143 = cpy_r_r174;
    goto CPyL90;
CPyL108: ;
    return cpy_r_attributes;
CPyL109: ;
    cpy_r_r175 = NULL;
    return cpy_r_r175;
CPyL110: ;
    CPy_INCREF(cpy_r_auto_attribs);
    goto CPyL4;
CPyL111: ;
    CPy_DecRef(cpy_r_own_attrs);
    goto CPyL109;
CPyL112: ;
    CPy_DecRef(cpy_r_auto_attribs);
    CPy_DecRef(cpy_r_own_attrs);
    goto CPyL109;
CPyL113: ;
    CPy_DECREF(cpy_r_auto_attribs);
    CPy_DECREF(cpy_r_r8);
    goto CPyL27;
CPyL114: ;
    CPy_DecRef(cpy_r_auto_attribs);
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_r8);
    goto CPyL109;
CPyL115: ;
    CPy_DecRef(cpy_r_auto_attribs);
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r20);
    goto CPyL109;
CPyL116: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL22;
CPyL117: ;
    CPy_DecRef(cpy_r_auto_attribs);
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r23);
    goto CPyL109;
CPyL118: ;
    CPy_DecRef(cpy_r_auto_attribs);
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_attr);
    goto CPyL109;
CPyL119: ;
    CPy_DECREF(cpy_r_stmt);
    goto CPyL26;
CPyL120: ;
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r49.f2);
    goto CPyL47;
CPyL121: ;
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_r48);
    goto CPyL109;
CPyL122: ;
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_attribute);
    CPy_DecRef(cpy_r_r54);
    goto CPyL109;
CPyL123: ;
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_attribute);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r56);
    goto CPyL109;
CPyL124: ;
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_attribute);
    goto CPyL109;
CPyL125: ;
    CPy_DECREF(cpy_r_attribute);
    goto CPyL46;
CPyL126: ;
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_attribute);
    CPy_DecRef(cpy_r_r63);
    goto CPyL109;
CPyL127: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL46;
CPyL128: ;
    CPy_DECREF(cpy_r_own_attrs);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_node);
    goto CPyL42;
CPyL129: ;
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_r48);
    CPy_DecRef(cpy_r_node);
    goto CPyL109;
CPyL130: ;
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_taken_attr_names);
    goto CPyL109;
CPyL131: ;
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_taken_attr_names);
    CPy_DecRef(cpy_r_super_attrs);
    goto CPyL109;
CPyL132: ;
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_taken_attr_names);
    CPy_DecRef(cpy_r_super_attrs);
    CPy_DecRef(cpy_r_r86);
    goto CPyL109;
CPyL133: ;
    CPy_DECREF(cpy_r_taken_attr_names);
    CPy_DECREF(cpy_r_r90);
    goto CPyL86;
CPyL134: ;
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_taken_attr_names);
    CPy_DecRef(cpy_r_super_attrs);
    CPy_DecRef(cpy_r_r90);
    goto CPyL109;
CPyL135: ;
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_taken_attr_names);
    CPy_DecRef(cpy_r_super_attrs);
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_super_info);
    goto CPyL109;
CPyL136: ;
    CPy_DECREF(cpy_r_super_info);
    goto CPyL85;
CPyL137: ;
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_taken_attr_names);
    CPy_DecRef(cpy_r_super_attrs);
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_super_info);
    CPy_DecRef(cpy_r_r104);
    goto CPyL109;
CPyL138: ;
    CPy_DECREF(cpy_r_super_info);
    CPy_DECREF(cpy_r_r115);
    goto CPyL84;
CPyL139: ;
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_taken_attr_names);
    CPy_DecRef(cpy_r_super_attrs);
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_super_info);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_data);
    goto CPyL109;
CPyL140: ;
    CPy_DECREF(cpy_r_data);
    goto CPyL71;
CPyL141: ;
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_taken_attr_names);
    CPy_DecRef(cpy_r_super_attrs);
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_super_info);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r125);
    goto CPyL109;
CPyL142: ;
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_taken_attr_names);
    CPy_DecRef(cpy_r_super_attrs);
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_super_info);
    CPy_DecRef(cpy_r_r115);
    goto CPyL109;
CPyL143: ;
    CPy_DecRef(cpy_r_own_attrs);
    CPy_DecRef(cpy_r_taken_attr_names);
    CPy_DecRef(cpy_r_super_attrs);
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_super_info);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_a);
    goto CPyL109;
CPyL144: ;
    CPy_DecRef(cpy_r_super_attrs);
    goto CPyL109;
CPyL145: ;
    CPy_DECREF(cpy_r_super_attrs);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL108;
CPyL146: ;
    CPy_DecRef(cpy_r_super_attrs);
    CPy_DecRef(cpy_r_attributes);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL109;
CPyL147: ;
    CPy_DECREF(cpy_r_attribute);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL107;
CPyL148: ;
    CPy_DecRef(cpy_r_attribute);
    CPy_DecRef(cpy_r_super_attrs);
    CPy_DecRef(cpy_r_attributes);
    goto CPyL109;
CPyL149: ;
    CPy_DECREF(cpy_r_context);
    goto CPyL106;
CPyL150: ;
    CPy_DecRef(cpy_r_attribute);
    CPy_DecRef(cpy_r_super_attrs);
    CPy_DecRef(cpy_r_attributes);
    CPy_DecRef(cpy_r_context);
    goto CPyL109;
}

PyObject *CPyPy_attrs____analyze_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "auto_attribs", "kw_only", 0};
    static CPyArg_Parser parser = {"OOO:_analyze_class", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_auto_attribs;
    PyObject *obj_kw_only;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_auto_attribs, &obj_kw_only)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_auto_attribs;
    if (PyBool_Check(obj_auto_attribs))
        arg_auto_attribs = obj_auto_attribs;
    else {
        arg_auto_attribs = NULL;
    }
    if (arg_auto_attribs != NULL) goto __LL4706;
    if (obj_auto_attribs == Py_None)
        arg_auto_attribs = obj_auto_attribs;
    else {
        arg_auto_attribs = NULL;
    }
    if (arg_auto_attribs != NULL) goto __LL4706;
    CPy_TypeError("bool or None", obj_auto_attribs); 
    goto fail;
__LL4706: ;
    char arg_kw_only;
    if (unlikely(!PyBool_Check(obj_kw_only))) {
        CPy_TypeError("bool", obj_kw_only); goto fail;
    } else
        arg_kw_only = obj_kw_only == Py_True;
    PyObject *retval = CPyDef_attrs____analyze_class(arg_ctx, arg_auto_attribs, arg_kw_only);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_analyze_class", 375, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs____add_empty_metadata(PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = CPyStatics[4399]; /* 'attributes' */
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_empty_metadata", 456, CPyStatic_attrs___globals);
        goto CPyL5;
    }
    cpy_r_r2 = CPyStatics[4400]; /* 'frozen' */
    cpy_r_r3 = 0 ? Py_True : Py_False;
    cpy_r_r4 = CPyDict_Build(2, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_empty_metadata", 456, CPyStatic_attrs___globals);
        goto CPyL5;
    }
    cpy_r_r5 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_metadata;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_add_empty_metadata", "TypeInfo", "metadata", 456, CPyStatic_attrs___globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_r5);
CPyL3: ;
    cpy_r_r6 = CPyStatics[1875]; /* 'attrs' */
    cpy_r_r7 = CPyDict_SetItem(cpy_r_r5, cpy_r_r6, cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_empty_metadata", 456, CPyStatic_attrs___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL6: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL5;
}

PyObject *CPyPy_attrs____add_empty_metadata(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:_add_empty_metadata", kwlist, 0};
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
    char retval = CPyDef_attrs____add_empty_metadata(arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_add_empty_metadata", 454, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs____detect_auto_attribs(PyObject *cpy_r_ctx) {
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
    PyObject *cpy_r_stmt;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    PyObject *cpy_r_r13;
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
    PyObject *cpy_r_lvalue;
    PyObject *cpy_r_r24;
    tuple_T2OO cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_lvalues;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_rvalues;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_lhs;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_rvalue;
    PyObject *cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
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
    char cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    CPyTagged cpy_r_r80;
    CPyTagged cpy_r_r81;
    CPyTagged cpy_r_r82;
    CPyTagged cpy_r_r83;
    char cpy_r_r84;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 464, CPyStatic_attrs___globals);
        goto CPyL42;
    }
    if (likely(Py_TYPE(cpy_r_r0) == CPyType_nodes___ClassDef))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 464, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r0);
        goto CPyL42;
    }
    cpy_r_r2 = ((mypy___nodes___ClassDefObject *)cpy_r_r1)->_defs;
    cpy_r_r3 = ((mypy___nodes___BlockObject *)cpy_r_r2)->_body;
    CPy_INCREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = 0;
CPyL3: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r3)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL43;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_r3, cpy_r_r4);
    if (likely(PyObject_TypeCheck(cpy_r_r9, CPyType_nodes___Statement)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 464, CPyStatic_attrs___globals, "mypy.nodes.Statement", cpy_r_r9);
        goto CPyL44;
    }
    cpy_r_stmt = cpy_r_r10;
    cpy_r_r11 = (PyObject *)CPyType_nodes___AssignmentStmt;
    cpy_r_r12 = (CPyPtr)&((PyObject *)cpy_r_stmt)->ob_type;
    cpy_r_r13 = *(PyObject * *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 == cpy_r_r11;
    if (!cpy_r_r14) goto CPyL45;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r15 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 466, CPyStatic_attrs___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL46;
    }
    cpy_r_r16 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r15)->_lvalues;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = 0;
CPyL8: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL47;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_r16, cpy_r_r17);
    if (likely(PyObject_TypeCheck(cpy_r_r22, CPyType_nodes___Expression)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 466, CPyStatic_attrs___globals, "mypy.nodes.Expression", cpy_r_r22);
        goto CPyL48;
    }
    cpy_r_lvalue = cpy_r_r23;
    CPy_INCREF(cpy_r_stmt);
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r24 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 467, CPyStatic_attrs___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL49;
    }
    cpy_r_r25 = CPyDef_attrs____parse_assignments(cpy_r_lvalue, cpy_r_r24);
    CPy_DECREF(cpy_r_lvalue);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25.f0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 467, CPyStatic_attrs___globals);
        goto CPyL48;
    }
    cpy_r_r26 = cpy_r_r25.f0;
    CPy_INCREF(cpy_r_r26);
    cpy_r_lvalues = cpy_r_r26;
    cpy_r_r27 = cpy_r_r25.f1;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r25.f0);
    CPy_DECREF(cpy_r_r25.f1);
    cpy_r_rvalues = cpy_r_r27;
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_lvalues)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_rvalues)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = cpy_r_r30 != cpy_r_r33;
    if (cpy_r_r34) goto CPyL50;
    cpy_r_r35 = 0;
    cpy_r_r36 = 0;
CPyL14: ;
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_lvalues)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = (Py_ssize_t)cpy_r_r35 < (Py_ssize_t)cpy_r_r39;
    if (!cpy_r_r40) goto CPyL50;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_rvalues)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 << 1;
    cpy_r_r44 = (Py_ssize_t)cpy_r_r36 < (Py_ssize_t)cpy_r_r43;
    if (!cpy_r_r44) goto CPyL50;
    cpy_r_r45 = CPyList_GetItemUnsafe(cpy_r_lvalues, cpy_r_r35);
    if (likely(Py_TYPE(cpy_r_r45) == CPyType_nodes___NameExpr))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 474, CPyStatic_attrs___globals, "mypy.nodes.NameExpr", cpy_r_r45);
        goto CPyL51;
    }
    cpy_r_lhs = cpy_r_r46;
    CPy_DECREF(cpy_r_lhs);
    cpy_r_r47 = CPyList_GetItemUnsafe(cpy_r_rvalues, cpy_r_r36);
    if (likely(PyObject_TypeCheck(cpy_r_r47, CPyType_nodes___Expression)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 474, CPyStatic_attrs___globals, "mypy.nodes.Expression", cpy_r_r47);
        goto CPyL51;
    }
    cpy_r_rvalue = cpy_r_r48;
    cpy_r_r49 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r50 = (CPyPtr)&((PyObject *)cpy_r_rvalue)->ob_type;
    cpy_r_r51 = *(PyObject * *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 == cpy_r_r49;
    if (!cpy_r_r52) goto CPyL52;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___CallExpr))
        cpy_r_r53 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 478, CPyStatic_attrs___globals, "mypy.nodes.CallExpr", cpy_r_rvalue);
        goto CPyL53;
    }
    cpy_r_r54 = ((mypy___nodes___CallExprObject *)cpy_r_r53)->_callee;
    cpy_r_r55 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r56 = (CPyPtr)&((PyObject *)cpy_r_r54)->ob_type;
    cpy_r_r57 = *(PyObject * *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 == cpy_r_r55;
    if (!cpy_r_r58) goto CPyL22;
    cpy_r_r59 = cpy_r_r58;
    goto CPyL23;
CPyL22: ;
    cpy_r_r60 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r61 = (CPyPtr)&((PyObject *)cpy_r_r54)->ob_type;
    cpy_r_r62 = *(PyObject * *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 == cpy_r_r60;
    cpy_r_r59 = cpy_r_r63;
CPyL23: ;
    if (!cpy_r_r59) goto CPyL25;
    cpy_r_r64 = cpy_r_r59;
    goto CPyL26;
CPyL25: ;
    cpy_r_r65 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r66 = (CPyPtr)&((PyObject *)cpy_r_r54)->ob_type;
    cpy_r_r67 = *(PyObject * *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 == cpy_r_r65;
    cpy_r_r64 = cpy_r_r68;
CPyL26: ;
    if (!cpy_r_r64) goto CPyL52;
    if (likely(Py_TYPE(cpy_r_rvalue) == CPyType_nodes___CallExpr))
        cpy_r_r69 = cpy_r_rvalue;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 479, CPyStatic_attrs___globals, "mypy.nodes.CallExpr", cpy_r_rvalue);
        goto CPyL53;
    }
    cpy_r_r70 = ((mypy___nodes___CallExprObject *)cpy_r_r69)->_callee;
    if (likely((Py_TYPE(cpy_r_r70) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r70) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r70) == CPyType_nodes___RefExpr)))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 479, CPyStatic_attrs___globals, "mypy.nodes.RefExpr", cpy_r_r70);
        goto CPyL53;
    }
    cpy_r_r72 = CPY_GET_ATTR(cpy_r_r71, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 479, CPyStatic_attrs___globals);
        goto CPyL53;
    }
CPyL30: ;
    CPy_DECREF(cpy_r_rvalue);
    cpy_r_r73 = CPyStatic_attrs___attr_attrib_makers;
    if (unlikely(cpy_r_r73 == NULL)) {
        goto CPyL54;
    } else
        goto CPyL33;
CPyL31: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"attr_attrib_makers\" was not set");
    cpy_r_r74 = 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 479, CPyStatic_attrs___globals);
        goto CPyL42;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r75 = PySet_Contains(cpy_r_r73, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 479, CPyStatic_attrs___globals);
        goto CPyL51;
    }
    cpy_r_r77 = cpy_r_r75;
    if (!cpy_r_r77) goto CPyL38;
    if (likely(Py_TYPE(cpy_r_stmt) == CPyType_nodes___AssignmentStmt))
        cpy_r_r78 = cpy_r_stmt;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 480, CPyStatic_attrs___globals, "mypy.nodes.AssignmentStmt", cpy_r_stmt);
        goto CPyL51;
    }
    cpy_r_r79 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r78)->_new_syntax;
    if (cpy_r_r79) {
        goto CPyL38;
    } else
        goto CPyL55;
CPyL37: ;
    return 0;
CPyL38: ;
    cpy_r_r80 = cpy_r_r35 + 2;
    cpy_r_r35 = cpy_r_r80;
    cpy_r_r81 = cpy_r_r36 + 2;
    cpy_r_r36 = cpy_r_r81;
    goto CPyL14;
CPyL39: ;
    cpy_r_r82 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r82;
    goto CPyL8;
CPyL40: ;
    cpy_r_r83 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r83;
    goto CPyL3;
CPyL41: ;
    return 1;
CPyL42: ;
    cpy_r_r84 = 2;
    return cpy_r_r84;
CPyL43: ;
    CPy_DECREF(cpy_r_r3);
    goto CPyL41;
CPyL44: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL42;
CPyL45: ;
    CPy_DECREF(cpy_r_stmt);
    goto CPyL40;
CPyL46: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_stmt);
    goto CPyL42;
CPyL47: ;
    CPy_DECREF(cpy_r_stmt);
    CPy_DECREF(cpy_r_r16);
    goto CPyL40;
CPyL48: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r16);
    goto CPyL42;
CPyL49: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_lvalue);
    goto CPyL42;
CPyL50: ;
    CPy_DECREF(cpy_r_lvalues);
    CPy_DECREF(cpy_r_rvalues);
    goto CPyL39;
CPyL51: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_lvalues);
    CPy_DecRef(cpy_r_rvalues);
    goto CPyL42;
CPyL52: ;
    CPy_DECREF(cpy_r_rvalue);
    goto CPyL38;
CPyL53: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_lvalues);
    CPy_DecRef(cpy_r_rvalues);
    CPy_DecRef(cpy_r_rvalue);
    goto CPyL42;
CPyL54: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_stmt);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_lvalues);
    CPy_DecRef(cpy_r_rvalues);
    CPy_DecRef(cpy_r_r72);
    goto CPyL31;
CPyL55: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_stmt);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_lvalues);
    CPy_DECREF(cpy_r_rvalues);
    goto CPyL37;
}

PyObject *CPyPy_attrs____detect_auto_attribs(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:_detect_auto_attribs", kwlist, 0};
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
    char retval = CPyDef_attrs____detect_auto_attribs(arg_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_detect_auto_attribs", 459, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs____attributes_from_assignment_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    tuple_T2OO cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    int64_t cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyPtr cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
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
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    CPyPtr cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    CPyTagged cpy_r_r130;
    CPyTagged cpy_r_r131;
    char cpy_r_r132;
    CPyTagged cpy_r_r133;
    CPyTagged cpy_r_r134;
    char cpy_r_r135;
    CPyTagged cpy_r_r136;
    CPyTagged cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    int64_t cpy_r_r141;
    char cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    char cpy_r_r145;
    int64_t cpy_r_r146;
    char cpy_r_r147;
    char cpy_r_r148;
    char cpy_r_r149;
    char cpy_r_r150;
    int64_t cpy_r_r151;
    char cpy_r_r152;
    char cpy_r_r153;
    char cpy_r_r154;
    char cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    cpy_r_r0 = ((mypy___plugins___attrs____attributes_from_assignment_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_gen", "__mypyc_env__", 488, CPyStatic_attrs___globals);
        goto CPyL124;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "__mypyc_next_label__", 488, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL110;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL126;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 488, CPyStatic_attrs___globals);
        goto CPyL124;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_stmt;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "stmt", 501, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r4)->_lvalues;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__0);
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__0 = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", -1, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__1 = 0;
    cpy_r_r7 = 1;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", -1, CPyStatic_attrs___globals);
        goto CPyL125;
    }
CPyL8: ;
    cpy_r_r8 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__0;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "__mypyc_temp__0", 501, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r8);
CPyL9: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r8)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    CPy_DECREF(cpy_r_r8);
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__1;
    if (unlikely(cpy_r_r12 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "__mypyc_temp__1", 501, CPyStatic_attrs___globals);
        goto CPyL125;
    }
CPyL10: ;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r13) goto CPyL107;
    cpy_r_r14 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__0;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "__mypyc_temp__0", 501, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r14);
CPyL12: ;
    cpy_r_r15 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__1;
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "__mypyc_temp__1", 501, CPyStatic_attrs___globals);
        goto CPyL127;
    }
CPyL13: ;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (likely(PyObject_TypeCheck(cpy_r_r16, CPyType_nodes___Expression)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 501, CPyStatic_attrs___globals, "mypy.nodes.Expression", cpy_r_r16);
        goto CPyL125;
    }
    if (((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_lvalue != NULL) {
        CPy_DECREF(((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_lvalue);
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_lvalue = cpy_r_r17;
    cpy_r_r18 = 1;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 501, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    cpy_r_r19 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_lvalue;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "lvalue", 502, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r19);
CPyL16: ;
    cpy_r_r20 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_stmt;
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "stmt", 502, CPyStatic_attrs___globals);
        goto CPyL128;
    }
    CPy_INCREF(cpy_r_r20);
CPyL17: ;
    cpy_r_r21 = CPyDef_attrs____parse_assignments(cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21.f0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 502, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    cpy_r_r22 = cpy_r_r21.f0;
    CPy_INCREF(cpy_r_r22);
    if (((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_lvalues != NULL) {
        CPy_DECREF(((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_lvalues);
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_lvalues = cpy_r_r22;
    cpy_r_r23 = 1;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 502, CPyStatic_attrs___globals);
        goto CPyL129;
    }
    cpy_r_r24 = cpy_r_r21.f1;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r21.f0);
    CPy_DECREF(cpy_r_r21.f1);
    if (((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_rvalues != NULL) {
        CPy_DECREF(((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_rvalues);
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_rvalues = cpy_r_r24;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 502, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    cpy_r_r26 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_lvalues;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "lvalues", 504, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r26);
CPyL21: ;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_r26)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    CPy_DECREF(cpy_r_r26);
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_rvalues;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "rvalues", 504, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r30);
CPyL22: ;
    cpy_r_r31 = (CPyPtr)&((PyVarObject *)cpy_r_r30)->ob_size;
    cpy_r_r32 = *(int64_t *)cpy_r_r31;
    CPy_DECREF(cpy_r_r30);
    cpy_r_r33 = cpy_r_r32 << 1;
    cpy_r_r34 = cpy_r_r29 != cpy_r_r33;
    if (cpy_r_r34) goto CPyL105;
    cpy_r_r35 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_lvalues;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "lvalues", 509, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r35);
CPyL24: ;
    if (((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__2);
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__2 = cpy_r_r35;
    cpy_r_r36 = 1;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", -1, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__3 = 0;
    cpy_r_r37 = 1;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", -1, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    cpy_r_r38 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_rvalues;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "rvalues", 509, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r38);
CPyL27: ;
    if (((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__4 != NULL) {
        CPy_DECREF(((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__4);
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__4 = cpy_r_r38;
    cpy_r_r39 = 1;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", -1, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__5 = 0;
    cpy_r_r40 = 1;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", -1, CPyStatic_attrs___globals);
        goto CPyL125;
    }
CPyL29: ;
    cpy_r_r41 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__2;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "__mypyc_temp__2", 509, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r41);
CPyL30: ;
    cpy_r_r42 = (CPyPtr)&((PyVarObject *)cpy_r_r41)->ob_size;
    cpy_r_r43 = *(int64_t *)cpy_r_r42;
    CPy_DECREF(cpy_r_r41);
    cpy_r_r44 = cpy_r_r43 << 1;
    cpy_r_r45 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__3;
    if (unlikely(cpy_r_r45 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "__mypyc_temp__3", 509, CPyStatic_attrs___globals);
        goto CPyL125;
    }
CPyL31: ;
    cpy_r_r46 = (Py_ssize_t)cpy_r_r45 < (Py_ssize_t)cpy_r_r44;
    if (!cpy_r_r46) goto CPyL105;
    cpy_r_r47 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__4;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "__mypyc_temp__4", 509, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r47);
CPyL33: ;
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_r47)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    CPy_DECREF(cpy_r_r47);
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__5;
    if (unlikely(cpy_r_r51 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "__mypyc_temp__5", 509, CPyStatic_attrs___globals);
        goto CPyL125;
    }
CPyL34: ;
    cpy_r_r52 = (Py_ssize_t)cpy_r_r51 < (Py_ssize_t)cpy_r_r50;
    if (!cpy_r_r52) goto CPyL105;
    cpy_r_r53 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__2;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "__mypyc_temp__2", 509, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r53);
CPyL36: ;
    cpy_r_r54 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__3;
    if (unlikely(cpy_r_r54 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "__mypyc_temp__3", 509, CPyStatic_attrs___globals);
        goto CPyL130;
    }
CPyL37: ;
    cpy_r_r55 = CPyList_GetItemUnsafe(cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    if (likely(Py_TYPE(cpy_r_r55) == CPyType_nodes___NameExpr))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 509, CPyStatic_attrs___globals, "mypy.nodes.NameExpr", cpy_r_r55);
        goto CPyL125;
    }
    if (((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_lhs != NULL) {
        CPy_DECREF(((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_lhs);
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_lhs = cpy_r_r56;
    cpy_r_r57 = 1;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 509, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    cpy_r_r58 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__4;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "__mypyc_temp__4", 509, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r58);
CPyL40: ;
    cpy_r_r59 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__5;
    if (unlikely(cpy_r_r59 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "__mypyc_temp__5", 509, CPyStatic_attrs___globals);
        goto CPyL131;
    }
CPyL41: ;
    cpy_r_r60 = CPyList_GetItemUnsafe(cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    if (likely(PyObject_TypeCheck(cpy_r_r60, CPyType_nodes___Expression)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 509, CPyStatic_attrs___globals, "mypy.nodes.Expression", cpy_r_r60);
        goto CPyL125;
    }
    if (((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_rvalue != NULL) {
        CPy_DECREF(((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_rvalue);
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_rvalue = cpy_r_r61;
    cpy_r_r62 = 1;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 509, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    cpy_r_r63 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_rvalue;
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "rvalue", 512, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r63);
CPyL44: ;
    cpy_r_r64 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r65 = (CPyPtr)&((PyObject *)cpy_r_r63)->ob_type;
    cpy_r_r66 = *(PyObject * *)cpy_r_r65;
    CPy_DECREF(cpy_r_r63);
    cpy_r_r67 = cpy_r_r66 == cpy_r_r64;
    if (!cpy_r_r67) goto CPyL81;
    cpy_r_r68 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_rvalue;
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "rvalue", 513, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r68);
CPyL46: ;
    if (likely(Py_TYPE(cpy_r_r68) == CPyType_nodes___CallExpr))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 513, CPyStatic_attrs___globals, "mypy.nodes.CallExpr", cpy_r_r68);
        goto CPyL132;
    }
    cpy_r_r70 = ((mypy___nodes___CallExprObject *)cpy_r_r69)->_callee;
    cpy_r_r71 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r72 = (CPyPtr)&((PyObject *)cpy_r_r70)->ob_type;
    cpy_r_r73 = *(PyObject * *)cpy_r_r72;
    cpy_r_r74 = cpy_r_r73 == cpy_r_r71;
    if (!cpy_r_r74) goto CPyL49;
    cpy_r_r75 = cpy_r_r74;
    goto CPyL50;
CPyL49: ;
    cpy_r_r76 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r77 = (CPyPtr)&((PyObject *)cpy_r_r70)->ob_type;
    cpy_r_r78 = *(PyObject * *)cpy_r_r77;
    cpy_r_r79 = cpy_r_r78 == cpy_r_r76;
    cpy_r_r75 = cpy_r_r79;
CPyL50: ;
    if (!cpy_r_r75) goto CPyL52;
    cpy_r_r80 = cpy_r_r75;
    goto CPyL53;
CPyL52: ;
    cpy_r_r81 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r82 = (CPyPtr)&((PyObject *)cpy_r_r70)->ob_type;
    cpy_r_r83 = *(PyObject * *)cpy_r_r82;
    cpy_r_r84 = cpy_r_r83 == cpy_r_r81;
    cpy_r_r80 = cpy_r_r84;
CPyL53: ;
    CPy_DECREF(cpy_r_r68);
    if (!cpy_r_r80) goto CPyL81;
    cpy_r_r85 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_rvalue;
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "rvalue", 514, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r85);
CPyL55: ;
    if (likely(Py_TYPE(cpy_r_r85) == CPyType_nodes___CallExpr))
        cpy_r_r86 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 514, CPyStatic_attrs___globals, "mypy.nodes.CallExpr", cpy_r_r85);
        goto CPyL133;
    }
    cpy_r_r87 = ((mypy___nodes___CallExprObject *)cpy_r_r86)->_callee;
    if (likely((Py_TYPE(cpy_r_r87) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r87) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r87) == CPyType_nodes___RefExpr)))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 514, CPyStatic_attrs___globals, "mypy.nodes.RefExpr", cpy_r_r87);
        goto CPyL133;
    }
    cpy_r_r89 = CPY_GET_ATTR(cpy_r_r88, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 514, CPyStatic_attrs___globals);
        goto CPyL133;
    }
CPyL58: ;
    CPy_DECREF(cpy_r_r85);
    cpy_r_r90 = CPyStatic_attrs___attr_attrib_makers;
    if (unlikely(cpy_r_r90 == NULL)) {
        goto CPyL134;
    } else
        goto CPyL61;
CPyL59: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"attr_attrib_makers\" was not set");
    cpy_r_r91 = 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 514, CPyStatic_attrs___globals);
        goto CPyL124;
    }
    CPy_Unreachable();
CPyL61: ;
    cpy_r_r92 = PySet_Contains(cpy_r_r90, cpy_r_r89);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 514, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    cpy_r_r94 = cpy_r_r92;
    if (!cpy_r_r94) goto CPyL81;
    cpy_r_r95 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_ctx;
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "ctx", 516, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r95);
CPyL64: ;
    cpy_r_r96 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_auto_attribs;
    if (unlikely(cpy_r_r96 == 2)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "auto_attribs", 516, CPyStatic_attrs___globals);
        goto CPyL135;
    }
CPyL65: ;
    cpy_r_r97 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_kw_only;
    if (unlikely(cpy_r_r97 == 2)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "kw_only", 516, CPyStatic_attrs___globals);
        goto CPyL135;
    }
CPyL66: ;
    cpy_r_r98 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_lhs;
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "lhs", 516, CPyStatic_attrs___globals);
        goto CPyL135;
    }
    CPy_INCREF(cpy_r_r98);
CPyL67: ;
    cpy_r_r99 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_rvalue;
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "rvalue", 516, CPyStatic_attrs___globals);
        goto CPyL136;
    }
    CPy_INCREF(cpy_r_r99);
CPyL68: ;
    if (likely(Py_TYPE(cpy_r_r99) == CPyType_nodes___CallExpr))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 516, CPyStatic_attrs___globals, "mypy.nodes.CallExpr", cpy_r_r99);
        goto CPyL136;
    }
    cpy_r_r101 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_stmt;
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "stmt", 516, CPyStatic_attrs___globals);
        goto CPyL137;
    }
    CPy_INCREF(cpy_r_r101);
CPyL70: ;
    cpy_r_r102 = CPyDef_attrs____attribute_from_attrib_maker(cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98, cpy_r_r100, cpy_r_r101);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r98);
    CPy_DECREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 516, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    if (((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_attr != NULL) {
        CPy_DECREF(((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_attr);
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_attr = cpy_r_r102;
    cpy_r_r103 = 1;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 516, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    cpy_r_r104 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_attr;
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "attr", 517, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r104);
CPyL73: ;
    cpy_r_r105 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r106 = cpy_r_r104 != cpy_r_r105;
    CPy_DECREF(cpy_r_r104);
    if (!cpy_r_r106) goto CPyL101;
    cpy_r_r107 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_attr;
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "attr", 518, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r107);
CPyL75: ;
    if (likely(cpy_r_r107 != Py_None))
        cpy_r_r108 = cpy_r_r107;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 518, CPyStatic_attrs___globals, "mypy.plugins.attrs.Attribute", cpy_r_r107);
        goto CPyL125;
    }
    if (((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r109 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 518, CPyStatic_attrs___globals);
        goto CPyL138;
    }
    return cpy_r_r108;
CPyL78: ;
    cpy_r_r110 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r111 = cpy_r_type != cpy_r_r110;
    if (cpy_r_r111) {
        goto CPyL139;
    } else
        goto CPyL101;
CPyL79: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 518, CPyStatic_attrs___globals);
        goto CPyL124;
    }
    CPy_Unreachable();
CPyL81: ;
    cpy_r_r112 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_auto_attribs;
    if (unlikely(cpy_r_r112 == 2)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "auto_attribs", 519, CPyStatic_attrs___globals);
        goto CPyL125;
    }
CPyL82: ;
    if (!cpy_r_r112) goto CPyL101;
CPyL83: ;
    cpy_r_r113 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_stmt;
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "stmt", 519, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r113);
CPyL84: ;
    cpy_r_r114 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r113)->_type;
    CPy_INCREF(cpy_r_r114);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r115 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r116 = cpy_r_r114 != cpy_r_r115;
    CPy_DECREF(cpy_r_r114);
    if (!cpy_r_r116) goto CPyL101;
    cpy_r_r117 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_stmt;
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "stmt", 519, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r117);
CPyL86: ;
    cpy_r_r118 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_r117)->_new_syntax;
    CPy_DECREF(cpy_r_r117);
    if (!cpy_r_r118) goto CPyL101;
CPyL87: ;
    cpy_r_r119 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_lhs;
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "lhs", 519, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r119);
CPyL88: ;
    cpy_r_r120 = CPyDef_nodes___is_class_var(cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r120 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 519, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    if (cpy_r_r120) goto CPyL101;
    cpy_r_r121 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_ctx;
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "ctx", 520, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    CPy_INCREF(cpy_r_r121);
CPyL91: ;
    cpy_r_r122 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_kw_only;
    if (unlikely(cpy_r_r122 == 2)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "kw_only", 520, CPyStatic_attrs___globals);
        goto CPyL140;
    }
CPyL92: ;
    cpy_r_r123 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_lhs;
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "lhs", 520, CPyStatic_attrs___globals);
        goto CPyL140;
    }
    CPy_INCREF(cpy_r_r123);
CPyL93: ;
    cpy_r_r124 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_rvalue;
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "rvalue", 520, CPyStatic_attrs___globals);
        goto CPyL141;
    }
    CPy_INCREF(cpy_r_r124);
CPyL94: ;
    cpy_r_r125 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_stmt;
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "stmt", 520, CPyStatic_attrs___globals);
        goto CPyL142;
    }
    CPy_INCREF(cpy_r_r125);
CPyL95: ;
    cpy_r_r126 = CPyDef_attrs____attribute_from_auto_attrib(cpy_r_r121, cpy_r_r122, cpy_r_r123, cpy_r_r124, cpy_r_r125);
    CPy_DECREF(cpy_r_r121);
    CPy_DECREF(cpy_r_r123);
    CPy_DECREF(cpy_r_r124);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 520, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    if (((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_next_label__ = 4;
    cpy_r_r127 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 520, CPyStatic_attrs___globals);
        goto CPyL143;
    }
    return cpy_r_r126;
CPyL98: ;
    cpy_r_r128 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r129 = cpy_r_type != cpy_r_r128;
    if (cpy_r_r129) {
        goto CPyL144;
    } else
        goto CPyL101;
CPyL99: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 520, CPyStatic_attrs___globals);
        goto CPyL124;
    }
    CPy_Unreachable();
CPyL101: ;
    cpy_r_r130 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__3;
    if (unlikely(cpy_r_r130 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "__mypyc_temp__3", 509, CPyStatic_attrs___globals);
        goto CPyL125;
    }
CPyL102: ;
    cpy_r_r131 = cpy_r_r130 + 2;
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__3 = cpy_r_r131;
    cpy_r_r132 = 1;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 509, CPyStatic_attrs___globals);
        goto CPyL125;
    }
    cpy_r_r133 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__5;
    if (unlikely(cpy_r_r133 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "__mypyc_temp__5", 509, CPyStatic_attrs___globals);
        goto CPyL125;
    }
CPyL104: ;
    cpy_r_r134 = cpy_r_r133 + 2;
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__5 = cpy_r_r134;
    cpy_r_r135 = 1;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 509, CPyStatic_attrs___globals);
        goto CPyL125;
    } else
        goto CPyL29;
CPyL105: ;
    cpy_r_r136 = ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__1;
    if (unlikely(cpy_r_r136 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attributes_from_assignment", "_attributes_from_assignment_env", "__mypyc_temp__1", 501, CPyStatic_attrs___globals);
        goto CPyL125;
    }
CPyL106: ;
    cpy_r_r137 = cpy_r_r136 + 2;
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_temp__1 = cpy_r_r137;
    cpy_r_r138 = 1;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 501, CPyStatic_attrs___globals);
        goto CPyL125;
    } else
        goto CPyL8;
CPyL107: ;
    cpy_r_r139 = Py_None;
    if (((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r140 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 488, CPyStatic_attrs___globals);
        goto CPyL124;
    }
    CPyGen_SetStopIterationValue(cpy_r_r139);
    if (!0) goto CPyL124;
    CPy_Unreachable();
CPyL110: ;
    cpy_r_r141 = cpy_r_r1 & 1;
    cpy_r_r142 = cpy_r_r141 == 0;
    if (!cpy_r_r142) goto CPyL112;
    cpy_r_r143 = cpy_r_r1 == 0;
    cpy_r_r144 = cpy_r_r143;
    goto CPyL113;
CPyL112: ;
    cpy_r_r145 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r144 = cpy_r_r145;
CPyL113: ;
    if (cpy_r_r144) goto CPyL145;
    cpy_r_r146 = cpy_r_r1 & 1;
    cpy_r_r147 = cpy_r_r146 == 0;
    if (!cpy_r_r147) goto CPyL116;
    cpy_r_r148 = cpy_r_r1 == 2;
    cpy_r_r149 = cpy_r_r148;
    goto CPyL117;
CPyL116: ;
    cpy_r_r150 = CPyTagged_IsEq_(cpy_r_r1, 2);
    cpy_r_r149 = cpy_r_r150;
CPyL117: ;
    if (cpy_r_r149) goto CPyL146;
    cpy_r_r151 = cpy_r_r1 & 1;
    cpy_r_r152 = cpy_r_r151 == 0;
    if (!cpy_r_r152) goto CPyL120;
    cpy_r_r153 = cpy_r_r1 == 4;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r154 = cpy_r_r153;
    goto CPyL121;
CPyL120: ;
    cpy_r_r155 = CPyTagged_IsEq_(cpy_r_r1, 4);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r154 = cpy_r_r155;
CPyL121: ;
    if (cpy_r_r154) {
        goto CPyL98;
    } else
        goto CPyL147;
CPyL122: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r156 = 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 488, CPyStatic_attrs___globals);
        goto CPyL124;
    }
    CPy_Unreachable();
CPyL124: ;
    cpy_r_r157 = NULL;
    return cpy_r_r157;
CPyL125: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL124;
CPyL126: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL127: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r14);
    goto CPyL124;
CPyL128: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r19);
    goto CPyL124;
CPyL129: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21.f0);
    CPy_DecRef(cpy_r_r21.f1);
    goto CPyL124;
CPyL130: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r53);
    goto CPyL124;
CPyL131: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r58);
    goto CPyL124;
CPyL132: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r68);
    goto CPyL124;
CPyL133: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r85);
    goto CPyL124;
CPyL134: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r89);
    goto CPyL59;
CPyL135: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r95);
    goto CPyL124;
CPyL136: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r98);
    goto CPyL124;
CPyL137: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r98);
    CPy_DecRef(cpy_r_r100);
    goto CPyL124;
CPyL138: ;
    CPy_DecRef(cpy_r_r108);
    goto CPyL124;
CPyL139: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL79;
CPyL140: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r121);
    goto CPyL124;
CPyL141: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_r123);
    goto CPyL124;
CPyL142: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r124);
    goto CPyL124;
CPyL143: ;
    CPy_DecRef(cpy_r_r126);
    goto CPyL124;
CPyL144: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL99;
CPyL145: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL146: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL78;
CPyL147: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL122;
}

PyObject *CPyPy_attrs____attributes_from_assignment_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_attrs____attributes_from_assignment_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 488, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs____attributes_from_assignment_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_attrs____attributes_from_assignment_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_attrs____attributes_from_assignment_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_attrs____attributes_from_assignment_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.plugins.attrs._attributes_from_assignment_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrs____attributes_from_assignment_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "__next__", -1, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs____attributes_from_assignment_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_attrs____attributes_from_assignment_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_attrs____attributes_from_assignment_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_attrs____attributes_from_assignment_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.plugins.attrs._attributes_from_assignment_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_attrs____attributes_from_assignment_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "send", -1, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs____attributes_from_assignment_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_attrs____attributes_from_assignment_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_attrs____attributes_from_assignment_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.plugins.attrs._attributes_from_assignment_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrs____attributes_from_assignment_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "__iter__", -1, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs____attributes_from_assignment_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
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
    cpy_r_r1 = CPyDef_attrs____attributes_from_assignment_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
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

PyObject *CPyPy_attrs____attributes_from_assignment_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_attrs____attributes_from_assignment_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.plugins.attrs._attributes_from_assignment_gen", obj___mypyc_self__); 
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
    PyObject *retval = CPyDef_attrs____attributes_from_assignment_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "throw", -1, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs____attributes_from_assignment_gen___close(PyObject *cpy_r___mypyc_self__) {
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
    cpy_r_r5 = CPyDef_attrs____attributes_from_assignment_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
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
    PyObject *__tmp4707 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp4707);
    PyObject *__tmp4708 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp4708);
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

PyObject *CPyPy_attrs____attributes_from_assignment_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_attrs____attributes_from_assignment_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.plugins.attrs._attributes_from_assignment_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrs____attributes_from_assignment_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "close", -1, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs____attributes_from_assignment(PyObject *cpy_r_ctx, PyObject *cpy_r_stmt, char cpy_r_auto_attribs, char cpy_r_kw_only) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = CPyDef_attrs____attributes_from_assignment_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 488, CPyStatic_attrs___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_ctx);
    if (((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_ctx != NULL) {
        CPy_DECREF(((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_ctx);
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_ctx = cpy_r_ctx;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 488, CPyStatic_attrs___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_stmt);
    if (((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_stmt != NULL) {
        CPy_DECREF(((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_stmt);
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_stmt = cpy_r_stmt;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 488, CPyStatic_attrs___globals);
        goto CPyL10;
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_auto_attribs = cpy_r_auto_attribs;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 488, CPyStatic_attrs___globals);
        goto CPyL10;
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->_kw_only = cpy_r_kw_only;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 488, CPyStatic_attrs___globals);
        goto CPyL10;
    }
    cpy_r_r5 = CPyDef_attrs____attributes_from_assignment_gen();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 488, CPyStatic_attrs___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___plugins___attrs____attributes_from_assignment_genObject *)cpy_r_r5)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___plugins___attrs____attributes_from_assignment_genObject *)cpy_r_r5)->___mypyc_env__);
    }
    ((mypy___plugins___attrs____attributes_from_assignment_genObject *)cpy_r_r5)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 488, CPyStatic_attrs___globals);
        goto CPyL11;
    }
    if (((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___plugins___attrs____attributes_from_assignment_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r7 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 488, CPyStatic_attrs___globals);
        goto CPyL12;
    }
    return cpy_r_r5;
CPyL9: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL9;
}

PyObject *CPyPy_attrs____attributes_from_assignment(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "stmt", "auto_attribs", "kw_only", 0};
    static CPyArg_Parser parser = {"OOOO:_attributes_from_assignment", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_stmt;
    PyObject *obj_auto_attribs;
    PyObject *obj_kw_only;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_stmt, &obj_auto_attribs, &obj_kw_only)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    char arg_auto_attribs;
    if (unlikely(!PyBool_Check(obj_auto_attribs))) {
        CPy_TypeError("bool", obj_auto_attribs); goto fail;
    } else
        arg_auto_attribs = obj_auto_attribs == Py_True;
    char arg_kw_only;
    if (unlikely(!PyBool_Check(obj_kw_only))) {
        CPy_TypeError("bool", obj_kw_only); goto fail;
    } else
        arg_kw_only = obj_kw_only == Py_True;
    PyObject *retval = CPyDef_attrs____attributes_from_assignment(arg_ctx, arg_stmt, arg_auto_attribs, arg_kw_only);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_attributes_from_assignment", 488, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs____cleanup_decorator(PyObject *cpy_r_stmt, PyObject *cpy_r_attr_map) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_remove_me;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_func_decorator;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyPtr cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyTagged cpy_r_r65;
    CPyPtr cpy_r_r66;
    int64_t cpy_r_r67;
    CPyTagged cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_dec;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    CPyTagged cpy_r_r75;
    char cpy_r_r76;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 529, CPyStatic_attrs___globals);
        goto CPyL42;
    }
    cpy_r_remove_me = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___DecoratorObject *)cpy_r_stmt)->_decorators;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL43;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(PyObject_TypeCheck(cpy_r_r7, CPyType_nodes___Expression)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 530, CPyStatic_attrs___globals, "mypy.nodes.Expression", cpy_r_r7);
        goto CPyL44;
    }
    cpy_r_func_decorator = cpy_r_r8;
    cpy_r_r9 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_func_decorator)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    if (!cpy_r_r12) goto CPyL45;
    if (likely(Py_TYPE(cpy_r_func_decorator) == CPyType_nodes___MemberExpr))
        cpy_r_r13 = cpy_r_func_decorator;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 533, CPyStatic_attrs___globals, "mypy.nodes.MemberExpr", cpy_r_func_decorator);
        goto CPyL46;
    }
    cpy_r_r14 = ((mypy___nodes___MemberExprObject *)cpy_r_r13)->_expr;
    cpy_r_r15 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r16 = (CPyPtr)&((PyObject *)cpy_r_r14)->ob_type;
    cpy_r_r17 = *(PyObject * *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 == cpy_r_r15;
    if (!cpy_r_r18) goto CPyL45;
    if (likely(Py_TYPE(cpy_r_func_decorator) == CPyType_nodes___MemberExpr))
        cpy_r_r19 = cpy_r_func_decorator;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 534, CPyStatic_attrs___globals, "mypy.nodes.MemberExpr", cpy_r_func_decorator);
        goto CPyL46;
    }
    cpy_r_r20 = ((mypy___nodes___MemberExprObject *)cpy_r_r19)->_expr;
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_nodes___NameExpr))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 534, CPyStatic_attrs___globals, "mypy.nodes.NameExpr", cpy_r_r20);
        goto CPyL46;
    }
    cpy_r_r22 = ((mypy___nodes___NameExprObject *)cpy_r_r21)->_name;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = PyDict_Contains(cpy_r_attr_map, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 534, CPyStatic_attrs___globals);
        goto CPyL46;
    }
    cpy_r_r25 = cpy_r_r23;
    if (!cpy_r_r25) goto CPyL45;
    if (likely(Py_TYPE(cpy_r_func_decorator) == CPyType_nodes___MemberExpr))
        cpy_r_r26 = cpy_r_func_decorator;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 536, CPyStatic_attrs___globals, "mypy.nodes.MemberExpr", cpy_r_func_decorator);
        goto CPyL46;
    }
    cpy_r_r27 = ((mypy___nodes___MemberExprObject *)cpy_r_r26)->_name;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyStatics[748]; /* 'default' */
    cpy_r_r29 = PyUnicode_Compare(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r30 = cpy_r_r29 == -1;
    if (!cpy_r_r30) goto CPyL15;
    cpy_r_r31 = PyErr_Occurred();
    cpy_r_r32 = cpy_r_r31 != NULL;
    if (!cpy_r_r32) goto CPyL15;
    cpy_r_r33 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 536, CPyStatic_attrs___globals);
        goto CPyL46;
    }
CPyL15: ;
    cpy_r_r34 = cpy_r_r29 == 0;
    if (!cpy_r_r34) goto CPyL21;
    if (likely(Py_TYPE(cpy_r_func_decorator) == CPyType_nodes___MemberExpr))
        cpy_r_r35 = cpy_r_func_decorator;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 537, CPyStatic_attrs___globals, "mypy.nodes.MemberExpr", cpy_r_func_decorator);
        goto CPyL46;
    }
    cpy_r_r36 = ((mypy___nodes___MemberExprObject *)cpy_r_r35)->_expr;
    if (likely(Py_TYPE(cpy_r_r36) == CPyType_nodes___NameExpr))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 537, CPyStatic_attrs___globals, "mypy.nodes.NameExpr", cpy_r_r36);
        goto CPyL46;
    }
    cpy_r_r38 = ((mypy___nodes___NameExprObject *)cpy_r_r37)->_name;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyDict_GetItem(cpy_r_attr_map, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 537, CPyStatic_attrs___globals);
        goto CPyL46;
    }
    if (likely(Py_TYPE(cpy_r_r39) == CPyType_attrs___Attribute))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 537, CPyStatic_attrs___globals, "mypy.plugins.attrs.Attribute", cpy_r_r39);
        goto CPyL46;
    }
    ((mypy___plugins___attrs___AttributeObject *)cpy_r_r40)->_has_default = 1;
    CPy_DECREF(cpy_r_r40);
CPyL21: ;
    if (likely(Py_TYPE(cpy_r_func_decorator) == CPyType_nodes___MemberExpr))
        cpy_r_r42 = cpy_r_func_decorator;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 539, CPyStatic_attrs___globals, "mypy.nodes.MemberExpr", cpy_r_func_decorator);
        goto CPyL46;
    }
    cpy_r_r43 = ((mypy___nodes___MemberExprObject *)cpy_r_r42)->_name;
    CPy_INCREF(cpy_r_r43);
    cpy_r_r44 = CPyStatics[748]; /* 'default' */
    cpy_r_r45 = PyUnicode_Compare(cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r46 = cpy_r_r45 == -1;
    if (!cpy_r_r46) goto CPyL25;
    cpy_r_r47 = PyErr_Occurred();
    cpy_r_r48 = cpy_r_r47 != NULL;
    if (!cpy_r_r48) goto CPyL25;
    cpy_r_r49 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", -1, CPyStatic_attrs___globals);
        goto CPyL46;
    }
CPyL25: ;
    cpy_r_r50 = cpy_r_r45 == 0;
    if (!cpy_r_r50) goto CPyL27;
    cpy_r_r51 = cpy_r_r50;
    goto CPyL32;
CPyL27: ;
    if (likely(Py_TYPE(cpy_r_func_decorator) == CPyType_nodes___MemberExpr))
        cpy_r_r52 = cpy_r_func_decorator;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 539, CPyStatic_attrs___globals, "mypy.nodes.MemberExpr", cpy_r_func_decorator);
        goto CPyL46;
    }
    cpy_r_r53 = ((mypy___nodes___MemberExprObject *)cpy_r_r52)->_name;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = CPyStatics[4403]; /* 'validator' */
    cpy_r_r55 = PyUnicode_Compare(cpy_r_r53, cpy_r_r54);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r56 = cpy_r_r55 == -1;
    if (!cpy_r_r56) goto CPyL31;
    cpy_r_r57 = PyErr_Occurred();
    cpy_r_r58 = cpy_r_r57 != NULL;
    if (!cpy_r_r58) goto CPyL31;
    cpy_r_r59 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", -1, CPyStatic_attrs___globals);
        goto CPyL46;
    }
CPyL31: ;
    cpy_r_r60 = cpy_r_r55 == 0;
    cpy_r_r51 = cpy_r_r60;
CPyL32: ;
    if (!cpy_r_r51) goto CPyL45;
    if (likely(Py_TYPE(cpy_r_func_decorator) == CPyType_nodes___MemberExpr))
        cpy_r_r61 = cpy_r_func_decorator;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 548, CPyStatic_attrs___globals, "mypy.nodes.MemberExpr", cpy_r_func_decorator);
        goto CPyL44;
    }
    cpy_r_r62 = PyList_Append(cpy_r_remove_me, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 548, CPyStatic_attrs___globals);
        goto CPyL44;
    }
CPyL35: ;
    cpy_r_r64 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r64;
    goto CPyL2;
CPyL36: ;
    cpy_r_r65 = 0;
CPyL37: ;
    cpy_r_r66 = (CPyPtr)&((PyVarObject *)cpy_r_remove_me)->ob_size;
    cpy_r_r67 = *(int64_t *)cpy_r_r66;
    cpy_r_r68 = cpy_r_r67 << 1;
    cpy_r_r69 = (Py_ssize_t)cpy_r_r65 < (Py_ssize_t)cpy_r_r68;
    if (!cpy_r_r69) goto CPyL47;
    cpy_r_r70 = CPyList_GetItemUnsafe(cpy_r_remove_me, cpy_r_r65);
    if (likely(Py_TYPE(cpy_r_r70) == CPyType_nodes___MemberExpr))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 549, CPyStatic_attrs___globals, "mypy.nodes.MemberExpr", cpy_r_r70);
        goto CPyL48;
    }
    cpy_r_dec = cpy_r_r71;
    cpy_r_r72 = ((mypy___nodes___DecoratorObject *)cpy_r_stmt)->_decorators;
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = CPyList_Remove(cpy_r_r72, cpy_r_dec);
    CPy_DECREF(cpy_r_r72);
    CPy_DECREF(cpy_r_dec);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 550, CPyStatic_attrs___globals);
        goto CPyL48;
    }
    cpy_r_r75 = cpy_r_r65 + 2;
    cpy_r_r65 = cpy_r_r75;
    goto CPyL37;
CPyL41: ;
    return 1;
CPyL42: ;
    cpy_r_r76 = 2;
    return cpy_r_r76;
CPyL43: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL36;
CPyL44: ;
    CPy_DecRef(cpy_r_remove_me);
    CPy_DecRef(cpy_r_r1);
    goto CPyL42;
CPyL45: ;
    CPy_DECREF(cpy_r_func_decorator);
    goto CPyL35;
CPyL46: ;
    CPy_DecRef(cpy_r_remove_me);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_func_decorator);
    goto CPyL42;
CPyL47: ;
    CPy_DECREF(cpy_r_remove_me);
    goto CPyL41;
CPyL48: ;
    CPy_DecRef(cpy_r_remove_me);
    goto CPyL42;
}

PyObject *CPyPy_attrs____cleanup_decorator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"stmt", "attr_map", 0};
    static CPyArg_Parser parser = {"OO:_cleanup_decorator", kwlist, 0};
    PyObject *obj_stmt;
    PyObject *obj_attr_map;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_stmt, &obj_attr_map)) {
        return NULL;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___Decorator))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_stmt); 
        goto fail;
    }
    PyObject *arg_attr_map;
    if (likely(PyDict_Check(obj_attr_map)))
        arg_attr_map = obj_attr_map;
    else {
        CPy_TypeError("dict", obj_attr_map); 
        goto fail;
    }
    char retval = CPyDef_attrs____cleanup_decorator(arg_stmt, arg_attr_map);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_cleanup_decorator", 523, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs____attribute_from_auto_attrib(PyObject *cpy_r_ctx, char cpy_r_kw_only, PyObject *cpy_r_lhs, PyObject *cpy_r_rvalue, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_has_rhs;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_sym;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_init_type;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    cpy_r_r0 = ((mypy___nodes___NameExprObject *)cpy_r_lhs)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_mypy___util___unmangle(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_auto_attrib", 561, CPyStatic_attrs___globals);
        goto CPyL15;
    }
    cpy_r_name = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_nodes___TempNode;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_rvalue)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    cpy_r_r6 = cpy_r_r5 ^ 1;
    cpy_r_has_rhs = cpy_r_r6;
    cpy_r_r7 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_auto_attrib", 564, CPyStatic_attrs___globals);
        goto CPyL16;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_nodes___ClassDef))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_auto_attrib", 564, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r7);
        goto CPyL16;
    }
    cpy_r_r9 = ((mypy___nodes___ClassDefObject *)cpy_r_r8)->_info;
    cpy_r_r10 = ((mypy___nodes___TypeInfoObject *)cpy_r_r9)->_names;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_attribute_from_auto_attrib", "TypeInfo", "names", 564, CPyStatic_attrs___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r10);
CPyL4: ;
    CPy_DECREF(cpy_r_r8);
    cpy_r_r11 = CPyDict_GetWithNone(cpy_r_r10, cpy_r_name);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_auto_attrib", 564, CPyStatic_attrs___globals);
        goto CPyL16;
    }
    if (Py_TYPE(cpy_r_r11) == CPyType_nodes___SymbolTableNode)
        cpy_r_r12 = cpy_r_r11;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL4709;
    if (cpy_r_r11 == Py_None)
        cpy_r_r12 = cpy_r_r11;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL4709;
    CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_auto_attrib", 564, CPyStatic_attrs___globals, "mypy.nodes.SymbolTableNode or None", cpy_r_r11);
    goto CPyL16;
__LL4709: ;
    cpy_r_sym = cpy_r_r12;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_sym != cpy_r_r13;
    if (!cpy_r_r14) goto CPyL18;
    if (likely(cpy_r_sym != Py_None))
        cpy_r_r15 = cpy_r_sym;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_auto_attrib", 565, CPyStatic_attrs___globals, "mypy.nodes.SymbolTableNode", cpy_r_sym);
        goto CPyL19;
    }
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_r15, CPyType_nodes___SymbolTableNode, 2, mypy___nodes___SymbolTableNodeObject, PyObject *); /* type */
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_auto_attrib", 565, CPyStatic_attrs___globals);
        goto CPyL19;
    }
CPyL9: ;
    CPy_DECREF(cpy_r_sym);
    cpy_r_r17 = cpy_r_r16;
    goto CPyL11;
CPyL10: ;
    cpy_r_r18 = Py_None;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r17 = cpy_r_r18;
CPyL11: ;
    cpy_r_init_type = cpy_r_r17;
    cpy_r_r19 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_auto_attrib", 566, CPyStatic_attrs___globals);
        goto CPyL20;
    }
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_nodes___ClassDef))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_auto_attrib", 566, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r19);
        goto CPyL20;
    }
    cpy_r_r21 = ((mypy___nodes___ClassDefObject *)cpy_r_r20)->_info;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = Py_None;
    cpy_r_r23 = CPyDef_attrs___Attribute(cpy_r_name, cpy_r_r21, cpy_r_has_rhs, 1, cpy_r_kw_only, cpy_r_r22, cpy_r_stmt, cpy_r_init_type);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_init_type);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_auto_attrib", 566, CPyStatic_attrs___globals);
        goto CPyL15;
    }
    return cpy_r_r23;
CPyL15: ;
    cpy_r_r24 = NULL;
    return cpy_r_r24;
CPyL16: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL15;
CPyL17: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r8);
    goto CPyL15;
CPyL18: ;
    CPy_DECREF(cpy_r_sym);
    goto CPyL10;
CPyL19: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_sym);
    goto CPyL15;
CPyL20: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_init_type);
    goto CPyL15;
}

PyObject *CPyPy_attrs____attribute_from_auto_attrib(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "kw_only", "lhs", "rvalue", "stmt", 0};
    static CPyArg_Parser parser = {"OOOOO:_attribute_from_auto_attrib", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_kw_only;
    PyObject *obj_lhs;
    PyObject *obj_rvalue;
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_kw_only, &obj_lhs, &obj_rvalue, &obj_stmt)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    char arg_kw_only;
    if (unlikely(!PyBool_Check(obj_kw_only))) {
        CPy_TypeError("bool", obj_kw_only); goto fail;
    } else
        arg_kw_only = obj_kw_only == Py_True;
    PyObject *arg_lhs;
    if (likely(Py_TYPE(obj_lhs) == CPyType_nodes___NameExpr))
        arg_lhs = obj_lhs;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_lhs); 
        goto fail;
    }
    PyObject *arg_rvalue;
    if (likely(PyObject_TypeCheck(obj_rvalue, CPyType_nodes___Expression)))
        arg_rvalue = obj_rvalue;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_rvalue); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrs____attribute_from_auto_attrib(arg_ctx, arg_kw_only, arg_lhs, arg_rvalue, arg_stmt);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_auto_attrib", 553, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs____attribute_from_attrib_maker(PyObject *cpy_r_ctx, char cpy_r_auto_attribs, char cpy_r_kw_only, PyObject *cpy_r_lhs, PyObject *cpy_r_rvalue, PyObject *cpy_r_stmt) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_init_type;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_init;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_attr_has_default;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_attr_has_factory;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_type_arg;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_un_type;
    tuple_T3OOO cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyPtr cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_converter;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_convert;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    char cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    char cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_converter_info;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    size_t __tmp4710;
    size_t __tmp4711;
    if (!cpy_r_auto_attribs) goto CPyL11;
    cpy_r_r0 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_new_syntax;
    if (cpy_r_r0) goto CPyL11;
CPyL2: ;
    cpy_r_r1 = ((mypy___nodes___NameExprObject *)cpy_r_lhs)->_node;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (cpy_r_r3) goto CPyL5;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 580, CPyStatic_attrs___globals);
        goto CPyL78;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 581, CPyStatic_attrs___globals);
        goto CPyL78;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 581, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r5);
        goto CPyL78;
    }
    __tmp4710 = CPy_FindAttrOffset(CPyType_plugin___SemanticAnalyzerPluginInterface, ((mypy___plugin___SemanticAnalyzerPluginInterfaceObject *)cpy_r_r6)->vtable, 3);
    cpy_r_r7 = *(PyObject * *)((char *)cpy_r_r6 + __tmp4710);
    if (unlikely(cpy_r_r7 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'msg' of 'SemanticAnalyzerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r7);
    }
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 581, CPyStatic_attrs___globals);
        goto CPyL78;
    }
CPyL8: ;
    cpy_r_r8 = ((mypy___nodes___NameExprObject *)cpy_r_lhs)->_node;
    CPy_INCREF(cpy_r_r8);
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 581, CPyStatic_attrs___globals, "mypy.nodes.SymbolNode", cpy_r_r8);
        goto CPyL79;
    }
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPyDef_messages___MessageBuilder___need_annotation_for_var(cpy_r_r7, cpy_r_r9, cpy_r_stmt, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 581, CPyStatic_attrs___globals);
        goto CPyL78;
    }
    cpy_r_r12 = Py_None;
    CPy_INCREF(cpy_r_r12);
    return cpy_r_r12;
CPyL11: ;
    cpy_r_r13 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_lvalues;
    cpy_r_r14 = (CPyPtr)&((PyVarObject *)cpy_r_r13)->ob_size;
    cpy_r_r15 = *(int64_t *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = (Py_ssize_t)cpy_r_r16 > (Py_ssize_t)2;
    if (!cpy_r_r17) goto CPyL16;
    cpy_r_r18 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 585, CPyStatic_attrs___globals);
        goto CPyL78;
    }
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 585, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r18);
        goto CPyL78;
    }
    cpy_r_r20 = CPyStatics[4404]; /* 'Too many names for one attribute' */
    cpy_r_r21 = 2;
    cpy_r_r22 = 2;
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPY_GET_METHOD_TRAIT(cpy_r_r19, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r19, cpy_r_r20, cpy_r_stmt, cpy_r_r21, cpy_r_r22, cpy_r_r23); /* fail */
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 585, CPyStatic_attrs___globals);
        goto CPyL78;
    }
    cpy_r_r25 = Py_None;
    CPy_INCREF(cpy_r_r25);
    return cpy_r_r25;
CPyL16: ;
    cpy_r_r26 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_type;
    CPy_INCREF(cpy_r_r26);
    cpy_r_init_type = cpy_r_r26;
    cpy_r_r27 = CPyStatics[4384]; /* 'init' */
    cpy_r_r28 = CPyDef_plugins___common____get_bool_argument(cpy_r_ctx, cpy_r_rvalue, cpy_r_r27, 1);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 592, CPyStatic_attrs___globals);
        goto CPyL80;
    }
    cpy_r_init = cpy_r_r28;
    cpy_r_r29 = CPyStatics[4385]; /* 'kw_only' */
    cpy_r_r30 = CPyDef_plugins___common____get_bool_argument(cpy_r_ctx, cpy_r_rvalue, cpy_r_r29, 0);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 595, CPyStatic_attrs___globals);
        goto CPyL80;
    }
    cpy_r_r31 = cpy_r_kw_only | cpy_r_r30;
    cpy_r_kw_only = cpy_r_r31;
    cpy_r_r32 = CPyStatics[748]; /* 'default' */
    cpy_r_r33 = CPyDef_plugins___common____get_argument(cpy_r_rvalue, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 598, CPyStatic_attrs___globals);
        goto CPyL80;
    }
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = cpy_r_r33 != cpy_r_r34;
    CPy_DECREF(cpy_r_r33);
    cpy_r_attr_has_default = cpy_r_r35;
    cpy_r_r36 = CPyStatics[4405]; /* 'factory' */
    cpy_r_r37 = CPyDef_plugins___common____get_argument(cpy_r_rvalue, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 599, CPyStatic_attrs___globals);
        goto CPyL80;
    }
    cpy_r_r38 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r39 = cpy_r_r37 != cpy_r_r38;
    CPy_DECREF(cpy_r_r37);
    cpy_r_attr_has_factory = cpy_r_r39;
    if (!cpy_r_attr_has_default) goto CPyL25;
    if (!cpy_r_attr_has_factory) goto CPyL25;
    cpy_r_r40 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 602, CPyStatic_attrs___globals);
        goto CPyL80;
    }
    if (likely(Py_TYPE(cpy_r_r40) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 602, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r40);
        goto CPyL80;
    }
    cpy_r_r42 = CPyStatics[4406]; /* 'Can\'t pass both "default" and "factory".' */
    cpy_r_r43 = 2;
    cpy_r_r44 = 2;
    cpy_r_r45 = NULL;
    cpy_r_r46 = CPY_GET_METHOD_TRAIT(cpy_r_r41, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r41, cpy_r_r42, cpy_r_rvalue, cpy_r_r43, cpy_r_r44, cpy_r_r45); /* fail */
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 602, CPyStatic_attrs___globals);
        goto CPyL80;
    } else
        goto CPyL27;
CPyL25: ;
    if (!cpy_r_attr_has_factory) goto CPyL27;
    cpy_r_attr_has_default = 1;
CPyL27: ;
    cpy_r_r47 = CPyStatics[802]; /* 'type' */
    cpy_r_r48 = CPyDef_plugins___common____get_argument(cpy_r_rvalue, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 607, CPyStatic_attrs___globals);
        goto CPyL80;
    }
    cpy_r_type_arg = cpy_r_r48;
    cpy_r_r49 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r50 = cpy_r_type_arg != cpy_r_r49;
    if (!cpy_r_r50) goto CPyL81;
    cpy_r_r51 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r52 = cpy_r_init_type != cpy_r_r51;
    if (cpy_r_r52) goto CPyL81;
    CPy_INCREF(cpy_r_type_arg);
    if (likely(cpy_r_type_arg != Py_None))
        cpy_r_r53 = cpy_r_type_arg;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 610, CPyStatic_attrs___globals, "mypy.nodes.Expression", cpy_r_type_arg);
        goto CPyL39;
    }
    cpy_r_r54 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 610, CPyStatic_attrs___globals);
        goto CPyL82;
    }
    if (likely(Py_TYPE(cpy_r_r54) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 610, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r54);
        goto CPyL82;
    }
    __tmp4711 = CPy_FindAttrOffset(CPyType_plugin___SemanticAnalyzerPluginInterface, ((mypy___plugin___SemanticAnalyzerPluginInterfaceObject *)cpy_r_r55)->vtable, 1);
    cpy_r_r56 = *(PyObject * *)((char *)cpy_r_r55 + __tmp4711);
    if (unlikely(cpy_r_r56 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'SemanticAnalyzerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r56);
    }
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 610, CPyStatic_attrs___globals);
        goto CPyL82;
    }
CPyL34: ;
    cpy_r_r57 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 610, CPyStatic_attrs___globals);
        goto CPyL83;
    }
    if (likely(Py_TYPE(cpy_r_r57) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 610, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r57);
        goto CPyL83;
    }
    cpy_r_r59 = CPY_GET_ATTR_TRAIT(cpy_r_r58, CPyType_plugin___SemanticAnalyzerPluginInterface, 17, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char); /* is_stub_file */
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 610, CPyStatic_attrs___globals);
        goto CPyL83;
    }
CPyL37: ;
    cpy_r_r60 = NULL;
    cpy_r_r61 = CPyDef_exprtotype___expr_to_unanalyzed_type(cpy_r_r53, cpy_r_r56, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 610, CPyStatic_attrs___globals);
        goto CPyL39;
    } else
        goto CPyL84;
CPyL38: ;
    cpy_r_un_type = cpy_r_r61;
    goto CPyL49;
CPyL39: ;
    cpy_r_r62 = CPy_CatchError();
    cpy_r_r63 = (PyObject *)CPyType_exprtotype___TypeTranslationError;
    cpy_r_r64 = CPy_ExceptionMatches(cpy_r_r63);
    if (!cpy_r_r64) goto CPyL85;
    cpy_r_r65 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 612, CPyStatic_attrs___globals);
        goto CPyL86;
    }
    if (likely(Py_TYPE(cpy_r_r65) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 612, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r65);
        goto CPyL86;
    }
    cpy_r_r67 = CPyStatics[4407]; /* 'Invalid argument to type' */
    if (likely(cpy_r_type_arg != Py_None))
        cpy_r_r68 = cpy_r_type_arg;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 612, CPyStatic_attrs___globals, "mypy.nodes.Expression", cpy_r_type_arg);
        goto CPyL87;
    }
    cpy_r_r69 = 2;
    cpy_r_r70 = 2;
    cpy_r_r71 = NULL;
    cpy_r_r72 = CPY_GET_METHOD_TRAIT(cpy_r_r66, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_r71); /* fail */
    CPy_DecRef(cpy_r_r68);
    CPy_DecRef(cpy_r_r66);
    if (unlikely(cpy_r_r72 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 612, CPyStatic_attrs___globals);
        goto CPyL88;
    } else
        goto CPyL46;
CPyL44: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL47;
    } else
        goto CPyL89;
CPyL45: ;
    CPy_Unreachable();
CPyL46: ;
    CPy_RestoreExcInfo(cpy_r_r62);
    CPy_DecRef(cpy_r_r62.f0);
    CPy_DecRef(cpy_r_r62.f1);
    CPy_DecRef(cpy_r_r62.f2);
    goto CPyL59;
CPyL47: ;
    CPy_RestoreExcInfo(cpy_r_r62);
    CPy_DecRef(cpy_r_r62.f0);
    CPy_DecRef(cpy_r_r62.f1);
    CPy_DecRef(cpy_r_r62.f2);
    cpy_r_r73 = CPy_KeepPropagating();
    if (!cpy_r_r73) goto CPyL78;
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r74 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 614, CPyStatic_attrs___globals);
        goto CPyL90;
    }
    if (likely(Py_TYPE(cpy_r_r74) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r75 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 614, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r74);
        goto CPyL90;
    }
    cpy_r_r76 = NULL;
    cpy_r_r77 = 2;
    cpy_r_r78 = 2;
    cpy_r_r79 = 2;
    cpy_r_r80 = 2;
    cpy_r_r81 = CPY_GET_METHOD_TRAIT(cpy_r_r75, CPyType_plugin___SemanticAnalyzerPluginInterface, 7, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *, char, char, char, char))(cpy_r_r75, cpy_r_un_type, cpy_r_r76, cpy_r_r77, cpy_r_r78, cpy_r_r79, cpy_r_r80); /* anal_type */
    CPy_DECREF(cpy_r_un_type);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 614, CPyStatic_attrs___globals);
        goto CPyL78;
    }
    cpy_r_init_type = cpy_r_r81;
    cpy_r_r82 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r83 = cpy_r_init_type != cpy_r_r82;
    if (!cpy_r_r83) goto CPyL59;
    cpy_r_r84 = ((mypy___nodes___NameExprObject *)cpy_r_lhs)->_node;
    cpy_r_r85 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r86 = (CPyPtr)&((PyObject *)cpy_r_r84)->ob_type;
    cpy_r_r87 = *(PyObject * *)cpy_r_r86;
    cpy_r_r88 = cpy_r_r87 == cpy_r_r85;
    if (!cpy_r_r88) goto CPyL59;
    cpy_r_r89 = ((mypy___nodes___NameExprObject *)cpy_r_lhs)->_node;
    if (likely(Py_TYPE(cpy_r_r89) == CPyType_nodes___Var))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 615, CPyStatic_attrs___globals, "mypy.nodes.Var", cpy_r_r89);
        goto CPyL80;
    }
    cpy_r_r91 = ((mypy___nodes___VarObject *)cpy_r_r90)->_type;
    CPy_INCREF(cpy_r_r91);
    cpy_r_r92 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r93 = cpy_r_r91 != cpy_r_r92;
    CPy_DECREF(cpy_r_r91);
    if (cpy_r_r93) goto CPyL59;
    CPy_INCREF(cpy_r_init_type);
    if (likely(cpy_r_init_type != Py_None))
        cpy_r_r94 = cpy_r_init_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 617, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_init_type);
        goto CPyL80;
    }
    cpy_r_r95 = ((mypy___nodes___NameExprObject *)cpy_r_lhs)->_node;
    if (likely(Py_TYPE(cpy_r_r95) == CPyType_nodes___Var))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 617, CPyStatic_attrs___globals, "mypy.nodes.Var", cpy_r_r95);
        goto CPyL91;
    }
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r96)->_type);
    ((mypy___nodes___VarObject *)cpy_r_r96)->_type = cpy_r_r94;
    ((mypy___nodes___NameExprObject *)cpy_r_lhs)->_is_inferred_def = 0;
CPyL59: ;
    cpy_r_r99 = CPyStatics[4408]; /* 'converter' */
    cpy_r_r100 = CPyDef_plugins___common____get_argument(cpy_r_rvalue, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 621, CPyStatic_attrs___globals);
        goto CPyL80;
    }
    cpy_r_converter = cpy_r_r100;
    cpy_r_r101 = CPyStatics[4409]; /* 'convert' */
    cpy_r_r102 = CPyDef_plugins___common____get_argument(cpy_r_rvalue, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 622, CPyStatic_attrs___globals);
        goto CPyL92;
    }
    cpy_r_convert = cpy_r_r102;
    cpy_r_r103 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r104 = cpy_r_convert != cpy_r_r103;
    if (!cpy_r_r104) goto CPyL66;
    cpy_r_r105 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r106 = cpy_r_converter != cpy_r_r105;
    if (cpy_r_r106) {
        goto CPyL93;
    } else
        goto CPyL66;
CPyL63: ;
    cpy_r_r107 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 624, CPyStatic_attrs___globals);
        goto CPyL92;
    }
    if (likely(Py_TYPE(cpy_r_r107) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r108 = cpy_r_r107;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 624, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r107);
        goto CPyL92;
    }
    cpy_r_r109 = CPyStatics[4410]; /* 'Can\'t pass both "convert" and "converter".' */
    cpy_r_r110 = 2;
    cpy_r_r111 = 2;
    cpy_r_r112 = NULL;
    cpy_r_r113 = CPY_GET_METHOD_TRAIT(cpy_r_r108, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r108, cpy_r_r109, cpy_r_rvalue, cpy_r_r110, cpy_r_r111, cpy_r_r112); /* fail */
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r113 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 624, CPyStatic_attrs___globals);
        goto CPyL92;
    } else
        goto CPyL72;
CPyL66: ;
    cpy_r_r114 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r115 = cpy_r_convert != cpy_r_r114;
    if (cpy_r_r115) {
        goto CPyL94;
    } else
        goto CPyL95;
CPyL67: ;
    cpy_r_r116 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 626, CPyStatic_attrs___globals);
        goto CPyL96;
    }
    if (likely(Py_TYPE(cpy_r_r116) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r117 = cpy_r_r116;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 626, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r116);
        goto CPyL96;
    }
    cpy_r_r118 = CPyStatics[4411]; /* 'convert is deprecated, use converter' */
    cpy_r_r119 = 2;
    cpy_r_r120 = 2;
    cpy_r_r121 = NULL;
    cpy_r_r122 = CPY_GET_METHOD_TRAIT(cpy_r_r117, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r117, cpy_r_r118, cpy_r_rvalue, cpy_r_r119, cpy_r_r120, cpy_r_r121); /* fail */
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r122 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 626, CPyStatic_attrs___globals);
        goto CPyL96;
    }
    if (likely(cpy_r_convert != Py_None))
        cpy_r_r123 = cpy_r_convert;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 627, CPyStatic_attrs___globals, "mypy.nodes.Expression", cpy_r_convert);
        goto CPyL80;
    }
    cpy_r_converter = cpy_r_r123;
CPyL72: ;
    cpy_r_r124 = CPyDef_attrs____parse_converter(cpy_r_ctx, cpy_r_converter);
    CPy_DECREF(cpy_r_converter);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 628, CPyStatic_attrs___globals);
        goto CPyL80;
    }
    cpy_r_converter_info = cpy_r_r124;
    cpy_r_r125 = ((mypy___nodes___NameExprObject *)cpy_r_lhs)->_name;
    CPy_INCREF(cpy_r_r125);
    cpy_r_r126 = CPyDef_mypy___util___unmangle(cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 630, CPyStatic_attrs___globals);
        goto CPyL97;
    }
    cpy_r_name = cpy_r_r126;
    cpy_r_r127 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 632, CPyStatic_attrs___globals);
        goto CPyL98;
    }
    if (likely(Py_TYPE(cpy_r_r127) == CPyType_nodes___ClassDef))
        cpy_r_r128 = cpy_r_r127;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 632, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r127);
        goto CPyL98;
    }
    cpy_r_r129 = ((mypy___nodes___ClassDefObject *)cpy_r_r128)->_info;
    CPy_INCREF(cpy_r_r129);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r130 = CPyDef_attrs___Attribute(cpy_r_name, cpy_r_r129, cpy_r_attr_has_default, cpy_r_init, cpy_r_kw_only, cpy_r_converter_info, cpy_r_stmt, cpy_r_init_type);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r129);
    CPy_DECREF(cpy_r_converter_info);
    CPy_DECREF(cpy_r_init_type);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 631, CPyStatic_attrs___globals);
        goto CPyL78;
    }
    return cpy_r_r130;
CPyL78: ;
    cpy_r_r131 = NULL;
    return cpy_r_r131;
CPyL79: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL78;
CPyL80: ;
    CPy_DecRef(cpy_r_init_type);
    goto CPyL78;
CPyL81: ;
    CPy_DECREF(cpy_r_type_arg);
    goto CPyL59;
CPyL82: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL39;
CPyL83: ;
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r56);
    goto CPyL39;
CPyL84: ;
    CPy_DECREF(cpy_r_init_type);
    CPy_DECREF(cpy_r_type_arg);
    goto CPyL38;
CPyL85: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_type_arg);
    goto CPyL44;
CPyL86: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_type_arg);
    goto CPyL47;
CPyL87: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r66);
    goto CPyL47;
CPyL88: ;
    CPy_DecRef(cpy_r_init_type);
    goto CPyL47;
CPyL89: ;
    CPy_DecRef(cpy_r_r62.f0);
    CPy_DecRef(cpy_r_r62.f1);
    CPy_DecRef(cpy_r_r62.f2);
    goto CPyL45;
CPyL90: ;
    CPy_DecRef(cpy_r_un_type);
    goto CPyL78;
CPyL91: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_r94);
    goto CPyL78;
CPyL92: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_converter);
    goto CPyL78;
CPyL93: ;
    CPy_DECREF(cpy_r_convert);
    goto CPyL63;
CPyL94: ;
    CPy_DECREF(cpy_r_converter);
    goto CPyL67;
CPyL95: ;
    CPy_DECREF(cpy_r_convert);
    goto CPyL72;
CPyL96: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_convert);
    goto CPyL78;
CPyL97: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_converter_info);
    goto CPyL78;
CPyL98: ;
    CPy_DecRef(cpy_r_init_type);
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_name);
    goto CPyL78;
}

PyObject *CPyPy_attrs____attribute_from_attrib_maker(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "auto_attribs", "kw_only", "lhs", "rvalue", "stmt", 0};
    static CPyArg_Parser parser = {"OOOOOO:_attribute_from_attrib_maker", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_auto_attribs;
    PyObject *obj_kw_only;
    PyObject *obj_lhs;
    PyObject *obj_rvalue;
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_auto_attribs, &obj_kw_only, &obj_lhs, &obj_rvalue, &obj_stmt)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    char arg_auto_attribs;
    if (unlikely(!PyBool_Check(obj_auto_attribs))) {
        CPy_TypeError("bool", obj_auto_attribs); goto fail;
    } else
        arg_auto_attribs = obj_auto_attribs == Py_True;
    char arg_kw_only;
    if (unlikely(!PyBool_Check(obj_kw_only))) {
        CPy_TypeError("bool", obj_kw_only); goto fail;
    } else
        arg_kw_only = obj_kw_only == Py_True;
    PyObject *arg_lhs;
    if (likely(Py_TYPE(obj_lhs) == CPyType_nodes___NameExpr))
        arg_lhs = obj_lhs;
    else {
        CPy_TypeError("mypy.nodes.NameExpr", obj_lhs); 
        goto fail;
    }
    PyObject *arg_rvalue;
    if (likely(Py_TYPE(obj_rvalue) == CPyType_nodes___CallExpr))
        arg_rvalue = obj_rvalue;
    else {
        CPy_TypeError("mypy.nodes.CallExpr", obj_rvalue); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrs____attribute_from_attrib_maker(arg_ctx, arg_auto_attribs, arg_kw_only, arg_lhs, arg_rvalue, arg_stmt);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_attribute_from_attrib_maker", 569, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs____parse_converter(PyObject *cpy_r_ctx, PyObject *cpy_r_converter_expr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_converter_info;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyPtr cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyPtr cpy_r_r37;
    int64_t cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_is_attr_converters_optional;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_converter_type;
    PyObject *cpy_r_r53;
    CPyPtr cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    CPyPtr cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    CPyPtr cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
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
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyPtr cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    CPyPtr cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    CPyTagged cpy_r_r107;
    CPyTagged cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    CPyPtr cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    CPyPtr cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    CPyPtr cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    CPyPtr cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    CPyPtr cpy_r_r155;
    PyObject *cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    CPyPtr cpy_r_r161;
    PyObject *cpy_r_r162;
    char cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    CPyPtr cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    char cpy_r_r169;
    PyObject *cpy_r_r170;
    CPyPtr cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    CPyPtr cpy_r_r179;
    PyObject *cpy_r_r180;
    char cpy_r_r181;
    char cpy_r_r182;
    PyObject *cpy_r_r183;
    CPyPtr cpy_r_r184;
    PyObject *cpy_r_r185;
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
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    CPyPtr cpy_r_r202;
    PyObject *cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
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
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    CPyPtr cpy_r_r220;
    PyObject *cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    CPyTagged cpy_r_r225;
    CPyTagged cpy_r_r226;
    PyObject *cpy_r_r227;
    char cpy_r_r228;
    PyObject *cpy_r_r229;
    char cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    char cpy_r_r235;
    char cpy_r_r236;
    PyObject *cpy_r_r237;
    char cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    CPyTagged cpy_r_r241;
    CPyTagged cpy_r_r242;
    PyObject *cpy_r_r243;
    char cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    CPyPtr cpy_r_r249;
    PyObject *cpy_r_r250;
    char cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    CPyPtr cpy_r_r254;
    int64_t cpy_r_r255;
    CPyTagged cpy_r_r256;
    char cpy_r_r257;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    char cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    char cpy_r_r265;
    PyObject *cpy_r_r266;
    CPyPtr cpy_r_r267;
    PyObject *cpy_r_r268;
    char cpy_r_r269;
    PyObject *cpy_r_r270;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r271;
    PyObject *cpy_r_r272;
    CPyTagged cpy_r_r273;
    CPyPtr cpy_r_r274;
    int64_t cpy_r_r275;
    CPyTagged cpy_r_r276;
    char cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_item;
    PyObject *cpy_r_r280;
    CPyPtr cpy_r_r281;
    int64_t cpy_r_r282;
    CPyTagged cpy_r_r283;
    CPyTagged cpy_r_num_arg_types;
    char cpy_r_r284;
    int64_t cpy_r_r285;
    char cpy_r_r286;
    char cpy_r_r287;
    char cpy_r_r288;
    char cpy_r_r289;
    PyObject *cpy_r_r290;
    PyObject *cpy_r_r291;
    PyObject *cpy_r_r292;
    CPyTagged cpy_r_r293;
    CPyPtr cpy_r_r294;
    int64_t cpy_r_r295;
    CPyTagged cpy_r_r296;
    char cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_kind;
    PyObject *cpy_r_r300;
    char cpy_r_r301;
    char cpy_r_r302;
    CPyTagged cpy_r_r303;
    PyObject *cpy_r_r304;
    PyObject *cpy_r_r305;
    PyObject *cpy_r_r306;
    int32_t cpy_r_r307;
    char cpy_r_r308;
    CPyTagged cpy_r_r309;
    CPyPtr cpy_r_r310;
    int64_t cpy_r_r311;
    CPyTagged cpy_r_r312;
    char cpy_r_r313;
    CPyTagged cpy_r_r314;
    CPyTagged cpy_r_r315;
    char cpy_r_r316;
    char cpy_r_r317;
    PyObject *cpy_r_r318;
    char cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    char cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    CPyTagged cpy_r_r325;
    CPyTagged cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    CPyPtr cpy_r_r329;
    CPyPtr cpy_r_r330;
    CPyPtr cpy_r_r331;
    CPyTagged cpy_r_r332;
    CPyTagged cpy_r_r333;
    PyObject *cpy_r_r334;
    char cpy_r_r335;
    PyObject *cpy_r_r336;
    size_t __tmp4712;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_converter_expr != cpy_r_r0;
    if (cpy_r_r1) goto CPyL2;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    cpy_r_r4 = NULL;
    cpy_r_r5 = CPyDef_attrs___Converter(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 643, CPyStatic_attrs___globals);
        goto CPyL180;
    }
    cpy_r_converter_info = cpy_r_r5;
    cpy_r_r6 = (PyObject *)CPyType_nodes___CallExpr;
    cpy_r_r7 = (CPyPtr)&((PyObject *)cpy_r_converter_expr)->ob_type;
    cpy_r_r8 = *(PyObject * *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 == cpy_r_r6;
    if (!cpy_r_r9) goto CPyL31;
    if (likely(Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___CallExpr))
        cpy_r_r10 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 646, CPyStatic_attrs___globals, "mypy.nodes.CallExpr", cpy_r_converter_expr);
        goto CPyL181;
    }
    cpy_r_r11 = ((mypy___nodes___CallExprObject *)cpy_r_r10)->_callee;
    cpy_r_r12 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_r11)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (!cpy_r_r15) goto CPyL7;
    cpy_r_r16 = cpy_r_r15;
    goto CPyL8;
CPyL7: ;
    cpy_r_r17 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r18 = (CPyPtr)&((PyObject *)cpy_r_r11)->ob_type;
    cpy_r_r19 = *(PyObject * *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 == cpy_r_r17;
    cpy_r_r16 = cpy_r_r20;
CPyL8: ;
    if (!cpy_r_r16) goto CPyL10;
    cpy_r_r21 = cpy_r_r16;
    goto CPyL11;
CPyL10: ;
    cpy_r_r22 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r23 = (CPyPtr)&((PyObject *)cpy_r_r11)->ob_type;
    cpy_r_r24 = *(PyObject * *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 == cpy_r_r22;
    cpy_r_r21 = cpy_r_r25;
CPyL11: ;
    if (!cpy_r_r21) goto CPyL31;
    if (likely(Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___CallExpr))
        cpy_r_r26 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 647, CPyStatic_attrs___globals, "mypy.nodes.CallExpr", cpy_r_converter_expr);
        goto CPyL181;
    }
    cpy_r_r27 = ((mypy___nodes___CallExprObject *)cpy_r_r26)->_callee;
    if (likely((Py_TYPE(cpy_r_r27) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r27) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r27) == CPyType_nodes___RefExpr)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 647, CPyStatic_attrs___globals, "mypy.nodes.RefExpr", cpy_r_r27);
        goto CPyL181;
    }
    cpy_r_r29 = CPY_GET_ATTR(cpy_r_r28, CPyType_nodes___RefExpr, 6, mypy___nodes___RefExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 647, CPyStatic_attrs___globals);
        goto CPyL181;
    }
CPyL15: ;
    cpy_r_r30 = CPyStatic_attrs___attr_optional_converters;
    if (unlikely(cpy_r_r30 == NULL)) {
        goto CPyL182;
    } else
        goto CPyL18;
CPyL16: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"attr_optional_converters\" was not set");
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 647, CPyStatic_attrs___globals);
        goto CPyL180;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r32 = PySet_Contains(cpy_r_r30, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 647, CPyStatic_attrs___globals);
        goto CPyL181;
    }
    cpy_r_r34 = cpy_r_r32;
    if (!cpy_r_r34) goto CPyL31;
    if (likely(Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___CallExpr))
        cpy_r_r35 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 648, CPyStatic_attrs___globals, "mypy.nodes.CallExpr", cpy_r_converter_expr);
        goto CPyL181;
    }
    cpy_r_r36 = ((mypy___nodes___CallExprObject *)cpy_r_r35)->_args;
    CPy_INCREF(cpy_r_r36);
    cpy_r_r37 = (CPyPtr)&((PyVarObject *)cpy_r_r36)->ob_size;
    cpy_r_r38 = *(int64_t *)cpy_r_r37;
    CPy_DECREF(cpy_r_r36);
    cpy_r_r39 = cpy_r_r38 << 1;
    cpy_r_r40 = cpy_r_r39 != 0;
    if (!cpy_r_r40) goto CPyL31;
    if (likely(Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___CallExpr))
        cpy_r_r41 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 649, CPyStatic_attrs___globals, "mypy.nodes.CallExpr", cpy_r_converter_expr);
        goto CPyL181;
    }
    cpy_r_r42 = ((mypy___nodes___CallExprObject *)cpy_r_r41)->_args;
    cpy_r_r43 = CPyList_GetItemShort(cpy_r_r42, 0);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 649, CPyStatic_attrs___globals);
        goto CPyL181;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r43, CPyType_nodes___Expression)))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 649, CPyStatic_attrs___globals, "mypy.nodes.Expression", cpy_r_r43);
        goto CPyL181;
    }
    cpy_r_r45 = PyObject_IsTrue(cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 649, CPyStatic_attrs___globals);
        goto CPyL181;
    }
    cpy_r_r47 = cpy_r_r45;
    if (!cpy_r_r47) goto CPyL31;
    if (likely(Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___CallExpr))
        cpy_r_r48 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 653, CPyStatic_attrs___globals, "mypy.nodes.CallExpr", cpy_r_converter_expr);
        goto CPyL181;
    }
    cpy_r_r49 = ((mypy___nodes___CallExprObject *)cpy_r_r48)->_args;
    cpy_r_r50 = CPyList_GetItemShort(cpy_r_r49, 0);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 653, CPyStatic_attrs___globals);
        goto CPyL181;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r50, CPyType_nodes___Expression)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 653, CPyStatic_attrs___globals, "mypy.nodes.Expression", cpy_r_r50);
        goto CPyL181;
    }
    cpy_r_converter_expr = cpy_r_r51;
    cpy_r_is_attr_converters_optional = 1;
    goto CPyL32;
CPyL31: ;
    cpy_r_is_attr_converters_optional = 0;
    goto CPyL183;
CPyL32: ;
    cpy_r_r52 = Py_None;
    CPy_INCREF(cpy_r_r52);
    cpy_r_converter_type = cpy_r_r52;
    cpy_r_r53 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r54 = (CPyPtr)&((PyObject *)cpy_r_converter_expr)->ob_type;
    cpy_r_r55 = *(PyObject * *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 == cpy_r_r53;
    if (!cpy_r_r56) goto CPyL34;
    cpy_r_r57 = cpy_r_r56;
    goto CPyL35;
CPyL34: ;
    cpy_r_r58 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r59 = (CPyPtr)&((PyObject *)cpy_r_converter_expr)->ob_type;
    cpy_r_r60 = *(PyObject * *)cpy_r_r59;
    cpy_r_r61 = cpy_r_r60 == cpy_r_r58;
    cpy_r_r57 = cpy_r_r61;
CPyL35: ;
    if (!cpy_r_r57) goto CPyL37;
    cpy_r_r62 = cpy_r_r57;
    goto CPyL38;
CPyL37: ;
    cpy_r_r63 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r64 = (CPyPtr)&((PyObject *)cpy_r_converter_expr)->ob_type;
    cpy_r_r65 = *(PyObject * *)cpy_r_r64;
    cpy_r_r66 = cpy_r_r65 == cpy_r_r63;
    cpy_r_r62 = cpy_r_r66;
CPyL38: ;
    if (!cpy_r_r62) goto CPyL83;
    if (likely((Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r67 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 659, CPyStatic_attrs___globals, "mypy.nodes.RefExpr", cpy_r_converter_expr);
        goto CPyL184;
    }
    cpy_r_r68 = ((mypy___nodes___RefExprObject *)cpy_r_r67)->_node;
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = cpy_r_r68 != cpy_r_r69;
    if (!cpy_r_r70) goto CPyL185;
    if (likely(cpy_r_r68 != Py_None))
        cpy_r_r71 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 659, CPyStatic_attrs___globals, "mypy.nodes.SymbolNode", cpy_r_r68);
        goto CPyL184;
    }
    cpy_r_r72 = PyObject_IsTrue(cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 659, CPyStatic_attrs___globals);
        goto CPyL184;
    }
    cpy_r_r74 = cpy_r_r72;
    if (!cpy_r_r74) goto CPyL83;
    if (likely((Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r75 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 660, CPyStatic_attrs___globals, "mypy.nodes.RefExpr", cpy_r_converter_expr);
        goto CPyL184;
    }
    cpy_r_r76 = ((mypy___nodes___RefExprObject *)cpy_r_r75)->_node;
    cpy_r_r77 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r78 = (CPyPtr)&((PyObject *)cpy_r_r76)->ob_type;
    cpy_r_r79 = *(PyObject * *)cpy_r_r78;
    cpy_r_r80 = cpy_r_r79 == cpy_r_r77;
    if (cpy_r_r80) {
        goto CPyL186;
    } else
        goto CPyL61;
CPyL46: ;
    if (likely((Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r81 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 661, CPyStatic_attrs___globals, "mypy.nodes.RefExpr", cpy_r_converter_expr);
        goto CPyL187;
    }
    cpy_r_r82 = ((mypy___nodes___RefExprObject *)cpy_r_r81)->_node;
    if (likely(Py_TYPE(cpy_r_r82) == CPyType_nodes___FuncDef))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 661, CPyStatic_attrs___globals, "mypy.nodes.FuncDef", cpy_r_r82);
        goto CPyL187;
    }
    cpy_r_r84 = ((mypy___nodes___FuncDefObject *)cpy_r_r83)->_type;
    CPy_INCREF(cpy_r_r84);
    cpy_r_r85 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r86 = cpy_r_r84 != cpy_r_r85;
    CPy_DECREF(cpy_r_r84);
    if (!cpy_r_r86) goto CPyL188;
    if (likely((Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r87 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 661, CPyStatic_attrs___globals, "mypy.nodes.RefExpr", cpy_r_converter_expr);
        goto CPyL187;
    }
    cpy_r_r88 = ((mypy___nodes___RefExprObject *)cpy_r_r87)->_node;
    if (likely(Py_TYPE(cpy_r_r88) == CPyType_nodes___FuncDef))
        cpy_r_r89 = cpy_r_r88;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 661, CPyStatic_attrs___globals, "mypy.nodes.FuncDef", cpy_r_r88);
        goto CPyL187;
    }
    cpy_r_r90 = ((mypy___nodes___FuncDefObject *)cpy_r_r89)->_type;
    cpy_r_r91 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r92 = (CPyPtr)&((PyObject *)cpy_r_r90)->ob_type;
    cpy_r_r93 = *(PyObject * *)cpy_r_r92;
    cpy_r_r94 = cpy_r_r93 == cpy_r_r91;
    if (!cpy_r_r94) goto CPyL53;
    cpy_r_r95 = cpy_r_r94;
    goto CPyL54;
CPyL53: ;
    cpy_r_r96 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r97 = (CPyPtr)&((PyObject *)cpy_r_r90)->ob_type;
    cpy_r_r98 = *(PyObject * *)cpy_r_r97;
    cpy_r_r99 = cpy_r_r98 == cpy_r_r96;
    cpy_r_r95 = cpy_r_r99;
CPyL54: ;
    if (!cpy_r_r95) goto CPyL188;
    if (likely((Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r100 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 662, CPyStatic_attrs___globals, "mypy.nodes.RefExpr", cpy_r_converter_expr);
        goto CPyL187;
    }
    cpy_r_r101 = ((mypy___nodes___RefExprObject *)cpy_r_r100)->_node;
    if (likely(Py_TYPE(cpy_r_r101) == CPyType_nodes___FuncDef))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 662, CPyStatic_attrs___globals, "mypy.nodes.FuncDef", cpy_r_r101);
        goto CPyL187;
    }
    cpy_r_r103 = ((mypy___nodes___FuncDefObject *)cpy_r_r102)->_type;
    CPy_INCREF(cpy_r_r103);
    if (likely((Py_TYPE(cpy_r_r103) == CPyType_types___CallableType) || (Py_TYPE(cpy_r_r103) == CPyType_types___Overloaded)))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 662, CPyStatic_attrs___globals, "mypy.types.FunctionLike", cpy_r_r103);
        goto CPyL187;
    }
    cpy_r_converter_type = cpy_r_r104;
    goto CPyL120;
CPyL59: ;
    cpy_r_r105 = NULL;
    cpy_r_r106 = NULL;
    cpy_r_r107 = CPY_INT_TAG;
    cpy_r_r108 = CPY_INT_TAG;
    cpy_r_r109 = CPyDef_types___AnyType(2, cpy_r_r105, cpy_r_r106, cpy_r_r107, cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 664, CPyStatic_attrs___globals);
        goto CPyL181;
    }
    CPy_DECREF(((mypy___plugins___attrs___ConverterObject *)cpy_r_converter_info)->_init_type);
    ((mypy___plugins___attrs___ConverterObject *)cpy_r_converter_info)->_init_type = cpy_r_r109;
    return cpy_r_converter_info;
CPyL61: ;
    if (likely((Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r111 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 666, CPyStatic_attrs___globals, "mypy.nodes.RefExpr", cpy_r_converter_expr);
        goto CPyL184;
    }
    cpy_r_r112 = ((mypy___nodes___RefExprObject *)cpy_r_r111)->_node;
    cpy_r_r113 = (PyObject *)CPyType_nodes___OverloadedFuncDef;
    cpy_r_r114 = (CPyPtr)&((PyObject *)cpy_r_r112)->ob_type;
    cpy_r_r115 = *(PyObject * *)cpy_r_r114;
    cpy_r_r116 = cpy_r_r115 == cpy_r_r113;
    if (!cpy_r_r116) goto CPyL70;
    if (likely((Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r117 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 667, CPyStatic_attrs___globals, "mypy.nodes.RefExpr", cpy_r_converter_expr);
        goto CPyL184;
    }
    cpy_r_r118 = ((mypy___nodes___RefExprObject *)cpy_r_r117)->_node;
    CPy_INCREF(cpy_r_r118);
    if (likely(Py_TYPE(cpy_r_r118) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r119 = cpy_r_r118;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 667, CPyStatic_attrs___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r118);
        goto CPyL184;
    }
    cpy_r_r120 = CPyDef_attrs___is_valid_overloaded_converter(cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r120 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 666, CPyStatic_attrs___globals);
        goto CPyL184;
    }
    if (cpy_r_r120) {
        goto CPyL189;
    } else
        goto CPyL70;
CPyL67: ;
    if (likely((Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r121 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 669, CPyStatic_attrs___globals, "mypy.nodes.RefExpr", cpy_r_converter_expr);
        goto CPyL187;
    }
    cpy_r_r122 = ((mypy___nodes___RefExprObject *)cpy_r_r121)->_node;
    if (likely(Py_TYPE(cpy_r_r122) == CPyType_nodes___OverloadedFuncDef))
        cpy_r_r123 = cpy_r_r122;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 669, CPyStatic_attrs___globals, "mypy.nodes.OverloadedFuncDef", cpy_r_r122);
        goto CPyL187;
    }
    cpy_r_r124 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_r123)->_type;
    CPy_INCREF(cpy_r_r124);
    cpy_r_converter_type = cpy_r_r124;
    goto CPyL120;
CPyL70: ;
    if (likely((Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r125 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 670, CPyStatic_attrs___globals, "mypy.nodes.RefExpr", cpy_r_converter_expr);
        goto CPyL184;
    }
    cpy_r_r126 = ((mypy___nodes___RefExprObject *)cpy_r_r125)->_node;
    cpy_r_r127 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r128 = (CPyPtr)&((PyObject *)cpy_r_r126)->ob_type;
    cpy_r_r129 = *(PyObject * *)cpy_r_r128;
    cpy_r_r130 = cpy_r_r129 == cpy_r_r127;
    if (!cpy_r_r130) goto CPyL73;
    cpy_r_r131 = cpy_r_r130;
    goto CPyL74;
CPyL73: ;
    cpy_r_r132 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r133 = (CPyPtr)&((PyObject *)cpy_r_r126)->ob_type;
    cpy_r_r134 = *(PyObject * *)cpy_r_r133;
    cpy_r_r135 = cpy_r_r134 == cpy_r_r132;
    cpy_r_r131 = cpy_r_r135;
CPyL74: ;
    if (cpy_r_r131) {
        goto CPyL190;
    } else
        goto CPyL120;
CPyL75: ;
    cpy_r_r136 = CPyStatics[9577]; /* ('type_object_type',) */
    cpy_r_r137 = CPyStatics[913]; /* 'mypy.checkmember' */
    cpy_r_r138 = CPyStatic_attrs___globals;
    cpy_r_r139 = CPyImport_ImportFromMany(cpy_r_r137, cpy_r_r136, cpy_r_r136, cpy_r_r138);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 671, CPyStatic_attrs___globals);
        goto CPyL187;
    }
    CPyModule_mypy___checkmember = cpy_r_r139;
    CPy_INCREF(CPyModule_mypy___checkmember);
    CPy_DECREF(cpy_r_r139);
    if (likely((Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___RefExpr)))
        cpy_r_r140 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 673, CPyStatic_attrs___globals, "mypy.nodes.RefExpr", cpy_r_converter_expr);
        goto CPyL187;
    }
    cpy_r_r141 = ((mypy___nodes___RefExprObject *)cpy_r_r140)->_node;
    CPy_INCREF(cpy_r_r141);
    if (likely((Py_TYPE(cpy_r_r141) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r141) == CPyType_nodes___TypeInfo)))
        cpy_r_r142 = cpy_r_r141;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 673, CPyStatic_attrs___globals, "mypy.nodes.TypeInfo", cpy_r_r141);
        goto CPyL187;
    }
    cpy_r_r143 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 673, CPyStatic_attrs___globals);
        goto CPyL191;
    }
    if (likely(Py_TYPE(cpy_r_r143) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r144 = cpy_r_r143;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 673, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r143);
        goto CPyL191;
    }
    cpy_r_r145 = CPyStatics[768]; /* 'named_type' */
    cpy_r_r146 = CPyObject_GetAttr(cpy_r_r144, cpy_r_r145);
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 673, CPyStatic_attrs___globals);
        goto CPyL191;
    }
    cpy_r_r147 = CPyDef_checkmember___type_object_type(cpy_r_r142, cpy_r_r146);
    CPy_DECREF(cpy_r_r142);
    CPy_DECREF(cpy_r_r146);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 673, CPyStatic_attrs___globals);
        goto CPyL187;
    }
    cpy_r_converter_type = cpy_r_r147;
    goto CPyL120;
CPyL83: ;
    cpy_r_r148 = (PyObject *)CPyType_nodes___IndexExpr;
    cpy_r_r149 = (CPyPtr)&((PyObject *)cpy_r_converter_expr)->ob_type;
    cpy_r_r150 = *(PyObject * *)cpy_r_r149;
    cpy_r_r151 = cpy_r_r150 == cpy_r_r148;
    if (!cpy_r_r151) goto CPyL120;
    if (likely(Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r152 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 676, CPyStatic_attrs___globals, "mypy.nodes.IndexExpr", cpy_r_converter_expr);
        goto CPyL184;
    }
    cpy_r_r153 = ((mypy___nodes___IndexExprObject *)cpy_r_r152)->_analyzed;
    cpy_r_r154 = (PyObject *)CPyType_nodes___TypeApplication;
    cpy_r_r155 = (CPyPtr)&((PyObject *)cpy_r_r153)->ob_type;
    cpy_r_r156 = *(PyObject * *)cpy_r_r155;
    cpy_r_r157 = cpy_r_r156 == cpy_r_r154;
    if (!cpy_r_r157) goto CPyL120;
    if (likely(Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r158 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 677, CPyStatic_attrs___globals, "mypy.nodes.IndexExpr", cpy_r_converter_expr);
        goto CPyL184;
    }
    cpy_r_r159 = ((mypy___nodes___IndexExprObject *)cpy_r_r158)->_base;
    cpy_r_r160 = (PyObject *)CPyType_nodes___MemberExpr;
    cpy_r_r161 = (CPyPtr)&((PyObject *)cpy_r_r159)->ob_type;
    cpy_r_r162 = *(PyObject * *)cpy_r_r161;
    cpy_r_r163 = cpy_r_r162 == cpy_r_r160;
    if (!cpy_r_r163) goto CPyL89;
    cpy_r_r164 = cpy_r_r163;
    goto CPyL90;
CPyL89: ;
    cpy_r_r165 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r166 = (CPyPtr)&((PyObject *)cpy_r_r159)->ob_type;
    cpy_r_r167 = *(PyObject * *)cpy_r_r166;
    cpy_r_r168 = cpy_r_r167 == cpy_r_r165;
    cpy_r_r164 = cpy_r_r168;
CPyL90: ;
    if (!cpy_r_r164) goto CPyL92;
    cpy_r_r169 = cpy_r_r164;
    goto CPyL93;
CPyL92: ;
    cpy_r_r170 = (PyObject *)CPyType_nodes___RefExpr;
    cpy_r_r171 = (CPyPtr)&((PyObject *)cpy_r_r159)->ob_type;
    cpy_r_r172 = *(PyObject * *)cpy_r_r171;
    cpy_r_r173 = cpy_r_r172 == cpy_r_r170;
    cpy_r_r169 = cpy_r_r173;
CPyL93: ;
    if (!cpy_r_r169) goto CPyL120;
    if (likely(Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r174 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 678, CPyStatic_attrs___globals, "mypy.nodes.IndexExpr", cpy_r_converter_expr);
        goto CPyL184;
    }
    cpy_r_r175 = ((mypy___nodes___IndexExprObject *)cpy_r_r174)->_base;
    if (likely((Py_TYPE(cpy_r_r175) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r175) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r175) == CPyType_nodes___RefExpr)))
        cpy_r_r176 = cpy_r_r175;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 678, CPyStatic_attrs___globals, "mypy.nodes.RefExpr", cpy_r_r175);
        goto CPyL184;
    }
    cpy_r_r177 = ((mypy___nodes___RefExprObject *)cpy_r_r176)->_node;
    cpy_r_r178 = (PyObject *)CPyType_nodes___FakeInfo;
    cpy_r_r179 = (CPyPtr)&((PyObject *)cpy_r_r177)->ob_type;
    cpy_r_r180 = *(PyObject * *)cpy_r_r179;
    cpy_r_r181 = cpy_r_r180 == cpy_r_r178;
    if (!cpy_r_r181) goto CPyL98;
    cpy_r_r182 = cpy_r_r181;
    goto CPyL99;
CPyL98: ;
    cpy_r_r183 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r184 = (CPyPtr)&((PyObject *)cpy_r_r177)->ob_type;
    cpy_r_r185 = *(PyObject * *)cpy_r_r184;
    cpy_r_r186 = cpy_r_r185 == cpy_r_r183;
    cpy_r_r182 = cpy_r_r186;
CPyL99: ;
    if (cpy_r_r182) {
        goto CPyL192;
    } else
        goto CPyL120;
CPyL100: ;
    cpy_r_r187 = CPyStatics[9577]; /* ('type_object_type',) */
    cpy_r_r188 = CPyStatics[913]; /* 'mypy.checkmember' */
    cpy_r_r189 = CPyStatic_attrs___globals;
    cpy_r_r190 = CPyImport_ImportFromMany(cpy_r_r188, cpy_r_r187, cpy_r_r187, cpy_r_r189);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 681, CPyStatic_attrs___globals);
        goto CPyL187;
    }
    CPyModule_mypy___checkmember = cpy_r_r190;
    CPy_INCREF(CPyModule_mypy___checkmember);
    CPy_DECREF(cpy_r_r190);
    if (likely(Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r191 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 683, CPyStatic_attrs___globals, "mypy.nodes.IndexExpr", cpy_r_converter_expr);
        goto CPyL187;
    }
    cpy_r_r192 = ((mypy___nodes___IndexExprObject *)cpy_r_r191)->_base;
    if (likely((Py_TYPE(cpy_r_r192) == CPyType_nodes___MemberExpr) || (Py_TYPE(cpy_r_r192) == CPyType_nodes___NameExpr) || (Py_TYPE(cpy_r_r192) == CPyType_nodes___RefExpr)))
        cpy_r_r193 = cpy_r_r192;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 683, CPyStatic_attrs___globals, "mypy.nodes.RefExpr", cpy_r_r192);
        goto CPyL187;
    }
    cpy_r_r194 = ((mypy___nodes___RefExprObject *)cpy_r_r193)->_node;
    CPy_INCREF(cpy_r_r194);
    if (likely((Py_TYPE(cpy_r_r194) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r194) == CPyType_nodes___TypeInfo)))
        cpy_r_r195 = cpy_r_r194;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 683, CPyStatic_attrs___globals, "mypy.nodes.TypeInfo", cpy_r_r194);
        goto CPyL187;
    }
    cpy_r_r196 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 683, CPyStatic_attrs___globals);
        goto CPyL193;
    }
    if (likely(Py_TYPE(cpy_r_r196) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r197 = cpy_r_r196;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 683, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r196);
        goto CPyL193;
    }
    cpy_r_r198 = CPyStatics[768]; /* 'named_type' */
    cpy_r_r199 = CPyObject_GetAttr(cpy_r_r197, cpy_r_r198);
    CPy_DECREF(cpy_r_r197);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 683, CPyStatic_attrs___globals);
        goto CPyL193;
    }
    cpy_r_r200 = CPyDef_checkmember___type_object_type(cpy_r_r195, cpy_r_r199);
    CPy_DECREF(cpy_r_r195);
    CPy_DECREF(cpy_r_r199);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 683, CPyStatic_attrs___globals);
        goto CPyL187;
    }
    cpy_r_converter_type = cpy_r_r200;
    cpy_r_r201 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r202 = (CPyPtr)&((PyObject *)cpy_r_converter_type)->ob_type;
    cpy_r_r203 = *(PyObject * *)cpy_r_r202;
    cpy_r_r204 = cpy_r_r203 == cpy_r_r201;
    if (!cpy_r_r204) goto CPyL194;
    CPy_INCREF(cpy_r_converter_type);
    if (likely(Py_TYPE(cpy_r_converter_type) == CPyType_types___CallableType))
        cpy_r_r205 = cpy_r_converter_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 686, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_converter_type);
        goto CPyL184;
    }
    if (likely(Py_TYPE(cpy_r_converter_expr) == CPyType_nodes___IndexExpr))
        cpy_r_r206 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 687, CPyStatic_attrs___globals, "mypy.nodes.IndexExpr", cpy_r_converter_expr);
        goto CPyL195;
    }
    cpy_r_r207 = ((mypy___nodes___IndexExprObject *)cpy_r_r206)->_analyzed;
    if (likely(Py_TYPE(cpy_r_r207) == CPyType_nodes___TypeApplication))
        cpy_r_r208 = cpy_r_r207;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 687, CPyStatic_attrs___globals, "mypy.nodes.TypeApplication", cpy_r_r207);
        goto CPyL195;
    }
    cpy_r_r209 = ((mypy___nodes___TypeApplicationObject *)cpy_r_r208)->_types;
    CPy_INCREF(cpy_r_r209);
    cpy_r_r210 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 688, CPyStatic_attrs___globals);
        goto CPyL196;
    }
    if (likely(Py_TYPE(cpy_r_r210) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r211 = cpy_r_r210;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 688, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r210);
        goto CPyL196;
    }
    __tmp4712 = CPy_FindAttrOffset(CPyType_plugin___SemanticAnalyzerPluginInterface, ((mypy___plugin___SemanticAnalyzerPluginInterfaceObject *)cpy_r_r211)->vtable, 3);
    cpy_r_r212 = *(PyObject * *)((char *)cpy_r_r211 + __tmp4712);
    if (unlikely(cpy_r_r212 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'msg' of 'SemanticAnalyzerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r212);
    }
    CPy_DECREF(cpy_r_r211);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 688, CPyStatic_attrs___globals);
        goto CPyL196;
    }
CPyL115: ;
    cpy_r_r213 = CPyStatics[1176]; /* 'incompatible_typevar_value' */
    cpy_r_r214 = CPyObject_GetAttr(cpy_r_r212, cpy_r_r213);
    CPy_DECREF(cpy_r_r212);
    if (unlikely(cpy_r_r214 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 688, CPyStatic_attrs___globals);
        goto CPyL196;
    }
    if (likely(Py_TYPE(cpy_r_converter_type) == CPyType_types___CallableType))
        cpy_r_r215 = cpy_r_converter_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 689, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_converter_type);
        goto CPyL197;
    }
    cpy_r_r216 = 2;
    cpy_r_r217 = CPyDef_applytype___apply_generic_arguments(cpy_r_r205, cpy_r_r209, cpy_r_r214, cpy_r_r215, cpy_r_r216);
    CPy_DECREF(cpy_r_r205);
    CPy_DECREF(cpy_r_r209);
    CPy_DECREF(cpy_r_r214);
    CPy_DECREF(cpy_r_r215);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 685, CPyStatic_attrs___globals);
        goto CPyL187;
    }
    cpy_r_converter_type = cpy_r_r217;
    goto CPyL120;
CPyL119: ;
    cpy_r_r218 = Py_None;
    CPy_INCREF(cpy_r_r218);
    cpy_r_converter_type = cpy_r_r218;
CPyL120: ;
    cpy_r_r219 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r220 = (CPyPtr)&((PyObject *)cpy_r_converter_expr)->ob_type;
    cpy_r_r221 = *(PyObject * *)cpy_r_r220;
    cpy_r_r222 = cpy_r_r221 == cpy_r_r219;
    if (cpy_r_r222) {
        goto CPyL198;
    } else
        goto CPyL123;
CPyL121: ;
    cpy_r_r223 = NULL;
    cpy_r_r224 = NULL;
    cpy_r_r225 = CPY_INT_TAG;
    cpy_r_r226 = CPY_INT_TAG;
    cpy_r_r227 = CPyDef_types___AnyType(2, cpy_r_r223, cpy_r_r224, cpy_r_r225, cpy_r_r226);
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 696, CPyStatic_attrs___globals);
        goto CPyL181;
    }
    CPy_DECREF(((mypy___plugins___attrs___ConverterObject *)cpy_r_converter_info)->_init_type);
    ((mypy___plugins___attrs___ConverterObject *)cpy_r_converter_info)->_init_type = cpy_r_r227;
    return cpy_r_converter_info;
CPyL123: ;
    cpy_r_r229 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r230 = cpy_r_converter_type != cpy_r_r229;
    if (cpy_r_r230) {
        goto CPyL199;
    } else
        goto CPyL200;
CPyL124: ;
    cpy_r_r231 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 701, CPyStatic_attrs___globals);
        goto CPyL187;
    }
    if (likely(Py_TYPE(cpy_r_r231) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r232 = cpy_r_r231;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 701, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r231);
        goto CPyL187;
    }
    cpy_r_r233 = CPyStatics[4412]; /* ('Unsupported converter, only named functions, types '
                                      'and lambdas are currently supported') */
    if (likely(cpy_r_converter_expr != Py_None))
        cpy_r_r234 = cpy_r_converter_expr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 704, CPyStatic_attrs___globals, "mypy.nodes.Expression", cpy_r_converter_expr);
        goto CPyL201;
    }
    cpy_r_r235 = 2;
    cpy_r_r236 = 2;
    cpy_r_r237 = NULL;
    cpy_r_r238 = CPY_GET_METHOD_TRAIT(cpy_r_r232, CPyType_plugin___SemanticAnalyzerPluginInterface, 6, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, char, char, PyObject *))(cpy_r_r232, cpy_r_r233, cpy_r_r234, cpy_r_r235, cpy_r_r236, cpy_r_r237); /* fail */
    CPy_DECREF(cpy_r_r234);
    CPy_DECREF(cpy_r_r232);
    if (unlikely(cpy_r_r238 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 701, CPyStatic_attrs___globals);
        goto CPyL181;
    }
    cpy_r_r239 = NULL;
    cpy_r_r240 = NULL;
    cpy_r_r241 = CPY_INT_TAG;
    cpy_r_r242 = CPY_INT_TAG;
    cpy_r_r243 = CPyDef_types___AnyType(10, cpy_r_r239, cpy_r_r240, cpy_r_r241, cpy_r_r242);
    if (unlikely(cpy_r_r243 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 706, CPyStatic_attrs___globals);
        goto CPyL181;
    }
    CPy_DECREF(((mypy___plugins___attrs___ConverterObject *)cpy_r_converter_info)->_init_type);
    ((mypy___plugins___attrs___ConverterObject *)cpy_r_converter_info)->_init_type = cpy_r_r243;
    return cpy_r_converter_info;
CPyL130: ;
    if (likely(cpy_r_converter_type != Py_None))
        cpy_r_r245 = cpy_r_converter_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 709, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_converter_type);
        goto CPyL181;
    }
    cpy_r_r246 = CPyDef_types___get_proper_type(cpy_r_r245);
    CPy_DECREF(cpy_r_r245);
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 709, CPyStatic_attrs___globals);
        goto CPyL181;
    }
    if (likely(cpy_r_r246 != Py_None))
        cpy_r_r247 = cpy_r_r246;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 709, CPyStatic_attrs___globals, "mypy.types.ProperType", cpy_r_r246);
        goto CPyL181;
    }
    cpy_r_converter_type = cpy_r_r247;
    cpy_r_r248 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r249 = (CPyPtr)&((PyObject *)cpy_r_converter_type)->ob_type;
    cpy_r_r250 = *(PyObject * *)cpy_r_r249;
    cpy_r_r251 = cpy_r_r250 == cpy_r_r248;
    if (!cpy_r_r251) goto CPyL142;
    if (likely(Py_TYPE(cpy_r_converter_type) == CPyType_types___CallableType))
        cpy_r_r252 = cpy_r_converter_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 710, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_converter_type);
        goto CPyL202;
    }
    cpy_r_r253 = ((mypy___types___CallableTypeObject *)cpy_r_r252)->_arg_types;
    CPy_INCREF(cpy_r_r253);
    cpy_r_r254 = (CPyPtr)&((PyVarObject *)cpy_r_r253)->ob_size;
    cpy_r_r255 = *(int64_t *)cpy_r_r254;
    CPy_DECREF(cpy_r_r253);
    cpy_r_r256 = cpy_r_r255 << 1;
    cpy_r_r257 = cpy_r_r256 != 0;
    if (!cpy_r_r257) goto CPyL142;
    if (likely(Py_TYPE(cpy_r_converter_type) == CPyType_types___CallableType))
        cpy_r_r258 = cpy_r_converter_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 711, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_converter_type);
        goto CPyL202;
    }
    cpy_r_r259 = ((mypy___types___CallableTypeObject *)cpy_r_r258)->_arg_types;
    cpy_r_r260 = CPyList_GetItemShort(cpy_r_r259, 0);
    if (unlikely(cpy_r_r260 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 711, CPyStatic_attrs___globals);
        goto CPyL202;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r260, CPyType_types___Type)))
        cpy_r_r261 = cpy_r_r260;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 711, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_r260);
        goto CPyL202;
    }
    CPy_DECREF(((mypy___plugins___attrs___ConverterObject *)cpy_r_converter_info)->_init_type);
    ((mypy___plugins___attrs___ConverterObject *)cpy_r_converter_info)->_init_type = cpy_r_r261;
    if (cpy_r_is_attr_converters_optional) goto CPyL203;
    if (likely(Py_TYPE(cpy_r_converter_type) == CPyType_types___CallableType))
        cpy_r_r263 = cpy_r_converter_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 713, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_converter_type);
        goto CPyL202;
    }
    cpy_r_r264 = ((mypy___types___CallableTypeObject *)cpy_r_r263)->_ret_type;
    CPy_INCREF(cpy_r_r264);
    CPy_DECREF(cpy_r_converter_type);
    CPy_DECREF(((mypy___plugins___attrs___ConverterObject *)cpy_r_converter_info)->_ret_type);
    ((mypy___plugins___attrs___ConverterObject *)cpy_r_converter_info)->_ret_type = cpy_r_r264;
    goto CPyL172;
CPyL142: ;
    cpy_r_r266 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r267 = (CPyPtr)&((PyObject *)cpy_r_converter_type)->ob_type;
    cpy_r_r268 = *(PyObject * *)cpy_r_r267;
    cpy_r_r269 = cpy_r_r268 == cpy_r_r266;
    if (!cpy_r_r269) goto CPyL203;
    cpy_r_r270 = PyList_New(0);
    if (unlikely(cpy_r_r270 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 715, CPyStatic_attrs___globals);
        goto CPyL202;
    }
    cpy_r_types = cpy_r_r270;
    if (likely(Py_TYPE(cpy_r_converter_type) == CPyType_types___Overloaded))
        cpy_r_r271 = cpy_r_converter_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 716, CPyStatic_attrs___globals, "mypy.types.Overloaded", cpy_r_converter_type);
        goto CPyL204;
    }
    cpy_r_r272 = CPY_GET_ATTR(cpy_r_r271, CPyType_types___Overloaded, 22, mypy___types___OverloadedObject, PyObject *); /* items */
    CPy_DECREF(cpy_r_r271);
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 716, CPyStatic_attrs___globals);
        goto CPyL204;
    }
CPyL146: ;
    cpy_r_r273 = 0;
CPyL147: ;
    cpy_r_r274 = (CPyPtr)&((PyVarObject *)cpy_r_r272)->ob_size;
    cpy_r_r275 = *(int64_t *)cpy_r_r274;
    cpy_r_r276 = cpy_r_r275 << 1;
    cpy_r_r277 = (Py_ssize_t)cpy_r_r273 < (Py_ssize_t)cpy_r_r276;
    if (!cpy_r_r277) goto CPyL205;
    cpy_r_r278 = CPyList_GetItemUnsafe(cpy_r_r272, cpy_r_r273);
    if (likely(Py_TYPE(cpy_r_r278) == CPyType_types___CallableType))
        cpy_r_r279 = cpy_r_r278;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 716, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_r278);
        goto CPyL206;
    }
    cpy_r_item = cpy_r_r279;
    cpy_r_r280 = ((mypy___types___CallableTypeObject *)cpy_r_item)->_arg_types;
    cpy_r_r281 = (CPyPtr)&((PyVarObject *)cpy_r_r280)->ob_size;
    cpy_r_r282 = *(int64_t *)cpy_r_r281;
    cpy_r_r283 = cpy_r_r282 << 1;
    cpy_r_num_arg_types = cpy_r_r283;
    cpy_r_r284 = cpy_r_num_arg_types != 0;
    if (!cpy_r_r284) goto CPyL207;
    cpy_r_r285 = cpy_r_num_arg_types & 1;
    cpy_r_r286 = cpy_r_r285 != 0;
    if (!cpy_r_r286) goto CPyL152;
    cpy_r_r287 = CPyTagged_IsLt_(2, cpy_r_num_arg_types);
    CPyTagged_DECREF(cpy_r_num_arg_types);
    if (cpy_r_r287) {
        goto CPyL153;
    } else
        goto CPyL165;
CPyL152: ;
    cpy_r_r288 = (Py_ssize_t)cpy_r_num_arg_types > (Py_ssize_t)2;
    CPyTagged_DECREF(cpy_r_num_arg_types);
    if (!cpy_r_r288) goto CPyL165;
CPyL153: ;
    cpy_r_r289 = 0;
    cpy_r_r290 = ((mypy___types___CallableTypeObject *)cpy_r_item)->_arg_kinds;
    CPy_INCREF(cpy_r_r290);
    cpy_r_r291 = CPyList_GetSlice(cpy_r_r290, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r290);
    if (unlikely(cpy_r_r291 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 721, CPyStatic_attrs___globals);
        goto CPyL208;
    }
    if (likely(PyList_Check(cpy_r_r291)))
        cpy_r_r292 = cpy_r_r291;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 721, CPyStatic_attrs___globals, "list", cpy_r_r291);
        goto CPyL208;
    }
    cpy_r_r293 = 0;
CPyL156: ;
    cpy_r_r294 = (CPyPtr)&((PyVarObject *)cpy_r_r292)->ob_size;
    cpy_r_r295 = *(int64_t *)cpy_r_r294;
    cpy_r_r296 = cpy_r_r295 << 1;
    cpy_r_r297 = (Py_ssize_t)cpy_r_r293 < (Py_ssize_t)cpy_r_r296;
    if (!cpy_r_r297) goto CPyL209;
    cpy_r_r298 = CPyList_GetItemUnsafe(cpy_r_r292, cpy_r_r293);
    if (likely(Py_TYPE(cpy_r_r298) == CPyType_nodes___ArgKind))
        cpy_r_r299 = cpy_r_r298;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 721, CPyStatic_attrs___globals, "mypy.nodes.ArgKind", cpy_r_r298);
        goto CPyL210;
    }
    cpy_r_kind = cpy_r_r299;
    cpy_r_r300 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r300 == NULL)) {
        goto CPyL211;
    } else
        goto CPyL161;
CPyL159: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r301 = 0;
    if (unlikely(!cpy_r_r301)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 721, CPyStatic_attrs___globals);
        goto CPyL180;
    }
    CPy_Unreachable();
CPyL161: ;
    cpy_r_r302 = cpy_r_kind == cpy_r_r300;
    CPy_DECREF(cpy_r_kind);
    if (cpy_r_r302) {
        goto CPyL212;
    } else
        goto CPyL163;
CPyL162: ;
    cpy_r_r289 = 1;
    goto CPyL164;
CPyL163: ;
    cpy_r_r303 = cpy_r_r293 + 2;
    cpy_r_r293 = cpy_r_r303;
    goto CPyL156;
CPyL164: ;
    if (cpy_r_r289) goto CPyL213;
CPyL165: ;
    cpy_r_r304 = ((mypy___types___CallableTypeObject *)cpy_r_item)->_arg_types;
    cpy_r_r305 = CPyList_GetItemShort(cpy_r_r304, 0);
    if (unlikely(cpy_r_r305 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 723, CPyStatic_attrs___globals);
        goto CPyL208;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r305, CPyType_types___Type)))
        cpy_r_r306 = cpy_r_r305;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 723, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_r305);
        goto CPyL208;
    }
    CPy_DECREF(cpy_r_item);
    cpy_r_r307 = PyList_Append(cpy_r_types, cpy_r_r306);
    CPy_DECREF(cpy_r_r306);
    cpy_r_r308 = cpy_r_r307 >= 0;
    if (unlikely(!cpy_r_r308)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 723, CPyStatic_attrs___globals);
        goto CPyL206;
    }
CPyL168: ;
    cpy_r_r309 = cpy_r_r273 + 2;
    cpy_r_r273 = cpy_r_r309;
    goto CPyL147;
CPyL169: ;
    cpy_r_r310 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r311 = *(int64_t *)cpy_r_r310;
    cpy_r_r312 = cpy_r_r311 << 1;
    cpy_r_r313 = cpy_r_r312 != 0;
    if (!cpy_r_r313) goto CPyL214;
    cpy_r_r314 = CPY_INT_TAG;
    cpy_r_r315 = CPY_INT_TAG;
    cpy_r_r316 = 2;
    cpy_r_r317 = 2;
    cpy_r_r318 = CPyDef_typeops___make_simplified_union(cpy_r_types, cpy_r_r314, cpy_r_r315, cpy_r_r316, cpy_r_r317);
    CPy_DECREF(cpy_r_types);
    if (unlikely(cpy_r_r318 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 726, CPyStatic_attrs___globals);
        goto CPyL181;
    }
    CPy_DECREF(((mypy___plugins___attrs___ConverterObject *)cpy_r_converter_info)->_init_type);
    ((mypy___plugins___attrs___ConverterObject *)cpy_r_converter_info)->_init_type = cpy_r_r318;
CPyL172: ;
    if (!cpy_r_is_attr_converters_optional) goto CPyL179;
    cpy_r_r320 = ((mypy___plugins___attrs___ConverterObject *)cpy_r_converter_info)->_init_type;
    CPy_INCREF(cpy_r_r320);
    cpy_r_r321 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r322 = cpy_r_r320 != cpy_r_r321;
    CPy_DECREF(cpy_r_r320);
    if (!cpy_r_r322) goto CPyL179;
    cpy_r_r323 = ((mypy___plugins___attrs___ConverterObject *)cpy_r_converter_info)->_init_type;
    CPy_INCREF(cpy_r_r323);
    if (likely(cpy_r_r323 != Py_None))
        cpy_r_r324 = cpy_r_r323;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_converter", 731, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_r323);
        goto CPyL181;
    }
    cpy_r_r325 = CPY_INT_TAG;
    cpy_r_r326 = CPY_INT_TAG;
    cpy_r_r327 = CPyDef_types___NoneType(cpy_r_r325, cpy_r_r326);
    if (unlikely(cpy_r_r327 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 731, CPyStatic_attrs___globals);
        goto CPyL215;
    }
    cpy_r_r328 = PyList_New(2);
    if (unlikely(cpy_r_r328 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 731, CPyStatic_attrs___globals);
        goto CPyL216;
    }
    cpy_r_r329 = (CPyPtr)&((PyListObject *)cpy_r_r328)->ob_item;
    cpy_r_r330 = *(CPyPtr *)cpy_r_r329;
    *(PyObject * *)cpy_r_r330 = cpy_r_r324;
    cpy_r_r331 = cpy_r_r330 + 8;
    *(PyObject * *)cpy_r_r331 = cpy_r_r327;
    cpy_r_r332 = CPY_INT_TAG;
    cpy_r_r333 = CPY_INT_TAG;
    cpy_r_r334 = CPyDef_types___UnionType___make_union(cpy_r_r328, cpy_r_r332, cpy_r_r333);
    CPy_DECREF(cpy_r_r328);
    if (unlikely(cpy_r_r334 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 731, CPyStatic_attrs___globals);
        goto CPyL181;
    }
    CPy_DECREF(((mypy___plugins___attrs___ConverterObject *)cpy_r_converter_info)->_init_type);
    ((mypy___plugins___attrs___ConverterObject *)cpy_r_converter_info)->_init_type = cpy_r_r334;
CPyL179: ;
    return cpy_r_converter_info;
CPyL180: ;
    cpy_r_r336 = NULL;
    return cpy_r_r336;
CPyL181: ;
    CPy_DecRef(cpy_r_converter_info);
    goto CPyL180;
CPyL182: ;
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_r29);
    goto CPyL16;
CPyL183: ;
    CPy_INCREF(cpy_r_converter_expr);
    goto CPyL32;
CPyL184: ;
    CPy_DecRef(cpy_r_converter_expr);
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_converter_type);
    goto CPyL180;
CPyL185: ;
    CPy_DECREF(cpy_r_r68);
    goto CPyL83;
CPyL186: ;
    CPy_DECREF(cpy_r_converter_type);
    goto CPyL46;
CPyL187: ;
    CPy_DecRef(cpy_r_converter_expr);
    CPy_DecRef(cpy_r_converter_info);
    goto CPyL180;
CPyL188: ;
    CPy_DECREF(cpy_r_converter_expr);
    goto CPyL59;
CPyL189: ;
    CPy_DECREF(cpy_r_converter_type);
    goto CPyL67;
CPyL190: ;
    CPy_DECREF(cpy_r_converter_type);
    goto CPyL75;
CPyL191: ;
    CPy_DecRef(cpy_r_converter_expr);
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_r142);
    goto CPyL180;
CPyL192: ;
    CPy_DECREF(cpy_r_converter_type);
    goto CPyL100;
CPyL193: ;
    CPy_DecRef(cpy_r_converter_expr);
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_r195);
    goto CPyL180;
CPyL194: ;
    CPy_DECREF(cpy_r_converter_type);
    goto CPyL119;
CPyL195: ;
    CPy_DecRef(cpy_r_converter_expr);
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_converter_type);
    CPy_DecRef(cpy_r_r205);
    goto CPyL180;
CPyL196: ;
    CPy_DecRef(cpy_r_converter_expr);
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_converter_type);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r209);
    goto CPyL180;
CPyL197: ;
    CPy_DecRef(cpy_r_converter_expr);
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r209);
    CPy_DecRef(cpy_r_r214);
    goto CPyL180;
CPyL198: ;
    CPy_DECREF(cpy_r_converter_expr);
    CPy_DECREF(cpy_r_converter_type);
    goto CPyL121;
CPyL199: ;
    CPy_DECREF(cpy_r_converter_expr);
    goto CPyL130;
CPyL200: ;
    CPy_DECREF(cpy_r_converter_type);
    goto CPyL124;
CPyL201: ;
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_r232);
    goto CPyL180;
CPyL202: ;
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_converter_type);
    goto CPyL180;
CPyL203: ;
    CPy_DECREF(cpy_r_converter_type);
    goto CPyL172;
CPyL204: ;
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_types);
    goto CPyL180;
CPyL205: ;
    CPy_DECREF(cpy_r_r272);
    goto CPyL169;
CPyL206: ;
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r272);
    goto CPyL180;
CPyL207: ;
    CPy_DECREF(cpy_r_item);
    CPyTagged_DECREF(cpy_r_num_arg_types);
    goto CPyL168;
CPyL208: ;
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r272);
    CPy_DecRef(cpy_r_item);
    goto CPyL180;
CPyL209: ;
    CPy_DECREF(cpy_r_r292);
    goto CPyL164;
CPyL210: ;
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r272);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_r292);
    goto CPyL180;
CPyL211: ;
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r272);
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_r292);
    CPy_DecRef(cpy_r_kind);
    goto CPyL159;
CPyL212: ;
    CPy_DECREF(cpy_r_r292);
    goto CPyL162;
CPyL213: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL168;
CPyL214: ;
    CPy_DECREF(cpy_r_types);
    goto CPyL172;
CPyL215: ;
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_r324);
    goto CPyL180;
CPyL216: ;
    CPy_DecRef(cpy_r_converter_info);
    CPy_DecRef(cpy_r_r324);
    CPy_DecRef(cpy_r_r327);
    goto CPyL180;
}

PyObject *CPyPy_attrs____parse_converter(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "converter_expr", 0};
    static CPyArg_Parser parser = {"OO:_parse_converter", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_converter_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_converter_expr)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_converter_expr;
    if (PyObject_TypeCheck(obj_converter_expr, CPyType_nodes___Expression))
        arg_converter_expr = obj_converter_expr;
    else {
        arg_converter_expr = NULL;
    }
    if (arg_converter_expr != NULL) goto __LL4713;
    if (obj_converter_expr == Py_None)
        arg_converter_expr = obj_converter_expr;
    else {
        arg_converter_expr = NULL;
    }
    if (arg_converter_expr != NULL) goto __LL4713;
    CPy_TypeError("mypy.nodes.Expression or None", obj_converter_expr); 
    goto fail;
__LL4713: ;
    PyObject *retval = CPyDef_attrs____parse_converter(arg_ctx, arg_converter_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_converter", 636, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs___is_valid_overloaded_converter(PyObject *cpy_r_defn) {
    char cpy_r_r0;
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
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
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
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    cpy_r_r0 = 1;
    cpy_r_r1 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_defn)->_items;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = 0;
CPyL1: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL15;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (Py_TYPE(cpy_r_r7) == CPyType_nodes___FuncDef)
        cpy_r_r8 = cpy_r_r7;
    else {
        cpy_r_r8 = NULL;
    }
    if (cpy_r_r8 != NULL) goto __LL4714;
    if (Py_TYPE(cpy_r_r7) == CPyType_nodes___Decorator)
        cpy_r_r8 = cpy_r_r7;
    else {
        cpy_r_r8 = NULL;
    }
    if (cpy_r_r8 != NULL) goto __LL4714;
    CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "is_valid_overloaded_converter", 737, CPyStatic_attrs___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r7);
    goto CPyL16;
__LL4714: ;
    cpy_r_item = cpy_r_r8;
    cpy_r_r9 = (PyObject *)CPyType_nodes___Decorator;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    cpy_r_r13 = cpy_r_r12 ^ 1;
    if (cpy_r_r13) {
        goto CPyL17;
    } else
        goto CPyL5;
CPyL4: ;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL10;
CPyL5: ;
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___Decorator))
        cpy_r_r15 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "is_valid_overloaded_converter", 738, CPyStatic_attrs___globals, "mypy.nodes.Decorator", cpy_r_item);
        goto CPyL18;
    }
    cpy_r_r16 = ((mypy___nodes___DecoratorObject *)cpy_r_r15)->_func;
    cpy_r_r17 = ((mypy___nodes___FuncDefObject *)cpy_r_r16)->_type;
    cpy_r_r18 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_r17)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL8;
    cpy_r_r22 = cpy_r_r21;
    goto CPyL9;
CPyL8: ;
    cpy_r_r23 = (PyObject *)CPyType_types___Overloaded;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r17)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    cpy_r_r22 = cpy_r_r26;
CPyL9: ;
    CPy_DECREF(cpy_r_item);
    cpy_r_r14 = cpy_r_r22;
CPyL10: ;
    cpy_r_r27 = cpy_r_r14 ^ 1;
    if (cpy_r_r27) {
        goto CPyL19;
    } else
        goto CPyL12;
CPyL11: ;
    cpy_r_r0 = 0;
    goto CPyL13;
CPyL12: ;
    cpy_r_r28 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r28;
    goto CPyL1;
CPyL13: ;
    return cpy_r_r0;
CPyL14: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL15: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL14;
CPyL17: ;
    CPy_DECREF(cpy_r_item);
    goto CPyL4;
CPyL18: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_item);
    goto CPyL14;
CPyL19: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL11;
}

PyObject *CPyPy_attrs___is_valid_overloaded_converter(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"defn", 0};
    static CPyArg_Parser parser = {"O:is_valid_overloaded_converter", kwlist, 0};
    PyObject *obj_defn;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_defn)) {
        return NULL;
    }
    PyObject *arg_defn;
    if (likely(Py_TYPE(obj_defn) == CPyType_nodes___OverloadedFuncDef))
        arg_defn = obj_defn;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_defn); 
        goto fail;
    }
    char retval = CPyDef_attrs___is_valid_overloaded_converter(arg_defn);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "is_valid_overloaded_converter", 736, CPyStatic_attrs___globals);
    return NULL;
}

tuple_T2OO CPyDef_attrs____parse_assignments(PyObject *cpy_r_lvalue, PyObject *cpy_r_stmt) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_lvalues;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_rvalues;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
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
    PyObject *cpy_r_item;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
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
    CPyPtr cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    CPyPtr cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
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
    CPyPtr cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyPtr cpy_r_r72;
    CPyPtr cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyPtr cpy_r_r76;
    CPyPtr cpy_r_r77;
    tuple_T2OO cpy_r_r78;
    tuple_T2OO cpy_r_r79;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_assignments", 747, CPyStatic_attrs___globals);
        goto CPyL43;
    }
    cpy_r_lvalues = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_assignments", 748, CPyStatic_attrs___globals);
        goto CPyL44;
    }
    cpy_r_rvalues = cpy_r_r1;
    cpy_r_r2 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r3 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r4 = *(PyObject * *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 == cpy_r_r2;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL5;
CPyL4: ;
    cpy_r_r7 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    cpy_r_r6 = cpy_r_r10;
CPyL5: ;
    if (!cpy_r_r6) goto CPyL37;
    cpy_r_r11 = 1;
    CPy_INCREF(cpy_r_lvalue);
    if (Py_TYPE(cpy_r_lvalue) == CPyType_nodes___TupleExpr)
        cpy_r_r12 = cpy_r_lvalue;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL4715;
    if (Py_TYPE(cpy_r_lvalue) == CPyType_nodes___ListExpr)
        cpy_r_r12 = cpy_r_lvalue;
    else {
        cpy_r_r12 = NULL;
    }
    if (cpy_r_r12 != NULL) goto __LL4715;
    CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_assignments", 750, CPyStatic_attrs___globals, "union[mypy.nodes.TupleExpr, mypy.nodes.ListExpr]", cpy_r_lvalue);
    goto CPyL45;
__LL4715: ;
    cpy_r_r13 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r14 = (CPyPtr)&((PyObject *)cpy_r_r12)->ob_type;
    cpy_r_r15 = *(PyObject * *)cpy_r_r14;
    cpy_r_r16 = cpy_r_r15 == cpy_r_r13;
    if (!cpy_r_r16) goto CPyL10;
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_nodes___TupleExpr))
        cpy_r_r17 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_assignments", 750, CPyStatic_attrs___globals, "mypy.nodes.TupleExpr", cpy_r_r12);
        goto CPyL45;
    }
    cpy_r_r18 = ((mypy___nodes___TupleExprObject *)cpy_r_r17)->_items;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18;
    goto CPyL12;
CPyL10: ;
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_nodes___ListExpr))
        cpy_r_r20 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_assignments", 750, CPyStatic_attrs___globals, "mypy.nodes.ListExpr", cpy_r_r12);
        goto CPyL45;
    }
    cpy_r_r21 = ((mypy___nodes___ListExprObject *)cpy_r_r20)->_items;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r19 = cpy_r_r21;
CPyL12: ;
    cpy_r_r22 = 0;
CPyL13: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r19)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    cpy_r_r25 = cpy_r_r24 << 1;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r25;
    if (!cpy_r_r26) goto CPyL46;
    cpy_r_r27 = CPyList_GetItemUnsafe(cpy_r_r19, cpy_r_r22);
    if (likely(PyObject_TypeCheck(cpy_r_r27, CPyType_nodes___Expression)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_assignments", 750, CPyStatic_attrs___globals, "mypy.nodes.Expression", cpy_r_r27);
        goto CPyL47;
    }
    cpy_r_item = cpy_r_r28;
    cpy_r_r29 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r30 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r31 = *(PyObject * *)cpy_r_r30;
    CPy_DECREF(cpy_r_item);
    cpy_r_r32 = cpy_r_r31 == cpy_r_r29;
    cpy_r_r33 = cpy_r_r32 ^ 1;
    if (cpy_r_r33) {
        goto CPyL48;
    } else
        goto CPyL17;
CPyL16: ;
    cpy_r_r11 = 0;
    goto CPyL18;
CPyL17: ;
    cpy_r_r34 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r34;
    goto CPyL13;
CPyL18: ;
    if (cpy_r_r11) {
        goto CPyL49;
    } else
        goto CPyL26;
CPyL19: ;
    CPy_INCREF(cpy_r_lvalue);
    if (Py_TYPE(cpy_r_lvalue) == CPyType_nodes___TupleExpr)
        cpy_r_r35 = cpy_r_lvalue;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL4716;
    if (Py_TYPE(cpy_r_lvalue) == CPyType_nodes___ListExpr)
        cpy_r_r35 = cpy_r_lvalue;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL4716;
    CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_assignments", 751, CPyStatic_attrs___globals, "union[mypy.nodes.TupleExpr, mypy.nodes.ListExpr]", cpy_r_lvalue);
    goto CPyL50;
__LL4716: ;
    cpy_r_r36 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r37 = (CPyPtr)&((PyObject *)cpy_r_r35)->ob_type;
    cpy_r_r38 = *(PyObject * *)cpy_r_r37;
    cpy_r_r39 = cpy_r_r38 == cpy_r_r36;
    if (!cpy_r_r39) goto CPyL23;
    if (likely(Py_TYPE(cpy_r_r35) == CPyType_nodes___TupleExpr))
        cpy_r_r40 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_assignments", 751, CPyStatic_attrs___globals, "mypy.nodes.TupleExpr", cpy_r_r35);
        goto CPyL50;
    }
    cpy_r_r41 = ((mypy___nodes___TupleExprObject *)cpy_r_r40)->_items;
    CPy_INCREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41;
    goto CPyL25;
CPyL23: ;
    if (likely(Py_TYPE(cpy_r_r35) == CPyType_nodes___ListExpr))
        cpy_r_r43 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_assignments", 751, CPyStatic_attrs___globals, "mypy.nodes.ListExpr", cpy_r_r35);
        goto CPyL50;
    }
    cpy_r_r44 = ((mypy___nodes___ListExprObject *)cpy_r_r43)->_items;
    CPy_INCREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r42 = cpy_r_r44;
CPyL25: ;
    cpy_r_lvalues = cpy_r_r42;
CPyL26: ;
    cpy_r_r45 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    cpy_r_r46 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r47 = (CPyPtr)&((PyObject *)cpy_r_r45)->ob_type;
    cpy_r_r48 = *(PyObject * *)cpy_r_r47;
    cpy_r_r49 = cpy_r_r48 == cpy_r_r46;
    if (!cpy_r_r49) goto CPyL28;
    cpy_r_r50 = cpy_r_r49;
    goto CPyL29;
CPyL28: ;
    cpy_r_r51 = (PyObject *)CPyType_nodes___ListExpr;
    cpy_r_r52 = (CPyPtr)&((PyObject *)cpy_r_r45)->ob_type;
    cpy_r_r53 = *(PyObject * *)cpy_r_r52;
    cpy_r_r54 = cpy_r_r53 == cpy_r_r51;
    cpy_r_r50 = cpy_r_r54;
CPyL29: ;
    if (cpy_r_r50) {
        goto CPyL51;
    } else
        goto CPyL42;
CPyL30: ;
    cpy_r_r55 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r55);
    if (Py_TYPE(cpy_r_r55) == CPyType_nodes___TupleExpr)
        cpy_r_r56 = cpy_r_r55;
    else {
        cpy_r_r56 = NULL;
    }
    if (cpy_r_r56 != NULL) goto __LL4717;
    if (Py_TYPE(cpy_r_r55) == CPyType_nodes___ListExpr)
        cpy_r_r56 = cpy_r_r55;
    else {
        cpy_r_r56 = NULL;
    }
    if (cpy_r_r56 != NULL) goto __LL4717;
    CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_assignments", 753, CPyStatic_attrs___globals, "union[mypy.nodes.TupleExpr, mypy.nodes.ListExpr]", cpy_r_r55);
    goto CPyL44;
__LL4717: ;
    cpy_r_r57 = (PyObject *)CPyType_nodes___TupleExpr;
    cpy_r_r58 = (CPyPtr)&((PyObject *)cpy_r_r56)->ob_type;
    cpy_r_r59 = *(PyObject * *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 == cpy_r_r57;
    if (!cpy_r_r60) goto CPyL34;
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_nodes___TupleExpr))
        cpy_r_r61 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_assignments", 753, CPyStatic_attrs___globals, "mypy.nodes.TupleExpr", cpy_r_r56);
        goto CPyL44;
    }
    cpy_r_r62 = ((mypy___nodes___TupleExprObject *)cpy_r_r61)->_items;
    CPy_INCREF(cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r62;
    goto CPyL36;
CPyL34: ;
    if (likely(Py_TYPE(cpy_r_r56) == CPyType_nodes___ListExpr))
        cpy_r_r64 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_assignments", 753, CPyStatic_attrs___globals, "mypy.nodes.ListExpr", cpy_r_r56);
        goto CPyL44;
    }
    cpy_r_r65 = ((mypy___nodes___ListExprObject *)cpy_r_r64)->_items;
    CPy_INCREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r63 = cpy_r_r65;
CPyL36: ;
    cpy_r_rvalues = cpy_r_r63;
    goto CPyL42;
CPyL37: ;
    cpy_r_r66 = (PyObject *)CPyType_nodes___NameExpr;
    cpy_r_r67 = (CPyPtr)&((PyObject *)cpy_r_lvalue)->ob_type;
    cpy_r_r68 = *(PyObject * *)cpy_r_r67;
    cpy_r_r69 = cpy_r_r68 == cpy_r_r66;
    if (cpy_r_r69) {
        goto CPyL52;
    } else
        goto CPyL42;
CPyL38: ;
    CPy_INCREF(cpy_r_lvalue);
    if (likely(Py_TYPE(cpy_r_lvalue) == CPyType_nodes___NameExpr))
        cpy_r_r70 = cpy_r_lvalue;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_parse_assignments", 755, CPyStatic_attrs___globals, "mypy.nodes.NameExpr", cpy_r_lvalue);
        goto CPyL43;
    }
    cpy_r_r71 = PyList_New(1);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_assignments", 755, CPyStatic_attrs___globals);
        goto CPyL53;
    }
    cpy_r_r72 = (CPyPtr)&((PyListObject *)cpy_r_r71)->ob_item;
    cpy_r_r73 = *(CPyPtr *)cpy_r_r72;
    *(PyObject * *)cpy_r_r73 = cpy_r_r70;
    cpy_r_lvalues = cpy_r_r71;
    cpy_r_r74 = ((mypy___nodes___AssignmentStmtObject *)cpy_r_stmt)->_rvalue;
    CPy_INCREF(cpy_r_r74);
    cpy_r_r75 = PyList_New(1);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_assignments", 756, CPyStatic_attrs___globals);
        goto CPyL54;
    }
    cpy_r_r76 = (CPyPtr)&((PyListObject *)cpy_r_r75)->ob_item;
    cpy_r_r77 = *(CPyPtr *)cpy_r_r76;
    *(PyObject * *)cpy_r_r77 = cpy_r_r74;
    cpy_r_rvalues = cpy_r_r75;
CPyL42: ;
    cpy_r_r78.f0 = cpy_r_lvalues;
    cpy_r_r78.f1 = cpy_r_rvalues;
    CPy_INCREF(cpy_r_r78.f0);
    CPy_INCREF(cpy_r_r78.f1);
    CPy_DECREF(cpy_r_lvalues);
    CPy_DECREF(cpy_r_rvalues);
    return cpy_r_r78;
CPyL43: ;
    tuple_T2OO __tmp4718 = { NULL, NULL };
    cpy_r_r79 = __tmp4718;
    return cpy_r_r79;
CPyL44: ;
    CPy_DecRef(cpy_r_lvalues);
    goto CPyL43;
CPyL45: ;
    CPy_DecRef(cpy_r_lvalues);
    CPy_DecRef(cpy_r_rvalues);
    goto CPyL43;
CPyL46: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL18;
CPyL47: ;
    CPy_DecRef(cpy_r_lvalues);
    CPy_DecRef(cpy_r_rvalues);
    CPy_DecRef(cpy_r_r19);
    goto CPyL43;
CPyL48: ;
    CPy_DECREF(cpy_r_r19);
    goto CPyL16;
CPyL49: ;
    CPy_DECREF(cpy_r_lvalues);
    goto CPyL19;
CPyL50: ;
    CPy_DecRef(cpy_r_rvalues);
    goto CPyL43;
CPyL51: ;
    CPy_DECREF(cpy_r_rvalues);
    goto CPyL30;
CPyL52: ;
    CPy_DECREF(cpy_r_lvalues);
    CPy_DECREF(cpy_r_rvalues);
    goto CPyL38;
CPyL53: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL43;
CPyL54: ;
    CPy_DecRef(cpy_r_lvalues);
    CPy_DecRef(cpy_r_r74);
    goto CPyL43;
}

PyObject *CPyPy_attrs____parse_assignments(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"lvalue", "stmt", 0};
    static CPyArg_Parser parser = {"OO:_parse_assignments", kwlist, 0};
    PyObject *obj_lvalue;
    PyObject *obj_stmt;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_lvalue, &obj_stmt)) {
        return NULL;
    }
    PyObject *arg_lvalue;
    if (likely(PyObject_TypeCheck(obj_lvalue, CPyType_nodes___Expression)))
        arg_lvalue = obj_lvalue;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_lvalue); 
        goto fail;
    }
    PyObject *arg_stmt;
    if (likely(Py_TYPE(obj_stmt) == CPyType_nodes___AssignmentStmt))
        arg_stmt = obj_stmt;
    else {
        CPy_TypeError("mypy.nodes.AssignmentStmt", obj_stmt); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_attrs____parse_assignments(arg_lvalue, arg_stmt);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp4719 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp4719);
    PyObject *__tmp4720 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp4720);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_parse_assignments", 743, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs____add_order(PyObject *cpy_r_ctx, PyObject *cpy_r_adder) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_bool_type;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_object_type;
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
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyTagged cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_tvd;
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
    CPyTagged cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_self_tvar_expr;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyPtr cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    CPyPtr cpy_r_r76;
    CPyPtr cpy_r_r77;
    CPyPtr cpy_r_r78;
    CPyPtr cpy_r_r79;
    CPyTagged cpy_r_r80;
    CPyPtr cpy_r_r81;
    int64_t cpy_r_r82;
    CPyTagged cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_method;
    char cpy_r_r87;
    CPyTagged cpy_r_r88;
    char cpy_r_r89;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 762, CPyStatic_attrs___globals);
        goto CPyL40;
    }
    if (likely(Py_TYPE(cpy_r_r0) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_order", 762, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r0);
        goto CPyL40;
    }
    cpy_r_r2 = CPyStatics[831]; /* 'builtins.bool' */
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPY_GET_METHOD_TRAIT(cpy_r_r1, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r1, cpy_r_r2, cpy_r_r3); /* named_type */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 762, CPyStatic_attrs___globals);
        goto CPyL40;
    }
    cpy_r_bool_type = cpy_r_r4;
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 763, CPyStatic_attrs___globals);
        goto CPyL41;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_order", 763, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r5);
        goto CPyL41;
    }
    cpy_r_r7 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPY_GET_METHOD_TRAIT(cpy_r_r6, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r6, cpy_r_r7, cpy_r_r8); /* named_type */
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 763, CPyStatic_attrs___globals);
        goto CPyL41;
    }
    cpy_r_object_type = cpy_r_r9;
    cpy_r_r10 = CPyStatics[4413]; /* '_AT' */
    cpy_r_r11 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 770, CPyStatic_attrs___globals);
        goto CPyL42;
    }
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_nodes___ClassDef))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_order", 770, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r11);
        goto CPyL42;
    }
    cpy_r_r13 = ((mypy___nodes___ClassDefObject *)cpy_r_r12)->_info;
    cpy_r_r14 = CPY_GET_ATTR(cpy_r_r13, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 770, CPyStatic_attrs___globals);
        goto CPyL43;
    }
CPyL9: ;
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = CPyStatics[224]; /* '.' */
    cpy_r_r16 = PyUnicode_Concat(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 770, CPyStatic_attrs___globals);
        goto CPyL42;
    }
    cpy_r_r17 = CPyStatics[4413]; /* '_AT' */
    cpy_r_r18 = PyUnicode_Concat(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 770, CPyStatic_attrs___globals);
        goto CPyL42;
    }
    cpy_r_r19 = PyList_New(0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 772, CPyStatic_attrs___globals);
        goto CPyL44;
    }
    cpy_r_r20 = NULL;
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = CPY_INT_TAG;
    cpy_r_r24 = CPyDef_types___AnyType(8, cpy_r_r20, cpy_r_r21, cpy_r_r22, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 774, CPyStatic_attrs___globals);
        goto CPyL45;
    }
    cpy_r_r25 = CPyStatics[9017]; /* -1 */
    cpy_r_r26 = CPY_INT_TAG;
    cpy_r_r27 = CPY_INT_TAG;
    cpy_r_r28 = CPY_INT_TAG;
    cpy_r_r29 = CPyDef_types___TypeVarType(cpy_r_r10, cpy_r_r18, cpy_r_r25, cpy_r_r19, cpy_r_object_type, cpy_r_r24, cpy_r_r26, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 768, CPyStatic_attrs___globals);
        goto CPyL42;
    }
    cpy_r_tvd = cpy_r_r29;
    cpy_r_r30 = CPyStatics[4413]; /* '_AT' */
    cpy_r_r31 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 778, CPyStatic_attrs___globals);
        goto CPyL46;
    }
    if (likely(Py_TYPE(cpy_r_r31) == CPyType_nodes___ClassDef))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_order", 778, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r31);
        goto CPyL46;
    }
    cpy_r_r33 = ((mypy___nodes___ClassDefObject *)cpy_r_r32)->_info;
    cpy_r_r34 = CPY_GET_ATTR(cpy_r_r33, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 778, CPyStatic_attrs___globals);
        goto CPyL47;
    }
CPyL17: ;
    CPy_DECREF(cpy_r_r32);
    cpy_r_r35 = CPyStatics[224]; /* '.' */
    cpy_r_r36 = PyUnicode_Concat(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 778, CPyStatic_attrs___globals);
        goto CPyL46;
    }
    cpy_r_r37 = CPyStatics[4413]; /* '_AT' */
    cpy_r_r38 = PyUnicode_Concat(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 778, CPyStatic_attrs___globals);
        goto CPyL46;
    }
    cpy_r_r39 = PyList_New(0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 779, CPyStatic_attrs___globals);
        goto CPyL48;
    }
    cpy_r_r40 = NULL;
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPY_INT_TAG;
    cpy_r_r43 = CPY_INT_TAG;
    cpy_r_r44 = CPyDef_types___AnyType(8, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 781, CPyStatic_attrs___globals);
        goto CPyL49;
    }
    cpy_r_r45 = CPY_INT_TAG;
    cpy_r_r46 = CPyDef_nodes___TypeVarExpr(cpy_r_r30, cpy_r_r38, cpy_r_r39, cpy_r_object_type, cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_object_type);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 776, CPyStatic_attrs___globals);
        goto CPyL50;
    }
    cpy_r_self_tvar_expr = cpy_r_r46;
    cpy_r_r47 = 2;
    cpy_r_r48 = 2;
    cpy_r_r49 = 2;
    cpy_r_r50 = 2;
    cpy_r_r51 = 2;
    cpy_r_r52 = CPyDef_nodes___SymbolTableNode(4, cpy_r_self_tvar_expr, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_self_tvar_expr);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 783, CPyStatic_attrs___globals);
        goto CPyL50;
    }
    cpy_r_r53 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 783, CPyStatic_attrs___globals);
        goto CPyL51;
    }
    if (likely(Py_TYPE(cpy_r_r53) == CPyType_nodes___ClassDef))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_order", 783, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r53);
        goto CPyL51;
    }
    cpy_r_r55 = ((mypy___nodes___ClassDefObject *)cpy_r_r54)->_info;
    cpy_r_r56 = ((mypy___nodes___TypeInfoObject *)cpy_r_r55)->_names;
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_add_order", "TypeInfo", "names", 783, CPyStatic_attrs___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r56);
CPyL26: ;
    CPy_DECREF(cpy_r_r54);
    cpy_r_r57 = CPyStatics[4413]; /* '_AT' */
    cpy_r_r58 = CPyDict_SetItem(cpy_r_r56, cpy_r_r57, cpy_r_r52);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 783, CPyStatic_attrs___globals);
        goto CPyL50;
    }
    cpy_r_r60 = CPyStatics[4414]; /* 'other' */
    cpy_r_r61 = CPyDef_nodes___Var(cpy_r_r60, cpy_r_tvd);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 785, CPyStatic_attrs___globals);
        goto CPyL50;
    }
    cpy_r_r62 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r62 == NULL)) {
        goto CPyL53;
    } else
        goto CPyL31;
CPyL29: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r63 = 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 785, CPyStatic_attrs___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r64 = Py_None;
    cpy_r_r65 = 2;
    cpy_r_r66 = CPyDef_nodes___Argument(cpy_r_r61, cpy_r_tvd, cpy_r_r64, cpy_r_r62, cpy_r_r65);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 785, CPyStatic_attrs___globals);
        goto CPyL50;
    }
    cpy_r_r67 = PyList_New(1);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 785, CPyStatic_attrs___globals);
        goto CPyL54;
    }
    cpy_r_r68 = (CPyPtr)&((PyListObject *)cpy_r_r67)->ob_item;
    cpy_r_r69 = *(CPyPtr *)cpy_r_r68;
    *(PyObject * *)cpy_r_r69 = cpy_r_r66;
    cpy_r_args = cpy_r_r67;
    cpy_r_r70 = CPyStatics[4196]; /* '__lt__' */
    cpy_r_r71 = CPyStatics[4199]; /* '__le__' */
    cpy_r_r72 = CPyStatics[4198]; /* '__gt__' */
    cpy_r_r73 = CPyStatics[4197]; /* '__ge__' */
    cpy_r_r74 = PyList_New(4);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 786, CPyStatic_attrs___globals);
        goto CPyL55;
    }
    cpy_r_r75 = (CPyPtr)&((PyListObject *)cpy_r_r74)->ob_item;
    cpy_r_r76 = *(CPyPtr *)cpy_r_r75;
    CPy_INCREF(cpy_r_r70);
    *(PyObject * *)cpy_r_r76 = cpy_r_r70;
    cpy_r_r77 = cpy_r_r76 + 8;
    CPy_INCREF(cpy_r_r71);
    *(PyObject * *)cpy_r_r77 = cpy_r_r71;
    cpy_r_r78 = cpy_r_r76 + 16;
    CPy_INCREF(cpy_r_r72);
    *(PyObject * *)cpy_r_r78 = cpy_r_r72;
    cpy_r_r79 = cpy_r_r76 + 24;
    CPy_INCREF(cpy_r_r73);
    *(PyObject * *)cpy_r_r79 = cpy_r_r73;
    cpy_r_r80 = 0;
CPyL35: ;
    cpy_r_r81 = (CPyPtr)&((PyVarObject *)cpy_r_r74)->ob_size;
    cpy_r_r82 = *(int64_t *)cpy_r_r81;
    cpy_r_r83 = cpy_r_r82 << 1;
    cpy_r_r84 = (Py_ssize_t)cpy_r_r80 < (Py_ssize_t)cpy_r_r83;
    if (!cpy_r_r84) goto CPyL56;
    cpy_r_r85 = CPyList_GetItemUnsafe(cpy_r_r74, cpy_r_r80);
    if (likely(PyUnicode_Check(cpy_r_r85)))
        cpy_r_r86 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_order", 786, CPyStatic_attrs___globals, "str", cpy_r_r85);
        goto CPyL57;
    }
    cpy_r_method = cpy_r_r86;
    cpy_r_r87 = CPyDef_attrs___MethodAdder___add_method(cpy_r_adder, cpy_r_method, cpy_r_args, cpy_r_bool_type, cpy_r_tvd, cpy_r_tvd);
    CPy_DECREF(cpy_r_method);
    if (unlikely(cpy_r_r87 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 787, CPyStatic_attrs___globals);
        goto CPyL57;
    }
    cpy_r_r88 = cpy_r_r80 + 2;
    cpy_r_r80 = cpy_r_r88;
    goto CPyL35;
CPyL39: ;
    return 1;
CPyL40: ;
    cpy_r_r89 = 2;
    return cpy_r_r89;
CPyL41: ;
    CPy_DecRef(cpy_r_bool_type);
    goto CPyL40;
CPyL42: ;
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_object_type);
    goto CPyL40;
CPyL43: ;
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_object_type);
    CPy_DecRef(cpy_r_r12);
    goto CPyL40;
CPyL44: ;
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_object_type);
    CPy_DecRef(cpy_r_r18);
    goto CPyL40;
CPyL45: ;
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_object_type);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r19);
    goto CPyL40;
CPyL46: ;
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_object_type);
    CPy_DecRef(cpy_r_tvd);
    goto CPyL40;
CPyL47: ;
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_object_type);
    CPy_DecRef(cpy_r_tvd);
    CPy_DecRef(cpy_r_r32);
    goto CPyL40;
CPyL48: ;
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_object_type);
    CPy_DecRef(cpy_r_tvd);
    CPy_DecRef(cpy_r_r38);
    goto CPyL40;
CPyL49: ;
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_object_type);
    CPy_DecRef(cpy_r_tvd);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r39);
    goto CPyL40;
CPyL50: ;
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_tvd);
    goto CPyL40;
CPyL51: ;
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_tvd);
    CPy_DecRef(cpy_r_r52);
    goto CPyL40;
CPyL52: ;
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_tvd);
    CPy_DecRef(cpy_r_r52);
    CPy_DecRef(cpy_r_r54);
    goto CPyL40;
CPyL53: ;
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_tvd);
    CPy_DecRef(cpy_r_r61);
    goto CPyL29;
CPyL54: ;
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_tvd);
    CPy_DecRef(cpy_r_r66);
    goto CPyL40;
CPyL55: ;
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_tvd);
    CPy_DecRef(cpy_r_args);
    goto CPyL40;
CPyL56: ;
    CPy_DECREF(cpy_r_bool_type);
    CPy_DECREF(cpy_r_tvd);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r74);
    goto CPyL39;
CPyL57: ;
    CPy_DecRef(cpy_r_bool_type);
    CPy_DecRef(cpy_r_tvd);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r74);
    goto CPyL40;
}

PyObject *CPyPy_attrs____add_order(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "adder", 0};
    static CPyArg_Parser parser = {"OO:_add_order", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_adder;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_adder)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_adder;
    if (likely(Py_TYPE(obj_adder) == CPyType_attrs___MethodAdder))
        arg_adder = obj_adder;
    else {
        CPy_TypeError("mypy.plugins.attrs.MethodAdder", obj_adder); 
        goto fail;
    }
    char retval = CPyDef_attrs____add_order(arg_ctx, arg_adder);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_add_order", 760, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs____make_frozen(PyObject *cpy_r_ctx, PyObject *cpy_r_attributes) {
    CPyTagged cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_attribute;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_node;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
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
    PyObject *cpy_r_r36;
    PyObject *cpy_r_var;
    PyObject *cpy_r_r37;
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
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    CPyTagged cpy_r_r63;
    char cpy_r_r64;
    cpy_r_r0 = 0;
CPyL1: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = (Py_ssize_t)cpy_r_r0 < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r4) goto CPyL36;
    cpy_r_r5 = CPyList_GetItemUnsafe(cpy_r_attributes, cpy_r_r0);
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_attrs___Attribute))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_make_frozen", 792, CPyStatic_attrs___globals, "mypy.plugins.attrs.Attribute", cpy_r_r5);
        goto CPyL37;
    }
    cpy_r_attribute = cpy_r_r6;
    cpy_r_r7 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attribute)->_name;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 793, CPyStatic_attrs___globals);
        goto CPyL38;
    }
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_nodes___ClassDef))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_make_frozen", 793, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r8);
        goto CPyL38;
    }
    cpy_r_r10 = ((mypy___nodes___ClassDefObject *)cpy_r_r9)->_info;
    cpy_r_r11 = ((mypy___nodes___TypeInfoObject *)cpy_r_r10)->_names;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_make_frozen", "TypeInfo", "names", 793, CPyStatic_attrs___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r11);
CPyL6: ;
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = PyDict_Contains(cpy_r_r11, cpy_r_r7);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 793, CPyStatic_attrs___globals);
        goto CPyL40;
    }
    cpy_r_r14 = cpy_r_r12;
    if (!cpy_r_r14) goto CPyL16;
    cpy_r_r15 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 795, CPyStatic_attrs___globals);
        goto CPyL40;
    }
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_nodes___ClassDef))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_make_frozen", 795, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r15);
        goto CPyL40;
    }
    cpy_r_r17 = ((mypy___nodes___ClassDefObject *)cpy_r_r16)->_info;
    cpy_r_r18 = ((mypy___nodes___TypeInfoObject *)cpy_r_r17)->_names;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_make_frozen", "TypeInfo", "names", 795, CPyStatic_attrs___globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r18);
CPyL11: ;
    CPy_DECREF(cpy_r_r16);
    cpy_r_r19 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attribute)->_name;
    CPy_INCREF(cpy_r_r19);
    CPy_DECREF(cpy_r_attribute);
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 795, CPyStatic_attrs___globals);
        goto CPyL37;
    }
    if (likely(Py_TYPE(cpy_r_r20) == CPyType_nodes___SymbolTableNode))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_make_frozen", 795, CPyStatic_attrs___globals, "mypy.nodes.SymbolTableNode", cpy_r_r20);
        goto CPyL37;
    }
    cpy_r_r22 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r21)->_node;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    cpy_r_node = cpy_r_r22;
    cpy_r_r23 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_node)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (!cpy_r_r26) goto CPyL42;
    if (likely(Py_TYPE(cpy_r_node) == CPyType_nodes___Var))
        cpy_r_r27 = cpy_r_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_make_frozen", 801, CPyStatic_attrs___globals, "mypy.nodes.Var", cpy_r_node);
        goto CPyL43;
    }
    ((mypy___nodes___VarObject *)cpy_r_r27)->_is_property = 1;
    CPy_DECREF(cpy_r_node);
    goto CPyL35;
CPyL16: ;
    cpy_r_r29 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attribute)->_name;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r30 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 805, CPyStatic_attrs___globals);
        goto CPyL44;
    }
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_nodes___ClassDef))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_make_frozen", 805, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r30);
        goto CPyL44;
    }
    cpy_r_r32 = ((mypy___nodes___ClassDefObject *)cpy_r_r31)->_info;
    CPy_INCREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r33 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attribute)->_name;
    CPy_INCREF(cpy_r_r33);
    CPy_DECREF(cpy_r_attribute);
    cpy_r_r34 = CPyDef_nodes___TypeInfo_____getitem__(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 805, CPyStatic_attrs___globals);
        goto CPyL45;
    }
    cpy_r_r35 = CPY_GET_ATTR(cpy_r_r34, CPyType_nodes___SymbolTableNode, 2, mypy___nodes___SymbolTableNodeObject, PyObject *); /* type */
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 805, CPyStatic_attrs___globals);
        goto CPyL45;
    }
CPyL20: ;
    cpy_r_r36 = CPyDef_nodes___Var(cpy_r_r29, cpy_r_r35);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 805, CPyStatic_attrs___globals);
        goto CPyL37;
    }
    cpy_r_var = cpy_r_r36;
    cpy_r_r37 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 806, CPyStatic_attrs___globals);
        goto CPyL46;
    }
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_nodes___ClassDef))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_make_frozen", 806, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r37);
        goto CPyL46;
    }
    cpy_r_r39 = ((mypy___nodes___ClassDefObject *)cpy_r_r38)->_info;
    CPy_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_var)->_info);
    ((mypy___nodes___VarObject *)cpy_r_var)->_info = cpy_r_r39;
    cpy_r_r41 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 807, CPyStatic_attrs___globals);
        goto CPyL46;
    }
    if (likely(Py_TYPE(cpy_r_r41) == CPyType_nodes___ClassDef))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_make_frozen", 807, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r41);
        goto CPyL46;
    }
    cpy_r_r43 = ((mypy___nodes___ClassDefObject *)cpy_r_r42)->_info;
    cpy_r_r44 = CPY_GET_ATTR(cpy_r_r43, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 807, CPyStatic_attrs___globals);
        goto CPyL47;
    }
CPyL26: ;
    CPy_DECREF(cpy_r_r42);
    cpy_r_r45 = CPyStatics[224]; /* '.' */
    cpy_r_r46 = CPY_GET_ATTR(cpy_r_var, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 807, CPyStatic_attrs___globals);
        goto CPyL48;
    }
CPyL27: ;
    cpy_r_r47 = CPyStr_Build(3, cpy_r_r44, cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 807, CPyStatic_attrs___globals);
        goto CPyL46;
    }
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_var)->__fullname);
    ((mypy___nodes___VarObject *)cpy_r_var)->__fullname = cpy_r_r47;
    cpy_r_r49 = 2;
    cpy_r_r50 = 2;
    cpy_r_r51 = 2;
    cpy_r_r52 = 2;
    cpy_r_r53 = 2;
    cpy_r_r54 = CPyDef_nodes___SymbolTableNode(4, cpy_r_var, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 808, CPyStatic_attrs___globals);
        goto CPyL46;
    }
    cpy_r_r55 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 808, CPyStatic_attrs___globals);
        goto CPyL49;
    }
    if (likely(Py_TYPE(cpy_r_r55) == CPyType_nodes___ClassDef))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_make_frozen", 808, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r55);
        goto CPyL49;
    }
    cpy_r_r57 = ((mypy___nodes___ClassDefObject *)cpy_r_r56)->_info;
    cpy_r_r58 = ((mypy___nodes___TypeInfoObject *)cpy_r_r57)->_names;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_make_frozen", "TypeInfo", "names", 808, CPyStatic_attrs___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r58);
CPyL32: ;
    CPy_DECREF(cpy_r_r56);
    cpy_r_r59 = CPY_GET_ATTR(cpy_r_var, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 808, CPyStatic_attrs___globals);
        goto CPyL51;
    }
CPyL33: ;
    cpy_r_r60 = CPyDict_SetItem(cpy_r_r58, cpy_r_r59, cpy_r_r54);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 808, CPyStatic_attrs___globals);
        goto CPyL46;
    }
    ((mypy___nodes___VarObject *)cpy_r_var)->_is_property = 1;
    CPy_DECREF(cpy_r_var);
CPyL35: ;
    cpy_r_r63 = cpy_r_r0 + 2;
    cpy_r_r0 = cpy_r_r63;
    goto CPyL1;
CPyL36: ;
    return 1;
CPyL37: ;
    cpy_r_r64 = 2;
    return cpy_r_r64;
CPyL38: ;
    CPy_DecRef(cpy_r_attribute);
    CPy_DecRef(cpy_r_r7);
    goto CPyL37;
CPyL39: ;
    CPy_DecRef(cpy_r_attribute);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r9);
    goto CPyL37;
CPyL40: ;
    CPy_DecRef(cpy_r_attribute);
    goto CPyL37;
CPyL41: ;
    CPy_DecRef(cpy_r_attribute);
    CPy_DecRef(cpy_r_r16);
    goto CPyL37;
CPyL42: ;
    CPy_DECREF(cpy_r_node);
    goto CPyL35;
CPyL43: ;
    CPy_DecRef(cpy_r_node);
    goto CPyL37;
CPyL44: ;
    CPy_DecRef(cpy_r_attribute);
    CPy_DecRef(cpy_r_r29);
    goto CPyL37;
CPyL45: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL37;
CPyL46: ;
    CPy_DecRef(cpy_r_var);
    goto CPyL37;
CPyL47: ;
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_r42);
    goto CPyL37;
CPyL48: ;
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_r44);
    goto CPyL37;
CPyL49: ;
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_r54);
    goto CPyL37;
CPyL50: ;
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r56);
    goto CPyL37;
CPyL51: ;
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_r54);
    CPy_DecRef(cpy_r_r58);
    goto CPyL37;
}

PyObject *CPyPy_attrs____make_frozen(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "attributes", 0};
    static CPyArg_Parser parser = {"OO:_make_frozen", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_attributes;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_attributes)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_attributes;
    if (likely(PyList_Check(obj_attributes)))
        arg_attributes = obj_attributes;
    else {
        CPy_TypeError("list", obj_attributes); 
        goto fail;
    }
    char retval = CPyDef_attrs____make_frozen(arg_ctx, arg_attributes);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_make_frozen", 790, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs____add_init(PyObject *cpy_r_ctx, PyObject *cpy_r_attributes, PyObject *cpy_r_adder, PyObject *cpy_r_method_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_pos_args;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_kw_only_args;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_sym_table;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_attribute;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_sym_node;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    CPyTagged cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_args;
    char cpy_r_r41;
    CPyTagged cpy_r_r42;
    CPyPtr cpy_r_r43;
    int64_t cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    CPyPtr cpy_r_r61;
    int64_t cpy_r_r62;
    CPyTagged cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    CPyTagged cpy_r_r69;
    CPyTagged cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyTagged cpy_r_r76;
    CPyTagged cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    CPyTagged cpy_r_r80;
    CPyTagged cpy_r_r81;
    CPyTagged cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 821, CPyStatic_attrs___globals);
        goto CPyL47;
    }
    cpy_r_pos_args = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 822, CPyStatic_attrs___globals);
        goto CPyL48;
    }
    cpy_r_kw_only_args = cpy_r_r1;
    cpy_r_r2 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 823, CPyStatic_attrs___globals);
        goto CPyL49;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_nodes___ClassDef))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_init", 823, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r2);
        goto CPyL49;
    }
    cpy_r_r4 = ((mypy___nodes___ClassDefObject *)cpy_r_r3)->_info;
    cpy_r_r5 = ((mypy___nodes___TypeInfoObject *)cpy_r_r4)->_names;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_add_init", "TypeInfo", "names", 823, CPyStatic_attrs___globals);
        goto CPyL50;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    CPy_DECREF(cpy_r_r3);
    cpy_r_sym_table = cpy_r_r5;
    cpy_r_r6 = 0;
CPyL6: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL51;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_attributes, cpy_r_r6);
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_attrs___Attribute))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_init", 824, CPyStatic_attrs___globals, "mypy.plugins.attrs.Attribute", cpy_r_r11);
        goto CPyL52;
    }
    cpy_r_attribute = cpy_r_r12;
    cpy_r_r13 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attribute)->_init;
    if (!cpy_r_r13) goto CPyL53;
CPyL9: ;
    cpy_r_r14 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attribute)->_kw_only;
    if (!cpy_r_r14) goto CPyL12;
CPyL10: ;
    cpy_r_r15 = CPyDef_attrs___Attribute___argument(cpy_r_attribute, cpy_r_ctx);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 828, CPyStatic_attrs___globals);
        goto CPyL54;
    }
    cpy_r_r16 = PyList_Append(cpy_r_kw_only_args, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 828, CPyStatic_attrs___globals);
        goto CPyL54;
    } else
        goto CPyL14;
CPyL12: ;
    cpy_r_r18 = CPyDef_attrs___Attribute___argument(cpy_r_attribute, cpy_r_ctx);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 830, CPyStatic_attrs___globals);
        goto CPyL54;
    }
    cpy_r_r19 = PyList_Append(cpy_r_pos_args, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 830, CPyStatic_attrs___globals);
        goto CPyL54;
    }
CPyL14: ;
    cpy_r_r21 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attribute)->_has_default;
    if (cpy_r_r21) goto CPyL53;
CPyL15: ;
    cpy_r_r22 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attribute)->_name;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = PyDict_Contains(cpy_r_sym_table, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 834, CPyStatic_attrs___globals);
        goto CPyL54;
    }
    cpy_r_r25 = cpy_r_r23;
    if (!cpy_r_r25) goto CPyL53;
    cpy_r_r26 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attribute)->_name;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_attribute);
    cpy_r_r27 = CPyDict_GetItem(cpy_r_sym_table, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 835, CPyStatic_attrs___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r27) == CPyType_nodes___SymbolTableNode))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_init", 835, CPyStatic_attrs___globals, "mypy.nodes.SymbolTableNode", cpy_r_r27);
        goto CPyL52;
    }
    cpy_r_r29 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r28)->_node;
    CPy_INCREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    cpy_r_sym_node = cpy_r_r29;
    cpy_r_r30 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r31 = (CPyPtr)&((PyObject *)cpy_r_sym_node)->ob_type;
    cpy_r_r32 = *(PyObject * *)cpy_r_r31;
    cpy_r_r33 = cpy_r_r32 == cpy_r_r30;
    if (!cpy_r_r33) goto CPyL55;
    if (likely(Py_TYPE(cpy_r_sym_node) == CPyType_nodes___Var))
        cpy_r_r34 = cpy_r_sym_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_init", 836, CPyStatic_attrs___globals, "mypy.nodes.Var", cpy_r_sym_node);
        goto CPyL56;
    }
    cpy_r_r35 = ((mypy___nodes___VarObject *)cpy_r_r34)->_is_final;
    if (!cpy_r_r35) goto CPyL55;
CPyL22: ;
    if (likely(Py_TYPE(cpy_r_sym_node) == CPyType_nodes___Var))
        cpy_r_r36 = cpy_r_sym_node;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_init", 837, CPyStatic_attrs___globals, "mypy.nodes.Var", cpy_r_sym_node);
        goto CPyL56;
    }
    ((mypy___nodes___VarObject *)cpy_r_r36)->_final_set_in_init = 1;
    CPy_DECREF(cpy_r_sym_node);
CPyL24: ;
    cpy_r_r38 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r38;
    goto CPyL6;
CPyL25: ;
    cpy_r_r39 = PyNumber_Add(cpy_r_pos_args, cpy_r_kw_only_args);
    CPy_DECREF(cpy_r_pos_args);
    CPy_DECREF(cpy_r_kw_only_args);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 838, CPyStatic_attrs___globals);
        goto CPyL47;
    }
    if (likely(PyList_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_init", 838, CPyStatic_attrs___globals, "list", cpy_r_r39);
        goto CPyL47;
    }
    cpy_r_args = cpy_r_r40;
    cpy_r_r41 = 1;
    cpy_r_r42 = 0;
CPyL28: ;
    cpy_r_r43 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r44 = *(int64_t *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 << 1;
    cpy_r_r46 = (Py_ssize_t)cpy_r_r42 < (Py_ssize_t)cpy_r_r45;
    if (!cpy_r_r46) goto CPyL36;
    cpy_r_r47 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r42);
    if (likely(Py_TYPE(cpy_r_r47) == CPyType_nodes___Argument))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_init", 839, CPyStatic_attrs___globals, "mypy.nodes.Argument", cpy_r_r47);
        goto CPyL57;
    }
    cpy_r_arg = cpy_r_r48;
    cpy_r_r49 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    cpy_r_r50 = ((mypy___nodes___VarObject *)cpy_r_r49)->_type;
    CPy_INCREF(cpy_r_r50);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r51 = CPyStatics[4415]; /* 'type_of_any' */
    cpy_r_r52 = Py_None;
    cpy_r_r53 = CPyObject_GetAttr3(cpy_r_r50, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 843, CPyStatic_attrs___globals);
        goto CPyL57;
    }
    cpy_r_r54 = CPyStatics[9016]; /* 1 */
    cpy_r_r55 = PyObject_RichCompare(cpy_r_r53, cpy_r_r54, 2);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 843, CPyStatic_attrs___globals);
        goto CPyL57;
    }
    cpy_r_r56 = PyObject_Not(cpy_r_r55);
    CPy_DECREF(cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 839, CPyStatic_attrs___globals);
        goto CPyL57;
    }
    cpy_r_r58 = cpy_r_r56;
    if (!cpy_r_r58) goto CPyL35;
    cpy_r_r41 = 0;
    goto CPyL36;
CPyL35: ;
    cpy_r_r59 = cpy_r_r42 + 2;
    cpy_r_r42 = cpy_r_r59;
    goto CPyL28;
CPyL36: ;
    if (!cpy_r_r41) goto CPyL44;
    cpy_r_r60 = 0;
CPyL38: ;
    cpy_r_r61 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r62 = *(int64_t *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 << 1;
    cpy_r_r64 = (Py_ssize_t)cpy_r_r60 < (Py_ssize_t)cpy_r_r63;
    if (!cpy_r_r64) goto CPyL44;
    cpy_r_r65 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r60);
    if (likely(Py_TYPE(cpy_r_r65) == CPyType_nodes___Argument))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_init", 849, CPyStatic_attrs___globals, "mypy.nodes.Argument", cpy_r_r65);
        goto CPyL57;
    }
    cpy_r_a = cpy_r_r66;
    cpy_r_r67 = NULL;
    cpy_r_r68 = NULL;
    cpy_r_r69 = CPY_INT_TAG;
    cpy_r_r70 = CPY_INT_TAG;
    cpy_r_r71 = CPyDef_types___AnyType(16, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 850, CPyStatic_attrs___globals);
        goto CPyL58;
    }
    cpy_r_r72 = ((mypy___nodes___ArgumentObject *)cpy_r_a)->_variable;
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r72)->_type);
    ((mypy___nodes___VarObject *)cpy_r_r72)->_type = cpy_r_r71;
    cpy_r_r74 = NULL;
    cpy_r_r75 = NULL;
    cpy_r_r76 = CPY_INT_TAG;
    cpy_r_r77 = CPY_INT_TAG;
    cpy_r_r78 = CPyDef_types___AnyType(16, cpy_r_r74, cpy_r_r75, cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 851, CPyStatic_attrs___globals);
        goto CPyL58;
    }
    CPy_DECREF(((mypy___nodes___ArgumentObject *)cpy_r_a)->_type_annotation);
    ((mypy___nodes___ArgumentObject *)cpy_r_a)->_type_annotation = cpy_r_r78;
    CPy_DECREF(cpy_r_a);
    cpy_r_r80 = cpy_r_r60 + 2;
    cpy_r_r60 = cpy_r_r80;
    goto CPyL38;
CPyL44: ;
    cpy_r_r81 = CPY_INT_TAG;
    cpy_r_r82 = CPY_INT_TAG;
    cpy_r_r83 = CPyDef_types___NoneType(cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 852, CPyStatic_attrs___globals);
        goto CPyL57;
    }
    cpy_r_r84 = NULL;
    cpy_r_r85 = NULL;
    cpy_r_r86 = CPyDef_attrs___MethodAdder___add_method(cpy_r_adder, cpy_r_method_name, cpy_r_args, cpy_r_r83, cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r86 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 852, CPyStatic_attrs___globals);
        goto CPyL47;
    }
    return 1;
CPyL47: ;
    cpy_r_r87 = 2;
    return cpy_r_r87;
CPyL48: ;
    CPy_DecRef(cpy_r_pos_args);
    goto CPyL47;
CPyL49: ;
    CPy_DecRef(cpy_r_pos_args);
    CPy_DecRef(cpy_r_kw_only_args);
    goto CPyL47;
CPyL50: ;
    CPy_DecRef(cpy_r_pos_args);
    CPy_DecRef(cpy_r_kw_only_args);
    CPy_DecRef(cpy_r_r3);
    goto CPyL47;
CPyL51: ;
    CPy_DECREF(cpy_r_sym_table);
    goto CPyL25;
CPyL52: ;
    CPy_DecRef(cpy_r_pos_args);
    CPy_DecRef(cpy_r_kw_only_args);
    CPy_DecRef(cpy_r_sym_table);
    goto CPyL47;
CPyL53: ;
    CPy_DECREF(cpy_r_attribute);
    goto CPyL24;
CPyL54: ;
    CPy_DecRef(cpy_r_pos_args);
    CPy_DecRef(cpy_r_kw_only_args);
    CPy_DecRef(cpy_r_sym_table);
    CPy_DecRef(cpy_r_attribute);
    goto CPyL47;
CPyL55: ;
    CPy_DECREF(cpy_r_sym_node);
    goto CPyL24;
CPyL56: ;
    CPy_DecRef(cpy_r_pos_args);
    CPy_DecRef(cpy_r_kw_only_args);
    CPy_DecRef(cpy_r_sym_table);
    CPy_DecRef(cpy_r_sym_node);
    goto CPyL47;
CPyL57: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL47;
CPyL58: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_a);
    goto CPyL47;
}

PyObject *CPyPy_attrs____add_init(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "attributes", "adder", "method_name", 0};
    static CPyArg_Parser parser = {"OOOO:_add_init", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_attributes;
    PyObject *obj_adder;
    PyObject *obj_method_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_attributes, &obj_adder, &obj_method_name)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_attributes;
    if (likely(PyList_Check(obj_attributes)))
        arg_attributes = obj_attributes;
    else {
        CPy_TypeError("list", obj_attributes); 
        goto fail;
    }
    PyObject *arg_adder;
    if (likely(Py_TYPE(obj_adder) == CPyType_attrs___MethodAdder))
        arg_adder = obj_adder;
    else {
        CPy_TypeError("mypy.plugins.attrs.MethodAdder", obj_adder); 
        goto fail;
    }
    PyObject *arg_method_name;
    if (likely(PyUnicode_Check(obj_method_name)))
        arg_method_name = obj_method_name;
    else {
        CPy_TypeError("str", obj_method_name); 
        goto fail;
    }
    char retval = CPyDef_attrs____add_init(arg_ctx, arg_attributes, arg_adder, arg_method_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_add_init", 812, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs____add_attrs_magic_attribute(PyObject *cpy_r_ctx, PyObject *cpy_r_attrs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_any_type;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    tuple_T2OO cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r__;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_attr_type;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_attributes_types;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyPtr cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_fallback_type;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject **cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_attr_name;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_ti;
    CPyTagged cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyPtr cpy_r_r69;
    int64_t cpy_r_r70;
    CPyTagged cpy_r_r71;
    char cpy_r_r72;
    CPyPtr cpy_r_r73;
    int64_t cpy_r_r74;
    CPyTagged cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    tuple_T2OO cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r80;
    PyObject *cpy_r___2;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_attr_type_2;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_var;
    char cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_proper_type;
    PyObject *cpy_r_r88;
    CPyPtr cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    CPyTagged cpy_r_r103;
    CPyTagged cpy_r_r104;
    PyObject *cpy_r_r105;
    CPyTagged cpy_r_r106;
    CPyTagged cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_attributes_type;
    char cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
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
    CPyTagged cpy_r_r127;
    CPyTagged cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    char cpy_r_r138;
    char cpy_r_r139;
    char cpy_r_r140;
    cpy_r_r0 = NULL;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPY_INT_TAG;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = CPyDef_types___AnyType(4, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 858, CPyStatic_attrs___globals);
        goto CPyL73;
    }
    cpy_r_any_type = cpy_r_r4;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_attrs)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = PyList_New(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 859, CPyStatic_attrs___globals);
        goto CPyL74;
    }
    cpy_r_r8 = 0;
CPyL3: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_attrs)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r12) goto CPyL19;
    cpy_r_r13 = CPyList_GetItemUnsafe(cpy_r_attrs, cpy_r_r8);
    PyObject *__tmp4721;
    if (unlikely(!(PyTuple_Check(cpy_r_r13) && PyTuple_GET_SIZE(cpy_r_r13) == 2))) {
        __tmp4721 = NULL;
        goto __LL4722;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r13, 0))))
        __tmp4721 = PyTuple_GET_ITEM(cpy_r_r13, 0);
    else {
        __tmp4721 = NULL;
    }
    if (__tmp4721 == NULL) goto __LL4722;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r13, 1), CPyType_types___Type))
        __tmp4721 = PyTuple_GET_ITEM(cpy_r_r13, 1);
    else {
        __tmp4721 = NULL;
    }
    if (__tmp4721 != NULL) goto __LL4723;
    if (PyTuple_GET_ITEM(cpy_r_r13, 1) == Py_None)
        __tmp4721 = PyTuple_GET_ITEM(cpy_r_r13, 1);
    else {
        __tmp4721 = NULL;
    }
    if (__tmp4721 != NULL) goto __LL4723;
    __tmp4721 = NULL;
__LL4723: ;
    if (__tmp4721 == NULL) goto __LL4722;
    __tmp4721 = cpy_r_r13;
__LL4722: ;
    if (unlikely(__tmp4721 == NULL)) {
        CPy_TypeError("tuple[str, union[mypy.types.Type, None]]", cpy_r_r13); cpy_r_r14 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp4724 = PyTuple_GET_ITEM(cpy_r_r13, 0);
        CPy_INCREF(__tmp4724);
        PyObject *__tmp4725;
        if (likely(PyUnicode_Check(__tmp4724)))
            __tmp4725 = __tmp4724;
        else {
            CPy_TypeError("str", __tmp4724); 
            __tmp4725 = NULL;
        }
        cpy_r_r14.f0 = __tmp4725;
        PyObject *__tmp4726 = PyTuple_GET_ITEM(cpy_r_r13, 1);
        CPy_INCREF(__tmp4726);
        PyObject *__tmp4727;
        if (PyObject_TypeCheck(__tmp4726, CPyType_types___Type))
            __tmp4727 = __tmp4726;
        else {
            __tmp4727 = NULL;
        }
        if (__tmp4727 != NULL) goto __LL4728;
        if (__tmp4726 == Py_None)
            __tmp4727 = __tmp4726;
        else {
            __tmp4727 = NULL;
        }
        if (__tmp4727 != NULL) goto __LL4728;
        CPy_TypeError("mypy.types.Type or None", __tmp4726); 
        __tmp4727 = NULL;
__LL4728: ;
        cpy_r_r14.f1 = __tmp4727;
    }
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14.f0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 859, CPyStatic_attrs___globals);
        goto CPyL75;
    }
    cpy_r_r15 = cpy_r_r14.f0;
    CPy_INCREF(cpy_r_r15);
    cpy_r__ = cpy_r_r15;
    CPy_DECREF(cpy_r__);
    cpy_r_r16 = cpy_r_r14.f1;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r14.f0);
    CPy_DECREF(cpy_r_r14.f1);
    cpy_r_attr_type = cpy_r_r16;
    cpy_r_r17 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 860, CPyStatic_attrs___globals);
        goto CPyL76;
    }
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 860, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r17);
        goto CPyL76;
    }
    cpy_r_r19 = CPyStatics[4416]; /* 'attr.Attribute' */
    cpy_r_r20 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r21 = cpy_r_attr_type != cpy_r_r20;
    if (!cpy_r_r21) goto CPyL77;
    if (likely(cpy_r_attr_type != Py_None))
        cpy_r_r22 = cpy_r_attr_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 860, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_attr_type);
        goto CPyL78;
    }
    cpy_r_r23 = cpy_r_r22;
    goto CPyL11;
CPyL10: ;
    CPy_INCREF(cpy_r_any_type);
    cpy_r_r23 = cpy_r_any_type;
CPyL11: ;
    cpy_r_r24 = PyList_New(1);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 860, CPyStatic_attrs___globals);
        goto CPyL79;
    }
    cpy_r_r25 = (CPyPtr)&((PyListObject *)cpy_r_r24)->ob_item;
    cpy_r_r26 = *(CPyPtr *)cpy_r_r25;
    *(PyObject * *)cpy_r_r26 = cpy_r_r23;
    cpy_r_r27 = CPY_GET_METHOD_TRAIT(cpy_r_r18, CPyType_plugin___SemanticAnalyzerPluginInterface, 2, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r18, cpy_r_r19, cpy_r_r24); /* named_type_or_none */
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 860, CPyStatic_attrs___globals);
        goto CPyL75;
    }
    cpy_r_r28 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r29 = cpy_r_r27 != cpy_r_r28;
    if (!cpy_r_r29) goto CPyL80;
    if (Py_TYPE(cpy_r_r27) == CPyType_types___Instance)
        cpy_r_r30 = cpy_r_r27;
    else {
        cpy_r_r30 = NULL;
    }
    if (cpy_r_r30 != NULL) goto __LL4729;
    if (Py_TYPE(cpy_r_r27) == CPyType_types___AnyType)
        cpy_r_r30 = cpy_r_r27;
    else {
        cpy_r_r30 = NULL;
    }
    if (cpy_r_r30 != NULL) goto __LL4729;
    CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 860, CPyStatic_attrs___globals, "union[mypy.types.Instance, mypy.types.AnyType]", cpy_r_r27);
    goto CPyL75;
__LL4729: ;
    cpy_r_r31 = cpy_r_r30;
    goto CPyL17;
CPyL16: ;
    CPy_INCREF(cpy_r_any_type);
    cpy_r_r31 = cpy_r_any_type;
CPyL17: ;
    cpy_r_r32 = CPyList_SetItemUnsafe(cpy_r_r7, cpy_r_r8, cpy_r_r31);
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 859, CPyStatic_attrs___globals);
        goto CPyL75;
    }
    cpy_r_r33 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r33;
    goto CPyL3;
CPyL19: ;
    cpy_r_attributes_types = cpy_r_r7;
    cpy_r_r34 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 863, CPyStatic_attrs___globals);
        goto CPyL81;
    }
    if (likely(Py_TYPE(cpy_r_r34) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 863, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r34);
        goto CPyL81;
    }
    cpy_r_r36 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r37 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 864, CPyStatic_attrs___globals);
        goto CPyL82;
    }
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 864, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r37);
        goto CPyL82;
    }
    cpy_r_r39 = CPyStatics[4416]; /* 'attr.Attribute' */
    cpy_r_r40 = PyList_New(1);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 864, CPyStatic_attrs___globals);
        goto CPyL83;
    }
    cpy_r_r41 = (CPyPtr)&((PyListObject *)cpy_r_r40)->ob_item;
    cpy_r_r42 = *(CPyPtr *)cpy_r_r41;
    CPy_INCREF(cpy_r_any_type);
    *(PyObject * *)cpy_r_r42 = cpy_r_any_type;
    cpy_r_r43 = CPY_GET_METHOD_TRAIT(cpy_r_r38, CPyType_plugin___SemanticAnalyzerPluginInterface, 2, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r38, cpy_r_r39, cpy_r_r40); /* named_type_or_none */
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 864, CPyStatic_attrs___globals);
        goto CPyL82;
    }
    cpy_r_r44 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r45 = cpy_r_r43 != cpy_r_r44;
    if (cpy_r_r45) {
        goto CPyL84;
    } else
        goto CPyL85;
CPyL26: ;
    if (Py_TYPE(cpy_r_r43) == CPyType_types___Instance)
        cpy_r_r46 = cpy_r_r43;
    else {
        cpy_r_r46 = NULL;
    }
    if (cpy_r_r46 != NULL) goto __LL4730;
    if (Py_TYPE(cpy_r_r43) == CPyType_types___AnyType)
        cpy_r_r46 = cpy_r_r43;
    else {
        cpy_r_r46 = NULL;
    }
    if (cpy_r_r46 != NULL) goto __LL4730;
    CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 864, CPyStatic_attrs___globals, "union[mypy.types.Instance, mypy.types.AnyType]", cpy_r_r43);
    goto CPyL86;
__LL4730: ;
    cpy_r_r47 = cpy_r_r46;
    goto CPyL29;
CPyL28: ;
    cpy_r_r47 = cpy_r_any_type;
CPyL29: ;
    cpy_r_r48 = PyList_New(1);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 864, CPyStatic_attrs___globals);
        goto CPyL87;
    }
    cpy_r_r49 = (CPyPtr)&((PyListObject *)cpy_r_r48)->ob_item;
    cpy_r_r50 = *(CPyPtr *)cpy_r_r49;
    *(PyObject * *)cpy_r_r50 = cpy_r_r47;
    cpy_r_r51 = CPY_GET_METHOD_TRAIT(cpy_r_r35, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r35, cpy_r_r36, cpy_r_r48); /* named_type */
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 863, CPyStatic_attrs___globals);
        goto CPyL88;
    }
    cpy_r_fallback_type = cpy_r_r51;
    cpy_r_r52 = CPyStatics[4417]; /* '__{}_AttrsAttributes__' */
    cpy_r_r53 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 867, CPyStatic_attrs___globals);
        goto CPyL89;
    }
    if (likely(Py_TYPE(cpy_r_r53) == CPyType_nodes___ClassDef))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 867, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r53);
        goto CPyL89;
    }
    cpy_r_r55 = CPY_GET_ATTR(cpy_r_r54, CPyType_nodes___ClassDef, 6, mypy___nodes___ClassDefObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 867, CPyStatic_attrs___globals);
        goto CPyL89;
    }
CPyL34: ;
    cpy_r_r56 = CPyStatics[224]; /* '.' */
    cpy_r_r57 = CPyStatics[755]; /* '_' */
    cpy_r_r58 = PyUnicode_Replace(cpy_r_r55, cpy_r_r56, cpy_r_r57, -1);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 867, CPyStatic_attrs___globals);
        goto CPyL89;
    }
    cpy_r_r59 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r60[2] = {cpy_r_r52, cpy_r_r58};
    cpy_r_r61 = (PyObject **)&cpy_r_r60;
    cpy_r_r62 = PyObject_VectorcallMethod(cpy_r_r59, cpy_r_r61, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 867, CPyStatic_attrs___globals);
        goto CPyL90;
    }
    CPy_DECREF(cpy_r_r58);
    if (likely(PyUnicode_Check(cpy_r_r62)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 867, CPyStatic_attrs___globals, "str", cpy_r_r62);
        goto CPyL89;
    }
    cpy_r_attr_name = cpy_r_r63;
    cpy_r_r64 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 868, CPyStatic_attrs___globals);
        goto CPyL91;
    }
    if (likely(Py_TYPE(cpy_r_r64) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 868, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r64);
        goto CPyL91;
    }
    cpy_r_r66 = CPY_GET_METHOD_TRAIT(cpy_r_r65, CPyType_plugin___SemanticAnalyzerPluginInterface, 3, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *, CPyTagged))(cpy_r_r65, cpy_r_attr_name, cpy_r_fallback_type, 0); /* basic_new_typeinfo */
    CPy_DECREF(cpy_r_fallback_type);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 868, CPyStatic_attrs___globals);
        goto CPyL92;
    }
    cpy_r_ti = cpy_r_r66;
    cpy_r_r67 = 0;
    cpy_r_r68 = 0;
CPyL41: ;
    cpy_r_r69 = (CPyPtr)&((PyVarObject *)cpy_r_attrs)->ob_size;
    cpy_r_r70 = *(int64_t *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 << 1;
    cpy_r_r72 = (Py_ssize_t)cpy_r_r67 < (Py_ssize_t)cpy_r_r71;
    if (!cpy_r_r72) goto CPyL55;
    cpy_r_r73 = (CPyPtr)&((PyVarObject *)cpy_r_attributes_types)->ob_size;
    cpy_r_r74 = *(int64_t *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r74 << 1;
    cpy_r_r76 = (Py_ssize_t)cpy_r_r68 < (Py_ssize_t)cpy_r_r75;
    if (!cpy_r_r76) goto CPyL55;
    cpy_r_r77 = CPyList_GetItemUnsafe(cpy_r_attrs, cpy_r_r67);
    PyObject *__tmp4731;
    if (unlikely(!(PyTuple_Check(cpy_r_r77) && PyTuple_GET_SIZE(cpy_r_r77) == 2))) {
        __tmp4731 = NULL;
        goto __LL4732;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r77, 0))))
        __tmp4731 = PyTuple_GET_ITEM(cpy_r_r77, 0);
    else {
        __tmp4731 = NULL;
    }
    if (__tmp4731 == NULL) goto __LL4732;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r77, 1), CPyType_types___Type))
        __tmp4731 = PyTuple_GET_ITEM(cpy_r_r77, 1);
    else {
        __tmp4731 = NULL;
    }
    if (__tmp4731 != NULL) goto __LL4733;
    if (PyTuple_GET_ITEM(cpy_r_r77, 1) == Py_None)
        __tmp4731 = PyTuple_GET_ITEM(cpy_r_r77, 1);
    else {
        __tmp4731 = NULL;
    }
    if (__tmp4731 != NULL) goto __LL4733;
    __tmp4731 = NULL;
__LL4733: ;
    if (__tmp4731 == NULL) goto __LL4732;
    __tmp4731 = cpy_r_r77;
__LL4732: ;
    if (unlikely(__tmp4731 == NULL)) {
        CPy_TypeError("tuple[str, union[mypy.types.Type, None]]", cpy_r_r77); cpy_r_r78 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp4734 = PyTuple_GET_ITEM(cpy_r_r77, 0);
        CPy_INCREF(__tmp4734);
        PyObject *__tmp4735;
        if (likely(PyUnicode_Check(__tmp4734)))
            __tmp4735 = __tmp4734;
        else {
            CPy_TypeError("str", __tmp4734); 
            __tmp4735 = NULL;
        }
        cpy_r_r78.f0 = __tmp4735;
        PyObject *__tmp4736 = PyTuple_GET_ITEM(cpy_r_r77, 1);
        CPy_INCREF(__tmp4736);
        PyObject *__tmp4737;
        if (PyObject_TypeCheck(__tmp4736, CPyType_types___Type))
            __tmp4737 = __tmp4736;
        else {
            __tmp4737 = NULL;
        }
        if (__tmp4737 != NULL) goto __LL4738;
        if (__tmp4736 == Py_None)
            __tmp4737 = __tmp4736;
        else {
            __tmp4737 = NULL;
        }
        if (__tmp4737 != NULL) goto __LL4738;
        CPy_TypeError("mypy.types.Type or None", __tmp4736); 
        __tmp4737 = NULL;
__LL4738: ;
        cpy_r_r78.f1 = __tmp4737;
    }
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78.f0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 869, CPyStatic_attrs___globals);
        goto CPyL93;
    }
    cpy_r_r79 = cpy_r_r78.f0;
    CPy_INCREF(cpy_r_r79);
    cpy_r_name = cpy_r_r79;
    cpy_r_r80 = cpy_r_r78.f1;
    CPy_INCREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r78.f0);
    CPy_DECREF(cpy_r_r78.f1);
    cpy_r___2 = cpy_r_r80;
    CPy_DECREF(cpy_r___2);
    cpy_r_r81 = CPyList_GetItemUnsafe(cpy_r_attributes_types, cpy_r_r68);
    if (likely(PyObject_TypeCheck(cpy_r_r81, CPyType_types___Type)))
        cpy_r_r82 = cpy_r_r81;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 869, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_r81);
        goto CPyL94;
    }
    cpy_r_attr_type_2 = cpy_r_r82;
    cpy_r_r83 = CPyDef_nodes___Var(cpy_r_name, cpy_r_attr_type_2);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 870, CPyStatic_attrs___globals);
        goto CPyL95;
    }
    cpy_r_var = cpy_r_r83;
    CPy_INCREF(cpy_r_name);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_var)->__fullname);
    ((mypy___nodes___VarObject *)cpy_r_var)->__fullname = cpy_r_name;
    ((mypy___nodes___VarObject *)cpy_r_var)->_is_property = 1;
    cpy_r_r86 = CPyDef_types___get_proper_type(cpy_r_attr_type_2);
    CPy_DECREF(cpy_r_attr_type_2);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 873, CPyStatic_attrs___globals);
        goto CPyL96;
    }
    if (likely(cpy_r_r86 != Py_None))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 873, CPyStatic_attrs___globals, "mypy.types.ProperType", cpy_r_r86);
        goto CPyL96;
    }
    cpy_r_proper_type = cpy_r_r87;
    cpy_r_r88 = (PyObject *)CPyType_types___Instance;
    cpy_r_r89 = (CPyPtr)&((PyObject *)cpy_r_proper_type)->ob_type;
    cpy_r_r90 = *(PyObject * *)cpy_r_r89;
    cpy_r_r91 = cpy_r_r90 == cpy_r_r88;
    if (!cpy_r_r91) goto CPyL97;
    if (likely(Py_TYPE(cpy_r_proper_type) == CPyType_types___Instance))
        cpy_r_r92 = cpy_r_proper_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 875, CPyStatic_attrs___globals, "mypy.types.Instance", cpy_r_proper_type);
        goto CPyL98;
    }
    cpy_r_r93 = ((mypy___types___InstanceObject *)cpy_r_r92)->_type;
    CPy_INCREF(cpy_r_r93);
    CPy_DECREF(cpy_r_proper_type);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_var)->_info);
    ((mypy___nodes___VarObject *)cpy_r_var)->_info = cpy_r_r93;
CPyL51: ;
    cpy_r_r95 = 2;
    cpy_r_r96 = 2;
    cpy_r_r97 = 2;
    cpy_r_r98 = 2;
    cpy_r_r99 = CPyDef_nodes___SymbolTableNode(4, cpy_r_var, cpy_r_r95, cpy_r_r96, cpy_r_r97, 1, cpy_r_r98);
    CPy_DECREF(cpy_r_var);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 876, CPyStatic_attrs___globals);
        goto CPyL94;
    }
    cpy_r_r100 = ((mypy___nodes___TypeInfoObject *)cpy_r_ti)->_names;
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", "TypeInfo", "names", 876, CPyStatic_attrs___globals);
        goto CPyL99;
    }
    CPy_INCREF(cpy_r_r100);
CPyL53: ;
    cpy_r_r101 = CPyDict_SetItem(cpy_r_r100, cpy_r_name, cpy_r_r99);
    CPy_DECREF(cpy_r_r100);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 876, CPyStatic_attrs___globals);
        goto CPyL93;
    }
    cpy_r_r103 = cpy_r_r67 + 2;
    cpy_r_r67 = cpy_r_r103;
    cpy_r_r104 = cpy_r_r68 + 2;
    cpy_r_r68 = cpy_r_r104;
    goto CPyL41;
CPyL55: ;
    cpy_r_r105 = PyList_New(0);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 877, CPyStatic_attrs___globals);
        goto CPyL93;
    }
    cpy_r_r106 = CPY_INT_TAG;
    cpy_r_r107 = CPY_INT_TAG;
    cpy_r_r108 = NULL;
    cpy_r_r109 = NULL;
    cpy_r_r110 = CPyDef_types___Instance(cpy_r_ti, cpy_r_r105, cpy_r_r106, cpy_r_r107, cpy_r_r108, cpy_r_r109);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 877, CPyStatic_attrs___globals);
        goto CPyL93;
    }
    cpy_r_attributes_type = cpy_r_r110;
    cpy_r_r111 = 2;
    cpy_r_r112 = 2;
    cpy_r_r113 = 2;
    cpy_r_r114 = 2;
    cpy_r_r115 = CPyDef_nodes___SymbolTableNode(4, cpy_r_ti, cpy_r_r111, cpy_r_r112, cpy_r_r113, 1, cpy_r_r114);
    CPy_DECREF(cpy_r_ti);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 881, CPyStatic_attrs___globals);
        goto CPyL100;
    }
    cpy_r_r116 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 881, CPyStatic_attrs___globals);
        goto CPyL101;
    }
    if (likely(Py_TYPE(cpy_r_r116) == CPyType_nodes___ClassDef))
        cpy_r_r117 = cpy_r_r116;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 881, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r116);
        goto CPyL101;
    }
    cpy_r_r118 = ((mypy___nodes___ClassDefObject *)cpy_r_r117)->_info;
    cpy_r_r119 = ((mypy___nodes___TypeInfoObject *)cpy_r_r118)->_names;
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", "TypeInfo", "names", 881, CPyStatic_attrs___globals);
        goto CPyL102;
    }
    CPy_INCREF(cpy_r_r119);
CPyL61: ;
    CPy_DECREF(cpy_r_r117);
    cpy_r_r120 = CPyDict_SetItem(cpy_r_r119, cpy_r_attr_name, cpy_r_r115);
    CPy_DECREF(cpy_r_r119);
    CPy_DECREF(cpy_r_attr_name);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 881, CPyStatic_attrs___globals);
        goto CPyL103;
    }
    cpy_r_r122 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 884, CPyStatic_attrs___globals);
        goto CPyL103;
    }
    if (likely(Py_TYPE(cpy_r_r122) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r123 = cpy_r_r122;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 884, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r122);
        goto CPyL103;
    }
    cpy_r_r124 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 885, CPyStatic_attrs___globals);
        goto CPyL104;
    }
    if (likely(Py_TYPE(cpy_r_r124) == CPyType_nodes___ClassDef))
        cpy_r_r125 = cpy_r_r124;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 885, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r124);
        goto CPyL104;
    }
    cpy_r_r126 = CPyStatics[4418]; /* '__attrs_attrs__' */
    cpy_r_r127 = CPY_INT_TAG;
    cpy_r_r128 = CPY_INT_TAG;
    cpy_r_r129 = 2;
    cpy_r_r130 = CPyDef_types___TupleType(cpy_r_attributes_types, cpy_r_attributes_type, cpy_r_r127, cpy_r_r128, cpy_r_r129);
    CPy_DECREF(cpy_r_attributes_types);
    CPy_DECREF(cpy_r_attributes_type);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 887, CPyStatic_attrs___globals);
        goto CPyL105;
    }
    cpy_r_r131 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 888, CPyStatic_attrs___globals);
        goto CPyL106;
    }
    if (likely(Py_TYPE(cpy_r_r131) == CPyType_nodes___ClassDef))
        cpy_r_r132 = cpy_r_r131;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 888, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r131);
        goto CPyL106;
    }
    cpy_r_r133 = CPY_GET_ATTR(cpy_r_r132, CPyType_nodes___ClassDef, 6, mypy___nodes___ClassDefObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 888, CPyStatic_attrs___globals);
        goto CPyL106;
    }
CPyL70: ;
    cpy_r_r134 = CPyStatics[224]; /* '.' */
    cpy_r_r135 = CPyStatics[4418]; /* '__attrs_attrs__' */
    cpy_r_r136 = CPyStr_Build(3, cpy_r_r133, cpy_r_r134, cpy_r_r135);
    CPy_DECREF(cpy_r_r133);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 888, CPyStatic_attrs___globals);
        goto CPyL106;
    }
    cpy_r_r137 = 2;
    cpy_r_r138 = 2;
    cpy_r_r139 = CPyDef_plugins___common___add_attribute_to_class(cpy_r_r123, cpy_r_r125, cpy_r_r126, cpy_r_r130, cpy_r_r137, cpy_r_r138, 1, cpy_r_r136, 1);
    CPy_DECREF(cpy_r_r123);
    CPy_DECREF(cpy_r_r125);
    CPy_DECREF(cpy_r_r130);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r139 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 883, CPyStatic_attrs___globals);
        goto CPyL73;
    }
    return 1;
CPyL73: ;
    cpy_r_r140 = 2;
    return cpy_r_r140;
CPyL74: ;
    CPy_DecRef(cpy_r_any_type);
    goto CPyL73;
CPyL75: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r7);
    goto CPyL73;
CPyL76: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_attr_type);
    goto CPyL73;
CPyL77: ;
    CPy_DECREF(cpy_r_attr_type);
    goto CPyL10;
CPyL78: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r18);
    goto CPyL73;
CPyL79: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r23);
    goto CPyL73;
CPyL80: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL16;
CPyL81: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_attributes_types);
    goto CPyL73;
CPyL82: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_r35);
    goto CPyL73;
CPyL83: ;
    CPy_DecRef(cpy_r_any_type);
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r38);
    goto CPyL73;
CPyL84: ;
    CPy_DECREF(cpy_r_any_type);
    goto CPyL26;
CPyL85: ;
    CPy_DECREF(cpy_r_r43);
    goto CPyL28;
CPyL86: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_r35);
    goto CPyL73;
CPyL87: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r47);
    goto CPyL73;
CPyL88: ;
    CPy_DecRef(cpy_r_attributes_types);
    goto CPyL73;
CPyL89: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_fallback_type);
    goto CPyL73;
CPyL90: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_fallback_type);
    CPy_DecRef(cpy_r_r58);
    goto CPyL73;
CPyL91: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_fallback_type);
    CPy_DecRef(cpy_r_attr_name);
    goto CPyL73;
CPyL92: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_attr_name);
    goto CPyL73;
CPyL93: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_ti);
    goto CPyL73;
CPyL94: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_ti);
    CPy_DecRef(cpy_r_name);
    goto CPyL73;
CPyL95: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_ti);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_attr_type_2);
    goto CPyL73;
CPyL96: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_ti);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_var);
    goto CPyL73;
CPyL97: ;
    CPy_DECREF(cpy_r_proper_type);
    goto CPyL51;
CPyL98: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_ti);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_var);
    CPy_DecRef(cpy_r_proper_type);
    goto CPyL73;
CPyL99: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_ti);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r99);
    goto CPyL73;
CPyL100: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_attributes_type);
    goto CPyL73;
CPyL101: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_attributes_type);
    CPy_DecRef(cpy_r_r115);
    goto CPyL73;
CPyL102: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_attr_name);
    CPy_DecRef(cpy_r_attributes_type);
    CPy_DecRef(cpy_r_r115);
    CPy_DecRef(cpy_r_r117);
    goto CPyL73;
CPyL103: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_attributes_type);
    goto CPyL73;
CPyL104: ;
    CPy_DecRef(cpy_r_attributes_types);
    CPy_DecRef(cpy_r_attributes_type);
    CPy_DecRef(cpy_r_r123);
    goto CPyL73;
CPyL105: ;
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r125);
    goto CPyL73;
CPyL106: ;
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r125);
    CPy_DecRef(cpy_r_r130);
    goto CPyL73;
}

PyObject *CPyPy_attrs____add_attrs_magic_attribute(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "attrs", 0};
    static CPyArg_Parser parser = {"OO:_add_attrs_magic_attribute", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_attrs;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_attrs)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_attrs;
    if (likely(PyList_Check(obj_attrs)))
        arg_attrs = obj_attrs;
    else {
        CPy_TypeError("list", obj_attrs); 
        goto fail;
    }
    char retval = CPyDef_attrs____add_attrs_magic_attribute(arg_ctx, arg_attrs);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_add_attrs_magic_attribute", 855, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs____add_slots(PyObject *cpy_r_ctx, PyObject *cpy_r_attributes) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r__;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_slots_type;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_slots", 896, CPyStatic_attrs___globals);
        goto CPyL28;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL6;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_attributes, cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_attrs___Attribute))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_slots", 896, CPyStatic_attrs___globals, "mypy.plugins.attrs.Attribute", cpy_r_r6);
        goto CPyL29;
    }
    cpy_r_attr = cpy_r_r7;
    cpy_r_r8 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attr)->_name;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_attr);
    cpy_r_r9 = PySet_Add(cpy_r_r0, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_slots", 896, CPyStatic_attrs___globals);
        goto CPyL29;
    }
    cpy_r_r11 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r11;
    goto CPyL2;
CPyL6: ;
    cpy_r_r12 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_slots", 896, CPyStatic_attrs___globals);
        goto CPyL29;
    }
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_nodes___ClassDef))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_slots", 896, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r12);
        goto CPyL29;
    }
    cpy_r_r14 = ((mypy___nodes___ClassDefObject *)cpy_r_r13)->_info;
    if (((mypy___nodes___TypeInfoObject *)cpy_r_r14)->_slots != NULL) {
        CPy_DECREF(((mypy___nodes___TypeInfoObject *)cpy_r_r14)->_slots);
    }
    ((mypy___nodes___TypeInfoObject *)cpy_r_r14)->_slots = cpy_r_r0;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_slots", 896, CPyStatic_attrs___globals);
        goto CPyL30;
    }
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = PyList_New(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_slots", 900, CPyStatic_attrs___globals);
        goto CPyL28;
    }
    cpy_r_r19 = 0;
CPyL11: ;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r19 < (Py_ssize_t)cpy_r_r22;
    if (!cpy_r_r23) goto CPyL18;
    cpy_r_r24 = CPyList_GetItemUnsafe(cpy_r_attributes, cpy_r_r19);
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_attrs___Attribute))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_slots", 900, CPyStatic_attrs___globals, "mypy.plugins.attrs.Attribute", cpy_r_r24);
        goto CPyL31;
    }
    cpy_r__ = cpy_r_r25;
    CPy_DECREF(cpy_r__);
    cpy_r_r26 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_slots", 900, CPyStatic_attrs___globals);
        goto CPyL31;
    }
    if (likely(Py_TYPE(cpy_r_r26) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_slots", 900, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r26);
        goto CPyL31;
    }
    cpy_r_r28 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPY_GET_METHOD_TRAIT(cpy_r_r27, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r27, cpy_r_r28, cpy_r_r29); /* named_type */
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_slots", 900, CPyStatic_attrs___globals);
        goto CPyL31;
    }
    cpy_r_r31 = CPyList_SetItemUnsafe(cpy_r_r18, cpy_r_r19, cpy_r_r30);
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_slots", 900, CPyStatic_attrs___globals);
        goto CPyL31;
    }
    cpy_r_r32 = cpy_r_r19 + 2;
    cpy_r_r19 = cpy_r_r32;
    goto CPyL11;
CPyL18: ;
    cpy_r_r33 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_slots", 901, CPyStatic_attrs___globals);
        goto CPyL31;
    }
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_slots", 901, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r33);
        goto CPyL31;
    }
    cpy_r_r35 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r36 = NULL;
    cpy_r_r37 = CPY_GET_METHOD_TRAIT(cpy_r_r34, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r34, cpy_r_r35, cpy_r_r36); /* named_type */
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_slots", 901, CPyStatic_attrs___globals);
        goto CPyL31;
    }
    cpy_r_r38 = CPY_INT_TAG;
    cpy_r_r39 = CPY_INT_TAG;
    cpy_r_r40 = 2;
    cpy_r_r41 = CPyDef_types___TupleType(cpy_r_r18, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_slots", 899, CPyStatic_attrs___globals);
        goto CPyL28;
    }
    cpy_r_slots_type = cpy_r_r41;
    cpy_r_r42 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_slots", 903, CPyStatic_attrs___globals);
        goto CPyL32;
    }
    if (likely(Py_TYPE(cpy_r_r42) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_slots", 903, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r42);
        goto CPyL32;
    }
    cpy_r_r44 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_slots", 903, CPyStatic_attrs___globals);
        goto CPyL33;
    }
    if (likely(Py_TYPE(cpy_r_r44) == CPyType_nodes___ClassDef))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_slots", 903, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r44);
        goto CPyL33;
    }
    cpy_r_r46 = CPyStatics[785]; /* '__slots__' */
    cpy_r_r47 = 2;
    cpy_r_r48 = 2;
    cpy_r_r49 = 2;
    cpy_r_r50 = NULL;
    cpy_r_r51 = 2;
    cpy_r_r52 = CPyDef_plugins___common___add_attribute_to_class(cpy_r_r43, cpy_r_r45, cpy_r_r46, cpy_r_slots_type, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r45);
    CPy_DECREF(cpy_r_slots_type);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_slots", 903, CPyStatic_attrs___globals);
        goto CPyL28;
    }
    return 1;
CPyL28: ;
    cpy_r_r53 = 2;
    return cpy_r_r53;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL28;
CPyL30: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL28;
CPyL31: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL28;
CPyL32: ;
    CPy_DecRef(cpy_r_slots_type);
    goto CPyL28;
CPyL33: ;
    CPy_DecRef(cpy_r_slots_type);
    CPy_DecRef(cpy_r_r43);
    goto CPyL28;
}

PyObject *CPyPy_attrs____add_slots(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "attributes", 0};
    static CPyArg_Parser parser = {"OO:_add_slots", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_attributes;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_attributes)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_attributes;
    if (likely(PyList_Check(obj_attributes)))
        arg_attributes = obj_attributes;
    else {
        CPy_TypeError("list", obj_attributes); 
        goto fail;
    }
    char retval = CPyDef_attrs____add_slots(arg_ctx, arg_attributes);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_add_slots", 894, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs____add_match_args(PyObject *cpy_r_ctx, PyObject *cpy_r_attributes) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
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
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_str_type;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_attr;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_match_args;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    cpy_r_r0 = CPyStatics[786]; /* '__match_args__' */
    cpy_r_r1 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 908, CPyStatic_attrs___globals);
        goto CPyL36;
    }
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_nodes___ClassDef))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_match_args", 908, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r1);
        goto CPyL36;
    }
    cpy_r_r3 = ((mypy___nodes___ClassDefObject *)cpy_r_r2)->_info;
    cpy_r_r4 = ((mypy___nodes___TypeInfoObject *)cpy_r_r3)->_names;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_add_match_args", "TypeInfo", "names", 908, CPyStatic_attrs___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r4);
CPyL3: ;
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = PyDict_Contains(cpy_r_r4, cpy_r_r0);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 908, CPyStatic_attrs___globals);
        goto CPyL36;
    }
    cpy_r_r7 = cpy_r_r5;
    cpy_r_r8 = cpy_r_r7 ^ 1;
    if (cpy_r_r8) goto CPyL11;
    cpy_r_r9 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 909, CPyStatic_attrs___globals);
        goto CPyL36;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_nodes___ClassDef))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_match_args", 909, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r9);
        goto CPyL36;
    }
    cpy_r_r11 = ((mypy___nodes___ClassDefObject *)cpy_r_r10)->_info;
    cpy_r_r12 = ((mypy___nodes___TypeInfoObject *)cpy_r_r11)->_names;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/plugins/attrs.py", "_add_match_args", "TypeInfo", "names", 909, CPyStatic_attrs___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r12);
CPyL8: ;
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = CPyStatics[786]; /* '__match_args__' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 909, CPyStatic_attrs___globals);
        goto CPyL36;
    }
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_nodes___SymbolTableNode))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_match_args", 909, CPyStatic_attrs___globals, "mypy.nodes.SymbolTableNode", cpy_r_r14);
        goto CPyL36;
    }
    cpy_r_r16 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r15)->_plugin_generated;
    CPy_DECREF(cpy_r_r15);
    if (!cpy_r_r16) goto CPyL35;
CPyL11: ;
    cpy_r_r17 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 911, CPyStatic_attrs___globals);
        goto CPyL36;
    }
    if (likely(Py_TYPE(cpy_r_r17) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_match_args", 911, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r17);
        goto CPyL36;
    }
    cpy_r_r19 = CPyStatics[697]; /* 'builtins.str' */
    cpy_r_r20 = NULL;
    cpy_r_r21 = CPY_GET_METHOD_TRAIT(cpy_r_r18, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r18, cpy_r_r19, cpy_r_r20); /* named_type */
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 911, CPyStatic_attrs___globals);
        goto CPyL36;
    }
    cpy_r_str_type = cpy_r_r21;
    cpy_r_r22 = PyList_New(0);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 913, CPyStatic_attrs___globals);
        goto CPyL39;
    }
    cpy_r_r23 = 0;
CPyL16: ;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_attributes)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r23 < (Py_ssize_t)cpy_r_r26;
    if (!cpy_r_r27) goto CPyL40;
    cpy_r_r28 = CPyList_GetItemUnsafe(cpy_r_attributes, cpy_r_r23);
    if (likely(Py_TYPE(cpy_r_r28) == CPyType_attrs___Attribute))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_match_args", 913, CPyStatic_attrs___globals, "mypy.plugins.attrs.Attribute", cpy_r_r28);
        goto CPyL41;
    }
    cpy_r_attr = cpy_r_r29;
    cpy_r_r30 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attr)->_kw_only;
    cpy_r_r31 = cpy_r_r30 ^ 1;
    if (cpy_r_r31) goto CPyL20;
    cpy_r_r32 = cpy_r_r31;
    goto CPyL21;
CPyL20: ;
    cpy_r_r33 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attr)->_init;
    cpy_r_r32 = cpy_r_r33;
CPyL21: ;
    if (!cpy_r_r32) goto CPyL42;
    cpy_r_r34 = ((mypy___plugins___attrs___AttributeObject *)cpy_r_attr)->_name;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_attr);
    cpy_r_r35 = CPY_INT_TAG;
    cpy_r_r36 = CPY_INT_TAG;
    cpy_r_r37 = CPyDef_types___LiteralType(cpy_r_r34, cpy_r_str_type, cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 914, CPyStatic_attrs___globals);
        goto CPyL41;
    }
    cpy_r_r38 = NULL;
    cpy_r_r39 = CPyDef_types___Instance___copy_modified(cpy_r_str_type, cpy_r_r38, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 914, CPyStatic_attrs___globals);
        goto CPyL41;
    }
    cpy_r_r40 = PyList_Append(cpy_r_r22, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 913, CPyStatic_attrs___globals);
        goto CPyL41;
    }
CPyL25: ;
    cpy_r_r42 = cpy_r_r23 + 2;
    cpy_r_r23 = cpy_r_r42;
    goto CPyL16;
CPyL26: ;
    cpy_r_r43 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 918, CPyStatic_attrs___globals);
        goto CPyL43;
    }
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_match_args", 918, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r43);
        goto CPyL43;
    }
    cpy_r_r45 = CPyStatics[24]; /* 'builtins.tuple' */
    cpy_r_r46 = NULL;
    cpy_r_r47 = CPY_GET_METHOD_TRAIT(cpy_r_r44, CPyType_plugin___SemanticAnalyzerPluginInterface, 0, mypy___plugin___SemanticAnalyzerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r44, cpy_r_r45, cpy_r_r46); /* named_type */
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 918, CPyStatic_attrs___globals);
        goto CPyL43;
    }
    cpy_r_r48 = CPY_INT_TAG;
    cpy_r_r49 = CPY_INT_TAG;
    cpy_r_r50 = 2;
    cpy_r_r51 = CPyDef_types___TupleType(cpy_r_r22, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 912, CPyStatic_attrs___globals);
        goto CPyL36;
    }
    cpy_r_match_args = cpy_r_r51;
    cpy_r_r52 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 920, CPyStatic_attrs___globals);
        goto CPyL44;
    }
    if (likely(Py_TYPE(cpy_r_r52) == CPyType_semanal___SemanticAnalyzer))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_match_args", 920, CPyStatic_attrs___globals, "mypy.plugin.SemanticAnalyzerPluginInterface", cpy_r_r52);
        goto CPyL44;
    }
    cpy_r_r54 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 920, CPyStatic_attrs___globals);
        goto CPyL45;
    }
    if (likely(Py_TYPE(cpy_r_r54) == CPyType_nodes___ClassDef))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_add_match_args", 920, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r54);
        goto CPyL45;
    }
    cpy_r_r56 = CPyStatics[786]; /* '__match_args__' */
    cpy_r_r57 = 2;
    cpy_r_r58 = 2;
    cpy_r_r59 = 2;
    cpy_r_r60 = NULL;
    cpy_r_r61 = 2;
    cpy_r_r62 = CPyDef_plugins___common___add_attribute_to_class(cpy_r_r53, cpy_r_r55, cpy_r_r56, cpy_r_match_args, cpy_r_r57, cpy_r_r58, cpy_r_r59, cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_match_args);
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 920, CPyStatic_attrs___globals);
        goto CPyL36;
    }
CPyL35: ;
    return 1;
CPyL36: ;
    cpy_r_r63 = 2;
    return cpy_r_r63;
CPyL37: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL36;
CPyL38: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL36;
CPyL39: ;
    CPy_DecRef(cpy_r_str_type);
    goto CPyL36;
CPyL40: ;
    CPy_DECREF(cpy_r_str_type);
    goto CPyL26;
CPyL41: ;
    CPy_DecRef(cpy_r_str_type);
    CPy_DecRef(cpy_r_r22);
    goto CPyL36;
CPyL42: ;
    CPy_DECREF(cpy_r_attr);
    goto CPyL25;
CPyL43: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL36;
CPyL44: ;
    CPy_DecRef(cpy_r_match_args);
    goto CPyL36;
CPyL45: ;
    CPy_DecRef(cpy_r_match_args);
    CPy_DecRef(cpy_r_r53);
    goto CPyL36;
}

PyObject *CPyPy_attrs____add_match_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "attributes", 0};
    static CPyArg_Parser parser = {"OO:_add_match_args", kwlist, 0};
    PyObject *obj_ctx;
    PyObject *obj_attributes;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_ctx, &obj_attributes)) {
        return NULL;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    PyObject *arg_attributes;
    if (likely(PyList_Check(obj_attributes)))
        arg_attributes = obj_attributes;
    else {
        CPy_TypeError("list", obj_attributes); 
        goto fail;
    }
    char retval = CPyDef_attrs____add_match_args(arg_ctx, arg_attributes);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_add_match_args", 906, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs___MethodAdder_____init__(PyObject *cpy_r_self, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    CPy_INCREF(cpy_r_ctx);
    ((mypy___plugins___attrs___MethodAdderObject *)cpy_r_self)->_ctx = cpy_r_ctx;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "__init__", 933, CPyStatic_attrs___globals);
        goto CPyL4;
    }
    if (likely(Py_TYPE(cpy_r_r0) == CPyType_nodes___ClassDef))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "__init__", 933, CPyStatic_attrs___globals, "mypy.nodes.ClassDef", cpy_r_r0);
        goto CPyL4;
    }
    cpy_r_r2 = ((mypy___nodes___ClassDefObject *)cpy_r_r1)->_info;
    CPy_INCREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = CPyDef_typevars___fill_typevars(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "__init__", 933, CPyStatic_attrs___globals);
        goto CPyL4;
    }
    ((mypy___plugins___attrs___MethodAdderObject *)cpy_r_self)->_self_type = cpy_r_r3;
    return 1;
CPyL4: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_attrs___MethodAdder_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ctx", 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrs___MethodAdder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.attrs.MethodAdder", obj_self); 
        goto fail;
    }
    PyObject * arg_ctx;
    if (likely(PyTuple_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("tuple", obj_ctx); 
        goto fail;
    }
    char retval = CPyDef_attrs___MethodAdder_____init__(arg_self, arg_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "__init__", 931, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs___MethodAdder___add_method(PyObject *cpy_r_self, PyObject *cpy_r_method_name, PyObject *cpy_r_args, PyObject *cpy_r_ret_type, PyObject *cpy_r_self_type, PyObject *cpy_r_tvd) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    if (cpy_r_self_type != NULL) goto CPyL12;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_self_type = cpy_r_r0;
CPyL2: ;
    if (cpy_r_tvd != NULL) goto CPyL13;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_tvd = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_self_type != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL14;
    if (likely(cpy_r_self_type != Py_None))
        cpy_r_r4 = cpy_r_self_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "add_method", 948, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_self_type);
        goto CPyL15;
    }
    cpy_r_r5 = cpy_r_r4;
    goto CPyL8;
CPyL7: ;
    cpy_r_r6 = ((mypy___plugins___attrs___MethodAdderObject *)cpy_r_self)->_self_type;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r5 = cpy_r_r6;
CPyL8: ;
    cpy_r_self_type = cpy_r_r5;
    cpy_r_r7 = ((mypy___plugins___attrs___MethodAdderObject *)cpy_r_self)->_ctx;
    CPy_INCREF(cpy_r_r7);
    if (likely(cpy_r_self_type != Py_None))
        cpy_r_r8 = cpy_r_self_type;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "add_method", 949, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_self_type);
        goto CPyL16;
    }
    cpy_r_r9 = 2;
    cpy_r_r10 = 2;
    cpy_r_r11 = CPyDef_plugins___common___add_method(cpy_r_r7, cpy_r_method_name, cpy_r_args, cpy_r_ret_type, cpy_r_r8, cpy_r_tvd, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_tvd);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "add_method", 949, CPyStatic_attrs___globals);
        goto CPyL11;
    }
    return 1;
CPyL11: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL12: ;
    CPy_INCREF(cpy_r_self_type);
    goto CPyL2;
CPyL13: ;
    CPy_INCREF(cpy_r_tvd);
    goto CPyL4;
CPyL14: ;
    CPy_DECREF(cpy_r_self_type);
    goto CPyL7;
CPyL15: ;
    CPy_DecRef(cpy_r_tvd);
    goto CPyL11;
CPyL16: ;
    CPy_DecRef(cpy_r_tvd);
    CPy_DecRef(cpy_r_r7);
    goto CPyL11;
}

PyObject *CPyPy_attrs___MethodAdder___add_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"method_name", "args", "ret_type", "self_type", "tvd", 0};
    static CPyArg_Parser parser = {"OOO|OO:add_method", kwlist, 0};
    PyObject *obj_method_name;
    PyObject *obj_args;
    PyObject *obj_ret_type;
    PyObject *obj_self_type = NULL;
    PyObject *obj_tvd = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_method_name, &obj_args, &obj_ret_type, &obj_self_type, &obj_tvd)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_attrs___MethodAdder))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.plugins.attrs.MethodAdder", obj_self); 
        goto fail;
    }
    PyObject *arg_method_name;
    if (likely(PyUnicode_Check(obj_method_name)))
        arg_method_name = obj_method_name;
    else {
        CPy_TypeError("str", obj_method_name); 
        goto fail;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    PyObject *arg_ret_type;
    if (likely(PyObject_TypeCheck(obj_ret_type, CPyType_types___Type)))
        arg_ret_type = obj_ret_type;
    else {
        CPy_TypeError("mypy.types.Type", obj_ret_type); 
        goto fail;
    }
    PyObject *arg_self_type;
    if (obj_self_type == NULL) {
        arg_self_type = NULL;
        goto __LL4739;
    }
    if (PyObject_TypeCheck(obj_self_type, CPyType_types___Type))
        arg_self_type = obj_self_type;
    else {
        arg_self_type = NULL;
    }
    if (arg_self_type != NULL) goto __LL4739;
    if (obj_self_type == Py_None)
        arg_self_type = obj_self_type;
    else {
        arg_self_type = NULL;
    }
    if (arg_self_type != NULL) goto __LL4739;
    CPy_TypeError("mypy.types.Type or None", obj_self_type); 
    goto fail;
__LL4739: ;
    PyObject *arg_tvd;
    if (obj_tvd == NULL) {
        arg_tvd = NULL;
        goto __LL4740;
    }
    if (Py_TYPE(obj_tvd) == CPyType_types___TypeVarType)
        arg_tvd = obj_tvd;
    else {
        arg_tvd = NULL;
    }
    if (arg_tvd != NULL) goto __LL4740;
    if (obj_tvd == Py_None)
        arg_tvd = obj_tvd;
    else {
        arg_tvd = NULL;
    }
    if (arg_tvd != NULL) goto __LL4740;
    CPy_TypeError("mypy.types.TypeVarType or None", obj_tvd); 
    goto fail;
__LL4740: ;
    char retval = CPyDef_attrs___MethodAdder___add_method(arg_self, arg_method_name, arg_args, arg_ret_type, arg_self_type, arg_tvd);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "add_method", 935, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs____get_attrs_init_type(PyObject *cpy_r_typ) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_magic_attr;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_init_method;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyPtr cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_typ)->_type;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[4418]; /* '__attrs_attrs__' */
    cpy_r_r2 = CPyDef_nodes___TypeInfo___get(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_attrs_init_type", 956, CPyStatic_attrs___globals);
        goto CPyL18;
    }
    cpy_r_magic_attr = cpy_r_r2;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_magic_attr == cpy_r_r3;
    if (cpy_r_r4) goto CPyL19;
    if (likely(cpy_r_magic_attr != Py_None))
        cpy_r_r5 = cpy_r_magic_attr;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_attrs_init_type", 957, CPyStatic_attrs___globals, "mypy.nodes.SymbolTableNode", cpy_r_magic_attr);
        goto CPyL20;
    }
    cpy_r_r6 = ((mypy___nodes___SymbolTableNodeObject *)cpy_r_r5)->_plugin_generated;
    CPy_DECREF(cpy_r_magic_attr);
    if (cpy_r_r6) goto CPyL5;
CPyL4: ;
    cpy_r_r7 = Py_None;
    CPy_INCREF(cpy_r_r7);
    return cpy_r_r7;
CPyL5: ;
    cpy_r_r8 = ((mypy___types___InstanceObject *)cpy_r_typ)->_type;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[288]; /* '__init__' */
    cpy_r_r10 = CPyDef_nodes___TypeInfo___get_method(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_attrs_init_type", 959, CPyStatic_attrs___globals);
        goto CPyL18;
    }
    cpy_r_r11 = PyObject_IsTrue(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_attrs_init_type", 959, CPyStatic_attrs___globals);
        goto CPyL21;
    }
    cpy_r_r13 = cpy_r_r11;
    if (!cpy_r_r13) goto CPyL22;
    cpy_r_r14 = cpy_r_r10;
    goto CPyL11;
CPyL9: ;
    cpy_r_r15 = ((mypy___types___InstanceObject *)cpy_r_typ)->_type;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyStatics[4401]; /* '__attrs_init__' */
    cpy_r_r17 = CPyDef_nodes___TypeInfo___get_method(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_attrs_init_type", 959, CPyStatic_attrs___globals);
        goto CPyL18;
    }
    cpy_r_r14 = cpy_r_r17;
CPyL11: ;
    cpy_r_init_method = cpy_r_r14;
    cpy_r_r18 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r19 = (CPyPtr)&((PyObject *)cpy_r_init_method)->ob_type;
    cpy_r_r20 = *(PyObject * *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 == cpy_r_r18;
    if (!cpy_r_r21) goto CPyL23;
    if (likely(Py_TYPE(cpy_r_init_method) == CPyType_nodes___FuncDef))
        cpy_r_r22 = cpy_r_init_method;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_attrs_init_type", 960, CPyStatic_attrs___globals, "mypy.nodes.FuncDef", cpy_r_init_method);
        goto CPyL24;
    }
    cpy_r_r23 = ((mypy___nodes___FuncDefObject *)cpy_r_r22)->_type;
    cpy_r_r24 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_r23)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (cpy_r_r27) {
        goto CPyL15;
    } else
        goto CPyL23;
CPyL14: ;
    cpy_r_r28 = Py_None;
    CPy_INCREF(cpy_r_r28);
    return cpy_r_r28;
CPyL15: ;
    if (likely(Py_TYPE(cpy_r_init_method) == CPyType_nodes___FuncDef))
        cpy_r_r29 = cpy_r_init_method;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_attrs_init_type", 962, CPyStatic_attrs___globals, "mypy.nodes.FuncDef", cpy_r_init_method);
        goto CPyL24;
    }
    cpy_r_r30 = ((mypy___nodes___FuncDefObject *)cpy_r_r29)->_type;
    CPy_INCREF(cpy_r_r30);
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_types___CallableType))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_attrs_init_type", 962, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_r30);
        goto CPyL24;
    }
    CPy_DECREF(cpy_r_init_method);
    return cpy_r_r31;
CPyL18: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL19: ;
    CPy_DECREF(cpy_r_magic_attr);
    goto CPyL4;
CPyL20: ;
    CPy_DecRef(cpy_r_magic_attr);
    goto CPyL18;
CPyL21: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL18;
CPyL22: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL9;
CPyL23: ;
    CPy_DECREF(cpy_r_init_method);
    goto CPyL14;
CPyL24: ;
    CPy_DecRef(cpy_r_init_method);
    goto CPyL18;
}

PyObject *CPyPy_attrs____get_attrs_init_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typ", 0};
    static CPyArg_Parser parser = {"O:_get_attrs_init_type", kwlist, 0};
    PyObject *obj_typ;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_typ)) {
        return NULL;
    }
    PyObject *arg_typ;
    if (likely(Py_TYPE(obj_typ) == CPyType_types___Instance))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.types.Instance", obj_typ); 
        goto fail;
    }
    PyObject *retval = CPyDef_attrs____get_attrs_init_type(arg_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_get_attrs_init_type", 952, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs____fail_not_attrs_class(PyObject *cpy_r_ctx, PyObject *cpy_r_t, PyObject *cpy_r_parent_t) {
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
    size_t __tmp4741;
    size_t __tmp4742;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 966, CPyStatic_attrs___globals);
        goto CPyL27;
    }
    if (likely(Py_TYPE(cpy_r_r0) == CPyType_checker___TypeChecker))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 966, CPyStatic_attrs___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r0);
        goto CPyL27;
    }
    __tmp4741 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r1)->vtable, 1);
    cpy_r_r2 = *(PyObject * *)((char *)cpy_r_r1 + __tmp4741);
    if (unlikely(cpy_r_r2 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r2);
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 966, CPyStatic_attrs___globals);
        goto CPyL27;
    }
CPyL3: ;
    cpy_r_r3 = CPY_INT_TAG;
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_messages___format_type_bare(cpy_r_t, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 966, CPyStatic_attrs___globals);
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
    cpy_r_r11 = CPyStatics[4419]; /* 'Argument 1 to "evolve" has a variable type "' */
    cpy_r_r12 = CPyStatics[4420]; /* '" not bound to an attrs class' */
    cpy_r_r13 = CPyStr_Build(3, cpy_r_r11, cpy_r_t_name, cpy_r_r12);
    CPy_DECREF(cpy_r_t_name);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 969, CPyStatic_attrs___globals);
        goto CPyL27;
    }
    cpy_r_r14 = cpy_r_r13;
    goto CPyL10;
CPyL8: ;
    cpy_r_r15 = CPyStatics[4421]; /* 'Argument 1 to "evolve" has incompatible type "' */
    cpy_r_r16 = CPyStatics[4422]; /* '"; expected an attrs class' */
    cpy_r_r17 = CPyStr_Build(3, cpy_r_r15, cpy_r_t_name, cpy_r_r16);
    CPy_DECREF(cpy_r_t_name);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 971, CPyStatic_attrs___globals);
        goto CPyL27;
    }
    cpy_r_r14 = cpy_r_r17;
CPyL10: ;
    cpy_r_msg = cpy_r_r14;
    goto CPyL21;
CPyL11: ;
    cpy_r_r18 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 974, CPyStatic_attrs___globals);
        goto CPyL28;
    }
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_checker___TypeChecker))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 974, CPyStatic_attrs___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r18);
        goto CPyL28;
    }
    __tmp4742 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r19)->vtable, 1);
    cpy_r_r20 = *(PyObject * *)((char *)cpy_r_r19 + __tmp4742);
    if (unlikely(cpy_r_r20 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r20);
    }
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 974, CPyStatic_attrs___globals);
        goto CPyL28;
    }
CPyL14: ;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_messages___format_type_bare(cpy_r_parent_t, cpy_r_r20, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 974, CPyStatic_attrs___globals);
        goto CPyL28;
    }
    cpy_r_pt_name = cpy_r_r23;
    cpy_r_r24 = (PyObject *)CPyType_types___TypeVarType;
    cpy_r_r25 = (CPyPtr)&((PyObject *)cpy_r_t)->ob_type;
    cpy_r_r26 = *(PyObject * *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 == cpy_r_r24;
    if (!cpy_r_r27) goto CPyL18;
    cpy_r_r28 = CPyStatics[4423]; /* 'Argument 1 to "evolve" has type "' */
    cpy_r_r29 = CPyStatics[4424]; /* '" whose item "' */
    cpy_r_r30 = CPyStatics[4425]; /* '" is not bound to an attrs class' */
    cpy_r_r31 = CPyStr_Build(5, cpy_r_r28, cpy_r_pt_name, cpy_r_r29, cpy_r_t_name, cpy_r_r30);
    CPy_DECREF(cpy_r_pt_name);
    CPy_DECREF(cpy_r_t_name);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 976, CPyStatic_attrs___globals);
        goto CPyL27;
    }
    cpy_r_r32 = cpy_r_r31;
    goto CPyL20;
CPyL18: ;
    cpy_r_r33 = CPyStatics[4421]; /* 'Argument 1 to "evolve" has incompatible type "' */
    cpy_r_r34 = CPyStatics[4424]; /* '" whose item "' */
    cpy_r_r35 = CPyStatics[4426]; /* '" is not an attrs class' */
    cpy_r_r36 = CPyStr_Build(5, cpy_r_r33, cpy_r_pt_name, cpy_r_r34, cpy_r_t_name, cpy_r_r35);
    CPy_DECREF(cpy_r_pt_name);
    CPy_DECREF(cpy_r_t_name);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 978, CPyStatic_attrs___globals);
        goto CPyL27;
    }
    cpy_r_r32 = cpy_r_r36;
CPyL20: ;
    cpy_r_msg = cpy_r_r32;
CPyL21: ;
    cpy_r_r37 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 981, CPyStatic_attrs___globals);
        goto CPyL29;
    }
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_checker___TypeChecker))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 981, CPyStatic_attrs___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r37);
        goto CPyL29;
    }
    cpy_r_r39 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 981, CPyStatic_attrs___globals);
        goto CPyL30;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r39, CPyType_nodes___Context)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 981, CPyStatic_attrs___globals, "mypy.nodes.Context", cpy_r_r39);
        goto CPyL30;
    }
    cpy_r_r41 = NULL;
    cpy_r_r42 = CPY_GET_METHOD_TRAIT(cpy_r_r38, CPyType_plugin___CheckerPluginInterface, 1, mypy___plugin___CheckerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *))(cpy_r_r38, cpy_r_msg, cpy_r_r40, cpy_r_r41); /* fail */
    CPy_DECREF(cpy_r_msg);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 981, CPyStatic_attrs___globals);
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

PyObject *CPyPy_attrs____fail_not_attrs_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "t", "parent_t", 0};
    static CPyArg_Parser parser = {"OOO:_fail_not_attrs_class", kwlist, 0};
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
    char retval = CPyDef_attrs____fail_not_attrs_class(arg_ctx, arg_t, arg_parent_t);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_fail_not_attrs_class", 965, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs____get_expanded_attr_types(PyObject *cpy_r_ctx, PyObject *cpy_r_typ, PyObject *cpy_r_display_typ, PyObject *cpy_r_parent_typ) {
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
    PyObject *cpy_r_init_func;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_field_names;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_field_types;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject **cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyPtr cpy_r_r72;
    CPyPtr cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
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
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 998, CPyStatic_attrs___globals);
        goto CPyL52;
    }
    cpy_r_ret = cpy_r_r9;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___UnionType))
        cpy_r_r10 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 999, CPyStatic_attrs___globals, "mypy.types.UnionType", cpy_r_typ);
        goto CPyL53;
    }
    cpy_r_r11 = CPyDef_types___UnionType___relevant_items(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 999, CPyStatic_attrs___globals);
        goto CPyL53;
    }
    cpy_r_r12 = 0;
CPyL7: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL54;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_r11, cpy_r_r12);
    if (likely(PyObject_TypeCheck(cpy_r_r17, CPyType_types___Type)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 999, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_r17);
        goto CPyL55;
    }
    cpy_r_item = cpy_r_r18;
    cpy_r_r19 = CPyDef_types___get_proper_type(cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1000, CPyStatic_attrs___globals);
        goto CPyL55;
    }
    if (likely(cpy_r_r19 != Py_None))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1000, CPyStatic_attrs___globals, "mypy.types.ProperType", cpy_r_r19);
        goto CPyL55;
    }
    cpy_r_item = cpy_r_r20;
    CPy_INCREF(cpy_r_item);
    if (likely(PyObject_TypeCheck(cpy_r_item, CPyType_types___ProperType)))
        cpy_r_r21 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1001, CPyStatic_attrs___globals, "mypy.types.ProperType", cpy_r_item);
        goto CPyL56;
    }
    if (likely(PyObject_TypeCheck(cpy_r_item, CPyType_types___ProperType)))
        cpy_r_r22 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1001, CPyStatic_attrs___globals, "mypy.types.ProperType", cpy_r_item);
        goto CPyL57;
    }
    cpy_r_r23 = CPyDef_attrs____get_expanded_attr_types(cpy_r_ctx, cpy_r_r21, cpy_r_r22, cpy_r_parent_typ);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1001, CPyStatic_attrs___globals);
        goto CPyL55;
    }
    cpy_r_item_types = cpy_r_r23;
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_ret != cpy_r_r24;
    if (!cpy_r_r25) goto CPyL58;
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_item_types != cpy_r_r26;
    if (!cpy_r_r27) goto CPyL58;
    if (likely(cpy_r_item_types != Py_None))
        cpy_r_r28 = cpy_r_item_types;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1003, CPyStatic_attrs___globals, "list", cpy_r_item_types);
        goto CPyL55;
    }
    cpy_r_r29 = PyNumber_InPlaceAdd(cpy_r_ret, cpy_r_r28);
    CPy_DECREF(cpy_r_ret);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1003, CPyStatic_attrs___globals);
        goto CPyL59;
    }
    if (PyList_Check(cpy_r_r29))
        cpy_r_r30 = cpy_r_r29;
    else {
        cpy_r_r30 = NULL;
    }
    if (cpy_r_r30 != NULL) goto __LL4743;
    if (cpy_r_r29 == Py_None)
        cpy_r_r30 = cpy_r_r29;
    else {
        cpy_r_r30 = NULL;
    }
    if (cpy_r_r30 != NULL) goto __LL4743;
    CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1003, CPyStatic_attrs___globals, "list or None", cpy_r_r29);
    goto CPyL59;
__LL4743: ;
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
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1009, CPyStatic_attrs___globals, "mypy.types.TypeVarType", cpy_r_typ);
        goto CPyL52;
    }
    cpy_r_r38 = ((mypy___types___TypeVarTypeObject *)cpy_r_r37)->_upper_bound;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = CPyDef_types___get_proper_type(cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1009, CPyStatic_attrs___globals);
        goto CPyL52;
    }
    if (likely(cpy_r_r39 != Py_None))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1009, CPyStatic_attrs___globals, "mypy.types.ProperType", cpy_r_r39);
        goto CPyL52;
    }
    cpy_r_r41 = CPyDef_attrs____get_expanded_attr_types(cpy_r_ctx, cpy_r_r40, cpy_r_display_typ, cpy_r_parent_typ);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1008, CPyStatic_attrs___globals);
        goto CPyL52;
    }
    return cpy_r_r41;
CPyL29: ;
    cpy_r_r42 = (PyObject *)CPyType_types___Instance;
    cpy_r_r43 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r44 = *(PyObject * *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 == cpy_r_r42;
    if (!cpy_r_r45) goto CPyL50;
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r46 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1012, CPyStatic_attrs___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL52;
    }
    cpy_r_r47 = CPyDef_attrs____get_attrs_init_type(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1012, CPyStatic_attrs___globals);
        goto CPyL52;
    }
    cpy_r_init_func = cpy_r_r47;
    cpy_r_r48 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r49 = cpy_r_init_func == cpy_r_r48;
    if (cpy_r_r49) {
        goto CPyL60;
    } else
        goto CPyL35;
CPyL33: ;
    cpy_r_r50 = CPyDef_attrs____fail_not_attrs_class(cpy_r_ctx, cpy_r_display_typ, cpy_r_parent_typ);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1014, CPyStatic_attrs___globals);
        goto CPyL52;
    }
    cpy_r_r51 = Py_None;
    CPy_INCREF(cpy_r_r51);
    return cpy_r_r51;
CPyL35: ;
    if (likely(cpy_r_init_func != Py_None))
        cpy_r_r52 = cpy_r_init_func;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1016, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_init_func);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_typ);
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___Instance))
        cpy_r_r53 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1016, CPyStatic_attrs___globals, "mypy.types.Instance", cpy_r_typ);
        goto CPyL61;
    }
    cpy_r_r54 = CPyDef_expandtype___expand_type_by_instance(cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1016, CPyStatic_attrs___globals);
        goto CPyL52;
    }
    if (likely(Py_TYPE(cpy_r_r54) == CPyType_types___CallableType))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1016, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_r54);
        goto CPyL52;
    }
    cpy_r_init_func = cpy_r_r55;
    if (likely(cpy_r_init_func != Py_None))
        cpy_r_r56 = cpy_r_init_func;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1018, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_init_func);
        goto CPyL62;
    }
    cpy_r_r57 = ((mypy___types___CallableTypeObject *)cpy_r_r56)->_arg_names;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = CPyList_GetSlice(cpy_r_r57, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1018, CPyStatic_attrs___globals);
        goto CPyL62;
    }
    if (likely(PyList_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1018, CPyStatic_attrs___globals, "list", cpy_r_r58);
        goto CPyL62;
    }
    cpy_r_field_names = cpy_r_r59;
    if (likely(cpy_r_init_func != Py_None))
        cpy_r_r60 = cpy_r_init_func;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1019, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_init_func);
        goto CPyL63;
    }
    cpy_r_r61 = ((mypy___types___CallableTypeObject *)cpy_r_r60)->_arg_types;
    CPy_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_init_func);
    cpy_r_r62 = CPyList_GetSlice(cpy_r_r61, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1019, CPyStatic_attrs___globals);
        goto CPyL64;
    }
    if (likely(PyList_Check(cpy_r_r62)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1019, CPyStatic_attrs___globals, "list", cpy_r_r62);
        goto CPyL64;
    }
    cpy_r_field_types = cpy_r_r63;
    cpy_r_r64 = CPyModule_builtins;
    cpy_r_r65 = CPyStatics[794]; /* 'zip' */
    cpy_r_r66 = CPyObject_GetAttr(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1020, CPyStatic_attrs___globals);
        goto CPyL65;
    }
    PyObject *cpy_r_r67[2] = {cpy_r_field_names, cpy_r_field_types};
    cpy_r_r68 = (PyObject **)&cpy_r_r67;
    cpy_r_r69 = _PyObject_Vectorcall(cpy_r_r66, cpy_r_r68, 2, 0);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1020, CPyStatic_attrs___globals);
        goto CPyL65;
    }
    CPy_DECREF(cpy_r_field_names);
    CPy_DECREF(cpy_r_field_types);
    cpy_r_r70 = CPyDict_FromAny(cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1020, CPyStatic_attrs___globals);
        goto CPyL52;
    }
    cpy_r_r71 = PyList_New(1);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1020, CPyStatic_attrs___globals);
        goto CPyL66;
    }
    cpy_r_r72 = (CPyPtr)&((PyListObject *)cpy_r_r71)->ob_item;
    cpy_r_r73 = *(CPyPtr *)cpy_r_r72;
    *(PyObject * *)cpy_r_r73 = cpy_r_r70;
    return cpy_r_r71;
CPyL50: ;
    cpy_r_r74 = CPyDef_attrs____fail_not_attrs_class(cpy_r_ctx, cpy_r_display_typ, cpy_r_parent_typ);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 1022, CPyStatic_attrs___globals);
        goto CPyL52;
    }
    cpy_r_r75 = Py_None;
    CPy_INCREF(cpy_r_r75);
    return cpy_r_r75;
CPyL52: ;
    cpy_r_r76 = NULL;
    return cpy_r_r76;
CPyL53: ;
    CPy_DecRef(cpy_r_ret);
    goto CPyL52;
CPyL54: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL22;
CPyL55: ;
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_r11);
    goto CPyL52;
CPyL56: ;
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_item);
    goto CPyL52;
CPyL57: ;
    CPy_DecRef(cpy_r_ret);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r21);
    goto CPyL52;
CPyL58: ;
    CPy_DECREF(cpy_r_ret);
    CPy_DECREF(cpy_r_item_types);
    goto CPyL20;
CPyL59: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL52;
CPyL60: ;
    CPy_DECREF(cpy_r_init_func);
    goto CPyL33;
CPyL61: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL52;
CPyL62: ;
    CPy_DecRef(cpy_r_init_func);
    goto CPyL52;
CPyL63: ;
    CPy_DecRef(cpy_r_init_func);
    CPy_DecRef(cpy_r_field_names);
    goto CPyL52;
CPyL64: ;
    CPy_DecRef(cpy_r_field_names);
    goto CPyL52;
CPyL65: ;
    CPy_DecRef(cpy_r_field_names);
    CPy_DecRef(cpy_r_field_types);
    goto CPyL52;
CPyL66: ;
    CPy_DecRef(cpy_r_r70);
    goto CPyL52;
}

PyObject *CPyPy_attrs____get_expanded_attr_types(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", "typ", "display_typ", "parent_typ", 0};
    static CPyArg_Parser parser = {"OOOO:_get_expanded_attr_types", kwlist, 0};
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
    PyObject *retval = CPyDef_attrs____get_expanded_attr_types(arg_ctx, arg_typ, arg_display_typ, arg_parent_typ);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_get_expanded_attr_types", 984, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs____meet_fields(PyObject *cpy_r_types) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_field_to_types;
    CPyTagged cpy_r_r8;
    CPyPtr cpy_r_r9;
    int64_t cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_fields;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    tuple_T2OO cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    PyObject *cpy_r_r33;
    tuple_T4CIOO cpy_r_r34;
    CPyTagged cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_name_2;
    PyObject *cpy_r_f_types;
    CPyPtr cpy_r_r41;
    int64_t cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyPtr cpy_r_r44;
    int64_t cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
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
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    CPyTagged cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    cpy_r_r0 = (PyObject *)&PyList_Type;
    cpy_r_r1 = CPyStatic_attrs___globals;
    cpy_r_r2 = CPyStatics[73]; /* 'defaultdict' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1030, CPyStatic_attrs___globals);
        goto CPyL33;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_r0};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1030, CPyStatic_attrs___globals);
        goto CPyL33;
    }
    if (likely(PyDict_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_meet_fields", 1030, CPyStatic_attrs___globals, "dict", cpy_r_r6);
        goto CPyL33;
    }
    cpy_r_field_to_types = cpy_r_r7;
    cpy_r_r8 = 0;
CPyL4: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r12) goto CPyL14;
    cpy_r_r13 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r8);
    cpy_r_fields = cpy_r_r13;
    cpy_r_r14 = CPyStatics[219]; /* 'items' */
    PyObject *cpy_r_r15[1] = {cpy_r_fields};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = PyObject_VectorcallMethod(cpy_r_r14, cpy_r_r16, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1032, CPyStatic_attrs___globals);
        goto CPyL34;
    }
    CPy_DECREF(cpy_r_fields);
    cpy_r_r18 = PyObject_GetIter(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1032, CPyStatic_attrs___globals);
        goto CPyL35;
    }
CPyL7: ;
    cpy_r_r19 = PyIter_Next(cpy_r_r18);
    if (cpy_r_r19 == NULL) goto CPyL36;
    PyObject *__tmp4744;
    if (unlikely(!(PyTuple_Check(cpy_r_r19) && PyTuple_GET_SIZE(cpy_r_r19) == 2))) {
        __tmp4744 = NULL;
        goto __LL4745;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r19, 0))))
        __tmp4744 = PyTuple_GET_ITEM(cpy_r_r19, 0);
    else {
        __tmp4744 = NULL;
    }
    if (__tmp4744 == NULL) goto __LL4745;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r19, 1), CPyType_types___Type)))
        __tmp4744 = PyTuple_GET_ITEM(cpy_r_r19, 1);
    else {
        __tmp4744 = NULL;
    }
    if (__tmp4744 == NULL) goto __LL4745;
    __tmp4744 = cpy_r_r19;
__LL4745: ;
    if (unlikely(__tmp4744 == NULL)) {
        CPy_TypeError("tuple[str, mypy.types.Type]", cpy_r_r19); cpy_r_r20 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp4746 = PyTuple_GET_ITEM(cpy_r_r19, 0);
        CPy_INCREF(__tmp4746);
        PyObject *__tmp4747;
        if (likely(PyUnicode_Check(__tmp4746)))
            __tmp4747 = __tmp4746;
        else {
            CPy_TypeError("str", __tmp4746); 
            __tmp4747 = NULL;
        }
        cpy_r_r20.f0 = __tmp4747;
        PyObject *__tmp4748 = PyTuple_GET_ITEM(cpy_r_r19, 1);
        CPy_INCREF(__tmp4748);
        PyObject *__tmp4749;
        if (likely(PyObject_TypeCheck(__tmp4748, CPyType_types___Type)))
            __tmp4749 = __tmp4748;
        else {
            CPy_TypeError("mypy.types.Type", __tmp4748); 
            __tmp4749 = NULL;
        }
        cpy_r_r20.f1 = __tmp4749;
    }
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20.f0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1032, CPyStatic_attrs___globals);
        goto CPyL37;
    }
    cpy_r_r21 = cpy_r_r20.f0;
    CPy_INCREF(cpy_r_r21);
    cpy_r_name = cpy_r_r21;
    cpy_r_r22 = cpy_r_r20.f1;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r20.f0);
    CPy_DECREF(cpy_r_r20.f1);
    cpy_r_typ = cpy_r_r22;
    cpy_r_r23 = CPyDict_GetItem(cpy_r_field_to_types, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1033, CPyStatic_attrs___globals);
        goto CPyL38;
    }
    if (likely(PyList_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_meet_fields", 1033, CPyStatic_attrs___globals, "list", cpy_r_r23);
        goto CPyL38;
    }
    cpy_r_r25 = PyList_Append(cpy_r_r24, cpy_r_typ);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1033, CPyStatic_attrs___globals);
        goto CPyL37;
    } else
        goto CPyL7;
CPyL12: ;
    cpy_r_r27 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1032, CPyStatic_attrs___globals);
        goto CPyL35;
    }
    cpy_r_r28 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r28;
    goto CPyL4;
CPyL14: ;
    cpy_r_r29 = PyDict_New();
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1035, CPyStatic_attrs___globals);
        goto CPyL35;
    }
    cpy_r_r30 = 0;
    cpy_r_r31 = PyDict_Size(cpy_r_field_to_types);
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = CPyDict_GetItemsIter(cpy_r_field_to_types);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1035, CPyStatic_attrs___globals);
        goto CPyL39;
    }
CPyL16: ;
    cpy_r_r34 = CPyDict_NextItem(cpy_r_r33, cpy_r_r30);
    cpy_r_r35 = cpy_r_r34.f1;
    cpy_r_r30 = cpy_r_r35;
    cpy_r_r36 = cpy_r_r34.f0;
    if (!cpy_r_r36) goto CPyL40;
    cpy_r_r37 = cpy_r_r34.f2;
    CPy_INCREF(cpy_r_r37);
    cpy_r_r38 = cpy_r_r34.f3;
    CPy_INCREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r34.f2);
    CPy_DECREF(cpy_r_r34.f3);
    if (likely(PyUnicode_Check(cpy_r_r37)))
        cpy_r_r39 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_meet_fields", 1035, CPyStatic_attrs___globals, "str", cpy_r_r37);
        goto CPyL41;
    }
    if (likely(PyList_Check(cpy_r_r38)))
        cpy_r_r40 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_meet_fields", 1035, CPyStatic_attrs___globals, "list", cpy_r_r38);
        goto CPyL42;
    }
    cpy_r_name_2 = cpy_r_r39;
    cpy_r_f_types = cpy_r_r40;
    cpy_r_r41 = (CPyPtr)&((PyVarObject *)cpy_r_f_types)->ob_size;
    cpy_r_r42 = *(int64_t *)cpy_r_r41;
    cpy_r_r43 = cpy_r_r42 << 1;
    cpy_r_r44 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r45 = *(int64_t *)cpy_r_r44;
    cpy_r_r46 = cpy_r_r45 << 1;
    cpy_r_r47 = cpy_r_r43 == cpy_r_r46;
    if (!cpy_r_r47) goto CPyL43;
    cpy_r_r48 = CPyStatic_attrs___globals;
    cpy_r_r49 = CPyStatics[2697]; /* 'meet_types' */
    cpy_r_r50 = CPyDict_GetItem(cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1036, CPyStatic_attrs___globals);
        goto CPyL44;
    }
    cpy_r_r51 = CPyStatic_attrs___globals;
    cpy_r_r52 = CPyStatics[4427]; /* 'reduce' */
    cpy_r_r53 = CPyDict_GetItem(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1036, CPyStatic_attrs___globals);
        goto CPyL45;
    }
    PyObject *cpy_r_r54[2] = {cpy_r_r50, cpy_r_f_types};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = _PyObject_Vectorcall(cpy_r_r53, cpy_r_r55, 2, 0);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1036, CPyStatic_attrs___globals);
        goto CPyL45;
    }
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_f_types);
    if (likely(PyObject_TypeCheck(cpy_r_r56, CPyType_types___Type)))
        cpy_r_r57 = cpy_r_r56;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_meet_fields", 1036, CPyStatic_attrs___globals, "mypy.types.Type", cpy_r_r56);
        goto CPyL46;
    }
    cpy_r_r58 = CPyDef_types___get_proper_type(cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1036, CPyStatic_attrs___globals);
        goto CPyL46;
    }
    if (likely(cpy_r_r58 != Py_None))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "_meet_fields", 1036, CPyStatic_attrs___globals, "mypy.types.ProperType", cpy_r_r58);
        goto CPyL46;
    }
    cpy_r_r60 = cpy_r_r59;
    goto CPyL29;
CPyL27: ;
    cpy_r_r61 = 2;
    cpy_r_r62 = CPY_INT_TAG;
    cpy_r_r63 = CPY_INT_TAG;
    cpy_r_r64 = CPyDef_types___UninhabitedType(cpy_r_r61, cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1038, CPyStatic_attrs___globals);
        goto CPyL46;
    }
    cpy_r_r60 = cpy_r_r64;
CPyL29: ;
    cpy_r_r65 = CPyDict_SetItem(cpy_r_r29, cpy_r_name_2, cpy_r_r60);
    CPy_DECREF(cpy_r_name_2);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1035, CPyStatic_attrs___globals);
        goto CPyL47;
    }
    cpy_r_r67 = CPyDict_CheckSize(cpy_r_field_to_types, cpy_r_r32);
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1035, CPyStatic_attrs___globals);
        goto CPyL47;
    } else
        goto CPyL16;
CPyL31: ;
    cpy_r_r68 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1035, CPyStatic_attrs___globals);
        goto CPyL48;
    }
    return cpy_r_r29;
CPyL33: ;
    cpy_r_r69 = NULL;
    return cpy_r_r69;
CPyL34: ;
    CPy_DecRef(cpy_r_field_to_types);
    CPy_DecRef(cpy_r_fields);
    goto CPyL33;
CPyL35: ;
    CPy_DecRef(cpy_r_field_to_types);
    goto CPyL33;
CPyL36: ;
    CPy_DECREF(cpy_r_r18);
    goto CPyL12;
CPyL37: ;
    CPy_DecRef(cpy_r_field_to_types);
    CPy_DecRef(cpy_r_r18);
    goto CPyL33;
CPyL38: ;
    CPy_DecRef(cpy_r_field_to_types);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_typ);
    goto CPyL33;
CPyL39: ;
    CPy_DecRef(cpy_r_field_to_types);
    CPy_DecRef(cpy_r_r29);
    goto CPyL33;
CPyL40: ;
    CPy_DECREF(cpy_r_field_to_types);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r34.f2);
    CPy_DECREF(cpy_r_r34.f3);
    goto CPyL31;
CPyL41: ;
    CPy_DecRef(cpy_r_field_to_types);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r38);
    goto CPyL33;
CPyL42: ;
    CPy_DecRef(cpy_r_field_to_types);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r39);
    goto CPyL33;
CPyL43: ;
    CPy_DECREF(cpy_r_f_types);
    goto CPyL27;
CPyL44: ;
    CPy_DecRef(cpy_r_field_to_types);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_name_2);
    CPy_DecRef(cpy_r_f_types);
    goto CPyL33;
CPyL45: ;
    CPy_DecRef(cpy_r_field_to_types);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_name_2);
    CPy_DecRef(cpy_r_f_types);
    CPy_DecRef(cpy_r_r50);
    goto CPyL33;
CPyL46: ;
    CPy_DecRef(cpy_r_field_to_types);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_name_2);
    goto CPyL33;
CPyL47: ;
    CPy_DecRef(cpy_r_field_to_types);
    CPy_DecRef(cpy_r_r29);
    CPy_DecRef(cpy_r_r33);
    goto CPyL33;
CPyL48: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL33;
}

PyObject *CPyPy_attrs____meet_fields(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"types", 0};
    static CPyArg_Parser parser = {"O:_meet_fields", kwlist, 0};
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
    PyObject *retval = CPyDef_attrs____meet_fields(arg_types);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "_meet_fields", 1026, CPyStatic_attrs___globals);
    return NULL;
}

PyObject *CPyDef_attrs___evolve_function_sig_callback(PyObject *cpy_r_ctx) {
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
    PyObject *cpy_r_inst_arg;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_inst_type;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_inst_type_str;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_attr_types;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_fields;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject **cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyPtr cpy_r_r62;
    CPyPtr cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyPtr cpy_r_r68;
    CPyPtr cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyPtr cpy_r_r73;
    CPyPtr cpy_r_r74;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject **cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    CPyPtr cpy_r_r84;
    CPyPtr cpy_r_r85;
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
    CPyTagged cpy_r_r98;
    CPyTagged cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    size_t __tmp4750;
    cpy_r_r0 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1048, CPyStatic_attrs___globals);
        goto CPyL71;
    }
    if (likely(PyList_Check(cpy_r_r0)))
        cpy_r_r1 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1048, CPyStatic_attrs___globals, "list", cpy_r_r0);
        goto CPyL71;
    }
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = cpy_r_r4 != 4;
    if (!cpy_r_r5) goto CPyL15;
    cpy_r_r6 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1050, CPyStatic_attrs___globals);
        goto CPyL71;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_checker___TypeChecker))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1050, CPyStatic_attrs___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r6);
        goto CPyL71;
    }
    cpy_r_r8 = CPyStatics[178]; /* '"' */
    cpy_r_r9 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1050, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_types___CallableType))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1050, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_r9);
        goto CPyL72;
    }
    cpy_r_r11 = ((mypy___types___CallableTypeObject *)cpy_r_r10)->_name;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = PyObject_Str(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1050, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r13 = CPyStatics[4428]; /* '" has unexpected type annotation' */
    cpy_r_r14 = CPyStr_Build(3, cpy_r_r8, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1050, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r15 = CPySequenceTuple_GetItem(cpy_r_ctx, 4);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1050, CPyStatic_attrs___globals);
        goto CPyL73;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r15, CPyType_nodes___Context)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1050, CPyStatic_attrs___globals, "mypy.nodes.Context", cpy_r_r15);
        goto CPyL73;
    }
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPY_GET_METHOD_TRAIT(cpy_r_r7, CPyType_plugin___CheckerPluginInterface, 1, mypy___plugin___CheckerPluginInterfaceObject, char (*)(PyObject *, PyObject *, PyObject *, PyObject *))(cpy_r_r7, cpy_r_r14, cpy_r_r16, cpy_r_r17); /* fail */
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1050, CPyStatic_attrs___globals);
        goto CPyL71;
    }
    cpy_r_r19 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1051, CPyStatic_attrs___globals);
        goto CPyL71;
    }
    if (likely(Py_TYPE(cpy_r_r19) == CPyType_types___CallableType))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1051, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_r19);
        goto CPyL71;
    }
    return cpy_r_r20;
CPyL15: ;
    cpy_r_r21 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1053, CPyStatic_attrs___globals);
        goto CPyL71;
    }
    if (likely(PyList_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1053, CPyStatic_attrs___globals, "list", cpy_r_r21);
        goto CPyL71;
    }
    cpy_r_r23 = CPyList_GetItemShortBorrow(cpy_r_r22, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1053, CPyStatic_attrs___globals);
        goto CPyL74;
    }
    if (likely(PyList_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1053, CPyStatic_attrs___globals, "list", cpy_r_r23);
        goto CPyL74;
    }
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_r24)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = cpy_r_r26 << 1;
    cpy_r_r28 = cpy_r_r27 != 2;
    CPy_DECREF(cpy_r_r22);
    if (!cpy_r_r28) goto CPyL23;
    cpy_r_r29 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1054, CPyStatic_attrs___globals);
        goto CPyL71;
    }
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_types___CallableType))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1054, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_r29);
        goto CPyL71;
    }
    return cpy_r_r30;
CPyL23: ;
    cpy_r_r31 = CPySequenceTuple_GetItem(cpy_r_ctx, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1056, CPyStatic_attrs___globals);
        goto CPyL71;
    }
    if (likely(PyList_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1056, CPyStatic_attrs___globals, "list", cpy_r_r31);
        goto CPyL71;
    }
    cpy_r_r33 = CPyList_GetItemShortBorrow(cpy_r_r32, 0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1056, CPyStatic_attrs___globals);
        goto CPyL75;
    }
    if (likely(PyList_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1056, CPyStatic_attrs___globals, "list", cpy_r_r33);
        goto CPyL75;
    }
    cpy_r_r35 = CPyList_GetItemShort(cpy_r_r34, 0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1056, CPyStatic_attrs___globals);
        goto CPyL75;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r35, CPyType_nodes___Expression)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1056, CPyStatic_attrs___globals, "mypy.nodes.Expression", cpy_r_r35);
        goto CPyL75;
    }
    CPy_DECREF(cpy_r_r32);
    cpy_r_inst_arg = cpy_r_r36;
    cpy_r_r37 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1057, CPyStatic_attrs___globals);
        goto CPyL76;
    }
    if (likely(Py_TYPE(cpy_r_r37) == CPyType_checker___TypeChecker))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1057, CPyStatic_attrs___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r37);
        goto CPyL76;
    }
    cpy_r_r39 = NULL;
    cpy_r_r40 = CPY_GET_METHOD_TRAIT(cpy_r_r38, CPyType_plugin___CheckerPluginInterface, 3, mypy___plugin___CheckerPluginInterfaceObject, PyObject * (*)(PyObject *, PyObject *, PyObject *))(cpy_r_r38, cpy_r_inst_arg, cpy_r_r39); /* get_expression_type */
    CPy_DECREF(cpy_r_inst_arg);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1057, CPyStatic_attrs___globals);
        goto CPyL71;
    }
    cpy_r_r41 = CPyDef_types___get_proper_type(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1057, CPyStatic_attrs___globals);
        goto CPyL71;
    }
    if (likely(cpy_r_r41 != Py_None))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1057, CPyStatic_attrs___globals, "mypy.types.ProperType", cpy_r_r41);
        goto CPyL71;
    }
    cpy_r_inst_type = cpy_r_r42;
    cpy_r_r43 = CPySequenceTuple_GetItem(cpy_r_ctx, 6);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1058, CPyStatic_attrs___globals);
        goto CPyL77;
    }
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_checker___TypeChecker))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1058, CPyStatic_attrs___globals, "mypy.plugin.CheckerPluginInterface", cpy_r_r43);
        goto CPyL77;
    }
    __tmp4750 = CPy_FindAttrOffset(CPyType_plugin___CheckerPluginInterface, ((mypy___plugin___CheckerPluginInterfaceObject *)cpy_r_r44)->vtable, 1);
    cpy_r_r45 = *(PyObject * *)((char *)cpy_r_r44 + __tmp4750);
    if (unlikely(cpy_r_r45 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'options' of 'CheckerPluginInterface' undefined");
    } else {
        CPy_INCREF(cpy_r_r45);
    }
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1058, CPyStatic_attrs___globals);
        goto CPyL77;
    }
CPyL37: ;
    cpy_r_r46 = CPY_INT_TAG;
    cpy_r_r47 = 2;
    cpy_r_r48 = CPyDef_messages___format_type_bare(cpy_r_inst_type, cpy_r_r45, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1058, CPyStatic_attrs___globals);
        goto CPyL77;
    }
    cpy_r_inst_type_str = cpy_r_r48;
    cpy_r_r49 = CPyDef_attrs____get_expanded_attr_types(cpy_r_ctx, cpy_r_inst_type, cpy_r_inst_type, cpy_r_inst_type);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1060, CPyStatic_attrs___globals);
        goto CPyL78;
    }
    cpy_r_attr_types = cpy_r_r49;
    cpy_r_r50 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r51 = cpy_r_attr_types == cpy_r_r50;
    if (cpy_r_r51) {
        goto CPyL79;
    } else
        goto CPyL43;
CPyL40: ;
    cpy_r_r52 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1062, CPyStatic_attrs___globals);
        goto CPyL71;
    }
    if (likely(Py_TYPE(cpy_r_r52) == CPyType_types___CallableType))
        cpy_r_r53 = cpy_r_r52;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1062, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_r52);
        goto CPyL71;
    }
    return cpy_r_r53;
CPyL43: ;
    if (likely(cpy_r_attr_types != Py_None))
        cpy_r_r54 = cpy_r_attr_types;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1063, CPyStatic_attrs___globals, "list", cpy_r_attr_types);
        goto CPyL78;
    }
    cpy_r_r55 = CPyDef_attrs____meet_fields(cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1063, CPyStatic_attrs___globals);
        goto CPyL78;
    }
    cpy_r_fields = cpy_r_r55;
    cpy_r_r56 = CPyStatics[4429]; /* 'inst' */
    cpy_r_r57 = CPyStatics[267]; /* 'keys' */
    PyObject *cpy_r_r58[1] = {cpy_r_fields};
    cpy_r_r59 = (PyObject **)&cpy_r_r58;
    cpy_r_r60 = PyObject_VectorcallMethod(cpy_r_r57, cpy_r_r59, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1066, CPyStatic_attrs___globals);
        goto CPyL80;
    }
    cpy_r_r61 = PyList_New(1);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1066, CPyStatic_attrs___globals);
        goto CPyL81;
    }
    cpy_r_r62 = (CPyPtr)&((PyListObject *)cpy_r_r61)->ob_item;
    cpy_r_r63 = *(CPyPtr *)cpy_r_r62;
    CPy_INCREF(cpy_r_r56);
    *(PyObject * *)cpy_r_r63 = cpy_r_r56;
    cpy_r_r64 = CPyList_Extend(cpy_r_r61, cpy_r_r60);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1066, CPyStatic_attrs___globals);
        goto CPyL82;
    } else
        goto CPyL83;
CPyL48: ;
    cpy_r_r65 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r65 == NULL)) {
        goto CPyL84;
    } else
        goto CPyL51;
CPyL49: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r66 = 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1067, CPyStatic_attrs___globals);
        goto CPyL71;
    }
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r67 = PyList_New(1);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1067, CPyStatic_attrs___globals);
        goto CPyL82;
    }
    cpy_r_r68 = (CPyPtr)&((PyListObject *)cpy_r_r67)->ob_item;
    cpy_r_r69 = *(CPyPtr *)cpy_r_r68;
    CPy_INCREF(cpy_r_r65);
    *(PyObject * *)cpy_r_r69 = cpy_r_r65;
    cpy_r_r70 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (unlikely(cpy_r_r70 == NULL)) {
        goto CPyL85;
    } else
        goto CPyL55;
CPyL53: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r71 = 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1067, CPyStatic_attrs___globals);
        goto CPyL71;
    }
    CPy_Unreachable();
CPyL55: ;
    cpy_r_r72 = PyList_New(1);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1067, CPyStatic_attrs___globals);
        goto CPyL86;
    }
    cpy_r_r73 = (CPyPtr)&((PyListObject *)cpy_r_r72)->ob_item;
    cpy_r_r74 = *(CPyPtr *)cpy_r_r73;
    CPy_INCREF(cpy_r_r70);
    *(PyObject * *)cpy_r_r74 = cpy_r_r70;
    cpy_r_r75 = CPyObject_Size(cpy_r_fields);
    if (unlikely(cpy_r_r75 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1067, CPyStatic_attrs___globals);
        goto CPyL87;
    }
    cpy_r_r76 = CPySequence_Multiply(cpy_r_r72, cpy_r_r75);
    CPy_DECREF(cpy_r_r72);
    CPyTagged_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1067, CPyStatic_attrs___globals);
        goto CPyL86;
    }
    cpy_r_r77 = PyNumber_Add(cpy_r_r67, cpy_r_r76);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1067, CPyStatic_attrs___globals);
        goto CPyL82;
    }
    if (likely(PyList_Check(cpy_r_r77)))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1067, CPyStatic_attrs___globals, "list", cpy_r_r77);
        goto CPyL82;
    }
    cpy_r_r79 = CPyStatics[2406]; /* 'values' */
    PyObject *cpy_r_r80[1] = {cpy_r_fields};
    cpy_r_r81 = (PyObject **)&cpy_r_r80;
    cpy_r_r82 = PyObject_VectorcallMethod(cpy_r_r79, cpy_r_r81, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1068, CPyStatic_attrs___globals);
        goto CPyL88;
    }
    CPy_DECREF(cpy_r_fields);
    cpy_r_r83 = PyList_New(1);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1068, CPyStatic_attrs___globals);
        goto CPyL89;
    }
    cpy_r_r84 = (CPyPtr)&((PyListObject *)cpy_r_r83)->ob_item;
    cpy_r_r85 = *(CPyPtr *)cpy_r_r84;
    CPy_INCREF(cpy_r_inst_type);
    *(PyObject * *)cpy_r_r85 = cpy_r_inst_type;
    cpy_r_r86 = CPyList_Extend(cpy_r_r83, cpy_r_r82);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1068, CPyStatic_attrs___globals);
        goto CPyL90;
    } else
        goto CPyL91;
CPyL63: ;
    cpy_r_r87 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1070, CPyStatic_attrs___globals);
        goto CPyL90;
    }
    if (likely(Py_TYPE(cpy_r_r87) == CPyType_types___CallableType))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1070, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_r87);
        goto CPyL90;
    }
    cpy_r_r89 = ((mypy___types___CallableTypeObject *)cpy_r_r88)->_fallback;
    CPy_INCREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r90 = CPySequenceTuple_GetItem(cpy_r_ctx, 2);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1071, CPyStatic_attrs___globals);
        goto CPyL92;
    }
    if (likely(Py_TYPE(cpy_r_r90) == CPyType_types___CallableType))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1071, CPyStatic_attrs___globals, "mypy.types.CallableType", cpy_r_r90);
        goto CPyL92;
    }
    cpy_r_r92 = ((mypy___types___CallableTypeObject *)cpy_r_r91)->_name;
    CPy_INCREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r93 = PyObject_Str(cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1071, CPyStatic_attrs___globals);
        goto CPyL92;
    }
    cpy_r_r94 = CPyStatics[3379]; /* ' of ' */
    cpy_r_r95 = CPyStr_Build(3, cpy_r_r93, cpy_r_r94, cpy_r_inst_type_str);
    CPy_DECREF(cpy_r_r93);
    CPy_DECREF(cpy_r_inst_type_str);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1071, CPyStatic_attrs___globals);
        goto CPyL93;
    }
    cpy_r_r96 = NULL;
    cpy_r_r97 = NULL;
    cpy_r_r98 = CPY_INT_TAG;
    cpy_r_r99 = CPY_INT_TAG;
    cpy_r_r100 = 2;
    cpy_r_r101 = 2;
    cpy_r_r102 = NULL;
    cpy_r_r103 = 2;
    cpy_r_r104 = NULL;
    cpy_r_r105 = NULL;
    cpy_r_r106 = NULL;
    cpy_r_r107 = 2;
    cpy_r_r108 = 2;
    cpy_r_r109 = CPyDef_types___CallableType(cpy_r_r83, cpy_r_r78, cpy_r_r61, cpy_r_inst_type, cpy_r_r89, cpy_r_r95, cpy_r_r96, cpy_r_r97, cpy_r_r98, cpy_r_r99, cpy_r_r100, cpy_r_r101, cpy_r_r102, cpy_r_r103, cpy_r_r104, cpy_r_r105, cpy_r_r106, cpy_r_r107, cpy_r_r108);
    CPy_DECREF(cpy_r_r83);
    CPy_DECREF(cpy_r_r78);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_inst_type);
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1065, CPyStatic_attrs___globals);
        goto CPyL71;
    }
    return cpy_r_r109;
CPyL71: ;
    cpy_r_r110 = NULL;
    return cpy_r_r110;
CPyL72: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL71;
CPyL73: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r14);
    goto CPyL71;
CPyL74: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL71;
CPyL75: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL71;
CPyL76: ;
    CPy_DecRef(cpy_r_inst_arg);
    goto CPyL71;
CPyL77: ;
    CPy_DecRef(cpy_r_inst_type);
    goto CPyL71;
CPyL78: ;
    CPy_DecRef(cpy_r_inst_type);
    CPy_DecRef(cpy_r_inst_type_str);
    goto CPyL71;
CPyL79: ;
    CPy_DECREF(cpy_r_inst_type);
    CPy_DECREF(cpy_r_inst_type_str);
    CPy_DECREF(cpy_r_attr_types);
    goto CPyL40;
CPyL80: ;
    CPy_DecRef(cpy_r_inst_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_fields);
    goto CPyL71;
CPyL81: ;
    CPy_DecRef(cpy_r_inst_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_r60);
    goto CPyL71;
CPyL82: ;
    CPy_DecRef(cpy_r_inst_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_r61);
    goto CPyL71;
CPyL83: ;
    CPy_DECREF(cpy_r_r64);
    goto CPyL48;
CPyL84: ;
    CPy_DecRef(cpy_r_inst_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_r61);
    goto CPyL49;
CPyL85: ;
    CPy_DecRef(cpy_r_inst_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r67);
    goto CPyL53;
CPyL86: ;
    CPy_DecRef(cpy_r_inst_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r67);
    goto CPyL71;
CPyL87: ;
    CPy_DecRef(cpy_r_inst_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r67);
    CPy_DecRef(cpy_r_r72);
    goto CPyL71;
CPyL88: ;
    CPy_DecRef(cpy_r_inst_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_fields);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r78);
    goto CPyL71;
CPyL89: ;
    CPy_DecRef(cpy_r_inst_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r82);
    goto CPyL71;
CPyL90: ;
    CPy_DecRef(cpy_r_inst_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r83);
    goto CPyL71;
CPyL91: ;
    CPy_DECREF(cpy_r_r86);
    goto CPyL63;
CPyL92: ;
    CPy_DecRef(cpy_r_inst_type);
    CPy_DecRef(cpy_r_inst_type_str);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r89);
    goto CPyL71;
CPyL93: ;
    CPy_DecRef(cpy_r_inst_type);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r78);
    CPy_DecRef(cpy_r_r83);
    CPy_DecRef(cpy_r_r89);
    goto CPyL71;
}

PyObject *CPyPy_attrs___evolve_function_sig_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:evolve_function_sig_callback", kwlist, 0};
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
    PyObject *retval = CPyDef_attrs___evolve_function_sig_callback(arg_ctx);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/plugins/attrs.py", "evolve_function_sig_callback", 1043, CPyStatic_attrs___globals);
    return NULL;
}

char CPyDef_attrs_____top_level__(void) {
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
    PyObject **cpy_r_r25;
    void *cpy_r_r27;
    void *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
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
    int32_t cpy_r_r95;
    char cpy_r_r96;
    int32_t cpy_r_r97;
    char cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    int32_t cpy_r_r118;
    char cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    int32_t cpy_r_r133;
    char cpy_r_r134;
    int32_t cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    int32_t cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    int32_t cpy_r_r147;
    char cpy_r_r148;
    int32_t cpy_r_r149;
    char cpy_r_r150;
    int32_t cpy_r_r151;
    char cpy_r_r152;
    int32_t cpy_r_r153;
    char cpy_r_r154;
    int32_t cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    int32_t cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    int32_t cpy_r_r164;
    char cpy_r_r165;
    int32_t cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    int32_t cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    int32_t cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    int32_t cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    int32_t cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    int32_t cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    char cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
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
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    char cpy_r_r211;
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
    int32_t cpy_r_r222;
    char cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    int32_t cpy_r_r226;
    char cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    char cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    int32_t cpy_r_r237;
    char cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    int32_t cpy_r_r241;
    char cpy_r_r242;
    char cpy_r_r243;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", -1, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_attrs___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 3, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9083]; /* ('defaultdict',) */
    cpy_r_r10 = CPyStatics[76]; /* 'collections' */
    cpy_r_r11 = CPyStatic_attrs___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 5, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_collections = cpy_r_r12;
    CPy_INCREF(CPyModule_collections);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9578]; /* ('reduce',) */
    cpy_r_r14 = CPyStatics[2546]; /* 'functools' */
    cpy_r_r15 = CPyStatic_attrs___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 6, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_functools = cpy_r_r16;
    CPy_INCREF(CPyModule_functools);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9579]; /* ('Final', 'Iterable', 'List', 'Mapping', 'cast') */
    cpy_r_r18 = CPyStatics[21]; /* 'typing' */
    cpy_r_r19 = CPyStatic_attrs___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 7, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_typing = cpy_r_r20;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9580]; /* ('Literal',) */
    cpy_r_r22 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r23 = CPyStatic_attrs___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 8, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_typing_extensions = cpy_r_r24;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = (PyObject **)&CPyModule_mypy___plugin;
    PyObject **cpy_r_r26[1] = {cpy_r_r25};
    cpy_r_r27 = (void *)&cpy_r_r26;
    int64_t cpy_r_r28[1] = {10};
    cpy_r_r29 = (void *)&cpy_r_r28;
    cpy_r_r30 = CPyStatics[9582]; /* (('mypy.plugin', 'mypy', 'mypy'),) */
    cpy_r_r31 = CPyStatic_attrs___globals;
    cpy_r_r32 = CPyStatics[4430]; /* 'mypy/plugins/attrs.py' */
    cpy_r_r33 = CPyStatics[17]; /* '<module>' */
    cpy_r_r34 = CPyImport_ImportMany(cpy_r_r30, cpy_r_r27, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r29);
    if (!cpy_r_r34) goto CPyL72;
    cpy_r_r35 = CPyStatics[9583]; /* ('apply_generic_arguments',) */
    cpy_r_r36 = CPyStatics[4432]; /* 'mypy.applytype' */
    cpy_r_r37 = CPyStatic_attrs___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 11, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_mypy___applytype = cpy_r_r38;
    CPy_INCREF(CPyModule_mypy___applytype);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[9584]; /* ('LITERAL_REQ',) */
    cpy_r_r40 = CPyStatics[924]; /* 'mypy.errorcodes' */
    cpy_r_r41 = CPyStatic_attrs___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 12, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_mypy___errorcodes = cpy_r_r42;
    CPy_INCREF(CPyModule_mypy___errorcodes);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[9585]; /* ('expand_type', 'expand_type_by_instance') */
    cpy_r_r44 = CPyStatics[31]; /* 'mypy.expandtype' */
    cpy_r_r45 = CPyStatic_attrs___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 13, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_mypy___expandtype = cpy_r_r46;
    CPy_INCREF(CPyModule_mypy___expandtype);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[9586]; /* ('TypeTranslationError', 'expr_to_unanalyzed_type') */
    cpy_r_r48 = CPyStatics[2338]; /* 'mypy.exprtotype' */
    cpy_r_r49 = CPyStatic_attrs___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 14, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_mypy___exprtotype = cpy_r_r50;
    CPy_INCREF(CPyModule_mypy___exprtotype);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[9446]; /* ('meet_types',) */
    cpy_r_r52 = CPyStatics[932]; /* 'mypy.meet' */
    cpy_r_r53 = CPyStatic_attrs___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 15, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_mypy___meet = cpy_r_r54;
    CPy_INCREF(CPyModule_mypy___meet);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = CPyStatics[9587]; /* ('format_type_bare',) */
    cpy_r_r56 = CPyStatics[530]; /* 'mypy.messages' */
    cpy_r_r57 = CPyStatic_attrs___globals;
    cpy_r_r58 = CPyImport_ImportFromMany(cpy_r_r56, cpy_r_r55, cpy_r_r55, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 16, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_mypy___messages = cpy_r_r58;
    CPy_INCREF(CPyModule_mypy___messages);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r59 = CPyStatics[9588]; /* ('ARG_NAMED', 'ARG_NAMED_OPT', 'ARG_OPT', 'ARG_POS',
                                     'MDEF', 'Argument', 'AssignmentStmt', 'CallExpr',
                                     'Context', 'Decorator', 'Expression', 'FuncDef',
                                     'IndexExpr', 'JsonDict', 'LambdaExpr', 'ListExpr',
                                     'MemberExpr', 'NameExpr', 'OverloadedFuncDef',
                                     'PlaceholderNode', 'RefExpr', 'SymbolTableNode',
                                     'TempNode', 'TupleExpr', 'TypeApplication', 'TypeInfo',
                                     'TypeVarExpr', 'Var', 'is_class_var') */
    cpy_r_r60 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r61 = CPyStatic_attrs___globals;
    cpy_r_r62 = CPyImport_ImportFromMany(cpy_r_r60, cpy_r_r59, cpy_r_r59, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 17, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_mypy___nodes = cpy_r_r62;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r62);
    cpy_r_r63 = CPyStatics[9589]; /* ('SemanticAnalyzerPluginInterface',) */
    cpy_r_r64 = CPyStatics[583]; /* 'mypy.plugin' */
    cpy_r_r65 = CPyStatic_attrs___globals;
    cpy_r_r66 = CPyImport_ImportFromMany(cpy_r_r64, cpy_r_r63, cpy_r_r63, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 48, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_mypy___plugin = cpy_r_r66;
    CPy_INCREF(CPyModule_mypy___plugin);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r67 = CPyStatics[9590]; /* ('_get_argument', '_get_bool_argument',
                                     '_get_decorator_bool_argument',
                                     'add_attribute_to_class', 'add_method',
                                     'deserialize_and_fixup_type') */
    cpy_r_r68 = CPyStatics[4441]; /* 'mypy.plugins.common' */
    cpy_r_r69 = CPyStatic_attrs___globals;
    cpy_r_r70 = CPyImport_ImportFromMany(cpy_r_r68, cpy_r_r67, cpy_r_r67, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 49, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_mypy___plugins___common = cpy_r_r70;
    CPy_INCREF(CPyModule_mypy___plugins___common);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r71 = CPyStatics[9591]; /* ('make_wildcard_trigger',) */
    cpy_r_r72 = CPyStatics[4443]; /* 'mypy.server.trigger' */
    cpy_r_r73 = CPyStatic_attrs___globals;
    cpy_r_r74 = CPyImport_ImportFromMany(cpy_r_r72, cpy_r_r71, cpy_r_r71, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 57, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_mypy___server___trigger = cpy_r_r74;
    CPy_INCREF(CPyModule_mypy___server___trigger);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r75 = CPyStatics[9592]; /* ('get_type_vars', 'make_simplified_union',
                                     'map_type_from_supertype') */
    cpy_r_r76 = CPyStatics[1055]; /* 'mypy.typeops' */
    cpy_r_r77 = CPyStatic_attrs___globals;
    cpy_r_r78 = CPyImport_ImportFromMany(cpy_r_r76, cpy_r_r75, cpy_r_r75, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 58, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_mypy___typeops = cpy_r_r78;
    CPy_INCREF(CPyModule_mypy___typeops);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r79 = CPyStatics[9593]; /* ('AnyType', 'CallableType', 'FunctionLike', 'Instance',
                                     'LiteralType', 'NoneType', 'Overloaded', 'ProperType',
                                     'TupleType', 'Type', 'TypeOfAny', 'TypeVarType',
                                     'UninhabitedType', 'UnionType', 'get_proper_type') */
    cpy_r_r80 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r81 = CPyStatic_attrs___globals;
    cpy_r_r82 = CPyImport_ImportFromMany(cpy_r_r80, cpy_r_r79, cpy_r_r79, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 59, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_mypy___types = cpy_r_r82;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r82);
    cpy_r_r83 = CPyStatics[9242]; /* ('fill_typevars',) */
    cpy_r_r84 = CPyStatics[110]; /* 'mypy.typevars' */
    cpy_r_r85 = CPyStatic_attrs___globals;
    cpy_r_r86 = CPyImport_ImportFromMany(cpy_r_r84, cpy_r_r83, cpy_r_r83, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 76, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_mypy___typevars = cpy_r_r86;
    CPy_INCREF(CPyModule_mypy___typevars);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r87 = CPyStatics[9594]; /* ('unmangle',) */
    cpy_r_r88 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r89 = CPyStatic_attrs___globals;
    cpy_r_r90 = CPyImport_ImportFromMany(cpy_r_r88, cpy_r_r87, cpy_r_r87, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 77, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    CPyModule_mypy___util = cpy_r_r90;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r90);
    cpy_r_r91 = CPyStatics[4444]; /* 'attr.s' */
    cpy_r_r92 = CPyStatics[4445]; /* 'attr.attrs' */
    cpy_r_r93 = CPyStatics[4446]; /* 'attr.attributes' */
    cpy_r_r94 = PySet_New(NULL);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 80, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r95 = PySet_Add(cpy_r_r94, cpy_r_r91);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 80, CPyStatic_attrs___globals);
        goto CPyL73;
    }
    cpy_r_r97 = PySet_Add(cpy_r_r94, cpy_r_r92);
    cpy_r_r98 = cpy_r_r97 >= 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 80, CPyStatic_attrs___globals);
        goto CPyL73;
    }
    cpy_r_r99 = PySet_Add(cpy_r_r94, cpy_r_r93);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 80, CPyStatic_attrs___globals);
        goto CPyL73;
    }
    CPyStatic_attrs___attr_class_makers = cpy_r_r94;
    CPy_INCREF(CPyStatic_attrs___attr_class_makers);
    cpy_r_r101 = CPyStatic_attrs___globals;
    cpy_r_r102 = CPyStatics[4447]; /* 'attr_class_makers' */
    cpy_r_r103 = CPyDict_SetItem(cpy_r_r101, cpy_r_r102, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 80, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r105 = CPyStatics[4448]; /* 'attr.dataclass' */
    cpy_r_r106 = PySet_New(NULL);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 81, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r107 = PySet_Add(cpy_r_r106, cpy_r_r105);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 81, CPyStatic_attrs___globals);
        goto CPyL74;
    }
    CPyStatic_attrs___attr_dataclass_makers = cpy_r_r106;
    CPy_INCREF(CPyStatic_attrs___attr_dataclass_makers);
    cpy_r_r109 = CPyStatic_attrs___globals;
    cpy_r_r110 = CPyStatics[4449]; /* 'attr_dataclass_makers' */
    cpy_r_r111 = CPyDict_SetItem(cpy_r_r109, cpy_r_r110, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 81, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r113 = CPyStatics[4450]; /* 'attr.frozen' */
    cpy_r_r114 = CPyStatics[4451]; /* 'attrs.frozen' */
    cpy_r_r115 = PySet_New(NULL);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 82, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r116 = PySet_Add(cpy_r_r115, cpy_r_r113);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 82, CPyStatic_attrs___globals);
        goto CPyL75;
    }
    cpy_r_r118 = PySet_Add(cpy_r_r115, cpy_r_r114);
    cpy_r_r119 = cpy_r_r118 >= 0;
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 82, CPyStatic_attrs___globals);
        goto CPyL75;
    }
    CPyStatic_attrs___attr_frozen_makers = cpy_r_r115;
    CPy_INCREF(CPyStatic_attrs___attr_frozen_makers);
    cpy_r_r120 = CPyStatic_attrs___globals;
    cpy_r_r121 = CPyStatics[4452]; /* 'attr_frozen_makers' */
    cpy_r_r122 = CPyDict_SetItem(cpy_r_r120, cpy_r_r121, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 82, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r124 = CPyStatics[4453]; /* 'attr.define' */
    cpy_r_r125 = CPyStatics[4454]; /* 'attr.mutable' */
    cpy_r_r126 = CPyStatics[4455]; /* 'attrs.define' */
    cpy_r_r127 = CPyStatics[4456]; /* 'attrs.mutable' */
    cpy_r_r128 = PySet_New(NULL);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 83, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r129 = PySet_Add(cpy_r_r128, cpy_r_r124);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 83, CPyStatic_attrs___globals);
        goto CPyL76;
    }
    cpy_r_r131 = PySet_Add(cpy_r_r128, cpy_r_r125);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 83, CPyStatic_attrs___globals);
        goto CPyL76;
    }
    cpy_r_r133 = PySet_Add(cpy_r_r128, cpy_r_r126);
    cpy_r_r134 = cpy_r_r133 >= 0;
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 83, CPyStatic_attrs___globals);
        goto CPyL76;
    }
    cpy_r_r135 = PySet_Add(cpy_r_r128, cpy_r_r127);
    cpy_r_r136 = cpy_r_r135 >= 0;
    if (unlikely(!cpy_r_r136)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 83, CPyStatic_attrs___globals);
        goto CPyL76;
    }
    CPyStatic_attrs___attr_define_makers = cpy_r_r128;
    CPy_INCREF(CPyStatic_attrs___attr_define_makers);
    cpy_r_r137 = CPyStatic_attrs___globals;
    cpy_r_r138 = CPyStatics[4457]; /* 'attr_define_makers' */
    cpy_r_r139 = CPyDict_SetItem(cpy_r_r137, cpy_r_r138, cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r140 = cpy_r_r139 >= 0;
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 83, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r141 = CPyStatics[4458]; /* 'attr.ib' */
    cpy_r_r142 = CPyStatics[4459]; /* 'attr.attrib' */
    cpy_r_r143 = CPyStatics[4460]; /* 'attr.attr' */
    cpy_r_r144 = CPyStatics[4461]; /* 'attr.field' */
    cpy_r_r145 = CPyStatics[4462]; /* 'attrs.field' */
    cpy_r_r146 = PySet_New(NULL);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 84, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r147 = PySet_Add(cpy_r_r146, cpy_r_r141);
    cpy_r_r148 = cpy_r_r147 >= 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 84, CPyStatic_attrs___globals);
        goto CPyL77;
    }
    cpy_r_r149 = PySet_Add(cpy_r_r146, cpy_r_r142);
    cpy_r_r150 = cpy_r_r149 >= 0;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 84, CPyStatic_attrs___globals);
        goto CPyL77;
    }
    cpy_r_r151 = PySet_Add(cpy_r_r146, cpy_r_r143);
    cpy_r_r152 = cpy_r_r151 >= 0;
    if (unlikely(!cpy_r_r152)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 84, CPyStatic_attrs___globals);
        goto CPyL77;
    }
    cpy_r_r153 = PySet_Add(cpy_r_r146, cpy_r_r144);
    cpy_r_r154 = cpy_r_r153 >= 0;
    if (unlikely(!cpy_r_r154)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 84, CPyStatic_attrs___globals);
        goto CPyL77;
    }
    cpy_r_r155 = PySet_Add(cpy_r_r146, cpy_r_r145);
    cpy_r_r156 = cpy_r_r155 >= 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 84, CPyStatic_attrs___globals);
        goto CPyL77;
    }
    CPyStatic_attrs___attr_attrib_makers = cpy_r_r146;
    CPy_INCREF(CPyStatic_attrs___attr_attrib_makers);
    cpy_r_r157 = CPyStatic_attrs___globals;
    cpy_r_r158 = CPyStatics[4463]; /* 'attr_attrib_makers' */
    cpy_r_r159 = CPyDict_SetItem(cpy_r_r157, cpy_r_r158, cpy_r_r146);
    CPy_DECREF(cpy_r_r146);
    cpy_r_r160 = cpy_r_r159 >= 0;
    if (unlikely(!cpy_r_r160)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 84, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r161 = CPyStatics[4464]; /* 'attr.converters.optional' */
    cpy_r_r162 = CPyStatics[4465]; /* 'attrs.converters.optional' */
    cpy_r_r163 = PySet_New(NULL);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 85, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r164 = PySet_Add(cpy_r_r163, cpy_r_r161);
    cpy_r_r165 = cpy_r_r164 >= 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 85, CPyStatic_attrs___globals);
        goto CPyL78;
    }
    cpy_r_r166 = PySet_Add(cpy_r_r163, cpy_r_r162);
    cpy_r_r167 = cpy_r_r166 >= 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 85, CPyStatic_attrs___globals);
        goto CPyL78;
    }
    CPyStatic_attrs___attr_optional_converters = cpy_r_r163;
    CPy_INCREF(CPyStatic_attrs___attr_optional_converters);
    cpy_r_r168 = CPyStatic_attrs___globals;
    cpy_r_r169 = CPyStatics[4466]; /* 'attr_optional_converters' */
    cpy_r_r170 = CPyDict_SetItem(cpy_r_r168, cpy_r_r169, cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    cpy_r_r171 = cpy_r_r170 >= 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 85, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r172 = CPyStatics[4413]; /* '_AT' */
    cpy_r_r173 = CPyStatic_attrs___globals;
    cpy_r_r174 = CPyStatics[4467]; /* 'SELF_TVAR_NAME' */
    cpy_r_r175 = CPyDict_SetItem(cpy_r_r173, cpy_r_r174, cpy_r_r172);
    cpy_r_r176 = cpy_r_r175 >= 0;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 87, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r177 = CPyStatics[4418]; /* '__attrs_attrs__' */
    cpy_r_r178 = CPyStatic_attrs___globals;
    cpy_r_r179 = CPyStatics[4468]; /* 'MAGIC_ATTR_NAME' */
    cpy_r_r180 = CPyDict_SetItem(cpy_r_r178, cpy_r_r179, cpy_r_r177);
    cpy_r_r181 = cpy_r_r180 >= 0;
    if (unlikely(!cpy_r_r181)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 88, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r182 = CPyStatics[4417]; /* '__{}_AttrsAttributes__' */
    cpy_r_r183 = CPyStatic_attrs___globals;
    cpy_r_r184 = CPyStatics[4469]; /* 'MAGIC_ATTR_CLS_NAME_TEMPLATE' */
    cpy_r_r185 = CPyDict_SetItem(cpy_r_r183, cpy_r_r184, cpy_r_r182);
    cpy_r_r186 = cpy_r_r185 >= 0;
    if (unlikely(!cpy_r_r186)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 89, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r187 = CPyStatics[4401]; /* '__attrs_init__' */
    cpy_r_r188 = CPyStatic_attrs___globals;
    cpy_r_r189 = CPyStatics[4470]; /* 'ATTRS_INIT_NAME' */
    cpy_r_r190 = CPyDict_SetItem(cpy_r_r188, cpy_r_r189, cpy_r_r187);
    cpy_r_r191 = cpy_r_r190 >= 0;
    if (unlikely(!cpy_r_r191)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 90, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r192 = NULL;
    cpy_r_r193 = CPyStatics[4471]; /* 'mypy.plugins.attrs' */
    cpy_r_r194 = (PyObject *)CPyType_attrs___Converter_template;
    cpy_r_r195 = CPyType_FromTemplate(cpy_r_r194, cpy_r_r192, cpy_r_r193);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 93, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r196 = CPyDef_attrs___Converter_trait_vtable_setup();
    if (unlikely(cpy_r_r196 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", -1, CPyStatic_attrs___globals);
        goto CPyL79;
    }
    cpy_r_r197 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r198 = CPyStatics[4390]; /* 'init_type' */
    cpy_r_r199 = CPyStatics[1613]; /* 'ret_type' */
    cpy_r_r200 = PyTuple_Pack(2, cpy_r_r198, cpy_r_r199);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 93, CPyStatic_attrs___globals);
        goto CPyL79;
    }
    cpy_r_r201 = PyObject_SetAttr(cpy_r_r195, cpy_r_r197, cpy_r_r200);
    CPy_DECREF(cpy_r_r200);
    cpy_r_r202 = cpy_r_r201 >= 0;
    if (unlikely(!cpy_r_r202)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 93, CPyStatic_attrs___globals);
        goto CPyL79;
    }
    CPyType_attrs___Converter = (PyTypeObject *)cpy_r_r195;
    CPy_INCREF(CPyType_attrs___Converter);
    cpy_r_r203 = CPyStatic_attrs___globals;
    cpy_r_r204 = CPyStatics[4472]; /* 'Converter' */
    cpy_r_r205 = CPyDict_SetItem(cpy_r_r203, cpy_r_r204, cpy_r_r195);
    CPy_DECREF(cpy_r_r195);
    cpy_r_r206 = cpy_r_r205 >= 0;
    if (unlikely(!cpy_r_r206)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 93, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r207 = NULL;
    cpy_r_r208 = CPyStatics[4471]; /* 'mypy.plugins.attrs' */
    cpy_r_r209 = (PyObject *)CPyType_attrs___Attribute_template;
    cpy_r_r210 = CPyType_FromTemplate(cpy_r_r209, cpy_r_r207, cpy_r_r208);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 101, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r211 = CPyDef_attrs___Attribute_trait_vtable_setup();
    if (unlikely(cpy_r_r211 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", -1, CPyStatic_attrs___globals);
        goto CPyL80;
    }
    cpy_r_r212 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r213 = CPyStatics[2329]; /* 'name' */
    cpy_r_r214 = CPyStatics[2563]; /* 'info' */
    cpy_r_r215 = CPyStatics[4383]; /* 'has_default' */
    cpy_r_r216 = CPyStatics[4384]; /* 'init' */
    cpy_r_r217 = CPyStatics[4385]; /* 'kw_only' */
    cpy_r_r218 = CPyStatics[4408]; /* 'converter' */
    cpy_r_r219 = CPyStatics[68]; /* 'context' */
    cpy_r_r220 = CPyStatics[4390]; /* 'init_type' */
    cpy_r_r221 = PyTuple_Pack(8, cpy_r_r213, cpy_r_r214, cpy_r_r215, cpy_r_r216, cpy_r_r217, cpy_r_r218, cpy_r_r219, cpy_r_r220);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 101, CPyStatic_attrs___globals);
        goto CPyL80;
    }
    cpy_r_r222 = PyObject_SetAttr(cpy_r_r210, cpy_r_r212, cpy_r_r221);
    CPy_DECREF(cpy_r_r221);
    cpy_r_r223 = cpy_r_r222 >= 0;
    if (unlikely(!cpy_r_r223)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 101, CPyStatic_attrs___globals);
        goto CPyL80;
    }
    CPyType_attrs___Attribute = (PyTypeObject *)cpy_r_r210;
    CPy_INCREF(CPyType_attrs___Attribute);
    cpy_r_r224 = CPyStatic_attrs___globals;
    cpy_r_r225 = CPyStatics[2362]; /* 'Attribute' */
    cpy_r_r226 = CPyDict_SetItem(cpy_r_r224, cpy_r_r225, cpy_r_r210);
    CPy_DECREF(cpy_r_r210);
    cpy_r_r227 = cpy_r_r226 >= 0;
    if (unlikely(!cpy_r_r227)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 101, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r228 = NULL;
    cpy_r_r229 = CPyStatics[4471]; /* 'mypy.plugins.attrs' */
    cpy_r_r230 = (PyObject *)CPyType_attrs___MethodAdder_template;
    cpy_r_r231 = CPyType_FromTemplate(cpy_r_r230, cpy_r_r228, cpy_r_r229);
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 923, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    cpy_r_r232 = CPyDef_attrs___MethodAdder_trait_vtable_setup();
    if (unlikely(cpy_r_r232 == 2)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", -1, CPyStatic_attrs___globals);
        goto CPyL81;
    }
    cpy_r_r233 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r234 = CPyStatics[2438]; /* 'ctx' */
    cpy_r_r235 = CPyStatics[1346]; /* 'self_type' */
    cpy_r_r236 = PyTuple_Pack(2, cpy_r_r234, cpy_r_r235);
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 923, CPyStatic_attrs___globals);
        goto CPyL81;
    }
    cpy_r_r237 = PyObject_SetAttr(cpy_r_r231, cpy_r_r233, cpy_r_r236);
    CPy_DECREF(cpy_r_r236);
    cpy_r_r238 = cpy_r_r237 >= 0;
    if (unlikely(!cpy_r_r238)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 923, CPyStatic_attrs___globals);
        goto CPyL81;
    }
    CPyType_attrs___MethodAdder = (PyTypeObject *)cpy_r_r231;
    CPy_INCREF(CPyType_attrs___MethodAdder);
    cpy_r_r239 = CPyStatic_attrs___globals;
    cpy_r_r240 = CPyStatics[4473]; /* 'MethodAdder' */
    cpy_r_r241 = CPyDict_SetItem(cpy_r_r239, cpy_r_r240, cpy_r_r231);
    CPy_DECREF(cpy_r_r231);
    cpy_r_r242 = cpy_r_r241 >= 0;
    if (unlikely(!cpy_r_r242)) {
        CPy_AddTraceback("mypy/plugins/attrs.py", "<module>", 923, CPyStatic_attrs___globals);
        goto CPyL72;
    }
    return 1;
CPyL72: ;
    cpy_r_r243 = 2;
    return cpy_r_r243;
CPyL73: ;
    CPy_DecRef(cpy_r_r94);
    goto CPyL72;
CPyL74: ;
    CPy_DecRef(cpy_r_r106);
    goto CPyL72;
CPyL75: ;
    CPy_DecRef(cpy_r_r115);
    goto CPyL72;
CPyL76: ;
    CPy_DecRef(cpy_r_r128);
    goto CPyL72;
CPyL77: ;
    CPy_DecRef(cpy_r_r146);
    goto CPyL72;
CPyL78: ;
    CPy_DecRef(cpy_r_r163);
    goto CPyL72;
CPyL79: ;
    CPy_DecRef(cpy_r_r195);
    goto CPyL72;
CPyL80: ;
    CPy_DecRef(cpy_r_r210);
    goto CPyL72;
CPyL81: ;
    CPy_DecRef(cpy_r_r231);
    goto CPyL72;
}
