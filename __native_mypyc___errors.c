#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
mypyc___errors___Errors_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *mypyc___errors___Errors_setup(PyTypeObject *type);
PyObject *CPyDef_mypyc___errors___Errors(PyObject *cpy_r_options);

static PyObject *
mypyc___errors___Errors_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypyc___errors___Errors) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = mypyc___errors___Errors_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_mypyc___errors___Errors_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
mypyc___errors___Errors_traverse(mypyc___errors___ErrorsObject *self, visitproc visit, void *arg)
{
    if (CPyTagged_CheckLong(self->_num_errors)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_num_errors));
    }
    if (CPyTagged_CheckLong(self->_num_warnings)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_num_warnings));
    }
    Py_VISIT(self->__errors);
    return 0;
}

static int
mypyc___errors___Errors_clear(mypyc___errors___ErrorsObject *self)
{
    if (CPyTagged_CheckLong(self->_num_errors)) {
        CPyTagged __tmp = self->_num_errors;
        self->_num_errors = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_num_warnings)) {
        CPyTagged __tmp = self->_num_warnings;
        self->_num_warnings = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->__errors);
    return 0;
}

static void
mypyc___errors___Errors_dealloc(mypyc___errors___ErrorsObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypyc___errors___Errors_dealloc)
    mypyc___errors___Errors_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypyc___errors___Errors_vtable[6];
static bool
CPyDef_mypyc___errors___Errors_trait_vtable_setup(void)
{
    CPyVTableItem mypyc___errors___Errors_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypyc___errors___Errors_____init__,
        (CPyVTableItem)CPyDef_mypyc___errors___Errors___error,
        (CPyVTableItem)CPyDef_mypyc___errors___Errors___note,
        (CPyVTableItem)CPyDef_mypyc___errors___Errors___warning,
        (CPyVTableItem)CPyDef_mypyc___errors___Errors___new_messages,
        (CPyVTableItem)CPyDef_mypyc___errors___Errors___flush_errors,
    };
    memcpy(mypyc___errors___Errors_vtable, mypyc___errors___Errors_vtable_scratch, sizeof(mypyc___errors___Errors_vtable));
    return 1;
}

static PyObject *
mypyc___errors___Errors_get_num_errors(mypyc___errors___ErrorsObject *self, void *closure);
static int
mypyc___errors___Errors_set_num_errors(mypyc___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypyc___errors___Errors_get_num_warnings(mypyc___errors___ErrorsObject *self, void *closure);
static int
mypyc___errors___Errors_set_num_warnings(mypyc___errors___ErrorsObject *self, PyObject *value, void *closure);
static PyObject *
mypyc___errors___Errors_get__errors(mypyc___errors___ErrorsObject *self, void *closure);
static int
mypyc___errors___Errors_set__errors(mypyc___errors___ErrorsObject *self, PyObject *value, void *closure);

static PyGetSetDef mypyc___errors___Errors_getseters[] = {
    {"num_errors",
     (getter)mypyc___errors___Errors_get_num_errors, (setter)mypyc___errors___Errors_set_num_errors,
     NULL, NULL},
    {"num_warnings",
     (getter)mypyc___errors___Errors_get_num_warnings, (setter)mypyc___errors___Errors_set_num_warnings,
     NULL, NULL},
    {"_errors",
     (getter)mypyc___errors___Errors_get__errors, (setter)mypyc___errors___Errors_set__errors,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef mypyc___errors___Errors_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_mypyc___errors___Errors_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"error",
     (PyCFunction)CPyPy_mypyc___errors___Errors___error,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"note",
     (PyCFunction)CPyPy_mypyc___errors___Errors___note,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"warning",
     (PyCFunction)CPyPy_mypyc___errors___Errors___warning,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"new_messages",
     (PyCFunction)CPyPy_mypyc___errors___Errors___new_messages,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"flush_errors",
     (PyCFunction)CPyPy_mypyc___errors___Errors___flush_errors,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypyc___errors___Errors_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Errors",
    .tp_new = mypyc___errors___Errors_new,
    .tp_dealloc = (destructor)mypyc___errors___Errors_dealloc,
    .tp_traverse = (traverseproc)mypyc___errors___Errors_traverse,
    .tp_clear = (inquiry)mypyc___errors___Errors_clear,
    .tp_getset = mypyc___errors___Errors_getseters,
    .tp_methods = mypyc___errors___Errors_methods,
    .tp_init = mypyc___errors___Errors_init,
    .tp_basicsize = sizeof(mypyc___errors___ErrorsObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypyc___errors___Errors_template = &CPyType_mypyc___errors___Errors_template_;

static PyObject *
mypyc___errors___Errors_setup(PyTypeObject *type)
{
    mypyc___errors___ErrorsObject *self;
    self = (mypyc___errors___ErrorsObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypyc___errors___Errors_vtable;
    self->_num_errors = CPY_INT_TAG;
    self->_num_warnings = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_mypyc___errors___Errors(PyObject *cpy_r_options)
{
    PyObject *self = mypyc___errors___Errors_setup(CPyType_mypyc___errors___Errors);
    if (self == NULL)
        return NULL;
    char res = CPyDef_mypyc___errors___Errors_____init__(self, cpy_r_options);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
mypyc___errors___Errors_get_num_errors(mypyc___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_num_errors == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'num_errors' of 'Errors' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_num_errors);
    PyObject *retval = CPyTagged_StealAsObject(self->_num_errors);
    return retval;
}

static int
mypyc___errors___Errors_set_num_errors(mypyc___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'num_errors' cannot be deleted");
        return -1;
    }
    if (self->_num_errors != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_num_errors);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_num_errors = tmp;
    return 0;
}

static PyObject *
mypyc___errors___Errors_get_num_warnings(mypyc___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->_num_warnings == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'num_warnings' of 'Errors' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_num_warnings);
    PyObject *retval = CPyTagged_StealAsObject(self->_num_warnings);
    return retval;
}

static int
mypyc___errors___Errors_set_num_warnings(mypyc___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute 'num_warnings' cannot be deleted");
        return -1;
    }
    if (self->_num_warnings != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_num_warnings);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_num_warnings = tmp;
    return 0;
}

static PyObject *
mypyc___errors___Errors_get__errors(mypyc___errors___ErrorsObject *self, void *closure)
{
    if (unlikely(self->__errors == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_errors' of 'Errors' undefined");
        return NULL;
    }
    CPy_INCREF(self->__errors);
    PyObject *retval = self->__errors;
    return retval;
}

static int
mypyc___errors___Errors_set__errors(mypyc___errors___ErrorsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Errors' object attribute '_errors' cannot be deleted");
        return -1;
    }
    if (self->__errors != NULL) {
        CPy_DECREF(self->__errors);
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
    self->__errors = tmp;
    return 0;
}
static PyMethodDef mypyc___errorsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mypyc___errorsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.errors",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    mypyc___errorsmodule_methods
};

PyObject *CPyInit_mypyc___errors(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___errors_internal) {
        Py_INCREF(CPyModule_mypyc___errors_internal);
        return CPyModule_mypyc___errors_internal;
    }
    CPyModule_mypyc___errors_internal = PyModule_Create(&mypyc___errorsmodule);
    if (unlikely(CPyModule_mypyc___errors_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___errors_internal, "__name__");
    CPyStatic_mypyc___errors___globals = PyModule_GetDict(CPyModule_mypyc___errors_internal);
    if (unlikely(CPyStatic_mypyc___errors___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_mypyc___errors_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___errors_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___errors_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_mypyc___errors___Errors);
    return NULL;
}

char CPyDef_mypyc___errors___Errors_____init__(PyObject *cpy_r_self, PyObject *cpy_r_options) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    ((mypyc___errors___ErrorsObject *)cpy_r_self)->_num_errors = 0;
    ((mypyc___errors___ErrorsObject *)cpy_r_self)->_num_warnings = 0;
    cpy_r_r0 = NULL;
    cpy_r_r1 = 1 ? Py_True : Py_False;
    cpy_r_r2 = CPyDef_mypy___errors___Errors(cpy_r_options, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/errors.py", "__init__", 11, CPyStatic_mypyc___errors___globals);
        goto CPyL2;
    }
    ((mypyc___errors___ErrorsObject *)cpy_r_self)->__errors = cpy_r_r2;
    return 1;
CPyL2: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_mypyc___errors___Errors_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"options", 0};
    PyObject *obj_options;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "O", "__init__", kwlist, &obj_options)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypyc___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_options;
    if (likely(Py_TYPE(obj_options) == CPyType_mypy___options___Options))
        arg_options = obj_options;
    else {
        CPy_TypeError("mypy.options.Options", obj_options); 
        goto fail;
    }
    char retval = CPyDef_mypyc___errors___Errors_____init__(arg_self, arg_options);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/errors.py", "__init__", 8, CPyStatic_mypyc___errors___globals);
    return NULL;
}

char CPyDef_mypyc___errors___Errors___error(PyObject *cpy_r_self, PyObject *cpy_r_msg, PyObject *cpy_r_path, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypyc___errors___ErrorsObject *)cpy_r_self)->__errors;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[401]; /* 'error' */
    cpy_r_r2 = Py_None;
    cpy_r_r3 = NULL;
    cpy_r_r4 = 2;
    cpy_r_r5 = 2;
    cpy_r_r6 = 2;
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = NULL;
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPyDef_mypy___errors___Errors___report(cpy_r_r0, cpy_r_line, cpy_r_r2, cpy_r_msg, cpy_r_r3, cpy_r_r4, cpy_r_r1, cpy_r_path, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/errors.py", "error", 14, CPyStatic_mypyc___errors___globals);
        goto CPyL2;
    }
    cpy_r_r12 = ((mypyc___errors___ErrorsObject *)cpy_r_self)->_num_errors;
    cpy_r_r13 = CPyTagged_Add(cpy_r_r12, 2);
    CPyTagged_DECREF(((mypyc___errors___ErrorsObject *)cpy_r_self)->_num_errors);
    ((mypyc___errors___ErrorsObject *)cpy_r_self)->_num_errors = cpy_r_r13;
    return 1;
CPyL2: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
}

PyObject *CPyPy_mypyc___errors___Errors___error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "path", "line", 0};
    static CPyArg_Parser parser = {"OOO:error", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_path;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_msg, &obj_path, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypyc___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_mypyc___errors___Errors___error(arg_self, arg_msg, arg_path, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/errors.py", "error", 13, CPyStatic_mypyc___errors___globals);
    return NULL;
}

char CPyDef_mypyc___errors___Errors___note(PyObject *cpy_r_self, PyObject *cpy_r_msg, PyObject *cpy_r_path, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = ((mypyc___errors___ErrorsObject *)cpy_r_self)->__errors;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[413]; /* 'note' */
    cpy_r_r2 = Py_None;
    cpy_r_r3 = NULL;
    cpy_r_r4 = 2;
    cpy_r_r5 = 2;
    cpy_r_r6 = 2;
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = NULL;
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPyDef_mypy___errors___Errors___report(cpy_r_r0, cpy_r_line, cpy_r_r2, cpy_r_msg, cpy_r_r3, cpy_r_r4, cpy_r_r1, cpy_r_path, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/errors.py", "note", 18, CPyStatic_mypyc___errors___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
}

PyObject *CPyPy_mypyc___errors___Errors___note(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "path", "line", 0};
    static CPyArg_Parser parser = {"OOO:note", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_path;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_msg, &obj_path, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypyc___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_mypyc___errors___Errors___note(arg_self, arg_msg, arg_path, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/errors.py", "note", 17, CPyStatic_mypyc___errors___globals);
    return NULL;
}

char CPyDef_mypyc___errors___Errors___warning(PyObject *cpy_r_self, PyObject *cpy_r_msg, PyObject *cpy_r_path, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = ((mypyc___errors___ErrorsObject *)cpy_r_self)->__errors;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[7744]; /* 'warning' */
    cpy_r_r2 = Py_None;
    cpy_r_r3 = NULL;
    cpy_r_r4 = 2;
    cpy_r_r5 = 2;
    cpy_r_r6 = 2;
    cpy_r_r7 = NULL;
    cpy_r_r8 = CPY_INT_TAG;
    cpy_r_r9 = NULL;
    cpy_r_r10 = NULL;
    cpy_r_r11 = CPyDef_mypy___errors___Errors___report(cpy_r_r0, cpy_r_line, cpy_r_r2, cpy_r_msg, cpy_r_r3, cpy_r_r4, cpy_r_r1, cpy_r_path, cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r11 == 2)) {
        CPy_AddTraceback("mypyc/errors.py", "warning", 21, CPyStatic_mypyc___errors___globals);
        goto CPyL2;
    }
    cpy_r_r12 = ((mypyc___errors___ErrorsObject *)cpy_r_self)->_num_warnings;
    cpy_r_r13 = CPyTagged_Add(cpy_r_r12, 2);
    CPyTagged_DECREF(((mypyc___errors___ErrorsObject *)cpy_r_self)->_num_warnings);
    ((mypyc___errors___ErrorsObject *)cpy_r_self)->_num_warnings = cpy_r_r13;
    return 1;
CPyL2: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
}

PyObject *CPyPy_mypyc___errors___Errors___warning(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"msg", "path", "line", 0};
    static CPyArg_Parser parser = {"OOO:warning", kwlist, 0};
    PyObject *obj_msg;
    PyObject *obj_path;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_msg, &obj_path, &obj_line)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypyc___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *arg_msg;
    if (likely(PyUnicode_Check(obj_msg)))
        arg_msg = obj_msg;
    else {
        CPy_TypeError("str", obj_msg); 
        goto fail;
    }
    PyObject *arg_path;
    if (likely(PyUnicode_Check(obj_path)))
        arg_path = obj_path;
    else {
        CPy_TypeError("str", obj_path); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_mypyc___errors___Errors___warning(arg_self, arg_msg, arg_path, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/errors.py", "warning", 20, CPyStatic_mypyc___errors___globals);
    return NULL;
}

PyObject *CPyDef_mypyc___errors___Errors___new_messages(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___errors___ErrorsObject *)cpy_r_self)->__errors;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_mypy___errors___Errors___new_messages(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/errors.py", "new_messages", 25, CPyStatic_mypyc___errors___globals);
        goto CPyL2;
    }
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_mypyc___errors___Errors___new_messages(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":new_messages", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypyc___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_mypyc___errors___Errors___new_messages(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/errors.py", "new_messages", 24, CPyStatic_mypyc___errors___globals);
    return NULL;
}

char CPyDef_mypyc___errors___Errors___flush_errors(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_error;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject **cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    cpy_r_r0 = CPyDef_mypyc___errors___Errors___new_messages(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/errors.py", "flush_errors", 28, CPyStatic_mypyc___errors___globals);
        goto CPyL9;
    }
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL10;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely(PyUnicode_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/errors.py", "flush_errors", 28, CPyStatic_mypyc___errors___globals, "str", cpy_r_r6);
        goto CPyL11;
    }
    cpy_r_error = cpy_r_r7;
    cpy_r_r8 = CPyModule_builtins;
    cpy_r_r9 = CPyStatics[190]; /* 'print' */
    cpy_r_r10 = CPyObject_GetAttr(cpy_r_r8, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/errors.py", "flush_errors", 29, CPyStatic_mypyc___errors___globals);
        goto CPyL12;
    }
    PyObject *cpy_r_r11[1] = {cpy_r_error};
    cpy_r_r12 = (PyObject **)&cpy_r_r11;
    cpy_r_r13 = _PyObject_Vectorcall(cpy_r_r10, cpy_r_r12, 1, 0);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/errors.py", "flush_errors", 29, CPyStatic_mypyc___errors___globals);
        goto CPyL12;
    } else
        goto CPyL13;
CPyL6: ;
    CPy_DECREF(cpy_r_error);
    cpy_r_r14 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r14;
    goto CPyL2;
CPyL8: ;
    return 1;
CPyL9: ;
    cpy_r_r15 = 2;
    return cpy_r_r15;
CPyL10: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL8;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_error);
    goto CPyL9;
CPyL13: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL6;
}

PyObject *CPyPy_mypyc___errors___Errors___flush_errors(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":flush_errors", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypyc___errors___Errors))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.errors.Errors", obj_self); 
        goto fail;
    }
    char retval = CPyDef_mypyc___errors___Errors___flush_errors(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/errors.py", "flush_errors", 27, CPyStatic_mypyc___errors___globals);
    return NULL;
}

char CPyDef_mypyc___errors_____top_level__(void) {
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
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/errors.py", "<module>", -1, CPyStatic_mypyc___errors___globals);
        goto CPyL12;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_mypyc___errors___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/errors.py", "<module>", 1, CPyStatic_mypyc___errors___globals);
        goto CPyL12;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_mypy___errors;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {3};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[10004]; /* (('mypy.errors', 'mypy', 'mypy'),) */
    cpy_r_r15 = CPyStatic_mypyc___errors___globals;
    cpy_r_r16 = CPyStatics[7745]; /* 'mypyc/errors.py' */
    cpy_r_r17 = CPyStatics[17]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL12;
    cpy_r_r19 = CPyStatics[9150]; /* ('Options',) */
    cpy_r_r20 = CPyStatics[578]; /* 'mypy.options' */
    cpy_r_r21 = CPyStatic_mypyc___errors___globals;
    cpy_r_r22 = CPyImport_ImportFromMany(cpy_r_r20, cpy_r_r19, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/errors.py", "<module>", 4, CPyStatic_mypyc___errors___globals);
        goto CPyL12;
    }
    CPyModule_mypy___options = cpy_r_r22;
    CPy_INCREF(CPyModule_mypy___options);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyStatics[6842]; /* 'mypyc.errors' */
    cpy_r_r25 = (PyObject *)CPyType_mypyc___errors___Errors_template;
    cpy_r_r26 = CPyType_FromTemplate(cpy_r_r25, cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/errors.py", "<module>", 7, CPyStatic_mypyc___errors___globals);
        goto CPyL12;
    }
    cpy_r_r27 = CPyDef_mypyc___errors___Errors_trait_vtable_setup();
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/errors.py", "<module>", -1, CPyStatic_mypyc___errors___globals);
        goto CPyL13;
    }
    cpy_r_r28 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r29 = CPyStatics[7746]; /* 'num_errors' */
    cpy_r_r30 = CPyStatics[7747]; /* 'num_warnings' */
    cpy_r_r31 = CPyStatics[7748]; /* '_errors' */
    cpy_r_r32 = PyTuple_Pack(3, cpy_r_r29, cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/errors.py", "<module>", 7, CPyStatic_mypyc___errors___globals);
        goto CPyL13;
    }
    cpy_r_r33 = PyObject_SetAttr(cpy_r_r26, cpy_r_r28, cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/errors.py", "<module>", 7, CPyStatic_mypyc___errors___globals);
        goto CPyL13;
    }
    CPyType_mypyc___errors___Errors = (PyTypeObject *)cpy_r_r26;
    CPy_INCREF(CPyType_mypyc___errors___Errors);
    cpy_r_r35 = CPyStatic_mypyc___errors___globals;
    cpy_r_r36 = CPyStatics[520]; /* 'Errors' */
    cpy_r_r37 = CPyDict_SetItem(cpy_r_r35, cpy_r_r36, cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypyc/errors.py", "<module>", 7, CPyStatic_mypyc___errors___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r39 = 2;
    return cpy_r_r39;
CPyL13: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL12;
}
