#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *gclogger___GcLogger_setup(PyTypeObject *type);
PyObject *CPyDef_gclogger___GcLogger(void);

static PyObject *
gclogger___GcLogger_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_gclogger___GcLogger) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return gclogger___GcLogger_setup(type);
}

static int
gclogger___GcLogger_traverse(mypy___gclogger___GcLoggerObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_gc_start_time);
    if (CPyTagged_CheckLong(self->_gc_calls)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_gc_calls));
    }
    if (CPyTagged_CheckLong(self->_gc_collected)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_gc_collected));
    }
    if (CPyTagged_CheckLong(self->_gc_uncollectable)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_gc_uncollectable));
    }
    return 0;
}

static int
gclogger___GcLogger_clear(mypy___gclogger___GcLoggerObject *self)
{
    Py_CLEAR(self->_gc_start_time);
    if (CPyTagged_CheckLong(self->_gc_calls)) {
        CPyTagged __tmp = self->_gc_calls;
        self->_gc_calls = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_gc_collected)) {
        CPyTagged __tmp = self->_gc_collected;
        self->_gc_collected = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_gc_uncollectable)) {
        CPyTagged __tmp = self->_gc_uncollectable;
        self->_gc_uncollectable = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
gclogger___GcLogger_dealloc(mypy___gclogger___GcLoggerObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, gclogger___GcLogger_dealloc)
    gclogger___GcLogger_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem gclogger___GcLogger_vtable[4];
static bool
CPyDef_gclogger___GcLogger_trait_vtable_setup(void)
{
    CPyVTableItem gclogger___GcLogger_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_gclogger___GcLogger_____enter__,
        (CPyVTableItem)CPyDef_gclogger___GcLogger___gc_callback,
        (CPyVTableItem)CPyDef_gclogger___GcLogger_____exit__,
        (CPyVTableItem)CPyDef_gclogger___GcLogger___get_stats,
    };
    memcpy(gclogger___GcLogger_vtable, gclogger___GcLogger_vtable_scratch, sizeof(gclogger___GcLogger_vtable));
    return 1;
}

static PyObject *
gclogger___GcLogger_get_gc_start_time(mypy___gclogger___GcLoggerObject *self, void *closure);
static int
gclogger___GcLogger_set_gc_start_time(mypy___gclogger___GcLoggerObject *self, PyObject *value, void *closure);
static PyObject *
gclogger___GcLogger_get_gc_time(mypy___gclogger___GcLoggerObject *self, void *closure);
static int
gclogger___GcLogger_set_gc_time(mypy___gclogger___GcLoggerObject *self, PyObject *value, void *closure);
static PyObject *
gclogger___GcLogger_get_gc_calls(mypy___gclogger___GcLoggerObject *self, void *closure);
static int
gclogger___GcLogger_set_gc_calls(mypy___gclogger___GcLoggerObject *self, PyObject *value, void *closure);
static PyObject *
gclogger___GcLogger_get_gc_collected(mypy___gclogger___GcLoggerObject *self, void *closure);
static int
gclogger___GcLogger_set_gc_collected(mypy___gclogger___GcLoggerObject *self, PyObject *value, void *closure);
static PyObject *
gclogger___GcLogger_get_gc_uncollectable(mypy___gclogger___GcLoggerObject *self, void *closure);
static int
gclogger___GcLogger_set_gc_uncollectable(mypy___gclogger___GcLoggerObject *self, PyObject *value, void *closure);
static PyObject *
gclogger___GcLogger_get_start_time(mypy___gclogger___GcLoggerObject *self, void *closure);
static int
gclogger___GcLogger_set_start_time(mypy___gclogger___GcLoggerObject *self, PyObject *value, void *closure);

static PyGetSetDef gclogger___GcLogger_getseters[] = {
    {"gc_start_time",
     (getter)gclogger___GcLogger_get_gc_start_time, (setter)gclogger___GcLogger_set_gc_start_time,
     NULL, NULL},
    {"gc_time",
     (getter)gclogger___GcLogger_get_gc_time, (setter)gclogger___GcLogger_set_gc_time,
     NULL, NULL},
    {"gc_calls",
     (getter)gclogger___GcLogger_get_gc_calls, (setter)gclogger___GcLogger_set_gc_calls,
     NULL, NULL},
    {"gc_collected",
     (getter)gclogger___GcLogger_get_gc_collected, (setter)gclogger___GcLogger_set_gc_collected,
     NULL, NULL},
    {"gc_uncollectable",
     (getter)gclogger___GcLogger_get_gc_uncollectable, (setter)gclogger___GcLogger_set_gc_uncollectable,
     NULL, NULL},
    {"start_time",
     (getter)gclogger___GcLogger_get_start_time, (setter)gclogger___GcLogger_set_start_time,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef gclogger___GcLogger_methods[] = {
    {"__enter__",
     (PyCFunction)CPyPy_gclogger___GcLogger_____enter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"gc_callback",
     (PyCFunction)CPyPy_gclogger___GcLogger___gc_callback,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__exit__",
     (PyCFunction)CPyPy_gclogger___GcLogger_____exit__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_stats",
     (PyCFunction)CPyPy_gclogger___GcLogger___get_stats,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_gclogger___GcLogger_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "GcLogger",
    .tp_new = gclogger___GcLogger_new,
    .tp_dealloc = (destructor)gclogger___GcLogger_dealloc,
    .tp_traverse = (traverseproc)gclogger___GcLogger_traverse,
    .tp_clear = (inquiry)gclogger___GcLogger_clear,
    .tp_getset = gclogger___GcLogger_getseters,
    .tp_methods = gclogger___GcLogger_methods,
    .tp_basicsize = sizeof(mypy___gclogger___GcLoggerObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_gclogger___GcLogger_template = &CPyType_gclogger___GcLogger_template_;

static PyObject *
gclogger___GcLogger_setup(PyTypeObject *type)
{
    mypy___gclogger___GcLoggerObject *self;
    self = (mypy___gclogger___GcLoggerObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = gclogger___GcLogger_vtable;
    self->bitmap = 0;
    self->_gc_time = -113.0;
    self->_gc_calls = CPY_INT_TAG;
    self->_gc_collected = CPY_INT_TAG;
    self->_gc_uncollectable = CPY_INT_TAG;
    self->_start_time = -113.0;
    return (PyObject *)self;
}

PyObject *CPyDef_gclogger___GcLogger(void)
{
    PyObject *self = gclogger___GcLogger_setup(CPyType_gclogger___GcLogger);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
gclogger___GcLogger_get_gc_start_time(mypy___gclogger___GcLoggerObject *self, void *closure)
{
    if (unlikely(self->_gc_start_time == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'gc_start_time' of 'GcLogger' undefined");
        return NULL;
    }
    CPy_INCREF(self->_gc_start_time);
    PyObject *retval = self->_gc_start_time;
    return retval;
}

static int
gclogger___GcLogger_set_gc_start_time(mypy___gclogger___GcLoggerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GcLogger' object attribute 'gc_start_time' cannot be deleted");
        return -1;
    }
    if (self->_gc_start_time != NULL) {
        CPy_DECREF(self->_gc_start_time);
    }
    PyObject *tmp;
    if (CPyFloat_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2924;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2924;
    CPy_TypeError("float or None", value); 
    tmp = NULL;
__LL2924: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_gc_start_time = tmp;
    return 0;
}

static PyObject *
gclogger___GcLogger_get_gc_time(mypy___gclogger___GcLoggerObject *self, void *closure)
{
    if (unlikely(self->_gc_time == -113.0) && !(((mypy___gclogger___GcLoggerObject *)self)->bitmap & 1)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'gc_time' of 'GcLogger' undefined");
        return NULL;
    }
    PyObject *retval = PyFloat_FromDouble(self->_gc_time);
    return retval;
}

static int
gclogger___GcLogger_set_gc_time(mypy___gclogger___GcLoggerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GcLogger' object attribute 'gc_time' cannot be deleted");
        return -1;
    }
    double tmp;
    tmp = PyFloat_AsDouble(value);
    if (tmp == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", value); return -1;
    }
    self->_gc_time = tmp;
    if (unlikely(tmp == -113.0)) {
        ((mypy___gclogger___GcLoggerObject *)self)->bitmap |= 1;
    }
    return 0;
}

static PyObject *
gclogger___GcLogger_get_gc_calls(mypy___gclogger___GcLoggerObject *self, void *closure)
{
    if (unlikely(self->_gc_calls == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'gc_calls' of 'GcLogger' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_gc_calls);
    PyObject *retval = CPyTagged_StealAsObject(self->_gc_calls);
    return retval;
}

static int
gclogger___GcLogger_set_gc_calls(mypy___gclogger___GcLoggerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GcLogger' object attribute 'gc_calls' cannot be deleted");
        return -1;
    }
    if (self->_gc_calls != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_gc_calls);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_gc_calls = tmp;
    return 0;
}

static PyObject *
gclogger___GcLogger_get_gc_collected(mypy___gclogger___GcLoggerObject *self, void *closure)
{
    if (unlikely(self->_gc_collected == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'gc_collected' of 'GcLogger' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_gc_collected);
    PyObject *retval = CPyTagged_StealAsObject(self->_gc_collected);
    return retval;
}

static int
gclogger___GcLogger_set_gc_collected(mypy___gclogger___GcLoggerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GcLogger' object attribute 'gc_collected' cannot be deleted");
        return -1;
    }
    if (self->_gc_collected != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_gc_collected);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_gc_collected = tmp;
    return 0;
}

static PyObject *
gclogger___GcLogger_get_gc_uncollectable(mypy___gclogger___GcLoggerObject *self, void *closure)
{
    if (unlikely(self->_gc_uncollectable == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'gc_uncollectable' of 'GcLogger' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_gc_uncollectable);
    PyObject *retval = CPyTagged_StealAsObject(self->_gc_uncollectable);
    return retval;
}

static int
gclogger___GcLogger_set_gc_uncollectable(mypy___gclogger___GcLoggerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GcLogger' object attribute 'gc_uncollectable' cannot be deleted");
        return -1;
    }
    if (self->_gc_uncollectable != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_gc_uncollectable);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_gc_uncollectable = tmp;
    return 0;
}

static PyObject *
gclogger___GcLogger_get_start_time(mypy___gclogger___GcLoggerObject *self, void *closure)
{
    if (unlikely(self->_start_time == -113.0) && !(((mypy___gclogger___GcLoggerObject *)self)->bitmap & 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'start_time' of 'GcLogger' undefined");
        return NULL;
    }
    PyObject *retval = PyFloat_FromDouble(self->_start_time);
    return retval;
}

static int
gclogger___GcLogger_set_start_time(mypy___gclogger___GcLoggerObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'GcLogger' object attribute 'start_time' cannot be deleted");
        return -1;
    }
    double tmp;
    tmp = PyFloat_AsDouble(value);
    if (tmp == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", value); return -1;
    }
    self->_start_time = tmp;
    if (unlikely(tmp == -113.0)) {
        ((mypy___gclogger___GcLoggerObject *)self)->bitmap |= 2;
    }
    return 0;
}
static PyMethodDef gcloggermodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef gcloggermodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.gclogger",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    gcloggermodule_methods
};

PyObject *CPyInit_mypy___gclogger(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___gclogger_internal) {
        Py_INCREF(CPyModule_mypy___gclogger_internal);
        return CPyModule_mypy___gclogger_internal;
    }
    CPyModule_mypy___gclogger_internal = PyModule_Create(&gcloggermodule);
    if (unlikely(CPyModule_mypy___gclogger_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___gclogger_internal, "__name__");
    CPyStatic_gclogger___globals = PyModule_GetDict(CPyModule_mypy___gclogger_internal);
    if (unlikely(CPyStatic_gclogger___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_gclogger_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___gclogger_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___gclogger_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_gclogger___GcLogger);
    return NULL;
}

PyObject *CPyDef_gclogger___GcLogger_____enter__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    double cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    if (((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_start_time != NULL) {
        CPy_DECREF(((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_start_time);
    }
    ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_start_time = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/gclogger.py", "__enter__", 12, CPyStatic_gclogger___globals);
        goto CPyL15;
    }
    if (unlikely(0.0 == -113.0)) {
        ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->bitmap |= 1;
    }
    ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_time = 0.0;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/gclogger.py", "__enter__", 13, CPyStatic_gclogger___globals);
        goto CPyL15;
    }
    if (((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_calls != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_calls);
    }
    ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_calls = 0;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/gclogger.py", "__enter__", 14, CPyStatic_gclogger___globals);
        goto CPyL15;
    }
    if (((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_collected != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_collected);
    }
    ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_collected = 0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/gclogger.py", "__enter__", 15, CPyStatic_gclogger___globals);
        goto CPyL15;
    }
    if (((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_uncollectable != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_uncollectable);
    }
    ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_uncollectable = 0;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/gclogger.py", "__enter__", 16, CPyStatic_gclogger___globals);
        goto CPyL15;
    }
    cpy_r_r6 = CPyModule_gc;
    cpy_r_r7 = CPyStatics[2607]; /* 'callbacks' */
    cpy_r_r8 = CPyObject_GetAttr(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "__enter__", 17, CPyStatic_gclogger___globals);
        goto CPyL15;
    }
    if (likely(PyList_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/gclogger.py", "__enter__", 17, CPyStatic_gclogger___globals, "list", cpy_r_r8);
        goto CPyL15;
    }
    cpy_r_r10 = CPyStatics[2608]; /* 'gc_callback' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_self, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "__enter__", 17, CPyStatic_gclogger___globals);
        goto CPyL16;
    }
    cpy_r_r12 = PyList_Append(cpy_r_r9, cpy_r_r11);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/gclogger.py", "__enter__", 17, CPyStatic_gclogger___globals);
        goto CPyL15;
    }
    cpy_r_r14 = CPyModule_time;
    cpy_r_r15 = CPyStatics[147]; /* 'time' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "__enter__", 18, CPyStatic_gclogger___globals);
        goto CPyL15;
    }
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r16, 0, 0, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "__enter__", 18, CPyStatic_gclogger___globals);
        goto CPyL15;
    }
    cpy_r_r18 = PyFloat_AsDouble(cpy_r_r17);
    if (cpy_r_r18 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r17); cpy_r_r18 = -113.0;
    }
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 == -113.0;
    if (unlikely(cpy_r_r19)) goto CPyL13;
CPyL12: ;
    if (unlikely(cpy_r_r18 == -113.0)) {
        ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->bitmap |= 2;
    }
    ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_start_time = cpy_r_r18;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/gclogger.py", "__enter__", 18, CPyStatic_gclogger___globals);
        goto CPyL15;
    } else
        goto CPyL14;
CPyL13: ;
    cpy_r_r21 = PyErr_Occurred();
    if (unlikely(cpy_r_r21 != NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "__enter__", 18, CPyStatic_gclogger___globals);
        goto CPyL15;
    } else
        goto CPyL12;
CPyL14: ;
    CPy_INCREF(cpy_r_self);
    return cpy_r_self;
CPyL15: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL16: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL15;
}

PyObject *CPyPy_gclogger___GcLogger_____enter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__enter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_gclogger___GcLogger))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.gclogger.GcLogger", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_gclogger___GcLogger_____enter__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/gclogger.py", "__enter__", 11, CPyStatic_gclogger___globals);
    return NULL;
}

char CPyDef_gclogger___GcLogger___gc_callback(PyObject *cpy_r_self, PyObject *cpy_r_phase, PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    double cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    CPyTagged cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    double cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    double cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    double cpy_r_r45;
    char cpy_r_r46;
    double cpy_r_r47;
    double cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    CPyTagged cpy_r_r57;
    char cpy_r_r58;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyTagged cpy_r_r62;
    CPyTagged cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject **cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    CPyPtr cpy_r_r76;
    CPyPtr cpy_r_r77;
    CPyPtr cpy_r_r78;
    CPyPtr cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject **cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    cpy_r_r0 = CPyStatics[1402]; /* 'start' */
    cpy_r_r1 = PyUnicode_Compare(cpy_r_phase, cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 == -1;
    if (!cpy_r_r2) goto CPyL3;
    cpy_r_r3 = PyErr_Occurred();
    cpy_r_r4 = cpy_r_r3 != NULL;
    if (!cpy_r_r4) goto CPyL3;
    cpy_r_r5 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 22, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
CPyL3: ;
    cpy_r_r6 = cpy_r_r1 == 0;
    if (!cpy_r_r6) goto CPyL13;
    cpy_r_r7 = ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_start_time;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/gclogger.py", "gc_callback", "GcLogger", "gc_start_time", 23, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
CPyL5: ;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_r7 == cpy_r_r8;
    if (cpy_r_r9) goto CPyL8;
    PyErr_SetString(PyExc_AssertionError, "Start phase out of sequence");
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 23, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r11 = CPyModule_time;
    cpy_r_r12 = CPyStatics[147]; /* 'time' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 24, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r13, 0, 0, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 24, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
    cpy_r_r15 = PyFloat_AsDouble(cpy_r_r14);
    if (cpy_r_r15 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r14); cpy_r_r15 = -113.0;
    }
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 == -113.0;
    if (unlikely(cpy_r_r16)) goto CPyL12;
CPyL11: ;
    cpy_r_r17 = PyFloat_FromDouble(cpy_r_r15);
    if (((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_start_time != NULL) {
        CPy_DECREF(((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_start_time);
    }
    ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_start_time = cpy_r_r17;
    cpy_r_r18 = 1;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 24, CPyStatic_gclogger___globals);
        goto CPyL52;
    } else
        goto CPyL51;
CPyL12: ;
    cpy_r_r19 = PyErr_Occurred();
    if (unlikely(cpy_r_r19 != NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 24, CPyStatic_gclogger___globals);
        goto CPyL52;
    } else
        goto CPyL11;
CPyL13: ;
    cpy_r_r20 = CPyStatics[1707]; /* 'stop' */
    cpy_r_r21 = PyUnicode_Compare(cpy_r_phase, cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 == -1;
    if (!cpy_r_r22) goto CPyL16;
    cpy_r_r23 = PyErr_Occurred();
    cpy_r_r24 = cpy_r_r23 != NULL;
    if (!cpy_r_r24) goto CPyL16;
    cpy_r_r25 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 25, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
CPyL16: ;
    cpy_r_r26 = cpy_r_r21 == 0;
    if (!cpy_r_r26) goto CPyL42;
    cpy_r_r27 = ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_start_time;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("mypy/gclogger.py", "gc_callback", "GcLogger", "gc_start_time", 26, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
CPyL18: ;
    cpy_r_r28 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r29 = cpy_r_r27 != cpy_r_r28;
    if (cpy_r_r29) goto CPyL21;
    PyErr_SetString(PyExc_AssertionError, "Stop phase out of sequence");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 26, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r31 = ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_calls;
    if (unlikely(cpy_r_r31 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/gclogger.py", "gc_callback", "GcLogger", "gc_calls", 27, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
CPyL22: ;
    cpy_r_r32 = CPyTagged_Add(cpy_r_r31, 2);
    if (((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_calls != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_calls);
    }
    ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_calls = cpy_r_r32;
    cpy_r_r33 = 1;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 27, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
    cpy_r_r34 = ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_time;
    if (unlikely(cpy_r_r34 == -113.0) && !(((mypy___gclogger___GcLoggerObject *)cpy_r_self)->bitmap & 1)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'gc_time' of 'GcLogger' undefined");
    }
    cpy_r_r35 = cpy_r_r34 == -113.0;
    if (unlikely(cpy_r_r35)) goto CPyL25;
CPyL24: ;
    cpy_r_r36 = CPyModule_time;
    cpy_r_r37 = CPyStatics[147]; /* 'time' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 28, CPyStatic_gclogger___globals);
        goto CPyL52;
    } else
        goto CPyL26;
CPyL25: ;
    cpy_r_r39 = PyErr_Occurred();
    if (unlikely(cpy_r_r39 != NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 28, CPyStatic_gclogger___globals);
        goto CPyL52;
    } else
        goto CPyL24;
CPyL26: ;
    cpy_r_r40 = _PyObject_Vectorcall(cpy_r_r38, 0, 0, 0);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 28, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
    cpy_r_r41 = PyFloat_AsDouble(cpy_r_r40);
    if (cpy_r_r41 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r40); cpy_r_r41 = -113.0;
    }
    CPy_DECREF(cpy_r_r40);
    cpy_r_r42 = cpy_r_r41 == -113.0;
    if (unlikely(cpy_r_r42)) goto CPyL29;
CPyL28: ;
    cpy_r_r43 = ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_start_time;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypy/gclogger.py", "gc_callback", "GcLogger", "gc_start_time", 28, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r43);
    goto CPyL30;
CPyL29: ;
    cpy_r_r44 = PyErr_Occurred();
    if (unlikely(cpy_r_r44 != NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 28, CPyStatic_gclogger___globals);
        goto CPyL52;
    } else
        goto CPyL28;
CPyL30: ;
    cpy_r_r45 = PyFloat_AsDouble(cpy_r_r43);
    if (cpy_r_r45 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r43); cpy_r_r45 = -113.0;
    }
    CPy_DECREF(cpy_r_r43);
    cpy_r_r46 = cpy_r_r45 == -113.0;
    if (unlikely(cpy_r_r46)) goto CPyL32;
CPyL31: ;
    cpy_r_r47 = cpy_r_r41 - cpy_r_r45;
    cpy_r_r48 = cpy_r_r34 + cpy_r_r47;
    if (unlikely(cpy_r_r48 == -113.0)) {
        ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->bitmap |= 1;
    }
    ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_time = cpy_r_r48;
    cpy_r_r49 = 1;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 28, CPyStatic_gclogger___globals);
        goto CPyL52;
    } else
        goto CPyL33;
CPyL32: ;
    cpy_r_r50 = PyErr_Occurred();
    if (unlikely(cpy_r_r50 != NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 28, CPyStatic_gclogger___globals);
        goto CPyL52;
    } else
        goto CPyL31;
CPyL33: ;
    cpy_r_r51 = Py_None;
    CPy_INCREF(cpy_r_r51);
    if (((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_start_time != NULL) {
        CPy_DECREF(((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_start_time);
    }
    ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_start_time = cpy_r_r51;
    cpy_r_r52 = 1;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 29, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
    cpy_r_r53 = ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_collected;
    if (unlikely(cpy_r_r53 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/gclogger.py", "gc_callback", "GcLogger", "gc_collected", 30, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
    CPyTagged_INCREF(cpy_r_r53);
CPyL35: ;
    cpy_r_r54 = CPyStatics[2609]; /* 'collected' */
    cpy_r_r55 = PyObject_GetItem(cpy_r_info, cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 30, CPyStatic_gclogger___globals);
        goto CPyL53;
    }
    if (likely(PyLong_Check(cpy_r_r55)))
        cpy_r_r56 = CPyTagged_FromObject(cpy_r_r55);
    else {
        CPy_TypeError("int", cpy_r_r55); cpy_r_r56 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 30, CPyStatic_gclogger___globals);
        goto CPyL53;
    }
    cpy_r_r57 = CPyTagged_Add(cpy_r_r53, cpy_r_r56);
    CPyTagged_DECREF(cpy_r_r53);
    CPyTagged_DECREF(cpy_r_r56);
    if (((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_collected != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_collected);
    }
    ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_collected = cpy_r_r57;
    cpy_r_r58 = 1;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 30, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
    cpy_r_r59 = ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_uncollectable;
    if (unlikely(cpy_r_r59 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/gclogger.py", "gc_callback", "GcLogger", "gc_uncollectable", 31, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
    CPyTagged_INCREF(cpy_r_r59);
CPyL39: ;
    cpy_r_r60 = CPyStatics[2610]; /* 'uncollectable' */
    cpy_r_r61 = PyObject_GetItem(cpy_r_info, cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 31, CPyStatic_gclogger___globals);
        goto CPyL54;
    }
    if (likely(PyLong_Check(cpy_r_r61)))
        cpy_r_r62 = CPyTagged_FromObject(cpy_r_r61);
    else {
        CPy_TypeError("int", cpy_r_r61); cpy_r_r62 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 31, CPyStatic_gclogger___globals);
        goto CPyL54;
    }
    cpy_r_r63 = CPyTagged_Add(cpy_r_r59, cpy_r_r62);
    CPyTagged_DECREF(cpy_r_r59);
    CPyTagged_DECREF(cpy_r_r62);
    if (((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_uncollectable != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_uncollectable);
    }
    ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_uncollectable = cpy_r_r63;
    cpy_r_r64 = 1;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 31, CPyStatic_gclogger___globals);
        goto CPyL52;
    } else
        goto CPyL51;
CPyL42: ;
    if (0) goto CPyL51;
    cpy_r_r65 = CPyStatics[163]; /* '' */
    cpy_r_r66 = CPyStatics[2611]; /* 'Unrecognized gc phase (' */
    cpy_r_r67 = CPyStatics[353]; /* '{!r:{}}' */
    cpy_r_r68 = CPyStatics[163]; /* '' */
    cpy_r_r69 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r70[3] = {cpy_r_r67, cpy_r_phase, cpy_r_r68};
    cpy_r_r71 = (PyObject **)&cpy_r_r70;
    cpy_r_r72 = PyObject_VectorcallMethod(cpy_r_r69, cpy_r_r71, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 33, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
    if (likely(PyUnicode_Check(cpy_r_r72)))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/gclogger.py", "gc_callback", 33, CPyStatic_gclogger___globals, "str", cpy_r_r72);
        goto CPyL52;
    }
    cpy_r_r74 = CPyStatics[72]; /* ')' */
    cpy_r_r75 = PyList_New(3);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 33, CPyStatic_gclogger___globals);
        goto CPyL55;
    }
    cpy_r_r76 = (CPyPtr)&((PyListObject *)cpy_r_r75)->ob_item;
    cpy_r_r77 = *(CPyPtr *)cpy_r_r76;
    CPy_INCREF(cpy_r_r66);
    *(PyObject * *)cpy_r_r77 = cpy_r_r66;
    cpy_r_r78 = cpy_r_r77 + 8;
    *(PyObject * *)cpy_r_r78 = cpy_r_r73;
    cpy_r_r79 = cpy_r_r77 + 16;
    CPy_INCREF(cpy_r_r74);
    *(PyObject * *)cpy_r_r79 = cpy_r_r74;
    cpy_r_r80 = PyUnicode_Join(cpy_r_r65, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 33, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
    cpy_r_r81 = CPyModule_builtins;
    cpy_r_r82 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r83 = CPyObject_GetAttr(cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 33, CPyStatic_gclogger___globals);
        goto CPyL56;
    }
    PyObject *cpy_r_r84[1] = {cpy_r_r80};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = _PyObject_Vectorcall(cpy_r_r83, cpy_r_r85, 1, 0);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 33, CPyStatic_gclogger___globals);
        goto CPyL56;
    }
    CPy_DECREF(cpy_r_r80);
    CPy_Raise(cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 33, CPyStatic_gclogger___globals);
        goto CPyL52;
    }
    CPy_Unreachable();
CPyL51: ;
    return 1;
CPyL52: ;
    cpy_r_r87 = 2;
    return cpy_r_r87;
CPyL53: ;
    CPyTagged_DecRef(cpy_r_r53);
    goto CPyL52;
CPyL54: ;
    CPyTagged_DecRef(cpy_r_r59);
    goto CPyL52;
CPyL55: ;
    CPy_DecRef(cpy_r_r73);
    goto CPyL52;
CPyL56: ;
    CPy_DecRef(cpy_r_r80);
    goto CPyL52;
}

PyObject *CPyPy_gclogger___GcLogger___gc_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"phase", "info", 0};
    static CPyArg_Parser parser = {"OO:gc_callback", kwlist, 0};
    PyObject *obj_phase;
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_phase, &obj_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_gclogger___GcLogger))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.gclogger.GcLogger", obj_self); 
        goto fail;
    }
    PyObject *arg_phase;
    if (likely(PyUnicode_Check(obj_phase)))
        arg_phase = obj_phase;
    else {
        CPy_TypeError("str", obj_phase); 
        goto fail;
    }
    PyObject *arg_info = obj_info;
    char retval = CPyDef_gclogger___GcLogger___gc_callback(arg_self, arg_phase, arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/gclogger.py", "gc_callback", 21, CPyStatic_gclogger___globals);
    return NULL;
}

char CPyDef_gclogger___GcLogger_____exit__(PyObject *cpy_r_self, PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
CPyL1: ;
    cpy_r_r0 = CPyStatics[2608]; /* 'gc_callback' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_self, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "__exit__", 36, CPyStatic_gclogger___globals);
        goto CPyL11;
    }
    cpy_r_r2 = CPyModule_gc;
    cpy_r_r3 = CPyStatics[2607]; /* 'callbacks' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "__exit__", 36, CPyStatic_gclogger___globals);
        goto CPyL12;
    }
    if (likely(PyList_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/gclogger.py", "__exit__", 36, CPyStatic_gclogger___globals, "list", cpy_r_r4);
        goto CPyL12;
    }
    cpy_r_r6 = PySequence_Contains(cpy_r_r5, cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/gclogger.py", "__exit__", 36, CPyStatic_gclogger___globals);
        goto CPyL11;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL10;
    cpy_r_r9 = CPyModule_gc;
    cpy_r_r10 = CPyStatics[2607]; /* 'callbacks' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "__exit__", 37, CPyStatic_gclogger___globals);
        goto CPyL11;
    }
    if (likely(PyList_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/gclogger.py", "__exit__", 37, CPyStatic_gclogger___globals, "list", cpy_r_r11);
        goto CPyL11;
    }
    cpy_r_r13 = CPyStatics[2608]; /* 'gc_callback' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_self, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "__exit__", 37, CPyStatic_gclogger___globals);
        goto CPyL13;
    }
    cpy_r_r15 = CPyList_Remove(cpy_r_r12, cpy_r_r14);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/gclogger.py", "__exit__", 37, CPyStatic_gclogger___globals);
        goto CPyL11;
    } else
        goto CPyL1;
CPyL10: ;
    return 1;
CPyL11: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL11;
}

PyObject *CPyPy_gclogger___GcLogger_____exit__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {"%:__exit__", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_args, NULL)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_gclogger___GcLogger))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.gclogger.GcLogger", obj_self); 
        goto fail;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_gclogger___GcLogger_____exit__(arg_self, arg_args);
    CPy_DECREF(obj_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_DECREF(obj_args);
    CPy_AddTraceback("mypy/gclogger.py", "__exit__", 35, CPyStatic_gclogger___globals);
    return NULL;
}

PyObject *CPyDef_gclogger___GcLogger___get_stats(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    double cpy_r_r4;
    char cpy_r_r5;
    double cpy_r_end_time;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_result;
    double cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    CPyTagged cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    double cpy_r_r30;
    char cpy_r_r31;
    double cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    cpy_r_r0 = CPyModule_time;
    cpy_r_r1 = CPyStatics[147]; /* 'time' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "get_stats", 40, CPyStatic_gclogger___globals);
        goto CPyL18;
    }
    cpy_r_r3 = _PyObject_Vectorcall(cpy_r_r2, 0, 0, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "get_stats", 40, CPyStatic_gclogger___globals);
        goto CPyL18;
    }
    cpy_r_r4 = PyFloat_AsDouble(cpy_r_r3);
    if (cpy_r_r4 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r3); cpy_r_r4 = -113.0;
    }
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 == -113.0;
    if (unlikely(cpy_r_r5)) goto CPyL4;
CPyL3: ;
    cpy_r_end_time = cpy_r_r4;
    cpy_r_r6 = PyDict_New();
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "get_stats", 41, CPyStatic_gclogger___globals);
        goto CPyL18;
    } else
        goto CPyL5;
CPyL4: ;
    cpy_r_r7 = PyErr_Occurred();
    if (unlikely(cpy_r_r7 != NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "get_stats", 40, CPyStatic_gclogger___globals);
        goto CPyL18;
    } else
        goto CPyL3;
CPyL5: ;
    cpy_r_result = cpy_r_r6;
    cpy_r_r8 = ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_time;
    if (unlikely(cpy_r_r8 == -113.0) && !(((mypy___gclogger___GcLoggerObject *)cpy_r_self)->bitmap & 1)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'gc_time' of 'GcLogger' undefined");
    }
    cpy_r_r9 = cpy_r_r8 == -113.0;
    if (unlikely(cpy_r_r9)) goto CPyL7;
CPyL6: ;
    cpy_r_r10 = CPyStatics[2612]; /* 'gc_time' */
    cpy_r_r11 = PyFloat_FromDouble(cpy_r_r8);
    cpy_r_r12 = CPyDict_SetItem(cpy_r_result, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/gclogger.py", "get_stats", 42, CPyStatic_gclogger___globals);
        goto CPyL19;
    } else
        goto CPyL8;
CPyL7: ;
    cpy_r_r14 = PyErr_Occurred();
    if (unlikely(cpy_r_r14 != NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "get_stats", 42, CPyStatic_gclogger___globals);
        goto CPyL19;
    } else
        goto CPyL6;
CPyL8: ;
    cpy_r_r15 = ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_calls;
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/gclogger.py", "get_stats", "GcLogger", "gc_calls", 43, CPyStatic_gclogger___globals);
        goto CPyL19;
    }
    CPyTagged_INCREF(cpy_r_r15);
CPyL9: ;
    cpy_r_r16 = CPyStatics[2613]; /* 'gc_calls' */
    cpy_r_r17 = CPyTagged_StealAsObject(cpy_r_r15);
    cpy_r_r18 = CPyDict_SetItem(cpy_r_result, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/gclogger.py", "get_stats", 43, CPyStatic_gclogger___globals);
        goto CPyL19;
    }
    cpy_r_r20 = ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_collected;
    if (unlikely(cpy_r_r20 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/gclogger.py", "get_stats", "GcLogger", "gc_collected", 44, CPyStatic_gclogger___globals);
        goto CPyL19;
    }
    CPyTagged_INCREF(cpy_r_r20);
CPyL11: ;
    cpy_r_r21 = CPyStatics[2614]; /* 'gc_collected' */
    cpy_r_r22 = CPyTagged_StealAsObject(cpy_r_r20);
    cpy_r_r23 = CPyDict_SetItem(cpy_r_result, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/gclogger.py", "get_stats", 44, CPyStatic_gclogger___globals);
        goto CPyL19;
    }
    cpy_r_r25 = ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_gc_uncollectable;
    if (unlikely(cpy_r_r25 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/gclogger.py", "get_stats", "GcLogger", "gc_uncollectable", 45, CPyStatic_gclogger___globals);
        goto CPyL19;
    }
    CPyTagged_INCREF(cpy_r_r25);
CPyL13: ;
    cpy_r_r26 = CPyStatics[2615]; /* 'gc_uncollectable' */
    cpy_r_r27 = CPyTagged_StealAsObject(cpy_r_r25);
    cpy_r_r28 = CPyDict_SetItem(cpy_r_result, cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28 >= 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/gclogger.py", "get_stats", 45, CPyStatic_gclogger___globals);
        goto CPyL19;
    }
    cpy_r_r30 = ((mypy___gclogger___GcLoggerObject *)cpy_r_self)->_start_time;
    if (unlikely(cpy_r_r30 == -113.0) && !(((mypy___gclogger___GcLoggerObject *)cpy_r_self)->bitmap & 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'start_time' of 'GcLogger' undefined");
    }
    cpy_r_r31 = cpy_r_r30 == -113.0;
    if (unlikely(cpy_r_r31)) goto CPyL16;
CPyL15: ;
    cpy_r_r32 = cpy_r_end_time - cpy_r_r30;
    cpy_r_r33 = CPyStatics[1958]; /* 'build_time' */
    cpy_r_r34 = PyFloat_FromDouble(cpy_r_r32);
    cpy_r_r35 = CPyDict_SetItem(cpy_r_result, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/gclogger.py", "get_stats", 46, CPyStatic_gclogger___globals);
        goto CPyL19;
    } else
        goto CPyL17;
CPyL16: ;
    cpy_r_r37 = PyErr_Occurred();
    if (unlikely(cpy_r_r37 != NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "get_stats", 46, CPyStatic_gclogger___globals);
        goto CPyL19;
    } else
        goto CPyL15;
CPyL17: ;
    return cpy_r_result;
CPyL18: ;
    cpy_r_r38 = NULL;
    return cpy_r_r38;
CPyL19: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL18;
}

PyObject *CPyPy_gclogger___GcLogger___get_stats(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_stats", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_gclogger___GcLogger))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.gclogger.GcLogger", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_gclogger___GcLogger___get_stats(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/gclogger.py", "get_stats", 39, CPyStatic_gclogger___globals);
    return NULL;
}

char CPyDef_gclogger_____top_level__(void) {
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
    void *cpy_r_r12;
    void *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
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
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "<module>", -1, CPyStatic_gclogger___globals);
        goto CPyL12;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_gclogger___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "<module>", 1, CPyStatic_gclogger___globals);
        goto CPyL12;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_gc;
    cpy_r_r10 = (PyObject **)&CPyModule_time;
    PyObject **cpy_r_r11[2] = {cpy_r_r9, cpy_r_r10};
    cpy_r_r12 = (void *)&cpy_r_r11;
    int64_t cpy_r_r13[2] = {3, 4};
    cpy_r_r14 = (void *)&cpy_r_r13;
    cpy_r_r15 = CPyStatics[9415]; /* (('gc', 'gc', 'gc'), ('time', 'time', 'time')) */
    cpy_r_r16 = CPyStatic_gclogger___globals;
    cpy_r_r17 = CPyStatics[2616]; /* 'mypy/gclogger.py' */
    cpy_r_r18 = CPyStatics[17]; /* '<module>' */
    cpy_r_r19 = CPyImport_ImportMany(cpy_r_r15, cpy_r_r12, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r14);
    if (!cpy_r_r19) goto CPyL12;
    cpy_r_r20 = CPyStatics[9416]; /* ('Mapping',) */
    cpy_r_r21 = CPyStatics[21]; /* 'typing' */
    cpy_r_r22 = CPyStatic_gclogger___globals;
    cpy_r_r23 = CPyImport_ImportFromMany(cpy_r_r21, cpy_r_r20, cpy_r_r20, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "<module>", 5, CPyStatic_gclogger___globals);
        goto CPyL12;
    }
    CPyModule_typing = cpy_r_r23;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyStatics[2617]; /* 'mypy.gclogger' */
    cpy_r_r26 = (PyObject *)CPyType_gclogger___GcLogger_template;
    cpy_r_r27 = CPyType_FromTemplate(cpy_r_r26, cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "<module>", 8, CPyStatic_gclogger___globals);
        goto CPyL12;
    }
    cpy_r_r28 = CPyDef_gclogger___GcLogger_trait_vtable_setup();
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypy/gclogger.py", "<module>", -1, CPyStatic_gclogger___globals);
        goto CPyL13;
    }
    cpy_r_r29 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r30 = CPyStatics[2618]; /* 'gc_start_time' */
    cpy_r_r31 = CPyStatics[2612]; /* 'gc_time' */
    cpy_r_r32 = CPyStatics[2613]; /* 'gc_calls' */
    cpy_r_r33 = CPyStatics[2614]; /* 'gc_collected' */
    cpy_r_r34 = CPyStatics[2615]; /* 'gc_uncollectable' */
    cpy_r_r35 = CPyStatics[630]; /* 'start_time' */
    cpy_r_r36 = PyTuple_Pack(6, cpy_r_r30, cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/gclogger.py", "<module>", 8, CPyStatic_gclogger___globals);
        goto CPyL13;
    }
    cpy_r_r37 = PyObject_SetAttr(cpy_r_r27, cpy_r_r29, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/gclogger.py", "<module>", 8, CPyStatic_gclogger___globals);
        goto CPyL13;
    }
    CPyType_gclogger___GcLogger = (PyTypeObject *)cpy_r_r27;
    CPy_INCREF(CPyType_gclogger___GcLogger);
    cpy_r_r39 = CPyStatic_gclogger___globals;
    cpy_r_r40 = CPyStatics[2619]; /* 'GcLogger' */
    cpy_r_r41 = CPyDict_SetItem(cpy_r_r39, cpy_r_r40, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/gclogger.py", "<module>", 8, CPyStatic_gclogger___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r43 = 2;
    return cpy_r_r43;
CPyL13: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL12;
}
