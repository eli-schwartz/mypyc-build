#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
mypyc___options___CompilerOptions_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *mypyc___options___CompilerOptions_setup(PyTypeObject *type);
PyObject *CPyDef_mypyc___options___CompilerOptions(char cpy_r_strip_asserts, char cpy_r_multi_file, char cpy_r_verbose, char cpy_r_separate, PyObject *cpy_r_target_dir, PyObject *cpy_r_include_runtime_files, PyObject *cpy_r_capi_version, PyObject *cpy_r_python_version);

static PyObject *
mypyc___options___CompilerOptions_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_mypyc___options___CompilerOptions) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = mypyc___options___CompilerOptions_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_mypyc___options___CompilerOptions_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
mypyc___options___CompilerOptions_traverse(mypyc___options___CompilerOptionsObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_target_dir);
    if (CPyTagged_CheckLong(self->_capi_version.f0)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_capi_version.f0));
    }
    if (CPyTagged_CheckLong(self->_capi_version.f1)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_capi_version.f1));
    }
    Py_VISIT(self->_python_version);
    return 0;
}

static int
mypyc___options___CompilerOptions_clear(mypyc___options___CompilerOptionsObject *self)
{
    Py_CLEAR(self->_target_dir);
    if (CPyTagged_CheckLong(self->_capi_version.f0)) {
        CPyTagged __tmp = self->_capi_version.f0;
        self->_capi_version.f0 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_capi_version.f1)) {
        CPyTagged __tmp = self->_capi_version.f1;
        self->_capi_version.f1 = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_python_version);
    return 0;
}

static void
mypyc___options___CompilerOptions_dealloc(mypyc___options___CompilerOptionsObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, mypyc___options___CompilerOptions_dealloc)
    mypyc___options___CompilerOptions_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem mypyc___options___CompilerOptions_vtable[1];
static bool
CPyDef_mypyc___options___CompilerOptions_trait_vtable_setup(void)
{
    CPyVTableItem mypyc___options___CompilerOptions_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_mypyc___options___CompilerOptions_____init__,
    };
    memcpy(mypyc___options___CompilerOptions_vtable, mypyc___options___CompilerOptions_vtable_scratch, sizeof(mypyc___options___CompilerOptions_vtable));
    return 1;
}

static PyObject *
mypyc___options___CompilerOptions_get_strip_asserts(mypyc___options___CompilerOptionsObject *self, void *closure);
static int
mypyc___options___CompilerOptions_set_strip_asserts(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypyc___options___CompilerOptions_get_multi_file(mypyc___options___CompilerOptionsObject *self, void *closure);
static int
mypyc___options___CompilerOptions_set_multi_file(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypyc___options___CompilerOptions_get_verbose(mypyc___options___CompilerOptionsObject *self, void *closure);
static int
mypyc___options___CompilerOptions_set_verbose(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypyc___options___CompilerOptions_get_separate(mypyc___options___CompilerOptionsObject *self, void *closure);
static int
mypyc___options___CompilerOptions_set_separate(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypyc___options___CompilerOptions_get_global_opts(mypyc___options___CompilerOptionsObject *self, void *closure);
static int
mypyc___options___CompilerOptions_set_global_opts(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypyc___options___CompilerOptions_get_target_dir(mypyc___options___CompilerOptionsObject *self, void *closure);
static int
mypyc___options___CompilerOptions_set_target_dir(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypyc___options___CompilerOptions_get_include_runtime_files(mypyc___options___CompilerOptionsObject *self, void *closure);
static int
mypyc___options___CompilerOptions_set_include_runtime_files(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypyc___options___CompilerOptions_get_capi_version(mypyc___options___CompilerOptionsObject *self, void *closure);
static int
mypyc___options___CompilerOptions_set_capi_version(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure);
static PyObject *
mypyc___options___CompilerOptions_get_python_version(mypyc___options___CompilerOptionsObject *self, void *closure);
static int
mypyc___options___CompilerOptions_set_python_version(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure);

static PyGetSetDef mypyc___options___CompilerOptions_getseters[] = {
    {"strip_asserts",
     (getter)mypyc___options___CompilerOptions_get_strip_asserts, (setter)mypyc___options___CompilerOptions_set_strip_asserts,
     NULL, NULL},
    {"multi_file",
     (getter)mypyc___options___CompilerOptions_get_multi_file, (setter)mypyc___options___CompilerOptions_set_multi_file,
     NULL, NULL},
    {"verbose",
     (getter)mypyc___options___CompilerOptions_get_verbose, (setter)mypyc___options___CompilerOptions_set_verbose,
     NULL, NULL},
    {"separate",
     (getter)mypyc___options___CompilerOptions_get_separate, (setter)mypyc___options___CompilerOptions_set_separate,
     NULL, NULL},
    {"global_opts",
     (getter)mypyc___options___CompilerOptions_get_global_opts, (setter)mypyc___options___CompilerOptions_set_global_opts,
     NULL, NULL},
    {"target_dir",
     (getter)mypyc___options___CompilerOptions_get_target_dir, (setter)mypyc___options___CompilerOptions_set_target_dir,
     NULL, NULL},
    {"include_runtime_files",
     (getter)mypyc___options___CompilerOptions_get_include_runtime_files, (setter)mypyc___options___CompilerOptions_set_include_runtime_files,
     NULL, NULL},
    {"capi_version",
     (getter)mypyc___options___CompilerOptions_get_capi_version, (setter)mypyc___options___CompilerOptions_set_capi_version,
     NULL, NULL},
    {"python_version",
     (getter)mypyc___options___CompilerOptions_get_python_version, (setter)mypyc___options___CompilerOptions_set_python_version,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef mypyc___options___CompilerOptions_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_mypyc___options___CompilerOptions_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_mypyc___options___CompilerOptions_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "CompilerOptions",
    .tp_new = mypyc___options___CompilerOptions_new,
    .tp_dealloc = (destructor)mypyc___options___CompilerOptions_dealloc,
    .tp_traverse = (traverseproc)mypyc___options___CompilerOptions_traverse,
    .tp_clear = (inquiry)mypyc___options___CompilerOptions_clear,
    .tp_getset = mypyc___options___CompilerOptions_getseters,
    .tp_methods = mypyc___options___CompilerOptions_methods,
    .tp_init = mypyc___options___CompilerOptions_init,
    .tp_basicsize = sizeof(mypyc___options___CompilerOptionsObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_mypyc___options___CompilerOptions_template = &CPyType_mypyc___options___CompilerOptions_template_;

static PyObject *
mypyc___options___CompilerOptions_setup(PyTypeObject *type)
{
    mypyc___options___CompilerOptionsObject *self;
    self = (mypyc___options___CompilerOptionsObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = mypyc___options___CompilerOptions_vtable;
    self->_strip_asserts = 2;
    self->_multi_file = 2;
    self->_verbose = 2;
    self->_separate = 2;
    self->_global_opts = 2;
    self->_include_runtime_files = 2;
    self->_capi_version = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    return (PyObject *)self;
}

PyObject *CPyDef_mypyc___options___CompilerOptions(char cpy_r_strip_asserts, char cpy_r_multi_file, char cpy_r_verbose, char cpy_r_separate, PyObject *cpy_r_target_dir, PyObject *cpy_r_include_runtime_files, PyObject *cpy_r_capi_version, PyObject *cpy_r_python_version)
{
    PyObject *self = mypyc___options___CompilerOptions_setup(CPyType_mypyc___options___CompilerOptions);
    if (self == NULL)
        return NULL;
    char res = CPyDef_mypyc___options___CompilerOptions_____init__(self, cpy_r_strip_asserts, cpy_r_multi_file, cpy_r_verbose, cpy_r_separate, cpy_r_target_dir, cpy_r_include_runtime_files, cpy_r_capi_version, cpy_r_python_version);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
mypyc___options___CompilerOptions_get_strip_asserts(mypyc___options___CompilerOptionsObject *self, void *closure)
{
    PyObject *retval = self->_strip_asserts ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypyc___options___CompilerOptions_set_strip_asserts(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CompilerOptions' object attribute 'strip_asserts' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_strip_asserts = tmp;
    return 0;
}

static PyObject *
mypyc___options___CompilerOptions_get_multi_file(mypyc___options___CompilerOptionsObject *self, void *closure)
{
    PyObject *retval = self->_multi_file ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypyc___options___CompilerOptions_set_multi_file(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CompilerOptions' object attribute 'multi_file' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_multi_file = tmp;
    return 0;
}

static PyObject *
mypyc___options___CompilerOptions_get_verbose(mypyc___options___CompilerOptionsObject *self, void *closure)
{
    PyObject *retval = self->_verbose ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypyc___options___CompilerOptions_set_verbose(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CompilerOptions' object attribute 'verbose' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_verbose = tmp;
    return 0;
}

static PyObject *
mypyc___options___CompilerOptions_get_separate(mypyc___options___CompilerOptionsObject *self, void *closure)
{
    PyObject *retval = self->_separate ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypyc___options___CompilerOptions_set_separate(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CompilerOptions' object attribute 'separate' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_separate = tmp;
    return 0;
}

static PyObject *
mypyc___options___CompilerOptions_get_global_opts(mypyc___options___CompilerOptionsObject *self, void *closure)
{
    PyObject *retval = self->_global_opts ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypyc___options___CompilerOptions_set_global_opts(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CompilerOptions' object attribute 'global_opts' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_global_opts = tmp;
    return 0;
}

static PyObject *
mypyc___options___CompilerOptions_get_target_dir(mypyc___options___CompilerOptionsObject *self, void *closure)
{
    if (unlikely(self->_target_dir == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'target_dir' of 'CompilerOptions' undefined");
        return NULL;
    }
    CPy_INCREF(self->_target_dir);
    PyObject *retval = self->_target_dir;
    return retval;
}

static int
mypyc___options___CompilerOptions_set_target_dir(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CompilerOptions' object attribute 'target_dir' cannot be deleted");
        return -1;
    }
    if (self->_target_dir != NULL) {
        CPy_DECREF(self->_target_dir);
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
    self->_target_dir = tmp;
    return 0;
}

static PyObject *
mypyc___options___CompilerOptions_get_include_runtime_files(mypyc___options___CompilerOptionsObject *self, void *closure)
{
    PyObject *retval = self->_include_runtime_files ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
mypyc___options___CompilerOptions_set_include_runtime_files(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CompilerOptions' object attribute 'include_runtime_files' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_include_runtime_files = tmp;
    return 0;
}

static PyObject *
mypyc___options___CompilerOptions_get_capi_version(mypyc___options___CompilerOptionsObject *self, void *closure)
{
    if (unlikely(self->_capi_version.f0 == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'capi_version' of 'CompilerOptions' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_capi_version.f0);
    CPyTagged_INCREF(self->_capi_version.f1);
    PyObject *retval = PyTuple_New(2);
    if (unlikely(retval == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10620 = CPyTagged_StealAsObject(self->_capi_version.f0);
    PyTuple_SET_ITEM(retval, 0, __tmp10620);
    PyObject *__tmp10621 = CPyTagged_StealAsObject(self->_capi_version.f1);
    PyTuple_SET_ITEM(retval, 1, __tmp10621);
    return retval;
}

static int
mypyc___options___CompilerOptions_set_capi_version(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CompilerOptions' object attribute 'capi_version' cannot be deleted");
        return -1;
    }
    if (self->_capi_version.f0 != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_capi_version.f0);
        CPyTagged_DECREF(self->_capi_version.f1);
    }
    tuple_T2II tmp;
    PyObject *__tmp10622;
    if (unlikely(!(PyTuple_Check(value) && PyTuple_GET_SIZE(value) == 2))) {
        __tmp10622 = NULL;
        goto __LL10623;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(value, 0))))
        __tmp10622 = PyTuple_GET_ITEM(value, 0);
    else {
        __tmp10622 = NULL;
    }
    if (__tmp10622 == NULL) goto __LL10623;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(value, 1))))
        __tmp10622 = PyTuple_GET_ITEM(value, 1);
    else {
        __tmp10622 = NULL;
    }
    if (__tmp10622 == NULL) goto __LL10623;
    __tmp10622 = value;
__LL10623: ;
    if (unlikely(__tmp10622 == NULL)) {
        CPy_TypeError("tuple[int, int]", value); return -1;
    } else {
        PyObject *__tmp10624 = PyTuple_GET_ITEM(value, 0);
        CPyTagged __tmp10625;
        if (likely(PyLong_Check(__tmp10624)))
            __tmp10625 = CPyTagged_FromObject(__tmp10624);
        else {
            CPy_TypeError("int", __tmp10624); return -1;
        }
        tmp.f0 = __tmp10625;
        PyObject *__tmp10626 = PyTuple_GET_ITEM(value, 1);
        CPyTagged __tmp10627;
        if (likely(PyLong_Check(__tmp10626)))
            __tmp10627 = CPyTagged_FromObject(__tmp10626);
        else {
            CPy_TypeError("int", __tmp10626); return -1;
        }
        tmp.f1 = __tmp10627;
    }
    CPyTagged_INCREF(tmp.f0);
    CPyTagged_INCREF(tmp.f1);
    self->_capi_version = tmp;
    return 0;
}

static PyObject *
mypyc___options___CompilerOptions_get_python_version(mypyc___options___CompilerOptionsObject *self, void *closure)
{
    if (unlikely(self->_python_version == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'python_version' of 'CompilerOptions' undefined");
        return NULL;
    }
    CPy_INCREF(self->_python_version);
    PyObject *retval = self->_python_version;
    return retval;
}

static int
mypyc___options___CompilerOptions_set_python_version(mypyc___options___CompilerOptionsObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'CompilerOptions' object attribute 'python_version' cannot be deleted");
        return -1;
    }
    if (self->_python_version != NULL) {
        CPy_DECREF(self->_python_version);
    }
    PyObject *tmp;
    if (unlikely(!(PyTuple_Check(value) && PyTuple_GET_SIZE(value) == 2))) {
        tmp = NULL;
        goto __LL10629;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(value, 0))))
        tmp = PyTuple_GET_ITEM(value, 0);
    else {
        tmp = NULL;
    }
    if (tmp == NULL) goto __LL10629;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(value, 1))))
        tmp = PyTuple_GET_ITEM(value, 1);
    else {
        tmp = NULL;
    }
    if (tmp == NULL) goto __LL10629;
    tmp = value;
__LL10629: ;
    if (tmp != NULL) goto __LL10628;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL10628;
    CPy_TypeError("tuple[int, int] or None", value); 
    tmp = NULL;
__LL10628: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_python_version = tmp;
    return 0;
}
static PyMethodDef mypyc___optionsmodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mypyc___optionsmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.options",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    mypyc___optionsmodule_methods
};

PyObject *CPyInit_mypyc___options(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___options_internal) {
        Py_INCREF(CPyModule_mypyc___options_internal);
        return CPyModule_mypyc___options_internal;
    }
    CPyModule_mypyc___options_internal = PyModule_Create(&mypyc___optionsmodule);
    if (unlikely(CPyModule_mypyc___options_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___options_internal, "__name__");
    CPyStatic_mypyc___options___globals = PyModule_GetDict(CPyModule_mypyc___options_internal);
    if (unlikely(CPyStatic_mypyc___options___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_mypyc___options_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___options_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___options_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_mypyc___options___CompilerOptions);
    return NULL;
}

char CPyDef_mypyc___options___CompilerOptions_____init__(PyObject *cpy_r_self, char cpy_r_strip_asserts, char cpy_r_multi_file, char cpy_r_verbose, char cpy_r_separate, PyObject *cpy_r_target_dir, PyObject *cpy_r_include_runtime_files, PyObject *cpy_r_capi_version, PyObject *cpy_r_python_version) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    tuple_T2II cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    tuple_T2II cpy_r_r24;
    tuple_T2II cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    tuple_T2II cpy_r_r32;
    char cpy_r_r33;
    if (cpy_r_strip_asserts != 2) goto CPyL2;
    cpy_r_strip_asserts = 0;
CPyL2: ;
    if (cpy_r_multi_file != 2) goto CPyL4;
    cpy_r_multi_file = 0;
CPyL4: ;
    if (cpy_r_verbose != 2) goto CPyL6;
    cpy_r_verbose = 0;
CPyL6: ;
    if (cpy_r_separate != 2) goto CPyL8;
    cpy_r_separate = 0;
CPyL8: ;
    if (cpy_r_target_dir != NULL) goto CPyL40;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_target_dir = cpy_r_r0;
CPyL10: ;
    if (cpy_r_include_runtime_files != NULL) goto CPyL41;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_include_runtime_files = cpy_r_r1;
CPyL12: ;
    if (cpy_r_capi_version != NULL) goto CPyL42;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_capi_version = cpy_r_r2;
CPyL14: ;
    if (cpy_r_python_version != NULL) goto CPyL43;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    cpy_r_python_version = cpy_r_r3;
CPyL16: ;
    ((mypyc___options___CompilerOptionsObject *)cpy_r_self)->_strip_asserts = cpy_r_strip_asserts;
    ((mypyc___options___CompilerOptionsObject *)cpy_r_self)->_multi_file = cpy_r_multi_file;
    ((mypyc___options___CompilerOptionsObject *)cpy_r_self)->_verbose = cpy_r_verbose;
    ((mypyc___options___CompilerOptionsObject *)cpy_r_self)->_separate = cpy_r_separate;
    cpy_r_r4 = cpy_r_separate ^ 1;
    ((mypyc___options___CompilerOptionsObject *)cpy_r_self)->_global_opts = cpy_r_r4;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_target_dir != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL44;
    CPy_INCREF(cpy_r_target_dir);
    if (likely(cpy_r_target_dir != Py_None))
        cpy_r_r7 = cpy_r_target_dir;
    else {
        CPy_TypeErrorTraceback("mypyc/options.py", "__init__", 13, CPyStatic_mypyc___options___globals, "str", cpy_r_target_dir);
        goto CPyL45;
    }
    cpy_r_r8 = CPyStr_IsTrue(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (!cpy_r_r8) goto CPyL44;
    if (likely(cpy_r_target_dir != Py_None))
        cpy_r_r9 = cpy_r_target_dir;
    else {
        CPy_TypeErrorTraceback("mypyc/options.py", "__init__", 23, CPyStatic_mypyc___options___globals, "str", cpy_r_target_dir);
        goto CPyL46;
    }
    cpy_r_r10 = cpy_r_r9;
    goto CPyL22;
CPyL21: ;
    cpy_r_r11 = CPyStatics[3072]; /* 'build' */
    CPy_INCREF(cpy_r_r11);
    cpy_r_r10 = cpy_r_r11;
CPyL22: ;
    ((mypyc___options___CompilerOptionsObject *)cpy_r_self)->_target_dir = cpy_r_r10;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_include_runtime_files != cpy_r_r12;
    if (!cpy_r_r13) goto CPyL47;
    if (unlikely(!PyBool_Check(cpy_r_include_runtime_files))) {
        CPy_TypeError("bool", cpy_r_include_runtime_files); cpy_r_r14 = 2;
    } else
        cpy_r_r14 = cpy_r_include_runtime_files == Py_True;
    CPy_DECREF(cpy_r_include_runtime_files);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/options.py", "__init__", 25, CPyStatic_mypyc___options___globals);
        goto CPyL48;
    }
    cpy_r_r15 = cpy_r_r14;
    goto CPyL26;
CPyL25: ;
    cpy_r_r16 = cpy_r_multi_file ^ 1;
    cpy_r_r15 = cpy_r_r16;
CPyL26: ;
    ((mypyc___options___CompilerOptionsObject *)cpy_r_self)->_include_runtime_files = cpy_r_r15;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_capi_version != cpy_r_r17;
    if (!cpy_r_r18) goto CPyL49;
    PyObject *__tmp10630;
    if (unlikely(!(PyTuple_Check(cpy_r_capi_version) && PyTuple_GET_SIZE(cpy_r_capi_version) == 2))) {
        __tmp10630 = NULL;
        goto __LL10631;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_capi_version, 0))))
        __tmp10630 = PyTuple_GET_ITEM(cpy_r_capi_version, 0);
    else {
        __tmp10630 = NULL;
    }
    if (__tmp10630 == NULL) goto __LL10631;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_capi_version, 1))))
        __tmp10630 = PyTuple_GET_ITEM(cpy_r_capi_version, 1);
    else {
        __tmp10630 = NULL;
    }
    if (__tmp10630 == NULL) goto __LL10631;
    __tmp10630 = cpy_r_capi_version;
__LL10631: ;
    if (unlikely(__tmp10630 == NULL)) {
        CPy_TypeError("tuple[int, int]", cpy_r_capi_version); cpy_r_r19 = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    } else {
        PyObject *__tmp10632 = PyTuple_GET_ITEM(cpy_r_capi_version, 0);
        CPyTagged __tmp10633;
        if (likely(PyLong_Check(__tmp10632)))
            __tmp10633 = CPyTagged_FromObject(__tmp10632);
        else {
            CPy_TypeError("int", __tmp10632); __tmp10633 = CPY_INT_TAG;
        }
        cpy_r_r19.f0 = __tmp10633;
        PyObject *__tmp10634 = PyTuple_GET_ITEM(cpy_r_capi_version, 1);
        CPyTagged __tmp10635;
        if (likely(PyLong_Check(__tmp10634)))
            __tmp10635 = CPyTagged_FromObject(__tmp10634);
        else {
            CPy_TypeError("int", __tmp10634); __tmp10635 = CPY_INT_TAG;
        }
        cpy_r_r19.f1 = __tmp10635;
    }
    if (unlikely(cpy_r_r19.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/options.py", "__init__", 15, CPyStatic_mypyc___options___globals);
        goto CPyL48;
    }
    cpy_r_r20 = PyTuple_New(2);
    if (unlikely(cpy_r_r20 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10636 = CPyTagged_StealAsObject(cpy_r_r19.f0);
    PyTuple_SET_ITEM(cpy_r_r20, 0, __tmp10636);
    PyObject *__tmp10637 = CPyTagged_StealAsObject(cpy_r_r19.f1);
    PyTuple_SET_ITEM(cpy_r_r20, 1, __tmp10637);
    cpy_r_r21 = PyObject_IsTrue(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/options.py", "__init__", 15, CPyStatic_mypyc___options___globals);
        goto CPyL48;
    }
    cpy_r_r23 = cpy_r_r21;
    if (!cpy_r_r23) goto CPyL49;
    PyObject *__tmp10638;
    if (unlikely(!(PyTuple_Check(cpy_r_capi_version) && PyTuple_GET_SIZE(cpy_r_capi_version) == 2))) {
        __tmp10638 = NULL;
        goto __LL10639;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_capi_version, 0))))
        __tmp10638 = PyTuple_GET_ITEM(cpy_r_capi_version, 0);
    else {
        __tmp10638 = NULL;
    }
    if (__tmp10638 == NULL) goto __LL10639;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_capi_version, 1))))
        __tmp10638 = PyTuple_GET_ITEM(cpy_r_capi_version, 1);
    else {
        __tmp10638 = NULL;
    }
    if (__tmp10638 == NULL) goto __LL10639;
    __tmp10638 = cpy_r_capi_version;
__LL10639: ;
    if (unlikely(__tmp10638 == NULL)) {
        CPy_TypeError("tuple[int, int]", cpy_r_capi_version); cpy_r_r24 = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    } else {
        PyObject *__tmp10640 = PyTuple_GET_ITEM(cpy_r_capi_version, 0);
        CPyTagged __tmp10641;
        if (likely(PyLong_Check(__tmp10640)))
            __tmp10641 = CPyTagged_FromObject(__tmp10640);
        else {
            CPy_TypeError("int", __tmp10640); __tmp10641 = CPY_INT_TAG;
        }
        cpy_r_r24.f0 = __tmp10641;
        PyObject *__tmp10642 = PyTuple_GET_ITEM(cpy_r_capi_version, 1);
        CPyTagged __tmp10643;
        if (likely(PyLong_Check(__tmp10642)))
            __tmp10643 = CPyTagged_FromObject(__tmp10642);
        else {
            CPy_TypeError("int", __tmp10642); __tmp10643 = CPY_INT_TAG;
        }
        cpy_r_r24.f1 = __tmp10643;
    }
    CPy_DECREF(cpy_r_capi_version);
    if (unlikely(cpy_r_r24.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/options.py", "__init__", 31, CPyStatic_mypyc___options___globals);
        goto CPyL50;
    }
    cpy_r_r25 = cpy_r_r24;
    goto CPyL38;
CPyL32: ;
    cpy_r_r26 = CPyModule_sys;
    cpy_r_r27 = CPyStatics[1562]; /* 'version_info' */
    cpy_r_r28 = CPyObject_GetAttr(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/options.py", "__init__", 31, CPyStatic_mypyc___options___globals);
        goto CPyL50;
    }
    if (likely(PyTuple_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/options.py", "__init__", 31, CPyStatic_mypyc___options___globals, "tuple", cpy_r_r28);
        goto CPyL50;
    }
    cpy_r_r30 = CPySequenceTuple_GetSlice(cpy_r_r29, 0, 4);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/options.py", "__init__", 31, CPyStatic_mypyc___options___globals);
        goto CPyL50;
    }
    if (likely(PyTuple_Check(cpy_r_r30)))
        cpy_r_r31 = cpy_r_r30;
    else {
        CPy_TypeErrorTraceback("mypyc/options.py", "__init__", 31, CPyStatic_mypyc___options___globals, "tuple", cpy_r_r30);
        goto CPyL50;
    }
    PyObject *__tmp10644;
    if (unlikely(!(PyTuple_Check(cpy_r_r31) && PyTuple_GET_SIZE(cpy_r_r31) == 2))) {
        __tmp10644 = NULL;
        goto __LL10645;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r31, 0))))
        __tmp10644 = PyTuple_GET_ITEM(cpy_r_r31, 0);
    else {
        __tmp10644 = NULL;
    }
    if (__tmp10644 == NULL) goto __LL10645;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(cpy_r_r31, 1))))
        __tmp10644 = PyTuple_GET_ITEM(cpy_r_r31, 1);
    else {
        __tmp10644 = NULL;
    }
    if (__tmp10644 == NULL) goto __LL10645;
    __tmp10644 = cpy_r_r31;
__LL10645: ;
    if (unlikely(__tmp10644 == NULL)) {
        CPy_TypeError("tuple[int, int]", cpy_r_r31); cpy_r_r32 = (tuple_T2II) { CPY_INT_TAG, CPY_INT_TAG };
    } else {
        PyObject *__tmp10646 = PyTuple_GET_ITEM(cpy_r_r31, 0);
        CPyTagged __tmp10647;
        if (likely(PyLong_Check(__tmp10646)))
            __tmp10647 = CPyTagged_FromObject(__tmp10646);
        else {
            CPy_TypeError("int", __tmp10646); __tmp10647 = CPY_INT_TAG;
        }
        cpy_r_r32.f0 = __tmp10647;
        PyObject *__tmp10648 = PyTuple_GET_ITEM(cpy_r_r31, 1);
        CPyTagged __tmp10649;
        if (likely(PyLong_Check(__tmp10648)))
            __tmp10649 = CPyTagged_FromObject(__tmp10648);
        else {
            CPy_TypeError("int", __tmp10648); __tmp10649 = CPY_INT_TAG;
        }
        cpy_r_r32.f1 = __tmp10649;
    }
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32.f0 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/options.py", "__init__", 31, CPyStatic_mypyc___options___globals);
        goto CPyL50;
    }
    cpy_r_r25 = cpy_r_r32;
CPyL38: ;
    ((mypyc___options___CompilerOptionsObject *)cpy_r_self)->_capi_version = cpy_r_r25;
    ((mypyc___options___CompilerOptionsObject *)cpy_r_self)->_python_version = cpy_r_python_version;
    return 1;
CPyL39: ;
    cpy_r_r33 = 2;
    return cpy_r_r33;
CPyL40: ;
    CPy_INCREF(cpy_r_target_dir);
    goto CPyL10;
CPyL41: ;
    CPy_INCREF(cpy_r_include_runtime_files);
    goto CPyL12;
CPyL42: ;
    CPy_INCREF(cpy_r_capi_version);
    goto CPyL14;
CPyL43: ;
    CPy_INCREF(cpy_r_python_version);
    goto CPyL16;
CPyL44: ;
    CPy_DECREF(cpy_r_target_dir);
    goto CPyL21;
CPyL45: ;
    CPy_DecRef(cpy_r_target_dir);
    CPy_DecRef(cpy_r_include_runtime_files);
    CPy_DecRef(cpy_r_capi_version);
    CPy_DecRef(cpy_r_python_version);
    goto CPyL39;
CPyL46: ;
    CPy_DecRef(cpy_r_include_runtime_files);
    CPy_DecRef(cpy_r_capi_version);
    CPy_DecRef(cpy_r_python_version);
    goto CPyL39;
CPyL47: ;
    CPy_DECREF(cpy_r_include_runtime_files);
    goto CPyL25;
CPyL48: ;
    CPy_DecRef(cpy_r_capi_version);
    CPy_DecRef(cpy_r_python_version);
    goto CPyL39;
CPyL49: ;
    CPy_DECREF(cpy_r_capi_version);
    goto CPyL32;
CPyL50: ;
    CPy_DecRef(cpy_r_python_version);
    goto CPyL39;
}

PyObject *CPyPy_mypyc___options___CompilerOptions_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"strip_asserts", "multi_file", "verbose", "separate", "target_dir", "include_runtime_files", "capi_version", "python_version", 0};
    PyObject *obj_strip_asserts = NULL;
    PyObject *obj_multi_file = NULL;
    PyObject *obj_verbose = NULL;
    PyObject *obj_separate = NULL;
    PyObject *obj_target_dir = NULL;
    PyObject *obj_include_runtime_files = NULL;
    PyObject *obj_capi_version = NULL;
    PyObject *obj_python_version = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "|OOOOOOOO", "__init__", kwlist, &obj_strip_asserts, &obj_multi_file, &obj_verbose, &obj_separate, &obj_target_dir, &obj_include_runtime_files, &obj_capi_version, &obj_python_version)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_mypyc___options___CompilerOptions))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.options.CompilerOptions", obj_self); 
        goto fail;
    }
    char arg_strip_asserts;
    if (obj_strip_asserts == NULL) {
        arg_strip_asserts = 2;
    } else if (unlikely(!PyBool_Check(obj_strip_asserts))) {
        CPy_TypeError("bool", obj_strip_asserts); goto fail;
    } else
        arg_strip_asserts = obj_strip_asserts == Py_True;
    char arg_multi_file;
    if (obj_multi_file == NULL) {
        arg_multi_file = 2;
    } else if (unlikely(!PyBool_Check(obj_multi_file))) {
        CPy_TypeError("bool", obj_multi_file); goto fail;
    } else
        arg_multi_file = obj_multi_file == Py_True;
    char arg_verbose;
    if (obj_verbose == NULL) {
        arg_verbose = 2;
    } else if (unlikely(!PyBool_Check(obj_verbose))) {
        CPy_TypeError("bool", obj_verbose); goto fail;
    } else
        arg_verbose = obj_verbose == Py_True;
    char arg_separate;
    if (obj_separate == NULL) {
        arg_separate = 2;
    } else if (unlikely(!PyBool_Check(obj_separate))) {
        CPy_TypeError("bool", obj_separate); goto fail;
    } else
        arg_separate = obj_separate == Py_True;
    PyObject *arg_target_dir;
    if (obj_target_dir == NULL) {
        arg_target_dir = NULL;
        goto __LL10650;
    }
    if (PyUnicode_Check(obj_target_dir))
        arg_target_dir = obj_target_dir;
    else {
        arg_target_dir = NULL;
    }
    if (arg_target_dir != NULL) goto __LL10650;
    if (obj_target_dir == Py_None)
        arg_target_dir = obj_target_dir;
    else {
        arg_target_dir = NULL;
    }
    if (arg_target_dir != NULL) goto __LL10650;
    CPy_TypeError("str or None", obj_target_dir); 
    goto fail;
__LL10650: ;
    PyObject *arg_include_runtime_files;
    if (obj_include_runtime_files == NULL) {
        arg_include_runtime_files = NULL;
        goto __LL10651;
    }
    if (PyBool_Check(obj_include_runtime_files))
        arg_include_runtime_files = obj_include_runtime_files;
    else {
        arg_include_runtime_files = NULL;
    }
    if (arg_include_runtime_files != NULL) goto __LL10651;
    if (obj_include_runtime_files == Py_None)
        arg_include_runtime_files = obj_include_runtime_files;
    else {
        arg_include_runtime_files = NULL;
    }
    if (arg_include_runtime_files != NULL) goto __LL10651;
    CPy_TypeError("bool or None", obj_include_runtime_files); 
    goto fail;
__LL10651: ;
    PyObject *arg_capi_version;
    if (obj_capi_version == NULL) {
        arg_capi_version = NULL;
        goto __LL10652;
    }
    if (unlikely(!(PyTuple_Check(obj_capi_version) && PyTuple_GET_SIZE(obj_capi_version) == 2))) {
        arg_capi_version = NULL;
        goto __LL10653;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_capi_version, 0))))
        arg_capi_version = PyTuple_GET_ITEM(obj_capi_version, 0);
    else {
        arg_capi_version = NULL;
    }
    if (arg_capi_version == NULL) goto __LL10653;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_capi_version, 1))))
        arg_capi_version = PyTuple_GET_ITEM(obj_capi_version, 1);
    else {
        arg_capi_version = NULL;
    }
    if (arg_capi_version == NULL) goto __LL10653;
    arg_capi_version = obj_capi_version;
__LL10653: ;
    if (arg_capi_version != NULL) goto __LL10652;
    if (obj_capi_version == Py_None)
        arg_capi_version = obj_capi_version;
    else {
        arg_capi_version = NULL;
    }
    if (arg_capi_version != NULL) goto __LL10652;
    CPy_TypeError("tuple[int, int] or None", obj_capi_version); 
    goto fail;
__LL10652: ;
    PyObject *arg_python_version;
    if (obj_python_version == NULL) {
        arg_python_version = NULL;
        goto __LL10654;
    }
    if (unlikely(!(PyTuple_Check(obj_python_version) && PyTuple_GET_SIZE(obj_python_version) == 2))) {
        arg_python_version = NULL;
        goto __LL10655;
    }
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_python_version, 0))))
        arg_python_version = PyTuple_GET_ITEM(obj_python_version, 0);
    else {
        arg_python_version = NULL;
    }
    if (arg_python_version == NULL) goto __LL10655;
    if (likely(PyLong_Check(PyTuple_GET_ITEM(obj_python_version, 1))))
        arg_python_version = PyTuple_GET_ITEM(obj_python_version, 1);
    else {
        arg_python_version = NULL;
    }
    if (arg_python_version == NULL) goto __LL10655;
    arg_python_version = obj_python_version;
__LL10655: ;
    if (arg_python_version != NULL) goto __LL10654;
    if (obj_python_version == Py_None)
        arg_python_version = obj_python_version;
    else {
        arg_python_version = NULL;
    }
    if (arg_python_version != NULL) goto __LL10654;
    CPy_TypeError("tuple[int, int] or None", obj_python_version); 
    goto fail;
__LL10654: ;
    char retval = CPyDef_mypyc___options___CompilerOptions_____init__(arg_self, arg_strip_asserts, arg_multi_file, arg_verbose, arg_separate, arg_target_dir, arg_include_runtime_files, arg_capi_version, arg_python_version);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/options.py", "__init__", 7, CPyStatic_mypyc___options___globals);
    return NULL;
}

char CPyDef_mypyc___options_____top_level__(void) {
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
    char cpy_r_r23;
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
    int32_t cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/options.py", "<module>", -1, CPyStatic_mypyc___options___globals);
        goto CPyL11;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_mypyc___options___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/options.py", "<module>", 1, CPyStatic_mypyc___options___globals);
        goto CPyL11;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = (PyObject **)&CPyModule_sys;
    PyObject **cpy_r_r10[1] = {cpy_r_r9};
    cpy_r_r11 = (void *)&cpy_r_r10;
    int64_t cpy_r_r12[1] = {3};
    cpy_r_r13 = (void *)&cpy_r_r12;
    cpy_r_r14 = CPyStatics[9067]; /* (('sys', 'sys', 'sys'),) */
    cpy_r_r15 = CPyStatic_mypyc___options___globals;
    cpy_r_r16 = CPyStatics[8668]; /* 'mypyc/options.py' */
    cpy_r_r17 = CPyStatics[17]; /* '<module>' */
    cpy_r_r18 = CPyImport_ImportMany(cpy_r_r14, cpy_r_r11, cpy_r_r15, cpy_r_r16, cpy_r_r17, cpy_r_r13);
    if (!cpy_r_r18) goto CPyL11;
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyStatics[6847]; /* 'mypyc.options' */
    cpy_r_r21 = (PyObject *)CPyType_mypyc___options___CompilerOptions_template;
    cpy_r_r22 = CPyType_FromTemplate(cpy_r_r21, cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/options.py", "<module>", 6, CPyStatic_mypyc___options___globals);
        goto CPyL11;
    }
    cpy_r_r23 = CPyDef_mypyc___options___CompilerOptions_trait_vtable_setup();
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/options.py", "<module>", -1, CPyStatic_mypyc___options___globals);
        goto CPyL12;
    }
    cpy_r_r24 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r25 = CPyStatics[8669]; /* 'strip_asserts' */
    cpy_r_r26 = CPyStatics[7580]; /* 'multi_file' */
    cpy_r_r27 = CPyStatics[1699]; /* 'verbose' */
    cpy_r_r28 = CPyStatics[8670]; /* 'separate' */
    cpy_r_r29 = CPyStatics[8671]; /* 'global_opts' */
    cpy_r_r30 = CPyStatics[8672]; /* 'target_dir' */
    cpy_r_r31 = CPyStatics[8673]; /* 'include_runtime_files' */
    cpy_r_r32 = CPyStatics[7065]; /* 'capi_version' */
    cpy_r_r33 = CPyStatics[1569]; /* 'python_version' */
    cpy_r_r34 = PyTuple_Pack(9, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30, cpy_r_r31, cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/options.py", "<module>", 6, CPyStatic_mypyc___options___globals);
        goto CPyL12;
    }
    cpy_r_r35 = PyObject_SetAttr(cpy_r_r22, cpy_r_r24, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypyc/options.py", "<module>", 6, CPyStatic_mypyc___options___globals);
        goto CPyL12;
    }
    CPyType_mypyc___options___CompilerOptions = (PyTypeObject *)cpy_r_r22;
    CPy_INCREF(CPyType_mypyc___options___CompilerOptions);
    cpy_r_r37 = CPyStatic_mypyc___options___globals;
    cpy_r_r38 = CPyStatics[6846]; /* 'CompilerOptions' */
    cpy_r_r39 = CPyDict_SetItem(cpy_r_r37, cpy_r_r38, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/options.py", "<module>", 6, CPyStatic_mypyc___options___globals);
        goto CPyL11;
    }
    return 1;
CPyL11: ;
    cpy_r_r41 = 2;
    return cpy_r_r41;
CPyL12: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL11;
}
