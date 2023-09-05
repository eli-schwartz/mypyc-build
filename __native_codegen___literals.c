#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
codegen___literals___Literals_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *codegen___literals___Literals_setup(PyTypeObject *type);
PyObject *CPyDef_codegen___literals___Literals(void);

static PyObject *
codegen___literals___Literals_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_codegen___literals___Literals) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = codegen___literals___Literals_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_codegen___literals___Literals_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
codegen___literals___Literals_traverse(mypyc___codegen___literals___LiteralsObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_str_literals);
    Py_VISIT(self->_bytes_literals);
    Py_VISIT(self->_int_literals);
    Py_VISIT(self->_float_literals);
    Py_VISIT(self->_complex_literals);
    Py_VISIT(self->_tuple_literals);
    Py_VISIT(self->_frozenset_literals);
    return 0;
}

static int
codegen___literals___Literals_clear(mypyc___codegen___literals___LiteralsObject *self)
{
    Py_CLEAR(self->_str_literals);
    Py_CLEAR(self->_bytes_literals);
    Py_CLEAR(self->_int_literals);
    Py_CLEAR(self->_float_literals);
    Py_CLEAR(self->_complex_literals);
    Py_CLEAR(self->_tuple_literals);
    Py_CLEAR(self->_frozenset_literals);
    return 0;
}

static void
codegen___literals___Literals_dealloc(mypyc___codegen___literals___LiteralsObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, codegen___literals___Literals_dealloc)
    codegen___literals___Literals_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem codegen___literals___Literals_vtable[12];
static bool
CPyDef_codegen___literals___Literals_trait_vtable_setup(void)
{
    CPyVTableItem codegen___literals___Literals_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_codegen___literals___Literals_____init__,
        (CPyVTableItem)CPyDef_codegen___literals___Literals___record_literal,
        (CPyVTableItem)CPyDef_codegen___literals___Literals___literal_index,
        (CPyVTableItem)CPyDef_codegen___literals___Literals___num_literals,
        (CPyVTableItem)CPyDef_codegen___literals___Literals___encoded_str_values,
        (CPyVTableItem)CPyDef_codegen___literals___Literals___encoded_int_values,
        (CPyVTableItem)CPyDef_codegen___literals___Literals___encoded_bytes_values,
        (CPyVTableItem)CPyDef_codegen___literals___Literals___encoded_float_values,
        (CPyVTableItem)CPyDef_codegen___literals___Literals___encoded_complex_values,
        (CPyVTableItem)CPyDef_codegen___literals___Literals___encoded_tuple_values,
        (CPyVTableItem)CPyDef_codegen___literals___Literals___encoded_frozenset_values,
        (CPyVTableItem)CPyDef_codegen___literals___Literals____encode_collection_values,
    };
    memcpy(codegen___literals___Literals_vtable, codegen___literals___Literals_vtable_scratch, sizeof(codegen___literals___Literals_vtable));
    return 1;
}

static PyObject *
codegen___literals___Literals_get_str_literals(mypyc___codegen___literals___LiteralsObject *self, void *closure);
static int
codegen___literals___Literals_set_str_literals(mypyc___codegen___literals___LiteralsObject *self, PyObject *value, void *closure);
static PyObject *
codegen___literals___Literals_get_bytes_literals(mypyc___codegen___literals___LiteralsObject *self, void *closure);
static int
codegen___literals___Literals_set_bytes_literals(mypyc___codegen___literals___LiteralsObject *self, PyObject *value, void *closure);
static PyObject *
codegen___literals___Literals_get_int_literals(mypyc___codegen___literals___LiteralsObject *self, void *closure);
static int
codegen___literals___Literals_set_int_literals(mypyc___codegen___literals___LiteralsObject *self, PyObject *value, void *closure);
static PyObject *
codegen___literals___Literals_get_float_literals(mypyc___codegen___literals___LiteralsObject *self, void *closure);
static int
codegen___literals___Literals_set_float_literals(mypyc___codegen___literals___LiteralsObject *self, PyObject *value, void *closure);
static PyObject *
codegen___literals___Literals_get_complex_literals(mypyc___codegen___literals___LiteralsObject *self, void *closure);
static int
codegen___literals___Literals_set_complex_literals(mypyc___codegen___literals___LiteralsObject *self, PyObject *value, void *closure);
static PyObject *
codegen___literals___Literals_get_tuple_literals(mypyc___codegen___literals___LiteralsObject *self, void *closure);
static int
codegen___literals___Literals_set_tuple_literals(mypyc___codegen___literals___LiteralsObject *self, PyObject *value, void *closure);
static PyObject *
codegen___literals___Literals_get_frozenset_literals(mypyc___codegen___literals___LiteralsObject *self, void *closure);
static int
codegen___literals___Literals_set_frozenset_literals(mypyc___codegen___literals___LiteralsObject *self, PyObject *value, void *closure);

static PyGetSetDef codegen___literals___Literals_getseters[] = {
    {"str_literals",
     (getter)codegen___literals___Literals_get_str_literals, (setter)codegen___literals___Literals_set_str_literals,
     NULL, NULL},
    {"bytes_literals",
     (getter)codegen___literals___Literals_get_bytes_literals, (setter)codegen___literals___Literals_set_bytes_literals,
     NULL, NULL},
    {"int_literals",
     (getter)codegen___literals___Literals_get_int_literals, (setter)codegen___literals___Literals_set_int_literals,
     NULL, NULL},
    {"float_literals",
     (getter)codegen___literals___Literals_get_float_literals, (setter)codegen___literals___Literals_set_float_literals,
     NULL, NULL},
    {"complex_literals",
     (getter)codegen___literals___Literals_get_complex_literals, (setter)codegen___literals___Literals_set_complex_literals,
     NULL, NULL},
    {"tuple_literals",
     (getter)codegen___literals___Literals_get_tuple_literals, (setter)codegen___literals___Literals_set_tuple_literals,
     NULL, NULL},
    {"frozenset_literals",
     (getter)codegen___literals___Literals_get_frozenset_literals, (setter)codegen___literals___Literals_set_frozenset_literals,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef codegen___literals___Literals_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_codegen___literals___Literals_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_literal",
     (PyCFunction)CPyPy_codegen___literals___Literals___record_literal,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"literal_index",
     (PyCFunction)CPyPy_codegen___literals___Literals___literal_index,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"num_literals",
     (PyCFunction)CPyPy_codegen___literals___Literals___num_literals,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"encoded_str_values",
     (PyCFunction)CPyPy_codegen___literals___Literals___encoded_str_values,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"encoded_int_values",
     (PyCFunction)CPyPy_codegen___literals___Literals___encoded_int_values,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"encoded_bytes_values",
     (PyCFunction)CPyPy_codegen___literals___Literals___encoded_bytes_values,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"encoded_float_values",
     (PyCFunction)CPyPy_codegen___literals___Literals___encoded_float_values,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"encoded_complex_values",
     (PyCFunction)CPyPy_codegen___literals___Literals___encoded_complex_values,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"encoded_tuple_values",
     (PyCFunction)CPyPy_codegen___literals___Literals___encoded_tuple_values,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"encoded_frozenset_values",
     (PyCFunction)CPyPy_codegen___literals___Literals___encoded_frozenset_values,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_encode_collection_values",
     (PyCFunction)CPyPy_codegen___literals___Literals____encode_collection_values,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_codegen___literals___Literals_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Literals",
    .tp_new = codegen___literals___Literals_new,
    .tp_dealloc = (destructor)codegen___literals___Literals_dealloc,
    .tp_traverse = (traverseproc)codegen___literals___Literals_traverse,
    .tp_clear = (inquiry)codegen___literals___Literals_clear,
    .tp_getset = codegen___literals___Literals_getseters,
    .tp_methods = codegen___literals___Literals_methods,
    .tp_init = codegen___literals___Literals_init,
    .tp_basicsize = sizeof(mypyc___codegen___literals___LiteralsObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_codegen___literals___Literals_template = &CPyType_codegen___literals___Literals_template_;

static PyObject *
codegen___literals___Literals_setup(PyTypeObject *type)
{
    mypyc___codegen___literals___LiteralsObject *self;
    self = (mypyc___codegen___literals___LiteralsObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = codegen___literals___Literals_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_codegen___literals___Literals(void)
{
    PyObject *self = codegen___literals___Literals_setup(CPyType_codegen___literals___Literals);
    if (self == NULL)
        return NULL;
    char res = CPyDef_codegen___literals___Literals_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
codegen___literals___Literals_get_str_literals(mypyc___codegen___literals___LiteralsObject *self, void *closure)
{
    if (unlikely(self->_str_literals == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'str_literals' of 'Literals' undefined");
        return NULL;
    }
    CPy_INCREF(self->_str_literals);
    PyObject *retval = self->_str_literals;
    return retval;
}

static int
codegen___literals___Literals_set_str_literals(mypyc___codegen___literals___LiteralsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Literals' object attribute 'str_literals' cannot be deleted");
        return -1;
    }
    if (self->_str_literals != NULL) {
        CPy_DECREF(self->_str_literals);
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
    self->_str_literals = tmp;
    return 0;
}

static PyObject *
codegen___literals___Literals_get_bytes_literals(mypyc___codegen___literals___LiteralsObject *self, void *closure)
{
    if (unlikely(self->_bytes_literals == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'bytes_literals' of 'Literals' undefined");
        return NULL;
    }
    CPy_INCREF(self->_bytes_literals);
    PyObject *retval = self->_bytes_literals;
    return retval;
}

static int
codegen___literals___Literals_set_bytes_literals(mypyc___codegen___literals___LiteralsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Literals' object attribute 'bytes_literals' cannot be deleted");
        return -1;
    }
    if (self->_bytes_literals != NULL) {
        CPy_DECREF(self->_bytes_literals);
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
    self->_bytes_literals = tmp;
    return 0;
}

static PyObject *
codegen___literals___Literals_get_int_literals(mypyc___codegen___literals___LiteralsObject *self, void *closure)
{
    if (unlikely(self->_int_literals == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'int_literals' of 'Literals' undefined");
        return NULL;
    }
    CPy_INCREF(self->_int_literals);
    PyObject *retval = self->_int_literals;
    return retval;
}

static int
codegen___literals___Literals_set_int_literals(mypyc___codegen___literals___LiteralsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Literals' object attribute 'int_literals' cannot be deleted");
        return -1;
    }
    if (self->_int_literals != NULL) {
        CPy_DECREF(self->_int_literals);
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
    self->_int_literals = tmp;
    return 0;
}

static PyObject *
codegen___literals___Literals_get_float_literals(mypyc___codegen___literals___LiteralsObject *self, void *closure)
{
    if (unlikely(self->_float_literals == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'float_literals' of 'Literals' undefined");
        return NULL;
    }
    CPy_INCREF(self->_float_literals);
    PyObject *retval = self->_float_literals;
    return retval;
}

static int
codegen___literals___Literals_set_float_literals(mypyc___codegen___literals___LiteralsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Literals' object attribute 'float_literals' cannot be deleted");
        return -1;
    }
    if (self->_float_literals != NULL) {
        CPy_DECREF(self->_float_literals);
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
    self->_float_literals = tmp;
    return 0;
}

static PyObject *
codegen___literals___Literals_get_complex_literals(mypyc___codegen___literals___LiteralsObject *self, void *closure)
{
    if (unlikely(self->_complex_literals == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'complex_literals' of 'Literals' undefined");
        return NULL;
    }
    CPy_INCREF(self->_complex_literals);
    PyObject *retval = self->_complex_literals;
    return retval;
}

static int
codegen___literals___Literals_set_complex_literals(mypyc___codegen___literals___LiteralsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Literals' object attribute 'complex_literals' cannot be deleted");
        return -1;
    }
    if (self->_complex_literals != NULL) {
        CPy_DECREF(self->_complex_literals);
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
    self->_complex_literals = tmp;
    return 0;
}

static PyObject *
codegen___literals___Literals_get_tuple_literals(mypyc___codegen___literals___LiteralsObject *self, void *closure)
{
    if (unlikely(self->_tuple_literals == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'tuple_literals' of 'Literals' undefined");
        return NULL;
    }
    CPy_INCREF(self->_tuple_literals);
    PyObject *retval = self->_tuple_literals;
    return retval;
}

static int
codegen___literals___Literals_set_tuple_literals(mypyc___codegen___literals___LiteralsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Literals' object attribute 'tuple_literals' cannot be deleted");
        return -1;
    }
    if (self->_tuple_literals != NULL) {
        CPy_DECREF(self->_tuple_literals);
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
    self->_tuple_literals = tmp;
    return 0;
}

static PyObject *
codegen___literals___Literals_get_frozenset_literals(mypyc___codegen___literals___LiteralsObject *self, void *closure)
{
    if (unlikely(self->_frozenset_literals == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'frozenset_literals' of 'Literals' undefined");
        return NULL;
    }
    CPy_INCREF(self->_frozenset_literals);
    PyObject *retval = self->_frozenset_literals;
    return retval;
}

static int
codegen___literals___Literals_set_frozenset_literals(mypyc___codegen___literals___LiteralsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Literals' object attribute 'frozenset_literals' cannot be deleted");
        return -1;
    }
    if (self->_frozenset_literals != NULL) {
        CPy_DECREF(self->_frozenset_literals);
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
    self->_frozenset_literals = tmp;
    return 0;
}
static PyMethodDef codegen___literalsmodule_methods[] = {
    {"_is_literal_value", (PyCFunction)CPyPy_codegen___literals____is_literal_value, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_encode_str_values", (PyCFunction)CPyPy_codegen___literals____encode_str_values, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_encode_bytes_values", (PyCFunction)CPyPy_codegen___literals____encode_bytes_values, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"format_int", (PyCFunction)CPyPy_codegen___literals___format_int, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"format_str_literal", (PyCFunction)CPyPy_codegen___literals___format_str_literal, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_encode_int_values", (PyCFunction)CPyPy_codegen___literals____encode_int_values, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"float_to_c", (PyCFunction)CPyPy_codegen___literals___float_to_c, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_encode_float_values", (PyCFunction)CPyPy_codegen___literals____encode_float_values, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"_encode_complex_values", (PyCFunction)CPyPy_codegen___literals____encode_complex_values, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef codegen___literalsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.codegen.literals",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    codegen___literalsmodule_methods
};

PyObject *CPyInit_mypyc___codegen___literals(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___codegen___literals_internal) {
        Py_INCREF(CPyModule_mypyc___codegen___literals_internal);
        return CPyModule_mypyc___codegen___literals_internal;
    }
    CPyModule_mypyc___codegen___literals_internal = PyModule_Create(&codegen___literalsmodule);
    if (unlikely(CPyModule_mypyc___codegen___literals_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___codegen___literals_internal, "__name__");
    CPyStatic_codegen___literals___globals = PyModule_GetDict(CPyModule_mypyc___codegen___literals_internal);
    if (unlikely(CPyStatic_codegen___literals___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_codegen___literals_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___codegen___literals_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___codegen___literals_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_codegen___literals___Literals);
    return NULL;
}

char CPyDef_codegen___literals____is_literal_value(PyObject *cpy_r_obj) {
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
    tuple_T8OOOOOOOO cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = (PyObject *)&PyUnicode_Type;
    cpy_r_r1 = (PyObject *)&PyBytes_Type;
    cpy_r_r2 = (PyObject *)&PyLong_Type;
    cpy_r_r3 = (PyObject *)&PyFloat_Type;
    cpy_r_r4 = CPyModule_builtins;
    cpy_r_r5 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_is_literal_value", 14, CPyStatic_codegen___literals___globals);
        goto CPyL3;
    }
    cpy_r_r7 = (PyObject *)&PyTuple_Type;
    cpy_r_r8 = (PyObject *)&PyFrozenSet_Type;
    cpy_r_r9 = Py_None;
    cpy_r_r10 = PyObject_Type(cpy_r_r9);
    cpy_r_r11.f0 = cpy_r_r0;
    cpy_r_r11.f1 = cpy_r_r1;
    cpy_r_r11.f2 = cpy_r_r2;
    cpy_r_r11.f3 = cpy_r_r3;
    cpy_r_r11.f4 = cpy_r_r6;
    cpy_r_r11.f5 = cpy_r_r7;
    cpy_r_r11.f6 = cpy_r_r8;
    cpy_r_r11.f7 = cpy_r_r10;
    CPy_INCREF(cpy_r_r11.f0);
    CPy_INCREF(cpy_r_r11.f1);
    CPy_INCREF(cpy_r_r11.f2);
    CPy_INCREF(cpy_r_r11.f3);
    CPy_INCREF(cpy_r_r11.f4);
    CPy_INCREF(cpy_r_r11.f5);
    CPy_INCREF(cpy_r_r11.f6);
    CPy_INCREF(cpy_r_r11.f7);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = PyTuple_New(8);
    if (unlikely(cpy_r_r12 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9705 = cpy_r_r11.f0;
    PyTuple_SET_ITEM(cpy_r_r12, 0, __tmp9705);
    PyObject *__tmp9706 = cpy_r_r11.f1;
    PyTuple_SET_ITEM(cpy_r_r12, 1, __tmp9706);
    PyObject *__tmp9707 = cpy_r_r11.f2;
    PyTuple_SET_ITEM(cpy_r_r12, 2, __tmp9707);
    PyObject *__tmp9708 = cpy_r_r11.f3;
    PyTuple_SET_ITEM(cpy_r_r12, 3, __tmp9708);
    PyObject *__tmp9709 = cpy_r_r11.f4;
    PyTuple_SET_ITEM(cpy_r_r12, 4, __tmp9709);
    PyObject *__tmp9710 = cpy_r_r11.f5;
    PyTuple_SET_ITEM(cpy_r_r12, 5, __tmp9710);
    PyObject *__tmp9711 = cpy_r_r11.f6;
    PyTuple_SET_ITEM(cpy_r_r12, 6, __tmp9711);
    PyObject *__tmp9712 = cpy_r_r11.f7;
    PyTuple_SET_ITEM(cpy_r_r12, 7, __tmp9712);
    cpy_r_r13 = PyObject_IsInstance(cpy_r_obj, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_is_literal_value", 14, CPyStatic_codegen___literals___globals);
        goto CPyL3;
    }
    cpy_r_r15 = cpy_r_r13;
    return cpy_r_r15;
CPyL3: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
}

PyObject *CPyPy_codegen___literals____is_literal_value(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"obj", 0};
    static CPyArg_Parser parser = {"O:_is_literal_value", kwlist, 0};
    PyObject *obj_obj;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_obj)) {
        return NULL;
    }
    PyObject *arg_obj = obj_obj;
    char retval = CPyDef_codegen___literals____is_literal_value(arg_obj);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "_is_literal_value", 13, CPyStatic_codegen___literals___globals);
    return NULL;
}

char CPyDef_codegen___literals___Literals_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "__init__", 26, CPyStatic_codegen___literals___globals);
        goto CPyL8;
    }
    ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_str_literals = cpy_r_r0;
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "__init__", 27, CPyStatic_codegen___literals___globals);
        goto CPyL8;
    }
    ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_bytes_literals = cpy_r_r1;
    cpy_r_r2 = PyDict_New();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "__init__", 28, CPyStatic_codegen___literals___globals);
        goto CPyL8;
    }
    ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_int_literals = cpy_r_r2;
    cpy_r_r3 = PyDict_New();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "__init__", 29, CPyStatic_codegen___literals___globals);
        goto CPyL8;
    }
    ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_float_literals = cpy_r_r3;
    cpy_r_r4 = PyDict_New();
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "__init__", 30, CPyStatic_codegen___literals___globals);
        goto CPyL8;
    }
    ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_complex_literals = cpy_r_r4;
    cpy_r_r5 = PyDict_New();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "__init__", 31, CPyStatic_codegen___literals___globals);
        goto CPyL8;
    }
    ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_tuple_literals = cpy_r_r5;
    cpy_r_r6 = PyDict_New();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "__init__", 32, CPyStatic_codegen___literals___globals);
        goto CPyL8;
    }
    ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_frozenset_literals = cpy_r_r6;
    return 1;
CPyL8: ;
    cpy_r_r7 = 2;
    return cpy_r_r7;
}

PyObject *CPyPy_codegen___literals___Literals_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_codegen___literals___Literals))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.literals.Literals", obj_self); 
        goto fail;
    }
    char retval = CPyDef_codegen___literals___Literals_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "__init__", 24, CPyStatic_codegen___literals___globals);
    return NULL;
}

char CPyDef_codegen___literals___Literals___record_literal(PyObject *cpy_r_self, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_str_literals;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_bytes_literals;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    int64_t cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_int_literals;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_float_literals;
    double cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    int64_t cpy_r_r69;
    CPyTagged cpy_r_r70;
    double cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    int32_t cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_complex_literals;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    int64_t cpy_r_r89;
    CPyTagged cpy_r_r90;
    PyObject *cpy_r_r91;
    int32_t cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_tuple_literals;
    PyObject *cpy_r_r99;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    CPyTagged cpy_r_r105;
    CPyPtr cpy_r_r106;
    int64_t cpy_r_r107;
    CPyTagged cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_item;
    char cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    CPyTagged cpy_r_r114;
    int64_t cpy_r_r115;
    CPyTagged cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    int32_t cpy_r_r119;
    char cpy_r_r120;
    PyObject *cpy_r_r121;
    int32_t cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_frozenset_literals;
    int32_t cpy_r_r126;
    char cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    char cpy_r_r133;
    char cpy_r_r134;
    char cpy_r_r135;
    int64_t cpy_r_r136;
    CPyTagged cpy_r_r137;
    PyObject *cpy_r_r138;
    int32_t cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    int32_t cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject **cpy_r_r151;
    PyObject *cpy_r_r152;
    char cpy_r_r153;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_value == cpy_r_r0;
    if (cpy_r_r1) goto CPyL3;
    cpy_r_r2 = 1 ? Py_True : Py_False;
    cpy_r_r3 = cpy_r_value == cpy_r_r2;
    if (cpy_r_r3) goto CPyL3;
    cpy_r_r4 = 0 ? Py_True : Py_False;
    cpy_r_r5 = cpy_r_value == cpy_r_r4;
    if (!cpy_r_r5) goto CPyL4;
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r6 = (PyObject *)&PyUnicode_Type;
    cpy_r_r7 = PyObject_IsInstance(cpy_r_value, cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 39, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    }
    cpy_r_r9 = cpy_r_r7;
    if (!cpy_r_r9) goto CPyL11;
    cpy_r_r10 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_str_literals;
    CPy_INCREF(cpy_r_r10);
    cpy_r_str_literals = cpy_r_r10;
    CPy_INCREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r11 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/literals.py", "record_literal", 41, CPyStatic_codegen___literals___globals, "str", cpy_r_value);
        goto CPyL79;
    }
    cpy_r_r12 = PyDict_Contains(cpy_r_str_literals, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 41, CPyStatic_codegen___literals___globals);
        goto CPyL79;
    }
    cpy_r_r14 = cpy_r_r12;
    cpy_r_r15 = cpy_r_r14 ^ 1;
    if (!cpy_r_r15) goto CPyL80;
    cpy_r_r16 = PyDict_Size(cpy_r_str_literals);
    cpy_r_r17 = cpy_r_r16 << 1;
    CPy_INCREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r18 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/literals.py", "record_literal", 42, CPyStatic_codegen___literals___globals, "str", cpy_r_value);
        goto CPyL79;
    }
    cpy_r_r19 = CPyTagged_StealAsObject(cpy_r_r17);
    cpy_r_r20 = CPyDict_SetItem(cpy_r_str_literals, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_str_literals);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 42, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    } else
        goto CPyL77;
CPyL11: ;
    cpy_r_r22 = (PyObject *)&PyBytes_Type;
    cpy_r_r23 = PyObject_IsInstance(cpy_r_value, cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 43, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    }
    cpy_r_r25 = cpy_r_r23;
    if (!cpy_r_r25) goto CPyL18;
    cpy_r_r26 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_bytes_literals;
    CPy_INCREF(cpy_r_r26);
    cpy_r_bytes_literals = cpy_r_r26;
    CPy_INCREF(cpy_r_value);
    if (likely(PyBytes_Check(cpy_r_value) || PyByteArray_Check(cpy_r_value)))
        cpy_r_r27 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/literals.py", "record_literal", 45, CPyStatic_codegen___literals___globals, "bytes", cpy_r_value);
        goto CPyL81;
    }
    cpy_r_r28 = PyDict_Contains(cpy_r_bytes_literals, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 45, CPyStatic_codegen___literals___globals);
        goto CPyL81;
    }
    cpy_r_r30 = cpy_r_r28;
    cpy_r_r31 = cpy_r_r30 ^ 1;
    if (!cpy_r_r31) goto CPyL82;
    cpy_r_r32 = PyDict_Size(cpy_r_bytes_literals);
    cpy_r_r33 = cpy_r_r32 << 1;
    CPy_INCREF(cpy_r_value);
    if (likely(PyBytes_Check(cpy_r_value) || PyByteArray_Check(cpy_r_value)))
        cpy_r_r34 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/literals.py", "record_literal", 46, CPyStatic_codegen___literals___globals, "bytes", cpy_r_value);
        goto CPyL81;
    }
    cpy_r_r35 = CPyTagged_StealAsObject(cpy_r_r33);
    cpy_r_r36 = CPyDict_SetItem(cpy_r_bytes_literals, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_bytes_literals);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 46, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    } else
        goto CPyL77;
CPyL18: ;
    cpy_r_r38 = (PyObject *)&PyLong_Type;
    cpy_r_r39 = PyObject_IsInstance(cpy_r_value, cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 47, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    }
    cpy_r_r41 = cpy_r_r39;
    if (!cpy_r_r41) goto CPyL25;
    cpy_r_r42 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_int_literals;
    CPy_INCREF(cpy_r_r42);
    cpy_r_int_literals = cpy_r_r42;
    if (likely(PyLong_Check(cpy_r_value)))
        cpy_r_r43 = CPyTagged_FromObject(cpy_r_value);
    else {
        CPy_TypeError("int", cpy_r_value); cpy_r_r43 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r43 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 49, CPyStatic_codegen___literals___globals);
        goto CPyL83;
    }
    cpy_r_r44 = CPyTagged_StealAsObject(cpy_r_r43);
    cpy_r_r45 = PyDict_Contains(cpy_r_int_literals, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 49, CPyStatic_codegen___literals___globals);
        goto CPyL83;
    }
    cpy_r_r47 = cpy_r_r45;
    cpy_r_r48 = cpy_r_r47 ^ 1;
    if (!cpy_r_r48) goto CPyL84;
    cpy_r_r49 = PyDict_Size(cpy_r_int_literals);
    cpy_r_r50 = cpy_r_r49 << 1;
    if (likely(PyLong_Check(cpy_r_value)))
        cpy_r_r51 = CPyTagged_FromObject(cpy_r_value);
    else {
        CPy_TypeError("int", cpy_r_value); cpy_r_r51 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r51 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 50, CPyStatic_codegen___literals___globals);
        goto CPyL83;
    }
    cpy_r_r52 = CPyTagged_StealAsObject(cpy_r_r51);
    cpy_r_r53 = CPyTagged_StealAsObject(cpy_r_r50);
    cpy_r_r54 = CPyDict_SetItem(cpy_r_int_literals, cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_int_literals);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 50, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    } else
        goto CPyL77;
CPyL25: ;
    cpy_r_r56 = (PyObject *)&PyFloat_Type;
    cpy_r_r57 = PyObject_IsInstance(cpy_r_value, cpy_r_r56);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 51, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    }
    cpy_r_r59 = cpy_r_r57;
    if (!cpy_r_r59) goto CPyL34;
    cpy_r_r60 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_float_literals;
    CPy_INCREF(cpy_r_r60);
    cpy_r_float_literals = cpy_r_r60;
    cpy_r_r61 = PyFloat_AsDouble(cpy_r_value);
    if (cpy_r_r61 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_value); cpy_r_r61 = -113.0;
    }
    cpy_r_r62 = cpy_r_r61 == -113.0;
    if (unlikely(cpy_r_r62)) goto CPyL29;
CPyL28: ;
    cpy_r_r63 = PyFloat_FromDouble(cpy_r_r61);
    cpy_r_r64 = PyDict_Contains(cpy_r_float_literals, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 53, CPyStatic_codegen___literals___globals);
        goto CPyL85;
    } else
        goto CPyL30;
CPyL29: ;
    cpy_r_r66 = PyErr_Occurred();
    if (unlikely(cpy_r_r66 != NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 53, CPyStatic_codegen___literals___globals);
        goto CPyL85;
    } else
        goto CPyL28;
CPyL30: ;
    cpy_r_r67 = cpy_r_r64;
    cpy_r_r68 = cpy_r_r67 ^ 1;
    if (!cpy_r_r68) goto CPyL86;
    cpy_r_r69 = PyDict_Size(cpy_r_float_literals);
    cpy_r_r70 = cpy_r_r69 << 1;
    cpy_r_r71 = PyFloat_AsDouble(cpy_r_value);
    if (cpy_r_r71 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_value); cpy_r_r71 = -113.0;
    }
    cpy_r_r72 = cpy_r_r71 == -113.0;
    if (unlikely(cpy_r_r72)) goto CPyL33;
CPyL32: ;
    cpy_r_r73 = PyFloat_FromDouble(cpy_r_r71);
    cpy_r_r74 = CPyTagged_StealAsObject(cpy_r_r70);
    cpy_r_r75 = CPyDict_SetItem(cpy_r_float_literals, cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_float_literals);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r74);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 54, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    } else
        goto CPyL77;
CPyL33: ;
    cpy_r_r77 = PyErr_Occurred();
    if (unlikely(cpy_r_r77 != NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 54, CPyStatic_codegen___literals___globals);
        goto CPyL85;
    } else
        goto CPyL32;
CPyL34: ;
    cpy_r_r78 = CPyModule_builtins;
    cpy_r_r79 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r80 = CPyObject_GetAttr(cpy_r_r78, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 55, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    }
    cpy_r_r81 = PyObject_IsInstance(cpy_r_value, cpy_r_r80);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r82 = cpy_r_r81 >= 0;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 55, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    }
    cpy_r_r83 = cpy_r_r81;
    if (!cpy_r_r83) goto CPyL40;
    cpy_r_r84 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_complex_literals;
    CPy_INCREF(cpy_r_r84);
    cpy_r_complex_literals = cpy_r_r84;
    cpy_r_r85 = PyDict_Contains(cpy_r_complex_literals, cpy_r_value);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 57, CPyStatic_codegen___literals___globals);
        goto CPyL87;
    }
    cpy_r_r87 = cpy_r_r85;
    cpy_r_r88 = cpy_r_r87 ^ 1;
    if (!cpy_r_r88) goto CPyL88;
    cpy_r_r89 = PyDict_Size(cpy_r_complex_literals);
    cpy_r_r90 = cpy_r_r89 << 1;
    cpy_r_r91 = CPyTagged_StealAsObject(cpy_r_r90);
    cpy_r_r92 = CPyDict_SetItem(cpy_r_complex_literals, cpy_r_value, cpy_r_r91);
    CPy_DECREF(cpy_r_complex_literals);
    CPy_DECREF(cpy_r_r91);
    cpy_r_r93 = cpy_r_r92 >= 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 58, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    } else
        goto CPyL77;
CPyL40: ;
    cpy_r_r94 = (PyObject *)&PyTuple_Type;
    cpy_r_r95 = PyObject_IsInstance(cpy_r_value, cpy_r_r94);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 59, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    }
    cpy_r_r97 = cpy_r_r95;
    if (!cpy_r_r97) goto CPyL57;
    cpy_r_r98 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_tuple_literals;
    CPy_INCREF(cpy_r_r98);
    cpy_r_tuple_literals = cpy_r_r98;
    CPy_INCREF(cpy_r_value);
    if (likely(PyTuple_Check(cpy_r_value)))
        cpy_r_r99 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/literals.py", "record_literal", 61, CPyStatic_codegen___literals___globals, "tuple", cpy_r_value);
        goto CPyL89;
    }
    cpy_r_r100 = PyDict_Contains(cpy_r_tuple_literals, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 61, CPyStatic_codegen___literals___globals);
        goto CPyL89;
    }
    cpy_r_r102 = cpy_r_r100;
    cpy_r_r103 = cpy_r_r102 ^ 1;
    if (!cpy_r_r103) goto CPyL90;
    CPy_INCREF(cpy_r_value);
    if (likely(PyTuple_Check(cpy_r_value)))
        cpy_r_r104 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/literals.py", "record_literal", 62, CPyStatic_codegen___literals___globals, "tuple", cpy_r_value);
        goto CPyL89;
    }
    cpy_r_r105 = 0;
CPyL47: ;
    cpy_r_r106 = (CPyPtr)&((PyVarObject *)cpy_r_r104)->ob_size;
    cpy_r_r107 = *(int64_t *)cpy_r_r106;
    cpy_r_r108 = cpy_r_r107 << 1;
    cpy_r_r109 = (Py_ssize_t)cpy_r_r105 < (Py_ssize_t)cpy_r_r108;
    if (!cpy_r_r109) goto CPyL91;
    cpy_r_r110 = CPySequenceTuple_GetItem(cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 62, CPyStatic_codegen___literals___globals);
        goto CPyL92;
    }
    cpy_r_item = cpy_r_r110;
    cpy_r_r111 = CPyDef_codegen___literals____is_literal_value(cpy_r_item);
    if (unlikely(cpy_r_r111 == 2)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 63, CPyStatic_codegen___literals___globals);
        goto CPyL93;
    }
    if (cpy_r_r111) {
        goto CPyL53;
    } else
        goto CPyL94;
CPyL51: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r112 = 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 63, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    }
    CPy_Unreachable();
CPyL53: ;
    cpy_r_r113 = CPyDef_codegen___literals___Literals___record_literal(cpy_r_self, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r113 == 2)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 64, CPyStatic_codegen___literals___globals);
        goto CPyL92;
    }
    cpy_r_r114 = cpy_r_r105 + 2;
    cpy_r_r105 = cpy_r_r114;
    goto CPyL47;
CPyL55: ;
    cpy_r_r115 = PyDict_Size(cpy_r_tuple_literals);
    cpy_r_r116 = cpy_r_r115 << 1;
    CPy_INCREF(cpy_r_value);
    if (likely(PyTuple_Check(cpy_r_value)))
        cpy_r_r117 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/literals.py", "record_literal", 65, CPyStatic_codegen___literals___globals, "tuple", cpy_r_value);
        goto CPyL89;
    }
    cpy_r_r118 = CPyTagged_StealAsObject(cpy_r_r116);
    cpy_r_r119 = CPyDict_SetItem(cpy_r_tuple_literals, cpy_r_r117, cpy_r_r118);
    CPy_DECREF(cpy_r_tuple_literals);
    CPy_DECREF(cpy_r_r117);
    CPy_DECREF(cpy_r_r118);
    cpy_r_r120 = cpy_r_r119 >= 0;
    if (unlikely(!cpy_r_r120)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 65, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    } else
        goto CPyL77;
CPyL57: ;
    cpy_r_r121 = (PyObject *)&PyFrozenSet_Type;
    cpy_r_r122 = PyObject_IsInstance(cpy_r_value, cpy_r_r121);
    cpy_r_r123 = cpy_r_r122 >= 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 66, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    }
    cpy_r_r124 = cpy_r_r122;
    if (!cpy_r_r124) goto CPyL70;
    cpy_r_r125 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_frozenset_literals;
    CPy_INCREF(cpy_r_r125);
    cpy_r_frozenset_literals = cpy_r_r125;
    cpy_r_r126 = PyDict_Contains(cpy_r_frozenset_literals, cpy_r_value);
    cpy_r_r127 = cpy_r_r126 >= 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 68, CPyStatic_codegen___literals___globals);
        goto CPyL95;
    }
    cpy_r_r128 = cpy_r_r126;
    cpy_r_r129 = cpy_r_r128 ^ 1;
    if (!cpy_r_r129) goto CPyL96;
    cpy_r_r130 = PyObject_GetIter(cpy_r_value);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 69, CPyStatic_codegen___literals___globals);
        goto CPyL95;
    }
CPyL62: ;
    cpy_r_r131 = PyIter_Next(cpy_r_r130);
    if (cpy_r_r131 == NULL) goto CPyL97;
    cpy_r_item = cpy_r_r131;
    cpy_r_r132 = CPyDef_codegen___literals____is_literal_value(cpy_r_item);
    if (unlikely(cpy_r_r132 == 2)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 70, CPyStatic_codegen___literals___globals);
        goto CPyL98;
    }
    if (cpy_r_r132) {
        goto CPyL67;
    } else
        goto CPyL99;
CPyL65: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r133 = 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 70, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    }
    CPy_Unreachable();
CPyL67: ;
    cpy_r_r134 = CPyDef_codegen___literals___Literals___record_literal(cpy_r_self, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r134 == 2)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 71, CPyStatic_codegen___literals___globals);
        goto CPyL100;
    } else
        goto CPyL62;
CPyL68: ;
    cpy_r_r135 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 69, CPyStatic_codegen___literals___globals);
        goto CPyL95;
    }
    cpy_r_r136 = PyDict_Size(cpy_r_frozenset_literals);
    cpy_r_r137 = cpy_r_r136 << 1;
    cpy_r_r138 = CPyTagged_StealAsObject(cpy_r_r137);
    cpy_r_r139 = CPyDict_SetItem(cpy_r_frozenset_literals, cpy_r_value, cpy_r_r138);
    CPy_DECREF(cpy_r_frozenset_literals);
    CPy_DECREF(cpy_r_r138);
    cpy_r_r140 = cpy_r_r139 >= 0;
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 72, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    } else
        goto CPyL77;
CPyL70: ;
    cpy_r_r141 = 0 ? Py_True : Py_False;
    cpy_r_r142 = PyObject_IsTrue(cpy_r_r141);
    cpy_r_r143 = cpy_r_r142 >= 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", -1, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    }
    cpy_r_r144 = cpy_r_r142;
    if (cpy_r_r144) goto CPyL77;
    cpy_r_r145 = CPyStatics[7691]; /* 'invalid literal: %r' */
    cpy_r_r146 = PyNumber_Remainder(cpy_r_r145, cpy_r_value);
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 74, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    }
    cpy_r_r147 = CPyModule_builtins;
    cpy_r_r148 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r149 = CPyObject_GetAttr(cpy_r_r147, cpy_r_r148);
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 74, CPyStatic_codegen___literals___globals);
        goto CPyL101;
    }
    PyObject *cpy_r_r150[1] = {cpy_r_r146};
    cpy_r_r151 = (PyObject **)&cpy_r_r150;
    cpy_r_r152 = _PyObject_Vectorcall(cpy_r_r149, cpy_r_r151, 1, 0);
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 74, CPyStatic_codegen___literals___globals);
        goto CPyL101;
    }
    CPy_DECREF(cpy_r_r146);
    CPy_Raise(cpy_r_r152);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 74, CPyStatic_codegen___literals___globals);
        goto CPyL78;
    }
    CPy_Unreachable();
CPyL77: ;
    return 1;
CPyL78: ;
    cpy_r_r153 = 2;
    return cpy_r_r153;
CPyL79: ;
    CPy_DecRef(cpy_r_str_literals);
    goto CPyL78;
CPyL80: ;
    CPy_DECREF(cpy_r_str_literals);
    goto CPyL77;
CPyL81: ;
    CPy_DecRef(cpy_r_bytes_literals);
    goto CPyL78;
CPyL82: ;
    CPy_DECREF(cpy_r_bytes_literals);
    goto CPyL77;
CPyL83: ;
    CPy_DecRef(cpy_r_int_literals);
    goto CPyL78;
CPyL84: ;
    CPy_DECREF(cpy_r_int_literals);
    goto CPyL77;
CPyL85: ;
    CPy_DecRef(cpy_r_float_literals);
    goto CPyL78;
CPyL86: ;
    CPy_DECREF(cpy_r_float_literals);
    goto CPyL77;
CPyL87: ;
    CPy_DecRef(cpy_r_complex_literals);
    goto CPyL78;
CPyL88: ;
    CPy_DECREF(cpy_r_complex_literals);
    goto CPyL77;
CPyL89: ;
    CPy_DecRef(cpy_r_tuple_literals);
    goto CPyL78;
CPyL90: ;
    CPy_DECREF(cpy_r_tuple_literals);
    goto CPyL77;
CPyL91: ;
    CPy_DECREF(cpy_r_r104);
    goto CPyL55;
CPyL92: ;
    CPy_DecRef(cpy_r_tuple_literals);
    CPy_DecRef(cpy_r_r104);
    goto CPyL78;
CPyL93: ;
    CPy_DecRef(cpy_r_tuple_literals);
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_item);
    goto CPyL78;
CPyL94: ;
    CPy_DECREF(cpy_r_tuple_literals);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_item);
    goto CPyL51;
CPyL95: ;
    CPy_DecRef(cpy_r_frozenset_literals);
    goto CPyL78;
CPyL96: ;
    CPy_DECREF(cpy_r_frozenset_literals);
    goto CPyL77;
CPyL97: ;
    CPy_DECREF(cpy_r_r130);
    goto CPyL68;
CPyL98: ;
    CPy_DecRef(cpy_r_item);
    CPy_DecRef(cpy_r_frozenset_literals);
    CPy_DecRef(cpy_r_r130);
    goto CPyL78;
CPyL99: ;
    CPy_DECREF(cpy_r_item);
    CPy_DECREF(cpy_r_frozenset_literals);
    CPy_DECREF(cpy_r_r130);
    goto CPyL65;
CPyL100: ;
    CPy_DecRef(cpy_r_frozenset_literals);
    CPy_DecRef(cpy_r_r130);
    goto CPyL78;
CPyL101: ;
    CPy_DecRef(cpy_r_r146);
    goto CPyL78;
}

PyObject *CPyPy_codegen___literals___Literals___record_literal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:record_literal", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_codegen___literals___Literals))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.literals.Literals", obj_self); 
        goto fail;
    }
    PyObject *arg_value;
    if (PyUnicode_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL9713;
    if (PyBytes_Check(obj_value) || PyByteArray_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL9713;
    if (PyLong_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL9713;
    if (PyBool_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL9713;
    if (CPyFloat_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL9713;
    arg_value = obj_value;
    if (arg_value != NULL) goto __LL9713;
    if (PyTuple_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL9713;
    if (obj_value == Py_None)
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL9713;
    CPy_TypeError("union[str, bytes, int, bool, float, object, tuple, None]", obj_value); 
    goto fail;
__LL9713: ;
    char retval = CPyDef_codegen___literals___Literals___record_literal(arg_self, arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "record_literal", 34, CPyStatic_codegen___literals___globals);
    return NULL;
}

CPyTagged CPyDef_codegen___literals___Literals___literal_index(PyObject *cpy_r_self, PyObject *cpy_r_value) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    CPyTagged cpy_r_n;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyTagged cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    int64_t cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    double cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    int64_t cpy_r_r59;
    CPyTagged cpy_r_r60;
    CPyTagged cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyTagged cpy_r_r70;
    CPyTagged cpy_r_r71;
    PyObject *cpy_r_r72;
    int64_t cpy_r_r73;
    CPyTagged cpy_r_r74;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    int32_t cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyTagged cpy_r_r83;
    CPyTagged cpy_r_r84;
    PyObject *cpy_r_r85;
    int64_t cpy_r_r86;
    CPyTagged cpy_r_r87;
    CPyTagged cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    CPyTagged cpy_r_r95;
    CPyTagged cpy_r_r96;
    PyObject *cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject **cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyTagged cpy_r_r109;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_value == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    return 0;
CPyL2: ;
    cpy_r_r2 = 0 ? Py_True : Py_False;
    cpy_r_r3 = cpy_r_value == cpy_r_r2;
    if (!cpy_r_r3) goto CPyL4;
    return 2;
CPyL4: ;
    cpy_r_r4 = 1 ? Py_True : Py_False;
    cpy_r_r5 = cpy_r_value == cpy_r_r4;
    if (!cpy_r_r5) goto CPyL6;
    return 4;
CPyL6: ;
    cpy_r_n = 6;
    cpy_r_r6 = (PyObject *)&PyUnicode_Type;
    cpy_r_r7 = PyObject_IsInstance(cpy_r_value, cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 87, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    cpy_r_r9 = cpy_r_r7;
    if (!cpy_r_r9) goto CPyL12;
    cpy_r_r10 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_str_literals;
    CPy_INCREF(cpy_r_r10);
    CPy_INCREF(cpy_r_value);
    if (likely(PyUnicode_Check(cpy_r_value)))
        cpy_r_r11 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/literals.py", "literal_index", 88, CPyStatic_codegen___literals___globals, "str", cpy_r_value);
        goto CPyL58;
    }
    cpy_r_r12 = CPyDict_GetItem(cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 88, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    if (likely(PyLong_Check(cpy_r_r12)))
        cpy_r_r13 = CPyTagged_FromObject(cpy_r_r12);
    else {
        CPy_TypeError("int", cpy_r_r12); cpy_r_r13 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 88, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    cpy_r_r14 = CPyTagged_Add(cpy_r_n, cpy_r_r13);
    CPyTagged_DECREF(cpy_r_n);
    CPyTagged_DECREF(cpy_r_r13);
    return cpy_r_r14;
CPyL12: ;
    cpy_r_r15 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_str_literals;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = PyDict_Size(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = CPyTagged_Add(cpy_r_n, cpy_r_r17);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_n = cpy_r_r18;
    cpy_r_r19 = (PyObject *)&PyBytes_Type;
    cpy_r_r20 = PyObject_IsInstance(cpy_r_value, cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 90, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    cpy_r_r22 = cpy_r_r20;
    if (!cpy_r_r22) goto CPyL18;
    cpy_r_r23 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_bytes_literals;
    CPy_INCREF(cpy_r_r23);
    CPy_INCREF(cpy_r_value);
    if (likely(PyBytes_Check(cpy_r_value) || PyByteArray_Check(cpy_r_value)))
        cpy_r_r24 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/literals.py", "literal_index", 91, CPyStatic_codegen___literals___globals, "bytes", cpy_r_value);
        goto CPyL59;
    }
    cpy_r_r25 = CPyDict_GetItem(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 91, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    if (likely(PyLong_Check(cpy_r_r25)))
        cpy_r_r26 = CPyTagged_FromObject(cpy_r_r25);
    else {
        CPy_TypeError("int", cpy_r_r25); cpy_r_r26 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 91, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    cpy_r_r27 = CPyTagged_Add(cpy_r_n, cpy_r_r26);
    CPyTagged_DECREF(cpy_r_n);
    CPyTagged_DECREF(cpy_r_r26);
    return cpy_r_r27;
CPyL18: ;
    cpy_r_r28 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_bytes_literals;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = PyDict_Size(cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 << 1;
    cpy_r_r31 = CPyTagged_Add(cpy_r_n, cpy_r_r30);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_n = cpy_r_r31;
    cpy_r_r32 = (PyObject *)&PyLong_Type;
    cpy_r_r33 = PyObject_IsInstance(cpy_r_value, cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 93, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    cpy_r_r35 = cpy_r_r33;
    if (!cpy_r_r35) goto CPyL24;
    cpy_r_r36 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_int_literals;
    CPy_INCREF(cpy_r_r36);
    if (likely(PyLong_Check(cpy_r_value)))
        cpy_r_r37 = CPyTagged_FromObject(cpy_r_value);
    else {
        CPy_TypeError("int", cpy_r_value); cpy_r_r37 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r37 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 94, CPyStatic_codegen___literals___globals);
        goto CPyL60;
    }
    cpy_r_r38 = CPyTagged_StealAsObject(cpy_r_r37);
    cpy_r_r39 = CPyDict_GetItem(cpy_r_r36, cpy_r_r38);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 94, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    if (likely(PyLong_Check(cpy_r_r39)))
        cpy_r_r40 = CPyTagged_FromObject(cpy_r_r39);
    else {
        CPy_TypeError("int", cpy_r_r39); cpy_r_r40 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 94, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    cpy_r_r41 = CPyTagged_Add(cpy_r_n, cpy_r_r40);
    CPyTagged_DECREF(cpy_r_n);
    CPyTagged_DECREF(cpy_r_r40);
    return cpy_r_r41;
CPyL24: ;
    cpy_r_r42 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_int_literals;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = PyDict_Size(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 << 1;
    cpy_r_r45 = CPyTagged_Add(cpy_r_n, cpy_r_r44);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_n = cpy_r_r45;
    cpy_r_r46 = (PyObject *)&PyFloat_Type;
    cpy_r_r47 = PyObject_IsInstance(cpy_r_value, cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 96, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    cpy_r_r49 = cpy_r_r47;
    if (!cpy_r_r49) goto CPyL31;
    cpy_r_r50 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_float_literals;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = PyFloat_AsDouble(cpy_r_value);
    if (cpy_r_r51 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_value); cpy_r_r51 = -113.0;
    }
    cpy_r_r52 = cpy_r_r51 == -113.0;
    if (unlikely(cpy_r_r52)) goto CPyL28;
CPyL27: ;
    cpy_r_r53 = PyFloat_FromDouble(cpy_r_r51);
    cpy_r_r54 = CPyDict_GetItem(cpy_r_r50, cpy_r_r53);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 97, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    } else
        goto CPyL29;
CPyL28: ;
    cpy_r_r55 = PyErr_Occurred();
    if (unlikely(cpy_r_r55 != NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 97, CPyStatic_codegen___literals___globals);
        goto CPyL61;
    } else
        goto CPyL27;
CPyL29: ;
    if (likely(PyLong_Check(cpy_r_r54)))
        cpy_r_r56 = CPyTagged_FromObject(cpy_r_r54);
    else {
        CPy_TypeError("int", cpy_r_r54); cpy_r_r56 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r56 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 97, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    cpy_r_r57 = CPyTagged_Add(cpy_r_n, cpy_r_r56);
    CPyTagged_DECREF(cpy_r_n);
    CPyTagged_DECREF(cpy_r_r56);
    return cpy_r_r57;
CPyL31: ;
    cpy_r_r58 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_float_literals;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = PyDict_Size(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 << 1;
    cpy_r_r61 = CPyTagged_Add(cpy_r_n, cpy_r_r60);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_n = cpy_r_r61;
    cpy_r_r62 = CPyModule_builtins;
    cpy_r_r63 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r64 = CPyObject_GetAttr(cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 99, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    cpy_r_r65 = PyObject_IsInstance(cpy_r_value, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 99, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    cpy_r_r67 = cpy_r_r65;
    if (!cpy_r_r67) goto CPyL37;
    cpy_r_r68 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_complex_literals;
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69 = CPyDict_GetItem(cpy_r_r68, cpy_r_value);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 100, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    if (likely(PyLong_Check(cpy_r_r69)))
        cpy_r_r70 = CPyTagged_FromObject(cpy_r_r69);
    else {
        CPy_TypeError("int", cpy_r_r69); cpy_r_r70 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 100, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    cpy_r_r71 = CPyTagged_Add(cpy_r_n, cpy_r_r70);
    CPyTagged_DECREF(cpy_r_n);
    CPyTagged_DECREF(cpy_r_r70);
    return cpy_r_r71;
CPyL37: ;
    cpy_r_r72 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_complex_literals;
    CPy_INCREF(cpy_r_r72);
    cpy_r_r73 = PyDict_Size(cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r74 = cpy_r_r73 << 1;
    cpy_r_r75 = CPyTagged_Add(cpy_r_n, cpy_r_r74);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_n = cpy_r_r75;
    cpy_r_r76 = (PyObject *)&PyTuple_Type;
    cpy_r_r77 = PyObject_IsInstance(cpy_r_value, cpy_r_r76);
    cpy_r_r78 = cpy_r_r77 >= 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 102, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    cpy_r_r79 = cpy_r_r77;
    if (!cpy_r_r79) goto CPyL43;
    cpy_r_r80 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_tuple_literals;
    CPy_INCREF(cpy_r_r80);
    CPy_INCREF(cpy_r_value);
    if (likely(PyTuple_Check(cpy_r_value)))
        cpy_r_r81 = cpy_r_value;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/literals.py", "literal_index", 103, CPyStatic_codegen___literals___globals, "tuple", cpy_r_value);
        goto CPyL62;
    }
    cpy_r_r82 = CPyDict_GetItem(cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 103, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    if (likely(PyLong_Check(cpy_r_r82)))
        cpy_r_r83 = CPyTagged_FromObject(cpy_r_r82);
    else {
        CPy_TypeError("int", cpy_r_r82); cpy_r_r83 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 103, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    cpy_r_r84 = CPyTagged_Add(cpy_r_n, cpy_r_r83);
    CPyTagged_DECREF(cpy_r_n);
    CPyTagged_DECREF(cpy_r_r83);
    return cpy_r_r84;
CPyL43: ;
    cpy_r_r85 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_tuple_literals;
    CPy_INCREF(cpy_r_r85);
    cpy_r_r86 = PyDict_Size(cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r87 = cpy_r_r86 << 1;
    cpy_r_r88 = CPyTagged_Add(cpy_r_n, cpy_r_r87);
    CPyTagged_DECREF(cpy_r_n);
    cpy_r_n = cpy_r_r88;
    cpy_r_r89 = (PyObject *)&PyFrozenSet_Type;
    cpy_r_r90 = PyObject_IsInstance(cpy_r_value, cpy_r_r89);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 105, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    cpy_r_r92 = cpy_r_r90;
    if (!cpy_r_r92) goto CPyL63;
    cpy_r_r93 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_frozenset_literals;
    CPy_INCREF(cpy_r_r93);
    cpy_r_r94 = CPyDict_GetItem(cpy_r_r93, cpy_r_value);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 106, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    if (likely(PyLong_Check(cpy_r_r94)))
        cpy_r_r95 = CPyTagged_FromObject(cpy_r_r94);
    else {
        CPy_TypeError("int", cpy_r_r94); cpy_r_r95 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 106, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    cpy_r_r96 = CPyTagged_Add(cpy_r_n, cpy_r_r95);
    CPyTagged_DECREF(cpy_r_n);
    CPyTagged_DECREF(cpy_r_r95);
    return cpy_r_r96;
CPyL48: ;
    cpy_r_r97 = 0 ? Py_True : Py_False;
    cpy_r_r98 = PyObject_IsTrue(cpy_r_r97);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", -1, CPyStatic_codegen___literals___globals);
        goto CPyL56;
    }
    cpy_r_r100 = cpy_r_r98;
    if (cpy_r_r100) goto CPyL55;
    cpy_r_r101 = CPyStatics[7691]; /* 'invalid literal: %r' */
    cpy_r_r102 = PyNumber_Remainder(cpy_r_r101, cpy_r_value);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 107, CPyStatic_codegen___literals___globals);
        goto CPyL56;
    }
    cpy_r_r103 = CPyModule_builtins;
    cpy_r_r104 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r105 = CPyObject_GetAttr(cpy_r_r103, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 107, CPyStatic_codegen___literals___globals);
        goto CPyL64;
    }
    PyObject *cpy_r_r106[1] = {cpy_r_r102};
    cpy_r_r107 = (PyObject **)&cpy_r_r106;
    cpy_r_r108 = _PyObject_Vectorcall(cpy_r_r105, cpy_r_r107, 1, 0);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 107, CPyStatic_codegen___literals___globals);
        goto CPyL64;
    }
    CPy_DECREF(cpy_r_r102);
    CPy_Raise(cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 107, CPyStatic_codegen___literals___globals);
        goto CPyL56;
    }
    CPy_Unreachable();
CPyL55: ;
    CPy_Unreachable();
CPyL56: ;
    cpy_r_r109 = CPY_INT_TAG;
    return cpy_r_r109;
CPyL57: ;
    CPyTagged_DecRef(cpy_r_n);
    goto CPyL56;
CPyL58: ;
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r10);
    goto CPyL56;
CPyL59: ;
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r23);
    goto CPyL56;
CPyL60: ;
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r36);
    goto CPyL56;
CPyL61: ;
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r50);
    goto CPyL56;
CPyL62: ;
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_r80);
    goto CPyL56;
CPyL63: ;
    CPyTagged_DECREF(cpy_r_n);
    goto CPyL48;
CPyL64: ;
    CPy_DecRef(cpy_r_r102);
    goto CPyL56;
}

PyObject *CPyPy_codegen___literals___Literals___literal_index(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", 0};
    static CPyArg_Parser parser = {"O:literal_index", kwlist, 0};
    PyObject *obj_value;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_codegen___literals___Literals))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.literals.Literals", obj_self); 
        goto fail;
    }
    PyObject *arg_value;
    if (PyUnicode_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL9714;
    if (PyBytes_Check(obj_value) || PyByteArray_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL9714;
    if (PyLong_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL9714;
    if (PyBool_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL9714;
    if (CPyFloat_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL9714;
    arg_value = obj_value;
    if (arg_value != NULL) goto __LL9714;
    if (PyTuple_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL9714;
    if (obj_value == Py_None)
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL9714;
    CPy_TypeError("union[str, bytes, int, bool, float, object, tuple, None]", obj_value); 
    goto fail;
__LL9714: ;
    CPyTagged retval = CPyDef_codegen___literals___Literals___literal_index(arg_self, arg_value);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "literal_index", 76, CPyStatic_codegen___literals___globals);
    return NULL;
}

CPyTagged CPyDef_codegen___literals___Literals___num_literals(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyTagged cpy_r_r27;
    cpy_r_r0 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_str_literals;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyDict_Size(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = CPyTagged_Add(6, cpy_r_r2);
    cpy_r_r4 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_bytes_literals;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = PyDict_Size(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = CPyTagged_Add(cpy_r_r3, cpy_r_r6);
    CPyTagged_DECREF(cpy_r_r3);
    cpy_r_r8 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_int_literals;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = PyDict_Size(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = CPyTagged_Add(cpy_r_r7, cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r7);
    cpy_r_r12 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_float_literals;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = PyDict_Size(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = CPyTagged_Add(cpy_r_r11, cpy_r_r14);
    CPyTagged_DECREF(cpy_r_r11);
    cpy_r_r16 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_complex_literals;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = PyDict_Size(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = CPyTagged_Add(cpy_r_r15, cpy_r_r18);
    CPyTagged_DECREF(cpy_r_r15);
    cpy_r_r20 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_tuple_literals;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = PyDict_Size(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = CPyTagged_Add(cpy_r_r19, cpy_r_r22);
    CPyTagged_DECREF(cpy_r_r19);
    cpy_r_r24 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_frozenset_literals;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = PyDict_Size(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = CPyTagged_Add(cpy_r_r23, cpy_r_r26);
    CPyTagged_DECREF(cpy_r_r23);
    return cpy_r_r27;
}

PyObject *CPyPy_codegen___literals___Literals___num_literals(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":num_literals", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_codegen___literals___Literals))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.literals.Literals", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_codegen___literals___Literals___num_literals(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "num_literals", 109, CPyStatic_codegen___literals___globals);
    return NULL;
}

PyObject *CPyDef_codegen___literals___Literals___encoded_str_values(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_str_literals;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_codegen___literals____encode_str_values(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "encoded_str_values", 126, CPyStatic_codegen___literals___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_codegen___literals___Literals___encoded_str_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":encoded_str_values", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_codegen___literals___Literals))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.literals.Literals", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_codegen___literals___Literals___encoded_str_values(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "encoded_str_values", 125, CPyStatic_codegen___literals___globals);
    return NULL;
}

PyObject *CPyDef_codegen___literals___Literals___encoded_int_values(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_int_literals;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_codegen___literals____encode_int_values(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "encoded_int_values", 129, CPyStatic_codegen___literals___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_codegen___literals___Literals___encoded_int_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":encoded_int_values", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_codegen___literals___Literals))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.literals.Literals", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_codegen___literals___Literals___encoded_int_values(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "encoded_int_values", 128, CPyStatic_codegen___literals___globals);
    return NULL;
}

PyObject *CPyDef_codegen___literals___Literals___encoded_bytes_values(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_bytes_literals;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_codegen___literals____encode_bytes_values(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "encoded_bytes_values", 132, CPyStatic_codegen___literals___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_codegen___literals___Literals___encoded_bytes_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":encoded_bytes_values", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_codegen___literals___Literals))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.literals.Literals", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_codegen___literals___Literals___encoded_bytes_values(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "encoded_bytes_values", 131, CPyStatic_codegen___literals___globals);
    return NULL;
}

PyObject *CPyDef_codegen___literals___Literals___encoded_float_values(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_float_literals;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_codegen___literals____encode_float_values(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "encoded_float_values", 135, CPyStatic_codegen___literals___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_codegen___literals___Literals___encoded_float_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":encoded_float_values", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_codegen___literals___Literals))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.literals.Literals", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_codegen___literals___Literals___encoded_float_values(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "encoded_float_values", 134, CPyStatic_codegen___literals___globals);
    return NULL;
}

PyObject *CPyDef_codegen___literals___Literals___encoded_complex_values(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_complex_literals;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_codegen___literals____encode_complex_values(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "encoded_complex_values", 138, CPyStatic_codegen___literals___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_codegen___literals___Literals___encoded_complex_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":encoded_complex_values", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_codegen___literals___Literals))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.literals.Literals", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_codegen___literals___Literals___encoded_complex_values(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "encoded_complex_values", 137, CPyStatic_codegen___literals___globals);
    return NULL;
}

PyObject *CPyDef_codegen___literals___Literals___encoded_tuple_values(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_tuple_literals;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_codegen___literals___Literals____encode_collection_values(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "encoded_tuple_values", 141, CPyStatic_codegen___literals___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_codegen___literals___Literals___encoded_tuple_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":encoded_tuple_values", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_codegen___literals___Literals))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.literals.Literals", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_codegen___literals___Literals___encoded_tuple_values(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "encoded_tuple_values", 140, CPyStatic_codegen___literals___globals);
    return NULL;
}

PyObject *CPyDef_codegen___literals___Literals___encoded_frozenset_values(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___codegen___literals___LiteralsObject *)cpy_r_self)->_frozenset_literals;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_codegen___literals___Literals____encode_collection_values(cpy_r_self, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "encoded_frozenset_values", 144, CPyStatic_codegen___literals___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_codegen___literals___Literals___encoded_frozenset_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":encoded_frozenset_values", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_codegen___literals___Literals))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.literals.Literals", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_codegen___literals___Literals___encoded_frozenset_values(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "encoded_frozenset_values", 143, CPyStatic_codegen___literals___globals);
    return NULL;
}

PyObject *CPyDef_codegen___literals___Literals____encode_collection_values(PyObject *cpy_r_self, PyObject *cpy_r_values) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T4CIOO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_value;
    CPyTagged cpy_r_index;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_value_by_index;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_result;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_count;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r23;
    char cpy_r_r24;
    int64_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_value_2;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_item;
    char cpy_r_r39;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
    CPyTagged cpy_r_index_2;
    PyObject *cpy_r_r42;
    int32_t cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 161, CPyStatic_codegen___literals___globals);
        goto CPyL31;
    }
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_values);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetItemsIter(cpy_r_values);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 161, CPyStatic_codegen___literals___globals);
        goto CPyL32;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextItem(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL33;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = cpy_r_r5.f3;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    if (likely(PyLong_Check(cpy_r_r9)))
        cpy_r_r10 = CPyTagged_FromObject(cpy_r_r9);
    else {
        CPy_TypeError("int", cpy_r_r9); cpy_r_r10 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 161, CPyStatic_codegen___literals___globals);
        goto CPyL34;
    }
    cpy_r_value = cpy_r_r8;
    cpy_r_index = cpy_r_r10;
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_index);
    cpy_r_r12 = CPyDict_SetItem(cpy_r_r0, cpy_r_r11, cpy_r_value);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_value);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 161, CPyStatic_codegen___literals___globals);
        goto CPyL35;
    }
    cpy_r_r14 = CPyDict_CheckSize(cpy_r_values, cpy_r_r3);
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 161, CPyStatic_codegen___literals___globals);
        goto CPyL35;
    } else
        goto CPyL2;
CPyL6: ;
    cpy_r_r15 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 161, CPyStatic_codegen___literals___globals);
        goto CPyL32;
    }
    cpy_r_value_by_index = cpy_r_r0;
    cpy_r_r16 = PyList_New(0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 162, CPyStatic_codegen___literals___globals);
        goto CPyL36;
    }
    cpy_r_result = cpy_r_r16;
    cpy_r_r17 = PyDict_Size(cpy_r_values);
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_count = cpy_r_r18;
    cpy_r_r19 = CPyTagged_Str(cpy_r_count);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 164, CPyStatic_codegen___literals___globals);
        goto CPyL37;
    }
    cpy_r_r20 = PyList_Append(cpy_r_result, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 164, CPyStatic_codegen___literals___globals);
        goto CPyL37;
    }
    cpy_r_r22 = 0;
    CPyTagged_INCREF(cpy_r_r22);
    cpy_r_i = cpy_r_r22;
CPyL11: ;
    cpy_r_r23 = cpy_r_r22 & 1;
    cpy_r_r24 = cpy_r_r23 == 0;
    cpy_r_r25 = cpy_r_count & 1;
    cpy_r_r26 = cpy_r_r25 == 0;
    cpy_r_r27 = cpy_r_r24 & cpy_r_r26;
    if (!cpy_r_r27) goto CPyL13;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_count;
    cpy_r_r29 = cpy_r_r28;
    goto CPyL14;
CPyL13: ;
    cpy_r_r30 = CPyTagged_IsLt_(cpy_r_r22, cpy_r_count);
    cpy_r_r29 = cpy_r_r30;
CPyL14: ;
    if (!cpy_r_r29) goto CPyL38;
    cpy_r_r31 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r32 = CPyDict_GetItem(cpy_r_value_by_index, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 166, CPyStatic_codegen___literals___globals);
        goto CPyL39;
    }
    cpy_r_value_2 = cpy_r_r32;
    cpy_r_r33 = CPyObject_Size(cpy_r_value_2);
    if (unlikely(cpy_r_r33 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 167, CPyStatic_codegen___literals___globals);
        goto CPyL40;
    }
    cpy_r_r34 = CPyTagged_Str(cpy_r_r33);
    CPyTagged_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 167, CPyStatic_codegen___literals___globals);
        goto CPyL40;
    }
    cpy_r_r35 = PyList_Append(cpy_r_result, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 167, CPyStatic_codegen___literals___globals);
        goto CPyL40;
    }
    cpy_r_r37 = PyObject_GetIter(cpy_r_value_2);
    CPy_DECREF(cpy_r_value_2);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 168, CPyStatic_codegen___literals___globals);
        goto CPyL39;
    }
CPyL20: ;
    cpy_r_r38 = PyIter_Next(cpy_r_r37);
    if (cpy_r_r38 == NULL) goto CPyL41;
    cpy_r_item = cpy_r_r38;
    cpy_r_r39 = CPyDef_codegen___literals____is_literal_value(cpy_r_item);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 169, CPyStatic_codegen___literals___globals);
        goto CPyL42;
    }
    if (cpy_r_r39) {
        goto CPyL25;
    } else
        goto CPyL43;
CPyL23: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 169, CPyStatic_codegen___literals___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r41 = CPyDef_codegen___literals___Literals___literal_index(cpy_r_self, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r41 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 170, CPyStatic_codegen___literals___globals);
        goto CPyL44;
    }
    cpy_r_index_2 = cpy_r_r41;
    cpy_r_r42 = CPyTagged_Str(cpy_r_index_2);
    CPyTagged_DECREF(cpy_r_index_2);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 171, CPyStatic_codegen___literals___globals);
        goto CPyL44;
    }
    cpy_r_r43 = PyList_Append(cpy_r_result, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 171, CPyStatic_codegen___literals___globals);
        goto CPyL44;
    } else
        goto CPyL20;
CPyL28: ;
    cpy_r_r45 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 168, CPyStatic_codegen___literals___globals);
        goto CPyL39;
    }
    cpy_r_r46 = CPyTagged_Add(cpy_r_r22, 2);
    CPyTagged_DECREF(cpy_r_r22);
    CPyTagged_INCREF(cpy_r_r46);
    cpy_r_r22 = cpy_r_r46;
    cpy_r_i = cpy_r_r46;
    goto CPyL11;
CPyL30: ;
    return cpy_r_result;
CPyL31: ;
    cpy_r_r47 = NULL;
    return cpy_r_r47;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL31;
CPyL33: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    goto CPyL6;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r8);
    goto CPyL31;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL31;
CPyL36: ;
    CPy_DecRef(cpy_r_value_by_index);
    goto CPyL31;
CPyL37: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_count);
    goto CPyL31;
CPyL38: ;
    CPy_DECREF(cpy_r_value_by_index);
    CPyTagged_DECREF(cpy_r_count);
    CPyTagged_DECREF(cpy_r_r22);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL30;
CPyL39: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_count);
    CPyTagged_DecRef(cpy_r_r22);
    goto CPyL31;
CPyL40: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_count);
    CPyTagged_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_value_2);
    goto CPyL31;
CPyL41: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL28;
CPyL42: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_count);
    CPyTagged_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_item);
    goto CPyL31;
CPyL43: ;
    CPy_DECREF(cpy_r_value_by_index);
    CPy_DECREF(cpy_r_result);
    CPyTagged_DECREF(cpy_r_count);
    CPyTagged_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_item);
    goto CPyL23;
CPyL44: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_count);
    CPyTagged_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r37);
    goto CPyL31;
}

PyObject *CPyPy_codegen___literals___Literals____encode_collection_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"values", 0};
    static CPyArg_Parser parser = {"O:_encode_collection_values", kwlist, 0};
    PyObject *obj_values;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_values)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_codegen___literals___Literals))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.literals.Literals", obj_self); 
        goto fail;
    }
    PyObject *arg_values;
    if (likely(PyDict_Check(obj_values)))
        arg_values = obj_values;
    else {
        CPy_TypeError("dict", obj_values); 
        goto fail;
    }
    PyObject *retval = CPyDef_codegen___literals___Literals____encode_collection_values(arg_self, arg_values);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_collection_values", 146, CPyStatic_codegen___literals___globals);
    return NULL;
}

PyObject *CPyDef_codegen___literals____encode_str_values(PyObject *cpy_r_values) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T4CIOO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_value;
    CPyTagged cpy_r_index;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_value_by_index;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_line;
    CPyTagged cpy_r_line_len;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_i;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_value_2;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_c_literal;
    CPyPtr cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyTagged cpy_r_c_len;
    int64_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    CPyTagged cpy_r_r34;
    int64_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    CPyPtr cpy_r_r39;
    int64_t cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    CPyTagged cpy_r_r51;
    CPyTagged cpy_r_r52;
    CPyPtr cpy_r_r53;
    int64_t cpy_r_r54;
    CPyTagged cpy_r_r55;
    char cpy_r_r56;
    CPyPtr cpy_r_r57;
    int64_t cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    int32_t cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 176, CPyStatic_codegen___literals___globals);
        goto CPyL37;
    }
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_values);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetItemsIter(cpy_r_values);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 176, CPyStatic_codegen___literals___globals);
        goto CPyL38;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextItem(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL39;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = cpy_r_r5.f3;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r10 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/literals.py", "_encode_str_values", 176, CPyStatic_codegen___literals___globals, "str", cpy_r_r8);
        goto CPyL40;
    }
    if (likely(PyLong_Check(cpy_r_r9)))
        cpy_r_r11 = CPyTagged_FromObject(cpy_r_r9);
    else {
        CPy_TypeError("int", cpy_r_r9); cpy_r_r11 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 176, CPyStatic_codegen___literals___globals);
        goto CPyL41;
    }
    cpy_r_value = cpy_r_r10;
    cpy_r_index = cpy_r_r11;
    cpy_r_r12 = CPyTagged_StealAsObject(cpy_r_index);
    cpy_r_r13 = CPyDict_SetItem(cpy_r_r0, cpy_r_r12, cpy_r_value);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_value);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 176, CPyStatic_codegen___literals___globals);
        goto CPyL42;
    }
    cpy_r_r15 = CPyDict_CheckSize(cpy_r_values, cpy_r_r3);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 176, CPyStatic_codegen___literals___globals);
        goto CPyL42;
    } else
        goto CPyL2;
CPyL7: ;
    cpy_r_r16 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 176, CPyStatic_codegen___literals___globals);
        goto CPyL38;
    }
    cpy_r_value_by_index = cpy_r_r0;
    cpy_r_r17 = PyList_New(0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 177, CPyStatic_codegen___literals___globals);
        goto CPyL43;
    }
    cpy_r_result = cpy_r_r17;
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 178, CPyStatic_codegen___literals___globals);
        goto CPyL44;
    }
    cpy_r_line = cpy_r_r18;
    cpy_r_line_len = 0;
    cpy_r_r19 = PyDict_Size(cpy_r_values);
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = 0;
    cpy_r_i = cpy_r_r21;
CPyL11: ;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r22) goto CPyL45;
    cpy_r_r23 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r24 = CPyDict_GetItem(cpy_r_value_by_index, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 181, CPyStatic_codegen___literals___globals);
        goto CPyL46;
    }
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/literals.py", "_encode_str_values", 181, CPyStatic_codegen___literals___globals, "str", cpy_r_r24);
        goto CPyL46;
    }
    cpy_r_value_2 = cpy_r_r25;
    cpy_r_r26 = CPyDef_codegen___literals___format_str_literal(cpy_r_value_2);
    CPy_DECREF(cpy_r_value_2);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 182, CPyStatic_codegen___literals___globals);
        goto CPyL46;
    }
    cpy_r_c_literal = cpy_r_r26;
    cpy_r_r27 = (CPyPtr)&((PyVarObject *)cpy_r_c_literal)->ob_size;
    cpy_r_r28 = *(int64_t *)cpy_r_r27;
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_c_len = cpy_r_r29;
    cpy_r_r30 = cpy_r_line_len & 1;
    cpy_r_r31 = cpy_r_r30 != 0;
    if (!cpy_r_r31) goto CPyL17;
    cpy_r_r32 = CPyTagged_IsLt_(0, cpy_r_line_len);
    if (cpy_r_r32) {
        goto CPyL18;
    } else
        goto CPyL27;
CPyL17: ;
    cpy_r_r33 = (Py_ssize_t)cpy_r_line_len > (Py_ssize_t)0;
    if (!cpy_r_r33) goto CPyL27;
CPyL18: ;
    cpy_r_r34 = CPyTagged_Add(cpy_r_line_len, cpy_r_c_len);
    cpy_r_r35 = cpy_r_r34 & 1;
    cpy_r_r36 = cpy_r_r35 != 0;
    if (!cpy_r_r36) goto CPyL20;
    cpy_r_r37 = CPyTagged_IsLt_(140, cpy_r_r34);
    CPyTagged_DECREF(cpy_r_r34);
    if (cpy_r_r37) {
        goto CPyL47;
    } else
        goto CPyL27;
CPyL20: ;
    cpy_r_r38 = (Py_ssize_t)cpy_r_r34 > (Py_ssize_t)140;
    CPyTagged_DECREF(cpy_r_r34);
    if (cpy_r_r38) {
        goto CPyL47;
    } else
        goto CPyL27;
CPyL21: ;
    cpy_r_r39 = (CPyPtr)&((PyVarObject *)cpy_r_line)->ob_size;
    cpy_r_r40 = *(int64_t *)cpy_r_r39;
    cpy_r_r41 = cpy_r_r40 << 1;
    cpy_r_r42 = CPyDef_codegen___literals___format_int(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 185, CPyStatic_codegen___literals___globals);
        goto CPyL48;
    }
    cpy_r_r43 = CPyStatics[9009]; /* b'' */
    cpy_r_r44 = CPyBytes_Join(cpy_r_r43, cpy_r_line);
    CPy_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 185, CPyStatic_codegen___literals___globals);
        goto CPyL49;
    }
    cpy_r_r45 = CPyBytes_Concat(cpy_r_r42, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 185, CPyStatic_codegen___literals___globals);
        goto CPyL50;
    }
    cpy_r_r46 = PyList_Append(cpy_r_result, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 185, CPyStatic_codegen___literals___globals);
        goto CPyL50;
    }
    cpy_r_r48 = PyList_New(0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 186, CPyStatic_codegen___literals___globals);
        goto CPyL50;
    }
    cpy_r_line = cpy_r_r48;
    cpy_r_line_len = 0;
CPyL27: ;
    cpy_r_r49 = PyList_Append(cpy_r_line, cpy_r_c_literal);
    CPy_DECREF(cpy_r_c_literal);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 188, CPyStatic_codegen___literals___globals);
        goto CPyL51;
    }
    cpy_r_r51 = CPyTagged_Add(cpy_r_line_len, cpy_r_c_len);
    CPyTagged_DECREF(cpy_r_line_len);
    CPyTagged_DECREF(cpy_r_c_len);
    cpy_r_line_len = cpy_r_r51;
    cpy_r_r52 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r52;
    cpy_r_i = cpy_r_r52;
    goto CPyL11;
CPyL30: ;
    cpy_r_r53 = (CPyPtr)&((PyVarObject *)cpy_r_line)->ob_size;
    cpy_r_r54 = *(int64_t *)cpy_r_r53;
    cpy_r_r55 = cpy_r_r54 << 1;
    cpy_r_r56 = cpy_r_r55 != 0;
    if (!cpy_r_r56) goto CPyL52;
    cpy_r_r57 = (CPyPtr)&((PyVarObject *)cpy_r_line)->ob_size;
    cpy_r_r58 = *(int64_t *)cpy_r_r57;
    cpy_r_r59 = cpy_r_r58 << 1;
    cpy_r_r60 = CPyDef_codegen___literals___format_int(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 191, CPyStatic_codegen___literals___globals);
        goto CPyL53;
    }
    cpy_r_r61 = CPyStatics[9009]; /* b'' */
    cpy_r_r62 = CPyBytes_Join(cpy_r_r61, cpy_r_line);
    CPy_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 191, CPyStatic_codegen___literals___globals);
        goto CPyL54;
    }
    cpy_r_r63 = CPyBytes_Concat(cpy_r_r60, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 191, CPyStatic_codegen___literals___globals);
        goto CPyL55;
    }
    cpy_r_r64 = PyList_Append(cpy_r_result, cpy_r_r63);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r65 = cpy_r_r64 >= 0;
    if (unlikely(!cpy_r_r65)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 191, CPyStatic_codegen___literals___globals);
        goto CPyL55;
    }
CPyL35: ;
    cpy_r_r66 = CPyStatics[9009]; /* b'' */
    cpy_r_r67 = PyList_Append(cpy_r_result, cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 192, CPyStatic_codegen___literals___globals);
        goto CPyL55;
    }
    return cpy_r_result;
CPyL37: ;
    cpy_r_r69 = NULL;
    return cpy_r_r69;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL37;
CPyL39: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    goto CPyL7;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r9);
    goto CPyL37;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r10);
    goto CPyL37;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL37;
CPyL43: ;
    CPy_DecRef(cpy_r_value_by_index);
    goto CPyL37;
CPyL44: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    goto CPyL37;
CPyL45: ;
    CPy_DECREF(cpy_r_value_by_index);
    CPyTagged_DECREF(cpy_r_line_len);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL30;
CPyL46: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_line_len);
    goto CPyL37;
CPyL47: ;
    CPyTagged_DECREF(cpy_r_line_len);
    goto CPyL21;
CPyL48: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_c_literal);
    CPyTagged_DecRef(cpy_r_c_len);
    goto CPyL37;
CPyL49: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_c_literal);
    CPyTagged_DecRef(cpy_r_c_len);
    CPy_DecRef(cpy_r_r42);
    goto CPyL37;
CPyL50: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_c_literal);
    CPyTagged_DecRef(cpy_r_c_len);
    goto CPyL37;
CPyL51: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_line_len);
    CPyTagged_DecRef(cpy_r_c_len);
    goto CPyL37;
CPyL52: ;
    CPy_DECREF(cpy_r_line);
    goto CPyL35;
CPyL53: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_line);
    goto CPyL37;
CPyL54: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r60);
    goto CPyL37;
CPyL55: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL37;
}

PyObject *CPyPy_codegen___literals____encode_str_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"values", 0};
    static CPyArg_Parser parser = {"O:_encode_str_values", kwlist, 0};
    PyObject *obj_values;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_values)) {
        return NULL;
    }
    PyObject *arg_values;
    if (likely(PyDict_Check(obj_values)))
        arg_values = obj_values;
    else {
        CPy_TypeError("dict", obj_values); 
        goto fail;
    }
    PyObject *retval = CPyDef_codegen___literals____encode_str_values(arg_values);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_str_values", 175, CPyStatic_codegen___literals___globals);
    return NULL;
}

PyObject *CPyDef_codegen___literals____encode_bytes_values(PyObject *cpy_r_values) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T4CIOO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_value;
    CPyTagged cpy_r_index;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_value_by_index;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_line;
    CPyTagged cpy_r_line_len;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_i;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_value_2;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_c_init;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyPtr cpy_r_r33;
    int64_t cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyTagged cpy_r_c_len;
    int64_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
    int64_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    CPyPtr cpy_r_r46;
    int64_t cpy_r_r47;
    CPyTagged cpy_r_r48;
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
    CPyTagged cpy_r_r59;
    CPyTagged cpy_r_r60;
    CPyPtr cpy_r_r61;
    int64_t cpy_r_r62;
    CPyTagged cpy_r_r63;
    char cpy_r_r64;
    CPyPtr cpy_r_r65;
    int64_t cpy_r_r66;
    CPyTagged cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 197, CPyStatic_codegen___literals___globals);
        goto CPyL38;
    }
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_values);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetItemsIter(cpy_r_values);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 197, CPyStatic_codegen___literals___globals);
        goto CPyL39;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextItem(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL40;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = cpy_r_r5.f3;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    if (likely(PyBytes_Check(cpy_r_r8) || PyByteArray_Check(cpy_r_r8)))
        cpy_r_r10 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 197, CPyStatic_codegen___literals___globals, "bytes", cpy_r_r8);
        goto CPyL41;
    }
    if (likely(PyLong_Check(cpy_r_r9)))
        cpy_r_r11 = CPyTagged_FromObject(cpy_r_r9);
    else {
        CPy_TypeError("int", cpy_r_r9); cpy_r_r11 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 197, CPyStatic_codegen___literals___globals);
        goto CPyL42;
    }
    cpy_r_value = cpy_r_r10;
    cpy_r_index = cpy_r_r11;
    cpy_r_r12 = CPyTagged_StealAsObject(cpy_r_index);
    cpy_r_r13 = CPyDict_SetItem(cpy_r_r0, cpy_r_r12, cpy_r_value);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_value);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 197, CPyStatic_codegen___literals___globals);
        goto CPyL43;
    }
    cpy_r_r15 = CPyDict_CheckSize(cpy_r_values, cpy_r_r3);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 197, CPyStatic_codegen___literals___globals);
        goto CPyL43;
    } else
        goto CPyL2;
CPyL7: ;
    cpy_r_r16 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 197, CPyStatic_codegen___literals___globals);
        goto CPyL39;
    }
    cpy_r_value_by_index = cpy_r_r0;
    cpy_r_r17 = PyList_New(0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 198, CPyStatic_codegen___literals___globals);
        goto CPyL44;
    }
    cpy_r_result = cpy_r_r17;
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 199, CPyStatic_codegen___literals___globals);
        goto CPyL45;
    }
    cpy_r_line = cpy_r_r18;
    cpy_r_line_len = 0;
    cpy_r_r19 = PyDict_Size(cpy_r_values);
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = 0;
    cpy_r_i = cpy_r_r21;
CPyL11: ;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r21 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r22) goto CPyL46;
    cpy_r_r23 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r24 = CPyDict_GetItem(cpy_r_value_by_index, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 202, CPyStatic_codegen___literals___globals);
        goto CPyL47;
    }
    if (likely(PyBytes_Check(cpy_r_r24) || PyByteArray_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 202, CPyStatic_codegen___literals___globals, "bytes", cpy_r_r24);
        goto CPyL47;
    }
    cpy_r_value_2 = cpy_r_r25;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_value_2)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = CPyDef_codegen___literals___format_int(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 203, CPyStatic_codegen___literals___globals);
        goto CPyL48;
    }
    cpy_r_c_init = cpy_r_r29;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_c_init)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (CPyPtr)&((PyVarObject *)cpy_r_value_2)->ob_size;
    cpy_r_r34 = *(int64_t *)cpy_r_r33;
    cpy_r_r35 = cpy_r_r34 << 1;
    cpy_r_r36 = CPyTagged_Add(cpy_r_r32, cpy_r_r35);
    cpy_r_c_len = cpy_r_r36;
    cpy_r_r37 = cpy_r_line_len & 1;
    cpy_r_r38 = cpy_r_r37 != 0;
    if (!cpy_r_r38) goto CPyL17;
    cpy_r_r39 = CPyTagged_IsLt_(0, cpy_r_line_len);
    if (cpy_r_r39) {
        goto CPyL18;
    } else
        goto CPyL27;
CPyL17: ;
    cpy_r_r40 = (Py_ssize_t)cpy_r_line_len > (Py_ssize_t)0;
    if (!cpy_r_r40) goto CPyL27;
CPyL18: ;
    cpy_r_r41 = CPyTagged_Add(cpy_r_line_len, cpy_r_c_len);
    cpy_r_r42 = cpy_r_r41 & 1;
    cpy_r_r43 = cpy_r_r42 != 0;
    if (!cpy_r_r43) goto CPyL20;
    cpy_r_r44 = CPyTagged_IsLt_(140, cpy_r_r41);
    CPyTagged_DECREF(cpy_r_r41);
    if (cpy_r_r44) {
        goto CPyL49;
    } else
        goto CPyL27;
CPyL20: ;
    cpy_r_r45 = (Py_ssize_t)cpy_r_r41 > (Py_ssize_t)140;
    CPyTagged_DECREF(cpy_r_r41);
    if (cpy_r_r45) {
        goto CPyL49;
    } else
        goto CPyL27;
CPyL21: ;
    cpy_r_r46 = (CPyPtr)&((PyVarObject *)cpy_r_line)->ob_size;
    cpy_r_r47 = *(int64_t *)cpy_r_r46;
    cpy_r_r48 = cpy_r_r47 << 1;
    cpy_r_r49 = CPyDef_codegen___literals___format_int(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 206, CPyStatic_codegen___literals___globals);
        goto CPyL50;
    }
    cpy_r_r50 = CPyStatics[9009]; /* b'' */
    cpy_r_r51 = CPyBytes_Join(cpy_r_r50, cpy_r_line);
    CPy_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 206, CPyStatic_codegen___literals___globals);
        goto CPyL51;
    }
    cpy_r_r52 = CPyBytes_Concat(cpy_r_r49, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 206, CPyStatic_codegen___literals___globals);
        goto CPyL52;
    }
    cpy_r_r53 = PyList_Append(cpy_r_result, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 206, CPyStatic_codegen___literals___globals);
        goto CPyL52;
    }
    cpy_r_r55 = PyList_New(0);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 207, CPyStatic_codegen___literals___globals);
        goto CPyL52;
    }
    cpy_r_line = cpy_r_r55;
    cpy_r_line_len = 0;
CPyL27: ;
    cpy_r_r56 = CPyBytes_Concat(cpy_r_c_init, cpy_r_value_2);
    CPy_DECREF(cpy_r_value_2);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 209, CPyStatic_codegen___literals___globals);
        goto CPyL53;
    }
    cpy_r_r57 = PyList_Append(cpy_r_line, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 209, CPyStatic_codegen___literals___globals);
        goto CPyL53;
    }
    cpy_r_r59 = CPyTagged_Add(cpy_r_line_len, cpy_r_c_len);
    CPyTagged_DECREF(cpy_r_line_len);
    CPyTagged_DECREF(cpy_r_c_len);
    cpy_r_line_len = cpy_r_r59;
    cpy_r_r60 = cpy_r_r21 + 2;
    cpy_r_r21 = cpy_r_r60;
    cpy_r_i = cpy_r_r60;
    goto CPyL11;
CPyL31: ;
    cpy_r_r61 = (CPyPtr)&((PyVarObject *)cpy_r_line)->ob_size;
    cpy_r_r62 = *(int64_t *)cpy_r_r61;
    cpy_r_r63 = cpy_r_r62 << 1;
    cpy_r_r64 = cpy_r_r63 != 0;
    if (!cpy_r_r64) goto CPyL54;
    cpy_r_r65 = (CPyPtr)&((PyVarObject *)cpy_r_line)->ob_size;
    cpy_r_r66 = *(int64_t *)cpy_r_r65;
    cpy_r_r67 = cpy_r_r66 << 1;
    cpy_r_r68 = CPyDef_codegen___literals___format_int(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 212, CPyStatic_codegen___literals___globals);
        goto CPyL55;
    }
    cpy_r_r69 = CPyStatics[9009]; /* b'' */
    cpy_r_r70 = CPyBytes_Join(cpy_r_r69, cpy_r_line);
    CPy_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 212, CPyStatic_codegen___literals___globals);
        goto CPyL56;
    }
    cpy_r_r71 = CPyBytes_Concat(cpy_r_r68, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 212, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    cpy_r_r72 = PyList_Append(cpy_r_result, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 212, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
CPyL36: ;
    cpy_r_r74 = CPyStatics[9009]; /* b'' */
    cpy_r_r75 = PyList_Append(cpy_r_result, cpy_r_r74);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 213, CPyStatic_codegen___literals___globals);
        goto CPyL57;
    }
    return cpy_r_result;
CPyL38: ;
    cpy_r_r77 = NULL;
    return cpy_r_r77;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL38;
CPyL40: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    goto CPyL7;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r9);
    goto CPyL38;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r10);
    goto CPyL38;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL38;
CPyL44: ;
    CPy_DecRef(cpy_r_value_by_index);
    goto CPyL38;
CPyL45: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    goto CPyL38;
CPyL46: ;
    CPy_DECREF(cpy_r_value_by_index);
    CPyTagged_DECREF(cpy_r_line_len);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL31;
CPyL47: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_line_len);
    goto CPyL38;
CPyL48: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_line_len);
    CPy_DecRef(cpy_r_value_2);
    goto CPyL38;
CPyL49: ;
    CPyTagged_DECREF(cpy_r_line_len);
    goto CPyL21;
CPyL50: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_value_2);
    CPy_DecRef(cpy_r_c_init);
    CPyTagged_DecRef(cpy_r_c_len);
    goto CPyL38;
CPyL51: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_value_2);
    CPy_DecRef(cpy_r_c_init);
    CPyTagged_DecRef(cpy_r_c_len);
    CPy_DecRef(cpy_r_r49);
    goto CPyL38;
CPyL52: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_value_2);
    CPy_DecRef(cpy_r_c_init);
    CPyTagged_DecRef(cpy_r_c_len);
    goto CPyL38;
CPyL53: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_line_len);
    CPyTagged_DecRef(cpy_r_c_len);
    goto CPyL38;
CPyL54: ;
    CPy_DECREF(cpy_r_line);
    goto CPyL36;
CPyL55: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_line);
    goto CPyL38;
CPyL56: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r68);
    goto CPyL38;
CPyL57: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL38;
}

PyObject *CPyPy_codegen___literals____encode_bytes_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"values", 0};
    static CPyArg_Parser parser = {"O:_encode_bytes_values", kwlist, 0};
    PyObject *obj_values;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_values)) {
        return NULL;
    }
    PyObject *arg_values;
    if (likely(PyDict_Check(obj_values)))
        arg_values = obj_values;
    else {
        CPy_TypeError("dict", obj_values); 
        goto fail;
    }
    PyObject *retval = CPyDef_codegen___literals____encode_bytes_values(arg_values);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_bytes_values", 196, CPyStatic_codegen___literals___globals);
    return NULL;
}

PyObject *CPyDef_codegen___literals___format_int(CPyTagged cpy_r_n) {
    int64_t cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    CPyPtr cpy_r_r7;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r8;
    int64_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r23;
    char cpy_r_r24;
    int64_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    cpy_r_r0 = cpy_r_n & 1;
    cpy_r_r1 = cpy_r_r0 != 0;
    if (!cpy_r_r1) goto CPyL2;
    cpy_r_r2 = CPyTagged_IsLt_(cpy_r_n, 256);
    if (cpy_r_r2) {
        goto CPyL3;
    } else
        goto CPyL5;
CPyL2: ;
    cpy_r_r3 = (Py_ssize_t)cpy_r_n < (Py_ssize_t)256;
    if (!cpy_r_r3) goto CPyL5;
CPyL3: ;
    cpy_r_r4 = PyList_New(1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "format_int", 220, CPyStatic_codegen___literals___globals);
        goto CPyL24;
    }
    CPyTagged_INCREF(cpy_r_n);
    cpy_r_r5 = CPyTagged_StealAsObject(cpy_r_n);
    cpy_r_r6 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r7 = *(CPyPtr *)cpy_r_r6;
    *(PyObject * *)cpy_r_r7 = cpy_r_r5;
    cpy_r_a = cpy_r_r4;
    goto CPyL22;
CPyL5: ;
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "format_int", 222, CPyStatic_codegen___literals___globals);
        goto CPyL24;
    }
    cpy_r_a = cpy_r_r8;
    goto CPyL25;
CPyL7: ;
    cpy_r_r9 = cpy_r_n & 1;
    cpy_r_r10 = cpy_r_r9 != 0;
    if (!cpy_r_r10) goto CPyL9;
    cpy_r_r11 = CPyTagged_IsLt_(0, cpy_r_n);
    if (cpy_r_r11) {
        goto CPyL10;
    } else
        goto CPyL26;
CPyL9: ;
    cpy_r_r12 = (Py_ssize_t)cpy_r_n > (Py_ssize_t)0;
    if (!cpy_r_r12) goto CPyL26;
CPyL10: ;
    cpy_r_r13 = CPyTagged_And(cpy_r_n, 254);
    cpy_r_r14 = CPyTagged_StealAsObject(cpy_r_r13);
    cpy_r_r15 = CPyList_Insert(cpy_r_a, 0, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "format_int", 224, CPyStatic_codegen___literals___globals);
        goto CPyL27;
    }
    cpy_r_r17 = CPyTagged_Rshift(cpy_r_n, 14);
    CPyTagged_DECREF(cpy_r_n);
    if (unlikely(cpy_r_r17 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "format_int", 225, CPyStatic_codegen___literals___globals);
        goto CPyL28;
    }
    cpy_r_n = cpy_r_r17;
    goto CPyL7;
CPyL13: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_a)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = CPyTagged_Subtract(cpy_r_r20, 2);
    cpy_r_r22 = 0;
    CPyTagged_INCREF(cpy_r_r22);
    cpy_r_i = cpy_r_r22;
CPyL14: ;
    cpy_r_r23 = cpy_r_r22 & 1;
    cpy_r_r24 = cpy_r_r23 == 0;
    cpy_r_r25 = cpy_r_r21 & 1;
    cpy_r_r26 = cpy_r_r25 == 0;
    cpy_r_r27 = cpy_r_r24 & cpy_r_r26;
    if (!cpy_r_r27) goto CPyL16;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r21;
    cpy_r_r29 = cpy_r_r28;
    goto CPyL17;
CPyL16: ;
    cpy_r_r30 = CPyTagged_IsLt_(cpy_r_r22, cpy_r_r21);
    cpy_r_r29 = cpy_r_r30;
CPyL17: ;
    if (!cpy_r_r29) goto CPyL29;
    cpy_r_r31 = CPyList_GetItem(cpy_r_a, cpy_r_i);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "format_int", 228, CPyStatic_codegen___literals___globals);
        goto CPyL30;
    }
    cpy_r_r32 = CPyStatics[9046]; /* 128 */
    cpy_r_r33 = PyNumber_InPlaceOr(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "format_int", 228, CPyStatic_codegen___literals___globals);
        goto CPyL30;
    }
    cpy_r_r34 = CPyList_SetItem(cpy_r_a, cpy_r_i, cpy_r_r33);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "format_int", 228, CPyStatic_codegen___literals___globals);
        goto CPyL31;
    }
    cpy_r_r35 = CPyTagged_Add(cpy_r_r22, 2);
    CPyTagged_DECREF(cpy_r_r22);
    CPyTagged_INCREF(cpy_r_r35);
    cpy_r_r22 = cpy_r_r35;
    cpy_r_i = cpy_r_r35;
    goto CPyL14;
CPyL22: ;
    cpy_r_r36 = PyBytes_FromObject(cpy_r_a);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "format_int", 229, CPyStatic_codegen___literals___globals);
        goto CPyL24;
    }
    return cpy_r_r36;
CPyL24: ;
    cpy_r_r37 = NULL;
    return cpy_r_r37;
CPyL25: ;
    CPyTagged_INCREF(cpy_r_n);
    goto CPyL7;
CPyL26: ;
    CPyTagged_DECREF(cpy_r_n);
    goto CPyL13;
CPyL27: ;
    CPyTagged_DecRef(cpy_r_n);
    CPy_DecRef(cpy_r_a);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL24;
CPyL29: ;
    CPyTagged_DECREF(cpy_r_r21);
    CPyTagged_DECREF(cpy_r_r22);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL22;
CPyL30: ;
    CPy_DecRef(cpy_r_a);
    CPyTagged_DecRef(cpy_r_r21);
    CPyTagged_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL24;
CPyL31: ;
    CPy_DecRef(cpy_r_a);
    CPyTagged_DecRef(cpy_r_r21);
    CPyTagged_DecRef(cpy_r_r22);
    goto CPyL24;
}

PyObject *CPyPy_codegen___literals___format_int(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"n", 0};
    static CPyArg_Parser parser = {"O:format_int", kwlist, 0};
    PyObject *obj_n;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_n)) {
        return NULL;
    }
    CPyTagged arg_n;
    if (likely(PyLong_Check(obj_n)))
        arg_n = CPyTagged_BorrowFromObject(obj_n);
    else {
        CPy_TypeError("int", obj_n); goto fail;
    }
    PyObject *retval = CPyDef_codegen___literals___format_int(arg_n);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "format_int", 217, CPyStatic_codegen___literals___globals);
    return NULL;
}

PyObject *CPyDef_codegen___literals___format_str_literal(PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_utf8;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyStatics[344]; /* 'utf-8' */
    cpy_r_r1 = CPy_Encode(cpy_r_s, cpy_r_r0, NULL);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "format_str_literal", 233, CPyStatic_codegen___literals___globals);
        goto CPyL4;
    }
    cpy_r_utf8 = cpy_r_r1;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_utf8)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = CPyDef_codegen___literals___format_int(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "format_str_literal", 234, CPyStatic_codegen___literals___globals);
        goto CPyL5;
    }
    cpy_r_r6 = CPyBytes_Concat(cpy_r_r5, cpy_r_utf8);
    CPy_DECREF(cpy_r_utf8);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "format_str_literal", 234, CPyStatic_codegen___literals___globals);
        goto CPyL4;
    }
    return cpy_r_r6;
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL5: ;
    CPy_DecRef(cpy_r_utf8);
    goto CPyL4;
}

PyObject *CPyPy_codegen___literals___format_str_literal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:format_str_literal", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_s;
    if (likely(PyUnicode_Check(obj_s)))
        arg_s = obj_s;
    else {
        CPy_TypeError("str", obj_s); 
        goto fail;
    }
    PyObject *retval = CPyDef_codegen___literals___format_str_literal(arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "format_str_literal", 232, CPyStatic_codegen___literals___globals);
    return NULL;
}

PyObject *CPyDef_codegen___literals____encode_int_values(PyObject *cpy_r_values) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T4CIOO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_value;
    CPyTagged cpy_r_index;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_value_by_index;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_line;
    CPyTagged cpy_r_line_len;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_i;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyTagged cpy_r_value_2;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_encoded;
    int64_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    CPyPtr cpy_r_r35;
    int64_t cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyTagged cpy_r_r38;
    int64_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    CPyPtr cpy_r_r43;
    int64_t cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    CPyPtr cpy_r_r55;
    int64_t cpy_r_r56;
    CPyTagged cpy_r_r57;
    CPyTagged cpy_r_r58;
    CPyTagged cpy_r_r59;
    CPyPtr cpy_r_r60;
    int64_t cpy_r_r61;
    CPyTagged cpy_r_r62;
    char cpy_r_r63;
    CPyPtr cpy_r_r64;
    int64_t cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    int32_t cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 242, CPyStatic_codegen___literals___globals);
        goto CPyL38;
    }
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_values);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetItemsIter(cpy_r_values);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 242, CPyStatic_codegen___literals___globals);
        goto CPyL39;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextItem(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL40;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = cpy_r_r5.f3;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    if (likely(PyLong_Check(cpy_r_r8)))
        cpy_r_r10 = CPyTagged_FromObject(cpy_r_r8);
    else {
        CPy_TypeError("int", cpy_r_r8); cpy_r_r10 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 242, CPyStatic_codegen___literals___globals);
        goto CPyL41;
    }
    if (likely(PyLong_Check(cpy_r_r9)))
        cpy_r_r11 = CPyTagged_FromObject(cpy_r_r9);
    else {
        CPy_TypeError("int", cpy_r_r9); cpy_r_r11 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 242, CPyStatic_codegen___literals___globals);
        goto CPyL42;
    }
    cpy_r_value = cpy_r_r10;
    cpy_r_index = cpy_r_r11;
    cpy_r_r12 = CPyTagged_StealAsObject(cpy_r_index);
    cpy_r_r13 = CPyTagged_StealAsObject(cpy_r_value);
    cpy_r_r14 = CPyDict_SetItem(cpy_r_r0, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 242, CPyStatic_codegen___literals___globals);
        goto CPyL43;
    }
    cpy_r_r16 = CPyDict_CheckSize(cpy_r_values, cpy_r_r3);
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 242, CPyStatic_codegen___literals___globals);
        goto CPyL43;
    } else
        goto CPyL2;
CPyL7: ;
    cpy_r_r17 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 242, CPyStatic_codegen___literals___globals);
        goto CPyL39;
    }
    cpy_r_value_by_index = cpy_r_r0;
    cpy_r_r18 = PyList_New(0);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 243, CPyStatic_codegen___literals___globals);
        goto CPyL44;
    }
    cpy_r_result = cpy_r_r18;
    cpy_r_r19 = PyList_New(0);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 244, CPyStatic_codegen___literals___globals);
        goto CPyL45;
    }
    cpy_r_line = cpy_r_r19;
    cpy_r_line_len = 0;
    cpy_r_r20 = PyDict_Size(cpy_r_values);
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = 0;
    cpy_r_i = cpy_r_r22;
CPyL11: ;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_r21;
    if (!cpy_r_r23) goto CPyL46;
    cpy_r_r24 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r25 = CPyDict_GetItem(cpy_r_value_by_index, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 247, CPyStatic_codegen___literals___globals);
        goto CPyL47;
    }
    if (likely(PyLong_Check(cpy_r_r25)))
        cpy_r_r26 = CPyTagged_FromObject(cpy_r_r25);
    else {
        CPy_TypeError("int", cpy_r_r25); cpy_r_r26 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 247, CPyStatic_codegen___literals___globals);
        goto CPyL47;
    }
    cpy_r_value_2 = cpy_r_r26;
    cpy_r_r27 = CPyStatics[9012]; /* b'%d' */
    cpy_r_r28 = CPyTagged_StealAsObject(cpy_r_value_2);
    cpy_r_r29 = PyNumber_Remainder(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 248, CPyStatic_codegen___literals___globals);
        goto CPyL47;
    }
    if (likely(PyBytes_Check(cpy_r_r29) || PyByteArray_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/literals.py", "_encode_int_values", 248, CPyStatic_codegen___literals___globals, "bytes", cpy_r_r29);
        goto CPyL47;
    }
    cpy_r_encoded = cpy_r_r30;
    cpy_r_r31 = cpy_r_line_len & 1;
    cpy_r_r32 = cpy_r_r31 != 0;
    if (!cpy_r_r32) goto CPyL18;
    cpy_r_r33 = CPyTagged_IsLt_(0, cpy_r_line_len);
    if (cpy_r_r33) {
        goto CPyL19;
    } else
        goto CPyL28;
CPyL18: ;
    cpy_r_r34 = (Py_ssize_t)cpy_r_line_len > (Py_ssize_t)0;
    if (!cpy_r_r34) goto CPyL28;
CPyL19: ;
    cpy_r_r35 = (CPyPtr)&((PyVarObject *)cpy_r_encoded)->ob_size;
    cpy_r_r36 = *(int64_t *)cpy_r_r35;
    cpy_r_r37 = cpy_r_r36 << 1;
    cpy_r_r38 = CPyTagged_Add(cpy_r_line_len, cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 & 1;
    cpy_r_r40 = cpy_r_r39 != 0;
    if (!cpy_r_r40) goto CPyL21;
    cpy_r_r41 = CPyTagged_IsLt_(140, cpy_r_r38);
    CPyTagged_DECREF(cpy_r_r38);
    if (cpy_r_r41) {
        goto CPyL48;
    } else
        goto CPyL28;
CPyL21: ;
    cpy_r_r42 = (Py_ssize_t)cpy_r_r38 > (Py_ssize_t)140;
    CPyTagged_DECREF(cpy_r_r38);
    if (cpy_r_r42) {
        goto CPyL48;
    } else
        goto CPyL28;
CPyL22: ;
    cpy_r_r43 = (CPyPtr)&((PyVarObject *)cpy_r_line)->ob_size;
    cpy_r_r44 = *(int64_t *)cpy_r_r43;
    cpy_r_r45 = cpy_r_r44 << 1;
    cpy_r_r46 = CPyDef_codegen___literals___format_int(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 250, CPyStatic_codegen___literals___globals);
        goto CPyL49;
    }
    cpy_r_r47 = CPyStatics[9013]; /* b'\x00' */
    cpy_r_r48 = CPyBytes_Join(cpy_r_r47, cpy_r_line);
    CPy_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 250, CPyStatic_codegen___literals___globals);
        goto CPyL50;
    }
    cpy_r_r49 = CPyBytes_Concat(cpy_r_r46, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 250, CPyStatic_codegen___literals___globals);
        goto CPyL51;
    }
    cpy_r_r50 = PyList_Append(cpy_r_result, cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 250, CPyStatic_codegen___literals___globals);
        goto CPyL51;
    }
    cpy_r_r52 = PyList_New(0);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 251, CPyStatic_codegen___literals___globals);
        goto CPyL51;
    }
    cpy_r_line = cpy_r_r52;
    cpy_r_line_len = 0;
CPyL28: ;
    cpy_r_r53 = PyList_Append(cpy_r_line, cpy_r_encoded);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 253, CPyStatic_codegen___literals___globals);
        goto CPyL52;
    }
    cpy_r_r55 = (CPyPtr)&((PyVarObject *)cpy_r_encoded)->ob_size;
    cpy_r_r56 = *(int64_t *)cpy_r_r55;
    CPy_DECREF(cpy_r_encoded);
    cpy_r_r57 = cpy_r_r56 << 1;
    cpy_r_r58 = CPyTagged_Add(cpy_r_line_len, cpy_r_r57);
    CPyTagged_DECREF(cpy_r_line_len);
    cpy_r_line_len = cpy_r_r58;
    cpy_r_r59 = cpy_r_r22 + 2;
    cpy_r_r22 = cpy_r_r59;
    cpy_r_i = cpy_r_r59;
    goto CPyL11;
CPyL31: ;
    cpy_r_r60 = (CPyPtr)&((PyVarObject *)cpy_r_line)->ob_size;
    cpy_r_r61 = *(int64_t *)cpy_r_r60;
    cpy_r_r62 = cpy_r_r61 << 1;
    cpy_r_r63 = cpy_r_r62 != 0;
    if (!cpy_r_r63) goto CPyL53;
    cpy_r_r64 = (CPyPtr)&((PyVarObject *)cpy_r_line)->ob_size;
    cpy_r_r65 = *(int64_t *)cpy_r_r64;
    cpy_r_r66 = cpy_r_r65 << 1;
    cpy_r_r67 = CPyDef_codegen___literals___format_int(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 256, CPyStatic_codegen___literals___globals);
        goto CPyL54;
    }
    cpy_r_r68 = CPyStatics[9013]; /* b'\x00' */
    cpy_r_r69 = CPyBytes_Join(cpy_r_r68, cpy_r_line);
    CPy_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 256, CPyStatic_codegen___literals___globals);
        goto CPyL55;
    }
    cpy_r_r70 = CPyBytes_Concat(cpy_r_r67, cpy_r_r69);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 256, CPyStatic_codegen___literals___globals);
        goto CPyL56;
    }
    cpy_r_r71 = PyList_Append(cpy_r_result, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 256, CPyStatic_codegen___literals___globals);
        goto CPyL56;
    }
CPyL36: ;
    cpy_r_r73 = CPyStatics[9009]; /* b'' */
    cpy_r_r74 = PyList_Append(cpy_r_result, cpy_r_r73);
    cpy_r_r75 = cpy_r_r74 >= 0;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 257, CPyStatic_codegen___literals___globals);
        goto CPyL56;
    }
    return cpy_r_result;
CPyL38: ;
    cpy_r_r76 = NULL;
    return cpy_r_r76;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL38;
CPyL40: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    goto CPyL7;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r9);
    goto CPyL38;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPyTagged_DecRef(cpy_r_r10);
    goto CPyL38;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL38;
CPyL44: ;
    CPy_DecRef(cpy_r_value_by_index);
    goto CPyL38;
CPyL45: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    goto CPyL38;
CPyL46: ;
    CPy_DECREF(cpy_r_value_by_index);
    CPyTagged_DECREF(cpy_r_line_len);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL31;
CPyL47: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_line_len);
    goto CPyL38;
CPyL48: ;
    CPyTagged_DECREF(cpy_r_line_len);
    goto CPyL22;
CPyL49: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_encoded);
    goto CPyL38;
CPyL50: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_encoded);
    CPy_DecRef(cpy_r_r46);
    goto CPyL38;
CPyL51: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_encoded);
    goto CPyL38;
CPyL52: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_line_len);
    CPy_DecRef(cpy_r_encoded);
    goto CPyL38;
CPyL53: ;
    CPy_DECREF(cpy_r_line);
    goto CPyL36;
CPyL54: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_line);
    goto CPyL38;
CPyL55: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r67);
    goto CPyL38;
CPyL56: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL38;
}

PyObject *CPyPy_codegen___literals____encode_int_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"values", 0};
    static CPyArg_Parser parser = {"O:_encode_int_values", kwlist, 0};
    PyObject *obj_values;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_values)) {
        return NULL;
    }
    PyObject *arg_values;
    if (likely(PyDict_Check(obj_values)))
        arg_values = obj_values;
    else {
        CPy_TypeError("dict", obj_values); 
        goto fail;
    }
    PyObject *retval = CPyDef_codegen___literals____encode_int_values(arg_values);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_int_values", 237, CPyStatic_codegen___literals___globals);
    return NULL;
}

PyObject *CPyDef_codegen___literals___float_to_c(double cpy_r_x) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = PyFloat_FromDouble(cpy_r_x);
    cpy_r_r1 = PyObject_Str(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "float_to_c", 263, CPyStatic_codegen___literals___globals);
        goto CPyL17;
    }
    cpy_r_s = cpy_r_r1;
    cpy_r_r2 = CPyStatics[7385]; /* 'inf' */
    cpy_r_r3 = PyUnicode_Compare(cpy_r_s, cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 == -1;
    if (!cpy_r_r4) goto CPyL4;
    cpy_r_r5 = PyErr_Occurred();
    cpy_r_r6 = cpy_r_r5 != NULL;
    if (!cpy_r_r6) goto CPyL4;
    cpy_r_r7 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "float_to_c", 264, CPyStatic_codegen___literals___globals);
        goto CPyL18;
    }
CPyL4: ;
    cpy_r_r8 = cpy_r_r3 == 0;
    if (cpy_r_r8) {
        goto CPyL19;
    } else
        goto CPyL6;
CPyL5: ;
    cpy_r_r9 = CPyStatics[7386]; /* 'INFINITY' */
    CPy_INCREF(cpy_r_r9);
    return cpy_r_r9;
CPyL6: ;
    cpy_r_r10 = CPyStatics[7387]; /* '-inf' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_s, cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL9;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL9;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "float_to_c", 266, CPyStatic_codegen___literals___globals);
        goto CPyL18;
    }
CPyL9: ;
    cpy_r_r16 = cpy_r_r11 == 0;
    if (cpy_r_r16) {
        goto CPyL20;
    } else
        goto CPyL11;
CPyL10: ;
    cpy_r_r17 = CPyStatics[7388]; /* '-INFINITY' */
    CPy_INCREF(cpy_r_r17);
    return cpy_r_r17;
CPyL11: ;
    cpy_r_r18 = CPyStatics[7389]; /* 'nan' */
    cpy_r_r19 = PyUnicode_Compare(cpy_r_s, cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 == -1;
    if (!cpy_r_r20) goto CPyL14;
    cpy_r_r21 = PyErr_Occurred();
    cpy_r_r22 = cpy_r_r21 != NULL;
    if (!cpy_r_r22) goto CPyL14;
    cpy_r_r23 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "float_to_c", 268, CPyStatic_codegen___literals___globals);
        goto CPyL18;
    }
CPyL14: ;
    cpy_r_r24 = cpy_r_r19 == 0;
    if (cpy_r_r24) {
        goto CPyL21;
    } else
        goto CPyL16;
CPyL15: ;
    cpy_r_r25 = CPyStatics[7390]; /* 'NAN' */
    CPy_INCREF(cpy_r_r25);
    return cpy_r_r25;
CPyL16: ;
    return cpy_r_s;
CPyL17: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL18: ;
    CPy_DecRef(cpy_r_s);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL5;
CPyL20: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL10;
CPyL21: ;
    CPy_DECREF(cpy_r_s);
    goto CPyL15;
}

PyObject *CPyPy_codegen___literals___float_to_c(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"x", 0};
    static CPyArg_Parser parser = {"O:float_to_c", kwlist, 0};
    PyObject *obj_x;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_x)) {
        return NULL;
    }
    double arg_x;
    arg_x = PyFloat_AsDouble(obj_x);
    if (arg_x == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", obj_x); goto fail;
    }
    PyObject *retval = CPyDef_codegen___literals___float_to_c(arg_x);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "float_to_c", 261, CPyStatic_codegen___literals___globals);
    return NULL;
}

PyObject *CPyDef_codegen___literals____encode_float_values(PyObject *cpy_r_values) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T4CIOO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    double cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    double cpy_r_value;
    CPyTagged cpy_r_index;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_value_by_index;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_result;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_num;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r27;
    char cpy_r_r28;
    int64_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    double cpy_r_r37;
    char cpy_r_r38;
    double cpy_r_value_2;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_float_values", 278, CPyStatic_codegen___literals___globals);
        goto CPyL24;
    }
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_values);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetItemsIter(cpy_r_values);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_float_values", 278, CPyStatic_codegen___literals___globals);
        goto CPyL25;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextItem(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL26;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = cpy_r_r5.f3;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    cpy_r_r10 = PyFloat_AsDouble(cpy_r_r8);
    if (cpy_r_r10 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r8); cpy_r_r10 = -113.0;
    }
    CPy_DECREF(cpy_r_r8);
    cpy_r_r11 = cpy_r_r10 == -113.0;
    if (unlikely(cpy_r_r11)) goto CPyL5;
CPyL4: ;
    if (likely(PyLong_Check(cpy_r_r9)))
        cpy_r_r12 = CPyTagged_FromObject(cpy_r_r9);
    else {
        CPy_TypeError("int", cpy_r_r9); cpy_r_r12 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_float_values", 278, CPyStatic_codegen___literals___globals);
        goto CPyL27;
    } else
        goto CPyL6;
CPyL5: ;
    cpy_r_r13 = PyErr_Occurred();
    if (unlikely(cpy_r_r13 != NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_float_values", 278, CPyStatic_codegen___literals___globals);
        goto CPyL28;
    } else
        goto CPyL4;
CPyL6: ;
    cpy_r_value = cpy_r_r10;
    cpy_r_index = cpy_r_r12;
    cpy_r_r14 = CPyTagged_StealAsObject(cpy_r_index);
    cpy_r_r15 = PyFloat_FromDouble(cpy_r_value);
    cpy_r_r16 = CPyDict_SetItem(cpy_r_r0, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_float_values", 278, CPyStatic_codegen___literals___globals);
        goto CPyL27;
    }
    cpy_r_r18 = CPyDict_CheckSize(cpy_r_values, cpy_r_r3);
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_float_values", 278, CPyStatic_codegen___literals___globals);
        goto CPyL27;
    } else
        goto CPyL2;
CPyL8: ;
    cpy_r_r19 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_float_values", 278, CPyStatic_codegen___literals___globals);
        goto CPyL25;
    }
    cpy_r_value_by_index = cpy_r_r0;
    cpy_r_r20 = PyList_New(0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_float_values", 279, CPyStatic_codegen___literals___globals);
        goto CPyL29;
    }
    cpy_r_result = cpy_r_r20;
    cpy_r_r21 = PyDict_Size(cpy_r_values);
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_num = cpy_r_r22;
    cpy_r_r23 = CPyTagged_Str(cpy_r_num);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_float_values", 281, CPyStatic_codegen___literals___globals);
        goto CPyL30;
    }
    cpy_r_r24 = PyList_Append(cpy_r_result, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_float_values", 281, CPyStatic_codegen___literals___globals);
        goto CPyL30;
    }
    cpy_r_r26 = 0;
    CPyTagged_INCREF(cpy_r_r26);
    cpy_r_i = cpy_r_r26;
CPyL13: ;
    cpy_r_r27 = cpy_r_r26 & 1;
    cpy_r_r28 = cpy_r_r27 == 0;
    cpy_r_r29 = cpy_r_num & 1;
    cpy_r_r30 = cpy_r_r29 == 0;
    cpy_r_r31 = cpy_r_r28 & cpy_r_r30;
    if (!cpy_r_r31) goto CPyL15;
    cpy_r_r32 = (Py_ssize_t)cpy_r_r26 < (Py_ssize_t)cpy_r_num;
    cpy_r_r33 = cpy_r_r32;
    goto CPyL16;
CPyL15: ;
    cpy_r_r34 = CPyTagged_IsLt_(cpy_r_r26, cpy_r_num);
    cpy_r_r33 = cpy_r_r34;
CPyL16: ;
    if (!cpy_r_r33) goto CPyL31;
    cpy_r_r35 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r36 = CPyDict_GetItem(cpy_r_value_by_index, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_float_values", 283, CPyStatic_codegen___literals___globals);
        goto CPyL32;
    }
    cpy_r_r37 = PyFloat_AsDouble(cpy_r_r36);
    if (cpy_r_r37 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r36); cpy_r_r37 = -113.0;
    }
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 == -113.0;
    if (unlikely(cpy_r_r38)) goto CPyL20;
CPyL19: ;
    cpy_r_value_2 = cpy_r_r37;
    cpy_r_r39 = CPyDef_codegen___literals___float_to_c(cpy_r_value_2);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_float_values", 284, CPyStatic_codegen___literals___globals);
        goto CPyL32;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r40 = PyErr_Occurred();
    if (unlikely(cpy_r_r40 != NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_float_values", 283, CPyStatic_codegen___literals___globals);
        goto CPyL32;
    } else
        goto CPyL19;
CPyL21: ;
    cpy_r_r41 = PyList_Append(cpy_r_result, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_float_values", 284, CPyStatic_codegen___literals___globals);
        goto CPyL32;
    }
    cpy_r_r43 = CPyTagged_Add(cpy_r_r26, 2);
    CPyTagged_DECREF(cpy_r_r26);
    CPyTagged_INCREF(cpy_r_r43);
    cpy_r_r26 = cpy_r_r43;
    cpy_r_i = cpy_r_r43;
    goto CPyL13;
CPyL23: ;
    return cpy_r_result;
CPyL24: ;
    cpy_r_r44 = NULL;
    return cpy_r_r44;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL24;
CPyL26: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    goto CPyL8;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r9);
    goto CPyL24;
CPyL29: ;
    CPy_DecRef(cpy_r_value_by_index);
    goto CPyL24;
CPyL30: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_num);
    goto CPyL24;
CPyL31: ;
    CPy_DECREF(cpy_r_value_by_index);
    CPyTagged_DECREF(cpy_r_num);
    CPyTagged_DECREF(cpy_r_r26);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL23;
CPyL32: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_num);
    CPyTagged_DecRef(cpy_r_r26);
    goto CPyL24;
}

PyObject *CPyPy_codegen___literals____encode_float_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"values", 0};
    static CPyArg_Parser parser = {"O:_encode_float_values", kwlist, 0};
    PyObject *obj_values;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_values)) {
        return NULL;
    }
    PyObject *arg_values;
    if (likely(PyDict_Check(obj_values)))
        arg_values = obj_values;
    else {
        CPy_TypeError("dict", obj_values); 
        goto fail;
    }
    PyObject *retval = CPyDef_codegen___literals____encode_float_values(arg_values);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_float_values", 273, CPyStatic_codegen___literals___globals);
    return NULL;
}

PyObject *CPyDef_codegen___literals____encode_complex_values(PyObject *cpy_r_values) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    tuple_T4CIOO cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_value;
    CPyTagged cpy_r_index;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_value_by_index;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_result;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_num;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r23;
    char cpy_r_r24;
    int64_t cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_value_2;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    double cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    double cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 294, CPyStatic_codegen___literals___globals);
        goto CPyL28;
    }
    cpy_r_r1 = 0;
    cpy_r_r2 = PyDict_Size(cpy_r_values);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyDict_GetItemsIter(cpy_r_values);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 294, CPyStatic_codegen___literals___globals);
        goto CPyL29;
    }
CPyL2: ;
    cpy_r_r5 = CPyDict_NextItem(cpy_r_r4, cpy_r_r1);
    cpy_r_r6 = cpy_r_r5.f1;
    cpy_r_r1 = cpy_r_r6;
    cpy_r_r7 = cpy_r_r5.f0;
    if (!cpy_r_r7) goto CPyL30;
    cpy_r_r8 = cpy_r_r5.f2;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = cpy_r_r5.f3;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    if (likely(PyLong_Check(cpy_r_r9)))
        cpy_r_r10 = CPyTagged_FromObject(cpy_r_r9);
    else {
        CPy_TypeError("int", cpy_r_r9); cpy_r_r10 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 294, CPyStatic_codegen___literals___globals);
        goto CPyL31;
    }
    cpy_r_value = cpy_r_r8;
    cpy_r_index = cpy_r_r10;
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_index);
    cpy_r_r12 = CPyDict_SetItem(cpy_r_r0, cpy_r_r11, cpy_r_value);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_value);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 294, CPyStatic_codegen___literals___globals);
        goto CPyL32;
    }
    cpy_r_r14 = CPyDict_CheckSize(cpy_r_values, cpy_r_r3);
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 294, CPyStatic_codegen___literals___globals);
        goto CPyL32;
    } else
        goto CPyL2;
CPyL6: ;
    cpy_r_r15 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 294, CPyStatic_codegen___literals___globals);
        goto CPyL29;
    }
    cpy_r_value_by_index = cpy_r_r0;
    cpy_r_r16 = PyList_New(0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 295, CPyStatic_codegen___literals___globals);
        goto CPyL33;
    }
    cpy_r_result = cpy_r_r16;
    cpy_r_r17 = PyDict_Size(cpy_r_values);
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_num = cpy_r_r18;
    cpy_r_r19 = CPyTagged_Str(cpy_r_num);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 297, CPyStatic_codegen___literals___globals);
        goto CPyL34;
    }
    cpy_r_r20 = PyList_Append(cpy_r_result, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 297, CPyStatic_codegen___literals___globals);
        goto CPyL34;
    }
    cpy_r_r22 = 0;
    CPyTagged_INCREF(cpy_r_r22);
    cpy_r_i = cpy_r_r22;
CPyL11: ;
    cpy_r_r23 = cpy_r_r22 & 1;
    cpy_r_r24 = cpy_r_r23 == 0;
    cpy_r_r25 = cpy_r_num & 1;
    cpy_r_r26 = cpy_r_r25 == 0;
    cpy_r_r27 = cpy_r_r24 & cpy_r_r26;
    if (!cpy_r_r27) goto CPyL13;
    cpy_r_r28 = (Py_ssize_t)cpy_r_r22 < (Py_ssize_t)cpy_r_num;
    cpy_r_r29 = cpy_r_r28;
    goto CPyL14;
CPyL13: ;
    cpy_r_r30 = CPyTagged_IsLt_(cpy_r_r22, cpy_r_num);
    cpy_r_r29 = cpy_r_r30;
CPyL14: ;
    if (!cpy_r_r29) goto CPyL35;
    cpy_r_r31 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r32 = CPyDict_GetItem(cpy_r_value_by_index, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 299, CPyStatic_codegen___literals___globals);
        goto CPyL36;
    }
    cpy_r_value_2 = cpy_r_r32;
    cpy_r_r33 = CPyStatics[7692]; /* 'real' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_value_2, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 300, CPyStatic_codegen___literals___globals);
        goto CPyL37;
    }
    cpy_r_r35 = PyFloat_AsDouble(cpy_r_r34);
    if (cpy_r_r35 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r34); cpy_r_r35 = -113.0;
    }
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 == -113.0;
    if (unlikely(cpy_r_r36)) goto CPyL19;
CPyL18: ;
    cpy_r_r37 = CPyDef_codegen___literals___float_to_c(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 300, CPyStatic_codegen___literals___globals);
        goto CPyL37;
    } else
        goto CPyL20;
CPyL19: ;
    cpy_r_r38 = PyErr_Occurred();
    if (unlikely(cpy_r_r38 != NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 300, CPyStatic_codegen___literals___globals);
        goto CPyL37;
    } else
        goto CPyL18;
CPyL20: ;
    cpy_r_r39 = PyList_Append(cpy_r_result, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 300, CPyStatic_codegen___literals___globals);
        goto CPyL37;
    }
    cpy_r_r41 = CPyStatics[7693]; /* 'imag' */
    cpy_r_r42 = CPyObject_GetAttr(cpy_r_value_2, cpy_r_r41);
    CPy_DECREF(cpy_r_value_2);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 301, CPyStatic_codegen___literals___globals);
        goto CPyL36;
    }
    cpy_r_r43 = PyFloat_AsDouble(cpy_r_r42);
    if (cpy_r_r43 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r42); cpy_r_r43 = -113.0;
    }
    CPy_DECREF(cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 == -113.0;
    if (unlikely(cpy_r_r44)) goto CPyL24;
CPyL23: ;
    cpy_r_r45 = CPyDef_codegen___literals___float_to_c(cpy_r_r43);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 301, CPyStatic_codegen___literals___globals);
        goto CPyL36;
    } else
        goto CPyL25;
CPyL24: ;
    cpy_r_r46 = PyErr_Occurred();
    if (unlikely(cpy_r_r46 != NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 301, CPyStatic_codegen___literals___globals);
        goto CPyL36;
    } else
        goto CPyL23;
CPyL25: ;
    cpy_r_r47 = PyList_Append(cpy_r_result, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 301, CPyStatic_codegen___literals___globals);
        goto CPyL36;
    }
    cpy_r_r49 = CPyTagged_Add(cpy_r_r22, 2);
    CPyTagged_DECREF(cpy_r_r22);
    CPyTagged_INCREF(cpy_r_r49);
    cpy_r_r22 = cpy_r_r49;
    cpy_r_i = cpy_r_r49;
    goto CPyL11;
CPyL27: ;
    return cpy_r_result;
CPyL28: ;
    cpy_r_r50 = NULL;
    return cpy_r_r50;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL28;
CPyL30: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5.f2);
    CPy_DECREF(cpy_r_r5.f3);
    goto CPyL6;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r8);
    goto CPyL28;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL28;
CPyL33: ;
    CPy_DecRef(cpy_r_value_by_index);
    goto CPyL28;
CPyL34: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_num);
    goto CPyL28;
CPyL35: ;
    CPy_DECREF(cpy_r_value_by_index);
    CPyTagged_DECREF(cpy_r_num);
    CPyTagged_DECREF(cpy_r_r22);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL27;
CPyL36: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_num);
    CPyTagged_DecRef(cpy_r_r22);
    goto CPyL28;
CPyL37: ;
    CPy_DecRef(cpy_r_value_by_index);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_num);
    CPyTagged_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_value_2);
    goto CPyL28;
}

PyObject *CPyPy_codegen___literals____encode_complex_values(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"values", 0};
    static CPyArg_Parser parser = {"O:_encode_complex_values", kwlist, 0};
    PyObject *obj_values;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_values)) {
        return NULL;
    }
    PyObject *arg_values;
    if (likely(PyDict_Check(obj_values)))
        arg_values = obj_values;
    else {
        CPy_TypeError("dict", obj_values); 
        goto fail;
    }
    PyObject *retval = CPyDef_codegen___literals____encode_complex_values(arg_values);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/literals.py", "_encode_complex_values", 288, CPyStatic_codegen___literals___globals);
    return NULL;
}

char CPyDef_codegen___literals_____top_level__(void) {
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
    tuple_T2OO cpy_r_r35;
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
    tuple_T9OOOOOOOOO cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", -1, CPyStatic_codegen___literals___globals);
        goto CPyL23;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_codegen___literals___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 1, CPyStatic_codegen___literals___globals);
        goto CPyL23;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9997]; /* ('Final', 'FrozenSet', 'Tuple', 'Union') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_codegen___literals___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 3, CPyStatic_codegen___literals___globals);
        goto CPyL23;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9998]; /* ('TypeGuard',) */
    cpy_r_r14 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r15 = CPyStatic_codegen___literals___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 4, CPyStatic_codegen___literals___globals);
        goto CPyL23;
    }
    CPyModule_typing_extensions = cpy_r_r16;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatic_codegen___literals___globals;
    cpy_r_r18 = CPyStatics[84]; /* 'Union' */
    cpy_r_r19 = CPyDict_GetItem(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 8, CPyStatic_codegen___literals___globals);
        goto CPyL23;
    }
    cpy_r_r20 = (PyObject *)&PyUnicode_Type;
    cpy_r_r21 = (PyObject *)&PyBytes_Type;
    cpy_r_r22 = (PyObject *)&PyLong_Type;
    cpy_r_r23 = (PyObject *)&PyBool_Type;
    cpy_r_r24 = (PyObject *)&PyFloat_Type;
    cpy_r_r25 = CPyModule_builtins;
    cpy_r_r26 = CPyStatics[1593]; /* 'complex' */
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 9, CPyStatic_codegen___literals___globals);
        goto CPyL24;
    }
    cpy_r_r28 = CPyStatic_codegen___literals___globals;
    cpy_r_r29 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r30 = CPyDict_GetItem(cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 9, CPyStatic_codegen___literals___globals);
        goto CPyL25;
    }
    cpy_r_r31 = CPyModule_builtins;
    cpy_r_r32 = CPyStatics[2314]; /* 'object' */
    cpy_r_r33 = CPyObject_GetAttr(cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 9, CPyStatic_codegen___literals___globals);
        goto CPyL26;
    }
    cpy_r_r34 = (PyObject *)&_Py_EllipsisObject;
    cpy_r_r35.f0 = cpy_r_r33;
    cpy_r_r35.f1 = cpy_r_r34;
    CPy_INCREF(cpy_r_r35.f0);
    CPy_INCREF(cpy_r_r35.f1);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r36 = PyTuple_New(2);
    if (unlikely(cpy_r_r36 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9715 = cpy_r_r35.f0;
    PyTuple_SET_ITEM(cpy_r_r36, 0, __tmp9715);
    PyObject *__tmp9716 = cpy_r_r35.f1;
    PyTuple_SET_ITEM(cpy_r_r36, 1, __tmp9716);
    cpy_r_r37 = PyObject_GetItem(cpy_r_r30, cpy_r_r36);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 9, CPyStatic_codegen___literals___globals);
        goto CPyL25;
    }
    cpy_r_r38 = CPyStatic_codegen___literals___globals;
    cpy_r_r39 = CPyStatics[7694]; /* 'FrozenSet' */
    cpy_r_r40 = CPyDict_GetItem(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 9, CPyStatic_codegen___literals___globals);
        goto CPyL27;
    }
    cpy_r_r41 = CPyModule_builtins;
    cpy_r_r42 = CPyStatics[2314]; /* 'object' */
    cpy_r_r43 = CPyObject_GetAttr(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 9, CPyStatic_codegen___literals___globals);
        goto CPyL28;
    }
    cpy_r_r44 = PyObject_GetItem(cpy_r_r40, cpy_r_r43);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 9, CPyStatic_codegen___literals___globals);
        goto CPyL27;
    }
    cpy_r_r45 = Py_None;
    cpy_r_r46.f0 = cpy_r_r20;
    cpy_r_r46.f1 = cpy_r_r21;
    cpy_r_r46.f2 = cpy_r_r22;
    cpy_r_r46.f3 = cpy_r_r23;
    cpy_r_r46.f4 = cpy_r_r24;
    cpy_r_r46.f5 = cpy_r_r27;
    cpy_r_r46.f6 = cpy_r_r37;
    cpy_r_r46.f7 = cpy_r_r44;
    cpy_r_r46.f8 = cpy_r_r45;
    CPy_INCREF(cpy_r_r46.f0);
    CPy_INCREF(cpy_r_r46.f1);
    CPy_INCREF(cpy_r_r46.f2);
    CPy_INCREF(cpy_r_r46.f3);
    CPy_INCREF(cpy_r_r46.f4);
    CPy_INCREF(cpy_r_r46.f5);
    CPy_INCREF(cpy_r_r46.f6);
    CPy_INCREF(cpy_r_r46.f7);
    CPy_INCREF(cpy_r_r46.f8);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r47 = PyTuple_New(9);
    if (unlikely(cpy_r_r47 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9717 = cpy_r_r46.f0;
    PyTuple_SET_ITEM(cpy_r_r47, 0, __tmp9717);
    PyObject *__tmp9718 = cpy_r_r46.f1;
    PyTuple_SET_ITEM(cpy_r_r47, 1, __tmp9718);
    PyObject *__tmp9719 = cpy_r_r46.f2;
    PyTuple_SET_ITEM(cpy_r_r47, 2, __tmp9719);
    PyObject *__tmp9720 = cpy_r_r46.f3;
    PyTuple_SET_ITEM(cpy_r_r47, 3, __tmp9720);
    PyObject *__tmp9721 = cpy_r_r46.f4;
    PyTuple_SET_ITEM(cpy_r_r47, 4, __tmp9721);
    PyObject *__tmp9722 = cpy_r_r46.f5;
    PyTuple_SET_ITEM(cpy_r_r47, 5, __tmp9722);
    PyObject *__tmp9723 = cpy_r_r46.f6;
    PyTuple_SET_ITEM(cpy_r_r47, 6, __tmp9723);
    PyObject *__tmp9724 = cpy_r_r46.f7;
    PyTuple_SET_ITEM(cpy_r_r47, 7, __tmp9724);
    PyObject *__tmp9725 = cpy_r_r46.f8;
    PyTuple_SET_ITEM(cpy_r_r47, 8, __tmp9725);
    cpy_r_r48 = PyObject_GetItem(cpy_r_r19, cpy_r_r47);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 8, CPyStatic_codegen___literals___globals);
        goto CPyL23;
    }
    cpy_r_r49 = CPyStatic_codegen___literals___globals;
    cpy_r_r50 = CPyStatics[1275]; /* 'LiteralValue' */
    cpy_r_r51 = CPyDict_SetItem(cpy_r_r49, cpy_r_r50, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 8, CPyStatic_codegen___literals___globals);
        goto CPyL23;
    }
    cpy_r_r53 = CPyStatic_codegen___literals___globals;
    cpy_r_r54 = CPyStatics[7695]; /* 'NUM_SINGLETONS' */
    cpy_r_r55 = CPyStatics[9026]; /* 3 */
    cpy_r_r56 = CPyDict_SetItem(cpy_r_r53, cpy_r_r54, cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 18, CPyStatic_codegen___literals___globals);
        goto CPyL23;
    }
    cpy_r_r58 = NULL;
    cpy_r_r59 = CPyStatics[7012]; /* 'mypyc.codegen.literals' */
    cpy_r_r60 = (PyObject *)CPyType_codegen___literals___Literals_template;
    cpy_r_r61 = CPyType_FromTemplate(cpy_r_r60, cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 21, CPyStatic_codegen___literals___globals);
        goto CPyL23;
    }
    cpy_r_r62 = CPyDef_codegen___literals___Literals_trait_vtable_setup();
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", -1, CPyStatic_codegen___literals___globals);
        goto CPyL29;
    }
    cpy_r_r63 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r64 = CPyStatics[7696]; /* 'str_literals' */
    cpy_r_r65 = CPyStatics[7697]; /* 'bytes_literals' */
    cpy_r_r66 = CPyStatics[7698]; /* 'int_literals' */
    cpy_r_r67 = CPyStatics[7699]; /* 'float_literals' */
    cpy_r_r68 = CPyStatics[7700]; /* 'complex_literals' */
    cpy_r_r69 = CPyStatics[7701]; /* 'tuple_literals' */
    cpy_r_r70 = CPyStatics[7702]; /* 'frozenset_literals' */
    cpy_r_r71 = PyTuple_Pack(7, cpy_r_r64, cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_r68, cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 21, CPyStatic_codegen___literals___globals);
        goto CPyL29;
    }
    cpy_r_r72 = PyObject_SetAttr(cpy_r_r61, cpy_r_r63, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 21, CPyStatic_codegen___literals___globals);
        goto CPyL29;
    }
    CPyType_codegen___literals___Literals = (PyTypeObject *)cpy_r_r61;
    CPy_INCREF(CPyType_codegen___literals___Literals);
    cpy_r_r74 = CPyStatic_codegen___literals___globals;
    cpy_r_r75 = CPyStatics[7011]; /* 'Literals' */
    cpy_r_r76 = CPyDict_SetItem(cpy_r_r74, cpy_r_r75, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypyc/codegen/literals.py", "<module>", 21, CPyStatic_codegen___literals___globals);
        goto CPyL23;
    }
    return 1;
CPyL23: ;
    cpy_r_r78 = 2;
    return cpy_r_r78;
CPyL24: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r27);
    goto CPyL23;
CPyL26: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r30);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r37);
    goto CPyL23;
CPyL28: ;
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r27);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r40);
    goto CPyL23;
CPyL29: ;
    CPy_DecRef(cpy_r_r61);
    goto CPyL23;
}
