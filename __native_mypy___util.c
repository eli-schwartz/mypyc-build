#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

PyMemberDef mypy___util___DecodeError_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef mypy___util___DecodeError_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef mypy___util___DecodeError_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___util___DecodeError_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "DecodeError",
    .tp_getset = mypy___util___DecodeError_getseters,
    .tp_methods = mypy___util___DecodeError_methods,
    .tp_members = mypy___util___DecodeError_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyBaseExceptionObject),
    .tp_weaklistoffset = sizeof(PyBaseExceptionObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_mypy___util___DecodeError_template = &CPyType_mypy___util___DecodeError_template_;


static int
mypy___util___IdMapper_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *mypy___util___IdMapper_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___util___IdMapper(void);

static PyObject *
mypy___util___IdMapper_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___util___IdMapper) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = mypy___util___IdMapper_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_mypy___util___IdMapper_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
mypy___util___IdMapper_traverse(mypy___util___IdMapperObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_id_map);
    if (CPyTagged_CheckLong(self->_next_id)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_next_id));
    }
    return 0;
}

static int
mypy___util___IdMapper_clear(mypy___util___IdMapperObject *self)
{
    Py_CLEAR(self->_id_map);
    if (CPyTagged_CheckLong(self->_next_id)) {
        CPyTagged __tmp = self->_next_id;
        self->_next_id = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
mypy___util___IdMapper_dealloc(mypy___util___IdMapperObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___util___IdMapper_dealloc)
    mypy___util___IdMapper_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___util___IdMapper_vtable[2];
static bool
CPyDef_mypy___util___IdMapper_trait_vtable_setup(void)
{
    CPyVTableItem mypy___util___IdMapper_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___util___IdMapper_____init__,
        (CPyVTableItem)CPyDef_mypy___util___IdMapper___id,
    };
    memcpy(mypy___util___IdMapper_vtable, mypy___util___IdMapper_vtable_scratch, sizeof(mypy___util___IdMapper_vtable));
    return 1;
}

static PyObject *
mypy___util___IdMapper_get_id_map(mypy___util___IdMapperObject *self, void *closure);
static int
mypy___util___IdMapper_set_id_map(mypy___util___IdMapperObject *self, PyObject *value, void *closure);
static PyObject *
mypy___util___IdMapper_get_next_id(mypy___util___IdMapperObject *self, void *closure);
static int
mypy___util___IdMapper_set_next_id(mypy___util___IdMapperObject *self, PyObject *value, void *closure);

static PyGetSetDef mypy___util___IdMapper_getseters[] = {
    {"id_map",
     (getter)mypy___util___IdMapper_get_id_map, (setter)mypy___util___IdMapper_set_id_map,
     NULL, NULL},
    {"next_id",
     (getter)mypy___util___IdMapper_get_next_id, (setter)mypy___util___IdMapper_set_next_id,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef mypy___util___IdMapper_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_mypy___util___IdMapper_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"id",
     (PyCFunction)CPyPy_mypy___util___IdMapper___id,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___util___IdMapper_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "IdMapper",
    .tp_new = mypy___util___IdMapper_new,
    .tp_dealloc = (destructor)mypy___util___IdMapper_dealloc,
    .tp_traverse = (traverseproc)mypy___util___IdMapper_traverse,
    .tp_clear = (inquiry)mypy___util___IdMapper_clear,
    .tp_getset = mypy___util___IdMapper_getseters,
    .tp_methods = mypy___util___IdMapper_methods,
    .tp_init = mypy___util___IdMapper_init,
    .tp_basicsize = sizeof(mypy___util___IdMapperObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypy___util___IdMapper_template = &CPyType_mypy___util___IdMapper_template_;

static PyObject *
mypy___util___IdMapper_setup(PyTypeObject *type)
{
    mypy___util___IdMapperObject *self;
    self = (mypy___util___IdMapperObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___util___IdMapper_vtable;
    self->_next_id = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___util___IdMapper(void)
{
    PyObject *self = mypy___util___IdMapper_setup(CPyType_mypy___util___IdMapper);
    if (self == NULL)
        return NULL;
    char res = CPyDef_mypy___util___IdMapper_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
mypy___util___IdMapper_get_id_map(mypy___util___IdMapperObject *self, void *closure)
{
    if (unlikely(self->_id_map == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'id_map' of 'IdMapper' undefined");
        return NULL;
    }
    CPy_INCREF(self->_id_map);
    PyObject *retval = self->_id_map;
    return retval;
}

static int
mypy___util___IdMapper_set_id_map(mypy___util___IdMapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IdMapper' object attribute 'id_map' cannot be deleted");
        return -1;
    }
    if (self->_id_map != NULL) {
        CPy_DECREF(self->_id_map);
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
    self->_id_map = tmp;
    return 0;
}

static PyObject *
mypy___util___IdMapper_get_next_id(mypy___util___IdMapperObject *self, void *closure)
{
    if (unlikely(self->_next_id == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'next_id' of 'IdMapper' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_next_id);
    PyObject *retval = CPyTagged_StealAsObject(self->_next_id);
    return retval;
}

static int
mypy___util___IdMapper_set_next_id(mypy___util___IdMapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'IdMapper' object attribute 'next_id' cannot be deleted");
        return -1;
    }
    if (self->_next_id != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_next_id);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_next_id = tmp;
    return 0;
}

static int
mypy___util___FancyFormatter_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *mypy___util___FancyFormatter_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___util___FancyFormatter(PyObject *cpy_r_f_out, PyObject *cpy_r_f_err, char cpy_r_hide_error_codes);

static PyObject *
mypy___util___FancyFormatter_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___util___FancyFormatter) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = mypy___util___FancyFormatter_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_mypy___util___FancyFormatter_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
mypy___util___FancyFormatter_traverse(mypy___util___FancyFormatterObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_colors);
    Py_VISIT(self->_BOLD);
    Py_VISIT(self->_UNDER);
    Py_VISIT(self->_BLUE);
    Py_VISIT(self->_GREEN);
    Py_VISIT(self->_RED);
    Py_VISIT(self->_YELLOW);
    Py_VISIT(self->_NORMAL);
    Py_VISIT(self->_DIM);
    return 0;
}

static int
mypy___util___FancyFormatter_clear(mypy___util___FancyFormatterObject *self)
{
    Py_CLEAR(self->_colors);
    Py_CLEAR(self->_BOLD);
    Py_CLEAR(self->_UNDER);
    Py_CLEAR(self->_BLUE);
    Py_CLEAR(self->_GREEN);
    Py_CLEAR(self->_RED);
    Py_CLEAR(self->_YELLOW);
    Py_CLEAR(self->_NORMAL);
    Py_CLEAR(self->_DIM);
    return 0;
}

static void
mypy___util___FancyFormatter_dealloc(mypy___util___FancyFormatterObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___util___FancyFormatter_dealloc)
    mypy___util___FancyFormatter_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___util___FancyFormatter_vtable[11];
static bool
CPyDef_mypy___util___FancyFormatter_trait_vtable_setup(void)
{
    CPyVTableItem mypy___util___FancyFormatter_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___util___FancyFormatter_____init__,
        (CPyVTableItem)CPyDef_mypy___util___FancyFormatter___initialize_vt100_colors,
        (CPyVTableItem)CPyDef_mypy___util___FancyFormatter___initialize_win_colors,
        (CPyVTableItem)CPyDef_mypy___util___FancyFormatter___initialize_unix_colors,
        (CPyVTableItem)CPyDef_mypy___util___FancyFormatter___style,
        (CPyVTableItem)CPyDef_mypy___util___FancyFormatter___fit_in_terminal,
        (CPyVTableItem)CPyDef_mypy___util___FancyFormatter___colorize,
        (CPyVTableItem)CPyDef_mypy___util___FancyFormatter___highlight_quote_groups,
        (CPyVTableItem)CPyDef_mypy___util___FancyFormatter___underline_link,
        (CPyVTableItem)CPyDef_mypy___util___FancyFormatter___format_success,
        (CPyVTableItem)CPyDef_mypy___util___FancyFormatter___format_error,
    };
    memcpy(mypy___util___FancyFormatter_vtable, mypy___util___FancyFormatter_vtable_scratch, sizeof(mypy___util___FancyFormatter_vtable));
    return 1;
}

static PyObject *
mypy___util___FancyFormatter_get_hide_error_codes(mypy___util___FancyFormatterObject *self, void *closure);
static int
mypy___util___FancyFormatter_set_hide_error_codes(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure);
static PyObject *
mypy___util___FancyFormatter_get_dummy_term(mypy___util___FancyFormatterObject *self, void *closure);
static int
mypy___util___FancyFormatter_set_dummy_term(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure);
static PyObject *
mypy___util___FancyFormatter_get_colors(mypy___util___FancyFormatterObject *self, void *closure);
static int
mypy___util___FancyFormatter_set_colors(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure);
static PyObject *
mypy___util___FancyFormatter_get_BOLD(mypy___util___FancyFormatterObject *self, void *closure);
static int
mypy___util___FancyFormatter_set_BOLD(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure);
static PyObject *
mypy___util___FancyFormatter_get_UNDER(mypy___util___FancyFormatterObject *self, void *closure);
static int
mypy___util___FancyFormatter_set_UNDER(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure);
static PyObject *
mypy___util___FancyFormatter_get_BLUE(mypy___util___FancyFormatterObject *self, void *closure);
static int
mypy___util___FancyFormatter_set_BLUE(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure);
static PyObject *
mypy___util___FancyFormatter_get_GREEN(mypy___util___FancyFormatterObject *self, void *closure);
static int
mypy___util___FancyFormatter_set_GREEN(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure);
static PyObject *
mypy___util___FancyFormatter_get_RED(mypy___util___FancyFormatterObject *self, void *closure);
static int
mypy___util___FancyFormatter_set_RED(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure);
static PyObject *
mypy___util___FancyFormatter_get_YELLOW(mypy___util___FancyFormatterObject *self, void *closure);
static int
mypy___util___FancyFormatter_set_YELLOW(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure);
static PyObject *
mypy___util___FancyFormatter_get_NORMAL(mypy___util___FancyFormatterObject *self, void *closure);
static int
mypy___util___FancyFormatter_set_NORMAL(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure);
static PyObject *
mypy___util___FancyFormatter_get_DIM(mypy___util___FancyFormatterObject *self, void *closure);
static int
mypy___util___FancyFormatter_set_DIM(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure);

static PyGetSetDef mypy___util___FancyFormatter_getseters[] = {
    {"hide_error_codes",
     (getter)mypy___util___FancyFormatter_get_hide_error_codes, (setter)mypy___util___FancyFormatter_set_hide_error_codes,
     NULL, NULL},
    {"dummy_term",
     (getter)mypy___util___FancyFormatter_get_dummy_term, (setter)mypy___util___FancyFormatter_set_dummy_term,
     NULL, NULL},
    {"colors",
     (getter)mypy___util___FancyFormatter_get_colors, (setter)mypy___util___FancyFormatter_set_colors,
     NULL, NULL},
    {"BOLD",
     (getter)mypy___util___FancyFormatter_get_BOLD, (setter)mypy___util___FancyFormatter_set_BOLD,
     NULL, NULL},
    {"UNDER",
     (getter)mypy___util___FancyFormatter_get_UNDER, (setter)mypy___util___FancyFormatter_set_UNDER,
     NULL, NULL},
    {"BLUE",
     (getter)mypy___util___FancyFormatter_get_BLUE, (setter)mypy___util___FancyFormatter_set_BLUE,
     NULL, NULL},
    {"GREEN",
     (getter)mypy___util___FancyFormatter_get_GREEN, (setter)mypy___util___FancyFormatter_set_GREEN,
     NULL, NULL},
    {"RED",
     (getter)mypy___util___FancyFormatter_get_RED, (setter)mypy___util___FancyFormatter_set_RED,
     NULL, NULL},
    {"YELLOW",
     (getter)mypy___util___FancyFormatter_get_YELLOW, (setter)mypy___util___FancyFormatter_set_YELLOW,
     NULL, NULL},
    {"NORMAL",
     (getter)mypy___util___FancyFormatter_get_NORMAL, (setter)mypy___util___FancyFormatter_set_NORMAL,
     NULL, NULL},
    {"DIM",
     (getter)mypy___util___FancyFormatter_get_DIM, (setter)mypy___util___FancyFormatter_set_DIM,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef mypy___util___FancyFormatter_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_mypy___util___FancyFormatter_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"initialize_vt100_colors",
     (PyCFunction)CPyPy_mypy___util___FancyFormatter___initialize_vt100_colors,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"initialize_win_colors",
     (PyCFunction)CPyPy_mypy___util___FancyFormatter___initialize_win_colors,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"initialize_unix_colors",
     (PyCFunction)CPyPy_mypy___util___FancyFormatter___initialize_unix_colors,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"style",
     (PyCFunction)CPyPy_mypy___util___FancyFormatter___style,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"fit_in_terminal",
     (PyCFunction)CPyPy_mypy___util___FancyFormatter___fit_in_terminal,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"colorize",
     (PyCFunction)CPyPy_mypy___util___FancyFormatter___colorize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"highlight_quote_groups",
     (PyCFunction)CPyPy_mypy___util___FancyFormatter___highlight_quote_groups,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"underline_link",
     (PyCFunction)CPyPy_mypy___util___FancyFormatter___underline_link,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"format_success",
     (PyCFunction)CPyPy_mypy___util___FancyFormatter___format_success,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"format_error",
     (PyCFunction)CPyPy_mypy___util___FancyFormatter___format_error,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___util___FancyFormatter_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "FancyFormatter",
    .tp_new = mypy___util___FancyFormatter_new,
    .tp_dealloc = (destructor)mypy___util___FancyFormatter_dealloc,
    .tp_traverse = (traverseproc)mypy___util___FancyFormatter_traverse,
    .tp_clear = (inquiry)mypy___util___FancyFormatter_clear,
    .tp_getset = mypy___util___FancyFormatter_getseters,
    .tp_methods = mypy___util___FancyFormatter_methods,
    .tp_init = mypy___util___FancyFormatter_init,
    .tp_basicsize = sizeof(mypy___util___FancyFormatterObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypy___util___FancyFormatter_template = &CPyType_mypy___util___FancyFormatter_template_;

static PyObject *
mypy___util___FancyFormatter_setup(PyTypeObject *type)
{
    mypy___util___FancyFormatterObject *self;
    self = (mypy___util___FancyFormatterObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___util___FancyFormatter_vtable;
    self->_hide_error_codes = 2;
    self->_dummy_term = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___util___FancyFormatter(PyObject *cpy_r_f_out, PyObject *cpy_r_f_err, char cpy_r_hide_error_codes)
{
    PyObject *self = mypy___util___FancyFormatter_setup(CPyType_mypy___util___FancyFormatter);
    if (self == NULL)
        return NULL;
    char res = CPyDef_mypy___util___FancyFormatter_____init__(self, cpy_r_f_out, cpy_r_f_err, cpy_r_hide_error_codes);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
mypy___util___FancyFormatter_get_hide_error_codes(mypy___util___FancyFormatterObject *self, void *closure)
{
    PyObject *retval = self->_hide_error_codes ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___util___FancyFormatter_set_hide_error_codes(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FancyFormatter' object attribute 'hide_error_codes' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_hide_error_codes = tmp;
    return 0;
}

static PyObject *
mypy___util___FancyFormatter_get_dummy_term(mypy___util___FancyFormatterObject *self, void *closure)
{
    if (unlikely(self->_dummy_term == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'dummy_term' of 'FancyFormatter' undefined");
        return NULL;
    }
    PyObject *retval = self->_dummy_term ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___util___FancyFormatter_set_dummy_term(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FancyFormatter' object attribute 'dummy_term' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_dummy_term = tmp;
    return 0;
}

static PyObject *
mypy___util___FancyFormatter_get_colors(mypy___util___FancyFormatterObject *self, void *closure)
{
    if (unlikely(self->_colors == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'colors' of 'FancyFormatter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_colors);
    PyObject *retval = self->_colors;
    return retval;
}

static int
mypy___util___FancyFormatter_set_colors(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FancyFormatter' object attribute 'colors' cannot be deleted");
        return -1;
    }
    if (self->_colors != NULL) {
        CPy_DECREF(self->_colors);
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
    self->_colors = tmp;
    return 0;
}

static PyObject *
mypy___util___FancyFormatter_get_BOLD(mypy___util___FancyFormatterObject *self, void *closure)
{
    if (unlikely(self->_BOLD == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'BOLD' of 'FancyFormatter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_BOLD);
    PyObject *retval = self->_BOLD;
    return retval;
}

static int
mypy___util___FancyFormatter_set_BOLD(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FancyFormatter' object attribute 'BOLD' cannot be deleted");
        return -1;
    }
    if (self->_BOLD != NULL) {
        CPy_DECREF(self->_BOLD);
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
    self->_BOLD = tmp;
    return 0;
}

static PyObject *
mypy___util___FancyFormatter_get_UNDER(mypy___util___FancyFormatterObject *self, void *closure)
{
    if (unlikely(self->_UNDER == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'UNDER' of 'FancyFormatter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_UNDER);
    PyObject *retval = self->_UNDER;
    return retval;
}

static int
mypy___util___FancyFormatter_set_UNDER(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FancyFormatter' object attribute 'UNDER' cannot be deleted");
        return -1;
    }
    if (self->_UNDER != NULL) {
        CPy_DECREF(self->_UNDER);
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
    self->_UNDER = tmp;
    return 0;
}

static PyObject *
mypy___util___FancyFormatter_get_BLUE(mypy___util___FancyFormatterObject *self, void *closure)
{
    if (unlikely(self->_BLUE == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'BLUE' of 'FancyFormatter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_BLUE);
    PyObject *retval = self->_BLUE;
    return retval;
}

static int
mypy___util___FancyFormatter_set_BLUE(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FancyFormatter' object attribute 'BLUE' cannot be deleted");
        return -1;
    }
    if (self->_BLUE != NULL) {
        CPy_DECREF(self->_BLUE);
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
    self->_BLUE = tmp;
    return 0;
}

static PyObject *
mypy___util___FancyFormatter_get_GREEN(mypy___util___FancyFormatterObject *self, void *closure)
{
    if (unlikely(self->_GREEN == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'GREEN' of 'FancyFormatter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_GREEN);
    PyObject *retval = self->_GREEN;
    return retval;
}

static int
mypy___util___FancyFormatter_set_GREEN(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FancyFormatter' object attribute 'GREEN' cannot be deleted");
        return -1;
    }
    if (self->_GREEN != NULL) {
        CPy_DECREF(self->_GREEN);
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
    self->_GREEN = tmp;
    return 0;
}

static PyObject *
mypy___util___FancyFormatter_get_RED(mypy___util___FancyFormatterObject *self, void *closure)
{
    if (unlikely(self->_RED == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'RED' of 'FancyFormatter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_RED);
    PyObject *retval = self->_RED;
    return retval;
}

static int
mypy___util___FancyFormatter_set_RED(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FancyFormatter' object attribute 'RED' cannot be deleted");
        return -1;
    }
    if (self->_RED != NULL) {
        CPy_DECREF(self->_RED);
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
    self->_RED = tmp;
    return 0;
}

static PyObject *
mypy___util___FancyFormatter_get_YELLOW(mypy___util___FancyFormatterObject *self, void *closure)
{
    if (unlikely(self->_YELLOW == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'YELLOW' of 'FancyFormatter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_YELLOW);
    PyObject *retval = self->_YELLOW;
    return retval;
}

static int
mypy___util___FancyFormatter_set_YELLOW(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FancyFormatter' object attribute 'YELLOW' cannot be deleted");
        return -1;
    }
    if (self->_YELLOW != NULL) {
        CPy_DECREF(self->_YELLOW);
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
    self->_YELLOW = tmp;
    return 0;
}

static PyObject *
mypy___util___FancyFormatter_get_NORMAL(mypy___util___FancyFormatterObject *self, void *closure)
{
    if (unlikely(self->_NORMAL == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'NORMAL' of 'FancyFormatter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_NORMAL);
    PyObject *retval = self->_NORMAL;
    return retval;
}

static int
mypy___util___FancyFormatter_set_NORMAL(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FancyFormatter' object attribute 'NORMAL' cannot be deleted");
        return -1;
    }
    if (self->_NORMAL != NULL) {
        CPy_DECREF(self->_NORMAL);
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
    self->_NORMAL = tmp;
    return 0;
}

static PyObject *
mypy___util___FancyFormatter_get_DIM(mypy___util___FancyFormatterObject *self, void *closure)
{
    if (unlikely(self->_DIM == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'DIM' of 'FancyFormatter' undefined");
        return NULL;
    }
    CPy_INCREF(self->_DIM);
    PyObject *retval = self->_DIM;
    return retval;
}

static int
mypy___util___FancyFormatter_set_DIM(mypy___util___FancyFormatterObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'FancyFormatter' object attribute 'DIM' cannot be deleted");
        return -1;
    }
    if (self->_DIM != NULL) {
        CPy_DECREF(self->_DIM);
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
    self->_DIM = tmp;
    return 0;
}

static PyObject *mypy___util___get_class_descriptors_env_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___util___get_class_descriptors_env(void);

static PyObject *
mypy___util___get_class_descriptors_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___util___get_class_descriptors_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return mypy___util___get_class_descriptors_env_setup(type);
}

static int
mypy___util___get_class_descriptors_env_traverse(mypy___util___get_class_descriptors_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_cls);
    return 0;
}

static int
mypy___util___get_class_descriptors_env_clear(mypy___util___get_class_descriptors_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_cls);
    return 0;
}

static void
mypy___util___get_class_descriptors_env_dealloc(mypy___util___get_class_descriptors_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___util___get_class_descriptors_env_dealloc)
    mypy___util___get_class_descriptors_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___util___get_class_descriptors_env_vtable[1];
static bool
CPyDef_mypy___util___get_class_descriptors_env_trait_vtable_setup(void)
{
    CPyVTableItem mypy___util___get_class_descriptors_env_vtable_scratch[] = {
        NULL
    };
    memcpy(mypy___util___get_class_descriptors_env_vtable, mypy___util___get_class_descriptors_env_vtable_scratch, sizeof(mypy___util___get_class_descriptors_env_vtable));
    return 1;
}

static PyMethodDef mypy___util___get_class_descriptors_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___util___get_class_descriptors_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "get_class_descriptors_env",
    .tp_new = mypy___util___get_class_descriptors_env_new,
    .tp_dealloc = (destructor)mypy___util___get_class_descriptors_env_dealloc,
    .tp_traverse = (traverseproc)mypy___util___get_class_descriptors_env_traverse,
    .tp_clear = (inquiry)mypy___util___get_class_descriptors_env_clear,
    .tp_methods = mypy___util___get_class_descriptors_env_methods,
    .tp_basicsize = sizeof(mypy___util___get_class_descriptors_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypy___util___get_class_descriptors_env_template = &CPyType_mypy___util___get_class_descriptors_env_template_;

static PyObject *
mypy___util___get_class_descriptors_env_setup(PyTypeObject *type)
{
    mypy___util___get_class_descriptors_envObject *self;
    self = (mypy___util___get_class_descriptors_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___util___get_class_descriptors_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___util___get_class_descriptors_env(void)
{
    PyObject *self = mypy___util___get_class_descriptors_env_setup(CPyType_mypy___util___get_class_descriptors_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__mypy___util_____mypyc_lambda__0_get_class_descriptors_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_____get__(self, instance, owner);
}
PyMemberDef mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj(void);

static PyObject *
mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_setup(type);
}

static int
mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_traverse(mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject))));
    return 0;
}

static int
mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_clear(mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject))));
    return 0;
}

static void
mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_dealloc(mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_dealloc)
    mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_vtable[2];
static bool
CPyDef_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_trait_vtable_setup(void)
{
    CPyVTableItem mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_____call__,
        (CPyVTableItem)CPyDef_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_____get__,
    };
    memcpy(mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_vtable, mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_vtable_scratch, sizeof(mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_vtable));
    return 1;
}

static PyMethodDef mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_get_class_descriptors_obj",
    .tp_new = mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_new,
    .tp_dealloc = (destructor)mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_dealloc,
    .tp_traverse = (traverseproc)mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_traverse,
    .tp_clear = (inquiry)mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_clear,
    .tp_methods = mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__mypy___util_____mypyc_lambda__0_get_class_descriptors_obj,
    .tp_members = mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_members,
    .tp_basicsize = sizeof(mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject),
    .tp_weaklistoffset = sizeof(mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_template = &CPyType_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_template_;

static PyObject *
mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_setup(PyTypeObject *type)
{
    mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject *self;
    self = (mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_vtable;
    self->vectorcall = CPyPy_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj(void)
{
    PyObject *self = mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_setup(CPyType_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef mypy___utilmodule_methods[] = {
    {"is_dunder", (PyCFunction)CPyPy_mypy___util___is_dunder, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_sunder", (PyCFunction)CPyPy_mypy___util___is_sunder, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"split_module_names", (PyCFunction)CPyPy_mypy___util___split_module_names, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"module_prefix", (PyCFunction)CPyPy_mypy___util___module_prefix, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"split_target", (PyCFunction)CPyPy_mypy___util___split_target, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"short_type", (PyCFunction)CPyPy_mypy___util___short_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"find_python_encoding", (PyCFunction)CPyPy_mypy___util___find_python_encoding, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"bytes_to_human_readable_repr", (PyCFunction)CPyPy_mypy___util___bytes_to_human_readable_repr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"decode_python_encoding", (PyCFunction)CPyPy_mypy___util___decode_python_encoding, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"read_py_file", (PyCFunction)CPyPy_mypy___util___read_py_file, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"trim_source_line", (PyCFunction)CPyPy_mypy___util___trim_source_line, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_mypy_comments", (PyCFunction)CPyPy_mypy___util___get_mypy_comments, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"write_junit_xml", (PyCFunction)CPyPy_mypy___util___write_junit_xml, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_prefix", (PyCFunction)CPyPy_mypy___util___get_prefix, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_top_two_prefixes", (PyCFunction)CPyPy_mypy___util___get_top_two_prefixes, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"correct_relative_import", (PyCFunction)CPyPy_mypy___util___correct_relative_import, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_class_descriptors", (PyCFunction)CPyPy_mypy___util___get_class_descriptors, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"replace_object_state", (PyCFunction)CPyPy_mypy___util___replace_object_state, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_sub_path", (PyCFunction)CPyPy_mypy___util___is_sub_path, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"hard_exit", (PyCFunction)CPyPy_mypy___util___hard_exit, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"unmangle", (PyCFunction)CPyPy_mypy___util___unmangle, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_unique_redefinition_name", (PyCFunction)CPyPy_mypy___util___get_unique_redefinition_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_python_version", (PyCFunction)CPyPy_mypy___util___check_python_version, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"count_stats", (PyCFunction)CPyPy_mypy___util___count_stats, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"split_words", (PyCFunction)CPyPy_mypy___util___split_words, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_terminal_width", (PyCFunction)CPyPy_mypy___util___get_terminal_width, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"soft_wrap", (PyCFunction)CPyPy_mypy___util___soft_wrap, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"hash_digest", (PyCFunction)CPyPy_mypy___util___hash_digest, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"parse_gray_color", (PyCFunction)CPyPy_mypy___util___parse_gray_color, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"should_force_color", (PyCFunction)CPyPy_mypy___util___should_force_color, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_typeshed_file", (PyCFunction)CPyPy_mypy___util___is_typeshed_file, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_stub_package_file", (PyCFunction)CPyPy_mypy___util___is_stub_package_file, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"unnamed_function", (PyCFunction)CPyPy_mypy___util___unnamed_function, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"time_spent_us", (PyCFunction)CPyPy_mypy___util___time_spent_us, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"plural_s", (PyCFunction)CPyPy_mypy___util___plural_s, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mypy___utilmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.util",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    mypy___utilmodule_methods
};

PyObject *CPyInit_mypy___util(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___util_internal) {
        Py_INCREF(CPyModule_mypy___util_internal);
        return CPyModule_mypy___util_internal;
    }
    CPyModule_mypy___util_internal = PyModule_Create(&mypy___utilmodule);
    if (unlikely(CPyModule_mypy___util_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___util_internal, "__name__");
    CPyStatic_mypy___util___globals = PyModule_GetDict(CPyModule_mypy___util_internal);
    if (unlikely(CPyStatic_mypy___util___globals == NULL))
        goto fail;
    CPyType_mypy___util___get_class_descriptors_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_mypy___util___get_class_descriptors_env_template, NULL, modname);
    if (unlikely(!CPyType_mypy___util___get_class_descriptors_env))
        goto fail;
    CPyType_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_template, NULL, modname);
    if (unlikely(!CPyType_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_mypy___util_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___util_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___util_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_mypy___util___TYPESHED_DIR);
    CPyStatic_mypy___util___TYPESHED_DIR = NULL;
    CPy_XDECREF(CPyStatic_mypy___util___ENCODING_RE);
    CPyStatic_mypy___util___ENCODING_RE = NULL;
    CPy_XDECREF(CPyStatic_mypy___util___SPECIAL_DUNDERS);
    CPyStatic_mypy___util___SPECIAL_DUNDERS = NULL;
    CPy_XDECREF(CPyStatic_mypy___util___fields_cache);
    CPyStatic_mypy___util___fields_cache = NULL;
    Py_CLEAR(CPyType_mypy___util___DecodeError);
    Py_CLEAR(CPyType_mypy___util___IdMapper);
    Py_CLEAR(CPyType_mypy___util___FancyFormatter);
    Py_CLEAR(CPyType_mypy___util___get_class_descriptors_env);
    Py_CLEAR(CPyType_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj);
    return NULL;
}

char CPyDef_mypy___util___is_dunder(PyObject *cpy_r_name, char cpy_r_exclude_special) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    if (cpy_r_exclude_special != 2) goto CPyL2;
    cpy_r_exclude_special = 0;
CPyL2: ;
    if (!cpy_r_exclude_special) goto CPyL9;
    cpy_r_r0 = CPyStatic_mypy___util___SPECIAL_DUNDERS;
    if (likely(cpy_r_r0 != NULL)) goto CPyL6;
    PyErr_SetString(PyExc_NameError, "value for final name \"SPECIAL_DUNDERS\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/util.py", "is_dunder", 66, CPyStatic_mypy___util___globals);
        goto CPyL13;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r2 = PySequence_Contains(cpy_r_r0, cpy_r_name);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/util.py", "is_dunder", 66, CPyStatic_mypy___util___globals);
        goto CPyL13;
    }
    cpy_r_r4 = cpy_r_r2;
    if (!cpy_r_r4) goto CPyL9;
    return 0;
CPyL9: ;
    cpy_r_r5 = CPyStatics[756]; /* '__' */
    cpy_r_r6 = CPyStr_Startswith(cpy_r_name, cpy_r_r5);
    if (cpy_r_r6) goto CPyL11;
    cpy_r_r7 = cpy_r_r6;
    goto CPyL12;
CPyL11: ;
    cpy_r_r8 = CPyStatics[756]; /* '__' */
    cpy_r_r9 = CPyStr_Endswith(cpy_r_name, cpy_r_r8);
    cpy_r_r7 = cpy_r_r9;
CPyL12: ;
    return cpy_r_r7;
CPyL13: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
}

PyObject *CPyPy_mypy___util___is_dunder(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "exclude_special", 0};
    static CPyArg_Parser parser = {"O|O:is_dunder", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_exclude_special = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_exclude_special)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    char arg_exclude_special;
    if (obj_exclude_special == NULL) {
        arg_exclude_special = 2;
    } else if (unlikely(!PyBool_Check(obj_exclude_special))) {
        CPy_TypeError("bool", obj_exclude_special); goto fail;
    } else
        arg_exclude_special = obj_exclude_special == Py_True;
    char retval = CPyDef_mypy___util___is_dunder(arg_name, arg_exclude_special);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "is_dunder", 59, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util___is_sunder(PyObject *cpy_r_name) {
    char cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = 2;
    cpy_r_r1 = CPyDef_mypy___util___is_dunder(cpy_r_name, cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/util.py", "is_sunder", 72, CPyStatic_mypy___util___globals);
        goto CPyL8;
    }
    cpy_r_r2 = cpy_r_r1 ^ 1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = cpy_r_r2;
    goto CPyL7;
CPyL3: ;
    cpy_r_r4 = CPyStatics[755]; /* '_' */
    cpy_r_r5 = CPyStr_Startswith(cpy_r_name, cpy_r_r4);
    if (cpy_r_r5) goto CPyL5;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL6;
CPyL5: ;
    cpy_r_r7 = CPyStatics[755]; /* '_' */
    cpy_r_r8 = CPyStr_Endswith(cpy_r_name, cpy_r_r7);
    cpy_r_r6 = cpy_r_r8;
CPyL6: ;
    cpy_r_r3 = cpy_r_r6;
CPyL7: ;
    return cpy_r_r3;
CPyL8: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyObject *CPyPy_mypy___util___is_sunder(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:is_sunder", kwlist, 0};
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
    char retval = CPyDef_mypy___util___is_sunder(arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "is_sunder", 71, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___split_module_names(PyObject *cpy_r_mod_name) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    CPyPtr cpy_r_r2;
    PyObject *cpy_r_out;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = PyList_New(1);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "split_module_names", 81, CPyStatic_mypy___util___globals);
        goto CPyL10;
    }
    cpy_r_r1 = (CPyPtr)&((PyListObject *)cpy_r_r0)->ob_item;
    cpy_r_r2 = *(CPyPtr *)cpy_r_r1;
    CPy_INCREF(cpy_r_mod_name);
    *(PyObject * *)cpy_r_r2 = cpy_r_mod_name;
    cpy_r_out = cpy_r_r0;
    goto CPyL11;
CPyL2: ;
    cpy_r_r3 = CPyStatics[224]; /* '.' */
    cpy_r_r4 = PySequence_Contains(cpy_r_mod_name, cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/util.py", "split_module_names", 82, CPyStatic_mypy___util___globals);
        goto CPyL12;
    }
    cpy_r_r6 = cpy_r_r4;
    if (!cpy_r_r6) goto CPyL13;
    cpy_r_r7 = CPyStatics[224]; /* '.' */
    cpy_r_r8 = CPyStatics[173]; /* 'rsplit' */
    cpy_r_r9 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r10[3] = {cpy_r_mod_name, cpy_r_r7, cpy_r_r9};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r11, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "split_module_names", 83, CPyStatic_mypy___util___globals);
        goto CPyL12;
    }
    CPy_DECREF(cpy_r_mod_name);
    if (likely(PyList_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "split_module_names", 83, CPyStatic_mypy___util___globals, "list", cpy_r_r12);
        goto CPyL14;
    }
    cpy_r_r14 = CPyList_GetItemShort(cpy_r_r13, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "split_module_names", 83, CPyStatic_mypy___util___globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "split_module_names", 83, CPyStatic_mypy___util___globals, "str", cpy_r_r14);
        goto CPyL14;
    }
    CPy_DECREF(cpy_r_r12);
    cpy_r_mod_name = cpy_r_r15;
    cpy_r_r16 = PyList_Append(cpy_r_out, cpy_r_mod_name);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/util.py", "split_module_names", 84, CPyStatic_mypy___util___globals);
        goto CPyL12;
    } else
        goto CPyL2;
CPyL9: ;
    return cpy_r_out;
CPyL10: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL11: ;
    CPy_INCREF(cpy_r_mod_name);
    goto CPyL2;
CPyL12: ;
    CPy_DecRef(cpy_r_mod_name);
    CPy_DecRef(cpy_r_out);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_mod_name);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_out);
    CPy_DecRef(cpy_r_r12);
    goto CPyL10;
}

PyObject *CPyPy_mypy___util___split_module_names(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"mod_name", 0};
    static CPyArg_Parser parser = {"O:split_module_names", kwlist, 0};
    PyObject *obj_mod_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_mod_name)) {
        return NULL;
    }
    PyObject *arg_mod_name;
    if (likely(PyUnicode_Check(obj_mod_name)))
        arg_mod_name = obj_mod_name;
    else {
        CPy_TypeError("str", obj_mod_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___util___split_module_names(arg_mod_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "split_module_names", 75, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___module_prefix(PyObject *cpy_r_modules, PyObject *cpy_r_target) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_mypy___util___split_target(cpy_r_modules, cpy_r_target);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "module_prefix", 89, CPyStatic_mypy___util___globals);
        goto CPyL5;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_result == cpy_r_r1;
    if (cpy_r_r2) {
        goto CPyL6;
    } else
        goto CPyL3;
CPyL2: ;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    return cpy_r_r3;
CPyL3: ;
    PyObject *__tmp8155;
    if (unlikely(!(PyTuple_Check(cpy_r_result) && PyTuple_GET_SIZE(cpy_r_result) == 2))) {
        __tmp8155 = NULL;
        goto __LL8156;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_result, 0))))
        __tmp8155 = PyTuple_GET_ITEM(cpy_r_result, 0);
    else {
        __tmp8155 = NULL;
    }
    if (__tmp8155 == NULL) goto __LL8156;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_result, 1))))
        __tmp8155 = PyTuple_GET_ITEM(cpy_r_result, 1);
    else {
        __tmp8155 = NULL;
    }
    if (__tmp8155 == NULL) goto __LL8156;
    __tmp8155 = cpy_r_result;
__LL8156: ;
    if (unlikely(__tmp8155 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_result); cpy_r_r4 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8157 = PyTuple_GET_ITEM(cpy_r_result, 0);
        CPy_INCREF(__tmp8157);
        PyObject *__tmp8158;
        if (likely(PyUnicode_Check(__tmp8157)))
            __tmp8158 = __tmp8157;
        else {
            CPy_TypeError("str", __tmp8157); 
            __tmp8158 = NULL;
        }
        cpy_r_r4.f0 = __tmp8158;
        PyObject *__tmp8159 = PyTuple_GET_ITEM(cpy_r_result, 1);
        CPy_INCREF(__tmp8159);
        PyObject *__tmp8160;
        if (likely(PyUnicode_Check(__tmp8159)))
            __tmp8160 = __tmp8159;
        else {
            CPy_TypeError("str", __tmp8159); 
            __tmp8160 = NULL;
        }
        cpy_r_r4.f1 = __tmp8160;
    }
    CPy_DECREF(cpy_r_result);
    if (unlikely(cpy_r_r4.f0 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "module_prefix", 92, CPyStatic_mypy___util___globals);
        goto CPyL5;
    }
    cpy_r_r5 = cpy_r_r4.f0;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4.f0);
    CPy_DECREF(cpy_r_r4.f1);
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL6: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL2;
}

PyObject *CPyPy_mypy___util___module_prefix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"modules", "target", 0};
    static CPyArg_Parser parser = {"OO:module_prefix", kwlist, 0};
    PyObject *obj_modules;
    PyObject *obj_target;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_modules, &obj_target)) {
        return NULL;
    }
    PyObject *arg_modules = obj_modules;
    PyObject *arg_target;
    if (likely(PyUnicode_Check(obj_target)))
        arg_target = obj_target;
    else {
        CPy_TypeError("str", obj_target); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___util___module_prefix(arg_modules, arg_target);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "module_prefix", 88, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___split_target(PyObject *cpy_r_modules, PyObject *cpy_r_target) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_remaining;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T2OO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_components;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "split_target", 96, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    cpy_r_remaining = cpy_r_r0;
    goto CPyL18;
CPyL2: ;
    if (!1) goto CPyL19;
    cpy_r_r1 = PySequence_Contains(cpy_r_modules, cpy_r_target);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/util.py", "split_target", 98, CPyStatic_mypy___util___globals);
        goto CPyL20;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL7;
    cpy_r_r4 = CPyStatics[224]; /* '.' */
    cpy_r_r5 = PyUnicode_Join(cpy_r_r4, cpy_r_remaining);
    CPy_DECREF(cpy_r_remaining);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "split_target", 99, CPyStatic_mypy___util___globals);
        goto CPyL21;
    }
    cpy_r_r6.f0 = cpy_r_target;
    cpy_r_r6.f1 = cpy_r_r5;
    CPy_INCREF(cpy_r_r6.f0);
    CPy_INCREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = PyTuple_New(2);
    if (unlikely(cpy_r_r7 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8161 = cpy_r_r6.f0;
    PyTuple_SET_ITEM(cpy_r_r7, 0, __tmp8161);
    PyObject *__tmp8162 = cpy_r_r6.f1;
    PyTuple_SET_ITEM(cpy_r_r7, 1, __tmp8162);
    return cpy_r_r7;
CPyL7: ;
    cpy_r_r8 = CPyStatics[224]; /* '.' */
    cpy_r_r9 = CPyStatics[173]; /* 'rsplit' */
    cpy_r_r10 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r11[3] = {cpy_r_target, cpy_r_r8, cpy_r_r10};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_VectorcallMethod(cpy_r_r9, cpy_r_r12, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "split_target", 100, CPyStatic_mypy___util___globals);
        goto CPyL20;
    }
    CPy_DECREF(cpy_r_target);
    if (likely(PyList_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "split_target", 100, CPyStatic_mypy___util___globals, "list", cpy_r_r13);
        goto CPyL22;
    }
    cpy_r_components = cpy_r_r14;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_components)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = cpy_r_r17 == 2;
    if (cpy_r_r18) {
        goto CPyL23;
    } else
        goto CPyL11;
CPyL10: ;
    cpy_r_r19 = Py_None;
    CPy_INCREF(cpy_r_r19);
    return cpy_r_r19;
CPyL11: ;
    cpy_r_r20 = CPyList_GetItemShort(cpy_r_components, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "split_target", 103, CPyStatic_mypy___util___globals);
        goto CPyL24;
    }
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "split_target", 103, CPyStatic_mypy___util___globals, "str", cpy_r_r20);
        goto CPyL24;
    }
    cpy_r_target = cpy_r_r21;
    cpy_r_r22 = CPyList_GetItemShort(cpy_r_components, 2);
    CPy_DECREF(cpy_r_components);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "split_target", 104, CPyStatic_mypy___util___globals);
        goto CPyL20;
    }
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "split_target", 104, CPyStatic_mypy___util___globals, "str", cpy_r_r22);
        goto CPyL20;
    }
    cpy_r_r24 = CPyList_Insert(cpy_r_remaining, 0, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/util.py", "split_target", 104, CPyStatic_mypy___util___globals);
        goto CPyL20;
    } else
        goto CPyL2;
CPyL16: ;
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL18: ;
    CPy_INCREF(cpy_r_target);
    goto CPyL2;
CPyL19: ;
    CPy_DECREF(cpy_r_target);
    CPy_DECREF(cpy_r_remaining);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_target);
    CPy_DecRef(cpy_r_remaining);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_target);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_remaining);
    goto CPyL17;
CPyL23: ;
    CPy_DECREF(cpy_r_remaining);
    CPy_DECREF(cpy_r_components);
    goto CPyL10;
CPyL24: ;
    CPy_DecRef(cpy_r_remaining);
    CPy_DecRef(cpy_r_components);
    goto CPyL17;
}

PyObject *CPyPy_mypy___util___split_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"modules", "target", 0};
    static CPyArg_Parser parser = {"OO:split_target", kwlist, 0};
    PyObject *obj_modules;
    PyObject *obj_target;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_modules, &obj_target)) {
        return NULL;
    }
    PyObject *arg_modules = obj_modules;
    PyObject *arg_target;
    if (likely(PyUnicode_Check(obj_target)))
        arg_target = obj_target;
    else {
        CPy_TypeError("str", obj_target); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___util___split_target(arg_modules, arg_target);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "split_target", 95, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___short_type(PyObject *cpy_r_obj) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_t;
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
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_obj == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    cpy_r_r2 = CPyStatics[6527]; /* 'nil' */
    CPy_INCREF(cpy_r_r2);
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = PyObject_Type(cpy_r_obj);
    cpy_r_r4 = PyObject_Str(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "short_type", 114, CPyStatic_mypy___util___globals);
        goto CPyL9;
    }
    cpy_r_t = cpy_r_r4;
    cpy_r_r5 = CPyStatics[224]; /* '.' */
    cpy_r_r6 = PyUnicode_Split(cpy_r_t, cpy_r_r5, -1);
    CPy_DECREF(cpy_r_t);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "short_type", 115, CPyStatic_mypy___util___globals);
        goto CPyL9;
    }
    cpy_r_r7 = CPyList_GetItemShort(cpy_r_r6, -2);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "short_type", 115, CPyStatic_mypy___util___globals);
        goto CPyL9;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "short_type", 115, CPyStatic_mypy___util___globals, "str", cpy_r_r7);
        goto CPyL9;
    }
    cpy_r_r9 = CPyStatics[6404]; /* "'>" */
    cpy_r_r10 = CPyStatics[272]; /* 'rstrip' */
    PyObject *cpy_r_r11[2] = {cpy_r_r8, cpy_r_r9};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_VectorcallMethod(cpy_r_r10, cpy_r_r12, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "short_type", 115, CPyStatic_mypy___util___globals);
        goto CPyL10;
    }
    CPy_DECREF(cpy_r_r8);
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "short_type", 115, CPyStatic_mypy___util___globals, "str", cpy_r_r13);
        goto CPyL9;
    }
    return cpy_r_r14;
CPyL9: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL10: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL9;
}

PyObject *CPyPy_mypy___util___short_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"obj", 0};
    static CPyArg_Parser parser = {"O:short_type", kwlist, 0};
    PyObject *obj_obj;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_obj)) {
        return NULL;
    }
    PyObject *arg_obj = obj_obj;
    PyObject *retval = CPyDef_mypy___util___short_type(arg_obj);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "short_type", 107, CPyStatic_mypy___util___globals);
    return NULL;
}

tuple_T2OI CPyDef_mypy___util___find_python_encoding(PyObject *cpy_r_text) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_encoding;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    tuple_T2OO cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    tuple_T2OI cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    PyObject *cpy_r_r59;
    tuple_T2OI cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_default_encoding;
    tuple_T2OI cpy_r_r62;
    tuple_T2OI cpy_r_r63;
    cpy_r_r0 = CPyStatic_mypy___util___ENCODING_RE;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"ENCODING_RE\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/util.py", "find_python_encoding", 120, CPyStatic_mypy___util___globals);
        goto CPyL29;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = CPyStatics[210]; /* 'match' */
    PyObject *cpy_r_r3[2] = {cpy_r_r0, cpy_r_text};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r2, cpy_r_r4, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "find_python_encoding", 120, CPyStatic_mypy___util___globals);
        goto CPyL29;
    }
    cpy_r_result = cpy_r_r5;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_result != cpy_r_r6;
    if (!cpy_r_r7) goto CPyL30;
    CPy_INCREF(cpy_r_result);
    cpy_r_r8 = cpy_r_result;
    cpy_r_r9 = PyObject_IsTrue(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/util.py", "find_python_encoding", 120, CPyStatic_mypy___util___globals);
        goto CPyL31;
    }
    cpy_r_r11 = cpy_r_r9;
    if (!cpy_r_r11) goto CPyL30;
    CPy_INCREF(cpy_r_result);
    cpy_r_r12 = cpy_r_result;
    cpy_r_r13 = CPyStatics[1393]; /* 'group' */
    cpy_r_r14 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r15[2] = {cpy_r_r12, cpy_r_r14};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r16, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "find_python_encoding", 122, CPyStatic_mypy___util___globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_r12);
    cpy_r_r18 = cpy_r_r17;
    cpy_r_r19 = PyObject_IsTrue(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/util.py", "find_python_encoding", -1, CPyStatic_mypy___util___globals);
        goto CPyL31;
    }
    cpy_r_r21 = cpy_r_r19;
    if (!cpy_r_r21) goto CPyL13;
    cpy_r_r22 = 4;
    goto CPyL14;
CPyL13: ;
    cpy_r_r22 = 2;
CPyL14: ;
    cpy_r_line = cpy_r_r22;
    cpy_r_r23 = cpy_r_result;
    cpy_r_r24 = CPyStatics[1393]; /* 'group' */
    cpy_r_r25 = CPyStatics[9026]; /* 3 */
    PyObject *cpy_r_r26[2] = {cpy_r_r23, cpy_r_r25};
    cpy_r_r27 = (PyObject **)&cpy_r_r26;
    cpy_r_r28 = PyObject_VectorcallMethod(cpy_r_r24, cpy_r_r27, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "find_python_encoding", 123, CPyStatic_mypy___util___globals);
        goto CPyL33;
    }
    CPy_DECREF(cpy_r_r23);
    cpy_r_r29 = cpy_r_r28;
    cpy_r_r30 = CPyStatics[3794]; /* 'ascii' */
    cpy_r_r31 = cpy_r_r29;
    cpy_r_r32 = CPyStatics[6528]; /* 'decode' */
    PyObject *cpy_r_r33[2] = {cpy_r_r31, cpy_r_r30};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = PyObject_VectorcallMethod(cpy_r_r32, cpy_r_r34, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "find_python_encoding", 123, CPyStatic_mypy___util___globals);
        goto CPyL34;
    }
    CPy_DECREF(cpy_r_r31);
    cpy_r_r36 = cpy_r_r35;
    cpy_r_encoding = cpy_r_r36;
    cpy_r_r37 = CPyStatics[6529]; /* 'iso-latin-1-' */
    cpy_r_r38 = CPyStatics[6530]; /* 'latin-1-' */
    cpy_r_r39.f0 = cpy_r_r37;
    cpy_r_r39.f1 = cpy_r_r38;
    CPy_INCREF(cpy_r_r39.f0);
    CPy_INCREF(cpy_r_r39.f1);
    CPy_INCREF(cpy_r_encoding);
    cpy_r_r40 = cpy_r_encoding;
    cpy_r_r41 = CPyStatics[4225]; /* 'startswith' */
    cpy_r_r42 = PyTuple_New(2);
    if (unlikely(cpy_r_r42 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8163 = cpy_r_r39.f0;
    PyTuple_SET_ITEM(cpy_r_r42, 0, __tmp8163);
    PyObject *__tmp8164 = cpy_r_r39.f1;
    PyTuple_SET_ITEM(cpy_r_r42, 1, __tmp8164);
    PyObject *cpy_r_r43[2] = {cpy_r_r40, cpy_r_r42};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = PyObject_VectorcallMethod(cpy_r_r41, cpy_r_r44, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "find_python_encoding", 125, CPyStatic_mypy___util___globals);
        goto CPyL35;
    }
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r46 = cpy_r_r45;
    cpy_r_r47 = PyObject_IsTrue(cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/util.py", "find_python_encoding", -1, CPyStatic_mypy___util___globals);
        goto CPyL36;
    }
    cpy_r_r49 = cpy_r_r47;
    if (cpy_r_r49) goto CPyL37;
    cpy_r_r50 = CPyStatics[6531]; /* 'iso-latin-1' */
    cpy_r_r51 = PyObject_RichCompare(cpy_r_encoding, cpy_r_r50, 2);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "find_python_encoding", 125, CPyStatic_mypy___util___globals);
        goto CPyL36;
    }
    cpy_r_r52 = PyObject_IsTrue(cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/util.py", "find_python_encoding", 125, CPyStatic_mypy___util___globals);
        goto CPyL36;
    }
    cpy_r_r54 = cpy_r_r52;
    if (cpy_r_r54) {
        goto CPyL37;
    } else
        goto CPyL26;
CPyL25: ;
    cpy_r_r55 = CPyStatics[6532]; /* 'latin-1' */
    CPy_INCREF(cpy_r_r55);
    cpy_r_encoding = cpy_r_r55;
CPyL26: ;
    cpy_r_r56.f0 = cpy_r_encoding;
    cpy_r_r56.f1 = cpy_r_line;
    CPy_INCREF(cpy_r_r56.f0);
    CPyTagged_INCREF(cpy_r_r56.f1);
    CPy_DECREF(cpy_r_encoding);
    CPyTagged_DECREF(cpy_r_line);
    cpy_r_r57 = cpy_r_r56.f0;
    CPy_INCREF(cpy_r_r57);
    cpy_r_r58 = cpy_r_r56.f1;
    CPyTagged_INCREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r56.f0);
    CPyTagged_DECREF(cpy_r_r56.f1);
    if (likely(PyUnicode_Check(cpy_r_r57)))
        cpy_r_r59 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "find_python_encoding", 127, CPyStatic_mypy___util___globals, "str", cpy_r_r57);
        goto CPyL38;
    }
    cpy_r_r60.f0 = cpy_r_r59;
    cpy_r_r60.f1 = cpy_r_r58;
    CPy_INCREF(cpy_r_r60.f0);
    CPyTagged_INCREF(cpy_r_r60.f1);
    CPy_DECREF(cpy_r_r59);
    CPyTagged_DECREF(cpy_r_r58);
    return cpy_r_r60;
CPyL28: ;
    cpy_r_r61 = CPyStatics[1752]; /* 'utf8' */
    CPy_INCREF(cpy_r_r61);
    cpy_r_default_encoding = cpy_r_r61;
    cpy_r_r62.f0 = cpy_r_default_encoding;
    cpy_r_r62.f1 = -2;
    CPy_INCREF(cpy_r_r62.f0);
    CPyTagged_INCREF(cpy_r_r62.f1);
    CPy_DECREF(cpy_r_default_encoding);
    return cpy_r_r62;
CPyL29: ;
    tuple_T2OI __tmp8165 = { NULL, CPY_INT_TAG };
    cpy_r_r63 = __tmp8165;
    return cpy_r_r63;
CPyL30: ;
    CPy_DECREF(cpy_r_result);
    goto CPyL28;
CPyL31: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL29;
CPyL32: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_r12);
    goto CPyL29;
CPyL33: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r23);
    goto CPyL29;
CPyL34: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r31);
    goto CPyL29;
CPyL35: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_encoding);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r42);
    goto CPyL29;
CPyL36: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_encoding);
    goto CPyL29;
CPyL37: ;
    CPy_DECREF(cpy_r_encoding);
    goto CPyL25;
CPyL38: ;
    CPyTagged_DecRef(cpy_r_r58);
    goto CPyL29;
}

PyObject *CPyPy_mypy___util___find_python_encoding(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"text", 0};
    static CPyArg_Parser parser = {"O:find_python_encoding", kwlist, 0};
    PyObject *obj_text;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_text)) {
        return NULL;
    }
    PyObject *arg_text;
    if (likely(PyBytes_Check(obj_text) || PyByteArray_Check(obj_text)))
        arg_text = obj_text;
    else {
        CPy_TypeError("bytes", obj_text); 
        goto fail;
    }
    tuple_T2OI retval = CPyDef_mypy___util___find_python_encoding(arg_text);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8166 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8166);
    PyObject *__tmp8167 = CPyTagged_StealAsObject(retval.f1);
    PyTuple_SET_ITEM(retbox, 1, __tmp8167);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "find_python_encoding", 118, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___bytes_to_human_readable_repr(PyObject *cpy_r_b) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[146]; /* 'repr' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "bytes_to_human_readable_repr", 144, CPyStatic_mypy___util___globals);
        goto CPyL6;
    }
    PyObject *cpy_r_r3[1] = {cpy_r_b};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r4, 1, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "bytes_to_human_readable_repr", 144, CPyStatic_mypy___util___globals);
        goto CPyL6;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "bytes_to_human_readable_repr", 144, CPyStatic_mypy___util___globals, "str", cpy_r_r5);
        goto CPyL6;
    }
    cpy_r_r7 = CPyStr_GetSlice(cpy_r_r6, 4, -2);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "bytes_to_human_readable_repr", 144, CPyStatic_mypy___util___globals);
        goto CPyL6;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "bytes_to_human_readable_repr", 144, CPyStatic_mypy___util___globals, "str", cpy_r_r7);
        goto CPyL6;
    }
    return cpy_r_r8;
CPyL6: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
}

PyObject *CPyPy_mypy___util___bytes_to_human_readable_repr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"b", 0};
    static CPyArg_Parser parser = {"O:bytes_to_human_readable_repr", kwlist, 0};
    PyObject *obj_b;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_b)) {
        return NULL;
    }
    PyObject *arg_b;
    if (likely(PyBytes_Check(obj_b) || PyByteArray_Check(obj_b)))
        arg_b = obj_b;
    else {
        CPy_TypeError("bytes", obj_b); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___util___bytes_to_human_readable_repr(arg_b);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "bytes_to_human_readable_repr", 133, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___decode_python_encoding(PyObject *cpy_r_source) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_encoding;
    PyObject *cpy_r_r7;
    tuple_T2OI cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r__;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_source_text;
    tuple_T3OOO cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_lookuperr;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = CPyStatics[9010]; /* b'\xef\xbb\xbf' */
    cpy_r_r1 = CPyStatics[4225]; /* 'startswith' */
    PyObject *cpy_r_r2[2] = {cpy_r_source, cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "decode_python_encoding", 160, CPyStatic_mypy___util___globals);
        goto CPyL21;
    }
    if (unlikely(!PyBool_Check(cpy_r_r4))) {
        CPy_TypeError("bool", cpy_r_r4); cpy_r_r5 = 2;
    } else
        cpy_r_r5 = cpy_r_r4 == Py_True;
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/util.py", "decode_python_encoding", 160, CPyStatic_mypy___util___globals);
        goto CPyL21;
    }
    if (!cpy_r_r5) goto CPyL5;
    cpy_r_r6 = CPyStatics[1752]; /* 'utf8' */
    CPy_INCREF(cpy_r_r6);
    cpy_r_encoding = cpy_r_r6;
    cpy_r_r7 = CPyBytes_GetSlice(cpy_r_source, 6, 9223372036854775806LL);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "decode_python_encoding", 162, CPyStatic_mypy___util___globals);
        goto CPyL22;
    }
    cpy_r_source = cpy_r_r7;
    goto CPyL7;
CPyL5: ;
    cpy_r_r8 = CPyDef_mypy___util___find_python_encoding(cpy_r_source);
    if (unlikely(cpy_r_r8.f0 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "decode_python_encoding", 165, CPyStatic_mypy___util___globals);
        goto CPyL21;
    }
    cpy_r_r9 = cpy_r_r8.f0;
    CPy_INCREF(cpy_r_r9);
    cpy_r_encoding = cpy_r_r9;
    cpy_r_r10 = cpy_r_r8.f1;
    CPyTagged_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8.f0);
    CPyTagged_DECREF(cpy_r_r8.f1);
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_r10);
    cpy_r__ = cpy_r_r11;
    CPy_DECREF(cpy_r__);
    goto CPyL23;
CPyL7: ;
    cpy_r_r12 = CPy_Decode(cpy_r_source, cpy_r_encoding, NULL);
    CPy_DECREF(cpy_r_source);
    CPy_DECREF(cpy_r_encoding);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "decode_python_encoding", 168, CPyStatic_mypy___util___globals);
        goto CPyL9;
    }
    cpy_r_source_text = cpy_r_r12;
    goto CPyL20;
CPyL9: ;
    cpy_r_r13 = CPy_CatchError();
    cpy_r_r14 = CPyModule_builtins;
    cpy_r_r15 = CPyStatics[6533]; /* 'LookupError' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "decode_python_encoding", 169, CPyStatic_mypy___util___globals);
        goto CPyL18;
    }
    cpy_r_r17 = CPy_ExceptionMatches(cpy_r_r16);
    CPy_DecRef(cpy_r_r16);
    if (!cpy_r_r17) goto CPyL16;
    cpy_r_r18 = CPy_GetExcValue();
    cpy_r_lookuperr = cpy_r_r18;
    cpy_r_r19 = PyObject_Str(cpy_r_lookuperr);
    CPy_DecRef(cpy_r_lookuperr);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "decode_python_encoding", 170, CPyStatic_mypy___util___globals);
        goto CPyL18;
    }
    cpy_r_r20 = (PyObject *)CPyType_mypy___util___DecodeError;
    PyObject *cpy_r_r21[1] = {cpy_r_r19};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r20, cpy_r_r22, 1, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "decode_python_encoding", 170, CPyStatic_mypy___util___globals);
        goto CPyL24;
    }
    CPy_DecRef(cpy_r_r19);
    if (likely(Py_TYPE(cpy_r_r23) == CPyType_mypy___util___DecodeError))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "decode_python_encoding", 170, CPyStatic_mypy___util___globals, "mypy.util.DecodeError", cpy_r_r23);
        goto CPyL18;
    }
    CPy_Raise(cpy_r_r24);
    CPy_DecRef(cpy_r_r24);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/util.py", "decode_python_encoding", 170, CPyStatic_mypy___util___globals);
        goto CPyL18;
    } else
        goto CPyL25;
CPyL15: ;
    CPy_Unreachable();
CPyL16: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL18;
    } else
        goto CPyL26;
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    CPy_RestoreExcInfo(cpy_r_r13);
    CPy_DecRef(cpy_r_r13.f0);
    CPy_DecRef(cpy_r_r13.f1);
    CPy_DecRef(cpy_r_r13.f2);
    cpy_r_r25 = CPy_KeepPropagating();
    if (!cpy_r_r25) goto CPyL21;
    CPy_Unreachable();
CPyL20: ;
    return cpy_r_source_text;
CPyL21: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL22: ;
    CPy_DecRef(cpy_r_encoding);
    goto CPyL21;
CPyL23: ;
    CPy_INCREF(cpy_r_source);
    goto CPyL7;
CPyL24: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL18;
CPyL25: ;
    CPy_DecRef(cpy_r_r13.f0);
    CPy_DecRef(cpy_r_r13.f1);
    CPy_DecRef(cpy_r_r13.f2);
    goto CPyL15;
CPyL26: ;
    CPy_DecRef(cpy_r_r13.f0);
    CPy_DecRef(cpy_r_r13.f1);
    CPy_DecRef(cpy_r_r13.f2);
    goto CPyL17;
}

PyObject *CPyPy_mypy___util___decode_python_encoding(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"source", 0};
    static CPyArg_Parser parser = {"O:decode_python_encoding", kwlist, 0};
    PyObject *obj_source;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_source)) {
        return NULL;
    }
    PyObject *arg_source;
    if (likely(PyBytes_Check(obj_source) || PyByteArray_Check(obj_source)))
        arg_source = obj_source;
    else {
        CPy_TypeError("bytes", obj_source); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___util___decode_python_encoding(arg_source);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "decode_python_encoding", 154, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___read_py_file(PyObject *cpy_r_path, PyObject *cpy_r_read) {
    PyObject **cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_source;
    tuple_T3OOO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_source_lines;
    tuple_T3OOO cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r0[1] = {cpy_r_path};
    cpy_r_r1 = (PyObject **)&cpy_r_r0;
    cpy_r_r2 = _PyObject_Vectorcall(cpy_r_read, cpy_r_r1, 1, 0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "read_py_file", 180, CPyStatic_mypy___util___globals);
        goto CPyL4;
    }
    if (likely(PyBytes_Check(cpy_r_r2) || PyByteArray_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "read_py_file", 180, CPyStatic_mypy___util___globals, "bytes", cpy_r_r2);
        goto CPyL4;
    }
    cpy_r_source = cpy_r_r3;
    goto CPyL11;
CPyL4: ;
    cpy_r_r4 = CPy_CatchError();
    cpy_r_r5 = CPyModule_builtins;
    cpy_r_r6 = CPyStatics[211]; /* 'OSError' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "read_py_file", 181, CPyStatic_mypy___util___globals);
        goto CPyL9;
    }
    cpy_r_r8 = CPy_ExceptionMatches(cpy_r_r7);
    CPy_DecRef(cpy_r_r7);
    if (!cpy_r_r8) goto CPyL7;
    cpy_r_r9 = Py_None;
    CPy_RestoreExcInfo(cpy_r_r4);
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    CPy_INCREF(cpy_r_r9);
    return cpy_r_r9;
CPyL7: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL9;
    } else
        goto CPyL23;
CPyL8: ;
    CPy_Unreachable();
CPyL9: ;
    CPy_RestoreExcInfo(cpy_r_r4);
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    cpy_r_r10 = CPy_KeepPropagating();
    if (!cpy_r_r10) goto CPyL22;
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r11 = CPyDef_mypy___util___decode_python_encoding(cpy_r_source);
    CPy_DECREF(cpy_r_source);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "read_py_file", 185, CPyStatic_mypy___util___globals);
        goto CPyL15;
    }
    cpy_r_r12 = CPyStatics[1734]; /* 'splitlines' */
    PyObject *cpy_r_r13[1] = {cpy_r_r11};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = PyObject_VectorcallMethod(cpy_r_r12, cpy_r_r14, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "read_py_file", 185, CPyStatic_mypy___util___globals);
        goto CPyL24;
    }
    CPy_DECREF(cpy_r_r11);
    if (likely(PyList_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "read_py_file", 185, CPyStatic_mypy___util___globals, "list", cpy_r_r15);
        goto CPyL15;
    }
    cpy_r_source_lines = cpy_r_r16;
    goto CPyL21;
CPyL15: ;
    cpy_r_r17 = CPy_CatchError();
    cpy_r_r18 = (PyObject *)CPyType_mypy___util___DecodeError;
    cpy_r_r19 = CPy_ExceptionMatches(cpy_r_r18);
    if (!cpy_r_r19) goto CPyL17;
    cpy_r_r20 = Py_None;
    CPy_RestoreExcInfo(cpy_r_r17);
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    CPy_DecRef(cpy_r_r17.f2);
    CPy_INCREF(cpy_r_r20);
    return cpy_r_r20;
CPyL17: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL19;
    } else
        goto CPyL25;
CPyL18: ;
    CPy_Unreachable();
CPyL19: ;
    CPy_RestoreExcInfo(cpy_r_r17);
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    CPy_DecRef(cpy_r_r17.f2);
    cpy_r_r21 = CPy_KeepPropagating();
    if (!cpy_r_r21) goto CPyL22;
    CPy_Unreachable();
CPyL21: ;
    return cpy_r_source_lines;
CPyL22: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL23: ;
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    goto CPyL8;
CPyL24: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL15;
CPyL25: ;
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    CPy_DecRef(cpy_r_r17.f2);
    goto CPyL18;
}

PyObject *CPyPy_mypy___util___read_py_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"path", "read", 0};
    static CPyArg_Parser parser = {"OO:read_py_file", kwlist, 0};
    PyObject *obj_path;
    PyObject *obj_read;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_path, &obj_read)) {
        return NULL;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *arg_read = obj_read;
    PyObject *retval = CPyDef_mypy___util___read_py_file(arg_path, arg_read);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "read_py_file", 174, CPyStatic_mypy___util___globals);
    return NULL;
}

tuple_T2OI CPyDef_mypy___util___trim_source_line(PyObject *cpy_r_line, CPyTagged cpy_r_max_len, CPyTagged cpy_r_col, CPyTagged cpy_r_min_width) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    char cpy_r_r3;
    int64_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_r9;
    int64_t cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    int64_t cpy_r_r13;
    char cpy_r_r14;
    int64_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    tuple_T2OI cpy_r_r19;
    CPyTagged cpy_r_r20;
    int64_t cpy_r_r21;
    char cpy_r_r22;
    int64_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    tuple_T2OI cpy_r_r31;
    int64_t cpy_r_r32;
    char cpy_r_r33;
    CPyTagged cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_r36;
    int64_t cpy_r_r37;
    char cpy_r_r38;
    int64_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyTagged cpy_r_offset;
    PyObject *cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    tuple_T2OI cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int64_t cpy_r_r61;
    char cpy_r_r62;
    CPyTagged cpy_r_r63;
    CPyTagged cpy_r_r64;
    CPyTagged cpy_r_r65;
    tuple_T2OI cpy_r_r66;
    tuple_T2OI cpy_r_r67;
    cpy_r_r0 = CPyTagged_Multiply(4, cpy_r_min_width);
    cpy_r_r1 = CPyTagged_Add(cpy_r_r0, 2);
    CPyTagged_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_max_len & 1;
    cpy_r_r3 = cpy_r_r2 != 0;
    if (cpy_r_r3) goto CPyL2;
    cpy_r_r4 = cpy_r_r1 & 1;
    cpy_r_r5 = cpy_r_r4 != 0;
    if (!cpy_r_r5) goto CPyL3;
CPyL2: ;
    cpy_r_r6 = CPyTagged_IsLt_(cpy_r_max_len, cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r1);
    if (cpy_r_r6) {
        goto CPyL4;
    } else
        goto CPyL35;
CPyL3: ;
    cpy_r_r7 = (Py_ssize_t)cpy_r_max_len < (Py_ssize_t)cpy_r_r1;
    CPyTagged_DECREF(cpy_r_r1);
    if (!cpy_r_r7) goto CPyL35;
CPyL4: ;
    cpy_r_r8 = CPyTagged_Multiply(4, cpy_r_min_width);
    cpy_r_r9 = CPyTagged_Add(cpy_r_r8, 2);
    CPyTagged_DECREF(cpy_r_r8);
    cpy_r_max_len = cpy_r_r9;
CPyL5: ;
    cpy_r_r10 = CPyStr_Size_size_t(cpy_r_line);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/util.py", "trim_source_line", 206, CPyStatic_mypy___util___globals);
        goto CPyL36;
    }
    cpy_r_r12 = cpy_r_r10 << 1;
    cpy_r_r13 = cpy_r_r12 & 1;
    cpy_r_r14 = cpy_r_r13 != 0;
    if (cpy_r_r14) goto CPyL8;
    cpy_r_r15 = cpy_r_max_len & 1;
    cpy_r_r16 = cpy_r_r15 != 0;
    if (!cpy_r_r16) goto CPyL9;
CPyL8: ;
    cpy_r_r17 = CPyTagged_IsLt_(cpy_r_max_len, cpy_r_r12);
    if (cpy_r_r17) {
        goto CPyL11;
    } else
        goto CPyL37;
CPyL9: ;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r12 <= (Py_ssize_t)cpy_r_max_len;
    if (cpy_r_r18) {
        goto CPyL37;
    } else
        goto CPyL11;
CPyL10: ;
    cpy_r_r19.f0 = cpy_r_line;
    cpy_r_r19.f1 = 0;
    CPy_INCREF(cpy_r_r19.f0);
    CPyTagged_INCREF(cpy_r_r19.f1);
    return cpy_r_r19;
CPyL11: ;
    cpy_r_r20 = CPyTagged_Add(cpy_r_col, cpy_r_min_width);
    cpy_r_r21 = cpy_r_r20 & 1;
    cpy_r_r22 = cpy_r_r21 != 0;
    if (cpy_r_r22) goto CPyL13;
    cpy_r_r23 = cpy_r_max_len & 1;
    cpy_r_r24 = cpy_r_r23 != 0;
    if (!cpy_r_r24) goto CPyL14;
CPyL13: ;
    cpy_r_r25 = CPyTagged_IsLt_(cpy_r_r20, cpy_r_max_len);
    CPyTagged_DECREF(cpy_r_r20);
    if (cpy_r_r25) {
        goto CPyL15;
    } else
        goto CPyL19;
CPyL14: ;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r20 < (Py_ssize_t)cpy_r_max_len;
    CPyTagged_DECREF(cpy_r_r20);
    if (!cpy_r_r26) goto CPyL19;
CPyL15: ;
    cpy_r_r27 = CPyStr_GetSlice(cpy_r_line, 0, cpy_r_max_len);
    CPyTagged_DECREF(cpy_r_max_len);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "trim_source_line", 212, CPyStatic_mypy___util___globals);
        goto CPyL34;
    }
    if (likely(PyUnicode_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "trim_source_line", 212, CPyStatic_mypy___util___globals, "str", cpy_r_r27);
        goto CPyL34;
    }
    cpy_r_r29 = CPyStatics[5575]; /* '...' */
    cpy_r_r30 = PyUnicode_Concat(cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "trim_source_line", 212, CPyStatic_mypy___util___globals);
        goto CPyL34;
    }
    cpy_r_r31.f0 = cpy_r_r30;
    cpy_r_r31.f1 = 0;
    CPy_INCREF(cpy_r_r31.f0);
    CPyTagged_INCREF(cpy_r_r31.f1);
    CPy_DECREF(cpy_r_r30);
    return cpy_r_r31;
CPyL19: ;
    cpy_r_r32 = CPyStr_Size_size_t(cpy_r_line);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/util.py", "trim_source_line", 215, CPyStatic_mypy___util___globals);
        goto CPyL36;
    }
    cpy_r_r34 = cpy_r_r32 << 1;
    cpy_r_r35 = CPyTagged_Subtract(cpy_r_r34, cpy_r_min_width);
    cpy_r_r36 = CPyTagged_Subtract(cpy_r_r35, 2);
    CPyTagged_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_col & 1;
    cpy_r_r38 = cpy_r_r37 != 0;
    if (cpy_r_r38) goto CPyL22;
    cpy_r_r39 = cpy_r_r36 & 1;
    cpy_r_r40 = cpy_r_r39 != 0;
    if (!cpy_r_r40) goto CPyL23;
CPyL22: ;
    cpy_r_r41 = CPyTagged_IsLt_(cpy_r_col, cpy_r_r36);
    CPyTagged_DECREF(cpy_r_r36);
    if (cpy_r_r41) {
        goto CPyL24;
    } else
        goto CPyL29;
CPyL23: ;
    cpy_r_r42 = (Py_ssize_t)cpy_r_col < (Py_ssize_t)cpy_r_r36;
    CPyTagged_DECREF(cpy_r_r36);
    if (!cpy_r_r42) goto CPyL29;
CPyL24: ;
    cpy_r_r43 = CPyTagged_Subtract(cpy_r_col, cpy_r_max_len);
    CPyTagged_DECREF(cpy_r_max_len);
    cpy_r_r44 = CPyTagged_Add(cpy_r_r43, cpy_r_min_width);
    CPyTagged_DECREF(cpy_r_r43);
    cpy_r_r45 = CPyTagged_Add(cpy_r_r44, 2);
    CPyTagged_DECREF(cpy_r_r44);
    cpy_r_offset = cpy_r_r45;
    cpy_r_r46 = CPyStatics[5575]; /* '...' */
    cpy_r_r47 = CPyTagged_Add(cpy_r_col, cpy_r_min_width);
    cpy_r_r48 = CPyTagged_Add(cpy_r_r47, 2);
    CPyTagged_DECREF(cpy_r_r47);
    cpy_r_r49 = CPyStr_GetSlice(cpy_r_line, cpy_r_offset, cpy_r_r48);
    CPyTagged_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "trim_source_line", 217, CPyStatic_mypy___util___globals);
        goto CPyL38;
    }
    if (likely(PyUnicode_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "trim_source_line", 217, CPyStatic_mypy___util___globals, "str", cpy_r_r49);
        goto CPyL38;
    }
    cpy_r_r51 = PyUnicode_Concat(cpy_r_r46, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "trim_source_line", 217, CPyStatic_mypy___util___globals);
        goto CPyL38;
    }
    cpy_r_r52 = CPyStatics[5575]; /* '...' */
    cpy_r_r53 = PyUnicode_Concat(cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "trim_source_line", 217, CPyStatic_mypy___util___globals);
        goto CPyL38;
    }
    cpy_r_r54 = CPyTagged_Subtract(cpy_r_offset, 6);
    CPyTagged_DECREF(cpy_r_offset);
    cpy_r_r55.f0 = cpy_r_r53;
    cpy_r_r55.f1 = cpy_r_r54;
    CPy_INCREF(cpy_r_r55.f0);
    CPyTagged_INCREF(cpy_r_r55.f1);
    CPy_DECREF(cpy_r_r53);
    CPyTagged_DECREF(cpy_r_r54);
    return cpy_r_r55;
CPyL29: ;
    cpy_r_r56 = CPyStatics[5575]; /* '...' */
    cpy_r_r57 = CPyTagged_Negate(cpy_r_max_len);
    cpy_r_r58 = CPyStr_GetSlice(cpy_r_line, cpy_r_r57, 9223372036854775806LL);
    CPyTagged_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "trim_source_line", 220, CPyStatic_mypy___util___globals);
        goto CPyL36;
    }
    if (likely(PyUnicode_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "trim_source_line", 220, CPyStatic_mypy___util___globals, "str", cpy_r_r58);
        goto CPyL36;
    }
    cpy_r_r60 = PyUnicode_Concat(cpy_r_r56, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "trim_source_line", 220, CPyStatic_mypy___util___globals);
        goto CPyL36;
    }
    cpy_r_r61 = CPyStr_Size_size_t(cpy_r_line);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/util.py", "trim_source_line", 220, CPyStatic_mypy___util___globals);
        goto CPyL39;
    }
    cpy_r_r63 = cpy_r_r61 << 1;
    cpy_r_r64 = CPyTagged_Subtract(cpy_r_r63, cpy_r_max_len);
    CPyTagged_DECREF(cpy_r_max_len);
    cpy_r_r65 = CPyTagged_Subtract(cpy_r_r64, 6);
    CPyTagged_DECREF(cpy_r_r64);
    cpy_r_r66.f0 = cpy_r_r60;
    cpy_r_r66.f1 = cpy_r_r65;
    CPy_INCREF(cpy_r_r66.f0);
    CPyTagged_INCREF(cpy_r_r66.f1);
    CPy_DECREF(cpy_r_r60);
    CPyTagged_DECREF(cpy_r_r65);
    return cpy_r_r66;
CPyL34: ;
    tuple_T2OI __tmp8168 = { NULL, CPY_INT_TAG };
    cpy_r_r67 = __tmp8168;
    return cpy_r_r67;
CPyL35: ;
    CPyTagged_INCREF(cpy_r_max_len);
    goto CPyL5;
CPyL36: ;
    CPyTagged_DecRef(cpy_r_max_len);
    goto CPyL34;
CPyL37: ;
    CPyTagged_DECREF(cpy_r_max_len);
    goto CPyL10;
CPyL38: ;
    CPyTagged_DecRef(cpy_r_offset);
    goto CPyL34;
CPyL39: ;
    CPyTagged_DecRef(cpy_r_max_len);
    CPy_DecRef(cpy_r_r60);
    goto CPyL34;
}

PyObject *CPyPy_mypy___util___trim_source_line(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"line", "max_len", "col", "min_width", 0};
    static CPyArg_Parser parser = {"OOOO:trim_source_line", kwlist, 0};
    PyObject *obj_line;
    PyObject *obj_max_len;
    PyObject *obj_col;
    PyObject *obj_min_width;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_line, &obj_max_len, &obj_col, &obj_min_width)) {
        return NULL;
    }
    PyObject *arg_line;
    if (likely(PyUnicode_Check(obj_line)))
        arg_line = obj_line;
    else {
        CPy_TypeError("str", obj_line); 
        goto fail;
    }
    CPyTagged arg_max_len;
    if (likely(PyLong_Check(obj_max_len)))
        arg_max_len = CPyTagged_BorrowFromObject(obj_max_len);
    else {
        CPy_TypeError("int", obj_max_len); goto fail;
    }
    CPyTagged arg_col;
    if (likely(PyLong_Check(obj_col)))
        arg_col = CPyTagged_BorrowFromObject(obj_col);
    else {
        CPy_TypeError("int", obj_col); goto fail;
    }
    CPyTagged arg_min_width;
    if (likely(PyLong_Check(obj_min_width)))
        arg_min_width = CPyTagged_BorrowFromObject(obj_min_width);
    else {
        CPy_TypeError("int", obj_min_width); goto fail;
    }
    tuple_T2OI retval = CPyDef_mypy___util___trim_source_line(arg_line, arg_max_len, arg_col, arg_min_width);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8169 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8169);
    PyObject *__tmp8170 = CPyTagged_StealAsObject(retval.f1);
    PyTuple_SET_ITEM(retbox, 1, __tmp8170);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "trim_source_line", 191, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___get_mypy_comments(PyObject *cpy_r_source) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_PREFIX;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_lines;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_results;
    CPyTagged cpy_r_r9;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r10;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_line;
    char cpy_r_r17;
    CPyTagged cpy_r_r18;
    int64_t cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    tuple_T2IO cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = CPyStatics[6534]; /* '# mypy: ' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_PREFIX = cpy_r_r0;
    cpy_r_r1 = PySequence_Contains(cpy_r_source, cpy_r_PREFIX);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/util.py", "get_mypy_comments", 226, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    cpy_r_r3 = cpy_r_r1;
    cpy_r_r4 = cpy_r_r3 ^ 1;
    if (cpy_r_r4) {
        goto CPyL18;
    } else
        goto CPyL4;
CPyL2: ;
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_mypy_comments", 227, CPyStatic_mypy___util___globals);
        goto CPyL16;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = CPyStatics[189]; /* '\n' */
    cpy_r_r7 = PyUnicode_Split(cpy_r_source, cpy_r_r6, -1);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_mypy_comments", 228, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    cpy_r_lines = cpy_r_r7;
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_mypy_comments", 229, CPyStatic_mypy___util___globals);
        goto CPyL19;
    }
    cpy_r_results = cpy_r_r8;
    cpy_r_r9 = 0;
    cpy_r_i = 0;
    cpy_r_r10 = 0;
CPyL7: ;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_lines)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r10 < (Py_ssize_t)cpy_r_r13;
    if (!cpy_r_r14) goto CPyL20;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_lines, cpy_r_r10);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "get_mypy_comments", 230, CPyStatic_mypy___util___globals, "str", cpy_r_r15);
        goto CPyL21;
    }
    cpy_r_line = cpy_r_r16;
    cpy_r_r17 = CPyStr_Startswith(cpy_r_line, cpy_r_PREFIX);
    if (!cpy_r_r17) goto CPyL22;
    cpy_r_r18 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r19 = CPyStr_Size_size_t(cpy_r_PREFIX);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/util.py", "get_mypy_comments", 232, CPyStatic_mypy___util___globals);
        goto CPyL23;
    }
    cpy_r_r21 = cpy_r_r19 << 1;
    cpy_r_r22 = CPyStr_GetSlice(cpy_r_line, cpy_r_r21, 9223372036854775806LL);
    CPy_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_mypy_comments", 232, CPyStatic_mypy___util___globals);
        goto CPyL24;
    }
    if (likely(PyUnicode_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "get_mypy_comments", 232, CPyStatic_mypy___util___globals, "str", cpy_r_r22);
        goto CPyL24;
    }
    cpy_r_r24.f0 = cpy_r_r18;
    cpy_r_r24.f1 = cpy_r_r23;
    CPyTagged_INCREF(cpy_r_r24.f0);
    CPy_INCREF(cpy_r_r24.f1);
    CPyTagged_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r25 = PyTuple_New(2);
    if (unlikely(cpy_r_r25 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8171 = CPyTagged_StealAsObject(cpy_r_r24.f0);
    PyTuple_SET_ITEM(cpy_r_r25, 0, __tmp8171);
    PyObject *__tmp8172 = cpy_r_r24.f1;
    PyTuple_SET_ITEM(cpy_r_r25, 1, __tmp8172);
    cpy_r_r26 = PyList_Append(cpy_r_results, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/util.py", "get_mypy_comments", 232, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
CPyL14: ;
    cpy_r_r28 = cpy_r_r9 + 2;
    cpy_r_r9 = cpy_r_r28;
    cpy_r_i = cpy_r_r28;
    cpy_r_r29 = cpy_r_r10 + 2;
    cpy_r_r10 = cpy_r_r29;
    goto CPyL7;
CPyL15: ;
    return cpy_r_results;
CPyL16: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL17: ;
    CPy_DecRef(cpy_r_PREFIX);
    goto CPyL16;
CPyL18: ;
    CPy_DECREF(cpy_r_PREFIX);
    goto CPyL2;
CPyL19: ;
    CPy_DecRef(cpy_r_PREFIX);
    CPy_DecRef(cpy_r_lines);
    goto CPyL16;
CPyL20: ;
    CPy_DECREF(cpy_r_PREFIX);
    CPy_DECREF(cpy_r_lines);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL15;
CPyL21: ;
    CPy_DecRef(cpy_r_PREFIX);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_results);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL16;
CPyL22: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_line);
    goto CPyL14;
CPyL23: ;
    CPy_DecRef(cpy_r_PREFIX);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_results);
    CPy_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_r18);
    goto CPyL16;
CPyL24: ;
    CPy_DecRef(cpy_r_PREFIX);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_results);
    CPyTagged_DecRef(cpy_r_r18);
    goto CPyL16;
CPyL25: ;
    CPy_DecRef(cpy_r_PREFIX);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_results);
    goto CPyL16;
}

PyObject *CPyPy_mypy___util___get_mypy_comments(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"source", 0};
    static CPyArg_Parser parser = {"O:get_mypy_comments", kwlist, 0};
    PyObject *obj_source;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_source)) {
        return NULL;
    }
    PyObject *arg_source;
    if (likely(PyUnicode_Check(obj_source)))
        arg_source = obj_source;
    else {
        CPy_TypeError("str", obj_source); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___util___get_mypy_comments(arg_source);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "get_mypy_comments", 223, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util___write_junit_xml(double cpy_r_dt, char cpy_r_serious, PyObject *cpy_r_messages, PyObject *cpy_r_path, PyObject *cpy_r_version, PyObject *cpy_r_platform) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_xml;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject **cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_xml_dirs;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject **cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject **cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject **cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    tuple_T3OOO cpy_r_r105;
    tuple_T3OOO cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject **cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    tuple_T3OOO cpy_r_r117;
    tuple_T3OOO cpy_r_r118;
    tuple_T3OOO cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject **cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    cpy_r_r0 = CPyStatics[9887]; /* ('escape',) */
    cpy_r_r1 = CPyStatics[6535]; /* 'xml.sax.saxutils' */
    cpy_r_r2 = CPyStatic_mypy___util___globals;
    cpy_r_r3 = CPyImport_ImportFromMany(cpy_r_r1, cpy_r_r0, cpy_r_r0, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 264, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    CPyModule_xml___sax___saxutils = cpy_r_r3;
    CPy_INCREF(CPyModule_xml___sax___saxutils);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = cpy_r_r6 != 0;
    if (cpy_r_r7) goto CPyL6;
    if (cpy_r_serious) goto CPyL6;
    cpy_r_r8 = CPyStatics[6536]; /* ('<?xml version="1.0" encoding="utf-8"?>\n'
                                    '<testsuite errors="0" failures="0" name="mypy" '
                                    'skips="0" tests="1" time="{time:.3f}">\n'
                                    '  <testcase classname="mypy" file="mypy" line="1" '
                                    'name="mypy-py{ver}-{platform}" time="{time:.3f}">\n'
                                    '  </testcase>\n'
                                    '</testsuite>\n') */
    cpy_r_r9 = CPyStatics[193]; /* 'format' */
    cpy_r_r10 = PyFloat_FromDouble(cpy_r_dt);
    PyObject *cpy_r_r11[4] = {cpy_r_r8, cpy_r_r10, cpy_r_version, cpy_r_platform};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = CPyStatics[9888]; /* ('time', 'ver', 'platform') */
    cpy_r_r14 = PyObject_VectorcallMethod(cpy_r_r9, cpy_r_r12, 9223372036854775809ULL, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 267, CPyStatic_mypy___util___globals);
        goto CPyL68;
    }
    CPy_DECREF(cpy_r_r10);
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "write_junit_xml", 267, CPyStatic_mypy___util___globals, "str", cpy_r_r14);
        goto CPyL67;
    }
    cpy_r_xml = cpy_r_r15;
    goto CPyL21;
CPyL6: ;
    if (cpy_r_serious) goto CPyL14;
    cpy_r_r16 = CPyStatics[6538]; /* ('<?xml version="1.0" encoding="utf-8"?>\n'
                                     '<testsuite errors="0" failures="1" name="mypy" '
                                     'skips="0" tests="1" time="{time:.3f}">\n'
                                     '  <testcase classname="mypy" file="mypy" line="1" '
                                     'name="mypy-py{ver}-{platform}" time="{time:.3f}">\n'
                                     '    <failure message="mypy produced '
                                     'messages">{text}</failure>\n'
                                     '  </testcase>\n'
                                     '</testsuite>\n') */
    cpy_r_r17 = CPyStatics[189]; /* '\n' */
    cpy_r_r18 = PyUnicode_Join(cpy_r_r17, cpy_r_messages);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 270, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    cpy_r_r19 = CPyStatic_mypy___util___globals;
    cpy_r_r20 = CPyStatics[4230]; /* 'escape' */
    cpy_r_r21 = CPyDict_GetItem(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 270, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    PyObject *cpy_r_r22[1] = {cpy_r_r18};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r23, 1, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 270, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_r18);
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "write_junit_xml", 270, CPyStatic_mypy___util___globals, "str", cpy_r_r24);
        goto CPyL67;
    }
    cpy_r_r26 = CPyStatics[193]; /* 'format' */
    cpy_r_r27 = PyFloat_FromDouble(cpy_r_dt);
    PyObject *cpy_r_r28[5] = {cpy_r_r16, cpy_r_r25, cpy_r_r27, cpy_r_version, cpy_r_platform};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = CPyStatics[9889]; /* ('text', 'time', 'ver', 'platform') */
    cpy_r_r31 = PyObject_VectorcallMethod(cpy_r_r26, cpy_r_r29, 9223372036854775809ULL, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 269, CPyStatic_mypy___util___globals);
        goto CPyL70;
    }
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r27);
    if (likely(PyUnicode_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "write_junit_xml", 269, CPyStatic_mypy___util___globals, "str", cpy_r_r31);
        goto CPyL67;
    }
    cpy_r_xml = cpy_r_r32;
    goto CPyL21;
CPyL14: ;
    cpy_r_r33 = CPyStatics[6539]; /* ('<?xml version="1.0" encoding="utf-8"?>\n'
                                     '<testsuite errors="1" failures="0" name="mypy" '
                                     'skips="0" tests="1" time="{time:.3f}">\n'
                                     '  <testcase classname="mypy" file="mypy" line="1" '
                                     'name="mypy-py{ver}-{platform}" time="{time:.3f}">\n'
                                     '    <error message="mypy produced '
                                     'errors">{text}</error>\n'
                                     '  </testcase>\n'
                                     '</testsuite>\n') */
    cpy_r_r34 = CPyStatics[189]; /* '\n' */
    cpy_r_r35 = PyUnicode_Join(cpy_r_r34, cpy_r_messages);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 274, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    cpy_r_r36 = CPyStatic_mypy___util___globals;
    cpy_r_r37 = CPyStatics[4230]; /* 'escape' */
    cpy_r_r38 = CPyDict_GetItem(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 274, CPyStatic_mypy___util___globals);
        goto CPyL71;
    }
    PyObject *cpy_r_r39[1] = {cpy_r_r35};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r40, 1, 0);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 274, CPyStatic_mypy___util___globals);
        goto CPyL71;
    }
    CPy_DECREF(cpy_r_r35);
    if (likely(PyUnicode_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "write_junit_xml", 274, CPyStatic_mypy___util___globals, "str", cpy_r_r41);
        goto CPyL67;
    }
    cpy_r_r43 = CPyStatics[193]; /* 'format' */
    cpy_r_r44 = PyFloat_FromDouble(cpy_r_dt);
    PyObject *cpy_r_r45[5] = {cpy_r_r33, cpy_r_r42, cpy_r_r44, cpy_r_version, cpy_r_platform};
    cpy_r_r46 = (PyObject **)&cpy_r_r45;
    cpy_r_r47 = CPyStatics[9889]; /* ('text', 'time', 'ver', 'platform') */
    cpy_r_r48 = PyObject_VectorcallMethod(cpy_r_r43, cpy_r_r46, 9223372036854775809ULL, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 273, CPyStatic_mypy___util___globals);
        goto CPyL72;
    }
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r44);
    if (likely(PyUnicode_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "write_junit_xml", 273, CPyStatic_mypy___util___globals, "str", cpy_r_r48);
        goto CPyL67;
    }
    cpy_r_xml = cpy_r_r49;
CPyL21: ;
    cpy_r_r50 = CPyModule_os;
    cpy_r_r51 = CPyStatics[142]; /* 'path' */
    cpy_r_r52 = CPyObject_GetAttr(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 278, CPyStatic_mypy___util___globals);
        goto CPyL73;
    }
    cpy_r_r53 = CPyStatics[153]; /* 'abspath' */
    cpy_r_r54 = CPyObject_GetAttr(cpy_r_r52, cpy_r_r53);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 278, CPyStatic_mypy___util___globals);
        goto CPyL73;
    }
    PyObject *cpy_r_r55[1] = {cpy_r_path};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = _PyObject_Vectorcall(cpy_r_r54, cpy_r_r56, 1, 0);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 278, CPyStatic_mypy___util___globals);
        goto CPyL73;
    }
    if (likely(PyUnicode_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "write_junit_xml", 278, CPyStatic_mypy___util___globals, "str", cpy_r_r57);
        goto CPyL73;
    }
    cpy_r_r59 = CPyModule_os;
    cpy_r_r60 = CPyStatics[142]; /* 'path' */
    cpy_r_r61 = CPyObject_GetAttr(cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 278, CPyStatic_mypy___util___globals);
        goto CPyL74;
    }
    cpy_r_r62 = CPyStatics[151]; /* 'dirname' */
    cpy_r_r63 = CPyObject_GetAttr(cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 278, CPyStatic_mypy___util___globals);
        goto CPyL74;
    }
    PyObject *cpy_r_r64[1] = {cpy_r_r58};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = _PyObject_Vectorcall(cpy_r_r63, cpy_r_r65, 1, 0);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 278, CPyStatic_mypy___util___globals);
        goto CPyL74;
    }
    CPy_DECREF(cpy_r_r58);
    if (likely(PyUnicode_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "write_junit_xml", 278, CPyStatic_mypy___util___globals, "str", cpy_r_r66);
        goto CPyL73;
    }
    cpy_r_xml_dirs = cpy_r_r67;
    cpy_r_r68 = CPyModule_os;
    cpy_r_r69 = CPyStatics[142]; /* 'path' */
    cpy_r_r70 = CPyObject_GetAttr(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 279, CPyStatic_mypy___util___globals);
        goto CPyL75;
    }
    cpy_r_r71 = CPyStatics[143]; /* 'isdir' */
    cpy_r_r72 = CPyObject_GetAttr(cpy_r_r70, cpy_r_r71);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 279, CPyStatic_mypy___util___globals);
        goto CPyL75;
    }
    PyObject *cpy_r_r73[1] = {cpy_r_xml_dirs};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = _PyObject_Vectorcall(cpy_r_r72, cpy_r_r74, 1, 0);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 279, CPyStatic_mypy___util___globals);
        goto CPyL75;
    }
    if (unlikely(!PyBool_Check(cpy_r_r75))) {
        CPy_TypeError("bool", cpy_r_r75); cpy_r_r76 = 2;
    } else
        cpy_r_r76 = cpy_r_r75 == Py_True;
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 279, CPyStatic_mypy___util___globals);
        goto CPyL75;
    }
    if (cpy_r_r76) goto CPyL76;
    cpy_r_r77 = CPyModule_os;
    cpy_r_r78 = CPyStatics[3796]; /* 'makedirs' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 280, CPyStatic_mypy___util___globals);
        goto CPyL75;
    }
    PyObject *cpy_r_r80[1] = {cpy_r_xml_dirs};
    cpy_r_r81 = (PyObject **)&cpy_r_r80;
    cpy_r_r82 = _PyObject_Vectorcall(cpy_r_r79, cpy_r_r81, 1, 0);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 280, CPyStatic_mypy___util___globals);
        goto CPyL75;
    } else
        goto CPyL77;
CPyL36: ;
    CPy_DECREF(cpy_r_xml_dirs);
CPyL37: ;
    cpy_r_r83 = CPyStatics[4755]; /* 'wb' */
    cpy_r_r84 = CPyModule_builtins;
    cpy_r_r85 = CPyStatics[199]; /* 'open' */
    cpy_r_r86 = CPyObject_GetAttr(cpy_r_r84, cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 282, CPyStatic_mypy___util___globals);
        goto CPyL73;
    }
    PyObject *cpy_r_r87[2] = {cpy_r_path, cpy_r_r83};
    cpy_r_r88 = (PyObject **)&cpy_r_r87;
    cpy_r_r89 = _PyObject_Vectorcall(cpy_r_r86, cpy_r_r88, 2, 0);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 282, CPyStatic_mypy___util___globals);
        goto CPyL73;
    }
    cpy_r_r90 = PyObject_Type(cpy_r_r89);
    cpy_r_r91 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r92 = CPyObject_GetAttr(cpy_r_r90, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 282, CPyStatic_mypy___util___globals);
        goto CPyL78;
    }
    cpy_r_r93 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r94 = CPyObject_GetAttr(cpy_r_r90, cpy_r_r93);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 282, CPyStatic_mypy___util___globals);
        goto CPyL79;
    }
    PyObject *cpy_r_r95[1] = {cpy_r_r89};
    cpy_r_r96 = (PyObject **)&cpy_r_r95;
    cpy_r_r97 = _PyObject_Vectorcall(cpy_r_r94, cpy_r_r96, 1, 0);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 282, CPyStatic_mypy___util___globals);
        goto CPyL79;
    }
    cpy_r_r98 = 1;
    cpy_r_f = cpy_r_r97;
    cpy_r_r99 = CPyStatics[344]; /* 'utf-8' */
    cpy_r_r100 = CPy_Encode(cpy_r_xml, cpy_r_r99, NULL);
    CPy_DECREF(cpy_r_xml);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 283, CPyStatic_mypy___util___globals);
        goto CPyL80;
    }
    cpy_r_r101 = CPyStatics[286]; /* 'write' */
    PyObject *cpy_r_r102[2] = {cpy_r_f, cpy_r_r100};
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = PyObject_VectorcallMethod(cpy_r_r101, cpy_r_r103, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 283, CPyStatic_mypy___util___globals);
        goto CPyL81;
    } else
        goto CPyL82;
CPyL45: ;
    CPy_DECREF(cpy_r_f);
    CPy_DECREF(cpy_r_r100);
    goto CPyL54;
CPyL46: ;
    cpy_r_r105 = CPy_CatchError();
    cpy_r_r98 = 0;
    cpy_r_r106 = CPy_GetExcInfo();
    cpy_r_r107 = cpy_r_r106.f0;
    CPy_INCREF(cpy_r_r107);
    cpy_r_r108 = cpy_r_r106.f1;
    CPy_INCREF(cpy_r_r108);
    cpy_r_r109 = cpy_r_r106.f2;
    CPy_INCREF(cpy_r_r109);
    CPy_DecRef(cpy_r_r106.f0);
    CPy_DecRef(cpy_r_r106.f1);
    CPy_DecRef(cpy_r_r106.f2);
    PyObject *cpy_r_r110[4] = {cpy_r_r89, cpy_r_r107, cpy_r_r108, cpy_r_r109};
    cpy_r_r111 = (PyObject **)&cpy_r_r110;
    cpy_r_r112 = _PyObject_Vectorcall(cpy_r_r92, cpy_r_r111, 4, 0);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 282, CPyStatic_mypy___util___globals);
        goto CPyL83;
    }
    CPy_DecRef(cpy_r_r107);
    CPy_DecRef(cpy_r_r108);
    CPy_DecRef(cpy_r_r109);
    cpy_r_r113 = PyObject_IsTrue(cpy_r_r112);
    CPy_DecRef(cpy_r_r112);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 282, CPyStatic_mypy___util___globals);
        goto CPyL52;
    }
    cpy_r_r115 = cpy_r_r113;
    if (cpy_r_r115) goto CPyL51;
    CPy_Reraise();
    if (!0) {
        goto CPyL52;
    } else
        goto CPyL84;
CPyL50: ;
    CPy_Unreachable();
CPyL51: ;
    CPy_RestoreExcInfo(cpy_r_r105);
    CPy_DecRef(cpy_r_r105.f0);
    CPy_DecRef(cpy_r_r105.f1);
    CPy_DecRef(cpy_r_r105.f2);
    goto CPyL54;
CPyL52: ;
    CPy_RestoreExcInfo(cpy_r_r105);
    CPy_DecRef(cpy_r_r105.f0);
    CPy_DecRef(cpy_r_r105.f1);
    CPy_DecRef(cpy_r_r105.f2);
    cpy_r_r116 = CPy_KeepPropagating();
    if (!cpy_r_r116) {
        goto CPyL55;
    } else
        goto CPyL85;
CPyL53: ;
    CPy_Unreachable();
CPyL54: ;
    tuple_T3OOO __tmp8173 = { NULL, NULL, NULL };
    cpy_r_r117 = __tmp8173;
    cpy_r_r118 = cpy_r_r117;
    goto CPyL56;
CPyL55: ;
    cpy_r_r119 = CPy_CatchError();
    cpy_r_r118 = cpy_r_r119;
CPyL56: ;
    if (!cpy_r_r98) goto CPyL86;
    cpy_r_r120 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r121[4] = {cpy_r_r89, cpy_r_r120, cpy_r_r120, cpy_r_r120};
    cpy_r_r122 = (PyObject **)&cpy_r_r121;
    cpy_r_r123 = _PyObject_Vectorcall(cpy_r_r92, cpy_r_r122, 4, 0);
    CPy_DECREF(cpy_r_r92);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "write_junit_xml", 282, CPyStatic_mypy___util___globals);
        goto CPyL87;
    } else
        goto CPyL88;
CPyL58: ;
    CPy_DECREF(cpy_r_r89);
CPyL59: ;
    if (cpy_r_r118.f0 == NULL) goto CPyL66;
    CPy_Reraise();
    if (!0) {
        goto CPyL62;
    } else
        goto CPyL89;
CPyL61: ;
    CPy_Unreachable();
CPyL62: ;
    if (cpy_r_r118.f0 == NULL) goto CPyL64;
    CPy_RestoreExcInfo(cpy_r_r118);
    CPy_XDECREF(cpy_r_r118.f0);
    CPy_XDECREF(cpy_r_r118.f1);
    CPy_XDECREF(cpy_r_r118.f2);
CPyL64: ;
    cpy_r_r124 = CPy_KeepPropagating();
    if (!cpy_r_r124) goto CPyL67;
    CPy_Unreachable();
CPyL66: ;
    return 1;
CPyL67: ;
    cpy_r_r125 = 2;
    return cpy_r_r125;
CPyL68: ;
    CPy_DecRef(cpy_r_r10);
    goto CPyL67;
CPyL69: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL67;
CPyL70: ;
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r27);
    goto CPyL67;
CPyL71: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL67;
CPyL72: ;
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r44);
    goto CPyL67;
CPyL73: ;
    CPy_DecRef(cpy_r_xml);
    goto CPyL67;
CPyL74: ;
    CPy_DecRef(cpy_r_xml);
    CPy_DecRef(cpy_r_r58);
    goto CPyL67;
CPyL75: ;
    CPy_DecRef(cpy_r_xml);
    CPy_DecRef(cpy_r_xml_dirs);
    goto CPyL67;
CPyL76: ;
    CPy_DECREF(cpy_r_xml_dirs);
    goto CPyL37;
CPyL77: ;
    CPy_DECREF(cpy_r_r82);
    goto CPyL36;
CPyL78: ;
    CPy_DecRef(cpy_r_xml);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r90);
    goto CPyL67;
CPyL79: ;
    CPy_DecRef(cpy_r_xml);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r92);
    goto CPyL67;
CPyL80: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL46;
CPyL81: ;
    CPy_DecRef(cpy_r_f);
    CPy_DecRef(cpy_r_r100);
    goto CPyL46;
CPyL82: ;
    CPy_DECREF(cpy_r_r104);
    goto CPyL45;
CPyL83: ;
    CPy_DecRef(cpy_r_r107);
    CPy_DecRef(cpy_r_r108);
    CPy_DecRef(cpy_r_r109);
    goto CPyL52;
CPyL84: ;
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r105.f0);
    CPy_DecRef(cpy_r_r105.f1);
    CPy_DecRef(cpy_r_r105.f2);
    goto CPyL50;
CPyL85: ;
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r92);
    goto CPyL53;
CPyL86: ;
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r92);
    goto CPyL59;
CPyL87: ;
    CPy_DecRef(cpy_r_r89);
    goto CPyL62;
CPyL88: ;
    CPy_DECREF(cpy_r_r123);
    goto CPyL58;
CPyL89: ;
    CPy_XDECREF(cpy_r_r118.f0);
    CPy_XDECREF(cpy_r_r118.f1);
    CPy_XDECREF(cpy_r_r118.f2);
    goto CPyL61;
}

PyObject *CPyPy_mypy___util___write_junit_xml(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"dt", "serious", "messages", "path", "version", "platform", 0};
    static CPyArg_Parser parser = {"OOOOOO:write_junit_xml", kwlist, 0};
    PyObject *obj_dt;
    PyObject *obj_serious;
    PyObject *obj_messages;
    PyObject *obj_path;
    PyObject *obj_version;
    PyObject *obj_platform;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_dt, &obj_serious, &obj_messages, &obj_path, &obj_version, &obj_platform)) {
        return NULL;
    }
    double arg_dt;
    arg_dt = PyFloat_AsDouble(obj_dt);
    if (arg_dt == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", obj_dt); goto fail;
    }
    char arg_serious;
    if (unlikely(!PyBool_Check(obj_serious))) {
        CPy_TypeError("bool", obj_serious); goto fail;
    } else
        arg_serious = obj_serious == Py_True;
    PyObject *arg_messages;
    if (likely(PyList_Check(obj_messages)))
        arg_messages = obj_messages;
    else {
        CPy_TypeError("list", obj_messages); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *arg_version;
    if (likely(PyUnicode_Check(obj_version)))
        arg_version = obj_version;
    else {
        CPy_TypeError("str", obj_version); 
        goto fail;
    }
    PyObject *arg_platform;
    if (likely(PyUnicode_Check(obj_platform)))
        arg_platform = obj_platform;
    else {
        CPy_TypeError("str", obj_platform); 
        goto fail;
    }
    char retval = CPyDef_mypy___util___write_junit_xml(arg_dt, arg_serious, arg_messages, arg_path, arg_version, arg_platform);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "write_junit_xml", 261, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util___IdMapper_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 296, CPyStatic_mypy___util___globals);
        goto CPyL2;
    }
    ((mypy___util___IdMapperObject *)cpy_r_self)->_id_map = cpy_r_r0;
    ((mypy___util___IdMapperObject *)cpy_r_self)->_next_id = 0;
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___util___IdMapper_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___util___IdMapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.util.IdMapper", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypy___util___IdMapper_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "__init__", 295, CPyStatic_mypy___util___globals);
    return NULL;
}

CPyTagged CPyDef_mypy___util___IdMapper___id(PyObject *cpy_r_self, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_r16;
    cpy_r_r0 = ((mypy___util___IdMapperObject *)cpy_r_self)->_id_map;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_o);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/util.py", "id", 300, CPyStatic_mypy___util___globals);
        goto CPyL7;
    }
    cpy_r_r3 = cpy_r_r1;
    cpy_r_r4 = cpy_r_r3 ^ 1;
    if (!cpy_r_r4) goto CPyL4;
    cpy_r_r5 = ((mypy___util___IdMapperObject *)cpy_r_self)->_next_id;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypy___util___IdMapperObject *)cpy_r_self)->_id_map;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyTagged_StealAsObject(cpy_r_r5);
    cpy_r_r8 = CPyDict_SetItem(cpy_r_r6, cpy_r_o, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/util.py", "id", 301, CPyStatic_mypy___util___globals);
        goto CPyL7;
    }
    cpy_r_r10 = ((mypy___util___IdMapperObject *)cpy_r_self)->_next_id;
    cpy_r_r11 = CPyTagged_Add(cpy_r_r10, 2);
    CPyTagged_DECREF(((mypy___util___IdMapperObject *)cpy_r_self)->_next_id);
    ((mypy___util___IdMapperObject *)cpy_r_self)->_next_id = cpy_r_r11;
CPyL4: ;
    cpy_r_r13 = ((mypy___util___IdMapperObject *)cpy_r_self)->_id_map;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r13, cpy_r_o);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "id", 303, CPyStatic_mypy___util___globals);
        goto CPyL7;
    }
    if (likely(PyLong_Check(cpy_r_r14)))
        cpy_r_r15 = CPyTagged_FromObject(cpy_r_r14);
    else {
        CPy_TypeError("int", cpy_r_r14); cpy_r_r15 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "id", 303, CPyStatic_mypy___util___globals);
        goto CPyL7;
    }
    return cpy_r_r15;
CPyL7: ;
    cpy_r_r16 = CPY_INT_TAG;
    return cpy_r_r16;
}

PyObject *CPyPy_mypy___util___IdMapper___id(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:id", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___util___IdMapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.util.IdMapper", obj_self); 
        goto fail;
    }
    PyObject *arg_o = obj_o;
    CPyTagged retval = CPyDef_mypy___util___IdMapper___id(arg_self, arg_o);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "id", 299, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___get_prefix(PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = CPyStatics[224]; /* '.' */
    cpy_r_r1 = CPyStatics[173]; /* 'rsplit' */
    cpy_r_r2 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r3[3] = {cpy_r_fullname, cpy_r_r0, cpy_r_r2};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r4, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_prefix", 308, CPyStatic_mypy___util___globals);
        goto CPyL5;
    }
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "get_prefix", 308, CPyStatic_mypy___util___globals, "list", cpy_r_r5);
        goto CPyL6;
    }
    cpy_r_r7 = CPyList_GetItemShort(cpy_r_r6, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_prefix", 308, CPyStatic_mypy___util___globals);
        goto CPyL6;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "get_prefix", 308, CPyStatic_mypy___util___globals, "str", cpy_r_r7);
        goto CPyL6;
    }
    CPy_DECREF(cpy_r_r5);
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL6: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL5;
}

PyObject *CPyPy_mypy___util___get_prefix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_prefix", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___util___get_prefix(arg_fullname);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "get_prefix", 306, CPyStatic_mypy___util___globals);
    return NULL;
}

tuple_T2OO CPyDef_mypy___util___get_top_two_prefixes(PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_components;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    tuple_T2OO cpy_r_r9;
    cpy_r_r0 = CPyStatics[224]; /* '.' */
    cpy_r_r1 = CPyStr_Split(cpy_r_fullname, cpy_r_r0, 6);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_top_two_prefixes", 318, CPyStatic_mypy___util___globals);
        goto CPyL7;
    }
    cpy_r_components = cpy_r_r1;
    cpy_r_r2 = CPyList_GetItemShort(cpy_r_components, 0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_top_two_prefixes", 319, CPyStatic_mypy___util___globals);
        goto CPyL8;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "get_top_two_prefixes", 319, CPyStatic_mypy___util___globals, "str", cpy_r_r2);
        goto CPyL8;
    }
    cpy_r_r4 = CPyStatics[224]; /* '.' */
    cpy_r_r5 = CPyList_GetSlice(cpy_r_components, 0, 4);
    CPy_DECREF(cpy_r_components);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_top_two_prefixes", 319, CPyStatic_mypy___util___globals);
        goto CPyL9;
    }
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "get_top_two_prefixes", 319, CPyStatic_mypy___util___globals, "list", cpy_r_r5);
        goto CPyL9;
    }
    cpy_r_r7 = PyUnicode_Join(cpy_r_r4, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_top_two_prefixes", 319, CPyStatic_mypy___util___globals);
        goto CPyL9;
    }
    cpy_r_r8.f0 = cpy_r_r3;
    cpy_r_r8.f1 = cpy_r_r7;
    CPy_INCREF(cpy_r_r8.f0);
    CPy_INCREF(cpy_r_r8.f1);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r7);
    return cpy_r_r8;
CPyL7: ;
    tuple_T2OO __tmp8174 = { NULL, NULL };
    cpy_r_r9 = __tmp8174;
    return cpy_r_r9;
CPyL8: ;
    CPy_DecRef(cpy_r_components);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
}

PyObject *CPyPy_mypy___util___get_top_two_prefixes(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:get_top_two_prefixes", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_mypy___util___get_top_two_prefixes(arg_fullname);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8175 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8175);
    PyObject *__tmp8176 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp8176);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "get_top_two_prefixes", 311, CPyStatic_mypy___util___globals);
    return NULL;
}

tuple_T2OC CPyDef_mypy___util___correct_relative_import(PyObject *cpy_r_cur_mod_id, CPyTagged cpy_r_relative, PyObject *cpy_r_target, char cpy_r_is_cur_package_init_file) {
    char cpy_r_r0;
    tuple_T2OC cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_parts;
    CPyTagged cpy_r_rel;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    int64_t cpy_r_r8;
    char cpy_r_r9;
    int64_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_ok;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    tuple_T2OC cpy_r_r29;
    tuple_T2OC cpy_r_r30;
    cpy_r_r0 = cpy_r_relative == 0;
    if (!cpy_r_r0) goto CPyL2;
    cpy_r_r1.f0 = cpy_r_target;
    cpy_r_r1.f1 = 1;
    CPy_INCREF(cpy_r_r1.f0);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = CPyStatics[224]; /* '.' */
    cpy_r_r3 = PyUnicode_Split(cpy_r_cur_mod_id, cpy_r_r2, -1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "correct_relative_import", 327, CPyStatic_mypy___util___globals);
        goto CPyL19;
    }
    cpy_r_parts = cpy_r_r3;
    CPyTagged_INCREF(cpy_r_relative);
    cpy_r_rel = cpy_r_relative;
    if (!cpy_r_is_cur_package_init_file) goto CPyL5;
    cpy_r_r4 = CPyTagged_Subtract(cpy_r_rel, 2);
    CPyTagged_DECREF(cpy_r_rel);
    cpy_r_rel = cpy_r_r4;
CPyL5: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_parts)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = cpy_r_r7 & 1;
    cpy_r_r9 = cpy_r_r8 == 0;
    cpy_r_r10 = cpy_r_rel & 1;
    cpy_r_r11 = cpy_r_r10 == 0;
    cpy_r_r12 = cpy_r_r9 & cpy_r_r11;
    if (!cpy_r_r12) goto CPyL7;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r7 >= (Py_ssize_t)cpy_r_rel;
    cpy_r_r14 = cpy_r_r13;
    goto CPyL8;
CPyL7: ;
    cpy_r_r15 = CPyTagged_IsLt_(cpy_r_r7, cpy_r_rel);
    cpy_r_r16 = cpy_r_r15 ^ 1;
    cpy_r_r14 = cpy_r_r16;
CPyL8: ;
    cpy_r_ok = cpy_r_r14;
    cpy_r_r17 = cpy_r_rel != 0;
    if (!cpy_r_r17) goto CPyL20;
    cpy_r_r18 = CPyStatics[224]; /* '.' */
    cpy_r_r19 = CPyTagged_Negate(cpy_r_rel);
    CPyTagged_DECREF(cpy_r_rel);
    cpy_r_r20 = CPyList_GetSlice(cpy_r_parts, 0, cpy_r_r19);
    CPy_DECREF(cpy_r_parts);
    CPyTagged_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "correct_relative_import", 333, CPyStatic_mypy___util___globals);
        goto CPyL19;
    }
    if (likely(PyList_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "correct_relative_import", 333, CPyStatic_mypy___util___globals, "list", cpy_r_r20);
        goto CPyL19;
    }
    cpy_r_r22 = PyUnicode_Join(cpy_r_r18, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "correct_relative_import", 333, CPyStatic_mypy___util___globals);
        goto CPyL19;
    }
    cpy_r_cur_mod_id = cpy_r_r22;
CPyL13: ;
    cpy_r_r23 = CPyStr_IsTrue(cpy_r_target);
    if (!cpy_r_r23) goto CPyL16;
    cpy_r_r24 = CPyStatics[224]; /* '.' */
    cpy_r_r25 = PyUnicode_Concat(cpy_r_r24, cpy_r_target);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "correct_relative_import", 334, CPyStatic_mypy___util___globals);
        goto CPyL21;
    }
    cpy_r_r26 = cpy_r_r25;
    goto CPyL17;
CPyL16: ;
    cpy_r_r27 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r27);
    cpy_r_r26 = cpy_r_r27;
CPyL17: ;
    cpy_r_r28 = PyUnicode_Concat(cpy_r_cur_mod_id, cpy_r_r26);
    CPy_DECREF(cpy_r_cur_mod_id);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "correct_relative_import", 334, CPyStatic_mypy___util___globals);
        goto CPyL19;
    }
    cpy_r_r29.f0 = cpy_r_r28;
    cpy_r_r29.f1 = cpy_r_ok;
    CPy_INCREF(cpy_r_r29.f0);
    CPy_DECREF(cpy_r_r28);
    return cpy_r_r29;
CPyL19: ;
    tuple_T2OC __tmp8177 = { NULL, 2 };
    cpy_r_r30 = __tmp8177;
    return cpy_r_r30;
CPyL20: ;
    CPy_DECREF(cpy_r_parts);
    CPyTagged_DECREF(cpy_r_rel);
    CPy_INCREF(cpy_r_cur_mod_id);
    goto CPyL13;
CPyL21: ;
    CPy_DecRef(cpy_r_cur_mod_id);
    goto CPyL19;
}

PyObject *CPyPy_mypy___util___correct_relative_import(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cur_mod_id", "relative", "target", "is_cur_package_init_file", 0};
    static CPyArg_Parser parser = {"OOOO:correct_relative_import", kwlist, 0};
    PyObject *obj_cur_mod_id;
    PyObject *obj_relative;
    PyObject *obj_target;
    PyObject *obj_is_cur_package_init_file;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cur_mod_id, &obj_relative, &obj_target, &obj_is_cur_package_init_file)) {
        return NULL;
    }
    PyObject *arg_cur_mod_id;
    if (likely(PyUnicode_Check(obj_cur_mod_id)))
        arg_cur_mod_id = obj_cur_mod_id;
    else {
        CPy_TypeError("str", obj_cur_mod_id); 
        goto fail;
    }
    CPyTagged arg_relative;
    if (likely(PyLong_Check(obj_relative)))
        arg_relative = CPyTagged_BorrowFromObject(obj_relative);
    else {
        CPy_TypeError("int", obj_relative); goto fail;
    }
    PyObject *arg_target;
    if (likely(PyUnicode_Check(obj_target)))
        arg_target = obj_target;
    else {
        CPy_TypeError("str", obj_target); 
        goto fail;
    }
    char arg_is_cur_package_init_file;
    if (unlikely(!PyBool_Check(obj_is_cur_package_init_file))) {
        CPy_TypeError("bool", obj_is_cur_package_init_file); goto fail;
    } else
        arg_is_cur_package_init_file = obj_is_cur_package_init_file == Py_True;
    tuple_T2OC retval = CPyDef_mypy___util___correct_relative_import(arg_cur_mod_id, arg_relative, arg_target, arg_is_cur_package_init_file);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8178 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp8178);
    PyObject *__tmp8179 = retval.f1 ? Py_True : Py_False;
    CPy_INCREF(__tmp8179);
    PyTuple_SET_ITEM(retbox, 1, __tmp8179);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "correct_relative_import", 322, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "__get__", -1, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = ((mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/util.py", "<lambda>", "__mypyc_lambda__0_get_class_descriptors_obj", "__mypyc_env__", 347, CPyStatic_mypy___util___globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL12;
CPyL1: ;
    cpy_r_r1 = CPyModule_inspect;
    cpy_r_r2 = CPyStatics[6540]; /* 'isgetsetdescriptor' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<lambda>", 347, CPyStatic_mypy___util___globals);
        goto CPyL11;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_o};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<lambda>", 347, CPyStatic_mypy___util___globals);
        goto CPyL11;
    }
    if (unlikely(!PyBool_Check(cpy_r_r6))) {
        CPy_TypeError("bool", cpy_r_r6); cpy_r_r7 = 2;
    } else
        cpy_r_r7 = cpy_r_r6 == Py_True;
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/util.py", "<lambda>", 347, CPyStatic_mypy___util___globals);
        goto CPyL11;
    }
    if (!cpy_r_r7) goto CPyL6;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL10;
CPyL6: ;
    cpy_r_r9 = CPyModule_inspect;
    cpy_r_r10 = CPyStatics[6541]; /* 'ismemberdescriptor' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<lambda>", 347, CPyStatic_mypy___util___globals);
        goto CPyL11;
    }
    PyObject *cpy_r_r12[1] = {cpy_r_o};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r13, 1, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<lambda>", 347, CPyStatic_mypy___util___globals);
        goto CPyL11;
    }
    if (unlikely(!PyBool_Check(cpy_r_r14))) {
        CPy_TypeError("bool", cpy_r_r14); cpy_r_r15 = 2;
    } else
        cpy_r_r15 = cpy_r_r14 == Py_True;
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/util.py", "<lambda>", 347, CPyStatic_mypy___util___globals);
        goto CPyL11;
    }
    cpy_r_r8 = cpy_r_r15;
CPyL10: ;
    return cpy_r_r8;
CPyL11: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
CPyL12: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"o", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_o)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_o = obj_o;
    char retval = CPyDef_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj_____call__(arg___mypyc_self__, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "<lambda>", 347, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___get_class_descriptors(PyObject *cpy_r_cls) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_members;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    tuple_T2OO cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_x;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_y;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    cpy_r_r0 = CPyDef_mypy___util___get_class_descriptors_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 340, CPyStatic_mypy___util___globals);
        goto CPyL42;
    }
    cpy_r_r1 = CPyStatic_mypy___util___globals;
    cpy_r_r2 = CPyModule_inspect;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    if (cpy_r_r4) goto CPyL4;
    cpy_r_r5 = CPyStatics[1720]; /* 'inspect' */
    cpy_r_r6 = PyImport_Import(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 341, CPyStatic_mypy___util___globals);
        goto CPyL43;
    }
    CPyModule_inspect = cpy_r_r6;
    CPy_INCREF(CPyModule_inspect);
    CPy_DECREF(cpy_r_r6);
CPyL4: ;
    cpy_r_r7 = CPyStatics[1720]; /* 'inspect' */
    cpy_r_r8 = PyImport_GetModuleDict();
    cpy_r_r9 = CPyStatics[1720]; /* 'inspect' */
    cpy_r_r10 = CPyDict_GetItem(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 341, CPyStatic_mypy___util___globals);
        goto CPyL43;
    }
    cpy_r_r11 = CPyDict_SetItem(cpy_r_r1, cpy_r_r7, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 341, CPyStatic_mypy___util___globals);
        goto CPyL43;
    }
    cpy_r_r13 = CPyStatic_mypy___util___fields_cache;
    if (unlikely(cpy_r_r13 == NULL)) {
        goto CPyL44;
    } else
        goto CPyL9;
CPyL7: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"fields_cache\" was not set");
    cpy_r_r14 = 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 345, CPyStatic_mypy___util___globals);
        goto CPyL42;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r15 = PyDict_Contains(cpy_r_r13, cpy_r_cls);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 345, CPyStatic_mypy___util___globals);
        goto CPyL43;
    }
    cpy_r_r17 = cpy_r_r15;
    cpy_r_r18 = cpy_r_r17 ^ 1;
    if (!cpy_r_r18) goto CPyL45;
    cpy_r_r19 = CPyDef_mypy___util_____mypyc_lambda__0_get_class_descriptors_obj();
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 347, CPyStatic_mypy___util___globals);
        goto CPyL43;
    }
    if (((mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject *)cpy_r_r19)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject *)cpy_r_r19)->___mypyc_env__);
    }
    ((mypy___util_____mypyc_lambda__0_get_class_descriptors_objObject *)cpy_r_r19)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 347, CPyStatic_mypy___util___globals);
        goto CPyL46;
    }
    cpy_r_r21 = CPyModule_inspect;
    cpy_r_r22 = CPyStatics[3900]; /* 'getmembers' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 346, CPyStatic_mypy___util___globals);
        goto CPyL46;
    }
    PyObject *cpy_r_r24[2] = {cpy_r_cls, cpy_r_r19};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r25, 2, 0);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 346, CPyStatic_mypy___util___globals);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_r19);
    if (likely(PyList_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "get_class_descriptors", 346, CPyStatic_mypy___util___globals, "list", cpy_r_r26);
        goto CPyL42;
    }
    cpy_r_members = cpy_r_r27;
    cpy_r_r28 = PyList_New(0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 349, CPyStatic_mypy___util___globals);
        goto CPyL47;
    }
    cpy_r_r29 = 0;
CPyL18: ;
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_members)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = (Py_ssize_t)cpy_r_r29 < (Py_ssize_t)cpy_r_r32;
    if (!cpy_r_r33) goto CPyL48;
    cpy_r_r34 = CPyList_GetItemUnsafe(cpy_r_members, cpy_r_r29);
    PyObject *__tmp8180;
    if (unlikely(!(PyTuple_Check(cpy_r_r34) && PyTuple_GET_SIZE(cpy_r_r34) == 2))) {
        __tmp8180 = NULL;
        goto __LL8181;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r34, 0))))
        __tmp8180 = PyTuple_GET_ITEM(cpy_r_r34, 0);
    else {
        __tmp8180 = NULL;
    }
    if (__tmp8180 == NULL) goto __LL8181;
    __tmp8180 = PyTuple_GET_ITEM(cpy_r_r34, 1);
    if (__tmp8180 == NULL) goto __LL8181;
    __tmp8180 = cpy_r_r34;
__LL8181: ;
    if (unlikely(__tmp8180 == NULL)) {
        CPy_TypeError("tuple[str, object]", cpy_r_r34); cpy_r_r35 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8182 = PyTuple_GET_ITEM(cpy_r_r34, 0);
        CPy_INCREF(__tmp8182);
        PyObject *__tmp8183;
        if (likely(PyUnicode_Check(__tmp8182)))
            __tmp8183 = __tmp8182;
        else {
            CPy_TypeError("str", __tmp8182); 
            __tmp8183 = NULL;
        }
        cpy_r_r35.f0 = __tmp8183;
        PyObject *__tmp8184 = PyTuple_GET_ITEM(cpy_r_r34, 1);
        CPy_INCREF(__tmp8184);
        PyObject *__tmp8185;
        __tmp8185 = __tmp8184;
        cpy_r_r35.f1 = __tmp8185;
    }
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35.f0 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 349, CPyStatic_mypy___util___globals);
        goto CPyL49;
    }
    cpy_r_r36 = cpy_r_r35.f0;
    CPy_INCREF(cpy_r_r36);
    cpy_r_x = cpy_r_r36;
    cpy_r_r37 = cpy_r_r35.f1;
    CPy_INCREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r35.f0);
    CPy_DECREF(cpy_r_r35.f1);
    cpy_r_y = cpy_r_r37;
    CPy_DECREF(cpy_r_y);
    cpy_r_r38 = CPyStatics[4157]; /* '__weakref__' */
    cpy_r_r39 = PyUnicode_Compare(cpy_r_x, cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 == -1;
    if (!cpy_r_r40) goto CPyL23;
    cpy_r_r41 = PyErr_Occurred();
    cpy_r_r42 = cpy_r_r41 != NULL;
    if (!cpy_r_r42) goto CPyL23;
    cpy_r_r43 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 349, CPyStatic_mypy___util___globals);
        goto CPyL50;
    }
CPyL23: ;
    cpy_r_r44 = cpy_r_r39 != 0;
    if (cpy_r_r44) goto CPyL25;
    cpy_r_r45 = cpy_r_r44;
    goto CPyL29;
CPyL25: ;
    cpy_r_r46 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r47 = PyUnicode_Compare(cpy_r_x, cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 == -1;
    if (!cpy_r_r48) goto CPyL28;
    cpy_r_r49 = PyErr_Occurred();
    cpy_r_r50 = cpy_r_r49 != NULL;
    if (!cpy_r_r50) goto CPyL28;
    cpy_r_r51 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 349, CPyStatic_mypy___util___globals);
        goto CPyL50;
    }
CPyL28: ;
    cpy_r_r52 = cpy_r_r47 != 0;
    cpy_r_r45 = cpy_r_r52;
CPyL29: ;
    if (!cpy_r_r45) goto CPyL51;
    cpy_r_r53 = PyList_Append(cpy_r_r28, cpy_r_x);
    CPy_DECREF(cpy_r_x);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 349, CPyStatic_mypy___util___globals);
        goto CPyL49;
    }
CPyL31: ;
    cpy_r_r55 = cpy_r_r29 + 2;
    cpy_r_r29 = cpy_r_r55;
    goto CPyL18;
CPyL32: ;
    cpy_r_r56 = CPyStatic_mypy___util___fields_cache;
    if (unlikely(cpy_r_r56 == NULL)) {
        goto CPyL52;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"fields_cache\" was not set");
    cpy_r_r57 = 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 349, CPyStatic_mypy___util___globals);
        goto CPyL42;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r58 = CPyDict_SetItem(cpy_r_r56, cpy_r_cls, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 349, CPyStatic_mypy___util___globals);
        goto CPyL42;
    }
CPyL36: ;
    cpy_r_r60 = CPyStatic_mypy___util___fields_cache;
    if (likely(cpy_r_r60 != NULL)) goto CPyL39;
    PyErr_SetString(PyExc_NameError, "value for final name \"fields_cache\" was not set");
    cpy_r_r61 = 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 350, CPyStatic_mypy___util___globals);
        goto CPyL42;
    }
    CPy_Unreachable();
CPyL39: ;
    cpy_r_r62 = CPyDict_GetItem(cpy_r_r60, cpy_r_cls);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 350, CPyStatic_mypy___util___globals);
        goto CPyL42;
    }
    if (likely(PyList_Check(cpy_r_r62)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "get_class_descriptors", 350, CPyStatic_mypy___util___globals, "list", cpy_r_r62);
        goto CPyL42;
    }
    return cpy_r_r63;
CPyL42: ;
    cpy_r_r64 = NULL;
    return cpy_r_r64;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL42;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL45: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL36;
CPyL46: ;
    CPy_DecRef(cpy_r_r19);
    goto CPyL42;
CPyL47: ;
    CPy_DecRef(cpy_r_members);
    goto CPyL42;
CPyL48: ;
    CPy_DECREF(cpy_r_members);
    goto CPyL32;
CPyL49: ;
    CPy_DecRef(cpy_r_members);
    CPy_DecRef(cpy_r_r28);
    goto CPyL42;
CPyL50: ;
    CPy_DecRef(cpy_r_members);
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_x);
    goto CPyL42;
CPyL51: ;
    CPy_DECREF(cpy_r_x);
    goto CPyL31;
CPyL52: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL33;
}

PyObject *CPyPy_mypy___util___get_class_descriptors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cls", 0};
    static CPyArg_Parser parser = {"O:get_class_descriptors", kwlist, 0};
    PyObject *obj_cls;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_cls)) {
        return NULL;
    }
    PyObject *arg_cls = obj_cls;
    PyObject *retval = CPyDef_mypy___util___get_class_descriptors(arg_cls);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "get_class_descriptors", 340, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util___replace_object_state(PyObject *cpy_r_new, PyObject *cpy_r_old, char cpy_r_copy_dict, PyObject *cpy_r_skip_slots) {
    tuple_T0 cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_attr;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    tuple_T3OOO cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    if (cpy_r_copy_dict != 2) goto CPyL2;
    cpy_r_copy_dict = 0;
CPyL2: ;
    if (cpy_r_skip_slots != NULL) goto CPyL35;
    cpy_r_r0.empty_struct_error_flag = 0;
    cpy_r_r1 = PyTuple_New(0);
    if (unlikely(cpy_r_r1 == NULL))
        CPyError_OutOfMemory();
    cpy_r_skip_slots = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r3 = PyObject_HasAttr(cpy_r_old, cpy_r_r2);
    if (!cpy_r_r3) goto CPyL13;
    if (!cpy_r_copy_dict) goto CPyL10;
    cpy_r_r4 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_old, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "replace_object_state", 365, CPyStatic_mypy___util___globals);
        goto CPyL36;
    }
    if (likely(PyDict_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "replace_object_state", 365, CPyStatic_mypy___util___globals, "dict", cpy_r_r5);
        goto CPyL36;
    }
    cpy_r_r7 = PyDict_Copy(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "replace_object_state", 365, CPyStatic_mypy___util___globals);
        goto CPyL36;
    }
    cpy_r_r8 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r9 = PyObject_SetAttr(cpy_r_new, cpy_r_r8, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/util.py", "replace_object_state", 365, CPyStatic_mypy___util___globals);
        goto CPyL36;
    } else
        goto CPyL13;
CPyL10: ;
    cpy_r_r11 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_old, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "replace_object_state", 367, CPyStatic_mypy___util___globals);
        goto CPyL36;
    }
    if (likely(PyDict_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "replace_object_state", 367, CPyStatic_mypy___util___globals, "dict", cpy_r_r12);
        goto CPyL36;
    }
    cpy_r_r14 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r15 = PyObject_SetAttr(cpy_r_new, cpy_r_r14, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/util.py", "replace_object_state", 367, CPyStatic_mypy___util___globals);
        goto CPyL36;
    }
CPyL13: ;
    cpy_r_r17 = CPyStatics[1945]; /* '__class__' */
    cpy_r_r18 = CPyObject_GetAttr(cpy_r_old, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "replace_object_state", 369, CPyStatic_mypy___util___globals);
        goto CPyL36;
    }
    cpy_r_r19 = CPyDef_mypy___util___get_class_descriptors(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "replace_object_state", 369, CPyStatic_mypy___util___globals);
        goto CPyL36;
    }
    cpy_r_r20 = PyObject_GetIter(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "replace_object_state", 369, CPyStatic_mypy___util___globals);
        goto CPyL36;
    }
CPyL16: ;
    cpy_r_r21 = PyIter_Next(cpy_r_r20);
    if (cpy_r_r21 == NULL) goto CPyL37;
    if (likely(PyUnicode_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "replace_object_state", 369, CPyStatic_mypy___util___globals, "str", cpy_r_r21);
        goto CPyL38;
    }
    cpy_r_attr = cpy_r_r22;
    cpy_r_r23 = PySequence_Contains(cpy_r_skip_slots, cpy_r_attr);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/util.py", "replace_object_state", 370, CPyStatic_mypy___util___globals);
        goto CPyL39;
    }
    cpy_r_r25 = cpy_r_r23;
    if (cpy_r_r25) goto CPyL40;
    cpy_r_r26 = PyObject_HasAttr(cpy_r_old, cpy_r_attr);
    if (!cpy_r_r26) goto CPyL23;
    cpy_r_r27 = CPyObject_GetAttr(cpy_r_old, cpy_r_attr);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "replace_object_state", 374, CPyStatic_mypy___util___globals);
        goto CPyL41;
    }
    cpy_r_r28 = PyObject_SetAttr(cpy_r_new, cpy_r_attr, cpy_r_r27);
    CPy_DECREF(cpy_r_attr);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/util.py", "replace_object_state", 374, CPyStatic_mypy___util___globals);
        goto CPyL25;
    } else
        goto CPyL16;
CPyL23: ;
    cpy_r_r30 = PyObject_HasAttr(cpy_r_new, cpy_r_attr);
    if (!cpy_r_r30) goto CPyL40;
    cpy_r_r31 = PyObject_DelAttr(cpy_r_new, cpy_r_attr);
    CPy_DECREF(cpy_r_attr);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/util.py", "replace_object_state", 376, CPyStatic_mypy___util___globals);
    } else
        goto CPyL16;
CPyL25: ;
    cpy_r_r33 = CPy_CatchError();
    cpy_r_r34 = CPyModule_builtins;
    cpy_r_r35 = CPyStatics[6542]; /* 'AttributeError' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "replace_object_state", 381, CPyStatic_mypy___util___globals);
        goto CPyL42;
    }
    cpy_r_r37 = CPy_ExceptionMatches(cpy_r_r36);
    CPy_DecRef(cpy_r_r36);
    if (cpy_r_r37) {
        goto CPyL29;
    } else
        goto CPyL43;
CPyL27: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL30;
    } else
        goto CPyL44;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    CPy_RestoreExcInfo(cpy_r_r33);
    CPy_DecRef(cpy_r_r33.f0);
    CPy_DecRef(cpy_r_r33.f1);
    CPy_DecRef(cpy_r_r33.f2);
    goto CPyL16;
CPyL30: ;
    CPy_RestoreExcInfo(cpy_r_r33);
    CPy_DecRef(cpy_r_r33.f0);
    CPy_DecRef(cpy_r_r33.f1);
    CPy_DecRef(cpy_r_r33.f2);
    cpy_r_r38 = CPy_KeepPropagating();
    if (!cpy_r_r38) goto CPyL34;
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r39 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/util.py", "replace_object_state", 369, CPyStatic_mypy___util___globals);
        goto CPyL34;
    }
    return 1;
CPyL34: ;
    cpy_r_r40 = 2;
    return cpy_r_r40;
CPyL35: ;
    CPy_INCREF(cpy_r_skip_slots);
    goto CPyL4;
CPyL36: ;
    CPy_DecRef(cpy_r_skip_slots);
    goto CPyL34;
CPyL37: ;
    CPy_DECREF(cpy_r_skip_slots);
    CPy_DECREF(cpy_r_r20);
    goto CPyL32;
CPyL38: ;
    CPy_DecRef(cpy_r_skip_slots);
    CPy_DecRef(cpy_r_r20);
    goto CPyL34;
CPyL39: ;
    CPy_DecRef(cpy_r_skip_slots);
    CPy_DecRef(cpy_r_r20);
    CPy_DecRef(cpy_r_attr);
    goto CPyL34;
CPyL40: ;
    CPy_DECREF(cpy_r_attr);
    goto CPyL16;
CPyL41: ;
    CPy_DecRef(cpy_r_attr);
    goto CPyL25;
CPyL42: ;
    CPy_DecRef(cpy_r_skip_slots);
    CPy_DecRef(cpy_r_r20);
    goto CPyL30;
CPyL43: ;
    CPy_DecRef(cpy_r_skip_slots);
    CPy_DecRef(cpy_r_r20);
    goto CPyL27;
CPyL44: ;
    CPy_DecRef(cpy_r_r33.f0);
    CPy_DecRef(cpy_r_r33.f1);
    CPy_DecRef(cpy_r_r33.f2);
    goto CPyL28;
}

PyObject *CPyPy_mypy___util___replace_object_state(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"new", "old", "copy_dict", "skip_slots", 0};
    static CPyArg_Parser parser = {"OO|OO:replace_object_state", kwlist, 0};
    PyObject *obj_new;
    PyObject *obj_old;
    PyObject *obj_copy_dict = NULL;
    PyObject *obj_skip_slots = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_new, &obj_old, &obj_copy_dict, &obj_skip_slots)) {
        return NULL;
    }
    PyObject *arg_new = obj_new;
    PyObject *arg_old = obj_old;
    char arg_copy_dict;
    if (obj_copy_dict == NULL) {
        arg_copy_dict = 2;
    } else if (unlikely(!PyBool_Check(obj_copy_dict))) {
        CPy_TypeError("bool", obj_copy_dict); goto fail;
    } else
        arg_copy_dict = obj_copy_dict == Py_True;
    PyObject * arg_skip_slots;
    if (obj_skip_slots == NULL) {
        arg_skip_slots = NULL;
    } else if (likely(PyTuple_Check(obj_skip_slots)))
        arg_skip_slots = obj_skip_slots;
    else {
        CPy_TypeError("tuple", obj_skip_slots); 
        goto fail;
    }
    char retval = CPyDef_mypy___util___replace_object_state(arg_new, arg_old, arg_copy_dict, arg_skip_slots);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "replace_object_state", 353, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util___is_sub_path(PyObject *cpy_r_path1, PyObject *cpy_r_path2) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = CPyModule_pathlib;
    cpy_r_r1 = CPyStatics[6543]; /* 'Path' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_sub_path", 387, CPyStatic_mypy___util___globals);
        goto CPyL7;
    }
    PyObject *cpy_r_r3[1] = {cpy_r_path2};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r4, 1, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_sub_path", 387, CPyStatic_mypy___util___globals);
        goto CPyL7;
    }
    cpy_r_r6 = CPyModule_pathlib;
    cpy_r_r7 = CPyStatics[6543]; /* 'Path' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_sub_path", 387, CPyStatic_mypy___util___globals);
        goto CPyL8;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_path1};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_sub_path", 387, CPyStatic_mypy___util___globals);
        goto CPyL8;
    }
    cpy_r_r12 = CPyStatics[6544]; /* 'parents' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_sub_path", 387, CPyStatic_mypy___util___globals);
        goto CPyL8;
    }
    cpy_r_r14 = PySequence_Contains(cpy_r_r13, cpy_r_r5);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/util.py", "is_sub_path", 387, CPyStatic_mypy___util___globals);
        goto CPyL7;
    }
    cpy_r_r16 = cpy_r_r14;
    return cpy_r_r16;
CPyL7: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL8: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL7;
}

PyObject *CPyPy_mypy___util___is_sub_path(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"path1", "path2", 0};
    static CPyArg_Parser parser = {"OO:is_sub_path", kwlist, 0};
    PyObject *obj_path1;
    PyObject *obj_path2;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_path1, &obj_path2)) {
        return NULL;
    }
    PyObject *arg_path1;
    if (likely(PyUnicode_Check(obj_path1)))
        arg_path1 = obj_path1;
    else {
        CPy_TypeError("str", obj_path1); 
        goto fail;
    }
    PyObject *arg_path2;
    if (likely(PyUnicode_Check(obj_path2)))
        arg_path2 = obj_path2;
    else {
        CPy_TypeError("str", obj_path2); 
        goto fail;
    }
    char retval = CPyDef_mypy___util___is_sub_path(arg_path1, arg_path2);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "is_sub_path", 385, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util___hard_exit(CPyTagged cpy_r_status) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    if (cpy_r_status != CPY_INT_TAG) goto CPyL10;
    cpy_r_status = 0;
CPyL2: ;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "hard_exit", 395, CPyStatic_mypy___util___globals);
        goto CPyL11;
    }
    cpy_r_r3 = CPyStatics[237]; /* 'flush' */
    PyObject *cpy_r_r4[1] = {cpy_r_r2};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "hard_exit", 395, CPyStatic_mypy___util___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL4: ;
    CPy_DECREF(cpy_r_r2);
    cpy_r_r7 = CPyModule_sys;
    cpy_r_r8 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "hard_exit", 396, CPyStatic_mypy___util___globals);
        goto CPyL11;
    }
    cpy_r_r10 = CPyStatics[237]; /* 'flush' */
    PyObject *cpy_r_r11[1] = {cpy_r_r9};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = PyObject_VectorcallMethod(cpy_r_r10, cpy_r_r12, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "hard_exit", 396, CPyStatic_mypy___util___globals);
        goto CPyL14;
    } else
        goto CPyL15;
CPyL6: ;
    CPy_DECREF(cpy_r_r9);
    cpy_r_r14 = CPyModule_os;
    cpy_r_r15 = CPyStatics[1928]; /* '_exit' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "hard_exit", 397, CPyStatic_mypy___util___globals);
        goto CPyL11;
    }
    cpy_r_r17 = CPyTagged_StealAsObject(cpy_r_status);
    PyObject *cpy_r_r18[1] = {cpy_r_r17};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r19, 1, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "hard_exit", 397, CPyStatic_mypy___util___globals);
        goto CPyL16;
    } else
        goto CPyL17;
CPyL8: ;
    CPy_DECREF(cpy_r_r17);
    return 1;
CPyL9: ;
    cpy_r_r21 = 2;
    return cpy_r_r21;
CPyL10: ;
    CPyTagged_INCREF(cpy_r_status);
    goto CPyL2;
CPyL11: ;
    CPyTagged_DecRef(cpy_r_status);
    goto CPyL9;
CPyL12: ;
    CPyTagged_DecRef(cpy_r_status);
    CPy_DecRef(cpy_r_r2);
    goto CPyL9;
CPyL13: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL4;
CPyL14: ;
    CPyTagged_DecRef(cpy_r_status);
    CPy_DecRef(cpy_r_r9);
    goto CPyL9;
CPyL15: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL6;
CPyL16: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL9;
CPyL17: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL8;
}

PyObject *CPyPy_mypy___util___hard_exit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"status", 0};
    static CPyArg_Parser parser = {"|O:hard_exit", kwlist, 0};
    PyObject *obj_status = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_status)) {
        return NULL;
    }
    CPyTagged arg_status;
    if (obj_status == NULL) {
        arg_status = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_status)))
        arg_status = CPyTagged_BorrowFromObject(obj_status);
    else {
        CPy_TypeError("int", obj_status); goto fail;
    }
    char retval = CPyDef_mypy___util___hard_exit(arg_status);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "hard_exit", 390, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___unmangle(PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyStatics[385]; /* "'" */
    cpy_r_r1 = CPyStatics[272]; /* 'rstrip' */
    PyObject *cpy_r_r2[2] = {cpy_r_name, cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "unmangle", 402, CPyStatic_mypy___util___globals);
        goto CPyL3;
    }
    if (likely(PyUnicode_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "unmangle", 402, CPyStatic_mypy___util___globals, "str", cpy_r_r4);
        goto CPyL3;
    }
    return cpy_r_r5;
CPyL3: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_mypy___util___unmangle(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:unmangle", kwlist, 0};
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
    PyObject *retval = CPyDef_mypy___util___unmangle(arg_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "unmangle", 400, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___get_unique_redefinition_name(PyObject *cpy_r_name, PyObject *cpy_r_existing) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r_name;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    CPyTagged cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    cpy_r_r0 = CPyStatics[5037]; /* '-redefinition' */
    cpy_r_r1 = PyUnicode_Concat(cpy_r_name, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_unique_redefinition_name", 411, CPyStatic_mypy___util___globals);
        goto CPyL13;
    }
    cpy_r_r_name = cpy_r_r1;
    cpy_r_r2 = PySequence_Contains(cpy_r_existing, cpy_r_r_name);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/util.py", "get_unique_redefinition_name", 412, CPyStatic_mypy___util___globals);
        goto CPyL14;
    }
    cpy_r_r4 = cpy_r_r2;
    cpy_r_r5 = cpy_r_r4 ^ 1;
    if (!cpy_r_r5) goto CPyL4;
    return cpy_r_r_name;
CPyL4: ;
    cpy_r_i = 4;
CPyL5: ;
    cpy_r_r6 = CPyTagged_Str(cpy_r_i);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_unique_redefinition_name", 416, CPyStatic_mypy___util___globals);
        goto CPyL15;
    }
    cpy_r_r7 = PyUnicode_Concat(cpy_r_r_name, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_unique_redefinition_name", 416, CPyStatic_mypy___util___globals);
        goto CPyL15;
    }
    cpy_r_r8 = PySequence_Contains(cpy_r_existing, cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/util.py", "get_unique_redefinition_name", 416, CPyStatic_mypy___util___globals);
        goto CPyL15;
    }
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL10;
    cpy_r_r11 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r11;
    goto CPyL5;
CPyL10: ;
    cpy_r_r12 = CPyTagged_Str(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_unique_redefinition_name", 418, CPyStatic_mypy___util___globals);
        goto CPyL14;
    }
    cpy_r_r13 = PyUnicode_Concat(cpy_r_r_name, cpy_r_r12);
    CPy_DECREF(cpy_r_r_name);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_unique_redefinition_name", 418, CPyStatic_mypy___util___globals);
        goto CPyL13;
    }
    return cpy_r_r13;
CPyL13: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
CPyL14: ;
    CPy_DecRef(cpy_r_r_name);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_r_name);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL13;
}

PyObject *CPyPy_mypy___util___get_unique_redefinition_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "existing", 0};
    static CPyArg_Parser parser = {"OO:get_unique_redefinition_name", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_existing;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_existing)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_existing = obj_existing;
    PyObject *retval = CPyDef_mypy___util___get_unique_redefinition_name(arg_name, arg_existing);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "get_unique_redefinition_name", 405, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util___check_python_version(PyObject *cpy_r_program) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T2II cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[1562]; /* 'version_info' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "check_python_version", 424, CPyStatic_mypy___util___globals);
        goto CPyL10;
    }
    if (likely(PyTuple_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "check_python_version", 424, CPyStatic_mypy___util___globals, "tuple", cpy_r_r2);
        goto CPyL10;
    }
    cpy_r_r4 = CPySequenceTuple_GetSlice(cpy_r_r3, 0, 4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "check_python_version", 424, CPyStatic_mypy___util___globals);
        goto CPyL10;
    }
    if (likely(PyTuple_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "check_python_version", 424, CPyStatic_mypy___util___globals, "tuple", cpy_r_r4);
        goto CPyL10;
    }
    cpy_r_r6.f0 = 6;
    cpy_r_r6.f1 = 16;
    CPyTagged_INCREF(cpy_r_r6.f0);
    CPyTagged_INCREF(cpy_r_r6.f1);
    cpy_r_r7 = PyTuple_New(2);
    if (unlikely(cpy_r_r7 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8186 = CPyTagged_StealAsObject(cpy_r_r6.f0);
    PyTuple_SET_ITEM(cpy_r_r7, 0, __tmp8186);
    PyObject *__tmp8187 = CPyTagged_StealAsObject(cpy_r_r6.f1);
    PyTuple_SET_ITEM(cpy_r_r7, 1, __tmp8187);
    cpy_r_r8 = PyObject_RichCompare(cpy_r_r5, cpy_r_r7, 0);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "check_python_version", 424, CPyStatic_mypy___util___globals);
        goto CPyL10;
    }
    if (unlikely(!PyBool_Check(cpy_r_r8))) {
        CPy_TypeError("bool", cpy_r_r8); cpy_r_r9 = 2;
    } else
        cpy_r_r9 = cpy_r_r8 == Py_True;
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/util.py", "check_python_version", 424, CPyStatic_mypy___util___globals);
        goto CPyL10;
    }
    if (!cpy_r_r9) goto CPyL9;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/util.py", "check_python_version", 425, CPyStatic_mypy___util___globals);
        goto CPyL10;
    }
    CPy_Unreachable();
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
}

PyObject *CPyPy_mypy___util___check_python_version(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"program", 0};
    static CPyArg_Parser parser = {"O:check_python_version", kwlist, 0};
    PyObject *obj_program;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_program)) {
        return NULL;
    }
    PyObject *arg_program;
    if (likely(PyUnicode_Check(obj_program)))
        arg_program = obj_program;
    else {
        CPy_TypeError("str", obj_program); 
        goto fail;
    }
    char retval = CPyDef_mypy___util___check_python_version(arg_program);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "check_python_version", 421, CPyStatic_mypy___util___globals);
    return NULL;
}

tuple_T3III CPyDef_mypy___util___count_stats(PyObject *cpy_r_messages) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_errors;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_e_2;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_error_files;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    CPyPtr cpy_r_r32;
    int64_t cpy_r_r33;
    CPyTagged cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_e_3;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    int32_t cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_notes;
    CPyPtr cpy_r_r45;
    int64_t cpy_r_r46;
    CPyTagged cpy_r_r47;
    CPyPtr cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    CPyPtr cpy_r_r51;
    int64_t cpy_r_r52;
    CPyTagged cpy_r_r53;
    tuple_T3III cpy_r_r54;
    tuple_T3III cpy_r_r55;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "count_stats", 433, CPyStatic_mypy___util___globals);
        goto CPyL26;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL8;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_messages, cpy_r_r1);
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "count_stats", 433, CPyStatic_mypy___util___globals, "str", cpy_r_r6);
        goto CPyL27;
    }
    cpy_r_e = cpy_r_r7;
    cpy_r_r8 = CPyStatics[6545]; /* ': error:' */
    cpy_r_r9 = PySequence_Contains(cpy_r_e, cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/util.py", "count_stats", 433, CPyStatic_mypy___util___globals);
        goto CPyL28;
    }
    cpy_r_r11 = cpy_r_r9;
    if (!cpy_r_r11) goto CPyL29;
    cpy_r_r12 = PyList_Append(cpy_r_r0, cpy_r_e);
    CPy_DECREF(cpy_r_e);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/util.py", "count_stats", 433, CPyStatic_mypy___util___globals);
        goto CPyL27;
    }
CPyL7: ;
    cpy_r_r14 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r14;
    goto CPyL2;
CPyL8: ;
    cpy_r_errors = cpy_r_r0;
    cpy_r_r15 = PySet_New(NULL);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "count_stats", 434, CPyStatic_mypy___util___globals);
        goto CPyL30;
    }
    cpy_r_r16 = 0;
CPyL10: ;
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_errors)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = (Py_ssize_t)cpy_r_r16 < (Py_ssize_t)cpy_r_r19;
    if (!cpy_r_r20) goto CPyL17;
    cpy_r_r21 = CPyList_GetItemUnsafe(cpy_r_errors, cpy_r_r16);
    if (likely(PyUnicode_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "count_stats", 434, CPyStatic_mypy___util___globals, "str", cpy_r_r21);
        goto CPyL31;
    }
    cpy_r_e_2 = cpy_r_r22;
    cpy_r_r23 = CPyStatics[171]; /* ':' */
    cpy_r_r24 = PyUnicode_Split(cpy_r_e_2, cpy_r_r23, -1);
    CPy_DECREF(cpy_r_e_2);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "count_stats", 434, CPyStatic_mypy___util___globals);
        goto CPyL31;
    }
    cpy_r_r25 = CPyList_GetItemShort(cpy_r_r24, 0);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "count_stats", 434, CPyStatic_mypy___util___globals);
        goto CPyL31;
    }
    if (likely(PyUnicode_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "count_stats", 434, CPyStatic_mypy___util___globals, "str", cpy_r_r25);
        goto CPyL31;
    }
    cpy_r_r27 = PySet_Add(cpy_r_r15, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/util.py", "count_stats", 434, CPyStatic_mypy___util___globals);
        goto CPyL31;
    }
    cpy_r_r29 = cpy_r_r16 + 2;
    cpy_r_r16 = cpy_r_r29;
    goto CPyL10;
CPyL17: ;
    cpy_r_error_files = cpy_r_r15;
    cpy_r_r30 = PyList_New(0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "count_stats", 435, CPyStatic_mypy___util___globals);
        goto CPyL32;
    }
    cpy_r_r31 = 0;
CPyL19: ;
    cpy_r_r32 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r33 = *(int64_t *)cpy_r_r32;
    cpy_r_r34 = cpy_r_r33 << 1;
    cpy_r_r35 = (Py_ssize_t)cpy_r_r31 < (Py_ssize_t)cpy_r_r34;
    if (!cpy_r_r35) goto CPyL25;
    cpy_r_r36 = CPyList_GetItemUnsafe(cpy_r_messages, cpy_r_r31);
    if (likely(PyUnicode_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "count_stats", 435, CPyStatic_mypy___util___globals, "str", cpy_r_r36);
        goto CPyL33;
    }
    cpy_r_e_3 = cpy_r_r37;
    cpy_r_r38 = CPyStatics[6546]; /* ': note:' */
    cpy_r_r39 = PySequence_Contains(cpy_r_e_3, cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/util.py", "count_stats", 435, CPyStatic_mypy___util___globals);
        goto CPyL34;
    }
    cpy_r_r41 = cpy_r_r39;
    if (!cpy_r_r41) goto CPyL35;
    cpy_r_r42 = PyList_Append(cpy_r_r30, cpy_r_e_3);
    CPy_DECREF(cpy_r_e_3);
    cpy_r_r43 = cpy_r_r42 >= 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/util.py", "count_stats", 435, CPyStatic_mypy___util___globals);
        goto CPyL33;
    }
CPyL24: ;
    cpy_r_r44 = cpy_r_r31 + 2;
    cpy_r_r31 = cpy_r_r44;
    goto CPyL19;
CPyL25: ;
    cpy_r_notes = cpy_r_r30;
    cpy_r_r45 = (CPyPtr)&((PyVarObject *)cpy_r_errors)->ob_size;
    cpy_r_r46 = *(int64_t *)cpy_r_r45;
    CPy_DECREF(cpy_r_errors);
    cpy_r_r47 = cpy_r_r46 << 1;
    cpy_r_r48 = (CPyPtr)&((PyVarObject *)cpy_r_notes)->ob_size;
    cpy_r_r49 = *(int64_t *)cpy_r_r48;
    CPy_DECREF(cpy_r_notes);
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = (CPyPtr)&((PySetObject *)cpy_r_error_files)->used;
    cpy_r_r52 = *(int64_t *)cpy_r_r51;
    CPy_DECREF(cpy_r_error_files);
    cpy_r_r53 = cpy_r_r52 << 1;
    cpy_r_r54.f0 = cpy_r_r47;
    cpy_r_r54.f1 = cpy_r_r50;
    cpy_r_r54.f2 = cpy_r_r53;
    CPyTagged_INCREF(cpy_r_r54.f0);
    CPyTagged_INCREF(cpy_r_r54.f1);
    CPyTagged_INCREF(cpy_r_r54.f2);
    return cpy_r_r54;
CPyL26: ;
    tuple_T3III __tmp8188 = { CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG };
    cpy_r_r55 = __tmp8188;
    return cpy_r_r55;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_e);
    goto CPyL26;
CPyL29: ;
    CPy_DECREF(cpy_r_e);
    goto CPyL7;
CPyL30: ;
    CPy_DecRef(cpy_r_errors);
    goto CPyL26;
CPyL31: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_r15);
    goto CPyL26;
CPyL32: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_error_files);
    goto CPyL26;
CPyL33: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_error_files);
    CPy_DecRef(cpy_r_r30);
    goto CPyL26;
CPyL34: ;
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_error_files);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_e_3);
    goto CPyL26;
CPyL35: ;
    CPy_DECREF(cpy_r_e_3);
    goto CPyL24;
}

PyObject *CPyPy_mypy___util___count_stats(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"messages", 0};
    static CPyArg_Parser parser = {"O:count_stats", kwlist, 0};
    PyObject *obj_messages;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_messages)) {
        return NULL;
    }
    PyObject *arg_messages;
    if (likely(PyList_Check(obj_messages)))
        arg_messages = obj_messages;
    else {
        CPy_TypeError("list", obj_messages); 
        goto fail;
    }
    tuple_T3III retval = CPyDef_mypy___util___count_stats(arg_messages);
    if (retval.f0 == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8189 = CPyTagged_StealAsObject(retval.f0);
    PyTuple_SET_ITEM(retbox, 0, __tmp8189);
    PyObject *__tmp8190 = CPyTagged_StealAsObject(retval.f1);
    PyTuple_SET_ITEM(retbox, 1, __tmp8190);
    PyObject *__tmp8191 = CPyTagged_StealAsObject(retval.f2);
    PyTuple_SET_ITEM(retbox, 2, __tmp8191);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "count_stats", 431, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___split_words(PyObject *cpy_r_msg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_next_word;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_res;
    char cpy_r_allow_break;
    CPyTagged cpy_r_r2;
    int64_t cpy_r_r3;
    char cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_c;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_next_word = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "split_words", 442, CPyStatic_mypy___util___globals);
        goto CPyL23;
    }
    cpy_r_res = cpy_r_r1;
    cpy_r_allow_break = 1;
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = CPyStr_Size_size_t(cpy_r_msg);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/util.py", "split_words", 444, CPyStatic_mypy___util___globals);
        goto CPyL24;
    }
    cpy_r_r5 = cpy_r_r3 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL20;
    cpy_r_r7 = CPyStr_GetItem(cpy_r_msg, cpy_r_r2);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "split_words", 444, CPyStatic_mypy___util___globals);
        goto CPyL24;
    }
    cpy_r_c = cpy_r_r7;
    cpy_r_r8 = CPyStatics[295]; /* ' ' */
    cpy_r_r9 = PyUnicode_Compare(cpy_r_c, cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 == -1;
    if (!cpy_r_r10) goto CPyL8;
    cpy_r_r11 = PyErr_Occurred();
    cpy_r_r12 = cpy_r_r11 != NULL;
    if (!cpy_r_r12) goto CPyL8;
    cpy_r_r13 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/util.py", "split_words", 445, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
CPyL8: ;
    cpy_r_r14 = cpy_r_r9 == 0;
    if (!cpy_r_r14) goto CPyL12;
    if (cpy_r_allow_break) {
        goto CPyL26;
    } else
        goto CPyL12;
CPyL10: ;
    cpy_r_r15 = PyList_Append(cpy_r_res, cpy_r_next_word);
    CPy_DECREF(cpy_r_next_word);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/util.py", "split_words", 446, CPyStatic_mypy___util___globals);
        goto CPyL27;
    }
    cpy_r_r17 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r17);
    cpy_r_next_word = cpy_r_r17;
    goto CPyL19;
CPyL12: ;
    cpy_r_r18 = CPyStatics[178]; /* '"' */
    cpy_r_r19 = PyUnicode_Compare(cpy_r_c, cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 == -1;
    if (!cpy_r_r20) goto CPyL15;
    cpy_r_r21 = PyErr_Occurred();
    cpy_r_r22 = cpy_r_r21 != NULL;
    if (!cpy_r_r22) goto CPyL15;
    cpy_r_r23 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/util.py", "split_words", 449, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
CPyL15: ;
    cpy_r_r24 = cpy_r_r19 == 0;
    if (!cpy_r_r24) goto CPyL17;
    cpy_r_r25 = cpy_r_allow_break ^ 1;
    cpy_r_allow_break = cpy_r_r25;
CPyL17: ;
    cpy_r_r26 = CPyStr_Append(cpy_r_next_word, cpy_r_c);
    CPy_DECREF(cpy_r_c);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "split_words", 451, CPyStatic_mypy___util___globals);
        goto CPyL27;
    }
    cpy_r_next_word = cpy_r_r26;
CPyL19: ;
    cpy_r_r27 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r27;
    goto CPyL2;
CPyL20: ;
    cpy_r_r28 = PyList_Append(cpy_r_res, cpy_r_next_word);
    CPy_DECREF(cpy_r_next_word);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/util.py", "split_words", 452, CPyStatic_mypy___util___globals);
        goto CPyL27;
    }
    return cpy_r_res;
CPyL22: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL23: ;
    CPy_DecRef(cpy_r_next_word);
    goto CPyL22;
CPyL24: ;
    CPy_DecRef(cpy_r_next_word);
    CPy_DecRef(cpy_r_res);
    goto CPyL22;
CPyL25: ;
    CPy_DecRef(cpy_r_next_word);
    CPy_DecRef(cpy_r_res);
    CPy_DecRef(cpy_r_c);
    goto CPyL22;
CPyL26: ;
    CPy_DECREF(cpy_r_c);
    goto CPyL10;
CPyL27: ;
    CPy_DecRef(cpy_r_res);
    goto CPyL22;
}

PyObject *CPyPy_mypy___util___split_words(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"msg", 0};
    static CPyArg_Parser parser = {"O:split_words", kwlist, 0};
    PyObject *obj_msg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_msg)) {
        return NULL;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___util___split_words(arg_msg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "split_words", 439, CPyStatic_mypy___util___globals);
    return NULL;
}

CPyTagged CPyDef_mypy___util___get_terminal_width(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_r23;
    cpy_r_r0 = CPyStatics[6547]; /* 'MYPY_FORCE_TERMINAL_WIDTH' */
    cpy_r_r1 = CPyStatics[3720]; /* '0' */
    cpy_r_r2 = CPyModule_os;
    cpy_r_r3 = CPyStatics[3027]; /* 'getenv' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_terminal_width", 459, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r5[2] = {cpy_r_r0, cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 2, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_terminal_width", 459, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "get_terminal_width", 459, CPyStatic_mypy___util___globals, "str", cpy_r_r7);
        goto CPyL17;
    }
    cpy_r_r9 = CPyLong_FromStr(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_terminal_width", 459, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    if (likely(PyLong_Check(cpy_r_r9)))
        cpy_r_r10 = CPyTagged_FromObject(cpy_r_r9);
    else {
        CPy_TypeError("int", cpy_r_r9); cpy_r_r10 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "get_terminal_width", 459, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    cpy_r_r11 = cpy_r_r10 != 0;
    if (!cpy_r_r11) goto CPyL18;
    cpy_r_r12 = cpy_r_r10;
    goto CPyL16;
CPyL7: ;
    cpy_r_r13 = CPyModule_shutil;
    cpy_r_r14 = CPyStatics[6548]; /* 'get_terminal_size' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_terminal_width", 460, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r15, 0, 0, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_terminal_width", 460, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    if (likely(PyTuple_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "get_terminal_width", 460, CPyStatic_mypy___util___globals, "tuple", cpy_r_r16);
        goto CPyL17;
    }
    cpy_r_r18 = CPyStatics[6549]; /* 'columns' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "get_terminal_width", 460, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    if (likely(PyLong_Check(cpy_r_r19)))
        cpy_r_r20 = CPyTagged_FromObject(cpy_r_r19);
    else {
        CPy_TypeError("int", cpy_r_r19); cpy_r_r20 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "get_terminal_width", 460, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    cpy_r_r21 = cpy_r_r20 != 0;
    if (!cpy_r_r21) goto CPyL19;
    cpy_r_r22 = cpy_r_r20;
    goto CPyL15;
CPyL14: ;
    cpy_r_r22 = 160;
CPyL15: ;
    cpy_r_r12 = cpy_r_r22;
CPyL16: ;
    return cpy_r_r12;
CPyL17: ;
    cpy_r_r23 = CPY_INT_TAG;
    return cpy_r_r23;
CPyL18: ;
    CPyTagged_DECREF(cpy_r_r10);
    goto CPyL7;
CPyL19: ;
    CPyTagged_DECREF(cpy_r_r20);
    goto CPyL14;
}

PyObject *CPyPy_mypy___util___get_terminal_width(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_terminal_width", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    CPyTagged retval = CPyDef_mypy___util___get_terminal_width();
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "get_terminal_width", 456, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___soft_wrap(PyObject *cpy_r_msg, CPyTagged cpy_r_max_len, CPyTagged cpy_r_first_offset, CPyTagged cpy_r_num_indent) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_words;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_next_line;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_lines;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_next_word;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    CPyTagged cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyTagged cpy_r_max_line_len;
    int64_t cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    int64_t cpy_r_r20;
    char cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyTagged cpy_r_r24;
    int64_t cpy_r_r25;
    char cpy_r_r26;
    int64_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_padding;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    if (cpy_r_num_indent != CPY_INT_TAG) goto CPyL31;
    cpy_r_num_indent = 0;
CPyL2: ;
    cpy_r_r0 = CPyDef_mypy___util___split_words(cpy_r_msg);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "soft_wrap", 484, CPyStatic_mypy___util___globals);
        goto CPyL32;
    }
    cpy_r_words = cpy_r_r0;
    cpy_r_r1 = CPyList_Pop(cpy_r_words, 0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "soft_wrap", 485, CPyStatic_mypy___util___globals);
        goto CPyL33;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "soft_wrap", 485, CPyStatic_mypy___util___globals, "str", cpy_r_r1);
        goto CPyL33;
    }
    cpy_r_next_line = cpy_r_r2;
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "soft_wrap", 486, CPyStatic_mypy___util___globals);
        goto CPyL34;
    }
    cpy_r_lines = cpy_r_r3;
CPyL7: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_words)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = cpy_r_r6 != 0;
    if (!cpy_r_r7) goto CPyL35;
    cpy_r_r8 = CPyList_Pop(cpy_r_words, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "soft_wrap", 488, CPyStatic_mypy___util___globals);
        goto CPyL36;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "soft_wrap", 488, CPyStatic_mypy___util___globals, "str", cpy_r_r8);
        goto CPyL36;
    }
    cpy_r_next_word = cpy_r_r9;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_lines)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = cpy_r_r12 != 0;
    if (!cpy_r_r13) goto CPyL12;
    cpy_r_r14 = CPyTagged_Subtract(cpy_r_max_len, cpy_r_num_indent);
    cpy_r_r15 = cpy_r_r14;
    goto CPyL13;
CPyL12: ;
    cpy_r_r16 = CPyTagged_Subtract(cpy_r_max_len, cpy_r_first_offset);
    cpy_r_r15 = cpy_r_r16;
CPyL13: ;
    cpy_r_max_line_len = cpy_r_r15;
    cpy_r_r17 = CPyStr_Size_size_t(cpy_r_next_line);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/util.py", "soft_wrap", 491, CPyStatic_mypy___util___globals);
        goto CPyL37;
    }
    cpy_r_r19 = cpy_r_r17 << 1;
    cpy_r_r20 = CPyStr_Size_size_t(cpy_r_next_word);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/util.py", "soft_wrap", 491, CPyStatic_mypy___util___globals);
        goto CPyL37;
    }
    cpy_r_r22 = cpy_r_r20 << 1;
    cpy_r_r23 = CPyTagged_Add(cpy_r_r19, cpy_r_r22);
    cpy_r_r24 = CPyTagged_Add(cpy_r_r23, 2);
    CPyTagged_DECREF(cpy_r_r23);
    cpy_r_r25 = cpy_r_r24 & 1;
    cpy_r_r26 = cpy_r_r25 != 0;
    if (cpy_r_r26) goto CPyL17;
    cpy_r_r27 = cpy_r_max_line_len & 1;
    cpy_r_r28 = cpy_r_r27 != 0;
    if (!cpy_r_r28) goto CPyL18;
CPyL17: ;
    cpy_r_r29 = CPyTagged_IsLt_(cpy_r_max_line_len, cpy_r_r24);
    CPyTagged_DECREF(cpy_r_max_line_len);
    CPyTagged_DECREF(cpy_r_r24);
    if (cpy_r_r29) {
        goto CPyL22;
    } else
        goto CPyL19;
CPyL18: ;
    cpy_r_r30 = (Py_ssize_t)cpy_r_r24 <= (Py_ssize_t)cpy_r_max_line_len;
    CPyTagged_DECREF(cpy_r_r24);
    CPyTagged_DECREF(cpy_r_max_line_len);
    if (!cpy_r_r30) goto CPyL22;
CPyL19: ;
    cpy_r_r31 = CPyStatics[295]; /* ' ' */
    cpy_r_r32 = PyUnicode_Concat(cpy_r_r31, cpy_r_next_word);
    CPy_DECREF(cpy_r_next_word);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "soft_wrap", 492, CPyStatic_mypy___util___globals);
        goto CPyL36;
    }
    cpy_r_r33 = CPyStr_Append(cpy_r_next_line, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "soft_wrap", 492, CPyStatic_mypy___util___globals);
        goto CPyL38;
    }
    cpy_r_next_line = cpy_r_r33;
    goto CPyL7;
CPyL22: ;
    cpy_r_r34 = PyList_Append(cpy_r_lines, cpy_r_next_line);
    CPy_DECREF(cpy_r_next_line);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/util.py", "soft_wrap", 494, CPyStatic_mypy___util___globals);
        goto CPyL39;
    }
    cpy_r_next_line = cpy_r_next_word;
    goto CPyL7;
CPyL24: ;
    cpy_r_r36 = PyList_Append(cpy_r_lines, cpy_r_next_line);
    CPy_DECREF(cpy_r_next_line);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/util.py", "soft_wrap", 496, CPyStatic_mypy___util___globals);
        goto CPyL40;
    }
    cpy_r_r38 = CPyStatics[189]; /* '\n' */
    cpy_r_r39 = CPyStatics[295]; /* ' ' */
    cpy_r_r40 = CPyTagged_StealAsObject(cpy_r_num_indent);
    cpy_r_r41 = PyNumber_Multiply(cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "soft_wrap", 497, CPyStatic_mypy___util___globals);
        goto CPyL41;
    }
    if (likely(PyUnicode_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "soft_wrap", 497, CPyStatic_mypy___util___globals, "str", cpy_r_r41);
        goto CPyL41;
    }
    cpy_r_r43 = PyUnicode_Concat(cpy_r_r38, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "soft_wrap", 497, CPyStatic_mypy___util___globals);
        goto CPyL41;
    }
    cpy_r_padding = cpy_r_r43;
    cpy_r_r44 = PyUnicode_Join(cpy_r_padding, cpy_r_lines);
    CPy_DECREF(cpy_r_padding);
    CPy_DECREF(cpy_r_lines);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "soft_wrap", 498, CPyStatic_mypy___util___globals);
        goto CPyL30;
    }
    return cpy_r_r44;
CPyL30: ;
    cpy_r_r45 = NULL;
    return cpy_r_r45;
CPyL31: ;
    CPyTagged_INCREF(cpy_r_num_indent);
    goto CPyL2;
CPyL32: ;
    CPyTagged_DecRef(cpy_r_num_indent);
    goto CPyL30;
CPyL33: ;
    CPyTagged_DecRef(cpy_r_num_indent);
    CPy_DecRef(cpy_r_words);
    goto CPyL30;
CPyL34: ;
    CPyTagged_DecRef(cpy_r_num_indent);
    CPy_DecRef(cpy_r_words);
    CPy_DecRef(cpy_r_next_line);
    goto CPyL30;
CPyL35: ;
    CPy_DECREF(cpy_r_words);
    goto CPyL24;
CPyL36: ;
    CPyTagged_DecRef(cpy_r_num_indent);
    CPy_DecRef(cpy_r_words);
    CPy_DecRef(cpy_r_next_line);
    CPy_DecRef(cpy_r_lines);
    goto CPyL30;
CPyL37: ;
    CPyTagged_DecRef(cpy_r_num_indent);
    CPy_DecRef(cpy_r_words);
    CPy_DecRef(cpy_r_next_line);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_next_word);
    CPyTagged_DecRef(cpy_r_max_line_len);
    goto CPyL30;
CPyL38: ;
    CPyTagged_DecRef(cpy_r_num_indent);
    CPy_DecRef(cpy_r_words);
    CPy_DecRef(cpy_r_lines);
    goto CPyL30;
CPyL39: ;
    CPyTagged_DecRef(cpy_r_num_indent);
    CPy_DecRef(cpy_r_words);
    CPy_DecRef(cpy_r_lines);
    CPy_DecRef(cpy_r_next_word);
    goto CPyL30;
CPyL40: ;
    CPyTagged_DecRef(cpy_r_num_indent);
    CPy_DecRef(cpy_r_lines);
    goto CPyL30;
CPyL41: ;
    CPy_DecRef(cpy_r_lines);
    goto CPyL30;
}

PyObject *CPyPy_mypy___util___soft_wrap(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"msg", "max_len", "first_offset", "num_indent", 0};
    static CPyArg_Parser parser = {"OOO|O:soft_wrap", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_max_len;
    PyObject *obj_first_offset;
    PyObject *obj_num_indent = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_msg, &obj_max_len, &obj_first_offset, &obj_num_indent)) {
        return NULL;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    CPyTagged arg_max_len;
    if (likely(PyLong_Check(obj_max_len)))
        arg_max_len = CPyTagged_BorrowFromObject(obj_max_len);
    else {
        CPy_TypeError("int", obj_max_len); goto fail;
    }
    CPyTagged arg_first_offset;
    if (likely(PyLong_Check(obj_first_offset)))
        arg_first_offset = CPyTagged_BorrowFromObject(obj_first_offset);
    else {
        CPy_TypeError("int", obj_first_offset); goto fail;
    }
    CPyTagged arg_num_indent;
    if (obj_num_indent == NULL) {
        arg_num_indent = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_num_indent)))
        arg_num_indent = CPyTagged_BorrowFromObject(obj_num_indent);
    else {
        CPy_TypeError("int", obj_num_indent); goto fail;
    }
    PyObject *retval = CPyDef_mypy___util___soft_wrap(arg_msg, arg_max_len, arg_first_offset, arg_num_indent);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "soft_wrap", 465, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___hash_digest(PyObject *cpy_r_data) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = CPyModule_hashlib;
    cpy_r_r1 = CPyStatics[6550]; /* 'sha256' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "hash_digest", 510, CPyStatic_mypy___util___globals);
        goto CPyL5;
    }
    PyObject *cpy_r_r3[1] = {cpy_r_data};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r4, 1, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "hash_digest", 510, CPyStatic_mypy___util___globals);
        goto CPyL5;
    }
    cpy_r_r6 = CPyStatics[6551]; /* 'hexdigest' */
    PyObject *cpy_r_r7[1] = {cpy_r_r5};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "hash_digest", 510, CPyStatic_mypy___util___globals);
        goto CPyL6;
    }
    CPy_DECREF(cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "hash_digest", 510, CPyStatic_mypy___util___globals, "str", cpy_r_r9);
        goto CPyL5;
    }
    return cpy_r_r10;
CPyL5: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
CPyL6: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL5;
}

PyObject *CPyPy_mypy___util___hash_digest(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"data", 0};
    static CPyArg_Parser parser = {"O:hash_digest", kwlist, 0};
    PyObject *obj_data;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_data)) {
        return NULL;
    }
    PyObject *arg_data;
    if (likely(PyBytes_Check(obj_data) || PyByteArray_Check(obj_data)))
        arg_data = obj_data;
    else {
        CPy_TypeError("bytes", obj_data); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___util___hash_digest(arg_data);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "hash_digest", 501, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___parse_gray_color(PyObject *cpy_r_cup) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    CPyPtr cpy_r_r18;
    CPyPtr cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_set_color;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_gray;
    PyObject *cpy_r_r33;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[305]; /* 'platform' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "parse_gray_color", 515, CPyStatic_mypy___util___globals);
        goto CPyL18;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "parse_gray_color", 515, CPyStatic_mypy___util___globals, "str", cpy_r_r2);
        goto CPyL18;
    }
    cpy_r_r4 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/util.py", "parse_gray_color", 515, CPyStatic_mypy___util___globals);
        goto CPyL18;
    }
CPyL5: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (!cpy_r_r10) goto CPyL8;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/util.py", "parse_gray_color", 516, CPyStatic_mypy___util___globals);
        goto CPyL18;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r12 = CPyStatics[163]; /* '' */
    cpy_r_r13 = CPyBytes_GetSlice(cpy_r_cup, 0, -2);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "parse_gray_color", 517, CPyStatic_mypy___util___globals);
        goto CPyL18;
    }
    cpy_r_r14 = CPy_Decode(cpy_r_r13, NULL, NULL);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "parse_gray_color", 517, CPyStatic_mypy___util___globals);
        goto CPyL18;
    }
    cpy_r_r15 = CPyStatics[6552]; /* 'm' */
    cpy_r_r16 = PyList_New(2);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "parse_gray_color", 517, CPyStatic_mypy___util___globals);
        goto CPyL19;
    }
    cpy_r_r17 = (CPyPtr)&((PyListObject *)cpy_r_r16)->ob_item;
    cpy_r_r18 = *(CPyPtr *)cpy_r_r17;
    *(PyObject * *)cpy_r_r18 = cpy_r_r14;
    cpy_r_r19 = cpy_r_r18 + 8;
    CPy_INCREF(cpy_r_r15);
    *(PyObject * *)cpy_r_r19 = cpy_r_r15;
    cpy_r_r20 = PyUnicode_Join(cpy_r_r12, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "parse_gray_color", 517, CPyStatic_mypy___util___globals);
        goto CPyL18;
    }
    cpy_r_set_color = cpy_r_r20;
    cpy_r_r21 = CPyStatics[344]; /* 'utf-8' */
    cpy_r_r22 = CPy_Encode(cpy_r_set_color, cpy_r_r21, NULL);
    CPy_DECREF(cpy_r_set_color);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "parse_gray_color", 518, CPyStatic_mypy___util___globals);
        goto CPyL18;
    }
    cpy_r_r23 = CPyModule_curses;
    cpy_r_r24 = CPyStatics[6553]; /* 'tparm' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "parse_gray_color", 518, CPyStatic_mypy___util___globals);
        goto CPyL20;
    }
    cpy_r_r26 = CPyStatics[9016]; /* 1 */
    cpy_r_r27 = CPyStatics[9039]; /* 9 */
    PyObject *cpy_r_r28[3] = {cpy_r_r22, cpy_r_r26, cpy_r_r27};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = _PyObject_Vectorcall(cpy_r_r25, cpy_r_r29, 3, 0);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "parse_gray_color", 518, CPyStatic_mypy___util___globals);
        goto CPyL20;
    }
    CPy_DECREF(cpy_r_r22);
    if (likely(PyBytes_Check(cpy_r_r30) || PyByteArray_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "parse_gray_color", 518, CPyStatic_mypy___util___globals, "bytes", cpy_r_r30);
        goto CPyL18;
    }
    cpy_r_r32 = CPy_Decode(cpy_r_r31, NULL, NULL);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "parse_gray_color", 518, CPyStatic_mypy___util___globals);
        goto CPyL18;
    }
    cpy_r_gray = cpy_r_r32;
    return cpy_r_gray;
CPyL18: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL19: ;
    CPy_DecRef(cpy_r_r14);
    goto CPyL18;
CPyL20: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL18;
}

PyObject *CPyPy_mypy___util___parse_gray_color(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cup", 0};
    static CPyArg_Parser parser = {"O:parse_gray_color", kwlist, 0};
    PyObject *obj_cup;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_cup)) {
        return NULL;
    }
    PyObject *arg_cup;
    if (likely(PyBytes_Check(obj_cup) || PyByteArray_Check(obj_cup)))
        arg_cup = obj_cup;
    else {
        CPy_TypeError("bytes", obj_cup); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___util___parse_gray_color(arg_cup);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "parse_gray_color", 513, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util___should_force_color(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_env_var;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    tuple_T3OOO cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = CPyStatics[6554]; /* 'MYPY_FORCE_COLOR' */
    cpy_r_r1 = CPyStatics[6555]; /* 'FORCE_COLOR' */
    cpy_r_r2 = CPyStatics[3720]; /* '0' */
    cpy_r_r3 = CPyModule_os;
    cpy_r_r4 = CPyStatics[3027]; /* 'getenv' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "should_force_color", 523, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r6[2] = {cpy_r_r1, cpy_r_r2};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = _PyObject_Vectorcall(cpy_r_r5, cpy_r_r7, 2, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "should_force_color", 523, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "should_force_color", 523, CPyStatic_mypy___util___globals, "str", cpy_r_r8);
        goto CPyL17;
    }
    cpy_r_r10 = CPyModule_os;
    cpy_r_r11 = CPyStatics[3027]; /* 'getenv' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "should_force_color", 523, CPyStatic_mypy___util___globals);
        goto CPyL18;
    }
    PyObject *cpy_r_r13[2] = {cpy_r_r0, cpy_r_r9};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r14, 2, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "should_force_color", 523, CPyStatic_mypy___util___globals);
        goto CPyL18;
    }
    CPy_DECREF(cpy_r_r9);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "should_force_color", 523, CPyStatic_mypy___util___globals, "str", cpy_r_r15);
        goto CPyL17;
    }
    cpy_r_env_var = cpy_r_r16;
    cpy_r_r17 = CPyLong_FromStr(cpy_r_env_var);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "should_force_color", 525, CPyStatic_mypy___util___globals);
        goto CPyL10;
    }
    if (likely(PyLong_Check(cpy_r_r17)))
        cpy_r_r18 = CPyTagged_FromObject(cpy_r_r17);
    else {
        CPy_TypeError("int", cpy_r_r17); cpy_r_r18 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "should_force_color", 525, CPyStatic_mypy___util___globals);
        goto CPyL10;
    } else
        goto CPyL19;
CPyL9: ;
    cpy_r_r19 = cpy_r_r18 != 0;
    CPyTagged_DECREF(cpy_r_r18);
    return cpy_r_r19;
CPyL10: ;
    cpy_r_r20 = CPy_CatchError();
    cpy_r_r21 = CPyModule_builtins;
    cpy_r_r22 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r23 = CPyObject_GetAttr(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "should_force_color", 526, CPyStatic_mypy___util___globals);
        goto CPyL20;
    }
    cpy_r_r24 = CPy_ExceptionMatches(cpy_r_r23);
    CPy_DecRef(cpy_r_r23);
    if (!cpy_r_r24) goto CPyL21;
    cpy_r_r25 = CPyStr_IsTrue(cpy_r_env_var);
    CPy_DecRef(cpy_r_env_var);
    CPy_RestoreExcInfo(cpy_r_r20);
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    return cpy_r_r25;
CPyL13: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL15;
    } else
        goto CPyL22;
CPyL14: ;
    CPy_Unreachable();
CPyL15: ;
    CPy_RestoreExcInfo(cpy_r_r20);
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    cpy_r_r26 = CPy_KeepPropagating();
    if (!cpy_r_r26) goto CPyL17;
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
CPyL18: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_env_var);
    goto CPyL9;
CPyL20: ;
    CPy_DecRef(cpy_r_env_var);
    goto CPyL15;
CPyL21: ;
    CPy_DecRef(cpy_r_env_var);
    goto CPyL13;
CPyL22: ;
    CPy_DecRef(cpy_r_r20.f0);
    CPy_DecRef(cpy_r_r20.f1);
    CPy_DecRef(cpy_r_r20.f2);
    goto CPyL14;
}

PyObject *CPyPy_mypy___util___should_force_color(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":should_force_color", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    char retval = CPyDef_mypy___util___should_force_color();
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "should_force_color", 522, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util___FancyFormatter_____init__(PyObject *cpy_r_self, PyObject *cpy_r_f_out, PyObject *cpy_r_f_err, char cpy_r_hide_error_codes) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject **cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
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
    char cpy_r_r97;
    char cpy_r_r98;
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_hide_error_codes = cpy_r_hide_error_codes;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[305]; /* 'platform' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 539, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "__init__", 539, CPyStatic_mypy___util___globals, "str", cpy_r_r2);
        goto CPyL67;
    }
    cpy_r_r4 = CPyStatics[6556]; /* 'linux' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/util.py", "__init__", -1, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
CPyL5: ;
    cpy_r_r10 = cpy_r_r5 != 0;
    if (cpy_r_r10) goto CPyL7;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL13;
CPyL7: ;
    cpy_r_r12 = CPyModule_sys;
    cpy_r_r13 = CPyStatics[305]; /* 'platform' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 539, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "__init__", 539, CPyStatic_mypy___util___globals, "str", cpy_r_r14);
        goto CPyL67;
    }
    cpy_r_r16 = CPyStatics[1983]; /* 'darwin' */
    cpy_r_r17 = PyUnicode_Compare(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 == -1;
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = PyErr_Occurred();
    cpy_r_r20 = cpy_r_r19 != NULL;
    if (!cpy_r_r20) goto CPyL12;
    cpy_r_r21 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/util.py", "__init__", -1, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
CPyL12: ;
    cpy_r_r22 = cpy_r_r17 != 0;
    cpy_r_r11 = cpy_r_r22;
CPyL13: ;
    if (cpy_r_r11) goto CPyL15;
    cpy_r_r23 = cpy_r_r11;
    goto CPyL21;
CPyL15: ;
    cpy_r_r24 = CPyModule_sys;
    cpy_r_r25 = CPyStatics[305]; /* 'platform' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 539, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    if (likely(PyUnicode_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "__init__", 539, CPyStatic_mypy___util___globals, "str", cpy_r_r26);
        goto CPyL67;
    }
    cpy_r_r28 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r29 = PyUnicode_Compare(cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r30 = cpy_r_r29 == -1;
    if (!cpy_r_r30) goto CPyL20;
    cpy_r_r31 = PyErr_Occurred();
    cpy_r_r32 = cpy_r_r31 != NULL;
    if (!cpy_r_r32) goto CPyL20;
    cpy_r_r33 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/util.py", "__init__", -1, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
CPyL20: ;
    cpy_r_r34 = cpy_r_r29 != 0;
    cpy_r_r23 = cpy_r_r34;
CPyL21: ;
    if (cpy_r_r23) goto CPyL23;
    cpy_r_r35 = cpy_r_r23;
    goto CPyL29;
CPyL23: ;
    cpy_r_r36 = CPyModule_sys;
    cpy_r_r37 = CPyStatics[305]; /* 'platform' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 539, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    if (likely(PyUnicode_Check(cpy_r_r38)))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "__init__", 539, CPyStatic_mypy___util___globals, "str", cpy_r_r38);
        goto CPyL67;
    }
    cpy_r_r40 = CPyStatics[4224]; /* 'emscripten' */
    cpy_r_r41 = PyUnicode_Compare(cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r42 = cpy_r_r41 == -1;
    if (!cpy_r_r42) goto CPyL28;
    cpy_r_r43 = PyErr_Occurred();
    cpy_r_r44 = cpy_r_r43 != NULL;
    if (!cpy_r_r44) goto CPyL28;
    cpy_r_r45 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/util.py", "__init__", -1, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
CPyL28: ;
    cpy_r_r46 = cpy_r_r41 != 0;
    cpy_r_r35 = cpy_r_r46;
CPyL29: ;
    if (!cpy_r_r35) goto CPyL31;
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_dummy_term = 1;
    return 1;
CPyL31: ;
    cpy_r_r47 = CPyDef_mypy___util___should_force_color();
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 542, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    if (cpy_r_r47) goto CPyL40;
    cpy_r_r48 = CPyStatics[1749]; /* 'isatty' */
    PyObject *cpy_r_r49[1] = {cpy_r_f_out};
    cpy_r_r50 = (PyObject **)&cpy_r_r49;
    cpy_r_r51 = PyObject_VectorcallMethod(cpy_r_r48, cpy_r_r50, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 542, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    if (unlikely(!PyBool_Check(cpy_r_r51))) {
        CPy_TypeError("bool", cpy_r_r51); cpy_r_r52 = 2;
    } else
        cpy_r_r52 = cpy_r_r51 == Py_True;
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 542, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    if (!cpy_r_r52) goto CPyL39;
    cpy_r_r53 = CPyStatics[1749]; /* 'isatty' */
    PyObject *cpy_r_r54[1] = {cpy_r_f_err};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = PyObject_VectorcallMethod(cpy_r_r53, cpy_r_r55, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 542, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    if (unlikely(!PyBool_Check(cpy_r_r56))) {
        CPy_TypeError("bool", cpy_r_r56); cpy_r_r57 = 2;
    } else
        cpy_r_r57 = cpy_r_r56 == Py_True;
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 542, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    if (cpy_r_r57) goto CPyL40;
CPyL39: ;
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_dummy_term = 1;
    return 1;
CPyL40: ;
    cpy_r_r58 = CPyModule_sys;
    cpy_r_r59 = CPyStatics[305]; /* 'platform' */
    cpy_r_r60 = CPyObject_GetAttr(cpy_r_r58, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 545, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    if (likely(PyUnicode_Check(cpy_r_r60)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "__init__", 545, CPyStatic_mypy___util___globals, "str", cpy_r_r60);
        goto CPyL67;
    }
    cpy_r_r62 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r63 = PyUnicode_Compare(cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r64 = cpy_r_r63 == -1;
    if (!cpy_r_r64) goto CPyL45;
    cpy_r_r65 = PyErr_Occurred();
    cpy_r_r66 = cpy_r_r65 != NULL;
    if (!cpy_r_r66) goto CPyL45;
    cpy_r_r67 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 545, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
CPyL45: ;
    cpy_r_r68 = cpy_r_r63 == 0;
    if (!cpy_r_r68) goto CPyL48;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r69 = 0;
    if (unlikely(!cpy_r_r69)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 546, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL48: ;
    cpy_r_r70 = CPyModule_sys;
    cpy_r_r71 = CPyStatics[305]; /* 'platform' */
    cpy_r_r72 = CPyObject_GetAttr(cpy_r_r70, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 547, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    if (likely(PyUnicode_Check(cpy_r_r72)))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "__init__", 547, CPyStatic_mypy___util___globals, "str", cpy_r_r72);
        goto CPyL67;
    }
    cpy_r_r74 = CPyStatics[4224]; /* 'emscripten' */
    cpy_r_r75 = PyUnicode_Compare(cpy_r_r73, cpy_r_r74);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r76 = cpy_r_r75 == -1;
    if (!cpy_r_r76) goto CPyL53;
    cpy_r_r77 = PyErr_Occurred();
    cpy_r_r78 = cpy_r_r77 != NULL;
    if (!cpy_r_r78) goto CPyL53;
    cpy_r_r79 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 547, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
CPyL53: ;
    cpy_r_r80 = cpy_r_r75 == 0;
    if (!cpy_r_r80) goto CPyL56;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r81 = 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 548, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    CPy_Unreachable();
CPyL56: ;
    cpy_r_r82 = CPyDef_mypy___util___FancyFormatter___initialize_unix_colors(cpy_r_self);
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 550, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    cpy_r_r83 = cpy_r_r82 ^ 1;
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_dummy_term = cpy_r_r83;
    cpy_r_r84 = 1;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 550, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    cpy_r_r85 = ((mypy___util___FancyFormatterObject *)cpy_r_self)->_dummy_term;
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AttributeError("mypy/util.py", "__init__", "FancyFormatter", "dummy_term", 551, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
CPyL59: ;
    if (cpy_r_r85) goto CPyL66;
CPyL60: ;
    cpy_r_r86 = CPyStatics[3069]; /* 'red' */
    cpy_r_r87 = ((mypy___util___FancyFormatterObject *)cpy_r_self)->_RED;
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AttributeError("mypy/util.py", "__init__", "FancyFormatter", "RED", 553, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r87);
CPyL61: ;
    cpy_r_r88 = CPyStatics[6557]; /* 'green' */
    cpy_r_r89 = ((mypy___util___FancyFormatterObject *)cpy_r_self)->_GREEN;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("mypy/util.py", "__init__", "FancyFormatter", "GREEN", 554, CPyStatic_mypy___util___globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r89);
CPyL62: ;
    cpy_r_r90 = CPyStatics[6558]; /* 'blue' */
    cpy_r_r91 = ((mypy___util___FancyFormatterObject *)cpy_r_self)->_BLUE;
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AttributeError("mypy/util.py", "__init__", "FancyFormatter", "BLUE", 555, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r91);
CPyL63: ;
    cpy_r_r92 = CPyStatics[6559]; /* 'yellow' */
    cpy_r_r93 = ((mypy___util___FancyFormatterObject *)cpy_r_self)->_YELLOW;
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AttributeError("mypy/util.py", "__init__", "FancyFormatter", "YELLOW", 556, CPyStatic_mypy___util___globals);
        goto CPyL70;
    }
    CPy_INCREF(cpy_r_r93);
CPyL64: ;
    cpy_r_r94 = CPyStatics[203]; /* 'none' */
    cpy_r_r95 = CPyStatics[163]; /* '' */
    cpy_r_r96 = CPyDict_Build(5, cpy_r_r86, cpy_r_r87, cpy_r_r88, cpy_r_r89, cpy_r_r90, cpy_r_r91, cpy_r_r92, cpy_r_r93, cpy_r_r94, cpy_r_r95);
    CPy_DECREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 552, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_colors != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_colors);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_colors = cpy_r_r96;
    cpy_r_r97 = 1;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypy/util.py", "__init__", 552, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
CPyL66: ;
    return 1;
CPyL67: ;
    cpy_r_r98 = 2;
    return cpy_r_r98;
CPyL68: ;
    CPy_DecRef(cpy_r_r87);
    goto CPyL67;
CPyL69: ;
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r89);
    goto CPyL67;
CPyL70: ;
    CPy_DecRef(cpy_r_r87);
    CPy_DecRef(cpy_r_r89);
    CPy_DecRef(cpy_r_r91);
    goto CPyL67;
}

PyObject *CPyPy_mypy___util___FancyFormatter_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"f_out", "f_err", "hide_error_codes", 0};
    PyObject *obj_f_out;
    PyObject *obj_f_err;
    PyObject *obj_hide_error_codes;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO", "__init__", kwlist, &obj_f_out, &obj_f_err, &obj_hide_error_codes)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___util___FancyFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.util.FancyFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_f_out = obj_f_out;
    PyObject *arg_f_err = obj_f_err;
    char arg_hide_error_codes;
    if (unlikely(!PyBool_Check(obj_hide_error_codes))) {
        CPy_TypeError("bool", obj_hide_error_codes); goto fail;
    } else
        arg_hide_error_codes = obj_hide_error_codes == Py_True;
    char retval = CPyDef_mypy___util___FancyFormatter_____init__(arg_self, arg_f_out, arg_f_err, arg_hide_error_codes);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "__init__", 536, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util___FancyFormatter___initialize_vt100_colors(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[305]; /* 'platform' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_vt100_colors", 563, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_vt100_colors", 563, CPyStatic_mypy___util___globals, "str", cpy_r_r2);
        goto CPyL25;
    }
    cpy_r_r4 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/util.py", "initialize_vt100_colors", -1, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
CPyL5: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (!cpy_r_r10) goto CPyL7;
    cpy_r_r11 = cpy_r_r10;
    goto CPyL13;
CPyL7: ;
    cpy_r_r12 = CPyModule_sys;
    cpy_r_r13 = CPyStatics[305]; /* 'platform' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_vt100_colors", 563, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_vt100_colors", 563, CPyStatic_mypy___util___globals, "str", cpy_r_r14);
        goto CPyL25;
    }
    cpy_r_r16 = CPyStatics[4224]; /* 'emscripten' */
    cpy_r_r17 = PyUnicode_Compare(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 == -1;
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = PyErr_Occurred();
    cpy_r_r20 = cpy_r_r19 != NULL;
    if (!cpy_r_r20) goto CPyL12;
    cpy_r_r21 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/util.py", "initialize_vt100_colors", -1, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
CPyL12: ;
    cpy_r_r22 = cpy_r_r17 == 0;
    cpy_r_r11 = cpy_r_r22;
CPyL13: ;
    if (cpy_r_r11) goto CPyL16;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/util.py", "initialize_vt100_colors", 563, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r24 = CPyStatics[6560]; /* '\x1b[1m' */
    CPy_INCREF(cpy_r_r24);
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_BOLD != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_BOLD);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_BOLD = cpy_r_r24;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/util.py", "initialize_vt100_colors", 564, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    cpy_r_r26 = CPyStatics[6561]; /* '\x1b[4m' */
    CPy_INCREF(cpy_r_r26);
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_UNDER != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_UNDER);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_UNDER = cpy_r_r26;
    cpy_r_r27 = 1;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/util.py", "initialize_vt100_colors", 565, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    cpy_r_r28 = CPyStatics[6562]; /* '\x1b[94m' */
    CPy_INCREF(cpy_r_r28);
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_BLUE != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_BLUE);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_BLUE = cpy_r_r28;
    cpy_r_r29 = 1;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/util.py", "initialize_vt100_colors", 566, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    cpy_r_r30 = CPyStatics[6563]; /* '\x1b[92m' */
    CPy_INCREF(cpy_r_r30);
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_GREEN != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_GREEN);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_GREEN = cpy_r_r30;
    cpy_r_r31 = 1;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/util.py", "initialize_vt100_colors", 567, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    cpy_r_r32 = CPyStatics[6564]; /* '\x1b[91m' */
    CPy_INCREF(cpy_r_r32);
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_RED != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_RED);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_RED = cpy_r_r32;
    cpy_r_r33 = 1;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/util.py", "initialize_vt100_colors", 568, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    cpy_r_r34 = CPyStatics[6565]; /* '\x1b[93m' */
    CPy_INCREF(cpy_r_r34);
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_YELLOW != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_YELLOW);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_YELLOW = cpy_r_r34;
    cpy_r_r35 = 1;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/util.py", "initialize_vt100_colors", 569, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    cpy_r_r36 = CPyStatics[6566]; /* '\x1b[0m' */
    CPy_INCREF(cpy_r_r36);
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_NORMAL != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_NORMAL);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_NORMAL = cpy_r_r36;
    cpy_r_r37 = 1;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/util.py", "initialize_vt100_colors", 570, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    cpy_r_r38 = CPyStatics[6567]; /* '\x1b[2m' */
    CPy_INCREF(cpy_r_r38);
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_DIM != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_DIM);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_DIM = cpy_r_r38;
    cpy_r_r39 = 1;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/util.py", "initialize_vt100_colors", 571, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    return 1;
CPyL25: ;
    cpy_r_r40 = 2;
    return cpy_r_r40;
}

PyObject *CPyPy_mypy___util___FancyFormatter___initialize_vt100_colors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":initialize_vt100_colors", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___util___FancyFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.util.FancyFormatter", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypy___util___FancyFormatter___initialize_vt100_colors(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "initialize_vt100_colors", 560, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util___FancyFormatter___initialize_win_colors(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[305]; /* 'platform' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_win_colors", 579, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_win_colors", 579, CPyStatic_mypy___util___globals, "str", cpy_r_r2);
        goto CPyL17;
    }
    cpy_r_r4 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/util.py", "initialize_win_colors", 579, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
CPyL5: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (cpy_r_r10) goto CPyL8;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/util.py", "initialize_win_colors", 579, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r12 = CPyModule_sys;
    cpy_r_r13 = CPyStatics[305]; /* 'platform' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_win_colors", 580, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_win_colors", 580, CPyStatic_mypy___util___globals, "str", cpy_r_r14);
        goto CPyL17;
    }
    cpy_r_r16 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r17 = PyUnicode_Compare(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r18 = cpy_r_r17 == -1;
    if (!cpy_r_r18) goto CPyL13;
    cpy_r_r19 = PyErr_Occurred();
    cpy_r_r20 = cpy_r_r19 != NULL;
    if (!cpy_r_r20) goto CPyL13;
    cpy_r_r21 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/util.py", "initialize_win_colors", 580, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
CPyL13: ;
    cpy_r_r22 = cpy_r_r17 == 0;
    if (!cpy_r_r22) goto CPyL16;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/util.py", "initialize_win_colors", 581, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL16: ;
    return 0;
CPyL17: ;
    cpy_r_r24 = 2;
    return cpy_r_r24;
}

PyObject *CPyPy_mypy___util___FancyFormatter___initialize_win_colors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":initialize_win_colors", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___util___FancyFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.util.FancyFormatter", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypy___util___FancyFormatter___initialize_win_colors(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "initialize_win_colors", 574, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util___FancyFormatter___initialize_unix_colors(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    CPyTagged cpy_r_fd;
    tuple_T3OOO cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
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
    PyObject *cpy_r_f;
    PyObject *cpy_r_r45;
    PyObject **cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    tuple_T3OOO cpy_r_r58;
    tuple_T3OOO cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    int32_t cpy_r_r66;
    char cpy_r_r67;
    char cpy_r_r68;
    char cpy_r_r69;
    tuple_T3OOO cpy_r_r70;
    tuple_T3OOO cpy_r_r71;
    tuple_T3OOO cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject **cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject **cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    tuple_T3OOO cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject **cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_bold;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject **cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_under;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject **cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_set_color;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject **cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_set_eseq;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject **cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_normal;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    char cpy_r_r140;
    PyObject *cpy_r_r141;
    int32_t cpy_r_r142;
    char cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    char cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    int32_t cpy_r_r154;
    char cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    char cpy_r_r158;
    PyObject *cpy_r_r159;
    int32_t cpy_r_r160;
    char cpy_r_r161;
    char cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    char cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    CPyTagged cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject **cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    char cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    CPyTagged cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject **cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    CPyTagged cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject **cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    char cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    CPyTagged cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject **cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    char cpy_r_r234;
    char cpy_r_r235;
    cpy_r_r0 = CPyModule_sys;
    cpy_r_r1 = CPyStatics[305]; /* 'platform' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 606, CPyStatic_mypy___util___globals);
        goto CPyL143;
    }
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 606, CPyStatic_mypy___util___globals, "str", cpy_r_r2);
        goto CPyL143;
    }
    cpy_r_r4 = CPyStatics[1915]; /* 'win32' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL5;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 606, CPyStatic_mypy___util___globals);
        goto CPyL143;
    }
CPyL5: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    if (cpy_r_r10) goto CPyL9;
    cpy_r_r11 = CPyStatic_mypy___util___globals;
    cpy_r_r12 = CPyStatics[6568]; /* 'CURSES_ENABLED' */
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 606, CPyStatic_mypy___util___globals);
        goto CPyL143;
    }
    if (unlikely(!PyBool_Check(cpy_r_r13))) {
        CPy_TypeError("bool", cpy_r_r13); cpy_r_r14 = 2;
    } else
        cpy_r_r14 = cpy_r_r13 == Py_True;
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 606, CPyStatic_mypy___util___globals);
        goto CPyL143;
    }
    if (cpy_r_r14) goto CPyL10;
CPyL9: ;
    return 0;
CPyL10: ;
    cpy_r_r15 = CPyModule_sys;
    cpy_r_r16 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r17 = CPyObject_GetAttr(cpy_r_r15, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 613, CPyStatic_mypy___util___globals);
        goto CPyL14;
    }
    cpy_r_r18 = CPyStatics[1743]; /* 'fileno' */
    PyObject *cpy_r_r19[1] = {cpy_r_r17};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_VectorcallMethod(cpy_r_r18, cpy_r_r20, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 613, CPyStatic_mypy___util___globals);
        goto CPyL144;
    }
    CPy_DECREF(cpy_r_r17);
    if (likely(PyLong_Check(cpy_r_r21)))
        cpy_r_r22 = CPyTagged_FromObject(cpy_r_r21);
    else {
        CPy_TypeError("int", cpy_r_r21); cpy_r_r22 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 613, CPyStatic_mypy___util___globals);
        goto CPyL14;
    }
    cpy_r_fd = cpy_r_r22;
    goto CPyL52;
CPyL14: ;
    cpy_r_r23 = CPy_CatchError();
    cpy_r_r24 = CPyModule_io;
    cpy_r_r25 = CPyStatics[6569]; /* 'UnsupportedOperation' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 614, CPyStatic_mypy___util___globals);
        goto CPyL50;
    }
    cpy_r_r27 = CPy_ExceptionMatches(cpy_r_r26);
    CPy_DecRef(cpy_r_r26);
    if (!cpy_r_r27) goto CPyL47;
    cpy_r_r28 = CPyStatics[1925]; /* '/dev/null' */
    cpy_r_r29 = CPyStatics[198]; /* 'rb' */
    cpy_r_r30 = CPyModule_builtins;
    cpy_r_r31 = CPyStatics[199]; /* 'open' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 615, CPyStatic_mypy___util___globals);
        goto CPyL50;
    }
    PyObject *cpy_r_r33[2] = {cpy_r_r28, cpy_r_r29};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = _PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 2, 0);
    CPy_DecRef(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 615, CPyStatic_mypy___util___globals);
        goto CPyL50;
    }
    cpy_r_r36 = PyObject_Type(cpy_r_r35);
    cpy_r_r37 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 615, CPyStatic_mypy___util___globals);
        goto CPyL145;
    }
    cpy_r_r39 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r39);
    CPy_DecRef(cpy_r_r36);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 615, CPyStatic_mypy___util___globals);
        goto CPyL146;
    }
    PyObject *cpy_r_r41[1] = {cpy_r_r35};
    cpy_r_r42 = (PyObject **)&cpy_r_r41;
    cpy_r_r43 = _PyObject_Vectorcall(cpy_r_r40, cpy_r_r42, 1, 0);
    CPy_DecRef(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 615, CPyStatic_mypy___util___globals);
        goto CPyL146;
    }
    cpy_r_r44 = 1;
    cpy_r_f = cpy_r_r43;
    cpy_r_r45 = CPyStatics[1743]; /* 'fileno' */
    PyObject *cpy_r_r46[1] = {cpy_r_f};
    cpy_r_r47 = (PyObject **)&cpy_r_r46;
    cpy_r_r48 = PyObject_VectorcallMethod(cpy_r_r45, cpy_r_r47, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 616, CPyStatic_mypy___util___globals);
        goto CPyL147;
    }
    CPy_DecRef(cpy_r_f);
    if (likely(PyLong_Check(cpy_r_r48)))
        cpy_r_r49 = CPyTagged_FromObject(cpy_r_r48);
    else {
        CPy_TypeError("int", cpy_r_r48); cpy_r_r49 = CPY_INT_TAG;
    }
    CPy_DecRef(cpy_r_r48);
    if (unlikely(cpy_r_r49 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 616, CPyStatic_mypy___util___globals);
        goto CPyL27;
    }
    cpy_r_r50 = CPyModule_curses;
    cpy_r_r51 = CPyStatics[6570]; /* 'setupterm' */
    cpy_r_r52 = CPyObject_GetAttr(cpy_r_r50, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 616, CPyStatic_mypy___util___globals);
        goto CPyL148;
    }
    cpy_r_r53 = CPyTagged_StealAsObject(cpy_r_r49);
    PyObject *cpy_r_r54[1] = {cpy_r_r53};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = CPyStatics[9890]; /* ('fd',) */
    cpy_r_r57 = _PyObject_Vectorcall(cpy_r_r52, cpy_r_r55, 0, cpy_r_r56);
    CPy_DecRef(cpy_r_r52);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 616, CPyStatic_mypy___util___globals);
        goto CPyL149;
    } else
        goto CPyL150;
CPyL26: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL35;
CPyL27: ;
    cpy_r_r58 = CPy_CatchError();
    cpy_r_r44 = 0;
    cpy_r_r59 = CPy_GetExcInfo();
    cpy_r_r60 = cpy_r_r59.f0;
    CPy_INCREF(cpy_r_r60);
    cpy_r_r61 = cpy_r_r59.f1;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r62 = cpy_r_r59.f2;
    CPy_INCREF(cpy_r_r62);
    CPy_DecRef(cpy_r_r59.f0);
    CPy_DecRef(cpy_r_r59.f1);
    CPy_DecRef(cpy_r_r59.f2);
    PyObject *cpy_r_r63[4] = {cpy_r_r35, cpy_r_r60, cpy_r_r61, cpy_r_r62};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r64, 4, 0);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 615, CPyStatic_mypy___util___globals);
        goto CPyL151;
    }
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    cpy_r_r66 = PyObject_IsTrue(cpy_r_r65);
    CPy_DecRef(cpy_r_r65);
    cpy_r_r67 = cpy_r_r66 >= 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 615, CPyStatic_mypy___util___globals);
        goto CPyL33;
    }
    cpy_r_r68 = cpy_r_r66;
    if (cpy_r_r68) goto CPyL32;
    CPy_Reraise();
    if (!0) {
        goto CPyL33;
    } else
        goto CPyL152;
CPyL31: ;
    CPy_Unreachable();
CPyL32: ;
    CPy_RestoreExcInfo(cpy_r_r58);
    CPy_DecRef(cpy_r_r58.f0);
    CPy_DecRef(cpy_r_r58.f1);
    CPy_DecRef(cpy_r_r58.f2);
    goto CPyL35;
CPyL33: ;
    CPy_RestoreExcInfo(cpy_r_r58);
    CPy_DecRef(cpy_r_r58.f0);
    CPy_DecRef(cpy_r_r58.f1);
    CPy_DecRef(cpy_r_r58.f2);
    cpy_r_r69 = CPy_KeepPropagating();
    if (!cpy_r_r69) {
        goto CPyL36;
    } else
        goto CPyL153;
CPyL34: ;
    CPy_Unreachable();
CPyL35: ;
    tuple_T3OOO __tmp8192 = { NULL, NULL, NULL };
    cpy_r_r70 = __tmp8192;
    cpy_r_r71 = cpy_r_r70;
    goto CPyL37;
CPyL36: ;
    cpy_r_r72 = CPy_CatchError();
    cpy_r_r71 = cpy_r_r72;
CPyL37: ;
    if (!cpy_r_r44) goto CPyL154;
    cpy_r_r73 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r74[4] = {cpy_r_r35, cpy_r_r73, cpy_r_r73, cpy_r_r73};
    cpy_r_r75 = (PyObject **)&cpy_r_r74;
    cpy_r_r76 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r75, 4, 0);
    CPy_DecRef(cpy_r_r38);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 615, CPyStatic_mypy___util___globals);
        goto CPyL155;
    } else
        goto CPyL156;
CPyL39: ;
    CPy_DecRef(cpy_r_r35);
CPyL40: ;
    if (cpy_r_r71.f0 == NULL) goto CPyL49;
    CPy_Reraise();
    if (!0) {
        goto CPyL43;
    } else
        goto CPyL157;
CPyL42: ;
    CPy_Unreachable();
CPyL43: ;
    if (cpy_r_r71.f0 == NULL) goto CPyL45;
    CPy_RestoreExcInfo(cpy_r_r71);
    CPy_XDecRef(cpy_r_r71.f0);
    CPy_XDecRef(cpy_r_r71.f1);
    CPy_XDecRef(cpy_r_r71.f2);
CPyL45: ;
    cpy_r_r77 = CPy_KeepPropagating();
    if (!cpy_r_r77) {
        goto CPyL50;
    } else
        goto CPyL158;
CPyL46: ;
    CPy_Unreachable();
CPyL47: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL50;
    } else
        goto CPyL159;
CPyL48: ;
    CPy_Unreachable();
CPyL49: ;
    CPy_RestoreExcInfo(cpy_r_r23);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL62;
CPyL50: ;
    CPy_RestoreExcInfo(cpy_r_r23);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    cpy_r_r78 = CPy_KeepPropagating();
    if (!cpy_r_r78) goto CPyL55;
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r79 = CPyModule_curses;
    cpy_r_r80 = CPyStatics[6570]; /* 'setupterm' */
    cpy_r_r81 = CPyObject_GetAttr(cpy_r_r79, cpy_r_r80);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 618, CPyStatic_mypy___util___globals);
        goto CPyL160;
    }
    cpy_r_r82 = CPyTagged_StealAsObject(cpy_r_fd);
    PyObject *cpy_r_r83[1] = {cpy_r_r82};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = CPyStatics[9890]; /* ('fd',) */
    cpy_r_r86 = _PyObject_Vectorcall(cpy_r_r81, cpy_r_r84, 0, cpy_r_r85);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 618, CPyStatic_mypy___util___globals);
        goto CPyL161;
    } else
        goto CPyL162;
CPyL54: ;
    CPy_DECREF(cpy_r_r82);
    goto CPyL62;
CPyL55: ;
    cpy_r_r87 = CPy_CatchError();
    cpy_r_r88 = CPyModule_curses;
    cpy_r_r89 = CPyStatics[401]; /* 'error' */
    cpy_r_r90 = CPyObject_GetAttr(cpy_r_r88, cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 619, CPyStatic_mypy___util___globals);
        goto CPyL60;
    }
    cpy_r_r91 = CPy_ExceptionMatches(cpy_r_r90);
    CPy_DecRef(cpy_r_r90);
    if (!cpy_r_r91) goto CPyL58;
    CPy_RestoreExcInfo(cpy_r_r87);
    CPy_DecRef(cpy_r_r87.f0);
    CPy_DecRef(cpy_r_r87.f1);
    CPy_DecRef(cpy_r_r87.f2);
    return 0;
CPyL58: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL60;
    } else
        goto CPyL163;
CPyL59: ;
    CPy_Unreachable();
CPyL60: ;
    CPy_RestoreExcInfo(cpy_r_r87);
    CPy_DecRef(cpy_r_r87.f0);
    CPy_DecRef(cpy_r_r87.f1);
    CPy_DecRef(cpy_r_r87.f2);
    cpy_r_r92 = CPy_KeepPropagating();
    if (!cpy_r_r92) goto CPyL143;
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r93 = CPyStatics[6572]; /* 'bold' */
    cpy_r_r94 = CPyModule_curses;
    cpy_r_r95 = CPyStatics[6573]; /* 'tigetstr' */
    cpy_r_r96 = CPyObject_GetAttr(cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 622, CPyStatic_mypy___util___globals);
        goto CPyL143;
    }
    PyObject *cpy_r_r97[1] = {cpy_r_r93};
    cpy_r_r98 = (PyObject **)&cpy_r_r97;
    cpy_r_r99 = _PyObject_Vectorcall(cpy_r_r96, cpy_r_r98, 1, 0);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 622, CPyStatic_mypy___util___globals);
        goto CPyL143;
    }
    if (PyBytes_Check(cpy_r_r99) || PyByteArray_Check(cpy_r_r99))
        cpy_r_r100 = cpy_r_r99;
    else {
        cpy_r_r100 = NULL;
    }
    if (cpy_r_r100 != NULL) goto __LL8193;
    if (cpy_r_r99 == Py_None)
        cpy_r_r100 = cpy_r_r99;
    else {
        cpy_r_r100 = NULL;
    }
    if (cpy_r_r100 != NULL) goto __LL8193;
    CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 622, CPyStatic_mypy___util___globals, "bytes or None", cpy_r_r99);
    goto CPyL143;
__LL8193: ;
    cpy_r_bold = cpy_r_r100;
    cpy_r_r101 = CPyStatics[6574]; /* 'smul' */
    cpy_r_r102 = CPyModule_curses;
    cpy_r_r103 = CPyStatics[6573]; /* 'tigetstr' */
    cpy_r_r104 = CPyObject_GetAttr(cpy_r_r102, cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 623, CPyStatic_mypy___util___globals);
        goto CPyL164;
    }
    PyObject *cpy_r_r105[1] = {cpy_r_r101};
    cpy_r_r106 = (PyObject **)&cpy_r_r105;
    cpy_r_r107 = _PyObject_Vectorcall(cpy_r_r104, cpy_r_r106, 1, 0);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 623, CPyStatic_mypy___util___globals);
        goto CPyL164;
    }
    if (PyBytes_Check(cpy_r_r107) || PyByteArray_Check(cpy_r_r107))
        cpy_r_r108 = cpy_r_r107;
    else {
        cpy_r_r108 = NULL;
    }
    if (cpy_r_r108 != NULL) goto __LL8194;
    if (cpy_r_r107 == Py_None)
        cpy_r_r108 = cpy_r_r107;
    else {
        cpy_r_r108 = NULL;
    }
    if (cpy_r_r108 != NULL) goto __LL8194;
    CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 623, CPyStatic_mypy___util___globals, "bytes or None", cpy_r_r107);
    goto CPyL164;
__LL8194: ;
    cpy_r_under = cpy_r_r108;
    cpy_r_r109 = CPyStatics[6575]; /* 'setaf' */
    cpy_r_r110 = CPyModule_curses;
    cpy_r_r111 = CPyStatics[6573]; /* 'tigetstr' */
    cpy_r_r112 = CPyObject_GetAttr(cpy_r_r110, cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 624, CPyStatic_mypy___util___globals);
        goto CPyL165;
    }
    PyObject *cpy_r_r113[1] = {cpy_r_r109};
    cpy_r_r114 = (PyObject **)&cpy_r_r113;
    cpy_r_r115 = _PyObject_Vectorcall(cpy_r_r112, cpy_r_r114, 1, 0);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 624, CPyStatic_mypy___util___globals);
        goto CPyL165;
    }
    if (PyBytes_Check(cpy_r_r115) || PyByteArray_Check(cpy_r_r115))
        cpy_r_r116 = cpy_r_r115;
    else {
        cpy_r_r116 = NULL;
    }
    if (cpy_r_r116 != NULL) goto __LL8195;
    if (cpy_r_r115 == Py_None)
        cpy_r_r116 = cpy_r_r115;
    else {
        cpy_r_r116 = NULL;
    }
    if (cpy_r_r116 != NULL) goto __LL8195;
    CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 624, CPyStatic_mypy___util___globals, "bytes or None", cpy_r_r115);
    goto CPyL165;
__LL8195: ;
    cpy_r_set_color = cpy_r_r116;
    cpy_r_r117 = CPyStatics[6576]; /* 'cup' */
    cpy_r_r118 = CPyModule_curses;
    cpy_r_r119 = CPyStatics[6573]; /* 'tigetstr' */
    cpy_r_r120 = CPyObject_GetAttr(cpy_r_r118, cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 625, CPyStatic_mypy___util___globals);
        goto CPyL166;
    }
    PyObject *cpy_r_r121[1] = {cpy_r_r117};
    cpy_r_r122 = (PyObject **)&cpy_r_r121;
    cpy_r_r123 = _PyObject_Vectorcall(cpy_r_r120, cpy_r_r122, 1, 0);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 625, CPyStatic_mypy___util___globals);
        goto CPyL166;
    }
    if (PyBytes_Check(cpy_r_r123) || PyByteArray_Check(cpy_r_r123))
        cpy_r_r124 = cpy_r_r123;
    else {
        cpy_r_r124 = NULL;
    }
    if (cpy_r_r124 != NULL) goto __LL8196;
    if (cpy_r_r123 == Py_None)
        cpy_r_r124 = cpy_r_r123;
    else {
        cpy_r_r124 = NULL;
    }
    if (cpy_r_r124 != NULL) goto __LL8196;
    CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 625, CPyStatic_mypy___util___globals, "bytes or None", cpy_r_r123);
    goto CPyL166;
__LL8196: ;
    cpy_r_set_eseq = cpy_r_r124;
    cpy_r_r125 = CPyStatics[6577]; /* 'sgr0' */
    cpy_r_r126 = CPyModule_curses;
    cpy_r_r127 = CPyStatics[6573]; /* 'tigetstr' */
    cpy_r_r128 = CPyObject_GetAttr(cpy_r_r126, cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 626, CPyStatic_mypy___util___globals);
        goto CPyL167;
    }
    PyObject *cpy_r_r129[1] = {cpy_r_r125};
    cpy_r_r130 = (PyObject **)&cpy_r_r129;
    cpy_r_r131 = _PyObject_Vectorcall(cpy_r_r128, cpy_r_r130, 1, 0);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 626, CPyStatic_mypy___util___globals);
        goto CPyL167;
    }
    if (PyBytes_Check(cpy_r_r131) || PyByteArray_Check(cpy_r_r131))
        cpy_r_r132 = cpy_r_r131;
    else {
        cpy_r_r132 = NULL;
    }
    if (cpy_r_r132 != NULL) goto __LL8197;
    if (cpy_r_r131 == Py_None)
        cpy_r_r132 = cpy_r_r131;
    else {
        cpy_r_r132 = NULL;
    }
    if (cpy_r_r132 != NULL) goto __LL8197;
    CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 626, CPyStatic_mypy___util___globals, "bytes or None", cpy_r_r131);
    goto CPyL167;
__LL8197: ;
    cpy_r_normal = cpy_r_r132;
    cpy_r_r133 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r134 = cpy_r_bold != cpy_r_r133;
    if (!cpy_r_r134) goto CPyL168;
    CPy_INCREF(cpy_r_bold);
    if (likely(cpy_r_bold != Py_None))
        cpy_r_r135 = cpy_r_bold;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 622, CPyStatic_mypy___util___globals, "bytes", cpy_r_bold);
        goto CPyL169;
    }
    cpy_r_r136 = PyObject_IsTrue(cpy_r_r135);
    CPy_DECREF(cpy_r_r135);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 622, CPyStatic_mypy___util___globals);
        goto CPyL169;
    }
    cpy_r_r138 = cpy_r_r136;
    if (!cpy_r_r138) goto CPyL168;
    cpy_r_r139 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r140 = cpy_r_under != cpy_r_r139;
    if (!cpy_r_r140) goto CPyL168;
    CPy_INCREF(cpy_r_under);
    if (likely(cpy_r_under != Py_None))
        cpy_r_r141 = cpy_r_under;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 623, CPyStatic_mypy___util___globals, "bytes", cpy_r_under);
        goto CPyL169;
    }
    cpy_r_r142 = PyObject_IsTrue(cpy_r_r141);
    CPy_DECREF(cpy_r_r141);
    cpy_r_r143 = cpy_r_r142 >= 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 623, CPyStatic_mypy___util___globals);
        goto CPyL169;
    }
    cpy_r_r144 = cpy_r_r142;
    if (!cpy_r_r144) goto CPyL168;
    cpy_r_r145 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r146 = cpy_r_set_color != cpy_r_r145;
    if (!cpy_r_r146) goto CPyL168;
    CPy_INCREF(cpy_r_set_color);
    if (likely(cpy_r_set_color != Py_None))
        cpy_r_r147 = cpy_r_set_color;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 624, CPyStatic_mypy___util___globals, "bytes", cpy_r_set_color);
        goto CPyL169;
    }
    cpy_r_r148 = PyObject_IsTrue(cpy_r_r147);
    CPy_DECREF(cpy_r_r147);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 624, CPyStatic_mypy___util___globals);
        goto CPyL169;
    }
    cpy_r_r150 = cpy_r_r148;
    if (!cpy_r_r150) goto CPyL168;
    cpy_r_r151 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r152 = cpy_r_set_eseq != cpy_r_r151;
    if (!cpy_r_r152) goto CPyL168;
    CPy_INCREF(cpy_r_set_eseq);
    if (likely(cpy_r_set_eseq != Py_None))
        cpy_r_r153 = cpy_r_set_eseq;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 625, CPyStatic_mypy___util___globals, "bytes", cpy_r_set_eseq);
        goto CPyL169;
    }
    cpy_r_r154 = PyObject_IsTrue(cpy_r_r153);
    CPy_DECREF(cpy_r_r153);
    cpy_r_r155 = cpy_r_r154 >= 0;
    if (unlikely(!cpy_r_r155)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 625, CPyStatic_mypy___util___globals);
        goto CPyL169;
    }
    cpy_r_r156 = cpy_r_r154;
    if (!cpy_r_r156) goto CPyL168;
    cpy_r_r157 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r158 = cpy_r_normal != cpy_r_r157;
    if (!cpy_r_r158) goto CPyL168;
    CPy_INCREF(cpy_r_normal);
    if (likely(cpy_r_normal != Py_None))
        cpy_r_r159 = cpy_r_normal;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 626, CPyStatic_mypy___util___globals, "bytes", cpy_r_normal);
        goto CPyL169;
    }
    cpy_r_r160 = PyObject_IsTrue(cpy_r_r159);
    CPy_DECREF(cpy_r_r159);
    cpy_r_r161 = cpy_r_r160 >= 0;
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 626, CPyStatic_mypy___util___globals);
        goto CPyL169;
    }
    cpy_r_r162 = cpy_r_r160;
    if (cpy_r_r162) {
        goto CPyL98;
    } else
        goto CPyL168;
CPyL97: ;
    return 0;
CPyL98: ;
    if (likely(cpy_r_normal != Py_None))
        cpy_r_r163 = cpy_r_normal;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 631, CPyStatic_mypy___util___globals, "bytes", cpy_r_normal);
        goto CPyL167;
    }
    cpy_r_r164 = CPy_Decode(cpy_r_r163, NULL, NULL);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 631, CPyStatic_mypy___util___globals);
        goto CPyL167;
    }
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_NORMAL != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_NORMAL);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_NORMAL = cpy_r_r164;
    cpy_r_r165 = 1;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 631, CPyStatic_mypy___util___globals);
        goto CPyL167;
    }
    if (likely(cpy_r_bold != Py_None))
        cpy_r_r166 = cpy_r_bold;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 632, CPyStatic_mypy___util___globals, "bytes", cpy_r_bold);
        goto CPyL170;
    }
    cpy_r_r167 = CPy_Decode(cpy_r_r166, NULL, NULL);
    CPy_DECREF(cpy_r_r166);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 632, CPyStatic_mypy___util___globals);
        goto CPyL170;
    }
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_BOLD != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_BOLD);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_BOLD = cpy_r_r167;
    cpy_r_r168 = 1;
    if (unlikely(!cpy_r_r168)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 632, CPyStatic_mypy___util___globals);
        goto CPyL170;
    }
    if (likely(cpy_r_under != Py_None))
        cpy_r_r169 = cpy_r_under;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 633, CPyStatic_mypy___util___globals, "bytes", cpy_r_under);
        goto CPyL171;
    }
    cpy_r_r170 = CPy_Decode(cpy_r_r169, NULL, NULL);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 633, CPyStatic_mypy___util___globals);
        goto CPyL171;
    }
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_UNDER != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_UNDER);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_UNDER = cpy_r_r170;
    cpy_r_r171 = 1;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 633, CPyStatic_mypy___util___globals);
        goto CPyL171;
    }
    if (likely(cpy_r_set_eseq != Py_None))
        cpy_r_r172 = cpy_r_set_eseq;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 634, CPyStatic_mypy___util___globals, "bytes", cpy_r_set_eseq);
        goto CPyL172;
    }
    cpy_r_r173 = CPyDef_mypy___util___parse_gray_color(cpy_r_r172);
    CPy_DECREF(cpy_r_r172);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 634, CPyStatic_mypy___util___globals);
        goto CPyL172;
    }
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_DIM != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_DIM);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_DIM = cpy_r_r173;
    cpy_r_r174 = 1;
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 634, CPyStatic_mypy___util___globals);
        goto CPyL172;
    }
    CPy_INCREF(cpy_r_set_color);
    if (likely(cpy_r_set_color != Py_None))
        cpy_r_r175 = cpy_r_set_color;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 635, CPyStatic_mypy___util___globals, "bytes", cpy_r_set_color);
        goto CPyL172;
    }
    cpy_r_r176 = CPyModule_curses;
    cpy_r_r177 = CPyStatics[6578]; /* 'COLOR_BLUE' */
    cpy_r_r178 = CPyObject_GetAttr(cpy_r_r176, cpy_r_r177);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 635, CPyStatic_mypy___util___globals);
        goto CPyL173;
    }
    if (likely(PyLong_Check(cpy_r_r178)))
        cpy_r_r179 = CPyTagged_FromObject(cpy_r_r178);
    else {
        CPy_TypeError("int", cpy_r_r178); cpy_r_r179 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r178);
    if (unlikely(cpy_r_r179 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 635, CPyStatic_mypy___util___globals);
        goto CPyL173;
    }
    cpy_r_r180 = CPyModule_curses;
    cpy_r_r181 = CPyStatics[6553]; /* 'tparm' */
    cpy_r_r182 = CPyObject_GetAttr(cpy_r_r180, cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 635, CPyStatic_mypy___util___globals);
        goto CPyL174;
    }
    cpy_r_r183 = CPyTagged_StealAsObject(cpy_r_r179);
    PyObject *cpy_r_r184[2] = {cpy_r_r175, cpy_r_r183};
    cpy_r_r185 = (PyObject **)&cpy_r_r184;
    cpy_r_r186 = _PyObject_Vectorcall(cpy_r_r182, cpy_r_r185, 2, 0);
    CPy_DECREF(cpy_r_r182);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 635, CPyStatic_mypy___util___globals);
        goto CPyL175;
    }
    CPy_DECREF(cpy_r_r175);
    CPy_DECREF(cpy_r_r183);
    if (likely(PyBytes_Check(cpy_r_r186) || PyByteArray_Check(cpy_r_r186)))
        cpy_r_r187 = cpy_r_r186;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 635, CPyStatic_mypy___util___globals, "bytes", cpy_r_r186);
        goto CPyL172;
    }
    cpy_r_r188 = CPy_Decode(cpy_r_r187, NULL, NULL);
    CPy_DECREF(cpy_r_r187);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 635, CPyStatic_mypy___util___globals);
        goto CPyL172;
    }
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_BLUE != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_BLUE);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_BLUE = cpy_r_r188;
    cpy_r_r189 = 1;
    if (unlikely(!cpy_r_r189)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 635, CPyStatic_mypy___util___globals);
        goto CPyL172;
    }
    CPy_INCREF(cpy_r_set_color);
    if (likely(cpy_r_set_color != Py_None))
        cpy_r_r190 = cpy_r_set_color;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 636, CPyStatic_mypy___util___globals, "bytes", cpy_r_set_color);
        goto CPyL172;
    }
    cpy_r_r191 = CPyModule_curses;
    cpy_r_r192 = CPyStatics[6579]; /* 'COLOR_GREEN' */
    cpy_r_r193 = CPyObject_GetAttr(cpy_r_r191, cpy_r_r192);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 636, CPyStatic_mypy___util___globals);
        goto CPyL176;
    }
    if (likely(PyLong_Check(cpy_r_r193)))
        cpy_r_r194 = CPyTagged_FromObject(cpy_r_r193);
    else {
        CPy_TypeError("int", cpy_r_r193); cpy_r_r194 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r193);
    if (unlikely(cpy_r_r194 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 636, CPyStatic_mypy___util___globals);
        goto CPyL176;
    }
    cpy_r_r195 = CPyModule_curses;
    cpy_r_r196 = CPyStatics[6553]; /* 'tparm' */
    cpy_r_r197 = CPyObject_GetAttr(cpy_r_r195, cpy_r_r196);
    if (unlikely(cpy_r_r197 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 636, CPyStatic_mypy___util___globals);
        goto CPyL177;
    }
    cpy_r_r198 = CPyTagged_StealAsObject(cpy_r_r194);
    PyObject *cpy_r_r199[2] = {cpy_r_r190, cpy_r_r198};
    cpy_r_r200 = (PyObject **)&cpy_r_r199;
    cpy_r_r201 = _PyObject_Vectorcall(cpy_r_r197, cpy_r_r200, 2, 0);
    CPy_DECREF(cpy_r_r197);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 636, CPyStatic_mypy___util___globals);
        goto CPyL178;
    }
    CPy_DECREF(cpy_r_r190);
    CPy_DECREF(cpy_r_r198);
    if (likely(PyBytes_Check(cpy_r_r201) || PyByteArray_Check(cpy_r_r201)))
        cpy_r_r202 = cpy_r_r201;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 636, CPyStatic_mypy___util___globals, "bytes", cpy_r_r201);
        goto CPyL172;
    }
    cpy_r_r203 = CPy_Decode(cpy_r_r202, NULL, NULL);
    CPy_DECREF(cpy_r_r202);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 636, CPyStatic_mypy___util___globals);
        goto CPyL172;
    }
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_GREEN != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_GREEN);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_GREEN = cpy_r_r203;
    cpy_r_r204 = 1;
    if (unlikely(!cpy_r_r204)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 636, CPyStatic_mypy___util___globals);
        goto CPyL172;
    }
    CPy_INCREF(cpy_r_set_color);
    if (likely(cpy_r_set_color != Py_None))
        cpy_r_r205 = cpy_r_set_color;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 637, CPyStatic_mypy___util___globals, "bytes", cpy_r_set_color);
        goto CPyL172;
    }
    cpy_r_r206 = CPyModule_curses;
    cpy_r_r207 = CPyStatics[6580]; /* 'COLOR_RED' */
    cpy_r_r208 = CPyObject_GetAttr(cpy_r_r206, cpy_r_r207);
    if (unlikely(cpy_r_r208 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 637, CPyStatic_mypy___util___globals);
        goto CPyL179;
    }
    if (likely(PyLong_Check(cpy_r_r208)))
        cpy_r_r209 = CPyTagged_FromObject(cpy_r_r208);
    else {
        CPy_TypeError("int", cpy_r_r208); cpy_r_r209 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r208);
    if (unlikely(cpy_r_r209 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 637, CPyStatic_mypy___util___globals);
        goto CPyL179;
    }
    cpy_r_r210 = CPyModule_curses;
    cpy_r_r211 = CPyStatics[6553]; /* 'tparm' */
    cpy_r_r212 = CPyObject_GetAttr(cpy_r_r210, cpy_r_r211);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 637, CPyStatic_mypy___util___globals);
        goto CPyL180;
    }
    cpy_r_r213 = CPyTagged_StealAsObject(cpy_r_r209);
    PyObject *cpy_r_r214[2] = {cpy_r_r205, cpy_r_r213};
    cpy_r_r215 = (PyObject **)&cpy_r_r214;
    cpy_r_r216 = _PyObject_Vectorcall(cpy_r_r212, cpy_r_r215, 2, 0);
    CPy_DECREF(cpy_r_r212);
    if (unlikely(cpy_r_r216 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 637, CPyStatic_mypy___util___globals);
        goto CPyL181;
    }
    CPy_DECREF(cpy_r_r205);
    CPy_DECREF(cpy_r_r213);
    if (likely(PyBytes_Check(cpy_r_r216) || PyByteArray_Check(cpy_r_r216)))
        cpy_r_r217 = cpy_r_r216;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 637, CPyStatic_mypy___util___globals, "bytes", cpy_r_r216);
        goto CPyL172;
    }
    cpy_r_r218 = CPy_Decode(cpy_r_r217, NULL, NULL);
    CPy_DECREF(cpy_r_r217);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 637, CPyStatic_mypy___util___globals);
        goto CPyL172;
    }
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_RED != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_RED);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_RED = cpy_r_r218;
    cpy_r_r219 = 1;
    if (unlikely(!cpy_r_r219)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 637, CPyStatic_mypy___util___globals);
        goto CPyL172;
    }
    if (likely(cpy_r_set_color != Py_None))
        cpy_r_r220 = cpy_r_set_color;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 638, CPyStatic_mypy___util___globals, "bytes", cpy_r_set_color);
        goto CPyL143;
    }
    cpy_r_r221 = CPyModule_curses;
    cpy_r_r222 = CPyStatics[6581]; /* 'COLOR_YELLOW' */
    cpy_r_r223 = CPyObject_GetAttr(cpy_r_r221, cpy_r_r222);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 638, CPyStatic_mypy___util___globals);
        goto CPyL182;
    }
    if (likely(PyLong_Check(cpy_r_r223)))
        cpy_r_r224 = CPyTagged_FromObject(cpy_r_r223);
    else {
        CPy_TypeError("int", cpy_r_r223); cpy_r_r224 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r223);
    if (unlikely(cpy_r_r224 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 638, CPyStatic_mypy___util___globals);
        goto CPyL182;
    }
    cpy_r_r225 = CPyModule_curses;
    cpy_r_r226 = CPyStatics[6553]; /* 'tparm' */
    cpy_r_r227 = CPyObject_GetAttr(cpy_r_r225, cpy_r_r226);
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 638, CPyStatic_mypy___util___globals);
        goto CPyL183;
    }
    cpy_r_r228 = CPyTagged_StealAsObject(cpy_r_r224);
    PyObject *cpy_r_r229[2] = {cpy_r_r220, cpy_r_r228};
    cpy_r_r230 = (PyObject **)&cpy_r_r229;
    cpy_r_r231 = _PyObject_Vectorcall(cpy_r_r227, cpy_r_r230, 2, 0);
    CPy_DECREF(cpy_r_r227);
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 638, CPyStatic_mypy___util___globals);
        goto CPyL184;
    }
    CPy_DECREF(cpy_r_r220);
    CPy_DECREF(cpy_r_r228);
    if (likely(PyBytes_Check(cpy_r_r231) || PyByteArray_Check(cpy_r_r231)))
        cpy_r_r232 = cpy_r_r231;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "initialize_unix_colors", 638, CPyStatic_mypy___util___globals, "bytes", cpy_r_r231);
        goto CPyL143;
    }
    cpy_r_r233 = CPy_Decode(cpy_r_r232, NULL, NULL);
    CPy_DECREF(cpy_r_r232);
    if (unlikely(cpy_r_r233 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 638, CPyStatic_mypy___util___globals);
        goto CPyL143;
    }
    if (((mypy___util___FancyFormatterObject *)cpy_r_self)->_YELLOW != NULL) {
        CPy_DECREF(((mypy___util___FancyFormatterObject *)cpy_r_self)->_YELLOW);
    }
    ((mypy___util___FancyFormatterObject *)cpy_r_self)->_YELLOW = cpy_r_r233;
    cpy_r_r234 = 1;
    if (unlikely(!cpy_r_r234)) {
        CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 638, CPyStatic_mypy___util___globals);
        goto CPyL143;
    }
    return 1;
CPyL143: ;
    cpy_r_r235 = 2;
    return cpy_r_r235;
CPyL144: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL14;
CPyL145: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r36);
    goto CPyL50;
CPyL146: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r38);
    goto CPyL50;
CPyL147: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL27;
CPyL148: ;
    CPyTagged_DecRef(cpy_r_r49);
    goto CPyL27;
CPyL149: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL27;
CPyL150: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL26;
CPyL151: ;
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r61);
    CPy_DecRef(cpy_r_r62);
    goto CPyL33;
CPyL152: ;
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r58.f0);
    CPy_DecRef(cpy_r_r58.f1);
    CPy_DecRef(cpy_r_r58.f2);
    goto CPyL31;
CPyL153: ;
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r38);
    goto CPyL34;
CPyL154: ;
    CPy_DecRef(cpy_r_r35);
    CPy_DecRef(cpy_r_r38);
    goto CPyL40;
CPyL155: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL43;
CPyL156: ;
    CPy_DecRef(cpy_r_r76);
    goto CPyL39;
CPyL157: ;
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    CPy_XDecRef(cpy_r_r71.f0);
    CPy_XDecRef(cpy_r_r71.f1);
    CPy_XDecRef(cpy_r_r71.f2);
    goto CPyL42;
CPyL158: ;
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL46;
CPyL159: ;
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL48;
CPyL160: ;
    CPyTagged_DecRef(cpy_r_fd);
    goto CPyL55;
CPyL161: ;
    CPy_DecRef(cpy_r_r82);
    goto CPyL55;
CPyL162: ;
    CPy_DECREF(cpy_r_r86);
    goto CPyL54;
CPyL163: ;
    CPy_DecRef(cpy_r_r87.f0);
    CPy_DecRef(cpy_r_r87.f1);
    CPy_DecRef(cpy_r_r87.f2);
    goto CPyL59;
CPyL164: ;
    CPy_DecRef(cpy_r_bold);
    goto CPyL143;
CPyL165: ;
    CPy_DecRef(cpy_r_bold);
    CPy_DecRef(cpy_r_under);
    goto CPyL143;
CPyL166: ;
    CPy_DecRef(cpy_r_bold);
    CPy_DecRef(cpy_r_under);
    CPy_DecRef(cpy_r_set_color);
    goto CPyL143;
CPyL167: ;
    CPy_DecRef(cpy_r_bold);
    CPy_DecRef(cpy_r_under);
    CPy_DecRef(cpy_r_set_color);
    CPy_DecRef(cpy_r_set_eseq);
    goto CPyL143;
CPyL168: ;
    CPy_DECREF(cpy_r_bold);
    CPy_DECREF(cpy_r_under);
    CPy_DECREF(cpy_r_set_color);
    CPy_DECREF(cpy_r_set_eseq);
    CPy_DECREF(cpy_r_normal);
    goto CPyL97;
CPyL169: ;
    CPy_DecRef(cpy_r_bold);
    CPy_DecRef(cpy_r_under);
    CPy_DecRef(cpy_r_set_color);
    CPy_DecRef(cpy_r_set_eseq);
    CPy_DecRef(cpy_r_normal);
    goto CPyL143;
CPyL170: ;
    CPy_DecRef(cpy_r_under);
    CPy_DecRef(cpy_r_set_color);
    CPy_DecRef(cpy_r_set_eseq);
    goto CPyL143;
CPyL171: ;
    CPy_DecRef(cpy_r_set_color);
    CPy_DecRef(cpy_r_set_eseq);
    goto CPyL143;
CPyL172: ;
    CPy_DecRef(cpy_r_set_color);
    goto CPyL143;
CPyL173: ;
    CPy_DecRef(cpy_r_set_color);
    CPy_DecRef(cpy_r_r175);
    goto CPyL143;
CPyL174: ;
    CPy_DecRef(cpy_r_set_color);
    CPy_DecRef(cpy_r_r175);
    CPyTagged_DecRef(cpy_r_r179);
    goto CPyL143;
CPyL175: ;
    CPy_DecRef(cpy_r_set_color);
    CPy_DecRef(cpy_r_r175);
    CPy_DecRef(cpy_r_r183);
    goto CPyL143;
CPyL176: ;
    CPy_DecRef(cpy_r_set_color);
    CPy_DecRef(cpy_r_r190);
    goto CPyL143;
CPyL177: ;
    CPy_DecRef(cpy_r_set_color);
    CPy_DecRef(cpy_r_r190);
    CPyTagged_DecRef(cpy_r_r194);
    goto CPyL143;
CPyL178: ;
    CPy_DecRef(cpy_r_set_color);
    CPy_DecRef(cpy_r_r190);
    CPy_DecRef(cpy_r_r198);
    goto CPyL143;
CPyL179: ;
    CPy_DecRef(cpy_r_set_color);
    CPy_DecRef(cpy_r_r205);
    goto CPyL143;
CPyL180: ;
    CPy_DecRef(cpy_r_set_color);
    CPy_DecRef(cpy_r_r205);
    CPyTagged_DecRef(cpy_r_r209);
    goto CPyL143;
CPyL181: ;
    CPy_DecRef(cpy_r_set_color);
    CPy_DecRef(cpy_r_r205);
    CPy_DecRef(cpy_r_r213);
    goto CPyL143;
CPyL182: ;
    CPy_DecRef(cpy_r_r220);
    goto CPyL143;
CPyL183: ;
    CPy_DecRef(cpy_r_r220);
    CPyTagged_DecRef(cpy_r_r224);
    goto CPyL143;
CPyL184: ;
    CPy_DecRef(cpy_r_r220);
    CPy_DecRef(cpy_r_r228);
    goto CPyL143;
}

PyObject *CPyPy_mypy___util___FancyFormatter___initialize_unix_colors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":initialize_unix_colors", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___util___FancyFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.util.FancyFormatter", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypy___util___FancyFormatter___initialize_unix_colors(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "initialize_unix_colors", 604, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___FancyFormatter___style(PyObject *cpy_r_self, PyObject *cpy_r_text, PyObject *cpy_r_color, char cpy_r_bold, char cpy_r_underline, char cpy_r_dim) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_start;
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
    if (cpy_r_bold != 2) goto CPyL2;
    cpy_r_bold = 0;
CPyL2: ;
    if (cpy_r_underline != 2) goto CPyL4;
    cpy_r_underline = 0;
CPyL4: ;
    if (cpy_r_dim != 2) goto CPyL6;
    cpy_r_dim = 0;
CPyL6: ;
    cpy_r_r0 = ((mypy___util___FancyFormatterObject *)cpy_r_self)->_dummy_term;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/util.py", "style", "FancyFormatter", "dummy_term", 650, CPyStatic_mypy___util___globals);
        goto CPyL29;
    }
CPyL7: ;
    if (!cpy_r_r0) goto CPyL9;
CPyL8: ;
    CPy_INCREF(cpy_r_text);
    return cpy_r_text;
CPyL9: ;
    if (!cpy_r_bold) goto CPyL12;
    cpy_r_r1 = ((mypy___util___FancyFormatterObject *)cpy_r_self)->_BOLD;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/util.py", "style", "FancyFormatter", "BOLD", 653, CPyStatic_mypy___util___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r1);
CPyL11: ;
    cpy_r_start = cpy_r_r1;
    goto CPyL13;
CPyL12: ;
    cpy_r_r2 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r2);
    cpy_r_start = cpy_r_r2;
CPyL13: ;
    if (!cpy_r_underline) goto CPyL17;
    cpy_r_r3 = ((mypy___util___FancyFormatterObject *)cpy_r_self)->_UNDER;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/util.py", "style", "FancyFormatter", "UNDER", 657, CPyStatic_mypy___util___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r3);
CPyL15: ;
    cpy_r_r4 = CPyStr_Append(cpy_r_start, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "style", 657, CPyStatic_mypy___util___globals);
        goto CPyL29;
    }
    cpy_r_start = cpy_r_r4;
CPyL17: ;
    if (!cpy_r_dim) goto CPyL21;
    cpy_r_r5 = ((mypy___util___FancyFormatterObject *)cpy_r_self)->_DIM;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/util.py", "style", "FancyFormatter", "DIM", 659, CPyStatic_mypy___util___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r5);
CPyL19: ;
    cpy_r_r6 = CPyStr_Append(cpy_r_start, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "style", 659, CPyStatic_mypy___util___globals);
        goto CPyL29;
    }
    cpy_r_start = cpy_r_r6;
CPyL21: ;
    cpy_r_r7 = ((mypy___util___FancyFormatterObject *)cpy_r_self)->_colors;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/util.py", "style", "FancyFormatter", "colors", 660, CPyStatic_mypy___util___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r7);
CPyL22: ;
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r7, cpy_r_color);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "style", 660, CPyStatic_mypy___util___globals);
        goto CPyL30;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "style", 660, CPyStatic_mypy___util___globals, "str", cpy_r_r8);
        goto CPyL30;
    }
    cpy_r_r10 = PyUnicode_Concat(cpy_r_start, cpy_r_r9);
    CPy_DECREF(cpy_r_start);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "style", 660, CPyStatic_mypy___util___globals);
        goto CPyL29;
    }
    cpy_r_r11 = PyUnicode_Concat(cpy_r_r10, cpy_r_text);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "style", 660, CPyStatic_mypy___util___globals);
        goto CPyL29;
    }
    cpy_r_r12 = ((mypy___util___FancyFormatterObject *)cpy_r_self)->_NORMAL;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/util.py", "style", "FancyFormatter", "NORMAL", 660, CPyStatic_mypy___util___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r12);
CPyL27: ;
    cpy_r_r13 = PyUnicode_Concat(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "style", 660, CPyStatic_mypy___util___globals);
        goto CPyL29;
    }
    return cpy_r_r13;
CPyL29: ;
    cpy_r_r14 = NULL;
    return cpy_r_r14;
CPyL30: ;
    CPy_DecRef(cpy_r_start);
    goto CPyL29;
CPyL31: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL29;
}

PyObject *CPyPy_mypy___util___FancyFormatter___style(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"text", "color", "bold", "underline", "dim", 0};
    static CPyArg_Parser parser = {"OO|OOO:style", kwlist, 0};
    PyObject *obj_text;
    PyObject *obj_color;
    PyObject *obj_bold = NULL;
    PyObject *obj_underline = NULL;
    PyObject *obj_dim = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_text, &obj_color, &obj_bold, &obj_underline, &obj_dim)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___util___FancyFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.util.FancyFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_text;
    if (likely(PyUnicode_Check(obj_text)))
        arg_text = obj_text;
    else {
        CPy_TypeError("str", obj_text); 
        goto fail;
    }
    PyObject *arg_color;
    if (likely(PyUnicode_Check(obj_color)))
        arg_color = obj_color;
    else {
        CPy_TypeError("str", obj_color); 
        goto fail;
    }
    char arg_bold;
    if (obj_bold == NULL) {
        arg_bold = 2;
    } else if (unlikely(!PyBool_Check(obj_bold))) {
        CPy_TypeError("bool", obj_bold); goto fail;
    } else
        arg_bold = obj_bold == Py_True;
    char arg_underline;
    if (obj_underline == NULL) {
        arg_underline = 2;
    } else if (unlikely(!PyBool_Check(obj_underline))) {
        CPy_TypeError("bool", obj_underline); goto fail;
    } else
        arg_underline = obj_underline == Py_True;
    char arg_dim;
    if (obj_dim == NULL) {
        arg_dim = 2;
    } else if (unlikely(!PyBool_Check(obj_dim))) {
        CPy_TypeError("bool", obj_dim); goto fail;
    } else
        arg_dim = obj_dim == Py_True;
    PyObject *retval = CPyDef_mypy___util___FancyFormatter___style(arg_self, arg_text, arg_color, arg_bold, arg_underline, arg_dim);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "style", 641, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___FancyFormatter___fit_in_terminal(PyObject *cpy_r_self, PyObject *cpy_r_messages, PyObject *cpy_r_fixed_terminal_width) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_width;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_new_messages;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_error;
    PyObject *cpy_r_r21;
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_loc;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_msg;
    int64_t cpy_r_r39;
    char cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    int64_t cpy_r_r43;
    char cpy_r_r44;
    CPyTagged cpy_r_r45;
    CPyTagged cpy_r_r46;
    CPyTagged cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyTagged cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_marker_line;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject **cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyTagged cpy_r_r70;
    CPyTagged cpy_r_marker_column;
    CPyTagged cpy_r_r71;
    CPyTagged cpy_r_column;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_marker;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject **cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyTagged cpy_r_r83;
    CPyTagged cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    CPyTagged cpy_r_r87;
    CPyTagged cpy_r_r88;
    CPyTagged cpy_r_max_len;
    tuple_T2OI cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_source_line;
    CPyTagged cpy_r_r91;
    CPyTagged cpy_r_offset;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    CPyTagged cpy_r_r96;
    CPyTagged cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_new_marker_line;
    int64_t cpy_r_r102;
    char cpy_r_r103;
    CPyTagged cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int64_t cpy_r_r107;
    char cpy_r_r108;
    CPyTagged cpy_r_r109;
    char cpy_r_r110;
    int64_t cpy_r_r111;
    char cpy_r_r112;
    CPyTagged cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    int64_t cpy_r_r117;
    char cpy_r_r118;
    CPyTagged cpy_r_r119;
    CPyTagged cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    CPyTagged cpy_r_r125;
    char cpy_r_r126;
    CPyTagged cpy_r_r127;
    CPyTagged cpy_r_r128;
    PyObject *cpy_r_r129;
    if (cpy_r_fixed_terminal_width != NULL) goto CPyL68;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_fixed_terminal_width = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_fixed_terminal_width != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL69;
    if (likely(PyLong_Check(cpy_r_fixed_terminal_width)))
        cpy_r_r3 = CPyTagged_FromObject(cpy_r_fixed_terminal_width);
    else {
        CPy_TypeError("int", cpy_r_fixed_terminal_width); cpy_r_r3 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 663, CPyStatic_mypy___util___globals);
        goto CPyL70;
    }
    cpy_r_r4 = cpy_r_r3 != 0;
    CPyTagged_DECREF(cpy_r_r3);
    if (!cpy_r_r4) goto CPyL69;
    if (likely(PyLong_Check(cpy_r_fixed_terminal_width)))
        cpy_r_r5 = CPyTagged_FromObject(cpy_r_fixed_terminal_width);
    else {
        CPy_TypeError("int", cpy_r_fixed_terminal_width); cpy_r_r5 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_fixed_terminal_width);
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 666, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    cpy_r_r6 = cpy_r_r5;
    goto CPyL9;
CPyL7: ;
    cpy_r_r7 = CPyDef_mypy___util___get_terminal_width();
    if (unlikely(cpy_r_r7 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 666, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    cpy_r_r6 = cpy_r_r7;
CPyL9: ;
    cpy_r_width = cpy_r_r6;
    cpy_r_r8 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r9[1] = {cpy_r_messages};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = PyObject_VectorcallMethod(cpy_r_r8, cpy_r_r10, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 667, CPyStatic_mypy___util___globals);
        goto CPyL71;
    }
    if (likely(PyList_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "fit_in_terminal", 667, CPyStatic_mypy___util___globals, "list", cpy_r_r11);
        goto CPyL71;
    }
    cpy_r_new_messages = cpy_r_r12;
    cpy_r_r13 = 0;
    cpy_r_i = 0;
    cpy_r_r14 = 0;
CPyL12: ;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_messages)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 < (Py_ssize_t)cpy_r_r17;
    if (!cpy_r_r18) goto CPyL72;
    cpy_r_r19 = CPyList_GetItemUnsafe(cpy_r_messages, cpy_r_r14);
    if (likely(PyUnicode_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "fit_in_terminal", 668, CPyStatic_mypy___util___globals, "str", cpy_r_r19);
        goto CPyL73;
    }
    cpy_r_error = cpy_r_r20;
    cpy_r_r21 = CPyStatics[6545]; /* ': error:' */
    cpy_r_r22 = PySequence_Contains(cpy_r_error, cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 669, CPyStatic_mypy___util___globals);
        goto CPyL74;
    }
    cpy_r_r24 = cpy_r_r22;
    if (!cpy_r_r24) goto CPyL27;
    cpy_r_r25 = CPyStatics[6582]; /* 'error:' */
    cpy_r_r26 = CPyStatics[369]; /* 'split' */
    cpy_r_r27 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r28[3] = {cpy_r_error, cpy_r_r25, cpy_r_r27};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = CPyStatics[9213]; /* ('maxsplit',) */
    cpy_r_r31 = PyObject_VectorcallMethod(cpy_r_r26, cpy_r_r29, 9223372036854775810ULL, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 670, CPyStatic_mypy___util___globals);
        goto CPyL74;
    }
    if (likely(PyList_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "fit_in_terminal", 670, CPyStatic_mypy___util___globals, "list", cpy_r_r31);
        goto CPyL74;
    }
    cpy_r_r33 = CPySequence_CheckUnpackCount(cpy_r_r32, 2);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 670, CPyStatic_mypy___util___globals);
        goto CPyL75;
    }
    cpy_r_r35 = CPyList_GetItemUnsafe(cpy_r_r32, 0);
    cpy_r_r36 = CPyList_GetItemUnsafe(cpy_r_r32, 2);
    CPy_DECREF(cpy_r_r32);
    if (likely(PyUnicode_Check(cpy_r_r35)))
        cpy_r_r37 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "fit_in_terminal", 670, CPyStatic_mypy___util___globals, "str", cpy_r_r35);
        goto CPyL76;
    }
    cpy_r_loc = cpy_r_r37;
    if (likely(PyUnicode_Check(cpy_r_r36)))
        cpy_r_r38 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "fit_in_terminal", 670, CPyStatic_mypy___util___globals, "str", cpy_r_r36);
        goto CPyL77;
    }
    cpy_r_msg = cpy_r_r38;
    cpy_r_r39 = CPyStr_Size_size_t(cpy_r_loc);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 671, CPyStatic_mypy___util___globals);
        goto CPyL78;
    }
    cpy_r_r41 = cpy_r_r39 << 1;
    cpy_r_r42 = CPyStatics[6583]; /* 'error: ' */
    cpy_r_r43 = CPyStr_Size_size_t(cpy_r_r42);
    cpy_r_r44 = cpy_r_r43 >= 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 671, CPyStatic_mypy___util___globals);
        goto CPyL78;
    }
    cpy_r_r45 = cpy_r_r43 << 1;
    cpy_r_r46 = CPyTagged_Add(cpy_r_r41, cpy_r_r45);
    cpy_r_r47 = CPY_INT_TAG;
    cpy_r_r48 = CPyDef_mypy___util___soft_wrap(cpy_r_msg, cpy_r_width, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_msg);
    CPyTagged_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 671, CPyStatic_mypy___util___globals);
        goto CPyL77;
    }
    cpy_r_msg = cpy_r_r48;
    cpy_r_r49 = CPyStatics[6582]; /* 'error:' */
    cpy_r_r50 = PyUnicode_Concat(cpy_r_loc, cpy_r_r49);
    CPy_DECREF(cpy_r_loc);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 672, CPyStatic_mypy___util___globals);
        goto CPyL79;
    }
    cpy_r_r51 = PyUnicode_Concat(cpy_r_r50, cpy_r_msg);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_msg);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 672, CPyStatic_mypy___util___globals);
        goto CPyL74;
    }
    cpy_r_r52 = CPyList_SetItem(cpy_r_new_messages, cpy_r_i, cpy_r_r51);
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 672, CPyStatic_mypy___util___globals);
        goto CPyL74;
    }
CPyL27: ;
    cpy_r_r53 = CPyStatics[309]; /* '    ' */
    cpy_r_r54 = CPyStr_Startswith(cpy_r_error, cpy_r_r53);
    if (!cpy_r_r54) goto CPyL80;
    cpy_r_r55 = CPyStatics[1597]; /* '^' */
    cpy_r_r56 = PySequence_Contains(cpy_r_error, cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 673, CPyStatic_mypy___util___globals);
        goto CPyL74;
    }
    cpy_r_r58 = cpy_r_r56;
    cpy_r_r59 = cpy_r_r58 ^ 1;
    if (!cpy_r_r59) goto CPyL80;
    cpy_r_r60 = CPyStr_GetSlice(cpy_r_error, 8, 9223372036854775806LL);
    CPy_DECREF(cpy_r_error);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 676, CPyStatic_mypy___util___globals);
        goto CPyL73;
    }
    if (likely(PyUnicode_Check(cpy_r_r60)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "fit_in_terminal", 676, CPyStatic_mypy___util___globals, "str", cpy_r_r60);
        goto CPyL73;
    }
    cpy_r_error = cpy_r_r61;
    cpy_r_r62 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r63 = CPyList_GetItem(cpy_r_messages, cpy_r_r62);
    CPyTagged_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 677, CPyStatic_mypy___util___globals);
        goto CPyL74;
    }
    if (likely(PyUnicode_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "fit_in_terminal", 677, CPyStatic_mypy___util___globals, "str", cpy_r_r63);
        goto CPyL74;
    }
    cpy_r_marker_line = cpy_r_r64;
    cpy_r_r65 = CPyStatics[1597]; /* '^' */
    cpy_r_r66 = CPyStatics[56]; /* 'index' */
    PyObject *cpy_r_r67[2] = {cpy_r_marker_line, cpy_r_r65};
    cpy_r_r68 = (PyObject **)&cpy_r_r67;
    cpy_r_r69 = PyObject_VectorcallMethod(cpy_r_r66, cpy_r_r68, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 678, CPyStatic_mypy___util___globals);
        goto CPyL81;
    }
    if (likely(PyLong_Check(cpy_r_r69)))
        cpy_r_r70 = CPyTagged_FromObject(cpy_r_r69);
    else {
        CPy_TypeError("int", cpy_r_r69); cpy_r_r70 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 678, CPyStatic_mypy___util___globals);
        goto CPyL81;
    }
    cpy_r_marker_column = cpy_r_r70;
    cpy_r_r71 = CPyTagged_Subtract(cpy_r_marker_column, 8);
    cpy_r_column = cpy_r_r71;
    cpy_r_r72 = CPyStatics[1602]; /* '~' */
    cpy_r_r73 = PySequence_Contains(cpy_r_marker_line, cpy_r_r72);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 680, CPyStatic_mypy___util___globals);
        goto CPyL82;
    }
    cpy_r_r75 = cpy_r_r73;
    cpy_r_r76 = cpy_r_r75 ^ 1;
    if (cpy_r_r76) {
        goto CPyL83;
    } else
        goto CPyL39;
CPyL38: ;
    cpy_r_r77 = CPyStatics[1597]; /* '^' */
    CPy_INCREF(cpy_r_r77);
    cpy_r_marker = cpy_r_r77;
    goto CPyL44;
CPyL39: ;
    cpy_r_r78 = CPyStatics[1602]; /* '~' */
    cpy_r_r79 = CPyStatics[6584]; /* 'rindex' */
    PyObject *cpy_r_r80[2] = {cpy_r_marker_line, cpy_r_r78};
    cpy_r_r81 = (PyObject **)&cpy_r_r80;
    cpy_r_r82 = PyObject_VectorcallMethod(cpy_r_r79, cpy_r_r81, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 684, CPyStatic_mypy___util___globals);
        goto CPyL82;
    }
    if (likely(PyLong_Check(cpy_r_r82)))
        cpy_r_r83 = CPyTagged_FromObject(cpy_r_r82);
    else {
        CPy_TypeError("int", cpy_r_r82); cpy_r_r83 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 684, CPyStatic_mypy___util___globals);
        goto CPyL82;
    }
    cpy_r_r84 = CPyTagged_Add(cpy_r_r83, 2);
    CPyTagged_DECREF(cpy_r_r83);
    cpy_r_r85 = CPyStr_GetSlice(cpy_r_marker_line, cpy_r_marker_column, cpy_r_r84);
    CPy_DECREF(cpy_r_marker_line);
    CPyTagged_DECREF(cpy_r_marker_column);
    CPyTagged_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 684, CPyStatic_mypy___util___globals);
        goto CPyL84;
    }
    if (likely(PyUnicode_Check(cpy_r_r85)))
        cpy_r_r86 = cpy_r_r85;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "fit_in_terminal", 684, CPyStatic_mypy___util___globals, "str", cpy_r_r85);
        goto CPyL84;
    }
    cpy_r_marker = cpy_r_r86;
CPyL44: ;
    cpy_r_r87 = CPyTagged_Subtract(cpy_r_width, 8);
    cpy_r_r88 = CPyTagged_Subtract(cpy_r_r87, 12);
    CPyTagged_DECREF(cpy_r_r87);
    cpy_r_max_len = cpy_r_r88;
    cpy_r_r89 = CPyDef_mypy___util___trim_source_line(cpy_r_error, cpy_r_max_len, cpy_r_column, 40);
    CPy_DECREF(cpy_r_error);
    CPyTagged_DECREF(cpy_r_max_len);
    if (unlikely(cpy_r_r89.f0 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 689, CPyStatic_mypy___util___globals);
        goto CPyL85;
    }
    cpy_r_r90 = cpy_r_r89.f0;
    CPy_INCREF(cpy_r_r90);
    cpy_r_source_line = cpy_r_r90;
    cpy_r_r91 = cpy_r_r89.f1;
    CPyTagged_INCREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r89.f0);
    CPyTagged_DECREF(cpy_r_r89.f1);
    cpy_r_offset = cpy_r_r91;
    cpy_r_r92 = CPyStatics[309]; /* '    ' */
    cpy_r_r93 = PyUnicode_Concat(cpy_r_r92, cpy_r_source_line);
    CPy_DECREF(cpy_r_source_line);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 691, CPyStatic_mypy___util___globals);
        goto CPyL86;
    }
    cpy_r_r94 = CPyList_SetItem(cpy_r_new_messages, cpy_r_i, cpy_r_r93);
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 691, CPyStatic_mypy___util___globals);
        goto CPyL86;
    }
    cpy_r_r95 = CPyStatics[295]; /* ' ' */
    cpy_r_r96 = CPyTagged_Add(8, cpy_r_column);
    CPyTagged_DECREF(cpy_r_column);
    cpy_r_r97 = CPyTagged_Subtract(cpy_r_r96, cpy_r_offset);
    CPyTagged_DECREF(cpy_r_r96);
    CPyTagged_DECREF(cpy_r_offset);
    cpy_r_r98 = CPyTagged_StealAsObject(cpy_r_r97);
    cpy_r_r99 = PyNumber_Multiply(cpy_r_r95, cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 693, CPyStatic_mypy___util___globals);
        goto CPyL87;
    }
    if (likely(PyUnicode_Check(cpy_r_r99)))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "fit_in_terminal", 693, CPyStatic_mypy___util___globals, "str", cpy_r_r99);
        goto CPyL87;
    }
    cpy_r_r101 = PyUnicode_Concat(cpy_r_r100, cpy_r_marker);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 693, CPyStatic_mypy___util___globals);
        goto CPyL87;
    }
    cpy_r_new_marker_line = cpy_r_r101;
    cpy_r_r102 = CPyStr_Size_size_t(cpy_r_new_marker_line);
    cpy_r_r103 = cpy_r_r102 >= 0;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 694, CPyStatic_mypy___util___globals);
        goto CPyL88;
    }
    cpy_r_r104 = cpy_r_r102 << 1;
    cpy_r_r105 = CPyList_GetItem(cpy_r_new_messages, cpy_r_i);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 694, CPyStatic_mypy___util___globals);
        goto CPyL88;
    }
    if (likely(PyUnicode_Check(cpy_r_r105)))
        cpy_r_r106 = cpy_r_r105;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "fit_in_terminal", 694, CPyStatic_mypy___util___globals, "str", cpy_r_r105);
        goto CPyL88;
    }
    cpy_r_r107 = CPyStr_Size_size_t(cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 694, CPyStatic_mypy___util___globals);
        goto CPyL88;
    }
    cpy_r_r109 = cpy_r_r107 << 1;
    cpy_r_r110 = (Py_ssize_t)cpy_r_r104 > (Py_ssize_t)cpy_r_r109;
    if (!cpy_r_r110) goto CPyL89;
    cpy_r_r111 = CPyStr_Size_size_t(cpy_r_marker);
    CPy_DECREF(cpy_r_marker);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 694, CPyStatic_mypy___util___globals);
        goto CPyL90;
    }
    cpy_r_r113 = cpy_r_r111 << 1;
    cpy_r_r114 = (Py_ssize_t)cpy_r_r113 > (Py_ssize_t)6;
    if (!cpy_r_r114) goto CPyL64;
    cpy_r_r115 = CPyList_GetItem(cpy_r_new_messages, cpy_r_i);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 695, CPyStatic_mypy___util___globals);
        goto CPyL90;
    }
    if (likely(PyUnicode_Check(cpy_r_r115)))
        cpy_r_r116 = cpy_r_r115;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "fit_in_terminal", 695, CPyStatic_mypy___util___globals, "str", cpy_r_r115);
        goto CPyL90;
    }
    cpy_r_r117 = CPyStr_Size_size_t(cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 695, CPyStatic_mypy___util___globals);
        goto CPyL90;
    }
    cpy_r_r119 = cpy_r_r117 << 1;
    cpy_r_r120 = CPyTagged_Subtract(cpy_r_r119, 6);
    cpy_r_r121 = CPyStr_GetSlice(cpy_r_new_marker_line, 0, cpy_r_r120);
    CPy_DECREF(cpy_r_new_marker_line);
    CPyTagged_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 695, CPyStatic_mypy___util___globals);
        goto CPyL73;
    }
    if (likely(PyUnicode_Check(cpy_r_r121)))
        cpy_r_r122 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "fit_in_terminal", 695, CPyStatic_mypy___util___globals, "str", cpy_r_r121);
        goto CPyL73;
    }
    cpy_r_r123 = CPyStatics[5575]; /* '...' */
    cpy_r_r124 = PyUnicode_Concat(cpy_r_r122, cpy_r_r123);
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 695, CPyStatic_mypy___util___globals);
        goto CPyL73;
    }
    cpy_r_new_marker_line = cpy_r_r124;
CPyL64: ;
    cpy_r_r125 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_r126 = CPyList_SetItem(cpy_r_new_messages, cpy_r_r125, cpy_r_new_marker_line);
    CPyTagged_DECREF(cpy_r_r125);
    if (unlikely(!cpy_r_r126)) {
        CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 696, CPyStatic_mypy___util___globals);
        goto CPyL91;
    }
CPyL65: ;
    cpy_r_r127 = cpy_r_r13 + 2;
    cpy_r_r13 = cpy_r_r127;
    cpy_r_i = cpy_r_r127;
    cpy_r_r128 = cpy_r_r14 + 2;
    cpy_r_r14 = cpy_r_r128;
    goto CPyL12;
CPyL66: ;
    return cpy_r_new_messages;
CPyL67: ;
    cpy_r_r129 = NULL;
    return cpy_r_r129;
CPyL68: ;
    CPy_INCREF(cpy_r_fixed_terminal_width);
    goto CPyL2;
CPyL69: ;
    CPy_DECREF(cpy_r_fixed_terminal_width);
    goto CPyL7;
CPyL70: ;
    CPy_DecRef(cpy_r_fixed_terminal_width);
    goto CPyL67;
CPyL71: ;
    CPyTagged_DecRef(cpy_r_width);
    goto CPyL67;
CPyL72: ;
    CPyTagged_DECREF(cpy_r_width);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL66;
CPyL73: ;
    CPyTagged_DecRef(cpy_r_width);
    CPy_DecRef(cpy_r_new_messages);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL67;
CPyL74: ;
    CPyTagged_DecRef(cpy_r_width);
    CPy_DecRef(cpy_r_new_messages);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_error);
    goto CPyL67;
CPyL75: ;
    CPyTagged_DecRef(cpy_r_width);
    CPy_DecRef(cpy_r_new_messages);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_r32);
    goto CPyL67;
CPyL76: ;
    CPyTagged_DecRef(cpy_r_width);
    CPy_DecRef(cpy_r_new_messages);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_r36);
    goto CPyL67;
CPyL77: ;
    CPyTagged_DecRef(cpy_r_width);
    CPy_DecRef(cpy_r_new_messages);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_loc);
    goto CPyL67;
CPyL78: ;
    CPyTagged_DecRef(cpy_r_width);
    CPy_DecRef(cpy_r_new_messages);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_loc);
    CPy_DecRef(cpy_r_msg);
    goto CPyL67;
CPyL79: ;
    CPyTagged_DecRef(cpy_r_width);
    CPy_DecRef(cpy_r_new_messages);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_msg);
    goto CPyL67;
CPyL80: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_error);
    goto CPyL65;
CPyL81: ;
    CPyTagged_DecRef(cpy_r_width);
    CPy_DecRef(cpy_r_new_messages);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_marker_line);
    goto CPyL67;
CPyL82: ;
    CPyTagged_DecRef(cpy_r_width);
    CPy_DecRef(cpy_r_new_messages);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_marker_line);
    CPyTagged_DecRef(cpy_r_marker_column);
    CPyTagged_DecRef(cpy_r_column);
    goto CPyL67;
CPyL83: ;
    CPy_DECREF(cpy_r_marker_line);
    CPyTagged_DECREF(cpy_r_marker_column);
    goto CPyL38;
CPyL84: ;
    CPyTagged_DecRef(cpy_r_width);
    CPy_DecRef(cpy_r_new_messages);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_column);
    goto CPyL67;
CPyL85: ;
    CPyTagged_DecRef(cpy_r_width);
    CPy_DecRef(cpy_r_new_messages);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_marker);
    goto CPyL67;
CPyL86: ;
    CPyTagged_DecRef(cpy_r_width);
    CPy_DecRef(cpy_r_new_messages);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_marker);
    CPyTagged_DecRef(cpy_r_offset);
    goto CPyL67;
CPyL87: ;
    CPyTagged_DecRef(cpy_r_width);
    CPy_DecRef(cpy_r_new_messages);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_marker);
    goto CPyL67;
CPyL88: ;
    CPyTagged_DecRef(cpy_r_width);
    CPy_DecRef(cpy_r_new_messages);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_marker);
    CPy_DecRef(cpy_r_new_marker_line);
    goto CPyL67;
CPyL89: ;
    CPy_DECREF(cpy_r_marker);
    goto CPyL64;
CPyL90: ;
    CPyTagged_DecRef(cpy_r_width);
    CPy_DecRef(cpy_r_new_messages);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_new_marker_line);
    goto CPyL67;
CPyL91: ;
    CPyTagged_DecRef(cpy_r_width);
    CPy_DecRef(cpy_r_new_messages);
    goto CPyL67;
}

PyObject *CPyPy_mypy___util___FancyFormatter___fit_in_terminal(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"messages", "fixed_terminal_width", 0};
    static CPyArg_Parser parser = {"O|O:fit_in_terminal", kwlist, 0};
    PyObject *obj_messages;
    PyObject *obj_fixed_terminal_width = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_messages, &obj_fixed_terminal_width)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___util___FancyFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.util.FancyFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_messages;
    if (likely(PyList_Check(obj_messages)))
        arg_messages = obj_messages;
    else {
        CPy_TypeError("list", obj_messages); 
        goto fail;
    }
    PyObject *arg_fixed_terminal_width;
    if (obj_fixed_terminal_width == NULL) {
        arg_fixed_terminal_width = NULL;
        goto __LL8198;
    }
    if (PyLong_Check(obj_fixed_terminal_width))
        arg_fixed_terminal_width = obj_fixed_terminal_width;
    else {
        arg_fixed_terminal_width = NULL;
    }
    if (arg_fixed_terminal_width != NULL) goto __LL8198;
    if (obj_fixed_terminal_width == Py_None)
        arg_fixed_terminal_width = obj_fixed_terminal_width;
    else {
        arg_fixed_terminal_width = NULL;
    }
    if (arg_fixed_terminal_width != NULL) goto __LL8198;
    CPy_TypeError("int or None", obj_fixed_terminal_width); 
    goto fail;
__LL8198: ;
    PyObject *retval = CPyDef_mypy___util___FancyFormatter___fit_in_terminal(arg_self, arg_messages, arg_fixed_terminal_width);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "fit_in_terminal", 662, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___FancyFormatter___colorize(PyObject *cpy_r_self, PyObject *cpy_r_error) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_loc;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_msg;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyTagged cpy_r_codepos;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_code;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    int32_t cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject **cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    int32_t cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_formatted;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    cpy_r_r0 = CPyStatics[6545]; /* ': error:' */
    cpy_r_r1 = PySequence_Contains(cpy_r_error, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 701, CPyStatic_mypy___util___globals);
        goto CPyL50;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL29;
    cpy_r_r4 = CPyStatics[6582]; /* 'error:' */
    cpy_r_r5 = CPyStatics[369]; /* 'split' */
    cpy_r_r6 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r7[3] = {cpy_r_error, cpy_r_r4, cpy_r_r6};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = CPyStatics[9213]; /* ('maxsplit',) */
    cpy_r_r10 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r8, 9223372036854775810ULL, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 702, CPyStatic_mypy___util___globals);
        goto CPyL50;
    }
    if (likely(PyList_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "colorize", 702, CPyStatic_mypy___util___globals, "list", cpy_r_r10);
        goto CPyL50;
    }
    cpy_r_r12 = CPySequence_CheckUnpackCount(cpy_r_r11, 2);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 702, CPyStatic_mypy___util___globals);
        goto CPyL51;
    }
    cpy_r_r14 = CPyList_GetItemUnsafe(cpy_r_r11, 0);
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r11, 2);
    CPy_DECREF(cpy_r_r11);
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r16 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "colorize", 702, CPyStatic_mypy___util___globals, "str", cpy_r_r14);
        goto CPyL52;
    }
    cpy_r_loc = cpy_r_r16;
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r17 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "colorize", 702, CPyStatic_mypy___util___globals, "str", cpy_r_r15);
        goto CPyL53;
    }
    cpy_r_msg = cpy_r_r17;
    cpy_r_r18 = ((mypy___util___FancyFormatterObject *)cpy_r_self)->_hide_error_codes;
    if (!cpy_r_r18) goto CPyL13;
CPyL8: ;
    cpy_r_r19 = CPyStatics[6582]; /* 'error:' */
    cpy_r_r20 = CPyStatics[3069]; /* 'red' */
    cpy_r_r21 = 2;
    cpy_r_r22 = 2;
    cpy_r_r23 = CPyDef_mypy___util___FancyFormatter___style(cpy_r_self, cpy_r_r19, cpy_r_r20, 1, cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 705, CPyStatic_mypy___util___globals);
        goto CPyL54;
    }
    cpy_r_r24 = PyUnicode_Concat(cpy_r_loc, cpy_r_r23);
    CPy_DECREF(cpy_r_loc);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 705, CPyStatic_mypy___util___globals);
        goto CPyL55;
    }
    cpy_r_r25 = CPyDef_mypy___util___FancyFormatter___highlight_quote_groups(cpy_r_self, cpy_r_msg);
    CPy_DECREF(cpy_r_msg);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 705, CPyStatic_mypy___util___globals);
        goto CPyL56;
    }
    cpy_r_r26 = PyUnicode_Concat(cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 705, CPyStatic_mypy___util___globals);
        goto CPyL50;
    }
    return cpy_r_r26;
CPyL13: ;
    cpy_r_r27 = CPyStatics[207]; /* '[' */
    cpy_r_r28 = CPyStatics[3834]; /* 'rfind' */
    PyObject *cpy_r_r29[2] = {cpy_r_msg, cpy_r_r27};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = PyObject_VectorcallMethod(cpy_r_r28, cpy_r_r30, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 707, CPyStatic_mypy___util___globals);
        goto CPyL54;
    }
    if (likely(PyLong_Check(cpy_r_r31)))
        cpy_r_r32 = CPyTagged_FromObject(cpy_r_r31);
    else {
        CPy_TypeError("int", cpy_r_r31); cpy_r_r32 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 707, CPyStatic_mypy___util___globals);
        goto CPyL54;
    }
    cpy_r_codepos = cpy_r_r32;
    cpy_r_r33 = (Py_ssize_t)cpy_r_codepos != -2;
    if (!cpy_r_r33) goto CPyL57;
    cpy_r_r34 = CPyStr_GetSlice(cpy_r_msg, cpy_r_codepos, 9223372036854775806LL);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 709, CPyStatic_mypy___util___globals);
        goto CPyL58;
    }
    if (likely(PyUnicode_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "colorize", 709, CPyStatic_mypy___util___globals, "str", cpy_r_r34);
        goto CPyL58;
    }
    cpy_r_code = cpy_r_r35;
    cpy_r_r36 = CPyStr_GetSlice(cpy_r_msg, 0, cpy_r_codepos);
    CPy_DECREF(cpy_r_msg);
    CPyTagged_DECREF(cpy_r_codepos);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 710, CPyStatic_mypy___util___globals);
        goto CPyL59;
    }
    if (likely(PyUnicode_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "colorize", 710, CPyStatic_mypy___util___globals, "str", cpy_r_r36);
        goto CPyL59;
    }
    cpy_r_msg = cpy_r_r37;
    goto CPyL22;
CPyL21: ;
    cpy_r_r38 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r38);
    cpy_r_code = cpy_r_r38;
CPyL22: ;
    cpy_r_r39 = CPyStatics[6582]; /* 'error:' */
    cpy_r_r40 = CPyStatics[3069]; /* 'red' */
    cpy_r_r41 = 2;
    cpy_r_r42 = 2;
    cpy_r_r43 = CPyDef_mypy___util___FancyFormatter___style(cpy_r_self, cpy_r_r39, cpy_r_r40, 1, cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 715, CPyStatic_mypy___util___globals);
        goto CPyL60;
    }
    cpy_r_r44 = PyUnicode_Concat(cpy_r_loc, cpy_r_r43);
    CPy_DECREF(cpy_r_loc);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 714, CPyStatic_mypy___util___globals);
        goto CPyL61;
    }
    cpy_r_r45 = CPyDef_mypy___util___FancyFormatter___highlight_quote_groups(cpy_r_self, cpy_r_msg);
    CPy_DECREF(cpy_r_msg);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 716, CPyStatic_mypy___util___globals);
        goto CPyL62;
    }
    cpy_r_r46 = PyUnicode_Concat(cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 714, CPyStatic_mypy___util___globals);
        goto CPyL63;
    }
    cpy_r_r47 = CPyStatics[6559]; /* 'yellow' */
    cpy_r_r48 = 2;
    cpy_r_r49 = 2;
    cpy_r_r50 = 2;
    cpy_r_r51 = CPyDef_mypy___util___FancyFormatter___style(cpy_r_self, cpy_r_code, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_code);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 717, CPyStatic_mypy___util___globals);
        goto CPyL64;
    }
    cpy_r_r52 = PyUnicode_Concat(cpy_r_r46, cpy_r_r51);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 714, CPyStatic_mypy___util___globals);
        goto CPyL50;
    }
    return cpy_r_r52;
CPyL29: ;
    cpy_r_r53 = CPyStatics[6546]; /* ': note:' */
    cpy_r_r54 = PySequence_Contains(cpy_r_error, cpy_r_r53);
    cpy_r_r55 = cpy_r_r54 >= 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 719, CPyStatic_mypy___util___globals);
        goto CPyL50;
    }
    cpy_r_r56 = cpy_r_r54;
    if (!cpy_r_r56) goto CPyL42;
    cpy_r_r57 = CPyStatics[6585]; /* 'note:' */
    cpy_r_r58 = CPyStatics[369]; /* 'split' */
    cpy_r_r59 = CPyStatics[9016]; /* 1 */
    PyObject *cpy_r_r60[3] = {cpy_r_error, cpy_r_r57, cpy_r_r59};
    cpy_r_r61 = (PyObject **)&cpy_r_r60;
    cpy_r_r62 = CPyStatics[9213]; /* ('maxsplit',) */
    cpy_r_r63 = PyObject_VectorcallMethod(cpy_r_r58, cpy_r_r61, 9223372036854775810ULL, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 720, CPyStatic_mypy___util___globals);
        goto CPyL50;
    }
    if (likely(PyList_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "colorize", 720, CPyStatic_mypy___util___globals, "list", cpy_r_r63);
        goto CPyL50;
    }
    cpy_r_r65 = CPySequence_CheckUnpackCount(cpy_r_r64, 2);
    cpy_r_r66 = cpy_r_r65 >= 0;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 720, CPyStatic_mypy___util___globals);
        goto CPyL65;
    }
    cpy_r_r67 = CPyList_GetItemUnsafe(cpy_r_r64, 0);
    cpy_r_r68 = CPyList_GetItemUnsafe(cpy_r_r64, 2);
    CPy_DECREF(cpy_r_r64);
    if (likely(PyUnicode_Check(cpy_r_r67)))
        cpy_r_r69 = cpy_r_r67;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "colorize", 720, CPyStatic_mypy___util___globals, "str", cpy_r_r67);
        goto CPyL66;
    }
    cpy_r_loc = cpy_r_r69;
    if (likely(PyUnicode_Check(cpy_r_r68)))
        cpy_r_r70 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "colorize", 720, CPyStatic_mypy___util___globals, "str", cpy_r_r68);
        goto CPyL53;
    }
    cpy_r_msg = cpy_r_r70;
    cpy_r_r71 = CPyDef_mypy___util___FancyFormatter___underline_link(cpy_r_self, cpy_r_msg);
    CPy_DECREF(cpy_r_msg);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 721, CPyStatic_mypy___util___globals);
        goto CPyL53;
    }
    cpy_r_r72 = CPyDef_mypy___util___FancyFormatter___highlight_quote_groups(cpy_r_self, cpy_r_r71);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 721, CPyStatic_mypy___util___globals);
        goto CPyL53;
    }
    cpy_r_formatted = cpy_r_r72;
    cpy_r_r73 = CPyStatics[6585]; /* 'note:' */
    cpy_r_r74 = CPyStatics[6558]; /* 'blue' */
    cpy_r_r75 = 2;
    cpy_r_r76 = 2;
    cpy_r_r77 = 2;
    cpy_r_r78 = CPyDef_mypy___util___FancyFormatter___style(cpy_r_self, cpy_r_r73, cpy_r_r74, cpy_r_r75, cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 722, CPyStatic_mypy___util___globals);
        goto CPyL67;
    }
    cpy_r_r79 = PyUnicode_Concat(cpy_r_loc, cpy_r_r78);
    CPy_DECREF(cpy_r_loc);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 722, CPyStatic_mypy___util___globals);
        goto CPyL68;
    }
    cpy_r_r80 = PyUnicode_Concat(cpy_r_r79, cpy_r_formatted);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_formatted);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 722, CPyStatic_mypy___util___globals);
        goto CPyL50;
    }
    return cpy_r_r80;
CPyL42: ;
    cpy_r_r81 = CPyStatics[309]; /* '    ' */
    cpy_r_r82 = CPyStr_Startswith(cpy_r_error, cpy_r_r81);
    if (!cpy_r_r82) goto CPyL49;
    cpy_r_r83 = CPyStatics[1597]; /* '^' */
    cpy_r_r84 = PySequence_Contains(cpy_r_error, cpy_r_r83);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 725, CPyStatic_mypy___util___globals);
        goto CPyL50;
    }
    cpy_r_r86 = cpy_r_r84;
    cpy_r_r87 = cpy_r_r86 ^ 1;
    if (!cpy_r_r87) goto CPyL47;
    cpy_r_r88 = CPyStatics[203]; /* 'none' */
    cpy_r_r89 = 2;
    cpy_r_r90 = 2;
    cpy_r_r91 = CPyDef_mypy___util___FancyFormatter___style(cpy_r_self, cpy_r_error, cpy_r_r88, cpy_r_r89, cpy_r_r90, 1);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 726, CPyStatic_mypy___util___globals);
        goto CPyL50;
    }
    return cpy_r_r91;
CPyL47: ;
    cpy_r_r92 = CPyStatics[3069]; /* 'red' */
    cpy_r_r93 = 2;
    cpy_r_r94 = 2;
    cpy_r_r95 = 2;
    cpy_r_r96 = CPyDef_mypy___util___FancyFormatter___style(cpy_r_self, cpy_r_error, cpy_r_r92, cpy_r_r93, cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "colorize", 727, CPyStatic_mypy___util___globals);
        goto CPyL50;
    }
    return cpy_r_r96;
CPyL49: ;
    CPy_INCREF(cpy_r_error);
    return cpy_r_error;
CPyL50: ;
    cpy_r_r97 = NULL;
    return cpy_r_r97;
CPyL51: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL50;
CPyL52: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL50;
CPyL53: ;
    CPy_DecRef(cpy_r_loc);
    goto CPyL50;
CPyL54: ;
    CPy_DecRef(cpy_r_loc);
    CPy_DecRef(cpy_r_msg);
    goto CPyL50;
CPyL55: ;
    CPy_DecRef(cpy_r_msg);
    goto CPyL50;
CPyL56: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL50;
CPyL57: ;
    CPyTagged_DECREF(cpy_r_codepos);
    goto CPyL21;
CPyL58: ;
    CPy_DecRef(cpy_r_loc);
    CPy_DecRef(cpy_r_msg);
    CPyTagged_DecRef(cpy_r_codepos);
    goto CPyL50;
CPyL59: ;
    CPy_DecRef(cpy_r_loc);
    CPy_DecRef(cpy_r_code);
    goto CPyL50;
CPyL60: ;
    CPy_DecRef(cpy_r_loc);
    CPy_DecRef(cpy_r_msg);
    CPy_DecRef(cpy_r_code);
    goto CPyL50;
CPyL61: ;
    CPy_DecRef(cpy_r_msg);
    CPy_DecRef(cpy_r_code);
    goto CPyL50;
CPyL62: ;
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_r44);
    goto CPyL50;
CPyL63: ;
    CPy_DecRef(cpy_r_code);
    goto CPyL50;
CPyL64: ;
    CPy_DecRef(cpy_r_r46);
    goto CPyL50;
CPyL65: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL50;
CPyL66: ;
    CPy_DecRef(cpy_r_r68);
    goto CPyL50;
CPyL67: ;
    CPy_DecRef(cpy_r_loc);
    CPy_DecRef(cpy_r_formatted);
    goto CPyL50;
CPyL68: ;
    CPy_DecRef(cpy_r_formatted);
    goto CPyL50;
}

PyObject *CPyPy_mypy___util___FancyFormatter___colorize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"error", 0};
    static CPyArg_Parser parser = {"O:colorize", kwlist, 0};
    PyObject *obj_error;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_error)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___util___FancyFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.util.FancyFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_error;
    if (likely(PyUnicode_Check(obj_error)))
        arg_error = obj_error;
    else {
        CPy_TypeError("str", obj_error); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___util___FancyFormatter___colorize(arg_self, arg_error);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "colorize", 699, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___FancyFormatter___highlight_quote_groups(PyObject *cpy_r_self, PyObject *cpy_r_msg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_parts;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_out;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_part;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    CPyTagged cpy_r_r37;
    PyObject *cpy_r_r38;
    cpy_r_r0 = CPyStatics[178]; /* '"' */
    cpy_r_r1 = CPyStatics[226]; /* 'count' */
    PyObject *cpy_r_r2[2] = {cpy_r_msg, cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "highlight_quote_groups", 736, CPyStatic_mypy___util___globals);
        goto CPyL21;
    }
    if (likely(PyLong_Check(cpy_r_r4)))
        cpy_r_r5 = CPyTagged_FromObject(cpy_r_r4);
    else {
        CPy_TypeError("int", cpy_r_r4); cpy_r_r5 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "highlight_quote_groups", 736, CPyStatic_mypy___util___globals);
        goto CPyL21;
    }
    cpy_r_r6 = CPyTagged_Remainder(cpy_r_r5, 4);
    CPyTagged_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "highlight_quote_groups", 736, CPyStatic_mypy___util___globals);
        goto CPyL21;
    }
    cpy_r_r7 = cpy_r_r6 != 0;
    CPyTagged_DECREF(cpy_r_r6);
    if (!cpy_r_r7) goto CPyL5;
    CPy_INCREF(cpy_r_msg);
    return cpy_r_msg;
CPyL5: ;
    cpy_r_r8 = CPyStatics[178]; /* '"' */
    cpy_r_r9 = PyUnicode_Split(cpy_r_msg, cpy_r_r8, -1);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "highlight_quote_groups", 739, CPyStatic_mypy___util___globals);
        goto CPyL21;
    }
    cpy_r_parts = cpy_r_r9;
    cpy_r_r10 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r10);
    cpy_r_out = cpy_r_r10;
    cpy_r_r11 = 0;
    cpy_r_i = 0;
    cpy_r_r12 = 0;
CPyL7: ;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_parts)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r15;
    if (!cpy_r_r16) goto CPyL22;
    cpy_r_r17 = CPyList_GetItemUnsafe(cpy_r_parts, cpy_r_r12);
    if (likely(PyUnicode_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "highlight_quote_groups", 741, CPyStatic_mypy___util___globals, "str", cpy_r_r17);
        goto CPyL23;
    }
    cpy_r_part = cpy_r_r18;
    cpy_r_r19 = CPyTagged_Remainder(cpy_r_i, 4);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r19 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "highlight_quote_groups", 742, CPyStatic_mypy___util___globals);
        goto CPyL24;
    }
    cpy_r_r20 = cpy_r_r19 == 0;
    CPyTagged_DECREF(cpy_r_r19);
    if (!cpy_r_r20) goto CPyL14;
    cpy_r_r21 = CPyStatics[203]; /* 'none' */
    cpy_r_r22 = 2;
    cpy_r_r23 = 2;
    cpy_r_r24 = 2;
    cpy_r_r25 = CPyDef_mypy___util___FancyFormatter___style(cpy_r_self, cpy_r_part, cpy_r_r21, cpy_r_r22, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_part);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "highlight_quote_groups", 743, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    cpy_r_r26 = CPyStr_Append(cpy_r_out, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "highlight_quote_groups", 743, CPyStatic_mypy___util___globals);
        goto CPyL26;
    }
    cpy_r_out = cpy_r_r26;
    goto CPyL19;
CPyL14: ;
    cpy_r_r27 = CPyStatics[178]; /* '"' */
    cpy_r_r28 = PyUnicode_Concat(cpy_r_r27, cpy_r_part);
    CPy_DECREF(cpy_r_part);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "highlight_quote_groups", 745, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    cpy_r_r29 = CPyStatics[178]; /* '"' */
    cpy_r_r30 = PyUnicode_Concat(cpy_r_r28, cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "highlight_quote_groups", 745, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    cpy_r_r31 = CPyStatics[203]; /* 'none' */
    cpy_r_r32 = 2;
    cpy_r_r33 = 2;
    cpy_r_r34 = CPyDef_mypy___util___FancyFormatter___style(cpy_r_self, cpy_r_r30, cpy_r_r31, 1, cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "highlight_quote_groups", 745, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    cpy_r_r35 = CPyStr_Append(cpy_r_out, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "highlight_quote_groups", 745, CPyStatic_mypy___util___globals);
        goto CPyL26;
    }
    cpy_r_out = cpy_r_r35;
CPyL19: ;
    cpy_r_r36 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r36;
    cpy_r_i = cpy_r_r36;
    cpy_r_r37 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r37;
    goto CPyL7;
CPyL20: ;
    return cpy_r_out;
CPyL21: ;
    cpy_r_r38 = NULL;
    return cpy_r_r38;
CPyL22: ;
    CPy_DECREF(cpy_r_parts);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL20;
CPyL23: ;
    CPy_DecRef(cpy_r_parts);
    CPy_DecRef(cpy_r_out);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_parts);
    CPy_DecRef(cpy_r_out);
    CPy_DecRef(cpy_r_part);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_parts);
    CPy_DecRef(cpy_r_out);
    goto CPyL21;
CPyL26: ;
    CPy_DecRef(cpy_r_parts);
    goto CPyL21;
}

PyObject *CPyPy_mypy___util___FancyFormatter___highlight_quote_groups(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", 0};
    static CPyArg_Parser parser = {"O:highlight_quote_groups", kwlist, 0};
    PyObject *obj_msg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_msg)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___util___FancyFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.util.FancyFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___util___FancyFormatter___highlight_quote_groups(arg_self, arg_msg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "highlight_quote_groups", 731, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___FancyFormatter___underline_link(PyObject *cpy_r_self, PyObject *cpy_r_note) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_match;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_start;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_r26;
    CPyTagged cpy_r_end;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    cpy_r_r0 = CPyStatics[6586]; /* 'https?://\\S*' */
    cpy_r_r1 = CPyModule_re;
    cpy_r_r2 = CPyStatics[180]; /* 'search' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "underline_link", 753, CPyStatic_mypy___util___globals);
        goto CPyL23;
    }
    PyObject *cpy_r_r4[2] = {cpy_r_r0, cpy_r_note};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 2, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "underline_link", 753, CPyStatic_mypy___util___globals);
        goto CPyL23;
    }
    cpy_r_match = cpy_r_r6;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_match != cpy_r_r7;
    if (!cpy_r_r8) goto CPyL24;
    CPy_INCREF(cpy_r_match);
    cpy_r_r9 = cpy_r_match;
    cpy_r_r10 = PyObject_IsTrue(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/util.py", "underline_link", 753, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    cpy_r_r12 = cpy_r_r10;
    if (cpy_r_r12) {
        goto CPyL7;
    } else
        goto CPyL24;
CPyL6: ;
    CPy_INCREF(cpy_r_note);
    return cpy_r_note;
CPyL7: ;
    CPy_INCREF(cpy_r_match);
    cpy_r_r13 = cpy_r_match;
    cpy_r_r14 = CPyStatics[1402]; /* 'start' */
    PyObject *cpy_r_r15[1] = {cpy_r_r13};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = PyObject_VectorcallMethod(cpy_r_r14, cpy_r_r16, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "underline_link", 756, CPyStatic_mypy___util___globals);
        goto CPyL26;
    }
    CPy_DECREF(cpy_r_r13);
    if (likely(PyLong_Check(cpy_r_r17)))
        cpy_r_r18 = CPyTagged_FromObject(cpy_r_r17);
    else {
        CPy_TypeError("int", cpy_r_r17); cpy_r_r18 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "underline_link", 756, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    cpy_r_r19 = cpy_r_r18;
    cpy_r_start = cpy_r_r19;
    cpy_r_r20 = cpy_r_match;
    cpy_r_r21 = CPyStatics[6587]; /* 'end' */
    PyObject *cpy_r_r22[1] = {cpy_r_r20};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = PyObject_VectorcallMethod(cpy_r_r21, cpy_r_r23, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "underline_link", 757, CPyStatic_mypy___util___globals);
        goto CPyL27;
    }
    CPy_DECREF(cpy_r_r20);
    if (likely(PyLong_Check(cpy_r_r24)))
        cpy_r_r25 = CPyTagged_FromObject(cpy_r_r24);
    else {
        CPy_TypeError("int", cpy_r_r24); cpy_r_r25 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "underline_link", 757, CPyStatic_mypy___util___globals);
        goto CPyL28;
    }
    cpy_r_r26 = cpy_r_r25;
    cpy_r_end = cpy_r_r26;
    cpy_r_r27 = CPyStr_GetSlice(cpy_r_note, 0, cpy_r_start);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "underline_link", 758, CPyStatic_mypy___util___globals);
        goto CPyL29;
    }
    if (likely(PyUnicode_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "underline_link", 758, CPyStatic_mypy___util___globals, "str", cpy_r_r27);
        goto CPyL29;
    }
    cpy_r_r29 = CPyStr_GetSlice(cpy_r_note, cpy_r_start, cpy_r_end);
    CPyTagged_DECREF(cpy_r_start);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "underline_link", 758, CPyStatic_mypy___util___globals);
        goto CPyL30;
    }
    if (likely(PyUnicode_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "underline_link", 758, CPyStatic_mypy___util___globals, "str", cpy_r_r29);
        goto CPyL30;
    }
    cpy_r_r31 = CPyStatics[203]; /* 'none' */
    cpy_r_r32 = 2;
    cpy_r_r33 = 2;
    cpy_r_r34 = CPyDef_mypy___util___FancyFormatter___style(cpy_r_self, cpy_r_r30, cpy_r_r31, cpy_r_r32, 1, cpy_r_r33);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "underline_link", 758, CPyStatic_mypy___util___globals);
        goto CPyL30;
    }
    cpy_r_r35 = PyUnicode_Concat(cpy_r_r28, cpy_r_r34);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "underline_link", 758, CPyStatic_mypy___util___globals);
        goto CPyL31;
    }
    cpy_r_r36 = CPyStr_GetSlice(cpy_r_note, cpy_r_end, 9223372036854775806LL);
    CPyTagged_DECREF(cpy_r_end);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "underline_link", 758, CPyStatic_mypy___util___globals);
        goto CPyL32;
    }
    if (likely(PyUnicode_Check(cpy_r_r36)))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "underline_link", 758, CPyStatic_mypy___util___globals, "str", cpy_r_r36);
        goto CPyL32;
    }
    cpy_r_r38 = PyUnicode_Concat(cpy_r_r35, cpy_r_r37);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "underline_link", 758, CPyStatic_mypy___util___globals);
        goto CPyL23;
    }
    return cpy_r_r38;
CPyL23: ;
    cpy_r_r39 = NULL;
    return cpy_r_r39;
CPyL24: ;
    CPy_DECREF(cpy_r_match);
    goto CPyL6;
CPyL25: ;
    CPy_DecRef(cpy_r_match);
    goto CPyL23;
CPyL26: ;
    CPy_DecRef(cpy_r_match);
    CPy_DecRef(cpy_r_r13);
    goto CPyL23;
CPyL27: ;
    CPyTagged_DecRef(cpy_r_start);
    CPy_DecRef(cpy_r_r20);
    goto CPyL23;
CPyL28: ;
    CPyTagged_DecRef(cpy_r_start);
    goto CPyL23;
CPyL29: ;
    CPyTagged_DecRef(cpy_r_start);
    CPyTagged_DecRef(cpy_r_end);
    goto CPyL23;
CPyL30: ;
    CPyTagged_DecRef(cpy_r_end);
    CPy_DecRef(cpy_r_r28);
    goto CPyL23;
CPyL31: ;
    CPyTagged_DecRef(cpy_r_end);
    goto CPyL23;
CPyL32: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL23;
}

PyObject *CPyPy_mypy___util___FancyFormatter___underline_link(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"note", 0};
    static CPyArg_Parser parser = {"O:underline_link", kwlist, 0};
    PyObject *obj_note;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_note)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___util___FancyFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.util.FancyFormatter", obj_self); 
        goto fail;
    }
    PyObject *arg_note;
    if (likely(PyUnicode_Check(obj_note)))
        arg_note = obj_note;
    else {
        CPy_TypeError("str", obj_note); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___util___FancyFormatter___underline_link(arg_self, arg_note);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "underline_link", 748, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___FancyFormatter___format_success(PyObject *cpy_r_self, CPyTagged cpy_r_n_sources, char cpy_r_use_color) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_msg;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    if (cpy_r_use_color != 2) goto CPyL2;
    cpy_r_use_color = 1;
CPyL2: ;
    cpy_r_r0 = CPyStatics[6588]; /* 'Success: no issues found in ' */
    cpy_r_r1 = CPyTagged_Str(cpy_r_n_sources);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "format_success", 766, CPyStatic_mypy___util___globals);
        goto CPyL9;
    }
    cpy_r_r2 = CPyStatics[6589]; /* ' source file' */
    CPyTagged_INCREF(cpy_r_n_sources);
    cpy_r_r3 = CPyTagged_StealAsObject(cpy_r_n_sources);
    cpy_r_r4 = CPyDef_mypy___util___plural_s(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "format_success", 766, CPyStatic_mypy___util___globals);
        goto CPyL10;
    }
    cpy_r_r5 = CPyStr_Build(4, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r4);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "format_success", 766, CPyStatic_mypy___util___globals);
        goto CPyL9;
    }
    cpy_r_msg = cpy_r_r5;
    if (cpy_r_use_color) goto CPyL7;
    return cpy_r_msg;
CPyL7: ;
    cpy_r_r6 = CPyStatics[6557]; /* 'green' */
    cpy_r_r7 = 2;
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyDef_mypy___util___FancyFormatter___style(cpy_r_self, cpy_r_msg, cpy_r_r6, 1, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_msg);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "format_success", 769, CPyStatic_mypy___util___globals);
        goto CPyL9;
    }
    return cpy_r_r9;
CPyL9: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL10: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
}

PyObject *CPyPy_mypy___util___FancyFormatter___format_success(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"n_sources", "use_color", 0};
    static CPyArg_Parser parser = {"O|O:format_success", kwlist, 0};
    PyObject *obj_n_sources;
    PyObject *obj_use_color = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_n_sources, &obj_use_color)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___util___FancyFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.util.FancyFormatter", obj_self); 
        goto fail;
    }
    CPyTagged arg_n_sources;
    if (likely(PyLong_Check(obj_n_sources)))
        arg_n_sources = CPyTagged_BorrowFromObject(obj_n_sources);
    else {
        CPy_TypeError("int", obj_n_sources); goto fail;
    }
    char arg_use_color;
    if (obj_use_color == NULL) {
        arg_use_color = 2;
    } else if (unlikely(!PyBool_Check(obj_use_color))) {
        CPy_TypeError("bool", obj_use_color); goto fail;
    } else
        arg_use_color = obj_use_color == Py_True;
    PyObject *retval = CPyDef_mypy___util___FancyFormatter___format_success(arg_self, arg_n_sources, arg_use_color);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "format_success", 760, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___FancyFormatter___format_error(PyObject *cpy_r_self, CPyTagged cpy_r_n_errors, CPyTagged cpy_r_n_files, CPyTagged cpy_r_n_sources, char cpy_r_blockers, char cpy_r_use_color) {
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
    PyObject *cpy_r_msg;
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
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    if (cpy_r_blockers != 2) goto CPyL2;
    cpy_r_blockers = 0;
CPyL2: ;
    if (cpy_r_use_color != 2) goto CPyL4;
    cpy_r_use_color = 1;
CPyL4: ;
    cpy_r_r0 = CPyStatics[464]; /* 'Found ' */
    cpy_r_r1 = CPyTagged_Str(cpy_r_n_errors);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "format_error", 781, CPyStatic_mypy___util___globals);
        goto CPyL21;
    }
    cpy_r_r2 = CPyStatics[6590]; /* ' error' */
    CPyTagged_INCREF(cpy_r_n_errors);
    cpy_r_r3 = CPyTagged_StealAsObject(cpy_r_n_errors);
    cpy_r_r4 = CPyDef_mypy___util___plural_s(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "format_error", 781, CPyStatic_mypy___util___globals);
        goto CPyL22;
    }
    cpy_r_r5 = CPyStatics[3477]; /* ' in ' */
    cpy_r_r6 = CPyTagged_Str(cpy_r_n_files);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "format_error", 781, CPyStatic_mypy___util___globals);
        goto CPyL23;
    }
    cpy_r_r7 = CPyStatics[6591]; /* ' file' */
    CPyTagged_INCREF(cpy_r_n_files);
    cpy_r_r8 = CPyTagged_StealAsObject(cpy_r_n_files);
    cpy_r_r9 = CPyDef_mypy___util___plural_s(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "format_error", 781, CPyStatic_mypy___util___globals);
        goto CPyL24;
    }
    cpy_r_r10 = CPyStr_Build(8, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r4, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r9);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "format_error", 781, CPyStatic_mypy___util___globals);
        goto CPyL21;
    }
    cpy_r_msg = cpy_r_r10;
    if (!cpy_r_blockers) goto CPyL12;
    cpy_r_r11 = CPyStatics[6592]; /* ' (errors prevented further checking)' */
    cpy_r_r12 = CPyStr_Append(cpy_r_msg, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "format_error", 783, CPyStatic_mypy___util___globals);
        goto CPyL21;
    }
    cpy_r_msg = cpy_r_r12;
    goto CPyL17;
CPyL12: ;
    cpy_r_r13 = CPyStatics[6593]; /* ' (checked ' */
    cpy_r_r14 = CPyTagged_Str(cpy_r_n_sources);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "format_error", 785, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    cpy_r_r15 = CPyStatics[6589]; /* ' source file' */
    CPyTagged_INCREF(cpy_r_n_sources);
    cpy_r_r16 = CPyTagged_StealAsObject(cpy_r_n_sources);
    cpy_r_r17 = CPyDef_mypy___util___plural_s(cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "format_error", 785, CPyStatic_mypy___util___globals);
        goto CPyL26;
    }
    cpy_r_r18 = CPyStatics[72]; /* ')' */
    cpy_r_r19 = CPyStr_Build(5, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "format_error", 785, CPyStatic_mypy___util___globals);
        goto CPyL25;
    }
    cpy_r_r20 = CPyStr_Append(cpy_r_msg, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "format_error", 785, CPyStatic_mypy___util___globals);
        goto CPyL21;
    }
    cpy_r_msg = cpy_r_r20;
CPyL17: ;
    if (cpy_r_use_color) goto CPyL19;
    return cpy_r_msg;
CPyL19: ;
    cpy_r_r21 = CPyStatics[3069]; /* 'red' */
    cpy_r_r22 = 2;
    cpy_r_r23 = 2;
    cpy_r_r24 = CPyDef_mypy___util___FancyFormatter___style(cpy_r_self, cpy_r_msg, cpy_r_r21, 1, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_msg);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "format_error", 788, CPyStatic_mypy___util___globals);
        goto CPyL21;
    }
    return cpy_r_r24;
CPyL21: ;
    cpy_r_r25 = NULL;
    return cpy_r_r25;
CPyL22: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL21;
CPyL23: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL21;
CPyL24: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL21;
CPyL25: ;
    CPy_DecRef(cpy_r_msg);
    goto CPyL21;
CPyL26: ;
    CPy_DecRef(cpy_r_msg);
    CPy_DecRef(cpy_r_r14);
    goto CPyL21;
}

PyObject *CPyPy_mypy___util___FancyFormatter___format_error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"n_errors", "n_files", "n_sources", "blockers", "use_color", 0};
    static CPyArg_Parser parser = {"OOO|$OO:format_error", kwlist, 0};
    PyObject *obj_n_errors;
    PyObject *obj_n_files;
    PyObject *obj_n_sources;
    PyObject *obj_blockers = NULL;
    PyObject *obj_use_color = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_n_errors, &obj_n_files, &obj_n_sources, &obj_blockers, &obj_use_color)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___util___FancyFormatter))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.util.FancyFormatter", obj_self); 
        goto fail;
    }
    CPyTagged arg_n_errors;
    if (likely(PyLong_Check(obj_n_errors)))
        arg_n_errors = CPyTagged_BorrowFromObject(obj_n_errors);
    else {
        CPy_TypeError("int", obj_n_errors); goto fail;
    }
    CPyTagged arg_n_files;
    if (likely(PyLong_Check(obj_n_files)))
        arg_n_files = CPyTagged_BorrowFromObject(obj_n_files);
    else {
        CPy_TypeError("int", obj_n_files); goto fail;
    }
    CPyTagged arg_n_sources;
    if (likely(PyLong_Check(obj_n_sources)))
        arg_n_sources = CPyTagged_BorrowFromObject(obj_n_sources);
    else {
        CPy_TypeError("int", obj_n_sources); goto fail;
    }
    char arg_blockers;
    if (obj_blockers == NULL) {
        arg_blockers = 2;
    } else if (unlikely(!PyBool_Check(obj_blockers))) {
        CPy_TypeError("bool", obj_blockers); goto fail;
    } else
        arg_blockers = obj_blockers == Py_True;
    char arg_use_color;
    if (obj_use_color == NULL) {
        arg_use_color = 2;
    } else if (unlikely(!PyBool_Check(obj_use_color))) {
        CPy_TypeError("bool", obj_use_color); goto fail;
    } else
        arg_use_color = obj_use_color == Py_True;
    PyObject *retval = CPyDef_mypy___util___FancyFormatter___format_error(arg_self, arg_n_errors, arg_n_files, arg_n_sources, arg_blockers, arg_use_color);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "format_error", 771, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util___is_typeshed_file(PyObject *cpy_r_typeshed_dir, PyObject *cpy_r_file) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    tuple_T2OO cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    tuple_T3OOO cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_typeshed_dir != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL3;
    CPy_INCREF(cpy_r_typeshed_dir);
    if (likely(cpy_r_typeshed_dir != Py_None))
        cpy_r_r2 = cpy_r_typeshed_dir;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "is_typeshed_file", 792, CPyStatic_mypy___util___globals, "str", cpy_r_typeshed_dir);
        goto CPyL29;
    }
    cpy_r_r3 = cpy_r_r2;
    goto CPyL7;
CPyL3: ;
    cpy_r_r4 = CPyStatic_mypy___util___TYPESHED_DIR;
    if (likely(cpy_r_r4 != NULL)) goto CPyL6;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPESHED_DIR\" was not set");
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/util.py", "is_typeshed_file", 792, CPyStatic_mypy___util___globals);
        goto CPyL29;
    }
    CPy_Unreachable();
CPyL6: ;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r3 = cpy_r_r4;
CPyL7: ;
    cpy_r_typeshed_dir = cpy_r_r3;
    CPy_INCREF(cpy_r_typeshed_dir);
    if (likely(cpy_r_typeshed_dir != Py_None))
        cpy_r_r6 = cpy_r_typeshed_dir;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "is_typeshed_file", 794, CPyStatic_mypy___util___globals, "str", cpy_r_typeshed_dir);
        goto CPyL30;
    }
    cpy_r_r7 = CPyModule_os;
    cpy_r_r8 = CPyStatics[142]; /* 'path' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_typeshed_file", 794, CPyStatic_mypy___util___globals);
        goto CPyL31;
    }
    cpy_r_r10 = CPyStatics[153]; /* 'abspath' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_typeshed_file", 794, CPyStatic_mypy___util___globals);
        goto CPyL31;
    }
    PyObject *cpy_r_r12[1] = {cpy_r_file};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r13, 1, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_typeshed_file", 794, CPyStatic_mypy___util___globals);
        goto CPyL31;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "is_typeshed_file", 794, CPyStatic_mypy___util___globals, "str", cpy_r_r14);
        goto CPyL31;
    }
    cpy_r_r16.f0 = cpy_r_r6;
    cpy_r_r16.f1 = cpy_r_r15;
    CPy_INCREF(cpy_r_r16.f0);
    CPy_INCREF(cpy_r_r16.f1);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = CPyModule_os;
    cpy_r_r18 = CPyStatics[142]; /* 'path' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_typeshed_file", 794, CPyStatic_mypy___util___globals);
        goto CPyL32;
    }
    cpy_r_r20 = CPyStatics[6594]; /* 'commonpath' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_typeshed_file", 794, CPyStatic_mypy___util___globals);
        goto CPyL32;
    }
    cpy_r_r22 = PyTuple_New(2);
    if (unlikely(cpy_r_r22 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8199 = cpy_r_r16.f0;
    PyTuple_SET_ITEM(cpy_r_r22, 0, __tmp8199);
    PyObject *__tmp8200 = cpy_r_r16.f1;
    PyTuple_SET_ITEM(cpy_r_r22, 1, __tmp8200);
    PyObject *cpy_r_r23[1] = {cpy_r_r22};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r24, 1, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_typeshed_file", 794, CPyStatic_mypy___util___globals);
        goto CPyL33;
    }
    CPy_DECREF(cpy_r_r22);
    if (likely(PyUnicode_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "is_typeshed_file", 794, CPyStatic_mypy___util___globals, "str", cpy_r_r25);
        goto CPyL30;
    }
    if (likely(cpy_r_typeshed_dir != Py_None))
        cpy_r_r27 = cpy_r_typeshed_dir;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "is_typeshed_file", 794, CPyStatic_mypy___util___globals, "str", cpy_r_typeshed_dir);
        goto CPyL34;
    }
    cpy_r_r28 = PyUnicode_Compare(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 == -1;
    if (!cpy_r_r29) goto CPyL21;
    cpy_r_r30 = PyErr_Occurred();
    cpy_r_r31 = cpy_r_r30 != NULL;
    if (!cpy_r_r31) goto CPyL21;
    cpy_r_r32 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/util.py", "is_typeshed_file", 794, CPyStatic_mypy___util___globals);
        goto CPyL22;
    }
CPyL21: ;
    cpy_r_r33 = cpy_r_r28 == 0;
    return cpy_r_r33;
CPyL22: ;
    cpy_r_r34 = CPy_CatchError();
    cpy_r_r35 = CPyModule_builtins;
    cpy_r_r36 = CPyStatics[1544]; /* 'ValueError' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_typeshed_file", 795, CPyStatic_mypy___util___globals);
        goto CPyL27;
    }
    cpy_r_r38 = CPy_ExceptionMatches(cpy_r_r37);
    CPy_DecRef(cpy_r_r37);
    if (!cpy_r_r38) goto CPyL25;
    CPy_RestoreExcInfo(cpy_r_r34);
    CPy_DecRef(cpy_r_r34.f0);
    CPy_DecRef(cpy_r_r34.f1);
    CPy_DecRef(cpy_r_r34.f2);
    return 0;
CPyL25: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL27;
    } else
        goto CPyL35;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    CPy_RestoreExcInfo(cpy_r_r34);
    CPy_DecRef(cpy_r_r34.f0);
    CPy_DecRef(cpy_r_r34.f1);
    CPy_DecRef(cpy_r_r34.f2);
    cpy_r_r39 = CPy_KeepPropagating();
    if (!cpy_r_r39) goto CPyL29;
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r40 = 2;
    return cpy_r_r40;
CPyL30: ;
    CPy_DecRef(cpy_r_typeshed_dir);
    goto CPyL22;
CPyL31: ;
    CPy_DecRef(cpy_r_typeshed_dir);
    CPy_DecRef(cpy_r_r6);
    goto CPyL22;
CPyL32: ;
    CPy_DecRef(cpy_r_typeshed_dir);
    CPy_DecRef(cpy_r_r16.f0);
    CPy_DecRef(cpy_r_r16.f1);
    goto CPyL22;
CPyL33: ;
    CPy_DecRef(cpy_r_typeshed_dir);
    CPy_DecRef(cpy_r_r22);
    goto CPyL22;
CPyL34: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL22;
CPyL35: ;
    CPy_DecRef(cpy_r_r34.f0);
    CPy_DecRef(cpy_r_r34.f1);
    CPy_DecRef(cpy_r_r34.f2);
    goto CPyL26;
}

PyObject *CPyPy_mypy___util___is_typeshed_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"typeshed_dir", "file", 0};
    static CPyArg_Parser parser = {"OO:is_typeshed_file", kwlist, 0};
    PyObject *obj_typeshed_dir;
    PyObject *obj_file;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_typeshed_dir, &obj_file)) {
        return NULL;
    }
    PyObject *arg_typeshed_dir;
    if (PyUnicode_Check(obj_typeshed_dir))
        arg_typeshed_dir = obj_typeshed_dir;
    else {
        arg_typeshed_dir = NULL;
    }
    if (arg_typeshed_dir != NULL) goto __LL8201;
    if (obj_typeshed_dir == Py_None)
        arg_typeshed_dir = obj_typeshed_dir;
    else {
        arg_typeshed_dir = NULL;
    }
    if (arg_typeshed_dir != NULL) goto __LL8201;
    CPy_TypeError("str or None", obj_typeshed_dir); 
    goto fail;
__LL8201: ;
    PyObject *arg_file;
    if (likely(PyUnicode_Check(obj_file)))
        arg_file = obj_file;
    else {
        CPy_TypeError("str", obj_file); 
        goto fail;
    }
    char retval = CPyDef_mypy___util___is_typeshed_file(arg_typeshed_dir, arg_file);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "is_typeshed_file", 791, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util___is_stub_package_file(PyObject *cpy_r_file) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
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
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    tuple_T2OO cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_component;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    cpy_r_r0 = CPyStatics[397]; /* '.pyi' */
    cpy_r_r1 = CPyStr_Endswith(cpy_r_file, cpy_r_r0);
    if (cpy_r_r1) goto CPyL2;
    return 0;
CPyL2: ;
    cpy_r_r2 = 0;
    cpy_r_r3 = CPyModule_os;
    cpy_r_r4 = CPyStatics[142]; /* 'path' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_stub_package_file", 803, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    cpy_r_r6 = CPyStatics[153]; /* 'abspath' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_stub_package_file", 803, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r8[1] = {cpy_r_file};
    cpy_r_r9 = (PyObject **)&cpy_r_r8;
    cpy_r_r10 = _PyObject_Vectorcall(cpy_r_r7, cpy_r_r9, 1, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_stub_package_file", 803, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "is_stub_package_file", 803, CPyStatic_mypy___util___globals, "str", cpy_r_r10);
        goto CPyL17;
    }
    cpy_r_r12 = CPyModule_os;
    cpy_r_r13 = CPyStatics[142]; /* 'path' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_stub_package_file", 803, CPyStatic_mypy___util___globals);
        goto CPyL18;
    }
    cpy_r_r15 = CPyStatics[369]; /* 'split' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_stub_package_file", 803, CPyStatic_mypy___util___globals);
        goto CPyL18;
    }
    PyObject *cpy_r_r17[1] = {cpy_r_r11};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 1, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_stub_package_file", 803, CPyStatic_mypy___util___globals);
        goto CPyL18;
    }
    CPy_DECREF(cpy_r_r11);
    PyObject *__tmp8202;
    if (unlikely(!(PyTuple_Check(cpy_r_r19) && PyTuple_GET_SIZE(cpy_r_r19) == 2))) {
        __tmp8202 = NULL;
        goto __LL8203;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r19, 0))))
        __tmp8202 = PyTuple_GET_ITEM(cpy_r_r19, 0);
    else {
        __tmp8202 = NULL;
    }
    if (__tmp8202 == NULL) goto __LL8203;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r19, 1))))
        __tmp8202 = PyTuple_GET_ITEM(cpy_r_r19, 1);
    else {
        __tmp8202 = NULL;
    }
    if (__tmp8202 == NULL) goto __LL8203;
    __tmp8202 = cpy_r_r19;
__LL8203: ;
    if (unlikely(__tmp8202 == NULL)) {
        CPy_TypeError("tuple[str, str]", cpy_r_r19); cpy_r_r20 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8204 = PyTuple_GET_ITEM(cpy_r_r19, 0);
        CPy_INCREF(__tmp8204);
        PyObject *__tmp8205;
        if (likely(PyUnicode_Check(__tmp8204)))
            __tmp8205 = __tmp8204;
        else {
            CPy_TypeError("str", __tmp8204); 
            __tmp8205 = NULL;
        }
        cpy_r_r20.f0 = __tmp8205;
        PyObject *__tmp8206 = PyTuple_GET_ITEM(cpy_r_r19, 1);
        CPy_INCREF(__tmp8206);
        PyObject *__tmp8207;
        if (likely(PyUnicode_Check(__tmp8206)))
            __tmp8207 = __tmp8206;
        else {
            CPy_TypeError("str", __tmp8206); 
            __tmp8207 = NULL;
        }
        cpy_r_r20.f1 = __tmp8207;
    }
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20.f0 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_stub_package_file", 803, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    cpy_r_r21 = PyTuple_New(2);
    if (unlikely(cpy_r_r21 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8208 = cpy_r_r20.f0;
    PyTuple_SET_ITEM(cpy_r_r21, 0, __tmp8208);
    PyObject *__tmp8209 = cpy_r_r20.f1;
    PyTuple_SET_ITEM(cpy_r_r21, 1, __tmp8209);
    cpy_r_r22 = PyObject_GetIter(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "is_stub_package_file", 803, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
CPyL11: ;
    cpy_r_r23 = PyIter_Next(cpy_r_r22);
    if (cpy_r_r23 == NULL) goto CPyL19;
    if (likely(PyUnicode_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "is_stub_package_file", 803, CPyStatic_mypy___util___globals, "str", cpy_r_r23);
        goto CPyL20;
    }
    cpy_r_component = cpy_r_r24;
    cpy_r_r25 = CPyStatics[1986]; /* '-stubs' */
    cpy_r_r26 = CPyStr_Endswith(cpy_r_component, cpy_r_r25);
    CPy_DECREF(cpy_r_component);
    if (cpy_r_r26) {
        goto CPyL21;
    } else
        goto CPyL11;
CPyL14: ;
    cpy_r_r2 = 1;
    goto CPyL16;
CPyL15: ;
    cpy_r_r27 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/util.py", "is_stub_package_file", 803, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
CPyL16: ;
    return cpy_r_r2;
CPyL17: ;
    cpy_r_r28 = 2;
    return cpy_r_r28;
CPyL18: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL15;
CPyL20: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL17;
CPyL21: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL14;
}

PyObject *CPyPy_mypy___util___is_stub_package_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"file", 0};
    static CPyArg_Parser parser = {"O:is_stub_package_file", kwlist, 0};
    PyObject *obj_file;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_file)) {
        return NULL;
    }
    PyObject *arg_file;
    if (likely(PyUnicode_Check(obj_file)))
        arg_file = obj_file;
    else {
        CPy_TypeError("str", obj_file); 
        goto fail;
    }
    char retval = CPyDef_mypy___util___is_stub_package_file(arg_file);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "is_stub_package_file", 799, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util___unnamed_function(PyObject *cpy_r_name) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_name != cpy_r_r0;
    if (cpy_r_r1) goto CPyL2;
    cpy_r_r2 = cpy_r_r1;
    goto CPyL7;
CPyL2: ;
    CPy_INCREF(cpy_r_name);
    if (likely(cpy_r_name != Py_None))
        cpy_r_r3 = cpy_r_name;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "unnamed_function", 807, CPyStatic_mypy___util___globals, "str", cpy_r_name);
        goto CPyL8;
    }
    cpy_r_r4 = CPyStatics[755]; /* '_' */
    cpy_r_r5 = PyUnicode_Compare(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r6 = cpy_r_r5 == -1;
    if (!cpy_r_r6) goto CPyL6;
    cpy_r_r7 = PyErr_Occurred();
    cpy_r_r8 = cpy_r_r7 != NULL;
    if (!cpy_r_r8) goto CPyL6;
    cpy_r_r9 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/util.py", "unnamed_function", 807, CPyStatic_mypy___util___globals);
        goto CPyL8;
    }
CPyL6: ;
    cpy_r_r10 = cpy_r_r5 == 0;
    cpy_r_r2 = cpy_r_r10;
CPyL7: ;
    return cpy_r_r2;
CPyL8: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
}

PyObject *CPyPy_mypy___util___unnamed_function(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", 0};
    static CPyArg_Parser parser = {"O:unnamed_function", kwlist, 0};
    PyObject *obj_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_name)) {
        return NULL;
    }
    PyObject *arg_name;
    if (PyUnicode_Check(obj_name))
        arg_name = obj_name;
    else {
        arg_name = NULL;
    }
    if (arg_name != NULL) goto __LL8210;
    if (obj_name == Py_None)
        arg_name = obj_name;
    else {
        arg_name = NULL;
    }
    if (arg_name != NULL) goto __LL8210;
    CPy_TypeError("str or None", obj_name); 
    goto fail;
__LL8210: ;
    char retval = CPyDef_mypy___util___unnamed_function(arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "unnamed_function", 806, CPyStatic_mypy___util___globals);
    return NULL;
}

CPyTagged CPyDef_mypy___util___time_spent_us(CPyTagged cpy_r_t0) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    double cpy_r_r6;
    char cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    cpy_r_r0 = CPyModule_time;
    cpy_r_r1 = CPyStatics[1218]; /* 'perf_counter_ns' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "time_spent_us", 814, CPyStatic_mypy___util___globals);
        goto CPyL7;
    }
    cpy_r_r3 = _PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "time_spent_us", 814, CPyStatic_mypy___util___globals);
        goto CPyL7;
    }
    if (likely(PyLong_Check(cpy_r_r3)))
        cpy_r_r4 = CPyTagged_FromObject(cpy_r_r3);
    else {
        CPy_TypeError("int", cpy_r_r3); cpy_r_r4 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "time_spent_us", 814, CPyStatic_mypy___util___globals);
        goto CPyL7;
    }
    cpy_r_r5 = CPyTagged_Subtract(cpy_r_r4, cpy_r_t0);
    CPyTagged_DECREF(cpy_r_r4);
    cpy_r_r6 = CPyTagged_TrueDivide(cpy_r_r5, 2000);
    CPyTagged_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 == -113.0;
    if (unlikely(cpy_r_r7)) goto CPyL5;
CPyL4: ;
    cpy_r_r8 = CPyTagged_FromFloat(cpy_r_r6);
    if (unlikely(cpy_r_r8 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "time_spent_us", 814, CPyStatic_mypy___util___globals);
        goto CPyL7;
    } else
        goto CPyL6;
CPyL5: ;
    cpy_r_r9 = PyErr_Occurred();
    if (unlikely(cpy_r_r9 != NULL)) {
        CPy_AddTraceback("mypy/util.py", "time_spent_us", 814, CPyStatic_mypy___util___globals);
        goto CPyL7;
    } else
        goto CPyL4;
CPyL6: ;
    return cpy_r_r8;
CPyL7: ;
    cpy_r_r10 = CPY_INT_TAG;
    return cpy_r_r10;
}

PyObject *CPyPy_mypy___util___time_spent_us(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"t0", 0};
    static CPyArg_Parser parser = {"O:time_spent_us", kwlist, 0};
    PyObject *obj_t0;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_t0)) {
        return NULL;
    }
    CPyTagged arg_t0;
    if (likely(PyLong_Check(obj_t0)))
        arg_t0 = CPyTagged_BorrowFromObject(obj_t0);
    else {
        CPy_TypeError("int", obj_t0); goto fail;
    }
    CPyTagged retval = CPyDef_mypy___util___time_spent_us(arg_t0);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/util.py", "time_spent_us", 813, CPyStatic_mypy___util___globals);
    return NULL;
}

PyObject *CPyDef_mypy___util___plural_s(PyObject *cpy_r_s) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_count;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = (PyObject *)&PyLong_Type;
    cpy_r_r1 = PyObject_IsInstance(cpy_r_s, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/util.py", "plural_s", 818, CPyStatic_mypy___util___globals);
        goto CPyL9;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL4;
    if (likely(PyLong_Check(cpy_r_s)))
        cpy_r_r4 = CPyTagged_FromObject(cpy_r_s);
    else {
        CPy_TypeError("int", cpy_r_s); cpy_r_r4 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r4 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "plural_s", 818, CPyStatic_mypy___util___globals);
        goto CPyL9;
    }
    cpy_r_r5 = cpy_r_r4;
    goto CPyL6;
CPyL4: ;
    cpy_r_r6 = CPyObject_Size(cpy_r_s);
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/util.py", "plural_s", 818, CPyStatic_mypy___util___globals);
        goto CPyL9;
    }
    cpy_r_r5 = cpy_r_r6;
CPyL6: ;
    cpy_r_count = cpy_r_r5;
    cpy_r_r7 = cpy_r_count != 2;
    CPyTagged_DECREF(cpy_r_count);
    if (!cpy_r_r7) goto CPyL8;
    cpy_r_r8 = CPyStatics[1417]; /* 's' */
    CPy_INCREF(cpy_r_r8);
    return cpy_r_r8;
CPyL8: ;
    cpy_r_r9 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r9);
    return cpy_r_r9;
CPyL9: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
}

PyObject *CPyPy_mypy___util___plural_s(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"s", 0};
    static CPyArg_Parser parser = {"O:plural_s", kwlist, 0};
    PyObject *obj_s;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_s)) {
        return NULL;
    }
    PyObject *arg_s;
    if (PyLong_Check(obj_s))
        arg_s = obj_s;
    else {
        arg_s = NULL;
    }
    if (arg_s != NULL) goto __LL8211;
    arg_s = obj_s;
    if (arg_s != NULL) goto __LL8211;
    CPy_TypeError("union[int, object]", obj_s); 
    goto fail;
__LL8211: ;
    PyObject *retval = CPyDef_mypy___util___plural_s(arg_s);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/util.py", "plural_s", 817, CPyStatic_mypy___util___globals);
    return NULL;
}

char CPyDef_mypy___util_____top_level__(void) {
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
    PyObject **cpy_r_r12;
    PyObject **cpy_r_r13;
    PyObject **cpy_r_r14;
    PyObject **cpy_r_r15;
    PyObject **cpy_r_r16;
    void *cpy_r_r18;
    void *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
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
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r39;
    PyObject **cpy_r_r40;
    void *cpy_r_r42;
    void *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    int32_t cpy_r_r53;
    char cpy_r_r54;
    tuple_T3OOO cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    tuple_T2II cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject **cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject **cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    int32_t cpy_r_r116;
    char cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    int32_t cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    int32_t cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    tuple_T5OOOOO cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    int32_t cpy_r_r160;
    char cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    int32_t cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    int32_t cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    int32_t cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    int32_t cpy_r_r179;
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    char cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    int32_t cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    int32_t cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    int32_t cpy_r_r199;
    char cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
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
    int32_t cpy_r_r219;
    char cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    int32_t cpy_r_r223;
    char cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    int32_t cpy_r_r230;
    char cpy_r_r231;
    char cpy_r_r232;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", -1, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_mypy___util___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 3, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_hashlib;
    cpy_r_r10 = (PyObject **)&CPyModule_io;
    cpy_r_r11 = (PyObject **)&CPyModule_os;
    cpy_r_r12 = (PyObject **)&CPyModule_pathlib;
    cpy_r_r13 = (PyObject **)&CPyModule_re;
    cpy_r_r14 = (PyObject **)&CPyModule_shutil;
    cpy_r_r15 = (PyObject **)&CPyModule_sys;
    cpy_r_r16 = (PyObject **)&CPyModule_time;
    PyObject **cpy_r_r17[8] = {
        cpy_r_r9, cpy_r_r10, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14,
        cpy_r_r15, cpy_r_r16
    };
    cpy_r_r18 = (void *)&cpy_r_r17;
    int64_t cpy_r_r19[8] = {5, 6, 7, 8, 9, 10, 11, 12};
    cpy_r_r20 = (void *)&cpy_r_r19;
    cpy_r_r21 = CPyStatics[9893]; /* (('hashlib', 'hashlib', 'hashlib'), ('io', 'io', 'io'),
                                     ('os', 'os', 'os'), ('pathlib', 'pathlib', 'pathlib'),
                                     ('re', 're', 're'), ('shutil', 'shutil', 'shutil'),
                                     ('sys', 'sys', 'sys'), ('time', 'time', 'time')) */
    cpy_r_r22 = CPyStatic_mypy___util___globals;
    cpy_r_r23 = CPyStatics[6597]; /* 'mypy/util.py' */
    cpy_r_r24 = CPyStatics[17]; /* '<module>' */
    cpy_r_r25 = CPyImport_ImportMany(cpy_r_r21, cpy_r_r18, cpy_r_r22, cpy_r_r23, cpy_r_r24, cpy_r_r20);
    if (!cpy_r_r25) goto CPyL69;
    cpy_r_r26 = CPyStatics[9894]; /* ('resources',) */
    cpy_r_r27 = CPyStatics[9895]; /* ('importlib_resources',) */
    cpy_r_r28 = CPyStatics[168]; /* 'importlib' */
    cpy_r_r29 = CPyStatic_mypy___util___globals;
    cpy_r_r30 = CPyImport_ImportFromMany(cpy_r_r28, cpy_r_r26, cpy_r_r27, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 13, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    CPyModule_importlib = cpy_r_r30;
    CPy_INCREF(CPyModule_importlib);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r31 = CPyStatics[9896]; /* ('IO', 'Callable', 'Container', 'Final', 'Iterable',
                                     'Sequence', 'Sized', 'TypeVar') */
    cpy_r_r32 = CPyStatics[21]; /* 'typing' */
    cpy_r_r33 = CPyStatic_mypy___util___globals;
    cpy_r_r34 = CPyImport_ImportFromMany(cpy_r_r32, cpy_r_r31, cpy_r_r31, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 14, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    CPyModule_typing = cpy_r_r34;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[9580]; /* ('Literal',) */
    cpy_r_r36 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r37 = CPyStatic_mypy___util___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r35, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 15, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    CPyModule_typing_extensions = cpy_r_r38;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = (PyObject **)&CPyModule_curses;
    cpy_r_r40 = (PyObject **)&CPyModule__curses;
    PyObject **cpy_r_r41[2] = {cpy_r_r39, cpy_r_r40};
    cpy_r_r42 = (void *)&cpy_r_r41;
    int64_t cpy_r_r43[2] = {18, 20};
    cpy_r_r44 = (void *)&cpy_r_r43;
    cpy_r_r45 = CPyStatics[9899]; /* (('curses', 'curses', 'curses'),
                                     ('_curses', '_curses', '_curses')) */
    cpy_r_r46 = CPyStatic_mypy___util___globals;
    cpy_r_r47 = CPyStatics[6597]; /* 'mypy/util.py' */
    cpy_r_r48 = CPyStatics[17]; /* '<module>' */
    cpy_r_r49 = CPyImport_ImportMany(cpy_r_r45, cpy_r_r42, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r44);
    if (!cpy_r_r49) goto CPyL11;
    cpy_r_r50 = CPyStatic_mypy___util___globals;
    cpy_r_r51 = CPyStatics[6568]; /* 'CURSES_ENABLED' */
    cpy_r_r52 = 1 ? Py_True : Py_False;
    cpy_r_r53 = CPyDict_SetItem(cpy_r_r50, cpy_r_r51, cpy_r_r52);
    cpy_r_r54 = cpy_r_r53 >= 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 22, CPyStatic_mypy___util___globals);
    } else
        goto CPyL19;
CPyL11: ;
    cpy_r_r55 = CPy_CatchError();
    cpy_r_r56 = CPyModule_builtins;
    cpy_r_r57 = CPyStatics[1973]; /* 'ImportError' */
    cpy_r_r58 = CPyObject_GetAttr(cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 23, CPyStatic_mypy___util___globals);
        goto CPyL17;
    }
    cpy_r_r59 = CPy_ExceptionMatches(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (!cpy_r_r59) goto CPyL14;
    cpy_r_r60 = CPyStatic_mypy___util___globals;
    cpy_r_r61 = CPyStatics[6568]; /* 'CURSES_ENABLED' */
    cpy_r_r62 = 0 ? Py_True : Py_False;
    cpy_r_r63 = CPyDict_SetItem(cpy_r_r60, cpy_r_r61, cpy_r_r62);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 24, CPyStatic_mypy___util___globals);
        goto CPyL17;
    } else
        goto CPyL16;
CPyL14: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL17;
    } else
        goto CPyL70;
CPyL15: ;
    CPy_Unreachable();
CPyL16: ;
    CPy_RestoreExcInfo(cpy_r_r55);
    CPy_DECREF(cpy_r_r55.f0);
    CPy_DECREF(cpy_r_r55.f1);
    CPy_DECREF(cpy_r_r55.f2);
    goto CPyL19;
CPyL17: ;
    CPy_RestoreExcInfo(cpy_r_r55);
    CPy_DECREF(cpy_r_r55.f0);
    CPy_DECREF(cpy_r_r55.f1);
    CPy_DECREF(cpy_r_r55.f2);
    cpy_r_r65 = CPy_KeepPropagating();
    if (!cpy_r_r65) goto CPyL69;
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r66 = CPyStatics[1088]; /* 'T' */
    cpy_r_r67 = CPyStatic_mypy___util___globals;
    cpy_r_r68 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r69 = CPyDict_GetItem(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 26, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    PyObject *cpy_r_r70[1] = {cpy_r_r66};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = _PyObject_Vectorcall(cpy_r_r69, cpy_r_r71, 1, 0);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 26, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r73 = CPyStatic_mypy___util___globals;
    cpy_r_r74 = CPyStatics[1088]; /* 'T' */
    cpy_r_r75 = CPyDict_SetItem(cpy_r_r73, cpy_r_r74, cpy_r_r72);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 26, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r77 = CPyModule_sys;
    cpy_r_r78 = CPyStatics[1562]; /* 'version_info' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 28, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    if (likely(PyTuple_Check(cpy_r_r79)))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypy/util.py", "<module>", 28, CPyStatic_mypy___util___globals, "tuple", cpy_r_r79);
        goto CPyL69;
    }
    cpy_r_r81.f0 = 6;
    cpy_r_r81.f1 = 18;
    CPyTagged_INCREF(cpy_r_r81.f0);
    CPyTagged_INCREF(cpy_r_r81.f1);
    cpy_r_r82 = PyTuple_New(2);
    if (unlikely(cpy_r_r82 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8212 = CPyTagged_StealAsObject(cpy_r_r81.f0);
    PyTuple_SET_ITEM(cpy_r_r82, 0, __tmp8212);
    PyObject *__tmp8213 = CPyTagged_StealAsObject(cpy_r_r81.f1);
    PyTuple_SET_ITEM(cpy_r_r82, 1, __tmp8213);
    cpy_r_r83 = PyObject_RichCompare(cpy_r_r80, cpy_r_r82, 5);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 28, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    if (unlikely(!PyBool_Check(cpy_r_r83))) {
        CPy_TypeError("bool", cpy_r_r83); cpy_r_r84 = 2;
    } else
        cpy_r_r84 = cpy_r_r83 == Py_True;
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == 2)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 28, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    if (!cpy_r_r84) goto CPyL33;
    cpy_r_r85 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r86 = CPyStatic_mypy___util___globals;
    cpy_r_r87 = CPyStatics[6599]; /* 'importlib_resources' */
    cpy_r_r88 = CPyDict_GetItem(cpy_r_r86, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 29, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r89 = CPyStatics[608]; /* 'files' */
    cpy_r_r90 = CPyObject_GetAttr(cpy_r_r88, cpy_r_r89);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 29, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    PyObject *cpy_r_r91[1] = {cpy_r_r85};
    cpy_r_r92 = (PyObject **)&cpy_r_r91;
    cpy_r_r93 = _PyObject_Vectorcall(cpy_r_r90, cpy_r_r92, 1, 0);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 29, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r94 = CPyStatics[3851]; /* 'typeshed' */
    cpy_r_r95 = PyNumber_TrueDivide(cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 29, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r96 = PyObject_Str(cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 29, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    CPyStatic_mypy___util___TYPESHED_DIR = cpy_r_r96;
    CPy_INCREF(CPyStatic_mypy___util___TYPESHED_DIR);
    cpy_r_r97 = CPyStatic_mypy___util___globals;
    cpy_r_r98 = CPyStatics[6603]; /* 'TYPESHED_DIR' */
    cpy_r_r99 = CPyDict_SetItem(cpy_r_r97, cpy_r_r98, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 29, CPyStatic_mypy___util___globals);
        goto CPyL69;
    } else
        goto CPyL35;
CPyL33: ;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r101 = 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 31, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r102 = CPyStatics[9011]; /* (b'([ \\t\\v]*#.*(\\r\\n?|\\n))??[ \\t\\v]*#.*coding[:'
                                      b'=][ \\t]*([-\\w.]+)') */
    cpy_r_r103 = CPyModule_re;
    cpy_r_r104 = CPyStatics[1385]; /* 'compile' */
    cpy_r_r105 = CPyObject_GetAttr(cpy_r_r103, cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 38, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    PyObject *cpy_r_r106[1] = {cpy_r_r102};
    cpy_r_r107 = (PyObject **)&cpy_r_r106;
    cpy_r_r108 = _PyObject_Vectorcall(cpy_r_r105, cpy_r_r107, 1, 0);
    CPy_DECREF(cpy_r_r105);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 38, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    CPyStatic_mypy___util___ENCODING_RE = cpy_r_r108;
    CPy_INCREF(CPyStatic_mypy___util___ENCODING_RE);
    cpy_r_r109 = CPyStatic_mypy___util___globals;
    cpy_r_r110 = CPyStatics[6604]; /* 'ENCODING_RE' */
    cpy_r_r111 = CPyDict_SetItem(cpy_r_r109, cpy_r_r110, cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 38, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r113 = CPyStatic_mypy___util___globals;
    cpy_r_r114 = CPyStatics[2262]; /* 'DEFAULT_SOURCE_OFFSET' */
    cpy_r_r115 = CPyStatics[9025]; /* 4 */
    cpy_r_r116 = CPyDict_SetItem(cpy_r_r113, cpy_r_r114, cpy_r_r115);
    cpy_r_r117 = cpy_r_r116 >= 0;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 40, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r118 = CPyStatic_mypy___util___globals;
    cpy_r_r119 = CPyStatics[6605]; /* 'DEFAULT_COLUMNS' */
    cpy_r_r120 = CPyStatics[9041]; /* 80 */
    cpy_r_r121 = CPyDict_SetItem(cpy_r_r118, cpy_r_r119, cpy_r_r120);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 41, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r123 = CPyStatic_mypy___util___globals;
    cpy_r_r124 = CPyStatics[6606]; /* 'MINIMUM_WIDTH' */
    cpy_r_r125 = CPyStatics[9023]; /* 20 */
    cpy_r_r126 = CPyDict_SetItem(cpy_r_r123, cpy_r_r124, cpy_r_r125);
    cpy_r_r127 = cpy_r_r126 >= 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 45, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r128 = CPyStatic_mypy___util___globals;
    cpy_r_r129 = CPyStatics[6607]; /* 'MINIMUM_WINDOWS_MAJOR_VT100' */
    cpy_r_r130 = CPyStatics[9022]; /* 10 */
    cpy_r_r131 = CPyDict_SetItem(cpy_r_r128, cpy_r_r129, cpy_r_r130);
    cpy_r_r132 = cpy_r_r131 >= 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 51, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r133 = CPyStatic_mypy___util___globals;
    cpy_r_r134 = CPyStatics[6608]; /* 'MINIMUM_WINDOWS_BUILD_VT100' */
    cpy_r_r135 = CPyStatics[9042]; /* 10586 */
    cpy_r_r136 = CPyDict_SetItem(cpy_r_r133, cpy_r_r134, cpy_r_r135);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 52, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r138 = CPyStatics[288]; /* '__init__' */
    cpy_r_r139 = CPyStatics[721]; /* '__new__' */
    cpy_r_r140 = CPyStatics[706]; /* '__call__' */
    cpy_r_r141 = CPyStatics[720]; /* '__init_subclass__' */
    cpy_r_r142 = CPyStatics[4158]; /* '__class_getitem__' */
    cpy_r_r143.f0 = cpy_r_r138;
    cpy_r_r143.f1 = cpy_r_r139;
    cpy_r_r143.f2 = cpy_r_r140;
    cpy_r_r143.f3 = cpy_r_r141;
    cpy_r_r143.f4 = cpy_r_r142;
    CPy_INCREF(cpy_r_r143.f0);
    CPy_INCREF(cpy_r_r143.f1);
    CPy_INCREF(cpy_r_r143.f2);
    CPy_INCREF(cpy_r_r143.f3);
    CPy_INCREF(cpy_r_r143.f4);
    cpy_r_r144 = PyTuple_New(5);
    if (unlikely(cpy_r_r144 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8214 = cpy_r_r143.f0;
    PyTuple_SET_ITEM(cpy_r_r144, 0, __tmp8214);
    PyObject *__tmp8215 = cpy_r_r143.f1;
    PyTuple_SET_ITEM(cpy_r_r144, 1, __tmp8215);
    PyObject *__tmp8216 = cpy_r_r143.f2;
    PyTuple_SET_ITEM(cpy_r_r144, 2, __tmp8216);
    PyObject *__tmp8217 = cpy_r_r143.f3;
    PyTuple_SET_ITEM(cpy_r_r144, 3, __tmp8217);
    PyObject *__tmp8218 = cpy_r_r143.f4;
    PyTuple_SET_ITEM(cpy_r_r144, 4, __tmp8218);
    cpy_r_r145 = PyFrozenSet_New(cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 54, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    CPyStatic_mypy___util___SPECIAL_DUNDERS = cpy_r_r145;
    CPy_INCREF(CPyStatic_mypy___util___SPECIAL_DUNDERS);
    cpy_r_r146 = CPyStatic_mypy___util___globals;
    cpy_r_r147 = CPyStatics[6609]; /* 'SPECIAL_DUNDERS' */
    cpy_r_r148 = CPyDict_SetItem(cpy_r_r146, cpy_r_r147, cpy_r_r145);
    CPy_DECREF(cpy_r_r145);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 54, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r150 = CPyModule_builtins;
    cpy_r_r151 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r152 = CPyObject_GetAttr(cpy_r_r150, cpy_r_r151);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 147, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r153 = PyTuple_Pack(1, cpy_r_r152);
    CPy_DECREF(cpy_r_r152);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 147, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r154 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r155 = (PyObject *)CPyType_mypy___util___DecodeError_template;
    cpy_r_r156 = CPyType_FromTemplate(cpy_r_r155, cpy_r_r153, cpy_r_r154);
    CPy_DECREF(cpy_r_r153);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 147, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r157 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r158 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r159 = PyTuple_Pack(1, cpy_r_r158);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 147, CPyStatic_mypy___util___globals);
        goto CPyL71;
    }
    cpy_r_r160 = PyObject_SetAttr(cpy_r_r156, cpy_r_r157, cpy_r_r159);
    CPy_DECREF(cpy_r_r159);
    cpy_r_r161 = cpy_r_r160 >= 0;
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 147, CPyStatic_mypy___util___globals);
        goto CPyL71;
    }
    CPyType_mypy___util___DecodeError = (PyTypeObject *)cpy_r_r156;
    CPy_INCREF(CPyType_mypy___util___DecodeError);
    cpy_r_r162 = CPyStatic_mypy___util___globals;
    cpy_r_r163 = CPyStatics[543]; /* 'DecodeError' */
    cpy_r_r164 = CPyDict_SetItem(cpy_r_r162, cpy_r_r163, cpy_r_r156);
    CPy_DECREF(cpy_r_r156);
    cpy_r_r165 = cpy_r_r164 >= 0;
    if (unlikely(!cpy_r_r165)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 147, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r166 = CPyStatics[6536]; /* ('<?xml version="1.0" encoding="utf-8"?>\n'
                                      '<testsuite errors="0" failures="0" name="mypy" '
                                      'skips="0" tests="1" time="{time:.3f}">\n'
                                      '  <testcase classname="mypy" file="mypy" line="1" '
                                      'name="mypy-py{ver}-{platform}" time="{time:.3f}">\n'
                                      '  </testcase>\n'
                                      '</testsuite>\n') */
    cpy_r_r167 = CPyStatic_mypy___util___globals;
    cpy_r_r168 = CPyStatics[6610]; /* 'PASS_TEMPLATE' */
    cpy_r_r169 = CPyDict_SetItem(cpy_r_r167, cpy_r_r168, cpy_r_r166);
    cpy_r_r170 = cpy_r_r169 >= 0;
    if (unlikely(!cpy_r_r170)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 237, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r171 = CPyStatics[6538]; /* ('<?xml version="1.0" encoding="utf-8"?>\n'
                                      '<testsuite errors="0" failures="1" name="mypy" '
                                      'skips="0" tests="1" time="{time:.3f}">\n'
                                      '  <testcase classname="mypy" file="mypy" line="1" '
                                      'name="mypy-py{ver}-{platform}" time="{time:.3f}">\n'
                                      '    <failure message="mypy produced '
                                      'messages">{text}</failure>\n'
                                      '  </testcase>\n'
                                      '</testsuite>\n') */
    cpy_r_r172 = CPyStatic_mypy___util___globals;
    cpy_r_r173 = CPyStatics[6611]; /* 'FAIL_TEMPLATE' */
    cpy_r_r174 = CPyDict_SetItem(cpy_r_r172, cpy_r_r173, cpy_r_r171);
    cpy_r_r175 = cpy_r_r174 >= 0;
    if (unlikely(!cpy_r_r175)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 244, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r176 = CPyStatics[6539]; /* ('<?xml version="1.0" encoding="utf-8"?>\n'
                                      '<testsuite errors="1" failures="0" name="mypy" '
                                      'skips="0" tests="1" time="{time:.3f}">\n'
                                      '  <testcase classname="mypy" file="mypy" line="1" '
                                      'name="mypy-py{ver}-{platform}" time="{time:.3f}">\n'
                                      '    <error message="mypy produced '
                                      'errors">{text}</error>\n'
                                      '  </testcase>\n'
                                      '</testsuite>\n') */
    cpy_r_r177 = CPyStatic_mypy___util___globals;
    cpy_r_r178 = CPyStatics[6612]; /* 'ERROR_TEMPLATE' */
    cpy_r_r179 = CPyDict_SetItem(cpy_r_r177, cpy_r_r178, cpy_r_r176);
    cpy_r_r180 = cpy_r_r179 >= 0;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 252, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r181 = NULL;
    cpy_r_r182 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r183 = (PyObject *)CPyType_mypy___util___IdMapper_template;
    cpy_r_r184 = CPyType_FromTemplate(cpy_r_r183, cpy_r_r181, cpy_r_r182);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 286, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r185 = CPyDef_mypy___util___IdMapper_trait_vtable_setup();
    if (unlikely(cpy_r_r185 == 2)) {
        CPy_AddTraceback("mypy/util.py", "<module>", -1, CPyStatic_mypy___util___globals);
        goto CPyL72;
    }
    cpy_r_r186 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r187 = CPyStatics[6613]; /* 'id_map' */
    cpy_r_r188 = CPyStatics[121]; /* 'next_id' */
    cpy_r_r189 = PyTuple_Pack(2, cpy_r_r187, cpy_r_r188);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 286, CPyStatic_mypy___util___globals);
        goto CPyL72;
    }
    cpy_r_r190 = PyObject_SetAttr(cpy_r_r184, cpy_r_r186, cpy_r_r189);
    CPy_DECREF(cpy_r_r189);
    cpy_r_r191 = cpy_r_r190 >= 0;
    if (unlikely(!cpy_r_r191)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 286, CPyStatic_mypy___util___globals);
        goto CPyL72;
    }
    CPyType_mypy___util___IdMapper = (PyTypeObject *)cpy_r_r184;
    CPy_INCREF(CPyType_mypy___util___IdMapper);
    cpy_r_r192 = CPyStatic_mypy___util___globals;
    cpy_r_r193 = CPyStatics[5568]; /* 'IdMapper' */
    cpy_r_r194 = CPyDict_SetItem(cpy_r_r192, cpy_r_r193, cpy_r_r184);
    CPy_DECREF(cpy_r_r184);
    cpy_r_r195 = cpy_r_r194 >= 0;
    if (unlikely(!cpy_r_r195)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 286, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r196 = PyDict_New();
    if (unlikely(cpy_r_r196 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 337, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    CPyStatic_mypy___util___fields_cache = cpy_r_r196;
    CPy_INCREF(CPyStatic_mypy___util___fields_cache);
    cpy_r_r197 = CPyStatic_mypy___util___globals;
    cpy_r_r198 = CPyStatics[6614]; /* 'fields_cache' */
    cpy_r_r199 = CPyDict_SetItem(cpy_r_r197, cpy_r_r198, cpy_r_r196);
    CPy_DECREF(cpy_r_r196);
    cpy_r_r200 = cpy_r_r199 >= 0;
    if (unlikely(!cpy_r_r200)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 337, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r201 = NULL;
    cpy_r_r202 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r203 = (PyObject *)CPyType_mypy___util___FancyFormatter_template;
    cpy_r_r204 = CPyType_FromTemplate(cpy_r_r203, cpy_r_r201, cpy_r_r202);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 530, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r205 = CPyDef_mypy___util___FancyFormatter_trait_vtable_setup();
    if (unlikely(cpy_r_r205 == 2)) {
        CPy_AddTraceback("mypy/util.py", "<module>", -1, CPyStatic_mypy___util___globals);
        goto CPyL73;
    }
    cpy_r_r206 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r207 = CPyStatics[2304]; /* 'hide_error_codes' */
    cpy_r_r208 = CPyStatics[6615]; /* 'dummy_term' */
    cpy_r_r209 = CPyStatics[6616]; /* 'colors' */
    cpy_r_r210 = CPyStatics[6617]; /* 'BOLD' */
    cpy_r_r211 = CPyStatics[6618]; /* 'UNDER' */
    cpy_r_r212 = CPyStatics[6619]; /* 'BLUE' */
    cpy_r_r213 = CPyStatics[6620]; /* 'GREEN' */
    cpy_r_r214 = CPyStatics[6621]; /* 'RED' */
    cpy_r_r215 = CPyStatics[6622]; /* 'YELLOW' */
    cpy_r_r216 = CPyStatics[6623]; /* 'NORMAL' */
    cpy_r_r217 = CPyStatics[6624]; /* 'DIM' */
    cpy_r_r218 = PyTuple_Pack(11, cpy_r_r207, cpy_r_r208, cpy_r_r209, cpy_r_r210, cpy_r_r211, cpy_r_r212, cpy_r_r213, cpy_r_r214, cpy_r_r215, cpy_r_r216, cpy_r_r217);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 530, CPyStatic_mypy___util___globals);
        goto CPyL73;
    }
    cpy_r_r219 = PyObject_SetAttr(cpy_r_r204, cpy_r_r206, cpy_r_r218);
    CPy_DECREF(cpy_r_r218);
    cpy_r_r220 = cpy_r_r219 >= 0;
    if (unlikely(!cpy_r_r220)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 530, CPyStatic_mypy___util___globals);
        goto CPyL73;
    }
    CPyType_mypy___util___FancyFormatter = (PyTypeObject *)cpy_r_r204;
    CPy_INCREF(CPyType_mypy___util___FancyFormatter);
    cpy_r_r221 = CPyStatic_mypy___util___globals;
    cpy_r_r222 = CPyStatics[2003]; /* 'FancyFormatter' */
    cpy_r_r223 = CPyDict_SetItem(cpy_r_r221, cpy_r_r222, cpy_r_r204);
    CPy_DECREF(cpy_r_r204);
    cpy_r_r224 = cpy_r_r223 >= 0;
    if (unlikely(!cpy_r_r224)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 530, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r225 = CPyModule_time;
    cpy_r_r226 = CPyStatics[1218]; /* 'perf_counter_ns' */
    cpy_r_r227 = CPyObject_GetAttr(cpy_r_r225, cpy_r_r226);
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 810, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    cpy_r_r228 = CPyStatic_mypy___util___globals;
    cpy_r_r229 = CPyStatics[378]; /* 'time_ref' */
    cpy_r_r230 = CPyDict_SetItem(cpy_r_r228, cpy_r_r229, cpy_r_r227);
    CPy_DECREF(cpy_r_r227);
    cpy_r_r231 = cpy_r_r230 >= 0;
    if (unlikely(!cpy_r_r231)) {
        CPy_AddTraceback("mypy/util.py", "<module>", 810, CPyStatic_mypy___util___globals);
        goto CPyL69;
    }
    return 1;
CPyL69: ;
    cpy_r_r232 = 2;
    return cpy_r_r232;
CPyL70: ;
    CPy_DECREF(cpy_r_r55.f0);
    CPy_DECREF(cpy_r_r55.f1);
    CPy_DECREF(cpy_r_r55.f2);
    goto CPyL15;
CPyL71: ;
    CPy_DecRef(cpy_r_r156);
    goto CPyL69;
CPyL72: ;
    CPy_DecRef(cpy_r_r184);
    goto CPyL69;
CPyL73: ;
    CPy_DecRef(cpy_r_r204);
    goto CPyL69;
}
