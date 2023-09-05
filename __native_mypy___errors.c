#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
mypy___errors___ErrorInfo_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *mypy___errors___ErrorInfo_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___errors___ErrorInfo(PyObject *cpy_r_import_ctx, PyObject *cpy_r_file, PyObject *cpy_r_module, PyObject *cpy_r_typ, PyObject *cpy_r_function_or_member, CPyTagged cpy_r_line, CPyTagged cpy_r_column, CPyTagged cpy_r_end_line, CPyTagged cpy_r_end_column, PyObject *cpy_r_severity, PyObject *cpy_r_message, PyObject *cpy_r_code, char cpy_r_blocker, char cpy_r_only_once, char cpy_r_allow_dups, PyObject *cpy_r_origin, PyObject *cpy_r_target, CPyTagged cpy_r_priority);

static PyObject *
mypy___errors___ErrorInfo_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___errors___ErrorInfo) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = mypy___errors___ErrorInfo_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_mypy___errors___ErrorInfo_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
mypy___errors___ErrorInfo_traverse(mypy___errors___ErrorInfoObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_import_ctx);
    Py_VISIT(self->_file);
    Py_VISIT(self->_module);
    Py_VISIT(self->_type);
    Py_VISIT(self->_function_or_member);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    if (CPyTagged_CheckLong(self->_column)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_column));
    }
    if (CPyTagged_CheckLong(self->_end_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_end_line));
    }
    if (CPyTagged_CheckLong(self->_end_column)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_end_column));
    }
    Py_VISIT(self->_severity);
    Py_VISIT(self->_message);
    Py_VISIT(self->_code);
    Py_VISIT(self->_origin.f0);
    Py_VISIT(self->_origin.f1);
    Py_VISIT(self->_target);
    if (CPyTagged_CheckLong(self->_priority)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_priority));
    }
    return 0;
}

static int
mypy___errors___ErrorInfo_clear(mypy___errors___ErrorInfoObject *self)
{
    Py_CLEAR(self->_import_ctx);
    Py_CLEAR(self->_file);
    Py_CLEAR(self->_module);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_function_or_member);
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
    if (CPyTagged_CheckLong(self->_end_line)) {
        CPyTagged __tmp = self->_end_line;
        self->_end_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_end_column)) {
        CPyTagged __tmp = self->_end_column;
        self->_end_column = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_severity);
    Py_CLEAR(self->_message);
    Py_CLEAR(self->_code);
    Py_CLEAR(self->_origin.f0);
    Py_CLEAR(self->_origin.f1);
    Py_CLEAR(self->_target);
    if (CPyTagged_CheckLong(self->_priority)) {
        CPyTagged __tmp = self->_priority;
        self->_priority = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
mypy___errors___ErrorInfo_dealloc(mypy___errors___ErrorInfoObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___errors___ErrorInfo_dealloc)
    mypy___errors___ErrorInfo_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___errors___ErrorInfo_vtable[2];
static bool
CPyDef_mypy___errors___ErrorInfo_trait_vtable_setup(void)
{
    CPyVTableItem mypy___errors___ErrorInfo_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___errors___ErrorInfo_____init__,
        (CPyVTableItem)CPyDef_mypy___errors___ErrorInfo_____mypyc_defaults_setup,
    };
    memcpy(mypy___errors___ErrorInfo_vtable, mypy___errors___ErrorInfo_vtable_scratch, sizeof(mypy___errors___ErrorInfo_vtable));
    return 1;
}

static PyObject *
mypy___errors___ErrorInfo_get_import_ctx(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_import_ctx(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_file(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_file(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_module(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_module(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_type(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_type(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_function_or_member(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_function_or_member(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_line(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_line(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_column(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_column(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_end_line(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_end_line(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_end_column(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_end_column(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_severity(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_severity(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_message(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_message(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_code(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_code(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_blocker(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_blocker(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_only_once(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_only_once(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_allow_dups(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_allow_dups(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_origin(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_origin(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_target(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_target(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_hidden(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_hidden(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorInfo_get_priority(mypy___errors___ErrorInfoObject *self, void *closure);
static int
mypy___errors___ErrorInfo_set_priority(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure);

static PyGetSetDef mypy___errors___ErrorInfo_getseters[] = {
    {"import_ctx",
     (getter)mypy___errors___ErrorInfo_get_import_ctx, (setter)mypy___errors___ErrorInfo_set_import_ctx,
     NULL, NULL},
    {"file",
     (getter)mypy___errors___ErrorInfo_get_file, (setter)mypy___errors___ErrorInfo_set_file,
     NULL, NULL},
    {"module",
     (getter)mypy___errors___ErrorInfo_get_module, (setter)mypy___errors___ErrorInfo_set_module,
     NULL, NULL},
    {"type",
     (getter)mypy___errors___ErrorInfo_get_type, (setter)mypy___errors___ErrorInfo_set_type,
     NULL, NULL},
    {"function_or_member",
     (getter)mypy___errors___ErrorInfo_get_function_or_member, (setter)mypy___errors___ErrorInfo_set_function_or_member,
     NULL, NULL},
    {"line",
     (getter)mypy___errors___ErrorInfo_get_line, (setter)mypy___errors___ErrorInfo_set_line,
     NULL, NULL},
    {"column",
     (getter)mypy___errors___ErrorInfo_get_column, (setter)mypy___errors___ErrorInfo_set_column,
     NULL, NULL},
    {"end_line",
     (getter)mypy___errors___ErrorInfo_get_end_line, (setter)mypy___errors___ErrorInfo_set_end_line,
     NULL, NULL},
    {"end_column",
     (getter)mypy___errors___ErrorInfo_get_end_column, (setter)mypy___errors___ErrorInfo_set_end_column,
     NULL, NULL},
    {"severity",
     (getter)mypy___errors___ErrorInfo_get_severity, (setter)mypy___errors___ErrorInfo_set_severity,
     NULL, NULL},
    {"message",
     (getter)mypy___errors___ErrorInfo_get_message, (setter)mypy___errors___ErrorInfo_set_message,
     NULL, NULL},
    {"code",
     (getter)mypy___errors___ErrorInfo_get_code, (setter)mypy___errors___ErrorInfo_set_code,
     NULL, NULL},
    {"blocker",
     (getter)mypy___errors___ErrorInfo_get_blocker, (setter)mypy___errors___ErrorInfo_set_blocker,
     NULL, NULL},
    {"only_once",
     (getter)mypy___errors___ErrorInfo_get_only_once, (setter)mypy___errors___ErrorInfo_set_only_once,
     NULL, NULL},
    {"allow_dups",
     (getter)mypy___errors___ErrorInfo_get_allow_dups, (setter)mypy___errors___ErrorInfo_set_allow_dups,
     NULL, NULL},
    {"origin",
     (getter)mypy___errors___ErrorInfo_get_origin, (setter)mypy___errors___ErrorInfo_set_origin,
     NULL, NULL},
    {"target",
     (getter)mypy___errors___ErrorInfo_get_target, (setter)mypy___errors___ErrorInfo_set_target,
     NULL, NULL},
    {"hidden",
     (getter)mypy___errors___ErrorInfo_get_hidden, (setter)mypy___errors___ErrorInfo_set_hidden,
     NULL, NULL},
    {"priority",
     (getter)mypy___errors___ErrorInfo_get_priority, (setter)mypy___errors___ErrorInfo_set_priority,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef mypy___errors___ErrorInfo_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_mypy___errors___ErrorInfo_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_mypy___errors___ErrorInfo_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___errors___ErrorInfo_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ErrorInfo",
    .tp_new = mypy___errors___ErrorInfo_new,
    .tp_dealloc = (destructor)mypy___errors___ErrorInfo_dealloc,
    .tp_traverse = (traverseproc)mypy___errors___ErrorInfo_traverse,
    .tp_clear = (inquiry)mypy___errors___ErrorInfo_clear,
    .tp_getset = mypy___errors___ErrorInfo_getseters,
    .tp_methods = mypy___errors___ErrorInfo_methods,
    .tp_init = mypy___errors___ErrorInfo_init,
    .tp_basicsize = sizeof(mypy___errors___ErrorInfoObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypy___errors___ErrorInfo_template = &CPyType_mypy___errors___ErrorInfo_template_;

static PyObject *
mypy___errors___ErrorInfo_setup(PyTypeObject *type)
{
    mypy___errors___ErrorInfoObject *self;
    self = (mypy___errors___ErrorInfoObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___errors___ErrorInfo_vtable;
    self->_line = CPY_INT_TAG;
    self->_column = CPY_INT_TAG;
    self->_end_line = CPY_INT_TAG;
    self->_end_column = CPY_INT_TAG;
    self->_blocker = 2;
    self->_only_once = 2;
    self->_allow_dups = 2;
    self->_origin = (tuple_T2OO) { NULL, NULL };
    self->_hidden = 2;
    self->_priority = CPY_INT_TAG;
    if (CPyDef_mypy___errors___ErrorInfo_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___errors___ErrorInfo(PyObject *cpy_r_import_ctx, PyObject *cpy_r_file, PyObject *cpy_r_module, PyObject *cpy_r_typ, PyObject *cpy_r_function_or_member, CPyTagged cpy_r_line, CPyTagged cpy_r_column, CPyTagged cpy_r_end_line, CPyTagged cpy_r_end_column, PyObject *cpy_r_severity, PyObject *cpy_r_message, PyObject *cpy_r_code, char cpy_r_blocker, char cpy_r_only_once, char cpy_r_allow_dups, PyObject *cpy_r_origin, PyObject *cpy_r_target, CPyTagged cpy_r_priority)
{
    PyObject *self = mypy___errors___ErrorInfo_setup(CPyType_mypy___errors___ErrorInfo);
    if (self == NULL)
        return NULL;
    char res = CPyDef_mypy___errors___ErrorInfo_____init__(self, cpy_r_import_ctx, cpy_r_file, cpy_r_module, cpy_r_typ, cpy_r_function_or_member, cpy_r_line, cpy_r_column, cpy_r_end_line, cpy_r_end_column, cpy_r_severity, cpy_r_message, cpy_r_code, cpy_r_blocker, cpy_r_only_once, cpy_r_allow_dups, cpy_r_origin, cpy_r_target, cpy_r_priority);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
mypy___errors___ErrorInfo_get_import_ctx(mypy___errors___ErrorInfoObject *self, void *closure)
{
    if (unlikely(self->_import_ctx == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'import_ctx' of 'ErrorInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_import_ctx);
    PyObject *retval = self->_import_ctx;
    return retval;
}

static int
mypy___errors___ErrorInfo_set_import_ctx(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'import_ctx' cannot be deleted");
        return -1;
    }
    if (self->_import_ctx != NULL) {
        CPy_DECREF(self->_import_ctx);
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
    self->_import_ctx = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorInfo_get_file(mypy___errors___ErrorInfoObject *self, void *closure)
{
    if (unlikely(self->_file == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'file' of 'ErrorInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_file);
    PyObject *retval = self->_file;
    return retval;
}

static int
mypy___errors___ErrorInfo_set_file(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'file' cannot be deleted");
        return -1;
    }
    if (self->_file != NULL) {
        CPy_DECREF(self->_file);
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
    self->_file = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorInfo_get_module(mypy___errors___ErrorInfoObject *self, void *closure)
{
    if (unlikely(self->_module == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'module' of 'ErrorInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_module);
    PyObject *retval = self->_module;
    return retval;
}

static int
mypy___errors___ErrorInfo_set_module(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'module' cannot be deleted");
        return -1;
    }
    if (self->_module != NULL) {
        CPy_DECREF(self->_module);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2033;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2033;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL2033: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_module = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorInfo_get_type(mypy___errors___ErrorInfoObject *self, void *closure)
{
    if (unlikely(self->_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'type' of 'ErrorInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_type);
    PyObject *retval = self->_type;
    return retval;
}

static int
mypy___errors___ErrorInfo_set_type(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'type' cannot be deleted");
        return -1;
    }
    if (self->_type != NULL) {
        CPy_DECREF(self->_type);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2034;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2034;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL2034: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_type = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorInfo_get_function_or_member(mypy___errors___ErrorInfoObject *self, void *closure)
{
    if (unlikely(self->_function_or_member == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'function_or_member' of 'ErrorInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_function_or_member);
    PyObject *retval = self->_function_or_member;
    return retval;
}

static int
mypy___errors___ErrorInfo_set_function_or_member(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'function_or_member' cannot be deleted");
        return -1;
    }
    if (self->_function_or_member != NULL) {
        CPy_DECREF(self->_function_or_member);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2035;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2035;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL2035: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_function_or_member = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorInfo_get_line(mypy___errors___ErrorInfoObject *self, void *closure)
{
    if (unlikely(self->_line == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'line' of 'ErrorInfo' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_line);
    PyObject *retval = CPyTagged_StealAsObject(self->_line);
    return retval;
}

static int
mypy___errors___ErrorInfo_set_line(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'line' cannot be deleted");
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
mypy___errors___ErrorInfo_get_column(mypy___errors___ErrorInfoObject *self, void *closure)
{
    if (unlikely(self->_column == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'column' of 'ErrorInfo' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_column);
    PyObject *retval = CPyTagged_StealAsObject(self->_column);
    return retval;
}

static int
mypy___errors___ErrorInfo_set_column(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'column' cannot be deleted");
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
mypy___errors___ErrorInfo_get_end_line(mypy___errors___ErrorInfoObject *self, void *closure)
{
    if (unlikely(self->_end_line == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'end_line' of 'ErrorInfo' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_end_line);
    PyObject *retval = CPyTagged_StealAsObject(self->_end_line);
    return retval;
}

static int
mypy___errors___ErrorInfo_set_end_line(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'end_line' cannot be deleted");
        return -1;
    }
    if (self->_end_line != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_end_line);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_end_line = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorInfo_get_end_column(mypy___errors___ErrorInfoObject *self, void *closure)
{
    if (unlikely(self->_end_column == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'end_column' of 'ErrorInfo' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_end_column);
    PyObject *retval = CPyTagged_StealAsObject(self->_end_column);
    return retval;
}

static int
mypy___errors___ErrorInfo_set_end_column(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'end_column' cannot be deleted");
        return -1;
    }
    if (self->_end_column != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_end_column);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_end_column = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorInfo_get_severity(mypy___errors___ErrorInfoObject *self, void *closure)
{
    if (unlikely(self->_severity == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'severity' of 'ErrorInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_severity);
    PyObject *retval = self->_severity;
    return retval;
}

static int
mypy___errors___ErrorInfo_set_severity(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'severity' cannot be deleted");
        return -1;
    }
    if (self->_severity != NULL) {
        CPy_DECREF(self->_severity);
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
    self->_severity = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorInfo_get_message(mypy___errors___ErrorInfoObject *self, void *closure)
{
    if (unlikely(self->_message == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'message' of 'ErrorInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_message);
    PyObject *retval = self->_message;
    return retval;
}

static int
mypy___errors___ErrorInfo_set_message(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'message' cannot be deleted");
        return -1;
    }
    if (self->_message != NULL) {
        CPy_DECREF(self->_message);
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
    self->_message = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorInfo_get_code(mypy___errors___ErrorInfoObject *self, void *closure)
{
    if (unlikely(self->_code == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'code' of 'ErrorInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_code);
    PyObject *retval = self->_code;
    return retval;
}

static int
mypy___errors___ErrorInfo_set_code(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'code' cannot be deleted");
        return -1;
    }
    if (self->_code != NULL) {
        CPy_DECREF(self->_code);
    }
    PyObject *tmp;
    if (PyObject_TypeCheck(value, CPyType_errorcodes___ErrorCode))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2036;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2036;
    CPy_TypeError("mypy.errorcodes.ErrorCode or None", value); 
    tmp = NULL;
__LL2036: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_code = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorInfo_get_blocker(mypy___errors___ErrorInfoObject *self, void *closure)
{
    PyObject *retval = self->_blocker ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___errors___ErrorInfo_set_blocker(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'blocker' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_blocker = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorInfo_get_only_once(mypy___errors___ErrorInfoObject *self, void *closure)
{
    PyObject *retval = self->_only_once ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___errors___ErrorInfo_set_only_once(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'only_once' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_only_once = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorInfo_get_allow_dups(mypy___errors___ErrorInfoObject *self, void *closure)
{
    PyObject *retval = self->_allow_dups ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___errors___ErrorInfo_set_allow_dups(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'allow_dups' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_allow_dups = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorInfo_get_origin(mypy___errors___ErrorInfoObject *self, void *closure)
{
    if (unlikely(self->_origin.f0 == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'origin' of 'ErrorInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_origin.f0);
    CPy_INCREF(self->_origin.f1);
    PyObject *retval = PyTuple_New(2);
    if (unlikely(retval == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2037 = self->_origin.f0;
    PyTuple_SET_ITEM(retval, 0, __tmp2037);
    PyObject *__tmp2038 = self->_origin.f1;
    PyTuple_SET_ITEM(retval, 1, __tmp2038);
    return retval;
}

static int
mypy___errors___ErrorInfo_set_origin(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'origin' cannot be deleted");
        return -1;
    }
    if (self->_origin.f0 != NULL) {
        CPy_DECREF(self->_origin.f0);
        CPy_DECREF(self->_origin.f1);
    }
    tuple_T2OO tmp;
    PyObject *__tmp2039;
    if (unlikely(!(PyTuple_Check(value) && PyTuple_GET_SIZE(value) == 2))) {
        __tmp2039 = NULL;
        goto __LL2040;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(value, 0))))
        __tmp2039 = PyTuple_GET_ITEM(value, 0);
    else {
        __tmp2039 = NULL;
    }
    if (__tmp2039 == NULL) goto __LL2040;
    __tmp2039 = PyTuple_GET_ITEM(value, 1);
    if (__tmp2039 == NULL) goto __LL2040;
    __tmp2039 = value;
__LL2040: ;
    if (unlikely(__tmp2039 == NULL)) {
        CPy_TypeError("tuple[str, object]", value); return -1;
    } else {
        PyObject *__tmp2041 = PyTuple_GET_ITEM(value, 0);
        CPy_INCREF(__tmp2041);
        PyObject *__tmp2042;
        if (likely(PyUnicode_Check(__tmp2041)))
            __tmp2042 = __tmp2041;
        else {
            CPy_TypeError("str", __tmp2041); 
            __tmp2042 = NULL;
        }
        tmp.f0 = __tmp2042;
        PyObject *__tmp2043 = PyTuple_GET_ITEM(value, 1);
        CPy_INCREF(__tmp2043);
        PyObject *__tmp2044;
        __tmp2044 = __tmp2043;
        tmp.f1 = __tmp2044;
    }
    CPy_INCREF(tmp.f0);
    CPy_INCREF(tmp.f1);
    self->_origin = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorInfo_get_target(mypy___errors___ErrorInfoObject *self, void *closure)
{
    if (unlikely(self->_target == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'target' of 'ErrorInfo' undefined");
        return NULL;
    }
    CPy_INCREF(self->_target);
    PyObject *retval = self->_target;
    return retval;
}

static int
mypy___errors___ErrorInfo_set_target(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'target' cannot be deleted");
        return -1;
    }
    if (self->_target != NULL) {
        CPy_DECREF(self->_target);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2045;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2045;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL2045: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_target = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorInfo_get_hidden(mypy___errors___ErrorInfoObject *self, void *closure)
{
    PyObject *retval = self->_hidden ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___errors___ErrorInfo_set_hidden(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'hidden' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_hidden = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorInfo_get_priority(mypy___errors___ErrorInfoObject *self, void *closure)
{
    if (unlikely(self->_priority == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'priority' of 'ErrorInfo' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_priority);
    PyObject *retval = CPyTagged_StealAsObject(self->_priority);
    return retval;
}

static int
mypy___errors___ErrorInfo_set_priority(mypy___errors___ErrorInfoObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorInfo' object attribute 'priority' cannot be deleted");
        return -1;
    }
    if (self->_priority != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_priority);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_priority = tmp;
    return 0;
}

static int
mypy___errors___ErrorWatcher_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *mypy___errors___ErrorWatcher_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___errors___ErrorWatcher(PyObject *cpy_r_errors, PyObject *cpy_r_filter_errors, char cpy_r_save_filtered_errors);

static PyObject *
mypy___errors___ErrorWatcher_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___errors___ErrorWatcher) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = mypy___errors___ErrorWatcher_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_mypy___errors___ErrorWatcher_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
mypy___errors___ErrorWatcher_traverse(mypy___errors___ErrorWatcherObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_errors);
    Py_VISIT(self->__filter);
    Py_VISIT(self->__filtered);
    return 0;
}

static int
mypy___errors___ErrorWatcher_clear(mypy___errors___ErrorWatcherObject *self)
{
    Py_CLEAR(self->_errors);
    Py_CLEAR(self->__filter);
    Py_CLEAR(self->__filtered);
    return 0;
}

static void
mypy___errors___ErrorWatcher_dealloc(mypy___errors___ErrorWatcherObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___errors___ErrorWatcher_dealloc)
    mypy___errors___ErrorWatcher_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___errors___ErrorWatcher_vtable[6];
static bool
CPyDef_mypy___errors___ErrorWatcher_trait_vtable_setup(void)
{
    CPyVTableItem mypy___errors___ErrorWatcher_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___errors___ErrorWatcher_____init__,
        (CPyVTableItem)CPyDef_mypy___errors___ErrorWatcher_____enter__,
        (CPyVTableItem)CPyDef_mypy___errors___ErrorWatcher_____exit__,
        (CPyVTableItem)CPyDef_mypy___errors___ErrorWatcher___on_error,
        (CPyVTableItem)CPyDef_mypy___errors___ErrorWatcher___has_new_errors,
        (CPyVTableItem)CPyDef_mypy___errors___ErrorWatcher___filtered_errors,
    };
    memcpy(mypy___errors___ErrorWatcher_vtable, mypy___errors___ErrorWatcher_vtable_scratch, sizeof(mypy___errors___ErrorWatcher_vtable));
    return 1;
}

static PyObject *
mypy___errors___ErrorWatcher_get_errors(mypy___errors___ErrorWatcherObject *self, void *closure);
static int
mypy___errors___ErrorWatcher_set_errors(mypy___errors___ErrorWatcherObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorWatcher_get__has_new_errors(mypy___errors___ErrorWatcherObject *self, void *closure);
static int
mypy___errors___ErrorWatcher_set__has_new_errors(mypy___errors___ErrorWatcherObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorWatcher_get__filter(mypy___errors___ErrorWatcherObject *self, void *closure);
static int
mypy___errors___ErrorWatcher_set__filter(mypy___errors___ErrorWatcherObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___ErrorWatcher_get__filtered(mypy___errors___ErrorWatcherObject *self, void *closure);
static int
mypy___errors___ErrorWatcher_set__filtered(mypy___errors___ErrorWatcherObject *self, PyObject *value, void *closure);

static PyGetSetDef mypy___errors___ErrorWatcher_getseters[] = {
    {"errors",
     (getter)mypy___errors___ErrorWatcher_get_errors, (setter)mypy___errors___ErrorWatcher_set_errors,
     NULL, NULL},
    {"_has_new_errors",
     (getter)mypy___errors___ErrorWatcher_get__has_new_errors, (setter)mypy___errors___ErrorWatcher_set__has_new_errors,
     NULL, NULL},
    {"_filter",
     (getter)mypy___errors___ErrorWatcher_get__filter, (setter)mypy___errors___ErrorWatcher_set__filter,
     NULL, NULL},
    {"_filtered",
     (getter)mypy___errors___ErrorWatcher_get__filtered, (setter)mypy___errors___ErrorWatcher_set__filtered,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef mypy___errors___ErrorWatcher_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_mypy___errors___ErrorWatcher_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__enter__",
     (PyCFunction)CPyPy_mypy___errors___ErrorWatcher_____enter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__exit__",
     (PyCFunction)CPyPy_mypy___errors___ErrorWatcher_____exit__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"on_error",
     (PyCFunction)CPyPy_mypy___errors___ErrorWatcher___on_error,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"has_new_errors",
     (PyCFunction)CPyPy_mypy___errors___ErrorWatcher___has_new_errors,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"filtered_errors",
     (PyCFunction)CPyPy_mypy___errors___ErrorWatcher___filtered_errors,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___errors___ErrorWatcher_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "ErrorWatcher",
    .tp_new = mypy___errors___ErrorWatcher_new,
    .tp_dealloc = (destructor)mypy___errors___ErrorWatcher_dealloc,
    .tp_traverse = (traverseproc)mypy___errors___ErrorWatcher_traverse,
    .tp_clear = (inquiry)mypy___errors___ErrorWatcher_clear,
    .tp_getset = mypy___errors___ErrorWatcher_getseters,
    .tp_methods = mypy___errors___ErrorWatcher_methods,
    .tp_init = mypy___errors___ErrorWatcher_init,
    .tp_basicsize = sizeof(mypy___errors___ErrorWatcherObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypy___errors___ErrorWatcher_template = &CPyType_mypy___errors___ErrorWatcher_template_;

static PyObject *
mypy___errors___ErrorWatcher_setup(PyTypeObject *type)
{
    mypy___errors___ErrorWatcherObject *self;
    self = (mypy___errors___ErrorWatcherObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___errors___ErrorWatcher_vtable;
    self->__has_new_errors = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___errors___ErrorWatcher(PyObject *cpy_r_errors, PyObject *cpy_r_filter_errors, char cpy_r_save_filtered_errors)
{
    PyObject *self = mypy___errors___ErrorWatcher_setup(CPyType_mypy___errors___ErrorWatcher);
    if (self == NULL)
        return NULL;
    char res = CPyDef_mypy___errors___ErrorWatcher_____init__(self, cpy_r_errors, cpy_r_filter_errors, cpy_r_save_filtered_errors);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
mypy___errors___ErrorWatcher_get_errors(mypy___errors___ErrorWatcherObject *self, void *closure)
{
    if (unlikely(self->_errors == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'errors' of 'ErrorWatcher' undefined");
        return NULL;
    }
    CPy_INCREF(self->_errors);
    PyObject *retval = self->_errors;
    return retval;
}

static int
mypy___errors___ErrorWatcher_set_errors(mypy___errors___ErrorWatcherObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorWatcher' object attribute 'errors' cannot be deleted");
        return -1;
    }
    if (self->_errors != NULL) {
        CPy_DECREF(self->_errors);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_mypy___errors___Errors))
        tmp = value;
    else {
        CPy_TypeError("mypy.errors.Errors", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_errors = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorWatcher_get__has_new_errors(mypy___errors___ErrorWatcherObject *self, void *closure)
{
    PyObject *retval = self->__has_new_errors ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___errors___ErrorWatcher_set__has_new_errors(mypy___errors___ErrorWatcherObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorWatcher' object attribute '_has_new_errors' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->__has_new_errors = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorWatcher_get__filter(mypy___errors___ErrorWatcherObject *self, void *closure)
{
    if (unlikely(self->__filter == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_filter' of 'ErrorWatcher' undefined");
        return NULL;
    }
    CPy_INCREF(self->__filter);
    PyObject *retval = self->__filter;
    return retval;
}

static int
mypy___errors___ErrorWatcher_set__filter(mypy___errors___ErrorWatcherObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorWatcher' object attribute '_filter' cannot be deleted");
        return -1;
    }
    if (self->__filter != NULL) {
        CPy_DECREF(self->__filter);
    }
    PyObject *tmp;
    if (PyBool_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2046;
    tmp = value;
    if (tmp != NULL) goto __LL2046;
    CPy_TypeError("union[bool, object]", value); 
    tmp = NULL;
__LL2046: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__filter = tmp;
    return 0;
}

static PyObject *
mypy___errors___ErrorWatcher_get__filtered(mypy___errors___ErrorWatcherObject *self, void *closure)
{
    if (unlikely(self->__filtered == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_filtered' of 'ErrorWatcher' undefined");
        return NULL;
    }
    CPy_INCREF(self->__filtered);
    PyObject *retval = self->__filtered;
    return retval;
}

static int
mypy___errors___ErrorWatcher_set__filtered(mypy___errors___ErrorWatcherObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'ErrorWatcher' object attribute '_filtered' cannot be deleted");
        return -1;
    }
    if (self->__filtered != NULL) {
        CPy_DECREF(self->__filtered);
    }
    PyObject *tmp;
    if (PyList_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2047;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2047;
    CPy_TypeError("list or None", value); 
    tmp = NULL;
__LL2047: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->__filtered = tmp;
    return 0;
}

static int
mypy___errors___Errors_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *mypy___errors___Errors_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___errors___Errors(PyObject *cpy_r_options, PyObject *cpy_r_read_source, PyObject *cpy_r_hide_error_codes);

static PyObject *
mypy___errors___Errors_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___errors___Errors) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = mypy___errors___Errors_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_mypy___errors___Errors_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
mypy___errors___Errors_traverse(mypy___errors___ErrorsObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_error_info_map);
    Py_VISIT(self->_has_blockers);
    Py_VISIT(self->_flushed_files);
    Py_VISIT(self->_import_ctx);
    Py_VISIT(self->_ignore_prefix);
    Py_VISIT(self->_file);
    Py_VISIT(self->_ignored_lines);
    Py_VISIT(self->_skipped_lines);
    Py_VISIT(self->_used_ignored_lines);
    Py_VISIT(self->_ignored_files);
    Py_VISIT(self->_only_once_messages);
    Py_VISIT(self->_target_module);
    Py_VISIT(self->_scope);
    Py_VISIT(self->__watchers);
    Py_VISIT(self->_options);
    Py_VISIT(self->_read_source);
    Py_VISIT(self->_function_or_member);
    return 0;
}

static int
mypy___errors___Errors_clear(mypy___errors___ErrorsObject *self)
{
    Py_CLEAR(self->_error_info_map);
    Py_CLEAR(self->_has_blockers);
    Py_CLEAR(self->_flushed_files);
    Py_CLEAR(self->_import_ctx);
    Py_CLEAR(self->_ignore_prefix);
    Py_CLEAR(self->_file);
    Py_CLEAR(self->_ignored_lines);
    Py_CLEAR(self->_skipped_lines);
    Py_CLEAR(self->_used_ignored_lines);
    Py_CLEAR(self->_ignored_files);
    Py_CLEAR(self->_only_once_messages);
    Py_CLEAR(self->_target_module);
    Py_CLEAR(self->_scope);
    Py_CLEAR(self->__watchers);
    Py_CLEAR(self->_options);
    Py_CLEAR(self->_read_source);
    Py_CLEAR(self->_function_or_member);
    return 0;
}

static void
mypy___errors___Errors_dealloc(mypy___errors___ErrorsObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___errors___Errors_dealloc)
    mypy___errors___Errors_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___errors___Errors_vtable[39];
static bool
CPyDef_mypy___errors___Errors_trait_vtable_setup(void)
{
    CPyVTableItem mypy___errors___Errors_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___errors___Errors_____init__,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___initialize,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___reset,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___set_ignore_prefix,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___simplify_path,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___set_file,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___set_file_ignored_lines,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___set_skipped_lines,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___current_target,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___current_module,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___import_context,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___set_import_context,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___report,
        (CPyVTableItem)CPyDef_mypy___errors___Errors____add_error_info,
        (CPyVTableItem)CPyDef_mypy___errors___Errors____filter_error,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___add_error_info,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___has_many_errors,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___report_hidden_errors,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___is_ignored_error,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___is_error_code_enabled,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___clear_errors_in_targets,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___generate_unused_ignore_errors,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___generate_ignore_without_code_errors,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___num_messages,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___is_errors,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___is_blockers,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___blocker_module,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___is_errors_for_file,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___prefer_simple_messages,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___raise_error,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___format_messages,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___file_messages,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___new_messages,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___targets,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___render_messages,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___sort_messages,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___sort_within_context,
        (CPyVTableItem)CPyDef_mypy___errors___Errors___remove_duplicates,
        (CPyVTableItem)CPyDef_mypy___errors___Errors_____mypyc_defaults_setup,
    };
    memcpy(mypy___errors___Errors_vtable, mypy___errors___Errors_vtable_scratch, sizeof(mypy___errors___Errors_vtable));
    return 1;
}

static PyObject *
mypy___errors___Errors_get_error_info_map(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_error_info_map(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_has_blockers(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_has_blockers(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_flushed_files(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_flushed_files(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_import_ctx(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_import_ctx(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_ignore_prefix(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_ignore_prefix(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_file(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_file(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_ignored_lines(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_ignored_lines(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_skipped_lines(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_skipped_lines(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_used_ignored_lines(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_used_ignored_lines(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_ignored_files(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_ignored_files(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_only_once_messages(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_only_once_messages(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_show_error_context(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_show_error_context(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_show_column_numbers(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_show_column_numbers(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_show_error_end(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_show_error_end(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_show_absolute_path(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_show_absolute_path(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_target_module(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_target_module(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_scope(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_scope(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_seen_import_error(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_seen_import_error(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get__watchers(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set__watchers(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_options(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_options(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_hide_error_codes(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_hide_error_codes(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_read_source(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_read_source(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypy___errors___Errors_get_function_or_member(mypy___errors___ErrorsObject *self, void *closure);
static int
mypy___errors___Errors_set_function_or_member(mypy___errors___ErrorsObject *self, PyObject *value, void *closure);

static PyGetSetDef mypy___errors___Errors_getseters[] = {
    {"error_info_map",
     (getter)mypy___errors___Errors_get_error_info_map, (setter)mypy___errors___Errors_set_error_info_map,
     NULL, NULL},
    {"has_blockers",
     (getter)mypy___errors___Errors_get_has_blockers, (setter)mypy___errors___Errors_set_has_blockers,
     NULL, NULL},
    {"flushed_files",
     (getter)mypy___errors___Errors_get_flushed_files, (setter)mypy___errors___Errors_set_flushed_files,
     NULL, NULL},
    {"import_ctx",
     (getter)mypy___errors___Errors_get_import_ctx, (setter)mypy___errors___Errors_set_import_ctx,
     NULL, NULL},
    {"ignore_prefix",
     (getter)mypy___errors___Errors_get_ignore_prefix, (setter)mypy___errors___Errors_set_ignore_prefix,
     NULL, NULL},
    {"file",
     (getter)mypy___errors___Errors_get_file, (setter)mypy___errors___Errors_set_file,
     NULL, NULL},
    {"ignored_lines",
     (getter)mypy___errors___Errors_get_ignored_lines, (setter)mypy___errors___Errors_set_ignored_lines,
     NULL, NULL},
    {"skipped_lines",
     (getter)mypy___errors___Errors_get_skipped_lines, (setter)mypy___errors___Errors_set_skipped_lines,
     NULL, NULL},
    {"used_ignored_lines",
     (getter)mypy___errors___Errors_get_used_ignored_lines, (setter)mypy___errors___Errors_set_used_ignored_lines,
     NULL, NULL},
    {"ignored_files",
     (getter)mypy___errors___Errors_get_ignored_files, (setter)mypy___errors___Errors_set_ignored_files,
     NULL, NULL},
    {"only_once_messages",
     (getter)mypy___errors___Errors_get_only_once_messages, (setter)mypy___errors___Errors_set_only_once_messages,
     NULL, NULL},
    {"show_error_context",
     (getter)mypy___errors___Errors_get_show_error_context, (setter)mypy___errors___Errors_set_show_error_context,
     NULL, NULL},
    {"show_column_numbers",
     (getter)mypy___errors___Errors_get_show_column_numbers, (setter)mypy___errors___Errors_set_show_column_numbers,
     NULL, NULL},
    {"show_error_end",
     (getter)mypy___errors___Errors_get_show_error_end, (setter)mypy___errors___Errors_set_show_error_end,
     NULL, NULL},
    {"show_absolute_path",
     (getter)mypy___errors___Errors_get_show_absolute_path, (setter)mypy___errors___Errors_set_show_absolute_path,
     NULL, NULL},
    {"target_module",
     (getter)mypy___errors___Errors_get_target_module, (setter)mypy___errors___Errors_set_target_module,
     NULL, NULL},
    {"scope",
     (getter)mypy___errors___Errors_get_scope, (setter)mypy___errors___Errors_set_scope,
     NULL, NULL},
    {"seen_import_error",
     (getter)mypy___errors___Errors_get_seen_import_error, (setter)mypy___errors___Errors_set_seen_import_error,
     NULL, NULL},
    {"_watchers",
     (getter)mypy___errors___Errors_get__watchers, (setter)mypy___errors___Errors_set__watchers,
     NULL, NULL},
    {"options",
     (getter)mypy___errors___Errors_get_options, (setter)mypy___errors___Errors_set_options,
     NULL, NULL},
    {"hide_error_codes",
     (getter)mypy___errors___Errors_get_hide_error_codes, (setter)mypy___errors___Errors_set_hide_error_codes,
     NULL, NULL},
    {"read_source",
     (getter)mypy___errors___Errors_get_read_source, (setter)mypy___errors___Errors_set_read_source,
     NULL, NULL},
    {"function_or_member",
     (getter)mypy___errors___Errors_get_function_or_member, (setter)mypy___errors___Errors_set_function_or_member,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef mypy___errors___Errors_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_mypy___errors___Errors_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"initialize",
     (PyCFunction)CPyPy_mypy___errors___Errors___initialize,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"reset",
     (PyCFunction)CPyPy_mypy___errors___Errors___reset,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"set_ignore_prefix",
     (PyCFunction)CPyPy_mypy___errors___Errors___set_ignore_prefix,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"simplify_path",
     (PyCFunction)CPyPy_mypy___errors___Errors___simplify_path,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"set_file",
     (PyCFunction)CPyPy_mypy___errors___Errors___set_file,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"set_file_ignored_lines",
     (PyCFunction)CPyPy_mypy___errors___Errors___set_file_ignored_lines,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"set_skipped_lines",
     (PyCFunction)CPyPy_mypy___errors___Errors___set_skipped_lines,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"current_target",
     (PyCFunction)CPyPy_mypy___errors___Errors___current_target,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"current_module",
     (PyCFunction)CPyPy_mypy___errors___Errors___current_module,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"import_context",
     (PyCFunction)CPyPy_mypy___errors___Errors___import_context,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"set_import_context",
     (PyCFunction)CPyPy_mypy___errors___Errors___set_import_context,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"report",
     (PyCFunction)CPyPy_mypy___errors___Errors___report,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_add_error_info",
     (PyCFunction)CPyPy_mypy___errors___Errors____add_error_info,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_filter_error",
     (PyCFunction)CPyPy_mypy___errors___Errors____filter_error,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_error_info",
     (PyCFunction)CPyPy_mypy___errors___Errors___add_error_info,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"has_many_errors",
     (PyCFunction)CPyPy_mypy___errors___Errors___has_many_errors,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"report_hidden_errors",
     (PyCFunction)CPyPy_mypy___errors___Errors___report_hidden_errors,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_ignored_error",
     (PyCFunction)CPyPy_mypy___errors___Errors___is_ignored_error,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_error_code_enabled",
     (PyCFunction)CPyPy_mypy___errors___Errors___is_error_code_enabled,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"clear_errors_in_targets",
     (PyCFunction)CPyPy_mypy___errors___Errors___clear_errors_in_targets,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"generate_unused_ignore_errors",
     (PyCFunction)CPyPy_mypy___errors___Errors___generate_unused_ignore_errors,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"generate_ignore_without_code_errors",
     (PyCFunction)CPyPy_mypy___errors___Errors___generate_ignore_without_code_errors,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"num_messages",
     (PyCFunction)CPyPy_mypy___errors___Errors___num_messages,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_errors",
     (PyCFunction)CPyPy_mypy___errors___Errors___is_errors,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_blockers",
     (PyCFunction)CPyPy_mypy___errors___Errors___is_blockers,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"blocker_module",
     (PyCFunction)CPyPy_mypy___errors___Errors___blocker_module,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_errors_for_file",
     (PyCFunction)CPyPy_mypy___errors___Errors___is_errors_for_file,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"prefer_simple_messages",
     (PyCFunction)CPyPy_mypy___errors___Errors___prefer_simple_messages,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"raise_error",
     (PyCFunction)CPyPy_mypy___errors___Errors___raise_error,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"format_messages",
     (PyCFunction)CPyPy_mypy___errors___Errors___format_messages,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"file_messages",
     (PyCFunction)CPyPy_mypy___errors___Errors___file_messages,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"new_messages",
     (PyCFunction)CPyPy_mypy___errors___Errors___new_messages,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"targets",
     (PyCFunction)CPyPy_mypy___errors___Errors___targets,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"render_messages",
     (PyCFunction)CPyPy_mypy___errors___Errors___render_messages,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"sort_messages",
     (PyCFunction)CPyPy_mypy___errors___Errors___sort_messages,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"sort_within_context",
     (PyCFunction)CPyPy_mypy___errors___Errors___sort_within_context,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"remove_duplicates",
     (PyCFunction)CPyPy_mypy___errors___Errors___remove_duplicates,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__mypyc_defaults_setup",
     (PyCFunction)CPyPy_mypy___errors___Errors_____mypyc_defaults_setup,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___errors___Errors_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Errors",
    .tp_new = mypy___errors___Errors_new,
    .tp_dealloc = (destructor)mypy___errors___Errors_dealloc,
    .tp_traverse = (traverseproc)mypy___errors___Errors_traverse,
    .tp_clear = (inquiry)mypy___errors___Errors_clear,
    .tp_getset = mypy___errors___Errors_getseters,
    .tp_methods = mypy___errors___Errors_methods,
    .tp_init = mypy___errors___Errors_init,
    .tp_basicsize = sizeof(mypy___errors___ErrorsObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypy___errors___Errors_template = &CPyType_mypy___errors___Errors_template_;

static PyObject *
mypy___errors___Errors_setup(PyTypeObject *type)
{
    mypy___errors___ErrorsObject *self;
    self = (mypy___errors___ErrorsObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___errors___Errors_vtable;
    self->_show_error_context = 2;
    self->_show_column_numbers = 2;
    self->_show_error_end = 2;
    self->_show_absolute_path = 2;
    self->_seen_import_error = 2;
    self->_hide_error_codes = 2;
    if (CPyDef_mypy___errors___Errors_____mypyc_defaults_setup((PyObject *)self) == 0) {
        Py_DECREF(self);
        return NULL;
    }
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___errors___Errors(PyObject *cpy_r_options, PyObject *cpy_r_read_source, PyObject *cpy_r_hide_error_codes)
{
    PyObject *self = mypy___errors___Errors_setup(CPyType_mypy___errors___Errors);
    if (self == NULL)
        return NULL;
    char res = CPyDef_mypy___errors___Errors_____init__(self, cpy_r_options, cpy_r_read_source, cpy_r_hide_error_codes);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
mypy___errors___Errors_get_error_info_map(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_error_info_map == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'error_info_map' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->_error_info_map);
    PyObject *retval = self->_error_info_map;
    return retval;
}

static int
mypy___errors___Errors_set_error_info_map(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'error_info_map' cannot be deleted");
        return -1;
    }
    if (self->_error_info_map != NULL) {
        CPy_DECREF(self->_error_info_map);
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
    self->_error_info_map = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_has_blockers(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_has_blockers == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'has_blockers' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->_has_blockers);
    PyObject *retval = self->_has_blockers;
    return retval;
}

static int
mypy___errors___Errors_set_has_blockers(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'has_blockers' cannot be deleted");
        return -1;
    }
    if (self->_has_blockers != NULL) {
        CPy_DECREF(self->_has_blockers);
    }
    PyObject *tmp;
    if (likely(PySet_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("set", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_has_blockers = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_flushed_files(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_flushed_files == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'flushed_files' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->_flushed_files);
    PyObject *retval = self->_flushed_files;
    return retval;
}

static int
mypy___errors___Errors_set_flushed_files(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'flushed_files' cannot be deleted");
        return -1;
    }
    if (self->_flushed_files != NULL) {
        CPy_DECREF(self->_flushed_files);
    }
    PyObject *tmp;
    if (likely(PySet_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("set", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_flushed_files = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_import_ctx(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_import_ctx == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'import_ctx' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->_import_ctx);
    PyObject *retval = self->_import_ctx;
    return retval;
}

static int
mypy___errors___Errors_set_import_ctx(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'import_ctx' cannot be deleted");
        return -1;
    }
    if (self->_import_ctx != NULL) {
        CPy_DECREF(self->_import_ctx);
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
    self->_import_ctx = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_ignore_prefix(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_ignore_prefix == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ignore_prefix' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ignore_prefix);
    PyObject *retval = self->_ignore_prefix;
    return retval;
}

static int
mypy___errors___Errors_set_ignore_prefix(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'ignore_prefix' cannot be deleted");
        return -1;
    }
    if (self->_ignore_prefix != NULL) {
        CPy_DECREF(self->_ignore_prefix);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2048;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2048;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL2048: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_ignore_prefix = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_file(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_file == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'file' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->_file);
    PyObject *retval = self->_file;
    return retval;
}

static int
mypy___errors___Errors_set_file(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'file' cannot be deleted");
        return -1;
    }
    if (self->_file != NULL) {
        CPy_DECREF(self->_file);
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
    self->_file = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_ignored_lines(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_ignored_lines == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ignored_lines' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ignored_lines);
    PyObject *retval = self->_ignored_lines;
    return retval;
}

static int
mypy___errors___Errors_set_ignored_lines(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'ignored_lines' cannot be deleted");
        return -1;
    }
    if (self->_ignored_lines != NULL) {
        CPy_DECREF(self->_ignored_lines);
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
    self->_ignored_lines = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_skipped_lines(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_skipped_lines == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'skipped_lines' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->_skipped_lines);
    PyObject *retval = self->_skipped_lines;
    return retval;
}

static int
mypy___errors___Errors_set_skipped_lines(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'skipped_lines' cannot be deleted");
        return -1;
    }
    if (self->_skipped_lines != NULL) {
        CPy_DECREF(self->_skipped_lines);
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
    self->_skipped_lines = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_used_ignored_lines(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_used_ignored_lines == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'used_ignored_lines' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->_used_ignored_lines);
    PyObject *retval = self->_used_ignored_lines;
    return retval;
}

static int
mypy___errors___Errors_set_used_ignored_lines(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'used_ignored_lines' cannot be deleted");
        return -1;
    }
    if (self->_used_ignored_lines != NULL) {
        CPy_DECREF(self->_used_ignored_lines);
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
    self->_used_ignored_lines = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_ignored_files(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_ignored_files == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ignored_files' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ignored_files);
    PyObject *retval = self->_ignored_files;
    return retval;
}

static int
mypy___errors___Errors_set_ignored_files(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'ignored_files' cannot be deleted");
        return -1;
    }
    if (self->_ignored_files != NULL) {
        CPy_DECREF(self->_ignored_files);
    }
    PyObject *tmp;
    if (likely(PySet_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("set", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_ignored_files = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_only_once_messages(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_only_once_messages == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'only_once_messages' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->_only_once_messages);
    PyObject *retval = self->_only_once_messages;
    return retval;
}

static int
mypy___errors___Errors_set_only_once_messages(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'only_once_messages' cannot be deleted");
        return -1;
    }
    if (self->_only_once_messages != NULL) {
        CPy_DECREF(self->_only_once_messages);
    }
    PyObject *tmp;
    if (likely(PySet_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("set", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_only_once_messages = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_show_error_context(mypy___errors___ErrorsObject *self, void *closure)
{
    PyObject *retval = self->_show_error_context ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___errors___Errors_set_show_error_context(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'show_error_context' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_show_error_context = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_show_column_numbers(mypy___errors___ErrorsObject *self, void *closure)
{
    PyObject *retval = self->_show_column_numbers ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___errors___Errors_set_show_column_numbers(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'show_column_numbers' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_show_column_numbers = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_show_error_end(mypy___errors___ErrorsObject *self, void *closure)
{
    PyObject *retval = self->_show_error_end ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___errors___Errors_set_show_error_end(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'show_error_end' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_show_error_end = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_show_absolute_path(mypy___errors___ErrorsObject *self, void *closure)
{
    PyObject *retval = self->_show_absolute_path ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___errors___Errors_set_show_absolute_path(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'show_absolute_path' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_show_absolute_path = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_target_module(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_target_module == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'target_module' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->_target_module);
    PyObject *retval = self->_target_module;
    return retval;
}

static int
mypy___errors___Errors_set_target_module(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'target_module' cannot be deleted");
        return -1;
    }
    if (self->_target_module != NULL) {
        CPy_DECREF(self->_target_module);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2049;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2049;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL2049: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_target_module = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_scope(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_scope == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'scope' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->_scope);
    PyObject *retval = self->_scope;
    return retval;
}

static int
mypy___errors___Errors_set_scope(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'scope' cannot be deleted");
        return -1;
    }
    if (self->_scope != NULL) {
        CPy_DECREF(self->_scope);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_scope___Scope)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2050;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2050;
    CPy_TypeError("mypy.scope.Scope or None", value); 
    tmp = NULL;
__LL2050: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_scope = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_seen_import_error(mypy___errors___ErrorsObject *self, void *closure)
{
    PyObject *retval = self->_seen_import_error ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___errors___Errors_set_seen_import_error(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'seen_import_error' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_seen_import_error = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get__watchers(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->__watchers == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_watchers' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->__watchers);
    PyObject *retval = self->__watchers;
    return retval;
}

static int
mypy___errors___Errors_set__watchers(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute '_watchers' cannot be deleted");
        return -1;
    }
    if (self->__watchers != NULL) {
        CPy_DECREF(self->__watchers);
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
    self->__watchers = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_options(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_options == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'options' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->_options);
    PyObject *retval = self->_options;
    return retval;
}

static int
mypy___errors___Errors_set_options(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'options' cannot be deleted");
        return -1;
    }
    if (self->_options != NULL) {
        CPy_DECREF(self->_options);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_mypy___options___Options))
        tmp = value;
    else {
        CPy_TypeError("mypy.options.Options", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_options = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_hide_error_codes(mypy___errors___ErrorsObject *self, void *closure)
{
    PyObject *retval = self->_hide_error_codes ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypy___errors___Errors_set_hide_error_codes(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'hide_error_codes' cannot be deleted");
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
mypy___errors___Errors_get_read_source(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_read_source == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'read_source' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->_read_source);
    PyObject *retval = self->_read_source;
    return retval;
}

static int
mypy___errors___Errors_set_read_source(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'read_source' cannot be deleted");
        return -1;
    }
    if (self->_read_source != NULL) {
        CPy_DECREF(self->_read_source);
    }
    PyObject *tmp;
    tmp = value;
    if (tmp != NULL) goto __LL2051;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2051;
    CPy_TypeError("object or None", value); 
    tmp = NULL;
__LL2051: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_read_source = tmp;
    return 0;
}

static PyObject *
mypy___errors___Errors_get_function_or_member(mypy___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_function_or_member == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'function_or_member' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->_function_or_member);
    PyObject *retval = self->_function_or_member;
    return retval;
}

static int
mypy___errors___Errors_set_function_or_member(mypy___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'function_or_member' cannot be deleted");
        return -1;
    }
    if (self->_function_or_member != NULL) {
        CPy_DECREF(self->_function_or_member);
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
    self->_function_or_member = tmp;
    return 0;
}

static int
mypy___errors___CompileError_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return CPyPy_mypy___errors___CompileError_____init__(self, args, kwds) != NULL ? 0 : -1;
}
PyMemberDef mypy___errors___CompileError_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(PyBaseExceptionObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(PyBaseExceptionObject) + sizeof(PyObject *), 0, NULL},
    {0}
};

static PyGetSetDef mypy___errors___CompileError_getseters[] = {
    {NULL}  /* Sentinel */
};

static PyMethodDef mypy___errors___CompileError_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_mypy___errors___CompileError_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___errors___CompileError_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "CompileError",
    .tp_getset = mypy___errors___CompileError_getseters,
    .tp_methods = mypy___errors___CompileError_methods,
    .tp_init = mypy___errors___CompileError_init,
    .tp_members = mypy___errors___CompileError_members,
    .tp_basicsize = sizeof(PyBaseExceptionObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(PyBaseExceptionObject),
    .tp_weaklistoffset = sizeof(PyBaseExceptionObject) + sizeof(PyObject *),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE,
};
static PyTypeObject *CPyType_mypy___errors___CompileError_template = &CPyType_mypy___errors___CompileError_template_;


static PyObject *mypy___errors___initialize_Errors_env_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___errors___initialize_Errors_env(void);

static PyObject *
mypy___errors___initialize_Errors_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___errors___initialize_Errors_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return mypy___errors___initialize_Errors_env_setup(type);
}

static int
mypy___errors___initialize_Errors_env_traverse(mypy___errors___initialize_Errors_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    return 0;
}

static int
mypy___errors___initialize_Errors_env_clear(mypy___errors___initialize_Errors_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    return 0;
}

static void
mypy___errors___initialize_Errors_env_dealloc(mypy___errors___initialize_Errors_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___errors___initialize_Errors_env_dealloc)
    mypy___errors___initialize_Errors_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___errors___initialize_Errors_env_vtable[1];
static bool
CPyDef_mypy___errors___initialize_Errors_env_trait_vtable_setup(void)
{
    CPyVTableItem mypy___errors___initialize_Errors_env_vtable_scratch[] = {
        NULL
    };
    memcpy(mypy___errors___initialize_Errors_env_vtable, mypy___errors___initialize_Errors_env_vtable_scratch, sizeof(mypy___errors___initialize_Errors_env_vtable));
    return 1;
}

static PyMethodDef mypy___errors___initialize_Errors_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___errors___initialize_Errors_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "initialize_Errors_env",
    .tp_new = mypy___errors___initialize_Errors_env_new,
    .tp_dealloc = (destructor)mypy___errors___initialize_Errors_env_dealloc,
    .tp_traverse = (traverseproc)mypy___errors___initialize_Errors_env_traverse,
    .tp_clear = (inquiry)mypy___errors___initialize_Errors_env_clear,
    .tp_methods = mypy___errors___initialize_Errors_env_methods,
    .tp_basicsize = sizeof(mypy___errors___initialize_Errors_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypy___errors___initialize_Errors_env_template = &CPyType_mypy___errors___initialize_Errors_env_template_;

static PyObject *
mypy___errors___initialize_Errors_env_setup(PyTypeObject *type)
{
    mypy___errors___initialize_Errors_envObject *self;
    self = (mypy___errors___initialize_Errors_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___errors___initialize_Errors_env_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___errors___initialize_Errors_env(void)
{
    PyObject *self = mypy___errors___initialize_Errors_env_setup(CPyType_mypy___errors___initialize_Errors_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__mypy___errors_____mypyc_lambda__0_initialize_Errors_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_____get__(self, instance, owner);
}
PyMemberDef mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj(void);

static PyObject *
mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_setup(type);
}

static int
mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_traverse(mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject))));
    return 0;
}

static int
mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_clear(mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject))));
    return 0;
}

static void
mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_dealloc(mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_dealloc)
    mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_vtable[2];
static bool
CPyDef_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_trait_vtable_setup(void)
{
    CPyVTableItem mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_____call__,
        (CPyVTableItem)CPyDef_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_____get__,
    };
    memcpy(mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_vtable, mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_vtable_scratch, sizeof(mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_vtable));
    return 1;
}

static PyMethodDef mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_initialize_Errors_obj",
    .tp_new = mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_new,
    .tp_dealloc = (destructor)mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_dealloc,
    .tp_traverse = (traverseproc)mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_traverse,
    .tp_clear = (inquiry)mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_clear,
    .tp_methods = mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__mypy___errors_____mypyc_lambda__0_initialize_Errors_obj,
    .tp_members = mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_members,
    .tp_basicsize = sizeof(mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject),
    .tp_weaklistoffset = sizeof(mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_template = &CPyType_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_template_;

static PyObject *
mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_setup(PyTypeObject *type)
{
    mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject *self;
    self = (mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_vtable;
    self->vectorcall = CPyPy_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj(void)
{
    PyObject *self = mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_setup(CPyType_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *mypy___errors___sort_messages_Errors_env_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___errors___sort_messages_Errors_env(void);

static PyObject *
mypy___errors___sort_messages_Errors_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___errors___sort_messages_Errors_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return mypy___errors___sort_messages_Errors_env_setup(type);
}

static int
mypy___errors___sort_messages_Errors_env_traverse(mypy___errors___sort_messages_Errors_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_errors);
    Py_VISIT(self->_result);
    if (CPyTagged_CheckLong(self->_i)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_i));
    }
    if (CPyTagged_CheckLong(self->_i0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_i0));
    }
    return 0;
}

static int
mypy___errors___sort_messages_Errors_env_clear(mypy___errors___sort_messages_Errors_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_errors);
    Py_CLEAR(self->_result);
    if (CPyTagged_CheckLong(self->_i)) {
        CPyTagged __tmp = self->_i;
        self->_i = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_i0)) {
        CPyTagged __tmp = self->_i0;
        self->_i0 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
mypy___errors___sort_messages_Errors_env_dealloc(mypy___errors___sort_messages_Errors_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___errors___sort_messages_Errors_env_dealloc)
    mypy___errors___sort_messages_Errors_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___errors___sort_messages_Errors_env_vtable[1];
static bool
CPyDef_mypy___errors___sort_messages_Errors_env_trait_vtable_setup(void)
{
    CPyVTableItem mypy___errors___sort_messages_Errors_env_vtable_scratch[] = {
        NULL
    };
    memcpy(mypy___errors___sort_messages_Errors_env_vtable, mypy___errors___sort_messages_Errors_env_vtable_scratch, sizeof(mypy___errors___sort_messages_Errors_env_vtable));
    return 1;
}

static PyMethodDef mypy___errors___sort_messages_Errors_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___errors___sort_messages_Errors_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "sort_messages_Errors_env",
    .tp_new = mypy___errors___sort_messages_Errors_env_new,
    .tp_dealloc = (destructor)mypy___errors___sort_messages_Errors_env_dealloc,
    .tp_traverse = (traverseproc)mypy___errors___sort_messages_Errors_env_traverse,
    .tp_clear = (inquiry)mypy___errors___sort_messages_Errors_env_clear,
    .tp_methods = mypy___errors___sort_messages_Errors_env_methods,
    .tp_basicsize = sizeof(mypy___errors___sort_messages_Errors_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypy___errors___sort_messages_Errors_env_template = &CPyType_mypy___errors___sort_messages_Errors_env_template_;

static PyObject *
mypy___errors___sort_messages_Errors_env_setup(PyTypeObject *type)
{
    mypy___errors___sort_messages_Errors_envObject *self;
    self = (mypy___errors___sort_messages_Errors_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___errors___sort_messages_Errors_env_vtable;
    self->_i = CPY_INT_TAG;
    self->_i0 = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___errors___sort_messages_Errors_env(void)
{
    PyObject *self = mypy___errors___sort_messages_Errors_env_setup(CPyType_mypy___errors___sort_messages_Errors_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_____get__(self, instance, owner);
}
PyMemberDef mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj(void);

static PyObject *
mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_setup(type);
}

static int
mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_traverse(mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject))));
    return 0;
}

static int
mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_clear(mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject))));
    return 0;
}

static void
mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_dealloc(mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_dealloc)
    mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_vtable[2];
static bool
CPyDef_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_trait_vtable_setup(void)
{
    CPyVTableItem mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_____call__,
        (CPyVTableItem)CPyDef_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_____get__,
    };
    memcpy(mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_vtable, mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_vtable_scratch, sizeof(mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_vtable));
    return 1;
}

static PyMethodDef mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__1_sort_messages_Errors_obj",
    .tp_new = mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_new,
    .tp_dealloc = (destructor)mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_dealloc,
    .tp_traverse = (traverseproc)mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_traverse,
    .tp_clear = (inquiry)mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_clear,
    .tp_methods = mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj,
    .tp_members = mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_members,
    .tp_basicsize = sizeof(mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject),
    .tp_weaklistoffset = sizeof(mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_template = &CPyType_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_template_;

static PyObject *
mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_setup(PyTypeObject *type)
{
    mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject *self;
    self = (mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_vtable;
    self->vectorcall = CPyPy_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj(void)
{
    PyObject *self = mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_setup(CPyType_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *mypy___errors___sort_within_context_Errors_env_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___errors___sort_within_context_Errors_env(void);

static PyObject *
mypy___errors___sort_within_context_Errors_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___errors___sort_within_context_Errors_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return mypy___errors___sort_within_context_Errors_env_setup(type);
}

static int
mypy___errors___sort_within_context_Errors_env_traverse(mypy___errors___sort_within_context_Errors_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_errors);
    Py_VISIT(self->_result);
    if (CPyTagged_CheckLong(self->_i)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_i));
    }
    if (CPyTagged_CheckLong(self->_i0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_i0));
    }
    return 0;
}

static int
mypy___errors___sort_within_context_Errors_env_clear(mypy___errors___sort_within_context_Errors_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_errors);
    Py_CLEAR(self->_result);
    if (CPyTagged_CheckLong(self->_i)) {
        CPyTagged __tmp = self->_i;
        self->_i = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_i0)) {
        CPyTagged __tmp = self->_i0;
        self->_i0 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
mypy___errors___sort_within_context_Errors_env_dealloc(mypy___errors___sort_within_context_Errors_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___errors___sort_within_context_Errors_env_dealloc)
    mypy___errors___sort_within_context_Errors_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___errors___sort_within_context_Errors_env_vtable[1];
static bool
CPyDef_mypy___errors___sort_within_context_Errors_env_trait_vtable_setup(void)
{
    CPyVTableItem mypy___errors___sort_within_context_Errors_env_vtable_scratch[] = {
        NULL
    };
    memcpy(mypy___errors___sort_within_context_Errors_env_vtable, mypy___errors___sort_within_context_Errors_env_vtable_scratch, sizeof(mypy___errors___sort_within_context_Errors_env_vtable));
    return 1;
}

static PyMethodDef mypy___errors___sort_within_context_Errors_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___errors___sort_within_context_Errors_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "sort_within_context_Errors_env",
    .tp_new = mypy___errors___sort_within_context_Errors_env_new,
    .tp_dealloc = (destructor)mypy___errors___sort_within_context_Errors_env_dealloc,
    .tp_traverse = (traverseproc)mypy___errors___sort_within_context_Errors_env_traverse,
    .tp_clear = (inquiry)mypy___errors___sort_within_context_Errors_env_clear,
    .tp_methods = mypy___errors___sort_within_context_Errors_env_methods,
    .tp_basicsize = sizeof(mypy___errors___sort_within_context_Errors_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypy___errors___sort_within_context_Errors_env_template = &CPyType_mypy___errors___sort_within_context_Errors_env_template_;

static PyObject *
mypy___errors___sort_within_context_Errors_env_setup(PyTypeObject *type)
{
    mypy___errors___sort_within_context_Errors_envObject *self;
    self = (mypy___errors___sort_within_context_Errors_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___errors___sort_within_context_Errors_env_vtable;
    self->_i = CPY_INT_TAG;
    self->_i0 = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___errors___sort_within_context_Errors_env(void)
{
    PyObject *self = mypy___errors___sort_within_context_Errors_env_setup(CPyType_mypy___errors___sort_within_context_Errors_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_____get__(self, instance, owner);
}
PyMemberDef mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_setup(PyTypeObject *type);
PyObject *CPyDef_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj(void);

static PyObject *
mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_setup(type);
}

static int
mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_traverse(mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject))));
    return 0;
}

static int
mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_clear(mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject))));
    return 0;
}

static void
mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_dealloc(mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_dealloc)
    mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_vtable[2];
static bool
CPyDef_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_trait_vtable_setup(void)
{
    CPyVTableItem mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_____call__,
        (CPyVTableItem)CPyDef_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_____get__,
    };
    memcpy(mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_vtable, mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_vtable_scratch, sizeof(mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_vtable));
    return 1;
}

static PyMethodDef mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__2_sort_within_context_Errors_obj",
    .tp_new = mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_new,
    .tp_dealloc = (destructor)mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_dealloc,
    .tp_traverse = (traverseproc)mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_traverse,
    .tp_clear = (inquiry)mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_clear,
    .tp_methods = mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj,
    .tp_members = mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_members,
    .tp_basicsize = sizeof(mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject),
    .tp_weaklistoffset = sizeof(mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_template = &CPyType_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_template_;

static PyObject *
mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_setup(PyTypeObject *type)
{
    mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject *self;
    self = (mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_vtable;
    self->vectorcall = CPyPy_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj(void)
{
    PyObject *self = mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_setup(CPyType_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef mypy___errorsmodule_methods[] = {
    {"remove_path_prefix", (PyCFunction)CPyPy_mypy___errors___remove_path_prefix, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"report_internal_error", (PyCFunction)CPyPy_mypy___errors___report_internal_error, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mypy___errorsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.errors",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    mypy___errorsmodule_methods
};

PyObject *CPyInit_mypy___errors(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___errors_internal) {
        Py_INCREF(CPyModule_mypy___errors_internal);
        return CPyModule_mypy___errors_internal;
    }
    CPyModule_mypy___errors_internal = PyModule_Create(&mypy___errorsmodule);
    if (unlikely(CPyModule_mypy___errors_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___errors_internal, "__name__");
    CPyStatic_mypy___errors___globals = PyModule_GetDict(CPyModule_mypy___errors_internal);
    if (unlikely(CPyStatic_mypy___errors___globals == NULL))
        goto fail;
    CPyType_mypy___errors___initialize_Errors_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_mypy___errors___initialize_Errors_env_template, NULL, modname);
    if (unlikely(!CPyType_mypy___errors___initialize_Errors_env))
        goto fail;
    CPyType_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_template, NULL, modname);
    if (unlikely(!CPyType_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj))
        goto fail;
    CPyType_mypy___errors___sort_messages_Errors_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_mypy___errors___sort_messages_Errors_env_template, NULL, modname);
    if (unlikely(!CPyType_mypy___errors___sort_messages_Errors_env))
        goto fail;
    CPyType_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_template, NULL, modname);
    if (unlikely(!CPyType_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj))
        goto fail;
    CPyType_mypy___errors___sort_within_context_Errors_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_mypy___errors___sort_within_context_Errors_env_template, NULL, modname);
    if (unlikely(!CPyType_mypy___errors___sort_within_context_Errors_env))
        goto fail;
    CPyType_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_template, NULL, modname);
    if (unlikely(!CPyType_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_mypy___errors_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___errors_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___errors_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_mypy___errors___SHOW_NOTE_CODES);
    CPyStatic_mypy___errors___SHOW_NOTE_CODES = NULL;
    CPy_XDECREF(CPyStatic_mypy___errors___HIDE_LINK_CODES);
    CPyStatic_mypy___errors___HIDE_LINK_CODES = NULL;
    CPy_XDECREF(CPyStatic_mypy___errors___allowed_duplicates);
    CPyStatic_mypy___errors___allowed_duplicates = NULL;
    CPy_XDECREF(CPyStatic_mypy___errors___original_error_codes);
    CPyStatic_mypy___errors___original_error_codes = NULL;
    Py_CLEAR(CPyType_mypy___errors___ErrorInfo);
    Py_CLEAR(CPyType_mypy___errors___ErrorWatcher);
    Py_CLEAR(CPyType_mypy___errors___Errors);
    Py_CLEAR(CPyType_mypy___errors___CompileError);
    Py_CLEAR(CPyType_mypy___errors___initialize_Errors_env);
    Py_CLEAR(CPyType_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj);
    Py_CLEAR(CPyType_mypy___errors___sort_messages_Errors_env);
    Py_CLEAR(CPyType_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj);
    Py_CLEAR(CPyType_mypy___errors___sort_within_context_Errors_env);
    Py_CLEAR(CPyType_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj);
    return NULL;
}

char CPyDef_mypy___errors___ErrorInfo_____init__(PyObject *cpy_r_self, PyObject *cpy_r_import_ctx, PyObject *cpy_r_file, PyObject *cpy_r_module, PyObject *cpy_r_typ, PyObject *cpy_r_function_or_member, CPyTagged cpy_r_line, CPyTagged cpy_r_column, CPyTagged cpy_r_end_line, CPyTagged cpy_r_end_column, PyObject *cpy_r_severity, PyObject *cpy_r_message, PyObject *cpy_r_code, char cpy_r_blocker, char cpy_r_only_once, char cpy_r_allow_dups, PyObject *cpy_r_origin, PyObject *cpy_r_target, CPyTagged cpy_r_priority) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    tuple_T2OO cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    tuple_T2OO cpy_r_r23;
    tuple_T2OO cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyPtr cpy_r_r27;
    CPyPtr cpy_r_r28;
    tuple_T2OO cpy_r_r29;
    PyObject *cpy_r_r30;
    tuple_T2OO cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    if (cpy_r_origin != NULL) goto CPyL16;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_origin = cpy_r_r0;
CPyL2: ;
    if (cpy_r_target != NULL) goto CPyL17;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_target = cpy_r_r1;
CPyL4: ;
    if (cpy_r_priority != CPY_INT_TAG) goto CPyL18;
    cpy_r_priority = 0;
CPyL6: ;
    CPy_INCREF(cpy_r_import_ctx);
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_import_ctx = cpy_r_import_ctx;
    CPy_INCREF(cpy_r_file);
    CPy_DECREF(((mypy___errors___ErrorInfoObject *)cpy_r_self)->_file);
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_file = cpy_r_file;
    CPy_INCREF(cpy_r_module);
    CPy_DECREF(((mypy___errors___ErrorInfoObject *)cpy_r_self)->_module);
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_module = cpy_r_module;
    CPy_INCREF(cpy_r_typ);
    CPy_DECREF(((mypy___errors___ErrorInfoObject *)cpy_r_self)->_type);
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_type = cpy_r_typ;
    CPy_INCREF(cpy_r_function_or_member);
    CPy_DECREF(((mypy___errors___ErrorInfoObject *)cpy_r_self)->_function_or_member);
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_function_or_member = cpy_r_function_or_member;
    CPyTagged_INCREF(cpy_r_line);
    CPyTagged_DECREF(((mypy___errors___ErrorInfoObject *)cpy_r_self)->_line);
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_line = cpy_r_line;
    CPyTagged_INCREF(cpy_r_column);
    CPyTagged_DECREF(((mypy___errors___ErrorInfoObject *)cpy_r_self)->_column);
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_column = cpy_r_column;
    CPyTagged_INCREF(cpy_r_end_line);
    CPyTagged_DECREF(((mypy___errors___ErrorInfoObject *)cpy_r_self)->_end_line);
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_end_line = cpy_r_end_line;
    CPyTagged_INCREF(cpy_r_end_column);
    CPyTagged_DECREF(((mypy___errors___ErrorInfoObject *)cpy_r_self)->_end_column);
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_end_column = cpy_r_end_column;
    CPy_INCREF(cpy_r_severity);
    CPy_DECREF(((mypy___errors___ErrorInfoObject *)cpy_r_self)->_severity);
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_severity = cpy_r_severity;
    CPy_INCREF(cpy_r_message);
    CPy_DECREF(((mypy___errors___ErrorInfoObject *)cpy_r_self)->_message);
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_message = cpy_r_message;
    CPy_INCREF(cpy_r_code);
    CPy_DECREF(((mypy___errors___ErrorInfoObject *)cpy_r_self)->_code);
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_code = cpy_r_code;
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_blocker = cpy_r_blocker;
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_only_once = cpy_r_only_once;
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_allow_dups = cpy_r_allow_dups;
    cpy_r_r16 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r17 = cpy_r_origin != cpy_r_r16;
    if (!cpy_r_r17) goto CPyL19;
    PyObject *__tmp2052;
    if (unlikely(!(PyTuple_Check(cpy_r_origin) && PyTuple_GET_SIZE(cpy_r_origin) == 2))) {
        __tmp2052 = NULL;
        goto __LL2053;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_origin, 0))))
        __tmp2052 = PyTuple_GET_ITEM(cpy_r_origin, 0);
    else {
        __tmp2052 = NULL;
    }
    if (__tmp2052 == NULL) goto __LL2053;
    __tmp2052 = PyTuple_GET_ITEM(cpy_r_origin, 1);
    if (__tmp2052 == NULL) goto __LL2053;
    __tmp2052 = cpy_r_origin;
__LL2053: ;
    if (unlikely(__tmp2052 == NULL)) {
        CPy_TypeError("tuple[str, object]", cpy_r_origin); cpy_r_r18 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2054 = PyTuple_GET_ITEM(cpy_r_origin, 0);
        CPy_INCREF(__tmp2054);
        PyObject *__tmp2055;
        if (likely(PyUnicode_Check(__tmp2054)))
            __tmp2055 = __tmp2054;
        else {
            CPy_TypeError("str", __tmp2054); 
            __tmp2055 = NULL;
        }
        cpy_r_r18.f0 = __tmp2055;
        PyObject *__tmp2056 = PyTuple_GET_ITEM(cpy_r_origin, 1);
        CPy_INCREF(__tmp2056);
        PyObject *__tmp2057;
        __tmp2057 = __tmp2056;
        cpy_r_r18.f1 = __tmp2057;
    }
    if (unlikely(cpy_r_r18.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "__init__", 127, CPyStatic_mypy___errors___globals);
        goto CPyL20;
    }
    cpy_r_r19 = PyTuple_New(2);
    if (unlikely(cpy_r_r19 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2058 = cpy_r_r18.f0;
    PyTuple_SET_ITEM(cpy_r_r19, 0, __tmp2058);
    PyObject *__tmp2059 = cpy_r_r18.f1;
    PyTuple_SET_ITEM(cpy_r_r19, 1, __tmp2059);
    cpy_r_r20 = PyObject_IsTrue(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/errors.py", "__init__", 127, CPyStatic_mypy___errors___globals);
        goto CPyL20;
    }
    cpy_r_r22 = cpy_r_r20;
    if (!cpy_r_r22) goto CPyL19;
    PyObject *__tmp2060;
    if (unlikely(!(PyTuple_Check(cpy_r_origin) && PyTuple_GET_SIZE(cpy_r_origin) == 2))) {
        __tmp2060 = NULL;
        goto __LL2061;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_origin, 0))))
        __tmp2060 = PyTuple_GET_ITEM(cpy_r_origin, 0);
    else {
        __tmp2060 = NULL;
    }
    if (__tmp2060 == NULL) goto __LL2061;
    __tmp2060 = PyTuple_GET_ITEM(cpy_r_origin, 1);
    if (__tmp2060 == NULL) goto __LL2061;
    __tmp2060 = cpy_r_origin;
__LL2061: ;
    if (unlikely(__tmp2060 == NULL)) {
        CPy_TypeError("tuple[str, object]", cpy_r_origin); cpy_r_r23 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp2062 = PyTuple_GET_ITEM(cpy_r_origin, 0);
        CPy_INCREF(__tmp2062);
        PyObject *__tmp2063;
        if (likely(PyUnicode_Check(__tmp2062)))
            __tmp2063 = __tmp2062;
        else {
            CPy_TypeError("str", __tmp2062); 
            __tmp2063 = NULL;
        }
        cpy_r_r23.f0 = __tmp2063;
        PyObject *__tmp2064 = PyTuple_GET_ITEM(cpy_r_origin, 1);
        CPy_INCREF(__tmp2064);
        PyObject *__tmp2065;
        __tmp2065 = __tmp2064;
        cpy_r_r23.f1 = __tmp2065;
    }
    CPy_DECREF(cpy_r_origin);
    if (unlikely(cpy_r_r23.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "__init__", 146, CPyStatic_mypy___errors___globals);
        goto CPyL21;
    }
    cpy_r_r24 = cpy_r_r23;
    goto CPyL14;
CPyL12: ;
    cpy_r_r25 = PyList_New(1);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "__init__", 146, CPyStatic_mypy___errors___globals);
        goto CPyL21;
    }
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r26 = CPyTagged_StealAsObject(cpy_r_line);
    cpy_r_r27 = (CPyPtr)&((PyListObject *)cpy_r_r25)->ob_item;
    cpy_r_r28 = *(CPyPtr *)cpy_r_r27;
    *(PyObject * *)cpy_r_r28 = cpy_r_r26;
    cpy_r_r29.f0 = cpy_r_file;
    cpy_r_r29.f1 = cpy_r_r25;
    CPy_INCREF(cpy_r_r29.f0);
    CPy_INCREF(cpy_r_r29.f1);
    cpy_r_r30 = cpy_r_r29.f0;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r29.f0);
    CPy_DECREF(cpy_r_r29.f1);
    cpy_r_r31.f0 = cpy_r_r30;
    cpy_r_r31.f1 = cpy_r_r25;
    CPy_INCREF(cpy_r_r31.f0);
    CPy_INCREF(cpy_r_r31.f1);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r24 = cpy_r_r31;
CPyL14: ;
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_origin = cpy_r_r24;
    CPy_DECREF(((mypy___errors___ErrorInfoObject *)cpy_r_self)->_target);
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_target = cpy_r_target;
    ((mypy___errors___ErrorInfoObject *)cpy_r_self)->_priority = cpy_r_priority;
    return 1;
CPyL15: ;
    cpy_r_r33 = 2;
    return cpy_r_r33;
CPyL16: ;
    CPy_INCREF(cpy_r_origin);
    goto CPyL2;
CPyL17: ;
    CPy_INCREF(cpy_r_target);
    goto CPyL4;
CPyL18: ;
    CPyTagged_INCREF(cpy_r_priority);
    goto CPyL6;
CPyL19: ;
    CPy_DECREF(cpy_r_origin);
    goto CPyL12;
CPyL20: ;
    CPy_DecRef(cpy_r_origin);
    CPy_DecRef(cpy_r_target);
    CPyTagged_DecRef(cpy_r_priority);
    goto CPyL15;
CPyL21: ;
    CPy_DecRef(cpy_r_target);
    CPyTagged_DecRef(cpy_r_priority);
    goto CPyL15;
}

PyObject *CPyPy_mypy___errors___ErrorInfo_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"import_ctx", "origin", "target", "priority", "file", "module", "typ", "function_or_member", "line", "column", "end_line", "end_column", "severity", "message", "code", "blocker", "only_once", "allow_dups", 0};
    PyObject *obj_import_ctx;
    PyObject *obj_file;
    PyObject *obj_module;
    PyObject *obj_typ;
    PyObject *obj_function_or_member;
    PyObject *obj_line;
    PyObject *obj_column;
    PyObject *obj_end_line;
    PyObject *obj_end_column;
    PyObject *obj_severity;
    PyObject *obj_message;
    PyObject *obj_code;
    PyObject *obj_blocker;
    PyObject *obj_only_once;
    PyObject *obj_allow_dups;
    PyObject *obj_origin = NULL;
    PyObject *obj_target = NULL;
    PyObject *obj_priority = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|$OOO@OOOOOOOOOOOOOO", "__init__", kwlist, &obj_import_ctx, &obj_origin, &obj_target, &obj_priority, &obj_file, &obj_module, &obj_typ, &obj_function_or_member, &obj_line, &obj_column, &obj_end_line, &obj_end_column, &obj_severity, &obj_message, &obj_code, &obj_blocker, &obj_only_once, &obj_allow_dups)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___ErrorInfo))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.ErrorInfo", obj_self); 
        goto fail;
    }
    PyObject *arg_import_ctx;
    if (likely(PyList_Check(obj_import_ctx)))
        arg_import_ctx = obj_import_ctx;
    else {
        CPy_TypeError("list", obj_import_ctx); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(PyUnicode_Check(obj_file)))
        arg_file = obj_file;
    else {
        CPy_TypeError("str", obj_file); 
        goto fail;
    }
    PyObject *arg_module;
    if (PyUnicode_Check(obj_module))
        arg_module = obj_module;
    else {
        arg_module = NULL;
    }
    if (arg_module != NULL) goto __LL2066;
    if (obj_module == Py_None)
        arg_module = obj_module;
    else {
        arg_module = NULL;
    }
    if (arg_module != NULL) goto __LL2066;
    CPy_TypeError("str or None", obj_module); 
    goto fail;
__LL2066: ;
    PyObject *arg_typ;
    if (PyUnicode_Check(obj_typ))
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL2067;
    if (obj_typ == Py_None)
        arg_typ = obj_typ;
    else {
        arg_typ = NULL;
    }
    if (arg_typ != NULL) goto __LL2067;
    CPy_TypeError("str or None", obj_typ); 
    goto fail;
__LL2067: ;
    PyObject *arg_function_or_member;
    if (PyUnicode_Check(obj_function_or_member))
        arg_function_or_member = obj_function_or_member;
    else {
        arg_function_or_member = NULL;
    }
    if (arg_function_or_member != NULL) goto __LL2068;
    if (obj_function_or_member == Py_None)
        arg_function_or_member = obj_function_or_member;
    else {
        arg_function_or_member = NULL;
    }
    if (arg_function_or_member != NULL) goto __LL2068;
    CPy_TypeError("str or None", obj_function_or_member); 
    goto fail;
__LL2068: ;
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
    CPyTagged arg_end_line;
    if (likely(PyLong_Check(obj_end_line)))
        arg_end_line = CPyTagged_BorrowFromObject(obj_end_line);
    else {
        CPy_TypeError("int", obj_end_line); goto fail;
    }
    CPyTagged arg_end_column;
    if (likely(PyLong_Check(obj_end_column)))
        arg_end_column = CPyTagged_BorrowFromObject(obj_end_column);
    else {
        CPy_TypeError("int", obj_end_column); goto fail;
    }
    PyObject *arg_severity;
    if (likely(PyUnicode_Check(obj_severity)))
        arg_severity = obj_severity;
    else {
        CPy_TypeError("str", obj_severity); 
        goto fail;
    }
    PyObject *arg_message;
    if (likely(PyUnicode_Check(obj_message)))
        arg_message = obj_message;
    else {
        CPy_TypeError("str", obj_message); 
        goto fail;
    }
    PyObject *arg_code;
    if (PyObject_TypeCheck(obj_code, CPyType_errorcodes___ErrorCode))
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL2069;
    if (obj_code == Py_None)
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL2069;
    CPy_TypeError("mypy.errorcodes.ErrorCode or None", obj_code); 
    goto fail;
__LL2069: ;
    char arg_blocker;
    if (unlikely(!PyBool_Check(obj_blocker))) {
        CPy_TypeError("bool", obj_blocker); goto fail;
    } else
        arg_blocker = obj_blocker == Py_True;
    char arg_only_once;
    if (unlikely(!PyBool_Check(obj_only_once))) {
        CPy_TypeError("bool", obj_only_once); goto fail;
    } else
        arg_only_once = obj_only_once == Py_True;
    char arg_allow_dups;
    if (unlikely(!PyBool_Check(obj_allow_dups))) {
        CPy_TypeError("bool", obj_allow_dups); goto fail;
    } else
        arg_allow_dups = obj_allow_dups == Py_True;
    PyObject *arg_origin;
    if (obj_origin == NULL) {
        arg_origin = NULL;
        goto __LL2070;
    }
    if (unlikely(!(PyTuple_Check(obj_origin) && PyTuple_GET_SIZE(obj_origin) == 2))) {
        arg_origin = NULL;
        goto __LL2071;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(obj_origin, 0))))
        arg_origin = PyTuple_GET_ITEM(obj_origin, 0);
    else {
        arg_origin = NULL;
    }
    if (arg_origin == NULL) goto __LL2071;
    arg_origin = PyTuple_GET_ITEM(obj_origin, 1);
    if (arg_origin == NULL) goto __LL2071;
    arg_origin = obj_origin;
__LL2071: ;
    if (arg_origin != NULL) goto __LL2070;
    if (obj_origin == Py_None)
        arg_origin = obj_origin;
    else {
        arg_origin = NULL;
    }
    if (arg_origin != NULL) goto __LL2070;
    CPy_TypeError("tuple[str, object] or None", obj_origin); 
    goto fail;
__LL2070: ;
    PyObject *arg_target;
    if (obj_target == NULL) {
        arg_target = NULL;
        goto __LL2072;
    }
    if (PyUnicode_Check(obj_target))
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL2072;
    if (obj_target == Py_None)
        arg_target = obj_target;
    else {
        arg_target = NULL;
    }
    if (arg_target != NULL) goto __LL2072;
    CPy_TypeError("str or None", obj_target); 
    goto fail;
__LL2072: ;
    CPyTagged arg_priority;
    if (obj_priority == NULL) {
        arg_priority = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_priority)))
        arg_priority = CPyTagged_BorrowFromObject(obj_priority);
    else {
        CPy_TypeError("int", obj_priority); goto fail;
    }
    char retval = CPyDef_mypy___errors___ErrorInfo_____init__(arg_self, arg_import_ctx, arg_file, arg_module, arg_typ, arg_function_or_member, arg_line, arg_column, arg_end_line, arg_end_column, arg_severity, arg_message, arg_code, arg_blocker, arg_only_once, arg_allow_dups, arg_origin, arg_target, arg_priority);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "__init__", 109, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___ErrorInfo_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r0);
    ((mypy___errors___ErrorInfoObject *)cpy_r___mypyc_self__)->_file = cpy_r_r0;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    ((mypy___errors___ErrorInfoObject *)cpy_r___mypyc_self__)->_module = cpy_r_r1;
    cpy_r_r2 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r2);
    ((mypy___errors___ErrorInfoObject *)cpy_r___mypyc_self__)->_type = cpy_r_r2;
    cpy_r_r3 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r3);
    ((mypy___errors___ErrorInfoObject *)cpy_r___mypyc_self__)->_function_or_member = cpy_r_r3;
    ((mypy___errors___ErrorInfoObject *)cpy_r___mypyc_self__)->_line = 0;
    ((mypy___errors___ErrorInfoObject *)cpy_r___mypyc_self__)->_column = 0;
    ((mypy___errors___ErrorInfoObject *)cpy_r___mypyc_self__)->_end_line = 0;
    ((mypy___errors___ErrorInfoObject *)cpy_r___mypyc_self__)->_end_column = 0;
    cpy_r_r4 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r4);
    ((mypy___errors___ErrorInfoObject *)cpy_r___mypyc_self__)->_severity = cpy_r_r4;
    cpy_r_r5 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r5);
    ((mypy___errors___ErrorInfoObject *)cpy_r___mypyc_self__)->_message = cpy_r_r5;
    cpy_r_r6 = Py_None;
    CPy_INCREF(cpy_r_r6);
    ((mypy___errors___ErrorInfoObject *)cpy_r___mypyc_self__)->_code = cpy_r_r6;
    ((mypy___errors___ErrorInfoObject *)cpy_r___mypyc_self__)->_blocker = 0;
    ((mypy___errors___ErrorInfoObject *)cpy_r___mypyc_self__)->_only_once = 0;
    ((mypy___errors___ErrorInfoObject *)cpy_r___mypyc_self__)->_allow_dups = 0;
    cpy_r_r7 = Py_None;
    CPy_INCREF(cpy_r_r7);
    ((mypy___errors___ErrorInfoObject *)cpy_r___mypyc_self__)->_target = cpy_r_r7;
    ((mypy___errors___ErrorInfoObject *)cpy_r___mypyc_self__)->_hidden = 0;
    return 1;
}

PyObject *CPyPy_mypy___errors___ErrorInfo_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_mypy___errors___ErrorInfo))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.errors.ErrorInfo", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___ErrorInfo_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "__mypyc_defaults_setup", -1, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___ErrorWatcher_____init__(PyObject *cpy_r_self, PyObject *cpy_r_errors, PyObject *cpy_r_filter_errors, char cpy_r_save_filtered_errors) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    if (cpy_r_filter_errors != NULL) goto CPyL10;
    cpy_r_r0 = 0 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r0);
    cpy_r_filter_errors = cpy_r_r0;
CPyL2: ;
    if (cpy_r_save_filtered_errors != 2) goto CPyL4;
    cpy_r_save_filtered_errors = 0;
CPyL4: ;
    CPy_INCREF(cpy_r_errors);
    ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->_errors = cpy_r_errors;
    ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->__has_new_errors = 0;
    ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->__filter = cpy_r_filter_errors;
    if (!cpy_r_save_filtered_errors) goto CPyL7;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "__init__", 177, CPyStatic_mypy___errors___globals);
        goto CPyL9;
    }
    cpy_r_r2 = cpy_r_r1;
    goto CPyL8;
CPyL7: ;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r2 = cpy_r_r3;
CPyL8: ;
    ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->__filtered = cpy_r_r2;
    return 1;
CPyL9: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
CPyL10: ;
    CPy_INCREF(cpy_r_filter_errors);
    goto CPyL2;
}

PyObject *CPyPy_mypy___errors___ErrorWatcher_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"errors", "filter_errors", "save_filtered_errors", 0};
    PyObject *obj_errors;
    PyObject *obj_filter_errors = NULL;
    PyObject *obj_save_filtered_errors = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|$OO", "__init__", kwlist, &obj_errors, &obj_filter_errors, &obj_save_filtered_errors)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___ErrorWatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.ErrorWatcher", obj_self); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypy___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_errors); 
        goto fail;
    }
    PyObject *arg_filter_errors;
    if (obj_filter_errors == NULL) {
        arg_filter_errors = NULL;
        goto __LL2073;
    }
    if (PyBool_Check(obj_filter_errors))
        arg_filter_errors = obj_filter_errors;
    else {
        arg_filter_errors = NULL;
    }
    if (arg_filter_errors != NULL) goto __LL2073;
    arg_filter_errors = obj_filter_errors;
    if (arg_filter_errors != NULL) goto __LL2073;
    CPy_TypeError("union[bool, object]", obj_filter_errors); 
    goto fail;
__LL2073: ;
    char arg_save_filtered_errors;
    if (obj_save_filtered_errors == NULL) {
        arg_save_filtered_errors = 2;
    } else if (unlikely(!PyBool_Check(obj_save_filtered_errors))) {
        CPy_TypeError("bool", obj_save_filtered_errors); goto fail;
    } else
        arg_save_filtered_errors = obj_save_filtered_errors == Py_True;
    char retval = CPyDef_mypy___errors___ErrorWatcher_____init__(arg_self, arg_errors, arg_filter_errors, arg_save_filtered_errors);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "__init__", 167, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___ErrorWatcher_____enter__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->_errors;
    cpy_r_r1 = ((mypy___errors___ErrorsObject *)cpy_r_r0)->__watchers;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyList_Append(cpy_r_r1, cpy_r_self);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/errors.py", "__enter__", 180, CPyStatic_mypy___errors___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_self);
    return cpy_r_self;
CPyL2: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_mypy___errors___ErrorWatcher_____enter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__enter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___ErrorWatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.ErrorWatcher", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___errors___ErrorWatcher_____enter__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "__enter__", 179, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___ErrorWatcher_____exit__(PyObject *cpy_r_self, PyObject *cpy_r_exc_type, PyObject *cpy_r_exc_val, PyObject *cpy_r_exc_tb) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_last;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->_errors;
    cpy_r_r1 = ((mypy___errors___ErrorsObject *)cpy_r_r0)->__watchers;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyList_PopLast(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "__exit__", 184, CPyStatic_mypy___errors___globals);
        goto CPyL6;
    }
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_mypy___errors___ErrorWatcher))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "__exit__", 184, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorWatcher", cpy_r_r2);
        goto CPyL6;
    }
    cpy_r_last = cpy_r_r3;
    cpy_r_r4 = cpy_r_last == cpy_r_self;
    CPy_DECREF(cpy_r_last);
    if (cpy_r_r4) goto CPyL5;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/errors.py", "__exit__", 185, CPyStatic_mypy___errors___globals);
        goto CPyL6;
    }
    CPy_Unreachable();
CPyL5: ;
    return 0;
CPyL6: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_mypy___errors___ErrorWatcher_____exit__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"exc_type", "exc_val", "exc_tb", 0};
    static CPyArg_Parser parser = {"OOO:__exit__", kwlist, 0};
    PyObject *obj_exc_type;
    PyObject *obj_exc_val;
    PyObject *obj_exc_tb;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_exc_type, &obj_exc_val, &obj_exc_tb)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___ErrorWatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.ErrorWatcher", obj_self); 
        goto fail;
    }
    PyObject *arg_exc_type = obj_exc_type;
    PyObject *arg_exc_val = obj_exc_val;
    PyObject *arg_exc_tb = obj_exc_tb;
    char retval = CPyDef_mypy___errors___ErrorWatcher_____exit__(arg_self, arg_exc_type, arg_exc_val, arg_exc_tb);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "__exit__", 183, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___ErrorWatcher___on_error(PyObject *cpy_r_self, PyObject *cpy_r_file, PyObject *cpy_r_info) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_should_filter;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject **cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
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
    CPyPtr cpy_r_r32;
    CPyPtr cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->__has_new_errors = 1;
    cpy_r_r1 = ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->__filter;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (PyObject *)&PyBool_Type;
    cpy_r_r3 = PyObject_IsInstance(cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/errors.py", "on_error", 197, CPyStatic_mypy___errors___globals);
        goto CPyL23;
    }
    cpy_r_r5 = cpy_r_r3;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->__filter;
    CPy_INCREF(cpy_r_r6);
    if (unlikely(!PyBool_Check(cpy_r_r6))) {
        CPy_TypeError("bool", cpy_r_r6); cpy_r_r7 = 2;
    } else
        cpy_r_r7 = cpy_r_r6 == Py_True;
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "on_error", 198, CPyStatic_mypy___errors___globals);
        goto CPyL23;
    }
    cpy_r_should_filter = cpy_r_r7;
    goto CPyL18;
CPyL4: ;
    cpy_r_r8 = ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->__filter;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyModule_builtins;
    cpy_r_r10 = CPyStatics[1540]; /* 'callable' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "on_error", 199, CPyStatic_mypy___errors___globals);
        goto CPyL24;
    }
    PyObject *cpy_r_r12[1] = {cpy_r_r8};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r13, 1, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "on_error", 199, CPyStatic_mypy___errors___globals);
        goto CPyL24;
    }
    CPy_DECREF(cpy_r_r8);
    if (unlikely(!PyBool_Check(cpy_r_r14))) {
        CPy_TypeError("bool", cpy_r_r14); cpy_r_r15 = 2;
    } else
        cpy_r_r15 = cpy_r_r14 == Py_True;
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "on_error", 199, CPyStatic_mypy___errors___globals);
        goto CPyL23;
    }
    if (!cpy_r_r15) goto CPyL11;
    cpy_r_r16 = ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->__filter;
    CPy_INCREF(cpy_r_r16);
    PyObject *cpy_r_r17[2] = {cpy_r_file, cpy_r_info};
    cpy_r_r18 = (PyObject **)&cpy_r_r17;
    cpy_r_r19 = _PyObject_Vectorcall(cpy_r_r16, cpy_r_r18, 2, 0);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "on_error", 200, CPyStatic_mypy___errors___globals);
        goto CPyL23;
    }
    if (unlikely(!PyBool_Check(cpy_r_r19))) {
        CPy_TypeError("bool", cpy_r_r19); cpy_r_r20 = 2;
    } else
        cpy_r_r20 = cpy_r_r19 == Py_True;
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "on_error", 200, CPyStatic_mypy___errors___globals);
        goto CPyL23;
    }
    cpy_r_should_filter = cpy_r_r20;
    goto CPyL18;
CPyL11: ;
    cpy_r_r21 = CPyStatics[163]; /* '' */
    cpy_r_r22 = CPyStatics[2212]; /* 'invalid error filter: ' */
    cpy_r_r23 = CPyStatics[221]; /* '{:{}}' */
    cpy_r_r24 = ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->__filter;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = PyObject_Type(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = CPyStatics[163]; /* '' */
    cpy_r_r27 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r28[3] = {cpy_r_r23, cpy_r_r25, cpy_r_r26};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = PyObject_VectorcallMethod(cpy_r_r27, cpy_r_r29, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "on_error", 202, CPyStatic_mypy___errors___globals);
        goto CPyL25;
    }
    CPy_DECREF(cpy_r_r25);
    cpy_r_r31 = PyList_New(2);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "on_error", 202, CPyStatic_mypy___errors___globals);
        goto CPyL26;
    }
    cpy_r_r32 = (CPyPtr)&((PyListObject *)cpy_r_r31)->ob_item;
    cpy_r_r33 = *(CPyPtr *)cpy_r_r32;
    CPy_INCREF(cpy_r_r22);
    *(PyObject * *)cpy_r_r33 = cpy_r_r22;
    cpy_r_r34 = cpy_r_r33 + 8;
    *(PyObject * *)cpy_r_r34 = cpy_r_r30;
    cpy_r_r35 = PyUnicode_Join(cpy_r_r21, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "on_error", 202, CPyStatic_mypy___errors___globals);
        goto CPyL23;
    }
    cpy_r_r36 = CPyModule_builtins;
    cpy_r_r37 = CPyStatics[23]; /* 'AssertionError' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "on_error", 202, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    PyObject *cpy_r_r39[1] = {cpy_r_r35};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = _PyObject_Vectorcall(cpy_r_r38, cpy_r_r40, 1, 0);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "on_error", 202, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    CPy_DECREF(cpy_r_r35);
    CPy_Raise(cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/errors.py", "on_error", 202, CPyStatic_mypy___errors___globals);
        goto CPyL23;
    }
    CPy_Unreachable();
CPyL18: ;
    if (!cpy_r_should_filter) goto CPyL22;
    cpy_r_r42 = ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->__filtered;
    cpy_r_r43 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r44 = cpy_r_r42 != cpy_r_r43;
    if (!cpy_r_r44) goto CPyL22;
    cpy_r_r45 = ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->__filtered;
    CPy_INCREF(cpy_r_r45);
    if (likely(cpy_r_r45 != Py_None))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "on_error", 204, CPyStatic_mypy___errors___globals, "list", cpy_r_r45);
        goto CPyL23;
    }
    cpy_r_r47 = PyList_Append(cpy_r_r46, cpy_r_info);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/errors.py", "on_error", 204, CPyStatic_mypy___errors___globals);
        goto CPyL23;
    }
CPyL22: ;
    return cpy_r_should_filter;
CPyL23: ;
    cpy_r_r49 = 2;
    return cpy_r_r49;
CPyL24: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL23;
CPyL26: ;
    CPy_DecRef(cpy_r_r30);
    goto CPyL23;
CPyL27: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL23;
}

PyObject *CPyPy_mypy___errors___ErrorWatcher___on_error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", "info", 0};
    static CPyArg_Parser parser = {"OO:on_error", kwlist, 0};
    PyObject *obj_file;
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_file, &obj_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___ErrorWatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.ErrorWatcher", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(PyUnicode_Check(obj_file)))
        arg_file = obj_file;
    else {
        CPy_TypeError("str", obj_file); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely(Py_TYPE(obj_info) == CPyType_mypy___errors___ErrorInfo))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.errors.ErrorInfo", obj_info); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___ErrorWatcher___on_error(arg_self, arg_file, arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "on_error", 188, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___ErrorWatcher___has_new_errors(PyObject *cpy_r_self) {
    char cpy_r_r0;
    cpy_r_r0 = ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->__has_new_errors;
    return cpy_r_r0;
}

PyObject *CPyPy_mypy___errors___ErrorWatcher___has_new_errors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":has_new_errors", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___ErrorWatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.ErrorWatcher", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___ErrorWatcher___has_new_errors(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "has_new_errors", 208, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___ErrorWatcher___filtered_errors(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->__filtered;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/errors.py", "filtered_errors", 212, CPyStatic_mypy___errors___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = ((mypy___errors___ErrorWatcherObject *)cpy_r_self)->__filtered;
    CPy_INCREF(cpy_r_r4);
    if (likely(cpy_r_r4 != Py_None))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "filtered_errors", 213, CPyStatic_mypy___errors___globals, "list", cpy_r_r4);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
}

PyObject *CPyPy_mypy___errors___ErrorWatcher___filtered_errors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":filtered_errors", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___ErrorWatcher))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.ErrorWatcher", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___errors___ErrorWatcher___filtered_errors(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "filtered_errors", 211, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors_____init__(PyObject *cpy_r_self, PyObject *cpy_r_options, PyObject *cpy_r_read_source, PyObject *cpy_r_hide_error_codes) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    if (cpy_r_read_source != NULL) goto CPyL11;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_read_source = cpy_r_r0;
CPyL2: ;
    if (cpy_r_hide_error_codes != NULL) goto CPyL12;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_hide_error_codes = cpy_r_r1;
CPyL4: ;
    CPy_INCREF(cpy_r_options);
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_options = cpy_r_options;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_hide_error_codes != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL13;
    if (unlikely(!PyBool_Check(cpy_r_hide_error_codes))) {
        CPy_TypeError("bool", cpy_r_hide_error_codes); cpy_r_r4 = 2;
    } else
        cpy_r_r4 = cpy_r_hide_error_codes == Py_True;
    CPy_DECREF(cpy_r_hide_error_codes);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "__init__", 294, CPyStatic_mypy___errors___globals);
        goto CPyL14;
    }
    cpy_r_r5 = cpy_r_r4;
    goto CPyL8;
CPyL7: ;
    cpy_r_r6 = ((mypy___options___OptionsObject *)cpy_r_options)->_hide_error_codes;
    cpy_r_r5 = cpy_r_r6;
CPyL8: ;
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_hide_error_codes = cpy_r_r5;
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_read_source = cpy_r_read_source;
    cpy_r_r7 = CPyDef_mypy___errors___Errors___initialize(cpy_r_self);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "__init__", 298, CPyStatic_mypy___errors___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL11: ;
    CPy_INCREF(cpy_r_read_source);
    goto CPyL2;
CPyL12: ;
    CPy_INCREF(cpy_r_hide_error_codes);
    goto CPyL4;
CPyL13: ;
    CPy_DECREF(cpy_r_hide_error_codes);
    goto CPyL7;
CPyL14: ;
    CPy_DecRef(cpy_r_read_source);
    goto CPyL10;
}

PyObject *CPyPy_mypy___errors___Errors_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"options", "read_source", "hide_error_codes", 0};
    PyObject *obj_options;
    PyObject *obj_read_source = NULL;
    PyObject *obj_hide_error_codes = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|$OO", "__init__", kwlist, &obj_options, &obj_read_source, &obj_hide_error_codes)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_read_source;
    if (obj_read_source == NULL) {
        arg_read_source = NULL;
        goto __LL2074;
    }
    arg_read_source = obj_read_source;
    if (arg_read_source != NULL) goto __LL2074;
    if (obj_read_source == Py_None)
        arg_read_source = obj_read_source;
    else {
        arg_read_source = NULL;
    }
    if (arg_read_source != NULL) goto __LL2074;
    CPy_TypeError("object or None", obj_read_source); 
    goto fail;
__LL2074: ;
    PyObject *arg_hide_error_codes;
    if (obj_hide_error_codes == NULL) {
        arg_hide_error_codes = NULL;
        goto __LL2075;
    }
    if (PyBool_Check(obj_hide_error_codes))
        arg_hide_error_codes = obj_hide_error_codes;
    else {
        arg_hide_error_codes = NULL;
    }
    if (arg_hide_error_codes != NULL) goto __LL2075;
    if (obj_hide_error_codes == Py_None)
        arg_hide_error_codes = obj_hide_error_codes;
    else {
        arg_hide_error_codes = NULL;
    }
    if (arg_hide_error_codes != NULL) goto __LL2075;
    CPy_TypeError("bool or None", obj_hide_error_codes); 
    goto fail;
__LL2075: ;
    char retval = CPyDef_mypy___errors___Errors_____init__(arg_self, arg_options, arg_read_source, arg_hide_error_codes);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "__init__", 285, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "__get__", -1, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_____call__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = ((mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "<lambda>", "__mypyc_lambda__0_initialize_Errors_obj", "__mypyc_env__", 307, CPyStatic_mypy___errors___globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL6;
CPyL1: ;
    cpy_r_r1 = (PyObject *)&PyList_Type;
    cpy_r_r2 = CPyStatic_mypy___errors___globals;
    cpy_r_r3 = CPyStatics[73]; /* 'defaultdict' */
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<lambda>", 307, CPyStatic_mypy___errors___globals);
        goto CPyL5;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_r1};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<lambda>", 307, CPyStatic_mypy___errors___globals);
        goto CPyL5;
    }
    if (likely(PyDict_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "<lambda>", 307, CPyStatic_mypy___errors___globals, "dict", cpy_r_r7);
        goto CPyL5;
    }
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL6: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__call__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, PyVectorcall_NARGS(nargs), kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *retval = CPyDef_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj_____call__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "<lambda>", 307, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___initialize(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    CPyPtr cpy_r_r9;
    CPyPtr cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
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
    char cpy_r_r36;
    char cpy_r_r37;
    cpy_r_r0 = CPyDef_mypy___errors___initialize_Errors_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 300, CPyStatic_mypy___errors___globals);
        goto CPyL26;
    }
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 301, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    if (((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map != NULL) {
        CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map);
    }
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 301, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    cpy_r_r3 = PySet_New(NULL);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 302, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    if (((mypy___errors___ErrorsObject *)cpy_r_self)->_flushed_files != NULL) {
        CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_flushed_files);
    }
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_flushed_files = cpy_r_r3;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 302, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 303, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    if (((mypy___errors___ErrorsObject *)cpy_r_self)->_import_ctx != NULL) {
        CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_import_ctx);
    }
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_import_ctx = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 303, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    cpy_r_r7 = PyList_New(1);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 304, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    cpy_r_r8 = Py_None;
    cpy_r_r9 = (CPyPtr)&((PyListObject *)cpy_r_r7)->ob_item;
    cpy_r_r10 = *(CPyPtr *)cpy_r_r9;
    CPy_INCREF(cpy_r_r8);
    *(PyObject * *)cpy_r_r10 = cpy_r_r8;
    if (((mypy___errors___ErrorsObject *)cpy_r_self)->_function_or_member != NULL) {
        CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_function_or_member);
    }
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_function_or_member = cpy_r_r7;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 304, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    cpy_r_r12 = PyDict_New();
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 305, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    if (((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_lines != NULL) {
        CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_lines);
    }
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_lines = cpy_r_r12;
    cpy_r_r13 = 1;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 305, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    cpy_r_r14 = PyDict_New();
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 306, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    if (((mypy___errors___ErrorsObject *)cpy_r_self)->_skipped_lines != NULL) {
        CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_skipped_lines);
    }
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_skipped_lines = cpy_r_r14;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 306, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    cpy_r_r16 = CPyDef_mypy___errors_____mypyc_lambda__0_initialize_Errors_obj();
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 307, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    if (((mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject *)cpy_r_r16)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject *)cpy_r_r16)->___mypyc_env__);
    }
    ((mypy___errors_____mypyc_lambda__0_initialize_Errors_objObject *)cpy_r_r16)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 307, CPyStatic_mypy___errors___globals);
        goto CPyL28;
    }
    cpy_r_r18 = CPyStatic_mypy___errors___globals;
    cpy_r_r19 = CPyStatics[73]; /* 'defaultdict' */
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 307, CPyStatic_mypy___errors___globals);
        goto CPyL28;
    }
    PyObject *cpy_r_r21[1] = {cpy_r_r16};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r20, cpy_r_r22, 1, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 307, CPyStatic_mypy___errors___globals);
        goto CPyL28;
    }
    CPy_DECREF(cpy_r_r16);
    if (likely(PyDict_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "initialize", 307, CPyStatic_mypy___errors___globals, "dict", cpy_r_r23);
        goto CPyL26;
    }
    if (((mypy___errors___ErrorsObject *)cpy_r_self)->_used_ignored_lines != NULL) {
        CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_used_ignored_lines);
    }
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_used_ignored_lines = cpy_r_r24;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 307, CPyStatic_mypy___errors___globals);
        goto CPyL26;
    }
    cpy_r_r26 = PySet_New(NULL);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 308, CPyStatic_mypy___errors___globals);
        goto CPyL26;
    }
    if (((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_files != NULL) {
        CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_files);
    }
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_files = cpy_r_r26;
    cpy_r_r27 = 1;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 308, CPyStatic_mypy___errors___globals);
        goto CPyL26;
    }
    cpy_r_r28 = PySet_New(NULL);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 309, CPyStatic_mypy___errors___globals);
        goto CPyL26;
    }
    if (((mypy___errors___ErrorsObject *)cpy_r_self)->_only_once_messages != NULL) {
        CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_only_once_messages);
    }
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_only_once_messages = cpy_r_r28;
    cpy_r_r29 = 1;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 309, CPyStatic_mypy___errors___globals);
        goto CPyL26;
    }
    cpy_r_r30 = PySet_New(NULL);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 310, CPyStatic_mypy___errors___globals);
        goto CPyL26;
    }
    if (((mypy___errors___ErrorsObject *)cpy_r_self)->_has_blockers != NULL) {
        CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_has_blockers);
    }
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_has_blockers = cpy_r_r30;
    cpy_r_r31 = 1;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/errors.py", "initialize", 310, CPyStatic_mypy___errors___globals);
        goto CPyL26;
    }
    cpy_r_r32 = Py_None;
    CPy_INCREF(cpy_r_r32);
    CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_scope);
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_scope = cpy_r_r32;
    cpy_r_r34 = Py_None;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_target_module);
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_target_module = cpy_r_r34;
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_seen_import_error = 0;
    return 1;
CPyL26: ;
    cpy_r_r37 = 2;
    return cpy_r_r37;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL26;
CPyL28: ;
    CPy_DecRef(cpy_r_r16);
    goto CPyL26;
}

PyObject *CPyPy_mypy___errors___Errors___initialize(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":initialize", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors___initialize(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "initialize", 300, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___reset(PyObject *cpy_r_self) {
    char cpy_r_r0;
    char cpy_r_r1;
    cpy_r_r0 = CPyDef_mypy___errors___Errors___initialize(cpy_r_self);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "reset", 316, CPyStatic_mypy___errors___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r1 = 2;
    return cpy_r_r1;
}

PyObject *CPyPy_mypy___errors___Errors___reset(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":reset", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors___reset(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "reset", 315, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___set_ignore_prefix(PyObject *cpy_r_self, PyObject *cpy_r_prefix) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject **cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    cpy_r_r0 = CPyModule_os___path;
    cpy_r_r1 = CPyStatics[2213]; /* 'normpath' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "set_ignore_prefix", 320, CPyStatic_mypy___errors___globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r3[1] = {cpy_r_prefix};
    cpy_r_r4 = (PyObject **)&cpy_r_r3;
    cpy_r_r5 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r4, 1, 0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "set_ignore_prefix", 320, CPyStatic_mypy___errors___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "set_ignore_prefix", 320, CPyStatic_mypy___errors___globals, "str", cpy_r_r5);
        goto CPyL16;
    }
    cpy_r_prefix = cpy_r_r6;
    cpy_r_r7 = CPyModule_os___path;
    cpy_r_r8 = CPyStatics[172]; /* 'basename' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "set_ignore_prefix", 322, CPyStatic_mypy___errors___globals);
        goto CPyL17;
    }
    PyObject *cpy_r_r10[1] = {cpy_r_prefix};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "set_ignore_prefix", 322, CPyStatic_mypy___errors___globals);
        goto CPyL17;
    }
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "set_ignore_prefix", 322, CPyStatic_mypy___errors___globals, "str", cpy_r_r12);
        goto CPyL17;
    }
    cpy_r_r14 = CPyStatics[163]; /* '' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL9;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL9;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/errors.py", "set_ignore_prefix", 322, CPyStatic_mypy___errors___globals);
        goto CPyL17;
    }
CPyL9: ;
    cpy_r_r20 = cpy_r_r15 != 0;
    if (!cpy_r_r20) goto CPyL15;
    cpy_r_r21 = CPyStatic_mypy___errors___globals;
    cpy_r_r22 = CPyStatics[389]; /* 'os' */
    cpy_r_r23 = CPyDict_GetItem(cpy_r_r21, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "set_ignore_prefix", 323, CPyStatic_mypy___errors___globals);
        goto CPyL17;
    }
    cpy_r_r24 = CPyStatics[1512]; /* 'sep' */
    cpy_r_r25 = CPyObject_GetAttr(cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "set_ignore_prefix", 323, CPyStatic_mypy___errors___globals);
        goto CPyL17;
    }
    if (likely(PyUnicode_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "set_ignore_prefix", 323, CPyStatic_mypy___errors___globals, "str", cpy_r_r25);
        goto CPyL17;
    }
    cpy_r_r27 = CPyStr_Append(cpy_r_prefix, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "set_ignore_prefix", 323, CPyStatic_mypy___errors___globals);
        goto CPyL16;
    }
    cpy_r_prefix = cpy_r_r27;
CPyL15: ;
    CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_ignore_prefix);
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_ignore_prefix = cpy_r_prefix;
    return 1;
CPyL16: ;
    cpy_r_r29 = 2;
    return cpy_r_r29;
CPyL17: ;
    CPy_DecRef(cpy_r_prefix);
    goto CPyL16;
}

PyObject *CPyPy_mypy___errors___Errors___set_ignore_prefix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"prefix", 0};
    static CPyArg_Parser parser = {"O:set_ignore_prefix", kwlist, 0};
    PyObject *obj_prefix;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_prefix)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_prefix;
    if (likely(PyUnicode_Check(obj_prefix)))
        arg_prefix = obj_prefix;
    else {
        CPy_TypeError("str", obj_prefix); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors___set_ignore_prefix(arg_self, arg_prefix);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "set_ignore_prefix", 318, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___Errors___simplify_path(PyObject *cpy_r_self, PyObject *cpy_r_file) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    cpy_r_r1 = ((mypy___options___OptionsObject *)cpy_r_r0)->_show_absolute_path;
    if (!cpy_r_r1) goto CPyL5;
CPyL1: ;
    cpy_r_r2 = CPyModule_os___path;
    cpy_r_r3 = CPyStatics[153]; /* 'abspath' */
    cpy_r_r4 = CPyObject_GetAttr(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "simplify_path", 328, CPyStatic_mypy___errors___globals);
        goto CPyL10;
    }
    PyObject *cpy_r_r5[1] = {cpy_r_file};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r4, cpy_r_r6, 1, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "simplify_path", 328, CPyStatic_mypy___errors___globals);
        goto CPyL10;
    }
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "simplify_path", 328, CPyStatic_mypy___errors___globals, "str", cpy_r_r7);
        goto CPyL10;
    }
    return cpy_r_r8;
CPyL5: ;
    cpy_r_r9 = CPyModule_os___path;
    cpy_r_r10 = CPyStatics[2213]; /* 'normpath' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "simplify_path", 330, CPyStatic_mypy___errors___globals);
        goto CPyL10;
    }
    PyObject *cpy_r_r12[1] = {cpy_r_file};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r13, 1, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "simplify_path", 330, CPyStatic_mypy___errors___globals);
        goto CPyL10;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "simplify_path", 330, CPyStatic_mypy___errors___globals, "str", cpy_r_r14);
        goto CPyL10;
    }
    cpy_r_file = cpy_r_r15;
    cpy_r_r16 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_ignore_prefix;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDef_mypy___errors___remove_path_prefix(cpy_r_file, cpy_r_r16);
    CPy_DECREF(cpy_r_file);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "simplify_path", 331, CPyStatic_mypy___errors___globals);
        goto CPyL10;
    }
    return cpy_r_r17;
CPyL10: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
}

PyObject *CPyPy_mypy___errors___Errors___simplify_path(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", 0};
    static CPyArg_Parser parser = {"O:simplify_path", kwlist, 0};
    PyObject *obj_file;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_file)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(PyUnicode_Check(obj_file)))
        arg_file = obj_file;
    else {
        CPy_TypeError("str", obj_file); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___errors___Errors___simplify_path(arg_self, arg_file);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "simplify_path", 326, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___set_file(PyObject *cpy_r_self, PyObject *cpy_r_file, PyObject *cpy_r_module, PyObject *cpy_r_options, PyObject *cpy_r_scope) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    if (cpy_r_scope != NULL) goto CPyL3;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_scope = cpy_r_r0;
CPyL2: ;
    CPy_INCREF(cpy_r_file);
    CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_file);
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_file = cpy_r_file;
    CPy_INCREF(cpy_r_module);
    CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_target_module);
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_target_module = cpy_r_module;
    CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_scope);
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_scope = cpy_r_scope;
    CPy_INCREF(cpy_r_options);
    CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_options);
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_options = cpy_r_options;
    return 1;
CPyL3: ;
    CPy_INCREF(cpy_r_scope);
    goto CPyL2;
}

PyObject *CPyPy_mypy___errors___Errors___set_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", "module", "options", "scope", 0};
    static CPyArg_Parser parser = {"OOO|O:set_file", kwlist, 0};
    PyObject *obj_file;
    PyObject *obj_module;
    PyObject *obj_options;
    PyObject *obj_scope = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_file, &obj_module, &obj_options, &obj_scope)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(PyUnicode_Check(obj_file)))
        arg_file = obj_file;
    else {
        CPy_TypeError("str", obj_file); 
        goto fail;
    }
    PyObject *arg_module;
    if (PyUnicode_Check(obj_module))
        arg_module = obj_module;
    else {
        arg_module = NULL;
    }
    if (arg_module != NULL) goto __LL2076;
    if (obj_module == Py_None)
        arg_module = obj_module;
    else {
        arg_module = NULL;
    }
    if (arg_module != NULL) goto __LL2076;
    CPy_TypeError("str or None", obj_module); 
    goto fail;
__LL2076: ;
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_scope;
    if (obj_scope == NULL) {
        arg_scope = NULL;
        goto __LL2077;
    }
    if (Py_TYPE(obj_scope) == CPyType_scope___Scope)
        arg_scope = obj_scope;
    else {
        arg_scope = NULL;
    }
    if (arg_scope != NULL) goto __LL2077;
    if (obj_scope == Py_None)
        arg_scope = obj_scope;
    else {
        arg_scope = NULL;
    }
    if (arg_scope != NULL) goto __LL2077;
    CPy_TypeError("mypy.scope.Scope or None", obj_scope); 
    goto fail;
__LL2077: ;
    char retval = CPyDef_mypy___errors___Errors___set_file(arg_self, arg_file, arg_module, arg_options, arg_scope);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "set_file", 333, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___set_file_ignored_lines(PyObject *cpy_r_self, PyObject *cpy_r_file, PyObject *cpy_r_ignored_lines, char cpy_r_ignore_all) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    if (cpy_r_ignore_all != 2) goto CPyL2;
    cpy_r_ignore_all = 0;
CPyL2: ;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_lines;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "set_file_ignored_lines", "Errors", "ignored_lines", 351, CPyStatic_mypy___errors___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL3: ;
    cpy_r_r1 = CPyDict_SetItem(cpy_r_r0, cpy_r_file, cpy_r_ignored_lines);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/errors.py", "set_file_ignored_lines", 351, CPyStatic_mypy___errors___globals);
        goto CPyL8;
    }
    if (!cpy_r_ignore_all) goto CPyL7;
    cpy_r_r3 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_files;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "set_file_ignored_lines", "Errors", "ignored_files", 353, CPyStatic_mypy___errors___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r3);
CPyL6: ;
    cpy_r_r4 = PySet_Add(cpy_r_r3, cpy_r_file);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/errors.py", "set_file_ignored_lines", 353, CPyStatic_mypy___errors___globals);
        goto CPyL8;
    }
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_mypy___errors___Errors___set_file_ignored_lines(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", "ignored_lines", "ignore_all", 0};
    static CPyArg_Parser parser = {"OO|O:set_file_ignored_lines", kwlist, 0};
    PyObject *obj_file;
    PyObject *obj_ignored_lines;
    PyObject *obj_ignore_all = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_file, &obj_ignored_lines, &obj_ignore_all)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(PyUnicode_Check(obj_file)))
        arg_file = obj_file;
    else {
        CPy_TypeError("str", obj_file); 
        goto fail;
    }
    PyObject *arg_ignored_lines;
    if (likely(PyDict_Check(obj_ignored_lines)))
        arg_ignored_lines = obj_ignored_lines;
    else {
        CPy_TypeError("dict", obj_ignored_lines); 
        goto fail;
    }
    char arg_ignore_all;
    if (obj_ignore_all == NULL) {
        arg_ignore_all = 2;
    } else if (unlikely(!PyBool_Check(obj_ignore_all))) {
        CPy_TypeError("bool", obj_ignore_all); goto fail;
    } else
        arg_ignore_all = obj_ignore_all == Py_True;
    char retval = CPyDef_mypy___errors___Errors___set_file_ignored_lines(arg_self, arg_file, arg_ignored_lines, arg_ignore_all);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "set_file_ignored_lines", 348, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___set_skipped_lines(PyObject *cpy_r_self, PyObject *cpy_r_file, PyObject *cpy_r_skipped_lines) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_skipped_lines;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "set_skipped_lines", "Errors", "skipped_lines", 356, CPyStatic_mypy___errors___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDict_SetItem(cpy_r_r0, cpy_r_file, cpy_r_skipped_lines);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/errors.py", "set_skipped_lines", 356, CPyStatic_mypy___errors___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_mypy___errors___Errors___set_skipped_lines(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", "skipped_lines", 0};
    static CPyArg_Parser parser = {"OO:set_skipped_lines", kwlist, 0};
    PyObject *obj_file;
    PyObject *obj_skipped_lines;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_file, &obj_skipped_lines)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(PyUnicode_Check(obj_file)))
        arg_file = obj_file;
    else {
        CPy_TypeError("str", obj_file); 
        goto fail;
    }
    PyObject *arg_skipped_lines;
    if (likely(PySet_Check(obj_skipped_lines)))
        arg_skipped_lines = obj_skipped_lines;
    else {
        CPy_TypeError("set", obj_skipped_lines); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors___set_skipped_lines(arg_self, arg_file, arg_skipped_lines);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "set_skipped_lines", 355, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___Errors___current_target(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_scope;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL4;
    cpy_r_r3 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_scope;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "current_target", 363, CPyStatic_mypy___errors___globals, "mypy.scope.Scope", cpy_r_r3);
        goto CPyL5;
    }
    cpy_r_r5 = CPyDef_scope___Scope___current_target(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "current_target", 363, CPyStatic_mypy___errors___globals);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_target_module;
    CPy_INCREF(cpy_r_r6);
    return cpy_r_r6;
CPyL5: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
}

PyObject *CPyPy_mypy___errors___Errors___current_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":current_target", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___errors___Errors___current_target(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "current_target", 358, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___Errors___current_module(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_target_module;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
}

PyObject *CPyPy_mypy___errors___Errors___current_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":current_module", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___errors___Errors___current_module(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "current_module", 366, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___Errors___import_context(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject **cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_import_ctx;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "import_context", "Errors", "import_ctx", 371, CPyStatic_mypy___errors___globals);
        goto CPyL4;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r2[1] = {cpy_r_r0};
    cpy_r_r3 = (PyObject **)&cpy_r_r2;
    cpy_r_r4 = PyObject_VectorcallMethod(cpy_r_r1, cpy_r_r3, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "import_context", 371, CPyStatic_mypy___errors___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r0);
    if (likely(PyList_Check(cpy_r_r4)))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "import_context", 371, CPyStatic_mypy___errors___globals, "list", cpy_r_r4);
        goto CPyL4;
    }
    return cpy_r_r5;
CPyL4: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL5: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL4;
}

PyObject *CPyPy_mypy___errors___Errors___import_context(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":import_context", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___errors___Errors___import_context(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "import_context", 369, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___set_import_context(PyObject *cpy_r_self, PyObject *cpy_r_ctx) {
    PyObject *cpy_r_r0;
    PyObject **cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    cpy_r_r0 = CPyStatics[362]; /* 'copy' */
    PyObject *cpy_r_r1[1] = {cpy_r_ctx};
    cpy_r_r2 = (PyObject **)&cpy_r_r1;
    cpy_r_r3 = PyObject_VectorcallMethod(cpy_r_r0, cpy_r_r2, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "set_import_context", 375, CPyStatic_mypy___errors___globals);
        goto CPyL4;
    }
    if (likely(PyList_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "set_import_context", 375, CPyStatic_mypy___errors___globals, "list", cpy_r_r3);
        goto CPyL4;
    }
    if (((mypy___errors___ErrorsObject *)cpy_r_self)->_import_ctx != NULL) {
        CPy_DECREF(((mypy___errors___ErrorsObject *)cpy_r_self)->_import_ctx);
    }
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_import_ctx = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/errors.py", "set_import_context", 375, CPyStatic_mypy___errors___globals);
        goto CPyL4;
    }
    return 1;
CPyL4: ;
    cpy_r_r6 = 2;
    return cpy_r_r6;
}

PyObject *CPyPy_mypy___errors___Errors___set_import_context(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"ctx", 0};
    static CPyArg_Parser parser = {"O:set_import_context", kwlist, 0};
    PyObject *obj_ctx;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_ctx)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_ctx;
    if (likely(PyList_Check(obj_ctx)))
        arg_ctx = obj_ctx;
    else {
        CPy_TypeError("list", obj_ctx); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors___set_import_context(arg_self, arg_ctx);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "set_import_context", 373, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___report(PyObject *cpy_r_self, CPyTagged cpy_r_line, PyObject *cpy_r_column, PyObject *cpy_r_message, PyObject *cpy_r_code, char cpy_r_blocker, PyObject *cpy_r_severity, PyObject *cpy_r_file, char cpy_r_only_once, char cpy_r_allow_dups, PyObject *cpy_r_origin_span, CPyTagged cpy_r_offset, PyObject *cpy_r_end_line, PyObject *cpy_r_end_column) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_type;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    int64_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_function;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    CPyTagged cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyPtr cpy_r_r49;
    CPyPtr cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyTagged cpy_r_r69;
    CPyTagged cpy_r_r70;
    PyObject *cpy_r_r71;
    tuple_T2OO cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyTagged cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_info;
    char cpy_r_r77;
    char cpy_r_r78;
    if (cpy_r_code != NULL) goto CPyL75;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_code = cpy_r_r0;
CPyL2: ;
    if (cpy_r_blocker != 2) goto CPyL4;
    cpy_r_blocker = 0;
CPyL4: ;
    if (cpy_r_severity != NULL) goto CPyL76;
    cpy_r_r1 = CPyStatics[401]; /* 'error' */
    CPy_INCREF(cpy_r_r1);
    cpy_r_severity = cpy_r_r1;
CPyL6: ;
    if (cpy_r_file != NULL) goto CPyL77;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_file = cpy_r_r2;
CPyL8: ;
    if (cpy_r_only_once != 2) goto CPyL10;
    cpy_r_only_once = 0;
CPyL10: ;
    if (cpy_r_allow_dups != 2) goto CPyL12;
    cpy_r_allow_dups = 0;
CPyL12: ;
    if (cpy_r_origin_span != NULL) goto CPyL78;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    cpy_r_origin_span = cpy_r_r3;
CPyL14: ;
    if (cpy_r_offset != CPY_INT_TAG) goto CPyL79;
    cpy_r_offset = 0;
CPyL16: ;
    if (cpy_r_end_line != NULL) goto CPyL80;
    cpy_r_r4 = Py_None;
    CPy_INCREF(cpy_r_r4);
    cpy_r_end_line = cpy_r_r4;
CPyL18: ;
    if (cpy_r_end_column != NULL) goto CPyL81;
    cpy_r_r5 = Py_None;
    CPy_INCREF(cpy_r_r5);
    cpy_r_end_column = cpy_r_r5;
CPyL20: ;
    cpy_r_r6 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_scope;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r8) goto CPyL31;
    cpy_r_r9 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_scope;
    CPy_INCREF(cpy_r_r9);
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report", 411, CPyStatic_mypy___errors___globals, "mypy.scope.Scope", cpy_r_r9);
        goto CPyL82;
    }
    cpy_r_r11 = CPyDef_scope___Scope___current_type_name(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report", 411, CPyStatic_mypy___errors___globals);
        goto CPyL82;
    }
    cpy_r_type = cpy_r_r11;
    cpy_r_r12 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_scope;
    if (likely(cpy_r_r12 != Py_None))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report", 412, CPyStatic_mypy___errors___globals, "mypy.scope.Scope", cpy_r_r12);
        goto CPyL83;
    }
    cpy_r_r14 = ((mypy___scope___ScopeObject *)cpy_r_r13)->_ignored;
    cpy_r_r15 = cpy_r_r14 & 1;
    cpy_r_r16 = cpy_r_r15 != 0;
    if (!cpy_r_r16) goto CPyL26;
    cpy_r_r17 = CPyTagged_IsLt_(0, cpy_r_r14);
    if (cpy_r_r17) {
        goto CPyL84;
    } else
        goto CPyL28;
CPyL26: ;
    cpy_r_r18 = (Py_ssize_t)cpy_r_r14 > (Py_ssize_t)0;
    if (cpy_r_r18) {
        goto CPyL84;
    } else
        goto CPyL28;
CPyL27: ;
    cpy_r_r19 = Py_None;
    CPy_INCREF(cpy_r_r19);
    cpy_r_type = cpy_r_r19;
CPyL28: ;
    cpy_r_r20 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_scope;
    CPy_INCREF(cpy_r_r20);
    if (likely(cpy_r_r20 != Py_None))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report", 414, CPyStatic_mypy___errors___globals, "mypy.scope.Scope", cpy_r_r20);
        goto CPyL83;
    }
    cpy_r_r22 = CPyDef_scope___Scope___current_function_name(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report", 414, CPyStatic_mypy___errors___globals);
        goto CPyL83;
    }
    cpy_r_function = cpy_r_r22;
    goto CPyL32;
CPyL31: ;
    cpy_r_r23 = Py_None;
    CPy_INCREF(cpy_r_r23);
    cpy_r_type = cpy_r_r23;
    cpy_r_r24 = Py_None;
    CPy_INCREF(cpy_r_r24);
    cpy_r_function = cpy_r_r24;
CPyL32: ;
    cpy_r_r25 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r26 = cpy_r_column == cpy_r_r25;
    if (!cpy_r_r26) goto CPyL85;
    cpy_r_r27 = CPyStatics[9017]; /* -1 */
    CPy_INCREF(cpy_r_r27);
    cpy_r_column = cpy_r_r27;
CPyL34: ;
    cpy_r_r28 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r29 = cpy_r_end_column == cpy_r_r28;
    if (cpy_r_r29) {
        goto CPyL86;
    } else
        goto CPyL40;
CPyL35: ;
    if (likely(PyLong_Check(cpy_r_column)))
        cpy_r_r30 = CPyTagged_FromObject(cpy_r_column);
    else {
        CPy_TypeError("int", cpy_r_column); cpy_r_r30 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r30 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/errors.py", "report", 422, CPyStatic_mypy___errors___globals);
        goto CPyL87;
    }
    cpy_r_r31 = (Py_ssize_t)cpy_r_r30 == -2;
    CPyTagged_DECREF(cpy_r_r30);
    if (!cpy_r_r31) goto CPyL38;
    cpy_r_r32 = CPyStatics[9017]; /* -1 */
    CPy_INCREF(cpy_r_r32);
    cpy_r_end_column = cpy_r_r32;
    goto CPyL40;
CPyL38: ;
    if (likely(PyLong_Check(cpy_r_column)))
        cpy_r_r33 = CPyTagged_FromObject(cpy_r_column);
    else {
        CPy_TypeError("int", cpy_r_column); cpy_r_r33 = CPY_INT_TAG;
    }
    if (unlikely(cpy_r_r33 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/errors.py", "report", 425, CPyStatic_mypy___errors___globals);
        goto CPyL87;
    }
    cpy_r_r34 = CPyTagged_Add(cpy_r_r33, 2);
    CPyTagged_DECREF(cpy_r_r33);
    cpy_r_r35 = CPyTagged_StealAsObject(cpy_r_r34);
    cpy_r_end_column = cpy_r_r35;
CPyL40: ;
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_file == cpy_r_r36;
    if (cpy_r_r37) {
        goto CPyL88;
    } else
        goto CPyL42;
CPyL41: ;
    cpy_r_r38 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_file;
    CPy_INCREF(cpy_r_r38);
    cpy_r_file = cpy_r_r38;
CPyL42: ;
    cpy_r_r39 = cpy_r_offset != 0;
    if (!cpy_r_r39) goto CPyL89;
    cpy_r_r40 = CPyStatics[295]; /* ' ' */
    cpy_r_r41 = CPyTagged_StealAsObject(cpy_r_offset);
    cpy_r_r42 = PyNumber_Multiply(cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report", 430, CPyStatic_mypy___errors___globals);
        goto CPyL90;
    }
    if (likely(PyUnicode_Check(cpy_r_r42)))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report", 430, CPyStatic_mypy___errors___globals, "str", cpy_r_r42);
        goto CPyL90;
    }
    cpy_r_r44 = PyUnicode_Concat(cpy_r_r43, cpy_r_message);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report", 430, CPyStatic_mypy___errors___globals);
        goto CPyL90;
    }
    cpy_r_message = cpy_r_r44;
CPyL47: ;
    cpy_r_r45 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r46 = cpy_r_origin_span == cpy_r_r45;
    if (cpy_r_r46) {
        goto CPyL91;
    } else
        goto CPyL50;
CPyL48: ;
    cpy_r_r47 = PyList_New(1);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report", 433, CPyStatic_mypy___errors___globals);
        goto CPyL92;
    }
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r48 = CPyTagged_StealAsObject(cpy_r_line);
    cpy_r_r49 = (CPyPtr)&((PyListObject *)cpy_r_r47)->ob_item;
    cpy_r_r50 = *(CPyPtr *)cpy_r_r49;
    *(PyObject * *)cpy_r_r50 = cpy_r_r48;
    cpy_r_origin_span = cpy_r_r47;
CPyL50: ;
    cpy_r_r51 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r52 = cpy_r_end_line == cpy_r_r51;
    if (cpy_r_r52) {
        goto CPyL93;
    } else
        goto CPyL52;
CPyL51: ;
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r53 = CPyTagged_StealAsObject(cpy_r_line);
    cpy_r_end_line = cpy_r_r53;
CPyL52: ;
    cpy_r_r54 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r55 = cpy_r_code != cpy_r_r54;
    if (!cpy_r_r55) goto CPyL94;
    CPy_INCREF(cpy_r_code);
    if (likely(cpy_r_code != Py_None))
        cpy_r_r56 = cpy_r_code;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report", 382, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_code);
        goto CPyL95;
    }
    cpy_r_r57 = PyObject_IsTrue(cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/errors.py", "report", 382, CPyStatic_mypy___errors___globals);
        goto CPyL95;
    }
    cpy_r_r59 = cpy_r_r57;
    if (!cpy_r_r59) goto CPyL94;
    cpy_r_r60 = cpy_r_code;
    goto CPyL64;
CPyL57: ;
    if (cpy_r_blocker) goto CPyL62;
    cpy_r_r61 = CPyStatic_errorcodes___MISC;
    if (unlikely(cpy_r_r61 == NULL)) {
        goto CPyL96;
    } else
        goto CPyL61;
CPyL59: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"MISC\" was not set");
    cpy_r_r62 = 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/errors.py", "report", 438, CPyStatic_mypy___errors___globals);
        goto CPyL74;
    }
    CPy_Unreachable();
CPyL61: ;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r63 = cpy_r_r61;
    goto CPyL63;
CPyL62: ;
    cpy_r_r64 = Py_None;
    CPy_INCREF(cpy_r_r64);
    cpy_r_r63 = cpy_r_r64;
CPyL63: ;
    cpy_r_r60 = cpy_r_r63;
CPyL64: ;
    cpy_r_code = cpy_r_r60;
    cpy_r_r65 = CPyDef_mypy___errors___Errors___import_context(cpy_r_self);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report", 441, CPyStatic_mypy___errors___globals);
        goto CPyL95;
    }
    if (likely(cpy_r_file != Py_None))
        cpy_r_r66 = cpy_r_file;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report", 442, CPyStatic_mypy___errors___globals, "str", cpy_r_file);
        goto CPyL97;
    }
    cpy_r_r67 = CPyDef_mypy___errors___Errors___current_module(cpy_r_self);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report", 443, CPyStatic_mypy___errors___globals);
        goto CPyL98;
    }
    if (likely(PyLong_Check(cpy_r_column)))
        cpy_r_r68 = CPyTagged_FromObject(cpy_r_column);
    else {
        CPy_TypeError("int", cpy_r_column); cpy_r_r68 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_column);
    if (unlikely(cpy_r_r68 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/errors.py", "report", 447, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    if (likely(PyLong_Check(cpy_r_end_line)))
        cpy_r_r69 = CPyTagged_FromObject(cpy_r_end_line);
    else {
        CPy_TypeError("int", cpy_r_end_line); cpy_r_r69 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_end_line);
    if (unlikely(cpy_r_r69 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/errors.py", "report", 448, CPyStatic_mypy___errors___globals);
        goto CPyL100;
    }
    if (likely(PyLong_Check(cpy_r_end_column)))
        cpy_r_r70 = CPyTagged_FromObject(cpy_r_end_column);
    else {
        CPy_TypeError("int", cpy_r_end_column); cpy_r_r70 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_end_column);
    if (unlikely(cpy_r_r70 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/errors.py", "report", 449, CPyStatic_mypy___errors___globals);
        goto CPyL101;
    }
    cpy_r_r71 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_file;
    CPy_INCREF(cpy_r_r71);
    cpy_r_r72.f0 = cpy_r_r71;
    cpy_r_r72.f1 = cpy_r_origin_span;
    CPy_INCREF(cpy_r_r72.f0);
    CPy_INCREF(cpy_r_r72.f1);
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_origin_span);
    cpy_r_r73 = CPyDef_mypy___errors___Errors___current_target(cpy_r_self);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report", 457, CPyStatic_mypy___errors___globals);
        goto CPyL102;
    }
    cpy_r_r74 = PyTuple_New(2);
    if (unlikely(cpy_r_r74 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2078 = cpy_r_r72.f0;
    PyTuple_SET_ITEM(cpy_r_r74, 0, __tmp2078);
    PyObject *__tmp2079 = cpy_r_r72.f1;
    PyTuple_SET_ITEM(cpy_r_r74, 1, __tmp2079);
    cpy_r_r75 = CPY_INT_TAG;
    cpy_r_r76 = CPyDef_mypy___errors___ErrorInfo(cpy_r_r65, cpy_r_r66, cpy_r_r67, cpy_r_type, cpy_r_function, cpy_r_line, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_severity, cpy_r_message, cpy_r_code, cpy_r_blocker, cpy_r_only_once, cpy_r_allow_dups, cpy_r_r74, cpy_r_r73, cpy_r_r75);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_type);
    CPy_DECREF(cpy_r_function);
    CPyTagged_DECREF(cpy_r_r68);
    CPyTagged_DECREF(cpy_r_r69);
    CPyTagged_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_severity);
    CPy_DECREF(cpy_r_message);
    CPy_DECREF(cpy_r_code);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r73);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report", 440, CPyStatic_mypy___errors___globals);
        goto CPyL74;
    }
    cpy_r_info = cpy_r_r76;
    cpy_r_r77 = CPyDef_mypy___errors___Errors___add_error_info(cpy_r_self, cpy_r_info);
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r77 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "report", 459, CPyStatic_mypy___errors___globals);
        goto CPyL74;
    }
    return 1;
CPyL74: ;
    cpy_r_r78 = 2;
    return cpy_r_r78;
CPyL75: ;
    CPy_INCREF(cpy_r_code);
    goto CPyL2;
CPyL76: ;
    CPy_INCREF(cpy_r_severity);
    goto CPyL6;
CPyL77: ;
    CPy_INCREF(cpy_r_file);
    goto CPyL8;
CPyL78: ;
    CPy_INCREF(cpy_r_origin_span);
    goto CPyL14;
CPyL79: ;
    CPyTagged_INCREF(cpy_r_offset);
    goto CPyL16;
CPyL80: ;
    CPy_INCREF(cpy_r_end_line);
    goto CPyL18;
CPyL81: ;
    CPy_INCREF(cpy_r_end_column);
    goto CPyL20;
CPyL82: ;
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_origin_span);
    CPyTagged_DecRef(cpy_r_offset);
    CPy_DecRef(cpy_r_end_line);
    CPy_DecRef(cpy_r_end_column);
    goto CPyL74;
CPyL83: ;
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_origin_span);
    CPyTagged_DecRef(cpy_r_offset);
    CPy_DecRef(cpy_r_end_line);
    CPy_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_type);
    goto CPyL74;
CPyL84: ;
    CPy_DECREF(cpy_r_type);
    goto CPyL27;
CPyL85: ;
    CPy_INCREF(cpy_r_column);
    goto CPyL34;
CPyL86: ;
    CPy_DECREF(cpy_r_end_column);
    goto CPyL35;
CPyL87: ;
    CPy_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_origin_span);
    CPyTagged_DecRef(cpy_r_offset);
    CPy_DecRef(cpy_r_end_line);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_function);
    goto CPyL74;
CPyL88: ;
    CPy_DECREF(cpy_r_file);
    goto CPyL41;
CPyL89: ;
    CPyTagged_DECREF(cpy_r_offset);
    CPy_INCREF(cpy_r_message);
    goto CPyL47;
CPyL90: ;
    CPy_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_origin_span);
    CPy_DecRef(cpy_r_end_line);
    CPy_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_function);
    goto CPyL74;
CPyL91: ;
    CPy_DECREF(cpy_r_origin_span);
    goto CPyL48;
CPyL92: ;
    CPy_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_end_line);
    CPy_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_function);
    goto CPyL74;
CPyL93: ;
    CPy_DECREF(cpy_r_end_line);
    goto CPyL51;
CPyL94: ;
    CPy_DECREF(cpy_r_code);
    goto CPyL57;
CPyL95: ;
    CPy_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_origin_span);
    CPy_DecRef(cpy_r_end_line);
    CPy_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_function);
    goto CPyL74;
CPyL96: ;
    CPy_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_origin_span);
    CPy_DecRef(cpy_r_end_line);
    CPy_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_function);
    goto CPyL59;
CPyL97: ;
    CPy_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_origin_span);
    CPy_DecRef(cpy_r_end_line);
    CPy_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_function);
    CPy_DecRef(cpy_r_r65);
    goto CPyL74;
CPyL98: ;
    CPy_DecRef(cpy_r_column);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_origin_span);
    CPy_DecRef(cpy_r_end_line);
    CPy_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_function);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r66);
    goto CPyL74;
CPyL99: ;
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_origin_span);
    CPy_DecRef(cpy_r_end_line);
    CPy_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_function);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r67);
    goto CPyL74;
CPyL100: ;
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_origin_span);
    CPy_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_function);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r67);
    CPyTagged_DecRef(cpy_r_r68);
    goto CPyL74;
CPyL101: ;
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_origin_span);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_function);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r67);
    CPyTagged_DecRef(cpy_r_r68);
    CPyTagged_DecRef(cpy_r_r69);
    goto CPyL74;
CPyL102: ;
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_type);
    CPy_DecRef(cpy_r_function);
    CPy_DecRef(cpy_r_r65);
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r67);
    CPyTagged_DecRef(cpy_r_r68);
    CPyTagged_DecRef(cpy_r_r69);
    CPyTagged_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r72.f0);
    CPy_DecRef(cpy_r_r72.f1);
    goto CPyL74;
}

PyObject *CPyPy_mypy___errors___Errors___report(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"line", "column", "message", "code", "blocker", "severity", "file", "only_once", "allow_dups", "origin_span", "offset", "end_line", "end_column", 0};
    static CPyArg_Parser parser = {"OOO|O$OOOOOOOOO:report", kwlist, 0};
    PyObject *obj_line;
    PyObject *obj_column;
    PyObject *obj_message;
    PyObject *obj_code = NULL;
    PyObject *obj_blocker = NULL;
    PyObject *obj_severity = NULL;
    PyObject *obj_file = NULL;
    PyObject *obj_only_once = NULL;
    PyObject *obj_allow_dups = NULL;
    PyObject *obj_origin_span = NULL;
    PyObject *obj_offset = NULL;
    PyObject *obj_end_line = NULL;
    PyObject *obj_end_column = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_line, &obj_column, &obj_message, &obj_code, &obj_blocker, &obj_severity, &obj_file, &obj_only_once, &obj_allow_dups, &obj_origin_span, &obj_offset, &obj_end_line, &obj_end_column)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *arg_column;
    if (PyLong_Check(obj_column))
        arg_column = obj_column;
    else {
        arg_column = NULL;
    }
    if (arg_column != NULL) goto __LL2080;
    if (obj_column == Py_None)
        arg_column = obj_column;
    else {
        arg_column = NULL;
    }
    if (arg_column != NULL) goto __LL2080;
    CPy_TypeError("int or None", obj_column); 
    goto fail;
__LL2080: ;
    PyObject *arg_message;
    if (likely(PyUnicode_Check(obj_message)))
        arg_message = obj_message;
    else {
        CPy_TypeError("str", obj_message); 
        goto fail;
    }
    PyObject *arg_code;
    if (obj_code == NULL) {
        arg_code = NULL;
        goto __LL2081;
    }
    if (PyObject_TypeCheck(obj_code, CPyType_errorcodes___ErrorCode))
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL2081;
    if (obj_code == Py_None)
        arg_code = obj_code;
    else {
        arg_code = NULL;
    }
    if (arg_code != NULL) goto __LL2081;
    CPy_TypeError("mypy.errorcodes.ErrorCode or None", obj_code); 
    goto fail;
__LL2081: ;
    char arg_blocker;
    if (obj_blocker == NULL) {
        arg_blocker = 2;
    } else if (unlikely(!PyBool_Check(obj_blocker))) {
        CPy_TypeError("bool", obj_blocker); goto fail;
    } else
        arg_blocker = obj_blocker == Py_True;
    PyObject *arg_severity;
    if (obj_severity == NULL) {
        arg_severity = NULL;
    } else if (likely(PyUnicode_Check(obj_severity)))
        arg_severity = obj_severity;
    else {
        CPy_TypeError("str", obj_severity); 
        goto fail;
    }
    PyObject *arg_file;
    if (obj_file == NULL) {
        arg_file = NULL;
        goto __LL2082;
    }
    if (PyUnicode_Check(obj_file))
        arg_file = obj_file;
    else {
        arg_file = NULL;
    }
    if (arg_file != NULL) goto __LL2082;
    if (obj_file == Py_None)
        arg_file = obj_file;
    else {
        arg_file = NULL;
    }
    if (arg_file != NULL) goto __LL2082;
    CPy_TypeError("str or None", obj_file); 
    goto fail;
__LL2082: ;
    char arg_only_once;
    if (obj_only_once == NULL) {
        arg_only_once = 2;
    } else if (unlikely(!PyBool_Check(obj_only_once))) {
        CPy_TypeError("bool", obj_only_once); goto fail;
    } else
        arg_only_once = obj_only_once == Py_True;
    char arg_allow_dups;
    if (obj_allow_dups == NULL) {
        arg_allow_dups = 2;
    } else if (unlikely(!PyBool_Check(obj_allow_dups))) {
        CPy_TypeError("bool", obj_allow_dups); goto fail;
    } else
        arg_allow_dups = obj_allow_dups == Py_True;
    PyObject *arg_origin_span;
    if (obj_origin_span == NULL) {
        arg_origin_span = NULL;
        goto __LL2083;
    }
    arg_origin_span = obj_origin_span;
    if (arg_origin_span != NULL) goto __LL2083;
    if (obj_origin_span == Py_None)
        arg_origin_span = obj_origin_span;
    else {
        arg_origin_span = NULL;
    }
    if (arg_origin_span != NULL) goto __LL2083;
    CPy_TypeError("object or None", obj_origin_span); 
    goto fail;
__LL2083: ;
    CPyTagged arg_offset;
    if (obj_offset == NULL) {
        arg_offset = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_offset)))
        arg_offset = CPyTagged_BorrowFromObject(obj_offset);
    else {
        CPy_TypeError("int", obj_offset); goto fail;
    }
    PyObject *arg_end_line;
    if (obj_end_line == NULL) {
        arg_end_line = NULL;
        goto __LL2084;
    }
    if (PyLong_Check(obj_end_line))
        arg_end_line = obj_end_line;
    else {
        arg_end_line = NULL;
    }
    if (arg_end_line != NULL) goto __LL2084;
    if (obj_end_line == Py_None)
        arg_end_line = obj_end_line;
    else {
        arg_end_line = NULL;
    }
    if (arg_end_line != NULL) goto __LL2084;
    CPy_TypeError("int or None", obj_end_line); 
    goto fail;
__LL2084: ;
    PyObject *arg_end_column;
    if (obj_end_column == NULL) {
        arg_end_column = NULL;
        goto __LL2085;
    }
    if (PyLong_Check(obj_end_column))
        arg_end_column = obj_end_column;
    else {
        arg_end_column = NULL;
    }
    if (arg_end_column != NULL) goto __LL2085;
    if (obj_end_column == Py_None)
        arg_end_column = obj_end_column;
    else {
        arg_end_column = NULL;
    }
    if (arg_end_column != NULL) goto __LL2085;
    CPy_TypeError("int or None", obj_end_column); 
    goto fail;
__LL2085: ;
    char retval = CPyDef_mypy___errors___Errors___report(arg_self, arg_line, arg_column, arg_message, arg_code, arg_blocker, arg_severity, arg_file, arg_only_once, arg_allow_dups, arg_origin_span, arg_offset, arg_end_line, arg_end_column);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "report", 377, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors____add_error_info(PyObject *cpy_r_self, PyObject *cpy_r_file, PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_flushed_files;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "_add_error_info", "Errors", "flushed_files", 462, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PySet_Contains(cpy_r_r0, cpy_r_file);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/errors.py", "_add_error_info", 462, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    cpy_r_r3 = cpy_r_r1;
    cpy_r_r4 = cpy_r_r3 ^ 1;
    if (cpy_r_r4) goto CPyL5;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/errors.py", "_add_error_info", 462, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r6 = CPyDef_mypy___errors___Errors____filter_error(cpy_r_self, cpy_r_file, cpy_r_info);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "_add_error_info", 465, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    if (!cpy_r_r6) goto CPyL8;
    return 1;
CPyL8: ;
    cpy_r_r7 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "_add_error_info", "Errors", "error_info_map", 467, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r7);
CPyL9: ;
    cpy_r_r8 = PyDict_Contains(cpy_r_r7, cpy_r_file);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypy/errors.py", "_add_error_info", 467, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    cpy_r_r10 = cpy_r_r8;
    cpy_r_r11 = cpy_r_r10 ^ 1;
    if (!cpy_r_r11) goto CPyL14;
    cpy_r_r12 = PyList_New(0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "_add_error_info", 468, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    cpy_r_r13 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "_add_error_info", "Errors", "error_info_map", 468, CPyStatic_mypy___errors___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r13);
CPyL13: ;
    cpy_r_r14 = CPyDict_SetItem(cpy_r_r13, cpy_r_file, cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/errors.py", "_add_error_info", 468, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
CPyL14: ;
    cpy_r_r16 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "_add_error_info", "Errors", "error_info_map", 469, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r16);
CPyL15: ;
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r16, cpy_r_file);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "_add_error_info", 469, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    if (likely(PyList_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "_add_error_info", 469, CPyStatic_mypy___errors___globals, "list", cpy_r_r17);
        goto CPyL27;
    }
    cpy_r_r19 = PyList_Append(cpy_r_r18, cpy_r_info);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/errors.py", "_add_error_info", 469, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    cpy_r_r21 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_blocker;
    if (!cpy_r_r21) goto CPyL21;
CPyL19: ;
    cpy_r_r22 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_has_blockers;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "_add_error_info", "Errors", "has_blockers", 471, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r22);
CPyL20: ;
    cpy_r_r23 = PySet_Add(cpy_r_r22, cpy_r_file);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/errors.py", "_add_error_info", 471, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
CPyL21: ;
    cpy_r_r25 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPyStatic_errorcodes___IMPORT;
    if (unlikely(cpy_r_r26 == NULL)) {
        goto CPyL29;
    } else
        goto CPyL24;
CPyL22: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"IMPORT\" was not set");
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/errors.py", "_add_error_info", 472, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r28 = cpy_r_r25 == cpy_r_r26;
    CPy_DECREF(cpy_r_r25);
    if (!cpy_r_r28) goto CPyL26;
    ((mypy___errors___ErrorsObject *)cpy_r_self)->_seen_import_error = 1;
CPyL26: ;
    return 1;
CPyL27: ;
    cpy_r_r30 = 2;
    return cpy_r_r30;
CPyL28: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_r25);
    goto CPyL22;
}

PyObject *CPyPy_mypy___errors___Errors____add_error_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", "info", 0};
    static CPyArg_Parser parser = {"OO:_add_error_info", kwlist, 0};
    PyObject *obj_file;
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_file, &obj_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(PyUnicode_Check(obj_file)))
        arg_file = obj_file;
    else {
        CPy_TypeError("str", obj_file); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely(Py_TYPE(obj_info) == CPyType_mypy___errors___ErrorInfo))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.errors.ErrorInfo", obj_info); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors____add_error_info(arg_self, arg_file, arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "_add_error_info", 461, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors____filter_error(PyObject *cpy_r_self, PyObject *cpy_r_file, PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_w;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->__watchers;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_i = cpy_r_r3;
CPyL1: ;
    cpy_r_r4 = cpy_r_i & 1;
    cpy_r_r5 = cpy_r_r4 != 0;
    if (!cpy_r_r5) goto CPyL3;
    cpy_r_r6 = CPyTagged_IsLt_(0, cpy_r_i);
    if (cpy_r_r6) {
        goto CPyL4;
    } else
        goto CPyL11;
CPyL3: ;
    cpy_r_r7 = (Py_ssize_t)cpy_r_i > (Py_ssize_t)0;
    if (!cpy_r_r7) goto CPyL11;
CPyL4: ;
    cpy_r_r8 = CPyTagged_Subtract(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r8;
    cpy_r_r9 = ((mypy___errors___ErrorsObject *)cpy_r_self)->__watchers;
    cpy_r_r10 = CPyList_GetItem(cpy_r_r9, cpy_r_i);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "_filter_error", 483, CPyStatic_mypy___errors___globals);
        goto CPyL12;
    }
    if (likely(Py_TYPE(cpy_r_r10) == CPyType_mypy___errors___ErrorWatcher))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "_filter_error", 483, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorWatcher", cpy_r_r10);
        goto CPyL12;
    }
    cpy_r_w = cpy_r_r11;
    cpy_r_r12 = CPyDef_mypy___errors___ErrorWatcher___on_error(cpy_r_w, cpy_r_file, cpy_r_info);
    CPy_DECREF(cpy_r_w);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "_filter_error", 484, CPyStatic_mypy___errors___globals);
        goto CPyL12;
    }
    if (cpy_r_r12) {
        goto CPyL13;
    } else
        goto CPyL1;
CPyL8: ;
    return 1;
CPyL9: ;
    return 0;
CPyL10: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL11: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL9;
CPyL12: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL10;
CPyL13: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL8;
}

PyObject *CPyPy_mypy___errors___Errors____filter_error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", "info", 0};
    static CPyArg_Parser parser = {"OO:_filter_error", kwlist, 0};
    PyObject *obj_file;
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_file, &obj_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(PyUnicode_Check(obj_file)))
        arg_file = obj_file;
    else {
        CPy_TypeError("str", obj_file); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely(Py_TYPE(obj_info) == CPyType_mypy___errors___ErrorInfo))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.errors.ErrorInfo", obj_info); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors____filter_error(arg_self, arg_file, arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "_filter_error", 475, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___add_error_info(PyObject *cpy_r_self, PyObject *cpy_r_info) {
    tuple_T2OO cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_file;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_lines;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_scope_line;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    int32_t cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_ignored_codes;
    CPyPtr cpy_r_r70;
    int64_t cpy_r_r71;
    CPyTagged cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_msg;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    int32_t cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_old_code;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    CPyTagged cpy_r_r117;
    CPyTagged cpy_r_r118;
    CPyTagged cpy_r_r119;
    CPyTagged cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    CPyTagged cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_note;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    char cpy_r_r138;
    int32_t cpy_r_r139;
    char cpy_r_r140;
    char cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_message;
    PyObject *cpy_r_r151;
    int32_t cpy_r_r152;
    char cpy_r_r153;
    char cpy_r_r154;
    PyObject *cpy_r_r155;
    int32_t cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    CPyTagged cpy_r_r163;
    CPyTagged cpy_r_r164;
    CPyTagged cpy_r_r165;
    CPyTagged cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    char cpy_r_r173;
    char cpy_r_r174;
    cpy_r_r0 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_origin;
    CPy_INCREF(cpy_r_r0.f0);
    CPy_INCREF(cpy_r_r0.f1);
    cpy_r_r1 = cpy_r_r0.f0;
    CPy_INCREF(cpy_r_r1);
    cpy_r_file = cpy_r_r1;
    cpy_r_r2 = cpy_r_r0.f1;
    CPy_INCREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r0.f0);
    CPy_DECREF(cpy_r_r0.f1);
    cpy_r_lines = cpy_r_r2;
    cpy_r_r3 = CPyDef_mypy___errors___Errors____filter_error(cpy_r_self, cpy_r_file, cpy_r_info);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 494, CPyStatic_mypy___errors___globals);
        goto CPyL114;
    }
    if (cpy_r_r3) {
        goto CPyL115;
    } else
        goto CPyL3;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r4 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_blocker;
    if (cpy_r_r4) goto CPyL116;
CPyL4: ;
    cpy_r_r5 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_lines;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "add_error_info", "Errors", "ignored_lines", 497, CPyStatic_mypy___errors___globals);
        goto CPyL114;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = PyDict_Contains(cpy_r_r5, cpy_r_file);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 497, CPyStatic_mypy___errors___globals);
        goto CPyL114;
    }
    cpy_r_r8 = cpy_r_r6;
    if (!cpy_r_r8) goto CPyL117;
    cpy_r_r9 = PyObject_GetIter(cpy_r_lines);
    CPy_DECREF(cpy_r_lines);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 500, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
CPyL8: ;
    cpy_r_r10 = PyIter_Next(cpy_r_r9);
    if (cpy_r_r10 == NULL) goto CPyL119;
    if (likely(PyLong_Check(cpy_r_r10)))
        cpy_r_r11 = CPyTagged_FromObject(cpy_r_r10);
    else {
        CPy_TypeError("int", cpy_r_r10); cpy_r_r11 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 500, CPyStatic_mypy___errors___globals);
        goto CPyL120;
    }
    cpy_r_scope_line = cpy_r_r11;
    cpy_r_r12 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_lines;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "add_error_info", "Errors", "ignored_lines", 501, CPyStatic_mypy___errors___globals);
        goto CPyL121;
    }
    CPy_INCREF(cpy_r_r12);
CPyL11: ;
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r12, cpy_r_file);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 501, CPyStatic_mypy___errors___globals);
        goto CPyL121;
    }
    if (likely(PyDict_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "add_error_info", 501, CPyStatic_mypy___errors___globals, "dict", cpy_r_r13);
        goto CPyL121;
    }
    cpy_r_r15 = CPyDef_mypy___errors___Errors___is_ignored_error(cpy_r_self, cpy_r_scope_line, cpy_r_info, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 501, CPyStatic_mypy___errors___globals);
        goto CPyL121;
    }
    if (cpy_r_r15) {
        goto CPyL122;
    } else
        goto CPyL123;
CPyL15: ;
    cpy_r_r16 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_used_ignored_lines;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "add_error_info", "Errors", "used_ignored_lines", 503, CPyStatic_mypy___errors___globals);
        goto CPyL124;
    }
    CPy_INCREF(cpy_r_r16);
CPyL16: ;
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r16, cpy_r_file);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_file);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 503, CPyStatic_mypy___errors___globals);
        goto CPyL125;
    }
    if (likely(PyDict_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "add_error_info", 503, CPyStatic_mypy___errors___globals, "dict", cpy_r_r17);
        goto CPyL125;
    }
    cpy_r_r19 = CPyTagged_StealAsObject(cpy_r_scope_line);
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 503, CPyStatic_mypy___errors___globals);
        goto CPyL113;
    }
    if (likely(PyList_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "add_error_info", 503, CPyStatic_mypy___errors___globals, "list", cpy_r_r20);
        goto CPyL113;
    }
    cpy_r_r22 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_r22 != cpy_r_r23;
    if (!cpy_r_r24) goto CPyL126;
    CPy_INCREF(cpy_r_r22);
    if (likely(cpy_r_r22 != Py_None))
        cpy_r_r25 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "add_error_info", 504, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r22);
        goto CPyL127;
    }
    cpy_r_r26 = PyObject_IsTrue(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r27 = cpy_r_r26 >= 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 504, CPyStatic_mypy___errors___globals);
        goto CPyL127;
    }
    cpy_r_r28 = cpy_r_r26;
    if (!cpy_r_r28) goto CPyL126;
    if (likely(cpy_r_r22 != Py_None))
        cpy_r_r29 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "add_error_info", 504, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r22);
        goto CPyL128;
    }
    cpy_r_r30 = cpy_r_r29;
    goto CPyL30;
CPyL26: ;
    cpy_r_r31 = CPyStatic_errorcodes___MISC;
    if (unlikely(cpy_r_r31 == NULL)) {
        goto CPyL129;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"MISC\" was not set");
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 504, CPyStatic_mypy___errors___globals);
        goto CPyL113;
    }
    CPy_Unreachable();
CPyL29: ;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r30 = cpy_r_r31;
CPyL30: ;
    cpy_r_r33 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_r30)->_code;
    if (unlikely(cpy_r_r33 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'code' of 'ErrorCode' undefined");
    } else {
        CPy_INCREF(cpy_r_r33);
    }
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 504, CPyStatic_mypy___errors___globals);
        goto CPyL128;
    }
CPyL31: ;
    cpy_r_r34 = PyList_Append(cpy_r_r21, cpy_r_r33);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 503, CPyStatic_mypy___errors___globals);
        goto CPyL113;
    }
    return 1;
CPyL33: ;
    cpy_r_r36 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 500, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
CPyL34: ;
    cpy_r_r37 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_files;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "add_error_info", "Errors", "ignored_files", 507, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    CPy_INCREF(cpy_r_r37);
CPyL35: ;
    cpy_r_r38 = PySet_Contains(cpy_r_r37, cpy_r_file);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 507, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    cpy_r_r40 = cpy_r_r38;
    if (cpy_r_r40) {
        goto CPyL130;
    } else
        goto CPyL38;
CPyL37: ;
    return 1;
CPyL38: ;
    cpy_r_r41 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_only_once;
    if (!cpy_r_r41) goto CPyL45;
CPyL39: ;
    cpy_r_r42 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_message;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_only_once_messages;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "add_error_info", "Errors", "only_once_messages", 510, CPyStatic_mypy___errors___globals);
        goto CPyL131;
    }
    CPy_INCREF(cpy_r_r43);
CPyL40: ;
    cpy_r_r44 = PySet_Contains(cpy_r_r43, cpy_r_r42);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 510, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    cpy_r_r46 = cpy_r_r44;
    if (cpy_r_r46) {
        goto CPyL132;
    } else
        goto CPyL43;
CPyL42: ;
    return 1;
CPyL43: ;
    cpy_r_r47 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_only_once_messages;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "add_error_info", "Errors", "only_once_messages", 512, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    CPy_INCREF(cpy_r_r47);
CPyL44: ;
    cpy_r_r48 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_message;
    CPy_INCREF(cpy_r_r48);
    cpy_r_r49 = PySet_Add(cpy_r_r47, cpy_r_r48);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 512, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
CPyL45: ;
    cpy_r_r51 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_seen_import_error;
    if (!cpy_r_r51) goto CPyL53;
CPyL46: ;
    cpy_r_r52 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    CPy_INCREF(cpy_r_r52);
    cpy_r_r53 = CPyStatic_errorcodes___IMPORT;
    if (unlikely(cpy_r_r53 == NULL)) {
        goto CPyL133;
    } else
        goto CPyL49;
CPyL47: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"IMPORT\" was not set");
    cpy_r_r54 = 0;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 513, CPyStatic_mypy___errors___globals);
        goto CPyL113;
    }
    CPy_Unreachable();
CPyL49: ;
    cpy_r_r55 = cpy_r_r52 == cpy_r_r53;
    CPy_DECREF(cpy_r_r52);
    cpy_r_r56 = cpy_r_r55 ^ 1;
    if (!cpy_r_r56) goto CPyL53;
    cpy_r_r57 = CPyDef_mypy___errors___Errors___has_many_errors(cpy_r_self);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 513, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    if (!cpy_r_r57) goto CPyL53;
    ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_hidden = 1;
    cpy_r_r59 = CPyDef_mypy___errors___Errors___report_hidden_errors(cpy_r_self, cpy_r_info);
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 520, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
CPyL53: ;
    cpy_r_r60 = CPyDef_mypy___errors___Errors____add_error_info(cpy_r_self, cpy_r_file, cpy_r_info);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 521, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    cpy_r_r61 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_lines;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "add_error_info", "Errors", "ignored_lines", 522, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    CPy_INCREF(cpy_r_r61);
CPyL55: ;
    cpy_r_r62 = PyDict_New();
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 522, CPyStatic_mypy___errors___globals);
        goto CPyL134;
    }
    cpy_r_r63 = CPyDict_Get(cpy_r_r61, cpy_r_file, cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 522, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    if (likely(PyDict_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "add_error_info", 522, CPyStatic_mypy___errors___globals, "dict", cpy_r_r63);
        goto CPyL118;
    }
    cpy_r_r65 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_line;
    CPyTagged_INCREF(cpy_r_r65);
    cpy_r_r66 = PyList_New(0);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 522, CPyStatic_mypy___errors___globals);
        goto CPyL135;
    }
    cpy_r_r67 = CPyTagged_StealAsObject(cpy_r_r65);
    cpy_r_r68 = CPyDict_Get(cpy_r_r64, cpy_r_r67, cpy_r_r66);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 522, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    if (likely(PyList_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "add_error_info", 522, CPyStatic_mypy___errors___globals, "list", cpy_r_r68);
        goto CPyL118;
    }
    cpy_r_ignored_codes = cpy_r_r69;
    cpy_r_r70 = (CPyPtr)&((PyVarObject *)cpy_r_ignored_codes)->ob_size;
    cpy_r_r71 = *(int64_t *)cpy_r_r70;
    cpy_r_r72 = cpy_r_r71 << 1;
    cpy_r_r73 = cpy_r_r72 != 0;
    if (!cpy_r_r73) goto CPyL136;
    cpy_r_r74 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    CPy_INCREF(cpy_r_r74);
    cpy_r_r75 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r76 = cpy_r_r74 != cpy_r_r75;
    if (!cpy_r_r76) goto CPyL137;
    if (likely(cpy_r_r74 != Py_None))
        cpy_r_r77 = cpy_r_r74;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "add_error_info", 523, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r74);
        goto CPyL138;
    }
    cpy_r_r78 = PyObject_IsTrue(cpy_r_r77);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 523, CPyStatic_mypy___errors___globals);
        goto CPyL138;
    }
    cpy_r_r80 = cpy_r_r78;
    if (!cpy_r_r80) goto CPyL136;
    cpy_r_r81 = CPyStatics[2214]; /* 'Error code "' */
    cpy_r_r82 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    if (likely(cpy_r_r82 != Py_None))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "add_error_info", 526, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r82);
        goto CPyL138;
    }
    cpy_r_r84 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_r83)->_code;
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "add_error_info", "ErrorCode", "code", 526, CPyStatic_mypy___errors___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r84);
CPyL68: ;
    cpy_r_r85 = CPyStatics[2215]; /* '" not covered by "type: ignore" comment' */
    cpy_r_r86 = CPyStr_Build(3, cpy_r_r81, cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 526, CPyStatic_mypy___errors___globals);
        goto CPyL138;
    }
    cpy_r_msg = cpy_r_r86;
    cpy_r_r87 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    CPy_INCREF(cpy_r_r87);
    if (likely(cpy_r_r87 != Py_None))
        cpy_r_r88 = cpy_r_r87;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "add_error_info", 527, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r87);
        goto CPyL139;
    }
    cpy_r_r89 = CPyStatic_mypy___errors___original_error_codes;
    if (unlikely(cpy_r_r89 == NULL)) {
        goto CPyL140;
    } else
        goto CPyL73;
CPyL71: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"original_error_codes\" was not set");
    cpy_r_r90 = 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 527, CPyStatic_mypy___errors___globals);
        goto CPyL113;
    }
    CPy_Unreachable();
CPyL73: ;
    cpy_r_r91 = PyDict_Contains(cpy_r_r89, cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r92 = cpy_r_r91 >= 0;
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 527, CPyStatic_mypy___errors___globals);
        goto CPyL139;
    }
    cpy_r_r93 = cpy_r_r91;
    if (!cpy_r_r93) goto CPyL141;
    cpy_r_r94 = CPyStatic_mypy___errors___original_error_codes;
    if (unlikely(cpy_r_r94 == NULL)) {
        goto CPyL142;
    } else
        goto CPyL78;
CPyL76: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"original_error_codes\" was not set");
    cpy_r_r95 = 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 530, CPyStatic_mypy___errors___globals);
        goto CPyL113;
    }
    CPy_Unreachable();
CPyL78: ;
    cpy_r_r96 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    CPy_INCREF(cpy_r_r96);
    if (likely(cpy_r_r96 != Py_None))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "add_error_info", 530, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r96);
        goto CPyL139;
    }
    cpy_r_r98 = CPyDict_GetItem(cpy_r_r94, cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 530, CPyStatic_mypy___errors___globals);
        goto CPyL139;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r98, CPyType_errorcodes___ErrorCode)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "add_error_info", 530, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r98);
        goto CPyL139;
    }
    cpy_r_r100 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_r99)->_code;
    if (unlikely(cpy_r_r100 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'code' of 'ErrorCode' undefined");
    } else {
        CPy_INCREF(cpy_r_r100);
    }
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 530, CPyStatic_mypy___errors___globals);
        goto CPyL139;
    }
CPyL82: ;
    cpy_r_old_code = cpy_r_r100;
    cpy_r_r101 = PySequence_Contains(cpy_r_ignored_codes, cpy_r_old_code);
    CPy_DECREF(cpy_r_ignored_codes);
    CPy_DECREF(cpy_r_old_code);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 531, CPyStatic_mypy___errors___globals);
        goto CPyL143;
    }
    cpy_r_r103 = cpy_r_r101;
    if (cpy_r_r103) {
        goto CPyL144;
    } else
        goto CPyL89;
CPyL84: ;
    cpy_r_r104 = CPyStatics[2216]; /* 'Error code changed to ' */
    cpy_r_r105 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    if (likely(cpy_r_r105 != Py_None))
        cpy_r_r106 = cpy_r_r105;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "add_error_info", 533, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r105);
        goto CPyL118;
    }
    cpy_r_r107 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_r106)->_code;
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "add_error_info", "ErrorCode", "code", 533, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    CPy_INCREF(cpy_r_r107);
CPyL86: ;
    cpy_r_r108 = CPyStatics[2217]; /* '; "type: ignore" comment ' */
    cpy_r_r109 = CPyStr_Build(3, cpy_r_r104, cpy_r_r107, cpy_r_r108);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 533, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    cpy_r_r110 = CPyStatics[2218]; /* 'may be out of date' */
    cpy_r_r111 = PyUnicode_Concat(cpy_r_r109, cpy_r_r110);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 533, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    cpy_r_msg = cpy_r_r111;
CPyL89: ;
    cpy_r_r112 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_import_ctx;
    CPy_INCREF(cpy_r_r112);
    cpy_r_r113 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_file;
    CPy_INCREF(cpy_r_r113);
    cpy_r_r114 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_module;
    CPy_INCREF(cpy_r_r114);
    cpy_r_r115 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_type;
    CPy_INCREF(cpy_r_r115);
    cpy_r_r116 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_function_or_member;
    CPy_INCREF(cpy_r_r116);
    cpy_r_r117 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_line;
    CPyTagged_INCREF(cpy_r_r117);
    cpy_r_r118 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_column;
    CPyTagged_INCREF(cpy_r_r118);
    cpy_r_r119 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_end_line;
    CPyTagged_INCREF(cpy_r_r119);
    cpy_r_r120 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_end_column;
    CPyTagged_INCREF(cpy_r_r120);
    cpy_r_r121 = CPyStatics[413]; /* 'note' */
    cpy_r_r122 = Py_None;
    cpy_r_r123 = NULL;
    cpy_r_r124 = NULL;
    cpy_r_r125 = CPY_INT_TAG;
    cpy_r_r126 = CPyDef_mypy___errors___ErrorInfo(cpy_r_r112, cpy_r_r113, cpy_r_r114, cpy_r_r115, cpy_r_r116, cpy_r_r117, cpy_r_r118, cpy_r_r119, cpy_r_r120, cpy_r_r121, cpy_r_msg, cpy_r_r122, 0, 0, 0, cpy_r_r123, cpy_r_r124, cpy_r_r125);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r114);
    CPy_DECREF(cpy_r_r115);
    CPy_DECREF(cpy_r_r116);
    CPyTagged_DECREF(cpy_r_r117);
    CPyTagged_DECREF(cpy_r_r118);
    CPyTagged_DECREF(cpy_r_r119);
    CPyTagged_DECREF(cpy_r_r120);
    CPy_DECREF(cpy_r_msg);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 536, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    cpy_r_note = cpy_r_r126;
    cpy_r_r127 = CPyDef_mypy___errors___Errors____add_error_info(cpy_r_self, cpy_r_file, cpy_r_note);
    CPy_DECREF(cpy_r_note);
    if (unlikely(cpy_r_r127 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 553, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
CPyL91: ;
    cpy_r_r128 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    cpy_r_r129 = ((mypy___options___OptionsObject *)cpy_r_r128)->_show_error_code_links;
    if (!cpy_r_r129) goto CPyL145;
CPyL92: ;
    cpy_r_r130 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    cpy_r_r131 = ((mypy___options___OptionsObject *)cpy_r_r130)->_hide_error_codes;
    if (cpy_r_r131) goto CPyL145;
CPyL93: ;
    cpy_r_r132 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    cpy_r_r133 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r134 = cpy_r_r132 != cpy_r_r133;
    if (!cpy_r_r134) goto CPyL145;
    cpy_r_r135 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    CPy_INCREF(cpy_r_r135);
    if (likely(cpy_r_r135 != Py_None))
        cpy_r_r136 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "add_error_info", 558, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r135);
        goto CPyL118;
    }
    cpy_r_r137 = CPyStatic_mypy___errors___HIDE_LINK_CODES;
    if (unlikely(cpy_r_r137 == NULL)) {
        goto CPyL146;
    } else
        goto CPyL98;
CPyL96: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"HIDE_LINK_CODES\" was not set");
    cpy_r_r138 = 0;
    if (unlikely(!cpy_r_r138)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 558, CPyStatic_mypy___errors___globals);
        goto CPyL113;
    }
    CPy_Unreachable();
CPyL98: ;
    cpy_r_r139 = PySet_Contains(cpy_r_r137, cpy_r_r136);
    CPy_DECREF(cpy_r_r136);
    cpy_r_r140 = cpy_r_r139 >= 0;
    if (unlikely(!cpy_r_r140)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 558, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    cpy_r_r141 = cpy_r_r139;
    cpy_r_r142 = cpy_r_r141 ^ 1;
    if (!cpy_r_r142) goto CPyL145;
    cpy_r_r143 = CPyStatics[2219]; /* 'See ' */
    cpy_r_r144 = CPyStatics[2220]; /* 'https://mypy.rtfd.io/en/stable/_refs.html#code' */
    cpy_r_r145 = CPyStatics[1198]; /* '-' */
    cpy_r_r146 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    if (likely(cpy_r_r146 != Py_None))
        cpy_r_r147 = cpy_r_r146;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "add_error_info", 560, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r146);
        goto CPyL118;
    }
    cpy_r_r148 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_r147)->_code;
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "add_error_info", "ErrorCode", "code", 560, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    CPy_INCREF(cpy_r_r148);
CPyL102: ;
    cpy_r_r149 = CPyStatics[2221]; /* ' for more info' */
    cpy_r_r150 = CPyStr_Build(5, cpy_r_r143, cpy_r_r144, cpy_r_r145, cpy_r_r148, cpy_r_r149);
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r150 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 560, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    cpy_r_message = cpy_r_r150;
    cpy_r_r151 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_only_once_messages;
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "add_error_info", "Errors", "only_once_messages", 561, CPyStatic_mypy___errors___globals);
        goto CPyL147;
    }
    CPy_INCREF(cpy_r_r151);
CPyL104: ;
    cpy_r_r152 = PySet_Contains(cpy_r_r151, cpy_r_message);
    CPy_DECREF(cpy_r_r151);
    cpy_r_r153 = cpy_r_r152 >= 0;
    if (unlikely(!cpy_r_r153)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 561, CPyStatic_mypy___errors___globals);
        goto CPyL147;
    }
    cpy_r_r154 = cpy_r_r152;
    if (cpy_r_r154) {
        goto CPyL148;
    } else
        goto CPyL107;
CPyL106: ;
    return 1;
CPyL107: ;
    cpy_r_r155 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_only_once_messages;
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "add_error_info", "Errors", "only_once_messages", 563, CPyStatic_mypy___errors___globals);
        goto CPyL147;
    }
    CPy_INCREF(cpy_r_r155);
CPyL108: ;
    cpy_r_r156 = PySet_Add(cpy_r_r155, cpy_r_message);
    CPy_DECREF(cpy_r_r155);
    cpy_r_r157 = cpy_r_r156 >= 0;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 563, CPyStatic_mypy___errors___globals);
        goto CPyL147;
    }
    cpy_r_r158 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_import_ctx;
    CPy_INCREF(cpy_r_r158);
    cpy_r_r159 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_file;
    CPy_INCREF(cpy_r_r159);
    cpy_r_r160 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_module;
    CPy_INCREF(cpy_r_r160);
    cpy_r_r161 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_type;
    CPy_INCREF(cpy_r_r161);
    cpy_r_r162 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_function_or_member;
    CPy_INCREF(cpy_r_r162);
    cpy_r_r163 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_line;
    CPyTagged_INCREF(cpy_r_r163);
    cpy_r_r164 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_column;
    CPyTagged_INCREF(cpy_r_r164);
    cpy_r_r165 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_end_line;
    CPyTagged_INCREF(cpy_r_r165);
    cpy_r_r166 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_end_column;
    CPyTagged_INCREF(cpy_r_r166);
    cpy_r_r167 = CPyStatics[413]; /* 'note' */
    cpy_r_r168 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    CPy_INCREF(cpy_r_r168);
    if (likely(cpy_r_r168 != Py_None))
        cpy_r_r169 = cpy_r_r168;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "add_error_info", 576, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r168);
        goto CPyL149;
    }
    cpy_r_r170 = NULL;
    cpy_r_r171 = NULL;
    cpy_r_r172 = CPyDef_mypy___errors___ErrorInfo(cpy_r_r158, cpy_r_r159, cpy_r_r160, cpy_r_r161, cpy_r_r162, cpy_r_r163, cpy_r_r164, cpy_r_r165, cpy_r_r166, cpy_r_r167, cpy_r_message, cpy_r_r169, 0, 1, 0, cpy_r_r170, cpy_r_r171, 40);
    CPy_DECREF(cpy_r_r158);
    CPy_DECREF(cpy_r_r159);
    CPy_DECREF(cpy_r_r160);
    CPy_DECREF(cpy_r_r161);
    CPy_DECREF(cpy_r_r162);
    CPyTagged_DECREF(cpy_r_r163);
    CPyTagged_DECREF(cpy_r_r164);
    CPyTagged_DECREF(cpy_r_r165);
    CPyTagged_DECREF(cpy_r_r166);
    CPy_DECREF(cpy_r_message);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 564, CPyStatic_mypy___errors___globals);
        goto CPyL118;
    }
    cpy_r_info = cpy_r_r172;
    cpy_r_r173 = CPyDef_mypy___errors___Errors____add_error_info(cpy_r_self, cpy_r_file, cpy_r_info);
    CPy_DECREF(cpy_r_file);
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r173 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "add_error_info", 582, CPyStatic_mypy___errors___globals);
        goto CPyL113;
    }
CPyL112: ;
    return 1;
CPyL113: ;
    cpy_r_r174 = 2;
    return cpy_r_r174;
CPyL114: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_lines);
    goto CPyL113;
CPyL115: ;
    CPy_DECREF(cpy_r_file);
    CPy_DECREF(cpy_r_lines);
    goto CPyL2;
CPyL116: ;
    CPy_DECREF(cpy_r_lines);
    goto CPyL38;
CPyL117: ;
    CPy_DECREF(cpy_r_lines);
    goto CPyL34;
CPyL118: ;
    CPy_DecRef(cpy_r_file);
    goto CPyL113;
CPyL119: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL33;
CPyL120: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_r9);
    goto CPyL113;
CPyL121: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_r9);
    CPyTagged_DecRef(cpy_r_scope_line);
    goto CPyL113;
CPyL122: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL15;
CPyL123: ;
    CPyTagged_DECREF(cpy_r_scope_line);
    goto CPyL8;
CPyL124: ;
    CPy_DecRef(cpy_r_file);
    CPyTagged_DecRef(cpy_r_scope_line);
    goto CPyL113;
CPyL125: ;
    CPyTagged_DecRef(cpy_r_scope_line);
    goto CPyL113;
CPyL126: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL26;
CPyL127: ;
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r22);
    goto CPyL113;
CPyL128: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL113;
CPyL129: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL27;
CPyL130: ;
    CPy_DECREF(cpy_r_file);
    goto CPyL37;
CPyL131: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_r42);
    goto CPyL113;
CPyL132: ;
    CPy_DECREF(cpy_r_file);
    goto CPyL42;
CPyL133: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_r52);
    goto CPyL47;
CPyL134: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_r61);
    goto CPyL113;
CPyL135: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_r64);
    CPyTagged_DecRef(cpy_r_r65);
    goto CPyL113;
CPyL136: ;
    CPy_DECREF(cpy_r_ignored_codes);
    goto CPyL91;
CPyL137: ;
    CPy_DECREF(cpy_r_ignored_codes);
    CPy_DECREF(cpy_r_r74);
    goto CPyL91;
CPyL138: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_ignored_codes);
    goto CPyL113;
CPyL139: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_ignored_codes);
    CPy_DecRef(cpy_r_msg);
    goto CPyL113;
CPyL140: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_ignored_codes);
    CPy_DecRef(cpy_r_msg);
    CPy_DecRef(cpy_r_r88);
    goto CPyL71;
CPyL141: ;
    CPy_DECREF(cpy_r_ignored_codes);
    goto CPyL89;
CPyL142: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_ignored_codes);
    CPy_DecRef(cpy_r_msg);
    goto CPyL76;
CPyL143: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_msg);
    goto CPyL113;
CPyL144: ;
    CPy_DECREF(cpy_r_msg);
    goto CPyL84;
CPyL145: ;
    CPy_DECREF(cpy_r_file);
    goto CPyL112;
CPyL146: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_r136);
    goto CPyL96;
CPyL147: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_message);
    goto CPyL113;
CPyL148: ;
    CPy_DECREF(cpy_r_file);
    CPy_DECREF(cpy_r_message);
    goto CPyL106;
CPyL149: ;
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_r158);
    CPy_DecRef(cpy_r_r159);
    CPy_DecRef(cpy_r_r160);
    CPy_DecRef(cpy_r_r161);
    CPy_DecRef(cpy_r_r162);
    CPyTagged_DecRef(cpy_r_r163);
    CPyTagged_DecRef(cpy_r_r164);
    CPyTagged_DecRef(cpy_r_r165);
    CPyTagged_DecRef(cpy_r_r166);
    goto CPyL113;
}

PyObject *CPyPy_mypy___errors___Errors___add_error_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:add_error_info", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely(Py_TYPE(obj_info) == CPyType_mypy___errors___ErrorInfo))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.errors.ErrorInfo", obj_info); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors___add_error_info(arg_self, arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "add_error_info", 488, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___has_many_errors(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    int64_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    int64_t cpy_r_r11;
    char cpy_r_r12;
    int64_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyTagged cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    tuple_T3CIO cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_errors;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    CPyTagged cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyTagged cpy_r_r35;
    int64_t cpy_r_r36;
    char cpy_r_r37;
    int64_t cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    cpy_r_r1 = ((mypy___options___OptionsObject *)cpy_r_r0)->_many_errors_threshold;
    cpy_r_r2 = cpy_r_r1 & 1;
    cpy_r_r3 = cpy_r_r2 != 0;
    if (!cpy_r_r3) goto CPyL2;
    cpy_r_r4 = CPyTagged_IsLt_(cpy_r_r1, 0);
    if (cpy_r_r4) {
        goto CPyL3;
    } else
        goto CPyL4;
CPyL2: ;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)0;
    if (!cpy_r_r5) goto CPyL4;
CPyL3: ;
    return 0;
CPyL4: ;
    cpy_r_r6 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "has_many_errors", "Errors", "error_info_map", 587, CPyStatic_mypy___errors___globals);
        goto CPyL23;
    }
    CPy_INCREF(cpy_r_r6);
CPyL5: ;
    cpy_r_r7 = PyDict_Size(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    cpy_r_r10 = ((mypy___options___OptionsObject *)cpy_r_r9)->_many_errors_threshold;
    cpy_r_r11 = cpy_r_r8 & 1;
    cpy_r_r12 = cpy_r_r11 != 0;
    if (cpy_r_r12) goto CPyL7;
    cpy_r_r13 = cpy_r_r10 & 1;
    cpy_r_r14 = cpy_r_r13 != 0;
    if (!cpy_r_r14) goto CPyL8;
CPyL7: ;
    cpy_r_r15 = CPyTagged_IsLt_(cpy_r_r8, cpy_r_r10);
    if (cpy_r_r15) {
        goto CPyL10;
    } else
        goto CPyL9;
CPyL8: ;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r8 >= (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r16) goto CPyL10;
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r17 = 0;
    cpy_r_r18 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map;
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "has_many_errors", "Errors", "error_info_map", 590, CPyStatic_mypy___errors___globals);
        goto CPyL24;
    }
    CPy_INCREF(cpy_r_r18);
CPyL11: ;
    cpy_r_r19 = 0;
    cpy_r_r20 = PyDict_Size(cpy_r_r18);
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = CPyDict_GetValuesIter(cpy_r_r18);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "has_many_errors", 590, CPyStatic_mypy___errors___globals);
        goto CPyL25;
    }
CPyL12: ;
    cpy_r_r23 = CPyDict_NextValue(cpy_r_r22, cpy_r_r19);
    cpy_r_r24 = cpy_r_r23.f1;
    cpy_r_r19 = cpy_r_r24;
    cpy_r_r25 = cpy_r_r23.f0;
    if (!cpy_r_r25) goto CPyL26;
    cpy_r_r26 = cpy_r_r23.f2;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r23.f2);
    if (likely(PyList_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "has_many_errors", 590, CPyStatic_mypy___errors___globals, "list", cpy_r_r26);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r27);
    cpy_r_errors = cpy_r_r27;
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_errors)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    CPy_DECREF(cpy_r_errors);
    cpy_r_r30 = cpy_r_r29 << 1;
    CPy_DECREF(cpy_r_r26);
    cpy_r_r31 = CPyTagged_Add(cpy_r_r17, cpy_r_r30);
    CPyTagged_DECREF(cpy_r_r17);
    cpy_r_r17 = cpy_r_r31;
    cpy_r_r32 = CPyDict_CheckSize(cpy_r_r18, cpy_r_r21);
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/errors.py", "has_many_errors", 590, CPyStatic_mypy___errors___globals);
        goto CPyL28;
    } else
        goto CPyL12;
CPyL16: ;
    cpy_r_r33 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypy/errors.py", "has_many_errors", 590, CPyStatic_mypy___errors___globals);
        goto CPyL24;
    }
    cpy_r_r34 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    cpy_r_r35 = ((mypy___options___OptionsObject *)cpy_r_r34)->_many_errors_threshold;
    cpy_r_r36 = cpy_r_r17 & 1;
    cpy_r_r37 = cpy_r_r36 != 0;
    if (cpy_r_r37) goto CPyL19;
    cpy_r_r38 = cpy_r_r35 & 1;
    cpy_r_r39 = cpy_r_r38 != 0;
    if (!cpy_r_r39) goto CPyL20;
CPyL19: ;
    cpy_r_r40 = CPyTagged_IsLt_(cpy_r_r17, cpy_r_r35);
    CPyTagged_DECREF(cpy_r_r17);
    if (cpy_r_r40) {
        goto CPyL22;
    } else
        goto CPyL21;
CPyL20: ;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r17 >= (Py_ssize_t)cpy_r_r35;
    CPyTagged_DECREF(cpy_r_r17);
    if (!cpy_r_r41) goto CPyL22;
CPyL21: ;
    return 1;
CPyL22: ;
    return 0;
CPyL23: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL24: ;
    CPyTagged_DecRef(cpy_r_r17);
    goto CPyL23;
CPyL25: ;
    CPyTagged_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    goto CPyL23;
CPyL26: ;
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r23.f2);
    goto CPyL16;
CPyL27: ;
    CPyTagged_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r26);
    goto CPyL23;
CPyL28: ;
    CPyTagged_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r18);
    CPy_DecRef(cpy_r_r22);
    goto CPyL23;
}

PyObject *CPyPy_mypy___errors___Errors___has_many_errors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":has_many_errors", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors___has_many_errors(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "has_many_errors", 584, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___report_hidden_errors(PyObject *cpy_r_self, PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_message;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    int32_t cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    tuple_T2OO cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_new_info;
    tuple_T2OO cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = CPyStatics[2222]; /* ('(Skipping most remaining errors due to unresolved '
                                    'imports or missing stubs; fix these first)') */
    CPy_INCREF(cpy_r_r0);
    cpy_r_message = cpy_r_r0;
    cpy_r_r1 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_only_once_messages;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "report_hidden_errors", "Errors", "only_once_messages", 601, CPyStatic_mypy___errors___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PySet_Contains(cpy_r_r1, cpy_r_message);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/errors.py", "report_hidden_errors", 601, CPyStatic_mypy___errors___globals);
        goto CPyL10;
    }
    cpy_r_r4 = cpy_r_r2;
    if (cpy_r_r4) {
        goto CPyL11;
    } else
        goto CPyL4;
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r5 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_only_once_messages;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "report_hidden_errors", "Errors", "only_once_messages", 603, CPyStatic_mypy___errors___globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = PySet_Add(cpy_r_r5, cpy_r_message);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = cpy_r_r6 >= 0;
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/errors.py", "report_hidden_errors", 603, CPyStatic_mypy___errors___globals);
        goto CPyL10;
    }
    cpy_r_r8 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_import_ctx;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_file;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_module;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_line;
    CPyTagged_INCREF(cpy_r_r11);
    cpy_r_r12 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_column;
    CPyTagged_INCREF(cpy_r_r12);
    cpy_r_r13 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_end_line;
    CPyTagged_INCREF(cpy_r_r13);
    cpy_r_r14 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_end_column;
    CPyTagged_INCREF(cpy_r_r14);
    cpy_r_r15 = CPyStatics[413]; /* 'note' */
    cpy_r_r16 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_origin;
    CPy_INCREF(cpy_r_r16.f0);
    CPy_INCREF(cpy_r_r16.f1);
    cpy_r_r17 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_target;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = Py_None;
    cpy_r_r19 = Py_None;
    cpy_r_r20 = Py_None;
    cpy_r_r21 = PyTuple_New(2);
    if (unlikely(cpy_r_r21 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2086 = cpy_r_r16.f0;
    PyTuple_SET_ITEM(cpy_r_r21, 0, __tmp2086);
    PyObject *__tmp2087 = cpy_r_r16.f1;
    PyTuple_SET_ITEM(cpy_r_r21, 1, __tmp2087);
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = CPyDef_mypy___errors___ErrorInfo(cpy_r_r8, cpy_r_r9, cpy_r_r10, cpy_r_r18, cpy_r_r19, cpy_r_r11, cpy_r_r12, cpy_r_r13, cpy_r_r14, cpy_r_r15, cpy_r_message, cpy_r_r20, 0, 1, 0, cpy_r_r21, cpy_r_r17, cpy_r_r22);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r11);
    CPyTagged_DECREF(cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_message);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_hidden_errors", 604, CPyStatic_mypy___errors___globals);
        goto CPyL9;
    }
    cpy_r_new_info = cpy_r_r23;
    cpy_r_r24 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_origin;
    CPy_INCREF(cpy_r_r24.f0);
    CPy_INCREF(cpy_r_r24.f1);
    cpy_r_r25 = cpy_r_r24.f0;
    CPy_INCREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r24.f0);
    CPy_DECREF(cpy_r_r24.f1);
    cpy_r_r26 = CPyDef_mypy___errors___Errors____add_error_info(cpy_r_self, cpy_r_r25, cpy_r_new_info);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_new_info);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "report_hidden_errors", 623, CPyStatic_mypy___errors___globals);
        goto CPyL9;
    }
    return 1;
CPyL9: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
CPyL10: ;
    CPy_DecRef(cpy_r_message);
    goto CPyL9;
CPyL11: ;
    CPy_DECREF(cpy_r_message);
    goto CPyL3;
}

PyObject *CPyPy_mypy___errors___Errors___report_hidden_errors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:report_hidden_errors", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely(Py_TYPE(obj_info) == CPyType_mypy___errors___ErrorInfo))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.errors.ErrorInfo", obj_info); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors___report_hidden_errors(arg_self, arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "report_hidden_errors", 596, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___is_ignored_error(PyObject *cpy_r_self, CPyTagged cpy_r_line, PyObject *cpy_r_info, PyObject *cpy_r_ignores) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    int32_t cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    cpy_r_r0 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_blocker;
    if (!cpy_r_r0) goto CPyL2;
CPyL1: ;
    return 0;
CPyL2: ;
    cpy_r_r1 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL47;
    if (likely(cpy_r_r1 != Py_None))
        cpy_r_r4 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "is_ignored_error", 629, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r1);
        goto CPyL46;
    }
    cpy_r_r5 = PyObject_IsTrue(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/errors.py", "is_ignored_error", 629, CPyStatic_mypy___errors___globals);
        goto CPyL46;
    }
    cpy_r_r7 = cpy_r_r5;
    if (!cpy_r_r7) goto CPyL10;
    cpy_r_r8 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    CPy_INCREF(cpy_r_r8);
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "is_ignored_error", 629, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r8);
        goto CPyL46;
    }
    cpy_r_r10 = CPyDef_mypy___errors___Errors___is_error_code_enabled(cpy_r_self, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "is_ignored_error", 629, CPyStatic_mypy___errors___globals);
        goto CPyL46;
    }
    if (cpy_r_r10) goto CPyL10;
    return 1;
CPyL10: ;
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_line);
    cpy_r_r12 = PyDict_Contains(cpy_r_ignores, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/errors.py", "is_ignored_error", 631, CPyStatic_mypy___errors___globals);
        goto CPyL46;
    }
    cpy_r_r14 = cpy_r_r12;
    cpy_r_r15 = cpy_r_r14 ^ 1;
    if (!cpy_r_r15) goto CPyL13;
    return 0;
CPyL13: ;
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r16 = CPyTagged_StealAsObject(cpy_r_line);
    cpy_r_r17 = CPyDict_GetItem(cpy_r_ignores, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "is_ignored_error", 633, CPyStatic_mypy___errors___globals);
        goto CPyL46;
    }
    if (likely(PyList_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "is_ignored_error", 633, CPyStatic_mypy___errors___globals, "list", cpy_r_r17);
        goto CPyL46;
    }
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    CPy_DECREF(cpy_r_r18);
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = cpy_r_r21 != 0;
    if (cpy_r_r22) goto CPyL17;
    return 1;
CPyL17: ;
    cpy_r_r23 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r25 = cpy_r_r23 != cpy_r_r24;
    if (!cpy_r_r25) goto CPyL48;
    if (likely(cpy_r_r23 != Py_None))
        cpy_r_r26 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "is_ignored_error", 636, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r23);
        goto CPyL46;
    }
    cpy_r_r27 = PyObject_IsTrue(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/errors.py", "is_ignored_error", 636, CPyStatic_mypy___errors___globals);
        goto CPyL46;
    }
    cpy_r_r29 = cpy_r_r27;
    if (!cpy_r_r29) goto CPyL45;
    cpy_r_r30 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    CPy_INCREF(cpy_r_r30);
    if (likely(cpy_r_r30 != Py_None))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "is_ignored_error", 636, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r30);
        goto CPyL46;
    }
    cpy_r_r32 = CPyDef_mypy___errors___Errors___is_error_code_enabled(cpy_r_self, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "is_ignored_error", 636, CPyStatic_mypy___errors___globals);
        goto CPyL46;
    }
    if (!cpy_r_r32) goto CPyL45;
    cpy_r_r33 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    if (likely(cpy_r_r33 != Py_None))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "is_ignored_error", 638, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r33);
        goto CPyL46;
    }
    cpy_r_r35 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_r34)->_code;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "is_ignored_error", "ErrorCode", "code", 638, CPyStatic_mypy___errors___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r35);
CPyL26: ;
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r36 = CPyTagged_StealAsObject(cpy_r_line);
    cpy_r_r37 = CPyDict_GetItem(cpy_r_ignores, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "is_ignored_error", 638, CPyStatic_mypy___errors___globals);
        goto CPyL49;
    }
    if (likely(PyList_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "is_ignored_error", 638, CPyStatic_mypy___errors___globals, "list", cpy_r_r37);
        goto CPyL49;
    }
    cpy_r_r39 = PySequence_Contains(cpy_r_r38, cpy_r_r35);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypy/errors.py", "is_ignored_error", 638, CPyStatic_mypy___errors___globals);
        goto CPyL46;
    }
    cpy_r_r41 = cpy_r_r39;
    if (!cpy_r_r41) goto CPyL31;
    cpy_r_r42 = cpy_r_r41;
    goto CPyL44;
CPyL31: ;
    cpy_r_r43 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    if (likely(cpy_r_r43 != Py_None))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "is_ignored_error", 639, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r43);
        goto CPyL46;
    }
    cpy_r_r45 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_r44)->_sub_code_of;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "is_ignored_error", "ErrorCode", "sub_code_of", 639, CPyStatic_mypy___errors___globals);
        goto CPyL46;
    }
CPyL33: ;
    cpy_r_r46 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r47 = cpy_r_r45 != cpy_r_r46;
    if (cpy_r_r47) goto CPyL35;
    cpy_r_r48 = cpy_r_r47;
    goto CPyL43;
CPyL35: ;
    cpy_r_r49 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_code;
    if (likely(cpy_r_r49 != Py_None))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "is_ignored_error", 640, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r49);
        goto CPyL46;
    }
    cpy_r_r51 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_r50)->_sub_code_of;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "is_ignored_error", "ErrorCode", "sub_code_of", 640, CPyStatic_mypy___errors___globals);
        goto CPyL46;
    }
CPyL37: ;
    if (likely(cpy_r_r51 != Py_None))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "is_ignored_error", 640, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r51);
        goto CPyL46;
    }
    cpy_r_r53 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_r52)->_code;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "is_ignored_error", "ErrorCode", "code", 640, CPyStatic_mypy___errors___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r53);
CPyL39: ;
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r54 = CPyTagged_StealAsObject(cpy_r_line);
    cpy_r_r55 = CPyDict_GetItem(cpy_r_ignores, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "is_ignored_error", 640, CPyStatic_mypy___errors___globals);
        goto CPyL50;
    }
    if (likely(PyList_Check(cpy_r_r55)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "is_ignored_error", 640, CPyStatic_mypy___errors___globals, "list", cpy_r_r55);
        goto CPyL50;
    }
    cpy_r_r57 = PySequence_Contains(cpy_r_r56, cpy_r_r53);
    CPy_DECREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r53);
    cpy_r_r58 = cpy_r_r57 >= 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypy/errors.py", "is_ignored_error", 640, CPyStatic_mypy___errors___globals);
        goto CPyL46;
    }
    cpy_r_r59 = cpy_r_r57;
    cpy_r_r48 = cpy_r_r59;
CPyL43: ;
    cpy_r_r42 = cpy_r_r48;
CPyL44: ;
    return cpy_r_r42;
CPyL45: ;
    return 0;
CPyL46: ;
    cpy_r_r60 = 2;
    return cpy_r_r60;
CPyL47: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL10;
CPyL48: ;
    CPy_DECREF(cpy_r_r23);
    goto CPyL45;
CPyL49: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL46;
CPyL50: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL46;
}

PyObject *CPyPy_mypy___errors___Errors___is_ignored_error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"line", "info", "ignores", 0};
    static CPyArg_Parser parser = {"OOO:is_ignored_error", kwlist, 0};
    PyObject *obj_line;
    PyObject *obj_info;
    PyObject *obj_ignores;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_line, &obj_info, &obj_ignores)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *arg_info;
    if (likely(Py_TYPE(obj_info) == CPyType_mypy___errors___ErrorInfo))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.errors.ErrorInfo", obj_info); 
        goto fail;
    }
    PyObject *arg_ignores;
    if (likely(PyDict_Check(obj_ignores)))
        arg_ignores = obj_ignores;
    else {
        CPy_TypeError("dict", obj_ignores); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors___is_ignored_error(arg_self, arg_line, arg_info, arg_ignores);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "is_ignored_error", 625, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___is_error_code_enabled(PyObject *cpy_r_self, PyObject *cpy_r_error_code) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_current_mod_disabled;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_current_mod_enabled;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/errors.py", "is_error_code_enabled", 645, CPyStatic_mypy___errors___globals);
        goto CPyL21;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL3;
    cpy_r_r4 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    cpy_r_r5 = ((mypy___options___OptionsObject *)cpy_r_r4)->_disabled_error_codes;
    CPy_INCREF(cpy_r_r5);
    cpy_r_current_mod_disabled = cpy_r_r5;
    cpy_r_r6 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    cpy_r_r7 = ((mypy___options___OptionsObject *)cpy_r_r6)->_enabled_error_codes;
    CPy_INCREF(cpy_r_r7);
    cpy_r_current_mod_enabled = cpy_r_r7;
    goto CPyL6;
CPyL3: ;
    cpy_r_r8 = PySet_New(NULL);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "is_error_code_enabled", 649, CPyStatic_mypy___errors___globals);
        goto CPyL21;
    }
    cpy_r_current_mod_disabled = cpy_r_r8;
    cpy_r_r9 = PySet_New(NULL);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "is_error_code_enabled", 650, CPyStatic_mypy___errors___globals);
        goto CPyL22;
    }
    cpy_r_current_mod_enabled = cpy_r_r9;
CPyL6: ;
    cpy_r_r10 = PySet_Contains(cpy_r_current_mod_disabled, cpy_r_error_code);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/errors.py", "is_error_code_enabled", 652, CPyStatic_mypy___errors___globals);
        goto CPyL23;
    }
    cpy_r_r12 = cpy_r_r10;
    if (cpy_r_r12) {
        goto CPyL24;
    } else
        goto CPyL9;
CPyL8: ;
    return 0;
CPyL9: ;
    cpy_r_r13 = PySet_Contains(cpy_r_current_mod_enabled, cpy_r_error_code);
    CPy_DECREF(cpy_r_current_mod_enabled);
    cpy_r_r14 = cpy_r_r13 >= 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/errors.py", "is_error_code_enabled", 654, CPyStatic_mypy___errors___globals);
        goto CPyL22;
    }
    cpy_r_r15 = cpy_r_r13;
    if (cpy_r_r15) {
        goto CPyL25;
    } else
        goto CPyL12;
CPyL11: ;
    return 1;
CPyL12: ;
    cpy_r_r16 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_error_code)->_sub_code_of;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "is_error_code_enabled", "ErrorCode", "sub_code_of", 656, CPyStatic_mypy___errors___globals);
        goto CPyL22;
    }
CPyL13: ;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_r16 != cpy_r_r17;
    if (!cpy_r_r18) goto CPyL26;
    cpy_r_r19 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_error_code)->_sub_code_of;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "is_error_code_enabled", "ErrorCode", "sub_code_of", 656, CPyStatic_mypy___errors___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r19);
CPyL15: ;
    if (likely(cpy_r_r19 != Py_None))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "is_error_code_enabled", 656, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r19);
        goto CPyL22;
    }
    cpy_r_r21 = PySet_Contains(cpy_r_current_mod_disabled, cpy_r_r20);
    CPy_DECREF(cpy_r_current_mod_disabled);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/errors.py", "is_error_code_enabled", 656, CPyStatic_mypy___errors___globals);
        goto CPyL21;
    }
    cpy_r_r23 = cpy_r_r21;
    if (!cpy_r_r23) goto CPyL19;
    return 0;
CPyL19: ;
    cpy_r_r24 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_error_code)->_default_enabled;
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AttributeError("mypy/errors.py", "is_error_code_enabled", "ErrorCode", "default_enabled", 659, CPyStatic_mypy___errors___globals);
        goto CPyL21;
    }
CPyL20: ;
    return cpy_r_r24;
CPyL21: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL22: ;
    CPy_DecRef(cpy_r_current_mod_disabled);
    goto CPyL21;
CPyL23: ;
    CPy_DecRef(cpy_r_current_mod_disabled);
    CPy_DecRef(cpy_r_current_mod_enabled);
    goto CPyL21;
CPyL24: ;
    CPy_DECREF(cpy_r_current_mod_disabled);
    CPy_DECREF(cpy_r_current_mod_enabled);
    goto CPyL8;
CPyL25: ;
    CPy_DECREF(cpy_r_current_mod_disabled);
    goto CPyL11;
CPyL26: ;
    CPy_DECREF(cpy_r_current_mod_disabled);
    goto CPyL19;
}

PyObject *CPyPy_mypy___errors___Errors___is_error_code_enabled(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"error_code", 0};
    static CPyArg_Parser parser = {"O:is_error_code_enabled", kwlist, 0};
    PyObject *obj_error_code;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_error_code)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_error_code;
    if (likely(PyObject_TypeCheck(obj_error_code, CPyType_errorcodes___ErrorCode)))
        arg_error_code = obj_error_code;
    else {
        CPy_TypeError("mypy.errorcodes.ErrorCode", obj_error_code); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors___is_error_code_enabled(arg_self, arg_error_code);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "is_error_code_enabled", 644, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___clear_errors_in_targets(PyObject *cpy_r_self, PyObject *cpy_r_path, PyObject *cpy_r_targets) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_new_errors;
    char cpy_r_has_blocker;
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
    PyObject *cpy_r_info;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "clear_errors_in_targets", "Errors", "error_info_map", 663, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_path);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/errors.py", "clear_errors_in_targets", 663, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL26;
    cpy_r_r4 = PyList_New(0);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "clear_errors_in_targets", 664, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    cpy_r_new_errors = cpy_r_r4;
    cpy_r_has_blocker = 0;
    cpy_r_r5 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "clear_errors_in_targets", "Errors", "error_info_map", 666, CPyStatic_mypy___errors___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r5, cpy_r_path);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "clear_errors_in_targets", 666, CPyStatic_mypy___errors___globals);
        goto CPyL28;
    }
    if (likely(PyList_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "clear_errors_in_targets", 666, CPyStatic_mypy___errors___globals, "list", cpy_r_r6);
        goto CPyL28;
    }
    cpy_r_r8 = 0;
CPyL8: ;
    cpy_r_r9 = (CPyPtr)&((PyVarObject *)cpy_r_r7)->ob_size;
    cpy_r_r10 = *(int64_t *)cpy_r_r9;
    cpy_r_r11 = cpy_r_r10 << 1;
    cpy_r_r12 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r11;
    if (!cpy_r_r12) goto CPyL29;
    cpy_r_r13 = CPyList_GetItemUnsafe(cpy_r_r7, cpy_r_r8);
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "clear_errors_in_targets", 666, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r13);
        goto CPyL30;
    }
    cpy_r_info = cpy_r_r14;
    cpy_r_r15 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_target;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = PySet_Contains(cpy_r_targets, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/errors.py", "clear_errors_in_targets", 667, CPyStatic_mypy___errors___globals);
        goto CPyL31;
    }
    cpy_r_r18 = cpy_r_r16;
    cpy_r_r19 = cpy_r_r18 ^ 1;
    if (!cpy_r_r19) goto CPyL14;
    cpy_r_r20 = PyList_Append(cpy_r_new_errors, cpy_r_info);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/errors.py", "clear_errors_in_targets", 668, CPyStatic_mypy___errors___globals);
        goto CPyL31;
    }
    cpy_r_r22 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_blocker;
    CPy_DECREF(cpy_r_info);
    cpy_r_r23 = cpy_r_has_blocker | cpy_r_r22;
    cpy_r_has_blocker = cpy_r_r23;
    goto CPyL17;
CPyL14: ;
    cpy_r_r24 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_only_once;
    if (!cpy_r_r24) goto CPyL32;
CPyL15: ;
    cpy_r_r25 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_only_once_messages;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "clear_errors_in_targets", "Errors", "only_once_messages", 671, CPyStatic_mypy___errors___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r25);
CPyL16: ;
    cpy_r_r26 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_message;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_info);
    cpy_r_r27 = CPySet_Remove(cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/errors.py", "clear_errors_in_targets", 671, CPyStatic_mypy___errors___globals);
        goto CPyL30;
    }
CPyL17: ;
    cpy_r_r28 = cpy_r_r8 + 2;
    cpy_r_r8 = cpy_r_r28;
    goto CPyL8;
CPyL18: ;
    cpy_r_r29 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "clear_errors_in_targets", "Errors", "error_info_map", 672, CPyStatic_mypy___errors___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r29);
CPyL19: ;
    cpy_r_r30 = CPyDict_SetItem(cpy_r_r29, cpy_r_path, cpy_r_new_errors);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_new_errors);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/errors.py", "clear_errors_in_targets", 672, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    if (cpy_r_has_blocker) goto CPyL26;
    cpy_r_r32 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_has_blockers;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "clear_errors_in_targets", "Errors", "has_blockers", 673, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r32);
CPyL22: ;
    cpy_r_r33 = PySet_Contains(cpy_r_r32, cpy_r_path);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/errors.py", "clear_errors_in_targets", 673, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    cpy_r_r35 = cpy_r_r33;
    if (!cpy_r_r35) goto CPyL26;
    cpy_r_r36 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_has_blockers;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "clear_errors_in_targets", "Errors", "has_blockers", 674, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r36);
CPyL25: ;
    cpy_r_r37 = CPySet_Remove(cpy_r_r36, cpy_r_path);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/errors.py", "clear_errors_in_targets", 674, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
CPyL26: ;
    return 1;
CPyL27: ;
    cpy_r_r38 = 2;
    return cpy_r_r38;
CPyL28: ;
    CPy_DecRef(cpy_r_new_errors);
    goto CPyL27;
CPyL29: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL18;
CPyL30: ;
    CPy_DecRef(cpy_r_new_errors);
    CPy_DecRef(cpy_r_r7);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_new_errors);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_info);
    goto CPyL27;
CPyL32: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL17;
}

PyObject *CPyPy_mypy___errors___Errors___clear_errors_in_targets(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", "targets", 0};
    static CPyArg_Parser parser = {"OO:clear_errors_in_targets", kwlist, 0};
    PyObject *obj_path;
    PyObject *obj_targets;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_path, &obj_targets)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *arg_targets;
    if (likely(PySet_Check(obj_targets)))
        arg_targets = obj_targets;
    else {
        CPy_TypeError("set", obj_targets); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors___clear_errors_in_targets(arg_self, arg_path, arg_targets);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "clear_errors_in_targets", 661, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___generate_unused_ignore_errors(PyObject *cpy_r_self, PyObject *cpy_r_file) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_ignored_lines;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_used_ignored_lines;
    CPyTagged cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    tuple_T4CIOO cpy_r_r23;
    CPyTagged cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_ignored_codes;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int32_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_used_ignored_codes;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_unused_ignored_codes;
    CPyPtr cpy_r_r50;
    int64_t cpy_r_r51;
    CPyTagged cpy_r_r52;
    char cpy_r_r53;
    CPyPtr cpy_r_r54;
    int64_t cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    CPyPtr cpy_r_r58;
    int64_t cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_unused_codes_message;
    CPyPtr cpy_r_r66;
    int64_t cpy_r_r67;
    CPyTagged cpy_r_r68;
    char cpy_r_r69;
    int32_t cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject **cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_message;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_unused;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_narrower;
    int32_t cpy_r_r100;
    char cpy_r_r101;
    char cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    CPyTagged cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_info;
    char cpy_r_r122;
    char cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 678, CPyStatic_mypy___errors___globals);
        goto CPyL79;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL3;
    cpy_r_r4 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    cpy_r_r5 = ((mypy___options___OptionsObject *)cpy_r_r4)->_abs_custom_typeshed_dir;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = cpy_r_r5;
    goto CPyL4;
CPyL3: ;
    cpy_r_r7 = Py_None;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r6 = cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = CPyDef_mypy___util___is_typeshed_file(cpy_r_r6, cpy_r_file);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 678, CPyStatic_mypy___errors___globals);
        goto CPyL79;
    }
    if (cpy_r_r8) goto CPyL9;
    cpy_r_r9 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_files;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "generate_unused_ignore_errors", "Errors", "ignored_files", 679, CPyStatic_mypy___errors___globals);
        goto CPyL79;
    }
    CPy_INCREF(cpy_r_r9);
CPyL7: ;
    cpy_r_r10 = PySet_Contains(cpy_r_r9, cpy_r_file);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 679, CPyStatic_mypy___errors___globals);
        goto CPyL79;
    }
    cpy_r_r12 = cpy_r_r10;
    if (!cpy_r_r12) goto CPyL10;
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r13 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_lines;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "generate_unused_ignore_errors", "Errors", "ignored_lines", 682, CPyStatic_mypy___errors___globals);
        goto CPyL79;
    }
    CPy_INCREF(cpy_r_r13);
CPyL11: ;
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r13, cpy_r_file);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 682, CPyStatic_mypy___errors___globals);
        goto CPyL79;
    }
    if (likely(PyDict_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_unused_ignore_errors", 682, CPyStatic_mypy___errors___globals, "dict", cpy_r_r14);
        goto CPyL79;
    }
    cpy_r_ignored_lines = cpy_r_r15;
    cpy_r_r16 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_used_ignored_lines;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "generate_unused_ignore_errors", "Errors", "used_ignored_lines", 683, CPyStatic_mypy___errors___globals);
        goto CPyL80;
    }
    CPy_INCREF(cpy_r_r16);
CPyL14: ;
    cpy_r_r17 = CPyDict_GetItem(cpy_r_r16, cpy_r_file);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 683, CPyStatic_mypy___errors___globals);
        goto CPyL80;
    }
    if (likely(PyDict_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_unused_ignore_errors", 683, CPyStatic_mypy___errors___globals, "dict", cpy_r_r17);
        goto CPyL80;
    }
    cpy_r_used_ignored_lines = cpy_r_r18;
    cpy_r_r19 = 0;
    cpy_r_r20 = PyDict_Size(cpy_r_ignored_lines);
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = CPyDict_GetItemsIter(cpy_r_ignored_lines);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 684, CPyStatic_mypy___errors___globals);
        goto CPyL81;
    }
CPyL17: ;
    cpy_r_r23 = CPyDict_NextItem(cpy_r_r22, cpy_r_r19);
    cpy_r_r24 = cpy_r_r23.f1;
    cpy_r_r19 = cpy_r_r24;
    cpy_r_r25 = cpy_r_r23.f0;
    if (!cpy_r_r25) goto CPyL82;
    cpy_r_r26 = cpy_r_r23.f2;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = cpy_r_r23.f3;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r23.f2);
    CPy_DECREF(cpy_r_r23.f3);
    if (likely(PyLong_Check(cpy_r_r26)))
        cpy_r_r28 = CPyTagged_FromObject(cpy_r_r26);
    else {
        CPy_TypeError("int", cpy_r_r26); cpy_r_r28 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 684, CPyStatic_mypy___errors___globals);
        goto CPyL83;
    }
    if (likely(PyList_Check(cpy_r_r27)))
        cpy_r_r29 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_unused_ignore_errors", 684, CPyStatic_mypy___errors___globals, "list", cpy_r_r27);
        goto CPyL84;
    }
    cpy_r_line = cpy_r_r28;
    cpy_r_ignored_codes = cpy_r_r29;
    cpy_r_r30 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_skipped_lines;
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "generate_unused_ignore_errors", "Errors", "skipped_lines", 685, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    }
    CPy_INCREF(cpy_r_r30);
CPyL21: ;
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r30, cpy_r_file);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 685, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    }
    if (likely(PySet_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_unused_ignore_errors", 685, CPyStatic_mypy___errors___globals, "set", cpy_r_r31);
        goto CPyL85;
    }
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r33 = CPyTagged_StealAsObject(cpy_r_line);
    cpy_r_r34 = PySet_Contains(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r35 = cpy_r_r34 >= 0;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 685, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    }
    cpy_r_r36 = cpy_r_r34;
    if (cpy_r_r36) goto CPyL86;
    cpy_r_r37 = CPyStatic_errorcodes___UNUSED_IGNORE;
    if (unlikely(cpy_r_r37 == NULL)) {
        goto CPyL87;
    } else
        goto CPyL28;
CPyL26: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"UNUSED_IGNORE\" was not set");
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 687, CPyStatic_mypy___errors___globals);
        goto CPyL79;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r39 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_r37)->_code;
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "generate_unused_ignore_errors", "ErrorCode", "code", 687, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    }
    CPy_INCREF(cpy_r_r39);
CPyL29: ;
    cpy_r_r40 = PySequence_Contains(cpy_r_ignored_codes, cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 687, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    }
    cpy_r_r42 = cpy_r_r40;
    if (cpy_r_r42) goto CPyL86;
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r43 = CPyTagged_StealAsObject(cpy_r_line);
    cpy_r_r44 = CPyDict_GetItem(cpy_r_used_ignored_lines, cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 689, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    }
    if (likely(PyList_Check(cpy_r_r44)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_unused_ignore_errors", 689, CPyStatic_mypy___errors___globals, "list", cpy_r_r44);
        goto CPyL85;
    }
    cpy_r_used_ignored_codes = cpy_r_r45;
    cpy_r_r46 = PySet_New(cpy_r_ignored_codes);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 690, CPyStatic_mypy___errors___globals);
        goto CPyL88;
    }
    cpy_r_r47 = PySet_New(cpy_r_used_ignored_codes);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 690, CPyStatic_mypy___errors___globals);
        goto CPyL89;
    }
    cpy_r_r48 = PyNumber_Subtract(cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 690, CPyStatic_mypy___errors___globals);
        goto CPyL88;
    }
    if (likely(PySet_Check(cpy_r_r48)))
        cpy_r_r49 = cpy_r_r48;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_unused_ignore_errors", 690, CPyStatic_mypy___errors___globals, "set", cpy_r_r48);
        goto CPyL88;
    }
    cpy_r_unused_ignored_codes = cpy_r_r49;
    cpy_r_r50 = (CPyPtr)&((PyVarObject *)cpy_r_ignored_codes)->ob_size;
    cpy_r_r51 = *(int64_t *)cpy_r_r50;
    cpy_r_r52 = cpy_r_r51 << 1;
    cpy_r_r53 = cpy_r_r52 != 0;
    if (cpy_r_r53) goto CPyL39;
    cpy_r_r54 = (CPyPtr)&((PyVarObject *)cpy_r_used_ignored_codes)->ob_size;
    cpy_r_r55 = *(int64_t *)cpy_r_r54;
    cpy_r_r56 = cpy_r_r55 << 1;
    cpy_r_r57 = cpy_r_r56 != 0;
    if (cpy_r_r57) goto CPyL90;
CPyL39: ;
    cpy_r_r58 = (CPyPtr)&((PyVarObject *)cpy_r_ignored_codes)->ob_size;
    cpy_r_r59 = *(int64_t *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 << 1;
    cpy_r_r61 = cpy_r_r60 != 0;
    if (!cpy_r_r61) goto CPyL42;
    cpy_r_r62 = PyObject_IsTrue(cpy_r_unused_ignored_codes);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 690, CPyStatic_mypy___errors___globals);
        goto CPyL91;
    }
    cpy_r_r64 = cpy_r_r62;
    if (!cpy_r_r64) goto CPyL90;
CPyL42: ;
    cpy_r_r65 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r65);
    cpy_r_unused_codes_message = cpy_r_r65;
    cpy_r_r66 = (CPyPtr)&((PyVarObject *)cpy_r_ignored_codes)->ob_size;
    cpy_r_r67 = *(int64_t *)cpy_r_r66;
    CPy_DECREF(cpy_r_ignored_codes);
    cpy_r_r68 = cpy_r_r67 << 1;
    cpy_r_r69 = (Py_ssize_t)cpy_r_r68 > (Py_ssize_t)2;
    if (!cpy_r_r69) goto CPyL51;
    cpy_r_r70 = PyObject_IsTrue(cpy_r_unused_ignored_codes);
    cpy_r_r71 = cpy_r_r70 >= 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 690, CPyStatic_mypy___errors___globals);
        goto CPyL92;
    }
    cpy_r_r72 = cpy_r_r70;
    if (cpy_r_r72) {
        goto CPyL93;
    } else
        goto CPyL51;
CPyL45: ;
    cpy_r_r73 = CPyStatics[207]; /* '[' */
    cpy_r_r74 = CPyStatics[71]; /* ', ' */
    cpy_r_r75 = CPyModule_builtins;
    cpy_r_r76 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r77 = CPyObject_GetAttr(cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 700, CPyStatic_mypy___errors___globals);
        goto CPyL94;
    }
    PyObject *cpy_r_r78[1] = {cpy_r_unused_ignored_codes};
    cpy_r_r79 = (PyObject **)&cpy_r_r78;
    cpy_r_r80 = _PyObject_Vectorcall(cpy_r_r77, cpy_r_r79, 1, 0);
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 700, CPyStatic_mypy___errors___globals);
        goto CPyL94;
    }
    if (likely(PyList_Check(cpy_r_r80)))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_unused_ignore_errors", 700, CPyStatic_mypy___errors___globals, "list", cpy_r_r80);
        goto CPyL94;
    }
    cpy_r_r82 = PyUnicode_Join(cpy_r_r74, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 700, CPyStatic_mypy___errors___globals);
        goto CPyL94;
    }
    cpy_r_r83 = CPyStatics[208]; /* ']' */
    cpy_r_r84 = CPyStr_Build(3, cpy_r_r73, cpy_r_r82, cpy_r_r83);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 700, CPyStatic_mypy___errors___globals);
        goto CPyL94;
    }
    cpy_r_unused_codes_message = cpy_r_r84;
CPyL51: ;
    cpy_r_r85 = CPyStatics[2223]; /* 'Unused "type: ignore' */
    cpy_r_r86 = CPyStatics[2224]; /* '" comment' */
    cpy_r_r87 = CPyStr_Build(3, cpy_r_r85, cpy_r_unused_codes_message, cpy_r_r86);
    CPy_DECREF(cpy_r_unused_codes_message);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 701, CPyStatic_mypy___errors___globals);
        goto CPyL94;
    }
    cpy_r_message = cpy_r_r87;
    cpy_r_r88 = PyObject_GetIter(cpy_r_unused_ignored_codes);
    CPy_DECREF(cpy_r_unused_ignored_codes);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 702, CPyStatic_mypy___errors___globals);
        goto CPyL95;
    }
CPyL53: ;
    cpy_r_r89 = PyIter_Next(cpy_r_r88);
    if (cpy_r_r89 == NULL) goto CPyL96;
    if (likely(PyUnicode_Check(cpy_r_r89)))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_unused_ignore_errors", 702, CPyStatic_mypy___errors___globals, "str", cpy_r_r89);
        goto CPyL97;
    }
    cpy_r_unused = cpy_r_r90;
    cpy_r_r91 = PySet_New(cpy_r_used_ignored_codes);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 703, CPyStatic_mypy___errors___globals);
        goto CPyL98;
    }
    cpy_r_r92 = CPyModule_mypy___errorcodes;
    cpy_r_r93 = CPyStatics[2028]; /* 'sub_code_map' */
    cpy_r_r94 = CPyObject_GetAttr(cpy_r_r92, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 703, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    if (likely(PyDict_Check(cpy_r_r94)))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_unused_ignore_errors", 703, CPyStatic_mypy___errors___globals, "dict", cpy_r_r94);
        goto CPyL99;
    }
    cpy_r_r96 = CPyDict_GetItem(cpy_r_r95, cpy_r_unused);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 703, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    if (likely(PySet_Check(cpy_r_r96)))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_unused_ignore_errors", 703, CPyStatic_mypy___errors___globals, "set", cpy_r_r96);
        goto CPyL99;
    }
    cpy_r_r98 = PyNumber_And(cpy_r_r91, cpy_r_r97);
    CPy_DECREF(cpy_r_r91);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 703, CPyStatic_mypy___errors___globals);
        goto CPyL98;
    }
    if (likely(PySet_Check(cpy_r_r98)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_unused_ignore_errors", 703, CPyStatic_mypy___errors___globals, "set", cpy_r_r98);
        goto CPyL98;
    }
    cpy_r_narrower = cpy_r_r99;
    cpy_r_r100 = PyObject_IsTrue(cpy_r_narrower);
    cpy_r_r101 = cpy_r_r100 >= 0;
    if (unlikely(!cpy_r_r101)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 703, CPyStatic_mypy___errors___globals);
        goto CPyL100;
    }
    cpy_r_r102 = cpy_r_r100;
    if (!cpy_r_r102) goto CPyL101;
    cpy_r_r103 = CPyStatics[2225]; /* ', use narrower [' */
    cpy_r_r104 = CPyStatics[71]; /* ', ' */
    cpy_r_r105 = PyUnicode_Join(cpy_r_r104, cpy_r_narrower);
    CPy_DECREF(cpy_r_narrower);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 705, CPyStatic_mypy___errors___globals);
        goto CPyL98;
    }
    cpy_r_r106 = CPyStatics[2226]; /* '] instead of [' */
    cpy_r_r107 = CPyStatics[2227]; /* '] code' */
    cpy_r_r108 = CPyStr_Build(5, cpy_r_r103, cpy_r_r105, cpy_r_r106, cpy_r_unused, cpy_r_r107);
    CPy_DECREF(cpy_r_r105);
    CPy_DECREF(cpy_r_unused);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 705, CPyStatic_mypy___errors___globals);
        goto CPyL97;
    }
    cpy_r_r109 = CPyStr_Append(cpy_r_message, cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 705, CPyStatic_mypy___errors___globals);
        goto CPyL102;
    }
    cpy_r_message = cpy_r_r109;
    goto CPyL53;
CPyL68: ;
    cpy_r_r110 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 702, CPyStatic_mypy___errors___globals);
        goto CPyL103;
    }
    cpy_r_r111 = CPyDef_mypy___errors___Errors___import_context(cpy_r_self);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 708, CPyStatic_mypy___errors___globals);
        goto CPyL103;
    }
    cpy_r_r112 = CPyDef_mypy___errors___Errors___current_module(cpy_r_self);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 710, CPyStatic_mypy___errors___globals);
        goto CPyL104;
    }
    cpy_r_r113 = CPyStatics[401]; /* 'error' */
    cpy_r_r114 = CPyStatic_errorcodes___UNUSED_IGNORE;
    if (unlikely(cpy_r_r114 == NULL)) {
        goto CPyL105;
    } else
        goto CPyL74;
CPyL72: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"UNUSED_IGNORE\" was not set");
    cpy_r_r115 = 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 719, CPyStatic_mypy___errors___globals);
        goto CPyL79;
    }
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r116 = Py_None;
    cpy_r_r117 = Py_None;
    cpy_r_r118 = NULL;
    cpy_r_r119 = NULL;
    cpy_r_r120 = CPY_INT_TAG;
    cpy_r_r121 = CPyDef_mypy___errors___ErrorInfo(cpy_r_r111, cpy_r_file, cpy_r_r112, cpy_r_r116, cpy_r_r117, cpy_r_line, -2, cpy_r_line, -2, cpy_r_r113, cpy_r_message, cpy_r_r114, 0, 0, 0, cpy_r_r118, cpy_r_r119, cpy_r_r120);
    CPy_DECREF(cpy_r_r111);
    CPy_DECREF(cpy_r_r112);
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_message);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 707, CPyStatic_mypy___errors___globals);
        goto CPyL106;
    }
    cpy_r_info = cpy_r_r121;
    cpy_r_r122 = CPyDef_mypy___errors___Errors____add_error_info(cpy_r_self, cpy_r_file, cpy_r_info);
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r122 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 724, CPyStatic_mypy___errors___globals);
        goto CPyL106;
    }
CPyL76: ;
    cpy_r_r123 = CPyDict_CheckSize(cpy_r_ignored_lines, cpy_r_r21);
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 684, CPyStatic_mypy___errors___globals);
        goto CPyL106;
    } else
        goto CPyL17;
CPyL77: ;
    cpy_r_r124 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 684, CPyStatic_mypy___errors___globals);
        goto CPyL79;
    }
    return 1;
CPyL79: ;
    cpy_r_r125 = 2;
    return cpy_r_r125;
CPyL80: ;
    CPy_DecRef(cpy_r_ignored_lines);
    goto CPyL79;
CPyL81: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    goto CPyL79;
CPyL82: ;
    CPy_DECREF(cpy_r_ignored_lines);
    CPy_DECREF(cpy_r_used_ignored_lines);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r23.f2);
    CPy_DECREF(cpy_r_r23.f3);
    goto CPyL77;
CPyL83: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_r27);
    goto CPyL79;
CPyL84: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_r28);
    goto CPyL79;
CPyL85: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_ignored_codes);
    goto CPyL79;
CPyL86: ;
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_ignored_codes);
    goto CPyL76;
CPyL87: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_ignored_codes);
    goto CPyL26;
CPyL88: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_ignored_codes);
    CPy_DecRef(cpy_r_used_ignored_codes);
    goto CPyL79;
CPyL89: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_ignored_codes);
    CPy_DecRef(cpy_r_used_ignored_codes);
    CPy_DecRef(cpy_r_r46);
    goto CPyL79;
CPyL90: ;
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_ignored_codes);
    CPy_DECREF(cpy_r_used_ignored_codes);
    CPy_DECREF(cpy_r_unused_ignored_codes);
    goto CPyL76;
CPyL91: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_ignored_codes);
    CPy_DecRef(cpy_r_used_ignored_codes);
    CPy_DecRef(cpy_r_unused_ignored_codes);
    goto CPyL79;
CPyL92: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_used_ignored_codes);
    CPy_DecRef(cpy_r_unused_ignored_codes);
    CPy_DecRef(cpy_r_unused_codes_message);
    goto CPyL79;
CPyL93: ;
    CPy_DECREF(cpy_r_unused_codes_message);
    goto CPyL45;
CPyL94: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_used_ignored_codes);
    CPy_DecRef(cpy_r_unused_ignored_codes);
    goto CPyL79;
CPyL95: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_used_ignored_codes);
    CPy_DecRef(cpy_r_message);
    goto CPyL79;
CPyL96: ;
    CPy_DECREF(cpy_r_used_ignored_codes);
    CPy_DECREF(cpy_r_r88);
    goto CPyL68;
CPyL97: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_used_ignored_codes);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_r88);
    goto CPyL79;
CPyL98: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_used_ignored_codes);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_unused);
    goto CPyL79;
CPyL99: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_used_ignored_codes);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_unused);
    CPy_DecRef(cpy_r_r91);
    goto CPyL79;
CPyL100: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_used_ignored_codes);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_unused);
    CPy_DecRef(cpy_r_narrower);
    goto CPyL79;
CPyL101: ;
    CPy_DECREF(cpy_r_unused);
    CPy_DECREF(cpy_r_narrower);
    goto CPyL53;
CPyL102: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_used_ignored_codes);
    CPy_DecRef(cpy_r_r88);
    goto CPyL79;
CPyL103: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_message);
    goto CPyL79;
CPyL104: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_r111);
    goto CPyL79;
CPyL105: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_r111);
    CPy_DecRef(cpy_r_r112);
    goto CPyL72;
CPyL106: ;
    CPy_DecRef(cpy_r_ignored_lines);
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r22);
    goto CPyL79;
}

PyObject *CPyPy_mypy___errors___Errors___generate_unused_ignore_errors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", 0};
    static CPyArg_Parser parser = {"O:generate_unused_ignore_errors", kwlist, 0};
    PyObject *obj_file;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_file)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(PyUnicode_Check(obj_file)))
        arg_file = obj_file;
    else {
        CPy_TypeError("str", obj_file); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors___generate_unused_ignore_errors(arg_self, arg_file);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "generate_unused_ignore_errors", 676, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___generate_ignore_without_code_errors(PyObject *cpy_r_self, PyObject *cpy_r_file, char cpy_r_is_warning_unused_ignores) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_used_ignored_lines;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    tuple_T2IO cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r__;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_used_codes;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    int64_t cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    tuple_T4CIOO cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_ignored_codes;
    CPyPtr cpy_r_r50;
    int64_t cpy_r_r51;
    CPyTagged cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    int64_t cpy_r_r58;
    CPyTagged cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_codes_hint;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject **cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyPtr cpy_r_r73;
    int64_t cpy_r_r74;
    CPyTagged cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_message;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyTagged cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_info;
    char cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 730, CPyStatic_mypy___errors___globals);
        goto CPyL58;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL3;
    cpy_r_r4 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    cpy_r_r5 = ((mypy___options___OptionsObject *)cpy_r_r4)->_abs_custom_typeshed_dir;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = cpy_r_r5;
    goto CPyL4;
CPyL3: ;
    cpy_r_r7 = Py_None;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r6 = cpy_r_r7;
CPyL4: ;
    cpy_r_r8 = CPyDef_mypy___util___is_typeshed_file(cpy_r_r6, cpy_r_file);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 730, CPyStatic_mypy___errors___globals);
        goto CPyL58;
    }
    if (cpy_r_r8) goto CPyL9;
    cpy_r_r9 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_files;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "generate_ignore_without_code_errors", "Errors", "ignored_files", 731, CPyStatic_mypy___errors___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r9);
CPyL7: ;
    cpy_r_r10 = PySet_Contains(cpy_r_r9, cpy_r_file);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 731, CPyStatic_mypy___errors___globals);
        goto CPyL58;
    }
    cpy_r_r12 = cpy_r_r10;
    if (!cpy_r_r12) goto CPyL10;
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r13 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_used_ignored_lines;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "generate_ignore_without_code_errors", "Errors", "used_ignored_lines", 735, CPyStatic_mypy___errors___globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r13);
CPyL11: ;
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r13, cpy_r_file);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 735, CPyStatic_mypy___errors___globals);
        goto CPyL58;
    }
    if (likely(PyDict_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 735, CPyStatic_mypy___errors___globals, "dict", cpy_r_r14);
        goto CPyL58;
    }
    cpy_r_used_ignored_lines = cpy_r_r15;
    cpy_r_r16 = PyDict_Size(cpy_r_used_ignored_lines);
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = cpy_r_r17 != 0;
    if (!cpy_r_r18) goto CPyL25;
    cpy_r_r19 = CPyDict_ItemsView(cpy_r_used_ignored_lines);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 739, CPyStatic_mypy___errors___globals);
        goto CPyL59;
    }
    cpy_r_r20 = CPyModule_builtins;
    cpy_r_r21 = CPyStatics[469]; /* 'min' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 739, CPyStatic_mypy___errors___globals);
        goto CPyL60;
    }
    PyObject *cpy_r_r23[1] = {cpy_r_r19};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = _PyObject_Vectorcall(cpy_r_r22, cpy_r_r24, 1, 0);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 739, CPyStatic_mypy___errors___globals);
        goto CPyL60;
    }
    CPy_DECREF(cpy_r_r19);
    PyObject *__tmp2088;
    if (unlikely(!(PyTuple_Check(cpy_r_r25) && PyTuple_GET_SIZE(cpy_r_r25) == 2))) {
        __tmp2088 = NULL;
        goto __LL2089;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r25, 0))))
        __tmp2088 = PyTuple_GET_ITEM(cpy_r_r25, 0);
    else {
        __tmp2088 = NULL;
    }
    if (__tmp2088 == NULL) goto __LL2089;
    if (likely(PyList_Check(PyTuple_GET_ITEM(cpy_r_r25, 1))))
        __tmp2088 = PyTuple_GET_ITEM(cpy_r_r25, 1);
    else {
        __tmp2088 = NULL;
    }
    if (__tmp2088 == NULL) goto __LL2089;
    __tmp2088 = cpy_r_r25;
__LL2089: ;
    if (unlikely(__tmp2088 == NULL)) {
        CPy_TypeError("tuple[int, list]", cpy_r_r25); cpy_r_r26 = (tuple_T2IO) { CPY_INT_TAG, NULL };
    } else {
        PyObject *__tmp2090 = PyTuple_GET_ITEM(cpy_r_r25, 0);
        CPyTagged __tmp2091;
        if (likely(PyLong_Check(__tmp2090)))
            __tmp2091 = CPyTagged_FromObject(__tmp2090);
        else {
            CPy_TypeError("int", __tmp2090); __tmp2091 = CPY_INT_TAG;
        }
        cpy_r_r26.f0 = __tmp2091;
        PyObject *__tmp2092 = PyTuple_GET_ITEM(cpy_r_r25, 1);
        CPy_INCREF(__tmp2092);
        PyObject *__tmp2093;
        if (likely(PyList_Check(__tmp2092)))
            __tmp2093 = __tmp2092;
        else {
            CPy_TypeError("list", __tmp2092); 
            __tmp2093 = NULL;
        }
        cpy_r_r26.f1 = __tmp2093;
    }
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 739, CPyStatic_mypy___errors___globals);
        goto CPyL59;
    }
    cpy_r_r27 = cpy_r_r26.f0;
    CPyTagged_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyTagged_StealAsObject(cpy_r_r27);
    cpy_r__ = cpy_r_r28;
    CPy_DECREF(cpy_r__);
    cpy_r_r29 = cpy_r_r26.f1;
    CPy_INCREF(cpy_r_r29);
    CPyTagged_DECREF(cpy_r_r26.f0);
    CPy_DECREF(cpy_r_r26.f1);
    cpy_r_used_codes = cpy_r_r29;
    cpy_r_r30 = CPyStatic_errorcodes___FILE;
    if (unlikely(cpy_r_r30 == NULL)) {
        goto CPyL61;
    } else
        goto CPyL21;
CPyL19: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"FILE\" was not set");
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 740, CPyStatic_mypy___errors___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r32 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_r30)->_code;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "generate_ignore_without_code_errors", "ErrorCode", "code", 740, CPyStatic_mypy___errors___globals);
        goto CPyL62;
    }
    CPy_INCREF(cpy_r_r32);
CPyL22: ;
    cpy_r_r33 = PySequence_Contains(cpy_r_used_codes, cpy_r_r32);
    CPy_DECREF(cpy_r_used_codes);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 740, CPyStatic_mypy___errors___globals);
        goto CPyL59;
    }
    cpy_r_r35 = cpy_r_r33;
    if (cpy_r_r35) {
        goto CPyL63;
    } else
        goto CPyL25;
CPyL24: ;
    return 1;
CPyL25: ;
    cpy_r_r36 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_lines;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "generate_ignore_without_code_errors", "Errors", "ignored_lines", 743, CPyStatic_mypy___errors___globals);
        goto CPyL59;
    }
    CPy_INCREF(cpy_r_r36);
CPyL26: ;
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r36, cpy_r_file);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 743, CPyStatic_mypy___errors___globals);
        goto CPyL59;
    }
    if (likely(PyDict_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 743, CPyStatic_mypy___errors___globals, "dict", cpy_r_r37);
        goto CPyL59;
    }
    cpy_r_r39 = 0;
    cpy_r_r40 = PyDict_Size(cpy_r_r38);
    cpy_r_r41 = cpy_r_r40 << 1;
    cpy_r_r42 = CPyDict_GetItemsIter(cpy_r_r38);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 743, CPyStatic_mypy___errors___globals);
        goto CPyL64;
    }
CPyL29: ;
    cpy_r_r43 = CPyDict_NextItem(cpy_r_r42, cpy_r_r39);
    cpy_r_r44 = cpy_r_r43.f1;
    cpy_r_r39 = cpy_r_r44;
    cpy_r_r45 = cpy_r_r43.f0;
    if (!cpy_r_r45) goto CPyL65;
    cpy_r_r46 = cpy_r_r43.f2;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = cpy_r_r43.f3;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r43.f2);
    CPy_DECREF(cpy_r_r43.f3);
    if (likely(PyLong_Check(cpy_r_r46)))
        cpy_r_r48 = CPyTagged_FromObject(cpy_r_r46);
    else {
        CPy_TypeError("int", cpy_r_r46); cpy_r_r48 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r48 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 743, CPyStatic_mypy___errors___globals);
        goto CPyL66;
    }
    if (likely(PyList_Check(cpy_r_r47)))
        cpy_r_r49 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 743, CPyStatic_mypy___errors___globals, "list", cpy_r_r47);
        goto CPyL67;
    }
    cpy_r_line = cpy_r_r48;
    cpy_r_ignored_codes = cpy_r_r49;
    cpy_r_r50 = (CPyPtr)&((PyVarObject *)cpy_r_ignored_codes)->ob_size;
    cpy_r_r51 = *(int64_t *)cpy_r_r50;
    CPy_DECREF(cpy_r_ignored_codes);
    cpy_r_r52 = cpy_r_r51 << 1;
    cpy_r_r53 = cpy_r_r52 != 0;
    if (cpy_r_r53) goto CPyL68;
    if (!cpy_r_is_warning_unused_ignores) goto CPyL37;
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r54 = CPyTagged_StealAsObject(cpy_r_line);
    cpy_r_r55 = CPyDict_GetItem(cpy_r_used_ignored_lines, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 749, CPyStatic_mypy___errors___globals);
        goto CPyL69;
    }
    if (likely(PyList_Check(cpy_r_r55)))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 749, CPyStatic_mypy___errors___globals, "list", cpy_r_r55);
        goto CPyL69;
    }
    cpy_r_r57 = (CPyPtr)&((PyVarObject *)cpy_r_r56)->ob_size;
    cpy_r_r58 = *(int64_t *)cpy_r_r57;
    CPy_DECREF(cpy_r_r56);
    cpy_r_r59 = cpy_r_r58 << 1;
    cpy_r_r60 = cpy_r_r59 != 0;
    if (!cpy_r_r60) goto CPyL68;
CPyL37: ;
    cpy_r_r61 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r61);
    cpy_r_codes_hint = cpy_r_r61;
    CPyTagged_INCREF(cpy_r_line);
    cpy_r_r62 = CPyTagged_StealAsObject(cpy_r_line);
    cpy_r_r63 = CPyDict_GetItem(cpy_r_used_ignored_lines, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 753, CPyStatic_mypy___errors___globals);
        goto CPyL70;
    }
    if (likely(PyList_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 753, CPyStatic_mypy___errors___globals, "list", cpy_r_r63);
        goto CPyL70;
    }
    cpy_r_r65 = PySet_New(cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 753, CPyStatic_mypy___errors___globals);
        goto CPyL70;
    }
    cpy_r_r66 = CPyModule_builtins;
    cpy_r_r67 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r68 = CPyObject_GetAttr(cpy_r_r66, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 753, CPyStatic_mypy___errors___globals);
        goto CPyL71;
    }
    PyObject *cpy_r_r69[1] = {cpy_r_r65};
    cpy_r_r70 = (PyObject **)&cpy_r_r69;
    cpy_r_r71 = _PyObject_Vectorcall(cpy_r_r68, cpy_r_r70, 1, 0);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 753, CPyStatic_mypy___errors___globals);
        goto CPyL71;
    }
    CPy_DECREF(cpy_r_r65);
    if (likely(PyList_Check(cpy_r_r71)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 753, CPyStatic_mypy___errors___globals, "list", cpy_r_r71);
        goto CPyL70;
    }
    cpy_r_ignored_codes = cpy_r_r72;
    cpy_r_r73 = (CPyPtr)&((PyVarObject *)cpy_r_ignored_codes)->ob_size;
    cpy_r_r74 = *(int64_t *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r74 << 1;
    cpy_r_r76 = cpy_r_r75 != 0;
    if (cpy_r_r76) {
        goto CPyL72;
    } else
        goto CPyL73;
CPyL44: ;
    cpy_r_r77 = CPyStatics[2228]; /* ' (consider "type: ignore[' */
    cpy_r_r78 = CPyStatics[71]; /* ', ' */
    cpy_r_r79 = PyUnicode_Join(cpy_r_r78, cpy_r_ignored_codes);
    CPy_DECREF(cpy_r_ignored_codes);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 755, CPyStatic_mypy___errors___globals);
        goto CPyL69;
    }
    cpy_r_r80 = CPyStatics[2229]; /* ']" instead)' */
    cpy_r_r81 = CPyStr_Build(3, cpy_r_r77, cpy_r_r79, cpy_r_r80);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 755, CPyStatic_mypy___errors___globals);
        goto CPyL69;
    }
    cpy_r_codes_hint = cpy_r_r81;
CPyL47: ;
    cpy_r_r82 = CPyStatics[2230]; /* '"type: ignore" comment without error code' */
    cpy_r_r83 = CPyStr_Build(2, cpy_r_r82, cpy_r_codes_hint);
    CPy_DECREF(cpy_r_codes_hint);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 757, CPyStatic_mypy___errors___globals);
        goto CPyL69;
    }
    cpy_r_message = cpy_r_r83;
    cpy_r_r84 = CPyDef_mypy___errors___Errors___import_context(cpy_r_self);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 760, CPyStatic_mypy___errors___globals);
        goto CPyL74;
    }
    cpy_r_r85 = CPyDef_mypy___errors___Errors___current_module(cpy_r_self);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 762, CPyStatic_mypy___errors___globals);
        goto CPyL75;
    }
    cpy_r_r86 = CPyStatics[401]; /* 'error' */
    cpy_r_r87 = CPyStatic_errorcodes___IGNORE_WITHOUT_CODE;
    if (unlikely(cpy_r_r87 == NULL)) {
        goto CPyL76;
    } else
        goto CPyL53;
CPyL51: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"IGNORE_WITHOUT_CODE\" was not set");
    cpy_r_r88 = 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 771, CPyStatic_mypy___errors___globals);
        goto CPyL58;
    }
    CPy_Unreachable();
CPyL53: ;
    cpy_r_r89 = Py_None;
    cpy_r_r90 = Py_None;
    cpy_r_r91 = NULL;
    cpy_r_r92 = NULL;
    cpy_r_r93 = CPY_INT_TAG;
    cpy_r_r94 = CPyDef_mypy___errors___ErrorInfo(cpy_r_r84, cpy_r_file, cpy_r_r85, cpy_r_r89, cpy_r_r90, cpy_r_line, -2, cpy_r_line, -2, cpy_r_r86, cpy_r_message, cpy_r_r87, 0, 0, 0, cpy_r_r91, cpy_r_r92, cpy_r_r93);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r85);
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_message);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 759, CPyStatic_mypy___errors___globals);
        goto CPyL77;
    }
    cpy_r_info = cpy_r_r94;
    cpy_r_r95 = CPyDef_mypy___errors___Errors____add_error_info(cpy_r_self, cpy_r_file, cpy_r_info);
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r95 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 776, CPyStatic_mypy___errors___globals);
        goto CPyL77;
    }
CPyL55: ;
    cpy_r_r96 = CPyDict_CheckSize(cpy_r_r38, cpy_r_r41);
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 743, CPyStatic_mypy___errors___globals);
        goto CPyL77;
    } else
        goto CPyL29;
CPyL56: ;
    cpy_r_r97 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 743, CPyStatic_mypy___errors___globals);
        goto CPyL58;
    }
    return 1;
CPyL58: ;
    cpy_r_r98 = 2;
    return cpy_r_r98;
CPyL59: ;
    CPy_DecRef(cpy_r_used_ignored_lines);
    goto CPyL58;
CPyL60: ;
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r19);
    goto CPyL58;
CPyL61: ;
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_used_codes);
    goto CPyL19;
CPyL62: ;
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_used_codes);
    goto CPyL58;
CPyL63: ;
    CPy_DECREF(cpy_r_used_ignored_lines);
    goto CPyL24;
CPyL64: ;
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r38);
    goto CPyL58;
CPyL65: ;
    CPy_DECREF(cpy_r_used_ignored_lines);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r43.f2);
    CPy_DECREF(cpy_r_r43.f3);
    goto CPyL56;
CPyL66: ;
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r47);
    goto CPyL58;
CPyL67: ;
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    CPyTagged_DecRef(cpy_r_r48);
    goto CPyL58;
CPyL68: ;
    CPyTagged_DECREF(cpy_r_line);
    goto CPyL55;
CPyL69: ;
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL58;
CPyL70: ;
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_codes_hint);
    goto CPyL58;
CPyL71: ;
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_codes_hint);
    CPy_DecRef(cpy_r_r65);
    goto CPyL58;
CPyL72: ;
    CPy_DECREF(cpy_r_codes_hint);
    goto CPyL44;
CPyL73: ;
    CPy_DECREF(cpy_r_ignored_codes);
    goto CPyL47;
CPyL74: ;
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_message);
    goto CPyL58;
CPyL75: ;
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_r84);
    goto CPyL58;
CPyL76: ;
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_r84);
    CPy_DecRef(cpy_r_r85);
    goto CPyL51;
CPyL77: ;
    CPy_DecRef(cpy_r_used_ignored_lines);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r42);
    goto CPyL58;
}

PyObject *CPyPy_mypy___errors___Errors___generate_ignore_without_code_errors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", "is_warning_unused_ignores", 0};
    static CPyArg_Parser parser = {"OO:generate_ignore_without_code_errors", kwlist, 0};
    PyObject *obj_file;
    PyObject *obj_is_warning_unused_ignores;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_file, &obj_is_warning_unused_ignores)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(PyUnicode_Check(obj_file)))
        arg_file = obj_file;
    else {
        CPy_TypeError("str", obj_file); 
        goto fail;
    }
    char arg_is_warning_unused_ignores;
    if (unlikely(!PyBool_Check(obj_is_warning_unused_ignores))) {
        CPy_TypeError("bool", obj_is_warning_unused_ignores); goto fail;
    } else
        arg_is_warning_unused_ignores = obj_is_warning_unused_ignores == Py_True;
    char retval = CPyDef_mypy___errors___Errors___generate_ignore_without_code_errors(arg_self, arg_file, arg_is_warning_unused_ignores);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "generate_ignore_without_code_errors", 726, CPyStatic_mypy___errors___globals);
    return NULL;
}

CPyTagged CPyDef_mypy___errors___Errors___num_messages(PyObject *cpy_r_self) {
    CPyTagged cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3CIO cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_x;
    CPyPtr cpy_r_r11;
    int64_t cpy_r_r12;
    CPyTagged cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    cpy_r_r0 = 0;
    cpy_r_r1 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "num_messages", "Errors", "error_info_map", 780, CPyStatic_mypy___errors___globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = 0;
    cpy_r_r3 = PyDict_Size(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = CPyDict_GetValuesIter(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "num_messages", 780, CPyStatic_mypy___errors___globals);
        goto CPyL10;
    }
CPyL2: ;
    cpy_r_r6 = CPyDict_NextValue(cpy_r_r5, cpy_r_r2);
    cpy_r_r7 = cpy_r_r6.f1;
    cpy_r_r2 = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f0;
    if (!cpy_r_r8) goto CPyL11;
    cpy_r_r9 = cpy_r_r6.f2;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r6.f2);
    if (likely(PyList_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "num_messages", 780, CPyStatic_mypy___errors___globals, "list", cpy_r_r9);
        goto CPyL12;
    }
    cpy_r_x = cpy_r_r10;
    cpy_r_r11 = (CPyPtr)&((PyVarObject *)cpy_r_x)->ob_size;
    cpy_r_r12 = *(int64_t *)cpy_r_r11;
    CPy_DECREF(cpy_r_x);
    cpy_r_r13 = cpy_r_r12 << 1;
    cpy_r_r14 = CPyTagged_Add(cpy_r_r0, cpy_r_r13);
    CPyTagged_DECREF(cpy_r_r0);
    cpy_r_r0 = cpy_r_r14;
    cpy_r_r15 = CPyDict_CheckSize(cpy_r_r1, cpy_r_r4);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/errors.py", "num_messages", 780, CPyStatic_mypy___errors___globals);
        goto CPyL12;
    } else
        goto CPyL2;
CPyL6: ;
    cpy_r_r16 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/errors.py", "num_messages", 780, CPyStatic_mypy___errors___globals);
        goto CPyL9;
    }
    return cpy_r_r0;
CPyL8: ;
    cpy_r_r17 = CPY_INT_TAG;
    return cpy_r_r17;
CPyL9: ;
    CPyTagged_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPyTagged_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL11: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
CPyL12: ;
    CPyTagged_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL8;
}

PyObject *CPyPy_mypy___errors___Errors___num_messages(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":num_messages", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_mypy___errors___Errors___num_messages(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "num_messages", 778, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___is_errors(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    int64_t cpy_r_r1;
    CPyTagged cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "is_errors", "Errors", "error_info_map", 784, CPyStatic_mypy___errors___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyDict_Size(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 << 1;
    cpy_r_r3 = cpy_r_r2 != 0;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_mypy___errors___Errors___is_errors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_errors", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors___is_errors(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "is_errors", 782, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___is_blockers(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_has_blockers;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "is_blockers", "Errors", "has_blockers", 788, CPyStatic_mypy___errors___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyObject_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/errors.py", "is_blockers", 788, CPyStatic_mypy___errors___globals);
        goto CPyL3;
    }
    cpy_r_r3 = cpy_r_r1;
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_mypy___errors___Errors___is_blockers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":is_blockers", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors___is_blockers(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "is_blockers", 786, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___Errors___blocker_module(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_path;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_err;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_has_blockers;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "blocker_module", "Errors", "has_blockers", 792, CPyStatic_mypy___errors___globals);
        goto CPyL15;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyObject_GetIter(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "blocker_module", 792, CPyStatic_mypy___errors___globals);
        goto CPyL15;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL16;
    if (likely(PyUnicode_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "blocker_module", 792, CPyStatic_mypy___errors___globals, "str", cpy_r_r2);
        goto CPyL17;
    }
    cpy_r_path = cpy_r_r3;
    cpy_r_r4 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "blocker_module", "Errors", "error_info_map", 793, CPyStatic_mypy___errors___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r4, cpy_r_path);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_path);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "blocker_module", 793, CPyStatic_mypy___errors___globals);
        goto CPyL17;
    }
    if (likely(PyList_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "blocker_module", 793, CPyStatic_mypy___errors___globals, "list", cpy_r_r5);
        goto CPyL17;
    }
    cpy_r_r7 = 0;
CPyL8: ;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL19;
    cpy_r_r12 = CPyList_GetItemUnsafe(cpy_r_r6, cpy_r_r7);
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "blocker_module", 793, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r12);
        goto CPyL20;
    }
    cpy_r_err = cpy_r_r13;
    cpy_r_r14 = ((mypy___errors___ErrorInfoObject *)cpy_r_err)->_blocker;
    if (cpy_r_r14) {
        goto CPyL21;
    } else
        goto CPyL22;
CPyL11: ;
    cpy_r_r15 = ((mypy___errors___ErrorInfoObject *)cpy_r_err)->_module;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_err);
    return cpy_r_r15;
CPyL12: ;
    cpy_r_r16 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r16;
    goto CPyL8;
CPyL13: ;
    cpy_r_r17 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/errors.py", "blocker_module", 792, CPyStatic_mypy___errors___globals);
        goto CPyL15;
    }
    cpy_r_r18 = Py_None;
    CPy_INCREF(cpy_r_r18);
    return cpy_r_r18;
CPyL15: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL16: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL15;
CPyL18: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_path);
    goto CPyL15;
CPyL19: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL2;
CPyL20: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r6);
    goto CPyL15;
CPyL21: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r6);
    goto CPyL11;
CPyL22: ;
    CPy_DECREF(cpy_r_err);
    goto CPyL12;
}

PyObject *CPyPy_mypy___errors___Errors___blocker_module(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":blocker_module", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___errors___Errors___blocker_module(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "blocker_module", 790, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___is_errors_for_file(PyObject *cpy_r_self, PyObject *cpy_r_file) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "is_errors_for_file", "Errors", "error_info_map", 800, CPyStatic_mypy___errors___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_file);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/errors.py", "is_errors_for_file", 800, CPyStatic_mypy___errors___globals);
        goto CPyL3;
    }
    cpy_r_r3 = cpy_r_r1;
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_mypy___errors___Errors___is_errors_for_file(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"file", 0};
    static CPyArg_Parser parser = {"O:is_errors_for_file", kwlist, 0};
    PyObject *obj_file;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_file)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_file;
    if (likely(PyUnicode_Check(obj_file)))
        arg_file = obj_file;
    else {
        CPy_TypeError("str", obj_file); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors___is_errors_for_file(arg_self, arg_file);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "is_errors_for_file", 798, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors___prefer_simple_messages(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r__watcher;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_file;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_ignored_files;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "prefer_simple_messages", "Errors", "ignored_files", 811, CPyStatic_mypy___errors___globals);
        goto CPyL13;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = PySet_Contains(cpy_r_r1, cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/errors.py", "prefer_simple_messages", 811, CPyStatic_mypy___errors___globals);
        goto CPyL12;
    }
    cpy_r_r4 = cpy_r_r2;
    if (!cpy_r_r4) goto CPyL4;
    return 1;
CPyL4: ;
    cpy_r_r5 = ((mypy___errors___ErrorsObject *)cpy_r_self)->__watchers;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = 0;
CPyL5: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL14;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r5, cpy_r_r6);
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_mypy___errors___ErrorWatcher))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "prefer_simple_messages", 814, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorWatcher", cpy_r_r11);
        goto CPyL15;
    }
    cpy_r__watcher = cpy_r_r12;
    cpy_r_r13 = ((mypy___errors___ErrorWatcherObject *)cpy_r__watcher)->__filter;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = 1 ? Py_True : Py_False;
    cpy_r_r15 = cpy_r_r13 == cpy_r_r14;
    CPy_DECREF(cpy_r_r13);
    if (!cpy_r_r15) goto CPyL16;
    cpy_r_r16 = ((mypy___errors___ErrorWatcherObject *)cpy_r__watcher)->__filtered;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_r16 == cpy_r_r17;
    CPy_DECREF(cpy_r__watcher);
    if (cpy_r_r18) {
        goto CPyL17;
    } else
        goto CPyL10;
CPyL9: ;
    return 1;
CPyL10: ;
    cpy_r_r19 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r19;
    goto CPyL5;
CPyL11: ;
    return 0;
CPyL12: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL13: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL12;
CPyL14: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL12;
CPyL16: ;
    CPy_DECREF(cpy_r__watcher);
    goto CPyL10;
CPyL17: ;
    CPy_DECREF(cpy_r_r5);
    goto CPyL9;
}

PyObject *CPyPy_mypy___errors___Errors___prefer_simple_messages(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":prefer_simple_messages", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors___prefer_simple_messages(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "prefer_simple_messages", 802, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___Errors___raise_error(PyObject *cpy_r_self, char cpy_r_use_stdout) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    if (cpy_r_use_stdout != 2) goto CPyL2;
    cpy_r_use_stdout = 1;
CPyL2: ;
    cpy_r_r0 = CPyDef_mypy___errors___Errors___new_messages(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "raise_error", 828, CPyStatic_mypy___errors___globals);
        goto CPyL8;
    }
    cpy_r_r1 = CPyDef_mypy___errors___Errors___blocker_module(cpy_r_self);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "raise_error", 828, CPyStatic_mypy___errors___globals);
        goto CPyL9;
    }
    cpy_r_r2 = (PyObject *)CPyType_mypy___errors___CompileError;
    cpy_r_r3 = cpy_r_use_stdout ? Py_True : Py_False;
    PyObject *cpy_r_r4[3] = {cpy_r_r0, cpy_r_r3, cpy_r_r1};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = CPyStatics[9362]; /* ('use_stdout', 'module_with_blocker') */
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r2, cpy_r_r5, 1, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "raise_error", 827, CPyStatic_mypy___errors___globals);
        goto CPyL10;
    }
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_mypy___errors___CompileError))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "raise_error", 827, CPyStatic_mypy___errors___globals, "mypy.errors.CompileError", cpy_r_r7);
        goto CPyL8;
    }
    CPy_Raise(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/errors.py", "raise_error", 827, CPyStatic_mypy___errors___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
}

PyObject *CPyPy_mypy___errors___Errors___raise_error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"use_stdout", 0};
    static CPyArg_Parser parser = {"|O:raise_error", kwlist, 0};
    PyObject *obj_use_stdout = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_use_stdout)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    char arg_use_stdout;
    if (obj_use_stdout == NULL) {
        arg_use_stdout = 2;
    } else if (unlikely(!PyBool_Check(obj_use_stdout))) {
        CPy_TypeError("bool", obj_use_stdout); goto fail;
    } else
        arg_use_stdout = obj_use_stdout == Py_True;
    PyObject *retval = CPyDef_mypy___errors___Errors___raise_error(arg_self, arg_use_stdout);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "raise_error", 820, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___Errors___format_messages(PyObject *cpy_r_self, PyObject *cpy_r_error_info, PyObject *cpy_r_source_lines) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_info;
    char cpy_r_r9;
    char cpy_r_r10;
    int32_t cpy_r_r11;
    char cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_errors;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    tuple_T9OIIIIOOCO cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_file;
    CPyTagged cpy_r_r25;
    CPyTagged cpy_r_line;
    CPyTagged cpy_r_r26;
    CPyTagged cpy_r_column;
    CPyTagged cpy_r_r27;
    CPyTagged cpy_r_end_line;
    CPyTagged cpy_r_r28;
    CPyTagged cpy_r_end_column;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_severity;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_message;
    char cpy_r_r31;
    char cpy_r_allow_dups;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_code;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    int64_t cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    int64_t cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_srcloc;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    int64_t cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    int64_t cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    int64_t cpy_r_r69;
    char cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    int32_t cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    char cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    int32_t cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    char cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    CPyPtr cpy_r_r120;
    int64_t cpy_r_r121;
    CPyTagged cpy_r_r122;
    char cpy_r_r123;
    int64_t cpy_r_r124;
    char cpy_r_r125;
    char cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    CPyTagged cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_source_line;
    PyObject *cpy_r_r132;
    PyObject **cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_source_line_expanded;
    int64_t cpy_r_r137;
    char cpy_r_r138;
    char cpy_r_r139;
    char cpy_r_r140;
    int64_t cpy_r_r141;
    char cpy_r_r142;
    CPyTagged cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject **cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    int64_t cpy_r_r149;
    char cpy_r_r150;
    CPyTagged cpy_r_r151;
    CPyTagged cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject **cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    int64_t cpy_r_r160;
    char cpy_r_r161;
    CPyTagged cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject **cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    int64_t cpy_r_r170;
    char cpy_r_r171;
    CPyTagged cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    int32_t cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_marker;
    int64_t cpy_r_r178;
    char cpy_r_r179;
    char cpy_r_r180;
    char cpy_r_r181;
    int64_t cpy_r_r182;
    char cpy_r_r183;
    int64_t cpy_r_r184;
    char cpy_r_r185;
    char cpy_r_r186;
    char cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    CPyTagged cpy_r_r190;
    CPyTagged cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    CPyTagged cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    int32_t cpy_r_r202;
    char cpy_r_r203;
    CPyTagged cpy_r_r204;
    PyObject *cpy_r_r205;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 840, CPyStatic_mypy___errors___globals);
        goto CPyL123;
    }
    cpy_r_a = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 841, CPyStatic_mypy___errors___globals);
        goto CPyL124;
    }
    cpy_r_r2 = 0;
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_error_info)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL8;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_error_info, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 841, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r7);
        goto CPyL125;
    }
    cpy_r_info = cpy_r_r8;
    cpy_r_r9 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_hidden;
    cpy_r_r10 = cpy_r_r9 ^ 1;
    if (!cpy_r_r10) goto CPyL126;
    cpy_r_r11 = PyList_Append(cpy_r_r1, cpy_r_info);
    CPy_DECREF(cpy_r_info);
    cpy_r_r12 = cpy_r_r11 >= 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 841, CPyStatic_mypy___errors___globals);
        goto CPyL125;
    }
CPyL7: ;
    cpy_r_r13 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r13;
    goto CPyL3;
CPyL8: ;
    cpy_r_error_info = cpy_r_r1;
    cpy_r_r14 = CPyDef_mypy___errors___Errors___sort_messages(cpy_r_self, cpy_r_error_info);
    CPy_DECREF(cpy_r_error_info);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 842, CPyStatic_mypy___errors___globals);
        goto CPyL124;
    }
    cpy_r_r15 = CPyDef_mypy___errors___Errors___render_messages(cpy_r_self, cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 842, CPyStatic_mypy___errors___globals);
        goto CPyL124;
    }
    cpy_r_errors = cpy_r_r15;
    cpy_r_r16 = CPyDef_mypy___errors___Errors___remove_duplicates(cpy_r_self, cpy_r_errors);
    CPy_DECREF(cpy_r_errors);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 843, CPyStatic_mypy___errors___globals);
        goto CPyL124;
    }
    cpy_r_errors = cpy_r_r16;
    cpy_r_r17 = 0;
CPyL12: ;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_errors)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = (Py_ssize_t)cpy_r_r17 < (Py_ssize_t)cpy_r_r20;
    if (!cpy_r_r21) goto CPyL127;
    cpy_r_r22 = CPyList_GetItemUnsafe(cpy_r_errors, cpy_r_r17);
    PyObject *__tmp2094;
    if (unlikely(!(PyTuple_Check(cpy_r_r22) && PyTuple_GET_SIZE(cpy_r_r22) == 9))) {
        __tmp2094 = NULL;
        goto __LL2095;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r22, 0)))
        __tmp2094 = PyTuple_GET_ITEM(cpy_r_r22, 0);
    else {
        __tmp2094 = NULL;
    }
    if (__tmp2094 != NULL) goto __LL2096;
    if (PyTuple_GET_ITEM(cpy_r_r22, 0) == Py_None)
        __tmp2094 = PyTuple_GET_ITEM(cpy_r_r22, 0);
    else {
        __tmp2094 = NULL;
    }
    if (__tmp2094 != NULL) goto __LL2096;
    __tmp2094 = NULL;
__LL2096: ;
    if (__tmp2094 == NULL) goto __LL2095;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r22, 1))))
        __tmp2094 = PyTuple_GET_ITEM(cpy_r_r22, 1);
    else {
        __tmp2094 = NULL;
    }
    if (__tmp2094 == NULL) goto __LL2095;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r22, 2))))
        __tmp2094 = PyTuple_GET_ITEM(cpy_r_r22, 2);
    else {
        __tmp2094 = NULL;
    }
    if (__tmp2094 == NULL) goto __LL2095;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r22, 3))))
        __tmp2094 = PyTuple_GET_ITEM(cpy_r_r22, 3);
    else {
        __tmp2094 = NULL;
    }
    if (__tmp2094 == NULL) goto __LL2095;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r22, 4))))
        __tmp2094 = PyTuple_GET_ITEM(cpy_r_r22, 4);
    else {
        __tmp2094 = NULL;
    }
    if (__tmp2094 == NULL) goto __LL2095;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r22, 5))))
        __tmp2094 = PyTuple_GET_ITEM(cpy_r_r22, 5);
    else {
        __tmp2094 = NULL;
    }
    if (__tmp2094 == NULL) goto __LL2095;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r22, 6))))
        __tmp2094 = PyTuple_GET_ITEM(cpy_r_r22, 6);
    else {
        __tmp2094 = NULL;
    }
    if (__tmp2094 == NULL) goto __LL2095;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r22, 7))))
        __tmp2094 = PyTuple_GET_ITEM(cpy_r_r22, 7);
    else {
        __tmp2094 = NULL;
    }
    if (__tmp2094 == NULL) goto __LL2095;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r22, 8), CPyType_errorcodes___ErrorCode))
        __tmp2094 = PyTuple_GET_ITEM(cpy_r_r22, 8);
    else {
        __tmp2094 = NULL;
    }
    if (__tmp2094 != NULL) goto __LL2097;
    if (PyTuple_GET_ITEM(cpy_r_r22, 8) == Py_None)
        __tmp2094 = PyTuple_GET_ITEM(cpy_r_r22, 8);
    else {
        __tmp2094 = NULL;
    }
    if (__tmp2094 != NULL) goto __LL2097;
    __tmp2094 = NULL;
__LL2097: ;
    if (__tmp2094 == NULL) goto __LL2095;
    __tmp2094 = cpy_r_r22;
__LL2095: ;
    if (unlikely(__tmp2094 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r22); cpy_r_r23 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2098 = PyTuple_GET_ITEM(cpy_r_r22, 0);
        CPy_INCREF(__tmp2098);
        PyObject *__tmp2099;
        if (PyUnicode_Check(__tmp2098))
            __tmp2099 = __tmp2098;
        else {
            __tmp2099 = NULL;
        }
        if (__tmp2099 != NULL) goto __LL2100;
        if (__tmp2098 == Py_None)
            __tmp2099 = __tmp2098;
        else {
            __tmp2099 = NULL;
        }
        if (__tmp2099 != NULL) goto __LL2100;
        CPy_TypeError("str or None", __tmp2098); 
        __tmp2099 = NULL;
__LL2100: ;
        cpy_r_r23.f0 = __tmp2099;
        PyObject *__tmp2101 = PyTuple_GET_ITEM(cpy_r_r22, 1);
        CPyTagged __tmp2102;
        if (likely(PyLong_Check(__tmp2101)))
            __tmp2102 = CPyTagged_FromObject(__tmp2101);
        else {
            CPy_TypeError("int", __tmp2101); __tmp2102 = CPY_INT_TAG;
        }
        cpy_r_r23.f1 = __tmp2102;
        PyObject *__tmp2103 = PyTuple_GET_ITEM(cpy_r_r22, 2);
        CPyTagged __tmp2104;
        if (likely(PyLong_Check(__tmp2103)))
            __tmp2104 = CPyTagged_FromObject(__tmp2103);
        else {
            CPy_TypeError("int", __tmp2103); __tmp2104 = CPY_INT_TAG;
        }
        cpy_r_r23.f2 = __tmp2104;
        PyObject *__tmp2105 = PyTuple_GET_ITEM(cpy_r_r22, 3);
        CPyTagged __tmp2106;
        if (likely(PyLong_Check(__tmp2105)))
            __tmp2106 = CPyTagged_FromObject(__tmp2105);
        else {
            CPy_TypeError("int", __tmp2105); __tmp2106 = CPY_INT_TAG;
        }
        cpy_r_r23.f3 = __tmp2106;
        PyObject *__tmp2107 = PyTuple_GET_ITEM(cpy_r_r22, 4);
        CPyTagged __tmp2108;
        if (likely(PyLong_Check(__tmp2107)))
            __tmp2108 = CPyTagged_FromObject(__tmp2107);
        else {
            CPy_TypeError("int", __tmp2107); __tmp2108 = CPY_INT_TAG;
        }
        cpy_r_r23.f4 = __tmp2108;
        PyObject *__tmp2109 = PyTuple_GET_ITEM(cpy_r_r22, 5);
        CPy_INCREF(__tmp2109);
        PyObject *__tmp2110;
        if (likely(PyUnicode_Check(__tmp2109)))
            __tmp2110 = __tmp2109;
        else {
            CPy_TypeError("str", __tmp2109); 
            __tmp2110 = NULL;
        }
        cpy_r_r23.f5 = __tmp2110;
        PyObject *__tmp2111 = PyTuple_GET_ITEM(cpy_r_r22, 6);
        CPy_INCREF(__tmp2111);
        PyObject *__tmp2112;
        if (likely(PyUnicode_Check(__tmp2111)))
            __tmp2112 = __tmp2111;
        else {
            CPy_TypeError("str", __tmp2111); 
            __tmp2112 = NULL;
        }
        cpy_r_r23.f6 = __tmp2112;
        PyObject *__tmp2113 = PyTuple_GET_ITEM(cpy_r_r22, 7);
        char __tmp2114;
        if (unlikely(!PyBool_Check(__tmp2113))) {
            CPy_TypeError("bool", __tmp2113); __tmp2114 = 2;
        } else
            __tmp2114 = __tmp2113 == Py_True;
        cpy_r_r23.f7 = __tmp2114;
        PyObject *__tmp2115 = PyTuple_GET_ITEM(cpy_r_r22, 8);
        CPy_INCREF(__tmp2115);
        PyObject *__tmp2116;
        if (PyObject_TypeCheck(__tmp2115, CPyType_errorcodes___ErrorCode))
            __tmp2116 = __tmp2115;
        else {
            __tmp2116 = NULL;
        }
        if (__tmp2116 != NULL) goto __LL2117;
        if (__tmp2115 == Py_None)
            __tmp2116 = __tmp2115;
        else {
            __tmp2116 = NULL;
        }
        if (__tmp2116 != NULL) goto __LL2117;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2115); 
        __tmp2116 = NULL;
__LL2117: ;
        cpy_r_r23.f8 = __tmp2116;
    }
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 844, CPyStatic_mypy___errors___globals);
        goto CPyL128;
    }
    cpy_r_r24 = cpy_r_r23.f0;
    CPy_INCREF(cpy_r_r24);
    cpy_r_file = cpy_r_r24;
    cpy_r_r25 = cpy_r_r23.f1;
    CPyTagged_INCREF(cpy_r_r25);
    cpy_r_line = cpy_r_r25;
    cpy_r_r26 = cpy_r_r23.f2;
    CPyTagged_INCREF(cpy_r_r26);
    cpy_r_column = cpy_r_r26;
    cpy_r_r27 = cpy_r_r23.f3;
    CPyTagged_INCREF(cpy_r_r27);
    cpy_r_end_line = cpy_r_r27;
    cpy_r_r28 = cpy_r_r23.f4;
    CPyTagged_INCREF(cpy_r_r28);
    cpy_r_end_column = cpy_r_r28;
    cpy_r_r29 = cpy_r_r23.f5;
    CPy_INCREF(cpy_r_r29);
    cpy_r_severity = cpy_r_r29;
    cpy_r_r30 = cpy_r_r23.f6;
    CPy_INCREF(cpy_r_r30);
    cpy_r_message = cpy_r_r30;
    cpy_r_r31 = cpy_r_r23.f7;
    cpy_r_allow_dups = cpy_r_r31;
    cpy_r_r32 = cpy_r_r23.f8;
    CPy_INCREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r23.f0);
    CPyTagged_DECREF(cpy_r_r23.f1);
    CPyTagged_DECREF(cpy_r_r23.f2);
    CPyTagged_DECREF(cpy_r_r23.f3);
    CPyTagged_DECREF(cpy_r_r23.f4);
    CPy_DECREF(cpy_r_r23.f5);
    CPy_DECREF(cpy_r_r23.f6);
    CPy_DECREF(cpy_r_r23.f8);
    cpy_r_code = cpy_r_r32;
    cpy_r_r33 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r33);
    cpy_r_s = cpy_r_r33;
    CPy_DECREF(cpy_r_s);
    cpy_r_r34 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r35 = cpy_r_file != cpy_r_r34;
    if (!cpy_r_r35) goto CPyL129;
    cpy_r_r36 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    cpy_r_r37 = ((mypy___options___OptionsObject *)cpy_r_r36)->_show_column_numbers;
    if (!cpy_r_r37) goto CPyL38;
CPyL16: ;
    cpy_r_r38 = cpy_r_line & 1;
    cpy_r_r39 = cpy_r_r38 != 0;
    if (!cpy_r_r39) goto CPyL18;
    cpy_r_r40 = CPyTagged_IsLt_(cpy_r_line, 0);
    if (cpy_r_r40) {
        goto CPyL38;
    } else
        goto CPyL19;
CPyL18: ;
    cpy_r_r41 = (Py_ssize_t)cpy_r_line >= (Py_ssize_t)0;
    if (!cpy_r_r41) goto CPyL38;
CPyL19: ;
    cpy_r_r42 = cpy_r_column & 1;
    cpy_r_r43 = cpy_r_r42 != 0;
    if (!cpy_r_r43) goto CPyL21;
    cpy_r_r44 = CPyTagged_IsLt_(cpy_r_column, 0);
    if (cpy_r_r44) {
        goto CPyL38;
    } else
        goto CPyL22;
CPyL21: ;
    cpy_r_r45 = (Py_ssize_t)cpy_r_column >= (Py_ssize_t)0;
    if (!cpy_r_r45) goto CPyL38;
CPyL22: ;
    if (likely(cpy_r_file != Py_None))
        cpy_r_r46 = cpy_r_file;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 858, CPyStatic_mypy___errors___globals, "str", cpy_r_file);
        goto CPyL130;
    }
    cpy_r_r47 = CPyStatics[171]; /* ':' */
    cpy_r_r48 = CPyTagged_Str(cpy_r_line);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 858, CPyStatic_mypy___errors___globals);
        goto CPyL131;
    }
    cpy_r_r49 = CPyStatics[171]; /* ':' */
    cpy_r_r50 = CPyTagged_Add(2, cpy_r_column);
    cpy_r_r51 = CPyTagged_Str(cpy_r_r50);
    CPyTagged_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 858, CPyStatic_mypy___errors___globals);
        goto CPyL132;
    }
    cpy_r_r52 = CPyStr_Build(5, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r51);
    CPy_DECREF(cpy_r_r46);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 858, CPyStatic_mypy___errors___globals);
        goto CPyL130;
    }
    cpy_r_srcloc = cpy_r_r52;
    cpy_r_r53 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    cpy_r_r54 = ((mypy___options___OptionsObject *)cpy_r_r53)->_show_error_end;
    if (!cpy_r_r54) goto CPyL47;
CPyL27: ;
    cpy_r_r55 = cpy_r_end_line & 1;
    cpy_r_r56 = cpy_r_r55 != 0;
    if (!cpy_r_r56) goto CPyL29;
    cpy_r_r57 = CPyTagged_IsLt_(cpy_r_end_line, 0);
    if (cpy_r_r57) {
        goto CPyL47;
    } else
        goto CPyL30;
CPyL29: ;
    cpy_r_r58 = (Py_ssize_t)cpy_r_end_line >= (Py_ssize_t)0;
    if (!cpy_r_r58) goto CPyL47;
CPyL30: ;
    cpy_r_r59 = cpy_r_end_column & 1;
    cpy_r_r60 = cpy_r_r59 != 0;
    if (!cpy_r_r60) goto CPyL32;
    cpy_r_r61 = CPyTagged_IsLt_(cpy_r_end_column, 0);
    if (cpy_r_r61) {
        goto CPyL47;
    } else
        goto CPyL33;
CPyL32: ;
    cpy_r_r62 = (Py_ssize_t)cpy_r_end_column >= (Py_ssize_t)0;
    if (!cpy_r_r62) goto CPyL47;
CPyL33: ;
    cpy_r_r63 = CPyStatics[171]; /* ':' */
    cpy_r_r64 = CPyTagged_Str(cpy_r_end_line);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 860, CPyStatic_mypy___errors___globals);
        goto CPyL133;
    }
    cpy_r_r65 = CPyStatics[171]; /* ':' */
    cpy_r_r66 = CPyTagged_Str(cpy_r_end_column);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 860, CPyStatic_mypy___errors___globals);
        goto CPyL134;
    }
    cpy_r_r67 = CPyStr_Build(4, cpy_r_r63, cpy_r_r64, cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 860, CPyStatic_mypy___errors___globals);
        goto CPyL133;
    }
    cpy_r_r68 = CPyStr_Append(cpy_r_srcloc, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 860, CPyStatic_mypy___errors___globals);
        goto CPyL130;
    }
    cpy_r_srcloc = cpy_r_r68;
    goto CPyL47;
CPyL38: ;
    cpy_r_r69 = cpy_r_line & 1;
    cpy_r_r70 = cpy_r_r69 != 0;
    if (!cpy_r_r70) goto CPyL40;
    cpy_r_r71 = CPyTagged_IsLt_(cpy_r_line, 0);
    if (cpy_r_r71) {
        goto CPyL45;
    } else
        goto CPyL41;
CPyL40: ;
    cpy_r_r72 = (Py_ssize_t)cpy_r_line >= (Py_ssize_t)0;
    if (!cpy_r_r72) goto CPyL45;
CPyL41: ;
    if (likely(cpy_r_file != Py_None))
        cpy_r_r73 = cpy_r_file;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 862, CPyStatic_mypy___errors___globals, "str", cpy_r_file);
        goto CPyL130;
    }
    cpy_r_r74 = CPyStatics[171]; /* ':' */
    cpy_r_r75 = CPyTagged_Str(cpy_r_line);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 862, CPyStatic_mypy___errors___globals);
        goto CPyL135;
    }
    cpy_r_r76 = CPyStr_Build(3, cpy_r_r73, cpy_r_r74, cpy_r_r75);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 862, CPyStatic_mypy___errors___globals);
        goto CPyL130;
    }
    cpy_r_srcloc = cpy_r_r76;
    goto CPyL47;
CPyL45: ;
    if (likely(cpy_r_file != Py_None))
        cpy_r_r77 = cpy_r_file;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 864, CPyStatic_mypy___errors___globals, "str", cpy_r_file);
        goto CPyL130;
    }
    cpy_r_srcloc = cpy_r_r77;
CPyL47: ;
    cpy_r_r78 = CPyStatics[297]; /* ': ' */
    cpy_r_r79 = CPyStatics[297]; /* ': ' */
    cpy_r_r80 = CPyStr_Build(5, cpy_r_srcloc, cpy_r_r78, cpy_r_severity, cpy_r_r79, cpy_r_message);
    CPy_DECREF(cpy_r_srcloc);
    CPy_DECREF(cpy_r_message);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 865, CPyStatic_mypy___errors___globals);
        goto CPyL136;
    }
    cpy_r_s = cpy_r_r80;
    goto CPyL50;
CPyL49: ;
    cpy_r_s = cpy_r_message;
CPyL50: ;
    cpy_r_r81 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_hide_error_codes;
    if (cpy_r_r81) goto CPyL137;
CPyL51: ;
    cpy_r_r82 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r83 = cpy_r_code != cpy_r_r82;
    if (!cpy_r_r83) goto CPyL137;
    CPy_INCREF(cpy_r_code);
    if (likely(cpy_r_code != Py_None))
        cpy_r_r84 = cpy_r_code;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 853, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_code);
        goto CPyL138;
    }
    cpy_r_r85 = PyObject_IsTrue(cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r86 = cpy_r_r85 >= 0;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 853, CPyStatic_mypy___errors___globals);
        goto CPyL138;
    }
    cpy_r_r87 = cpy_r_r85;
    if (!cpy_r_r87) goto CPyL137;
    cpy_r_r88 = CPyStatics[413]; /* 'note' */
    cpy_r_r89 = PyUnicode_Compare(cpy_r_severity, cpy_r_r88);
    cpy_r_r90 = cpy_r_r89 == -1;
    if (!cpy_r_r90) goto CPyL58;
    cpy_r_r91 = PyErr_Occurred();
    cpy_r_r92 = cpy_r_r91 != NULL;
    if (!cpy_r_r92) goto CPyL58;
    cpy_r_r93 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 871, CPyStatic_mypy___errors___globals);
        goto CPyL138;
    }
CPyL58: ;
    cpy_r_r94 = cpy_r_r89 != 0;
    if (cpy_r_r94) goto CPyL65;
    CPy_INCREF(cpy_r_code);
    if (likely(cpy_r_code != Py_None))
        cpy_r_r95 = cpy_r_code;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 871, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_code);
        goto CPyL138;
    }
    cpy_r_r96 = CPyStatic_mypy___errors___SHOW_NOTE_CODES;
    if (unlikely(cpy_r_r96 == NULL)) {
        goto CPyL139;
    } else
        goto CPyL63;
CPyL61: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"SHOW_NOTE_CODES\" was not set");
    cpy_r_r97 = 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 871, CPyStatic_mypy___errors___globals);
        goto CPyL123;
    }
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r98 = PySet_Contains(cpy_r_r96, cpy_r_r95);
    CPy_DECREF(cpy_r_r95);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 871, CPyStatic_mypy___errors___globals);
        goto CPyL138;
    }
    cpy_r_r100 = cpy_r_r98;
    if (!cpy_r_r100) goto CPyL137;
CPyL65: ;
    cpy_r_r101 = CPyStatics[2231]; /* '  [' */
    if (likely(cpy_r_code != Py_None))
        cpy_r_r102 = cpy_r_code;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 875, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_code);
        goto CPyL138;
    }
    cpy_r_r103 = ((mypy___errorcodes___ErrorCodeObject *)cpy_r_r102)->_code;
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "format_messages", "ErrorCode", "code", 875, CPyStatic_mypy___errors___globals);
        goto CPyL138;
    }
    CPy_INCREF(cpy_r_r103);
CPyL67: ;
    CPy_DECREF(cpy_r_code);
    cpy_r_r104 = CPyStatics[208]; /* ']' */
    cpy_r_r105 = CPyStr_Build(4, cpy_r_s, cpy_r_r101, cpy_r_r103, cpy_r_r104);
    CPy_DECREF(cpy_r_s);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 875, CPyStatic_mypy___errors___globals);
        goto CPyL140;
    }
    cpy_r_s = cpy_r_r105;
CPyL69: ;
    cpy_r_r106 = PyList_Append(cpy_r_a, cpy_r_s);
    CPy_DECREF(cpy_r_s);
    cpy_r_r107 = cpy_r_r106 >= 0;
    if (unlikely(!cpy_r_r107)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 876, CPyStatic_mypy___errors___globals);
        goto CPyL140;
    }
    cpy_r_r108 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    cpy_r_r109 = ((mypy___options___OptionsObject *)cpy_r_r108)->_pretty;
    if (!cpy_r_r109) goto CPyL141;
CPyL71: ;
    cpy_r_r110 = CPyStatics[401]; /* 'error' */
    cpy_r_r111 = PyUnicode_Compare(cpy_r_severity, cpy_r_r110);
    CPy_DECREF(cpy_r_severity);
    cpy_r_r112 = cpy_r_r111 == -1;
    if (!cpy_r_r112) goto CPyL74;
    cpy_r_r113 = PyErr_Occurred();
    cpy_r_r114 = cpy_r_r113 != NULL;
    if (!cpy_r_r114) goto CPyL74;
    cpy_r_r115 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 879, CPyStatic_mypy___errors___globals);
        goto CPyL142;
    }
CPyL74: ;
    cpy_r_r116 = cpy_r_r111 == 0;
    if (!cpy_r_r116) goto CPyL143;
    cpy_r_r117 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r118 = cpy_r_source_lines != cpy_r_r117;
    if (!cpy_r_r118) goto CPyL143;
    CPy_INCREF(cpy_r_source_lines);
    if (likely(cpy_r_source_lines != Py_None))
        cpy_r_r119 = cpy_r_source_lines;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 832, CPyStatic_mypy___errors___globals, "list", cpy_r_source_lines);
        goto CPyL142;
    }
    cpy_r_r120 = (CPyPtr)&((PyVarObject *)cpy_r_r119)->ob_size;
    cpy_r_r121 = *(int64_t *)cpy_r_r120;
    CPy_DECREF(cpy_r_r119);
    cpy_r_r122 = cpy_r_r121 << 1;
    cpy_r_r123 = cpy_r_r122 != 0;
    if (!cpy_r_r123) goto CPyL143;
    cpy_r_r124 = cpy_r_line & 1;
    cpy_r_r125 = cpy_r_r124 != 0;
    if (!cpy_r_r125) goto CPyL80;
    cpy_r_r126 = CPyTagged_IsLt_(0, cpy_r_line);
    if (cpy_r_r126) {
        goto CPyL81;
    } else
        goto CPyL143;
CPyL80: ;
    cpy_r_r127 = (Py_ssize_t)cpy_r_line > (Py_ssize_t)0;
    if (!cpy_r_r127) goto CPyL143;
CPyL81: ;
    CPy_INCREF(cpy_r_source_lines);
    if (likely(cpy_r_source_lines != Py_None))
        cpy_r_r128 = cpy_r_source_lines;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 880, CPyStatic_mypy___errors___globals, "list", cpy_r_source_lines);
        goto CPyL142;
    }
    cpy_r_r129 = CPyTagged_Subtract(cpy_r_line, 2);
    cpy_r_r130 = CPyList_GetItem(cpy_r_r128, cpy_r_r129);
    CPy_DECREF(cpy_r_r128);
    CPyTagged_DECREF(cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 880, CPyStatic_mypy___errors___globals);
        goto CPyL142;
    }
    if (likely(PyUnicode_Check(cpy_r_r130)))
        cpy_r_r131 = cpy_r_r130;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 880, CPyStatic_mypy___errors___globals, "str", cpy_r_r130);
        goto CPyL142;
    }
    cpy_r_source_line = cpy_r_r131;
    cpy_r_r132 = CPyStatics[2232]; /* 'expandtabs' */
    PyObject *cpy_r_r133[1] = {cpy_r_source_line};
    cpy_r_r134 = (PyObject **)&cpy_r_r133;
    cpy_r_r135 = PyObject_VectorcallMethod(cpy_r_r132, cpy_r_r134, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 881, CPyStatic_mypy___errors___globals);
        goto CPyL144;
    }
    if (likely(PyUnicode_Check(cpy_r_r135)))
        cpy_r_r136 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 881, CPyStatic_mypy___errors___globals, "str", cpy_r_r135);
        goto CPyL144;
    }
    cpy_r_source_line_expanded = cpy_r_r136;
    cpy_r_r137 = cpy_r_column & 1;
    cpy_r_r138 = cpy_r_r137 != 0;
    if (!cpy_r_r138) goto CPyL88;
    cpy_r_r139 = CPyTagged_IsLt_(cpy_r_column, 0);
    if (cpy_r_r139) {
        goto CPyL145;
    } else
        goto CPyL94;
CPyL88: ;
    cpy_r_r140 = (Py_ssize_t)cpy_r_column < (Py_ssize_t)0;
    if (cpy_r_r140) {
        goto CPyL145;
    } else
        goto CPyL94;
CPyL89: ;
    cpy_r_r141 = CPyStr_Size_size_t(cpy_r_source_line);
    cpy_r_r142 = cpy_r_r141 >= 0;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 884, CPyStatic_mypy___errors___globals);
        goto CPyL146;
    }
    cpy_r_r143 = cpy_r_r141 << 1;
    cpy_r_r144 = CPyStatics[2233]; /* 'lstrip' */
    PyObject *cpy_r_r145[1] = {cpy_r_source_line};
    cpy_r_r146 = (PyObject **)&cpy_r_r145;
    cpy_r_r147 = PyObject_VectorcallMethod(cpy_r_r144, cpy_r_r146, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r147 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 884, CPyStatic_mypy___errors___globals);
        goto CPyL146;
    }
    if (likely(PyUnicode_Check(cpy_r_r147)))
        cpy_r_r148 = cpy_r_r147;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 884, CPyStatic_mypy___errors___globals, "str", cpy_r_r147);
        goto CPyL146;
    }
    cpy_r_r149 = CPyStr_Size_size_t(cpy_r_r148);
    CPy_DECREF(cpy_r_r148);
    cpy_r_r150 = cpy_r_r149 >= 0;
    if (unlikely(!cpy_r_r150)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 884, CPyStatic_mypy___errors___globals);
        goto CPyL146;
    }
    cpy_r_r151 = cpy_r_r149 << 1;
    cpy_r_r152 = CPyTagged_Subtract(cpy_r_r143, cpy_r_r151);
    cpy_r_column = cpy_r_r152;
CPyL94: ;
    cpy_r_r153 = CPyStr_GetSlice(cpy_r_source_line, 0, cpy_r_column);
    CPyTagged_DECREF(cpy_r_column);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 887, CPyStatic_mypy___errors___globals);
        goto CPyL146;
    }
    if (likely(PyUnicode_Check(cpy_r_r153)))
        cpy_r_r154 = cpy_r_r153;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 887, CPyStatic_mypy___errors___globals, "str", cpy_r_r153);
        goto CPyL146;
    }
    cpy_r_r155 = CPyStatics[2232]; /* 'expandtabs' */
    PyObject *cpy_r_r156[1] = {cpy_r_r154};
    cpy_r_r157 = (PyObject **)&cpy_r_r156;
    cpy_r_r158 = PyObject_VectorcallMethod(cpy_r_r155, cpy_r_r157, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 887, CPyStatic_mypy___errors___globals);
        goto CPyL147;
    }
    CPy_DECREF(cpy_r_r154);
    if (likely(PyUnicode_Check(cpy_r_r158)))
        cpy_r_r159 = cpy_r_r158;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 887, CPyStatic_mypy___errors___globals, "str", cpy_r_r158);
        goto CPyL146;
    }
    cpy_r_r160 = CPyStr_Size_size_t(cpy_r_r159);
    CPy_DECREF(cpy_r_r159);
    cpy_r_r161 = cpy_r_r160 >= 0;
    if (unlikely(!cpy_r_r161)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 887, CPyStatic_mypy___errors___globals);
        goto CPyL146;
    }
    cpy_r_r162 = cpy_r_r160 << 1;
    cpy_r_column = cpy_r_r162;
    cpy_r_r163 = CPyStr_GetSlice(cpy_r_source_line, 0, cpy_r_end_column);
    CPy_DECREF(cpy_r_source_line);
    CPyTagged_DECREF(cpy_r_end_column);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 888, CPyStatic_mypy___errors___globals);
        goto CPyL148;
    }
    if (likely(PyUnicode_Check(cpy_r_r163)))
        cpy_r_r164 = cpy_r_r163;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 888, CPyStatic_mypy___errors___globals, "str", cpy_r_r163);
        goto CPyL148;
    }
    cpy_r_r165 = CPyStatics[2232]; /* 'expandtabs' */
    PyObject *cpy_r_r166[1] = {cpy_r_r164};
    cpy_r_r167 = (PyObject **)&cpy_r_r166;
    cpy_r_r168 = PyObject_VectorcallMethod(cpy_r_r165, cpy_r_r167, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 888, CPyStatic_mypy___errors___globals);
        goto CPyL149;
    }
    CPy_DECREF(cpy_r_r164);
    if (likely(PyUnicode_Check(cpy_r_r168)))
        cpy_r_r169 = cpy_r_r168;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 888, CPyStatic_mypy___errors___globals, "str", cpy_r_r168);
        goto CPyL148;
    }
    cpy_r_r170 = CPyStr_Size_size_t(cpy_r_r169);
    CPy_DECREF(cpy_r_r169);
    cpy_r_r171 = cpy_r_r170 >= 0;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 888, CPyStatic_mypy___errors___globals);
        goto CPyL148;
    }
    cpy_r_r172 = cpy_r_r170 << 1;
    cpy_r_end_column = cpy_r_r172;
    cpy_r_r173 = CPyStatics[309]; /* '    ' */
    cpy_r_r174 = PyUnicode_Concat(cpy_r_r173, cpy_r_source_line_expanded);
    CPy_DECREF(cpy_r_source_line_expanded);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 892, CPyStatic_mypy___errors___globals);
        goto CPyL142;
    }
    cpy_r_r175 = PyList_Append(cpy_r_a, cpy_r_r174);
    CPy_DECREF(cpy_r_r174);
    cpy_r_r176 = cpy_r_r175 >= 0;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 892, CPyStatic_mypy___errors___globals);
        goto CPyL142;
    }
    cpy_r_r177 = CPyStatics[1597]; /* '^' */
    CPy_INCREF(cpy_r_r177);
    cpy_r_marker = cpy_r_r177;
    cpy_r_r178 = cpy_r_end_line & 1;
    cpy_r_r179 = cpy_r_r178 != 0;
    if (!cpy_r_r179) goto CPyL108;
    cpy_r_r180 = CPyTagged_IsEq_(cpy_r_end_line, cpy_r_line);
    CPyTagged_DECREF(cpy_r_end_line);
    CPyTagged_DECREF(cpy_r_line);
    if (cpy_r_r180) {
        goto CPyL109;
    } else
        goto CPyL150;
CPyL108: ;
    cpy_r_r181 = cpy_r_end_line == cpy_r_line;
    CPyTagged_DECREF(cpy_r_end_line);
    CPyTagged_DECREF(cpy_r_line);
    if (!cpy_r_r181) goto CPyL150;
CPyL109: ;
    cpy_r_r182 = cpy_r_end_column & 1;
    cpy_r_r183 = cpy_r_r182 != 0;
    if (cpy_r_r183) goto CPyL111;
    cpy_r_r184 = cpy_r_column & 1;
    cpy_r_r185 = cpy_r_r184 != 0;
    if (!cpy_r_r185) goto CPyL112;
CPyL111: ;
    cpy_r_r186 = CPyTagged_IsLt_(cpy_r_column, cpy_r_end_column);
    if (cpy_r_r186) {
        goto CPyL151;
    } else
        goto CPyL150;
CPyL112: ;
    cpy_r_r187 = (Py_ssize_t)cpy_r_end_column > (Py_ssize_t)cpy_r_column;
    if (cpy_r_r187) {
        goto CPyL151;
    } else
        goto CPyL150;
CPyL113: ;
    cpy_r_r188 = CPyStatics[1597]; /* '^' */
    cpy_r_r189 = CPyStatics[1602]; /* '~' */
    cpy_r_r190 = CPyTagged_Subtract(cpy_r_end_column, cpy_r_column);
    CPyTagged_DECREF(cpy_r_end_column);
    cpy_r_r191 = CPyTagged_Subtract(cpy_r_r190, 2);
    CPyTagged_DECREF(cpy_r_r190);
    cpy_r_r192 = CPyTagged_StealAsObject(cpy_r_r191);
    cpy_r_r193 = PyNumber_Multiply(cpy_r_r189, cpy_r_r192);
    CPy_DECREF(cpy_r_r192);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 895, CPyStatic_mypy___errors___globals);
        goto CPyL152;
    }
    if (likely(PyUnicode_Check(cpy_r_r193)))
        cpy_r_r194 = cpy_r_r193;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 895, CPyStatic_mypy___errors___globals, "str", cpy_r_r193);
        goto CPyL152;
    }
    cpy_r_r195 = CPyStr_Build(2, cpy_r_r188, cpy_r_r194);
    CPy_DECREF(cpy_r_r194);
    if (unlikely(cpy_r_r195 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 895, CPyStatic_mypy___errors___globals);
        goto CPyL152;
    }
    cpy_r_marker = cpy_r_r195;
CPyL117: ;
    cpy_r_r196 = CPyStatics[295]; /* ' ' */
    cpy_r_r197 = CPyTagged_Add(8, cpy_r_column);
    CPyTagged_DECREF(cpy_r_column);
    cpy_r_r198 = CPyTagged_StealAsObject(cpy_r_r197);
    cpy_r_r199 = PyNumber_Multiply(cpy_r_r196, cpy_r_r198);
    CPy_DECREF(cpy_r_r198);
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 896, CPyStatic_mypy___errors___globals);
        goto CPyL153;
    }
    if (likely(PyUnicode_Check(cpy_r_r199)))
        cpy_r_r200 = cpy_r_r199;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "format_messages", 896, CPyStatic_mypy___errors___globals, "str", cpy_r_r199);
        goto CPyL153;
    }
    cpy_r_r201 = PyUnicode_Concat(cpy_r_r200, cpy_r_marker);
    CPy_DECREF(cpy_r_r200);
    CPy_DECREF(cpy_r_marker);
    if (unlikely(cpy_r_r201 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 896, CPyStatic_mypy___errors___globals);
        goto CPyL128;
    }
    cpy_r_r202 = PyList_Append(cpy_r_a, cpy_r_r201);
    CPy_DECREF(cpy_r_r201);
    cpy_r_r203 = cpy_r_r202 >= 0;
    if (unlikely(!cpy_r_r203)) {
        CPy_AddTraceback("mypy/errors.py", "format_messages", 896, CPyStatic_mypy___errors___globals);
        goto CPyL128;
    }
CPyL121: ;
    cpy_r_r204 = cpy_r_r17 + 2;
    cpy_r_r17 = cpy_r_r204;
    goto CPyL12;
CPyL122: ;
    return cpy_r_a;
CPyL123: ;
    cpy_r_r205 = NULL;
    return cpy_r_r205;
CPyL124: ;
    CPy_DecRef(cpy_r_a);
    goto CPyL123;
CPyL125: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_r1);
    goto CPyL123;
CPyL126: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL7;
CPyL127: ;
    CPy_DECREF(cpy_r_errors);
    goto CPyL122;
CPyL128: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    goto CPyL123;
CPyL129: ;
    CPy_DECREF(cpy_r_file);
    goto CPyL49;
CPyL130: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPyTagged_DecRef(cpy_r_end_line);
    CPyTagged_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_code);
    goto CPyL123;
CPyL131: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPyTagged_DecRef(cpy_r_end_line);
    CPyTagged_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_r46);
    goto CPyL123;
CPyL132: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPyTagged_DecRef(cpy_r_end_line);
    CPyTagged_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r48);
    goto CPyL123;
CPyL133: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPyTagged_DecRef(cpy_r_end_line);
    CPyTagged_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_srcloc);
    goto CPyL123;
CPyL134: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPyTagged_DecRef(cpy_r_end_line);
    CPyTagged_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_srcloc);
    CPy_DecRef(cpy_r_r64);
    goto CPyL123;
CPyL135: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPyTagged_DecRef(cpy_r_end_line);
    CPyTagged_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_message);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_r73);
    goto CPyL123;
CPyL136: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPyTagged_DecRef(cpy_r_end_line);
    CPyTagged_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_code);
    goto CPyL123;
CPyL137: ;
    CPy_DECREF(cpy_r_code);
    goto CPyL69;
CPyL138: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPyTagged_DecRef(cpy_r_end_line);
    CPyTagged_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_s);
    goto CPyL123;
CPyL139: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPyTagged_DecRef(cpy_r_end_line);
    CPyTagged_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_severity);
    CPy_DecRef(cpy_r_code);
    CPy_DecRef(cpy_r_s);
    CPy_DecRef(cpy_r_r95);
    goto CPyL61;
CPyL140: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPyTagged_DecRef(cpy_r_end_line);
    CPyTagged_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_severity);
    goto CPyL123;
CPyL141: ;
    CPyTagged_DECREF(cpy_r_line);
    CPyTagged_DECREF(cpy_r_column);
    CPyTagged_DECREF(cpy_r_end_line);
    CPyTagged_DECREF(cpy_r_end_column);
    CPy_DECREF(cpy_r_severity);
    goto CPyL121;
CPyL142: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPyTagged_DecRef(cpy_r_end_line);
    CPyTagged_DecRef(cpy_r_end_column);
    goto CPyL123;
CPyL143: ;
    CPyTagged_DECREF(cpy_r_line);
    CPyTagged_DECREF(cpy_r_column);
    CPyTagged_DECREF(cpy_r_end_line);
    CPyTagged_DECREF(cpy_r_end_column);
    goto CPyL121;
CPyL144: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPyTagged_DecRef(cpy_r_end_line);
    CPyTagged_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_source_line);
    goto CPyL123;
CPyL145: ;
    CPyTagged_DECREF(cpy_r_column);
    goto CPyL89;
CPyL146: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_end_line);
    CPyTagged_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_source_line);
    CPy_DecRef(cpy_r_source_line_expanded);
    goto CPyL123;
CPyL147: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_end_line);
    CPyTagged_DecRef(cpy_r_end_column);
    CPy_DecRef(cpy_r_source_line);
    CPy_DecRef(cpy_r_source_line_expanded);
    CPy_DecRef(cpy_r_r154);
    goto CPyL123;
CPyL148: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPyTagged_DecRef(cpy_r_end_line);
    CPy_DecRef(cpy_r_source_line_expanded);
    goto CPyL123;
CPyL149: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_line);
    CPyTagged_DecRef(cpy_r_column);
    CPyTagged_DecRef(cpy_r_end_line);
    CPy_DecRef(cpy_r_source_line_expanded);
    CPy_DecRef(cpy_r_r164);
    goto CPyL123;
CPyL150: ;
    CPyTagged_DECREF(cpy_r_end_column);
    goto CPyL117;
CPyL151: ;
    CPy_DECREF(cpy_r_marker);
    goto CPyL113;
CPyL152: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPyTagged_DecRef(cpy_r_column);
    goto CPyL123;
CPyL153: ;
    CPy_DecRef(cpy_r_a);
    CPy_DecRef(cpy_r_errors);
    CPy_DecRef(cpy_r_marker);
    goto CPyL123;
}

PyObject *CPyPy_mypy___errors___Errors___format_messages(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"error_info", "source_lines", 0};
    static CPyArg_Parser parser = {"OO:format_messages", kwlist, 0};
    PyObject *obj_error_info;
    PyObject *obj_source_lines;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_error_info, &obj_source_lines)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_error_info;
    if (likely(PyList_Check(obj_error_info)))
        arg_error_info = obj_error_info;
    else {
        CPy_TypeError("list", obj_error_info); 
        goto fail;
    }
    PyObject *arg_source_lines;
    if (PyList_Check(obj_source_lines))
        arg_source_lines = obj_source_lines;
    else {
        arg_source_lines = NULL;
    }
    if (arg_source_lines != NULL) goto __LL2118;
    if (obj_source_lines == Py_None)
        arg_source_lines = obj_source_lines;
    else {
        arg_source_lines = NULL;
    }
    if (arg_source_lines != NULL) goto __LL2118;
    CPy_TypeError("list or None", obj_source_lines); 
    goto fail;
__LL2118: ;
    PyObject *retval = CPyDef_mypy___errors___Errors___format_messages(arg_self, arg_error_info, arg_source_lines);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "format_messages", 831, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___Errors___file_messages(PyObject *cpy_r_self, PyObject *cpy_r_path) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_source_lines;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    cpy_r_r0 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "file_messages", "Errors", "error_info_map", 904, CPyStatic_mypy___errors___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_path);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/errors.py", "file_messages", 904, CPyStatic_mypy___errors___globals);
        goto CPyL22;
    }
    cpy_r_r3 = cpy_r_r1;
    cpy_r_r4 = cpy_r_r3 ^ 1;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "file_messages", 905, CPyStatic_mypy___errors___globals);
        goto CPyL22;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_flushed_files;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "file_messages", "Errors", "flushed_files", 906, CPyStatic_mypy___errors___globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r6);
CPyL6: ;
    cpy_r_r7 = PySet_Add(cpy_r_r6, cpy_r_path);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/errors.py", "file_messages", 906, CPyStatic_mypy___errors___globals);
        goto CPyL22;
    }
    cpy_r_r9 = Py_None;
    CPy_INCREF(cpy_r_r9);
    cpy_r_source_lines = cpy_r_r9;
    cpy_r_r10 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    cpy_r_r11 = ((mypy___options___OptionsObject *)cpy_r_r10)->_pretty;
    if (cpy_r_r11) {
        goto CPyL23;
    } else
        goto CPyL17;
CPyL8: ;
    cpy_r_r12 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_read_source;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = cpy_r_r12 != cpy_r_r13;
    if (!cpy_r_r14) goto CPyL24;
    cpy_r_r15 = cpy_r_r12;
    cpy_r_r16 = PyObject_IsTrue(cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/errors.py", "file_messages", 909, CPyStatic_mypy___errors___globals);
        goto CPyL22;
    }
    cpy_r_r18 = cpy_r_r16;
    if (cpy_r_r18) goto CPyL14;
CPyL12: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r19 = 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/errors.py", "file_messages", 909, CPyStatic_mypy___errors___globals);
        goto CPyL22;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r20 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_read_source;
    CPy_INCREF(cpy_r_r20);
    PyObject *cpy_r_r21[1] = {cpy_r_path};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = _PyObject_Vectorcall(cpy_r_r20, cpy_r_r22, 1, 0);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "file_messages", 910, CPyStatic_mypy___errors___globals);
        goto CPyL22;
    }
    if (PyList_Check(cpy_r_r23))
        cpy_r_r24 = cpy_r_r23;
    else {
        cpy_r_r24 = NULL;
    }
    if (cpy_r_r24 != NULL) goto __LL2119;
    if (cpy_r_r23 == Py_None)
        cpy_r_r24 = cpy_r_r23;
    else {
        cpy_r_r24 = NULL;
    }
    if (cpy_r_r24 != NULL) goto __LL2119;
    CPy_TypeErrorTraceback("mypy/errors.py", "file_messages", 910, CPyStatic_mypy___errors___globals, "list or None", cpy_r_r23);
    goto CPyL22;
__LL2119: ;
    cpy_r_source_lines = cpy_r_r24;
CPyL17: ;
    cpy_r_r25 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "file_messages", "Errors", "error_info_map", 911, CPyStatic_mypy___errors___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r25);
CPyL18: ;
    cpy_r_r26 = CPyDict_GetItem(cpy_r_r25, cpy_r_path);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "file_messages", 911, CPyStatic_mypy___errors___globals);
        goto CPyL25;
    }
    if (likely(PyList_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "file_messages", 911, CPyStatic_mypy___errors___globals, "list", cpy_r_r26);
        goto CPyL25;
    }
    cpy_r_r28 = CPyDef_mypy___errors___Errors___format_messages(cpy_r_self, cpy_r_r27, cpy_r_source_lines);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_source_lines);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "file_messages", 911, CPyStatic_mypy___errors___globals);
        goto CPyL22;
    }
    return cpy_r_r28;
CPyL22: ;
    cpy_r_r29 = NULL;
    return cpy_r_r29;
CPyL23: ;
    CPy_DECREF(cpy_r_source_lines);
    goto CPyL8;
CPyL24: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL12;
CPyL25: ;
    CPy_DecRef(cpy_r_source_lines);
    goto CPyL22;
}

PyObject *CPyPy_mypy___errors___Errors___file_messages(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"path", 0};
    static CPyArg_Parser parser = {"O:file_messages", kwlist, 0};
    PyObject *obj_path;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_path)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___errors___Errors___file_messages(arg_self, arg_path);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "file_messages", 899, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___Errors___new_messages(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_msgs;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3CIO cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_path;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "new_messages", 920, CPyStatic_mypy___errors___globals);
        goto CPyL13;
    }
    cpy_r_msgs = cpy_r_r0;
    cpy_r_r1 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "new_messages", "Errors", "error_info_map", 921, CPyStatic_mypy___errors___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = 0;
    cpy_r_r3 = PyDict_Size(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = CPyDict_GetKeysIter(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "new_messages", 921, CPyStatic_mypy___errors___globals);
        goto CPyL15;
    }
CPyL3: ;
    cpy_r_r6 = CPyDict_NextKey(cpy_r_r5, cpy_r_r2);
    cpy_r_r7 = cpy_r_r6.f1;
    cpy_r_r2 = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f0;
    if (!cpy_r_r8) goto CPyL16;
    cpy_r_r9 = cpy_r_r6.f2;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r6.f2);
    if (likely(PyUnicode_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "new_messages", 921, CPyStatic_mypy___errors___globals, "str", cpy_r_r9);
        goto CPyL17;
    }
    cpy_r_path = cpy_r_r10;
    cpy_r_r11 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_flushed_files;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "new_messages", "Errors", "flushed_files", 922, CPyStatic_mypy___errors___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r11);
CPyL6: ;
    cpy_r_r12 = PySet_Contains(cpy_r_r11, cpy_r_path);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypy/errors.py", "new_messages", 922, CPyStatic_mypy___errors___globals);
        goto CPyL18;
    }
    cpy_r_r14 = cpy_r_r12;
    cpy_r_r15 = cpy_r_r14 ^ 1;
    if (!cpy_r_r15) goto CPyL19;
    cpy_r_r16 = CPyDef_mypy___errors___Errors___file_messages(cpy_r_self, cpy_r_path);
    CPy_DECREF(cpy_r_path);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "new_messages", 923, CPyStatic_mypy___errors___globals);
        goto CPyL17;
    }
    cpy_r_r17 = CPyList_Extend(cpy_r_msgs, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "new_messages", 923, CPyStatic_mypy___errors___globals);
        goto CPyL17;
    } else
        goto CPyL20;
CPyL10: ;
    cpy_r_r18 = CPyDict_CheckSize(cpy_r_r1, cpy_r_r4);
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/errors.py", "new_messages", 921, CPyStatic_mypy___errors___globals);
        goto CPyL17;
    } else
        goto CPyL3;
CPyL11: ;
    cpy_r_r19 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypy/errors.py", "new_messages", 921, CPyStatic_mypy___errors___globals);
        goto CPyL14;
    }
    return cpy_r_msgs;
CPyL13: ;
    cpy_r_r20 = NULL;
    return cpy_r_r20;
CPyL14: ;
    CPy_DecRef(cpy_r_msgs);
    goto CPyL13;
CPyL15: ;
    CPy_DecRef(cpy_r_msgs);
    CPy_DecRef(cpy_r_r1);
    goto CPyL13;
CPyL16: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL11;
CPyL17: ;
    CPy_DecRef(cpy_r_msgs);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_msgs);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_path);
    goto CPyL13;
CPyL19: ;
    CPy_DECREF(cpy_r_path);
    goto CPyL10;
CPyL20: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL10;
}

PyObject *CPyPy_mypy___errors___Errors___new_messages(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":new_messages", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___errors___Errors___new_messages(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "new_messages", 913, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___Errors___targets(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3CIO cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_errs;
    CPyTagged cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = PySet_New(NULL);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "targets", 930, CPyStatic_mypy___errors___globals);
        goto CPyL17;
    }
    cpy_r_r1 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_error_info_map;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "targets", "Errors", "error_info_map", 931, CPyStatic_mypy___errors___globals);
        goto CPyL18;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = 0;
    cpy_r_r3 = PyDict_Size(cpy_r_r1);
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = CPyDict_GetValuesIter(cpy_r_r1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "targets", 930, CPyStatic_mypy___errors___globals);
        goto CPyL19;
    }
CPyL3: ;
    cpy_r_r6 = CPyDict_NextValue(cpy_r_r5, cpy_r_r2);
    cpy_r_r7 = cpy_r_r6.f1;
    cpy_r_r2 = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f0;
    if (!cpy_r_r8) goto CPyL20;
    cpy_r_r9 = cpy_r_r6.f2;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r6.f2);
    if (likely(PyList_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "targets", 930, CPyStatic_mypy___errors___globals, "list", cpy_r_r9);
        goto CPyL21;
    }
    cpy_r_errs = cpy_r_r10;
    cpy_r_r11 = 0;
CPyL6: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_errs)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = (Py_ssize_t)cpy_r_r11 < (Py_ssize_t)cpy_r_r14;
    if (!cpy_r_r15) goto CPyL22;
    cpy_r_r16 = CPyList_GetItemUnsafe(cpy_r_errs, cpy_r_r11);
    if (likely(Py_TYPE(cpy_r_r16) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "targets", 930, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r16);
        goto CPyL23;
    }
    cpy_r_info = cpy_r_r17;
    cpy_r_r18 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_target;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_r18 != cpy_r_r19;
    if (!cpy_r_r20) goto CPyL24;
    if (likely(cpy_r_r18 != Py_None))
        cpy_r_r21 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "targets", 931, CPyStatic_mypy___errors___globals, "str", cpy_r_r18);
        goto CPyL25;
    }
    cpy_r_r22 = CPyStr_IsTrue(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (!cpy_r_r22) goto CPyL26;
    cpy_r_r23 = ((mypy___errors___ErrorInfoObject *)cpy_r_info)->_target;
    CPy_INCREF(cpy_r_r23);
    CPy_DECREF(cpy_r_info);
    if (likely(cpy_r_r23 != Py_None))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "targets", 931, CPyStatic_mypy___errors___globals, "str", cpy_r_r23);
        goto CPyL23;
    }
    cpy_r_r25 = PySet_Add(cpy_r_r0, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/errors.py", "targets", 930, CPyStatic_mypy___errors___globals);
        goto CPyL23;
    }
CPyL13: ;
    cpy_r_r27 = cpy_r_r11 + 2;
    cpy_r_r11 = cpy_r_r27;
    goto CPyL6;
CPyL14: ;
    cpy_r_r28 = CPyDict_CheckSize(cpy_r_r1, cpy_r_r4);
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/errors.py", "targets", 930, CPyStatic_mypy___errors___globals);
        goto CPyL21;
    } else
        goto CPyL3;
CPyL15: ;
    cpy_r_r29 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypy/errors.py", "targets", 930, CPyStatic_mypy___errors___globals);
        goto CPyL18;
    }
    return cpy_r_r0;
CPyL17: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL17;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL17;
CPyL20: ;
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL15;
CPyL21: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    goto CPyL17;
CPyL22: ;
    CPy_DECREF(cpy_r_errs);
    goto CPyL14;
CPyL23: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_errs);
    goto CPyL17;
CPyL24: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_r18);
    goto CPyL13;
CPyL25: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_errs);
    CPy_DecRef(cpy_r_info);
    goto CPyL17;
CPyL26: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL13;
}

PyObject *CPyPy_mypy___errors___Errors___targets(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":targets", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___errors___Errors___targets(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "targets", 926, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___Errors___render_messages(PyObject *cpy_r_self, PyObject *cpy_r_errors) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_result;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_prev_import_context;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_prev_function_or_member;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_prev_type;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    CPyTagged cpy_r_last;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    tuple_T2OI cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_path;
    CPyTagged cpy_r_r29;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_fmt;
    int64_t cpy_r_r31;
    char cpy_r_r32;
    int64_t cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    int64_t cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    tuple_T9CIIIIOOCC cpy_r_r56;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    CPyTagged cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_file;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    tuple_T9OIIIIOOCC cpy_r_r80;
    PyObject *cpy_r_r81;
    int32_t cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    tuple_T9OIIIIOOCC cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    char cpy_r_r104;
    tuple_T9OIIIIOOCC cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    tuple_T9OIIIIOOCC cpy_r_r119;
    PyObject *cpy_r_r120;
    int32_t cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    char cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    char cpy_r_r131;
    tuple_T9OIIIIOOCC cpy_r_r132;
    PyObject *cpy_r_r133;
    int32_t cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    tuple_T9OIIIIOOCC cpy_r_r143;
    PyObject *cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    CPyPtr cpy_r_r149;
    PyObject *cpy_r_r150;
    char cpy_r_r151;
    CPyTagged cpy_r_r152;
    PyObject *cpy_r_r153;
    CPyTagged cpy_r_r154;
    PyObject *cpy_r_r155;
    CPyTagged cpy_r_r156;
    PyObject *cpy_r_r157;
    CPyTagged cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    tuple_T9OOOOOOOOO cpy_r_r167;
    PyObject *cpy_r_r168;
    int32_t cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    CPyTagged cpy_r_r172;
    CPyTagged cpy_r_r173;
    CPyTagged cpy_r_r174;
    CPyTagged cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    char cpy_r_r178;
    PyObject *cpy_r_r179;
    tuple_T9OIIIIOOCO cpy_r_r180;
    PyObject *cpy_r_r181;
    int32_t cpy_r_r182;
    char cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    CPyTagged cpy_r_r187;
    PyObject *cpy_r_r188;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 942, CPyStatic_mypy___errors___globals);
        goto CPyL70;
    }
    cpy_r_result = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 943, CPyStatic_mypy___errors___globals);
        goto CPyL71;
    }
    cpy_r_prev_import_context = cpy_r_r1;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_prev_function_or_member = cpy_r_r2;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    cpy_r_prev_type = cpy_r_r3;
    cpy_r_r4 = 0;
CPyL3: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_errors)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL72;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_errors, cpy_r_r4);
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "render_messages", 947, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r9);
        goto CPyL73;
    }
    cpy_r_e = cpy_r_r10;
    cpy_r_r11 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    cpy_r_r12 = ((mypy___options___OptionsObject *)cpy_r_r11)->_show_error_context;
    if (!cpy_r_r12) goto CPyL74;
CPyL6: ;
    cpy_r_r13 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_import_ctx;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = PyObject_RichCompare(cpy_r_r13, cpy_r_prev_import_context, 3);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_prev_import_context);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 951, CPyStatic_mypy___errors___globals);
        goto CPyL75;
    }
    if (unlikely(!PyBool_Check(cpy_r_r14))) {
        CPy_TypeError("bool", cpy_r_r14); cpy_r_r15 = 2;
    } else
        cpy_r_r15 = cpy_r_r14 == Py_True;
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 951, CPyStatic_mypy___errors___globals);
        goto CPyL75;
    }
    if (!cpy_r_r15) goto CPyL32;
    cpy_r_r16 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_import_ctx;
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_r16)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = CPyTagged_Subtract(cpy_r_r19, 2);
    cpy_r_last = cpy_r_r20;
    CPyTagged_INCREF(cpy_r_last);
    cpy_r_i = cpy_r_last;
CPyL10: ;
    cpy_r_r21 = cpy_r_i & 1;
    cpy_r_r22 = cpy_r_r21 != 0;
    if (!cpy_r_r22) goto CPyL12;
    cpy_r_r23 = CPyTagged_IsLt_(cpy_r_i, 0);
    if (cpy_r_r23) {
        goto CPyL76;
    } else
        goto CPyL13;
CPyL12: ;
    cpy_r_r24 = (Py_ssize_t)cpy_r_i >= (Py_ssize_t)0;
    if (!cpy_r_r24) goto CPyL76;
CPyL13: ;
    cpy_r_r25 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_import_ctx;
    cpy_r_r26 = CPyList_GetItem(cpy_r_r25, cpy_r_i);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 955, CPyStatic_mypy___errors___globals);
        goto CPyL77;
    }
    PyObject *__tmp2120;
    if (unlikely(!(PyTuple_Check(cpy_r_r26) && PyTuple_GET_SIZE(cpy_r_r26) == 2))) {
        __tmp2120 = NULL;
        goto __LL2121;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r26, 0))))
        __tmp2120 = PyTuple_GET_ITEM(cpy_r_r26, 0);
    else {
        __tmp2120 = NULL;
    }
    if (__tmp2120 == NULL) goto __LL2121;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r26, 1))))
        __tmp2120 = PyTuple_GET_ITEM(cpy_r_r26, 1);
    else {
        __tmp2120 = NULL;
    }
    if (__tmp2120 == NULL) goto __LL2121;
    __tmp2120 = cpy_r_r26;
__LL2121: ;
    if (unlikely(__tmp2120 == NULL)) {
        CPy_TypeError("tuple[str, int]", cpy_r_r26); cpy_r_r27 = (tuple_T2OI) { NULL, CPY_INT_TAG };
    } else {
        PyObject *__tmp2122 = PyTuple_GET_ITEM(cpy_r_r26, 0);
        CPy_INCREF(__tmp2122);
        PyObject *__tmp2123;
        if (likely(PyUnicode_Check(__tmp2122)))
            __tmp2123 = __tmp2122;
        else {
            CPy_TypeError("str", __tmp2122); 
            __tmp2123 = NULL;
        }
        cpy_r_r27.f0 = __tmp2123;
        PyObject *__tmp2124 = PyTuple_GET_ITEM(cpy_r_r26, 1);
        CPyTagged __tmp2125;
        if (likely(PyLong_Check(__tmp2124)))
            __tmp2125 = CPyTagged_FromObject(__tmp2124);
        else {
            CPy_TypeError("int", __tmp2124); __tmp2125 = CPY_INT_TAG;
        }
        cpy_r_r27.f1 = __tmp2125;
    }
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 955, CPyStatic_mypy___errors___globals);
        goto CPyL77;
    }
    cpy_r_r28 = cpy_r_r27.f0;
    CPy_INCREF(cpy_r_r28);
    cpy_r_path = cpy_r_r28;
    cpy_r_r29 = cpy_r_r27.f1;
    CPyTagged_INCREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r27.f0);
    CPyTagged_DECREF(cpy_r_r27.f1);
    cpy_r_line = cpy_r_r29;
    cpy_r_r30 = CPyStatics[2234]; /* '{}:{}: note: In module imported here' */
    CPy_INCREF(cpy_r_r30);
    cpy_r_fmt = cpy_r_r30;
    cpy_r_r31 = cpy_r_i & 1;
    cpy_r_r32 = cpy_r_r31 != 0;
    if (cpy_r_r32) goto CPyL17;
    cpy_r_r33 = cpy_r_last & 1;
    cpy_r_r34 = cpy_r_r33 != 0;
    if (!cpy_r_r34) goto CPyL18;
CPyL17: ;
    cpy_r_r35 = CPyTagged_IsLt_(cpy_r_i, cpy_r_last);
    if (cpy_r_r35) {
        goto CPyL78;
    } else
        goto CPyL20;
CPyL18: ;
    cpy_r_r36 = (Py_ssize_t)cpy_r_i < (Py_ssize_t)cpy_r_last;
    if (cpy_r_r36) {
        goto CPyL78;
    } else
        goto CPyL20;
CPyL19: ;
    cpy_r_r37 = CPyStatics[2235]; /* '{}:{}: note: ... from here' */
    CPy_INCREF(cpy_r_r37);
    cpy_r_fmt = cpy_r_r37;
CPyL20: ;
    cpy_r_r38 = cpy_r_i & 1;
    cpy_r_r39 = cpy_r_r38 != 0;
    if (!cpy_r_r39) goto CPyL22;
    cpy_r_r40 = CPyTagged_IsLt_(0, cpy_r_i);
    if (cpy_r_r40) {
        goto CPyL23;
    } else
        goto CPyL25;
CPyL22: ;
    cpy_r_r41 = (Py_ssize_t)cpy_r_i > (Py_ssize_t)0;
    if (!cpy_r_r41) goto CPyL25;
CPyL23: ;
    cpy_r_r42 = CPyStatics[242]; /* ',' */
    cpy_r_r43 = CPyStr_Append(cpy_r_fmt, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 960, CPyStatic_mypy___errors___globals);
        goto CPyL79;
    }
    cpy_r_fmt = cpy_r_r43;
    goto CPyL27;
CPyL25: ;
    cpy_r_r44 = CPyStatics[171]; /* ':' */
    cpy_r_r45 = CPyStr_Append(cpy_r_fmt, cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 962, CPyStatic_mypy___errors___globals);
        goto CPyL79;
    }
    cpy_r_fmt = cpy_r_r45;
CPyL27: ;
    cpy_r_r46 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_ignore_prefix;
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = CPyDef_mypy___errors___remove_path_prefix(cpy_r_path, cpy_r_r46);
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 965, CPyStatic_mypy___errors___globals);
        goto CPyL80;
    }
    cpy_r_path = cpy_r_r47;
    cpy_r_r48 = CPyStatics[413]; /* 'note' */
    cpy_r_r49 = CPyStatics[193]; /* 'format' */
    cpy_r_r50 = CPyTagged_StealAsObject(cpy_r_line);
    PyObject *cpy_r_r51[3] = {cpy_r_fmt, cpy_r_path, cpy_r_r50};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = PyObject_VectorcallMethod(cpy_r_r49, cpy_r_r52, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 967, CPyStatic_mypy___errors___globals);
        goto CPyL81;
    }
    CPy_DECREF(cpy_r_fmt);
    CPy_DECREF(cpy_r_path);
    CPy_DECREF(cpy_r_r50);
    if (likely(PyUnicode_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "render_messages", 967, CPyStatic_mypy___errors___globals, "str", cpy_r_r53);
        goto CPyL77;
    }
    cpy_r_r55 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_allow_dups;
    cpy_r_r56.f0 = 1;
    cpy_r_r56.f1 = -2;
    cpy_r_r56.f2 = -2;
    cpy_r_r56.f3 = -2;
    cpy_r_r56.f4 = -2;
    cpy_r_r56.f5 = cpy_r_r48;
    cpy_r_r56.f6 = cpy_r_r54;
    cpy_r_r56.f7 = cpy_r_r55;
    cpy_r_r56.f8 = 1;
    CPyTagged_INCREF(cpy_r_r56.f1);
    CPyTagged_INCREF(cpy_r_r56.f2);
    CPyTagged_INCREF(cpy_r_r56.f3);
    CPyTagged_INCREF(cpy_r_r56.f4);
    CPy_INCREF(cpy_r_r56.f5);
    CPy_INCREF(cpy_r_r56.f6);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r57 = PyTuple_New(9);
    if (unlikely(cpy_r_r57 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2126 = Py_None;
    CPy_INCREF(__tmp2126);
    PyTuple_SET_ITEM(cpy_r_r57, 0, __tmp2126);
    PyObject *__tmp2127 = CPyTagged_StealAsObject(cpy_r_r56.f1);
    PyTuple_SET_ITEM(cpy_r_r57, 1, __tmp2127);
    PyObject *__tmp2128 = CPyTagged_StealAsObject(cpy_r_r56.f2);
    PyTuple_SET_ITEM(cpy_r_r57, 2, __tmp2128);
    PyObject *__tmp2129 = CPyTagged_StealAsObject(cpy_r_r56.f3);
    PyTuple_SET_ITEM(cpy_r_r57, 3, __tmp2129);
    PyObject *__tmp2130 = CPyTagged_StealAsObject(cpy_r_r56.f4);
    PyTuple_SET_ITEM(cpy_r_r57, 4, __tmp2130);
    PyObject *__tmp2131 = cpy_r_r56.f5;
    PyTuple_SET_ITEM(cpy_r_r57, 5, __tmp2131);
    PyObject *__tmp2132 = cpy_r_r56.f6;
    PyTuple_SET_ITEM(cpy_r_r57, 6, __tmp2132);
    PyObject *__tmp2133 = cpy_r_r56.f7 ? Py_True : Py_False;
    CPy_INCREF(__tmp2133);
    PyTuple_SET_ITEM(cpy_r_r57, 7, __tmp2133);
    PyObject *__tmp2134 = Py_None;
    CPy_INCREF(__tmp2134);
    PyTuple_SET_ITEM(cpy_r_r57, 8, __tmp2134);
    cpy_r_r58 = PyList_Append(cpy_r_result, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 966, CPyStatic_mypy___errors___globals);
        goto CPyL77;
    }
    cpy_r_r60 = CPyTagged_Subtract(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r60;
    goto CPyL10;
CPyL32: ;
    cpy_r_r61 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_file;
    CPy_INCREF(cpy_r_r61);
    cpy_r_r62 = CPyDef_mypy___errors___Errors___simplify_path(cpy_r_self, cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 971, CPyStatic_mypy___errors___globals);
        goto CPyL75;
    }
    cpy_r_file = cpy_r_r62;
    cpy_r_r63 = ((mypy___errors___ErrorsObject *)cpy_r_self)->_options;
    cpy_r_r64 = ((mypy___options___OptionsObject *)cpy_r_r63)->_show_error_context;
    if (!cpy_r_r64) goto CPyL82;
CPyL34: ;
    cpy_r_r65 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_function_or_member;
    CPy_INCREF(cpy_r_r65);
    cpy_r_r66 = PyObject_RichCompare(cpy_r_r65, cpy_r_prev_function_or_member, 3);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_prev_function_or_member);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 976, CPyStatic_mypy___errors___globals);
        goto CPyL83;
    }
    if (unlikely(!PyBool_Check(cpy_r_r66))) {
        CPy_TypeError("bool", cpy_r_r66); cpy_r_r67 = 2;
    } else
        cpy_r_r67 = cpy_r_r66 == Py_True;
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 976, CPyStatic_mypy___errors___globals);
        goto CPyL83;
    }
    if (cpy_r_r67) goto CPyL84;
    cpy_r_r68 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_type;
    CPy_INCREF(cpy_r_r68);
    cpy_r_r69 = PyObject_RichCompare(cpy_r_r68, cpy_r_prev_type, 3);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 976, CPyStatic_mypy___errors___globals);
        goto CPyL83;
    }
    if (unlikely(!PyBool_Check(cpy_r_r69))) {
        CPy_TypeError("bool", cpy_r_r69); cpy_r_r70 = 2;
    } else
        cpy_r_r70 = cpy_r_r69 == Py_True;
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 976, CPyStatic_mypy___errors___globals);
        goto CPyL83;
    }
    if (cpy_r_r70) {
        goto CPyL84;
    } else
        goto CPyL54;
CPyL40: ;
    cpy_r_r71 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_function_or_member;
    cpy_r_r72 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r73 = cpy_r_r71 == cpy_r_r72;
    if (!cpy_r_r73) goto CPyL46;
    cpy_r_r74 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_type;
    cpy_r_r75 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r76 = cpy_r_r74 == cpy_r_r75;
    if (!cpy_r_r76) goto CPyL43;
    cpy_r_r77 = CPyStatics[413]; /* 'note' */
    cpy_r_r78 = CPyStatics[2236]; /* 'At top level:' */
    cpy_r_r79 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_allow_dups;
    cpy_r_r80.f0 = cpy_r_file;
    cpy_r_r80.f1 = -2;
    cpy_r_r80.f2 = -2;
    cpy_r_r80.f3 = -2;
    cpy_r_r80.f4 = -2;
    cpy_r_r80.f5 = cpy_r_r77;
    cpy_r_r80.f6 = cpy_r_r78;
    cpy_r_r80.f7 = cpy_r_r79;
    cpy_r_r80.f8 = 1;
    CPy_INCREF(cpy_r_r80.f0);
    CPyTagged_INCREF(cpy_r_r80.f1);
    CPyTagged_INCREF(cpy_r_r80.f2);
    CPyTagged_INCREF(cpy_r_r80.f3);
    CPyTagged_INCREF(cpy_r_r80.f4);
    CPy_INCREF(cpy_r_r80.f5);
    CPy_INCREF(cpy_r_r80.f6);
    cpy_r_r81 = PyTuple_New(9);
    if (unlikely(cpy_r_r81 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2135 = cpy_r_r80.f0;
    PyTuple_SET_ITEM(cpy_r_r81, 0, __tmp2135);
    PyObject *__tmp2136 = CPyTagged_StealAsObject(cpy_r_r80.f1);
    PyTuple_SET_ITEM(cpy_r_r81, 1, __tmp2136);
    PyObject *__tmp2137 = CPyTagged_StealAsObject(cpy_r_r80.f2);
    PyTuple_SET_ITEM(cpy_r_r81, 2, __tmp2137);
    PyObject *__tmp2138 = CPyTagged_StealAsObject(cpy_r_r80.f3);
    PyTuple_SET_ITEM(cpy_r_r81, 3, __tmp2138);
    PyObject *__tmp2139 = CPyTagged_StealAsObject(cpy_r_r80.f4);
    PyTuple_SET_ITEM(cpy_r_r81, 4, __tmp2139);
    PyObject *__tmp2140 = cpy_r_r80.f5;
    PyTuple_SET_ITEM(cpy_r_r81, 5, __tmp2140);
    PyObject *__tmp2141 = cpy_r_r80.f6;
    PyTuple_SET_ITEM(cpy_r_r81, 6, __tmp2141);
    PyObject *__tmp2142 = cpy_r_r80.f7 ? Py_True : Py_False;
    CPy_INCREF(__tmp2142);
    PyTuple_SET_ITEM(cpy_r_r81, 7, __tmp2142);
    PyObject *__tmp2143 = Py_None;
    CPy_INCREF(__tmp2143);
    PyTuple_SET_ITEM(cpy_r_r81, 8, __tmp2143);
    cpy_r_r82 = PyList_Append(cpy_r_result, cpy_r_r81);
    CPy_DECREF(cpy_r_r81);
    cpy_r_r83 = cpy_r_r82 >= 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 979, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    } else
        goto CPyL62;
CPyL43: ;
    cpy_r_r84 = CPyStatics[413]; /* 'note' */
    cpy_r_r85 = CPyStatics[2237]; /* 'In class "' */
    cpy_r_r86 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_type;
    CPy_INCREF(cpy_r_r86);
    if (likely(cpy_r_r86 != Py_None))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "render_messages", 991, CPyStatic_mypy___errors___globals, "str", cpy_r_r86);
        goto CPyL85;
    }
    cpy_r_r88 = CPyStatics[2238]; /* '":' */
    cpy_r_r89 = CPyStr_Build(3, cpy_r_r85, cpy_r_r87, cpy_r_r88);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 991, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    }
    cpy_r_r90 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_allow_dups;
    cpy_r_r91.f0 = cpy_r_file;
    cpy_r_r91.f1 = -2;
    cpy_r_r91.f2 = -2;
    cpy_r_r91.f3 = -2;
    cpy_r_r91.f4 = -2;
    cpy_r_r91.f5 = cpy_r_r84;
    cpy_r_r91.f6 = cpy_r_r89;
    cpy_r_r91.f7 = cpy_r_r90;
    cpy_r_r91.f8 = 1;
    CPy_INCREF(cpy_r_r91.f0);
    CPyTagged_INCREF(cpy_r_r91.f1);
    CPyTagged_INCREF(cpy_r_r91.f2);
    CPyTagged_INCREF(cpy_r_r91.f3);
    CPyTagged_INCREF(cpy_r_r91.f4);
    CPy_INCREF(cpy_r_r91.f5);
    CPy_INCREF(cpy_r_r91.f6);
    CPy_DECREF(cpy_r_r89);
    cpy_r_r92 = PyTuple_New(9);
    if (unlikely(cpy_r_r92 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2144 = cpy_r_r91.f0;
    PyTuple_SET_ITEM(cpy_r_r92, 0, __tmp2144);
    PyObject *__tmp2145 = CPyTagged_StealAsObject(cpy_r_r91.f1);
    PyTuple_SET_ITEM(cpy_r_r92, 1, __tmp2145);
    PyObject *__tmp2146 = CPyTagged_StealAsObject(cpy_r_r91.f2);
    PyTuple_SET_ITEM(cpy_r_r92, 2, __tmp2146);
    PyObject *__tmp2147 = CPyTagged_StealAsObject(cpy_r_r91.f3);
    PyTuple_SET_ITEM(cpy_r_r92, 3, __tmp2147);
    PyObject *__tmp2148 = CPyTagged_StealAsObject(cpy_r_r91.f4);
    PyTuple_SET_ITEM(cpy_r_r92, 4, __tmp2148);
    PyObject *__tmp2149 = cpy_r_r91.f5;
    PyTuple_SET_ITEM(cpy_r_r92, 5, __tmp2149);
    PyObject *__tmp2150 = cpy_r_r91.f6;
    PyTuple_SET_ITEM(cpy_r_r92, 6, __tmp2150);
    PyObject *__tmp2151 = cpy_r_r91.f7 ? Py_True : Py_False;
    CPy_INCREF(__tmp2151);
    PyTuple_SET_ITEM(cpy_r_r92, 7, __tmp2151);
    PyObject *__tmp2152 = Py_None;
    CPy_INCREF(__tmp2152);
    PyTuple_SET_ITEM(cpy_r_r92, 8, __tmp2152);
    cpy_r_r93 = PyList_Append(cpy_r_result, cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r94 = cpy_r_r93 >= 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 983, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    } else
        goto CPyL62;
CPyL46: ;
    cpy_r_r95 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_type;
    cpy_r_r96 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r97 = cpy_r_r95 == cpy_r_r96;
    if (!cpy_r_r97) goto CPyL50;
    cpy_r_r98 = CPyStatics[413]; /* 'note' */
    cpy_r_r99 = CPyStatics[2239]; /* 'In function "' */
    cpy_r_r100 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_function_or_member;
    CPy_INCREF(cpy_r_r100);
    if (likely(cpy_r_r100 != Py_None))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "render_messages", 1006, CPyStatic_mypy___errors___globals, "str", cpy_r_r100);
        goto CPyL85;
    }
    cpy_r_r102 = CPyStatics[2238]; /* '":' */
    cpy_r_r103 = CPyStr_Build(3, cpy_r_r99, cpy_r_r101, cpy_r_r102);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 1006, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    }
    cpy_r_r104 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_allow_dups;
    cpy_r_r105.f0 = cpy_r_file;
    cpy_r_r105.f1 = -2;
    cpy_r_r105.f2 = -2;
    cpy_r_r105.f3 = -2;
    cpy_r_r105.f4 = -2;
    cpy_r_r105.f5 = cpy_r_r98;
    cpy_r_r105.f6 = cpy_r_r103;
    cpy_r_r105.f7 = cpy_r_r104;
    cpy_r_r105.f8 = 1;
    CPy_INCREF(cpy_r_r105.f0);
    CPyTagged_INCREF(cpy_r_r105.f1);
    CPyTagged_INCREF(cpy_r_r105.f2);
    CPyTagged_INCREF(cpy_r_r105.f3);
    CPyTagged_INCREF(cpy_r_r105.f4);
    CPy_INCREF(cpy_r_r105.f5);
    CPy_INCREF(cpy_r_r105.f6);
    CPy_DECREF(cpy_r_r103);
    cpy_r_r106 = PyTuple_New(9);
    if (unlikely(cpy_r_r106 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2153 = cpy_r_r105.f0;
    PyTuple_SET_ITEM(cpy_r_r106, 0, __tmp2153);
    PyObject *__tmp2154 = CPyTagged_StealAsObject(cpy_r_r105.f1);
    PyTuple_SET_ITEM(cpy_r_r106, 1, __tmp2154);
    PyObject *__tmp2155 = CPyTagged_StealAsObject(cpy_r_r105.f2);
    PyTuple_SET_ITEM(cpy_r_r106, 2, __tmp2155);
    PyObject *__tmp2156 = CPyTagged_StealAsObject(cpy_r_r105.f3);
    PyTuple_SET_ITEM(cpy_r_r106, 3, __tmp2156);
    PyObject *__tmp2157 = CPyTagged_StealAsObject(cpy_r_r105.f4);
    PyTuple_SET_ITEM(cpy_r_r106, 4, __tmp2157);
    PyObject *__tmp2158 = cpy_r_r105.f5;
    PyTuple_SET_ITEM(cpy_r_r106, 5, __tmp2158);
    PyObject *__tmp2159 = cpy_r_r105.f6;
    PyTuple_SET_ITEM(cpy_r_r106, 6, __tmp2159);
    PyObject *__tmp2160 = cpy_r_r105.f7 ? Py_True : Py_False;
    CPy_INCREF(__tmp2160);
    PyTuple_SET_ITEM(cpy_r_r106, 7, __tmp2160);
    PyObject *__tmp2161 = Py_None;
    CPy_INCREF(__tmp2161);
    PyTuple_SET_ITEM(cpy_r_r106, 8, __tmp2161);
    cpy_r_r107 = PyList_Append(cpy_r_result, cpy_r_r106);
    CPy_DECREF(cpy_r_r106);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 998, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    } else
        goto CPyL62;
CPyL50: ;
    cpy_r_r109 = CPyStatics[413]; /* 'note' */
    cpy_r_r110 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_function_or_member;
    CPy_INCREF(cpy_r_r110);
    if (likely(cpy_r_r110 != Py_None))
        cpy_r_r111 = cpy_r_r110;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "render_messages", 1021, CPyStatic_mypy___errors___globals, "str", cpy_r_r110);
        goto CPyL85;
    }
    cpy_r_r112 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_type;
    CPy_INCREF(cpy_r_r112);
    if (likely(cpy_r_r112 != Py_None))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "render_messages", 1021, CPyStatic_mypy___errors___globals, "str", cpy_r_r112);
        goto CPyL86;
    }
    cpy_r_r114 = CPyStatics[2240]; /* 'In member "' */
    cpy_r_r115 = CPyStatics[2241]; /* '" of class "' */
    cpy_r_r116 = CPyStatics[2238]; /* '":' */
    cpy_r_r117 = CPyStr_Build(5, cpy_r_r114, cpy_r_r111, cpy_r_r115, cpy_r_r113, cpy_r_r116);
    CPy_DECREF(cpy_r_r111);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 1020, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    }
    cpy_r_r118 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_allow_dups;
    cpy_r_r119.f0 = cpy_r_file;
    cpy_r_r119.f1 = -2;
    cpy_r_r119.f2 = -2;
    cpy_r_r119.f3 = -2;
    cpy_r_r119.f4 = -2;
    cpy_r_r119.f5 = cpy_r_r109;
    cpy_r_r119.f6 = cpy_r_r117;
    cpy_r_r119.f7 = cpy_r_r118;
    cpy_r_r119.f8 = 1;
    CPy_INCREF(cpy_r_r119.f0);
    CPyTagged_INCREF(cpy_r_r119.f1);
    CPyTagged_INCREF(cpy_r_r119.f2);
    CPyTagged_INCREF(cpy_r_r119.f3);
    CPyTagged_INCREF(cpy_r_r119.f4);
    CPy_INCREF(cpy_r_r119.f5);
    CPy_INCREF(cpy_r_r119.f6);
    CPy_DECREF(cpy_r_r117);
    cpy_r_r120 = PyTuple_New(9);
    if (unlikely(cpy_r_r120 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2162 = cpy_r_r119.f0;
    PyTuple_SET_ITEM(cpy_r_r120, 0, __tmp2162);
    PyObject *__tmp2163 = CPyTagged_StealAsObject(cpy_r_r119.f1);
    PyTuple_SET_ITEM(cpy_r_r120, 1, __tmp2163);
    PyObject *__tmp2164 = CPyTagged_StealAsObject(cpy_r_r119.f2);
    PyTuple_SET_ITEM(cpy_r_r120, 2, __tmp2164);
    PyObject *__tmp2165 = CPyTagged_StealAsObject(cpy_r_r119.f3);
    PyTuple_SET_ITEM(cpy_r_r120, 3, __tmp2165);
    PyObject *__tmp2166 = CPyTagged_StealAsObject(cpy_r_r119.f4);
    PyTuple_SET_ITEM(cpy_r_r120, 4, __tmp2166);
    PyObject *__tmp2167 = cpy_r_r119.f5;
    PyTuple_SET_ITEM(cpy_r_r120, 5, __tmp2167);
    PyObject *__tmp2168 = cpy_r_r119.f6;
    PyTuple_SET_ITEM(cpy_r_r120, 6, __tmp2168);
    PyObject *__tmp2169 = cpy_r_r119.f7 ? Py_True : Py_False;
    CPy_INCREF(__tmp2169);
    PyTuple_SET_ITEM(cpy_r_r120, 7, __tmp2169);
    PyObject *__tmp2170 = Py_None;
    CPy_INCREF(__tmp2170);
    PyTuple_SET_ITEM(cpy_r_r120, 8, __tmp2170);
    cpy_r_r121 = PyList_Append(cpy_r_result, cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    cpy_r_r122 = cpy_r_r121 >= 0;
    if (unlikely(!cpy_r_r122)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 1012, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    } else
        goto CPyL62;
CPyL54: ;
    cpy_r_r123 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_type;
    CPy_INCREF(cpy_r_r123);
    cpy_r_r124 = PyObject_RichCompare(cpy_r_r123, cpy_r_prev_type, 3);
    CPy_DECREF(cpy_r_r123);
    CPy_DECREF(cpy_r_prev_type);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 1027, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    }
    if (unlikely(!PyBool_Check(cpy_r_r124))) {
        CPy_TypeError("bool", cpy_r_r124); cpy_r_r125 = 2;
    } else
        cpy_r_r125 = cpy_r_r124 == Py_True;
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 1027, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    }
    if (!cpy_r_r125) goto CPyL62;
    cpy_r_r126 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_type;
    cpy_r_r127 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r128 = cpy_r_r126 == cpy_r_r127;
    if (!cpy_r_r128) goto CPyL59;
    cpy_r_r129 = CPyStatics[413]; /* 'note' */
    cpy_r_r130 = CPyStatics[2236]; /* 'At top level:' */
    cpy_r_r131 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_allow_dups;
    cpy_r_r132.f0 = cpy_r_file;
    cpy_r_r132.f1 = -2;
    cpy_r_r132.f2 = -2;
    cpy_r_r132.f3 = -2;
    cpy_r_r132.f4 = -2;
    cpy_r_r132.f5 = cpy_r_r129;
    cpy_r_r132.f6 = cpy_r_r130;
    cpy_r_r132.f7 = cpy_r_r131;
    cpy_r_r132.f8 = 1;
    CPy_INCREF(cpy_r_r132.f0);
    CPyTagged_INCREF(cpy_r_r132.f1);
    CPyTagged_INCREF(cpy_r_r132.f2);
    CPyTagged_INCREF(cpy_r_r132.f3);
    CPyTagged_INCREF(cpy_r_r132.f4);
    CPy_INCREF(cpy_r_r132.f5);
    CPy_INCREF(cpy_r_r132.f6);
    cpy_r_r133 = PyTuple_New(9);
    if (unlikely(cpy_r_r133 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2171 = cpy_r_r132.f0;
    PyTuple_SET_ITEM(cpy_r_r133, 0, __tmp2171);
    PyObject *__tmp2172 = CPyTagged_StealAsObject(cpy_r_r132.f1);
    PyTuple_SET_ITEM(cpy_r_r133, 1, __tmp2172);
    PyObject *__tmp2173 = CPyTagged_StealAsObject(cpy_r_r132.f2);
    PyTuple_SET_ITEM(cpy_r_r133, 2, __tmp2173);
    PyObject *__tmp2174 = CPyTagged_StealAsObject(cpy_r_r132.f3);
    PyTuple_SET_ITEM(cpy_r_r133, 3, __tmp2174);
    PyObject *__tmp2175 = CPyTagged_StealAsObject(cpy_r_r132.f4);
    PyTuple_SET_ITEM(cpy_r_r133, 4, __tmp2175);
    PyObject *__tmp2176 = cpy_r_r132.f5;
    PyTuple_SET_ITEM(cpy_r_r133, 5, __tmp2176);
    PyObject *__tmp2177 = cpy_r_r132.f6;
    PyTuple_SET_ITEM(cpy_r_r133, 6, __tmp2177);
    PyObject *__tmp2178 = cpy_r_r132.f7 ? Py_True : Py_False;
    CPy_INCREF(__tmp2178);
    PyTuple_SET_ITEM(cpy_r_r133, 7, __tmp2178);
    PyObject *__tmp2179 = Py_None;
    CPy_INCREF(__tmp2179);
    PyTuple_SET_ITEM(cpy_r_r133, 8, __tmp2179);
    cpy_r_r134 = PyList_Append(cpy_r_result, cpy_r_r133);
    CPy_DECREF(cpy_r_r133);
    cpy_r_r135 = cpy_r_r134 >= 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 1029, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    } else
        goto CPyL62;
CPyL59: ;
    cpy_r_r136 = CPyStatics[413]; /* 'note' */
    cpy_r_r137 = CPyStatics[2237]; /* 'In class "' */
    cpy_r_r138 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_type;
    CPy_INCREF(cpy_r_r138);
    if (likely(cpy_r_r138 != Py_None))
        cpy_r_r139 = cpy_r_r138;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "render_messages", 1034, CPyStatic_mypy___errors___globals, "str", cpy_r_r138);
        goto CPyL85;
    }
    cpy_r_r140 = CPyStatics[2238]; /* '":' */
    cpy_r_r141 = CPyStr_Build(3, cpy_r_r137, cpy_r_r139, cpy_r_r140);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 1034, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    }
    cpy_r_r142 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_allow_dups;
    cpy_r_r143.f0 = cpy_r_file;
    cpy_r_r143.f1 = -2;
    cpy_r_r143.f2 = -2;
    cpy_r_r143.f3 = -2;
    cpy_r_r143.f4 = -2;
    cpy_r_r143.f5 = cpy_r_r136;
    cpy_r_r143.f6 = cpy_r_r141;
    cpy_r_r143.f7 = cpy_r_r142;
    cpy_r_r143.f8 = 1;
    CPy_INCREF(cpy_r_r143.f0);
    CPyTagged_INCREF(cpy_r_r143.f1);
    CPyTagged_INCREF(cpy_r_r143.f2);
    CPyTagged_INCREF(cpy_r_r143.f3);
    CPyTagged_INCREF(cpy_r_r143.f4);
    CPy_INCREF(cpy_r_r143.f5);
    CPy_INCREF(cpy_r_r143.f6);
    CPy_DECREF(cpy_r_r141);
    cpy_r_r144 = PyTuple_New(9);
    if (unlikely(cpy_r_r144 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2180 = cpy_r_r143.f0;
    PyTuple_SET_ITEM(cpy_r_r144, 0, __tmp2180);
    PyObject *__tmp2181 = CPyTagged_StealAsObject(cpy_r_r143.f1);
    PyTuple_SET_ITEM(cpy_r_r144, 1, __tmp2181);
    PyObject *__tmp2182 = CPyTagged_StealAsObject(cpy_r_r143.f2);
    PyTuple_SET_ITEM(cpy_r_r144, 2, __tmp2182);
    PyObject *__tmp2183 = CPyTagged_StealAsObject(cpy_r_r143.f3);
    PyTuple_SET_ITEM(cpy_r_r144, 3, __tmp2183);
    PyObject *__tmp2184 = CPyTagged_StealAsObject(cpy_r_r143.f4);
    PyTuple_SET_ITEM(cpy_r_r144, 4, __tmp2184);
    PyObject *__tmp2185 = cpy_r_r143.f5;
    PyTuple_SET_ITEM(cpy_r_r144, 5, __tmp2185);
    PyObject *__tmp2186 = cpy_r_r143.f6;
    PyTuple_SET_ITEM(cpy_r_r144, 6, __tmp2186);
    PyObject *__tmp2187 = cpy_r_r143.f7 ? Py_True : Py_False;
    CPy_INCREF(__tmp2187);
    PyTuple_SET_ITEM(cpy_r_r144, 7, __tmp2187);
    PyObject *__tmp2188 = Py_None;
    CPy_INCREF(__tmp2188);
    PyTuple_SET_ITEM(cpy_r_r144, 8, __tmp2188);
    cpy_r_r145 = PyList_Append(cpy_r_result, cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    cpy_r_r146 = cpy_r_r145 >= 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 1033, CPyStatic_mypy___errors___globals);
        goto CPyL85;
    }
CPyL62: ;
    cpy_r_r147 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_message;
    CPy_INCREF(cpy_r_r147);
    cpy_r_r148 = (PyObject *)CPyType_message_registry___ErrorMessage;
    cpy_r_r149 = (CPyPtr)&((PyObject *)cpy_r_r147)->ob_type;
    cpy_r_r150 = *(PyObject * *)cpy_r_r149;
    CPy_DECREF(cpy_r_r147);
    cpy_r_r151 = cpy_r_r150 == cpy_r_r148;
    if (!cpy_r_r151) goto CPyL66;
    cpy_r_r152 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_line;
    CPyTagged_INCREF(cpy_r_r152);
    cpy_r_r153 = CPyTagged_StealAsObject(cpy_r_r152);
    cpy_r_r154 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_column;
    CPyTagged_INCREF(cpy_r_r154);
    cpy_r_r155 = CPyTagged_StealAsObject(cpy_r_r154);
    cpy_r_r156 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_end_line;
    CPyTagged_INCREF(cpy_r_r156);
    cpy_r_r157 = CPyTagged_StealAsObject(cpy_r_r156);
    cpy_r_r158 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_end_column;
    CPyTagged_INCREF(cpy_r_r158);
    cpy_r_r159 = CPyTagged_StealAsObject(cpy_r_r158);
    cpy_r_r160 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_severity;
    CPy_INCREF(cpy_r_r160);
    cpy_r_r161 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_message;
    CPy_INCREF(cpy_r_r161);
    cpy_r_r162 = CPyStatics[2242]; /* 'value' */
    cpy_r_r163 = CPyObject_GetAttr(cpy_r_r161, cpy_r_r162);
    CPy_DECREF(cpy_r_r161);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 1046, CPyStatic_mypy___errors___globals);
        goto CPyL87;
    }
    cpy_r_r164 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_allow_dups;
    cpy_r_r165 = cpy_r_r164 ? Py_True : Py_False;
    cpy_r_r166 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_code;
    CPy_INCREF(cpy_r_r166);
    cpy_r_r167.f0 = cpy_r_file;
    cpy_r_r167.f1 = cpy_r_r153;
    cpy_r_r167.f2 = cpy_r_r155;
    cpy_r_r167.f3 = cpy_r_r157;
    cpy_r_r167.f4 = cpy_r_r159;
    cpy_r_r167.f5 = cpy_r_r160;
    cpy_r_r167.f6 = cpy_r_r163;
    cpy_r_r167.f7 = cpy_r_r165;
    cpy_r_r167.f8 = cpy_r_r166;
    CPy_INCREF(cpy_r_r167.f0);
    CPy_INCREF(cpy_r_r167.f1);
    CPy_INCREF(cpy_r_r167.f2);
    CPy_INCREF(cpy_r_r167.f3);
    CPy_INCREF(cpy_r_r167.f4);
    CPy_INCREF(cpy_r_r167.f5);
    CPy_INCREF(cpy_r_r167.f6);
    CPy_INCREF(cpy_r_r167.f7);
    CPy_INCREF(cpy_r_r167.f8);
    CPy_DECREF(cpy_r_file);
    CPy_DECREF(cpy_r_r153);
    CPy_DECREF(cpy_r_r155);
    CPy_DECREF(cpy_r_r157);
    CPy_DECREF(cpy_r_r159);
    CPy_DECREF(cpy_r_r160);
    CPy_DECREF(cpy_r_r163);
    CPy_DECREF(cpy_r_r166);
    cpy_r_r168 = PyTuple_New(9);
    if (unlikely(cpy_r_r168 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2189 = cpy_r_r167.f0;
    PyTuple_SET_ITEM(cpy_r_r168, 0, __tmp2189);
    PyObject *__tmp2190 = cpy_r_r167.f1;
    PyTuple_SET_ITEM(cpy_r_r168, 1, __tmp2190);
    PyObject *__tmp2191 = cpy_r_r167.f2;
    PyTuple_SET_ITEM(cpy_r_r168, 2, __tmp2191);
    PyObject *__tmp2192 = cpy_r_r167.f3;
    PyTuple_SET_ITEM(cpy_r_r168, 3, __tmp2192);
    PyObject *__tmp2193 = cpy_r_r167.f4;
    PyTuple_SET_ITEM(cpy_r_r168, 4, __tmp2193);
    PyObject *__tmp2194 = cpy_r_r167.f5;
    PyTuple_SET_ITEM(cpy_r_r168, 5, __tmp2194);
    PyObject *__tmp2195 = cpy_r_r167.f6;
    PyTuple_SET_ITEM(cpy_r_r168, 6, __tmp2195);
    PyObject *__tmp2196 = cpy_r_r167.f7;
    PyTuple_SET_ITEM(cpy_r_r168, 7, __tmp2196);
    PyObject *__tmp2197 = cpy_r_r167.f8;
    PyTuple_SET_ITEM(cpy_r_r168, 8, __tmp2197);
    cpy_r_r169 = PyList_Append(cpy_r_result, cpy_r_r168);
    CPy_DECREF(cpy_r_r168);
    cpy_r_r170 = cpy_r_r169 >= 0;
    if (unlikely(!cpy_r_r170)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 1038, CPyStatic_mypy___errors___globals);
        goto CPyL88;
    }
    cpy_r_r171 = PyLong_FromLong(cpy_r_r169);
    CPy_DECREF(cpy_r_r171);
    goto CPyL67;
CPyL66: ;
    cpy_r_r172 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_line;
    CPyTagged_INCREF(cpy_r_r172);
    cpy_r_r173 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_column;
    CPyTagged_INCREF(cpy_r_r173);
    cpy_r_r174 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_end_line;
    CPyTagged_INCREF(cpy_r_r174);
    cpy_r_r175 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_end_column;
    CPyTagged_INCREF(cpy_r_r175);
    cpy_r_r176 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_severity;
    CPy_INCREF(cpy_r_r176);
    cpy_r_r177 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_message;
    CPy_INCREF(cpy_r_r177);
    cpy_r_r178 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_allow_dups;
    cpy_r_r179 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_code;
    CPy_INCREF(cpy_r_r179);
    cpy_r_r180.f0 = cpy_r_file;
    cpy_r_r180.f1 = cpy_r_r172;
    cpy_r_r180.f2 = cpy_r_r173;
    cpy_r_r180.f3 = cpy_r_r174;
    cpy_r_r180.f4 = cpy_r_r175;
    cpy_r_r180.f5 = cpy_r_r176;
    cpy_r_r180.f6 = cpy_r_r177;
    cpy_r_r180.f7 = cpy_r_r178;
    cpy_r_r180.f8 = cpy_r_r179;
    CPy_INCREF(cpy_r_r180.f0);
    CPyTagged_INCREF(cpy_r_r180.f1);
    CPyTagged_INCREF(cpy_r_r180.f2);
    CPyTagged_INCREF(cpy_r_r180.f3);
    CPyTagged_INCREF(cpy_r_r180.f4);
    CPy_INCREF(cpy_r_r180.f5);
    CPy_INCREF(cpy_r_r180.f6);
    CPy_INCREF(cpy_r_r180.f8);
    CPy_DECREF(cpy_r_file);
    CPyTagged_DECREF(cpy_r_r172);
    CPyTagged_DECREF(cpy_r_r173);
    CPyTagged_DECREF(cpy_r_r174);
    CPyTagged_DECREF(cpy_r_r175);
    CPy_DECREF(cpy_r_r176);
    CPy_DECREF(cpy_r_r177);
    CPy_DECREF(cpy_r_r179);
    cpy_r_r181 = PyTuple_New(9);
    if (unlikely(cpy_r_r181 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2198 = cpy_r_r180.f0;
    PyTuple_SET_ITEM(cpy_r_r181, 0, __tmp2198);
    PyObject *__tmp2199 = CPyTagged_StealAsObject(cpy_r_r180.f1);
    PyTuple_SET_ITEM(cpy_r_r181, 1, __tmp2199);
    PyObject *__tmp2200 = CPyTagged_StealAsObject(cpy_r_r180.f2);
    PyTuple_SET_ITEM(cpy_r_r181, 2, __tmp2200);
    PyObject *__tmp2201 = CPyTagged_StealAsObject(cpy_r_r180.f3);
    PyTuple_SET_ITEM(cpy_r_r181, 3, __tmp2201);
    PyObject *__tmp2202 = CPyTagged_StealAsObject(cpy_r_r180.f4);
    PyTuple_SET_ITEM(cpy_r_r181, 4, __tmp2202);
    PyObject *__tmp2203 = cpy_r_r180.f5;
    PyTuple_SET_ITEM(cpy_r_r181, 5, __tmp2203);
    PyObject *__tmp2204 = cpy_r_r180.f6;
    PyTuple_SET_ITEM(cpy_r_r181, 6, __tmp2204);
    PyObject *__tmp2205 = cpy_r_r180.f7 ? Py_True : Py_False;
    CPy_INCREF(__tmp2205);
    PyTuple_SET_ITEM(cpy_r_r181, 7, __tmp2205);
    PyObject *__tmp2206 = cpy_r_r180.f8;
    PyTuple_SET_ITEM(cpy_r_r181, 8, __tmp2206);
    cpy_r_r182 = PyList_Append(cpy_r_result, cpy_r_r181);
    CPy_DECREF(cpy_r_r181);
    cpy_r_r183 = cpy_r_r182 >= 0;
    if (unlikely(!cpy_r_r183)) {
        CPy_AddTraceback("mypy/errors.py", "render_messages", 1052, CPyStatic_mypy___errors___globals);
        goto CPyL88;
    }
CPyL67: ;
    cpy_r_r184 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_import_ctx;
    CPy_INCREF(cpy_r_r184);
    cpy_r_prev_import_context = cpy_r_r184;
    cpy_r_r185 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_function_or_member;
    CPy_INCREF(cpy_r_r185);
    cpy_r_prev_function_or_member = cpy_r_r185;
    cpy_r_r186 = ((mypy___errors___ErrorInfoObject *)cpy_r_e)->_type;
    CPy_INCREF(cpy_r_r186);
    CPy_DECREF(cpy_r_e);
    cpy_r_prev_type = cpy_r_r186;
    cpy_r_r187 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r187;
    goto CPyL3;
CPyL69: ;
    return cpy_r_result;
CPyL70: ;
    cpy_r_r188 = NULL;
    return cpy_r_r188;
CPyL71: ;
    CPy_DecRef(cpy_r_result);
    goto CPyL70;
CPyL72: ;
    CPy_DECREF(cpy_r_prev_import_context);
    CPy_DECREF(cpy_r_prev_function_or_member);
    CPy_DECREF(cpy_r_prev_type);
    goto CPyL69;
CPyL73: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_prev_import_context);
    CPy_DecRef(cpy_r_prev_function_or_member);
    CPy_DecRef(cpy_r_prev_type);
    goto CPyL70;
CPyL74: ;
    CPy_DECREF(cpy_r_prev_import_context);
    goto CPyL32;
CPyL75: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_prev_function_or_member);
    CPy_DecRef(cpy_r_prev_type);
    CPy_DecRef(cpy_r_e);
    goto CPyL70;
CPyL76: ;
    CPyTagged_DECREF(cpy_r_last);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL32;
CPyL77: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_prev_function_or_member);
    CPy_DecRef(cpy_r_prev_type);
    CPy_DecRef(cpy_r_e);
    CPyTagged_DecRef(cpy_r_last);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL70;
CPyL78: ;
    CPy_DECREF(cpy_r_fmt);
    goto CPyL19;
CPyL79: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_prev_function_or_member);
    CPy_DecRef(cpy_r_prev_type);
    CPy_DecRef(cpy_r_e);
    CPyTagged_DecRef(cpy_r_last);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_path);
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL70;
CPyL80: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_prev_function_or_member);
    CPy_DecRef(cpy_r_prev_type);
    CPy_DecRef(cpy_r_e);
    CPyTagged_DecRef(cpy_r_last);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_fmt);
    goto CPyL70;
CPyL81: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_prev_function_or_member);
    CPy_DecRef(cpy_r_prev_type);
    CPy_DecRef(cpy_r_e);
    CPyTagged_DecRef(cpy_r_last);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_path);
    CPy_DecRef(cpy_r_fmt);
    CPy_DecRef(cpy_r_r50);
    goto CPyL70;
CPyL82: ;
    CPy_DECREF(cpy_r_prev_function_or_member);
    CPy_DECREF(cpy_r_prev_type);
    goto CPyL62;
CPyL83: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_prev_type);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_file);
    goto CPyL70;
CPyL84: ;
    CPy_DECREF(cpy_r_prev_type);
    goto CPyL40;
CPyL85: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_file);
    goto CPyL70;
CPyL86: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_r111);
    goto CPyL70;
CPyL87: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_e);
    CPy_DecRef(cpy_r_file);
    CPy_DecRef(cpy_r_r153);
    CPy_DecRef(cpy_r_r155);
    CPy_DecRef(cpy_r_r157);
    CPy_DecRef(cpy_r_r159);
    CPy_DecRef(cpy_r_r160);
    goto CPyL70;
CPyL88: ;
    CPy_DecRef(cpy_r_result);
    CPy_DecRef(cpy_r_e);
    goto CPyL70;
}

PyObject *CPyPy_mypy___errors___Errors___render_messages(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"errors", 0};
    static CPyArg_Parser parser = {"O:render_messages", kwlist, 0};
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(PyList_Check(obj_errors)))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("list", obj_errors); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___errors___Errors___render_messages(arg_self, arg_errors);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "render_messages", 934, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "__get__", -1, CPyStatic_mypy___errors___globals);
    return NULL;
}

tuple_T2II CPyDef_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_x) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    tuple_T2II cpy_r_r3;
    tuple_T2II cpy_r_r4;
    cpy_r_r0 = ((mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "<lambda>", "__mypyc_lambda__1_sort_messages_Errors_obj", "__mypyc_env__", 1093, CPyStatic_mypy___errors___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL3;
CPyL1: ;
    cpy_r_r1 = ((mypy___errors___ErrorInfoObject *)cpy_r_x)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = ((mypy___errors___ErrorInfoObject *)cpy_r_x)->_column;
    CPyTagged_INCREF(cpy_r_r2);
    cpy_r_r3.f0 = cpy_r_r1;
    cpy_r_r3.f1 = cpy_r_r2;
    CPyTagged_INCREF(cpy_r_r3.f0);
    CPyTagged_INCREF(cpy_r_r3.f1);
    CPyTagged_DECREF(cpy_r_r1);
    CPyTagged_DECREF(cpy_r_r2);
    return cpy_r_r3;
CPyL2: ;
    tuple_T2II __tmp2207 = { CPY_INT_TAG, CPY_INT_TAG };
    cpy_r_r4 = __tmp2207;
    return cpy_r_r4;
CPyL3: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"x", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_x;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_x)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_x;
    if (likely(Py_TYPE(obj_x) == CPyType_mypy___errors___ErrorInfo))
        arg_x = obj_x;
    else {
        CPy_TypeError("mypy.errors.ErrorInfo", obj_x); 
        goto fail;
    }
    tuple_T2II retval = CPyDef_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj_____call__(arg___mypyc_self__, arg_x);
    if (retval.f0 == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2208 = CPyTagged_StealAsObject(retval.f0);
    PyTuple_SET_ITEM(retbox, 0, __tmp2208);
    PyObject *__tmp2209 = CPyTagged_StealAsObject(retval.f1);
    PyTuple_SET_ITEM(retbox, 1, __tmp2209);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "<lambda>", 1093, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___Errors___sort_messages(PyObject *cpy_r_self, PyObject *cpy_r_errors) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_result;
    CPyTagged cpy_r_i;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    int64_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    CPyTagged cpy_r_i0;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    int64_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject **cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    cpy_r_r0 = CPyDef_mypy___errors___sort_messages_Errors_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_messages", 1072, CPyStatic_mypy___errors___globals);
        goto CPyL36;
    }
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_messages", 1079, CPyStatic_mypy___errors___globals);
        goto CPyL37;
    }
    cpy_r_result = cpy_r_r1;
    cpy_r_i = 0;
CPyL3: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_errors)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = cpy_r_i & 1;
    cpy_r_r6 = cpy_r_r5 != 0;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = CPyTagged_IsLt_(cpy_r_i, cpy_r_r4);
    if (cpy_r_r7) {
        goto CPyL6;
    } else
        goto CPyL38;
CPyL5: ;
    cpy_r_r8 = (Py_ssize_t)cpy_r_i < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r8) goto CPyL38;
CPyL6: ;
    CPyTagged_INCREF(cpy_r_i);
    cpy_r_i0 = cpy_r_i;
CPyL7: ;
    cpy_r_r9 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_errors)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = cpy_r_r9 & 1;
    cpy_r_r14 = cpy_r_r13 != 0;
    if (!cpy_r_r14) goto CPyL9;
    cpy_r_r15 = CPyTagged_IsLt_(cpy_r_r9, cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r9);
    if (cpy_r_r15) {
        goto CPyL10;
    } else
        goto CPyL26;
CPyL9: ;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    CPyTagged_DECREF(cpy_r_r9);
    if (!cpy_r_r16) goto CPyL26;
CPyL10: ;
    cpy_r_r17 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r18 = CPyList_GetItemBorrow(cpy_r_errors, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_messages", 1086, CPyStatic_mypy___errors___globals);
        goto CPyL39;
    }
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_messages", 1086, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r18);
        goto CPyL39;
    }
    cpy_r_r20 = ((mypy___errors___ErrorInfoObject *)cpy_r_r19)->_import_ctx;
    CPy_INCREF(cpy_r_r20);
    CPyTagged_DECREF(cpy_r_r17);
    cpy_r_r21 = CPyList_GetItemBorrow(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_messages", 1086, CPyStatic_mypy___errors___globals);
        goto CPyL40;
    }
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_messages", 1086, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r21);
        goto CPyL40;
    }
    cpy_r_r23 = ((mypy___errors___ErrorInfoObject *)cpy_r_r22)->_import_ctx;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = PyObject_RichCompare(cpy_r_r20, cpy_r_r23, 2);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_messages", 1086, CPyStatic_mypy___errors___globals);
        goto CPyL41;
    }
    if (unlikely(!PyBool_Check(cpy_r_r24))) {
        CPy_TypeError("bool", cpy_r_r24); cpy_r_r25 = 2;
    } else
        cpy_r_r25 = cpy_r_r24 == Py_True;
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "sort_messages", 1086, CPyStatic_mypy___errors___globals);
        goto CPyL41;
    }
    if (!cpy_r_r25) goto CPyL26;
    cpy_r_r26 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r27 = CPyList_GetItemBorrow(cpy_r_errors, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_messages", 1087, CPyStatic_mypy___errors___globals);
        goto CPyL42;
    }
    if (likely(Py_TYPE(cpy_r_r27) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_messages", 1087, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r27);
        goto CPyL42;
    }
    cpy_r_r29 = ((mypy___errors___ErrorInfoObject *)cpy_r_r28)->_file;
    CPy_INCREF(cpy_r_r29);
    CPyTagged_DECREF(cpy_r_r26);
    cpy_r_r30 = CPyList_GetItemBorrow(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_messages", 1087, CPyStatic_mypy___errors___globals);
        goto CPyL43;
    }
    if (likely(Py_TYPE(cpy_r_r30) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_messages", 1087, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r30);
        goto CPyL43;
    }
    cpy_r_r32 = ((mypy___errors___ErrorInfoObject *)cpy_r_r31)->_file;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = PyUnicode_Compare(cpy_r_r29, cpy_r_r32);
    CPy_DECREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 == -1;
    if (!cpy_r_r34) goto CPyL24;
    cpy_r_r35 = PyErr_Occurred();
    cpy_r_r36 = cpy_r_r35 != NULL;
    if (!cpy_r_r36) goto CPyL24;
    cpy_r_r37 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/errors.py", "sort_messages", 1087, CPyStatic_mypy___errors___globals);
        goto CPyL41;
    }
CPyL24: ;
    cpy_r_r38 = cpy_r_r33 == 0;
    if (!cpy_r_r38) goto CPyL26;
    cpy_r_r39 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r39;
    goto CPyL7;
CPyL26: ;
    cpy_r_r40 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r40;
    cpy_r_r41 = CPyList_GetSlice(cpy_r_errors, cpy_r_i0, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i0);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_messages", 1093, CPyStatic_mypy___errors___globals);
        goto CPyL44;
    }
    if (likely(PyList_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_messages", 1093, CPyStatic_mypy___errors___globals, "list", cpy_r_r41);
        goto CPyL44;
    }
    cpy_r_r43 = CPyDef_mypy___errors_____mypyc_lambda__1_sort_messages_Errors_obj();
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_messages", 1093, CPyStatic_mypy___errors___globals);
        goto CPyL45;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject *)cpy_r_r43)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject *)cpy_r_r43)->___mypyc_env__);
    }
    ((mypy___errors_____mypyc_lambda__1_sort_messages_Errors_objObject *)cpy_r_r43)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r44 = 1;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/errors.py", "sort_messages", 1093, CPyStatic_mypy___errors___globals);
        goto CPyL46;
    }
    cpy_r_r45 = CPyModule_builtins;
    cpy_r_r46 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_messages", 1093, CPyStatic_mypy___errors___globals);
        goto CPyL46;
    }
    PyObject *cpy_r_r48[2] = {cpy_r_r42, cpy_r_r43};
    cpy_r_r49 = (PyObject **)&cpy_r_r48;
    cpy_r_r50 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r51 = _PyObject_Vectorcall(cpy_r_r47, cpy_r_r49, 1, cpy_r_r50);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_messages", 1093, CPyStatic_mypy___errors___globals);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r43);
    if (likely(PyList_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_messages", 1093, CPyStatic_mypy___errors___globals, "list", cpy_r_r51);
        goto CPyL44;
    }
    cpy_r_a = cpy_r_r52;
    cpy_r_r53 = CPyDef_mypy___errors___Errors___sort_within_context(cpy_r_self, cpy_r_a);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_messages", 1094, CPyStatic_mypy___errors___globals);
        goto CPyL44;
    }
    cpy_r_a = cpy_r_r53;
    cpy_r_r54 = CPyList_Extend(cpy_r_result, cpy_r_a);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_messages", 1095, CPyStatic_mypy___errors___globals);
        goto CPyL44;
    } else
        goto CPyL47;
CPyL35: ;
    return cpy_r_result;
CPyL36: ;
    cpy_r_r55 = NULL;
    return cpy_r_r55;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL36;
CPyL38: ;
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL35;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_i0);
    CPyTagged_DecRef(cpy_r_r17);
    goto CPyL36;
CPyL40: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_i0);
    CPy_DecRef(cpy_r_r20);
    goto CPyL36;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_i0);
    goto CPyL36;
CPyL42: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_i0);
    CPyTagged_DecRef(cpy_r_r26);
    goto CPyL36;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_i0);
    CPy_DecRef(cpy_r_r29);
    goto CPyL36;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL36;
CPyL45: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r42);
    goto CPyL36;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r43);
    goto CPyL36;
CPyL47: ;
    CPy_DECREF(cpy_r_r54);
    goto CPyL3;
}

PyObject *CPyPy_mypy___errors___Errors___sort_messages(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"errors", 0};
    static CPyArg_Parser parser = {"O:sort_messages", kwlist, 0};
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(PyList_Check(obj_errors)))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("list", obj_errors); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___errors___Errors___sort_messages(arg_self, arg_errors);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "sort_messages", 1072, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "__get__", -1, CPyStatic_mypy___errors___globals);
    return NULL;
}

CPyTagged CPyDef_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_x) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyTagged cpy_r_r2;
    cpy_r_r0 = ((mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/errors.py", "<lambda>", "__mypyc_lambda__2_sort_within_context_Errors_obj", "__mypyc_env__", 1121, CPyStatic_mypy___errors___globals);
        goto CPyL2;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL3;
CPyL1: ;
    cpy_r_r1 = ((mypy___errors___ErrorInfoObject *)cpy_r_x)->_priority;
    CPyTagged_INCREF(cpy_r_r1);
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = CPY_INT_TAG;
    return cpy_r_r2;
CPyL3: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"x", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_x;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_x)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_x;
    if (likely(Py_TYPE(obj_x) == CPyType_mypy___errors___ErrorInfo))
        arg_x = obj_x;
    else {
        CPy_TypeError("mypy.errors.ErrorInfo", obj_x); 
        goto fail;
    }
    CPyTagged retval = CPyDef_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj_____call__(arg___mypyc_self__, arg_x);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "<lambda>", 1121, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___Errors___sort_within_context(PyObject *cpy_r_self, PyObject *cpy_r_errors) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_result;
    CPyTagged cpy_r_i;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    int64_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    CPyTagged cpy_r_i0;
    CPyTagged cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    int64_t cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    int64_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    int64_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    int64_t cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    int64_t cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    CPyTagged cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    CPyTagged cpy_r_r70;
    CPyTagged cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject **cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_a;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    cpy_r_r0 = CPyDef_mypy___errors___sort_within_context_Errors_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1098, CPyStatic_mypy___errors___globals);
        goto CPyL55;
    }
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1104, CPyStatic_mypy___errors___globals);
        goto CPyL56;
    }
    cpy_r_result = cpy_r_r1;
    cpy_r_i = 0;
CPyL3: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_errors)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = cpy_r_i & 1;
    cpy_r_r6 = cpy_r_r5 != 0;
    if (!cpy_r_r6) goto CPyL5;
    cpy_r_r7 = CPyTagged_IsLt_(cpy_r_i, cpy_r_r4);
    if (cpy_r_r7) {
        goto CPyL6;
    } else
        goto CPyL57;
CPyL5: ;
    cpy_r_r8 = (Py_ssize_t)cpy_r_i < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r8) goto CPyL57;
CPyL6: ;
    CPyTagged_INCREF(cpy_r_i);
    cpy_r_i0 = cpy_r_i;
CPyL7: ;
    cpy_r_r9 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_errors)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = cpy_r_r9 & 1;
    cpy_r_r14 = cpy_r_r13 != 0;
    if (!cpy_r_r14) goto CPyL9;
    cpy_r_r15 = CPyTagged_IsLt_(cpy_r_r9, cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r9);
    if (cpy_r_r15) {
        goto CPyL10;
    } else
        goto CPyL46;
CPyL9: ;
    cpy_r_r16 = (Py_ssize_t)cpy_r_r9 < (Py_ssize_t)cpy_r_r12;
    CPyTagged_DECREF(cpy_r_r9);
    if (!cpy_r_r16) goto CPyL46;
CPyL10: ;
    cpy_r_r17 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r18 = CPyList_GetItemBorrow(cpy_r_errors, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1111, CPyStatic_mypy___errors___globals);
        goto CPyL58;
    }
    if (likely(Py_TYPE(cpy_r_r18) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_within_context", 1111, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r18);
        goto CPyL58;
    }
    cpy_r_r20 = ((mypy___errors___ErrorInfoObject *)cpy_r_r19)->_line;
    cpy_r_r21 = CPyList_GetItemBorrow(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1111, CPyStatic_mypy___errors___globals);
        goto CPyL58;
    }
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_within_context", 1111, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r21);
        goto CPyL58;
    }
    cpy_r_r23 = ((mypy___errors___ErrorInfoObject *)cpy_r_r22)->_line;
    cpy_r_r24 = cpy_r_r20 & 1;
    cpy_r_r25 = cpy_r_r24 != 0;
    CPyTagged_DECREF(cpy_r_r17);
    if (!cpy_r_r25) goto CPyL16;
    cpy_r_r26 = CPyTagged_IsEq_(cpy_r_r20, cpy_r_r23);
    if (cpy_r_r26) {
        goto CPyL17;
    } else
        goto CPyL46;
CPyL16: ;
    cpy_r_r27 = cpy_r_r20 == cpy_r_r23;
    if (!cpy_r_r27) goto CPyL46;
CPyL17: ;
    cpy_r_r28 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r29 = CPyList_GetItemBorrow(cpy_r_errors, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1112, CPyStatic_mypy___errors___globals);
        goto CPyL59;
    }
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_within_context", 1112, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r29);
        goto CPyL59;
    }
    cpy_r_r31 = ((mypy___errors___ErrorInfoObject *)cpy_r_r30)->_column;
    cpy_r_r32 = CPyList_GetItemBorrow(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1112, CPyStatic_mypy___errors___globals);
        goto CPyL59;
    }
    if (likely(Py_TYPE(cpy_r_r32) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_within_context", 1112, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r32);
        goto CPyL59;
    }
    cpy_r_r34 = ((mypy___errors___ErrorInfoObject *)cpy_r_r33)->_column;
    cpy_r_r35 = cpy_r_r31 & 1;
    cpy_r_r36 = cpy_r_r35 != 0;
    CPyTagged_DECREF(cpy_r_r28);
    if (!cpy_r_r36) goto CPyL23;
    cpy_r_r37 = CPyTagged_IsEq_(cpy_r_r31, cpy_r_r34);
    if (cpy_r_r37) {
        goto CPyL24;
    } else
        goto CPyL46;
CPyL23: ;
    cpy_r_r38 = cpy_r_r31 == cpy_r_r34;
    if (!cpy_r_r38) goto CPyL46;
CPyL24: ;
    cpy_r_r39 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r40 = CPyList_GetItemBorrow(cpy_r_errors, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1113, CPyStatic_mypy___errors___globals);
        goto CPyL60;
    }
    if (likely(Py_TYPE(cpy_r_r40) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_within_context", 1113, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r40);
        goto CPyL60;
    }
    cpy_r_r42 = ((mypy___errors___ErrorInfoObject *)cpy_r_r41)->_end_line;
    cpy_r_r43 = CPyList_GetItemBorrow(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1113, CPyStatic_mypy___errors___globals);
        goto CPyL60;
    }
    if (likely(Py_TYPE(cpy_r_r43) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_within_context", 1113, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r43);
        goto CPyL60;
    }
    cpy_r_r45 = ((mypy___errors___ErrorInfoObject *)cpy_r_r44)->_end_line;
    cpy_r_r46 = cpy_r_r42 & 1;
    cpy_r_r47 = cpy_r_r46 != 0;
    CPyTagged_DECREF(cpy_r_r39);
    if (!cpy_r_r47) goto CPyL30;
    cpy_r_r48 = CPyTagged_IsEq_(cpy_r_r42, cpy_r_r45);
    if (cpy_r_r48) {
        goto CPyL31;
    } else
        goto CPyL46;
CPyL30: ;
    cpy_r_r49 = cpy_r_r42 == cpy_r_r45;
    if (!cpy_r_r49) goto CPyL46;
CPyL31: ;
    cpy_r_r50 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r51 = CPyList_GetItemBorrow(cpy_r_errors, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1114, CPyStatic_mypy___errors___globals);
        goto CPyL61;
    }
    if (likely(Py_TYPE(cpy_r_r51) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_within_context", 1114, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r51);
        goto CPyL61;
    }
    cpy_r_r53 = ((mypy___errors___ErrorInfoObject *)cpy_r_r52)->_end_column;
    cpy_r_r54 = CPyList_GetItemBorrow(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1114, CPyStatic_mypy___errors___globals);
        goto CPyL61;
    }
    if (likely(Py_TYPE(cpy_r_r54) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_within_context", 1114, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r54);
        goto CPyL61;
    }
    cpy_r_r56 = ((mypy___errors___ErrorInfoObject *)cpy_r_r55)->_end_column;
    cpy_r_r57 = cpy_r_r53 & 1;
    cpy_r_r58 = cpy_r_r57 != 0;
    CPyTagged_DECREF(cpy_r_r50);
    if (!cpy_r_r58) goto CPyL37;
    cpy_r_r59 = CPyTagged_IsEq_(cpy_r_r53, cpy_r_r56);
    if (cpy_r_r59) {
        goto CPyL38;
    } else
        goto CPyL46;
CPyL37: ;
    cpy_r_r60 = cpy_r_r53 == cpy_r_r56;
    if (!cpy_r_r60) goto CPyL46;
CPyL38: ;
    cpy_r_r61 = CPyTagged_Add(cpy_r_i, 2);
    cpy_r_r62 = CPyList_GetItemBorrow(cpy_r_errors, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1115, CPyStatic_mypy___errors___globals);
        goto CPyL62;
    }
    if (likely(Py_TYPE(cpy_r_r62) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_within_context", 1115, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r62);
        goto CPyL62;
    }
    cpy_r_r64 = ((mypy___errors___ErrorInfoObject *)cpy_r_r63)->_code;
    CPy_INCREF(cpy_r_r64);
    CPyTagged_DECREF(cpy_r_r61);
    cpy_r_r65 = CPyList_GetItemBorrow(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1115, CPyStatic_mypy___errors___globals);
        goto CPyL63;
    }
    if (likely(Py_TYPE(cpy_r_r65) == CPyType_mypy___errors___ErrorInfo))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_within_context", 1115, CPyStatic_mypy___errors___globals, "mypy.errors.ErrorInfo", cpy_r_r65);
        goto CPyL63;
    }
    cpy_r_r67 = ((mypy___errors___ErrorInfoObject *)cpy_r_r66)->_code;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = PyObject_RichCompare(cpy_r_r64, cpy_r_r67, 2);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1115, CPyStatic_mypy___errors___globals);
        goto CPyL64;
    }
    if (unlikely(!PyBool_Check(cpy_r_r68))) {
        CPy_TypeError("bool", cpy_r_r68); cpy_r_r69 = 2;
    } else
        cpy_r_r69 = cpy_r_r68 == Py_True;
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1115, CPyStatic_mypy___errors___globals);
        goto CPyL64;
    }
    if (!cpy_r_r69) goto CPyL46;
    cpy_r_r70 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r70;
    goto CPyL7;
CPyL46: ;
    cpy_r_r71 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r71;
    cpy_r_r72 = CPyList_GetSlice(cpy_r_errors, cpy_r_i0, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i0);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1121, CPyStatic_mypy___errors___globals);
        goto CPyL65;
    }
    if (likely(PyList_Check(cpy_r_r72)))
        cpy_r_r73 = cpy_r_r72;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_within_context", 1121, CPyStatic_mypy___errors___globals, "list", cpy_r_r72);
        goto CPyL65;
    }
    cpy_r_r74 = CPyDef_mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_obj();
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1121, CPyStatic_mypy___errors___globals);
        goto CPyL66;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject *)cpy_r_r74)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject *)cpy_r_r74)->___mypyc_env__);
    }
    ((mypy___errors_____mypyc_lambda__2_sort_within_context_Errors_objObject *)cpy_r_r74)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r75 = 1;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1121, CPyStatic_mypy___errors___globals);
        goto CPyL67;
    }
    cpy_r_r76 = CPyModule_builtins;
    cpy_r_r77 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r78 = CPyObject_GetAttr(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1121, CPyStatic_mypy___errors___globals);
        goto CPyL67;
    }
    PyObject *cpy_r_r79[2] = {cpy_r_r73, cpy_r_r74};
    cpy_r_r80 = (PyObject **)&cpy_r_r79;
    cpy_r_r81 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r82 = _PyObject_Vectorcall(cpy_r_r78, cpy_r_r80, 1, cpy_r_r81);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1121, CPyStatic_mypy___errors___globals);
        goto CPyL67;
    }
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r74);
    if (likely(PyList_Check(cpy_r_r82)))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "sort_within_context", 1121, CPyStatic_mypy___errors___globals, "list", cpy_r_r82);
        goto CPyL65;
    }
    cpy_r_a = cpy_r_r83;
    cpy_r_r84 = CPyList_Extend(cpy_r_result, cpy_r_a);
    CPy_DECREF(cpy_r_a);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1122, CPyStatic_mypy___errors___globals);
        goto CPyL65;
    } else
        goto CPyL68;
CPyL54: ;
    return cpy_r_result;
CPyL55: ;
    cpy_r_r85 = NULL;
    return cpy_r_r85;
CPyL56: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL55;
CPyL57: ;
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL54;
CPyL58: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_i0);
    CPyTagged_DecRef(cpy_r_r17);
    goto CPyL55;
CPyL59: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_i0);
    CPyTagged_DecRef(cpy_r_r28);
    goto CPyL55;
CPyL60: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_i0);
    CPyTagged_DecRef(cpy_r_r39);
    goto CPyL55;
CPyL61: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_i0);
    CPyTagged_DecRef(cpy_r_r50);
    goto CPyL55;
CPyL62: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_i0);
    CPyTagged_DecRef(cpy_r_r61);
    goto CPyL55;
CPyL63: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_i0);
    CPy_DecRef(cpy_r_r64);
    goto CPyL55;
CPyL64: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_i0);
    goto CPyL55;
CPyL65: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL55;
CPyL66: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r73);
    goto CPyL55;
CPyL67: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_result);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r74);
    goto CPyL55;
CPyL68: ;
    CPy_DECREF(cpy_r_r84);
    goto CPyL3;
}

PyObject *CPyPy_mypy___errors___Errors___sort_within_context(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"errors", 0};
    static CPyArg_Parser parser = {"O:sort_within_context", kwlist, 0};
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(PyList_Check(obj_errors)))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("list", obj_errors); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___errors___Errors___sort_within_context(arg_self, arg_errors);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "sort_within_context", 1098, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___Errors___remove_duplicates(PyObject *cpy_r_self, PyObject *cpy_r_errors) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_res;
    CPyTagged cpy_r_i;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    int64_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_dup;
    char cpy_r_conflicts_notes;
    CPyTagged cpy_r_r8;
    CPyTagged cpy_r_j;
    PyObject *cpy_r_r9;
    tuple_T9OIIIIOOCO cpy_r_r10;
    char cpy_r_r11;
    int64_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    tuple_T9OIIIIOOCO cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    tuple_T9OIIIIOOCO cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    tuple_T9OIIIIOOCO cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject **cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    int64_t cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    tuple_T9OIIIIOOCO cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    tuple_T9OIIIIOOCO cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    tuple_T9OIIIIOOCO cpy_r_r54;
    CPyTagged cpy_r_r55;
    PyObject *cpy_r_r56;
    tuple_T9OIIIIOOCO cpy_r_r57;
    CPyTagged cpy_r_r58;
    int64_t cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    tuple_T9OIIIIOOCO cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    tuple_T9OIIIIOOCO cpy_r_r67;
    PyObject *cpy_r_r68;
    int32_t cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    tuple_T9OIIIIOOCO cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    int32_t cpy_r_r79;
    char cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    tuple_T9OIIIIOOCO cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject **cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    int32_t cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    tuple_T9OIIIIOOCO cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject **cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    tuple_T9OIIIIOOCO cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    tuple_T9OIIIIOOCO cpy_r_r112;
    PyObject *cpy_r_r113;
    int32_t cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    char cpy_r_r117;
    char cpy_r_r118;
    char cpy_r_r119;
    CPyTagged cpy_r_r120;
    PyObject *cpy_r_r121;
    tuple_T9OIIIIOOCO cpy_r_r122;
    PyObject *cpy_r_r123;
    int32_t cpy_r_r124;
    char cpy_r_r125;
    CPyTagged cpy_r_r126;
    PyObject *cpy_r_r127;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1127, CPyStatic_mypy___errors___globals);
        goto CPyL91;
    }
    cpy_r_res = cpy_r_r0;
    cpy_r_i = 0;
CPyL2: ;
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_errors)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_i & 1;
    cpy_r_r5 = cpy_r_r4 != 0;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = CPyTagged_IsLt_(cpy_r_i, cpy_r_r3);
    if (cpy_r_r6) {
        goto CPyL5;
    } else
        goto CPyL92;
CPyL4: ;
    cpy_r_r7 = (Py_ssize_t)cpy_r_i < (Py_ssize_t)cpy_r_r3;
    if (!cpy_r_r7) goto CPyL92;
CPyL5: ;
    cpy_r_dup = 0;
    cpy_r_conflicts_notes = 0;
    cpy_r_r8 = CPyTagged_Subtract(cpy_r_i, 2);
    cpy_r_j = cpy_r_r8;
    cpy_r_r9 = CPyList_GetItem(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1135, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    PyObject *__tmp2210;
    if (unlikely(!(PyTuple_Check(cpy_r_r9) && PyTuple_GET_SIZE(cpy_r_r9) == 9))) {
        __tmp2210 = NULL;
        goto __LL2211;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r9, 0)))
        __tmp2210 = PyTuple_GET_ITEM(cpy_r_r9, 0);
    else {
        __tmp2210 = NULL;
    }
    if (__tmp2210 != NULL) goto __LL2212;
    if (PyTuple_GET_ITEM(cpy_r_r9, 0) == Py_None)
        __tmp2210 = PyTuple_GET_ITEM(cpy_r_r9, 0);
    else {
        __tmp2210 = NULL;
    }
    if (__tmp2210 != NULL) goto __LL2212;
    __tmp2210 = NULL;
__LL2212: ;
    if (__tmp2210 == NULL) goto __LL2211;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r9, 1))))
        __tmp2210 = PyTuple_GET_ITEM(cpy_r_r9, 1);
    else {
        __tmp2210 = NULL;
    }
    if (__tmp2210 == NULL) goto __LL2211;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r9, 2))))
        __tmp2210 = PyTuple_GET_ITEM(cpy_r_r9, 2);
    else {
        __tmp2210 = NULL;
    }
    if (__tmp2210 == NULL) goto __LL2211;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r9, 3))))
        __tmp2210 = PyTuple_GET_ITEM(cpy_r_r9, 3);
    else {
        __tmp2210 = NULL;
    }
    if (__tmp2210 == NULL) goto __LL2211;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r9, 4))))
        __tmp2210 = PyTuple_GET_ITEM(cpy_r_r9, 4);
    else {
        __tmp2210 = NULL;
    }
    if (__tmp2210 == NULL) goto __LL2211;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r9, 5))))
        __tmp2210 = PyTuple_GET_ITEM(cpy_r_r9, 5);
    else {
        __tmp2210 = NULL;
    }
    if (__tmp2210 == NULL) goto __LL2211;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r9, 6))))
        __tmp2210 = PyTuple_GET_ITEM(cpy_r_r9, 6);
    else {
        __tmp2210 = NULL;
    }
    if (__tmp2210 == NULL) goto __LL2211;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r9, 7))))
        __tmp2210 = PyTuple_GET_ITEM(cpy_r_r9, 7);
    else {
        __tmp2210 = NULL;
    }
    if (__tmp2210 == NULL) goto __LL2211;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r9, 8), CPyType_errorcodes___ErrorCode))
        __tmp2210 = PyTuple_GET_ITEM(cpy_r_r9, 8);
    else {
        __tmp2210 = NULL;
    }
    if (__tmp2210 != NULL) goto __LL2213;
    if (PyTuple_GET_ITEM(cpy_r_r9, 8) == Py_None)
        __tmp2210 = PyTuple_GET_ITEM(cpy_r_r9, 8);
    else {
        __tmp2210 = NULL;
    }
    if (__tmp2210 != NULL) goto __LL2213;
    __tmp2210 = NULL;
__LL2213: ;
    if (__tmp2210 == NULL) goto __LL2211;
    __tmp2210 = cpy_r_r9;
__LL2211: ;
    if (unlikely(__tmp2210 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r9); cpy_r_r10 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2214 = PyTuple_GET_ITEM(cpy_r_r9, 0);
        CPy_INCREF(__tmp2214);
        PyObject *__tmp2215;
        if (PyUnicode_Check(__tmp2214))
            __tmp2215 = __tmp2214;
        else {
            __tmp2215 = NULL;
        }
        if (__tmp2215 != NULL) goto __LL2216;
        if (__tmp2214 == Py_None)
            __tmp2215 = __tmp2214;
        else {
            __tmp2215 = NULL;
        }
        if (__tmp2215 != NULL) goto __LL2216;
        CPy_TypeError("str or None", __tmp2214); 
        __tmp2215 = NULL;
__LL2216: ;
        cpy_r_r10.f0 = __tmp2215;
        PyObject *__tmp2217 = PyTuple_GET_ITEM(cpy_r_r9, 1);
        CPyTagged __tmp2218;
        if (likely(PyLong_Check(__tmp2217)))
            __tmp2218 = CPyTagged_FromObject(__tmp2217);
        else {
            CPy_TypeError("int", __tmp2217); __tmp2218 = CPY_INT_TAG;
        }
        cpy_r_r10.f1 = __tmp2218;
        PyObject *__tmp2219 = PyTuple_GET_ITEM(cpy_r_r9, 2);
        CPyTagged __tmp2220;
        if (likely(PyLong_Check(__tmp2219)))
            __tmp2220 = CPyTagged_FromObject(__tmp2219);
        else {
            CPy_TypeError("int", __tmp2219); __tmp2220 = CPY_INT_TAG;
        }
        cpy_r_r10.f2 = __tmp2220;
        PyObject *__tmp2221 = PyTuple_GET_ITEM(cpy_r_r9, 3);
        CPyTagged __tmp2222;
        if (likely(PyLong_Check(__tmp2221)))
            __tmp2222 = CPyTagged_FromObject(__tmp2221);
        else {
            CPy_TypeError("int", __tmp2221); __tmp2222 = CPY_INT_TAG;
        }
        cpy_r_r10.f3 = __tmp2222;
        PyObject *__tmp2223 = PyTuple_GET_ITEM(cpy_r_r9, 4);
        CPyTagged __tmp2224;
        if (likely(PyLong_Check(__tmp2223)))
            __tmp2224 = CPyTagged_FromObject(__tmp2223);
        else {
            CPy_TypeError("int", __tmp2223); __tmp2224 = CPY_INT_TAG;
        }
        cpy_r_r10.f4 = __tmp2224;
        PyObject *__tmp2225 = PyTuple_GET_ITEM(cpy_r_r9, 5);
        CPy_INCREF(__tmp2225);
        PyObject *__tmp2226;
        if (likely(PyUnicode_Check(__tmp2225)))
            __tmp2226 = __tmp2225;
        else {
            CPy_TypeError("str", __tmp2225); 
            __tmp2226 = NULL;
        }
        cpy_r_r10.f5 = __tmp2226;
        PyObject *__tmp2227 = PyTuple_GET_ITEM(cpy_r_r9, 6);
        CPy_INCREF(__tmp2227);
        PyObject *__tmp2228;
        if (likely(PyUnicode_Check(__tmp2227)))
            __tmp2228 = __tmp2227;
        else {
            CPy_TypeError("str", __tmp2227); 
            __tmp2228 = NULL;
        }
        cpy_r_r10.f6 = __tmp2228;
        PyObject *__tmp2229 = PyTuple_GET_ITEM(cpy_r_r9, 7);
        char __tmp2230;
        if (unlikely(!PyBool_Check(__tmp2229))) {
            CPy_TypeError("bool", __tmp2229); __tmp2230 = 2;
        } else
            __tmp2230 = __tmp2229 == Py_True;
        cpy_r_r10.f7 = __tmp2230;
        PyObject *__tmp2231 = PyTuple_GET_ITEM(cpy_r_r9, 8);
        CPy_INCREF(__tmp2231);
        PyObject *__tmp2232;
        if (PyObject_TypeCheck(__tmp2231, CPyType_errorcodes___ErrorCode))
            __tmp2232 = __tmp2231;
        else {
            __tmp2232 = NULL;
        }
        if (__tmp2232 != NULL) goto __LL2233;
        if (__tmp2231 == Py_None)
            __tmp2232 = __tmp2231;
        else {
            __tmp2232 = NULL;
        }
        if (__tmp2232 != NULL) goto __LL2233;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2231); 
        __tmp2232 = NULL;
__LL2233: ;
        cpy_r_r10.f8 = __tmp2232;
    }
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1135, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    cpy_r_r11 = cpy_r_r10.f7;
    CPy_DECREF(cpy_r_r10.f0);
    CPyTagged_DECREF(cpy_r_r10.f1);
    CPyTagged_DECREF(cpy_r_r10.f2);
    CPyTagged_DECREF(cpy_r_r10.f3);
    CPyTagged_DECREF(cpy_r_r10.f4);
    CPy_DECREF(cpy_r_r10.f5);
    CPy_DECREF(cpy_r_r10.f6);
    CPy_DECREF(cpy_r_r10.f8);
    if (cpy_r_r11) goto CPyL94;
CPyL8: ;
    cpy_r_r12 = cpy_r_j & 1;
    cpy_r_r13 = cpy_r_r12 != 0;
    if (!cpy_r_r13) goto CPyL10;
    cpy_r_r14 = CPyTagged_IsLt_(cpy_r_j, 0);
    if (cpy_r_r14) {
        goto CPyL95;
    } else
        goto CPyL11;
CPyL10: ;
    cpy_r_r15 = (Py_ssize_t)cpy_r_j >= (Py_ssize_t)0;
    if (!cpy_r_r15) goto CPyL95;
CPyL11: ;
    cpy_r_r16 = CPyList_GetItem(cpy_r_errors, cpy_r_j);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1136, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    PyObject *__tmp2234;
    if (unlikely(!(PyTuple_Check(cpy_r_r16) && PyTuple_GET_SIZE(cpy_r_r16) == 9))) {
        __tmp2234 = NULL;
        goto __LL2235;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r16, 0)))
        __tmp2234 = PyTuple_GET_ITEM(cpy_r_r16, 0);
    else {
        __tmp2234 = NULL;
    }
    if (__tmp2234 != NULL) goto __LL2236;
    if (PyTuple_GET_ITEM(cpy_r_r16, 0) == Py_None)
        __tmp2234 = PyTuple_GET_ITEM(cpy_r_r16, 0);
    else {
        __tmp2234 = NULL;
    }
    if (__tmp2234 != NULL) goto __LL2236;
    __tmp2234 = NULL;
__LL2236: ;
    if (__tmp2234 == NULL) goto __LL2235;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r16, 1))))
        __tmp2234 = PyTuple_GET_ITEM(cpy_r_r16, 1);
    else {
        __tmp2234 = NULL;
    }
    if (__tmp2234 == NULL) goto __LL2235;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r16, 2))))
        __tmp2234 = PyTuple_GET_ITEM(cpy_r_r16, 2);
    else {
        __tmp2234 = NULL;
    }
    if (__tmp2234 == NULL) goto __LL2235;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r16, 3))))
        __tmp2234 = PyTuple_GET_ITEM(cpy_r_r16, 3);
    else {
        __tmp2234 = NULL;
    }
    if (__tmp2234 == NULL) goto __LL2235;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r16, 4))))
        __tmp2234 = PyTuple_GET_ITEM(cpy_r_r16, 4);
    else {
        __tmp2234 = NULL;
    }
    if (__tmp2234 == NULL) goto __LL2235;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r16, 5))))
        __tmp2234 = PyTuple_GET_ITEM(cpy_r_r16, 5);
    else {
        __tmp2234 = NULL;
    }
    if (__tmp2234 == NULL) goto __LL2235;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r16, 6))))
        __tmp2234 = PyTuple_GET_ITEM(cpy_r_r16, 6);
    else {
        __tmp2234 = NULL;
    }
    if (__tmp2234 == NULL) goto __LL2235;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r16, 7))))
        __tmp2234 = PyTuple_GET_ITEM(cpy_r_r16, 7);
    else {
        __tmp2234 = NULL;
    }
    if (__tmp2234 == NULL) goto __LL2235;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r16, 8), CPyType_errorcodes___ErrorCode))
        __tmp2234 = PyTuple_GET_ITEM(cpy_r_r16, 8);
    else {
        __tmp2234 = NULL;
    }
    if (__tmp2234 != NULL) goto __LL2237;
    if (PyTuple_GET_ITEM(cpy_r_r16, 8) == Py_None)
        __tmp2234 = PyTuple_GET_ITEM(cpy_r_r16, 8);
    else {
        __tmp2234 = NULL;
    }
    if (__tmp2234 != NULL) goto __LL2237;
    __tmp2234 = NULL;
__LL2237: ;
    if (__tmp2234 == NULL) goto __LL2235;
    __tmp2234 = cpy_r_r16;
__LL2235: ;
    if (unlikely(__tmp2234 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r16); cpy_r_r17 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2238 = PyTuple_GET_ITEM(cpy_r_r16, 0);
        CPy_INCREF(__tmp2238);
        PyObject *__tmp2239;
        if (PyUnicode_Check(__tmp2238))
            __tmp2239 = __tmp2238;
        else {
            __tmp2239 = NULL;
        }
        if (__tmp2239 != NULL) goto __LL2240;
        if (__tmp2238 == Py_None)
            __tmp2239 = __tmp2238;
        else {
            __tmp2239 = NULL;
        }
        if (__tmp2239 != NULL) goto __LL2240;
        CPy_TypeError("str or None", __tmp2238); 
        __tmp2239 = NULL;
__LL2240: ;
        cpy_r_r17.f0 = __tmp2239;
        PyObject *__tmp2241 = PyTuple_GET_ITEM(cpy_r_r16, 1);
        CPyTagged __tmp2242;
        if (likely(PyLong_Check(__tmp2241)))
            __tmp2242 = CPyTagged_FromObject(__tmp2241);
        else {
            CPy_TypeError("int", __tmp2241); __tmp2242 = CPY_INT_TAG;
        }
        cpy_r_r17.f1 = __tmp2242;
        PyObject *__tmp2243 = PyTuple_GET_ITEM(cpy_r_r16, 2);
        CPyTagged __tmp2244;
        if (likely(PyLong_Check(__tmp2243)))
            __tmp2244 = CPyTagged_FromObject(__tmp2243);
        else {
            CPy_TypeError("int", __tmp2243); __tmp2244 = CPY_INT_TAG;
        }
        cpy_r_r17.f2 = __tmp2244;
        PyObject *__tmp2245 = PyTuple_GET_ITEM(cpy_r_r16, 3);
        CPyTagged __tmp2246;
        if (likely(PyLong_Check(__tmp2245)))
            __tmp2246 = CPyTagged_FromObject(__tmp2245);
        else {
            CPy_TypeError("int", __tmp2245); __tmp2246 = CPY_INT_TAG;
        }
        cpy_r_r17.f3 = __tmp2246;
        PyObject *__tmp2247 = PyTuple_GET_ITEM(cpy_r_r16, 4);
        CPyTagged __tmp2248;
        if (likely(PyLong_Check(__tmp2247)))
            __tmp2248 = CPyTagged_FromObject(__tmp2247);
        else {
            CPy_TypeError("int", __tmp2247); __tmp2248 = CPY_INT_TAG;
        }
        cpy_r_r17.f4 = __tmp2248;
        PyObject *__tmp2249 = PyTuple_GET_ITEM(cpy_r_r16, 5);
        CPy_INCREF(__tmp2249);
        PyObject *__tmp2250;
        if (likely(PyUnicode_Check(__tmp2249)))
            __tmp2250 = __tmp2249;
        else {
            CPy_TypeError("str", __tmp2249); 
            __tmp2250 = NULL;
        }
        cpy_r_r17.f5 = __tmp2250;
        PyObject *__tmp2251 = PyTuple_GET_ITEM(cpy_r_r16, 6);
        CPy_INCREF(__tmp2251);
        PyObject *__tmp2252;
        if (likely(PyUnicode_Check(__tmp2251)))
            __tmp2252 = __tmp2251;
        else {
            CPy_TypeError("str", __tmp2251); 
            __tmp2252 = NULL;
        }
        cpy_r_r17.f6 = __tmp2252;
        PyObject *__tmp2253 = PyTuple_GET_ITEM(cpy_r_r16, 7);
        char __tmp2254;
        if (unlikely(!PyBool_Check(__tmp2253))) {
            CPy_TypeError("bool", __tmp2253); __tmp2254 = 2;
        } else
            __tmp2254 = __tmp2253 == Py_True;
        cpy_r_r17.f7 = __tmp2254;
        PyObject *__tmp2255 = PyTuple_GET_ITEM(cpy_r_r16, 8);
        CPy_INCREF(__tmp2255);
        PyObject *__tmp2256;
        if (PyObject_TypeCheck(__tmp2255, CPyType_errorcodes___ErrorCode))
            __tmp2256 = __tmp2255;
        else {
            __tmp2256 = NULL;
        }
        if (__tmp2256 != NULL) goto __LL2257;
        if (__tmp2255 == Py_None)
            __tmp2256 = __tmp2255;
        else {
            __tmp2256 = NULL;
        }
        if (__tmp2256 != NULL) goto __LL2257;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2255); 
        __tmp2256 = NULL;
__LL2257: ;
        cpy_r_r17.f8 = __tmp2256;
    }
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1136, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    cpy_r_r18 = cpy_r_r17.f0;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r17.f0);
    CPyTagged_DECREF(cpy_r_r17.f1);
    CPyTagged_DECREF(cpy_r_r17.f2);
    CPyTagged_DECREF(cpy_r_r17.f3);
    CPyTagged_DECREF(cpy_r_r17.f4);
    CPy_DECREF(cpy_r_r17.f5);
    CPy_DECREF(cpy_r_r17.f6);
    CPy_DECREF(cpy_r_r17.f8);
    cpy_r_r19 = CPyList_GetItem(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1136, CPyStatic_mypy___errors___globals);
        goto CPyL96;
    }
    PyObject *__tmp2258;
    if (unlikely(!(PyTuple_Check(cpy_r_r19) && PyTuple_GET_SIZE(cpy_r_r19) == 9))) {
        __tmp2258 = NULL;
        goto __LL2259;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r19, 0)))
        __tmp2258 = PyTuple_GET_ITEM(cpy_r_r19, 0);
    else {
        __tmp2258 = NULL;
    }
    if (__tmp2258 != NULL) goto __LL2260;
    if (PyTuple_GET_ITEM(cpy_r_r19, 0) == Py_None)
        __tmp2258 = PyTuple_GET_ITEM(cpy_r_r19, 0);
    else {
        __tmp2258 = NULL;
    }
    if (__tmp2258 != NULL) goto __LL2260;
    __tmp2258 = NULL;
__LL2260: ;
    if (__tmp2258 == NULL) goto __LL2259;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r19, 1))))
        __tmp2258 = PyTuple_GET_ITEM(cpy_r_r19, 1);
    else {
        __tmp2258 = NULL;
    }
    if (__tmp2258 == NULL) goto __LL2259;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r19, 2))))
        __tmp2258 = PyTuple_GET_ITEM(cpy_r_r19, 2);
    else {
        __tmp2258 = NULL;
    }
    if (__tmp2258 == NULL) goto __LL2259;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r19, 3))))
        __tmp2258 = PyTuple_GET_ITEM(cpy_r_r19, 3);
    else {
        __tmp2258 = NULL;
    }
    if (__tmp2258 == NULL) goto __LL2259;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r19, 4))))
        __tmp2258 = PyTuple_GET_ITEM(cpy_r_r19, 4);
    else {
        __tmp2258 = NULL;
    }
    if (__tmp2258 == NULL) goto __LL2259;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r19, 5))))
        __tmp2258 = PyTuple_GET_ITEM(cpy_r_r19, 5);
    else {
        __tmp2258 = NULL;
    }
    if (__tmp2258 == NULL) goto __LL2259;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r19, 6))))
        __tmp2258 = PyTuple_GET_ITEM(cpy_r_r19, 6);
    else {
        __tmp2258 = NULL;
    }
    if (__tmp2258 == NULL) goto __LL2259;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r19, 7))))
        __tmp2258 = PyTuple_GET_ITEM(cpy_r_r19, 7);
    else {
        __tmp2258 = NULL;
    }
    if (__tmp2258 == NULL) goto __LL2259;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r19, 8), CPyType_errorcodes___ErrorCode))
        __tmp2258 = PyTuple_GET_ITEM(cpy_r_r19, 8);
    else {
        __tmp2258 = NULL;
    }
    if (__tmp2258 != NULL) goto __LL2261;
    if (PyTuple_GET_ITEM(cpy_r_r19, 8) == Py_None)
        __tmp2258 = PyTuple_GET_ITEM(cpy_r_r19, 8);
    else {
        __tmp2258 = NULL;
    }
    if (__tmp2258 != NULL) goto __LL2261;
    __tmp2258 = NULL;
__LL2261: ;
    if (__tmp2258 == NULL) goto __LL2259;
    __tmp2258 = cpy_r_r19;
__LL2259: ;
    if (unlikely(__tmp2258 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r19); cpy_r_r20 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2262 = PyTuple_GET_ITEM(cpy_r_r19, 0);
        CPy_INCREF(__tmp2262);
        PyObject *__tmp2263;
        if (PyUnicode_Check(__tmp2262))
            __tmp2263 = __tmp2262;
        else {
            __tmp2263 = NULL;
        }
        if (__tmp2263 != NULL) goto __LL2264;
        if (__tmp2262 == Py_None)
            __tmp2263 = __tmp2262;
        else {
            __tmp2263 = NULL;
        }
        if (__tmp2263 != NULL) goto __LL2264;
        CPy_TypeError("str or None", __tmp2262); 
        __tmp2263 = NULL;
__LL2264: ;
        cpy_r_r20.f0 = __tmp2263;
        PyObject *__tmp2265 = PyTuple_GET_ITEM(cpy_r_r19, 1);
        CPyTagged __tmp2266;
        if (likely(PyLong_Check(__tmp2265)))
            __tmp2266 = CPyTagged_FromObject(__tmp2265);
        else {
            CPy_TypeError("int", __tmp2265); __tmp2266 = CPY_INT_TAG;
        }
        cpy_r_r20.f1 = __tmp2266;
        PyObject *__tmp2267 = PyTuple_GET_ITEM(cpy_r_r19, 2);
        CPyTagged __tmp2268;
        if (likely(PyLong_Check(__tmp2267)))
            __tmp2268 = CPyTagged_FromObject(__tmp2267);
        else {
            CPy_TypeError("int", __tmp2267); __tmp2268 = CPY_INT_TAG;
        }
        cpy_r_r20.f2 = __tmp2268;
        PyObject *__tmp2269 = PyTuple_GET_ITEM(cpy_r_r19, 3);
        CPyTagged __tmp2270;
        if (likely(PyLong_Check(__tmp2269)))
            __tmp2270 = CPyTagged_FromObject(__tmp2269);
        else {
            CPy_TypeError("int", __tmp2269); __tmp2270 = CPY_INT_TAG;
        }
        cpy_r_r20.f3 = __tmp2270;
        PyObject *__tmp2271 = PyTuple_GET_ITEM(cpy_r_r19, 4);
        CPyTagged __tmp2272;
        if (likely(PyLong_Check(__tmp2271)))
            __tmp2272 = CPyTagged_FromObject(__tmp2271);
        else {
            CPy_TypeError("int", __tmp2271); __tmp2272 = CPY_INT_TAG;
        }
        cpy_r_r20.f4 = __tmp2272;
        PyObject *__tmp2273 = PyTuple_GET_ITEM(cpy_r_r19, 5);
        CPy_INCREF(__tmp2273);
        PyObject *__tmp2274;
        if (likely(PyUnicode_Check(__tmp2273)))
            __tmp2274 = __tmp2273;
        else {
            CPy_TypeError("str", __tmp2273); 
            __tmp2274 = NULL;
        }
        cpy_r_r20.f5 = __tmp2274;
        PyObject *__tmp2275 = PyTuple_GET_ITEM(cpy_r_r19, 6);
        CPy_INCREF(__tmp2275);
        PyObject *__tmp2276;
        if (likely(PyUnicode_Check(__tmp2275)))
            __tmp2276 = __tmp2275;
        else {
            CPy_TypeError("str", __tmp2275); 
            __tmp2276 = NULL;
        }
        cpy_r_r20.f6 = __tmp2276;
        PyObject *__tmp2277 = PyTuple_GET_ITEM(cpy_r_r19, 7);
        char __tmp2278;
        if (unlikely(!PyBool_Check(__tmp2277))) {
            CPy_TypeError("bool", __tmp2277); __tmp2278 = 2;
        } else
            __tmp2278 = __tmp2277 == Py_True;
        cpy_r_r20.f7 = __tmp2278;
        PyObject *__tmp2279 = PyTuple_GET_ITEM(cpy_r_r19, 8);
        CPy_INCREF(__tmp2279);
        PyObject *__tmp2280;
        if (PyObject_TypeCheck(__tmp2279, CPyType_errorcodes___ErrorCode))
            __tmp2280 = __tmp2279;
        else {
            __tmp2280 = NULL;
        }
        if (__tmp2280 != NULL) goto __LL2281;
        if (__tmp2279 == Py_None)
            __tmp2280 = __tmp2279;
        else {
            __tmp2280 = NULL;
        }
        if (__tmp2280 != NULL) goto __LL2281;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2279); 
        __tmp2280 = NULL;
__LL2281: ;
        cpy_r_r20.f8 = __tmp2280;
    }
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1136, CPyStatic_mypy___errors___globals);
        goto CPyL96;
    }
    cpy_r_r21 = cpy_r_r20.f0;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r20.f0);
    CPyTagged_DECREF(cpy_r_r20.f1);
    CPyTagged_DECREF(cpy_r_r20.f2);
    CPyTagged_DECREF(cpy_r_r20.f3);
    CPyTagged_DECREF(cpy_r_r20.f4);
    CPy_DECREF(cpy_r_r20.f5);
    CPy_DECREF(cpy_r_r20.f6);
    CPy_DECREF(cpy_r_r20.f8);
    cpy_r_r22 = PyObject_RichCompare(cpy_r_r18, cpy_r_r21, 2);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1136, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    if (unlikely(!PyBool_Check(cpy_r_r22))) {
        CPy_TypeError("bool", cpy_r_r22); cpy_r_r23 = 2;
    } else
        cpy_r_r23 = cpy_r_r22 == Py_True;
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1136, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    if (!cpy_r_r23) goto CPyL95;
    cpy_r_r24 = CPyList_GetItem(cpy_r_errors, cpy_r_j);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1137, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    PyObject *__tmp2282;
    if (unlikely(!(PyTuple_Check(cpy_r_r24) && PyTuple_GET_SIZE(cpy_r_r24) == 9))) {
        __tmp2282 = NULL;
        goto __LL2283;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r24, 0)))
        __tmp2282 = PyTuple_GET_ITEM(cpy_r_r24, 0);
    else {
        __tmp2282 = NULL;
    }
    if (__tmp2282 != NULL) goto __LL2284;
    if (PyTuple_GET_ITEM(cpy_r_r24, 0) == Py_None)
        __tmp2282 = PyTuple_GET_ITEM(cpy_r_r24, 0);
    else {
        __tmp2282 = NULL;
    }
    if (__tmp2282 != NULL) goto __LL2284;
    __tmp2282 = NULL;
__LL2284: ;
    if (__tmp2282 == NULL) goto __LL2283;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r24, 1))))
        __tmp2282 = PyTuple_GET_ITEM(cpy_r_r24, 1);
    else {
        __tmp2282 = NULL;
    }
    if (__tmp2282 == NULL) goto __LL2283;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r24, 2))))
        __tmp2282 = PyTuple_GET_ITEM(cpy_r_r24, 2);
    else {
        __tmp2282 = NULL;
    }
    if (__tmp2282 == NULL) goto __LL2283;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r24, 3))))
        __tmp2282 = PyTuple_GET_ITEM(cpy_r_r24, 3);
    else {
        __tmp2282 = NULL;
    }
    if (__tmp2282 == NULL) goto __LL2283;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r24, 4))))
        __tmp2282 = PyTuple_GET_ITEM(cpy_r_r24, 4);
    else {
        __tmp2282 = NULL;
    }
    if (__tmp2282 == NULL) goto __LL2283;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r24, 5))))
        __tmp2282 = PyTuple_GET_ITEM(cpy_r_r24, 5);
    else {
        __tmp2282 = NULL;
    }
    if (__tmp2282 == NULL) goto __LL2283;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r24, 6))))
        __tmp2282 = PyTuple_GET_ITEM(cpy_r_r24, 6);
    else {
        __tmp2282 = NULL;
    }
    if (__tmp2282 == NULL) goto __LL2283;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r24, 7))))
        __tmp2282 = PyTuple_GET_ITEM(cpy_r_r24, 7);
    else {
        __tmp2282 = NULL;
    }
    if (__tmp2282 == NULL) goto __LL2283;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r24, 8), CPyType_errorcodes___ErrorCode))
        __tmp2282 = PyTuple_GET_ITEM(cpy_r_r24, 8);
    else {
        __tmp2282 = NULL;
    }
    if (__tmp2282 != NULL) goto __LL2285;
    if (PyTuple_GET_ITEM(cpy_r_r24, 8) == Py_None)
        __tmp2282 = PyTuple_GET_ITEM(cpy_r_r24, 8);
    else {
        __tmp2282 = NULL;
    }
    if (__tmp2282 != NULL) goto __LL2285;
    __tmp2282 = NULL;
__LL2285: ;
    if (__tmp2282 == NULL) goto __LL2283;
    __tmp2282 = cpy_r_r24;
__LL2283: ;
    if (unlikely(__tmp2282 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r24); cpy_r_r25 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2286 = PyTuple_GET_ITEM(cpy_r_r24, 0);
        CPy_INCREF(__tmp2286);
        PyObject *__tmp2287;
        if (PyUnicode_Check(__tmp2286))
            __tmp2287 = __tmp2286;
        else {
            __tmp2287 = NULL;
        }
        if (__tmp2287 != NULL) goto __LL2288;
        if (__tmp2286 == Py_None)
            __tmp2287 = __tmp2286;
        else {
            __tmp2287 = NULL;
        }
        if (__tmp2287 != NULL) goto __LL2288;
        CPy_TypeError("str or None", __tmp2286); 
        __tmp2287 = NULL;
__LL2288: ;
        cpy_r_r25.f0 = __tmp2287;
        PyObject *__tmp2289 = PyTuple_GET_ITEM(cpy_r_r24, 1);
        CPyTagged __tmp2290;
        if (likely(PyLong_Check(__tmp2289)))
            __tmp2290 = CPyTagged_FromObject(__tmp2289);
        else {
            CPy_TypeError("int", __tmp2289); __tmp2290 = CPY_INT_TAG;
        }
        cpy_r_r25.f1 = __tmp2290;
        PyObject *__tmp2291 = PyTuple_GET_ITEM(cpy_r_r24, 2);
        CPyTagged __tmp2292;
        if (likely(PyLong_Check(__tmp2291)))
            __tmp2292 = CPyTagged_FromObject(__tmp2291);
        else {
            CPy_TypeError("int", __tmp2291); __tmp2292 = CPY_INT_TAG;
        }
        cpy_r_r25.f2 = __tmp2292;
        PyObject *__tmp2293 = PyTuple_GET_ITEM(cpy_r_r24, 3);
        CPyTagged __tmp2294;
        if (likely(PyLong_Check(__tmp2293)))
            __tmp2294 = CPyTagged_FromObject(__tmp2293);
        else {
            CPy_TypeError("int", __tmp2293); __tmp2294 = CPY_INT_TAG;
        }
        cpy_r_r25.f3 = __tmp2294;
        PyObject *__tmp2295 = PyTuple_GET_ITEM(cpy_r_r24, 4);
        CPyTagged __tmp2296;
        if (likely(PyLong_Check(__tmp2295)))
            __tmp2296 = CPyTagged_FromObject(__tmp2295);
        else {
            CPy_TypeError("int", __tmp2295); __tmp2296 = CPY_INT_TAG;
        }
        cpy_r_r25.f4 = __tmp2296;
        PyObject *__tmp2297 = PyTuple_GET_ITEM(cpy_r_r24, 5);
        CPy_INCREF(__tmp2297);
        PyObject *__tmp2298;
        if (likely(PyUnicode_Check(__tmp2297)))
            __tmp2298 = __tmp2297;
        else {
            CPy_TypeError("str", __tmp2297); 
            __tmp2298 = NULL;
        }
        cpy_r_r25.f5 = __tmp2298;
        PyObject *__tmp2299 = PyTuple_GET_ITEM(cpy_r_r24, 6);
        CPy_INCREF(__tmp2299);
        PyObject *__tmp2300;
        if (likely(PyUnicode_Check(__tmp2299)))
            __tmp2300 = __tmp2299;
        else {
            CPy_TypeError("str", __tmp2299); 
            __tmp2300 = NULL;
        }
        cpy_r_r25.f6 = __tmp2300;
        PyObject *__tmp2301 = PyTuple_GET_ITEM(cpy_r_r24, 7);
        char __tmp2302;
        if (unlikely(!PyBool_Check(__tmp2301))) {
            CPy_TypeError("bool", __tmp2301); __tmp2302 = 2;
        } else
            __tmp2302 = __tmp2301 == Py_True;
        cpy_r_r25.f7 = __tmp2302;
        PyObject *__tmp2303 = PyTuple_GET_ITEM(cpy_r_r24, 8);
        CPy_INCREF(__tmp2303);
        PyObject *__tmp2304;
        if (PyObject_TypeCheck(__tmp2303, CPyType_errorcodes___ErrorCode))
            __tmp2304 = __tmp2303;
        else {
            __tmp2304 = NULL;
        }
        if (__tmp2304 != NULL) goto __LL2305;
        if (__tmp2303 == Py_None)
            __tmp2304 = __tmp2303;
        else {
            __tmp2304 = NULL;
        }
        if (__tmp2304 != NULL) goto __LL2305;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2303); 
        __tmp2304 = NULL;
__LL2305: ;
        cpy_r_r25.f8 = __tmp2304;
    }
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1137, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    cpy_r_r26 = cpy_r_r25.f6;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r25.f0);
    CPyTagged_DECREF(cpy_r_r25.f1);
    CPyTagged_DECREF(cpy_r_r25.f2);
    CPyTagged_DECREF(cpy_r_r25.f3);
    CPyTagged_DECREF(cpy_r_r25.f4);
    CPy_DECREF(cpy_r_r25.f5);
    CPy_DECREF(cpy_r_r25.f6);
    CPy_DECREF(cpy_r_r25.f8);
    cpy_r_r27 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r28[1] = {cpy_r_r26};
    cpy_r_r29 = (PyObject **)&cpy_r_r28;
    cpy_r_r30 = PyObject_VectorcallMethod(cpy_r_r27, cpy_r_r29, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1137, CPyStatic_mypy___errors___globals);
        goto CPyL97;
    }
    CPy_DECREF(cpy_r_r26);
    if (likely(PyUnicode_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "remove_duplicates", 1137, CPyStatic_mypy___errors___globals, "str", cpy_r_r30);
        goto CPyL93;
    }
    cpy_r_r32 = CPyStatics[2243]; /* 'Got:' */
    cpy_r_r33 = PyUnicode_Compare(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r34 = cpy_r_r33 == -1;
    if (!cpy_r_r34) goto CPyL25;
    cpy_r_r35 = PyErr_Occurred();
    cpy_r_r36 = cpy_r_r35 != NULL;
    if (!cpy_r_r36) goto CPyL25;
    cpy_r_r37 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1137, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
CPyL25: ;
    cpy_r_r38 = cpy_r_r33 == 0;
    if (!cpy_r_r38) goto CPyL27;
    cpy_r_conflicts_notes = 1;
CPyL27: ;
    cpy_r_r39 = CPyTagged_Subtract(cpy_r_j, 2);
    CPyTagged_DECREF(cpy_r_j);
    cpy_r_j = cpy_r_r39;
    goto CPyL8;
CPyL28: ;
    cpy_r_r40 = CPyTagged_Subtract(cpy_r_i, 2);
    cpy_r_j = cpy_r_r40;
CPyL29: ;
    cpy_r_r41 = cpy_r_j & 1;
    cpy_r_r42 = cpy_r_r41 != 0;
    if (!cpy_r_r42) goto CPyL31;
    cpy_r_r43 = CPyTagged_IsLt_(cpy_r_j, 0);
    if (cpy_r_r43) {
        goto CPyL94;
    } else
        goto CPyL32;
CPyL31: ;
    cpy_r_r44 = (Py_ssize_t)cpy_r_j >= (Py_ssize_t)0;
    if (!cpy_r_r44) goto CPyL94;
CPyL32: ;
    cpy_r_r45 = CPyList_GetItem(cpy_r_errors, cpy_r_j);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1141, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    PyObject *__tmp2306;
    if (unlikely(!(PyTuple_Check(cpy_r_r45) && PyTuple_GET_SIZE(cpy_r_r45) == 9))) {
        __tmp2306 = NULL;
        goto __LL2307;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r45, 0)))
        __tmp2306 = PyTuple_GET_ITEM(cpy_r_r45, 0);
    else {
        __tmp2306 = NULL;
    }
    if (__tmp2306 != NULL) goto __LL2308;
    if (PyTuple_GET_ITEM(cpy_r_r45, 0) == Py_None)
        __tmp2306 = PyTuple_GET_ITEM(cpy_r_r45, 0);
    else {
        __tmp2306 = NULL;
    }
    if (__tmp2306 != NULL) goto __LL2308;
    __tmp2306 = NULL;
__LL2308: ;
    if (__tmp2306 == NULL) goto __LL2307;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r45, 1))))
        __tmp2306 = PyTuple_GET_ITEM(cpy_r_r45, 1);
    else {
        __tmp2306 = NULL;
    }
    if (__tmp2306 == NULL) goto __LL2307;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r45, 2))))
        __tmp2306 = PyTuple_GET_ITEM(cpy_r_r45, 2);
    else {
        __tmp2306 = NULL;
    }
    if (__tmp2306 == NULL) goto __LL2307;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r45, 3))))
        __tmp2306 = PyTuple_GET_ITEM(cpy_r_r45, 3);
    else {
        __tmp2306 = NULL;
    }
    if (__tmp2306 == NULL) goto __LL2307;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r45, 4))))
        __tmp2306 = PyTuple_GET_ITEM(cpy_r_r45, 4);
    else {
        __tmp2306 = NULL;
    }
    if (__tmp2306 == NULL) goto __LL2307;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r45, 5))))
        __tmp2306 = PyTuple_GET_ITEM(cpy_r_r45, 5);
    else {
        __tmp2306 = NULL;
    }
    if (__tmp2306 == NULL) goto __LL2307;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r45, 6))))
        __tmp2306 = PyTuple_GET_ITEM(cpy_r_r45, 6);
    else {
        __tmp2306 = NULL;
    }
    if (__tmp2306 == NULL) goto __LL2307;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r45, 7))))
        __tmp2306 = PyTuple_GET_ITEM(cpy_r_r45, 7);
    else {
        __tmp2306 = NULL;
    }
    if (__tmp2306 == NULL) goto __LL2307;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r45, 8), CPyType_errorcodes___ErrorCode))
        __tmp2306 = PyTuple_GET_ITEM(cpy_r_r45, 8);
    else {
        __tmp2306 = NULL;
    }
    if (__tmp2306 != NULL) goto __LL2309;
    if (PyTuple_GET_ITEM(cpy_r_r45, 8) == Py_None)
        __tmp2306 = PyTuple_GET_ITEM(cpy_r_r45, 8);
    else {
        __tmp2306 = NULL;
    }
    if (__tmp2306 != NULL) goto __LL2309;
    __tmp2306 = NULL;
__LL2309: ;
    if (__tmp2306 == NULL) goto __LL2307;
    __tmp2306 = cpy_r_r45;
__LL2307: ;
    if (unlikely(__tmp2306 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r45); cpy_r_r46 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2310 = PyTuple_GET_ITEM(cpy_r_r45, 0);
        CPy_INCREF(__tmp2310);
        PyObject *__tmp2311;
        if (PyUnicode_Check(__tmp2310))
            __tmp2311 = __tmp2310;
        else {
            __tmp2311 = NULL;
        }
        if (__tmp2311 != NULL) goto __LL2312;
        if (__tmp2310 == Py_None)
            __tmp2311 = __tmp2310;
        else {
            __tmp2311 = NULL;
        }
        if (__tmp2311 != NULL) goto __LL2312;
        CPy_TypeError("str or None", __tmp2310); 
        __tmp2311 = NULL;
__LL2312: ;
        cpy_r_r46.f0 = __tmp2311;
        PyObject *__tmp2313 = PyTuple_GET_ITEM(cpy_r_r45, 1);
        CPyTagged __tmp2314;
        if (likely(PyLong_Check(__tmp2313)))
            __tmp2314 = CPyTagged_FromObject(__tmp2313);
        else {
            CPy_TypeError("int", __tmp2313); __tmp2314 = CPY_INT_TAG;
        }
        cpy_r_r46.f1 = __tmp2314;
        PyObject *__tmp2315 = PyTuple_GET_ITEM(cpy_r_r45, 2);
        CPyTagged __tmp2316;
        if (likely(PyLong_Check(__tmp2315)))
            __tmp2316 = CPyTagged_FromObject(__tmp2315);
        else {
            CPy_TypeError("int", __tmp2315); __tmp2316 = CPY_INT_TAG;
        }
        cpy_r_r46.f2 = __tmp2316;
        PyObject *__tmp2317 = PyTuple_GET_ITEM(cpy_r_r45, 3);
        CPyTagged __tmp2318;
        if (likely(PyLong_Check(__tmp2317)))
            __tmp2318 = CPyTagged_FromObject(__tmp2317);
        else {
            CPy_TypeError("int", __tmp2317); __tmp2318 = CPY_INT_TAG;
        }
        cpy_r_r46.f3 = __tmp2318;
        PyObject *__tmp2319 = PyTuple_GET_ITEM(cpy_r_r45, 4);
        CPyTagged __tmp2320;
        if (likely(PyLong_Check(__tmp2319)))
            __tmp2320 = CPyTagged_FromObject(__tmp2319);
        else {
            CPy_TypeError("int", __tmp2319); __tmp2320 = CPY_INT_TAG;
        }
        cpy_r_r46.f4 = __tmp2320;
        PyObject *__tmp2321 = PyTuple_GET_ITEM(cpy_r_r45, 5);
        CPy_INCREF(__tmp2321);
        PyObject *__tmp2322;
        if (likely(PyUnicode_Check(__tmp2321)))
            __tmp2322 = __tmp2321;
        else {
            CPy_TypeError("str", __tmp2321); 
            __tmp2322 = NULL;
        }
        cpy_r_r46.f5 = __tmp2322;
        PyObject *__tmp2323 = PyTuple_GET_ITEM(cpy_r_r45, 6);
        CPy_INCREF(__tmp2323);
        PyObject *__tmp2324;
        if (likely(PyUnicode_Check(__tmp2323)))
            __tmp2324 = __tmp2323;
        else {
            CPy_TypeError("str", __tmp2323); 
            __tmp2324 = NULL;
        }
        cpy_r_r46.f6 = __tmp2324;
        PyObject *__tmp2325 = PyTuple_GET_ITEM(cpy_r_r45, 7);
        char __tmp2326;
        if (unlikely(!PyBool_Check(__tmp2325))) {
            CPy_TypeError("bool", __tmp2325); __tmp2326 = 2;
        } else
            __tmp2326 = __tmp2325 == Py_True;
        cpy_r_r46.f7 = __tmp2326;
        PyObject *__tmp2327 = PyTuple_GET_ITEM(cpy_r_r45, 8);
        CPy_INCREF(__tmp2327);
        PyObject *__tmp2328;
        if (PyObject_TypeCheck(__tmp2327, CPyType_errorcodes___ErrorCode))
            __tmp2328 = __tmp2327;
        else {
            __tmp2328 = NULL;
        }
        if (__tmp2328 != NULL) goto __LL2329;
        if (__tmp2327 == Py_None)
            __tmp2328 = __tmp2327;
        else {
            __tmp2328 = NULL;
        }
        if (__tmp2328 != NULL) goto __LL2329;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2327); 
        __tmp2328 = NULL;
__LL2329: ;
        cpy_r_r46.f8 = __tmp2328;
    }
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1141, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    cpy_r_r47 = cpy_r_r46.f0;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r46.f0);
    CPyTagged_DECREF(cpy_r_r46.f1);
    CPyTagged_DECREF(cpy_r_r46.f2);
    CPyTagged_DECREF(cpy_r_r46.f3);
    CPyTagged_DECREF(cpy_r_r46.f4);
    CPy_DECREF(cpy_r_r46.f5);
    CPy_DECREF(cpy_r_r46.f6);
    CPy_DECREF(cpy_r_r46.f8);
    cpy_r_r48 = CPyList_GetItem(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1141, CPyStatic_mypy___errors___globals);
        goto CPyL98;
    }
    PyObject *__tmp2330;
    if (unlikely(!(PyTuple_Check(cpy_r_r48) && PyTuple_GET_SIZE(cpy_r_r48) == 9))) {
        __tmp2330 = NULL;
        goto __LL2331;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r48, 0)))
        __tmp2330 = PyTuple_GET_ITEM(cpy_r_r48, 0);
    else {
        __tmp2330 = NULL;
    }
    if (__tmp2330 != NULL) goto __LL2332;
    if (PyTuple_GET_ITEM(cpy_r_r48, 0) == Py_None)
        __tmp2330 = PyTuple_GET_ITEM(cpy_r_r48, 0);
    else {
        __tmp2330 = NULL;
    }
    if (__tmp2330 != NULL) goto __LL2332;
    __tmp2330 = NULL;
__LL2332: ;
    if (__tmp2330 == NULL) goto __LL2331;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r48, 1))))
        __tmp2330 = PyTuple_GET_ITEM(cpy_r_r48, 1);
    else {
        __tmp2330 = NULL;
    }
    if (__tmp2330 == NULL) goto __LL2331;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r48, 2))))
        __tmp2330 = PyTuple_GET_ITEM(cpy_r_r48, 2);
    else {
        __tmp2330 = NULL;
    }
    if (__tmp2330 == NULL) goto __LL2331;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r48, 3))))
        __tmp2330 = PyTuple_GET_ITEM(cpy_r_r48, 3);
    else {
        __tmp2330 = NULL;
    }
    if (__tmp2330 == NULL) goto __LL2331;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r48, 4))))
        __tmp2330 = PyTuple_GET_ITEM(cpy_r_r48, 4);
    else {
        __tmp2330 = NULL;
    }
    if (__tmp2330 == NULL) goto __LL2331;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r48, 5))))
        __tmp2330 = PyTuple_GET_ITEM(cpy_r_r48, 5);
    else {
        __tmp2330 = NULL;
    }
    if (__tmp2330 == NULL) goto __LL2331;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r48, 6))))
        __tmp2330 = PyTuple_GET_ITEM(cpy_r_r48, 6);
    else {
        __tmp2330 = NULL;
    }
    if (__tmp2330 == NULL) goto __LL2331;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r48, 7))))
        __tmp2330 = PyTuple_GET_ITEM(cpy_r_r48, 7);
    else {
        __tmp2330 = NULL;
    }
    if (__tmp2330 == NULL) goto __LL2331;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r48, 8), CPyType_errorcodes___ErrorCode))
        __tmp2330 = PyTuple_GET_ITEM(cpy_r_r48, 8);
    else {
        __tmp2330 = NULL;
    }
    if (__tmp2330 != NULL) goto __LL2333;
    if (PyTuple_GET_ITEM(cpy_r_r48, 8) == Py_None)
        __tmp2330 = PyTuple_GET_ITEM(cpy_r_r48, 8);
    else {
        __tmp2330 = NULL;
    }
    if (__tmp2330 != NULL) goto __LL2333;
    __tmp2330 = NULL;
__LL2333: ;
    if (__tmp2330 == NULL) goto __LL2331;
    __tmp2330 = cpy_r_r48;
__LL2331: ;
    if (unlikely(__tmp2330 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r48); cpy_r_r49 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2334 = PyTuple_GET_ITEM(cpy_r_r48, 0);
        CPy_INCREF(__tmp2334);
        PyObject *__tmp2335;
        if (PyUnicode_Check(__tmp2334))
            __tmp2335 = __tmp2334;
        else {
            __tmp2335 = NULL;
        }
        if (__tmp2335 != NULL) goto __LL2336;
        if (__tmp2334 == Py_None)
            __tmp2335 = __tmp2334;
        else {
            __tmp2335 = NULL;
        }
        if (__tmp2335 != NULL) goto __LL2336;
        CPy_TypeError("str or None", __tmp2334); 
        __tmp2335 = NULL;
__LL2336: ;
        cpy_r_r49.f0 = __tmp2335;
        PyObject *__tmp2337 = PyTuple_GET_ITEM(cpy_r_r48, 1);
        CPyTagged __tmp2338;
        if (likely(PyLong_Check(__tmp2337)))
            __tmp2338 = CPyTagged_FromObject(__tmp2337);
        else {
            CPy_TypeError("int", __tmp2337); __tmp2338 = CPY_INT_TAG;
        }
        cpy_r_r49.f1 = __tmp2338;
        PyObject *__tmp2339 = PyTuple_GET_ITEM(cpy_r_r48, 2);
        CPyTagged __tmp2340;
        if (likely(PyLong_Check(__tmp2339)))
            __tmp2340 = CPyTagged_FromObject(__tmp2339);
        else {
            CPy_TypeError("int", __tmp2339); __tmp2340 = CPY_INT_TAG;
        }
        cpy_r_r49.f2 = __tmp2340;
        PyObject *__tmp2341 = PyTuple_GET_ITEM(cpy_r_r48, 3);
        CPyTagged __tmp2342;
        if (likely(PyLong_Check(__tmp2341)))
            __tmp2342 = CPyTagged_FromObject(__tmp2341);
        else {
            CPy_TypeError("int", __tmp2341); __tmp2342 = CPY_INT_TAG;
        }
        cpy_r_r49.f3 = __tmp2342;
        PyObject *__tmp2343 = PyTuple_GET_ITEM(cpy_r_r48, 4);
        CPyTagged __tmp2344;
        if (likely(PyLong_Check(__tmp2343)))
            __tmp2344 = CPyTagged_FromObject(__tmp2343);
        else {
            CPy_TypeError("int", __tmp2343); __tmp2344 = CPY_INT_TAG;
        }
        cpy_r_r49.f4 = __tmp2344;
        PyObject *__tmp2345 = PyTuple_GET_ITEM(cpy_r_r48, 5);
        CPy_INCREF(__tmp2345);
        PyObject *__tmp2346;
        if (likely(PyUnicode_Check(__tmp2345)))
            __tmp2346 = __tmp2345;
        else {
            CPy_TypeError("str", __tmp2345); 
            __tmp2346 = NULL;
        }
        cpy_r_r49.f5 = __tmp2346;
        PyObject *__tmp2347 = PyTuple_GET_ITEM(cpy_r_r48, 6);
        CPy_INCREF(__tmp2347);
        PyObject *__tmp2348;
        if (likely(PyUnicode_Check(__tmp2347)))
            __tmp2348 = __tmp2347;
        else {
            CPy_TypeError("str", __tmp2347); 
            __tmp2348 = NULL;
        }
        cpy_r_r49.f6 = __tmp2348;
        PyObject *__tmp2349 = PyTuple_GET_ITEM(cpy_r_r48, 7);
        char __tmp2350;
        if (unlikely(!PyBool_Check(__tmp2349))) {
            CPy_TypeError("bool", __tmp2349); __tmp2350 = 2;
        } else
            __tmp2350 = __tmp2349 == Py_True;
        cpy_r_r49.f7 = __tmp2350;
        PyObject *__tmp2351 = PyTuple_GET_ITEM(cpy_r_r48, 8);
        CPy_INCREF(__tmp2351);
        PyObject *__tmp2352;
        if (PyObject_TypeCheck(__tmp2351, CPyType_errorcodes___ErrorCode))
            __tmp2352 = __tmp2351;
        else {
            __tmp2352 = NULL;
        }
        if (__tmp2352 != NULL) goto __LL2353;
        if (__tmp2351 == Py_None)
            __tmp2352 = __tmp2351;
        else {
            __tmp2352 = NULL;
        }
        if (__tmp2352 != NULL) goto __LL2353;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2351); 
        __tmp2352 = NULL;
__LL2353: ;
        cpy_r_r49.f8 = __tmp2352;
    }
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r49.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1141, CPyStatic_mypy___errors___globals);
        goto CPyL98;
    }
    cpy_r_r50 = cpy_r_r49.f0;
    CPy_INCREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r49.f0);
    CPyTagged_DECREF(cpy_r_r49.f1);
    CPyTagged_DECREF(cpy_r_r49.f2);
    CPyTagged_DECREF(cpy_r_r49.f3);
    CPyTagged_DECREF(cpy_r_r49.f4);
    CPy_DECREF(cpy_r_r49.f5);
    CPy_DECREF(cpy_r_r49.f6);
    CPy_DECREF(cpy_r_r49.f8);
    cpy_r_r51 = PyObject_RichCompare(cpy_r_r47, cpy_r_r50, 2);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1141, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    if (unlikely(!PyBool_Check(cpy_r_r51))) {
        CPy_TypeError("bool", cpy_r_r51); cpy_r_r52 = 2;
    } else
        cpy_r_r52 = cpy_r_r51 == Py_True;
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1141, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    if (!cpy_r_r52) goto CPyL94;
    cpy_r_r53 = CPyList_GetItem(cpy_r_errors, cpy_r_j);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1141, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    PyObject *__tmp2354;
    if (unlikely(!(PyTuple_Check(cpy_r_r53) && PyTuple_GET_SIZE(cpy_r_r53) == 9))) {
        __tmp2354 = NULL;
        goto __LL2355;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r53, 0)))
        __tmp2354 = PyTuple_GET_ITEM(cpy_r_r53, 0);
    else {
        __tmp2354 = NULL;
    }
    if (__tmp2354 != NULL) goto __LL2356;
    if (PyTuple_GET_ITEM(cpy_r_r53, 0) == Py_None)
        __tmp2354 = PyTuple_GET_ITEM(cpy_r_r53, 0);
    else {
        __tmp2354 = NULL;
    }
    if (__tmp2354 != NULL) goto __LL2356;
    __tmp2354 = NULL;
__LL2356: ;
    if (__tmp2354 == NULL) goto __LL2355;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r53, 1))))
        __tmp2354 = PyTuple_GET_ITEM(cpy_r_r53, 1);
    else {
        __tmp2354 = NULL;
    }
    if (__tmp2354 == NULL) goto __LL2355;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r53, 2))))
        __tmp2354 = PyTuple_GET_ITEM(cpy_r_r53, 2);
    else {
        __tmp2354 = NULL;
    }
    if (__tmp2354 == NULL) goto __LL2355;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r53, 3))))
        __tmp2354 = PyTuple_GET_ITEM(cpy_r_r53, 3);
    else {
        __tmp2354 = NULL;
    }
    if (__tmp2354 == NULL) goto __LL2355;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r53, 4))))
        __tmp2354 = PyTuple_GET_ITEM(cpy_r_r53, 4);
    else {
        __tmp2354 = NULL;
    }
    if (__tmp2354 == NULL) goto __LL2355;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r53, 5))))
        __tmp2354 = PyTuple_GET_ITEM(cpy_r_r53, 5);
    else {
        __tmp2354 = NULL;
    }
    if (__tmp2354 == NULL) goto __LL2355;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r53, 6))))
        __tmp2354 = PyTuple_GET_ITEM(cpy_r_r53, 6);
    else {
        __tmp2354 = NULL;
    }
    if (__tmp2354 == NULL) goto __LL2355;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r53, 7))))
        __tmp2354 = PyTuple_GET_ITEM(cpy_r_r53, 7);
    else {
        __tmp2354 = NULL;
    }
    if (__tmp2354 == NULL) goto __LL2355;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r53, 8), CPyType_errorcodes___ErrorCode))
        __tmp2354 = PyTuple_GET_ITEM(cpy_r_r53, 8);
    else {
        __tmp2354 = NULL;
    }
    if (__tmp2354 != NULL) goto __LL2357;
    if (PyTuple_GET_ITEM(cpy_r_r53, 8) == Py_None)
        __tmp2354 = PyTuple_GET_ITEM(cpy_r_r53, 8);
    else {
        __tmp2354 = NULL;
    }
    if (__tmp2354 != NULL) goto __LL2357;
    __tmp2354 = NULL;
__LL2357: ;
    if (__tmp2354 == NULL) goto __LL2355;
    __tmp2354 = cpy_r_r53;
__LL2355: ;
    if (unlikely(__tmp2354 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r53); cpy_r_r54 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2358 = PyTuple_GET_ITEM(cpy_r_r53, 0);
        CPy_INCREF(__tmp2358);
        PyObject *__tmp2359;
        if (PyUnicode_Check(__tmp2358))
            __tmp2359 = __tmp2358;
        else {
            __tmp2359 = NULL;
        }
        if (__tmp2359 != NULL) goto __LL2360;
        if (__tmp2358 == Py_None)
            __tmp2359 = __tmp2358;
        else {
            __tmp2359 = NULL;
        }
        if (__tmp2359 != NULL) goto __LL2360;
        CPy_TypeError("str or None", __tmp2358); 
        __tmp2359 = NULL;
__LL2360: ;
        cpy_r_r54.f0 = __tmp2359;
        PyObject *__tmp2361 = PyTuple_GET_ITEM(cpy_r_r53, 1);
        CPyTagged __tmp2362;
        if (likely(PyLong_Check(__tmp2361)))
            __tmp2362 = CPyTagged_FromObject(__tmp2361);
        else {
            CPy_TypeError("int", __tmp2361); __tmp2362 = CPY_INT_TAG;
        }
        cpy_r_r54.f1 = __tmp2362;
        PyObject *__tmp2363 = PyTuple_GET_ITEM(cpy_r_r53, 2);
        CPyTagged __tmp2364;
        if (likely(PyLong_Check(__tmp2363)))
            __tmp2364 = CPyTagged_FromObject(__tmp2363);
        else {
            CPy_TypeError("int", __tmp2363); __tmp2364 = CPY_INT_TAG;
        }
        cpy_r_r54.f2 = __tmp2364;
        PyObject *__tmp2365 = PyTuple_GET_ITEM(cpy_r_r53, 3);
        CPyTagged __tmp2366;
        if (likely(PyLong_Check(__tmp2365)))
            __tmp2366 = CPyTagged_FromObject(__tmp2365);
        else {
            CPy_TypeError("int", __tmp2365); __tmp2366 = CPY_INT_TAG;
        }
        cpy_r_r54.f3 = __tmp2366;
        PyObject *__tmp2367 = PyTuple_GET_ITEM(cpy_r_r53, 4);
        CPyTagged __tmp2368;
        if (likely(PyLong_Check(__tmp2367)))
            __tmp2368 = CPyTagged_FromObject(__tmp2367);
        else {
            CPy_TypeError("int", __tmp2367); __tmp2368 = CPY_INT_TAG;
        }
        cpy_r_r54.f4 = __tmp2368;
        PyObject *__tmp2369 = PyTuple_GET_ITEM(cpy_r_r53, 5);
        CPy_INCREF(__tmp2369);
        PyObject *__tmp2370;
        if (likely(PyUnicode_Check(__tmp2369)))
            __tmp2370 = __tmp2369;
        else {
            CPy_TypeError("str", __tmp2369); 
            __tmp2370 = NULL;
        }
        cpy_r_r54.f5 = __tmp2370;
        PyObject *__tmp2371 = PyTuple_GET_ITEM(cpy_r_r53, 6);
        CPy_INCREF(__tmp2371);
        PyObject *__tmp2372;
        if (likely(PyUnicode_Check(__tmp2371)))
            __tmp2372 = __tmp2371;
        else {
            CPy_TypeError("str", __tmp2371); 
            __tmp2372 = NULL;
        }
        cpy_r_r54.f6 = __tmp2372;
        PyObject *__tmp2373 = PyTuple_GET_ITEM(cpy_r_r53, 7);
        char __tmp2374;
        if (unlikely(!PyBool_Check(__tmp2373))) {
            CPy_TypeError("bool", __tmp2373); __tmp2374 = 2;
        } else
            __tmp2374 = __tmp2373 == Py_True;
        cpy_r_r54.f7 = __tmp2374;
        PyObject *__tmp2375 = PyTuple_GET_ITEM(cpy_r_r53, 8);
        CPy_INCREF(__tmp2375);
        PyObject *__tmp2376;
        if (PyObject_TypeCheck(__tmp2375, CPyType_errorcodes___ErrorCode))
            __tmp2376 = __tmp2375;
        else {
            __tmp2376 = NULL;
        }
        if (__tmp2376 != NULL) goto __LL2377;
        if (__tmp2375 == Py_None)
            __tmp2376 = __tmp2375;
        else {
            __tmp2376 = NULL;
        }
        if (__tmp2376 != NULL) goto __LL2377;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2375); 
        __tmp2376 = NULL;
__LL2377: ;
        cpy_r_r54.f8 = __tmp2376;
    }
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1141, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    cpy_r_r55 = cpy_r_r54.f1;
    CPyTagged_INCREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r54.f0);
    CPyTagged_DECREF(cpy_r_r54.f1);
    CPyTagged_DECREF(cpy_r_r54.f2);
    CPyTagged_DECREF(cpy_r_r54.f3);
    CPyTagged_DECREF(cpy_r_r54.f4);
    CPy_DECREF(cpy_r_r54.f5);
    CPy_DECREF(cpy_r_r54.f6);
    CPy_DECREF(cpy_r_r54.f8);
    cpy_r_r56 = CPyList_GetItem(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1141, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    PyObject *__tmp2378;
    if (unlikely(!(PyTuple_Check(cpy_r_r56) && PyTuple_GET_SIZE(cpy_r_r56) == 9))) {
        __tmp2378 = NULL;
        goto __LL2379;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r56, 0)))
        __tmp2378 = PyTuple_GET_ITEM(cpy_r_r56, 0);
    else {
        __tmp2378 = NULL;
    }
    if (__tmp2378 != NULL) goto __LL2380;
    if (PyTuple_GET_ITEM(cpy_r_r56, 0) == Py_None)
        __tmp2378 = PyTuple_GET_ITEM(cpy_r_r56, 0);
    else {
        __tmp2378 = NULL;
    }
    if (__tmp2378 != NULL) goto __LL2380;
    __tmp2378 = NULL;
__LL2380: ;
    if (__tmp2378 == NULL) goto __LL2379;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r56, 1))))
        __tmp2378 = PyTuple_GET_ITEM(cpy_r_r56, 1);
    else {
        __tmp2378 = NULL;
    }
    if (__tmp2378 == NULL) goto __LL2379;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r56, 2))))
        __tmp2378 = PyTuple_GET_ITEM(cpy_r_r56, 2);
    else {
        __tmp2378 = NULL;
    }
    if (__tmp2378 == NULL) goto __LL2379;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r56, 3))))
        __tmp2378 = PyTuple_GET_ITEM(cpy_r_r56, 3);
    else {
        __tmp2378 = NULL;
    }
    if (__tmp2378 == NULL) goto __LL2379;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r56, 4))))
        __tmp2378 = PyTuple_GET_ITEM(cpy_r_r56, 4);
    else {
        __tmp2378 = NULL;
    }
    if (__tmp2378 == NULL) goto __LL2379;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r56, 5))))
        __tmp2378 = PyTuple_GET_ITEM(cpy_r_r56, 5);
    else {
        __tmp2378 = NULL;
    }
    if (__tmp2378 == NULL) goto __LL2379;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r56, 6))))
        __tmp2378 = PyTuple_GET_ITEM(cpy_r_r56, 6);
    else {
        __tmp2378 = NULL;
    }
    if (__tmp2378 == NULL) goto __LL2379;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r56, 7))))
        __tmp2378 = PyTuple_GET_ITEM(cpy_r_r56, 7);
    else {
        __tmp2378 = NULL;
    }
    if (__tmp2378 == NULL) goto __LL2379;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r56, 8), CPyType_errorcodes___ErrorCode))
        __tmp2378 = PyTuple_GET_ITEM(cpy_r_r56, 8);
    else {
        __tmp2378 = NULL;
    }
    if (__tmp2378 != NULL) goto __LL2381;
    if (PyTuple_GET_ITEM(cpy_r_r56, 8) == Py_None)
        __tmp2378 = PyTuple_GET_ITEM(cpy_r_r56, 8);
    else {
        __tmp2378 = NULL;
    }
    if (__tmp2378 != NULL) goto __LL2381;
    __tmp2378 = NULL;
__LL2381: ;
    if (__tmp2378 == NULL) goto __LL2379;
    __tmp2378 = cpy_r_r56;
__LL2379: ;
    if (unlikely(__tmp2378 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r56); cpy_r_r57 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2382 = PyTuple_GET_ITEM(cpy_r_r56, 0);
        CPy_INCREF(__tmp2382);
        PyObject *__tmp2383;
        if (PyUnicode_Check(__tmp2382))
            __tmp2383 = __tmp2382;
        else {
            __tmp2383 = NULL;
        }
        if (__tmp2383 != NULL) goto __LL2384;
        if (__tmp2382 == Py_None)
            __tmp2383 = __tmp2382;
        else {
            __tmp2383 = NULL;
        }
        if (__tmp2383 != NULL) goto __LL2384;
        CPy_TypeError("str or None", __tmp2382); 
        __tmp2383 = NULL;
__LL2384: ;
        cpy_r_r57.f0 = __tmp2383;
        PyObject *__tmp2385 = PyTuple_GET_ITEM(cpy_r_r56, 1);
        CPyTagged __tmp2386;
        if (likely(PyLong_Check(__tmp2385)))
            __tmp2386 = CPyTagged_FromObject(__tmp2385);
        else {
            CPy_TypeError("int", __tmp2385); __tmp2386 = CPY_INT_TAG;
        }
        cpy_r_r57.f1 = __tmp2386;
        PyObject *__tmp2387 = PyTuple_GET_ITEM(cpy_r_r56, 2);
        CPyTagged __tmp2388;
        if (likely(PyLong_Check(__tmp2387)))
            __tmp2388 = CPyTagged_FromObject(__tmp2387);
        else {
            CPy_TypeError("int", __tmp2387); __tmp2388 = CPY_INT_TAG;
        }
        cpy_r_r57.f2 = __tmp2388;
        PyObject *__tmp2389 = PyTuple_GET_ITEM(cpy_r_r56, 3);
        CPyTagged __tmp2390;
        if (likely(PyLong_Check(__tmp2389)))
            __tmp2390 = CPyTagged_FromObject(__tmp2389);
        else {
            CPy_TypeError("int", __tmp2389); __tmp2390 = CPY_INT_TAG;
        }
        cpy_r_r57.f3 = __tmp2390;
        PyObject *__tmp2391 = PyTuple_GET_ITEM(cpy_r_r56, 4);
        CPyTagged __tmp2392;
        if (likely(PyLong_Check(__tmp2391)))
            __tmp2392 = CPyTagged_FromObject(__tmp2391);
        else {
            CPy_TypeError("int", __tmp2391); __tmp2392 = CPY_INT_TAG;
        }
        cpy_r_r57.f4 = __tmp2392;
        PyObject *__tmp2393 = PyTuple_GET_ITEM(cpy_r_r56, 5);
        CPy_INCREF(__tmp2393);
        PyObject *__tmp2394;
        if (likely(PyUnicode_Check(__tmp2393)))
            __tmp2394 = __tmp2393;
        else {
            CPy_TypeError("str", __tmp2393); 
            __tmp2394 = NULL;
        }
        cpy_r_r57.f5 = __tmp2394;
        PyObject *__tmp2395 = PyTuple_GET_ITEM(cpy_r_r56, 6);
        CPy_INCREF(__tmp2395);
        PyObject *__tmp2396;
        if (likely(PyUnicode_Check(__tmp2395)))
            __tmp2396 = __tmp2395;
        else {
            CPy_TypeError("str", __tmp2395); 
            __tmp2396 = NULL;
        }
        cpy_r_r57.f6 = __tmp2396;
        PyObject *__tmp2397 = PyTuple_GET_ITEM(cpy_r_r56, 7);
        char __tmp2398;
        if (unlikely(!PyBool_Check(__tmp2397))) {
            CPy_TypeError("bool", __tmp2397); __tmp2398 = 2;
        } else
            __tmp2398 = __tmp2397 == Py_True;
        cpy_r_r57.f7 = __tmp2398;
        PyObject *__tmp2399 = PyTuple_GET_ITEM(cpy_r_r56, 8);
        CPy_INCREF(__tmp2399);
        PyObject *__tmp2400;
        if (PyObject_TypeCheck(__tmp2399, CPyType_errorcodes___ErrorCode))
            __tmp2400 = __tmp2399;
        else {
            __tmp2400 = NULL;
        }
        if (__tmp2400 != NULL) goto __LL2401;
        if (__tmp2399 == Py_None)
            __tmp2400 = __tmp2399;
        else {
            __tmp2400 = NULL;
        }
        if (__tmp2400 != NULL) goto __LL2401;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2399); 
        __tmp2400 = NULL;
__LL2401: ;
        cpy_r_r57.f8 = __tmp2400;
    }
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1141, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r58 = cpy_r_r57.f1;
    CPyTagged_INCREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r57.f0);
    CPyTagged_DECREF(cpy_r_r57.f1);
    CPyTagged_DECREF(cpy_r_r57.f2);
    CPyTagged_DECREF(cpy_r_r57.f3);
    CPyTagged_DECREF(cpy_r_r57.f4);
    CPy_DECREF(cpy_r_r57.f5);
    CPy_DECREF(cpy_r_r57.f6);
    CPy_DECREF(cpy_r_r57.f8);
    cpy_r_r59 = cpy_r_r55 & 1;
    cpy_r_r60 = cpy_r_r59 != 0;
    if (!cpy_r_r60) goto CPyL45;
    cpy_r_r61 = CPyTagged_IsEq_(cpy_r_r55, cpy_r_r58);
    CPyTagged_DECREF(cpy_r_r55);
    CPyTagged_DECREF(cpy_r_r58);
    if (cpy_r_r61) {
        goto CPyL46;
    } else
        goto CPyL94;
CPyL45: ;
    cpy_r_r62 = cpy_r_r55 == cpy_r_r58;
    CPyTagged_DECREF(cpy_r_r55);
    CPyTagged_DECREF(cpy_r_r58);
    if (!cpy_r_r62) goto CPyL94;
CPyL46: ;
    cpy_r_r63 = CPyList_GetItem(cpy_r_errors, cpy_r_j);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1143, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    PyObject *__tmp2402;
    if (unlikely(!(PyTuple_Check(cpy_r_r63) && PyTuple_GET_SIZE(cpy_r_r63) == 9))) {
        __tmp2402 = NULL;
        goto __LL2403;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r63, 0)))
        __tmp2402 = PyTuple_GET_ITEM(cpy_r_r63, 0);
    else {
        __tmp2402 = NULL;
    }
    if (__tmp2402 != NULL) goto __LL2404;
    if (PyTuple_GET_ITEM(cpy_r_r63, 0) == Py_None)
        __tmp2402 = PyTuple_GET_ITEM(cpy_r_r63, 0);
    else {
        __tmp2402 = NULL;
    }
    if (__tmp2402 != NULL) goto __LL2404;
    __tmp2402 = NULL;
__LL2404: ;
    if (__tmp2402 == NULL) goto __LL2403;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r63, 1))))
        __tmp2402 = PyTuple_GET_ITEM(cpy_r_r63, 1);
    else {
        __tmp2402 = NULL;
    }
    if (__tmp2402 == NULL) goto __LL2403;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r63, 2))))
        __tmp2402 = PyTuple_GET_ITEM(cpy_r_r63, 2);
    else {
        __tmp2402 = NULL;
    }
    if (__tmp2402 == NULL) goto __LL2403;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r63, 3))))
        __tmp2402 = PyTuple_GET_ITEM(cpy_r_r63, 3);
    else {
        __tmp2402 = NULL;
    }
    if (__tmp2402 == NULL) goto __LL2403;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r63, 4))))
        __tmp2402 = PyTuple_GET_ITEM(cpy_r_r63, 4);
    else {
        __tmp2402 = NULL;
    }
    if (__tmp2402 == NULL) goto __LL2403;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r63, 5))))
        __tmp2402 = PyTuple_GET_ITEM(cpy_r_r63, 5);
    else {
        __tmp2402 = NULL;
    }
    if (__tmp2402 == NULL) goto __LL2403;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r63, 6))))
        __tmp2402 = PyTuple_GET_ITEM(cpy_r_r63, 6);
    else {
        __tmp2402 = NULL;
    }
    if (__tmp2402 == NULL) goto __LL2403;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r63, 7))))
        __tmp2402 = PyTuple_GET_ITEM(cpy_r_r63, 7);
    else {
        __tmp2402 = NULL;
    }
    if (__tmp2402 == NULL) goto __LL2403;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r63, 8), CPyType_errorcodes___ErrorCode))
        __tmp2402 = PyTuple_GET_ITEM(cpy_r_r63, 8);
    else {
        __tmp2402 = NULL;
    }
    if (__tmp2402 != NULL) goto __LL2405;
    if (PyTuple_GET_ITEM(cpy_r_r63, 8) == Py_None)
        __tmp2402 = PyTuple_GET_ITEM(cpy_r_r63, 8);
    else {
        __tmp2402 = NULL;
    }
    if (__tmp2402 != NULL) goto __LL2405;
    __tmp2402 = NULL;
__LL2405: ;
    if (__tmp2402 == NULL) goto __LL2403;
    __tmp2402 = cpy_r_r63;
__LL2403: ;
    if (unlikely(__tmp2402 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r63); cpy_r_r64 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2406 = PyTuple_GET_ITEM(cpy_r_r63, 0);
        CPy_INCREF(__tmp2406);
        PyObject *__tmp2407;
        if (PyUnicode_Check(__tmp2406))
            __tmp2407 = __tmp2406;
        else {
            __tmp2407 = NULL;
        }
        if (__tmp2407 != NULL) goto __LL2408;
        if (__tmp2406 == Py_None)
            __tmp2407 = __tmp2406;
        else {
            __tmp2407 = NULL;
        }
        if (__tmp2407 != NULL) goto __LL2408;
        CPy_TypeError("str or None", __tmp2406); 
        __tmp2407 = NULL;
__LL2408: ;
        cpy_r_r64.f0 = __tmp2407;
        PyObject *__tmp2409 = PyTuple_GET_ITEM(cpy_r_r63, 1);
        CPyTagged __tmp2410;
        if (likely(PyLong_Check(__tmp2409)))
            __tmp2410 = CPyTagged_FromObject(__tmp2409);
        else {
            CPy_TypeError("int", __tmp2409); __tmp2410 = CPY_INT_TAG;
        }
        cpy_r_r64.f1 = __tmp2410;
        PyObject *__tmp2411 = PyTuple_GET_ITEM(cpy_r_r63, 2);
        CPyTagged __tmp2412;
        if (likely(PyLong_Check(__tmp2411)))
            __tmp2412 = CPyTagged_FromObject(__tmp2411);
        else {
            CPy_TypeError("int", __tmp2411); __tmp2412 = CPY_INT_TAG;
        }
        cpy_r_r64.f2 = __tmp2412;
        PyObject *__tmp2413 = PyTuple_GET_ITEM(cpy_r_r63, 3);
        CPyTagged __tmp2414;
        if (likely(PyLong_Check(__tmp2413)))
            __tmp2414 = CPyTagged_FromObject(__tmp2413);
        else {
            CPy_TypeError("int", __tmp2413); __tmp2414 = CPY_INT_TAG;
        }
        cpy_r_r64.f3 = __tmp2414;
        PyObject *__tmp2415 = PyTuple_GET_ITEM(cpy_r_r63, 4);
        CPyTagged __tmp2416;
        if (likely(PyLong_Check(__tmp2415)))
            __tmp2416 = CPyTagged_FromObject(__tmp2415);
        else {
            CPy_TypeError("int", __tmp2415); __tmp2416 = CPY_INT_TAG;
        }
        cpy_r_r64.f4 = __tmp2416;
        PyObject *__tmp2417 = PyTuple_GET_ITEM(cpy_r_r63, 5);
        CPy_INCREF(__tmp2417);
        PyObject *__tmp2418;
        if (likely(PyUnicode_Check(__tmp2417)))
            __tmp2418 = __tmp2417;
        else {
            CPy_TypeError("str", __tmp2417); 
            __tmp2418 = NULL;
        }
        cpy_r_r64.f5 = __tmp2418;
        PyObject *__tmp2419 = PyTuple_GET_ITEM(cpy_r_r63, 6);
        CPy_INCREF(__tmp2419);
        PyObject *__tmp2420;
        if (likely(PyUnicode_Check(__tmp2419)))
            __tmp2420 = __tmp2419;
        else {
            CPy_TypeError("str", __tmp2419); 
            __tmp2420 = NULL;
        }
        cpy_r_r64.f6 = __tmp2420;
        PyObject *__tmp2421 = PyTuple_GET_ITEM(cpy_r_r63, 7);
        char __tmp2422;
        if (unlikely(!PyBool_Check(__tmp2421))) {
            CPy_TypeError("bool", __tmp2421); __tmp2422 = 2;
        } else
            __tmp2422 = __tmp2421 == Py_True;
        cpy_r_r64.f7 = __tmp2422;
        PyObject *__tmp2423 = PyTuple_GET_ITEM(cpy_r_r63, 8);
        CPy_INCREF(__tmp2423);
        PyObject *__tmp2424;
        if (PyObject_TypeCheck(__tmp2423, CPyType_errorcodes___ErrorCode))
            __tmp2424 = __tmp2423;
        else {
            __tmp2424 = NULL;
        }
        if (__tmp2424 != NULL) goto __LL2425;
        if (__tmp2423 == Py_None)
            __tmp2424 = __tmp2423;
        else {
            __tmp2424 = NULL;
        }
        if (__tmp2424 != NULL) goto __LL2425;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2423); 
        __tmp2424 = NULL;
__LL2425: ;
        cpy_r_r64.f8 = __tmp2424;
    }
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1143, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    cpy_r_r65 = cpy_r_r64.f5;
    CPy_INCREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r64.f0);
    CPyTagged_DECREF(cpy_r_r64.f1);
    CPyTagged_DECREF(cpy_r_r64.f2);
    CPyTagged_DECREF(cpy_r_r64.f3);
    CPyTagged_DECREF(cpy_r_r64.f4);
    CPy_DECREF(cpy_r_r64.f5);
    CPy_DECREF(cpy_r_r64.f6);
    CPy_DECREF(cpy_r_r64.f8);
    cpy_r_r66 = CPyList_GetItem(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1143, CPyStatic_mypy___errors___globals);
        goto CPyL100;
    }
    PyObject *__tmp2426;
    if (unlikely(!(PyTuple_Check(cpy_r_r66) && PyTuple_GET_SIZE(cpy_r_r66) == 9))) {
        __tmp2426 = NULL;
        goto __LL2427;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r66, 0)))
        __tmp2426 = PyTuple_GET_ITEM(cpy_r_r66, 0);
    else {
        __tmp2426 = NULL;
    }
    if (__tmp2426 != NULL) goto __LL2428;
    if (PyTuple_GET_ITEM(cpy_r_r66, 0) == Py_None)
        __tmp2426 = PyTuple_GET_ITEM(cpy_r_r66, 0);
    else {
        __tmp2426 = NULL;
    }
    if (__tmp2426 != NULL) goto __LL2428;
    __tmp2426 = NULL;
__LL2428: ;
    if (__tmp2426 == NULL) goto __LL2427;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r66, 1))))
        __tmp2426 = PyTuple_GET_ITEM(cpy_r_r66, 1);
    else {
        __tmp2426 = NULL;
    }
    if (__tmp2426 == NULL) goto __LL2427;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r66, 2))))
        __tmp2426 = PyTuple_GET_ITEM(cpy_r_r66, 2);
    else {
        __tmp2426 = NULL;
    }
    if (__tmp2426 == NULL) goto __LL2427;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r66, 3))))
        __tmp2426 = PyTuple_GET_ITEM(cpy_r_r66, 3);
    else {
        __tmp2426 = NULL;
    }
    if (__tmp2426 == NULL) goto __LL2427;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r66, 4))))
        __tmp2426 = PyTuple_GET_ITEM(cpy_r_r66, 4);
    else {
        __tmp2426 = NULL;
    }
    if (__tmp2426 == NULL) goto __LL2427;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r66, 5))))
        __tmp2426 = PyTuple_GET_ITEM(cpy_r_r66, 5);
    else {
        __tmp2426 = NULL;
    }
    if (__tmp2426 == NULL) goto __LL2427;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r66, 6))))
        __tmp2426 = PyTuple_GET_ITEM(cpy_r_r66, 6);
    else {
        __tmp2426 = NULL;
    }
    if (__tmp2426 == NULL) goto __LL2427;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r66, 7))))
        __tmp2426 = PyTuple_GET_ITEM(cpy_r_r66, 7);
    else {
        __tmp2426 = NULL;
    }
    if (__tmp2426 == NULL) goto __LL2427;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r66, 8), CPyType_errorcodes___ErrorCode))
        __tmp2426 = PyTuple_GET_ITEM(cpy_r_r66, 8);
    else {
        __tmp2426 = NULL;
    }
    if (__tmp2426 != NULL) goto __LL2429;
    if (PyTuple_GET_ITEM(cpy_r_r66, 8) == Py_None)
        __tmp2426 = PyTuple_GET_ITEM(cpy_r_r66, 8);
    else {
        __tmp2426 = NULL;
    }
    if (__tmp2426 != NULL) goto __LL2429;
    __tmp2426 = NULL;
__LL2429: ;
    if (__tmp2426 == NULL) goto __LL2427;
    __tmp2426 = cpy_r_r66;
__LL2427: ;
    if (unlikely(__tmp2426 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r66); cpy_r_r67 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2430 = PyTuple_GET_ITEM(cpy_r_r66, 0);
        CPy_INCREF(__tmp2430);
        PyObject *__tmp2431;
        if (PyUnicode_Check(__tmp2430))
            __tmp2431 = __tmp2430;
        else {
            __tmp2431 = NULL;
        }
        if (__tmp2431 != NULL) goto __LL2432;
        if (__tmp2430 == Py_None)
            __tmp2431 = __tmp2430;
        else {
            __tmp2431 = NULL;
        }
        if (__tmp2431 != NULL) goto __LL2432;
        CPy_TypeError("str or None", __tmp2430); 
        __tmp2431 = NULL;
__LL2432: ;
        cpy_r_r67.f0 = __tmp2431;
        PyObject *__tmp2433 = PyTuple_GET_ITEM(cpy_r_r66, 1);
        CPyTagged __tmp2434;
        if (likely(PyLong_Check(__tmp2433)))
            __tmp2434 = CPyTagged_FromObject(__tmp2433);
        else {
            CPy_TypeError("int", __tmp2433); __tmp2434 = CPY_INT_TAG;
        }
        cpy_r_r67.f1 = __tmp2434;
        PyObject *__tmp2435 = PyTuple_GET_ITEM(cpy_r_r66, 2);
        CPyTagged __tmp2436;
        if (likely(PyLong_Check(__tmp2435)))
            __tmp2436 = CPyTagged_FromObject(__tmp2435);
        else {
            CPy_TypeError("int", __tmp2435); __tmp2436 = CPY_INT_TAG;
        }
        cpy_r_r67.f2 = __tmp2436;
        PyObject *__tmp2437 = PyTuple_GET_ITEM(cpy_r_r66, 3);
        CPyTagged __tmp2438;
        if (likely(PyLong_Check(__tmp2437)))
            __tmp2438 = CPyTagged_FromObject(__tmp2437);
        else {
            CPy_TypeError("int", __tmp2437); __tmp2438 = CPY_INT_TAG;
        }
        cpy_r_r67.f3 = __tmp2438;
        PyObject *__tmp2439 = PyTuple_GET_ITEM(cpy_r_r66, 4);
        CPyTagged __tmp2440;
        if (likely(PyLong_Check(__tmp2439)))
            __tmp2440 = CPyTagged_FromObject(__tmp2439);
        else {
            CPy_TypeError("int", __tmp2439); __tmp2440 = CPY_INT_TAG;
        }
        cpy_r_r67.f4 = __tmp2440;
        PyObject *__tmp2441 = PyTuple_GET_ITEM(cpy_r_r66, 5);
        CPy_INCREF(__tmp2441);
        PyObject *__tmp2442;
        if (likely(PyUnicode_Check(__tmp2441)))
            __tmp2442 = __tmp2441;
        else {
            CPy_TypeError("str", __tmp2441); 
            __tmp2442 = NULL;
        }
        cpy_r_r67.f5 = __tmp2442;
        PyObject *__tmp2443 = PyTuple_GET_ITEM(cpy_r_r66, 6);
        CPy_INCREF(__tmp2443);
        PyObject *__tmp2444;
        if (likely(PyUnicode_Check(__tmp2443)))
            __tmp2444 = __tmp2443;
        else {
            CPy_TypeError("str", __tmp2443); 
            __tmp2444 = NULL;
        }
        cpy_r_r67.f6 = __tmp2444;
        PyObject *__tmp2445 = PyTuple_GET_ITEM(cpy_r_r66, 7);
        char __tmp2446;
        if (unlikely(!PyBool_Check(__tmp2445))) {
            CPy_TypeError("bool", __tmp2445); __tmp2446 = 2;
        } else
            __tmp2446 = __tmp2445 == Py_True;
        cpy_r_r67.f7 = __tmp2446;
        PyObject *__tmp2447 = PyTuple_GET_ITEM(cpy_r_r66, 8);
        CPy_INCREF(__tmp2447);
        PyObject *__tmp2448;
        if (PyObject_TypeCheck(__tmp2447, CPyType_errorcodes___ErrorCode))
            __tmp2448 = __tmp2447;
        else {
            __tmp2448 = NULL;
        }
        if (__tmp2448 != NULL) goto __LL2449;
        if (__tmp2447 == Py_None)
            __tmp2448 = __tmp2447;
        else {
            __tmp2448 = NULL;
        }
        if (__tmp2448 != NULL) goto __LL2449;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2447); 
        __tmp2448 = NULL;
__LL2449: ;
        cpy_r_r67.f8 = __tmp2448;
    }
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1143, CPyStatic_mypy___errors___globals);
        goto CPyL100;
    }
    cpy_r_r68 = cpy_r_r67.f5;
    CPy_INCREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r67.f0);
    CPyTagged_DECREF(cpy_r_r67.f1);
    CPyTagged_DECREF(cpy_r_r67.f2);
    CPyTagged_DECREF(cpy_r_r67.f3);
    CPyTagged_DECREF(cpy_r_r67.f4);
    CPy_DECREF(cpy_r_r67.f5);
    CPy_DECREF(cpy_r_r67.f6);
    CPy_DECREF(cpy_r_r67.f8);
    cpy_r_r69 = PyUnicode_Compare(cpy_r_r65, cpy_r_r68);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r70 = cpy_r_r69 == -1;
    if (!cpy_r_r70) goto CPyL53;
    cpy_r_r71 = PyErr_Occurred();
    cpy_r_r72 = cpy_r_r71 != NULL;
    if (!cpy_r_r72) goto CPyL53;
    cpy_r_r73 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1143, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
CPyL53: ;
    cpy_r_r74 = cpy_r_r69 == 0;
    if (!cpy_r_r74) goto CPyL84;
    cpy_r_r75 = CPyList_GetItem(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1147, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    PyObject *__tmp2450;
    if (unlikely(!(PyTuple_Check(cpy_r_r75) && PyTuple_GET_SIZE(cpy_r_r75) == 9))) {
        __tmp2450 = NULL;
        goto __LL2451;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r75, 0)))
        __tmp2450 = PyTuple_GET_ITEM(cpy_r_r75, 0);
    else {
        __tmp2450 = NULL;
    }
    if (__tmp2450 != NULL) goto __LL2452;
    if (PyTuple_GET_ITEM(cpy_r_r75, 0) == Py_None)
        __tmp2450 = PyTuple_GET_ITEM(cpy_r_r75, 0);
    else {
        __tmp2450 = NULL;
    }
    if (__tmp2450 != NULL) goto __LL2452;
    __tmp2450 = NULL;
__LL2452: ;
    if (__tmp2450 == NULL) goto __LL2451;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r75, 1))))
        __tmp2450 = PyTuple_GET_ITEM(cpy_r_r75, 1);
    else {
        __tmp2450 = NULL;
    }
    if (__tmp2450 == NULL) goto __LL2451;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r75, 2))))
        __tmp2450 = PyTuple_GET_ITEM(cpy_r_r75, 2);
    else {
        __tmp2450 = NULL;
    }
    if (__tmp2450 == NULL) goto __LL2451;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r75, 3))))
        __tmp2450 = PyTuple_GET_ITEM(cpy_r_r75, 3);
    else {
        __tmp2450 = NULL;
    }
    if (__tmp2450 == NULL) goto __LL2451;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r75, 4))))
        __tmp2450 = PyTuple_GET_ITEM(cpy_r_r75, 4);
    else {
        __tmp2450 = NULL;
    }
    if (__tmp2450 == NULL) goto __LL2451;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r75, 5))))
        __tmp2450 = PyTuple_GET_ITEM(cpy_r_r75, 5);
    else {
        __tmp2450 = NULL;
    }
    if (__tmp2450 == NULL) goto __LL2451;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r75, 6))))
        __tmp2450 = PyTuple_GET_ITEM(cpy_r_r75, 6);
    else {
        __tmp2450 = NULL;
    }
    if (__tmp2450 == NULL) goto __LL2451;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r75, 7))))
        __tmp2450 = PyTuple_GET_ITEM(cpy_r_r75, 7);
    else {
        __tmp2450 = NULL;
    }
    if (__tmp2450 == NULL) goto __LL2451;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r75, 8), CPyType_errorcodes___ErrorCode))
        __tmp2450 = PyTuple_GET_ITEM(cpy_r_r75, 8);
    else {
        __tmp2450 = NULL;
    }
    if (__tmp2450 != NULL) goto __LL2453;
    if (PyTuple_GET_ITEM(cpy_r_r75, 8) == Py_None)
        __tmp2450 = PyTuple_GET_ITEM(cpy_r_r75, 8);
    else {
        __tmp2450 = NULL;
    }
    if (__tmp2450 != NULL) goto __LL2453;
    __tmp2450 = NULL;
__LL2453: ;
    if (__tmp2450 == NULL) goto __LL2451;
    __tmp2450 = cpy_r_r75;
__LL2451: ;
    if (unlikely(__tmp2450 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r75); cpy_r_r76 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2454 = PyTuple_GET_ITEM(cpy_r_r75, 0);
        CPy_INCREF(__tmp2454);
        PyObject *__tmp2455;
        if (PyUnicode_Check(__tmp2454))
            __tmp2455 = __tmp2454;
        else {
            __tmp2455 = NULL;
        }
        if (__tmp2455 != NULL) goto __LL2456;
        if (__tmp2454 == Py_None)
            __tmp2455 = __tmp2454;
        else {
            __tmp2455 = NULL;
        }
        if (__tmp2455 != NULL) goto __LL2456;
        CPy_TypeError("str or None", __tmp2454); 
        __tmp2455 = NULL;
__LL2456: ;
        cpy_r_r76.f0 = __tmp2455;
        PyObject *__tmp2457 = PyTuple_GET_ITEM(cpy_r_r75, 1);
        CPyTagged __tmp2458;
        if (likely(PyLong_Check(__tmp2457)))
            __tmp2458 = CPyTagged_FromObject(__tmp2457);
        else {
            CPy_TypeError("int", __tmp2457); __tmp2458 = CPY_INT_TAG;
        }
        cpy_r_r76.f1 = __tmp2458;
        PyObject *__tmp2459 = PyTuple_GET_ITEM(cpy_r_r75, 2);
        CPyTagged __tmp2460;
        if (likely(PyLong_Check(__tmp2459)))
            __tmp2460 = CPyTagged_FromObject(__tmp2459);
        else {
            CPy_TypeError("int", __tmp2459); __tmp2460 = CPY_INT_TAG;
        }
        cpy_r_r76.f2 = __tmp2460;
        PyObject *__tmp2461 = PyTuple_GET_ITEM(cpy_r_r75, 3);
        CPyTagged __tmp2462;
        if (likely(PyLong_Check(__tmp2461)))
            __tmp2462 = CPyTagged_FromObject(__tmp2461);
        else {
            CPy_TypeError("int", __tmp2461); __tmp2462 = CPY_INT_TAG;
        }
        cpy_r_r76.f3 = __tmp2462;
        PyObject *__tmp2463 = PyTuple_GET_ITEM(cpy_r_r75, 4);
        CPyTagged __tmp2464;
        if (likely(PyLong_Check(__tmp2463)))
            __tmp2464 = CPyTagged_FromObject(__tmp2463);
        else {
            CPy_TypeError("int", __tmp2463); __tmp2464 = CPY_INT_TAG;
        }
        cpy_r_r76.f4 = __tmp2464;
        PyObject *__tmp2465 = PyTuple_GET_ITEM(cpy_r_r75, 5);
        CPy_INCREF(__tmp2465);
        PyObject *__tmp2466;
        if (likely(PyUnicode_Check(__tmp2465)))
            __tmp2466 = __tmp2465;
        else {
            CPy_TypeError("str", __tmp2465); 
            __tmp2466 = NULL;
        }
        cpy_r_r76.f5 = __tmp2466;
        PyObject *__tmp2467 = PyTuple_GET_ITEM(cpy_r_r75, 6);
        CPy_INCREF(__tmp2467);
        PyObject *__tmp2468;
        if (likely(PyUnicode_Check(__tmp2467)))
            __tmp2468 = __tmp2467;
        else {
            CPy_TypeError("str", __tmp2467); 
            __tmp2468 = NULL;
        }
        cpy_r_r76.f6 = __tmp2468;
        PyObject *__tmp2469 = PyTuple_GET_ITEM(cpy_r_r75, 7);
        char __tmp2470;
        if (unlikely(!PyBool_Check(__tmp2469))) {
            CPy_TypeError("bool", __tmp2469); __tmp2470 = 2;
        } else
            __tmp2470 = __tmp2469 == Py_True;
        cpy_r_r76.f7 = __tmp2470;
        PyObject *__tmp2471 = PyTuple_GET_ITEM(cpy_r_r75, 8);
        CPy_INCREF(__tmp2471);
        PyObject *__tmp2472;
        if (PyObject_TypeCheck(__tmp2471, CPyType_errorcodes___ErrorCode))
            __tmp2472 = __tmp2471;
        else {
            __tmp2472 = NULL;
        }
        if (__tmp2472 != NULL) goto __LL2473;
        if (__tmp2471 == Py_None)
            __tmp2472 = __tmp2471;
        else {
            __tmp2472 = NULL;
        }
        if (__tmp2472 != NULL) goto __LL2473;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2471); 
        __tmp2472 = NULL;
__LL2473: ;
        cpy_r_r76.f8 = __tmp2472;
    }
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1147, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    cpy_r_r77 = cpy_r_r76.f5;
    CPy_INCREF(cpy_r_r77);
    CPy_DECREF(cpy_r_r76.f0);
    CPyTagged_DECREF(cpy_r_r76.f1);
    CPyTagged_DECREF(cpy_r_r76.f2);
    CPyTagged_DECREF(cpy_r_r76.f3);
    CPyTagged_DECREF(cpy_r_r76.f4);
    CPy_DECREF(cpy_r_r76.f5);
    CPy_DECREF(cpy_r_r76.f6);
    CPy_DECREF(cpy_r_r76.f8);
    cpy_r_r78 = CPyStatics[413]; /* 'note' */
    cpy_r_r79 = PyUnicode_Compare(cpy_r_r77, cpy_r_r78);
    CPy_DECREF(cpy_r_r77);
    cpy_r_r80 = cpy_r_r79 == -1;
    if (!cpy_r_r80) goto CPyL59;
    cpy_r_r81 = PyErr_Occurred();
    cpy_r_r82 = cpy_r_r81 != NULL;
    if (!cpy_r_r82) goto CPyL59;
    cpy_r_r83 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1147, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
CPyL59: ;
    cpy_r_r84 = cpy_r_r79 == 0;
    if (!cpy_r_r84) goto CPyL69;
    cpy_r_r85 = CPyList_GetItem(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1147, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    PyObject *__tmp2474;
    if (unlikely(!(PyTuple_Check(cpy_r_r85) && PyTuple_GET_SIZE(cpy_r_r85) == 9))) {
        __tmp2474 = NULL;
        goto __LL2475;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r85, 0)))
        __tmp2474 = PyTuple_GET_ITEM(cpy_r_r85, 0);
    else {
        __tmp2474 = NULL;
    }
    if (__tmp2474 != NULL) goto __LL2476;
    if (PyTuple_GET_ITEM(cpy_r_r85, 0) == Py_None)
        __tmp2474 = PyTuple_GET_ITEM(cpy_r_r85, 0);
    else {
        __tmp2474 = NULL;
    }
    if (__tmp2474 != NULL) goto __LL2476;
    __tmp2474 = NULL;
__LL2476: ;
    if (__tmp2474 == NULL) goto __LL2475;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r85, 1))))
        __tmp2474 = PyTuple_GET_ITEM(cpy_r_r85, 1);
    else {
        __tmp2474 = NULL;
    }
    if (__tmp2474 == NULL) goto __LL2475;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r85, 2))))
        __tmp2474 = PyTuple_GET_ITEM(cpy_r_r85, 2);
    else {
        __tmp2474 = NULL;
    }
    if (__tmp2474 == NULL) goto __LL2475;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r85, 3))))
        __tmp2474 = PyTuple_GET_ITEM(cpy_r_r85, 3);
    else {
        __tmp2474 = NULL;
    }
    if (__tmp2474 == NULL) goto __LL2475;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r85, 4))))
        __tmp2474 = PyTuple_GET_ITEM(cpy_r_r85, 4);
    else {
        __tmp2474 = NULL;
    }
    if (__tmp2474 == NULL) goto __LL2475;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r85, 5))))
        __tmp2474 = PyTuple_GET_ITEM(cpy_r_r85, 5);
    else {
        __tmp2474 = NULL;
    }
    if (__tmp2474 == NULL) goto __LL2475;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r85, 6))))
        __tmp2474 = PyTuple_GET_ITEM(cpy_r_r85, 6);
    else {
        __tmp2474 = NULL;
    }
    if (__tmp2474 == NULL) goto __LL2475;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r85, 7))))
        __tmp2474 = PyTuple_GET_ITEM(cpy_r_r85, 7);
    else {
        __tmp2474 = NULL;
    }
    if (__tmp2474 == NULL) goto __LL2475;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r85, 8), CPyType_errorcodes___ErrorCode))
        __tmp2474 = PyTuple_GET_ITEM(cpy_r_r85, 8);
    else {
        __tmp2474 = NULL;
    }
    if (__tmp2474 != NULL) goto __LL2477;
    if (PyTuple_GET_ITEM(cpy_r_r85, 8) == Py_None)
        __tmp2474 = PyTuple_GET_ITEM(cpy_r_r85, 8);
    else {
        __tmp2474 = NULL;
    }
    if (__tmp2474 != NULL) goto __LL2477;
    __tmp2474 = NULL;
__LL2477: ;
    if (__tmp2474 == NULL) goto __LL2475;
    __tmp2474 = cpy_r_r85;
__LL2475: ;
    if (unlikely(__tmp2474 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r85); cpy_r_r86 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2478 = PyTuple_GET_ITEM(cpy_r_r85, 0);
        CPy_INCREF(__tmp2478);
        PyObject *__tmp2479;
        if (PyUnicode_Check(__tmp2478))
            __tmp2479 = __tmp2478;
        else {
            __tmp2479 = NULL;
        }
        if (__tmp2479 != NULL) goto __LL2480;
        if (__tmp2478 == Py_None)
            __tmp2479 = __tmp2478;
        else {
            __tmp2479 = NULL;
        }
        if (__tmp2479 != NULL) goto __LL2480;
        CPy_TypeError("str or None", __tmp2478); 
        __tmp2479 = NULL;
__LL2480: ;
        cpy_r_r86.f0 = __tmp2479;
        PyObject *__tmp2481 = PyTuple_GET_ITEM(cpy_r_r85, 1);
        CPyTagged __tmp2482;
        if (likely(PyLong_Check(__tmp2481)))
            __tmp2482 = CPyTagged_FromObject(__tmp2481);
        else {
            CPy_TypeError("int", __tmp2481); __tmp2482 = CPY_INT_TAG;
        }
        cpy_r_r86.f1 = __tmp2482;
        PyObject *__tmp2483 = PyTuple_GET_ITEM(cpy_r_r85, 2);
        CPyTagged __tmp2484;
        if (likely(PyLong_Check(__tmp2483)))
            __tmp2484 = CPyTagged_FromObject(__tmp2483);
        else {
            CPy_TypeError("int", __tmp2483); __tmp2484 = CPY_INT_TAG;
        }
        cpy_r_r86.f2 = __tmp2484;
        PyObject *__tmp2485 = PyTuple_GET_ITEM(cpy_r_r85, 3);
        CPyTagged __tmp2486;
        if (likely(PyLong_Check(__tmp2485)))
            __tmp2486 = CPyTagged_FromObject(__tmp2485);
        else {
            CPy_TypeError("int", __tmp2485); __tmp2486 = CPY_INT_TAG;
        }
        cpy_r_r86.f3 = __tmp2486;
        PyObject *__tmp2487 = PyTuple_GET_ITEM(cpy_r_r85, 4);
        CPyTagged __tmp2488;
        if (likely(PyLong_Check(__tmp2487)))
            __tmp2488 = CPyTagged_FromObject(__tmp2487);
        else {
            CPy_TypeError("int", __tmp2487); __tmp2488 = CPY_INT_TAG;
        }
        cpy_r_r86.f4 = __tmp2488;
        PyObject *__tmp2489 = PyTuple_GET_ITEM(cpy_r_r85, 5);
        CPy_INCREF(__tmp2489);
        PyObject *__tmp2490;
        if (likely(PyUnicode_Check(__tmp2489)))
            __tmp2490 = __tmp2489;
        else {
            CPy_TypeError("str", __tmp2489); 
            __tmp2490 = NULL;
        }
        cpy_r_r86.f5 = __tmp2490;
        PyObject *__tmp2491 = PyTuple_GET_ITEM(cpy_r_r85, 6);
        CPy_INCREF(__tmp2491);
        PyObject *__tmp2492;
        if (likely(PyUnicode_Check(__tmp2491)))
            __tmp2492 = __tmp2491;
        else {
            CPy_TypeError("str", __tmp2491); 
            __tmp2492 = NULL;
        }
        cpy_r_r86.f6 = __tmp2492;
        PyObject *__tmp2493 = PyTuple_GET_ITEM(cpy_r_r85, 7);
        char __tmp2494;
        if (unlikely(!PyBool_Check(__tmp2493))) {
            CPy_TypeError("bool", __tmp2493); __tmp2494 = 2;
        } else
            __tmp2494 = __tmp2493 == Py_True;
        cpy_r_r86.f7 = __tmp2494;
        PyObject *__tmp2495 = PyTuple_GET_ITEM(cpy_r_r85, 8);
        CPy_INCREF(__tmp2495);
        PyObject *__tmp2496;
        if (PyObject_TypeCheck(__tmp2495, CPyType_errorcodes___ErrorCode))
            __tmp2496 = __tmp2495;
        else {
            __tmp2496 = NULL;
        }
        if (__tmp2496 != NULL) goto __LL2497;
        if (__tmp2495 == Py_None)
            __tmp2496 = __tmp2495;
        else {
            __tmp2496 = NULL;
        }
        if (__tmp2496 != NULL) goto __LL2497;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2495); 
        __tmp2496 = NULL;
__LL2497: ;
        cpy_r_r86.f8 = __tmp2496;
    }
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1147, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    cpy_r_r87 = cpy_r_r86.f6;
    CPy_INCREF(cpy_r_r87);
    CPy_DECREF(cpy_r_r86.f0);
    CPyTagged_DECREF(cpy_r_r86.f1);
    CPyTagged_DECREF(cpy_r_r86.f2);
    CPyTagged_DECREF(cpy_r_r86.f3);
    CPyTagged_DECREF(cpy_r_r86.f4);
    CPy_DECREF(cpy_r_r86.f5);
    CPy_DECREF(cpy_r_r86.f6);
    CPy_DECREF(cpy_r_r86.f8);
    cpy_r_r88 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r89[1] = {cpy_r_r87};
    cpy_r_r90 = (PyObject **)&cpy_r_r89;
    cpy_r_r91 = PyObject_VectorcallMethod(cpy_r_r88, cpy_r_r90, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1147, CPyStatic_mypy___errors___globals);
        goto CPyL101;
    }
    CPy_DECREF(cpy_r_r87);
    if (likely(PyUnicode_Check(cpy_r_r91)))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "remove_duplicates", 1147, CPyStatic_mypy___errors___globals, "str", cpy_r_r91);
        goto CPyL93;
    }
    cpy_r_r93 = CPyStatic_mypy___errors___allowed_duplicates;
    if (unlikely(cpy_r_r93 == NULL)) {
        goto CPyL102;
    } else
        goto CPyL67;
CPyL65: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"allowed_duplicates\" was not set");
    cpy_r_r94 = 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1147, CPyStatic_mypy___errors___globals);
        goto CPyL91;
    }
    CPy_Unreachable();
CPyL67: ;
    cpy_r_r95 = PySequence_Contains(cpy_r_r93, cpy_r_r92);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r96 = cpy_r_r95 >= 0;
    if (unlikely(!cpy_r_r96)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1147, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    cpy_r_r97 = cpy_r_r95;
    if (cpy_r_r97) goto CPyL84;
CPyL69: ;
    cpy_r_r98 = CPyList_GetItem(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1148, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    PyObject *__tmp2498;
    if (unlikely(!(PyTuple_Check(cpy_r_r98) && PyTuple_GET_SIZE(cpy_r_r98) == 9))) {
        __tmp2498 = NULL;
        goto __LL2499;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r98, 0)))
        __tmp2498 = PyTuple_GET_ITEM(cpy_r_r98, 0);
    else {
        __tmp2498 = NULL;
    }
    if (__tmp2498 != NULL) goto __LL2500;
    if (PyTuple_GET_ITEM(cpy_r_r98, 0) == Py_None)
        __tmp2498 = PyTuple_GET_ITEM(cpy_r_r98, 0);
    else {
        __tmp2498 = NULL;
    }
    if (__tmp2498 != NULL) goto __LL2500;
    __tmp2498 = NULL;
__LL2500: ;
    if (__tmp2498 == NULL) goto __LL2499;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r98, 1))))
        __tmp2498 = PyTuple_GET_ITEM(cpy_r_r98, 1);
    else {
        __tmp2498 = NULL;
    }
    if (__tmp2498 == NULL) goto __LL2499;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r98, 2))))
        __tmp2498 = PyTuple_GET_ITEM(cpy_r_r98, 2);
    else {
        __tmp2498 = NULL;
    }
    if (__tmp2498 == NULL) goto __LL2499;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r98, 3))))
        __tmp2498 = PyTuple_GET_ITEM(cpy_r_r98, 3);
    else {
        __tmp2498 = NULL;
    }
    if (__tmp2498 == NULL) goto __LL2499;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r98, 4))))
        __tmp2498 = PyTuple_GET_ITEM(cpy_r_r98, 4);
    else {
        __tmp2498 = NULL;
    }
    if (__tmp2498 == NULL) goto __LL2499;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r98, 5))))
        __tmp2498 = PyTuple_GET_ITEM(cpy_r_r98, 5);
    else {
        __tmp2498 = NULL;
    }
    if (__tmp2498 == NULL) goto __LL2499;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r98, 6))))
        __tmp2498 = PyTuple_GET_ITEM(cpy_r_r98, 6);
    else {
        __tmp2498 = NULL;
    }
    if (__tmp2498 == NULL) goto __LL2499;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r98, 7))))
        __tmp2498 = PyTuple_GET_ITEM(cpy_r_r98, 7);
    else {
        __tmp2498 = NULL;
    }
    if (__tmp2498 == NULL) goto __LL2499;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r98, 8), CPyType_errorcodes___ErrorCode))
        __tmp2498 = PyTuple_GET_ITEM(cpy_r_r98, 8);
    else {
        __tmp2498 = NULL;
    }
    if (__tmp2498 != NULL) goto __LL2501;
    if (PyTuple_GET_ITEM(cpy_r_r98, 8) == Py_None)
        __tmp2498 = PyTuple_GET_ITEM(cpy_r_r98, 8);
    else {
        __tmp2498 = NULL;
    }
    if (__tmp2498 != NULL) goto __LL2501;
    __tmp2498 = NULL;
__LL2501: ;
    if (__tmp2498 == NULL) goto __LL2499;
    __tmp2498 = cpy_r_r98;
__LL2499: ;
    if (unlikely(__tmp2498 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r98); cpy_r_r99 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2502 = PyTuple_GET_ITEM(cpy_r_r98, 0);
        CPy_INCREF(__tmp2502);
        PyObject *__tmp2503;
        if (PyUnicode_Check(__tmp2502))
            __tmp2503 = __tmp2502;
        else {
            __tmp2503 = NULL;
        }
        if (__tmp2503 != NULL) goto __LL2504;
        if (__tmp2502 == Py_None)
            __tmp2503 = __tmp2502;
        else {
            __tmp2503 = NULL;
        }
        if (__tmp2503 != NULL) goto __LL2504;
        CPy_TypeError("str or None", __tmp2502); 
        __tmp2503 = NULL;
__LL2504: ;
        cpy_r_r99.f0 = __tmp2503;
        PyObject *__tmp2505 = PyTuple_GET_ITEM(cpy_r_r98, 1);
        CPyTagged __tmp2506;
        if (likely(PyLong_Check(__tmp2505)))
            __tmp2506 = CPyTagged_FromObject(__tmp2505);
        else {
            CPy_TypeError("int", __tmp2505); __tmp2506 = CPY_INT_TAG;
        }
        cpy_r_r99.f1 = __tmp2506;
        PyObject *__tmp2507 = PyTuple_GET_ITEM(cpy_r_r98, 2);
        CPyTagged __tmp2508;
        if (likely(PyLong_Check(__tmp2507)))
            __tmp2508 = CPyTagged_FromObject(__tmp2507);
        else {
            CPy_TypeError("int", __tmp2507); __tmp2508 = CPY_INT_TAG;
        }
        cpy_r_r99.f2 = __tmp2508;
        PyObject *__tmp2509 = PyTuple_GET_ITEM(cpy_r_r98, 3);
        CPyTagged __tmp2510;
        if (likely(PyLong_Check(__tmp2509)))
            __tmp2510 = CPyTagged_FromObject(__tmp2509);
        else {
            CPy_TypeError("int", __tmp2509); __tmp2510 = CPY_INT_TAG;
        }
        cpy_r_r99.f3 = __tmp2510;
        PyObject *__tmp2511 = PyTuple_GET_ITEM(cpy_r_r98, 4);
        CPyTagged __tmp2512;
        if (likely(PyLong_Check(__tmp2511)))
            __tmp2512 = CPyTagged_FromObject(__tmp2511);
        else {
            CPy_TypeError("int", __tmp2511); __tmp2512 = CPY_INT_TAG;
        }
        cpy_r_r99.f4 = __tmp2512;
        PyObject *__tmp2513 = PyTuple_GET_ITEM(cpy_r_r98, 5);
        CPy_INCREF(__tmp2513);
        PyObject *__tmp2514;
        if (likely(PyUnicode_Check(__tmp2513)))
            __tmp2514 = __tmp2513;
        else {
            CPy_TypeError("str", __tmp2513); 
            __tmp2514 = NULL;
        }
        cpy_r_r99.f5 = __tmp2514;
        PyObject *__tmp2515 = PyTuple_GET_ITEM(cpy_r_r98, 6);
        CPy_INCREF(__tmp2515);
        PyObject *__tmp2516;
        if (likely(PyUnicode_Check(__tmp2515)))
            __tmp2516 = __tmp2515;
        else {
            CPy_TypeError("str", __tmp2515); 
            __tmp2516 = NULL;
        }
        cpy_r_r99.f6 = __tmp2516;
        PyObject *__tmp2517 = PyTuple_GET_ITEM(cpy_r_r98, 7);
        char __tmp2518;
        if (unlikely(!PyBool_Check(__tmp2517))) {
            CPy_TypeError("bool", __tmp2517); __tmp2518 = 2;
        } else
            __tmp2518 = __tmp2517 == Py_True;
        cpy_r_r99.f7 = __tmp2518;
        PyObject *__tmp2519 = PyTuple_GET_ITEM(cpy_r_r98, 8);
        CPy_INCREF(__tmp2519);
        PyObject *__tmp2520;
        if (PyObject_TypeCheck(__tmp2519, CPyType_errorcodes___ErrorCode))
            __tmp2520 = __tmp2519;
        else {
            __tmp2520 = NULL;
        }
        if (__tmp2520 != NULL) goto __LL2521;
        if (__tmp2519 == Py_None)
            __tmp2520 = __tmp2519;
        else {
            __tmp2520 = NULL;
        }
        if (__tmp2520 != NULL) goto __LL2521;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2519); 
        __tmp2520 = NULL;
__LL2521: ;
        cpy_r_r99.f8 = __tmp2520;
    }
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r99.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1148, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    cpy_r_r100 = cpy_r_r99.f6;
    CPy_INCREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r99.f0);
    CPyTagged_DECREF(cpy_r_r99.f1);
    CPyTagged_DECREF(cpy_r_r99.f2);
    CPyTagged_DECREF(cpy_r_r99.f3);
    CPyTagged_DECREF(cpy_r_r99.f4);
    CPy_DECREF(cpy_r_r99.f5);
    CPy_DECREF(cpy_r_r99.f6);
    CPy_DECREF(cpy_r_r99.f8);
    cpy_r_r101 = CPyStatics[206]; /* 'strip' */
    PyObject *cpy_r_r102[1] = {cpy_r_r100};
    cpy_r_r103 = (PyObject **)&cpy_r_r102;
    cpy_r_r104 = PyObject_VectorcallMethod(cpy_r_r101, cpy_r_r103, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1148, CPyStatic_mypy___errors___globals);
        goto CPyL103;
    }
    CPy_DECREF(cpy_r_r100);
    if (likely(PyUnicode_Check(cpy_r_r104)))
        cpy_r_r105 = cpy_r_r104;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "remove_duplicates", 1148, CPyStatic_mypy___errors___globals, "str", cpy_r_r104);
        goto CPyL93;
    }
    cpy_r_r106 = CPyStatics[2244]; /* 'def ' */
    cpy_r_r107 = CPyStr_Startswith(cpy_r_r105, cpy_r_r106);
    CPy_DECREF(cpy_r_r105);
    if (!cpy_r_r107) goto CPyL75;
    if (cpy_r_conflicts_notes) goto CPyL84;
CPyL75: ;
    cpy_r_r108 = CPyList_GetItem(cpy_r_errors, cpy_r_j);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1150, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    PyObject *__tmp2522;
    if (unlikely(!(PyTuple_Check(cpy_r_r108) && PyTuple_GET_SIZE(cpy_r_r108) == 9))) {
        __tmp2522 = NULL;
        goto __LL2523;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r108, 0)))
        __tmp2522 = PyTuple_GET_ITEM(cpy_r_r108, 0);
    else {
        __tmp2522 = NULL;
    }
    if (__tmp2522 != NULL) goto __LL2524;
    if (PyTuple_GET_ITEM(cpy_r_r108, 0) == Py_None)
        __tmp2522 = PyTuple_GET_ITEM(cpy_r_r108, 0);
    else {
        __tmp2522 = NULL;
    }
    if (__tmp2522 != NULL) goto __LL2524;
    __tmp2522 = NULL;
__LL2524: ;
    if (__tmp2522 == NULL) goto __LL2523;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r108, 1))))
        __tmp2522 = PyTuple_GET_ITEM(cpy_r_r108, 1);
    else {
        __tmp2522 = NULL;
    }
    if (__tmp2522 == NULL) goto __LL2523;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r108, 2))))
        __tmp2522 = PyTuple_GET_ITEM(cpy_r_r108, 2);
    else {
        __tmp2522 = NULL;
    }
    if (__tmp2522 == NULL) goto __LL2523;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r108, 3))))
        __tmp2522 = PyTuple_GET_ITEM(cpy_r_r108, 3);
    else {
        __tmp2522 = NULL;
    }
    if (__tmp2522 == NULL) goto __LL2523;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r108, 4))))
        __tmp2522 = PyTuple_GET_ITEM(cpy_r_r108, 4);
    else {
        __tmp2522 = NULL;
    }
    if (__tmp2522 == NULL) goto __LL2523;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r108, 5))))
        __tmp2522 = PyTuple_GET_ITEM(cpy_r_r108, 5);
    else {
        __tmp2522 = NULL;
    }
    if (__tmp2522 == NULL) goto __LL2523;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r108, 6))))
        __tmp2522 = PyTuple_GET_ITEM(cpy_r_r108, 6);
    else {
        __tmp2522 = NULL;
    }
    if (__tmp2522 == NULL) goto __LL2523;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r108, 7))))
        __tmp2522 = PyTuple_GET_ITEM(cpy_r_r108, 7);
    else {
        __tmp2522 = NULL;
    }
    if (__tmp2522 == NULL) goto __LL2523;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r108, 8), CPyType_errorcodes___ErrorCode))
        __tmp2522 = PyTuple_GET_ITEM(cpy_r_r108, 8);
    else {
        __tmp2522 = NULL;
    }
    if (__tmp2522 != NULL) goto __LL2525;
    if (PyTuple_GET_ITEM(cpy_r_r108, 8) == Py_None)
        __tmp2522 = PyTuple_GET_ITEM(cpy_r_r108, 8);
    else {
        __tmp2522 = NULL;
    }
    if (__tmp2522 != NULL) goto __LL2525;
    __tmp2522 = NULL;
__LL2525: ;
    if (__tmp2522 == NULL) goto __LL2523;
    __tmp2522 = cpy_r_r108;
__LL2523: ;
    if (unlikely(__tmp2522 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r108); cpy_r_r109 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2526 = PyTuple_GET_ITEM(cpy_r_r108, 0);
        CPy_INCREF(__tmp2526);
        PyObject *__tmp2527;
        if (PyUnicode_Check(__tmp2526))
            __tmp2527 = __tmp2526;
        else {
            __tmp2527 = NULL;
        }
        if (__tmp2527 != NULL) goto __LL2528;
        if (__tmp2526 == Py_None)
            __tmp2527 = __tmp2526;
        else {
            __tmp2527 = NULL;
        }
        if (__tmp2527 != NULL) goto __LL2528;
        CPy_TypeError("str or None", __tmp2526); 
        __tmp2527 = NULL;
__LL2528: ;
        cpy_r_r109.f0 = __tmp2527;
        PyObject *__tmp2529 = PyTuple_GET_ITEM(cpy_r_r108, 1);
        CPyTagged __tmp2530;
        if (likely(PyLong_Check(__tmp2529)))
            __tmp2530 = CPyTagged_FromObject(__tmp2529);
        else {
            CPy_TypeError("int", __tmp2529); __tmp2530 = CPY_INT_TAG;
        }
        cpy_r_r109.f1 = __tmp2530;
        PyObject *__tmp2531 = PyTuple_GET_ITEM(cpy_r_r108, 2);
        CPyTagged __tmp2532;
        if (likely(PyLong_Check(__tmp2531)))
            __tmp2532 = CPyTagged_FromObject(__tmp2531);
        else {
            CPy_TypeError("int", __tmp2531); __tmp2532 = CPY_INT_TAG;
        }
        cpy_r_r109.f2 = __tmp2532;
        PyObject *__tmp2533 = PyTuple_GET_ITEM(cpy_r_r108, 3);
        CPyTagged __tmp2534;
        if (likely(PyLong_Check(__tmp2533)))
            __tmp2534 = CPyTagged_FromObject(__tmp2533);
        else {
            CPy_TypeError("int", __tmp2533); __tmp2534 = CPY_INT_TAG;
        }
        cpy_r_r109.f3 = __tmp2534;
        PyObject *__tmp2535 = PyTuple_GET_ITEM(cpy_r_r108, 4);
        CPyTagged __tmp2536;
        if (likely(PyLong_Check(__tmp2535)))
            __tmp2536 = CPyTagged_FromObject(__tmp2535);
        else {
            CPy_TypeError("int", __tmp2535); __tmp2536 = CPY_INT_TAG;
        }
        cpy_r_r109.f4 = __tmp2536;
        PyObject *__tmp2537 = PyTuple_GET_ITEM(cpy_r_r108, 5);
        CPy_INCREF(__tmp2537);
        PyObject *__tmp2538;
        if (likely(PyUnicode_Check(__tmp2537)))
            __tmp2538 = __tmp2537;
        else {
            CPy_TypeError("str", __tmp2537); 
            __tmp2538 = NULL;
        }
        cpy_r_r109.f5 = __tmp2538;
        PyObject *__tmp2539 = PyTuple_GET_ITEM(cpy_r_r108, 6);
        CPy_INCREF(__tmp2539);
        PyObject *__tmp2540;
        if (likely(PyUnicode_Check(__tmp2539)))
            __tmp2540 = __tmp2539;
        else {
            CPy_TypeError("str", __tmp2539); 
            __tmp2540 = NULL;
        }
        cpy_r_r109.f6 = __tmp2540;
        PyObject *__tmp2541 = PyTuple_GET_ITEM(cpy_r_r108, 7);
        char __tmp2542;
        if (unlikely(!PyBool_Check(__tmp2541))) {
            CPy_TypeError("bool", __tmp2541); __tmp2542 = 2;
        } else
            __tmp2542 = __tmp2541 == Py_True;
        cpy_r_r109.f7 = __tmp2542;
        PyObject *__tmp2543 = PyTuple_GET_ITEM(cpy_r_r108, 8);
        CPy_INCREF(__tmp2543);
        PyObject *__tmp2544;
        if (PyObject_TypeCheck(__tmp2543, CPyType_errorcodes___ErrorCode))
            __tmp2544 = __tmp2543;
        else {
            __tmp2544 = NULL;
        }
        if (__tmp2544 != NULL) goto __LL2545;
        if (__tmp2543 == Py_None)
            __tmp2544 = __tmp2543;
        else {
            __tmp2544 = NULL;
        }
        if (__tmp2544 != NULL) goto __LL2545;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2543); 
        __tmp2544 = NULL;
__LL2545: ;
        cpy_r_r109.f8 = __tmp2544;
    }
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1150, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
    cpy_r_r110 = cpy_r_r109.f6;
    CPy_INCREF(cpy_r_r110);
    CPy_DECREF(cpy_r_r109.f0);
    CPyTagged_DECREF(cpy_r_r109.f1);
    CPyTagged_DECREF(cpy_r_r109.f2);
    CPyTagged_DECREF(cpy_r_r109.f3);
    CPyTagged_DECREF(cpy_r_r109.f4);
    CPy_DECREF(cpy_r_r109.f5);
    CPy_DECREF(cpy_r_r109.f6);
    CPy_DECREF(cpy_r_r109.f8);
    cpy_r_r111 = CPyList_GetItem(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1150, CPyStatic_mypy___errors___globals);
        goto CPyL104;
    }
    PyObject *__tmp2546;
    if (unlikely(!(PyTuple_Check(cpy_r_r111) && PyTuple_GET_SIZE(cpy_r_r111) == 9))) {
        __tmp2546 = NULL;
        goto __LL2547;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r111, 0)))
        __tmp2546 = PyTuple_GET_ITEM(cpy_r_r111, 0);
    else {
        __tmp2546 = NULL;
    }
    if (__tmp2546 != NULL) goto __LL2548;
    if (PyTuple_GET_ITEM(cpy_r_r111, 0) == Py_None)
        __tmp2546 = PyTuple_GET_ITEM(cpy_r_r111, 0);
    else {
        __tmp2546 = NULL;
    }
    if (__tmp2546 != NULL) goto __LL2548;
    __tmp2546 = NULL;
__LL2548: ;
    if (__tmp2546 == NULL) goto __LL2547;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r111, 1))))
        __tmp2546 = PyTuple_GET_ITEM(cpy_r_r111, 1);
    else {
        __tmp2546 = NULL;
    }
    if (__tmp2546 == NULL) goto __LL2547;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r111, 2))))
        __tmp2546 = PyTuple_GET_ITEM(cpy_r_r111, 2);
    else {
        __tmp2546 = NULL;
    }
    if (__tmp2546 == NULL) goto __LL2547;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r111, 3))))
        __tmp2546 = PyTuple_GET_ITEM(cpy_r_r111, 3);
    else {
        __tmp2546 = NULL;
    }
    if (__tmp2546 == NULL) goto __LL2547;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r111, 4))))
        __tmp2546 = PyTuple_GET_ITEM(cpy_r_r111, 4);
    else {
        __tmp2546 = NULL;
    }
    if (__tmp2546 == NULL) goto __LL2547;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r111, 5))))
        __tmp2546 = PyTuple_GET_ITEM(cpy_r_r111, 5);
    else {
        __tmp2546 = NULL;
    }
    if (__tmp2546 == NULL) goto __LL2547;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r111, 6))))
        __tmp2546 = PyTuple_GET_ITEM(cpy_r_r111, 6);
    else {
        __tmp2546 = NULL;
    }
    if (__tmp2546 == NULL) goto __LL2547;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r111, 7))))
        __tmp2546 = PyTuple_GET_ITEM(cpy_r_r111, 7);
    else {
        __tmp2546 = NULL;
    }
    if (__tmp2546 == NULL) goto __LL2547;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r111, 8), CPyType_errorcodes___ErrorCode))
        __tmp2546 = PyTuple_GET_ITEM(cpy_r_r111, 8);
    else {
        __tmp2546 = NULL;
    }
    if (__tmp2546 != NULL) goto __LL2549;
    if (PyTuple_GET_ITEM(cpy_r_r111, 8) == Py_None)
        __tmp2546 = PyTuple_GET_ITEM(cpy_r_r111, 8);
    else {
        __tmp2546 = NULL;
    }
    if (__tmp2546 != NULL) goto __LL2549;
    __tmp2546 = NULL;
__LL2549: ;
    if (__tmp2546 == NULL) goto __LL2547;
    __tmp2546 = cpy_r_r111;
__LL2547: ;
    if (unlikely(__tmp2546 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r111); cpy_r_r112 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2550 = PyTuple_GET_ITEM(cpy_r_r111, 0);
        CPy_INCREF(__tmp2550);
        PyObject *__tmp2551;
        if (PyUnicode_Check(__tmp2550))
            __tmp2551 = __tmp2550;
        else {
            __tmp2551 = NULL;
        }
        if (__tmp2551 != NULL) goto __LL2552;
        if (__tmp2550 == Py_None)
            __tmp2551 = __tmp2550;
        else {
            __tmp2551 = NULL;
        }
        if (__tmp2551 != NULL) goto __LL2552;
        CPy_TypeError("str or None", __tmp2550); 
        __tmp2551 = NULL;
__LL2552: ;
        cpy_r_r112.f0 = __tmp2551;
        PyObject *__tmp2553 = PyTuple_GET_ITEM(cpy_r_r111, 1);
        CPyTagged __tmp2554;
        if (likely(PyLong_Check(__tmp2553)))
            __tmp2554 = CPyTagged_FromObject(__tmp2553);
        else {
            CPy_TypeError("int", __tmp2553); __tmp2554 = CPY_INT_TAG;
        }
        cpy_r_r112.f1 = __tmp2554;
        PyObject *__tmp2555 = PyTuple_GET_ITEM(cpy_r_r111, 2);
        CPyTagged __tmp2556;
        if (likely(PyLong_Check(__tmp2555)))
            __tmp2556 = CPyTagged_FromObject(__tmp2555);
        else {
            CPy_TypeError("int", __tmp2555); __tmp2556 = CPY_INT_TAG;
        }
        cpy_r_r112.f2 = __tmp2556;
        PyObject *__tmp2557 = PyTuple_GET_ITEM(cpy_r_r111, 3);
        CPyTagged __tmp2558;
        if (likely(PyLong_Check(__tmp2557)))
            __tmp2558 = CPyTagged_FromObject(__tmp2557);
        else {
            CPy_TypeError("int", __tmp2557); __tmp2558 = CPY_INT_TAG;
        }
        cpy_r_r112.f3 = __tmp2558;
        PyObject *__tmp2559 = PyTuple_GET_ITEM(cpy_r_r111, 4);
        CPyTagged __tmp2560;
        if (likely(PyLong_Check(__tmp2559)))
            __tmp2560 = CPyTagged_FromObject(__tmp2559);
        else {
            CPy_TypeError("int", __tmp2559); __tmp2560 = CPY_INT_TAG;
        }
        cpy_r_r112.f4 = __tmp2560;
        PyObject *__tmp2561 = PyTuple_GET_ITEM(cpy_r_r111, 5);
        CPy_INCREF(__tmp2561);
        PyObject *__tmp2562;
        if (likely(PyUnicode_Check(__tmp2561)))
            __tmp2562 = __tmp2561;
        else {
            CPy_TypeError("str", __tmp2561); 
            __tmp2562 = NULL;
        }
        cpy_r_r112.f5 = __tmp2562;
        PyObject *__tmp2563 = PyTuple_GET_ITEM(cpy_r_r111, 6);
        CPy_INCREF(__tmp2563);
        PyObject *__tmp2564;
        if (likely(PyUnicode_Check(__tmp2563)))
            __tmp2564 = __tmp2563;
        else {
            CPy_TypeError("str", __tmp2563); 
            __tmp2564 = NULL;
        }
        cpy_r_r112.f6 = __tmp2564;
        PyObject *__tmp2565 = PyTuple_GET_ITEM(cpy_r_r111, 7);
        char __tmp2566;
        if (unlikely(!PyBool_Check(__tmp2565))) {
            CPy_TypeError("bool", __tmp2565); __tmp2566 = 2;
        } else
            __tmp2566 = __tmp2565 == Py_True;
        cpy_r_r112.f7 = __tmp2566;
        PyObject *__tmp2567 = PyTuple_GET_ITEM(cpy_r_r111, 8);
        CPy_INCREF(__tmp2567);
        PyObject *__tmp2568;
        if (PyObject_TypeCheck(__tmp2567, CPyType_errorcodes___ErrorCode))
            __tmp2568 = __tmp2567;
        else {
            __tmp2568 = NULL;
        }
        if (__tmp2568 != NULL) goto __LL2569;
        if (__tmp2567 == Py_None)
            __tmp2568 = __tmp2567;
        else {
            __tmp2568 = NULL;
        }
        if (__tmp2568 != NULL) goto __LL2569;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2567); 
        __tmp2568 = NULL;
__LL2569: ;
        cpy_r_r112.f8 = __tmp2568;
    }
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r112.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1150, CPyStatic_mypy___errors___globals);
        goto CPyL104;
    }
    cpy_r_r113 = cpy_r_r112.f6;
    CPy_INCREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r112.f0);
    CPyTagged_DECREF(cpy_r_r112.f1);
    CPyTagged_DECREF(cpy_r_r112.f2);
    CPyTagged_DECREF(cpy_r_r112.f3);
    CPyTagged_DECREF(cpy_r_r112.f4);
    CPy_DECREF(cpy_r_r112.f5);
    CPy_DECREF(cpy_r_r112.f6);
    CPy_DECREF(cpy_r_r112.f8);
    cpy_r_r114 = PyUnicode_Compare(cpy_r_r110, cpy_r_r113);
    CPy_DECREF(cpy_r_r110);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r115 = cpy_r_r114 == -1;
    if (!cpy_r_r115) goto CPyL82;
    cpy_r_r116 = PyErr_Occurred();
    cpy_r_r117 = cpy_r_r116 != NULL;
    if (!cpy_r_r117) goto CPyL82;
    cpy_r_r118 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1150, CPyStatic_mypy___errors___globals);
        goto CPyL93;
    }
CPyL82: ;
    cpy_r_r119 = cpy_r_r114 == 0;
    if (cpy_r_r119) {
        goto CPyL105;
    } else
        goto CPyL84;
CPyL83: ;
    cpy_r_dup = 1;
    goto CPyL85;
CPyL84: ;
    cpy_r_r120 = CPyTagged_Subtract(cpy_r_j, 2);
    CPyTagged_DECREF(cpy_r_j);
    cpy_r_j = cpy_r_r120;
    goto CPyL29;
CPyL85: ;
    if (cpy_r_dup) goto CPyL89;
    cpy_r_r121 = CPyList_GetItem(cpy_r_errors, cpy_r_i);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1156, CPyStatic_mypy___errors___globals);
        goto CPyL106;
    }
    PyObject *__tmp2570;
    if (unlikely(!(PyTuple_Check(cpy_r_r121) && PyTuple_GET_SIZE(cpy_r_r121) == 9))) {
        __tmp2570 = NULL;
        goto __LL2571;
    }
    if (PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r121, 0)))
        __tmp2570 = PyTuple_GET_ITEM(cpy_r_r121, 0);
    else {
        __tmp2570 = NULL;
    }
    if (__tmp2570 != NULL) goto __LL2572;
    if (PyTuple_GET_ITEM(cpy_r_r121, 0) == Py_None)
        __tmp2570 = PyTuple_GET_ITEM(cpy_r_r121, 0);
    else {
        __tmp2570 = NULL;
    }
    if (__tmp2570 != NULL) goto __LL2572;
    __tmp2570 = NULL;
__LL2572: ;
    if (__tmp2570 == NULL) goto __LL2571;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r121, 1))))
        __tmp2570 = PyTuple_GET_ITEM(cpy_r_r121, 1);
    else {
        __tmp2570 = NULL;
    }
    if (__tmp2570 == NULL) goto __LL2571;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r121, 2))))
        __tmp2570 = PyTuple_GET_ITEM(cpy_r_r121, 2);
    else {
        __tmp2570 = NULL;
    }
    if (__tmp2570 == NULL) goto __LL2571;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r121, 3))))
        __tmp2570 = PyTuple_GET_ITEM(cpy_r_r121, 3);
    else {
        __tmp2570 = NULL;
    }
    if (__tmp2570 == NULL) goto __LL2571;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r121, 4))))
        __tmp2570 = PyTuple_GET_ITEM(cpy_r_r121, 4);
    else {
        __tmp2570 = NULL;
    }
    if (__tmp2570 == NULL) goto __LL2571;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r121, 5))))
        __tmp2570 = PyTuple_GET_ITEM(cpy_r_r121, 5);
    else {
        __tmp2570 = NULL;
    }
    if (__tmp2570 == NULL) goto __LL2571;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r121, 6))))
        __tmp2570 = PyTuple_GET_ITEM(cpy_r_r121, 6);
    else {
        __tmp2570 = NULL;
    }
    if (__tmp2570 == NULL) goto __LL2571;
    if (likely(PyBool_Check(PyTuple_GET_ITEM(cpy_r_r121, 7))))
        __tmp2570 = PyTuple_GET_ITEM(cpy_r_r121, 7);
    else {
        __tmp2570 = NULL;
    }
    if (__tmp2570 == NULL) goto __LL2571;
    if (PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r121, 8), CPyType_errorcodes___ErrorCode))
        __tmp2570 = PyTuple_GET_ITEM(cpy_r_r121, 8);
    else {
        __tmp2570 = NULL;
    }
    if (__tmp2570 != NULL) goto __LL2573;
    if (PyTuple_GET_ITEM(cpy_r_r121, 8) == Py_None)
        __tmp2570 = PyTuple_GET_ITEM(cpy_r_r121, 8);
    else {
        __tmp2570 = NULL;
    }
    if (__tmp2570 != NULL) goto __LL2573;
    __tmp2570 = NULL;
__LL2573: ;
    if (__tmp2570 == NULL) goto __LL2571;
    __tmp2570 = cpy_r_r121;
__LL2571: ;
    if (unlikely(__tmp2570 == NULL)) {
        CPy_TypeError("tuple[union[str, None], int, int, int, int, str, str, bool, union[mypy.errorcodes.ErrorCode, None]]", cpy_r_r121); cpy_r_r122 = (tuple_T9OIIIIOOCO) { NULL, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, CPY_INT_TAG, NULL, NULL, 2, NULL };
    } else {
        PyObject *__tmp2574 = PyTuple_GET_ITEM(cpy_r_r121, 0);
        CPy_INCREF(__tmp2574);
        PyObject *__tmp2575;
        if (PyUnicode_Check(__tmp2574))
            __tmp2575 = __tmp2574;
        else {
            __tmp2575 = NULL;
        }
        if (__tmp2575 != NULL) goto __LL2576;
        if (__tmp2574 == Py_None)
            __tmp2575 = __tmp2574;
        else {
            __tmp2575 = NULL;
        }
        if (__tmp2575 != NULL) goto __LL2576;
        CPy_TypeError("str or None", __tmp2574); 
        __tmp2575 = NULL;
__LL2576: ;
        cpy_r_r122.f0 = __tmp2575;
        PyObject *__tmp2577 = PyTuple_GET_ITEM(cpy_r_r121, 1);
        CPyTagged __tmp2578;
        if (likely(PyLong_Check(__tmp2577)))
            __tmp2578 = CPyTagged_FromObject(__tmp2577);
        else {
            CPy_TypeError("int", __tmp2577); __tmp2578 = CPY_INT_TAG;
        }
        cpy_r_r122.f1 = __tmp2578;
        PyObject *__tmp2579 = PyTuple_GET_ITEM(cpy_r_r121, 2);
        CPyTagged __tmp2580;
        if (likely(PyLong_Check(__tmp2579)))
            __tmp2580 = CPyTagged_FromObject(__tmp2579);
        else {
            CPy_TypeError("int", __tmp2579); __tmp2580 = CPY_INT_TAG;
        }
        cpy_r_r122.f2 = __tmp2580;
        PyObject *__tmp2581 = PyTuple_GET_ITEM(cpy_r_r121, 3);
        CPyTagged __tmp2582;
        if (likely(PyLong_Check(__tmp2581)))
            __tmp2582 = CPyTagged_FromObject(__tmp2581);
        else {
            CPy_TypeError("int", __tmp2581); __tmp2582 = CPY_INT_TAG;
        }
        cpy_r_r122.f3 = __tmp2582;
        PyObject *__tmp2583 = PyTuple_GET_ITEM(cpy_r_r121, 4);
        CPyTagged __tmp2584;
        if (likely(PyLong_Check(__tmp2583)))
            __tmp2584 = CPyTagged_FromObject(__tmp2583);
        else {
            CPy_TypeError("int", __tmp2583); __tmp2584 = CPY_INT_TAG;
        }
        cpy_r_r122.f4 = __tmp2584;
        PyObject *__tmp2585 = PyTuple_GET_ITEM(cpy_r_r121, 5);
        CPy_INCREF(__tmp2585);
        PyObject *__tmp2586;
        if (likely(PyUnicode_Check(__tmp2585)))
            __tmp2586 = __tmp2585;
        else {
            CPy_TypeError("str", __tmp2585); 
            __tmp2586 = NULL;
        }
        cpy_r_r122.f5 = __tmp2586;
        PyObject *__tmp2587 = PyTuple_GET_ITEM(cpy_r_r121, 6);
        CPy_INCREF(__tmp2587);
        PyObject *__tmp2588;
        if (likely(PyUnicode_Check(__tmp2587)))
            __tmp2588 = __tmp2587;
        else {
            CPy_TypeError("str", __tmp2587); 
            __tmp2588 = NULL;
        }
        cpy_r_r122.f6 = __tmp2588;
        PyObject *__tmp2589 = PyTuple_GET_ITEM(cpy_r_r121, 7);
        char __tmp2590;
        if (unlikely(!PyBool_Check(__tmp2589))) {
            CPy_TypeError("bool", __tmp2589); __tmp2590 = 2;
        } else
            __tmp2590 = __tmp2589 == Py_True;
        cpy_r_r122.f7 = __tmp2590;
        PyObject *__tmp2591 = PyTuple_GET_ITEM(cpy_r_r121, 8);
        CPy_INCREF(__tmp2591);
        PyObject *__tmp2592;
        if (PyObject_TypeCheck(__tmp2591, CPyType_errorcodes___ErrorCode))
            __tmp2592 = __tmp2591;
        else {
            __tmp2592 = NULL;
        }
        if (__tmp2592 != NULL) goto __LL2593;
        if (__tmp2591 == Py_None)
            __tmp2592 = __tmp2591;
        else {
            __tmp2592 = NULL;
        }
        if (__tmp2592 != NULL) goto __LL2593;
        CPy_TypeError("mypy.errorcodes.ErrorCode or None", __tmp2591); 
        __tmp2592 = NULL;
__LL2593: ;
        cpy_r_r122.f8 = __tmp2592;
    }
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r122.f0 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1156, CPyStatic_mypy___errors___globals);
        goto CPyL106;
    }
    cpy_r_r123 = PyTuple_New(9);
    if (unlikely(cpy_r_r123 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2594 = cpy_r_r122.f0;
    PyTuple_SET_ITEM(cpy_r_r123, 0, __tmp2594);
    PyObject *__tmp2595 = CPyTagged_StealAsObject(cpy_r_r122.f1);
    PyTuple_SET_ITEM(cpy_r_r123, 1, __tmp2595);
    PyObject *__tmp2596 = CPyTagged_StealAsObject(cpy_r_r122.f2);
    PyTuple_SET_ITEM(cpy_r_r123, 2, __tmp2596);
    PyObject *__tmp2597 = CPyTagged_StealAsObject(cpy_r_r122.f3);
    PyTuple_SET_ITEM(cpy_r_r123, 3, __tmp2597);
    PyObject *__tmp2598 = CPyTagged_StealAsObject(cpy_r_r122.f4);
    PyTuple_SET_ITEM(cpy_r_r123, 4, __tmp2598);
    PyObject *__tmp2599 = cpy_r_r122.f5;
    PyTuple_SET_ITEM(cpy_r_r123, 5, __tmp2599);
    PyObject *__tmp2600 = cpy_r_r122.f6;
    PyTuple_SET_ITEM(cpy_r_r123, 6, __tmp2600);
    PyObject *__tmp2601 = cpy_r_r122.f7 ? Py_True : Py_False;
    CPy_INCREF(__tmp2601);
    PyTuple_SET_ITEM(cpy_r_r123, 7, __tmp2601);
    PyObject *__tmp2602 = cpy_r_r122.f8;
    PyTuple_SET_ITEM(cpy_r_r123, 8, __tmp2602);
    cpy_r_r124 = PyList_Append(cpy_r_res, cpy_r_r123);
    CPy_DECREF(cpy_r_r123);
    cpy_r_r125 = cpy_r_r124 >= 0;
    if (unlikely(!cpy_r_r125)) {
        CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1156, CPyStatic_mypy___errors___globals);
        goto CPyL106;
    }
CPyL89: ;
    cpy_r_r126 = CPyTagged_Add(cpy_r_i, 2);
    CPyTagged_DECREF(cpy_r_i);
    cpy_r_i = cpy_r_r126;
    goto CPyL2;
CPyL90: ;
    return cpy_r_res;
CPyL91: ;
    cpy_r_r127 = NULL;
    return cpy_r_r127;
CPyL92: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL90;
CPyL93: ;
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_j);
    goto CPyL91;
CPyL94: ;
    CPyTagged_DECREF(cpy_r_j);
    goto CPyL85;
CPyL95: ;
    CPyTagged_DECREF(cpy_r_j);
    goto CPyL28;
CPyL96: ;
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_r18);
    goto CPyL91;
CPyL97: ;
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_r26);
    goto CPyL91;
CPyL98: ;
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_r47);
    goto CPyL91;
CPyL99: ;
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_j);
    CPyTagged_DecRef(cpy_r_r55);
    goto CPyL91;
CPyL100: ;
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_r65);
    goto CPyL91;
CPyL101: ;
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_r87);
    goto CPyL91;
CPyL102: ;
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_r92);
    goto CPyL65;
CPyL103: ;
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_r100);
    goto CPyL91;
CPyL104: ;
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_i);
    CPyTagged_DecRef(cpy_r_j);
    CPy_DecRef(cpy_r_r110);
    goto CPyL91;
CPyL105: ;
    CPyTagged_DECREF(cpy_r_j);
    goto CPyL83;
CPyL106: ;
    CPy_DecRef(cpy_r_res);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL91;
}

PyObject *CPyPy_mypy___errors___Errors___remove_duplicates(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"errors", 0};
    static CPyArg_Parser parser = {"O:remove_duplicates", kwlist, 0};
    PyObject *obj_errors;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_errors)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_errors;
    if (likely(PyList_Check(obj_errors)))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("list", obj_errors); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypy___errors___Errors___remove_duplicates(arg_self, arg_errors);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "remove_duplicates", 1125, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___Errors_____mypyc_defaults_setup(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    ((mypy___errors___ErrorsObject *)cpy_r___mypyc_self__)->_ignore_prefix = cpy_r_r0;
    cpy_r_r1 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r1);
    ((mypy___errors___ErrorsObject *)cpy_r___mypyc_self__)->_file = cpy_r_r1;
    ((mypy___errors___ErrorsObject *)cpy_r___mypyc_self__)->_show_error_context = 0;
    ((mypy___errors___ErrorsObject *)cpy_r___mypyc_self__)->_show_column_numbers = 0;
    ((mypy___errors___ErrorsObject *)cpy_r___mypyc_self__)->_show_error_end = 0;
    ((mypy___errors___ErrorsObject *)cpy_r___mypyc_self__)->_show_absolute_path = 0;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    ((mypy___errors___ErrorsObject *)cpy_r___mypyc_self__)->_target_module = cpy_r_r2;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    ((mypy___errors___ErrorsObject *)cpy_r___mypyc_self__)->_scope = cpy_r_r3;
    ((mypy___errors___ErrorsObject *)cpy_r___mypyc_self__)->_seen_import_error = 0;
    cpy_r_r4 = PyList_New(0);
    if (cpy_r_r4 == NULL) goto CPyL2;
    ((mypy___errors___ErrorsObject *)cpy_r___mypyc_self__)->__watchers = cpy_r_r4;
    return 1;
CPyL2: ;
    cpy_r_r5 = 2;
    return cpy_r_r5;
}

PyObject *CPyPy_mypy___errors___Errors_____mypyc_defaults_setup(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__mypyc_defaults_setup", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_mypy___errors___Errors))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.errors.Errors", obj___mypyc_self__); 
        goto fail;
    }
    char retval = CPyDef_mypy___errors___Errors_____mypyc_defaults_setup(arg___mypyc_self__);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "__mypyc_defaults_setup", -1, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors___CompileError_____init__(PyObject *cpy_r_self, PyObject *cpy_r_messages, char cpy_r_use_stdout, PyObject *cpy_r_module_with_blocker) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    if (cpy_r_use_stdout != 2) goto CPyL2;
    cpy_r_use_stdout = 0;
CPyL2: ;
    if (cpy_r_module_with_blocker != NULL) goto CPyL14;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_module_with_blocker = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyModule_builtins;
    cpy_r_r2 = CPyStatics[1670]; /* 'super' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "__init__", 1182, CPyStatic_mypy___errors___globals);
        goto CPyL15;
    }
    cpy_r_r4 = (PyObject *)CPyType_mypy___errors___CompileError;
    PyObject *cpy_r_r5[2] = {cpy_r_r4, cpy_r_self};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = _PyObject_Vectorcall(cpy_r_r3, cpy_r_r6, 2, 0);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "__init__", 1182, CPyStatic_mypy___errors___globals);
        goto CPyL15;
    }
    cpy_r_r8 = CPyStatics[288]; /* '__init__' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "__init__", 1182, CPyStatic_mypy___errors___globals);
        goto CPyL15;
    }
    cpy_r_r10 = CPyStatics[189]; /* '\n' */
    cpy_r_r11 = PyUnicode_Join(cpy_r_r10, cpy_r_messages);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "__init__", 1182, CPyStatic_mypy___errors___globals);
        goto CPyL16;
    }
    PyObject *cpy_r_r12[1] = {cpy_r_r11};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = _PyObject_Vectorcall(cpy_r_r9, cpy_r_r13, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "__init__", 1182, CPyStatic_mypy___errors___globals);
        goto CPyL17;
    } else
        goto CPyL18;
CPyL9: ;
    CPy_DECREF(cpy_r_r11);
    cpy_r_r15 = CPyStatics[135]; /* 'messages' */
    cpy_r_r16 = PyObject_SetAttr(cpy_r_self, cpy_r_r15, cpy_r_messages);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypy/errors.py", "__init__", 1183, CPyStatic_mypy___errors___globals);
        goto CPyL15;
    }
    cpy_r_r18 = CPyStatics[134]; /* 'use_stdout' */
    cpy_r_r19 = cpy_r_use_stdout ? Py_True : Py_False;
    cpy_r_r20 = PyObject_SetAttr(cpy_r_self, cpy_r_r18, cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/errors.py", "__init__", 1184, CPyStatic_mypy___errors___globals);
        goto CPyL15;
    }
    cpy_r_r22 = CPyStatics[382]; /* 'module_with_blocker' */
    cpy_r_r23 = PyObject_SetAttr(cpy_r_self, cpy_r_r22, cpy_r_module_with_blocker);
    CPy_DECREF(cpy_r_module_with_blocker);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/errors.py", "__init__", 1185, CPyStatic_mypy___errors___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r25 = 2;
    return cpy_r_r25;
CPyL14: ;
    CPy_INCREF(cpy_r_module_with_blocker);
    goto CPyL4;
CPyL15: ;
    CPy_DecRef(cpy_r_module_with_blocker);
    goto CPyL13;
CPyL16: ;
    CPy_DecRef(cpy_r_module_with_blocker);
    CPy_DecRef(cpy_r_r9);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_module_with_blocker);
    CPy_DecRef(cpy_r_r11);
    goto CPyL13;
CPyL18: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL9;
}

PyObject *CPyPy_mypy___errors___CompileError_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"messages", "use_stdout", "module_with_blocker", 0};
    PyObject *obj_messages;
    PyObject *obj_use_stdout = NULL;
    PyObject *obj_module_with_blocker = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O|OO", "__init__", kwlist, &obj_messages, &obj_use_stdout, &obj_module_with_blocker)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypy___errors___CompileError))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.errors.CompileError", obj_self); 
        goto fail;
    }
    PyObject *arg_messages;
    if (likely(PyList_Check(obj_messages)))
        arg_messages = obj_messages;
    else {
        CPy_TypeError("list", obj_messages); 
        goto fail;
    }
    char arg_use_stdout;
    if (obj_use_stdout == NULL) {
        arg_use_stdout = 2;
    } else if (unlikely(!PyBool_Check(obj_use_stdout))) {
        CPy_TypeError("bool", obj_use_stdout); goto fail;
    } else
        arg_use_stdout = obj_use_stdout == Py_True;
    PyObject *arg_module_with_blocker;
    if (obj_module_with_blocker == NULL) {
        arg_module_with_blocker = NULL;
        goto __LL2603;
    }
    if (PyUnicode_Check(obj_module_with_blocker))
        arg_module_with_blocker = obj_module_with_blocker;
    else {
        arg_module_with_blocker = NULL;
    }
    if (arg_module_with_blocker != NULL) goto __LL2603;
    if (obj_module_with_blocker == Py_None)
        arg_module_with_blocker = obj_module_with_blocker;
    else {
        arg_module_with_blocker = NULL;
    }
    if (arg_module_with_blocker != NULL) goto __LL2603;
    CPy_TypeError("str or None", obj_module_with_blocker); 
    goto fail;
__LL2603: ;
    char retval = CPyDef_mypy___errors___CompileError_____init__(arg_self, arg_messages, arg_use_stdout, arg_module_with_blocker);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "__init__", 1179, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___remove_path_prefix(PyObject *cpy_r_path, PyObject *cpy_r_prefix) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    int64_t cpy_r_r5;
    char cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_prefix != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL8;
    CPy_INCREF(cpy_r_prefix);
    if (likely(cpy_r_prefix != Py_None))
        cpy_r_r2 = cpy_r_prefix;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "remove_path_prefix", 1192, CPyStatic_mypy___errors___globals, "str", cpy_r_prefix);
        goto CPyL9;
    }
    cpy_r_r3 = CPyStr_Startswith(cpy_r_path, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (!cpy_r_r3) goto CPyL8;
    CPy_INCREF(cpy_r_prefix);
    if (likely(cpy_r_prefix != Py_None))
        cpy_r_r4 = cpy_r_prefix;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "remove_path_prefix", 1193, CPyStatic_mypy___errors___globals, "str", cpy_r_prefix);
        goto CPyL9;
    }
    cpy_r_r5 = CPyStr_Size_size_t(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/errors.py", "remove_path_prefix", 1193, CPyStatic_mypy___errors___globals);
        goto CPyL9;
    }
    cpy_r_r7 = cpy_r_r5 << 1;
    cpy_r_r8 = CPyStr_GetSlice(cpy_r_path, cpy_r_r7, 9223372036854775806LL);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "remove_path_prefix", 1193, CPyStatic_mypy___errors___globals);
        goto CPyL9;
    }
    if (likely(PyUnicode_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "remove_path_prefix", 1193, CPyStatic_mypy___errors___globals, "str", cpy_r_r8);
        goto CPyL9;
    }
    return cpy_r_r9;
CPyL8: ;
    CPy_INCREF(cpy_r_path);
    return cpy_r_path;
CPyL9: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
}

PyObject *CPyPy_mypy___errors___remove_path_prefix(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"path", "prefix", 0};
    static CPyArg_Parser parser = {"OO:remove_path_prefix", kwlist, 0};
    PyObject *obj_path;
    PyObject *obj_prefix;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_path, &obj_prefix)) {
        return NULL;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    PyObject *arg_prefix;
    if (PyUnicode_Check(obj_prefix))
        arg_prefix = obj_prefix;
    else {
        arg_prefix = NULL;
    }
    if (arg_prefix != NULL) goto __LL2604;
    if (obj_prefix == Py_None)
        arg_prefix = obj_prefix;
    else {
        arg_prefix = NULL;
    }
    if (arg_prefix != NULL) goto __LL2604;
    CPy_TypeError("str or None", obj_prefix); 
    goto fail;
__LL2604: ;
    PyObject *retval = CPyDef_mypy___errors___remove_path_prefix(arg_path, arg_prefix);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "remove_path_prefix", 1188, CPyStatic_mypy___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypy___errors___report_internal_error(PyObject *cpy_r_err, PyObject *cpy_r_file, CPyTagged cpy_r_line, PyObject *cpy_r_errors, PyObject *cpy_r_options, PyObject *cpy_r_stdout, PyObject *cpy_r_stderr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_msg;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject **cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyTagged cpy_r_r36;
    tuple_T3OOO cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_e;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject **cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject **cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_prefix;
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
    PyObject **cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject **cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject **cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject **cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    char cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject **cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
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
    PyObject **cpy_r_r147;
    PyObject *cpy_r_r148;
    char cpy_r_r149;
    char cpy_r_r150;
    char cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject **cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_tb;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    PyObject *cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject **cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_tb2;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject **cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject **cpy_r_r199;
    PyObject *cpy_r_r200;
    PyObject *cpy_r_r201;
    CPyTagged cpy_r_r202;
    CPyPtr cpy_r_r203;
    int64_t cpy_r_r204;
    CPyTagged cpy_r_r205;
    char cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_s;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject **cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    PyObject *cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject **cpy_r_r219;
    PyObject *cpy_r_r220;
    CPyTagged cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    PyObject *cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject *cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject **cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject **cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject **cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    if (cpy_r_stdout != NULL) goto CPyL133;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_stdout = cpy_r_r0;
CPyL2: ;
    if (cpy_r_stderr != NULL) goto CPyL134;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_stderr = cpy_r_r1;
CPyL4: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_stdout != cpy_r_r2;
    if (!cpy_r_r3) goto CPyL135;
    CPy_INCREF(cpy_r_stdout);
    cpy_r_r4 = cpy_r_stdout;
    cpy_r_r5 = PyObject_IsTrue(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1204, CPyStatic_mypy___errors___globals);
        goto CPyL136;
    }
    cpy_r_r7 = cpy_r_r5;
    if (!cpy_r_r7) goto CPyL135;
    cpy_r_r8 = cpy_r_stdout;
    goto CPyL11;
CPyL9: ;
    cpy_r_r9 = CPyModule_sys;
    cpy_r_r10 = CPyStatics[10]; /* 'stdout' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1211, CPyStatic_mypy___errors___globals);
        goto CPyL137;
    }
    cpy_r_r8 = cpy_r_r11;
CPyL11: ;
    cpy_r_stdout = cpy_r_r8;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_stderr != cpy_r_r12;
    if (!cpy_r_r13) goto CPyL138;
    CPy_INCREF(cpy_r_stderr);
    cpy_r_r14 = cpy_r_stderr;
    cpy_r_r15 = PyObject_IsTrue(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1205, CPyStatic_mypy___errors___globals);
        goto CPyL136;
    }
    cpy_r_r17 = cpy_r_r15;
    if (!cpy_r_r17) goto CPyL138;
    cpy_r_r18 = cpy_r_stderr;
    goto CPyL18;
CPyL16: ;
    cpy_r_r19 = CPyModule_sys;
    cpy_r_r20 = CPyStatics[11]; /* 'stderr' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1212, CPyStatic_mypy___errors___globals);
        goto CPyL139;
    }
    cpy_r_r18 = cpy_r_r21;
CPyL18: ;
    cpy_r_stderr = cpy_r_r18;
    cpy_r_r22 = CPyDef_mypy___errors___Errors___new_messages(cpy_r_errors);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1216, CPyStatic_mypy___errors___globals);
        goto CPyL27;
    }
    cpy_r_r23 = 0;
CPyL21: ;
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_r22)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = (Py_ssize_t)cpy_r_r23 < (Py_ssize_t)cpy_r_r26;
    if (!cpy_r_r27) goto CPyL140;
    cpy_r_r28 = CPyList_GetItemUnsafe(cpy_r_r22, cpy_r_r23);
    if (likely(PyUnicode_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report_internal_error", 1216, CPyStatic_mypy___errors___globals, "str", cpy_r_r28);
        goto CPyL141;
    }
    cpy_r_msg = cpy_r_r29;
    cpy_r_r30 = CPyModule_builtins;
    cpy_r_r31 = CPyStatics[190]; /* 'print' */
    cpy_r_r32 = CPyObject_GetAttr(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1217, CPyStatic_mypy___errors___globals);
        goto CPyL142;
    }
    PyObject *cpy_r_r33[1] = {cpy_r_msg};
    cpy_r_r34 = (PyObject **)&cpy_r_r33;
    cpy_r_r35 = _PyObject_Vectorcall(cpy_r_r32, cpy_r_r34, 1, 0);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1217, CPyStatic_mypy___errors___globals);
        goto CPyL142;
    } else
        goto CPyL143;
CPyL25: ;
    CPy_DECREF(cpy_r_msg);
    cpy_r_r36 = cpy_r_r23 + 2;
    cpy_r_r23 = cpy_r_r36;
    goto CPyL21;
CPyL27: ;
    cpy_r_r37 = CPy_CatchError();
    cpy_r_r38 = CPyModule_builtins;
    cpy_r_r39 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1218, CPyStatic_mypy___errors___globals);
        goto CPyL144;
    }
    cpy_r_r41 = CPy_ExceptionMatches(cpy_r_r40);
    CPy_DecRef(cpy_r_r40);
    if (!cpy_r_r41) goto CPyL145;
    cpy_r_r42 = CPy_GetExcValue();
    cpy_r_e = cpy_r_r42;
    cpy_r_r43 = CPyStatics[2245]; /* 'Failed to dump errors:' */
    cpy_r_r44 = CPyModule_builtins;
    cpy_r_r45 = CPyStatics[146]; /* 'repr' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1219, CPyStatic_mypy___errors___globals);
        goto CPyL146;
    }
    PyObject *cpy_r_r47[1] = {cpy_r_e};
    cpy_r_r48 = (PyObject **)&cpy_r_r47;
    cpy_r_r49 = _PyObject_Vectorcall(cpy_r_r46, cpy_r_r48, 1, 0);
    CPy_DecRef(cpy_r_r46);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1219, CPyStatic_mypy___errors___globals);
        goto CPyL146;
    }
    CPy_DecRef(cpy_r_e);
    if (likely(PyUnicode_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report_internal_error", 1219, CPyStatic_mypy___errors___globals, "str", cpy_r_r49);
        goto CPyL144;
    }
    cpy_r_r51 = CPyModule_builtins;
    cpy_r_r52 = CPyStatics[190]; /* 'print' */
    cpy_r_r53 = CPyObject_GetAttr(cpy_r_r51, cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1219, CPyStatic_mypy___errors___globals);
        goto CPyL147;
    }
    PyObject *cpy_r_r54[3] = {cpy_r_r43, cpy_r_r50, cpy_r_stderr};
    cpy_r_r55 = (PyObject **)&cpy_r_r54;
    cpy_r_r56 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r57 = _PyObject_Vectorcall(cpy_r_r53, cpy_r_r55, 2, cpy_r_r56);
    CPy_DecRef(cpy_r_r53);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1219, CPyStatic_mypy___errors___globals);
        goto CPyL147;
    } else
        goto CPyL148;
CPyL34: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL37;
CPyL35: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL38;
    } else
        goto CPyL149;
CPyL36: ;
    CPy_Unreachable();
CPyL37: ;
    CPy_RestoreExcInfo(cpy_r_r37);
    CPy_DecRef(cpy_r_r37.f0);
    CPy_DecRef(cpy_r_r37.f1);
    CPy_DecRef(cpy_r_r37.f2);
    goto CPyL40;
CPyL38: ;
    CPy_RestoreExcInfo(cpy_r_r37);
    CPy_DecRef(cpy_r_r37.f0);
    CPy_DecRef(cpy_r_r37.f1);
    CPy_DecRef(cpy_r_r37.f2);
    cpy_r_r58 = CPy_KeepPropagating();
    if (!cpy_r_r58) goto CPyL132;
    CPy_Unreachable();
CPyL40: ;
    cpy_r_r59 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r60 = cpy_r_file != cpy_r_r59;
    if (!cpy_r_r60) goto CPyL51;
    CPy_INCREF(cpy_r_file);
    if (likely(cpy_r_file != Py_None))
        cpy_r_r61 = cpy_r_file;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report_internal_error", 1200, CPyStatic_mypy___errors___globals, "str", cpy_r_file);
        goto CPyL136;
    }
    cpy_r_r62 = CPyStr_IsTrue(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (!cpy_r_r62) goto CPyL51;
    cpy_r_r63 = cpy_r_line != 0;
    if (!cpy_r_r63) goto CPyL48;
    CPy_INCREF(cpy_r_file);
    if (likely(cpy_r_file != Py_None))
        cpy_r_r64 = cpy_r_file;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report_internal_error", 1224, CPyStatic_mypy___errors___globals, "str", cpy_r_file);
        goto CPyL136;
    }
    cpy_r_r65 = CPyStatics[171]; /* ':' */
    cpy_r_r66 = CPyTagged_Str(cpy_r_line);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1224, CPyStatic_mypy___errors___globals);
        goto CPyL150;
    }
    cpy_r_r67 = CPyStatics[297]; /* ': ' */
    cpy_r_r68 = CPyStr_Build(4, cpy_r_r64, cpy_r_r65, cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1224, CPyStatic_mypy___errors___globals);
        goto CPyL136;
    }
    cpy_r_prefix = cpy_r_r68;
    goto CPyL52;
CPyL48: ;
    CPy_INCREF(cpy_r_file);
    if (likely(cpy_r_file != Py_None))
        cpy_r_r69 = cpy_r_file;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report_internal_error", 1226, CPyStatic_mypy___errors___globals, "str", cpy_r_file);
        goto CPyL136;
    }
    cpy_r_r70 = CPyStatics[297]; /* ': ' */
    cpy_r_r71 = CPyStr_Build(2, cpy_r_r69, cpy_r_r70);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1226, CPyStatic_mypy___errors___globals);
        goto CPyL136;
    }
    cpy_r_prefix = cpy_r_r71;
    goto CPyL52;
CPyL51: ;
    cpy_r_r72 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r72);
    cpy_r_prefix = cpy_r_r72;
CPyL52: ;
    cpy_r_r73 = CPyStatics[2246]; /* 'error: INTERNAL ERROR --' */
    cpy_r_r74 = CPyStr_Build(2, cpy_r_prefix, cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1232, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    cpy_r_r75 = CPyStatics[2247]; /* ('Please try using mypy master on GitHub:\n'
                                     'https://mypy.readthedocs.io/en/stable/common_issues.html#using-a-development-mypy-build') */
    cpy_r_r76 = CPyModule_builtins;
    cpy_r_r77 = CPyStatics[190]; /* 'print' */
    cpy_r_r78 = CPyObject_GetAttr(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1231, CPyStatic_mypy___errors___globals);
        goto CPyL152;
    }
    PyObject *cpy_r_r79[3] = {cpy_r_r74, cpy_r_r75, cpy_r_stderr};
    cpy_r_r80 = (PyObject **)&cpy_r_r79;
    cpy_r_r81 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r82 = _PyObject_Vectorcall(cpy_r_r78, cpy_r_r80, 2, cpy_r_r81);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1231, CPyStatic_mypy___errors___globals);
        goto CPyL152;
    } else
        goto CPyL153;
CPyL55: ;
    CPy_DECREF(cpy_r_r74);
    cpy_r_r83 = ((mypy___options___OptionsObject *)cpy_r_options)->_show_traceback;
    if (!cpy_r_r83) goto CPyL58;
CPyL56: ;
    cpy_r_r84 = CPyStatics[2248]; /* ('Please report a bug at '
                                     'https://github.com/python/mypy/issues') */
    cpy_r_r85 = CPyModule_builtins;
    cpy_r_r86 = CPyStatics[190]; /* 'print' */
    cpy_r_r87 = CPyObject_GetAttr(cpy_r_r85, cpy_r_r86);
    if (unlikely(cpy_r_r87 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1239, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    PyObject *cpy_r_r88[2] = {cpy_r_r84, cpy_r_stderr};
    cpy_r_r89 = (PyObject **)&cpy_r_r88;
    cpy_r_r90 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r91 = _PyObject_Vectorcall(cpy_r_r87, cpy_r_r89, 1, cpy_r_r90);
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1239, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    } else
        goto CPyL154;
CPyL58: ;
    cpy_r_r92 = CPyStatics[2249]; /* ('If this issue continues with mypy master, please '
                                     'report a bug at https://github.com/python/mypy/issues') */
    cpy_r_r93 = CPyModule_builtins;
    cpy_r_r94 = CPyStatics[190]; /* 'print' */
    cpy_r_r95 = CPyObject_GetAttr(cpy_r_r93, cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1241, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    PyObject *cpy_r_r96[2] = {cpy_r_r92, cpy_r_stderr};
    cpy_r_r97 = (PyObject **)&cpy_r_r96;
    cpy_r_r98 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r99 = _PyObject_Vectorcall(cpy_r_r95, cpy_r_r97, 1, cpy_r_r98);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1241, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    } else
        goto CPyL155;
CPyL60: ;
    cpy_r_r100 = CPyStatics[2250]; /* 'version: ' */
    cpy_r_r101 = CPyStatic_mypy___errors___globals;
    cpy_r_r102 = CPyStatics[2251]; /* 'mypy_version' */
    cpy_r_r103 = CPyDict_GetItem(cpy_r_r101, cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1246, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    if (likely(PyUnicode_Check(cpy_r_r103)))
        cpy_r_r104 = cpy_r_r103;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report_internal_error", 1246, CPyStatic_mypy___errors___globals, "str", cpy_r_r103);
        goto CPyL151;
    }
    cpy_r_r105 = CPyStr_Build(2, cpy_r_r100, cpy_r_r104);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1246, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    cpy_r_r106 = CPyModule_builtins;
    cpy_r_r107 = CPyStatics[190]; /* 'print' */
    cpy_r_r108 = CPyObject_GetAttr(cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1246, CPyStatic_mypy___errors___globals);
        goto CPyL156;
    }
    PyObject *cpy_r_r109[2] = {cpy_r_r105, cpy_r_stderr};
    cpy_r_r110 = (PyObject **)&cpy_r_r109;
    cpy_r_r111 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r112 = _PyObject_Vectorcall(cpy_r_r108, cpy_r_r110, 1, cpy_r_r111);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1246, CPyStatic_mypy___errors___globals);
        goto CPyL156;
    } else
        goto CPyL157;
CPyL65: ;
    CPy_DECREF(cpy_r_r105);
    cpy_r_r113 = ((mypy___options___OptionsObject *)cpy_r_options)->_pdb;
    if (!cpy_r_r113) goto CPyL81;
CPyL66: ;
    cpy_r_r114 = CPyStatics[2252]; /* 'Dropping into pdb' */
    cpy_r_r115 = CPyModule_builtins;
    cpy_r_r116 = CPyStatics[190]; /* 'print' */
    cpy_r_r117 = CPyObject_GetAttr(cpy_r_r115, cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1250, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    PyObject *cpy_r_r118[2] = {cpy_r_r114, cpy_r_stderr};
    cpy_r_r119 = (PyObject **)&cpy_r_r118;
    cpy_r_r120 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r121 = _PyObject_Vectorcall(cpy_r_r117, cpy_r_r119, 1, cpy_r_r120);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1250, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    } else
        goto CPyL158;
CPyL68: ;
    cpy_r_r122 = CPyStatic_mypy___errors___globals;
    cpy_r_r123 = CPyModule_pdb;
    cpy_r_r124 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r125 = cpy_r_r123 != cpy_r_r124;
    if (cpy_r_r125) goto CPyL71;
    cpy_r_r126 = CPyStatics[2253]; /* 'pdb' */
    cpy_r_r127 = PyImport_Import(cpy_r_r126);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1251, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    CPyModule_pdb = cpy_r_r127;
    CPy_INCREF(CPyModule_pdb);
    CPy_DECREF(cpy_r_r127);
CPyL71: ;
    cpy_r_r128 = CPyStatics[2253]; /* 'pdb' */
    cpy_r_r129 = PyImport_GetModuleDict();
    cpy_r_r130 = CPyStatics[2253]; /* 'pdb' */
    cpy_r_r131 = CPyDict_GetItem(cpy_r_r129, cpy_r_r130);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1251, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    cpy_r_r132 = CPyDict_SetItem(cpy_r_r122, cpy_r_r128, cpy_r_r131);
    CPy_DECREF(cpy_r_r131);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1251, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    cpy_r_r134 = CPyModule_sys;
    cpy_r_r135 = CPyStatics[1940]; /* 'exc_info' */
    cpy_r_r136 = CPyObject_GetAttr(cpy_r_r134, cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1253, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    cpy_r_r137 = _PyObject_Vectorcall(cpy_r_r136, 0, 0, 0);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1253, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    if (unlikely(!(PyTuple_Check(cpy_r_r137) && PyTuple_GET_SIZE(cpy_r_r137) == 3))) {
        cpy_r_r138 = NULL;
        goto __LL2606;
    }
    cpy_r_r138 = PyTuple_GET_ITEM(cpy_r_r137, 0);
    if (cpy_r_r138 == NULL) goto __LL2606;
    cpy_r_r138 = PyTuple_GET_ITEM(cpy_r_r137, 1);
    if (cpy_r_r138 == NULL) goto __LL2606;
    cpy_r_r138 = PyTuple_GET_ITEM(cpy_r_r137, 2);
    if (cpy_r_r138 == NULL) goto __LL2606;
    cpy_r_r138 = cpy_r_r137;
__LL2606: ;
    if (cpy_r_r138 != NULL) goto __LL2605;
    if (unlikely(!(PyTuple_Check(cpy_r_r137) && PyTuple_GET_SIZE(cpy_r_r137) == 3))) {
        cpy_r_r138 = NULL;
        goto __LL2607;
    }
    if (likely(PyTuple_GET_ITEM(cpy_r_r137, 0) == Py_None))
        cpy_r_r138 = PyTuple_GET_ITEM(cpy_r_r137, 0);
    else {
        cpy_r_r138 = NULL;
    }
    if (cpy_r_r138 == NULL) goto __LL2607;
    if (likely(PyTuple_GET_ITEM(cpy_r_r137, 1) == Py_None))
        cpy_r_r138 = PyTuple_GET_ITEM(cpy_r_r137, 1);
    else {
        cpy_r_r138 = NULL;
    }
    if (cpy_r_r138 == NULL) goto __LL2607;
    if (likely(PyTuple_GET_ITEM(cpy_r_r137, 2) == Py_None))
        cpy_r_r138 = PyTuple_GET_ITEM(cpy_r_r137, 2);
    else {
        cpy_r_r138 = NULL;
    }
    if (cpy_r_r138 == NULL) goto __LL2607;
    cpy_r_r138 = cpy_r_r137;
__LL2607: ;
    if (cpy_r_r138 != NULL) goto __LL2605;
    CPy_TypeErrorTraceback("mypy/errors.py", "report_internal_error", 1253, CPyStatic_mypy___errors___globals, "union[tuple[object, object, object], tuple[None, None, None]]", cpy_r_r137);
    goto CPyL151;
__LL2605: ;
    cpy_r_r139 = cpy_r_r138;
    cpy_r_r140 = CPyStatics[9018]; /* 2 */
    cpy_r_r141 = PyObject_GetItem(cpy_r_r139, cpy_r_r140);
    CPy_DECREF(cpy_r_r139);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1253, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    cpy_r_r142 = cpy_r_r141;
    cpy_r_r143 = CPyModule_pdb;
    cpy_r_r144 = CPyStatics[2254]; /* 'post_mortem' */
    cpy_r_r145 = CPyObject_GetAttr(cpy_r_r143, cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1253, CPyStatic_mypy___errors___globals);
        goto CPyL159;
    }
    PyObject *cpy_r_r146[1] = {cpy_r_r142};
    cpy_r_r147 = (PyObject **)&cpy_r_r146;
    cpy_r_r148 = _PyObject_Vectorcall(cpy_r_r145, cpy_r_r147, 1, 0);
    CPy_DECREF(cpy_r_r145);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1253, CPyStatic_mypy___errors___globals);
        goto CPyL159;
    } else
        goto CPyL160;
CPyL80: ;
    CPy_DECREF(cpy_r_r142);
CPyL81: ;
    cpy_r_r149 = ((mypy___options___OptionsObject *)cpy_r_options)->_raise_exceptions;
    if (cpy_r_r149) {
        goto CPyL161;
    } else
        goto CPyL84;
CPyL82: ;
    CPy_Raise(cpy_r_err);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1257, CPyStatic_mypy___errors___globals);
        goto CPyL132;
    }
    CPy_Unreachable();
CPyL84: ;
    cpy_r_r150 = ((mypy___options___OptionsObject *)cpy_r_options)->_show_traceback;
    if (cpy_r_r150) {
        goto CPyL90;
    } else
        goto CPyL162;
CPyL85: ;
    cpy_r_r151 = ((mypy___options___OptionsObject *)cpy_r_options)->_pdb;
    if (cpy_r_r151) goto CPyL163;
CPyL86: ;
    cpy_r_r152 = CPyStatics[2255]; /* (': note: please use --show-traceback to print a '
                                      'traceback when reporting a bug') */
    cpy_r_r153 = CPyStr_Build(2, cpy_r_prefix, cpy_r_r152);
    CPy_DECREF(cpy_r_prefix);
    if (unlikely(cpy_r_r153 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1261, CPyStatic_mypy___errors___globals);
        goto CPyL137;
    }
    cpy_r_r154 = CPyModule_builtins;
    cpy_r_r155 = CPyStatics[190]; /* 'print' */
    cpy_r_r156 = CPyObject_GetAttr(cpy_r_r154, cpy_r_r155);
    if (unlikely(cpy_r_r156 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1260, CPyStatic_mypy___errors___globals);
        goto CPyL164;
    }
    PyObject *cpy_r_r157[2] = {cpy_r_r153, cpy_r_stderr};
    cpy_r_r158 = (PyObject **)&cpy_r_r157;
    cpy_r_r159 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r160 = _PyObject_Vectorcall(cpy_r_r156, cpy_r_r158, 1, cpy_r_r159);
    CPy_DECREF(cpy_r_r156);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1260, CPyStatic_mypy___errors___globals);
        goto CPyL164;
    } else
        goto CPyL165;
CPyL89: ;
    CPy_DECREF(cpy_r_r153);
    CPy_DECREF(cpy_r_stderr);
    goto CPyL128;
CPyL90: ;
    cpy_r_r161 = CPyModule_traceback;
    cpy_r_r162 = CPyStatics[2256]; /* 'extract_stack' */
    cpy_r_r163 = CPyObject_GetAttr(cpy_r_r161, cpy_r_r162);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1266, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    cpy_r_r164 = _PyObject_Vectorcall(cpy_r_r163, 0, 0, 0);
    CPy_DECREF(cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1266, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    cpy_r_r165 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r166 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r167 = CPyStatics[9027]; /* -2 */
    cpy_r_r168 = PySlice_New(cpy_r_r165, cpy_r_r167, cpy_r_r166);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1266, CPyStatic_mypy___errors___globals);
        goto CPyL166;
    }
    cpy_r_r169 = PyObject_GetItem(cpy_r_r164, cpy_r_r168);
    CPy_DECREF(cpy_r_r164);
    CPy_DECREF(cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1266, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    if (likely(PyList_Check(cpy_r_r169)))
        cpy_r_r170 = cpy_r_r169;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report_internal_error", 1266, CPyStatic_mypy___errors___globals, "list", cpy_r_r169);
        goto CPyL151;
    }
    cpy_r_tb = cpy_r_r170;
    cpy_r_r171 = CPyModule_sys;
    cpy_r_r172 = CPyStatics[1940]; /* 'exc_info' */
    cpy_r_r173 = CPyObject_GetAttr(cpy_r_r171, cpy_r_r172);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1267, CPyStatic_mypy___errors___globals);
        goto CPyL167;
    }
    cpy_r_r174 = _PyObject_Vectorcall(cpy_r_r173, 0, 0, 0);
    CPy_DECREF(cpy_r_r173);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1267, CPyStatic_mypy___errors___globals);
        goto CPyL167;
    }
    if (unlikely(!(PyTuple_Check(cpy_r_r174) && PyTuple_GET_SIZE(cpy_r_r174) == 3))) {
        cpy_r_r175 = NULL;
        goto __LL2609;
    }
    cpy_r_r175 = PyTuple_GET_ITEM(cpy_r_r174, 0);
    if (cpy_r_r175 == NULL) goto __LL2609;
    cpy_r_r175 = PyTuple_GET_ITEM(cpy_r_r174, 1);
    if (cpy_r_r175 == NULL) goto __LL2609;
    cpy_r_r175 = PyTuple_GET_ITEM(cpy_r_r174, 2);
    if (cpy_r_r175 == NULL) goto __LL2609;
    cpy_r_r175 = cpy_r_r174;
__LL2609: ;
    if (cpy_r_r175 != NULL) goto __LL2608;
    if (unlikely(!(PyTuple_Check(cpy_r_r174) && PyTuple_GET_SIZE(cpy_r_r174) == 3))) {
        cpy_r_r175 = NULL;
        goto __LL2610;
    }
    if (likely(PyTuple_GET_ITEM(cpy_r_r174, 0) == Py_None))
        cpy_r_r175 = PyTuple_GET_ITEM(cpy_r_r174, 0);
    else {
        cpy_r_r175 = NULL;
    }
    if (cpy_r_r175 == NULL) goto __LL2610;
    if (likely(PyTuple_GET_ITEM(cpy_r_r174, 1) == Py_None))
        cpy_r_r175 = PyTuple_GET_ITEM(cpy_r_r174, 1);
    else {
        cpy_r_r175 = NULL;
    }
    if (cpy_r_r175 == NULL) goto __LL2610;
    if (likely(PyTuple_GET_ITEM(cpy_r_r174, 2) == Py_None))
        cpy_r_r175 = PyTuple_GET_ITEM(cpy_r_r174, 2);
    else {
        cpy_r_r175 = NULL;
    }
    if (cpy_r_r175 == NULL) goto __LL2610;
    cpy_r_r175 = cpy_r_r174;
__LL2610: ;
    if (cpy_r_r175 != NULL) goto __LL2608;
    CPy_TypeErrorTraceback("mypy/errors.py", "report_internal_error", 1267, CPyStatic_mypy___errors___globals, "union[tuple[object, object, object], tuple[None, None, None]]", cpy_r_r174);
    goto CPyL167;
__LL2608: ;
    cpy_r_r176 = cpy_r_r175;
    cpy_r_r177 = CPyStatics[9018]; /* 2 */
    cpy_r_r178 = PyObject_GetItem(cpy_r_r176, cpy_r_r177);
    CPy_DECREF(cpy_r_r176);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1267, CPyStatic_mypy___errors___globals);
        goto CPyL167;
    }
    cpy_r_r179 = cpy_r_r178;
    cpy_r_r180 = CPyModule_traceback;
    cpy_r_r181 = CPyStatics[2257]; /* 'extract_tb' */
    cpy_r_r182 = CPyObject_GetAttr(cpy_r_r180, cpy_r_r181);
    if (unlikely(cpy_r_r182 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1267, CPyStatic_mypy___errors___globals);
        goto CPyL168;
    }
    PyObject *cpy_r_r183[1] = {cpy_r_r179};
    cpy_r_r184 = (PyObject **)&cpy_r_r183;
    cpy_r_r185 = _PyObject_Vectorcall(cpy_r_r182, cpy_r_r184, 1, 0);
    CPy_DECREF(cpy_r_r182);
    if (unlikely(cpy_r_r185 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1267, CPyStatic_mypy___errors___globals);
        goto CPyL168;
    }
    CPy_DECREF(cpy_r_r179);
    cpy_r_tb2 = cpy_r_r185;
    cpy_r_r186 = CPyStatics[2258]; /* 'Traceback (most recent call last):' */
    cpy_r_r187 = CPyModule_builtins;
    cpy_r_r188 = CPyStatics[190]; /* 'print' */
    cpy_r_r189 = CPyObject_GetAttr(cpy_r_r187, cpy_r_r188);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1268, CPyStatic_mypy___errors___globals);
        goto CPyL169;
    }
    PyObject *cpy_r_r190[1] = {cpy_r_r186};
    cpy_r_r191 = (PyObject **)&cpy_r_r190;
    cpy_r_r192 = _PyObject_Vectorcall(cpy_r_r189, cpy_r_r191, 1, 0);
    CPy_DECREF(cpy_r_r189);
    if (unlikely(cpy_r_r192 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1268, CPyStatic_mypy___errors___globals);
        goto CPyL169;
    } else
        goto CPyL170;
CPyL104: ;
    cpy_r_r193 = PyNumber_Add(cpy_r_tb, cpy_r_tb2);
    CPy_DECREF(cpy_r_tb);
    CPy_DECREF(cpy_r_tb2);
    if (unlikely(cpy_r_r193 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1269, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    if (likely(PyList_Check(cpy_r_r193)))
        cpy_r_r194 = cpy_r_r193;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report_internal_error", 1269, CPyStatic_mypy___errors___globals, "list", cpy_r_r193);
        goto CPyL151;
    }
    cpy_r_r195 = CPyModule_traceback;
    cpy_r_r196 = CPyStatics[2259]; /* 'format_list' */
    cpy_r_r197 = CPyObject_GetAttr(cpy_r_r195, cpy_r_r196);
    if (unlikely(cpy_r_r197 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1269, CPyStatic_mypy___errors___globals);
        goto CPyL171;
    }
    PyObject *cpy_r_r198[1] = {cpy_r_r194};
    cpy_r_r199 = (PyObject **)&cpy_r_r198;
    cpy_r_r200 = _PyObject_Vectorcall(cpy_r_r197, cpy_r_r199, 1, 0);
    CPy_DECREF(cpy_r_r197);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1269, CPyStatic_mypy___errors___globals);
        goto CPyL171;
    }
    CPy_DECREF(cpy_r_r194);
    if (likely(PyList_Check(cpy_r_r200)))
        cpy_r_r201 = cpy_r_r200;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report_internal_error", 1269, CPyStatic_mypy___errors___globals, "list", cpy_r_r200);
        goto CPyL151;
    }
    cpy_r_r202 = 0;
CPyL110: ;
    cpy_r_r203 = (CPyPtr)&((PyVarObject *)cpy_r_r201)->ob_size;
    cpy_r_r204 = *(int64_t *)cpy_r_r203;
    cpy_r_r205 = cpy_r_r204 << 1;
    cpy_r_r206 = (Py_ssize_t)cpy_r_r202 < (Py_ssize_t)cpy_r_r205;
    if (!cpy_r_r206) goto CPyL172;
    cpy_r_r207 = CPyList_GetItemUnsafe(cpy_r_r201, cpy_r_r202);
    if (likely(PyUnicode_Check(cpy_r_r207)))
        cpy_r_r208 = cpy_r_r207;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report_internal_error", 1269, CPyStatic_mypy___errors___globals, "str", cpy_r_r207);
        goto CPyL173;
    }
    cpy_r_s = cpy_r_r208;
    cpy_r_r209 = CPyStatics[189]; /* '\n' */
    cpy_r_r210 = CPyStatics[272]; /* 'rstrip' */
    PyObject *cpy_r_r211[2] = {cpy_r_s, cpy_r_r209};
    cpy_r_r212 = (PyObject **)&cpy_r_r211;
    cpy_r_r213 = PyObject_VectorcallMethod(cpy_r_r210, cpy_r_r212, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1270, CPyStatic_mypy___errors___globals);
        goto CPyL174;
    }
    CPy_DECREF(cpy_r_s);
    if (likely(PyUnicode_Check(cpy_r_r213)))
        cpy_r_r214 = cpy_r_r213;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report_internal_error", 1270, CPyStatic_mypy___errors___globals, "str", cpy_r_r213);
        goto CPyL173;
    }
    cpy_r_r215 = CPyModule_builtins;
    cpy_r_r216 = CPyStatics[190]; /* 'print' */
    cpy_r_r217 = CPyObject_GetAttr(cpy_r_r215, cpy_r_r216);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1270, CPyStatic_mypy___errors___globals);
        goto CPyL175;
    }
    PyObject *cpy_r_r218[1] = {cpy_r_r214};
    cpy_r_r219 = (PyObject **)&cpy_r_r218;
    cpy_r_r220 = _PyObject_Vectorcall(cpy_r_r217, cpy_r_r219, 1, 0);
    CPy_DECREF(cpy_r_r217);
    if (unlikely(cpy_r_r220 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1270, CPyStatic_mypy___errors___globals);
        goto CPyL175;
    } else
        goto CPyL176;
CPyL116: ;
    CPy_DECREF(cpy_r_r214);
    cpy_r_r221 = cpy_r_r202 + 2;
    cpy_r_r202 = cpy_r_r221;
    goto CPyL110;
CPyL118: ;
    cpy_r_r222 = PyObject_Type(cpy_r_err);
    cpy_r_r223 = CPyStatics[197]; /* '__name__' */
    cpy_r_r224 = CPyObject_GetAttr(cpy_r_r222, cpy_r_r223);
    CPy_DECREF(cpy_r_r222);
    if (unlikely(cpy_r_r224 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1271, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    if (likely(PyUnicode_Check(cpy_r_r224)))
        cpy_r_r225 = cpy_r_r224;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "report_internal_error", 1271, CPyStatic_mypy___errors___globals, "str", cpy_r_r224);
        goto CPyL151;
    }
    cpy_r_r226 = CPyStatics[297]; /* ': ' */
    cpy_r_r227 = PyObject_Str(cpy_r_err);
    if (unlikely(cpy_r_r227 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1271, CPyStatic_mypy___errors___globals);
        goto CPyL177;
    }
    cpy_r_r228 = CPyStr_Build(3, cpy_r_r225, cpy_r_r226, cpy_r_r227);
    CPy_DECREF(cpy_r_r225);
    CPy_DECREF(cpy_r_r227);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1271, CPyStatic_mypy___errors___globals);
        goto CPyL151;
    }
    cpy_r_r229 = CPyModule_builtins;
    cpy_r_r230 = CPyStatics[190]; /* 'print' */
    cpy_r_r231 = CPyObject_GetAttr(cpy_r_r229, cpy_r_r230);
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1271, CPyStatic_mypy___errors___globals);
        goto CPyL178;
    }
    PyObject *cpy_r_r232[2] = {cpy_r_r228, cpy_r_stdout};
    cpy_r_r233 = (PyObject **)&cpy_r_r232;
    cpy_r_r234 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r235 = _PyObject_Vectorcall(cpy_r_r231, cpy_r_r233, 1, cpy_r_r234);
    CPy_DECREF(cpy_r_r231);
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1271, CPyStatic_mypy___errors___globals);
        goto CPyL178;
    } else
        goto CPyL179;
CPyL124: ;
    CPy_DECREF(cpy_r_r228);
    CPy_DECREF(cpy_r_stdout);
    cpy_r_r236 = CPyStatics[2260]; /* ': note: use --pdb to drop into pdb' */
    cpy_r_r237 = CPyStr_Build(2, cpy_r_prefix, cpy_r_r236);
    CPy_DECREF(cpy_r_prefix);
    if (unlikely(cpy_r_r237 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1272, CPyStatic_mypy___errors___globals);
        goto CPyL137;
    }
    cpy_r_r238 = CPyModule_builtins;
    cpy_r_r239 = CPyStatics[190]; /* 'print' */
    cpy_r_r240 = CPyObject_GetAttr(cpy_r_r238, cpy_r_r239);
    if (unlikely(cpy_r_r240 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1272, CPyStatic_mypy___errors___globals);
        goto CPyL180;
    }
    PyObject *cpy_r_r241[2] = {cpy_r_r237, cpy_r_stderr};
    cpy_r_r242 = (PyObject **)&cpy_r_r241;
    cpy_r_r243 = CPyStatics[9096]; /* ('file',) */
    cpy_r_r244 = _PyObject_Vectorcall(cpy_r_r240, cpy_r_r242, 1, cpy_r_r243);
    CPy_DECREF(cpy_r_r240);
    if (unlikely(cpy_r_r244 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1272, CPyStatic_mypy___errors___globals);
        goto CPyL180;
    } else
        goto CPyL181;
CPyL127: ;
    CPy_DECREF(cpy_r_r237);
    CPy_DECREF(cpy_r_stderr);
CPyL128: ;
    cpy_r_r245 = CPyModule_builtins;
    cpy_r_r246 = CPyStatics[5]; /* 'SystemExit' */
    cpy_r_r247 = CPyObject_GetAttr(cpy_r_r245, cpy_r_r246);
    if (unlikely(cpy_r_r247 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1276, CPyStatic_mypy___errors___globals);
        goto CPyL132;
    }
    cpy_r_r248 = CPyStatics[9018]; /* 2 */
    PyObject *cpy_r_r249[1] = {cpy_r_r248};
    cpy_r_r250 = (PyObject **)&cpy_r_r249;
    cpy_r_r251 = _PyObject_Vectorcall(cpy_r_r247, cpy_r_r250, 1, 0);
    CPy_DECREF(cpy_r_r247);
    if (unlikely(cpy_r_r251 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1276, CPyStatic_mypy___errors___globals);
        goto CPyL132;
    }
    CPy_Raise(cpy_r_r251);
    CPy_DECREF(cpy_r_r251);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1276, CPyStatic_mypy___errors___globals);
        goto CPyL132;
    }
    CPy_Unreachable();
CPyL132: ;
    cpy_r_r252 = NULL;
    return cpy_r_r252;
CPyL133: ;
    CPy_INCREF(cpy_r_stdout);
    goto CPyL2;
CPyL134: ;
    CPy_INCREF(cpy_r_stderr);
    goto CPyL4;
CPyL135: ;
    CPy_DECREF(cpy_r_stdout);
    goto CPyL9;
CPyL136: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    goto CPyL132;
CPyL137: ;
    CPy_DecRef(cpy_r_stderr);
    goto CPyL132;
CPyL138: ;
    CPy_DECREF(cpy_r_stderr);
    goto CPyL16;
CPyL139: ;
    CPy_DecRef(cpy_r_stdout);
    goto CPyL132;
CPyL140: ;
    CPy_DECREF(cpy_r_r22);
    goto CPyL40;
CPyL141: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL27;
CPyL142: ;
    CPy_DecRef(cpy_r_r22);
    CPy_DecRef(cpy_r_msg);
    goto CPyL27;
CPyL143: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL25;
CPyL144: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    goto CPyL38;
CPyL145: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    goto CPyL35;
CPyL146: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_e);
    goto CPyL38;
CPyL147: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_r50);
    goto CPyL38;
CPyL148: ;
    CPy_DecRef(cpy_r_r57);
    goto CPyL34;
CPyL149: ;
    CPy_DecRef(cpy_r_r37.f0);
    CPy_DecRef(cpy_r_r37.f1);
    CPy_DecRef(cpy_r_r37.f2);
    goto CPyL36;
CPyL150: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_r64);
    goto CPyL132;
CPyL151: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_prefix);
    goto CPyL132;
CPyL152: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r74);
    goto CPyL132;
CPyL153: ;
    CPy_DECREF(cpy_r_r82);
    goto CPyL55;
CPyL154: ;
    CPy_DECREF(cpy_r_r91);
    goto CPyL60;
CPyL155: ;
    CPy_DECREF(cpy_r_r99);
    goto CPyL60;
CPyL156: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r105);
    goto CPyL132;
CPyL157: ;
    CPy_DECREF(cpy_r_r112);
    goto CPyL65;
CPyL158: ;
    CPy_DECREF(cpy_r_r121);
    goto CPyL68;
CPyL159: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r142);
    goto CPyL132;
CPyL160: ;
    CPy_DECREF(cpy_r_r148);
    goto CPyL80;
CPyL161: ;
    CPy_DECREF(cpy_r_stdout);
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_prefix);
    goto CPyL82;
CPyL162: ;
    CPy_DECREF(cpy_r_stdout);
    goto CPyL85;
CPyL163: ;
    CPy_DECREF(cpy_r_stderr);
    CPy_DECREF(cpy_r_prefix);
    goto CPyL128;
CPyL164: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_r153);
    goto CPyL132;
CPyL165: ;
    CPy_DECREF(cpy_r_r160);
    goto CPyL89;
CPyL166: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r164);
    goto CPyL132;
CPyL167: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_tb);
    goto CPyL132;
CPyL168: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_tb);
    CPy_DecRef(cpy_r_r179);
    goto CPyL132;
CPyL169: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_tb);
    CPy_DecRef(cpy_r_tb2);
    goto CPyL132;
CPyL170: ;
    CPy_DECREF(cpy_r_r192);
    goto CPyL104;
CPyL171: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r194);
    goto CPyL132;
CPyL172: ;
    CPy_DECREF(cpy_r_r201);
    goto CPyL118;
CPyL173: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r201);
    goto CPyL132;
CPyL174: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r201);
    CPy_DecRef(cpy_r_s);
    goto CPyL132;
CPyL175: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r201);
    CPy_DecRef(cpy_r_r214);
    goto CPyL132;
CPyL176: ;
    CPy_DECREF(cpy_r_r220);
    goto CPyL116;
CPyL177: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r225);
    goto CPyL132;
CPyL178: ;
    CPy_DecRef(cpy_r_stdout);
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_prefix);
    CPy_DecRef(cpy_r_r228);
    goto CPyL132;
CPyL179: ;
    CPy_DECREF(cpy_r_r235);
    goto CPyL124;
CPyL180: ;
    CPy_DecRef(cpy_r_stderr);
    CPy_DecRef(cpy_r_r237);
    goto CPyL132;
CPyL181: ;
    CPy_DECREF(cpy_r_r244);
    goto CPyL127;
}

PyObject *CPyPy_mypy___errors___report_internal_error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"err", "file", "line", "errors", "options", "stdout", "stderr", 0};
    static CPyArg_Parser parser = {"OOOOO|OO:report_internal_error", kwlist, 0};
    PyObject *obj_err;
    PyObject *obj_file;
    PyObject *obj_line;
    PyObject *obj_errors;
    PyObject *obj_options;
    PyObject *obj_stdout = NULL;
    PyObject *obj_stderr = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_err, &obj_file, &obj_line, &obj_errors, &obj_options, &obj_stdout, &obj_stderr)) {
        return NULL;
    }
    PyObject *arg_err = obj_err;
    PyObject *arg_file;
    if (PyUnicode_Check(obj_file))
        arg_file = obj_file;
    else {
        arg_file = NULL;
    }
    if (arg_file != NULL) goto __LL2611;
    if (obj_file == Py_None)
        arg_file = obj_file;
    else {
        arg_file = NULL;
    }
    if (arg_file != NULL) goto __LL2611;
    CPy_TypeError("str or None", obj_file); 
    goto fail;
__LL2611: ;
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *arg_errors;
    if (likely(Py_TYPE(obj_errors) == CPyType_mypy___errors___Errors))
        arg_errors = obj_errors;
    else {
        CPy_TypeError("mypy.errors.Errors", obj_errors); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    PyObject *arg_stdout;
    if (obj_stdout == NULL) {
        arg_stdout = NULL;
        goto __LL2612;
    }
    arg_stdout = obj_stdout;
    if (arg_stdout != NULL) goto __LL2612;
    if (obj_stdout == Py_None)
        arg_stdout = obj_stdout;
    else {
        arg_stdout = NULL;
    }
    if (arg_stdout != NULL) goto __LL2612;
    CPy_TypeError("object or None", obj_stdout); 
    goto fail;
__LL2612: ;
    PyObject *arg_stderr;
    if (obj_stderr == NULL) {
        arg_stderr = NULL;
        goto __LL2613;
    }
    arg_stderr = obj_stderr;
    if (arg_stderr != NULL) goto __LL2613;
    if (obj_stderr == Py_None)
        arg_stderr = obj_stderr;
    else {
        arg_stderr = NULL;
    }
    if (arg_stderr != NULL) goto __LL2613;
    CPy_TypeError("object or None", obj_stderr); 
    goto fail;
__LL2613: ;
    PyObject *retval = CPyDef_mypy___errors___report_internal_error(arg_err, arg_file, arg_line, arg_errors, arg_options, arg_stdout, arg_stderr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/errors.py", "report_internal_error", 1198, CPyStatic_mypy___errors___globals);
    return NULL;
}

char CPyDef_mypy___errors_____top_level__(void) {
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
    void *cpy_r_r13;
    void *cpy_r_r15;
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
    PyObject **cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    int32_t cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    int32_t cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    char cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    int32_t cpy_r_r101;
    char cpy_r_r102;
    int32_t cpy_r_r103;
    char cpy_r_r104;
    int32_t cpy_r_r105;
    char cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    int32_t cpy_r_r109;
    char cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    CPyPtr cpy_r_r123;
    CPyPtr cpy_r_r124;
    CPyPtr cpy_r_r125;
    CPyPtr cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    int32_t cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    int32_t cpy_r_r147;
    char cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
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
    int32_t cpy_r_r175;
    char cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    int32_t cpy_r_r179;
    char cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
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
    tuple_T9OOOOOOOOO cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    int32_t cpy_r_r206;
    char cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    char cpy_r_r212;
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
    char cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    PyObject *cpy_r_r246;
    PyObject *cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    PyObject *cpy_r_r250;
    PyObject *cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    PyObject *cpy_r_r254;
    int32_t cpy_r_r255;
    char cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_r258;
    int32_t cpy_r_r259;
    char cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    PyObject *cpy_r_r263;
    PyObject *cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    int32_t cpy_r_r271;
    char cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    int32_t cpy_r_r275;
    char cpy_r_r276;
    char cpy_r_r277;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", -1, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_mypy___errors___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 1, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_os___path;
    cpy_r_r10 = (PyObject **)&CPyModule_sys;
    cpy_r_r11 = (PyObject **)&CPyModule_traceback;
    PyObject **cpy_r_r12[3] = {cpy_r_r9, cpy_r_r10, cpy_r_r11};
    cpy_r_r13 = (void *)&cpy_r_r12;
    int64_t cpy_r_r14[3] = {3, 4, 5};
    cpy_r_r15 = (void *)&cpy_r_r14;
    cpy_r_r16 = CPyStatics[9364]; /* (('os.path', 'os', 'os'), ('sys', 'sys', 'sys'),
                                     ('traceback', 'traceback', 'traceback')) */
    cpy_r_r17 = CPyStatic_mypy___errors___globals;
    cpy_r_r18 = CPyStatics[2261]; /* 'mypy/errors.py' */
    cpy_r_r19 = CPyStatics[17]; /* '<module>' */
    cpy_r_r20 = CPyImport_ImportMany(cpy_r_r16, cpy_r_r13, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_r15);
    if (!cpy_r_r20) goto CPyL99;
    cpy_r_r21 = CPyStatics[9083]; /* ('defaultdict',) */
    cpy_r_r22 = CPyStatics[76]; /* 'collections' */
    cpy_r_r23 = CPyStatic_mypy___errors___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 6, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPyModule_collections = cpy_r_r24;
    CPy_INCREF(CPyModule_collections);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9365]; /* ('Callable', 'Final', 'Iterable', 'NoReturn', 'Optional',
                                     'TextIO', 'Tuple', 'TypeVar') */
    cpy_r_r26 = CPyStatics[21]; /* 'typing' */
    cpy_r_r27 = CPyStatic_mypy___errors___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 7, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPyModule_typing = cpy_r_r28;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9366]; /* ('Literal', 'TypeAlias') */
    cpy_r_r30 = CPyStatics[9367]; /* ('Literal', '_TypeAlias') */
    cpy_r_r31 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r32 = CPyStatic_mypy___errors___globals;
    cpy_r_r33 = CPyImport_ImportFromMany(cpy_r_r31, cpy_r_r29, cpy_r_r30, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 8, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPyModule_typing_extensions = cpy_r_r33;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r33);
    cpy_r_r34 = CPyStatics[9141]; /* ('errorcodes',) */
    cpy_r_r35 = CPyStatics[9142]; /* ('codes',) */
    cpy_r_r36 = CPyStatics[27]; /* 'mypy' */
    cpy_r_r37 = CPyStatic_mypy___errors___globals;
    cpy_r_r38 = CPyImport_ImportFromMany(cpy_r_r36, cpy_r_r34, cpy_r_r35, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 10, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPyModule_mypy = cpy_r_r38;
    CPy_INCREF(CPyModule_mypy);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r39 = CPyStatics[9368]; /* ('IMPORT', 'ErrorCode') */
    cpy_r_r40 = CPyStatics[924]; /* 'mypy.errorcodes' */
    cpy_r_r41 = CPyStatic_mypy___errors___globals;
    cpy_r_r42 = CPyImport_ImportFromMany(cpy_r_r40, cpy_r_r39, cpy_r_r39, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 11, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPyModule_mypy___errorcodes = cpy_r_r42;
    CPy_INCREF(CPyModule_mypy___errorcodes);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r43 = CPyStatics[9189]; /* ('ErrorMessage',) */
    cpy_r_r44 = CPyStatics[933]; /* 'mypy.message_registry' */
    cpy_r_r45 = CPyStatic_mypy___errors___globals;
    cpy_r_r46 = CPyImport_ImportFromMany(cpy_r_r44, cpy_r_r43, cpy_r_r43, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 12, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPyModule_mypy___message_registry = cpy_r_r46;
    CPy_INCREF(CPyModule_mypy___message_registry);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r47 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r48 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r49 = CPyStatic_mypy___errors___globals;
    cpy_r_r50 = CPyImport_ImportFromMany(cpy_r_r48, cpy_r_r47, cpy_r_r47, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 13, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPyModule_mypy___options = cpy_r_r50;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r51 = CPyStatics[9197]; /* ('Scope',) */
    cpy_r_r52 = CPyStatics[1010]; /* 'mypy.scope' */
    cpy_r_r53 = CPyStatic_mypy___errors___globals;
    cpy_r_r54 = CPyImport_ImportFromMany(cpy_r_r52, cpy_r_r51, cpy_r_r51, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 14, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPyModule_mypy___scope = cpy_r_r54;
    CPy_INCREF(CPyModule_mypy___scope);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r55 = CPyStatics[9369]; /* ('DEFAULT_SOURCE_OFFSET', 'is_typeshed_file') */
    cpy_r_r56 = CPyStatics[554]; /* 'mypy.util' */
    cpy_r_r57 = CPyStatic_mypy___errors___globals;
    cpy_r_r58 = CPyImport_ImportFromMany(cpy_r_r56, cpy_r_r55, cpy_r_r55, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 15, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPyModule_mypy___util = cpy_r_r58;
    CPy_INCREF(CPyModule_mypy___util);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r59 = CPyStatics[9159]; /* ('__version__',) */
    cpy_r_r60 = CPyStatics[9370]; /* ('mypy_version',) */
    cpy_r_r61 = CPyStatics[597]; /* 'mypy.version' */
    cpy_r_r62 = CPyStatic_mypy___errors___globals;
    cpy_r_r63 = CPyImport_ImportFromMany(cpy_r_r61, cpy_r_r59, cpy_r_r60, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 16, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPyModule_mypy___version = cpy_r_r63;
    CPy_INCREF(CPyModule_mypy___version);
    CPy_DECREF(cpy_r_r63);
    cpy_r_r64 = CPyStatics[1088]; /* 'T' */
    cpy_r_r65 = CPyStatic_mypy___errors___globals;
    cpy_r_r66 = CPyStatics[902]; /* 'TypeVar' */
    cpy_r_r67 = CPyDict_GetItem(cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 18, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    PyObject *cpy_r_r68[1] = {cpy_r_r64};
    cpy_r_r69 = (PyObject **)&cpy_r_r68;
    cpy_r_r70 = _PyObject_Vectorcall(cpy_r_r67, cpy_r_r69, 1, 0);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 18, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r71 = CPyStatic_mypy___errors___globals;
    cpy_r_r72 = CPyStatics[1088]; /* 'T' */
    cpy_r_r73 = CPyDict_SetItem(cpy_r_r71, cpy_r_r72, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r74 = cpy_r_r73 >= 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 18, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r75 = CPyModule_mypy___errorcodes;
    cpy_r_r76 = CPyStatics[2166]; /* 'ANNOTATION_UNCHECKED' */
    cpy_r_r77 = CPyObject_GetAttr(cpy_r_r75, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 22, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r77, CPyType_errorcodes___ErrorCode)))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypy/errors.py", "<module>", 22, CPyStatic_mypy___errors___globals, "mypy.errorcodes.ErrorCode", cpy_r_r77);
        goto CPyL99;
    }
    cpy_r_r79 = PySet_New(NULL);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 22, CPyStatic_mypy___errors___globals);
        goto CPyL100;
    }
    cpy_r_r80 = PySet_Add(cpy_r_r79, cpy_r_r78);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 22, CPyStatic_mypy___errors___globals);
        goto CPyL101;
    }
    CPyStatic_mypy___errors___SHOW_NOTE_CODES = cpy_r_r79;
    CPy_INCREF(CPyStatic_mypy___errors___SHOW_NOTE_CODES);
    cpy_r_r82 = CPyStatic_mypy___errors___globals;
    cpy_r_r83 = CPyStatics[2263]; /* 'SHOW_NOTE_CODES' */
    cpy_r_r84 = CPyDict_SetItem(cpy_r_r82, cpy_r_r83, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 22, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r86 = CPyStatic_errorcodes___MISC;
    if (likely(cpy_r_r86 != NULL)) goto CPyL26;
    PyErr_SetString(PyExc_NameError, "value for final name \"MISC\" was not set");
    cpy_r_r87 = 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 28, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r88 = CPyStatic_errorcodes___ASSIGNMENT;
    if (likely(cpy_r_r88 != NULL)) goto CPyL29;
    PyErr_SetString(PyExc_NameError, "value for final name \"ASSIGNMENT\" was not set");
    cpy_r_r89 = 0;
    if (unlikely(!cpy_r_r89)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 30, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r90 = CPyStatic_errorcodes___ARG_TYPE;
    if (likely(cpy_r_r90 != NULL)) goto CPyL32;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_TYPE\" was not set");
    cpy_r_r91 = 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 31, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r92 = CPyStatic_errorcodes___RETURN_VALUE;
    if (likely(cpy_r_r92 != NULL)) goto CPyL35;
    PyErr_SetString(PyExc_NameError, "value for final name \"RETURN_VALUE\" was not set");
    cpy_r_r93 = 0;
    if (unlikely(!cpy_r_r93)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 32, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r94 = CPyStatic_errorcodes___ATTR_DEFINED;
    if (likely(cpy_r_r94 != NULL)) goto CPyL38;
    PyErr_SetString(PyExc_NameError, "value for final name \"ATTR_DEFINED\" was not set");
    cpy_r_r95 = 0;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 34, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r96 = CPyStatic_errorcodes___NAME_DEFINED;
    if (likely(cpy_r_r96 != NULL)) goto CPyL41;
    PyErr_SetString(PyExc_NameError, "value for final name \"NAME_DEFINED\" was not set");
    cpy_r_r97 = 0;
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 35, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r98 = CPyStatic_errorcodes___OVERRIDE;
    if (likely(cpy_r_r98 != NULL)) goto CPyL44;
    PyErr_SetString(PyExc_NameError, "value for final name \"OVERRIDE\" was not set");
    cpy_r_r99 = 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 37, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPy_Unreachable();
CPyL44: ;
    cpy_r_r100 = PySet_New(NULL);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 26, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r101 = PySet_Add(cpy_r_r100, cpy_r_r86);
    cpy_r_r102 = cpy_r_r101 >= 0;
    if (unlikely(!cpy_r_r102)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 26, CPyStatic_mypy___errors___globals);
        goto CPyL102;
    }
    cpy_r_r103 = PySet_Add(cpy_r_r100, cpy_r_r88);
    cpy_r_r104 = cpy_r_r103 >= 0;
    if (unlikely(!cpy_r_r104)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 26, CPyStatic_mypy___errors___globals);
        goto CPyL102;
    }
    cpy_r_r105 = PySet_Add(cpy_r_r100, cpy_r_r90);
    cpy_r_r106 = cpy_r_r105 >= 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 26, CPyStatic_mypy___errors___globals);
        goto CPyL102;
    }
    cpy_r_r107 = PySet_Add(cpy_r_r100, cpy_r_r92);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 26, CPyStatic_mypy___errors___globals);
        goto CPyL102;
    }
    cpy_r_r109 = PySet_Add(cpy_r_r100, cpy_r_r94);
    cpy_r_r110 = cpy_r_r109 >= 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 26, CPyStatic_mypy___errors___globals);
        goto CPyL102;
    }
    cpy_r_r111 = PySet_Add(cpy_r_r100, cpy_r_r96);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 26, CPyStatic_mypy___errors___globals);
        goto CPyL102;
    }
    cpy_r_r113 = PySet_Add(cpy_r_r100, cpy_r_r98);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 26, CPyStatic_mypy___errors___globals);
        goto CPyL102;
    }
    CPyStatic_mypy___errors___HIDE_LINK_CODES = cpy_r_r100;
    CPy_INCREF(CPyStatic_mypy___errors___HIDE_LINK_CODES);
    cpy_r_r115 = CPyStatic_mypy___errors___globals;
    cpy_r_r116 = CPyStatics[2264]; /* 'HIDE_LINK_CODES' */
    cpy_r_r117 = CPyDict_SetItem(cpy_r_r115, cpy_r_r116, cpy_r_r100);
    CPy_DECREF(cpy_r_r100);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 26, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r119 = CPyStatics[2265]; /* '@overload' */
    cpy_r_r120 = CPyStatics[2243]; /* 'Got:' */
    cpy_r_r121 = CPyStatics[2266]; /* 'Expected:' */
    cpy_r_r122 = PyList_New(3);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 40, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r123 = (CPyPtr)&((PyListObject *)cpy_r_r122)->ob_item;
    cpy_r_r124 = *(CPyPtr *)cpy_r_r123;
    CPy_INCREF(cpy_r_r119);
    *(PyObject * *)cpy_r_r124 = cpy_r_r119;
    cpy_r_r125 = cpy_r_r124 + 8;
    CPy_INCREF(cpy_r_r120);
    *(PyObject * *)cpy_r_r125 = cpy_r_r120;
    cpy_r_r126 = cpy_r_r124 + 16;
    CPy_INCREF(cpy_r_r121);
    *(PyObject * *)cpy_r_r126 = cpy_r_r121;
    CPyStatic_mypy___errors___allowed_duplicates = cpy_r_r122;
    CPy_INCREF(CPyStatic_mypy___errors___allowed_duplicates);
    cpy_r_r127 = CPyStatic_mypy___errors___globals;
    cpy_r_r128 = CPyStatics[2267]; /* 'allowed_duplicates' */
    cpy_r_r129 = CPyDict_SetItem(cpy_r_r127, cpy_r_r128, cpy_r_r122);
    CPy_DECREF(cpy_r_r122);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 40, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r131 = CPyStatics[2220]; /* 'https://mypy.rtfd.io/en/stable/_refs.html#code' */
    cpy_r_r132 = CPyStatic_mypy___errors___globals;
    cpy_r_r133 = CPyStatics[2268]; /* 'BASE_RTD_URL' */
    cpy_r_r134 = CPyDict_SetItem(cpy_r_r132, cpy_r_r133, cpy_r_r131);
    cpy_r_r135 = cpy_r_r134 >= 0;
    if (unlikely(!cpy_r_r135)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 42, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r136 = CPyStatic_errorcodes___LITERAL_REQ;
    if (likely(cpy_r_r136 != NULL)) goto CPyL59;
    PyErr_SetString(PyExc_NameError, "value for final name \"LITERAL_REQ\" was not set");
    cpy_r_r137 = 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 46, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPy_Unreachable();
CPyL59: ;
    cpy_r_r138 = CPyStatic_errorcodes___MISC;
    if (likely(cpy_r_r138 != NULL)) goto CPyL62;
    PyErr_SetString(PyExc_NameError, "value for final name \"MISC\" was not set");
    cpy_r_r139 = 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 46, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r140 = CPyStatic_errorcodes___TYPE_ABSTRACT;
    if (likely(cpy_r_r140 != NULL)) goto CPyL65;
    PyErr_SetString(PyExc_NameError, "value for final name \"TYPE_ABSTRACT\" was not set");
    cpy_r_r141 = 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 46, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPy_Unreachable();
CPyL65: ;
    cpy_r_r142 = CPyStatic_errorcodes___MISC;
    if (likely(cpy_r_r142 != NULL)) goto CPyL68;
    PyErr_SetString(PyExc_NameError, "value for final name \"MISC\" was not set");
    cpy_r_r143 = 0;
    if (unlikely(!cpy_r_r143)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 46, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPy_Unreachable();
CPyL68: ;
    cpy_r_r144 = CPyDict_Build(2, cpy_r_r136, cpy_r_r138, cpy_r_r140, cpy_r_r142);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 46, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    CPyStatic_mypy___errors___original_error_codes = cpy_r_r144;
    CPy_INCREF(CPyStatic_mypy___errors___original_error_codes);
    cpy_r_r145 = CPyStatic_mypy___errors___globals;
    cpy_r_r146 = CPyStatics[2269]; /* 'original_error_codes' */
    cpy_r_r147 = CPyDict_SetItem(cpy_r_r145, cpy_r_r146, cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    cpy_r_r148 = cpy_r_r147 >= 0;
    if (unlikely(!cpy_r_r148)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 46, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r149 = NULL;
    cpy_r_r150 = CPyStatics[522]; /* 'mypy.errors' */
    cpy_r_r151 = (PyObject *)CPyType_mypy___errors___ErrorInfo_template;
    cpy_r_r152 = CPyType_FromTemplate(cpy_r_r151, cpy_r_r149, cpy_r_r150);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 49, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r153 = CPyDef_mypy___errors___ErrorInfo_trait_vtable_setup();
    if (unlikely(cpy_r_r153 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", -1, CPyStatic_mypy___errors___globals);
        goto CPyL103;
    }
    cpy_r_r154 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r155 = CPyStatics[2270]; /* 'import_ctx' */
    cpy_r_r156 = CPyStatics[191]; /* 'file' */
    cpy_r_r157 = CPyStatics[408]; /* 'module' */
    cpy_r_r158 = CPyStatics[802]; /* 'type' */
    cpy_r_r159 = CPyStatics[2271]; /* 'function_or_member' */
    cpy_r_r160 = CPyStatics[2272]; /* 'line' */
    cpy_r_r161 = CPyStatics[2273]; /* 'column' */
    cpy_r_r162 = CPyStatics[2274]; /* 'end_line' */
    cpy_r_r163 = CPyStatics[2275]; /* 'end_column' */
    cpy_r_r164 = CPyStatics[2276]; /* 'severity' */
    cpy_r_r165 = CPyStatics[2277]; /* 'message' */
    cpy_r_r166 = CPyStatics[6]; /* 'code' */
    cpy_r_r167 = CPyStatics[2278]; /* 'blocker' */
    cpy_r_r168 = CPyStatics[2279]; /* 'only_once' */
    cpy_r_r169 = CPyStatics[2280]; /* 'allow_dups' */
    cpy_r_r170 = CPyStatics[2281]; /* 'origin' */
    cpy_r_r171 = CPyStatics[1629]; /* 'target' */
    cpy_r_r172 = CPyStatics[2282]; /* 'hidden' */
    cpy_r_r173 = CPyStatics[2283]; /* 'priority' */
    cpy_r_r174 = PyTuple_Pack(19, cpy_r_r155, cpy_r_r156, cpy_r_r157, cpy_r_r158, cpy_r_r159, cpy_r_r160, cpy_r_r161, cpy_r_r162, cpy_r_r163, cpy_r_r164, cpy_r_r165, cpy_r_r166, cpy_r_r167, cpy_r_r168, cpy_r_r169, cpy_r_r170, cpy_r_r171, cpy_r_r172, cpy_r_r173);
    if (unlikely(cpy_r_r174 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 49, CPyStatic_mypy___errors___globals);
        goto CPyL103;
    }
    cpy_r_r175 = PyObject_SetAttr(cpy_r_r152, cpy_r_r154, cpy_r_r174);
    CPy_DECREF(cpy_r_r174);
    cpy_r_r176 = cpy_r_r175 >= 0;
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 49, CPyStatic_mypy___errors___globals);
        goto CPyL103;
    }
    CPyType_mypy___errors___ErrorInfo = (PyTypeObject *)cpy_r_r152;
    CPy_INCREF(CPyType_mypy___errors___ErrorInfo);
    cpy_r_r177 = CPyStatic_mypy___errors___globals;
    cpy_r_r178 = CPyStatics[519]; /* 'ErrorInfo' */
    cpy_r_r179 = CPyDict_SetItem(cpy_r_r177, cpy_r_r178, cpy_r_r152);
    CPy_DECREF(cpy_r_r152);
    cpy_r_r180 = cpy_r_r179 >= 0;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 49, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r181 = CPyStatic_mypy___errors___globals;
    cpy_r_r182 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r183 = CPyDict_GetItem(cpy_r_r181, cpy_r_r182);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 153, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r184 = CPyStatic_mypy___errors___globals;
    cpy_r_r185 = CPyStatics[82]; /* 'Optional' */
    cpy_r_r186 = CPyDict_GetItem(cpy_r_r184, cpy_r_r185);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 154, CPyStatic_mypy___errors___globals);
        goto CPyL104;
    }
    cpy_r_r187 = (PyObject *)&PyUnicode_Type;
    cpy_r_r188 = PyObject_GetItem(cpy_r_r186, cpy_r_r187);
    CPy_DECREF(cpy_r_r186);
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 154, CPyStatic_mypy___errors___globals);
        goto CPyL104;
    }
    cpy_r_r189 = (PyObject *)&PyLong_Type;
    cpy_r_r190 = (PyObject *)&PyLong_Type;
    cpy_r_r191 = (PyObject *)&PyLong_Type;
    cpy_r_r192 = (PyObject *)&PyLong_Type;
    cpy_r_r193 = (PyObject *)&PyUnicode_Type;
    cpy_r_r194 = (PyObject *)&PyUnicode_Type;
    cpy_r_r195 = (PyObject *)&PyBool_Type;
    cpy_r_r196 = CPyStatic_mypy___errors___globals;
    cpy_r_r197 = CPyStatics[82]; /* 'Optional' */
    cpy_r_r198 = CPyDict_GetItem(cpy_r_r196, cpy_r_r197);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 154, CPyStatic_mypy___errors___globals);
        goto CPyL105;
    }
    cpy_r_r199 = (PyObject *)CPyType_errorcodes___ErrorCode;
    cpy_r_r200 = PyObject_GetItem(cpy_r_r198, cpy_r_r199);
    CPy_DECREF(cpy_r_r198);
    if (unlikely(cpy_r_r200 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 154, CPyStatic_mypy___errors___globals);
        goto CPyL105;
    }
    cpy_r_r201.f0 = cpy_r_r188;
    cpy_r_r201.f1 = cpy_r_r189;
    cpy_r_r201.f2 = cpy_r_r190;
    cpy_r_r201.f3 = cpy_r_r191;
    cpy_r_r201.f4 = cpy_r_r192;
    cpy_r_r201.f5 = cpy_r_r193;
    cpy_r_r201.f6 = cpy_r_r194;
    cpy_r_r201.f7 = cpy_r_r195;
    cpy_r_r201.f8 = cpy_r_r200;
    CPy_INCREF(cpy_r_r201.f0);
    CPy_INCREF(cpy_r_r201.f1);
    CPy_INCREF(cpy_r_r201.f2);
    CPy_INCREF(cpy_r_r201.f3);
    CPy_INCREF(cpy_r_r201.f4);
    CPy_INCREF(cpy_r_r201.f5);
    CPy_INCREF(cpy_r_r201.f6);
    CPy_INCREF(cpy_r_r201.f7);
    CPy_INCREF(cpy_r_r201.f8);
    CPy_DECREF(cpy_r_r188);
    CPy_DECREF(cpy_r_r200);
    cpy_r_r202 = PyTuple_New(9);
    if (unlikely(cpy_r_r202 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp2614 = cpy_r_r201.f0;
    PyTuple_SET_ITEM(cpy_r_r202, 0, __tmp2614);
    PyObject *__tmp2615 = cpy_r_r201.f1;
    PyTuple_SET_ITEM(cpy_r_r202, 1, __tmp2615);
    PyObject *__tmp2616 = cpy_r_r201.f2;
    PyTuple_SET_ITEM(cpy_r_r202, 2, __tmp2616);
    PyObject *__tmp2617 = cpy_r_r201.f3;
    PyTuple_SET_ITEM(cpy_r_r202, 3, __tmp2617);
    PyObject *__tmp2618 = cpy_r_r201.f4;
    PyTuple_SET_ITEM(cpy_r_r202, 4, __tmp2618);
    PyObject *__tmp2619 = cpy_r_r201.f5;
    PyTuple_SET_ITEM(cpy_r_r202, 5, __tmp2619);
    PyObject *__tmp2620 = cpy_r_r201.f6;
    PyTuple_SET_ITEM(cpy_r_r202, 6, __tmp2620);
    PyObject *__tmp2621 = cpy_r_r201.f7;
    PyTuple_SET_ITEM(cpy_r_r202, 7, __tmp2621);
    PyObject *__tmp2622 = cpy_r_r201.f8;
    PyTuple_SET_ITEM(cpy_r_r202, 8, __tmp2622);
    cpy_r_r203 = PyObject_GetItem(cpy_r_r183, cpy_r_r202);
    CPy_DECREF(cpy_r_r183);
    CPy_DECREF(cpy_r_r202);
    if (unlikely(cpy_r_r203 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 153, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r204 = CPyStatic_mypy___errors___globals;
    cpy_r_r205 = CPyStatics[2284]; /* 'ErrorTuple' */
    cpy_r_r206 = CPyDict_SetItem(cpy_r_r204, cpy_r_r205, cpy_r_r203);
    CPy_DECREF(cpy_r_r203);
    cpy_r_r207 = cpy_r_r206 >= 0;
    if (unlikely(!cpy_r_r207)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 153, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r208 = NULL;
    cpy_r_r209 = CPyStatics[522]; /* 'mypy.errors' */
    cpy_r_r210 = (PyObject *)CPyType_mypy___errors___ErrorWatcher_template;
    cpy_r_r211 = CPyType_FromTemplate(cpy_r_r210, cpy_r_r208, cpy_r_r209);
    if (unlikely(cpy_r_r211 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 158, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r212 = CPyDef_mypy___errors___ErrorWatcher_trait_vtable_setup();
    if (unlikely(cpy_r_r212 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", -1, CPyStatic_mypy___errors___globals);
        goto CPyL106;
    }
    cpy_r_r213 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r214 = CPyStatics[610]; /* 'errors' */
    cpy_r_r215 = CPyStatics[2285]; /* '_has_new_errors' */
    cpy_r_r216 = CPyStatics[2286]; /* '_filter' */
    cpy_r_r217 = CPyStatics[2287]; /* '_filtered' */
    cpy_r_r218 = PyTuple_Pack(4, cpy_r_r214, cpy_r_r215, cpy_r_r216, cpy_r_r217);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 158, CPyStatic_mypy___errors___globals);
        goto CPyL106;
    }
    cpy_r_r219 = PyObject_SetAttr(cpy_r_r211, cpy_r_r213, cpy_r_r218);
    CPy_DECREF(cpy_r_r218);
    cpy_r_r220 = cpy_r_r219 >= 0;
    if (unlikely(!cpy_r_r220)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 158, CPyStatic_mypy___errors___globals);
        goto CPyL106;
    }
    CPyType_mypy___errors___ErrorWatcher = (PyTypeObject *)cpy_r_r211;
    CPy_INCREF(CPyType_mypy___errors___ErrorWatcher);
    cpy_r_r221 = CPyStatic_mypy___errors___globals;
    cpy_r_r222 = CPyStatics[925]; /* 'ErrorWatcher' */
    cpy_r_r223 = CPyDict_SetItem(cpy_r_r221, cpy_r_r222, cpy_r_r211);
    CPy_DECREF(cpy_r_r211);
    cpy_r_r224 = cpy_r_r223 >= 0;
    if (unlikely(!cpy_r_r224)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 158, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r225 = NULL;
    cpy_r_r226 = CPyStatics[522]; /* 'mypy.errors' */
    cpy_r_r227 = (PyObject *)CPyType_mypy___errors___Errors_template;
    cpy_r_r228 = CPyType_FromTemplate(cpy_r_r227, cpy_r_r225, cpy_r_r226);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 216, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r229 = CPyDef_mypy___errors___Errors_trait_vtable_setup();
    if (unlikely(cpy_r_r229 == 2)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", -1, CPyStatic_mypy___errors___globals);
        goto CPyL107;
    }
    cpy_r_r230 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r231 = CPyStatics[2288]; /* 'error_info_map' */
    cpy_r_r232 = CPyStatics[2289]; /* 'has_blockers' */
    cpy_r_r233 = CPyStatics[2290]; /* 'flushed_files' */
    cpy_r_r234 = CPyStatics[2270]; /* 'import_ctx' */
    cpy_r_r235 = CPyStatics[2291]; /* 'ignore_prefix' */
    cpy_r_r236 = CPyStatics[191]; /* 'file' */
    cpy_r_r237 = CPyStatics[2292]; /* 'ignored_lines' */
    cpy_r_r238 = CPyStatics[2293]; /* 'skipped_lines' */
    cpy_r_r239 = CPyStatics[2294]; /* 'used_ignored_lines' */
    cpy_r_r240 = CPyStatics[2295]; /* 'ignored_files' */
    cpy_r_r241 = CPyStatics[2296]; /* 'only_once_messages' */
    cpy_r_r242 = CPyStatics[2297]; /* 'show_error_context' */
    cpy_r_r243 = CPyStatics[2298]; /* 'show_column_numbers' */
    cpy_r_r244 = CPyStatics[2299]; /* 'show_error_end' */
    cpy_r_r245 = CPyStatics[2300]; /* 'show_absolute_path' */
    cpy_r_r246 = CPyStatics[2301]; /* 'target_module' */
    cpy_r_r247 = CPyStatics[1104]; /* 'scope' */
    cpy_r_r248 = CPyStatics[2302]; /* 'seen_import_error' */
    cpy_r_r249 = CPyStatics[2303]; /* '_watchers' */
    cpy_r_r250 = CPyStatics[159]; /* 'options' */
    cpy_r_r251 = CPyStatics[2304]; /* 'hide_error_codes' */
    cpy_r_r252 = CPyStatics[2305]; /* 'read_source' */
    cpy_r_r253 = CPyStatics[2271]; /* 'function_or_member' */
    cpy_r_r254 = PyTuple_Pack(23, cpy_r_r231, cpy_r_r232, cpy_r_r233, cpy_r_r234, cpy_r_r235, cpy_r_r236, cpy_r_r237, cpy_r_r238, cpy_r_r239, cpy_r_r240, cpy_r_r241, cpy_r_r242, cpy_r_r243, cpy_r_r244, cpy_r_r245, cpy_r_r246, cpy_r_r247, cpy_r_r248, cpy_r_r249, cpy_r_r250, cpy_r_r251, cpy_r_r252, cpy_r_r253);
    if (unlikely(cpy_r_r254 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 216, CPyStatic_mypy___errors___globals);
        goto CPyL107;
    }
    cpy_r_r255 = PyObject_SetAttr(cpy_r_r228, cpy_r_r230, cpy_r_r254);
    CPy_DECREF(cpy_r_r254);
    cpy_r_r256 = cpy_r_r255 >= 0;
    if (unlikely(!cpy_r_r256)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 216, CPyStatic_mypy___errors___globals);
        goto CPyL107;
    }
    CPyType_mypy___errors___Errors = (PyTypeObject *)cpy_r_r228;
    CPy_INCREF(CPyType_mypy___errors___Errors);
    cpy_r_r257 = CPyStatic_mypy___errors___globals;
    cpy_r_r258 = CPyStatics[520]; /* 'Errors' */
    cpy_r_r259 = CPyDict_SetItem(cpy_r_r257, cpy_r_r258, cpy_r_r228);
    CPy_DECREF(cpy_r_r228);
    cpy_r_r260 = cpy_r_r259 >= 0;
    if (unlikely(!cpy_r_r260)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 216, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r261 = CPyModule_builtins;
    cpy_r_r262 = CPyStatics[184]; /* 'Exception' */
    cpy_r_r263 = CPyObject_GetAttr(cpy_r_r261, cpy_r_r262);
    if (unlikely(cpy_r_r263 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 1161, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r264 = PyTuple_Pack(1, cpy_r_r263);
    CPy_DECREF(cpy_r_r263);
    if (unlikely(cpy_r_r264 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 1161, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r265 = CPyStatics[522]; /* 'mypy.errors' */
    cpy_r_r266 = (PyObject *)CPyType_mypy___errors___CompileError_template;
    cpy_r_r267 = CPyType_FromTemplate(cpy_r_r266, cpy_r_r264, cpy_r_r265);
    CPy_DECREF(cpy_r_r264);
    if (unlikely(cpy_r_r267 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 1161, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    cpy_r_r268 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r269 = CPyStatics[663]; /* '__dict__' */
    cpy_r_r270 = PyTuple_Pack(1, cpy_r_r269);
    if (unlikely(cpy_r_r270 == NULL)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 1161, CPyStatic_mypy___errors___globals);
        goto CPyL108;
    }
    cpy_r_r271 = PyObject_SetAttr(cpy_r_r267, cpy_r_r268, cpy_r_r270);
    CPy_DECREF(cpy_r_r270);
    cpy_r_r272 = cpy_r_r271 >= 0;
    if (unlikely(!cpy_r_r272)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 1161, CPyStatic_mypy___errors___globals);
        goto CPyL108;
    }
    CPyType_mypy___errors___CompileError = (PyTypeObject *)cpy_r_r267;
    CPy_INCREF(CPyType_mypy___errors___CompileError);
    cpy_r_r273 = CPyStatic_mypy___errors___globals;
    cpy_r_r274 = CPyStatics[518]; /* 'CompileError' */
    cpy_r_r275 = CPyDict_SetItem(cpy_r_r273, cpy_r_r274, cpy_r_r267);
    CPy_DECREF(cpy_r_r267);
    cpy_r_r276 = cpy_r_r275 >= 0;
    if (unlikely(!cpy_r_r276)) {
        CPy_AddTraceback("mypy/errors.py", "<module>", 1161, CPyStatic_mypy___errors___globals);
        goto CPyL99;
    }
    return 1;
CPyL99: ;
    cpy_r_r277 = 2;
    return cpy_r_r277;
CPyL100: ;
    CPy_DecRef(cpy_r_r78);
    goto CPyL99;
CPyL101: ;
    CPy_DecRef(cpy_r_r79);
    goto CPyL99;
CPyL102: ;
    CPy_DecRef(cpy_r_r100);
    goto CPyL99;
CPyL103: ;
    CPy_DecRef(cpy_r_r152);
    goto CPyL99;
CPyL104: ;
    CPy_DecRef(cpy_r_r183);
    goto CPyL99;
CPyL105: ;
    CPy_DecRef(cpy_r_r183);
    CPy_DecRef(cpy_r_r188);
    goto CPyL99;
CPyL106: ;
    CPy_DecRef(cpy_r_r211);
    goto CPyL99;
CPyL107: ;
    CPy_DecRef(cpy_r_r228);
    goto CPyL99;
CPyL108: ;
    CPy_DecRef(cpy_r_r267);
    goto CPyL99;
}
