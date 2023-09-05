#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
context___FuncInfo_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *context___FuncInfo_setup(PyTypeObject *type);
PyObject *CPyDef_context___FuncInfo(PyObject *cpy_r_fitem, PyObject *cpy_r_name, PyObject *cpy_r_class_name, PyObject *cpy_r_namespace, char cpy_r_is_nested, char cpy_r_contains_nested, char cpy_r_is_decorated, char cpy_r_in_non_ext);

static PyObject *
context___FuncInfo_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_context___FuncInfo) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = context___FuncInfo_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_context___FuncInfo_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
context___FuncInfo_traverse(mypyc___irbuild___context___FuncInfoObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_fitem);
    Py_VISIT(self->_name);
    Py_VISIT(self->_class_name);
    Py_VISIT(self->_ns);
    Py_VISIT(self->__callable_class);
    Py_VISIT(self->__env_class);
    Py_VISIT(self->__generator_class);
    Py_VISIT(self->__curr_env_reg);
    return 0;
}

static int
context___FuncInfo_clear(mypyc___irbuild___context___FuncInfoObject *self)
{
    Py_CLEAR(self->_fitem);
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_class_name);
    Py_CLEAR(self->_ns);
    Py_CLEAR(self->__callable_class);
    Py_CLEAR(self->__env_class);
    Py_CLEAR(self->__generator_class);
    Py_CLEAR(self->__curr_env_reg);
    return 0;
}

static void
context___FuncInfo_dealloc(mypyc___irbuild___context___FuncInfoObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, context___FuncInfo_dealloc)
    context___FuncInfo_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem context___FuncInfo_vtable[11];
static bool
CPyDef_context___FuncInfo_trait_vtable_setup(void)
{
    CPyVTableItem context___FuncInfo_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_context___FuncInfo_____init__,
        (CPyVTableItem)CPyDef_context___FuncInfo___namespaced_name,
        (CPyVTableItem)CPyDef_context___FuncInfo___is_generator,
        (CPyVTableItem)CPyDef_context___FuncInfo___is_coroutine,
        (CPyVTableItem)CPyDef_context___FuncInfo___callable_class,
        (CPyVTableItem)CPyDef_context___FuncInfo_____mypyc_setter__callable_class,
        (CPyVTableItem)CPyDef_context___FuncInfo___env_class,
        (CPyVTableItem)CPyDef_context___FuncInfo_____mypyc_setter__env_class,
        (CPyVTableItem)CPyDef_context___FuncInfo___generator_class,
        (CPyVTableItem)CPyDef_context___FuncInfo_____mypyc_setter__generator_class,
        (CPyVTableItem)CPyDef_context___FuncInfo___curr_env_reg,
    };
    memcpy(context___FuncInfo_vtable, context___FuncInfo_vtable_scratch, sizeof(context___FuncInfo_vtable));
    return 1;
}

static PyObject *
context___FuncInfo_get_fitem(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static int
context___FuncInfo_set_fitem(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure);
static PyObject *
context___FuncInfo_get_name(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static int
context___FuncInfo_set_name(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure);
static PyObject *
context___FuncInfo_get_class_name(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static int
context___FuncInfo_set_class_name(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure);
static PyObject *
context___FuncInfo_get_ns(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static int
context___FuncInfo_set_ns(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure);
static PyObject *
context___FuncInfo_get__callable_class(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static int
context___FuncInfo_set__callable_class(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure);
static PyObject *
context___FuncInfo_get__env_class(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static int
context___FuncInfo_set__env_class(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure);
static PyObject *
context___FuncInfo_get__generator_class(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static int
context___FuncInfo_set__generator_class(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure);
static PyObject *
context___FuncInfo_get__curr_env_reg(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static int
context___FuncInfo_set__curr_env_reg(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure);
static PyObject *
context___FuncInfo_get_is_nested(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static int
context___FuncInfo_set_is_nested(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure);
static PyObject *
context___FuncInfo_get_contains_nested(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static int
context___FuncInfo_set_contains_nested(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure);
static PyObject *
context___FuncInfo_get_is_decorated(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static int
context___FuncInfo_set_is_decorated(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure);
static PyObject *
context___FuncInfo_get_in_non_ext(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static int
context___FuncInfo_set_in_non_ext(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure);
static PyObject *
context___FuncInfo_get_is_generator(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static PyObject *
context___FuncInfo_get_is_coroutine(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static PyObject *
context___FuncInfo_get_callable_class(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static int
context___FuncInfo_set_callable_class(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure);
static PyObject *
context___FuncInfo_get_env_class(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static int
context___FuncInfo_set_env_class(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure);
static PyObject *
context___FuncInfo_get_generator_class(mypyc___irbuild___context___FuncInfoObject *self, void *closure);
static int
context___FuncInfo_set_generator_class(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure);
static PyObject *
context___FuncInfo_get_curr_env_reg(mypyc___irbuild___context___FuncInfoObject *self, void *closure);

static PyGetSetDef context___FuncInfo_getseters[] = {
    {"fitem",
     (getter)context___FuncInfo_get_fitem, (setter)context___FuncInfo_set_fitem,
     NULL, NULL},
    {"name",
     (getter)context___FuncInfo_get_name, (setter)context___FuncInfo_set_name,
     NULL, NULL},
    {"class_name",
     (getter)context___FuncInfo_get_class_name, (setter)context___FuncInfo_set_class_name,
     NULL, NULL},
    {"ns",
     (getter)context___FuncInfo_get_ns, (setter)context___FuncInfo_set_ns,
     NULL, NULL},
    {"_callable_class",
     (getter)context___FuncInfo_get__callable_class, (setter)context___FuncInfo_set__callable_class,
     NULL, NULL},
    {"_env_class",
     (getter)context___FuncInfo_get__env_class, (setter)context___FuncInfo_set__env_class,
     NULL, NULL},
    {"_generator_class",
     (getter)context___FuncInfo_get__generator_class, (setter)context___FuncInfo_set__generator_class,
     NULL, NULL},
    {"_curr_env_reg",
     (getter)context___FuncInfo_get__curr_env_reg, (setter)context___FuncInfo_set__curr_env_reg,
     NULL, NULL},
    {"is_nested",
     (getter)context___FuncInfo_get_is_nested, (setter)context___FuncInfo_set_is_nested,
     NULL, NULL},
    {"contains_nested",
     (getter)context___FuncInfo_get_contains_nested, (setter)context___FuncInfo_set_contains_nested,
     NULL, NULL},
    {"is_decorated",
     (getter)context___FuncInfo_get_is_decorated, (setter)context___FuncInfo_set_is_decorated,
     NULL, NULL},
    {"in_non_ext",
     (getter)context___FuncInfo_get_in_non_ext, (setter)context___FuncInfo_set_in_non_ext,
     NULL, NULL},
    {"is_generator",
     (getter)context___FuncInfo_get_is_generator,
    NULL, NULL, NULL},
    {"is_coroutine",
     (getter)context___FuncInfo_get_is_coroutine,
    NULL, NULL, NULL},
    {"callable_class",
     (getter)context___FuncInfo_get_callable_class,
     (setter)context___FuncInfo_set_callable_class,
    NULL, NULL},
    {"env_class",
     (getter)context___FuncInfo_get_env_class,
     (setter)context___FuncInfo_set_env_class,
    NULL, NULL},
    {"generator_class",
     (getter)context___FuncInfo_get_generator_class,
     (setter)context___FuncInfo_set_generator_class,
    NULL, NULL},
    {"curr_env_reg",
     (getter)context___FuncInfo_get_curr_env_reg,
    NULL, NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef context___FuncInfo_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_context___FuncInfo_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"namespaced_name",
     (PyCFunction)CPyPy_context___FuncInfo___namespaced_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_context___FuncInfo_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FuncInfo",
    .tp_new = context___FuncInfo_new,
    .tp_dealloc = (destructor)context___FuncInfo_dealloc,
    .tp_traverse = (traverseproc)context___FuncInfo_traverse,
    .tp_clear = (inquiry)context___FuncInfo_clear,
    .tp_getset = context___FuncInfo_getseters,
    .tp_methods = context___FuncInfo_methods,
    .tp_init = context___FuncInfo_init,
    .tp_basicsize = sizeof(mypyc___irbuild___context___FuncInfoObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_context___FuncInfo_template = &CPyType_context___FuncInfo_template_;

static PyObject *
context___FuncInfo_setup(PyTypeObject *type)
{
    mypyc___irbuild___context___FuncInfoObject *self;
    self = (mypyc___irbuild___context___FuncInfoObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = context___FuncInfo_vtable;
    self->_is_nested = 2;
    self->_contains_nested = 2;
    self->_is_decorated = 2;
    self->_in_non_ext = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_context___FuncInfo(PyObject *cpy_r_fitem, PyObject *cpy_r_name, PyObject *cpy_r_class_name, PyObject *cpy_r_namespace, char cpy_r_is_nested, char cpy_r_contains_nested, char cpy_r_is_decorated, char cpy_r_in_non_ext)
{
    PyObject *self = context___FuncInfo_setup(CPyType_context___FuncInfo);
    if (self == NULL)
        return NULL;
    char res = CPyDef_context___FuncInfo_____init__(self, cpy_r_fitem, cpy_r_name, cpy_r_class_name, cpy_r_namespace, cpy_r_is_nested, cpy_r_contains_nested, cpy_r_is_decorated, cpy_r_in_non_ext);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
context___FuncInfo_get_fitem(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    if (unlikely(self->_fitem == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fitem' of 'FuncInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fitem);
    PyObject *retval = self->_fitem;
    return retval;
}

static int
context___FuncInfo_set_fitem(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncInfo' object attribute 'fitem' cannot be deleted");
        return -1;
    }
    if (self->_fitem != NULL) {
        CPy_DECREF(self->_fitem);
    }
    PyObject *tmp;
    if (likely((Py_TYPE(value) == CPyType_nodes___FuncDef) || (Py_TYPE(value) == CPyType_nodes___LambdaExpr)))
        tmp = value;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_fitem = tmp;
    return 0;
}

static PyObject *
context___FuncInfo_get_name(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    if (unlikely(self->_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'name' of 'FuncInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_name);
    PyObject *retval = self->_name;
    return retval;
}

static int
context___FuncInfo_set_name(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncInfo' object attribute 'name' cannot be deleted");
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
context___FuncInfo_get_class_name(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    if (unlikely(self->_class_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'class_name' of 'FuncInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_class_name);
    PyObject *retval = self->_class_name;
    return retval;
}

static int
context___FuncInfo_set_class_name(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncInfo' object attribute 'class_name' cannot be deleted");
        return -1;
    }
    if (self->_class_name != NULL) {
        CPy_DECREF(self->_class_name);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10083;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10083;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL10083: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_class_name = tmp;
    return 0;
}

static PyObject *
context___FuncInfo_get_ns(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    if (unlikely(self->_ns == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ns' of 'FuncInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ns);
    PyObject *retval = self->_ns;
    return retval;
}

static int
context___FuncInfo_set_ns(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncInfo' object attribute 'ns' cannot be deleted");
        return -1;
    }
    if (self->_ns != NULL) {
        CPy_DECREF(self->_ns);
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
    self->_ns = tmp;
    return 0;
}

static PyObject *
context___FuncInfo_get__callable_class(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    if (unlikely(self->__callable_class == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_callable_class' of 'FuncInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->__callable_class);
    PyObject *retval = self->__callable_class;
    return retval;
}

static int
context___FuncInfo_set__callable_class(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncInfo' object attribute '_callable_class' cannot be deleted");
        return -1;
    }
    if (self->__callable_class != NULL) {
        CPy_DECREF(self->__callable_class);
    }
    PyObject *tmp;
    if ((Py_TYPE(value) == CPyType_context___GeneratorClass) || (Py_TYPE(value) == CPyType_context___ImplicitClass))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10084;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10084;
    CPy_TypeError("mypyc.irbuild.context.ImplicitClass or None", value); 
    tmp = NULL;
__LL10084: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__callable_class = tmp;
    return 0;
}

static PyObject *
context___FuncInfo_get__env_class(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    if (unlikely(self->__env_class == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_env_class' of 'FuncInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->__env_class);
    PyObject *retval = self->__env_class;
    return retval;
}

static int
context___FuncInfo_set__env_class(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncInfo' object attribute '_env_class' cannot be deleted");
        return -1;
    }
    if (self->__env_class != NULL) {
        CPy_DECREF(self->__env_class);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_class_ir___ClassIR)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10085;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10085;
    CPy_TypeError("mypyc.ir.class_ir.ClassIR or None", value); 
    tmp = NULL;
__LL10085: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__env_class = tmp;
    return 0;
}

static PyObject *
context___FuncInfo_get__generator_class(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    if (unlikely(self->__generator_class == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_generator_class' of 'FuncInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->__generator_class);
    PyObject *retval = self->__generator_class;
    return retval;
}

static int
context___FuncInfo_set__generator_class(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncInfo' object attribute '_generator_class' cannot be deleted");
        return -1;
    }
    if (self->__generator_class != NULL) {
        CPy_DECREF(self->__generator_class);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_context___GeneratorClass)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10086;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10086;
    CPy_TypeError("mypyc.irbuild.context.GeneratorClass or None", value); 
    tmp = NULL;
__LL10086: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__generator_class = tmp;
    return 0;
}

static PyObject *
context___FuncInfo_get__curr_env_reg(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    if (unlikely(self->__curr_env_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_curr_env_reg' of 'FuncInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->__curr_env_reg);
    PyObject *retval = self->__curr_env_reg;
    return retval;
}

static int
context___FuncInfo_set__curr_env_reg(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncInfo' object attribute '_curr_env_reg' cannot be deleted");
        return -1;
    }
    if (self->__curr_env_reg != NULL) {
        CPy_DECREF(self->__curr_env_reg);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_ops___Value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10087;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10087;
    CPy_TypeError("mypyc.ir.ops.Value or None", value); 
    tmp = NULL;
__LL10087: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__curr_env_reg = tmp;
    return 0;
}

static PyObject *
context___FuncInfo_get_is_nested(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    PyObject *retval = self->_is_nested ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
context___FuncInfo_set_is_nested(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncInfo' object attribute 'is_nested' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_nested = tmp;
    return 0;
}

static PyObject *
context___FuncInfo_get_contains_nested(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    PyObject *retval = self->_contains_nested ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
context___FuncInfo_set_contains_nested(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncInfo' object attribute 'contains_nested' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_contains_nested = tmp;
    return 0;
}

static PyObject *
context___FuncInfo_get_is_decorated(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    PyObject *retval = self->_is_decorated ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
context___FuncInfo_set_is_decorated(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncInfo' object attribute 'is_decorated' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_decorated = tmp;
    return 0;
}

static PyObject *
context___FuncInfo_get_in_non_ext(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    PyObject *retval = self->_in_non_ext ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
context___FuncInfo_set_in_non_ext(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FuncInfo' object attribute 'in_non_ext' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_in_non_ext = tmp;
    return 0;
}

static PyObject *
context___FuncInfo_get_is_generator(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    char retval = CPyDef_context___FuncInfo___is_generator((PyObject *) self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
}

static PyObject *
context___FuncInfo_get_is_coroutine(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    char retval = CPyDef_context___FuncInfo___is_coroutine((PyObject *) self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
}

static PyObject *
context___FuncInfo_get_callable_class(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    return CPyDef_context___FuncInfo___callable_class((PyObject *) self);
}

static int
context___FuncInfo_set_callable_class(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure)
{
    CPyDef_context___FuncInfo_____mypyc_setter__callable_class((PyObject *) self, value);
    return 0;
}

static PyObject *
context___FuncInfo_get_env_class(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    return CPyDef_context___FuncInfo___env_class((PyObject *) self);
}

static int
context___FuncInfo_set_env_class(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure)
{
    CPyDef_context___FuncInfo_____mypyc_setter__env_class((PyObject *) self, value);
    return 0;
}

static PyObject *
context___FuncInfo_get_generator_class(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    return CPyDef_context___FuncInfo___generator_class((PyObject *) self);
}

static int
context___FuncInfo_set_generator_class(mypyc___irbuild___context___FuncInfoObject *self, PyObject *value, void *closure)
{
    CPyDef_context___FuncInfo_____mypyc_setter__generator_class((PyObject *) self, value);
    return 0;
}

static PyObject *
context___FuncInfo_get_curr_env_reg(mypyc___irbuild___context___FuncInfoObject *self, void *closure)
{
    return CPyDef_context___FuncInfo___curr_env_reg((PyObject *) self);
}

static int
context___ImplicitClass_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *context___ImplicitClass_setup(PyTypeObject *type);
PyObject *CPyDef_context___ImplicitClass(PyObject *cpy_r_ir);

static PyObject *
context___ImplicitClass_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_context___ImplicitClass) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = context___ImplicitClass_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_context___ImplicitClass_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
context___ImplicitClass_traverse(mypyc___irbuild___context___ImplicitClassObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_ir);
    Py_VISIT(self->__self_reg);
    Py_VISIT(self->__curr_env_reg);
    Py_VISIT(self->__prev_env_reg);
    return 0;
}

static int
context___ImplicitClass_clear(mypyc___irbuild___context___ImplicitClassObject *self)
{
    Py_CLEAR(self->_ir);
    Py_CLEAR(self->__self_reg);
    Py_CLEAR(self->__curr_env_reg);
    Py_CLEAR(self->__prev_env_reg);
    return 0;
}

static void
context___ImplicitClass_dealloc(mypyc___irbuild___context___ImplicitClassObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, context___ImplicitClass_dealloc)
    context___ImplicitClass_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem context___ImplicitClass_vtable[7];
static bool
CPyDef_context___ImplicitClass_trait_vtable_setup(void)
{
    CPyVTableItem context___ImplicitClass_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_context___ImplicitClass_____init__,
        (CPyVTableItem)CPyDef_context___ImplicitClass___self_reg,
        (CPyVTableItem)CPyDef_context___ImplicitClass_____mypyc_setter__self_reg,
        (CPyVTableItem)CPyDef_context___ImplicitClass___curr_env_reg,
        (CPyVTableItem)CPyDef_context___ImplicitClass_____mypyc_setter__curr_env_reg,
        (CPyVTableItem)CPyDef_context___ImplicitClass___prev_env_reg,
        (CPyVTableItem)CPyDef_context___ImplicitClass_____mypyc_setter__prev_env_reg,
    };
    memcpy(context___ImplicitClass_vtable, context___ImplicitClass_vtable_scratch, sizeof(context___ImplicitClass_vtable));
    return 1;
}

static PyObject *
context___ImplicitClass_get_ir(mypyc___irbuild___context___ImplicitClassObject *self, void *closure);
static int
context___ImplicitClass_set_ir(mypyc___irbuild___context___ImplicitClassObject *self, PyObject *value, void *closure);
static PyObject *
context___ImplicitClass_get__self_reg(mypyc___irbuild___context___ImplicitClassObject *self, void *closure);
static int
context___ImplicitClass_set__self_reg(mypyc___irbuild___context___ImplicitClassObject *self, PyObject *value, void *closure);
static PyObject *
context___ImplicitClass_get__curr_env_reg(mypyc___irbuild___context___ImplicitClassObject *self, void *closure);
static int
context___ImplicitClass_set__curr_env_reg(mypyc___irbuild___context___ImplicitClassObject *self, PyObject *value, void *closure);
static PyObject *
context___ImplicitClass_get__prev_env_reg(mypyc___irbuild___context___ImplicitClassObject *self, void *closure);
static int
context___ImplicitClass_set__prev_env_reg(mypyc___irbuild___context___ImplicitClassObject *self, PyObject *value, void *closure);
static PyObject *
context___ImplicitClass_get_self_reg(mypyc___irbuild___context___ImplicitClassObject *self, void *closure);
static int
context___ImplicitClass_set_self_reg(mypyc___irbuild___context___ImplicitClassObject *self, PyObject *value, void *closure);
static PyObject *
context___ImplicitClass_get_curr_env_reg(mypyc___irbuild___context___ImplicitClassObject *self, void *closure);
static int
context___ImplicitClass_set_curr_env_reg(mypyc___irbuild___context___ImplicitClassObject *self, PyObject *value, void *closure);
static PyObject *
context___ImplicitClass_get_prev_env_reg(mypyc___irbuild___context___ImplicitClassObject *self, void *closure);
static int
context___ImplicitClass_set_prev_env_reg(mypyc___irbuild___context___ImplicitClassObject *self, PyObject *value, void *closure);

static PyGetSetDef context___ImplicitClass_getseters[] = {
    {"ir",
     (getter)context___ImplicitClass_get_ir, (setter)context___ImplicitClass_set_ir,
     NULL, NULL},
    {"_self_reg",
     (getter)context___ImplicitClass_get__self_reg, (setter)context___ImplicitClass_set__self_reg,
     NULL, NULL},
    {"_curr_env_reg",
     (getter)context___ImplicitClass_get__curr_env_reg, (setter)context___ImplicitClass_set__curr_env_reg,
     NULL, NULL},
    {"_prev_env_reg",
     (getter)context___ImplicitClass_get__prev_env_reg, (setter)context___ImplicitClass_set__prev_env_reg,
     NULL, NULL},
    {"self_reg",
     (getter)context___ImplicitClass_get_self_reg,
     (setter)context___ImplicitClass_set_self_reg,
    NULL, NULL},
    {"curr_env_reg",
     (getter)context___ImplicitClass_get_curr_env_reg,
     (setter)context___ImplicitClass_set_curr_env_reg,
    NULL, NULL},
    {"prev_env_reg",
     (getter)context___ImplicitClass_get_prev_env_reg,
     (setter)context___ImplicitClass_set_prev_env_reg,
    NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef context___ImplicitClass_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_context___ImplicitClass_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_context___ImplicitClass_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ImplicitClass",
    .tp_new = context___ImplicitClass_new,
    .tp_dealloc = (destructor)context___ImplicitClass_dealloc,
    .tp_traverse = (traverseproc)context___ImplicitClass_traverse,
    .tp_clear = (inquiry)context___ImplicitClass_clear,
    .tp_getset = context___ImplicitClass_getseters,
    .tp_methods = context___ImplicitClass_methods,
    .tp_init = context___ImplicitClass_init,
    .tp_basicsize = sizeof(mypyc___irbuild___context___ImplicitClassObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_context___ImplicitClass_template = &CPyType_context___ImplicitClass_template_;

static PyObject *
context___ImplicitClass_setup(PyTypeObject *type)
{
    mypyc___irbuild___context___ImplicitClassObject *self;
    self = (mypyc___irbuild___context___ImplicitClassObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = context___ImplicitClass_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_context___ImplicitClass(PyObject *cpy_r_ir)
{
    PyObject *self = context___ImplicitClass_setup(CPyType_context___ImplicitClass);
    if (self == NULL)
        return NULL;
    char res = CPyDef_context___ImplicitClass_____init__(self, cpy_r_ir);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
context___ImplicitClass_get_ir(mypyc___irbuild___context___ImplicitClassObject *self, void *closure)
{
    if (unlikely(self->_ir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ir' of 'ImplicitClass' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ir);
    PyObject *retval = self->_ir;
    return retval;
}

static int
context___ImplicitClass_set_ir(mypyc___irbuild___context___ImplicitClassObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ImplicitClass' object attribute 'ir' cannot be deleted");
        return -1;
    }
    if (self->_ir != NULL) {
        CPy_DECREF(self->_ir);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_class_ir___ClassIR))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_ir = tmp;
    return 0;
}

static PyObject *
context___ImplicitClass_get__self_reg(mypyc___irbuild___context___ImplicitClassObject *self, void *closure)
{
    if (unlikely(self->__self_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_self_reg' of 'ImplicitClass' undefined");
        return NULL;
    }
    CPy_INCREF(self->__self_reg);
    PyObject *retval = self->__self_reg;
    return retval;
}

static int
context___ImplicitClass_set__self_reg(mypyc___irbuild___context___ImplicitClassObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ImplicitClass' object attribute '_self_reg' cannot be deleted");
        return -1;
    }
    if (self->__self_reg != NULL) {
        CPy_DECREF(self->__self_reg);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_ops___Value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10088;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10088;
    CPy_TypeError("mypyc.ir.ops.Value or None", value); 
    tmp = NULL;
__LL10088: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__self_reg = tmp;
    return 0;
}

static PyObject *
context___ImplicitClass_get__curr_env_reg(mypyc___irbuild___context___ImplicitClassObject *self, void *closure)
{
    if (unlikely(self->__curr_env_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_curr_env_reg' of 'ImplicitClass' undefined");
        return NULL;
    }
    CPy_INCREF(self->__curr_env_reg);
    PyObject *retval = self->__curr_env_reg;
    return retval;
}

static int
context___ImplicitClass_set__curr_env_reg(mypyc___irbuild___context___ImplicitClassObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ImplicitClass' object attribute '_curr_env_reg' cannot be deleted");
        return -1;
    }
    if (self->__curr_env_reg != NULL) {
        CPy_DECREF(self->__curr_env_reg);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_ops___Value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10089;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10089;
    CPy_TypeError("mypyc.ir.ops.Value or None", value); 
    tmp = NULL;
__LL10089: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__curr_env_reg = tmp;
    return 0;
}

static PyObject *
context___ImplicitClass_get__prev_env_reg(mypyc___irbuild___context___ImplicitClassObject *self, void *closure)
{
    if (unlikely(self->__prev_env_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_prev_env_reg' of 'ImplicitClass' undefined");
        return NULL;
    }
    CPy_INCREF(self->__prev_env_reg);
    PyObject *retval = self->__prev_env_reg;
    return retval;
}

static int
context___ImplicitClass_set__prev_env_reg(mypyc___irbuild___context___ImplicitClassObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ImplicitClass' object attribute '_prev_env_reg' cannot be deleted");
        return -1;
    }
    if (self->__prev_env_reg != NULL) {
        CPy_DECREF(self->__prev_env_reg);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_ops___Value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10090;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10090;
    CPy_TypeError("mypyc.ir.ops.Value or None", value); 
    tmp = NULL;
__LL10090: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__prev_env_reg = tmp;
    return 0;
}

static PyObject *
context___ImplicitClass_get_self_reg(mypyc___irbuild___context___ImplicitClassObject *self, void *closure)
{
    return CPyDef_context___ImplicitClass___self_reg((PyObject *) self);
}

static int
context___ImplicitClass_set_self_reg(mypyc___irbuild___context___ImplicitClassObject *self, PyObject *value, void *closure)
{
    CPyDef_context___ImplicitClass_____mypyc_setter__self_reg((PyObject *) self, value);
    return 0;
}

static PyObject *
context___ImplicitClass_get_curr_env_reg(mypyc___irbuild___context___ImplicitClassObject *self, void *closure)
{
    return CPyDef_context___ImplicitClass___curr_env_reg((PyObject *) self);
}

static int
context___ImplicitClass_set_curr_env_reg(mypyc___irbuild___context___ImplicitClassObject *self, PyObject *value, void *closure)
{
    CPyDef_context___ImplicitClass_____mypyc_setter__curr_env_reg((PyObject *) self, value);
    return 0;
}

static PyObject *
context___ImplicitClass_get_prev_env_reg(mypyc___irbuild___context___ImplicitClassObject *self, void *closure)
{
    return CPyDef_context___ImplicitClass___prev_env_reg((PyObject *) self);
}

static int
context___ImplicitClass_set_prev_env_reg(mypyc___irbuild___context___ImplicitClassObject *self, PyObject *value, void *closure)
{
    CPyDef_context___ImplicitClass_____mypyc_setter__prev_env_reg((PyObject *) self, value);
    return 0;
}

static int
context___GeneratorClass_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *context___GeneratorClass_setup(PyTypeObject *type);
PyObject *CPyDef_context___GeneratorClass(PyObject *cpy_r_ir);

static PyObject *
context___GeneratorClass_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_context___GeneratorClass) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = context___GeneratorClass_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_context___GeneratorClass_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
context___GeneratorClass_traverse(mypyc___irbuild___context___GeneratorClassObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_ir);
    Py_VISIT(self->__self_reg);
    Py_VISIT(self->__curr_env_reg);
    Py_VISIT(self->__prev_env_reg);
    Py_VISIT(self->__next_label_reg);
    Py_VISIT(self->__next_label_target);
    Py_VISIT(self->_exc_regs);
    Py_VISIT(self->_send_arg_reg);
    Py_VISIT(self->_switch_block);
    Py_VISIT(self->_continuation_blocks);
    return 0;
}

static int
context___GeneratorClass_clear(mypyc___irbuild___context___GeneratorClassObject *self)
{
    Py_CLEAR(self->_ir);
    Py_CLEAR(self->__self_reg);
    Py_CLEAR(self->__curr_env_reg);
    Py_CLEAR(self->__prev_env_reg);
    Py_CLEAR(self->__next_label_reg);
    Py_CLEAR(self->__next_label_target);
    Py_CLEAR(self->_exc_regs);
    Py_CLEAR(self->_send_arg_reg);
    Py_CLEAR(self->_switch_block);
    Py_CLEAR(self->_continuation_blocks);
    return 0;
}

static void
context___GeneratorClass_dealloc(mypyc___irbuild___context___GeneratorClassObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, context___GeneratorClass_dealloc)
    context___GeneratorClass_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem context___GeneratorClass_vtable[12];
static bool
CPyDef_context___GeneratorClass_trait_vtable_setup(void)
{
    CPyVTableItem context___GeneratorClass_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_context___GeneratorClass_____init__,
        (CPyVTableItem)CPyDef_context___ImplicitClass___self_reg,
        (CPyVTableItem)CPyDef_context___ImplicitClass_____mypyc_setter__self_reg,
        (CPyVTableItem)CPyDef_context___ImplicitClass___curr_env_reg,
        (CPyVTableItem)CPyDef_context___ImplicitClass_____mypyc_setter__curr_env_reg,
        (CPyVTableItem)CPyDef_context___ImplicitClass___prev_env_reg,
        (CPyVTableItem)CPyDef_context___ImplicitClass_____mypyc_setter__prev_env_reg,
        (CPyVTableItem)CPyDef_context___GeneratorClass_____init__,
        (CPyVTableItem)CPyDef_context___GeneratorClass___next_label_reg,
        (CPyVTableItem)CPyDef_context___GeneratorClass_____mypyc_setter__next_label_reg,
        (CPyVTableItem)CPyDef_context___GeneratorClass___next_label_target,
        (CPyVTableItem)CPyDef_context___GeneratorClass_____mypyc_setter__next_label_target,
    };
    memcpy(context___GeneratorClass_vtable, context___GeneratorClass_vtable_scratch, sizeof(context___GeneratorClass_vtable));
    return 1;
}

static PyObject *
context___GeneratorClass_get__next_label_reg(mypyc___irbuild___context___GeneratorClassObject *self, void *closure);
static int
context___GeneratorClass_set__next_label_reg(mypyc___irbuild___context___GeneratorClassObject *self, PyObject *value, void *closure);
static PyObject *
context___GeneratorClass_get__next_label_target(mypyc___irbuild___context___GeneratorClassObject *self, void *closure);
static int
context___GeneratorClass_set__next_label_target(mypyc___irbuild___context___GeneratorClassObject *self, PyObject *value, void *closure);
static PyObject *
context___GeneratorClass_get_exc_regs(mypyc___irbuild___context___GeneratorClassObject *self, void *closure);
static int
context___GeneratorClass_set_exc_regs(mypyc___irbuild___context___GeneratorClassObject *self, PyObject *value, void *closure);
static PyObject *
context___GeneratorClass_get_send_arg_reg(mypyc___irbuild___context___GeneratorClassObject *self, void *closure);
static int
context___GeneratorClass_set_send_arg_reg(mypyc___irbuild___context___GeneratorClassObject *self, PyObject *value, void *closure);
static PyObject *
context___GeneratorClass_get_switch_block(mypyc___irbuild___context___GeneratorClassObject *self, void *closure);
static int
context___GeneratorClass_set_switch_block(mypyc___irbuild___context___GeneratorClassObject *self, PyObject *value, void *closure);
static PyObject *
context___GeneratorClass_get_continuation_blocks(mypyc___irbuild___context___GeneratorClassObject *self, void *closure);
static int
context___GeneratorClass_set_continuation_blocks(mypyc___irbuild___context___GeneratorClassObject *self, PyObject *value, void *closure);
static PyObject *
context___GeneratorClass_get_next_label_reg(mypyc___irbuild___context___GeneratorClassObject *self, void *closure);
static int
context___GeneratorClass_set_next_label_reg(mypyc___irbuild___context___GeneratorClassObject *self, PyObject *value, void *closure);
static PyObject *
context___GeneratorClass_get_next_label_target(mypyc___irbuild___context___GeneratorClassObject *self, void *closure);
static int
context___GeneratorClass_set_next_label_target(mypyc___irbuild___context___GeneratorClassObject *self, PyObject *value, void *closure);

static PyGetSetDef context___GeneratorClass_getseters[] = {
    {"_next_label_reg",
     (getter)context___GeneratorClass_get__next_label_reg, (setter)context___GeneratorClass_set__next_label_reg,
     NULL, NULL},
    {"_next_label_target",
     (getter)context___GeneratorClass_get__next_label_target, (setter)context___GeneratorClass_set__next_label_target,
     NULL, NULL},
    {"exc_regs",
     (getter)context___GeneratorClass_get_exc_regs, (setter)context___GeneratorClass_set_exc_regs,
     NULL, NULL},
    {"send_arg_reg",
     (getter)context___GeneratorClass_get_send_arg_reg, (setter)context___GeneratorClass_set_send_arg_reg,
     NULL, NULL},
    {"switch_block",
     (getter)context___GeneratorClass_get_switch_block, (setter)context___GeneratorClass_set_switch_block,
     NULL, NULL},
    {"continuation_blocks",
     (getter)context___GeneratorClass_get_continuation_blocks, (setter)context___GeneratorClass_set_continuation_blocks,
     NULL, NULL},
    {"next_label_reg",
     (getter)context___GeneratorClass_get_next_label_reg,
     (setter)context___GeneratorClass_set_next_label_reg,
    NULL, NULL},
    {"next_label_target",
     (getter)context___GeneratorClass_get_next_label_target,
     (setter)context___GeneratorClass_set_next_label_target,
    NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef context___GeneratorClass_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_context___GeneratorClass_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_context___GeneratorClass_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "GeneratorClass",
    .tp_new = context___GeneratorClass_new,
    .tp_dealloc = (destructor)context___GeneratorClass_dealloc,
    .tp_traverse = (traverseproc)context___GeneratorClass_traverse,
    .tp_clear = (inquiry)context___GeneratorClass_clear,
    .tp_getset = context___GeneratorClass_getseters,
    .tp_methods = context___GeneratorClass_methods,
    .tp_init = context___GeneratorClass_init,
    .tp_basicsize = sizeof(mypyc___irbuild___context___GeneratorClassObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_context___GeneratorClass_template = &CPyType_context___GeneratorClass_template_;

static PyObject *
context___GeneratorClass_setup(PyTypeObject *type)
{
    mypyc___irbuild___context___GeneratorClassObject *self;
    self = (mypyc___irbuild___context___GeneratorClassObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = context___GeneratorClass_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_context___GeneratorClass(PyObject *cpy_r_ir)
{
    PyObject *self = context___GeneratorClass_setup(CPyType_context___GeneratorClass);
    if (self == NULL)
        return NULL;
    char res = CPyDef_context___GeneratorClass_____init__(self, cpy_r_ir);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
context___GeneratorClass_get__next_label_reg(mypyc___irbuild___context___GeneratorClassObject *self, void *closure)
{
    if (unlikely(self->__next_label_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_next_label_reg' of 'GeneratorClass' undefined");
        return NULL;
    }
    CPy_INCREF(self->__next_label_reg);
    PyObject *retval = self->__next_label_reg;
    return retval;
}

static int
context___GeneratorClass_set__next_label_reg(mypyc___irbuild___context___GeneratorClassObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GeneratorClass' object attribute '_next_label_reg' cannot be deleted");
        return -1;
    }
    if (self->__next_label_reg != NULL) {
        CPy_DECREF(self->__next_label_reg);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_ops___Value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10091;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10091;
    CPy_TypeError("mypyc.ir.ops.Value or None", value); 
    tmp = NULL;
__LL10091: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__next_label_reg = tmp;
    return 0;
}

static PyObject *
context___GeneratorClass_get__next_label_target(mypyc___irbuild___context___GeneratorClassObject *self, void *closure)
{
    if (unlikely(self->__next_label_target == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_next_label_target' of 'GeneratorClass' undefined");
        return NULL;
    }
    CPy_INCREF(self->__next_label_target);
    PyObject *retval = self->__next_label_target;
    return retval;
}

static int
context___GeneratorClass_set__next_label_target(mypyc___irbuild___context___GeneratorClassObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GeneratorClass' object attribute '_next_label_target' cannot be deleted");
        return -1;
    }
    if (self->__next_label_target != NULL) {
        CPy_DECREF(self->__next_label_target);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_targets___AssignmentTarget))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10092;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10092;
    CPy_TypeError("mypyc.irbuild.targets.AssignmentTarget or None", value); 
    tmp = NULL;
__LL10092: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__next_label_target = tmp;
    return 0;
}

static PyObject *
context___GeneratorClass_get_exc_regs(mypyc___irbuild___context___GeneratorClassObject *self, void *closure)
{
    if (unlikely(self->_exc_regs == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'exc_regs' of 'GeneratorClass' undefined");
        return NULL;
    }
    CPy_INCREF(self->_exc_regs);
    PyObject *retval = self->_exc_regs;
    return retval;
}

static int
context___GeneratorClass_set_exc_regs(mypyc___irbuild___context___GeneratorClassObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GeneratorClass' object attribute 'exc_regs' cannot be deleted");
        return -1;
    }
    if (self->_exc_regs != NULL) {
        CPy_DECREF(self->_exc_regs);
    }
    PyObject *tmp;
    if (unlikely(!(PyTuple_Check(value) && PyTuple_GET_SIZE(value) == 3))) {
        tmp = NULL;
        goto __LL10094;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(value, 0), CPyType_ops___Value)))
        tmp = PyTuple_GET_ITEM(value, 0);
    else {
        tmp = NULL;
    }
    if (tmp == NULL) goto __LL10094;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(value, 1), CPyType_ops___Value)))
        tmp = PyTuple_GET_ITEM(value, 1);
    else {
        tmp = NULL;
    }
    if (tmp == NULL) goto __LL10094;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(value, 2), CPyType_ops___Value)))
        tmp = PyTuple_GET_ITEM(value, 2);
    else {
        tmp = NULL;
    }
    if (tmp == NULL) goto __LL10094;
    tmp = value;
__LL10094: ;
    if (tmp != NULL) goto __LL10093;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10093;
    CPy_TypeError("tuple[mypyc.ir.ops.Value, mypyc.ir.ops.Value, mypyc.ir.ops.Value] or None", value); 
    tmp = NULL;
__LL10093: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_exc_regs = tmp;
    return 0;
}

static PyObject *
context___GeneratorClass_get_send_arg_reg(mypyc___irbuild___context___GeneratorClassObject *self, void *closure)
{
    if (unlikely(self->_send_arg_reg == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'send_arg_reg' of 'GeneratorClass' undefined");
        return NULL;
    }
    CPy_INCREF(self->_send_arg_reg);
    PyObject *retval = self->_send_arg_reg;
    return retval;
}

static int
context___GeneratorClass_set_send_arg_reg(mypyc___irbuild___context___GeneratorClassObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GeneratorClass' object attribute 'send_arg_reg' cannot be deleted");
        return -1;
    }
    if (self->_send_arg_reg != NULL) {
        CPy_DECREF(self->_send_arg_reg);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_ops___Value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10095;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10095;
    CPy_TypeError("mypyc.ir.ops.Value or None", value); 
    tmp = NULL;
__LL10095: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_send_arg_reg = tmp;
    return 0;
}

static PyObject *
context___GeneratorClass_get_switch_block(mypyc___irbuild___context___GeneratorClassObject *self, void *closure)
{
    if (unlikely(self->_switch_block == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'switch_block' of 'GeneratorClass' undefined");
        return NULL;
    }
    CPy_INCREF(self->_switch_block);
    PyObject *retval = self->_switch_block;
    return retval;
}

static int
context___GeneratorClass_set_switch_block(mypyc___irbuild___context___GeneratorClassObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GeneratorClass' object attribute 'switch_block' cannot be deleted");
        return -1;
    }
    if (self->_switch_block != NULL) {
        CPy_DECREF(self->_switch_block);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_ops___BasicBlock))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.ops.BasicBlock", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_switch_block = tmp;
    return 0;
}

static PyObject *
context___GeneratorClass_get_continuation_blocks(mypyc___irbuild___context___GeneratorClassObject *self, void *closure)
{
    if (unlikely(self->_continuation_blocks == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'continuation_blocks' of 'GeneratorClass' undefined");
        return NULL;
    }
    CPy_INCREF(self->_continuation_blocks);
    PyObject *retval = self->_continuation_blocks;
    return retval;
}

static int
context___GeneratorClass_set_continuation_blocks(mypyc___irbuild___context___GeneratorClassObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GeneratorClass' object attribute 'continuation_blocks' cannot be deleted");
        return -1;
    }
    if (self->_continuation_blocks != NULL) {
        CPy_DECREF(self->_continuation_blocks);
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
    self->_continuation_blocks = tmp;
    return 0;
}

static PyObject *
context___GeneratorClass_get_next_label_reg(mypyc___irbuild___context___GeneratorClassObject *self, void *closure)
{
    return CPyDef_context___GeneratorClass___next_label_reg((PyObject *) self);
}

static int
context___GeneratorClass_set_next_label_reg(mypyc___irbuild___context___GeneratorClassObject *self, PyObject *value, void *closure)
{
    CPyDef_context___GeneratorClass_____mypyc_setter__next_label_reg((PyObject *) self, value);
    return 0;
}

static PyObject *
context___GeneratorClass_get_next_label_target(mypyc___irbuild___context___GeneratorClassObject *self, void *closure)
{
    return CPyDef_context___GeneratorClass___next_label_target((PyObject *) self);
}

static int
context___GeneratorClass_set_next_label_target(mypyc___irbuild___context___GeneratorClassObject *self, PyObject *value, void *closure)
{
    CPyDef_context___GeneratorClass_____mypyc_setter__next_label_target((PyObject *) self, value);
    return 0;
}
static PyMethodDef contextmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef contextmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.context",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    contextmodule_methods
};

PyObject *CPyInit_mypyc___irbuild___context(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___context_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___context_internal);
        return CPyModule_mypyc___irbuild___context_internal;
    }
    CPyModule_mypyc___irbuild___context_internal = PyModule_Create(&contextmodule);
    if (unlikely(CPyModule_mypyc___irbuild___context_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___context_internal, "__name__");
    CPyStatic_context___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___context_internal);
    if (unlikely(CPyStatic_context___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_context_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___context_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___context_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_context___FuncInfo);
    Py_CLEAR(CPyType_context___ImplicitClass);
    Py_CLEAR(CPyType_context___GeneratorClass);
    return NULL;
}

char CPyDef_context___FuncInfo_____init__(PyObject *cpy_r_self, PyObject *cpy_r_fitem, PyObject *cpy_r_name, PyObject *cpy_r_class_name, PyObject *cpy_r_namespace, char cpy_r_is_nested, char cpy_r_contains_nested, char cpy_r_is_decorated, char cpy_r_in_non_ext) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    if (cpy_r_fitem != NULL) goto CPyL21;
    cpy_r_r0 = CPyStatic_func_ir___INVALID_FUNC_DEF;
    if (likely(cpy_r_r0 != NULL)) goto CPyL4;
    PyErr_SetString(PyExc_NameError, "value for final name \"INVALID_FUNC_DEF\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "__init__", 17, CPyStatic_context___globals);
        goto CPyL20;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_r0);
    cpy_r_fitem = cpy_r_r0;
CPyL5: ;
    if (cpy_r_name != NULL) goto CPyL22;
    cpy_r_r2 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r2);
    cpy_r_name = cpy_r_r2;
CPyL7: ;
    if (cpy_r_class_name != NULL) goto CPyL23;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    cpy_r_class_name = cpy_r_r3;
CPyL9: ;
    if (cpy_r_namespace != NULL) goto CPyL24;
    cpy_r_r4 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r4);
    cpy_r_namespace = cpy_r_r4;
CPyL11: ;
    if (cpy_r_is_nested != 2) goto CPyL13;
    cpy_r_is_nested = 0;
CPyL13: ;
    if (cpy_r_contains_nested != 2) goto CPyL15;
    cpy_r_contains_nested = 0;
CPyL15: ;
    if (cpy_r_is_decorated != 2) goto CPyL17;
    cpy_r_is_decorated = 0;
CPyL17: ;
    if (cpy_r_in_non_ext != 2) goto CPyL19;
    cpy_r_in_non_ext = 0;
CPyL19: ;
    ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->_fitem = cpy_r_fitem;
    ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->_name = cpy_r_name;
    ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->_class_name = cpy_r_class_name;
    ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->_ns = cpy_r_namespace;
    cpy_r_r5 = Py_None;
    CPy_INCREF(cpy_r_r5);
    ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__callable_class = cpy_r_r5;
    cpy_r_r6 = Py_None;
    CPy_INCREF(cpy_r_r6);
    ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__env_class = cpy_r_r6;
    cpy_r_r7 = Py_None;
    CPy_INCREF(cpy_r_r7);
    ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__generator_class = cpy_r_r7;
    cpy_r_r8 = Py_None;
    CPy_INCREF(cpy_r_r8);
    ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__curr_env_reg = cpy_r_r8;
    ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->_is_nested = cpy_r_is_nested;
    ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->_contains_nested = cpy_r_contains_nested;
    ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->_is_decorated = cpy_r_is_decorated;
    ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->_in_non_ext = cpy_r_in_non_ext;
    return 1;
CPyL20: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL21: ;
    CPy_INCREF(cpy_r_fitem);
    goto CPyL5;
CPyL22: ;
    CPy_INCREF(cpy_r_name);
    goto CPyL7;
CPyL23: ;
    CPy_INCREF(cpy_r_class_name);
    goto CPyL9;
CPyL24: ;
    CPy_INCREF(cpy_r_namespace);
    goto CPyL11;
}

PyObject *CPyPy_context___FuncInfo_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fitem", "name", "class_name", "namespace", "is_nested", "contains_nested", "is_decorated", "in_non_ext", 0};
    PyObject *obj_fitem = NULL;
    PyObject *obj_name = NULL;
    PyObject *obj_class_name = NULL;
    PyObject *obj_namespace = NULL;
    PyObject *obj_is_nested = NULL;
    PyObject *obj_contains_nested = NULL;
    PyObject *obj_is_decorated = NULL;
    PyObject *obj_in_non_ext = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "|OOOOOOOO", "__init__", kwlist, &obj_fitem, &obj_name, &obj_class_name, &obj_namespace, &obj_is_nested, &obj_contains_nested, &obj_is_decorated, &obj_in_non_ext)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_context___FuncInfo))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_self); 
        goto fail;
    }
    PyObject *arg_fitem;
    if (obj_fitem == NULL) {
        arg_fitem = NULL;
    } else if (likely((Py_TYPE(obj_fitem) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_fitem) == CPyType_nodes___LambdaExpr)))
        arg_fitem = obj_fitem;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_fitem); 
        goto fail;
    }
    PyObject *arg_name;
    if (obj_name == NULL) {
        arg_name = NULL;
    } else if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_class_name;
    if (obj_class_name == NULL) {
        arg_class_name = NULL;
        goto __LL10096;
    }
    if (PyUnicode_Check(obj_class_name))
        arg_class_name = obj_class_name;
    else {
        arg_class_name = NULL;
    }
    if (arg_class_name != NULL) goto __LL10096;
    if (obj_class_name == Py_None)
        arg_class_name = obj_class_name;
    else {
        arg_class_name = NULL;
    }
    if (arg_class_name != NULL) goto __LL10096;
    CPy_TypeError("str or None", obj_class_name); 
    goto fail;
__LL10096: ;
    PyObject *arg_namespace;
    if (obj_namespace == NULL) {
        arg_namespace = NULL;
    } else if (likely(PyUnicode_Check(obj_namespace)))
        arg_namespace = obj_namespace;
    else {
        CPy_TypeError("str", obj_namespace); 
        goto fail;
    }
    char arg_is_nested;
    if (obj_is_nested == NULL) {
        arg_is_nested = 2;
    } else if (unlikely(!PyBool_Check(obj_is_nested))) {
        CPy_TypeError("bool", obj_is_nested); goto fail;
    } else
        arg_is_nested = obj_is_nested == Py_True;
    char arg_contains_nested;
    if (obj_contains_nested == NULL) {
        arg_contains_nested = 2;
    } else if (unlikely(!PyBool_Check(obj_contains_nested))) {
        CPy_TypeError("bool", obj_contains_nested); goto fail;
    } else
        arg_contains_nested = obj_contains_nested == Py_True;
    char arg_is_decorated;
    if (obj_is_decorated == NULL) {
        arg_is_decorated = 2;
    } else if (unlikely(!PyBool_Check(obj_is_decorated))) {
        CPy_TypeError("bool", obj_is_decorated); goto fail;
    } else
        arg_is_decorated = obj_is_decorated == Py_True;
    char arg_in_non_ext;
    if (obj_in_non_ext == NULL) {
        arg_in_non_ext = 2;
    } else if (unlikely(!PyBool_Check(obj_in_non_ext))) {
        CPy_TypeError("bool", obj_in_non_ext); goto fail;
    } else
        arg_in_non_ext = obj_in_non_ext == Py_True;
    char retval = CPyDef_context___FuncInfo_____init__(arg_self, arg_fitem, arg_name, arg_class_name, arg_namespace, arg_is_nested, arg_contains_nested, arg_is_decorated, arg_in_non_ext);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "__init__", 15, CPyStatic_context___globals);
    return NULL;
}

PyObject *CPyDef_context___FuncInfo___namespaced_name(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    CPyPtr cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = CPyStatics[755]; /* '_' */
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "namespaced_name", 54, CPyStatic_context___globals);
        goto CPyL13;
    }
    cpy_r_r2 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->_name;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->_class_name;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->_ns;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = PyList_New(3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "namespaced_name", 54, CPyStatic_context___globals);
        goto CPyL14;
    }
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r5)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    *(PyObject * *)cpy_r_r7 = cpy_r_r2;
    cpy_r_r8 = cpy_r_r7 + 8;
    *(PyObject * *)cpy_r_r8 = cpy_r_r3;
    cpy_r_r9 = cpy_r_r7 + 16;
    *(PyObject * *)cpy_r_r9 = cpy_r_r4;
    cpy_r_r10 = 0;
CPyL3: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL15;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r10);
    if (PyUnicode_Check(cpy_r_r15))
        cpy_r_r16 = cpy_r_r15;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL10097;
    if (cpy_r_r15 == Py_None)
        cpy_r_r16 = cpy_r_r15;
    else {
        cpy_r_r16 = NULL;
    }
    if (cpy_r_r16 != NULL) goto __LL10097;
    CPy_TypeErrorTraceback("mypyc/irbuild/context.py", "namespaced_name", 54, CPyStatic_context___globals, "str or None", cpy_r_r15);
    goto CPyL16;
__LL10097: ;
    cpy_r_x = cpy_r_r16;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_x != cpy_r_r17;
    if (!cpy_r_r18) goto CPyL17;
    CPy_INCREF(cpy_r_x);
    if (likely(cpy_r_x != Py_None))
        cpy_r_r19 = cpy_r_x;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/context.py", "namespaced_name", 54, CPyStatic_context___globals, "str", cpy_r_x);
        goto CPyL18;
    }
    cpy_r_r20 = CPyStr_IsTrue(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (!cpy_r_r20) goto CPyL17;
    if (likely(cpy_r_x != Py_None))
        cpy_r_r21 = cpy_r_x;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/context.py", "namespaced_name", 54, CPyStatic_context___globals, "str", cpy_r_x);
        goto CPyL16;
    }
    cpy_r_r22 = PyList_Append(cpy_r_r1, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "namespaced_name", 54, CPyStatic_context___globals);
        goto CPyL16;
    }
CPyL10: ;
    cpy_r_r24 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r24;
    goto CPyL3;
CPyL11: ;
    cpy_r_r25 = PyUnicode_Join(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "namespaced_name", 54, CPyStatic_context___globals);
        goto CPyL13;
    }
    return cpy_r_r25;
CPyL13: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL13;
CPyL15: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL11;
CPyL16: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL13;
CPyL17: ;
    CPy_DECREF(cpy_r_x);
    goto CPyL10;
CPyL18: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_x);
    goto CPyL13;
}

PyObject *CPyPy_context___FuncInfo___namespaced_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":namespaced_name", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_context___FuncInfo))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_context___FuncInfo___namespaced_name(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "namespaced_name", 53, CPyStatic_context___globals);
    return NULL;
}

char CPyDef_context___FuncInfo___is_generator(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->_fitem;
    cpy_r_r1 = ((mypy___nodes___FuncItemObject *)cpy_r_r0)->_is_generator;
    if (!cpy_r_r1) goto CPyL2;
CPyL1: ;
    cpy_r_r2 = cpy_r_r1;
    goto CPyL3;
CPyL2: ;
    cpy_r_r3 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->_fitem;
    cpy_r_r4 = ((mypy___nodes___FuncItemObject *)cpy_r_r3)->_is_coroutine;
    cpy_r_r2 = cpy_r_r4;
CPyL3: ;
    return cpy_r_r2;
}

PyObject *CPyPy_context___FuncInfo___is_generator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_generator", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_context___FuncInfo))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_self); 
        goto fail;
    }
    char retval = CPyDef_context___FuncInfo___is_generator(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "is_generator", 57, CPyStatic_context___globals);
    return NULL;
}

char CPyDef_context___FuncInfo___is_coroutine(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->_fitem;
    cpy_r_r1 = ((mypy___nodes___FuncItemObject *)cpy_r_r0)->_is_coroutine;
    return cpy_r_r1;
}

PyObject *CPyPy_context___FuncInfo___is_coroutine(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_coroutine", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_context___FuncInfo))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_self); 
        goto fail;
    }
    char retval = CPyDef_context___FuncInfo___is_coroutine(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "is_coroutine", 61, CPyStatic_context___globals);
    return NULL;
}

PyObject *CPyDef_context___FuncInfo___callable_class(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__callable_class;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "callable_class", 66, CPyStatic_context___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__callable_class;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/context.py", "callable_class", 67, CPyStatic_context___globals, "mypyc.irbuild.context.ImplicitClass", cpy_r_r4);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_context___FuncInfo___callable_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":callable_class", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_context___FuncInfo))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_context___FuncInfo___callable_class(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "callable_class", 65, CPyStatic_context___globals);
    return NULL;
}

char CPyDef_context___FuncInfo_____mypyc_setter__callable_class(PyObject *cpy_r_self, PyObject *cpy_r_cls) {
    char cpy_r_r0;
    CPy_INCREF(cpy_r_cls);
    CPy_DECREF(((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__callable_class);
    ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__callable_class = cpy_r_cls;
    return 1;
}

PyObject *CPyPy_context___FuncInfo_____mypyc_setter__callable_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"cls", 0};
    static CPyArg_Parser parser = {"O:__mypyc_setter__callable_class", kwlist, 0};
    PyObject *obj_cls;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_cls)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_context___FuncInfo))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_self); 
        goto fail;
    }
    PyObject *arg_cls;
    if (likely((Py_TYPE(obj_cls) == CPyType_context___GeneratorClass) || (Py_TYPE(obj_cls) == CPyType_context___ImplicitClass)))
        arg_cls = obj_cls;
    else {
        CPy_TypeError("mypyc.irbuild.context.ImplicitClass", obj_cls); 
        goto fail;
    }
    char retval = CPyDef_context___FuncInfo_____mypyc_setter__callable_class(arg_self, arg_cls);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "callable_class", 70, CPyStatic_context___globals);
    return NULL;
}

PyObject *CPyDef_context___FuncInfo___env_class(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__env_class;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "env_class", 75, CPyStatic_context___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__env_class;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/context.py", "env_class", 76, CPyStatic_context___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r4);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_context___FuncInfo___env_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":env_class", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_context___FuncInfo))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_context___FuncInfo___env_class(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "env_class", 74, CPyStatic_context___globals);
    return NULL;
}

char CPyDef_context___FuncInfo_____mypyc_setter__env_class(PyObject *cpy_r_self, PyObject *cpy_r_ir) {
    char cpy_r_r0;
    CPy_INCREF(cpy_r_ir);
    CPy_DECREF(((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__env_class);
    ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__env_class = cpy_r_ir;
    return 1;
}

PyObject *CPyPy_context___FuncInfo_____mypyc_setter__env_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ir", 0};
    static CPyArg_Parser parser = {"O:__mypyc_setter__env_class", kwlist, 0};
    PyObject *obj_ir;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ir)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_context___FuncInfo))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_self); 
        goto fail;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
        goto fail;
    }
    char retval = CPyDef_context___FuncInfo_____mypyc_setter__env_class(arg_self, arg_ir);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "env_class", 79, CPyStatic_context___globals);
    return NULL;
}

PyObject *CPyDef_context___FuncInfo___generator_class(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__generator_class;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "generator_class", 84, CPyStatic_context___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__generator_class;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/context.py", "generator_class", 85, CPyStatic_context___globals, "mypyc.irbuild.context.GeneratorClass", cpy_r_r4);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_context___FuncInfo___generator_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":generator_class", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_context___FuncInfo))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_context___FuncInfo___generator_class(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "generator_class", 83, CPyStatic_context___globals);
    return NULL;
}

char CPyDef_context___FuncInfo_____mypyc_setter__generator_class(PyObject *cpy_r_self, PyObject *cpy_r_cls) {
    char cpy_r_r0;
    CPy_INCREF(cpy_r_cls);
    CPy_DECREF(((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__generator_class);
    ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__generator_class = cpy_r_cls;
    return 1;
}

PyObject *CPyPy_context___FuncInfo_____mypyc_setter__generator_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"cls", 0};
    static CPyArg_Parser parser = {"O:__mypyc_setter__generator_class", kwlist, 0};
    PyObject *obj_cls;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_cls)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_context___FuncInfo))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_self); 
        goto fail;
    }
    PyObject *arg_cls;
    if (likely(Py_TYPE(obj_cls) == CPyType_context___GeneratorClass))
        arg_cls = obj_cls;
    else {
        CPy_TypeError("mypyc.irbuild.context.GeneratorClass", obj_cls); 
        goto fail;
    }
    char retval = CPyDef_context___FuncInfo_____mypyc_setter__generator_class(arg_self, arg_cls);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "generator_class", 88, CPyStatic_context___globals);
    return NULL;
}

PyObject *CPyDef_context___FuncInfo___curr_env_reg(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__curr_env_reg;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "curr_env_reg", 93, CPyStatic_context___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_self)->__curr_env_reg;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/context.py", "curr_env_reg", 94, CPyStatic_context___globals, "mypyc.ir.ops.Value", cpy_r_r4);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_context___FuncInfo___curr_env_reg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":curr_env_reg", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_context___FuncInfo))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_context___FuncInfo___curr_env_reg(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "curr_env_reg", 92, CPyStatic_context___globals);
    return NULL;
}

char CPyDef_context___ImplicitClass_____init__(PyObject *cpy_r_self, PyObject *cpy_r_ir) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPy_INCREF(cpy_r_ir);
    ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_self)->_ir = cpy_r_ir;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_self)->__self_reg = cpy_r_r0;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_self)->__curr_env_reg = cpy_r_r1;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_self)->__prev_env_reg = cpy_r_r2;
    return 1;
}

PyObject *CPyPy_context___ImplicitClass_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ir", 0};
    PyObject *obj_ir;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_ir)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_context___GeneratorClass) || (Py_TYPE(obj_self) == CPyType_context___ImplicitClass)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.ImplicitClass", obj_self); 
        goto fail;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
        goto fail;
    }
    char retval = CPyDef_context___ImplicitClass_____init__(arg_self, arg_ir);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "__init__", 106, CPyStatic_context___globals);
    return NULL;
}

PyObject *CPyDef_context___ImplicitClass___self_reg(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_self)->__self_reg;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "self_reg", 120, CPyStatic_context___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_self)->__self_reg;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/context.py", "self_reg", 121, CPyStatic_context___globals, "mypyc.ir.ops.Value", cpy_r_r4);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_context___ImplicitClass___self_reg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":self_reg", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_context___GeneratorClass) || (Py_TYPE(obj_self) == CPyType_context___ImplicitClass)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.ImplicitClass", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_context___ImplicitClass___self_reg(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "self_reg", 119, CPyStatic_context___globals);
    return NULL;
}

char CPyDef_context___ImplicitClass_____mypyc_setter__self_reg(PyObject *cpy_r_self, PyObject *cpy_r_reg) {
    char cpy_r_r0;
    CPy_INCREF(cpy_r_reg);
    CPy_DECREF(((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_self)->__self_reg);
    ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_self)->__self_reg = cpy_r_reg;
    return 1;
}

PyObject *CPyPy_context___ImplicitClass_____mypyc_setter__self_reg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"reg", 0};
    static CPyArg_Parser parser = {"O:__mypyc_setter__self_reg", kwlist, 0};
    PyObject *obj_reg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_reg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_context___GeneratorClass) || (Py_TYPE(obj_self) == CPyType_context___ImplicitClass)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.ImplicitClass", obj_self); 
        goto fail;
    }
    PyObject *arg_reg;
    if (likely(PyObject_TypeCheck(obj_reg, CPyType_ops___Value)))
        arg_reg = obj_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_reg); 
        goto fail;
    }
    char retval = CPyDef_context___ImplicitClass_____mypyc_setter__self_reg(arg_self, arg_reg);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "self_reg", 124, CPyStatic_context___globals);
    return NULL;
}

PyObject *CPyDef_context___ImplicitClass___curr_env_reg(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_self)->__curr_env_reg;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "curr_env_reg", 129, CPyStatic_context___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_self)->__curr_env_reg;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/context.py", "curr_env_reg", 130, CPyStatic_context___globals, "mypyc.ir.ops.Value", cpy_r_r4);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_context___ImplicitClass___curr_env_reg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":curr_env_reg", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_context___GeneratorClass) || (Py_TYPE(obj_self) == CPyType_context___ImplicitClass)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.ImplicitClass", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_context___ImplicitClass___curr_env_reg(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "curr_env_reg", 128, CPyStatic_context___globals);
    return NULL;
}

char CPyDef_context___ImplicitClass_____mypyc_setter__curr_env_reg(PyObject *cpy_r_self, PyObject *cpy_r_reg) {
    char cpy_r_r0;
    CPy_INCREF(cpy_r_reg);
    CPy_DECREF(((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_self)->__curr_env_reg);
    ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_self)->__curr_env_reg = cpy_r_reg;
    return 1;
}

PyObject *CPyPy_context___ImplicitClass_____mypyc_setter__curr_env_reg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"reg", 0};
    static CPyArg_Parser parser = {"O:__mypyc_setter__curr_env_reg", kwlist, 0};
    PyObject *obj_reg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_reg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_context___GeneratorClass) || (Py_TYPE(obj_self) == CPyType_context___ImplicitClass)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.ImplicitClass", obj_self); 
        goto fail;
    }
    PyObject *arg_reg;
    if (likely(PyObject_TypeCheck(obj_reg, CPyType_ops___Value)))
        arg_reg = obj_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_reg); 
        goto fail;
    }
    char retval = CPyDef_context___ImplicitClass_____mypyc_setter__curr_env_reg(arg_self, arg_reg);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "curr_env_reg", 133, CPyStatic_context___globals);
    return NULL;
}

PyObject *CPyDef_context___ImplicitClass___prev_env_reg(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_self)->__prev_env_reg;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "prev_env_reg", 138, CPyStatic_context___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_self)->__prev_env_reg;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/context.py", "prev_env_reg", 139, CPyStatic_context___globals, "mypyc.ir.ops.Value", cpy_r_r4);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_context___ImplicitClass___prev_env_reg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":prev_env_reg", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_context___GeneratorClass) || (Py_TYPE(obj_self) == CPyType_context___ImplicitClass)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.ImplicitClass", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_context___ImplicitClass___prev_env_reg(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "prev_env_reg", 137, CPyStatic_context___globals);
    return NULL;
}

char CPyDef_context___ImplicitClass_____mypyc_setter__prev_env_reg(PyObject *cpy_r_self, PyObject *cpy_r_reg) {
    char cpy_r_r0;
    CPy_INCREF(cpy_r_reg);
    CPy_DECREF(((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_self)->__prev_env_reg);
    ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_self)->__prev_env_reg = cpy_r_reg;
    return 1;
}

PyObject *CPyPy_context___ImplicitClass_____mypyc_setter__prev_env_reg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"reg", 0};
    static CPyArg_Parser parser = {"O:__mypyc_setter__prev_env_reg", kwlist, 0};
    PyObject *obj_reg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_reg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely((Py_TYPE(obj_self) == CPyType_context___GeneratorClass) || (Py_TYPE(obj_self) == CPyType_context___ImplicitClass)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.ImplicitClass", obj_self); 
        goto fail;
    }
    PyObject *arg_reg;
    if (likely(PyObject_TypeCheck(obj_reg, CPyType_ops___Value)))
        arg_reg = obj_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_reg); 
        goto fail;
    }
    char retval = CPyDef_context___ImplicitClass_____mypyc_setter__prev_env_reg(arg_self, arg_reg);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "prev_env_reg", 142, CPyStatic_context___globals);
    return NULL;
}

char CPyDef_context___GeneratorClass_____init__(PyObject *cpy_r_self, PyObject *cpy_r_ir) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = CPyDef_context___ImplicitClass_____init__(cpy_r_self, cpy_r_ir);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "__init__", 150, CPyStatic_context___globals);
        goto CPyL4;
    }
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_self)->__next_label_reg = cpy_r_r1;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_self)->__next_label_target = cpy_r_r2;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_self)->_exc_regs = cpy_r_r3;
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_self)->_send_arg_reg = cpy_r_r4;
    cpy_r_r5 = CPY_INT_TAG;
    cpy_r_r6 = CPyDef_ops___BasicBlock(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "__init__", 165, CPyStatic_context___globals);
        goto CPyL4;
    }
    ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_self)->_switch_block = cpy_r_r6;
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "__init__", 166, CPyStatic_context___globals);
        goto CPyL4;
    }
    ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_self)->_continuation_blocks = cpy_r_r7;
    return 1;
CPyL4: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
}

PyObject *CPyPy_context___GeneratorClass_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ir", 0};
    PyObject *obj_ir;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_ir)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_context___GeneratorClass))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.GeneratorClass", obj_self); 
        goto fail;
    }
    PyObject *arg_ir;
    if (likely(Py_TYPE(obj_ir) == CPyType_class_ir___ClassIR))
        arg_ir = obj_ir;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_ir); 
        goto fail;
    }
    char retval = CPyDef_context___GeneratorClass_____init__(arg_self, arg_ir);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "__init__", 149, CPyStatic_context___globals);
    return NULL;
}

PyObject *CPyDef_context___GeneratorClass___next_label_reg(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_self)->__next_label_reg;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "next_label_reg", 170, CPyStatic_context___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_self)->__next_label_reg;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/context.py", "next_label_reg", 171, CPyStatic_context___globals, "mypyc.ir.ops.Value", cpy_r_r4);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_context___GeneratorClass___next_label_reg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":next_label_reg", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_context___GeneratorClass))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.GeneratorClass", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_context___GeneratorClass___next_label_reg(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "next_label_reg", 169, CPyStatic_context___globals);
    return NULL;
}

char CPyDef_context___GeneratorClass_____mypyc_setter__next_label_reg(PyObject *cpy_r_self, PyObject *cpy_r_reg) {
    char cpy_r_r0;
    CPy_INCREF(cpy_r_reg);
    CPy_DECREF(((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_self)->__next_label_reg);
    ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_self)->__next_label_reg = cpy_r_reg;
    return 1;
}

PyObject *CPyPy_context___GeneratorClass_____mypyc_setter__next_label_reg(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"reg", 0};
    static CPyArg_Parser parser = {"O:__mypyc_setter__next_label_reg", kwlist, 0};
    PyObject *obj_reg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_reg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_context___GeneratorClass))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.GeneratorClass", obj_self); 
        goto fail;
    }
    PyObject *arg_reg;
    if (likely(PyObject_TypeCheck(obj_reg, CPyType_ops___Value)))
        arg_reg = obj_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_reg); 
        goto fail;
    }
    char retval = CPyDef_context___GeneratorClass_____mypyc_setter__next_label_reg(arg_self, arg_reg);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "next_label_reg", 174, CPyStatic_context___globals);
    return NULL;
}

PyObject *CPyDef_context___GeneratorClass___next_label_target(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_self)->__next_label_target;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "next_label_target", 179, CPyStatic_context___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_self)->__next_label_target;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/context.py", "next_label_target", 180, CPyStatic_context___globals, "mypyc.irbuild.targets.AssignmentTarget", cpy_r_r4);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_context___GeneratorClass___next_label_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":next_label_target", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_context___GeneratorClass))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.GeneratorClass", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_context___GeneratorClass___next_label_target(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "next_label_target", 178, CPyStatic_context___globals);
    return NULL;
}

char CPyDef_context___GeneratorClass_____mypyc_setter__next_label_target(PyObject *cpy_r_self, PyObject *cpy_r_target) {
    char cpy_r_r0;
    CPy_INCREF(cpy_r_target);
    CPy_DECREF(((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_self)->__next_label_target);
    ((mypyc___irbuild___context___GeneratorClassObject *)cpy_r_self)->__next_label_target = cpy_r_target;
    return 1;
}

PyObject *CPyPy_context___GeneratorClass_____mypyc_setter__next_label_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"target", 0};
    static CPyArg_Parser parser = {"O:__mypyc_setter__next_label_target", kwlist, 0};
    PyObject *obj_target;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_target)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_context___GeneratorClass))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.irbuild.context.GeneratorClass", obj_self); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(PyObject_TypeCheck(obj_target, CPyType_targets___AssignmentTarget)))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypyc.irbuild.targets.AssignmentTarget", obj_target); 
        goto fail;
    }
    char retval = CPyDef_context___GeneratorClass_____mypyc_setter__next_label_target(arg_self, arg_target);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/context.py", "next_label_target", 183, CPyStatic_context___globals);
    return NULL;
}

char CPyDef_context_____top_level__(void) {
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
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
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
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
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
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", -1, CPyStatic_context___globals);
        goto CPyL26;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_context___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 3, CPyStatic_context___globals);
        goto CPyL26;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[10080]; /* ('FuncItem',) */
    cpy_r_r10 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r11 = CPyStatic_context___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 5, CPyStatic_context___globals);
        goto CPyL26;
    }
    CPyModule_mypy___nodes = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9904]; /* ('ClassIR',) */
    cpy_r_r14 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r15 = CPyStatic_context___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 6, CPyStatic_context___globals);
        goto CPyL26;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r16;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10081]; /* ('INVALID_FUNC_DEF',) */
    cpy_r_r18 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r19 = CPyStatic_context___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 7, CPyStatic_context___globals);
        goto CPyL26;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r20;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9944]; /* ('BasicBlock', 'Value') */
    cpy_r_r22 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r23 = CPyStatic_context___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 8, CPyStatic_context___globals);
        goto CPyL26;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10082]; /* ('AssignmentTarget',) */
    cpy_r_r26 = CPyStatics[8098]; /* 'mypyc.irbuild.targets' */
    cpy_r_r27 = CPyStatic_context___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 9, CPyStatic_context___globals);
        goto CPyL26;
    }
    CPyModule_mypyc___irbuild___targets = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___irbuild___targets);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyStatics[8082]; /* 'mypyc.irbuild.context' */
    cpy_r_r31 = (PyObject *)CPyType_context___FuncInfo_template;
    cpy_r_r32 = CPyType_FromTemplate(cpy_r_r31, cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 12, CPyStatic_context___globals);
        goto CPyL26;
    }
    cpy_r_r33 = CPyDef_context___FuncInfo_trait_vtable_setup();
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", -1, CPyStatic_context___globals);
        goto CPyL27;
    }
    cpy_r_r34 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r35 = CPyStatics[8190]; /* 'fitem' */
    cpy_r_r36 = CPyStatics[2329]; /* 'name' */
    cpy_r_r37 = CPyStatics[3473]; /* 'class_name' */
    cpy_r_r38 = CPyStatics[8191]; /* 'ns' */
    cpy_r_r39 = CPyStatics[8192]; /* '_callable_class' */
    cpy_r_r40 = CPyStatics[8193]; /* '_env_class' */
    cpy_r_r41 = CPyStatics[8194]; /* '_generator_class' */
    cpy_r_r42 = CPyStatics[8195]; /* '_curr_env_reg' */
    cpy_r_r43 = CPyStatics[8196]; /* 'is_nested' */
    cpy_r_r44 = CPyStatics[8197]; /* 'contains_nested' */
    cpy_r_r45 = CPyStatics[4105]; /* 'is_decorated' */
    cpy_r_r46 = CPyStatics[8198]; /* 'in_non_ext' */
    cpy_r_r47 = PyTuple_Pack(12, cpy_r_r35, cpy_r_r36, cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 12, CPyStatic_context___globals);
        goto CPyL27;
    }
    cpy_r_r48 = PyObject_SetAttr(cpy_r_r32, cpy_r_r34, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r49 = cpy_r_r48 >= 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 12, CPyStatic_context___globals);
        goto CPyL27;
    }
    CPyType_context___FuncInfo = (PyTypeObject *)cpy_r_r32;
    CPy_INCREF(CPyType_context___FuncInfo);
    cpy_r_r50 = CPyStatic_context___globals;
    cpy_r_r51 = CPyStatics[8080]; /* 'FuncInfo' */
    cpy_r_r52 = CPyDict_SetItem(cpy_r_r50, cpy_r_r51, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 12, CPyStatic_context___globals);
        goto CPyL26;
    }
    cpy_r_r54 = NULL;
    cpy_r_r55 = CPyStatics[8082]; /* 'mypyc.irbuild.context' */
    cpy_r_r56 = (PyObject *)CPyType_context___ImplicitClass_template;
    cpy_r_r57 = CPyType_FromTemplate(cpy_r_r56, cpy_r_r54, cpy_r_r55);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 97, CPyStatic_context___globals);
        goto CPyL26;
    }
    cpy_r_r58 = CPyDef_context___ImplicitClass_trait_vtable_setup();
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", -1, CPyStatic_context___globals);
        goto CPyL28;
    }
    cpy_r_r59 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r60 = CPyStatics[7422]; /* 'ir' */
    cpy_r_r61 = CPyStatics[8199]; /* '_self_reg' */
    cpy_r_r62 = CPyStatics[8195]; /* '_curr_env_reg' */
    cpy_r_r63 = CPyStatics[8200]; /* '_prev_env_reg' */
    cpy_r_r64 = PyTuple_Pack(4, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 97, CPyStatic_context___globals);
        goto CPyL28;
    }
    cpy_r_r65 = PyObject_SetAttr(cpy_r_r57, cpy_r_r59, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 97, CPyStatic_context___globals);
        goto CPyL28;
    }
    CPyType_context___ImplicitClass = (PyTypeObject *)cpy_r_r57;
    CPy_INCREF(CPyType_context___ImplicitClass);
    cpy_r_r67 = CPyStatic_context___globals;
    cpy_r_r68 = CPyStatics[8081]; /* 'ImplicitClass' */
    cpy_r_r69 = CPyDict_SetItem(cpy_r_r67, cpy_r_r68, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r70 = cpy_r_r69 >= 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 97, CPyStatic_context___globals);
        goto CPyL26;
    }
    cpy_r_r71 = (PyObject *)CPyType_context___ImplicitClass;
    cpy_r_r72 = PyTuple_Pack(1, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 146, CPyStatic_context___globals);
        goto CPyL26;
    }
    cpy_r_r73 = CPyStatics[8082]; /* 'mypyc.irbuild.context' */
    cpy_r_r74 = (PyObject *)CPyType_context___GeneratorClass_template;
    cpy_r_r75 = CPyType_FromTemplate(cpy_r_r74, cpy_r_r72, cpy_r_r73);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 146, CPyStatic_context___globals);
        goto CPyL26;
    }
    cpy_r_r76 = CPyDef_context___GeneratorClass_trait_vtable_setup();
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", -1, CPyStatic_context___globals);
        goto CPyL29;
    }
    cpy_r_r77 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r78 = CPyStatics[8201]; /* '_next_label_reg' */
    cpy_r_r79 = CPyStatics[8202]; /* '_next_label_target' */
    cpy_r_r80 = CPyStatics[8203]; /* 'exc_regs' */
    cpy_r_r81 = CPyStatics[8204]; /* 'send_arg_reg' */
    cpy_r_r82 = CPyStatics[8205]; /* 'switch_block' */
    cpy_r_r83 = CPyStatics[8206]; /* 'continuation_blocks' */
    cpy_r_r84 = CPyStatics[7422]; /* 'ir' */
    cpy_r_r85 = CPyStatics[8199]; /* '_self_reg' */
    cpy_r_r86 = CPyStatics[8195]; /* '_curr_env_reg' */
    cpy_r_r87 = CPyStatics[8200]; /* '_prev_env_reg' */
    cpy_r_r88 = PyTuple_Pack(10, cpy_r_r78, cpy_r_r79, cpy_r_r80, cpy_r_r81, cpy_r_r82, cpy_r_r83, cpy_r_r84, cpy_r_r85, cpy_r_r86, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 146, CPyStatic_context___globals);
        goto CPyL29;
    }
    cpy_r_r89 = PyObject_SetAttr(cpy_r_r75, cpy_r_r77, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 146, CPyStatic_context___globals);
        goto CPyL29;
    }
    CPyType_context___GeneratorClass = (PyTypeObject *)cpy_r_r75;
    CPy_INCREF(CPyType_context___GeneratorClass);
    cpy_r_r91 = CPyStatic_context___globals;
    cpy_r_r92 = CPyStatics[8207]; /* 'GeneratorClass' */
    cpy_r_r93 = CPyDict_SetItem(cpy_r_r91, cpy_r_r92, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/irbuild/context.py", "<module>", 146, CPyStatic_context___globals);
        goto CPyL26;
    }
    return 1;
CPyL26: ;
    cpy_r_r95 = 2;
    return cpy_r_r95;
CPyL27: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL26;
CPyL29: ;
    CPy_DecRef(cpy_r_r75);
    goto CPyL26;
}
