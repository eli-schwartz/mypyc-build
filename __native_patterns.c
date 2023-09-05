#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"


static PyGetSetDef patterns___Pattern_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyObject *
patterns___Pattern_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_patterns___Pattern) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled traits");
    } else {
        PyErr_SetString(PyExc_TypeError, "traits may not be directly created");
    }
    return NULL;
}
static PyMethodDef patterns___Pattern_methods[] = {
    {"accept",
     (PyCFunction)CPyPy_patterns___Pattern___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_patterns___Pattern_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Pattern",
    .tp_new = patterns___Pattern_new,
    .tp_getset = patterns___Pattern_getseters,
    .tp_methods = patterns___Pattern_methods,
    .tp_basicsize = sizeof(PyObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_patterns___Pattern_template = &CPyType_patterns___Pattern_template_;


static int
patterns___AsPattern_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *patterns___AsPattern_setup(PyTypeObject *type);
PyObject *CPyDef_patterns___AsPattern(PyObject *cpy_r_pattern, PyObject *cpy_r_name);

static PyObject *
patterns___AsPattern_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_patterns___AsPattern) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = patterns___AsPattern_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_patterns___AsPattern_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
patterns___AsPattern_traverse(mypy___patterns___AsPatternObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    if (CPyTagged_CheckLong(self->_column)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_column));
    }
    Py_VISIT(self->_end_line);
    Py_VISIT(self->_end_column);
    Py_VISIT(self->_pattern);
    Py_VISIT(self->_name);
    return 0;
}

static int
patterns___AsPattern_clear(mypy___patterns___AsPatternObject *self)
{
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
    Py_CLEAR(self->_end_line);
    Py_CLEAR(self->_end_column);
    Py_CLEAR(self->_pattern);
    Py_CLEAR(self->_name);
    return 0;
}

static void
patterns___AsPattern_dealloc(mypy___patterns___AsPatternObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, patterns___AsPattern_dealloc)
    patterns___AsPattern_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem patterns___AsPattern_vtable[10];
static CPyVTableItem patterns___AsPattern_patterns___Pattern_trait_vtable[6];
static size_t patterns___AsPattern_patterns___Pattern_offset_table[1];
static bool
CPyDef_patterns___AsPattern_trait_vtable_setup(void)
{
    CPyVTableItem patterns___AsPattern_patterns___Pattern_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_patterns___AsPattern_____init__,
        (CPyVTableItem)CPyDef_nodes___Context___set_line,
        (CPyVTableItem)CPyDef_nodes___Node_____str__,
        (CPyVTableItem)CPyDef_nodes___Node___str_with_options,
        (CPyVTableItem)CPyDef_patterns___AsPattern___accept__Node_glue,
        (CPyVTableItem)CPyDef_patterns___AsPattern___accept,
    };
    memcpy(patterns___AsPattern_patterns___Pattern_trait_vtable, patterns___AsPattern_patterns___Pattern_trait_vtable_scratch, sizeof(patterns___AsPattern_patterns___Pattern_trait_vtable));
    size_t patterns___AsPattern_patterns___Pattern_offset_table_scratch[] = {
        0
    };
    memcpy(patterns___AsPattern_patterns___Pattern_offset_table, patterns___AsPattern_patterns___Pattern_offset_table_scratch, sizeof(patterns___AsPattern_patterns___Pattern_offset_table));
    CPyVTableItem patterns___AsPattern_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_patterns___Pattern, (CPyVTableItem)patterns___AsPattern_patterns___Pattern_trait_vtable, (CPyVTableItem)patterns___AsPattern_patterns___Pattern_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_patterns___AsPattern_____init__,
        (CPyVTableItem)CPyDef_nodes___Context___set_line,
        (CPyVTableItem)CPyDef_nodes___Node_____str__,
        (CPyVTableItem)CPyDef_nodes___Node___str_with_options,
        (CPyVTableItem)CPyDef_patterns___AsPattern___accept__Node_glue,
        (CPyVTableItem)CPyDef_patterns___AsPattern_____init__,
        (CPyVTableItem)CPyDef_patterns___AsPattern___accept,
    };
    memcpy(patterns___AsPattern_vtable, patterns___AsPattern_vtable_scratch, sizeof(patterns___AsPattern_vtable));
    return 1;
}

static PyObject *
patterns___AsPattern_get_pattern(mypy___patterns___AsPatternObject *self, void *closure);
static int
patterns___AsPattern_set_pattern(mypy___patterns___AsPatternObject *self, PyObject *value, void *closure);
static PyObject *
patterns___AsPattern_get_name(mypy___patterns___AsPatternObject *self, void *closure);
static int
patterns___AsPattern_set_name(mypy___patterns___AsPatternObject *self, PyObject *value, void *closure);

static PyGetSetDef patterns___AsPattern_getseters[] = {
    {"pattern",
     (getter)patterns___AsPattern_get_pattern, (setter)patterns___AsPattern_set_pattern,
     NULL, NULL},
    {"name",
     (getter)patterns___AsPattern_get_name, (setter)patterns___AsPattern_set_name,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef patterns___AsPattern_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_patterns___AsPattern_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_patterns___AsPattern___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_patterns___AsPattern_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "AsPattern",
    .tp_new = patterns___AsPattern_new,
    .tp_dealloc = (destructor)patterns___AsPattern_dealloc,
    .tp_traverse = (traverseproc)patterns___AsPattern_traverse,
    .tp_clear = (inquiry)patterns___AsPattern_clear,
    .tp_getset = patterns___AsPattern_getseters,
    .tp_methods = patterns___AsPattern_methods,
    .tp_init = patterns___AsPattern_init,
    .tp_basicsize = sizeof(mypy___patterns___AsPatternObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_patterns___AsPattern_template = &CPyType_patterns___AsPattern_template_;

static PyObject *
patterns___AsPattern_setup(PyTypeObject *type)
{
    mypy___patterns___AsPatternObject *self;
    self = (mypy___patterns___AsPatternObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = patterns___AsPattern_vtable + 3;
    self->_line = CPY_INT_TAG;
    self->_column = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_patterns___AsPattern(PyObject *cpy_r_pattern, PyObject *cpy_r_name)
{
    PyObject *self = patterns___AsPattern_setup(CPyType_patterns___AsPattern);
    if (self == NULL)
        return NULL;
    char res = CPyDef_patterns___AsPattern_____init__(self, cpy_r_pattern, cpy_r_name);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
patterns___AsPattern_get_pattern(mypy___patterns___AsPatternObject *self, void *closure)
{
    if (unlikely(self->_pattern == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'pattern' of 'AsPattern' undefined");
        return NULL;
    }
    CPy_INCREF(self->_pattern);
    PyObject *retval = self->_pattern;
    return retval;
}

static int
patterns___AsPattern_set_pattern(mypy___patterns___AsPatternObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AsPattern' object attribute 'pattern' cannot be deleted");
        return -1;
    }
    if (self->_pattern != NULL) {
        CPy_DECREF(self->_pattern);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_patterns___Pattern))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4644;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4644;
    CPy_TypeError("mypy.patterns.Pattern or None", value); 
    tmp = NULL;
__LL4644: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_pattern = tmp;
    return 0;
}

static PyObject *
patterns___AsPattern_get_name(mypy___patterns___AsPatternObject *self, void *closure)
{
    if (unlikely(self->_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'name' of 'AsPattern' undefined");
        return NULL;
    }
    CPy_INCREF(self->_name);
    PyObject *retval = self->_name;
    return retval;
}

static int
patterns___AsPattern_set_name(mypy___patterns___AsPatternObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'AsPattern' object attribute 'name' cannot be deleted");
        return -1;
    }
    if (self->_name != NULL) {
        CPy_DECREF(self->_name);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_nodes___NameExpr)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4645;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4645;
    CPy_TypeError("mypy.nodes.NameExpr or None", value); 
    tmp = NULL;
__LL4645: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_name = tmp;
    return 0;
}

static int
patterns___OrPattern_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *patterns___OrPattern_setup(PyTypeObject *type);
PyObject *CPyDef_patterns___OrPattern(PyObject *cpy_r_patterns);

static PyObject *
patterns___OrPattern_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_patterns___OrPattern) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = patterns___OrPattern_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_patterns___OrPattern_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
patterns___OrPattern_traverse(mypy___patterns___OrPatternObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    if (CPyTagged_CheckLong(self->_column)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_column));
    }
    Py_VISIT(self->_end_line);
    Py_VISIT(self->_end_column);
    Py_VISIT(self->_patterns);
    return 0;
}

static int
patterns___OrPattern_clear(mypy___patterns___OrPatternObject *self)
{
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
    Py_CLEAR(self->_end_line);
    Py_CLEAR(self->_end_column);
    Py_CLEAR(self->_patterns);
    return 0;
}

static void
patterns___OrPattern_dealloc(mypy___patterns___OrPatternObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, patterns___OrPattern_dealloc)
    patterns___OrPattern_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem patterns___OrPattern_vtable[10];
static CPyVTableItem patterns___OrPattern_patterns___Pattern_trait_vtable[6];
static size_t patterns___OrPattern_patterns___Pattern_offset_table[1];
static bool
CPyDef_patterns___OrPattern_trait_vtable_setup(void)
{
    CPyVTableItem patterns___OrPattern_patterns___Pattern_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_patterns___OrPattern_____init__,
        (CPyVTableItem)CPyDef_nodes___Context___set_line,
        (CPyVTableItem)CPyDef_nodes___Node_____str__,
        (CPyVTableItem)CPyDef_nodes___Node___str_with_options,
        (CPyVTableItem)CPyDef_patterns___OrPattern___accept__Node_glue,
        (CPyVTableItem)CPyDef_patterns___OrPattern___accept,
    };
    memcpy(patterns___OrPattern_patterns___Pattern_trait_vtable, patterns___OrPattern_patterns___Pattern_trait_vtable_scratch, sizeof(patterns___OrPattern_patterns___Pattern_trait_vtable));
    size_t patterns___OrPattern_patterns___Pattern_offset_table_scratch[] = {
        0
    };
    memcpy(patterns___OrPattern_patterns___Pattern_offset_table, patterns___OrPattern_patterns___Pattern_offset_table_scratch, sizeof(patterns___OrPattern_patterns___Pattern_offset_table));
    CPyVTableItem patterns___OrPattern_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_patterns___Pattern, (CPyVTableItem)patterns___OrPattern_patterns___Pattern_trait_vtable, (CPyVTableItem)patterns___OrPattern_patterns___Pattern_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_patterns___OrPattern_____init__,
        (CPyVTableItem)CPyDef_nodes___Context___set_line,
        (CPyVTableItem)CPyDef_nodes___Node_____str__,
        (CPyVTableItem)CPyDef_nodes___Node___str_with_options,
        (CPyVTableItem)CPyDef_patterns___OrPattern___accept__Node_glue,
        (CPyVTableItem)CPyDef_patterns___OrPattern_____init__,
        (CPyVTableItem)CPyDef_patterns___OrPattern___accept,
    };
    memcpy(patterns___OrPattern_vtable, patterns___OrPattern_vtable_scratch, sizeof(patterns___OrPattern_vtable));
    return 1;
}

static PyObject *
patterns___OrPattern_get_patterns(mypy___patterns___OrPatternObject *self, void *closure);
static int
patterns___OrPattern_set_patterns(mypy___patterns___OrPatternObject *self, PyObject *value, void *closure);

static PyGetSetDef patterns___OrPattern_getseters[] = {
    {"patterns",
     (getter)patterns___OrPattern_get_patterns, (setter)patterns___OrPattern_set_patterns,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef patterns___OrPattern_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_patterns___OrPattern_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_patterns___OrPattern___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_patterns___OrPattern_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "OrPattern",
    .tp_new = patterns___OrPattern_new,
    .tp_dealloc = (destructor)patterns___OrPattern_dealloc,
    .tp_traverse = (traverseproc)patterns___OrPattern_traverse,
    .tp_clear = (inquiry)patterns___OrPattern_clear,
    .tp_getset = patterns___OrPattern_getseters,
    .tp_methods = patterns___OrPattern_methods,
    .tp_init = patterns___OrPattern_init,
    .tp_basicsize = sizeof(mypy___patterns___OrPatternObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_patterns___OrPattern_template = &CPyType_patterns___OrPattern_template_;

static PyObject *
patterns___OrPattern_setup(PyTypeObject *type)
{
    mypy___patterns___OrPatternObject *self;
    self = (mypy___patterns___OrPatternObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = patterns___OrPattern_vtable + 3;
    self->_line = CPY_INT_TAG;
    self->_column = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_patterns___OrPattern(PyObject *cpy_r_patterns)
{
    PyObject *self = patterns___OrPattern_setup(CPyType_patterns___OrPattern);
    if (self == NULL)
        return NULL;
    char res = CPyDef_patterns___OrPattern_____init__(self, cpy_r_patterns);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
patterns___OrPattern_get_patterns(mypy___patterns___OrPatternObject *self, void *closure)
{
    if (unlikely(self->_patterns == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'patterns' of 'OrPattern' undefined");
        return NULL;
    }
    CPy_INCREF(self->_patterns);
    PyObject *retval = self->_patterns;
    return retval;
}

static int
patterns___OrPattern_set_patterns(mypy___patterns___OrPatternObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'OrPattern' object attribute 'patterns' cannot be deleted");
        return -1;
    }
    if (self->_patterns != NULL) {
        CPy_DECREF(self->_patterns);
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
    self->_patterns = tmp;
    return 0;
}

static int
patterns___ValuePattern_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *patterns___ValuePattern_setup(PyTypeObject *type);
PyObject *CPyDef_patterns___ValuePattern(PyObject *cpy_r_expr);

static PyObject *
patterns___ValuePattern_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_patterns___ValuePattern) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = patterns___ValuePattern_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_patterns___ValuePattern_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
patterns___ValuePattern_traverse(mypy___patterns___ValuePatternObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    if (CPyTagged_CheckLong(self->_column)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_column));
    }
    Py_VISIT(self->_end_line);
    Py_VISIT(self->_end_column);
    Py_VISIT(self->_expr);
    return 0;
}

static int
patterns___ValuePattern_clear(mypy___patterns___ValuePatternObject *self)
{
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
    Py_CLEAR(self->_end_line);
    Py_CLEAR(self->_end_column);
    Py_CLEAR(self->_expr);
    return 0;
}

static void
patterns___ValuePattern_dealloc(mypy___patterns___ValuePatternObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, patterns___ValuePattern_dealloc)
    patterns___ValuePattern_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem patterns___ValuePattern_vtable[10];
static CPyVTableItem patterns___ValuePattern_patterns___Pattern_trait_vtable[6];
static size_t patterns___ValuePattern_patterns___Pattern_offset_table[1];
static bool
CPyDef_patterns___ValuePattern_trait_vtable_setup(void)
{
    CPyVTableItem patterns___ValuePattern_patterns___Pattern_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_patterns___ValuePattern_____init__,
        (CPyVTableItem)CPyDef_nodes___Context___set_line,
        (CPyVTableItem)CPyDef_nodes___Node_____str__,
        (CPyVTableItem)CPyDef_nodes___Node___str_with_options,
        (CPyVTableItem)CPyDef_patterns___ValuePattern___accept__Node_glue,
        (CPyVTableItem)CPyDef_patterns___ValuePattern___accept,
    };
    memcpy(patterns___ValuePattern_patterns___Pattern_trait_vtable, patterns___ValuePattern_patterns___Pattern_trait_vtable_scratch, sizeof(patterns___ValuePattern_patterns___Pattern_trait_vtable));
    size_t patterns___ValuePattern_patterns___Pattern_offset_table_scratch[] = {
        0
    };
    memcpy(patterns___ValuePattern_patterns___Pattern_offset_table, patterns___ValuePattern_patterns___Pattern_offset_table_scratch, sizeof(patterns___ValuePattern_patterns___Pattern_offset_table));
    CPyVTableItem patterns___ValuePattern_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_patterns___Pattern, (CPyVTableItem)patterns___ValuePattern_patterns___Pattern_trait_vtable, (CPyVTableItem)patterns___ValuePattern_patterns___Pattern_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_patterns___ValuePattern_____init__,
        (CPyVTableItem)CPyDef_nodes___Context___set_line,
        (CPyVTableItem)CPyDef_nodes___Node_____str__,
        (CPyVTableItem)CPyDef_nodes___Node___str_with_options,
        (CPyVTableItem)CPyDef_patterns___ValuePattern___accept__Node_glue,
        (CPyVTableItem)CPyDef_patterns___ValuePattern_____init__,
        (CPyVTableItem)CPyDef_patterns___ValuePattern___accept,
    };
    memcpy(patterns___ValuePattern_vtable, patterns___ValuePattern_vtable_scratch, sizeof(patterns___ValuePattern_vtable));
    return 1;
}

static PyObject *
patterns___ValuePattern_get_expr(mypy___patterns___ValuePatternObject *self, void *closure);
static int
patterns___ValuePattern_set_expr(mypy___patterns___ValuePatternObject *self, PyObject *value, void *closure);

static PyGetSetDef patterns___ValuePattern_getseters[] = {
    {"expr",
     (getter)patterns___ValuePattern_get_expr, (setter)patterns___ValuePattern_set_expr,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef patterns___ValuePattern_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_patterns___ValuePattern_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_patterns___ValuePattern___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_patterns___ValuePattern_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ValuePattern",
    .tp_new = patterns___ValuePattern_new,
    .tp_dealloc = (destructor)patterns___ValuePattern_dealloc,
    .tp_traverse = (traverseproc)patterns___ValuePattern_traverse,
    .tp_clear = (inquiry)patterns___ValuePattern_clear,
    .tp_getset = patterns___ValuePattern_getseters,
    .tp_methods = patterns___ValuePattern_methods,
    .tp_init = patterns___ValuePattern_init,
    .tp_basicsize = sizeof(mypy___patterns___ValuePatternObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_patterns___ValuePattern_template = &CPyType_patterns___ValuePattern_template_;

static PyObject *
patterns___ValuePattern_setup(PyTypeObject *type)
{
    mypy___patterns___ValuePatternObject *self;
    self = (mypy___patterns___ValuePatternObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = patterns___ValuePattern_vtable + 3;
    self->_line = CPY_INT_TAG;
    self->_column = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_patterns___ValuePattern(PyObject *cpy_r_expr)
{
    PyObject *self = patterns___ValuePattern_setup(CPyType_patterns___ValuePattern);
    if (self == NULL)
        return NULL;
    char res = CPyDef_patterns___ValuePattern_____init__(self, cpy_r_expr);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
patterns___ValuePattern_get_expr(mypy___patterns___ValuePatternObject *self, void *closure)
{
    if (unlikely(self->_expr == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'expr' of 'ValuePattern' undefined");
        return NULL;
    }
    CPy_INCREF(self->_expr);
    PyObject *retval = self->_expr;
    return retval;
}

static int
patterns___ValuePattern_set_expr(mypy___patterns___ValuePatternObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ValuePattern' object attribute 'expr' cannot be deleted");
        return -1;
    }
    if (self->_expr != NULL) {
        CPy_DECREF(self->_expr);
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
    self->_expr = tmp;
    return 0;
}

static int
patterns___SingletonPattern_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *patterns___SingletonPattern_setup(PyTypeObject *type);
PyObject *CPyDef_patterns___SingletonPattern(PyObject *cpy_r_value);

static PyObject *
patterns___SingletonPattern_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_patterns___SingletonPattern) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = patterns___SingletonPattern_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_patterns___SingletonPattern_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
patterns___SingletonPattern_traverse(mypy___patterns___SingletonPatternObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    if (CPyTagged_CheckLong(self->_column)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_column));
    }
    Py_VISIT(self->_end_line);
    Py_VISIT(self->_end_column);
    Py_VISIT(self->_value);
    return 0;
}

static int
patterns___SingletonPattern_clear(mypy___patterns___SingletonPatternObject *self)
{
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
    Py_CLEAR(self->_end_line);
    Py_CLEAR(self->_end_column);
    Py_CLEAR(self->_value);
    return 0;
}

static void
patterns___SingletonPattern_dealloc(mypy___patterns___SingletonPatternObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, patterns___SingletonPattern_dealloc)
    patterns___SingletonPattern_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem patterns___SingletonPattern_vtable[10];
static CPyVTableItem patterns___SingletonPattern_patterns___Pattern_trait_vtable[6];
static size_t patterns___SingletonPattern_patterns___Pattern_offset_table[1];
static bool
CPyDef_patterns___SingletonPattern_trait_vtable_setup(void)
{
    CPyVTableItem patterns___SingletonPattern_patterns___Pattern_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_patterns___SingletonPattern_____init__,
        (CPyVTableItem)CPyDef_nodes___Context___set_line,
        (CPyVTableItem)CPyDef_nodes___Node_____str__,
        (CPyVTableItem)CPyDef_nodes___Node___str_with_options,
        (CPyVTableItem)CPyDef_patterns___SingletonPattern___accept__Node_glue,
        (CPyVTableItem)CPyDef_patterns___SingletonPattern___accept,
    };
    memcpy(patterns___SingletonPattern_patterns___Pattern_trait_vtable, patterns___SingletonPattern_patterns___Pattern_trait_vtable_scratch, sizeof(patterns___SingletonPattern_patterns___Pattern_trait_vtable));
    size_t patterns___SingletonPattern_patterns___Pattern_offset_table_scratch[] = {
        0
    };
    memcpy(patterns___SingletonPattern_patterns___Pattern_offset_table, patterns___SingletonPattern_patterns___Pattern_offset_table_scratch, sizeof(patterns___SingletonPattern_patterns___Pattern_offset_table));
    CPyVTableItem patterns___SingletonPattern_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_patterns___Pattern, (CPyVTableItem)patterns___SingletonPattern_patterns___Pattern_trait_vtable, (CPyVTableItem)patterns___SingletonPattern_patterns___Pattern_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_patterns___SingletonPattern_____init__,
        (CPyVTableItem)CPyDef_nodes___Context___set_line,
        (CPyVTableItem)CPyDef_nodes___Node_____str__,
        (CPyVTableItem)CPyDef_nodes___Node___str_with_options,
        (CPyVTableItem)CPyDef_patterns___SingletonPattern___accept__Node_glue,
        (CPyVTableItem)CPyDef_patterns___SingletonPattern_____init__,
        (CPyVTableItem)CPyDef_patterns___SingletonPattern___accept,
    };
    memcpy(patterns___SingletonPattern_vtable, patterns___SingletonPattern_vtable_scratch, sizeof(patterns___SingletonPattern_vtable));
    return 1;
}

static PyObject *
patterns___SingletonPattern_get_value(mypy___patterns___SingletonPatternObject *self, void *closure);
static int
patterns___SingletonPattern_set_value(mypy___patterns___SingletonPatternObject *self, PyObject *value, void *closure);

static PyGetSetDef patterns___SingletonPattern_getseters[] = {
    {"value",
     (getter)patterns___SingletonPattern_get_value, (setter)patterns___SingletonPattern_set_value,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef patterns___SingletonPattern_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_patterns___SingletonPattern_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_patterns___SingletonPattern___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_patterns___SingletonPattern_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SingletonPattern",
    .tp_new = patterns___SingletonPattern_new,
    .tp_dealloc = (destructor)patterns___SingletonPattern_dealloc,
    .tp_traverse = (traverseproc)patterns___SingletonPattern_traverse,
    .tp_clear = (inquiry)patterns___SingletonPattern_clear,
    .tp_getset = patterns___SingletonPattern_getseters,
    .tp_methods = patterns___SingletonPattern_methods,
    .tp_init = patterns___SingletonPattern_init,
    .tp_basicsize = sizeof(mypy___patterns___SingletonPatternObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_patterns___SingletonPattern_template = &CPyType_patterns___SingletonPattern_template_;

static PyObject *
patterns___SingletonPattern_setup(PyTypeObject *type)
{
    mypy___patterns___SingletonPatternObject *self;
    self = (mypy___patterns___SingletonPatternObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = patterns___SingletonPattern_vtable + 3;
    self->_line = CPY_INT_TAG;
    self->_column = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_patterns___SingletonPattern(PyObject *cpy_r_value)
{
    PyObject *self = patterns___SingletonPattern_setup(CPyType_patterns___SingletonPattern);
    if (self == NULL)
        return NULL;
    char res = CPyDef_patterns___SingletonPattern_____init__(self, cpy_r_value);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
patterns___SingletonPattern_get_value(mypy___patterns___SingletonPatternObject *self, void *closure)
{
    if (unlikely(self->_value == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'value' of 'SingletonPattern' undefined");
        return NULL;
    }
    CPy_INCREF(self->_value);
    PyObject *retval = self->_value;
    return retval;
}

static int
patterns___SingletonPattern_set_value(mypy___patterns___SingletonPatternObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SingletonPattern' object attribute 'value' cannot be deleted");
        return -1;
    }
    if (self->_value != NULL) {
        CPy_DECREF(self->_value);
    }
    PyObject *tmp;
    if (PyBool_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4646;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4646;
    CPy_TypeError("bool or None", value); 
    tmp = NULL;
__LL4646: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_value = tmp;
    return 0;
}

static int
patterns___SequencePattern_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *patterns___SequencePattern_setup(PyTypeObject *type);
PyObject *CPyDef_patterns___SequencePattern(PyObject *cpy_r_patterns);

static PyObject *
patterns___SequencePattern_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_patterns___SequencePattern) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = patterns___SequencePattern_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_patterns___SequencePattern_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
patterns___SequencePattern_traverse(mypy___patterns___SequencePatternObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    if (CPyTagged_CheckLong(self->_column)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_column));
    }
    Py_VISIT(self->_end_line);
    Py_VISIT(self->_end_column);
    Py_VISIT(self->_patterns);
    return 0;
}

static int
patterns___SequencePattern_clear(mypy___patterns___SequencePatternObject *self)
{
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
    Py_CLEAR(self->_end_line);
    Py_CLEAR(self->_end_column);
    Py_CLEAR(self->_patterns);
    return 0;
}

static void
patterns___SequencePattern_dealloc(mypy___patterns___SequencePatternObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, patterns___SequencePattern_dealloc)
    patterns___SequencePattern_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem patterns___SequencePattern_vtable[10];
static CPyVTableItem patterns___SequencePattern_patterns___Pattern_trait_vtable[6];
static size_t patterns___SequencePattern_patterns___Pattern_offset_table[1];
static bool
CPyDef_patterns___SequencePattern_trait_vtable_setup(void)
{
    CPyVTableItem patterns___SequencePattern_patterns___Pattern_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_patterns___SequencePattern_____init__,
        (CPyVTableItem)CPyDef_nodes___Context___set_line,
        (CPyVTableItem)CPyDef_nodes___Node_____str__,
        (CPyVTableItem)CPyDef_nodes___Node___str_with_options,
        (CPyVTableItem)CPyDef_patterns___SequencePattern___accept__Node_glue,
        (CPyVTableItem)CPyDef_patterns___SequencePattern___accept,
    };
    memcpy(patterns___SequencePattern_patterns___Pattern_trait_vtable, patterns___SequencePattern_patterns___Pattern_trait_vtable_scratch, sizeof(patterns___SequencePattern_patterns___Pattern_trait_vtable));
    size_t patterns___SequencePattern_patterns___Pattern_offset_table_scratch[] = {
        0
    };
    memcpy(patterns___SequencePattern_patterns___Pattern_offset_table, patterns___SequencePattern_patterns___Pattern_offset_table_scratch, sizeof(patterns___SequencePattern_patterns___Pattern_offset_table));
    CPyVTableItem patterns___SequencePattern_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_patterns___Pattern, (CPyVTableItem)patterns___SequencePattern_patterns___Pattern_trait_vtable, (CPyVTableItem)patterns___SequencePattern_patterns___Pattern_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_patterns___SequencePattern_____init__,
        (CPyVTableItem)CPyDef_nodes___Context___set_line,
        (CPyVTableItem)CPyDef_nodes___Node_____str__,
        (CPyVTableItem)CPyDef_nodes___Node___str_with_options,
        (CPyVTableItem)CPyDef_patterns___SequencePattern___accept__Node_glue,
        (CPyVTableItem)CPyDef_patterns___SequencePattern_____init__,
        (CPyVTableItem)CPyDef_patterns___SequencePattern___accept,
    };
    memcpy(patterns___SequencePattern_vtable, patterns___SequencePattern_vtable_scratch, sizeof(patterns___SequencePattern_vtable));
    return 1;
}

static PyObject *
patterns___SequencePattern_get_patterns(mypy___patterns___SequencePatternObject *self, void *closure);
static int
patterns___SequencePattern_set_patterns(mypy___patterns___SequencePatternObject *self, PyObject *value, void *closure);

static PyGetSetDef patterns___SequencePattern_getseters[] = {
    {"patterns",
     (getter)patterns___SequencePattern_get_patterns, (setter)patterns___SequencePattern_set_patterns,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef patterns___SequencePattern_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_patterns___SequencePattern_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_patterns___SequencePattern___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_patterns___SequencePattern_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "SequencePattern",
    .tp_new = patterns___SequencePattern_new,
    .tp_dealloc = (destructor)patterns___SequencePattern_dealloc,
    .tp_traverse = (traverseproc)patterns___SequencePattern_traverse,
    .tp_clear = (inquiry)patterns___SequencePattern_clear,
    .tp_getset = patterns___SequencePattern_getseters,
    .tp_methods = patterns___SequencePattern_methods,
    .tp_init = patterns___SequencePattern_init,
    .tp_basicsize = sizeof(mypy___patterns___SequencePatternObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_patterns___SequencePattern_template = &CPyType_patterns___SequencePattern_template_;

static PyObject *
patterns___SequencePattern_setup(PyTypeObject *type)
{
    mypy___patterns___SequencePatternObject *self;
    self = (mypy___patterns___SequencePatternObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = patterns___SequencePattern_vtable + 3;
    self->_line = CPY_INT_TAG;
    self->_column = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_patterns___SequencePattern(PyObject *cpy_r_patterns)
{
    PyObject *self = patterns___SequencePattern_setup(CPyType_patterns___SequencePattern);
    if (self == NULL)
        return NULL;
    char res = CPyDef_patterns___SequencePattern_____init__(self, cpy_r_patterns);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
patterns___SequencePattern_get_patterns(mypy___patterns___SequencePatternObject *self, void *closure)
{
    if (unlikely(self->_patterns == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'patterns' of 'SequencePattern' undefined");
        return NULL;
    }
    CPy_INCREF(self->_patterns);
    PyObject *retval = self->_patterns;
    return retval;
}

static int
patterns___SequencePattern_set_patterns(mypy___patterns___SequencePatternObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'SequencePattern' object attribute 'patterns' cannot be deleted");
        return -1;
    }
    if (self->_patterns != NULL) {
        CPy_DECREF(self->_patterns);
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
    self->_patterns = tmp;
    return 0;
}

static int
patterns___StarredPattern_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *patterns___StarredPattern_setup(PyTypeObject *type);
PyObject *CPyDef_patterns___StarredPattern(PyObject *cpy_r_capture);

static PyObject *
patterns___StarredPattern_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_patterns___StarredPattern) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = patterns___StarredPattern_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_patterns___StarredPattern_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
patterns___StarredPattern_traverse(mypy___patterns___StarredPatternObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    if (CPyTagged_CheckLong(self->_column)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_column));
    }
    Py_VISIT(self->_end_line);
    Py_VISIT(self->_end_column);
    Py_VISIT(self->_capture);
    return 0;
}

static int
patterns___StarredPattern_clear(mypy___patterns___StarredPatternObject *self)
{
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
    Py_CLEAR(self->_end_line);
    Py_CLEAR(self->_end_column);
    Py_CLEAR(self->_capture);
    return 0;
}

static void
patterns___StarredPattern_dealloc(mypy___patterns___StarredPatternObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, patterns___StarredPattern_dealloc)
    patterns___StarredPattern_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem patterns___StarredPattern_vtable[10];
static CPyVTableItem patterns___StarredPattern_patterns___Pattern_trait_vtable[6];
static size_t patterns___StarredPattern_patterns___Pattern_offset_table[1];
static bool
CPyDef_patterns___StarredPattern_trait_vtable_setup(void)
{
    CPyVTableItem patterns___StarredPattern_patterns___Pattern_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_patterns___StarredPattern_____init__,
        (CPyVTableItem)CPyDef_nodes___Context___set_line,
        (CPyVTableItem)CPyDef_nodes___Node_____str__,
        (CPyVTableItem)CPyDef_nodes___Node___str_with_options,
        (CPyVTableItem)CPyDef_patterns___StarredPattern___accept__Node_glue,
        (CPyVTableItem)CPyDef_patterns___StarredPattern___accept,
    };
    memcpy(patterns___StarredPattern_patterns___Pattern_trait_vtable, patterns___StarredPattern_patterns___Pattern_trait_vtable_scratch, sizeof(patterns___StarredPattern_patterns___Pattern_trait_vtable));
    size_t patterns___StarredPattern_patterns___Pattern_offset_table_scratch[] = {
        0
    };
    memcpy(patterns___StarredPattern_patterns___Pattern_offset_table, patterns___StarredPattern_patterns___Pattern_offset_table_scratch, sizeof(patterns___StarredPattern_patterns___Pattern_offset_table));
    CPyVTableItem patterns___StarredPattern_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_patterns___Pattern, (CPyVTableItem)patterns___StarredPattern_patterns___Pattern_trait_vtable, (CPyVTableItem)patterns___StarredPattern_patterns___Pattern_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_patterns___StarredPattern_____init__,
        (CPyVTableItem)CPyDef_nodes___Context___set_line,
        (CPyVTableItem)CPyDef_nodes___Node_____str__,
        (CPyVTableItem)CPyDef_nodes___Node___str_with_options,
        (CPyVTableItem)CPyDef_patterns___StarredPattern___accept__Node_glue,
        (CPyVTableItem)CPyDef_patterns___StarredPattern_____init__,
        (CPyVTableItem)CPyDef_patterns___StarredPattern___accept,
    };
    memcpy(patterns___StarredPattern_vtable, patterns___StarredPattern_vtable_scratch, sizeof(patterns___StarredPattern_vtable));
    return 1;
}

static PyObject *
patterns___StarredPattern_get_capture(mypy___patterns___StarredPatternObject *self, void *closure);
static int
patterns___StarredPattern_set_capture(mypy___patterns___StarredPatternObject *self, PyObject *value, void *closure);

static PyGetSetDef patterns___StarredPattern_getseters[] = {
    {"capture",
     (getter)patterns___StarredPattern_get_capture, (setter)patterns___StarredPattern_set_capture,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef patterns___StarredPattern_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_patterns___StarredPattern_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_patterns___StarredPattern___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_patterns___StarredPattern_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "StarredPattern",
    .tp_new = patterns___StarredPattern_new,
    .tp_dealloc = (destructor)patterns___StarredPattern_dealloc,
    .tp_traverse = (traverseproc)patterns___StarredPattern_traverse,
    .tp_clear = (inquiry)patterns___StarredPattern_clear,
    .tp_getset = patterns___StarredPattern_getseters,
    .tp_methods = patterns___StarredPattern_methods,
    .tp_init = patterns___StarredPattern_init,
    .tp_basicsize = sizeof(mypy___patterns___StarredPatternObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_patterns___StarredPattern_template = &CPyType_patterns___StarredPattern_template_;

static PyObject *
patterns___StarredPattern_setup(PyTypeObject *type)
{
    mypy___patterns___StarredPatternObject *self;
    self = (mypy___patterns___StarredPatternObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = patterns___StarredPattern_vtable + 3;
    self->_line = CPY_INT_TAG;
    self->_column = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_patterns___StarredPattern(PyObject *cpy_r_capture)
{
    PyObject *self = patterns___StarredPattern_setup(CPyType_patterns___StarredPattern);
    if (self == NULL)
        return NULL;
    char res = CPyDef_patterns___StarredPattern_____init__(self, cpy_r_capture);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
patterns___StarredPattern_get_capture(mypy___patterns___StarredPatternObject *self, void *closure)
{
    if (unlikely(self->_capture == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'capture' of 'StarredPattern' undefined");
        return NULL;
    }
    CPy_INCREF(self->_capture);
    PyObject *retval = self->_capture;
    return retval;
}

static int
patterns___StarredPattern_set_capture(mypy___patterns___StarredPatternObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'StarredPattern' object attribute 'capture' cannot be deleted");
        return -1;
    }
    if (self->_capture != NULL) {
        CPy_DECREF(self->_capture);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_nodes___NameExpr)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4647;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4647;
    CPy_TypeError("mypy.nodes.NameExpr or None", value); 
    tmp = NULL;
__LL4647: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_capture = tmp;
    return 0;
}

static int
patterns___MappingPattern_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *patterns___MappingPattern_setup(PyTypeObject *type);
PyObject *CPyDef_patterns___MappingPattern(PyObject *cpy_r_keys, PyObject *cpy_r_values, PyObject *cpy_r_rest);

static PyObject *
patterns___MappingPattern_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_patterns___MappingPattern) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = patterns___MappingPattern_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_patterns___MappingPattern_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
patterns___MappingPattern_traverse(mypy___patterns___MappingPatternObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    if (CPyTagged_CheckLong(self->_column)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_column));
    }
    Py_VISIT(self->_end_line);
    Py_VISIT(self->_end_column);
    Py_VISIT(self->_keys);
    Py_VISIT(self->_values);
    Py_VISIT(self->_rest);
    return 0;
}

static int
patterns___MappingPattern_clear(mypy___patterns___MappingPatternObject *self)
{
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
    Py_CLEAR(self->_end_line);
    Py_CLEAR(self->_end_column);
    Py_CLEAR(self->_keys);
    Py_CLEAR(self->_values);
    Py_CLEAR(self->_rest);
    return 0;
}

static void
patterns___MappingPattern_dealloc(mypy___patterns___MappingPatternObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, patterns___MappingPattern_dealloc)
    patterns___MappingPattern_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem patterns___MappingPattern_vtable[10];
static CPyVTableItem patterns___MappingPattern_patterns___Pattern_trait_vtable[6];
static size_t patterns___MappingPattern_patterns___Pattern_offset_table[1];
static bool
CPyDef_patterns___MappingPattern_trait_vtable_setup(void)
{
    CPyVTableItem patterns___MappingPattern_patterns___Pattern_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_patterns___MappingPattern_____init__,
        (CPyVTableItem)CPyDef_nodes___Context___set_line,
        (CPyVTableItem)CPyDef_nodes___Node_____str__,
        (CPyVTableItem)CPyDef_nodes___Node___str_with_options,
        (CPyVTableItem)CPyDef_patterns___MappingPattern___accept__Node_glue,
        (CPyVTableItem)CPyDef_patterns___MappingPattern___accept,
    };
    memcpy(patterns___MappingPattern_patterns___Pattern_trait_vtable, patterns___MappingPattern_patterns___Pattern_trait_vtable_scratch, sizeof(patterns___MappingPattern_patterns___Pattern_trait_vtable));
    size_t patterns___MappingPattern_patterns___Pattern_offset_table_scratch[] = {
        0
    };
    memcpy(patterns___MappingPattern_patterns___Pattern_offset_table, patterns___MappingPattern_patterns___Pattern_offset_table_scratch, sizeof(patterns___MappingPattern_patterns___Pattern_offset_table));
    CPyVTableItem patterns___MappingPattern_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_patterns___Pattern, (CPyVTableItem)patterns___MappingPattern_patterns___Pattern_trait_vtable, (CPyVTableItem)patterns___MappingPattern_patterns___Pattern_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_patterns___MappingPattern_____init__,
        (CPyVTableItem)CPyDef_nodes___Context___set_line,
        (CPyVTableItem)CPyDef_nodes___Node_____str__,
        (CPyVTableItem)CPyDef_nodes___Node___str_with_options,
        (CPyVTableItem)CPyDef_patterns___MappingPattern___accept__Node_glue,
        (CPyVTableItem)CPyDef_patterns___MappingPattern_____init__,
        (CPyVTableItem)CPyDef_patterns___MappingPattern___accept,
    };
    memcpy(patterns___MappingPattern_vtable, patterns___MappingPattern_vtable_scratch, sizeof(patterns___MappingPattern_vtable));
    return 1;
}

static PyObject *
patterns___MappingPattern_get_keys(mypy___patterns___MappingPatternObject *self, void *closure);
static int
patterns___MappingPattern_set_keys(mypy___patterns___MappingPatternObject *self, PyObject *value, void *closure);
static PyObject *
patterns___MappingPattern_get_values(mypy___patterns___MappingPatternObject *self, void *closure);
static int
patterns___MappingPattern_set_values(mypy___patterns___MappingPatternObject *self, PyObject *value, void *closure);
static PyObject *
patterns___MappingPattern_get_rest(mypy___patterns___MappingPatternObject *self, void *closure);
static int
patterns___MappingPattern_set_rest(mypy___patterns___MappingPatternObject *self, PyObject *value, void *closure);

static PyGetSetDef patterns___MappingPattern_getseters[] = {
    {"keys",
     (getter)patterns___MappingPattern_get_keys, (setter)patterns___MappingPattern_set_keys,
     NULL, NULL},
    {"values",
     (getter)patterns___MappingPattern_get_values, (setter)patterns___MappingPattern_set_values,
     NULL, NULL},
    {"rest",
     (getter)patterns___MappingPattern_get_rest, (setter)patterns___MappingPattern_set_rest,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef patterns___MappingPattern_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_patterns___MappingPattern_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_patterns___MappingPattern___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_patterns___MappingPattern_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "MappingPattern",
    .tp_new = patterns___MappingPattern_new,
    .tp_dealloc = (destructor)patterns___MappingPattern_dealloc,
    .tp_traverse = (traverseproc)patterns___MappingPattern_traverse,
    .tp_clear = (inquiry)patterns___MappingPattern_clear,
    .tp_getset = patterns___MappingPattern_getseters,
    .tp_methods = patterns___MappingPattern_methods,
    .tp_init = patterns___MappingPattern_init,
    .tp_basicsize = sizeof(mypy___patterns___MappingPatternObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_patterns___MappingPattern_template = &CPyType_patterns___MappingPattern_template_;

static PyObject *
patterns___MappingPattern_setup(PyTypeObject *type)
{
    mypy___patterns___MappingPatternObject *self;
    self = (mypy___patterns___MappingPatternObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = patterns___MappingPattern_vtable + 3;
    self->_line = CPY_INT_TAG;
    self->_column = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_patterns___MappingPattern(PyObject *cpy_r_keys, PyObject *cpy_r_values, PyObject *cpy_r_rest)
{
    PyObject *self = patterns___MappingPattern_setup(CPyType_patterns___MappingPattern);
    if (self == NULL)
        return NULL;
    char res = CPyDef_patterns___MappingPattern_____init__(self, cpy_r_keys, cpy_r_values, cpy_r_rest);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
patterns___MappingPattern_get_keys(mypy___patterns___MappingPatternObject *self, void *closure)
{
    if (unlikely(self->_keys == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'keys' of 'MappingPattern' undefined");
        return NULL;
    }
    CPy_INCREF(self->_keys);
    PyObject *retval = self->_keys;
    return retval;
}

static int
patterns___MappingPattern_set_keys(mypy___patterns___MappingPatternObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MappingPattern' object attribute 'keys' cannot be deleted");
        return -1;
    }
    if (self->_keys != NULL) {
        CPy_DECREF(self->_keys);
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
    self->_keys = tmp;
    return 0;
}

static PyObject *
patterns___MappingPattern_get_values(mypy___patterns___MappingPatternObject *self, void *closure)
{
    if (unlikely(self->_values == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'values' of 'MappingPattern' undefined");
        return NULL;
    }
    CPy_INCREF(self->_values);
    PyObject *retval = self->_values;
    return retval;
}

static int
patterns___MappingPattern_set_values(mypy___patterns___MappingPatternObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MappingPattern' object attribute 'values' cannot be deleted");
        return -1;
    }
    if (self->_values != NULL) {
        CPy_DECREF(self->_values);
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
    self->_values = tmp;
    return 0;
}

static PyObject *
patterns___MappingPattern_get_rest(mypy___patterns___MappingPatternObject *self, void *closure)
{
    if (unlikely(self->_rest == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'rest' of 'MappingPattern' undefined");
        return NULL;
    }
    CPy_INCREF(self->_rest);
    PyObject *retval = self->_rest;
    return retval;
}

static int
patterns___MappingPattern_set_rest(mypy___patterns___MappingPatternObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'MappingPattern' object attribute 'rest' cannot be deleted");
        return -1;
    }
    if (self->_rest != NULL) {
        CPy_DECREF(self->_rest);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_nodes___NameExpr)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4648;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4648;
    CPy_TypeError("mypy.nodes.NameExpr or None", value); 
    tmp = NULL;
__LL4648: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_rest = tmp;
    return 0;
}

static int
patterns___ClassPattern_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *patterns___ClassPattern_setup(PyTypeObject *type);
PyObject *CPyDef_patterns___ClassPattern(PyObject *cpy_r_class_ref, PyObject *cpy_r_positionals, PyObject *cpy_r_keyword_keys, PyObject *cpy_r_keyword_values);

static PyObject *
patterns___ClassPattern_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_patterns___ClassPattern) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = patterns___ClassPattern_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_patterns___ClassPattern_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
patterns___ClassPattern_traverse(mypy___patterns___ClassPatternObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    if (CPyTagged_CheckLong(self->_column)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_column));
    }
    Py_VISIT(self->_end_line);
    Py_VISIT(self->_end_column);
    Py_VISIT(self->_class_ref);
    Py_VISIT(self->_positionals);
    Py_VISIT(self->_keyword_keys);
    Py_VISIT(self->_keyword_values);
    return 0;
}

static int
patterns___ClassPattern_clear(mypy___patterns___ClassPatternObject *self)
{
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
    Py_CLEAR(self->_end_line);
    Py_CLEAR(self->_end_column);
    Py_CLEAR(self->_class_ref);
    Py_CLEAR(self->_positionals);
    Py_CLEAR(self->_keyword_keys);
    Py_CLEAR(self->_keyword_values);
    return 0;
}

static void
patterns___ClassPattern_dealloc(mypy___patterns___ClassPatternObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, patterns___ClassPattern_dealloc)
    patterns___ClassPattern_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem patterns___ClassPattern_vtable[10];
static CPyVTableItem patterns___ClassPattern_patterns___Pattern_trait_vtable[6];
static size_t patterns___ClassPattern_patterns___Pattern_offset_table[1];
static bool
CPyDef_patterns___ClassPattern_trait_vtable_setup(void)
{
    CPyVTableItem patterns___ClassPattern_patterns___Pattern_trait_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_patterns___ClassPattern_____init__,
        (CPyVTableItem)CPyDef_nodes___Context___set_line,
        (CPyVTableItem)CPyDef_nodes___Node_____str__,
        (CPyVTableItem)CPyDef_nodes___Node___str_with_options,
        (CPyVTableItem)CPyDef_patterns___ClassPattern___accept__Node_glue,
        (CPyVTableItem)CPyDef_patterns___ClassPattern___accept,
    };
    memcpy(patterns___ClassPattern_patterns___Pattern_trait_vtable, patterns___ClassPattern_patterns___Pattern_trait_vtable_scratch, sizeof(patterns___ClassPattern_patterns___Pattern_trait_vtable));
    size_t patterns___ClassPattern_patterns___Pattern_offset_table_scratch[] = {
        0
    };
    memcpy(patterns___ClassPattern_patterns___Pattern_offset_table, patterns___ClassPattern_patterns___Pattern_offset_table_scratch, sizeof(patterns___ClassPattern_patterns___Pattern_offset_table));
    CPyVTableItem patterns___ClassPattern_vtable_scratch[] = {
        /* Array of trait vtables */
        (CPyVTableItem)CPyType_patterns___Pattern, (CPyVTableItem)patterns___ClassPattern_patterns___Pattern_trait_vtable, (CPyVTableItem)patterns___ClassPattern_patterns___Pattern_offset_table,
        /* Start of real vtable */
        (CPyVTableItem)CPyDef_patterns___ClassPattern_____init__,
        (CPyVTableItem)CPyDef_nodes___Context___set_line,
        (CPyVTableItem)CPyDef_nodes___Node_____str__,
        (CPyVTableItem)CPyDef_nodes___Node___str_with_options,
        (CPyVTableItem)CPyDef_patterns___ClassPattern___accept__Node_glue,
        (CPyVTableItem)CPyDef_patterns___ClassPattern_____init__,
        (CPyVTableItem)CPyDef_patterns___ClassPattern___accept,
    };
    memcpy(patterns___ClassPattern_vtable, patterns___ClassPattern_vtable_scratch, sizeof(patterns___ClassPattern_vtable));
    return 1;
}

static PyObject *
patterns___ClassPattern_get_class_ref(mypy___patterns___ClassPatternObject *self, void *closure);
static int
patterns___ClassPattern_set_class_ref(mypy___patterns___ClassPatternObject *self, PyObject *value, void *closure);
static PyObject *
patterns___ClassPattern_get_positionals(mypy___patterns___ClassPatternObject *self, void *closure);
static int
patterns___ClassPattern_set_positionals(mypy___patterns___ClassPatternObject *self, PyObject *value, void *closure);
static PyObject *
patterns___ClassPattern_get_keyword_keys(mypy___patterns___ClassPatternObject *self, void *closure);
static int
patterns___ClassPattern_set_keyword_keys(mypy___patterns___ClassPatternObject *self, PyObject *value, void *closure);
static PyObject *
patterns___ClassPattern_get_keyword_values(mypy___patterns___ClassPatternObject *self, void *closure);
static int
patterns___ClassPattern_set_keyword_values(mypy___patterns___ClassPatternObject *self, PyObject *value, void *closure);

static PyGetSetDef patterns___ClassPattern_getseters[] = {
    {"class_ref",
     (getter)patterns___ClassPattern_get_class_ref, (setter)patterns___ClassPattern_set_class_ref,
     NULL, NULL},
    {"positionals",
     (getter)patterns___ClassPattern_get_positionals, (setter)patterns___ClassPattern_set_positionals,
     NULL, NULL},
    {"keyword_keys",
     (getter)patterns___ClassPattern_get_keyword_keys, (setter)patterns___ClassPattern_set_keyword_keys,
     NULL, NULL},
    {"keyword_values",
     (getter)patterns___ClassPattern_get_keyword_values, (setter)patterns___ClassPattern_set_keyword_values,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef patterns___ClassPattern_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_patterns___ClassPattern_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"accept",
     (PyCFunction)CPyPy_patterns___ClassPattern___accept,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_patterns___ClassPattern_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ClassPattern",
    .tp_new = patterns___ClassPattern_new,
    .tp_dealloc = (destructor)patterns___ClassPattern_dealloc,
    .tp_traverse = (traverseproc)patterns___ClassPattern_traverse,
    .tp_clear = (inquiry)patterns___ClassPattern_clear,
    .tp_getset = patterns___ClassPattern_getseters,
    .tp_methods = patterns___ClassPattern_methods,
    .tp_init = patterns___ClassPattern_init,
    .tp_basicsize = sizeof(mypy___patterns___ClassPatternObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_patterns___ClassPattern_template = &CPyType_patterns___ClassPattern_template_;

static PyObject *
patterns___ClassPattern_setup(PyTypeObject *type)
{
    mypy___patterns___ClassPatternObject *self;
    self = (mypy___patterns___ClassPatternObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = patterns___ClassPattern_vtable + 3;
    self->_line = CPY_INT_TAG;
    self->_column = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_patterns___ClassPattern(PyObject *cpy_r_class_ref, PyObject *cpy_r_positionals, PyObject *cpy_r_keyword_keys, PyObject *cpy_r_keyword_values)
{
    PyObject *self = patterns___ClassPattern_setup(CPyType_patterns___ClassPattern);
    if (self == NULL)
        return NULL;
    char res = CPyDef_patterns___ClassPattern_____init__(self, cpy_r_class_ref, cpy_r_positionals, cpy_r_keyword_keys, cpy_r_keyword_values);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
patterns___ClassPattern_get_class_ref(mypy___patterns___ClassPatternObject *self, void *closure)
{
    if (unlikely(self->_class_ref == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'class_ref' of 'ClassPattern' undefined");
        return NULL;
    }
    CPy_INCREF(self->_class_ref);
    PyObject *retval = self->_class_ref;
    return retval;
}

static int
patterns___ClassPattern_set_class_ref(mypy___patterns___ClassPatternObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassPattern' object attribute 'class_ref' cannot be deleted");
        return -1;
    }
    if (self->_class_ref != NULL) {
        CPy_DECREF(self->_class_ref);
    }
    PyObject *tmp;
    if (likely((Py_TYPE(value) == CPyType_nodes___MemberExpr) || (Py_TYPE(value) == CPyType_nodes___NameExpr) || (Py_TYPE(value) == CPyType_nodes___RefExpr)))
        tmp = value;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_class_ref = tmp;
    return 0;
}

static PyObject *
patterns___ClassPattern_get_positionals(mypy___patterns___ClassPatternObject *self, void *closure)
{
    if (unlikely(self->_positionals == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'positionals' of 'ClassPattern' undefined");
        return NULL;
    }
    CPy_INCREF(self->_positionals);
    PyObject *retval = self->_positionals;
    return retval;
}

static int
patterns___ClassPattern_set_positionals(mypy___patterns___ClassPatternObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassPattern' object attribute 'positionals' cannot be deleted");
        return -1;
    }
    if (self->_positionals != NULL) {
        CPy_DECREF(self->_positionals);
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
    self->_positionals = tmp;
    return 0;
}

static PyObject *
patterns___ClassPattern_get_keyword_keys(mypy___patterns___ClassPatternObject *self, void *closure)
{
    if (unlikely(self->_keyword_keys == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'keyword_keys' of 'ClassPattern' undefined");
        return NULL;
    }
    CPy_INCREF(self->_keyword_keys);
    PyObject *retval = self->_keyword_keys;
    return retval;
}

static int
patterns___ClassPattern_set_keyword_keys(mypy___patterns___ClassPatternObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassPattern' object attribute 'keyword_keys' cannot be deleted");
        return -1;
    }
    if (self->_keyword_keys != NULL) {
        CPy_DECREF(self->_keyword_keys);
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
    self->_keyword_keys = tmp;
    return 0;
}

static PyObject *
patterns___ClassPattern_get_keyword_values(mypy___patterns___ClassPatternObject *self, void *closure)
{
    if (unlikely(self->_keyword_values == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'keyword_values' of 'ClassPattern' undefined");
        return NULL;
    }
    CPy_INCREF(self->_keyword_values);
    PyObject *retval = self->_keyword_values;
    return retval;
}

static int
patterns___ClassPattern_set_keyword_values(mypy___patterns___ClassPatternObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ClassPattern' object attribute 'keyword_values' cannot be deleted");
        return -1;
    }
    if (self->_keyword_values != NULL) {
        CPy_DECREF(self->_keyword_values);
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
    self->_keyword_values = tmp;
    return 0;
}
static PyMethodDef patternsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef patternsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.patterns",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    patternsmodule_methods
};

PyObject *CPyInit_mypy___patterns(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___patterns_internal) {
        Py_INCREF(CPyModule_mypy___patterns_internal);
        return CPyModule_mypy___patterns_internal;
    }
    CPyModule_mypy___patterns_internal = PyModule_Create(&patternsmodule);
    if (unlikely(CPyModule_mypy___patterns_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___patterns_internal, "__name__");
    CPyStatic_patterns___globals = PyModule_GetDict(CPyModule_mypy___patterns_internal);
    if (unlikely(CPyStatic_patterns___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_patterns_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___patterns_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___patterns_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_patterns___Pattern);
    Py_CLEAR(CPyType_patterns___AsPattern);
    Py_CLEAR(CPyType_patterns___OrPattern);
    Py_CLEAR(CPyType_patterns___ValuePattern);
    Py_CLEAR(CPyType_patterns___SingletonPattern);
    Py_CLEAR(CPyType_patterns___SequencePattern);
    Py_CLEAR(CPyType_patterns___StarredPattern);
    Py_CLEAR(CPyType_patterns___MappingPattern);
    Py_CLEAR(CPyType_patterns___ClassPattern);
    return NULL;
}

PyObject *CPyDef_patterns___Pattern___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyStatics[3929]; /* 'Not implemented' */
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[718]; /* 'RuntimeError' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "accept", 22, CPyStatic_patterns___globals);
        goto CPyL4;
    }
    PyObject *cpy_r_r4[1] = {cpy_r_r0};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r5, 1, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "accept", 22, CPyStatic_patterns___globals);
        goto CPyL4;
    }
    CPy_Raise(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/patterns.py", "accept", 22, CPyStatic_patterns___globals);
        goto CPyL4;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_patterns___Pattern___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_patterns___Pattern)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.Pattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___PatternVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.PatternVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___Pattern___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept", 21, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___Pattern___accept__Node_glue(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_patterns___Pattern___accept(cpy_r_self, cpy_r_visitor);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___Pattern___accept__Node_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept__Node_glue", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(PyObject_TypeCheck(obj_self, CPyType_patterns___Pattern)))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.Pattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___NodeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.NodeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___Pattern___accept__Node_glue(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept__Node_glue", -1, CPyStatic_patterns___globals);
    return NULL;
}

char CPyDef_patterns___AsPattern_____init__(PyObject *cpy_r_self, PyObject *cpy_r_pattern, PyObject *cpy_r_name) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_nodes___Context_____init__(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/patterns.py", "__init__", 37, CPyStatic_patterns___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_pattern);
    ((mypy___patterns___AsPatternObject *)cpy_r_self)->_pattern = cpy_r_pattern;
    CPy_INCREF(cpy_r_name);
    ((mypy___patterns___AsPatternObject *)cpy_r_self)->_name = cpy_r_name;
    return 1;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_patterns___AsPattern_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"pattern", "name", 0};
    PyObject *obj_pattern;
    PyObject *obj_name;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_pattern, &obj_name)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___AsPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_pattern;
    if (PyObject_TypeCheck(obj_pattern, CPyType_patterns___Pattern))
        arg_pattern = obj_pattern;
    else {
        arg_pattern = NULL;
    }
    if (arg_pattern != NULL) goto __LL4649;
    if (obj_pattern == Py_None)
        arg_pattern = obj_pattern;
    else {
        arg_pattern = NULL;
    }
    if (arg_pattern != NULL) goto __LL4649;
    CPy_TypeError("mypy.patterns.Pattern or None", obj_pattern); 
    goto fail;
__LL4649: ;
    PyObject *arg_name;
    if (Py_TYPE(obj_name) == CPyType_nodes___NameExpr)
        arg_name = obj_name;
    else {
        arg_name = NULL;
    }
    if (arg_name != NULL) goto __LL4650;
    if (obj_name == Py_None)
        arg_name = obj_name;
    else {
        arg_name = NULL;
    }
    if (arg_name != NULL) goto __LL4650;
    CPy_TypeError("mypy.nodes.NameExpr or None", obj_name); 
    goto fail;
__LL4650: ;
    char retval = CPyDef_patterns___AsPattern_____init__(arg_self, arg_pattern, arg_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "__init__", 36, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___AsPattern___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD_TRAIT(cpy_r_visitor, CPyType_mypy___visitor___PatternVisitor, 0, mypy___visitor___PatternVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_visitor, cpy_r_self); /* visit_as_pattern */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "accept", 42, CPyStatic_patterns___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___AsPattern___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___AsPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___PatternVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.PatternVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___AsPattern___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept", 41, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___AsPattern___accept__Node_glue(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_patterns___AsPattern___accept(cpy_r_self, cpy_r_visitor);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___AsPattern___accept__Node_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept__Node_glue", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___AsPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.AsPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___NodeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.NodeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___AsPattern___accept__Node_glue(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept__Node_glue", -1, CPyStatic_patterns___globals);
    return NULL;
}

char CPyDef_patterns___OrPattern_____init__(PyObject *cpy_r_self, PyObject *cpy_r_patterns) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_nodes___Context_____init__(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/patterns.py", "__init__", 51, CPyStatic_patterns___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_patterns);
    ((mypy___patterns___OrPatternObject *)cpy_r_self)->_patterns = cpy_r_patterns;
    return 1;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_patterns___OrPattern_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"patterns", 0};
    PyObject *obj_patterns;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_patterns)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___OrPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.OrPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_patterns;
    if (likely(PyList_Check(obj_patterns)))
        arg_patterns = obj_patterns;
    else {
        CPy_TypeError("list", obj_patterns); 
        goto fail;
    }
    char retval = CPyDef_patterns___OrPattern_____init__(arg_self, arg_patterns);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "__init__", 50, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___OrPattern___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD_TRAIT(cpy_r_visitor, CPyType_mypy___visitor___PatternVisitor, 1, mypy___visitor___PatternVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_visitor, cpy_r_self); /* visit_or_pattern */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "accept", 55, CPyStatic_patterns___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___OrPattern___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___OrPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.OrPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___PatternVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.PatternVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___OrPattern___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept", 54, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___OrPattern___accept__Node_glue(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_patterns___OrPattern___accept(cpy_r_self, cpy_r_visitor);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___OrPattern___accept__Node_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept__Node_glue", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___OrPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.OrPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___NodeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.NodeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___OrPattern___accept__Node_glue(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept__Node_glue", -1, CPyStatic_patterns___globals);
    return NULL;
}

char CPyDef_patterns___ValuePattern_____init__(PyObject *cpy_r_self, PyObject *cpy_r_expr) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_nodes___Context_____init__(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/patterns.py", "__init__", 64, CPyStatic_patterns___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_expr);
    ((mypy___patterns___ValuePatternObject *)cpy_r_self)->_expr = cpy_r_expr;
    return 1;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_patterns___ValuePattern_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"expr", 0};
    PyObject *obj_expr;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___ValuePattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.ValuePattern", obj_self); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(PyObject_TypeCheck(obj_expr, CPyType_nodes___Expression)))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.Expression", obj_expr); 
        goto fail;
    }
    char retval = CPyDef_patterns___ValuePattern_____init__(arg_self, arg_expr);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "__init__", 63, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___ValuePattern___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD_TRAIT(cpy_r_visitor, CPyType_mypy___visitor___PatternVisitor, 2, mypy___visitor___PatternVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_visitor, cpy_r_self); /* visit_value_pattern */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "accept", 68, CPyStatic_patterns___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___ValuePattern___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___ValuePattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.ValuePattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___PatternVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.PatternVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___ValuePattern___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept", 67, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___ValuePattern___accept__Node_glue(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_patterns___ValuePattern___accept(cpy_r_self, cpy_r_visitor);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___ValuePattern___accept__Node_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept__Node_glue", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___ValuePattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.ValuePattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___NodeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.NodeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___ValuePattern___accept__Node_glue(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept__Node_glue", -1, CPyStatic_patterns___globals);
    return NULL;
}

char CPyDef_patterns___SingletonPattern_____init__(PyObject *cpy_r_self, PyObject *cpy_r_value) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_nodes___Context_____init__(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/patterns.py", "__init__", 76, CPyStatic_patterns___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_value);
    ((mypy___patterns___SingletonPatternObject *)cpy_r_self)->_value = cpy_r_value;
    return 1;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_patterns___SingletonPattern_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"value", 0};
    PyObject *obj_value;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_value)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___SingletonPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.SingletonPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_value;
    if (PyBool_Check(obj_value))
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL4651;
    if (obj_value == Py_None)
        arg_value = obj_value;
    else {
        arg_value = NULL;
    }
    if (arg_value != NULL) goto __LL4651;
    CPy_TypeError("bool or None", obj_value); 
    goto fail;
__LL4651: ;
    char retval = CPyDef_patterns___SingletonPattern_____init__(arg_self, arg_value);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "__init__", 75, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___SingletonPattern___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD_TRAIT(cpy_r_visitor, CPyType_mypy___visitor___PatternVisitor, 3, mypy___visitor___PatternVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_visitor, cpy_r_self); /* visit_singleton_pattern */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "accept", 80, CPyStatic_patterns___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___SingletonPattern___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___SingletonPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.SingletonPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___PatternVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.PatternVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___SingletonPattern___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept", 79, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___SingletonPattern___accept__Node_glue(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_patterns___SingletonPattern___accept(cpy_r_self, cpy_r_visitor);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___SingletonPattern___accept__Node_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept__Node_glue", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___SingletonPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.SingletonPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___NodeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.NodeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___SingletonPattern___accept__Node_glue(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept__Node_glue", -1, CPyStatic_patterns___globals);
    return NULL;
}

char CPyDef_patterns___SequencePattern_____init__(PyObject *cpy_r_self, PyObject *cpy_r_patterns) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_nodes___Context_____init__(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/patterns.py", "__init__", 89, CPyStatic_patterns___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_patterns);
    ((mypy___patterns___SequencePatternObject *)cpy_r_self)->_patterns = cpy_r_patterns;
    return 1;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_patterns___SequencePattern_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"patterns", 0};
    PyObject *obj_patterns;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_patterns)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___SequencePattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.SequencePattern", obj_self); 
        goto fail;
    }
    PyObject *arg_patterns;
    if (likely(PyList_Check(obj_patterns)))
        arg_patterns = obj_patterns;
    else {
        CPy_TypeError("list", obj_patterns); 
        goto fail;
    }
    char retval = CPyDef_patterns___SequencePattern_____init__(arg_self, arg_patterns);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "__init__", 88, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___SequencePattern___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD_TRAIT(cpy_r_visitor, CPyType_mypy___visitor___PatternVisitor, 4, mypy___visitor___PatternVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_visitor, cpy_r_self); /* visit_sequence_pattern */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "accept", 93, CPyStatic_patterns___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___SequencePattern___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___SequencePattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.SequencePattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___PatternVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.PatternVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___SequencePattern___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept", 92, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___SequencePattern___accept__Node_glue(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_patterns___SequencePattern___accept(cpy_r_self, cpy_r_visitor);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___SequencePattern___accept__Node_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept__Node_glue", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___SequencePattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.SequencePattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___NodeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.NodeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___SequencePattern___accept__Node_glue(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept__Node_glue", -1, CPyStatic_patterns___globals);
    return NULL;
}

char CPyDef_patterns___StarredPattern_____init__(PyObject *cpy_r_self, PyObject *cpy_r_capture) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_nodes___Context_____init__(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/patterns.py", "__init__", 102, CPyStatic_patterns___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_capture);
    ((mypy___patterns___StarredPatternObject *)cpy_r_self)->_capture = cpy_r_capture;
    return 1;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_patterns___StarredPattern_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"capture", 0};
    PyObject *obj_capture;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_capture)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___StarredPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.StarredPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_capture;
    if (Py_TYPE(obj_capture) == CPyType_nodes___NameExpr)
        arg_capture = obj_capture;
    else {
        arg_capture = NULL;
    }
    if (arg_capture != NULL) goto __LL4652;
    if (obj_capture == Py_None)
        arg_capture = obj_capture;
    else {
        arg_capture = NULL;
    }
    if (arg_capture != NULL) goto __LL4652;
    CPy_TypeError("mypy.nodes.NameExpr or None", obj_capture); 
    goto fail;
__LL4652: ;
    char retval = CPyDef_patterns___StarredPattern_____init__(arg_self, arg_capture);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "__init__", 101, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___StarredPattern___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD_TRAIT(cpy_r_visitor, CPyType_mypy___visitor___PatternVisitor, 5, mypy___visitor___PatternVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_visitor, cpy_r_self); /* visit_starred_pattern */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "accept", 106, CPyStatic_patterns___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___StarredPattern___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___StarredPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.StarredPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___PatternVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.PatternVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___StarredPattern___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept", 105, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___StarredPattern___accept__Node_glue(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_patterns___StarredPattern___accept(cpy_r_self, cpy_r_visitor);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___StarredPattern___accept__Node_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept__Node_glue", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___StarredPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.StarredPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___NodeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.NodeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___StarredPattern___accept__Node_glue(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept__Node_glue", -1, CPyStatic_patterns___globals);
    return NULL;
}

char CPyDef_patterns___MappingPattern_____init__(PyObject *cpy_r_self, PyObject *cpy_r_keys, PyObject *cpy_r_values, PyObject *cpy_r_rest) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_nodes___Context_____init__(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/patterns.py", "__init__", 115, CPyStatic_patterns___globals);
        goto CPyL5;
    }
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_keys)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_values)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = cpy_r_r5 == cpy_r_r8;
    if (cpy_r_r9) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/patterns.py", "__init__", 116, CPyStatic_patterns___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_keys);
    ((mypy___patterns___MappingPatternObject *)cpy_r_self)->_keys = cpy_r_keys;
    CPy_INCREF(cpy_r_values);
    ((mypy___patterns___MappingPatternObject *)cpy_r_self)->_values = cpy_r_values;
    CPy_INCREF(cpy_r_rest);
    ((mypy___patterns___MappingPatternObject *)cpy_r_self)->_rest = cpy_r_rest;
    return 1;
CPyL5: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
}

PyObject *CPyPy_patterns___MappingPattern_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"keys", "values", "rest", 0};
    PyObject *obj_keys;
    PyObject *obj_values;
    PyObject *obj_rest;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOO", "__init__", kwlist, &obj_keys, &obj_values, &obj_rest)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___MappingPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_keys;
    if (likely(PyList_Check(obj_keys)))
        arg_keys = obj_keys;
    else {
        CPy_TypeError("list", obj_keys); 
        goto fail;
    }
    PyObject *arg_values;
    if (likely(PyList_Check(obj_values)))
        arg_values = obj_values;
    else {
        CPy_TypeError("list", obj_values); 
        goto fail;
    }
    PyObject *arg_rest;
    if (Py_TYPE(obj_rest) == CPyType_nodes___NameExpr)
        arg_rest = obj_rest;
    else {
        arg_rest = NULL;
    }
    if (arg_rest != NULL) goto __LL4653;
    if (obj_rest == Py_None)
        arg_rest = obj_rest;
    else {
        arg_rest = NULL;
    }
    if (arg_rest != NULL) goto __LL4653;
    CPy_TypeError("mypy.nodes.NameExpr or None", obj_rest); 
    goto fail;
__LL4653: ;
    char retval = CPyDef_patterns___MappingPattern_____init__(arg_self, arg_keys, arg_values, arg_rest);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "__init__", 114, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___MappingPattern___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD_TRAIT(cpy_r_visitor, CPyType_mypy___visitor___PatternVisitor, 6, mypy___visitor___PatternVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_visitor, cpy_r_self); /* visit_mapping_pattern */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "accept", 122, CPyStatic_patterns___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___MappingPattern___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___MappingPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___PatternVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.PatternVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___MappingPattern___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept", 121, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___MappingPattern___accept__Node_glue(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_patterns___MappingPattern___accept(cpy_r_self, cpy_r_visitor);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___MappingPattern___accept__Node_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept__Node_glue", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___MappingPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.MappingPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___NodeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.NodeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___MappingPattern___accept__Node_glue(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept__Node_glue", -1, CPyStatic_patterns___globals);
    return NULL;
}

char CPyDef_patterns___ClassPattern_____init__(PyObject *cpy_r_self, PyObject *cpy_r_class_ref, PyObject *cpy_r_positionals, PyObject *cpy_r_keyword_keys, PyObject *cpy_r_keyword_values) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = CPY_INT_TAG;
    cpy_r_r1 = CPY_INT_TAG;
    cpy_r_r2 = CPyDef_nodes___Context_____init__(cpy_r_self, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/patterns.py", "__init__", 140, CPyStatic_patterns___globals);
        goto CPyL5;
    }
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_keyword_keys)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_keyword_values)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = cpy_r_r5 == cpy_r_r8;
    if (cpy_r_r9) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/patterns.py", "__init__", 141, CPyStatic_patterns___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL4: ;
    CPy_INCREF(cpy_r_class_ref);
    ((mypy___patterns___ClassPatternObject *)cpy_r_self)->_class_ref = cpy_r_class_ref;
    CPy_INCREF(cpy_r_positionals);
    ((mypy___patterns___ClassPatternObject *)cpy_r_self)->_positionals = cpy_r_positionals;
    CPy_INCREF(cpy_r_keyword_keys);
    ((mypy___patterns___ClassPatternObject *)cpy_r_self)->_keyword_keys = cpy_r_keyword_keys;
    CPy_INCREF(cpy_r_keyword_values);
    ((mypy___patterns___ClassPatternObject *)cpy_r_self)->_keyword_values = cpy_r_keyword_values;
    return 1;
CPyL5: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
}

PyObject *CPyPy_patterns___ClassPattern_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"class_ref", "positionals", "keyword_keys", "keyword_values", 0};
    PyObject *obj_class_ref;
    PyObject *obj_positionals;
    PyObject *obj_keyword_keys;
    PyObject *obj_keyword_values;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOO", "__init__", kwlist, &obj_class_ref, &obj_positionals, &obj_keyword_keys, &obj_keyword_values)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___ClassPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.ClassPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_class_ref;
    if (likely((Py_TYPE(obj_class_ref) == CPyType_nodes___MemberExpr) || (Py_TYPE(obj_class_ref) == CPyType_nodes___NameExpr) || (Py_TYPE(obj_class_ref) == CPyType_nodes___RefExpr)))
        arg_class_ref = obj_class_ref;
    else {
        CPy_TypeError("mypy.nodes.RefExpr", obj_class_ref); 
        goto fail;
    }
    PyObject *arg_positionals;
    if (likely(PyList_Check(obj_positionals)))
        arg_positionals = obj_positionals;
    else {
        CPy_TypeError("list", obj_positionals); 
        goto fail;
    }
    PyObject *arg_keyword_keys;
    if (likely(PyList_Check(obj_keyword_keys)))
        arg_keyword_keys = obj_keyword_keys;
    else {
        CPy_TypeError("list", obj_keyword_keys); 
        goto fail;
    }
    PyObject *arg_keyword_values;
    if (likely(PyList_Check(obj_keyword_values)))
        arg_keyword_values = obj_keyword_values;
    else {
        CPy_TypeError("list", obj_keyword_values); 
        goto fail;
    }
    char retval = CPyDef_patterns___ClassPattern_____init__(arg_self, arg_class_ref, arg_positionals, arg_keyword_keys, arg_keyword_values);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "__init__", 133, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___ClassPattern___accept(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPY_GET_METHOD_TRAIT(cpy_r_visitor, CPyType_mypy___visitor___PatternVisitor, 7, mypy___visitor___PatternVisitorObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_visitor, cpy_r_self); /* visit_class_pattern */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "accept", 148, CPyStatic_patterns___globals);
        goto CPyL2;
    }
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___ClassPattern___accept(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___ClassPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.ClassPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___PatternVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.PatternVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___ClassPattern___accept(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept", 147, CPyStatic_patterns___globals);
    return NULL;
}

PyObject *CPyDef_patterns___ClassPattern___accept__Node_glue(PyObject *cpy_r_self, PyObject *cpy_r_visitor) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    cpy_r_r0 = CPyDef_patterns___ClassPattern___accept(cpy_r_self, cpy_r_visitor);
    if (cpy_r_r0 == NULL) goto CPyL2;
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = NULL;
    return cpy_r_r1;
}

PyObject *CPyPy_patterns___ClassPattern___accept__Node_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"visitor", 0};
    static CPyArg_Parser parser = {"O:accept__Node_glue", kwlist, 0};
    PyObject *obj_visitor;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_visitor)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_patterns___ClassPattern))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.patterns.ClassPattern", obj_self); 
        goto fail;
    }
    PyObject *arg_visitor;
    if (likely(PyObject_TypeCheck(obj_visitor, CPyType_mypy___visitor___NodeVisitor)))
        arg_visitor = obj_visitor;
    else {
        CPy_TypeError("mypy.visitor.NodeVisitor", obj_visitor); 
        goto fail;
    }
    PyObject *retval = CPyDef_patterns___ClassPattern___accept__Node_glue(arg_self, arg_visitor);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/patterns.py", "accept__Node_glue", -1, CPyStatic_patterns___globals);
    return NULL;
}

char CPyDef_patterns_____top_level__(void) {
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
    PyObject **cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
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
    int32_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    int32_t cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
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
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    int32_t cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    int32_t cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
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
    int32_t cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    int32_t cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    int32_t cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    int32_t cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    int32_t cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
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
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    int32_t cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    int32_t cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    char cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    int32_t cpy_r_r205;
    char cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    int32_t cpy_r_r209;
    char cpy_r_r210;
    char cpy_r_r211;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", -1, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_patterns___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 3, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9570]; /* ('TypeVar',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_patterns___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 5, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9554]; /* ('trait',) */
    cpy_r_r14 = CPyStatics[599]; /* 'mypy_extensions' */
    cpy_r_r15 = CPyStatic_patterns___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 7, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    CPyModule_mypy_extensions = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9571]; /* ('Expression', 'NameExpr', 'Node', 'RefExpr') */
    cpy_r_r18 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r19 = CPyStatic_patterns___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 9, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    CPyModule_mypy___nodes = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9266]; /* ('PatternVisitor',) */
    cpy_r_r22 = CPyStatics[1087]; /* 'mypy.visitor' */
    cpy_r_r23 = CPyStatic_patterns___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 10, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    CPyModule_mypy___visitor = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___visitor);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[1088]; /* 'T' */
    cpy_r_r26 = CPyStatic_patterns___globals;
    cpy_r_r27 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 12, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    PyObject *cpy_r_r29[1] = {cpy_r_r25};
    cpy_r_r30 = (PyObject **)&cpy_r_r29;
    cpy_r_r31 = _PyObject_Vectorcall(cpy_r_r28, cpy_r_r30, 1, 0);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 12, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r32 = CPyStatic_patterns___globals;
    cpy_r_r33 = CPyStatics[1088]; /* 'T' */
    cpy_r_r34 = CPyDict_SetItem(cpy_r_r32, cpy_r_r33, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 12, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r36 = (PyObject *)CPyType_nodes___Node;
    cpy_r_r37 = PyTuple_Pack(1, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 16, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r38 = CPyStatics[1004]; /* 'mypy.patterns' */
    cpy_r_r39 = (PyObject *)CPyType_patterns___Pattern_template;
    cpy_r_r40 = CPyType_FromTemplate(cpy_r_r39, cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 16, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r41 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r42 = CPyStatics[2272]; /* 'line' */
    cpy_r_r43 = CPyStatics[2273]; /* 'column' */
    cpy_r_r44 = CPyStatics[2274]; /* 'end_line' */
    cpy_r_r45 = CPyStatics[2275]; /* 'end_column' */
    cpy_r_r46 = PyTuple_Pack(4, cpy_r_r42, cpy_r_r43, cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 16, CPyStatic_patterns___globals);
        goto CPyL66;
    }
    cpy_r_r47 = PyObject_SetAttr(cpy_r_r40, cpy_r_r41, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 16, CPyStatic_patterns___globals);
        goto CPyL66;
    }
    CPyType_patterns___Pattern = (PyTypeObject *)cpy_r_r40;
    CPy_INCREF(CPyType_patterns___Pattern);
    cpy_r_r49 = CPyStatic_patterns___globals;
    cpy_r_r50 = CPyStatics[1366]; /* 'Pattern' */
    cpy_r_r51 = CPyDict_SetItem(cpy_r_r49, cpy_r_r50, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r52 = cpy_r_r51 >= 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 16, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r53 = (PyObject *)CPyType_patterns___Pattern;
    cpy_r_r54 = PyTuple_Pack(1, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 25, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r55 = CPyStatics[1004]; /* 'mypy.patterns' */
    cpy_r_r56 = (PyObject *)CPyType_patterns___AsPattern_template;
    cpy_r_r57 = CPyType_FromTemplate(cpy_r_r56, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 25, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r58 = CPyDef_patterns___AsPattern_trait_vtable_setup();
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", -1, CPyStatic_patterns___globals);
        goto CPyL67;
    }
    cpy_r_r59 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r60 = CPyStatics[2444]; /* 'pattern' */
    cpy_r_r61 = CPyStatics[2329]; /* 'name' */
    cpy_r_r62 = CPyStatics[2272]; /* 'line' */
    cpy_r_r63 = CPyStatics[2273]; /* 'column' */
    cpy_r_r64 = CPyStatics[2274]; /* 'end_line' */
    cpy_r_r65 = CPyStatics[2275]; /* 'end_column' */
    cpy_r_r66 = PyTuple_Pack(6, cpy_r_r60, cpy_r_r61, cpy_r_r62, cpy_r_r63, cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 25, CPyStatic_patterns___globals);
        goto CPyL67;
    }
    cpy_r_r67 = PyObject_SetAttr(cpy_r_r57, cpy_r_r59, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 25, CPyStatic_patterns___globals);
        goto CPyL67;
    }
    CPyType_patterns___AsPattern = (PyTypeObject *)cpy_r_r57;
    CPy_INCREF(CPyType_patterns___AsPattern);
    cpy_r_r69 = CPyStatic_patterns___globals;
    cpy_r_r70 = CPyStatics[1002]; /* 'AsPattern' */
    cpy_r_r71 = CPyDict_SetItem(cpy_r_r69, cpy_r_r70, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 25, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r73 = (PyObject *)CPyType_patterns___Pattern;
    cpy_r_r74 = PyTuple_Pack(1, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 45, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r75 = CPyStatics[1004]; /* 'mypy.patterns' */
    cpy_r_r76 = (PyObject *)CPyType_patterns___OrPattern_template;
    cpy_r_r77 = CPyType_FromTemplate(cpy_r_r76, cpy_r_r74, cpy_r_r75);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 45, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r78 = CPyDef_patterns___OrPattern_trait_vtable_setup();
    if (unlikely(cpy_r_r78 == 2)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", -1, CPyStatic_patterns___globals);
        goto CPyL68;
    }
    cpy_r_r79 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r80 = CPyStatics[2446]; /* 'patterns' */
    cpy_r_r81 = CPyStatics[2272]; /* 'line' */
    cpy_r_r82 = CPyStatics[2273]; /* 'column' */
    cpy_r_r83 = CPyStatics[2274]; /* 'end_line' */
    cpy_r_r84 = CPyStatics[2275]; /* 'end_column' */
    cpy_r_r85 = PyTuple_Pack(5, cpy_r_r80, cpy_r_r81, cpy_r_r82, cpy_r_r83, cpy_r_r84);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 45, CPyStatic_patterns___globals);
        goto CPyL68;
    }
    cpy_r_r86 = PyObject_SetAttr(cpy_r_r77, cpy_r_r79, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r87 = cpy_r_r86 >= 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 45, CPyStatic_patterns___globals);
        goto CPyL68;
    }
    CPyType_patterns___OrPattern = (PyTypeObject *)cpy_r_r77;
    CPy_INCREF(CPyType_patterns___OrPattern);
    cpy_r_r88 = CPyStatic_patterns___globals;
    cpy_r_r89 = CPyStatics[1365]; /* 'OrPattern' */
    cpy_r_r90 = CPyDict_SetItem(cpy_r_r88, cpy_r_r89, cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r91 = cpy_r_r90 >= 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 45, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r92 = (PyObject *)CPyType_patterns___Pattern;
    cpy_r_r93 = PyTuple_Pack(1, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 58, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r94 = CPyStatics[1004]; /* 'mypy.patterns' */
    cpy_r_r95 = (PyObject *)CPyType_patterns___ValuePattern_template;
    cpy_r_r96 = CPyType_FromTemplate(cpy_r_r95, cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 58, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r97 = CPyDef_patterns___ValuePattern_trait_vtable_setup();
    if (unlikely(cpy_r_r97 == 2)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", -1, CPyStatic_patterns___globals);
        goto CPyL69;
    }
    cpy_r_r98 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r99 = CPyStatics[2511]; /* 'expr' */
    cpy_r_r100 = CPyStatics[2272]; /* 'line' */
    cpy_r_r101 = CPyStatics[2273]; /* 'column' */
    cpy_r_r102 = CPyStatics[2274]; /* 'end_line' */
    cpy_r_r103 = CPyStatics[2275]; /* 'end_column' */
    cpy_r_r104 = PyTuple_Pack(5, cpy_r_r99, cpy_r_r100, cpy_r_r101, cpy_r_r102, cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 58, CPyStatic_patterns___globals);
        goto CPyL69;
    }
    cpy_r_r105 = PyObject_SetAttr(cpy_r_r96, cpy_r_r98, cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    cpy_r_r106 = cpy_r_r105 >= 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 58, CPyStatic_patterns___globals);
        goto CPyL69;
    }
    CPyType_patterns___ValuePattern = (PyTypeObject *)cpy_r_r96;
    CPy_INCREF(CPyType_patterns___ValuePattern);
    cpy_r_r107 = CPyStatic_patterns___globals;
    cpy_r_r108 = CPyStatics[1369]; /* 'ValuePattern' */
    cpy_r_r109 = CPyDict_SetItem(cpy_r_r107, cpy_r_r108, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    cpy_r_r110 = cpy_r_r109 >= 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 58, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r111 = (PyObject *)CPyType_patterns___Pattern;
    cpy_r_r112 = PyTuple_Pack(1, cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 71, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r113 = CPyStatics[1004]; /* 'mypy.patterns' */
    cpy_r_r114 = (PyObject *)CPyType_patterns___SingletonPattern_template;
    cpy_r_r115 = CPyType_FromTemplate(cpy_r_r114, cpy_r_r112, cpy_r_r113);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 71, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r116 = CPyDef_patterns___SingletonPattern_trait_vtable_setup();
    if (unlikely(cpy_r_r116 == 2)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", -1, CPyStatic_patterns___globals);
        goto CPyL70;
    }
    cpy_r_r117 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r118 = CPyStatics[2242]; /* 'value' */
    cpy_r_r119 = CPyStatics[2272]; /* 'line' */
    cpy_r_r120 = CPyStatics[2273]; /* 'column' */
    cpy_r_r121 = CPyStatics[2274]; /* 'end_line' */
    cpy_r_r122 = CPyStatics[2275]; /* 'end_column' */
    cpy_r_r123 = PyTuple_Pack(5, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 71, CPyStatic_patterns___globals);
        goto CPyL70;
    }
    cpy_r_r124 = PyObject_SetAttr(cpy_r_r115, cpy_r_r117, cpy_r_r123);
    CPy_DECREF(cpy_r_r123);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 71, CPyStatic_patterns___globals);
        goto CPyL70;
    }
    CPyType_patterns___SingletonPattern = (PyTypeObject *)cpy_r_r115;
    CPy_INCREF(CPyType_patterns___SingletonPattern);
    cpy_r_r126 = CPyStatic_patterns___globals;
    cpy_r_r127 = CPyStatics[1368]; /* 'SingletonPattern' */
    cpy_r_r128 = CPyDict_SetItem(cpy_r_r126, cpy_r_r127, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r129 = cpy_r_r128 >= 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 71, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r130 = (PyObject *)CPyType_patterns___Pattern;
    cpy_r_r131 = PyTuple_Pack(1, cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 83, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r132 = CPyStatics[1004]; /* 'mypy.patterns' */
    cpy_r_r133 = (PyObject *)CPyType_patterns___SequencePattern_template;
    cpy_r_r134 = CPyType_FromTemplate(cpy_r_r133, cpy_r_r131, cpy_r_r132);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 83, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r135 = CPyDef_patterns___SequencePattern_trait_vtable_setup();
    if (unlikely(cpy_r_r135 == 2)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", -1, CPyStatic_patterns___globals);
        goto CPyL71;
    }
    cpy_r_r136 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r137 = CPyStatics[2446]; /* 'patterns' */
    cpy_r_r138 = CPyStatics[2272]; /* 'line' */
    cpy_r_r139 = CPyStatics[2273]; /* 'column' */
    cpy_r_r140 = CPyStatics[2274]; /* 'end_line' */
    cpy_r_r141 = CPyStatics[2275]; /* 'end_column' */
    cpy_r_r142 = PyTuple_Pack(5, cpy_r_r137, cpy_r_r138, cpy_r_r139, cpy_r_r140, cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 83, CPyStatic_patterns___globals);
        goto CPyL71;
    }
    cpy_r_r143 = PyObject_SetAttr(cpy_r_r134, cpy_r_r136, cpy_r_r142);
    CPy_DECREF(cpy_r_r142);
    cpy_r_r144 = cpy_r_r143 >= 0;
    if (unlikely(!cpy_r_r144)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 83, CPyStatic_patterns___globals);
        goto CPyL71;
    }
    CPyType_patterns___SequencePattern = (PyTypeObject *)cpy_r_r134;
    CPy_INCREF(CPyType_patterns___SequencePattern);
    cpy_r_r145 = CPyStatic_patterns___globals;
    cpy_r_r146 = CPyStatics[1367]; /* 'SequencePattern' */
    cpy_r_r147 = CPyDict_SetItem(cpy_r_r145, cpy_r_r146, cpy_r_r134);
    CPy_DECREF(cpy_r_r134);
    cpy_r_r148 = cpy_r_r147 >= 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 83, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r149 = (PyObject *)CPyType_patterns___Pattern;
    cpy_r_r150 = PyTuple_Pack(1, cpy_r_r149);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 96, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r151 = CPyStatics[1004]; /* 'mypy.patterns' */
    cpy_r_r152 = (PyObject *)CPyType_patterns___StarredPattern_template;
    cpy_r_r153 = CPyType_FromTemplate(cpy_r_r152, cpy_r_r150, cpy_r_r151);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 96, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r154 = CPyDef_patterns___StarredPattern_trait_vtable_setup();
    if (unlikely(cpy_r_r154 == 2)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", -1, CPyStatic_patterns___globals);
        goto CPyL72;
    }
    cpy_r_r155 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r156 = CPyStatics[4344]; /* 'capture' */
    cpy_r_r157 = CPyStatics[2272]; /* 'line' */
    cpy_r_r158 = CPyStatics[2273]; /* 'column' */
    cpy_r_r159 = CPyStatics[2274]; /* 'end_line' */
    cpy_r_r160 = CPyStatics[2275]; /* 'end_column' */
    cpy_r_r161 = PyTuple_Pack(5, cpy_r_r156, cpy_r_r157, cpy_r_r158, cpy_r_r159, cpy_r_r160);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 96, CPyStatic_patterns___globals);
        goto CPyL72;
    }
    cpy_r_r162 = PyObject_SetAttr(cpy_r_r153, cpy_r_r155, cpy_r_r161);
    CPy_DECREF(cpy_r_r161);
    cpy_r_r163 = cpy_r_r162 >= 0;
    if (unlikely(!cpy_r_r163)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 96, CPyStatic_patterns___globals);
        goto CPyL72;
    }
    CPyType_patterns___StarredPattern = (PyTypeObject *)cpy_r_r153;
    CPy_INCREF(CPyType_patterns___StarredPattern);
    cpy_r_r164 = CPyStatic_patterns___globals;
    cpy_r_r165 = CPyStatics[1003]; /* 'StarredPattern' */
    cpy_r_r166 = CPyDict_SetItem(cpy_r_r164, cpy_r_r165, cpy_r_r153);
    CPy_DECREF(cpy_r_r153);
    cpy_r_r167 = cpy_r_r166 >= 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 96, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r168 = (PyObject *)CPyType_patterns___Pattern;
    cpy_r_r169 = PyTuple_Pack(1, cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 109, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r170 = CPyStatics[1004]; /* 'mypy.patterns' */
    cpy_r_r171 = (PyObject *)CPyType_patterns___MappingPattern_template;
    cpy_r_r172 = CPyType_FromTemplate(cpy_r_r171, cpy_r_r169, cpy_r_r170);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 109, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r173 = CPyDef_patterns___MappingPattern_trait_vtable_setup();
    if (unlikely(cpy_r_r173 == 2)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", -1, CPyStatic_patterns___globals);
        goto CPyL73;
    }
    cpy_r_r174 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r175 = CPyStatics[267]; /* 'keys' */
    cpy_r_r176 = CPyStatics[2406]; /* 'values' */
    cpy_r_r177 = CPyStatics[2447]; /* 'rest' */
    cpy_r_r178 = CPyStatics[2272]; /* 'line' */
    cpy_r_r179 = CPyStatics[2273]; /* 'column' */
    cpy_r_r180 = CPyStatics[2274]; /* 'end_line' */
    cpy_r_r181 = CPyStatics[2275]; /* 'end_column' */
    cpy_r_r182 = PyTuple_Pack(7, cpy_r_r175, cpy_r_r176, cpy_r_r177, cpy_r_r178, cpy_r_r179, cpy_r_r180, cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 109, CPyStatic_patterns___globals);
        goto CPyL73;
    }
    cpy_r_r183 = PyObject_SetAttr(cpy_r_r172, cpy_r_r174, cpy_r_r182);
    CPy_DECREF(cpy_r_r182);
    cpy_r_r184 = cpy_r_r183 >= 0;
    if (unlikely(!cpy_r_r184)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 109, CPyStatic_patterns___globals);
        goto CPyL73;
    }
    CPyType_patterns___MappingPattern = (PyTypeObject *)cpy_r_r172;
    CPy_INCREF(CPyType_patterns___MappingPattern);
    cpy_r_r185 = CPyStatic_patterns___globals;
    cpy_r_r186 = CPyStatics[1364]; /* 'MappingPattern' */
    cpy_r_r187 = CPyDict_SetItem(cpy_r_r185, cpy_r_r186, cpy_r_r172);
    CPy_DECREF(cpy_r_r172);
    cpy_r_r188 = cpy_r_r187 >= 0;
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 109, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r189 = (PyObject *)CPyType_patterns___Pattern;
    cpy_r_r190 = PyTuple_Pack(1, cpy_r_r189);
    if (unlikely(cpy_r_r190 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 125, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r191 = CPyStatics[1004]; /* 'mypy.patterns' */
    cpy_r_r192 = (PyObject *)CPyType_patterns___ClassPattern_template;
    cpy_r_r193 = CPyType_FromTemplate(cpy_r_r192, cpy_r_r190, cpy_r_r191);
    CPy_DECREF(cpy_r_r190);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 125, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    cpy_r_r194 = CPyDef_patterns___ClassPattern_trait_vtable_setup();
    if (unlikely(cpy_r_r194 == 2)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", -1, CPyStatic_patterns___globals);
        goto CPyL74;
    }
    cpy_r_r195 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r196 = CPyStatics[4345]; /* 'class_ref' */
    cpy_r_r197 = CPyStatics[4346]; /* 'positionals' */
    cpy_r_r198 = CPyStatics[4347]; /* 'keyword_keys' */
    cpy_r_r199 = CPyStatics[4348]; /* 'keyword_values' */
    cpy_r_r200 = CPyStatics[2272]; /* 'line' */
    cpy_r_r201 = CPyStatics[2273]; /* 'column' */
    cpy_r_r202 = CPyStatics[2274]; /* 'end_line' */
    cpy_r_r203 = CPyStatics[2275]; /* 'end_column' */
    cpy_r_r204 = PyTuple_Pack(8, cpy_r_r196, cpy_r_r197, cpy_r_r198, cpy_r_r199, cpy_r_r200, cpy_r_r201, cpy_r_r202, cpy_r_r203);
    if (unlikely(cpy_r_r204 == NULL)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 125, CPyStatic_patterns___globals);
        goto CPyL74;
    }
    cpy_r_r205 = PyObject_SetAttr(cpy_r_r193, cpy_r_r195, cpy_r_r204);
    CPy_DECREF(cpy_r_r204);
    cpy_r_r206 = cpy_r_r205 >= 0;
    if (unlikely(!cpy_r_r206)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 125, CPyStatic_patterns___globals);
        goto CPyL74;
    }
    CPyType_patterns___ClassPattern = (PyTypeObject *)cpy_r_r193;
    CPy_INCREF(CPyType_patterns___ClassPattern);
    cpy_r_r207 = CPyStatic_patterns___globals;
    cpy_r_r208 = CPyStatics[1363]; /* 'ClassPattern' */
    cpy_r_r209 = CPyDict_SetItem(cpy_r_r207, cpy_r_r208, cpy_r_r193);
    CPy_DECREF(cpy_r_r193);
    cpy_r_r210 = cpy_r_r209 >= 0;
    if (unlikely(!cpy_r_r210)) {
        CPy_AddTraceback("mypy/patterns.py", "<module>", 125, CPyStatic_patterns___globals);
        goto CPyL65;
    }
    return 1;
CPyL65: ;
    cpy_r_r211 = 2;
    return cpy_r_r211;
CPyL66: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL65;
CPyL67: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL65;
CPyL68: ;
    CPy_DecRef(cpy_r_r77);
    goto CPyL65;
CPyL69: ;
    CPy_DecRef(cpy_r_r96);
    goto CPyL65;
CPyL70: ;
    CPy_DecRef(cpy_r_r115);
    goto CPyL65;
CPyL71: ;
    CPy_DecRef(cpy_r_r134);
    goto CPyL65;
CPyL72: ;
    CPy_DecRef(cpy_r_r153);
    goto CPyL65;
CPyL73: ;
    CPy_DecRef(cpy_r_r172);
    goto CPyL65;
CPyL74: ;
    CPy_DecRef(cpy_r_r193);
    goto CPyL65;
}
