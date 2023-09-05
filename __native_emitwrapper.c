#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
emitwrapper___WrapperGenerator_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *emitwrapper___WrapperGenerator_setup(PyTypeObject *type);
PyObject *CPyDef_emitwrapper___WrapperGenerator(PyObject *cpy_r_cl, PyObject *cpy_r_emitter);

static PyObject *
emitwrapper___WrapperGenerator_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_emitwrapper___WrapperGenerator) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = emitwrapper___WrapperGenerator_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_emitwrapper___WrapperGenerator_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
emitwrapper___WrapperGenerator_traverse(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_cl);
    Py_VISIT(self->_emitter);
    Py_VISIT(self->_cleanups);
    Py_VISIT(self->_optional_args);
    Py_VISIT(self->_traceback_code);
    Py_VISIT(self->_target_name);
    Py_VISIT(self->_target_cname);
    if (CPyTagged_CheckLong(self->_num_bitmap_args)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_num_bitmap_args));
    }
    Py_VISIT(self->_args);
    Py_VISIT(self->_arg_names);
    Py_VISIT(self->_ret_type);
    return 0;
}

static int
emitwrapper___WrapperGenerator_clear(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self)
{
    Py_CLEAR(self->_cl);
    Py_CLEAR(self->_emitter);
    Py_CLEAR(self->_cleanups);
    Py_CLEAR(self->_optional_args);
    Py_CLEAR(self->_traceback_code);
    Py_CLEAR(self->_target_name);
    Py_CLEAR(self->_target_cname);
    if (CPyTagged_CheckLong(self->_num_bitmap_args)) {
        CPyTagged __tmp = self->_num_bitmap_args;
        self->_num_bitmap_args = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_args);
    Py_CLEAR(self->_arg_names);
    Py_CLEAR(self->_ret_type);
    return 0;
}

static void
emitwrapper___WrapperGenerator_dealloc(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, emitwrapper___WrapperGenerator_dealloc)
    emitwrapper___WrapperGenerator_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem emitwrapper___WrapperGenerator_vtable[10];
static bool
CPyDef_emitwrapper___WrapperGenerator_trait_vtable_setup(void)
{
    CPyVTableItem emitwrapper___WrapperGenerator_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_emitwrapper___WrapperGenerator_____init__,
        (CPyVTableItem)CPyDef_emitwrapper___WrapperGenerator___set_target,
        (CPyVTableItem)CPyDef_emitwrapper___WrapperGenerator___wrapper_name,
        (CPyVTableItem)CPyDef_emitwrapper___WrapperGenerator___use_goto,
        (CPyVTableItem)CPyDef_emitwrapper___WrapperGenerator___emit_header,
        (CPyVTableItem)CPyDef_emitwrapper___WrapperGenerator___emit_arg_processing,
        (CPyVTableItem)CPyDef_emitwrapper___WrapperGenerator___emit_call,
        (CPyVTableItem)CPyDef_emitwrapper___WrapperGenerator___error,
        (CPyVTableItem)CPyDef_emitwrapper___WrapperGenerator___emit_error_handling,
        (CPyVTableItem)CPyDef_emitwrapper___WrapperGenerator___finish,
    };
    memcpy(emitwrapper___WrapperGenerator_vtable, emitwrapper___WrapperGenerator_vtable_scratch, sizeof(emitwrapper___WrapperGenerator_vtable));
    return 1;
}

static PyObject *
emitwrapper___WrapperGenerator_get_cl(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure);
static int
emitwrapper___WrapperGenerator_set_cl(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitwrapper___WrapperGenerator_get_emitter(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure);
static int
emitwrapper___WrapperGenerator_set_emitter(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitwrapper___WrapperGenerator_get_cleanups(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure);
static int
emitwrapper___WrapperGenerator_set_cleanups(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitwrapper___WrapperGenerator_get_optional_args(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure);
static int
emitwrapper___WrapperGenerator_set_optional_args(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitwrapper___WrapperGenerator_get_traceback_code(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure);
static int
emitwrapper___WrapperGenerator_set_traceback_code(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitwrapper___WrapperGenerator_get_target_name(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure);
static int
emitwrapper___WrapperGenerator_set_target_name(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitwrapper___WrapperGenerator_get_target_cname(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure);
static int
emitwrapper___WrapperGenerator_set_target_cname(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitwrapper___WrapperGenerator_get_num_bitmap_args(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure);
static int
emitwrapper___WrapperGenerator_set_num_bitmap_args(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitwrapper___WrapperGenerator_get_args(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure);
static int
emitwrapper___WrapperGenerator_set_args(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitwrapper___WrapperGenerator_get_arg_names(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure);
static int
emitwrapper___WrapperGenerator_set_arg_names(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure);
static PyObject *
emitwrapper___WrapperGenerator_get_ret_type(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure);
static int
emitwrapper___WrapperGenerator_set_ret_type(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure);

static PyGetSetDef emitwrapper___WrapperGenerator_getseters[] = {
    {"cl",
     (getter)emitwrapper___WrapperGenerator_get_cl, (setter)emitwrapper___WrapperGenerator_set_cl,
     NULL, NULL},
    {"emitter",
     (getter)emitwrapper___WrapperGenerator_get_emitter, (setter)emitwrapper___WrapperGenerator_set_emitter,
     NULL, NULL},
    {"cleanups",
     (getter)emitwrapper___WrapperGenerator_get_cleanups, (setter)emitwrapper___WrapperGenerator_set_cleanups,
     NULL, NULL},
    {"optional_args",
     (getter)emitwrapper___WrapperGenerator_get_optional_args, (setter)emitwrapper___WrapperGenerator_set_optional_args,
     NULL, NULL},
    {"traceback_code",
     (getter)emitwrapper___WrapperGenerator_get_traceback_code, (setter)emitwrapper___WrapperGenerator_set_traceback_code,
     NULL, NULL},
    {"target_name",
     (getter)emitwrapper___WrapperGenerator_get_target_name, (setter)emitwrapper___WrapperGenerator_set_target_name,
     NULL, NULL},
    {"target_cname",
     (getter)emitwrapper___WrapperGenerator_get_target_cname, (setter)emitwrapper___WrapperGenerator_set_target_cname,
     NULL, NULL},
    {"num_bitmap_args",
     (getter)emitwrapper___WrapperGenerator_get_num_bitmap_args, (setter)emitwrapper___WrapperGenerator_set_num_bitmap_args,
     NULL, NULL},
    {"args",
     (getter)emitwrapper___WrapperGenerator_get_args, (setter)emitwrapper___WrapperGenerator_set_args,
     NULL, NULL},
    {"arg_names",
     (getter)emitwrapper___WrapperGenerator_get_arg_names, (setter)emitwrapper___WrapperGenerator_set_arg_names,
     NULL, NULL},
    {"ret_type",
     (getter)emitwrapper___WrapperGenerator_get_ret_type, (setter)emitwrapper___WrapperGenerator_set_ret_type,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef emitwrapper___WrapperGenerator_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_emitwrapper___WrapperGenerator_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"set_target",
     (PyCFunction)CPyPy_emitwrapper___WrapperGenerator___set_target,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"wrapper_name",
     (PyCFunction)CPyPy_emitwrapper___WrapperGenerator___wrapper_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"use_goto",
     (PyCFunction)CPyPy_emitwrapper___WrapperGenerator___use_goto,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_header",
     (PyCFunction)CPyPy_emitwrapper___WrapperGenerator___emit_header,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_arg_processing",
     (PyCFunction)CPyPy_emitwrapper___WrapperGenerator___emit_arg_processing,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_call",
     (PyCFunction)CPyPy_emitwrapper___WrapperGenerator___emit_call,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"error",
     (PyCFunction)CPyPy_emitwrapper___WrapperGenerator___error,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"emit_error_handling",
     (PyCFunction)CPyPy_emitwrapper___WrapperGenerator___emit_error_handling,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"finish",
     (PyCFunction)CPyPy_emitwrapper___WrapperGenerator___finish,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_emitwrapper___WrapperGenerator_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "WrapperGenerator",
    .tp_new = emitwrapper___WrapperGenerator_new,
    .tp_dealloc = (destructor)emitwrapper___WrapperGenerator_dealloc,
    .tp_traverse = (traverseproc)emitwrapper___WrapperGenerator_traverse,
    .tp_clear = (inquiry)emitwrapper___WrapperGenerator_clear,
    .tp_getset = emitwrapper___WrapperGenerator_getseters,
    .tp_methods = emitwrapper___WrapperGenerator_methods,
    .tp_init = emitwrapper___WrapperGenerator_init,
    .tp_basicsize = sizeof(mypyc___codegen___emitwrapper___WrapperGeneratorObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_emitwrapper___WrapperGenerator_template = &CPyType_emitwrapper___WrapperGenerator_template_;

static PyObject *
emitwrapper___WrapperGenerator_setup(PyTypeObject *type)
{
    mypyc___codegen___emitwrapper___WrapperGeneratorObject *self;
    self = (mypyc___codegen___emitwrapper___WrapperGeneratorObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = emitwrapper___WrapperGenerator_vtable;
    self->_num_bitmap_args = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_emitwrapper___WrapperGenerator(PyObject *cpy_r_cl, PyObject *cpy_r_emitter)
{
    PyObject *self = emitwrapper___WrapperGenerator_setup(CPyType_emitwrapper___WrapperGenerator);
    if (self == NULL)
        return NULL;
    char res = CPyDef_emitwrapper___WrapperGenerator_____init__(self, cpy_r_cl, cpy_r_emitter);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
emitwrapper___WrapperGenerator_get_cl(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure)
{
    if (unlikely(self->_cl == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'cl' of 'WrapperGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_cl);
    PyObject *retval = self->_cl;
    return retval;
}

static int
emitwrapper___WrapperGenerator_set_cl(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'WrapperGenerator' object attribute 'cl' cannot be deleted");
        return -1;
    }
    if (self->_cl != NULL) {
        CPy_DECREF(self->_cl);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_class_ir___ClassIR)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9662;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL9662;
    CPy_TypeError("mypyc.ir.class_ir.ClassIR or None", value); 
    tmp = NULL;
__LL9662: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_cl = tmp;
    return 0;
}

static PyObject *
emitwrapper___WrapperGenerator_get_emitter(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure)
{
    if (unlikely(self->_emitter == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'emitter' of 'WrapperGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_emitter);
    PyObject *retval = self->_emitter;
    return retval;
}

static int
emitwrapper___WrapperGenerator_set_emitter(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'WrapperGenerator' object attribute 'emitter' cannot be deleted");
        return -1;
    }
    if (self->_emitter != NULL) {
        CPy_DECREF(self->_emitter);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType_emit___Emitter))
        tmp = value;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_emitter = tmp;
    return 0;
}

static PyObject *
emitwrapper___WrapperGenerator_get_cleanups(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure)
{
    if (unlikely(self->_cleanups == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'cleanups' of 'WrapperGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_cleanups);
    PyObject *retval = self->_cleanups;
    return retval;
}

static int
emitwrapper___WrapperGenerator_set_cleanups(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'WrapperGenerator' object attribute 'cleanups' cannot be deleted");
        return -1;
    }
    if (self->_cleanups != NULL) {
        CPy_DECREF(self->_cleanups);
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
    self->_cleanups = tmp;
    return 0;
}

static PyObject *
emitwrapper___WrapperGenerator_get_optional_args(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure)
{
    if (unlikely(self->_optional_args == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'optional_args' of 'WrapperGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_optional_args);
    PyObject *retval = self->_optional_args;
    return retval;
}

static int
emitwrapper___WrapperGenerator_set_optional_args(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'WrapperGenerator' object attribute 'optional_args' cannot be deleted");
        return -1;
    }
    if (self->_optional_args != NULL) {
        CPy_DECREF(self->_optional_args);
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
    self->_optional_args = tmp;
    return 0;
}

static PyObject *
emitwrapper___WrapperGenerator_get_traceback_code(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure)
{
    if (unlikely(self->_traceback_code == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'traceback_code' of 'WrapperGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_traceback_code);
    PyObject *retval = self->_traceback_code;
    return retval;
}

static int
emitwrapper___WrapperGenerator_set_traceback_code(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'WrapperGenerator' object attribute 'traceback_code' cannot be deleted");
        return -1;
    }
    if (self->_traceback_code != NULL) {
        CPy_DECREF(self->_traceback_code);
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
    self->_traceback_code = tmp;
    return 0;
}

static PyObject *
emitwrapper___WrapperGenerator_get_target_name(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure)
{
    if (unlikely(self->_target_name == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'target_name' of 'WrapperGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_target_name);
    PyObject *retval = self->_target_name;
    return retval;
}

static int
emitwrapper___WrapperGenerator_set_target_name(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'WrapperGenerator' object attribute 'target_name' cannot be deleted");
        return -1;
    }
    if (self->_target_name != NULL) {
        CPy_DECREF(self->_target_name);
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
    self->_target_name = tmp;
    return 0;
}

static PyObject *
emitwrapper___WrapperGenerator_get_target_cname(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure)
{
    if (unlikely(self->_target_cname == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'target_cname' of 'WrapperGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_target_cname);
    PyObject *retval = self->_target_cname;
    return retval;
}

static int
emitwrapper___WrapperGenerator_set_target_cname(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'WrapperGenerator' object attribute 'target_cname' cannot be deleted");
        return -1;
    }
    if (self->_target_cname != NULL) {
        CPy_DECREF(self->_target_cname);
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
    self->_target_cname = tmp;
    return 0;
}

static PyObject *
emitwrapper___WrapperGenerator_get_num_bitmap_args(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure)
{
    if (unlikely(self->_num_bitmap_args == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'num_bitmap_args' of 'WrapperGenerator' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_num_bitmap_args);
    PyObject *retval = CPyTagged_StealAsObject(self->_num_bitmap_args);
    return retval;
}

static int
emitwrapper___WrapperGenerator_set_num_bitmap_args(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'WrapperGenerator' object attribute 'num_bitmap_args' cannot be deleted");
        return -1;
    }
    if (self->_num_bitmap_args != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_num_bitmap_args);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_num_bitmap_args = tmp;
    return 0;
}

static PyObject *
emitwrapper___WrapperGenerator_get_args(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure)
{
    if (unlikely(self->_args == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'args' of 'WrapperGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_args);
    PyObject *retval = self->_args;
    return retval;
}

static int
emitwrapper___WrapperGenerator_set_args(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'WrapperGenerator' object attribute 'args' cannot be deleted");
        return -1;
    }
    if (self->_args != NULL) {
        CPy_DECREF(self->_args);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_args = tmp;
    return 0;
}

static PyObject *
emitwrapper___WrapperGenerator_get_arg_names(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure)
{
    if (unlikely(self->_arg_names == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'arg_names' of 'WrapperGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_arg_names);
    PyObject *retval = self->_arg_names;
    return retval;
}

static int
emitwrapper___WrapperGenerator_set_arg_names(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'WrapperGenerator' object attribute 'arg_names' cannot be deleted");
        return -1;
    }
    if (self->_arg_names != NULL) {
        CPy_DECREF(self->_arg_names);
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
    self->_arg_names = tmp;
    return 0;
}

static PyObject *
emitwrapper___WrapperGenerator_get_ret_type(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, void *closure)
{
    if (unlikely(self->_ret_type == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ret_type' of 'WrapperGenerator' undefined");
        return NULL;
    }
    CPy_INCREF(self->_ret_type);
    PyObject *retval = self->_ret_type;
    return retval;
}

static int
emitwrapper___WrapperGenerator_set_ret_type(mypyc___codegen___emitwrapper___WrapperGeneratorObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'WrapperGenerator' object attribute 'ret_type' cannot be deleted");
        return -1;
    }
    if (self->_ret_type != NULL) {
        CPy_DECREF(self->_ret_type);
    }
    PyObject *tmp;
    if (likely(PyObject_TypeCheck(value, CPyType_rtypes___RType)))
        tmp = value;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_ret_type = tmp;
    return 0;
}
static PyMethodDef emitwrappermodule_methods[] = {
    {"wrapper_function_header", (PyCFunction)CPyPy_emitwrapper___wrapper_function_header, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_traceback_code", (PyCFunction)CPyPy_emitwrapper___generate_traceback_code, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"make_arg_groups", (PyCFunction)CPyPy_emitwrapper___make_arg_groups, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"reorder_arg_groups", (PyCFunction)CPyPy_emitwrapper___reorder_arg_groups, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"make_static_kwlist", (PyCFunction)CPyPy_emitwrapper___make_static_kwlist, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"make_format_string", (PyCFunction)CPyPy_emitwrapper___make_format_string, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_wrapper_function", (PyCFunction)CPyPy_emitwrapper___generate_wrapper_function, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"legacy_wrapper_function_header", (PyCFunction)CPyPy_emitwrapper___legacy_wrapper_function_header, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_legacy_wrapper_function", (PyCFunction)CPyPy_emitwrapper___generate_legacy_wrapper_function, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_dunder_wrapper", (PyCFunction)CPyPy_emitwrapper___generate_dunder_wrapper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_ipow_wrapper", (PyCFunction)CPyPy_emitwrapper___generate_ipow_wrapper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_bin_op_wrapper", (PyCFunction)CPyPy_emitwrapper___generate_bin_op_wrapper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_bin_op_forward_only_wrapper", (PyCFunction)CPyPy_emitwrapper___generate_bin_op_forward_only_wrapper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_bin_op_reverse_only_wrapper", (PyCFunction)CPyPy_emitwrapper___generate_bin_op_reverse_only_wrapper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_bin_op_both_wrappers", (PyCFunction)CPyPy_emitwrapper___generate_bin_op_both_wrappers, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_bin_op_reverse_dunder_call", (PyCFunction)CPyPy_emitwrapper___generate_bin_op_reverse_dunder_call, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"handle_third_pow_argument", (PyCFunction)CPyPy_emitwrapper___handle_third_pow_argument, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_richcompare_wrapper", (PyCFunction)CPyPy_emitwrapper___generate_richcompare_wrapper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_get_wrapper", (PyCFunction)CPyPy_emitwrapper___generate_get_wrapper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_hash_wrapper", (PyCFunction)CPyPy_emitwrapper___generate_hash_wrapper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_len_wrapper", (PyCFunction)CPyPy_emitwrapper___generate_len_wrapper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_bool_wrapper", (PyCFunction)CPyPy_emitwrapper___generate_bool_wrapper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_del_item_wrapper", (PyCFunction)CPyPy_emitwrapper___generate_del_item_wrapper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_set_del_item_wrapper", (PyCFunction)CPyPy_emitwrapper___generate_set_del_item_wrapper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_set_del_item_wrapper_inner", (PyCFunction)CPyPy_emitwrapper___generate_set_del_item_wrapper_inner, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_contains_wrapper", (PyCFunction)CPyPy_emitwrapper___generate_contains_wrapper, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_wrapper_core", (PyCFunction)CPyPy_emitwrapper___generate_wrapper_core, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_arg_check", (PyCFunction)CPyPy_emitwrapper___generate_arg_check, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef emitwrappermodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.codegen.emitwrapper",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    emitwrappermodule_methods
};

PyObject *CPyInit_mypyc___codegen___emitwrapper(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___codegen___emitwrapper_internal) {
        Py_INCREF(CPyModule_mypyc___codegen___emitwrapper_internal);
        return CPyModule_mypyc___codegen___emitwrapper_internal;
    }
    CPyModule_mypyc___codegen___emitwrapper_internal = PyModule_Create(&emitwrappermodule);
    if (unlikely(CPyModule_mypyc___codegen___emitwrapper_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___codegen___emitwrapper_internal, "__name__");
    CPyStatic_emitwrapper___globals = PyModule_GetDict(CPyModule_mypyc___codegen___emitwrapper_internal);
    if (unlikely(CPyStatic_emitwrapper___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_emitwrapper_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___codegen___emitwrapper_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___codegen___emitwrapper_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_emitwrapper___WrapperGenerator);
    return NULL;
}

PyObject *CPyDef_emitwrapper___wrapper_function_header(PyObject *cpy_r_fn, PyObject *cpy_r_names) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = CPyStatics[7582]; /* ('PyObject *{prefix}{name}(PyObject *self, PyObject '
                                    '*const *args, size_t nargs, PyObject *kwnames)') */
    cpy_r_r1 = CPyStatics[7069]; /* 'CPyPy_' */
    cpy_r_r2 = CPyDef_func_ir___FuncIR___cname(cpy_r_fn, cpy_r_names);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "wrapper_function_header", 68, CPyStatic_emitwrapper___globals);
        goto CPyL4;
    }
    cpy_r_r3 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r4[3] = {cpy_r_r0, cpy_r_r1, cpy_r_r2};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = CPyStatics[9989]; /* ('prefix', 'name') */
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775809ULL, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "wrapper_function_header", 65, CPyStatic_emitwrapper___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r2);
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "wrapper_function_header", 65, CPyStatic_emitwrapper___globals, "str", cpy_r_r7);
        goto CPyL4;
    }
    return cpy_r_r8;
CPyL4: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL5: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_emitwrapper___wrapper_function_header(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "names", 0};
    static CPyArg_Parser parser = {"OO:wrapper_function_header", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_names;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_names)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(Py_TYPE(obj_names) == CPyType_namegen___NameGenerator))
        arg_names = obj_names;
    else {
        CPy_TypeError("mypyc.namegen.NameGenerator", obj_names); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___wrapper_function_header(arg_fn, arg_names);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "wrapper_function_header", 60, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___generate_traceback_code(PyObject *cpy_r_fn, PyObject *cpy_r_emitter, PyObject *cpy_r_source_path, PyObject *cpy_r_module_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_globals_static;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_traceback_code;
    PyObject *cpy_r_r22;
    cpy_r_r0 = CPyStatics[1109]; /* 'globals' */
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_emit___Emitter___static_name(cpy_r_emitter, cpy_r_r0, cpy_r_module_name, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_traceback_code", 79, CPyStatic_emitwrapper___globals);
        goto CPyL13;
    }
    cpy_r_globals_static = cpy_r_r2;
    cpy_r_r3 = CPyStatics[5539]; /* '\\' */
    cpy_r_r4 = CPyStatics[7005]; /* '\\\\' */
    cpy_r_r5 = PyUnicode_Replace(cpy_r_source_path, cpy_r_r3, cpy_r_r4, -1);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_traceback_code", 81, CPyStatic_emitwrapper___globals);
        goto CPyL14;
    }
    cpy_r_r6 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_traceback_name;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    if (!cpy_r_r8) goto CPyL15;
    CPy_INCREF(cpy_r_r6);
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r9 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_traceback_code", 82, CPyStatic_emitwrapper___globals, "str", cpy_r_r6);
        goto CPyL16;
    }
    cpy_r_r10 = CPyStr_IsTrue(cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    if (!cpy_r_r10) goto CPyL15;
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r11 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_traceback_code", 82, CPyStatic_emitwrapper___globals, "str", cpy_r_r6);
        goto CPyL17;
    }
    cpy_r_r12 = cpy_r_r11;
    goto CPyL9;
CPyL7: ;
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_traceback_code", 82, CPyStatic_emitwrapper___globals);
        goto CPyL17;
    }
CPyL8: ;
    cpy_r_r12 = cpy_r_r13;
CPyL9: ;
    cpy_r_r14 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 1, mypyc___ir___func_ir___FuncIRObject, CPyTagged); /* line */
    if (unlikely(cpy_r_r14 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_traceback_code", 83, CPyStatic_emitwrapper___globals);
        goto CPyL18;
    }
CPyL10: ;
    cpy_r_r15 = CPyTagged_Str(cpy_r_r14);
    CPyTagged_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_traceback_code", 80, CPyStatic_emitwrapper___globals);
        goto CPyL18;
    }
    cpy_r_r16 = CPyStatics[7583]; /* 'CPy_AddTraceback("' */
    cpy_r_r17 = CPyStatics[3415]; /* '", "' */
    cpy_r_r18 = CPyStatics[6942]; /* '", ' */
    cpy_r_r19 = CPyStatics[71]; /* ', ' */
    cpy_r_r20 = CPyStatics[6872]; /* ');' */
    cpy_r_r21 = CPyStr_Build(9, cpy_r_r16, cpy_r_r5, cpy_r_r17, cpy_r_r12, cpy_r_r18, cpy_r_r15, cpy_r_r19, cpy_r_globals_static, cpy_r_r20);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_globals_static);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_traceback_code", 80, CPyStatic_emitwrapper___globals);
        goto CPyL13;
    }
    cpy_r_traceback_code = cpy_r_r21;
    return cpy_r_traceback_code;
CPyL13: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL14: ;
    CPy_DecRef(cpy_r_globals_static);
    goto CPyL13;
CPyL15: ;
    CPy_DECREF(cpy_r_r6);
    goto CPyL7;
CPyL16: ;
    CPy_DecRef(cpy_r_globals_static);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r6);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_globals_static);
    CPy_DecRef(cpy_r_r5);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_globals_static);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r12);
    goto CPyL13;
}

PyObject *CPyPy_emitwrapper___generate_traceback_code(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "emitter", "source_path", "module_name", 0};
    static CPyArg_Parser parser = {"OOOO:generate_traceback_code", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_emitter;
    PyObject *obj_source_path;
    PyObject *obj_module_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_emitter, &obj_source_path, &obj_module_name)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *arg_source_path;
    if (likely(PyUnicode_Check(obj_source_path)))
        arg_source_path = obj_source_path;
    else {
        CPy_TypeError("str", obj_source_path); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___generate_traceback_code(arg_fn, arg_emitter, arg_source_path, arg_module_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_traceback_code", 71, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___make_arg_groups(PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_k;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    CPyTagged cpy_r_r17;
    int32_t cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_arg_groups", 91, CPyStatic_emitwrapper___globals);
        goto CPyL14;
    }
    cpy_r_r1 = (PyObject *)CPyType_nodes___ArgKind;
    cpy_r_r2 = PyObject_GetIter(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_arg_groups", 91, CPyStatic_emitwrapper___globals);
        goto CPyL15;
    }
CPyL2: ;
    cpy_r_r3 = PyIter_Next(cpy_r_r2);
    if (cpy_r_r3 == NULL) goto CPyL16;
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_nodes___ArgKind))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_arg_groups", 91, CPyStatic_emitwrapper___globals, "mypy.nodes.ArgKind", cpy_r_r3);
        goto CPyL17;
    }
    cpy_r_k = cpy_r_r4;
    cpy_r_r5 = PyList_New(0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_arg_groups", 91, CPyStatic_emitwrapper___globals);
        goto CPyL18;
    }
    cpy_r_r6 = 0;
CPyL6: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL11;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r6);
    if (likely(Py_TYPE(cpy_r_r11) == CPyType_func_ir___RuntimeArg))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_arg_groups", 91, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r11);
        goto CPyL19;
    }
    cpy_r_arg = cpy_r_r12;
    cpy_r_r13 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_kind;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = cpy_r_r13 == cpy_r_k;
    CPy_DECREF(cpy_r_r13);
    if (!cpy_r_r14) goto CPyL20;
    cpy_r_r15 = PyList_Append(cpy_r_r5, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_arg_groups", 91, CPyStatic_emitwrapper___globals);
        goto CPyL19;
    }
CPyL10: ;
    cpy_r_r17 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r17;
    goto CPyL6;
CPyL11: ;
    cpy_r_r18 = CPyDict_SetItem(cpy_r_r0, cpy_r_k, cpy_r_r5);
    CPy_DECREF(cpy_r_k);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r19 = cpy_r_r18 >= 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_arg_groups", 91, CPyStatic_emitwrapper___globals);
        goto CPyL17;
    } else
        goto CPyL2;
CPyL12: ;
    cpy_r_r20 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_arg_groups", 91, CPyStatic_emitwrapper___globals);
        goto CPyL15;
    }
    return cpy_r_r0;
CPyL14: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL15: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL14;
CPyL16: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL12;
CPyL17: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_k);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_k);
    CPy_DecRef(cpy_r_r5);
    goto CPyL14;
CPyL20: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL10;
}

PyObject *CPyPy_emitwrapper___make_arg_groups(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:make_arg_groups", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___make_arg_groups(arg_args);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_arg_groups", 89, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___reorder_arg_groups(PyObject *cpy_r_groups) {
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
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    cpy_r_r0 = CPyStatic_nodes___ARG_POS;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = CPyDict_GetItem(cpy_r_groups, cpy_r_r0);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    if (likely(PyList_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals, "list", cpy_r_r2);
        goto CPyL27;
    }
    cpy_r_r4 = CPyStatic_nodes___ARG_OPT;
    if (unlikely(cpy_r_r4 == NULL)) {
        goto CPyL28;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_OPT\" was not set");
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL8: ;
    cpy_r_r6 = CPyDict_GetItem(cpy_r_groups, cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    if (likely(PyList_Check(cpy_r_r6)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals, "list", cpy_r_r6);
        goto CPyL29;
    }
    cpy_r_r8 = PyNumber_Add(cpy_r_r3, cpy_r_r7);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    if (likely(PyList_Check(cpy_r_r8)))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals, "list", cpy_r_r8);
        goto CPyL27;
    }
    cpy_r_r10 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (unlikely(cpy_r_r10 == NULL)) {
        goto CPyL30;
    } else
        goto CPyL15;
CPyL13: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r12 = CPyDict_GetItem(cpy_r_groups, cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals);
        goto CPyL31;
    }
    if (likely(PyList_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals, "list", cpy_r_r12);
        goto CPyL31;
    }
    cpy_r_r14 = PyNumber_Add(cpy_r_r9, cpy_r_r13);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    if (likely(PyList_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals, "list", cpy_r_r14);
        goto CPyL27;
    }
    cpy_r_r16 = CPyStatic_nodes___ARG_NAMED;
    if (unlikely(cpy_r_r16 == NULL)) {
        goto CPyL32;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r18 = CPyDict_GetItem(cpy_r_groups, cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals);
        goto CPyL33;
    }
    if (likely(PyList_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals, "list", cpy_r_r18);
        goto CPyL33;
    }
    cpy_r_r20 = PyNumber_Add(cpy_r_r15, cpy_r_r19);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    if (likely(PyList_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 96, CPyStatic_emitwrapper___globals, "list", cpy_r_r20);
        goto CPyL27;
    }
    return cpy_r_r21;
CPyL27: ;
    cpy_r_r22 = NULL;
    return cpy_r_r22;
CPyL28: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL6;
CPyL29: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL13;
CPyL31: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL27;
CPyL32: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL20;
CPyL33: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL27;
}

PyObject *CPyPy_emitwrapper___reorder_arg_groups(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"groups", 0};
    static CPyArg_Parser parser = {"O:reorder_arg_groups", kwlist, 0};
    PyObject *obj_groups;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_groups)) {
        return NULL;
    }
    PyObject *arg_groups;
    if (likely(PyDict_Check(obj_groups)))
        arg_groups = obj_groups;
    else {
        CPy_TypeError("dict", obj_groups); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___reorder_arg_groups(arg_groups);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "reorder_arg_groups", 94, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___make_static_kwlist(PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_arg_names;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = PyList_New(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_static_kwlist", 100, CPyStatic_emitwrapper___globals);
        goto CPyL10;
    }
    cpy_r_r4 = 0;
CPyL2: ;
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = (Py_ssize_t)cpy_r_r4 < (Py_ssize_t)cpy_r_r7;
    if (!cpy_r_r8) goto CPyL7;
    cpy_r_r9 = CPyList_GetItemUnsafe(cpy_r_args, cpy_r_r4);
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_func_ir___RuntimeArg))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_static_kwlist", 100, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r9);
        goto CPyL11;
    }
    cpy_r_arg = cpy_r_r10;
    cpy_r_r11 = CPyStatics[178]; /* '"' */
    cpy_r_r12 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_name;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r13 = CPyStatics[6942]; /* '", ' */
    cpy_r_r14 = CPyStr_Build(3, cpy_r_r11, cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_static_kwlist", 100, CPyStatic_emitwrapper___globals);
        goto CPyL11;
    }
    cpy_r_r15 = CPyList_SetItemUnsafe(cpy_r_r3, cpy_r_r4, cpy_r_r14);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_static_kwlist", 100, CPyStatic_emitwrapper___globals);
        goto CPyL11;
    }
    cpy_r_r16 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r16;
    goto CPyL2;
CPyL7: ;
    cpy_r_r17 = PyUnicode_Join(cpy_r_r0, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_static_kwlist", 100, CPyStatic_emitwrapper___globals);
        goto CPyL10;
    }
    cpy_r_arg_names = cpy_r_r17;
    cpy_r_r18 = CPyStatics[7584]; /* 'static const char * const kwlist[] = {' */
    cpy_r_r19 = CPyStatics[7585]; /* '0};' */
    cpy_r_r20 = CPyStr_Build(3, cpy_r_r18, cpy_r_arg_names, cpy_r_r19);
    CPy_DECREF(cpy_r_arg_names);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_static_kwlist", 101, CPyStatic_emitwrapper___globals);
        goto CPyL10;
    }
    return cpy_r_r20;
CPyL10: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL11: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL10;
}

PyObject *CPyPy_emitwrapper___make_static_kwlist(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", 0};
    static CPyArg_Parser parser = {"O:make_static_kwlist", kwlist, 0};
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_args)) {
        return NULL;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___make_static_kwlist(arg_args);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_static_kwlist", 99, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___make_format_string(PyObject *cpy_r_func_name, PyObject *cpy_r_groups) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_format;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    int64_t cpy_r_r25;
    CPyTagged cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    int64_t cpy_r_r36;
    CPyTagged cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    int64_t cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    int64_t cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    CPyPtr cpy_r_r61;
    int64_t cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyPtr cpy_r_r73;
    int64_t cpy_r_r74;
    CPyTagged cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyPtr cpy_r_r81;
    int64_t cpy_r_r82;
    CPyTagged cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    CPyPtr cpy_r_r91;
    int64_t cpy_r_r92;
    CPyTagged cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    CPyPtr cpy_r_r103;
    int64_t cpy_r_r104;
    CPyTagged cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    CPyPtr cpy_r_r113;
    int64_t cpy_r_r114;
    CPyTagged cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    char cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_format = cpy_r_r0;
    cpy_r_r1 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL95;
    } else
        goto CPyL3;
CPyL1: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 120, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r3 = CPyDict_GetItem(cpy_r_groups, cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 120, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 120, CPyStatic_emitwrapper___globals, "list", cpy_r_r3);
        goto CPyL96;
    }
    cpy_r_r5 = (CPyPtr)&((PyVarObject *)cpy_r_r4)->ob_size;
    cpy_r_r6 = *(int64_t *)cpy_r_r5;
    CPy_DECREF(cpy_r_r4);
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = cpy_r_r7 != 0;
    if (cpy_r_r8) goto CPyL12;
    cpy_r_r9 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r9 == NULL)) {
        goto CPyL97;
    } else
        goto CPyL9;
CPyL7: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 120, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL9: ;
    cpy_r_r11 = CPyDict_GetItem(cpy_r_groups, cpy_r_r9);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 120, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 120, CPyStatic_emitwrapper___globals, "list", cpy_r_r11);
        goto CPyL96;
    }
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = cpy_r_r15 != 0;
    if (!cpy_r_r16) goto CPyL14;
CPyL12: ;
    cpy_r_r17 = CPyStatics[1183]; /* '%' */
    cpy_r_r18 = CPyStr_Append(cpy_r_format, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 121, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    cpy_r_format = cpy_r_r18;
CPyL14: ;
    cpy_r_r19 = CPyStatics[7586]; /* 'O' */
    cpy_r_r20 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r20 == NULL)) {
        goto CPyL98;
    } else
        goto CPyL17;
CPyL15: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r21 = 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 122, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r22 = CPyDict_GetItem(cpy_r_groups, cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 122, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r22)))
        cpy_r_r23 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 122, CPyStatic_emitwrapper___globals, "list", cpy_r_r22);
        goto CPyL96;
    }
    cpy_r_r24 = (CPyPtr)&((PyVarObject *)cpy_r_r23)->ob_size;
    cpy_r_r25 = *(int64_t *)cpy_r_r24;
    CPy_DECREF(cpy_r_r23);
    cpy_r_r26 = cpy_r_r25 << 1;
    cpy_r_r27 = CPyTagged_StealAsObject(cpy_r_r26);
    cpy_r_r28 = PyNumber_Multiply(cpy_r_r19, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 122, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    if (likely(PyUnicode_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 122, CPyStatic_emitwrapper___globals, "str", cpy_r_r28);
        goto CPyL96;
    }
    cpy_r_r30 = CPyStr_Append(cpy_r_format, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 122, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    cpy_r_format = cpy_r_r30;
    cpy_r_r31 = CPyStatic_nodes___ARG_OPT;
    if (unlikely(cpy_r_r31 == NULL)) {
        goto CPyL99;
    } else
        goto CPyL25;
CPyL23: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_OPT\" was not set");
    cpy_r_r32 = 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 123, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r33 = CPyDict_GetItem(cpy_r_groups, cpy_r_r31);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 123, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r33)))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 123, CPyStatic_emitwrapper___globals, "list", cpy_r_r33);
        goto CPyL96;
    }
    cpy_r_r35 = (CPyPtr)&((PyVarObject *)cpy_r_r34)->ob_size;
    cpy_r_r36 = *(int64_t *)cpy_r_r35;
    CPy_DECREF(cpy_r_r34);
    cpy_r_r37 = cpy_r_r36 << 1;
    cpy_r_r38 = cpy_r_r37 != 0;
    if (cpy_r_r38) goto CPyL40;
    cpy_r_r39 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (unlikely(cpy_r_r39 == NULL)) {
        goto CPyL100;
    } else
        goto CPyL31;
CPyL29: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r40 = 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 123, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r41 = CPyDict_GetItem(cpy_r_groups, cpy_r_r39);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 123, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 123, CPyStatic_emitwrapper___globals, "list", cpy_r_r41);
        goto CPyL96;
    }
    cpy_r_r43 = (CPyPtr)&((PyVarObject *)cpy_r_r42)->ob_size;
    cpy_r_r44 = *(int64_t *)cpy_r_r43;
    CPy_DECREF(cpy_r_r42);
    cpy_r_r45 = cpy_r_r44 << 1;
    cpy_r_r46 = cpy_r_r45 != 0;
    if (cpy_r_r46) goto CPyL40;
    cpy_r_r47 = CPyStatic_nodes___ARG_NAMED;
    if (unlikely(cpy_r_r47 == NULL)) {
        goto CPyL101;
    } else
        goto CPyL37;
CPyL35: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r48 = 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 123, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r49 = CPyDict_GetItem(cpy_r_groups, cpy_r_r47);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 123, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r49)))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 123, CPyStatic_emitwrapper___globals, "list", cpy_r_r49);
        goto CPyL96;
    }
    cpy_r_r51 = (CPyPtr)&((PyVarObject *)cpy_r_r50)->ob_size;
    cpy_r_r52 = *(int64_t *)cpy_r_r51;
    CPy_DECREF(cpy_r_r50);
    cpy_r_r53 = cpy_r_r52 << 1;
    cpy_r_r54 = cpy_r_r53 != 0;
    if (!cpy_r_r54) goto CPyL50;
CPyL40: ;
    cpy_r_r55 = CPyStatics[885]; /* '|' */
    cpy_r_r56 = CPyStatics[7586]; /* 'O' */
    cpy_r_r57 = CPyStatic_nodes___ARG_OPT;
    if (unlikely(cpy_r_r57 == NULL)) {
        goto CPyL102;
    } else
        goto CPyL43;
CPyL41: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_OPT\" was not set");
    cpy_r_r58 = 0;
    if (unlikely(!cpy_r_r58)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 124, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r59 = CPyDict_GetItem(cpy_r_groups, cpy_r_r57);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 124, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r59)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 124, CPyStatic_emitwrapper___globals, "list", cpy_r_r59);
        goto CPyL96;
    }
    cpy_r_r61 = (CPyPtr)&((PyVarObject *)cpy_r_r60)->ob_size;
    cpy_r_r62 = *(int64_t *)cpy_r_r61;
    CPy_DECREF(cpy_r_r60);
    cpy_r_r63 = cpy_r_r62 << 1;
    cpy_r_r64 = CPyTagged_StealAsObject(cpy_r_r63);
    cpy_r_r65 = PyNumber_Multiply(cpy_r_r56, cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 124, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    if (likely(PyUnicode_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 124, CPyStatic_emitwrapper___globals, "str", cpy_r_r65);
        goto CPyL96;
    }
    cpy_r_r67 = PyUnicode_Concat(cpy_r_r55, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 124, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    cpy_r_r68 = CPyStr_Append(cpy_r_format, cpy_r_r67);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 124, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    cpy_r_format = cpy_r_r68;
CPyL50: ;
    cpy_r_r69 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (unlikely(cpy_r_r69 == NULL)) {
        goto CPyL103;
    } else
        goto CPyL53;
CPyL51: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r70 = 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 125, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL53: ;
    cpy_r_r71 = CPyDict_GetItem(cpy_r_groups, cpy_r_r69);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 125, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r71)))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 125, CPyStatic_emitwrapper___globals, "list", cpy_r_r71);
        goto CPyL96;
    }
    cpy_r_r73 = (CPyPtr)&((PyVarObject *)cpy_r_r72)->ob_size;
    cpy_r_r74 = *(int64_t *)cpy_r_r73;
    CPy_DECREF(cpy_r_r72);
    cpy_r_r75 = cpy_r_r74 << 1;
    cpy_r_r76 = cpy_r_r75 != 0;
    if (cpy_r_r76) goto CPyL62;
    cpy_r_r77 = CPyStatic_nodes___ARG_NAMED;
    if (unlikely(cpy_r_r77 == NULL)) {
        goto CPyL104;
    } else
        goto CPyL59;
CPyL57: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r78 = 0;
    if (unlikely(!cpy_r_r78)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 125, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL59: ;
    cpy_r_r79 = CPyDict_GetItem(cpy_r_groups, cpy_r_r77);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 125, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r79)))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 125, CPyStatic_emitwrapper___globals, "list", cpy_r_r79);
        goto CPyL96;
    }
    cpy_r_r81 = (CPyPtr)&((PyVarObject *)cpy_r_r80)->ob_size;
    cpy_r_r82 = *(int64_t *)cpy_r_r81;
    CPy_DECREF(cpy_r_r80);
    cpy_r_r83 = cpy_r_r82 << 1;
    cpy_r_r84 = cpy_r_r83 != 0;
    if (!cpy_r_r84) goto CPyL72;
CPyL62: ;
    cpy_r_r85 = CPyStatics[7587]; /* '$' */
    cpy_r_r86 = CPyStatics[7586]; /* 'O' */
    cpy_r_r87 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (unlikely(cpy_r_r87 == NULL)) {
        goto CPyL105;
    } else
        goto CPyL65;
CPyL63: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r88 = 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 126, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL65: ;
    cpy_r_r89 = CPyDict_GetItem(cpy_r_groups, cpy_r_r87);
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 126, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r89)))
        cpy_r_r90 = cpy_r_r89;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 126, CPyStatic_emitwrapper___globals, "list", cpy_r_r89);
        goto CPyL96;
    }
    cpy_r_r91 = (CPyPtr)&((PyVarObject *)cpy_r_r90)->ob_size;
    cpy_r_r92 = *(int64_t *)cpy_r_r91;
    CPy_DECREF(cpy_r_r90);
    cpy_r_r93 = cpy_r_r92 << 1;
    cpy_r_r94 = CPyTagged_StealAsObject(cpy_r_r93);
    cpy_r_r95 = PyNumber_Multiply(cpy_r_r86, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 126, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    if (likely(PyUnicode_Check(cpy_r_r95)))
        cpy_r_r96 = cpy_r_r95;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 126, CPyStatic_emitwrapper___globals, "str", cpy_r_r95);
        goto CPyL96;
    }
    cpy_r_r97 = PyUnicode_Concat(cpy_r_r85, cpy_r_r96);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 126, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    cpy_r_r98 = CPyStr_Append(cpy_r_format, cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 126, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    cpy_r_format = cpy_r_r98;
CPyL72: ;
    cpy_r_r99 = CPyStatic_nodes___ARG_NAMED;
    if (unlikely(cpy_r_r99 == NULL)) {
        goto CPyL106;
    } else
        goto CPyL75;
CPyL73: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r100 = 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 127, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL75: ;
    cpy_r_r101 = CPyDict_GetItem(cpy_r_groups, cpy_r_r99);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 127, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r101)))
        cpy_r_r102 = cpy_r_r101;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 127, CPyStatic_emitwrapper___globals, "list", cpy_r_r101);
        goto CPyL96;
    }
    cpy_r_r103 = (CPyPtr)&((PyVarObject *)cpy_r_r102)->ob_size;
    cpy_r_r104 = *(int64_t *)cpy_r_r103;
    CPy_DECREF(cpy_r_r102);
    cpy_r_r105 = cpy_r_r104 << 1;
    cpy_r_r106 = cpy_r_r105 != 0;
    if (!cpy_r_r106) goto CPyL88;
    cpy_r_r107 = CPyStatics[1784]; /* '@' */
    cpy_r_r108 = CPyStatics[7586]; /* 'O' */
    cpy_r_r109 = CPyStatic_nodes___ARG_NAMED;
    if (unlikely(cpy_r_r109 == NULL)) {
        goto CPyL107;
    } else
        goto CPyL81;
CPyL79: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED\" was not set");
    cpy_r_r110 = 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 128, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    CPy_Unreachable();
CPyL81: ;
    cpy_r_r111 = CPyDict_GetItem(cpy_r_groups, cpy_r_r109);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 128, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    if (likely(PyList_Check(cpy_r_r111)))
        cpy_r_r112 = cpy_r_r111;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 128, CPyStatic_emitwrapper___globals, "list", cpy_r_r111);
        goto CPyL96;
    }
    cpy_r_r113 = (CPyPtr)&((PyVarObject *)cpy_r_r112)->ob_size;
    cpy_r_r114 = *(int64_t *)cpy_r_r113;
    CPy_DECREF(cpy_r_r112);
    cpy_r_r115 = cpy_r_r114 << 1;
    cpy_r_r116 = CPyTagged_StealAsObject(cpy_r_r115);
    cpy_r_r117 = PyNumber_Multiply(cpy_r_r108, cpy_r_r116);
    CPy_DECREF(cpy_r_r116);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 128, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    if (likely(PyUnicode_Check(cpy_r_r117)))
        cpy_r_r118 = cpy_r_r117;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 128, CPyStatic_emitwrapper___globals, "str", cpy_r_r117);
        goto CPyL96;
    }
    cpy_r_r119 = PyUnicode_Concat(cpy_r_r107, cpy_r_r118);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 128, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    cpy_r_r120 = CPyStr_Append(cpy_r_format, cpy_r_r119);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 128, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    cpy_r_format = cpy_r_r120;
CPyL88: ;
    cpy_r_r121 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r122 = cpy_r_func_name != cpy_r_r121;
    if (!cpy_r_r122) goto CPyL93;
    cpy_r_r123 = CPyStatics[171]; /* ':' */
    CPy_INCREF(cpy_r_func_name);
    if (likely(cpy_r_func_name != Py_None))
        cpy_r_r124 = cpy_r_func_name;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 130, CPyStatic_emitwrapper___globals, "str", cpy_r_func_name);
        goto CPyL96;
    }
    cpy_r_r125 = CPyStr_Build(2, cpy_r_r123, cpy_r_r124);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 130, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    cpy_r_r126 = CPyStr_Append(cpy_r_format, cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 130, CPyStatic_emitwrapper___globals);
        goto CPyL94;
    }
    cpy_r_format = cpy_r_r126;
CPyL93: ;
    return cpy_r_format;
CPyL94: ;
    cpy_r_r127 = NULL;
    return cpy_r_r127;
CPyL95: ;
    CPy_DecRef(cpy_r_format);
    goto CPyL1;
CPyL96: ;
    CPy_DecRef(cpy_r_format);
    goto CPyL94;
CPyL97: ;
    CPy_DecRef(cpy_r_format);
    goto CPyL7;
CPyL98: ;
    CPy_DecRef(cpy_r_format);
    goto CPyL15;
CPyL99: ;
    CPy_DecRef(cpy_r_format);
    goto CPyL23;
CPyL100: ;
    CPy_DecRef(cpy_r_format);
    goto CPyL29;
CPyL101: ;
    CPy_DecRef(cpy_r_format);
    goto CPyL35;
CPyL102: ;
    CPy_DecRef(cpy_r_format);
    goto CPyL41;
CPyL103: ;
    CPy_DecRef(cpy_r_format);
    goto CPyL51;
CPyL104: ;
    CPy_DecRef(cpy_r_format);
    goto CPyL57;
CPyL105: ;
    CPy_DecRef(cpy_r_format);
    goto CPyL63;
CPyL106: ;
    CPy_DecRef(cpy_r_format);
    goto CPyL73;
CPyL107: ;
    CPy_DecRef(cpy_r_format);
    goto CPyL79;
}

PyObject *CPyPy_emitwrapper___make_format_string(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"func_name", "groups", 0};
    static CPyArg_Parser parser = {"OO:make_format_string", kwlist, 0};
    PyObject *obj_func_name;
    PyObject *obj_groups;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_func_name, &obj_groups)) {
        return NULL;
    }
    PyObject *arg_func_name;
    if (PyUnicode_Check(obj_func_name))
        arg_func_name = obj_func_name;
    else {
        arg_func_name = NULL;
    }
    if (arg_func_name != NULL) goto __LL9663;
    if (obj_func_name == Py_None)
        arg_func_name = obj_func_name;
    else {
        arg_func_name = NULL;
    }
    if (arg_func_name != NULL) goto __LL9663;
    CPy_TypeError("str or None", obj_func_name); 
    goto fail;
__LL9663: ;
    PyObject *arg_groups;
    if (likely(PyDict_Check(obj_groups)))
        arg_groups = obj_groups;
    else {
        CPy_TypeError("dict", obj_groups); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___make_format_string(arg_func_name, arg_groups);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "make_format_string", 104, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___generate_wrapper_function(PyObject *cpy_r_fn, PyObject *cpy_r_emitter, PyObject *cpy_r_source_path, PyObject *cpy_r_module_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_real_args;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_groups;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_reordered_args;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_fmt;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    CPyPtr cpy_r_r45;
    int64_t cpy_r_r46;
    CPyTagged cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    CPyTagged cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyPtr cpy_r_r72;
    int64_t cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyTagged cpy_r_r75;
    CPyPtr cpy_r_r76;
    int64_t cpy_r_r77;
    CPyTagged cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_arg_2;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    CPyTagged cpy_r_r87;
    PyObject *cpy_r_cleanups;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_arg_ptrs;
    PyObject *cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    CPyPtr cpy_r_r93;
    int64_t cpy_r_r94;
    CPyTagged cpy_r_r95;
    char cpy_r_r96;
    PyObject *cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    CPyPtr cpy_r_r101;
    int64_t cpy_r_r102;
    CPyTagged cpy_r_r103;
    char cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyPtr cpy_r_r109;
    int64_t cpy_r_r110;
    CPyTagged cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    CPyPtr cpy_r_r125;
    CPyPtr cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    CPyPtr cpy_r_r133;
    int64_t cpy_r_r134;
    CPyTagged cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    char cpy_r_r139;
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
    CPyPtr cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    CPyPtr cpy_r_r153;
    int64_t cpy_r_r154;
    PyObject *cpy_r_r155;
    CPyTagged cpy_r_r156;
    CPyPtr cpy_r_r157;
    int64_t cpy_r_r158;
    CPyTagged cpy_r_r159;
    char cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_arg_3;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    CPyTagged cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    int32_t cpy_r_r172;
    char cpy_r_r173;
    PyObject *cpy_r_r174;
    char cpy_r_r175;
    char cpy_r_r176;
    char cpy_r_r177;
    tuple_T2II cpy_r_r178;
    char cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_nargs;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_parse_fn;
    CPyPtr cpy_r_r183;
    int64_t cpy_r_r184;
    CPyTagged cpy_r_r185;
    char cpy_r_r186;
    PyObject *cpy_r_r187;
    CPyPtr cpy_r_r188;
    int64_t cpy_r_r189;
    CPyTagged cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    PyObject *cpy_r_r195;
    CPyPtr cpy_r_r196;
    int64_t cpy_r_r197;
    CPyTagged cpy_r_r198;
    char cpy_r_r199;
    PyObject *cpy_r_r200;
    CPyPtr cpy_r_r201;
    int64_t cpy_r_r202;
    CPyTagged cpy_r_r203;
    PyObject *cpy_r_r204;
    char cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    CPyPtr cpy_r_r208;
    int64_t cpy_r_r209;
    CPyTagged cpy_r_r210;
    PyObject *cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    CPyPtr cpy_r_r215;
    int64_t cpy_r_r216;
    CPyTagged cpy_r_r217;
    CPyTagged cpy_r_r218;
    char cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    CPyPtr cpy_r_r222;
    int64_t cpy_r_r223;
    PyObject *cpy_r_r224;
    CPyTagged cpy_r_r225;
    CPyPtr cpy_r_r226;
    int64_t cpy_r_r227;
    CPyTagged cpy_r_r228;
    char cpy_r_r229;
    PyObject *cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_n;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    char cpy_r_r234;
    CPyTagged cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    PyObject *cpy_r_r238;
    PyObject *cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    PyObject *cpy_r_r242;
    PyObject *cpy_r_r243;
    PyObject *cpy_r_r244;
    char cpy_r_r245;
    PyObject *cpy_r_r246;
    CPyTagged cpy_r_r247;
    CPyTagged cpy_r_r248;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r249;
    char cpy_r_r250;
    int64_t cpy_r_r251;
    char cpy_r_r252;
    char cpy_r_r253;
    char cpy_r_r254;
    char cpy_r_r255;
    char cpy_r_r256;
    PyObject *cpy_r_r257;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r258;
    PyObject *cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    PyObject *cpy_r_r262;
    char cpy_r_r263;
    CPyTagged cpy_r_r264;
    PyObject *cpy_r_r265;
    PyObject *cpy_r_traceback_code;
    PyObject *cpy_r_r266;
    char cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject *cpy_r_r270;
    char cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    PyObject *cpy_r_r275;
    PyObject *cpy_r_r276;
    char cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    char cpy_r_r280;
    char cpy_r_r281;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_emitwrapper___wrapper_function_header(cpy_r_fn, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 142, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    cpy_r_r2 = CPyStatics[6884]; /* ' {' */
    cpy_r_r3 = CPyStr_Build(2, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 142, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    cpy_r_r4 = NULL;
    cpy_r_r5 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 142, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    cpy_r_r6 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 2, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* args */
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 145, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
CPyL4: ;
    cpy_r_r7 = PySequence_List(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 145, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    cpy_r_real_args = cpy_r_r7;
    cpy_r_r8 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 5, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* sig */
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 146, CPyStatic_emitwrapper___globals);
        goto CPyL187;
    }
CPyL6: ;
    cpy_r_r9 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r8)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 != 0;
    CPyTagged_DECREF(cpy_r_r9);
    if (!cpy_r_r10) goto CPyL11;
    cpy_r_r11 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 5, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* sig */
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 147, CPyStatic_emitwrapper___globals);
        goto CPyL187;
    }
CPyL8: ;
    cpy_r_r12 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r11)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = CPyTagged_Negate(cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r12);
    cpy_r_r14 = CPyList_GetSlice(cpy_r_real_args, 0, cpy_r_r13);
    CPy_DECREF(cpy_r_real_args);
    CPyTagged_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 147, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    if (likely(PyList_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 147, CPyStatic_emitwrapper___globals, "list", cpy_r_r14);
        goto CPyL186;
    }
    cpy_r_real_args = cpy_r_r15;
CPyL11: ;
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 4, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* class_name */
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 148, CPyStatic_emitwrapper___globals);
        goto CPyL187;
    }
CPyL12: ;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_r16 != cpy_r_r17;
    if (!cpy_r_r18) goto CPyL188;
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r19 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 148, CPyStatic_emitwrapper___globals, "str", cpy_r_r16);
        goto CPyL187;
    }
    cpy_r_r20 = CPyStr_IsTrue(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (!cpy_r_r20) goto CPyL20;
    cpy_r_r21 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_decl;
    cpy_r_r22 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r21)->_kind;
    cpy_r_r23 = cpy_r_r22 == 2;
    if (cpy_r_r23) goto CPyL20;
    cpy_r_r24 = CPyList_Pop(cpy_r_real_args, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 149, CPyStatic_emitwrapper___globals);
        goto CPyL187;
    }
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_func_ir___RuntimeArg))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 149, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r24);
        goto CPyL187;
    }
    cpy_r_arg = cpy_r_r25;
    cpy_r_r26 = CPyStatics[7588]; /* 'PyObject *obj_' */
    cpy_r_r27 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_name;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r28 = CPyStatics[7589]; /* ' = self;' */
    cpy_r_r29 = CPyStr_Build(3, cpy_r_r26, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 150, CPyStatic_emitwrapper___globals);
        goto CPyL187;
    }
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 150, CPyStatic_emitwrapper___globals);
        goto CPyL187;
    }
CPyL20: ;
    cpy_r_r32 = CPyDef_emitwrapper___make_arg_groups(cpy_r_real_args);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 155, CPyStatic_emitwrapper___globals);
        goto CPyL187;
    }
    cpy_r_groups = cpy_r_r32;
    cpy_r_r33 = CPyDef_emitwrapper___reorder_arg_groups(cpy_r_groups);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 156, CPyStatic_emitwrapper___globals);
        goto CPyL189;
    }
    cpy_r_reordered_args = cpy_r_r33;
    cpy_r_r34 = CPyDef_emitwrapper___make_static_kwlist(cpy_r_reordered_args);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 158, CPyStatic_emitwrapper___globals);
        goto CPyL190;
    }
    cpy_r_r35 = NULL;
    cpy_r_r36 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 158, CPyStatic_emitwrapper___globals);
        goto CPyL190;
    }
    cpy_r_r37 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 159, CPyStatic_emitwrapper___globals);
        goto CPyL190;
    }
CPyL25: ;
    cpy_r_r38 = CPyDef_emitwrapper___make_format_string(cpy_r_r37, cpy_r_groups);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 159, CPyStatic_emitwrapper___globals);
        goto CPyL190;
    }
    cpy_r_fmt = cpy_r_r38;
    cpy_r_r39 = CPyStatics[7590]; /* 'static CPyArg_Parser parser = {"' */
    cpy_r_r40 = CPyStatics[7591]; /* '", kwlist, 0};' */
    cpy_r_r41 = CPyStr_Build(3, cpy_r_r39, cpy_r_fmt, cpy_r_r40);
    CPy_DECREF(cpy_r_fmt);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 161, CPyStatic_emitwrapper___globals);
        goto CPyL190;
    }
    cpy_r_r42 = NULL;
    cpy_r_r43 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 161, CPyStatic_emitwrapper___globals);
        goto CPyL190;
    }
    cpy_r_r44 = 0;
CPyL29: ;
    cpy_r_r45 = (CPyPtr)&((PyVarObject *)cpy_r_real_args)->ob_size;
    cpy_r_r46 = *(int64_t *)cpy_r_r45;
    cpy_r_r47 = cpy_r_r46 << 1;
    cpy_r_r48 = (Py_ssize_t)cpy_r_r44 < (Py_ssize_t)cpy_r_r47;
    if (!cpy_r_r48) goto CPyL38;
    cpy_r_r49 = CPyList_GetItemUnsafe(cpy_r_real_args, cpy_r_r44);
    if (likely(Py_TYPE(cpy_r_r49) == CPyType_func_ir___RuntimeArg))
        cpy_r_r50 = cpy_r_r49;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 163, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r49);
        goto CPyL190;
    }
    cpy_r_arg = cpy_r_r50;
    cpy_r_r51 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_name;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = CPY_GET_ATTR(cpy_r_arg, CPyType_func_ir___RuntimeArg, 1, mypyc___ir___func_ir___RuntimeArgObject, char); /* optional */
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 165, CPyStatic_emitwrapper___globals);
        goto CPyL191;
    }
CPyL32: ;
    if (!cpy_r_r52) goto CPyL34;
CPyL33: ;
    cpy_r_r53 = CPyStatics[7592]; /* ' = NULL' */
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = cpy_r_r53;
    goto CPyL35;
CPyL34: ;
    cpy_r_r55 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r55);
    cpy_r_r54 = cpy_r_r55;
CPyL35: ;
    cpy_r_r56 = CPyStatics[7588]; /* 'PyObject *obj_' */
    cpy_r_r57 = CPyStatics[6886]; /* ';' */
    cpy_r_r58 = CPyStr_Build(4, cpy_r_r56, cpy_r_r51, cpy_r_r54, cpy_r_r57);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 165, CPyStatic_emitwrapper___globals);
        goto CPyL190;
    }
    cpy_r_r59 = NULL;
    cpy_r_r60 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 164, CPyStatic_emitwrapper___globals);
        goto CPyL190;
    }
    cpy_r_r61 = cpy_r_r44 + 2;
    cpy_r_r44 = cpy_r_r61;
    goto CPyL29;
CPyL38: ;
    cpy_r_r62 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r62 == NULL)) {
        goto CPyL192;
    } else
        goto CPyL41;
CPyL39: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r63 = 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 168, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r64 = CPyDict_GetItem(cpy_r_groups, cpy_r_r62);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 168, CPyStatic_emitwrapper___globals);
        goto CPyL190;
    }
    if (likely(PyList_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 168, CPyStatic_emitwrapper___globals, "list", cpy_r_r64);
        goto CPyL190;
    }
    cpy_r_r66 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r66 == NULL)) {
        goto CPyL193;
    } else
        goto CPyL46;
CPyL44: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r67 = 0;
    if (unlikely(!cpy_r_r67)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 168, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r68 = CPyDict_GetItem(cpy_r_groups, cpy_r_r66);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 168, CPyStatic_emitwrapper___globals);
        goto CPyL194;
    }
    if (likely(PyList_Check(cpy_r_r68)))
        cpy_r_r69 = cpy_r_r68;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 168, CPyStatic_emitwrapper___globals, "list", cpy_r_r68);
        goto CPyL194;
    }
    cpy_r_r70 = PyNumber_Add(cpy_r_r65, cpy_r_r69);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 168, CPyStatic_emitwrapper___globals);
        goto CPyL190;
    }
    if (likely(PyList_Check(cpy_r_r70)))
        cpy_r_r71 = cpy_r_r70;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 168, CPyStatic_emitwrapper___globals, "list", cpy_r_r70);
        goto CPyL190;
    }
    cpy_r_r72 = (CPyPtr)&((PyVarObject *)cpy_r_r71)->ob_size;
    cpy_r_r73 = *(int64_t *)cpy_r_r72;
    cpy_r_r74 = PyList_New(cpy_r_r73);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 168, CPyStatic_emitwrapper___globals);
        goto CPyL195;
    }
    cpy_r_r75 = 0;
CPyL52: ;
    cpy_r_r76 = (CPyPtr)&((PyVarObject *)cpy_r_r71)->ob_size;
    cpy_r_r77 = *(int64_t *)cpy_r_r76;
    cpy_r_r78 = cpy_r_r77 << 1;
    cpy_r_r79 = (Py_ssize_t)cpy_r_r75 < (Py_ssize_t)cpy_r_r78;
    if (!cpy_r_r79) goto CPyL196;
    cpy_r_r80 = CPyList_GetItemUnsafe(cpy_r_r71, cpy_r_r75);
    if (likely(Py_TYPE(cpy_r_r80) == CPyType_func_ir___RuntimeArg))
        cpy_r_r81 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 168, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r80);
        goto CPyL197;
    }
    cpy_r_arg_2 = cpy_r_r81;
    cpy_r_r82 = CPyStatics[7593]; /* 'CPy_DECREF(obj_' */
    cpy_r_r83 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg_2)->_name;
    CPy_INCREF(cpy_r_r83);
    CPy_DECREF(cpy_r_arg_2);
    cpy_r_r84 = CPyStatics[6872]; /* ');' */
    cpy_r_r85 = CPyStr_Build(3, cpy_r_r82, cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 168, CPyStatic_emitwrapper___globals);
        goto CPyL197;
    }
    cpy_r_r86 = CPyList_SetItemUnsafe(cpy_r_r74, cpy_r_r75, cpy_r_r85);
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 168, CPyStatic_emitwrapper___globals);
        goto CPyL197;
    }
    cpy_r_r87 = cpy_r_r75 + 2;
    cpy_r_r75 = cpy_r_r87;
    goto CPyL52;
CPyL57: ;
    cpy_r_cleanups = cpy_r_r74;
    cpy_r_r88 = PyList_New(0);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 170, CPyStatic_emitwrapper___globals);
        goto CPyL198;
    }
    cpy_r_arg_ptrs = cpy_r_r88;
    cpy_r_r89 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r89 == NULL)) {
        goto CPyL199;
    } else
        goto CPyL61;
CPyL59: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r90 = 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 171, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    CPy_Unreachable();
CPyL61: ;
    cpy_r_r91 = CPyDict_GetItem(cpy_r_groups, cpy_r_r89);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 171, CPyStatic_emitwrapper___globals);
        goto CPyL200;
    }
    if (likely(PyList_Check(cpy_r_r91)))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 171, CPyStatic_emitwrapper___globals, "list", cpy_r_r91);
        goto CPyL200;
    }
    cpy_r_r93 = (CPyPtr)&((PyVarObject *)cpy_r_r92)->ob_size;
    cpy_r_r94 = *(int64_t *)cpy_r_r93;
    CPy_DECREF(cpy_r_r92);
    cpy_r_r95 = cpy_r_r94 << 1;
    cpy_r_r96 = cpy_r_r95 != 0;
    if (cpy_r_r96) goto CPyL70;
    cpy_r_r97 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r97 == NULL)) {
        goto CPyL201;
    } else
        goto CPyL67;
CPyL65: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r98 = 0;
    if (unlikely(!cpy_r_r98)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 171, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    CPy_Unreachable();
CPyL67: ;
    cpy_r_r99 = CPyDict_GetItem(cpy_r_groups, cpy_r_r97);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 171, CPyStatic_emitwrapper___globals);
        goto CPyL200;
    }
    if (likely(PyList_Check(cpy_r_r99)))
        cpy_r_r100 = cpy_r_r99;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 171, CPyStatic_emitwrapper___globals, "list", cpy_r_r99);
        goto CPyL200;
    }
    cpy_r_r101 = (CPyPtr)&((PyVarObject *)cpy_r_r100)->ob_size;
    cpy_r_r102 = *(int64_t *)cpy_r_r101;
    CPy_DECREF(cpy_r_r100);
    cpy_r_r103 = cpy_r_r102 << 1;
    cpy_r_r104 = cpy_r_r103 != 0;
    if (!cpy_r_r104) goto CPyL109;
CPyL70: ;
    cpy_r_r105 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r105 == NULL)) {
        goto CPyL202;
    } else
        goto CPyL73;
CPyL71: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r106 = 0;
    if (unlikely(!cpy_r_r106)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 172, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    CPy_Unreachable();
CPyL73: ;
    cpy_r_r107 = CPyDict_GetItem(cpy_r_groups, cpy_r_r105);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 172, CPyStatic_emitwrapper___globals);
        goto CPyL200;
    }
    if (likely(PyList_Check(cpy_r_r107)))
        cpy_r_r108 = cpy_r_r107;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 172, CPyStatic_emitwrapper___globals, "list", cpy_r_r107);
        goto CPyL200;
    }
    cpy_r_r109 = (CPyPtr)&((PyVarObject *)cpy_r_r108)->ob_size;
    cpy_r_r110 = *(int64_t *)cpy_r_r109;
    CPy_DECREF(cpy_r_r108);
    cpy_r_r111 = cpy_r_r110 << 1;
    cpy_r_r112 = cpy_r_r111 != 0;
    if (!cpy_r_r112) goto CPyL85;
    cpy_r_r113 = CPyStatics[7594]; /* '&obj_' */
    cpy_r_r114 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r114 == NULL)) {
        goto CPyL203;
    } else
        goto CPyL79;
CPyL77: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r115 = 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 172, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    CPy_Unreachable();
CPyL79: ;
    cpy_r_r116 = CPyDict_GetItem(cpy_r_groups, cpy_r_r114);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 172, CPyStatic_emitwrapper___globals);
        goto CPyL200;
    }
    if (likely(PyList_Check(cpy_r_r116)))
        cpy_r_r117 = cpy_r_r116;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 172, CPyStatic_emitwrapper___globals, "list", cpy_r_r116);
        goto CPyL200;
    }
    cpy_r_r118 = CPyList_GetItemShortBorrow(cpy_r_r117, 0);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 172, CPyStatic_emitwrapper___globals);
        goto CPyL204;
    }
    if (likely(Py_TYPE(cpy_r_r118) == CPyType_func_ir___RuntimeArg))
        cpy_r_r119 = cpy_r_r118;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 172, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r118);
        goto CPyL204;
    }
    cpy_r_r120 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r119)->_name;
    CPy_INCREF(cpy_r_r120);
    CPy_DECREF(cpy_r_r117);
    cpy_r_r121 = CPyStr_Build(2, cpy_r_r113, cpy_r_r120);
    CPy_DECREF(cpy_r_r120);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 172, CPyStatic_emitwrapper___globals);
        goto CPyL200;
    }
    cpy_r_r122 = cpy_r_r121;
    goto CPyL86;
CPyL85: ;
    cpy_r_r123 = CPyStatics[6879]; /* 'NULL' */
    CPy_INCREF(cpy_r_r123);
    cpy_r_r122 = cpy_r_r123;
CPyL86: ;
    cpy_r_r124 = PyList_New(1);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 172, CPyStatic_emitwrapper___globals);
        goto CPyL205;
    }
    cpy_r_r125 = (CPyPtr)&((PyListObject *)cpy_r_r124)->ob_item;
    cpy_r_r126 = *(CPyPtr *)cpy_r_r125;
    *(PyObject * *)cpy_r_r126 = cpy_r_r122;
    cpy_r_r127 = PyNumber_InPlaceAdd(cpy_r_arg_ptrs, cpy_r_r124);
    CPy_DECREF(cpy_r_arg_ptrs);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r127 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 172, CPyStatic_emitwrapper___globals);
        goto CPyL198;
    }
    if (likely(PyList_Check(cpy_r_r127)))
        cpy_r_r128 = cpy_r_r127;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 172, CPyStatic_emitwrapper___globals, "list", cpy_r_r127);
        goto CPyL198;
    }
    cpy_r_arg_ptrs = cpy_r_r128;
    cpy_r_r129 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r129 == NULL)) {
        goto CPyL206;
    } else
        goto CPyL92;
CPyL90: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r130 = 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 173, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    CPy_Unreachable();
CPyL92: ;
    cpy_r_r131 = CPyDict_GetItem(cpy_r_groups, cpy_r_r129);
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 173, CPyStatic_emitwrapper___globals);
        goto CPyL200;
    }
    if (likely(PyList_Check(cpy_r_r131)))
        cpy_r_r132 = cpy_r_r131;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 173, CPyStatic_emitwrapper___globals, "list", cpy_r_r131);
        goto CPyL200;
    }
    cpy_r_r133 = (CPyPtr)&((PyVarObject *)cpy_r_r132)->ob_size;
    cpy_r_r134 = *(int64_t *)cpy_r_r133;
    CPy_DECREF(cpy_r_r132);
    cpy_r_r135 = cpy_r_r134 << 1;
    cpy_r_r136 = cpy_r_r135 != 0;
    if (!cpy_r_r136) goto CPyL104;
    cpy_r_r137 = CPyStatics[7594]; /* '&obj_' */
    cpy_r_r138 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r138 == NULL)) {
        goto CPyL207;
    } else
        goto CPyL98;
CPyL96: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r139 = 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 173, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    CPy_Unreachable();
CPyL98: ;
    cpy_r_r140 = CPyDict_GetItem(cpy_r_groups, cpy_r_r138);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 173, CPyStatic_emitwrapper___globals);
        goto CPyL200;
    }
    if (likely(PyList_Check(cpy_r_r140)))
        cpy_r_r141 = cpy_r_r140;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 173, CPyStatic_emitwrapper___globals, "list", cpy_r_r140);
        goto CPyL200;
    }
    cpy_r_r142 = CPyList_GetItemShortBorrow(cpy_r_r141, 0);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 173, CPyStatic_emitwrapper___globals);
        goto CPyL208;
    }
    if (likely(Py_TYPE(cpy_r_r142) == CPyType_func_ir___RuntimeArg))
        cpy_r_r143 = cpy_r_r142;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 173, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r142);
        goto CPyL208;
    }
    cpy_r_r144 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r143)->_name;
    CPy_INCREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r141);
    cpy_r_r145 = CPyStr_Build(2, cpy_r_r137, cpy_r_r144);
    CPy_DECREF(cpy_r_r144);
    if (unlikely(cpy_r_r145 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 173, CPyStatic_emitwrapper___globals);
        goto CPyL200;
    }
    cpy_r_r146 = cpy_r_r145;
    goto CPyL105;
CPyL104: ;
    cpy_r_r147 = CPyStatics[6879]; /* 'NULL' */
    CPy_INCREF(cpy_r_r147);
    cpy_r_r146 = cpy_r_r147;
CPyL105: ;
    cpy_r_r148 = PyList_New(1);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 173, CPyStatic_emitwrapper___globals);
        goto CPyL209;
    }
    cpy_r_r149 = (CPyPtr)&((PyListObject *)cpy_r_r148)->ob_item;
    cpy_r_r150 = *(CPyPtr *)cpy_r_r149;
    *(PyObject * *)cpy_r_r150 = cpy_r_r146;
    cpy_r_r151 = PyNumber_InPlaceAdd(cpy_r_arg_ptrs, cpy_r_r148);
    CPy_DECREF(cpy_r_arg_ptrs);
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 173, CPyStatic_emitwrapper___globals);
        goto CPyL198;
    }
    if (likely(PyList_Check(cpy_r_r151)))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 173, CPyStatic_emitwrapper___globals, "list", cpy_r_r151);
        goto CPyL198;
    }
    cpy_r_arg_ptrs = cpy_r_r152;
CPyL109: ;
    cpy_r_r153 = (CPyPtr)&((PyVarObject *)cpy_r_reordered_args)->ob_size;
    cpy_r_r154 = *(int64_t *)cpy_r_r153;
    cpy_r_r155 = PyList_New(cpy_r_r154);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 174, CPyStatic_emitwrapper___globals);
        goto CPyL200;
    }
    cpy_r_r156 = 0;
CPyL111: ;
    cpy_r_r157 = (CPyPtr)&((PyVarObject *)cpy_r_reordered_args)->ob_size;
    cpy_r_r158 = *(int64_t *)cpy_r_r157;
    cpy_r_r159 = cpy_r_r158 << 1;
    cpy_r_r160 = (Py_ssize_t)cpy_r_r156 < (Py_ssize_t)cpy_r_r159;
    if (!cpy_r_r160) goto CPyL210;
    cpy_r_r161 = CPyList_GetItemUnsafe(cpy_r_reordered_args, cpy_r_r156);
    if (likely(Py_TYPE(cpy_r_r161) == CPyType_func_ir___RuntimeArg))
        cpy_r_r162 = cpy_r_r161;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 174, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r161);
        goto CPyL211;
    }
    cpy_r_arg_3 = cpy_r_r162;
    cpy_r_r163 = CPyStatics[7594]; /* '&obj_' */
    cpy_r_r164 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg_3)->_name;
    CPy_INCREF(cpy_r_r164);
    CPy_DECREF(cpy_r_arg_3);
    cpy_r_r165 = CPyStr_Build(2, cpy_r_r163, cpy_r_r164);
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 174, CPyStatic_emitwrapper___globals);
        goto CPyL211;
    }
    cpy_r_r166 = CPyList_SetItemUnsafe(cpy_r_r155, cpy_r_r156, cpy_r_r165);
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 174, CPyStatic_emitwrapper___globals);
        goto CPyL211;
    }
    cpy_r_r167 = cpy_r_r156 + 2;
    cpy_r_r156 = cpy_r_r167;
    goto CPyL111;
CPyL116: ;
    cpy_r_r168 = PyNumber_InPlaceAdd(cpy_r_arg_ptrs, cpy_r_r155);
    CPy_DECREF(cpy_r_arg_ptrs);
    CPy_DECREF(cpy_r_r155);
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 174, CPyStatic_emitwrapper___globals);
        goto CPyL212;
    }
    if (likely(PyList_Check(cpy_r_r168)))
        cpy_r_r169 = cpy_r_r168;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 174, CPyStatic_emitwrapper___globals, "list", cpy_r_r168);
        goto CPyL212;
    }
    cpy_r_arg_ptrs = cpy_r_r169;
    cpy_r_r170 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 176, CPyStatic_emitwrapper___globals);
        goto CPyL213;
    }
CPyL119: ;
    cpy_r_r171 = CPyStatics[706]; /* '__call__' */
    cpy_r_r172 = PyUnicode_Compare(cpy_r_r170, cpy_r_r171);
    CPy_DECREF(cpy_r_r170);
    cpy_r_r173 = cpy_r_r172 == -1;
    if (!cpy_r_r173) goto CPyL122;
    cpy_r_r174 = PyErr_Occurred();
    cpy_r_r175 = cpy_r_r174 != NULL;
    if (!cpy_r_r175) goto CPyL122;
    cpy_r_r176 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r176)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 176, CPyStatic_emitwrapper___globals);
        goto CPyL213;
    }
CPyL122: ;
    cpy_r_r177 = cpy_r_r172 == 0;
    if (!cpy_r_r177) goto CPyL126;
    cpy_r_r178 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_capi_version;
    CPyTagged_INCREF(cpy_r_r178.f0);
    CPyTagged_INCREF(cpy_r_r178.f1);
    cpy_r_r179 = CPyDef_mypyc___common___use_vectorcall(cpy_r_r178);
    CPyTagged_DECREF(cpy_r_r178.f0);
    CPyTagged_DECREF(cpy_r_r178.f1);
    if (unlikely(cpy_r_r179 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 176, CPyStatic_emitwrapper___globals);
        goto CPyL213;
    }
    if (!cpy_r_r179) goto CPyL126;
    cpy_r_r180 = CPyStatics[7595]; /* 'PyVectorcall_NARGS(nargs)' */
    CPy_INCREF(cpy_r_r180);
    cpy_r_nargs = cpy_r_r180;
    goto CPyL127;
CPyL126: ;
    cpy_r_r181 = CPyStatics[1812]; /* 'nargs' */
    CPy_INCREF(cpy_r_r181);
    cpy_r_nargs = cpy_r_r181;
CPyL127: ;
    cpy_r_r182 = CPyStatics[7596]; /* 'CPyArg_ParseStackAndKeywords' */
    CPy_INCREF(cpy_r_r182);
    cpy_r_parse_fn = cpy_r_r182;
    cpy_r_r183 = (CPyPtr)&((PyVarObject *)cpy_r_real_args)->ob_size;
    cpy_r_r184 = *(int64_t *)cpy_r_r183;
    cpy_r_r185 = cpy_r_r184 << 1;
    cpy_r_r186 = cpy_r_r185 != 0;
    if (cpy_r_r186) {
        goto CPyL129;
    } else
        goto CPyL214;
CPyL128: ;
    cpy_r_r187 = CPyStatics[7597]; /* 'CPyArg_ParseStackAndKeywordsNoArgs' */
    CPy_INCREF(cpy_r_r187);
    cpy_r_parse_fn = cpy_r_r187;
    goto CPyL149;
CPyL129: ;
    cpy_r_r188 = (CPyPtr)&((PyVarObject *)cpy_r_real_args)->ob_size;
    cpy_r_r189 = *(int64_t *)cpy_r_r188;
    cpy_r_r190 = cpy_r_r189 << 1;
    cpy_r_r191 = cpy_r_r190 == 2;
    if (!cpy_r_r191) goto CPyL137;
    cpy_r_r192 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r192 == NULL)) {
        goto CPyL215;
    } else
        goto CPyL133;
CPyL131: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r193 = 0;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 185, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    CPy_Unreachable();
CPyL133: ;
    cpy_r_r194 = CPyDict_GetItem(cpy_r_groups, cpy_r_r192);
    if (unlikely(cpy_r_r194 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 185, CPyStatic_emitwrapper___globals);
        goto CPyL216;
    }
    if (likely(PyList_Check(cpy_r_r194)))
        cpy_r_r195 = cpy_r_r194;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 185, CPyStatic_emitwrapper___globals, "list", cpy_r_r194);
        goto CPyL216;
    }
    cpy_r_r196 = (CPyPtr)&((PyVarObject *)cpy_r_r195)->ob_size;
    cpy_r_r197 = *(int64_t *)cpy_r_r196;
    CPy_DECREF(cpy_r_r195);
    cpy_r_r198 = cpy_r_r197 << 1;
    cpy_r_r199 = cpy_r_r198 == 2;
    if (cpy_r_r199) {
        goto CPyL217;
    } else
        goto CPyL137;
CPyL136: ;
    cpy_r_r200 = CPyStatics[7598]; /* 'CPyArg_ParseStackAndKeywordsOneArg' */
    CPy_INCREF(cpy_r_r200);
    cpy_r_parse_fn = cpy_r_r200;
    goto CPyL149;
CPyL137: ;
    cpy_r_r201 = (CPyPtr)&((PyVarObject *)cpy_r_real_args)->ob_size;
    cpy_r_r202 = *(int64_t *)cpy_r_r201;
    CPy_DECREF(cpy_r_real_args);
    cpy_r_r203 = cpy_r_r202 << 1;
    cpy_r_r204 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r204 == NULL)) {
        goto CPyL218;
    } else
        goto CPyL140;
CPyL138: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r205 = 0;
    if (unlikely(!cpy_r_r205)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 188, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    CPy_Unreachable();
CPyL140: ;
    cpy_r_r206 = CPyDict_GetItem(cpy_r_groups, cpy_r_r204);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 188, CPyStatic_emitwrapper___globals);
        goto CPyL219;
    }
    if (likely(PyList_Check(cpy_r_r206)))
        cpy_r_r207 = cpy_r_r206;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 188, CPyStatic_emitwrapper___globals, "list", cpy_r_r206);
        goto CPyL219;
    }
    cpy_r_r208 = (CPyPtr)&((PyVarObject *)cpy_r_r207)->ob_size;
    cpy_r_r209 = *(int64_t *)cpy_r_r208;
    CPy_DECREF(cpy_r_r207);
    cpy_r_r210 = cpy_r_r209 << 1;
    cpy_r_r211 = CPyStatic_nodes___ARG_OPT;
    if (unlikely(cpy_r_r211 == NULL)) {
        goto CPyL220;
    } else
        goto CPyL145;
CPyL143: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_OPT\" was not set");
    cpy_r_r212 = 0;
    if (unlikely(!cpy_r_r212)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 188, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    CPy_Unreachable();
CPyL145: ;
    cpy_r_r213 = CPyDict_GetItem(cpy_r_groups, cpy_r_r211);
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 188, CPyStatic_emitwrapper___globals);
        goto CPyL219;
    }
    if (likely(PyList_Check(cpy_r_r213)))
        cpy_r_r214 = cpy_r_r213;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 188, CPyStatic_emitwrapper___globals, "list", cpy_r_r213);
        goto CPyL219;
    }
    cpy_r_r215 = (CPyPtr)&((PyVarObject *)cpy_r_r214)->ob_size;
    cpy_r_r216 = *(int64_t *)cpy_r_r215;
    CPy_DECREF(cpy_r_r214);
    cpy_r_r217 = cpy_r_r216 << 1;
    cpy_r_r218 = CPyTagged_Add(cpy_r_r210, cpy_r_r217);
    cpy_r_r219 = cpy_r_r203 == cpy_r_r218;
    CPyTagged_DECREF(cpy_r_r218);
    if (cpy_r_r219) {
        goto CPyL221;
    } else
        goto CPyL149;
CPyL148: ;
    cpy_r_r220 = CPyStatics[7599]; /* 'CPyArg_ParseStackAndKeywordsSimple' */
    CPy_INCREF(cpy_r_r220);
    cpy_r_parse_fn = cpy_r_r220;
CPyL149: ;
    cpy_r_r221 = CPyStatics[163]; /* '' */
    cpy_r_r222 = (CPyPtr)&((PyVarObject *)cpy_r_arg_ptrs)->ob_size;
    cpy_r_r223 = *(int64_t *)cpy_r_r222;
    cpy_r_r224 = PyList_New(cpy_r_r223);
    if (unlikely(cpy_r_r224 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 193, CPyStatic_emitwrapper___globals);
        goto CPyL219;
    }
    cpy_r_r225 = 0;
CPyL151: ;
    cpy_r_r226 = (CPyPtr)&((PyVarObject *)cpy_r_arg_ptrs)->ob_size;
    cpy_r_r227 = *(int64_t *)cpy_r_r226;
    cpy_r_r228 = cpy_r_r227 << 1;
    cpy_r_r229 = (Py_ssize_t)cpy_r_r225 < (Py_ssize_t)cpy_r_r228;
    if (!cpy_r_r229) goto CPyL222;
    cpy_r_r230 = CPyList_GetItemUnsafe(cpy_r_arg_ptrs, cpy_r_r225);
    if (likely(PyUnicode_Check(cpy_r_r230)))
        cpy_r_r231 = cpy_r_r230;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 193, CPyStatic_emitwrapper___globals, "str", cpy_r_r230);
        goto CPyL223;
    }
    cpy_r_n = cpy_r_r231;
    cpy_r_r232 = CPyStatics[71]; /* ', ' */
    cpy_r_r233 = PyUnicode_Concat(cpy_r_r232, cpy_r_n);
    CPy_DECREF(cpy_r_n);
    if (unlikely(cpy_r_r233 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 193, CPyStatic_emitwrapper___globals);
        goto CPyL223;
    }
    cpy_r_r234 = CPyList_SetItemUnsafe(cpy_r_r224, cpy_r_r225, cpy_r_r233);
    if (unlikely(!cpy_r_r234)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 193, CPyStatic_emitwrapper___globals);
        goto CPyL223;
    }
    cpy_r_r235 = cpy_r_r225 + 2;
    cpy_r_r225 = cpy_r_r235;
    goto CPyL151;
CPyL156: ;
    cpy_r_r236 = PyUnicode_Join(cpy_r_r221, cpy_r_r224);
    CPy_DECREF(cpy_r_r224);
    if (unlikely(cpy_r_r236 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 193, CPyStatic_emitwrapper___globals);
        goto CPyL224;
    }
    cpy_r_r237 = CPyStatics[7600]; /* 'if (!' */
    cpy_r_r238 = CPyStatics[7601]; /* '(args, ' */
    cpy_r_r239 = CPyStatics[7602]; /* ', kwnames, &parser' */
    cpy_r_r240 = CPyStatics[6893]; /* ')) {' */
    cpy_r_r241 = CPyStr_Build(7, cpy_r_r237, cpy_r_parse_fn, cpy_r_r238, cpy_r_nargs, cpy_r_r239, cpy_r_r236, cpy_r_r240);
    CPy_DECREF(cpy_r_parse_fn);
    CPy_DECREF(cpy_r_nargs);
    CPy_DECREF(cpy_r_r236);
    if (unlikely(cpy_r_r241 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 192, CPyStatic_emitwrapper___globals);
        goto CPyL225;
    }
    cpy_r_r242 = CPyStatics[7171]; /* 'return NULL;' */
    cpy_r_r243 = CPyStatics[1406]; /* '}' */
    cpy_r_r244 = PyTuple_Pack(3, cpy_r_r241, cpy_r_r242, cpy_r_r243);
    CPy_DECREF(cpy_r_r241);
    if (unlikely(cpy_r_r244 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 191, CPyStatic_emitwrapper___globals);
        goto CPyL225;
    }
    cpy_r_r245 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r244);
    CPy_DECREF(cpy_r_r244);
    if (unlikely(cpy_r_r245 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 191, CPyStatic_emitwrapper___globals);
        goto CPyL225;
    }
    cpy_r_r246 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 5, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* sig */
    if (unlikely(cpy_r_r246 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 198, CPyStatic_emitwrapper___globals);
        goto CPyL225;
    }
CPyL161: ;
    cpy_r_r247 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r246)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r247);
    CPy_DECREF(cpy_r_r246);
    cpy_r_r248 = 0;
    CPyTagged_INCREF(cpy_r_r248);
    cpy_r_i = cpy_r_r248;
CPyL162: ;
    cpy_r_r249 = cpy_r_r248 & 1;
    cpy_r_r250 = cpy_r_r249 == 0;
    cpy_r_r251 = cpy_r_r247 & 1;
    cpy_r_r252 = cpy_r_r251 == 0;
    cpy_r_r253 = cpy_r_r250 & cpy_r_r252;
    if (!cpy_r_r253) goto CPyL164;
    cpy_r_r254 = (Py_ssize_t)cpy_r_r248 < (Py_ssize_t)cpy_r_r247;
    cpy_r_r255 = cpy_r_r254;
    goto CPyL165;
CPyL164: ;
    cpy_r_r256 = CPyTagged_IsLt_(cpy_r_r248, cpy_r_r247);
    cpy_r_r255 = cpy_r_r256;
CPyL165: ;
    if (!cpy_r_r255) goto CPyL226;
    cpy_r_r257 = CPyDef_mypyc___common___bitmap_name(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r257 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 199, CPyStatic_emitwrapper___globals);
        goto CPyL227;
    }
    cpy_r_name = cpy_r_r257;
    cpy_r_r258 = CPyStatics[7138]; /* 'uint32_t' */
    cpy_r_r259 = CPyStatics[295]; /* ' ' */
    cpy_r_r260 = CPyStatics[7167]; /* ' = 0;' */
    cpy_r_r261 = CPyStr_Build(4, cpy_r_r258, cpy_r_r259, cpy_r_name, cpy_r_r260);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r261 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 200, CPyStatic_emitwrapper___globals);
        goto CPyL227;
    }
    cpy_r_r262 = NULL;
    cpy_r_r263 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r261, cpy_r_r262);
    CPy_DECREF(cpy_r_r261);
    if (unlikely(cpy_r_r263 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 200, CPyStatic_emitwrapper___globals);
        goto CPyL227;
    }
    cpy_r_r264 = CPyTagged_Add(cpy_r_r248, 2);
    CPyTagged_DECREF(cpy_r_r248);
    CPyTagged_INCREF(cpy_r_r264);
    cpy_r_r248 = cpy_r_r264;
    cpy_r_i = cpy_r_r264;
    goto CPyL162;
CPyL170: ;
    cpy_r_r265 = CPyDef_emitwrapper___generate_traceback_code(cpy_r_fn, cpy_r_emitter, cpy_r_source_path, cpy_r_module_name);
    if (unlikely(cpy_r_r265 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 201, CPyStatic_emitwrapper___globals);
        goto CPyL225;
    }
    cpy_r_traceback_code = cpy_r_r265;
    cpy_r_r266 = CPyStatic_nodes___ARG_OPT;
    if (unlikely(cpy_r_r266 == NULL)) {
        goto CPyL228;
    } else
        goto CPyL174;
CPyL172: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_OPT\" was not set");
    cpy_r_r267 = 0;
    if (unlikely(!cpy_r_r267)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 205, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    CPy_Unreachable();
CPyL174: ;
    cpy_r_r268 = CPyDict_GetItem(cpy_r_groups, cpy_r_r266);
    if (unlikely(cpy_r_r268 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 205, CPyStatic_emitwrapper___globals);
        goto CPyL229;
    }
    if (likely(PyList_Check(cpy_r_r268)))
        cpy_r_r269 = cpy_r_r268;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 205, CPyStatic_emitwrapper___globals, "list", cpy_r_r268);
        goto CPyL229;
    }
    cpy_r_r270 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (unlikely(cpy_r_r270 == NULL)) {
        goto CPyL230;
    } else
        goto CPyL179;
CPyL177: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r271 = 0;
    if (unlikely(!cpy_r_r271)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 205, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    CPy_Unreachable();
CPyL179: ;
    cpy_r_r272 = CPyDict_GetItem(cpy_r_groups, cpy_r_r270);
    CPy_DECREF(cpy_r_groups);
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 205, CPyStatic_emitwrapper___globals);
        goto CPyL231;
    }
    if (likely(PyList_Check(cpy_r_r272)))
        cpy_r_r273 = cpy_r_r272;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 205, CPyStatic_emitwrapper___globals, "list", cpy_r_r272);
        goto CPyL231;
    }
    cpy_r_r274 = PyNumber_Add(cpy_r_r269, cpy_r_r273);
    CPy_DECREF(cpy_r_r269);
    CPy_DECREF(cpy_r_r273);
    if (unlikely(cpy_r_r274 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 205, CPyStatic_emitwrapper___globals);
        goto CPyL232;
    }
    if (likely(PyList_Check(cpy_r_r274)))
        cpy_r_r275 = cpy_r_r274;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 205, CPyStatic_emitwrapper___globals, "list", cpy_r_r274);
        goto CPyL232;
    }
    cpy_r_r276 = NULL;
    cpy_r_r277 = CPyDef_emitwrapper___generate_wrapper_core(cpy_r_fn, cpy_r_emitter, cpy_r_r275, cpy_r_r276, cpy_r_cleanups, cpy_r_traceback_code);
    CPy_DECREF(cpy_r_r275);
    CPy_DECREF(cpy_r_cleanups);
    CPy_DECREF(cpy_r_traceback_code);
    if (unlikely(cpy_r_r277 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 202, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    cpy_r_r278 = CPyStatics[1406]; /* '}' */
    cpy_r_r279 = NULL;
    cpy_r_r280 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r278, cpy_r_r279);
    if (unlikely(cpy_r_r280 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 210, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    return 1;
CPyL186: ;
    cpy_r_r281 = 2;
    return cpy_r_r281;
CPyL187: ;
    CPy_DecRef(cpy_r_real_args);
    goto CPyL186;
CPyL188: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL20;
CPyL189: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    goto CPyL186;
CPyL190: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    goto CPyL186;
CPyL191: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_r51);
    goto CPyL186;
CPyL192: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    goto CPyL39;
CPyL193: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_r65);
    goto CPyL44;
CPyL194: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_r65);
    goto CPyL186;
CPyL195: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_r71);
    goto CPyL186;
CPyL196: ;
    CPy_DECREF(cpy_r_r71);
    goto CPyL57;
CPyL197: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r74);
    goto CPyL186;
CPyL198: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    goto CPyL186;
CPyL199: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    goto CPyL59;
CPyL200: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    goto CPyL186;
CPyL201: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    goto CPyL65;
CPyL202: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    goto CPyL71;
CPyL203: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    goto CPyL77;
CPyL204: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_r117);
    goto CPyL186;
CPyL205: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_r122);
    goto CPyL186;
CPyL206: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    goto CPyL90;
CPyL207: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    goto CPyL96;
CPyL208: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_r141);
    goto CPyL186;
CPyL209: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_r146);
    goto CPyL186;
CPyL210: ;
    CPy_DECREF(cpy_r_reordered_args);
    goto CPyL116;
CPyL211: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_r155);
    goto CPyL186;
CPyL212: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    goto CPyL186;
CPyL213: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    goto CPyL186;
CPyL214: ;
    CPy_DECREF(cpy_r_real_args);
    CPy_DECREF(cpy_r_parse_fn);
    goto CPyL128;
CPyL215: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_nargs);
    CPy_DecRef(cpy_r_parse_fn);
    goto CPyL131;
CPyL216: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_nargs);
    CPy_DecRef(cpy_r_parse_fn);
    goto CPyL186;
CPyL217: ;
    CPy_DECREF(cpy_r_real_args);
    CPy_DECREF(cpy_r_parse_fn);
    goto CPyL136;
CPyL218: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_nargs);
    CPy_DecRef(cpy_r_parse_fn);
    goto CPyL138;
CPyL219: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_nargs);
    CPy_DecRef(cpy_r_parse_fn);
    goto CPyL186;
CPyL220: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_nargs);
    CPy_DecRef(cpy_r_parse_fn);
    goto CPyL143;
CPyL221: ;
    CPy_DECREF(cpy_r_parse_fn);
    goto CPyL148;
CPyL222: ;
    CPy_DECREF(cpy_r_arg_ptrs);
    goto CPyL156;
CPyL223: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_nargs);
    CPy_DecRef(cpy_r_parse_fn);
    CPy_DecRef(cpy_r_r224);
    goto CPyL186;
CPyL224: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_nargs);
    CPy_DecRef(cpy_r_parse_fn);
    goto CPyL186;
CPyL225: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    goto CPyL186;
CPyL226: ;
    CPyTagged_DECREF(cpy_r_r247);
    CPyTagged_DECREF(cpy_r_r248);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL170;
CPyL227: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPyTagged_DecRef(cpy_r_r247);
    CPyTagged_DecRef(cpy_r_r248);
    goto CPyL186;
CPyL228: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_traceback_code);
    goto CPyL172;
CPyL229: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_traceback_code);
    goto CPyL186;
CPyL230: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_traceback_code);
    CPy_DecRef(cpy_r_r269);
    goto CPyL177;
CPyL231: ;
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_traceback_code);
    CPy_DecRef(cpy_r_r269);
    goto CPyL186;
CPyL232: ;
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_traceback_code);
    goto CPyL186;
}

PyObject *CPyPy_emitwrapper___generate_wrapper_function(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "emitter", "source_path", "module_name", 0};
    static CPyArg_Parser parser = {"OOOO:generate_wrapper_function", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_emitter;
    PyObject *obj_source_path;
    PyObject *obj_module_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_emitter, &obj_source_path, &obj_module_name)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *arg_source_path;
    if (likely(PyUnicode_Check(obj_source_path)))
        arg_source_path = obj_source_path;
    else {
        CPy_TypeError("str", obj_source_path); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    char retval = CPyDef_emitwrapper___generate_wrapper_function(arg_fn, arg_emitter, arg_source_path, arg_module_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_function", 134, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___legacy_wrapper_function_header(PyObject *cpy_r_fn, PyObject *cpy_r_names) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject **cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    cpy_r_r0 = CPyStatics[7603]; /* ('PyObject *{prefix}{name}(PyObject *self, PyObject '
                                    '*args, PyObject *kw)') */
    cpy_r_r1 = CPyStatics[7069]; /* 'CPyPy_' */
    cpy_r_r2 = CPyDef_func_ir___FuncIR___cname(cpy_r_fn, cpy_r_names);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "legacy_wrapper_function_header", 223, CPyStatic_emitwrapper___globals);
        goto CPyL4;
    }
    cpy_r_r3 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r4[3] = {cpy_r_r0, cpy_r_r1, cpy_r_r2};
    cpy_r_r5 = (PyObject **)&cpy_r_r4;
    cpy_r_r6 = CPyStatics[9989]; /* ('prefix', 'name') */
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r5, 9223372036854775809ULL, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "legacy_wrapper_function_header", 222, CPyStatic_emitwrapper___globals);
        goto CPyL5;
    }
    CPy_DECREF(cpy_r_r2);
    if (likely(PyUnicode_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "legacy_wrapper_function_header", 222, CPyStatic_emitwrapper___globals, "str", cpy_r_r7);
        goto CPyL4;
    }
    return cpy_r_r8;
CPyL4: ;
    cpy_r_r9 = NULL;
    return cpy_r_r9;
CPyL5: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL4;
}

PyObject *CPyPy_emitwrapper___legacy_wrapper_function_header(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "names", 0};
    static CPyArg_Parser parser = {"OO:legacy_wrapper_function_header", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_names;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_names)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_names;
    if (likely(Py_TYPE(obj_names) == CPyType_namegen___NameGenerator))
        arg_names = obj_names;
    else {
        CPy_TypeError("mypyc.namegen.NameGenerator", obj_names); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___legacy_wrapper_function_header(arg_fn, arg_names);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "legacy_wrapper_function_header", 221, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___generate_legacy_wrapper_function(PyObject *cpy_r_fn, PyObject *cpy_r_emitter, PyObject *cpy_r_source_path, PyObject *cpy_r_module_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_real_args;
    PyObject *cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_groups;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_reordered_args;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyPtr cpy_r_r38;
    int64_t cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyPtr cpy_r_r65;
    int64_t cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyTagged cpy_r_r68;
    CPyPtr cpy_r_r69;
    int64_t cpy_r_r70;
    CPyTagged cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_arg_2;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    CPyTagged cpy_r_r80;
    PyObject *cpy_r_cleanups;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_arg_ptrs;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    CPyPtr cpy_r_r86;
    int64_t cpy_r_r87;
    CPyTagged cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    CPyPtr cpy_r_r94;
    int64_t cpy_r_r95;
    CPyTagged cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    CPyPtr cpy_r_r102;
    int64_t cpy_r_r103;
    CPyTagged cpy_r_r104;
    char cpy_r_r105;
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
    PyObject *cpy_r_r117;
    CPyPtr cpy_r_r118;
    CPyPtr cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    CPyPtr cpy_r_r126;
    int64_t cpy_r_r127;
    CPyTagged cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    char cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    CPyPtr cpy_r_r142;
    CPyPtr cpy_r_r143;
    PyObject *cpy_r_r144;
    PyObject *cpy_r_r145;
    CPyPtr cpy_r_r146;
    int64_t cpy_r_r147;
    PyObject *cpy_r_r148;
    CPyTagged cpy_r_r149;
    CPyPtr cpy_r_r150;
    int64_t cpy_r_r151;
    CPyTagged cpy_r_r152;
    char cpy_r_r153;
    PyObject *cpy_r_r154;
    PyObject *cpy_r_r155;
    PyObject *cpy_r_arg_3;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    char cpy_r_r159;
    CPyTagged cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    CPyPtr cpy_r_r167;
    int64_t cpy_r_r168;
    PyObject *cpy_r_r169;
    CPyTagged cpy_r_r170;
    CPyPtr cpy_r_r171;
    int64_t cpy_r_r172;
    CPyTagged cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_n;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    char cpy_r_r179;
    CPyTagged cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    CPyTagged cpy_r_r192;
    CPyTagged cpy_r_r193;
    CPyTagged cpy_r_i;
    int64_t cpy_r_r194;
    char cpy_r_r195;
    int64_t cpy_r_r196;
    char cpy_r_r197;
    char cpy_r_r198;
    char cpy_r_r199;
    char cpy_r_r200;
    char cpy_r_r201;
    PyObject *cpy_r_r202;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    char cpy_r_r208;
    CPyTagged cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_traceback_code;
    PyObject *cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    char cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    char cpy_r_r225;
    char cpy_r_r226;
    cpy_r_r0 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDef_emitwrapper___legacy_wrapper_function_header(cpy_r_fn, cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 235, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    cpy_r_r2 = CPyStatics[6884]; /* ' {' */
    cpy_r_r3 = CPyStr_Build(2, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 235, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    cpy_r_r4 = NULL;
    cpy_r_r5 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 235, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    cpy_r_r6 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 2, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* args */
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 238, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
CPyL4: ;
    cpy_r_r7 = PySequence_List(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 238, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    cpy_r_real_args = cpy_r_r7;
    cpy_r_r8 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 5, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* sig */
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 239, CPyStatic_emitwrapper___globals);
        goto CPyL154;
    }
CPyL6: ;
    cpy_r_r9 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r8)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 != 0;
    CPyTagged_DECREF(cpy_r_r9);
    if (!cpy_r_r10) goto CPyL11;
    cpy_r_r11 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 5, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* sig */
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 240, CPyStatic_emitwrapper___globals);
        goto CPyL154;
    }
CPyL8: ;
    cpy_r_r12 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r11)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = CPyTagged_Negate(cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r12);
    cpy_r_r14 = CPyList_GetSlice(cpy_r_real_args, 0, cpy_r_r13);
    CPy_DECREF(cpy_r_real_args);
    CPyTagged_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 240, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    if (likely(PyList_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 240, CPyStatic_emitwrapper___globals, "list", cpy_r_r14);
        goto CPyL153;
    }
    cpy_r_real_args = cpy_r_r15;
CPyL11: ;
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 4, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* class_name */
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 241, CPyStatic_emitwrapper___globals);
        goto CPyL154;
    }
CPyL12: ;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_r16 != cpy_r_r17;
    if (!cpy_r_r18) goto CPyL155;
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r19 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 241, CPyStatic_emitwrapper___globals, "str", cpy_r_r16);
        goto CPyL154;
    }
    cpy_r_r20 = CPyStr_IsTrue(cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (!cpy_r_r20) goto CPyL20;
    cpy_r_r21 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_decl;
    cpy_r_r22 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r21)->_kind;
    cpy_r_r23 = cpy_r_r22 == 2;
    if (cpy_r_r23) goto CPyL20;
    cpy_r_r24 = CPyList_Pop(cpy_r_real_args, 0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 242, CPyStatic_emitwrapper___globals);
        goto CPyL154;
    }
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_func_ir___RuntimeArg))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 242, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r24);
        goto CPyL154;
    }
    cpy_r_arg = cpy_r_r25;
    cpy_r_r26 = CPyStatics[7588]; /* 'PyObject *obj_' */
    cpy_r_r27 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_name;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r28 = CPyStatics[7589]; /* ' = self;' */
    cpy_r_r29 = CPyStr_Build(3, cpy_r_r26, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 243, CPyStatic_emitwrapper___globals);
        goto CPyL154;
    }
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 243, CPyStatic_emitwrapper___globals);
        goto CPyL154;
    }
CPyL20: ;
    cpy_r_r32 = CPyDef_emitwrapper___make_arg_groups(cpy_r_real_args);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 248, CPyStatic_emitwrapper___globals);
        goto CPyL154;
    }
    cpy_r_groups = cpy_r_r32;
    cpy_r_r33 = CPyDef_emitwrapper___reorder_arg_groups(cpy_r_groups);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 249, CPyStatic_emitwrapper___globals);
        goto CPyL156;
    }
    cpy_r_reordered_args = cpy_r_r33;
    cpy_r_r34 = CPyDef_emitwrapper___make_static_kwlist(cpy_r_reordered_args);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 251, CPyStatic_emitwrapper___globals);
        goto CPyL157;
    }
    cpy_r_r35 = NULL;
    cpy_r_r36 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 251, CPyStatic_emitwrapper___globals);
        goto CPyL157;
    }
    cpy_r_r37 = 0;
CPyL25: ;
    cpy_r_r38 = (CPyPtr)&((PyVarObject *)cpy_r_real_args)->ob_size;
    cpy_r_r39 = *(int64_t *)cpy_r_r38;
    cpy_r_r40 = cpy_r_r39 << 1;
    cpy_r_r41 = (Py_ssize_t)cpy_r_r37 < (Py_ssize_t)cpy_r_r40;
    if (!cpy_r_r41) goto CPyL158;
    cpy_r_r42 = CPyList_GetItemUnsafe(cpy_r_real_args, cpy_r_r37);
    if (likely(Py_TYPE(cpy_r_r42) == CPyType_func_ir___RuntimeArg))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 252, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r42);
        goto CPyL157;
    }
    cpy_r_arg = cpy_r_r43;
    cpy_r_r44 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_name;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = CPY_GET_ATTR(cpy_r_arg, CPyType_func_ir___RuntimeArg, 1, mypyc___ir___func_ir___RuntimeArgObject, char); /* optional */
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 254, CPyStatic_emitwrapper___globals);
        goto CPyL159;
    }
CPyL28: ;
    if (!cpy_r_r45) goto CPyL30;
CPyL29: ;
    cpy_r_r46 = CPyStatics[7592]; /* ' = NULL' */
    CPy_INCREF(cpy_r_r46);
    cpy_r_r47 = cpy_r_r46;
    goto CPyL31;
CPyL30: ;
    cpy_r_r48 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r48);
    cpy_r_r47 = cpy_r_r48;
CPyL31: ;
    cpy_r_r49 = CPyStatics[7588]; /* 'PyObject *obj_' */
    cpy_r_r50 = CPyStatics[6886]; /* ';' */
    cpy_r_r51 = CPyStr_Build(4, cpy_r_r49, cpy_r_r44, cpy_r_r47, cpy_r_r50);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 254, CPyStatic_emitwrapper___globals);
        goto CPyL157;
    }
    cpy_r_r52 = NULL;
    cpy_r_r53 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r51, cpy_r_r52);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 253, CPyStatic_emitwrapper___globals);
        goto CPyL157;
    }
    cpy_r_r54 = cpy_r_r37 + 2;
    cpy_r_r37 = cpy_r_r54;
    goto CPyL25;
CPyL34: ;
    cpy_r_r55 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r55 == NULL)) {
        goto CPyL160;
    } else
        goto CPyL37;
CPyL35: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r56 = 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 257, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r57 = CPyDict_GetItem(cpy_r_groups, cpy_r_r55);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 257, CPyStatic_emitwrapper___globals);
        goto CPyL161;
    }
    if (likely(PyList_Check(cpy_r_r57)))
        cpy_r_r58 = cpy_r_r57;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 257, CPyStatic_emitwrapper___globals, "list", cpy_r_r57);
        goto CPyL161;
    }
    cpy_r_r59 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r59 == NULL)) {
        goto CPyL162;
    } else
        goto CPyL42;
CPyL40: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r60 = 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 257, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    CPy_Unreachable();
CPyL42: ;
    cpy_r_r61 = CPyDict_GetItem(cpy_r_groups, cpy_r_r59);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 257, CPyStatic_emitwrapper___globals);
        goto CPyL163;
    }
    if (likely(PyList_Check(cpy_r_r61)))
        cpy_r_r62 = cpy_r_r61;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 257, CPyStatic_emitwrapper___globals, "list", cpy_r_r61);
        goto CPyL163;
    }
    cpy_r_r63 = PyNumber_Add(cpy_r_r58, cpy_r_r62);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 257, CPyStatic_emitwrapper___globals);
        goto CPyL161;
    }
    if (likely(PyList_Check(cpy_r_r63)))
        cpy_r_r64 = cpy_r_r63;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 257, CPyStatic_emitwrapper___globals, "list", cpy_r_r63);
        goto CPyL161;
    }
    cpy_r_r65 = (CPyPtr)&((PyVarObject *)cpy_r_r64)->ob_size;
    cpy_r_r66 = *(int64_t *)cpy_r_r65;
    cpy_r_r67 = PyList_New(cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 257, CPyStatic_emitwrapper___globals);
        goto CPyL164;
    }
    cpy_r_r68 = 0;
CPyL48: ;
    cpy_r_r69 = (CPyPtr)&((PyVarObject *)cpy_r_r64)->ob_size;
    cpy_r_r70 = *(int64_t *)cpy_r_r69;
    cpy_r_r71 = cpy_r_r70 << 1;
    cpy_r_r72 = (Py_ssize_t)cpy_r_r68 < (Py_ssize_t)cpy_r_r71;
    if (!cpy_r_r72) goto CPyL165;
    cpy_r_r73 = CPyList_GetItemUnsafe(cpy_r_r64, cpy_r_r68);
    if (likely(Py_TYPE(cpy_r_r73) == CPyType_func_ir___RuntimeArg))
        cpy_r_r74 = cpy_r_r73;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 257, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r73);
        goto CPyL166;
    }
    cpy_r_arg_2 = cpy_r_r74;
    cpy_r_r75 = CPyStatics[7593]; /* 'CPy_DECREF(obj_' */
    cpy_r_r76 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg_2)->_name;
    CPy_INCREF(cpy_r_r76);
    CPy_DECREF(cpy_r_arg_2);
    cpy_r_r77 = CPyStatics[6872]; /* ');' */
    cpy_r_r78 = CPyStr_Build(3, cpy_r_r75, cpy_r_r76, cpy_r_r77);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 257, CPyStatic_emitwrapper___globals);
        goto CPyL166;
    }
    cpy_r_r79 = CPyList_SetItemUnsafe(cpy_r_r67, cpy_r_r68, cpy_r_r78);
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 257, CPyStatic_emitwrapper___globals);
        goto CPyL166;
    }
    cpy_r_r80 = cpy_r_r68 + 2;
    cpy_r_r68 = cpy_r_r80;
    goto CPyL48;
CPyL53: ;
    cpy_r_cleanups = cpy_r_r67;
    cpy_r_r81 = PyList_New(0);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 259, CPyStatic_emitwrapper___globals);
        goto CPyL167;
    }
    cpy_r_arg_ptrs = cpy_r_r81;
    cpy_r_r82 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r82 == NULL)) {
        goto CPyL168;
    } else
        goto CPyL57;
CPyL55: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r83 = 0;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 260, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    CPy_Unreachable();
CPyL57: ;
    cpy_r_r84 = CPyDict_GetItem(cpy_r_groups, cpy_r_r82);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 260, CPyStatic_emitwrapper___globals);
        goto CPyL169;
    }
    if (likely(PyList_Check(cpy_r_r84)))
        cpy_r_r85 = cpy_r_r84;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 260, CPyStatic_emitwrapper___globals, "list", cpy_r_r84);
        goto CPyL169;
    }
    cpy_r_r86 = (CPyPtr)&((PyVarObject *)cpy_r_r85)->ob_size;
    cpy_r_r87 = *(int64_t *)cpy_r_r86;
    CPy_DECREF(cpy_r_r85);
    cpy_r_r88 = cpy_r_r87 << 1;
    cpy_r_r89 = cpy_r_r88 != 0;
    if (cpy_r_r89) goto CPyL66;
    cpy_r_r90 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r90 == NULL)) {
        goto CPyL170;
    } else
        goto CPyL63;
CPyL61: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r91 = 0;
    if (unlikely(!cpy_r_r91)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 260, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    CPy_Unreachable();
CPyL63: ;
    cpy_r_r92 = CPyDict_GetItem(cpy_r_groups, cpy_r_r90);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 260, CPyStatic_emitwrapper___globals);
        goto CPyL169;
    }
    if (likely(PyList_Check(cpy_r_r92)))
        cpy_r_r93 = cpy_r_r92;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 260, CPyStatic_emitwrapper___globals, "list", cpy_r_r92);
        goto CPyL169;
    }
    cpy_r_r94 = (CPyPtr)&((PyVarObject *)cpy_r_r93)->ob_size;
    cpy_r_r95 = *(int64_t *)cpy_r_r94;
    CPy_DECREF(cpy_r_r93);
    cpy_r_r96 = cpy_r_r95 << 1;
    cpy_r_r97 = cpy_r_r96 != 0;
    if (!cpy_r_r97) goto CPyL105;
CPyL66: ;
    cpy_r_r98 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r98 == NULL)) {
        goto CPyL171;
    } else
        goto CPyL69;
CPyL67: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r99 = 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 261, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    CPy_Unreachable();
CPyL69: ;
    cpy_r_r100 = CPyDict_GetItem(cpy_r_groups, cpy_r_r98);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 261, CPyStatic_emitwrapper___globals);
        goto CPyL169;
    }
    if (likely(PyList_Check(cpy_r_r100)))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 261, CPyStatic_emitwrapper___globals, "list", cpy_r_r100);
        goto CPyL169;
    }
    cpy_r_r102 = (CPyPtr)&((PyVarObject *)cpy_r_r101)->ob_size;
    cpy_r_r103 = *(int64_t *)cpy_r_r102;
    CPy_DECREF(cpy_r_r101);
    cpy_r_r104 = cpy_r_r103 << 1;
    cpy_r_r105 = cpy_r_r104 != 0;
    if (!cpy_r_r105) goto CPyL81;
    cpy_r_r106 = CPyStatics[7594]; /* '&obj_' */
    cpy_r_r107 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r107 == NULL)) {
        goto CPyL172;
    } else
        goto CPyL75;
CPyL73: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r108 = 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 261, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    CPy_Unreachable();
CPyL75: ;
    cpy_r_r109 = CPyDict_GetItem(cpy_r_groups, cpy_r_r107);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 261, CPyStatic_emitwrapper___globals);
        goto CPyL169;
    }
    if (likely(PyList_Check(cpy_r_r109)))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 261, CPyStatic_emitwrapper___globals, "list", cpy_r_r109);
        goto CPyL169;
    }
    cpy_r_r111 = CPyList_GetItemShortBorrow(cpy_r_r110, 0);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 261, CPyStatic_emitwrapper___globals);
        goto CPyL173;
    }
    if (likely(Py_TYPE(cpy_r_r111) == CPyType_func_ir___RuntimeArg))
        cpy_r_r112 = cpy_r_r111;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 261, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r111);
        goto CPyL173;
    }
    cpy_r_r113 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r112)->_name;
    CPy_INCREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r110);
    cpy_r_r114 = CPyStr_Build(2, cpy_r_r106, cpy_r_r113);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 261, CPyStatic_emitwrapper___globals);
        goto CPyL169;
    }
    cpy_r_r115 = cpy_r_r114;
    goto CPyL82;
CPyL81: ;
    cpy_r_r116 = CPyStatics[6879]; /* 'NULL' */
    CPy_INCREF(cpy_r_r116);
    cpy_r_r115 = cpy_r_r116;
CPyL82: ;
    cpy_r_r117 = PyList_New(1);
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 261, CPyStatic_emitwrapper___globals);
        goto CPyL174;
    }
    cpy_r_r118 = (CPyPtr)&((PyListObject *)cpy_r_r117)->ob_item;
    cpy_r_r119 = *(CPyPtr *)cpy_r_r118;
    *(PyObject * *)cpy_r_r119 = cpy_r_r115;
    cpy_r_r120 = PyNumber_InPlaceAdd(cpy_r_arg_ptrs, cpy_r_r117);
    CPy_DECREF(cpy_r_arg_ptrs);
    CPy_DECREF(cpy_r_r117);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 261, CPyStatic_emitwrapper___globals);
        goto CPyL167;
    }
    if (likely(PyList_Check(cpy_r_r120)))
        cpy_r_r121 = cpy_r_r120;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 261, CPyStatic_emitwrapper___globals, "list", cpy_r_r120);
        goto CPyL167;
    }
    cpy_r_arg_ptrs = cpy_r_r121;
    cpy_r_r122 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r122 == NULL)) {
        goto CPyL175;
    } else
        goto CPyL88;
CPyL86: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r123 = 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 262, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    CPy_Unreachable();
CPyL88: ;
    cpy_r_r124 = CPyDict_GetItem(cpy_r_groups, cpy_r_r122);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 262, CPyStatic_emitwrapper___globals);
        goto CPyL169;
    }
    if (likely(PyList_Check(cpy_r_r124)))
        cpy_r_r125 = cpy_r_r124;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 262, CPyStatic_emitwrapper___globals, "list", cpy_r_r124);
        goto CPyL169;
    }
    cpy_r_r126 = (CPyPtr)&((PyVarObject *)cpy_r_r125)->ob_size;
    cpy_r_r127 = *(int64_t *)cpy_r_r126;
    CPy_DECREF(cpy_r_r125);
    cpy_r_r128 = cpy_r_r127 << 1;
    cpy_r_r129 = cpy_r_r128 != 0;
    if (!cpy_r_r129) goto CPyL100;
    cpy_r_r130 = CPyStatics[7594]; /* '&obj_' */
    cpy_r_r131 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r131 == NULL)) {
        goto CPyL176;
    } else
        goto CPyL94;
CPyL92: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r132 = 0;
    if (unlikely(!cpy_r_r132)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 262, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    CPy_Unreachable();
CPyL94: ;
    cpy_r_r133 = CPyDict_GetItem(cpy_r_groups, cpy_r_r131);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 262, CPyStatic_emitwrapper___globals);
        goto CPyL169;
    }
    if (likely(PyList_Check(cpy_r_r133)))
        cpy_r_r134 = cpy_r_r133;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 262, CPyStatic_emitwrapper___globals, "list", cpy_r_r133);
        goto CPyL169;
    }
    cpy_r_r135 = CPyList_GetItemShortBorrow(cpy_r_r134, 0);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 262, CPyStatic_emitwrapper___globals);
        goto CPyL177;
    }
    if (likely(Py_TYPE(cpy_r_r135) == CPyType_func_ir___RuntimeArg))
        cpy_r_r136 = cpy_r_r135;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 262, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r135);
        goto CPyL177;
    }
    cpy_r_r137 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r136)->_name;
    CPy_INCREF(cpy_r_r137);
    CPy_DECREF(cpy_r_r134);
    cpy_r_r138 = CPyStr_Build(2, cpy_r_r130, cpy_r_r137);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 262, CPyStatic_emitwrapper___globals);
        goto CPyL169;
    }
    cpy_r_r139 = cpy_r_r138;
    goto CPyL101;
CPyL100: ;
    cpy_r_r140 = CPyStatics[6879]; /* 'NULL' */
    CPy_INCREF(cpy_r_r140);
    cpy_r_r139 = cpy_r_r140;
CPyL101: ;
    cpy_r_r141 = PyList_New(1);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 262, CPyStatic_emitwrapper___globals);
        goto CPyL178;
    }
    cpy_r_r142 = (CPyPtr)&((PyListObject *)cpy_r_r141)->ob_item;
    cpy_r_r143 = *(CPyPtr *)cpy_r_r142;
    *(PyObject * *)cpy_r_r143 = cpy_r_r139;
    cpy_r_r144 = PyNumber_InPlaceAdd(cpy_r_arg_ptrs, cpy_r_r141);
    CPy_DECREF(cpy_r_arg_ptrs);
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r144 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 262, CPyStatic_emitwrapper___globals);
        goto CPyL167;
    }
    if (likely(PyList_Check(cpy_r_r144)))
        cpy_r_r145 = cpy_r_r144;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 262, CPyStatic_emitwrapper___globals, "list", cpy_r_r144);
        goto CPyL167;
    }
    cpy_r_arg_ptrs = cpy_r_r145;
CPyL105: ;
    cpy_r_r146 = (CPyPtr)&((PyVarObject *)cpy_r_reordered_args)->ob_size;
    cpy_r_r147 = *(int64_t *)cpy_r_r146;
    cpy_r_r148 = PyList_New(cpy_r_r147);
    if (unlikely(cpy_r_r148 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 263, CPyStatic_emitwrapper___globals);
        goto CPyL169;
    }
    cpy_r_r149 = 0;
CPyL107: ;
    cpy_r_r150 = (CPyPtr)&((PyVarObject *)cpy_r_reordered_args)->ob_size;
    cpy_r_r151 = *(int64_t *)cpy_r_r150;
    cpy_r_r152 = cpy_r_r151 << 1;
    cpy_r_r153 = (Py_ssize_t)cpy_r_r149 < (Py_ssize_t)cpy_r_r152;
    if (!cpy_r_r153) goto CPyL179;
    cpy_r_r154 = CPyList_GetItemUnsafe(cpy_r_reordered_args, cpy_r_r149);
    if (likely(Py_TYPE(cpy_r_r154) == CPyType_func_ir___RuntimeArg))
        cpy_r_r155 = cpy_r_r154;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 263, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r154);
        goto CPyL180;
    }
    cpy_r_arg_3 = cpy_r_r155;
    cpy_r_r156 = CPyStatics[7594]; /* '&obj_' */
    cpy_r_r157 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg_3)->_name;
    CPy_INCREF(cpy_r_r157);
    CPy_DECREF(cpy_r_arg_3);
    cpy_r_r158 = CPyStr_Build(2, cpy_r_r156, cpy_r_r157);
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 263, CPyStatic_emitwrapper___globals);
        goto CPyL180;
    }
    cpy_r_r159 = CPyList_SetItemUnsafe(cpy_r_r148, cpy_r_r149, cpy_r_r158);
    if (unlikely(!cpy_r_r159)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 263, CPyStatic_emitwrapper___globals);
        goto CPyL180;
    }
    cpy_r_r160 = cpy_r_r149 + 2;
    cpy_r_r149 = cpy_r_r160;
    goto CPyL107;
CPyL112: ;
    cpy_r_r161 = PyNumber_InPlaceAdd(cpy_r_arg_ptrs, cpy_r_r148);
    CPy_DECREF(cpy_r_arg_ptrs);
    CPy_DECREF(cpy_r_r148);
    if (unlikely(cpy_r_r161 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 263, CPyStatic_emitwrapper___globals);
        goto CPyL181;
    }
    if (likely(PyList_Check(cpy_r_r161)))
        cpy_r_r162 = cpy_r_r161;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 263, CPyStatic_emitwrapper___globals, "list", cpy_r_r161);
        goto CPyL181;
    }
    cpy_r_arg_ptrs = cpy_r_r162;
    cpy_r_r163 = Py_None;
    cpy_r_r164 = CPyDef_emitwrapper___make_format_string(cpy_r_r163, cpy_r_groups);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 267, CPyStatic_emitwrapper___globals);
        goto CPyL182;
    }
    cpy_r_r165 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r165 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 267, CPyStatic_emitwrapper___globals);
        goto CPyL183;
    }
CPyL116: ;
    cpy_r_r166 = CPyStatics[163]; /* '' */
    cpy_r_r167 = (CPyPtr)&((PyVarObject *)cpy_r_arg_ptrs)->ob_size;
    cpy_r_r168 = *(int64_t *)cpy_r_r167;
    cpy_r_r169 = PyList_New(cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 267, CPyStatic_emitwrapper___globals);
        goto CPyL184;
    }
    cpy_r_r170 = 0;
CPyL118: ;
    cpy_r_r171 = (CPyPtr)&((PyVarObject *)cpy_r_arg_ptrs)->ob_size;
    cpy_r_r172 = *(int64_t *)cpy_r_r171;
    cpy_r_r173 = cpy_r_r172 << 1;
    cpy_r_r174 = (Py_ssize_t)cpy_r_r170 < (Py_ssize_t)cpy_r_r173;
    if (!cpy_r_r174) goto CPyL185;
    cpy_r_r175 = CPyList_GetItemUnsafe(cpy_r_arg_ptrs, cpy_r_r170);
    if (likely(PyUnicode_Check(cpy_r_r175)))
        cpy_r_r176 = cpy_r_r175;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 267, CPyStatic_emitwrapper___globals, "str", cpy_r_r175);
        goto CPyL186;
    }
    cpy_r_n = cpy_r_r176;
    cpy_r_r177 = CPyStatics[71]; /* ', ' */
    cpy_r_r178 = PyUnicode_Concat(cpy_r_r177, cpy_r_n);
    CPy_DECREF(cpy_r_n);
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 267, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    cpy_r_r179 = CPyList_SetItemUnsafe(cpy_r_r169, cpy_r_r170, cpy_r_r178);
    if (unlikely(!cpy_r_r179)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 267, CPyStatic_emitwrapper___globals);
        goto CPyL186;
    }
    cpy_r_r180 = cpy_r_r170 + 2;
    cpy_r_r170 = cpy_r_r180;
    goto CPyL118;
CPyL123: ;
    cpy_r_r181 = PyUnicode_Join(cpy_r_r166, cpy_r_r169);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r181 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 267, CPyStatic_emitwrapper___globals);
        goto CPyL187;
    }
    cpy_r_r182 = CPyStatics[7604]; /* 'if (!CPyArg_ParseTupleAndKeywords(args, kw, "' */
    cpy_r_r183 = CPyStatics[3415]; /* '", "' */
    cpy_r_r184 = CPyStatics[7605]; /* '", kwlist' */
    cpy_r_r185 = CPyStatics[6893]; /* ')) {' */
    cpy_r_r186 = CPyStr_Build(7, cpy_r_r182, cpy_r_r164, cpy_r_r183, cpy_r_r165, cpy_r_r184, cpy_r_r181, cpy_r_r185);
    CPy_DECREF(cpy_r_r164);
    CPy_DECREF(cpy_r_r165);
    CPy_DECREF(cpy_r_r181);
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 266, CPyStatic_emitwrapper___globals);
        goto CPyL181;
    }
    cpy_r_r187 = CPyStatics[7171]; /* 'return NULL;' */
    cpy_r_r188 = CPyStatics[1406]; /* '}' */
    cpy_r_r189 = PyTuple_Pack(3, cpy_r_r186, cpy_r_r187, cpy_r_r188);
    CPy_DECREF(cpy_r_r186);
    if (unlikely(cpy_r_r189 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 265, CPyStatic_emitwrapper___globals);
        goto CPyL181;
    }
    cpy_r_r190 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r189);
    CPy_DECREF(cpy_r_r189);
    if (unlikely(cpy_r_r190 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 265, CPyStatic_emitwrapper___globals);
        goto CPyL181;
    }
    cpy_r_r191 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 5, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* sig */
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 272, CPyStatic_emitwrapper___globals);
        goto CPyL181;
    }
CPyL128: ;
    cpy_r_r192 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r191)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r192);
    CPy_DECREF(cpy_r_r191);
    cpy_r_r193 = 0;
    CPyTagged_INCREF(cpy_r_r193);
    cpy_r_i = cpy_r_r193;
CPyL129: ;
    cpy_r_r194 = cpy_r_r193 & 1;
    cpy_r_r195 = cpy_r_r194 == 0;
    cpy_r_r196 = cpy_r_r192 & 1;
    cpy_r_r197 = cpy_r_r196 == 0;
    cpy_r_r198 = cpy_r_r195 & cpy_r_r197;
    if (!cpy_r_r198) goto CPyL131;
    cpy_r_r199 = (Py_ssize_t)cpy_r_r193 < (Py_ssize_t)cpy_r_r192;
    cpy_r_r200 = cpy_r_r199;
    goto CPyL132;
CPyL131: ;
    cpy_r_r201 = CPyTagged_IsLt_(cpy_r_r193, cpy_r_r192);
    cpy_r_r200 = cpy_r_r201;
CPyL132: ;
    if (!cpy_r_r200) goto CPyL188;
    cpy_r_r202 = CPyDef_mypyc___common___bitmap_name(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r202 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 273, CPyStatic_emitwrapper___globals);
        goto CPyL189;
    }
    cpy_r_name = cpy_r_r202;
    cpy_r_r203 = CPyStatics[7138]; /* 'uint32_t' */
    cpy_r_r204 = CPyStatics[295]; /* ' ' */
    cpy_r_r205 = CPyStatics[7167]; /* ' = 0;' */
    cpy_r_r206 = CPyStr_Build(4, cpy_r_r203, cpy_r_r204, cpy_r_name, cpy_r_r205);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r206 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 274, CPyStatic_emitwrapper___globals);
        goto CPyL189;
    }
    cpy_r_r207 = NULL;
    cpy_r_r208 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r206, cpy_r_r207);
    CPy_DECREF(cpy_r_r206);
    if (unlikely(cpy_r_r208 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 274, CPyStatic_emitwrapper___globals);
        goto CPyL189;
    }
    cpy_r_r209 = CPyTagged_Add(cpy_r_r193, 2);
    CPyTagged_DECREF(cpy_r_r193);
    CPyTagged_INCREF(cpy_r_r209);
    cpy_r_r193 = cpy_r_r209;
    cpy_r_i = cpy_r_r209;
    goto CPyL129;
CPyL137: ;
    cpy_r_r210 = CPyDef_emitwrapper___generate_traceback_code(cpy_r_fn, cpy_r_emitter, cpy_r_source_path, cpy_r_module_name);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 275, CPyStatic_emitwrapper___globals);
        goto CPyL181;
    }
    cpy_r_traceback_code = cpy_r_r210;
    cpy_r_r211 = CPyStatic_nodes___ARG_OPT;
    if (unlikely(cpy_r_r211 == NULL)) {
        goto CPyL190;
    } else
        goto CPyL141;
CPyL139: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_OPT\" was not set");
    cpy_r_r212 = 0;
    if (unlikely(!cpy_r_r212)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 279, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    CPy_Unreachable();
CPyL141: ;
    cpy_r_r213 = CPyDict_GetItem(cpy_r_groups, cpy_r_r211);
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 279, CPyStatic_emitwrapper___globals);
        goto CPyL191;
    }
    if (likely(PyList_Check(cpy_r_r213)))
        cpy_r_r214 = cpy_r_r213;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 279, CPyStatic_emitwrapper___globals, "list", cpy_r_r213);
        goto CPyL191;
    }
    cpy_r_r215 = CPyStatic_nodes___ARG_NAMED_OPT;
    if (unlikely(cpy_r_r215 == NULL)) {
        goto CPyL192;
    } else
        goto CPyL146;
CPyL144: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_NAMED_OPT\" was not set");
    cpy_r_r216 = 0;
    if (unlikely(!cpy_r_r216)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 279, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    CPy_Unreachable();
CPyL146: ;
    cpy_r_r217 = CPyDict_GetItem(cpy_r_groups, cpy_r_r215);
    CPy_DECREF(cpy_r_groups);
    if (unlikely(cpy_r_r217 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 279, CPyStatic_emitwrapper___globals);
        goto CPyL193;
    }
    if (likely(PyList_Check(cpy_r_r217)))
        cpy_r_r218 = cpy_r_r217;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 279, CPyStatic_emitwrapper___globals, "list", cpy_r_r217);
        goto CPyL193;
    }
    cpy_r_r219 = PyNumber_Add(cpy_r_r214, cpy_r_r218);
    CPy_DECREF(cpy_r_r214);
    CPy_DECREF(cpy_r_r218);
    if (unlikely(cpy_r_r219 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 279, CPyStatic_emitwrapper___globals);
        goto CPyL194;
    }
    if (likely(PyList_Check(cpy_r_r219)))
        cpy_r_r220 = cpy_r_r219;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 279, CPyStatic_emitwrapper___globals, "list", cpy_r_r219);
        goto CPyL194;
    }
    cpy_r_r221 = NULL;
    cpy_r_r222 = CPyDef_emitwrapper___generate_wrapper_core(cpy_r_fn, cpy_r_emitter, cpy_r_r220, cpy_r_r221, cpy_r_cleanups, cpy_r_traceback_code);
    CPy_DECREF(cpy_r_r220);
    CPy_DECREF(cpy_r_cleanups);
    CPy_DECREF(cpy_r_traceback_code);
    if (unlikely(cpy_r_r222 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 276, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    cpy_r_r223 = CPyStatics[1406]; /* '}' */
    cpy_r_r224 = NULL;
    cpy_r_r225 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r223, cpy_r_r224);
    if (unlikely(cpy_r_r225 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 284, CPyStatic_emitwrapper___globals);
        goto CPyL153;
    }
    return 1;
CPyL153: ;
    cpy_r_r226 = 2;
    return cpy_r_r226;
CPyL154: ;
    CPy_DecRef(cpy_r_real_args);
    goto CPyL153;
CPyL155: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL20;
CPyL156: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    goto CPyL153;
CPyL157: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    goto CPyL153;
CPyL158: ;
    CPy_DECREF(cpy_r_real_args);
    goto CPyL34;
CPyL159: ;
    CPy_DecRef(cpy_r_real_args);
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_r44);
    goto CPyL153;
CPyL160: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    goto CPyL35;
CPyL161: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    goto CPyL153;
CPyL162: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_r58);
    goto CPyL40;
CPyL163: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_r58);
    goto CPyL153;
CPyL164: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_r64);
    goto CPyL153;
CPyL165: ;
    CPy_DECREF(cpy_r_r64);
    goto CPyL53;
CPyL166: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_r64);
    CPy_DecRef(cpy_r_r67);
    goto CPyL153;
CPyL167: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    goto CPyL153;
CPyL168: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    goto CPyL55;
CPyL169: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    goto CPyL153;
CPyL170: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    goto CPyL61;
CPyL171: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    goto CPyL67;
CPyL172: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    goto CPyL73;
CPyL173: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_r110);
    goto CPyL153;
CPyL174: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_r115);
    goto CPyL153;
CPyL175: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    goto CPyL86;
CPyL176: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    goto CPyL92;
CPyL177: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_r134);
    goto CPyL153;
CPyL178: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_r139);
    goto CPyL153;
CPyL179: ;
    CPy_DECREF(cpy_r_reordered_args);
    goto CPyL112;
CPyL180: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_reordered_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_r148);
    goto CPyL153;
CPyL181: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    goto CPyL153;
CPyL182: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    goto CPyL153;
CPyL183: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_r164);
    goto CPyL153;
CPyL184: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r165);
    goto CPyL153;
CPyL185: ;
    CPy_DECREF(cpy_r_arg_ptrs);
    goto CPyL123;
CPyL186: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_arg_ptrs);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r165);
    CPy_DecRef(cpy_r_r169);
    goto CPyL153;
CPyL187: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_r164);
    CPy_DecRef(cpy_r_r165);
    goto CPyL153;
CPyL188: ;
    CPyTagged_DECREF(cpy_r_r192);
    CPyTagged_DECREF(cpy_r_r193);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL137;
CPyL189: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPyTagged_DecRef(cpy_r_r192);
    CPyTagged_DecRef(cpy_r_r193);
    goto CPyL153;
CPyL190: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_traceback_code);
    goto CPyL139;
CPyL191: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_traceback_code);
    goto CPyL153;
CPyL192: ;
    CPy_DecRef(cpy_r_groups);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_traceback_code);
    CPy_DecRef(cpy_r_r214);
    goto CPyL144;
CPyL193: ;
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_traceback_code);
    CPy_DecRef(cpy_r_r214);
    goto CPyL153;
CPyL194: ;
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_traceback_code);
    goto CPyL153;
}

PyObject *CPyPy_emitwrapper___generate_legacy_wrapper_function(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "emitter", "source_path", "module_name", 0};
    static CPyArg_Parser parser = {"OOOO:generate_legacy_wrapper_function", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_emitter;
    PyObject *obj_source_path;
    PyObject *obj_module_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_emitter, &obj_source_path, &obj_module_name)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *arg_source_path;
    if (likely(PyUnicode_Check(obj_source_path)))
        arg_source_path = obj_source_path;
    else {
        CPy_TypeError("str", obj_source_path); 
        goto fail;
    }
    PyObject *arg_module_name;
    if (likely(PyUnicode_Check(obj_module_name)))
        arg_module_name = obj_module_name;
    else {
        CPy_TypeError("str", obj_module_name); 
        goto fail;
    }
    char retval = CPyDef_emitwrapper___generate_legacy_wrapper_function(arg_fn, arg_emitter, arg_source_path, arg_module_name);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_legacy_wrapper_function", 227, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___generate_dunder_wrapper(PyObject *cpy_r_cl, PyObject *cpy_r_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_gen;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    cpy_r_r0 = CPyDef_emitwrapper___WrapperGenerator(cpy_r_cl, cpy_r_emitter);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_dunder_wrapper", 295, CPyStatic_emitwrapper___globals);
        goto CPyL8;
    }
    cpy_r_gen = cpy_r_r0;
    cpy_r_r1 = CPyDef_emitwrapper___WrapperGenerator___set_target(cpy_r_gen, cpy_r_fn);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_dunder_wrapper", 296, CPyStatic_emitwrapper___globals);
        goto CPyL9;
    }
    cpy_r_r2 = CPyDef_emitwrapper___WrapperGenerator___emit_header(cpy_r_gen);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_dunder_wrapper", 297, CPyStatic_emitwrapper___globals);
        goto CPyL9;
    }
    cpy_r_r3 = NULL;
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_emitwrapper___WrapperGenerator___emit_arg_processing(cpy_r_gen, cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_dunder_wrapper", 298, CPyStatic_emitwrapper___globals);
        goto CPyL9;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_emitwrapper___WrapperGenerator___emit_call(cpy_r_gen, cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_dunder_wrapper", 299, CPyStatic_emitwrapper___globals);
        goto CPyL9;
    }
    cpy_r_r8 = CPyDef_emitwrapper___WrapperGenerator___finish(cpy_r_gen);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_dunder_wrapper", 300, CPyStatic_emitwrapper___globals);
        goto CPyL9;
    }
    cpy_r_r9 = CPyDef_emitwrapper___WrapperGenerator___wrapper_name(cpy_r_gen);
    CPy_DECREF(cpy_r_gen);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_dunder_wrapper", 301, CPyStatic_emitwrapper___globals);
        goto CPyL8;
    }
    return cpy_r_r9;
CPyL8: ;
    cpy_r_r10 = NULL;
    return cpy_r_r10;
CPyL9: ;
    CPy_DecRef(cpy_r_gen);
    goto CPyL8;
}

PyObject *CPyPy_emitwrapper___generate_dunder_wrapper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "fn", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_dunder_wrapper", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___generate_dunder_wrapper(arg_cl, arg_fn, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_dunder_wrapper", 290, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___generate_ipow_wrapper(PyObject *cpy_r_cl, PyObject *cpy_r_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_gen;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    int64_t cpy_r_r4;
    char cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    int64_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyPtr cpy_r_r22;
    CPyPtr cpy_r_r23;
    CPyPtr cpy_r_r24;
    CPyPtr cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    CPyPtr cpy_r_r35;
    CPyPtr cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    cpy_r_r0 = CPyDef_emitwrapper___WrapperGenerator(cpy_r_cl, cpy_r_emitter);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 310, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    cpy_r_gen = cpy_r_r0;
    cpy_r_r1 = CPyDef_emitwrapper___WrapperGenerator___set_target(cpy_r_gen, cpy_r_fn);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 311, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 2, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* args */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 312, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
CPyL3: ;
    cpy_r_r3 = CPyObject_Size(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 312, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r4 = cpy_r_r3 & 1;
    cpy_r_r5 = cpy_r_r4 == 0;
    if (!cpy_r_r5) goto CPyL6;
    cpy_r_r6 = cpy_r_r3 == 4;
    CPyTagged_DECREF(cpy_r_r3);
    cpy_r_r7 = cpy_r_r6;
    goto CPyL7;
CPyL6: ;
    cpy_r_r8 = CPyTagged_IsEq_(cpy_r_r3, 4);
    CPyTagged_DECREF(cpy_r_r3);
    cpy_r_r7 = cpy_r_r8;
CPyL7: ;
    if (!cpy_r_r7) goto CPyL9;
    cpy_r_r9 = cpy_r_r7;
    goto CPyL15;
CPyL9: ;
    cpy_r_r10 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 2, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* args */
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 312, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
CPyL10: ;
    cpy_r_r11 = CPyObject_Size(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 312, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r12 = cpy_r_r11 & 1;
    cpy_r_r13 = cpy_r_r12 == 0;
    if (!cpy_r_r13) goto CPyL13;
    cpy_r_r14 = cpy_r_r11 == 6;
    CPyTagged_DECREF(cpy_r_r11);
    cpy_r_r15 = cpy_r_r14;
    goto CPyL14;
CPyL13: ;
    cpy_r_r16 = CPyTagged_IsEq_(cpy_r_r11, 6);
    CPyTagged_DECREF(cpy_r_r11);
    cpy_r_r15 = cpy_r_r16;
CPyL14: ;
    cpy_r_r9 = cpy_r_r15;
CPyL15: ;
    if (cpy_r_r9) {
        goto CPyL18;
    } else
        goto CPyL30;
CPyL16: ;
    PyErr_SetString(PyExc_AssertionError, "__ipow__ should only take 2 or 3 arguments");
    cpy_r_r17 = 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 312, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r18 = CPyStatics[730]; /* 'self' */
    cpy_r_r19 = CPyStatics[7606]; /* 'exp' */
    cpy_r_r20 = CPyStatics[7607]; /* 'mod' */
    cpy_r_r21 = PyList_New(3);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 313, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r22 = (CPyPtr)&((PyListObject *)cpy_r_r21)->ob_item;
    cpy_r_r23 = *(CPyPtr *)cpy_r_r22;
    CPy_INCREF(cpy_r_r18);
    *(PyObject * *)cpy_r_r23 = cpy_r_r18;
    cpy_r_r24 = cpy_r_r23 + 8;
    CPy_INCREF(cpy_r_r19);
    *(PyObject * *)cpy_r_r24 = cpy_r_r19;
    cpy_r_r25 = cpy_r_r23 + 16;
    CPy_INCREF(cpy_r_r20);
    *(PyObject * *)cpy_r_r25 = cpy_r_r20;
    if (((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names != NULL) {
        CPy_DECREF(((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names);
    }
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names = cpy_r_r21;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 313, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r27 = CPyDef_emitwrapper___WrapperGenerator___emit_header(cpy_r_gen);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 314, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r28 = NULL;
    cpy_r_r29 = 2;
    cpy_r_r30 = CPyDef_emitwrapper___WrapperGenerator___emit_arg_processing(cpy_r_gen, cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 315, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r31 = CPyStatics[7608]; /* ('PyErr_SetString(PyExc_TypeError, "__ipow__ takes 2 '
                                     'positional arguments but 3 were given");') */
    cpy_r_r32 = CPyStatics[7171]; /* 'return NULL;' */
    cpy_r_r33 = PyList_New(2);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 320, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r34 = (CPyPtr)&((PyListObject *)cpy_r_r33)->ob_item;
    cpy_r_r35 = *(CPyPtr *)cpy_r_r34;
    CPy_INCREF(cpy_r_r31);
    *(PyObject * *)cpy_r_r35 = cpy_r_r31;
    cpy_r_r36 = cpy_r_r35 + 8;
    CPy_INCREF(cpy_r_r32);
    *(PyObject * *)cpy_r_r36 = cpy_r_r32;
    cpy_r_r37 = CPyDef_emitwrapper___handle_third_pow_argument(cpy_r_fn, cpy_r_emitter, cpy_r_gen, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 316, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r38 = NULL;
    cpy_r_r39 = CPyDef_emitwrapper___WrapperGenerator___emit_call(cpy_r_gen, cpy_r_r38);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 325, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r40 = CPyDef_emitwrapper___WrapperGenerator___finish(cpy_r_gen);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 326, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r41 = CPyDef_emitwrapper___WrapperGenerator___wrapper_name(cpy_r_gen);
    CPy_DECREF(cpy_r_gen);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 327, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    return cpy_r_r41;
CPyL28: ;
    cpy_r_r42 = NULL;
    return cpy_r_r42;
CPyL29: ;
    CPy_DecRef(cpy_r_gen);
    goto CPyL28;
CPyL30: ;
    CPy_DECREF(cpy_r_gen);
    goto CPyL16;
}

PyObject *CPyPy_emitwrapper___generate_ipow_wrapper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "fn", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_ipow_wrapper", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___generate_ipow_wrapper(arg_cl, arg_fn, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_ipow_wrapper", 304, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___generate_bin_op_wrapper(PyObject *cpy_r_cl, PyObject *cpy_r_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_gen;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    int32_t cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    CPyPtr cpy_r_r24;
    CPyPtr cpy_r_r25;
    CPyPtr cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyPtr cpy_r_r31;
    CPyPtr cpy_r_r32;
    CPyPtr cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_wrapper_name;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    int32_t cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_rmethod;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_fn_rev;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    cpy_r_r0 = CPyDef_emitwrapper___WrapperGenerator(cpy_r_cl, cpy_r_emitter);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 338, CPyStatic_emitwrapper___globals);
        goto CPyL45;
    }
    cpy_r_gen = cpy_r_r0;
    cpy_r_r1 = CPyDef_emitwrapper___WrapperGenerator___set_target(cpy_r_gen, cpy_r_fn);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 339, CPyStatic_emitwrapper___globals);
        goto CPyL46;
    }
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 340, CPyStatic_emitwrapper___globals);
        goto CPyL46;
    }
CPyL3: ;
    cpy_r_r3 = CPyStatics[4189]; /* '__pow__' */
    cpy_r_r4 = PyUnicode_Compare(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 == -1;
    if (!cpy_r_r5) goto CPyL6;
    cpy_r_r6 = PyErr_Occurred();
    cpy_r_r7 = cpy_r_r6 != NULL;
    if (!cpy_r_r7) goto CPyL6;
    cpy_r_r8 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", -1, CPyStatic_emitwrapper___globals);
        goto CPyL46;
    }
CPyL6: ;
    cpy_r_r9 = cpy_r_r4 == 0;
    if (!cpy_r_r9) goto CPyL8;
    cpy_r_r10 = cpy_r_r9;
    goto CPyL13;
CPyL8: ;
    cpy_r_r11 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 340, CPyStatic_emitwrapper___globals);
        goto CPyL46;
    }
CPyL9: ;
    cpy_r_r12 = CPyStatics[4209]; /* '__rpow__' */
    cpy_r_r13 = PyUnicode_Compare(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r14 = cpy_r_r13 == -1;
    if (!cpy_r_r14) goto CPyL12;
    cpy_r_r15 = PyErr_Occurred();
    cpy_r_r16 = cpy_r_r15 != NULL;
    if (!cpy_r_r16) goto CPyL12;
    cpy_r_r17 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", -1, CPyStatic_emitwrapper___globals);
        goto CPyL46;
    }
CPyL12: ;
    cpy_r_r18 = cpy_r_r13 == 0;
    cpy_r_r10 = cpy_r_r18;
CPyL13: ;
    if (!cpy_r_r10) goto CPyL16;
    cpy_r_r19 = CPyStatics[2411]; /* 'left' */
    cpy_r_r20 = CPyStatics[2412]; /* 'right' */
    cpy_r_r21 = CPyStatics[7607]; /* 'mod' */
    cpy_r_r22 = PyList_New(3);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 341, CPyStatic_emitwrapper___globals);
        goto CPyL46;
    }
    cpy_r_r23 = (CPyPtr)&((PyListObject *)cpy_r_r22)->ob_item;
    cpy_r_r24 = *(CPyPtr *)cpy_r_r23;
    CPy_INCREF(cpy_r_r19);
    *(PyObject * *)cpy_r_r24 = cpy_r_r19;
    cpy_r_r25 = cpy_r_r24 + 8;
    CPy_INCREF(cpy_r_r20);
    *(PyObject * *)cpy_r_r25 = cpy_r_r20;
    cpy_r_r26 = cpy_r_r24 + 16;
    CPy_INCREF(cpy_r_r21);
    *(PyObject * *)cpy_r_r26 = cpy_r_r21;
    if (((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names != NULL) {
        CPy_DECREF(((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names);
    }
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names = cpy_r_r22;
    cpy_r_r27 = 1;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 341, CPyStatic_emitwrapper___globals);
        goto CPyL46;
    } else
        goto CPyL18;
CPyL16: ;
    cpy_r_r28 = CPyStatics[2411]; /* 'left' */
    cpy_r_r29 = CPyStatics[2412]; /* 'right' */
    cpy_r_r30 = PyList_New(2);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 343, CPyStatic_emitwrapper___globals);
        goto CPyL46;
    }
    cpy_r_r31 = (CPyPtr)&((PyListObject *)cpy_r_r30)->ob_item;
    cpy_r_r32 = *(CPyPtr *)cpy_r_r31;
    CPy_INCREF(cpy_r_r28);
    *(PyObject * *)cpy_r_r32 = cpy_r_r28;
    cpy_r_r33 = cpy_r_r32 + 8;
    CPy_INCREF(cpy_r_r29);
    *(PyObject * *)cpy_r_r33 = cpy_r_r29;
    if (((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names != NULL) {
        CPy_DECREF(((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names);
    }
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names = cpy_r_r30;
    cpy_r_r34 = 1;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 343, CPyStatic_emitwrapper___globals);
        goto CPyL46;
    }
CPyL18: ;
    cpy_r_r35 = CPyDef_emitwrapper___WrapperGenerator___wrapper_name(cpy_r_gen);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 344, CPyStatic_emitwrapper___globals);
        goto CPyL46;
    }
    cpy_r_wrapper_name = cpy_r_r35;
    cpy_r_r36 = CPyDef_emitwrapper___WrapperGenerator___emit_header(cpy_r_gen);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 346, CPyStatic_emitwrapper___globals);
        goto CPyL47;
    }
    cpy_r_r37 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 347, CPyStatic_emitwrapper___globals);
        goto CPyL47;
    }
CPyL21: ;
    cpy_r_r38 = CPyStatic_operators___reverse_op_methods;
    if (unlikely(cpy_r_r38 == NULL)) {
        goto CPyL48;
    } else
        goto CPyL24;
CPyL22: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"reverse_op_methods\" was not set");
    cpy_r_r39 = 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 347, CPyStatic_emitwrapper___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r40 = PyDict_Contains(cpy_r_r38, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r41 = cpy_r_r40 >= 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 347, CPyStatic_emitwrapper___globals);
        goto CPyL47;
    }
    cpy_r_r42 = cpy_r_r40;
    cpy_r_r43 = cpy_r_r42 ^ 1;
    if (!cpy_r_r43) goto CPyL33;
    cpy_r_r44 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 347, CPyStatic_emitwrapper___globals);
        goto CPyL47;
    }
CPyL27: ;
    cpy_r_r45 = CPyStatic_operators___reverse_op_method_names;
    if (unlikely(cpy_r_r45 == NULL)) {
        goto CPyL49;
    } else
        goto CPyL30;
CPyL28: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"reverse_op_method_names\" was not set");
    cpy_r_r46 = 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 347, CPyStatic_emitwrapper___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r47 = PySet_Contains(cpy_r_r45, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r48 = cpy_r_r47 >= 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 347, CPyStatic_emitwrapper___globals);
        goto CPyL47;
    }
    cpy_r_r49 = cpy_r_r47;
    if (!cpy_r_r49) goto CPyL33;
    cpy_r_r50 = CPyDef_emitwrapper___generate_bin_op_reverse_only_wrapper(cpy_r_fn, cpy_r_emitter, cpy_r_gen);
    CPy_DECREF(cpy_r_gen);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 349, CPyStatic_emitwrapper___globals);
        goto CPyL50;
    } else
        goto CPyL44;
CPyL33: ;
    cpy_r_r51 = CPyStatic_operators___reverse_op_methods;
    if (unlikely(cpy_r_r51 == NULL)) {
        goto CPyL51;
    } else
        goto CPyL36;
CPyL34: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"reverse_op_methods\" was not set");
    cpy_r_r52 = 0;
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 351, CPyStatic_emitwrapper___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL36: ;
    cpy_r_r53 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 351, CPyStatic_emitwrapper___globals);
        goto CPyL47;
    }
CPyL37: ;
    cpy_r_r54 = CPyDict_GetItem(cpy_r_r51, cpy_r_r53);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 351, CPyStatic_emitwrapper___globals);
        goto CPyL47;
    }
    if (likely(PyUnicode_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 351, CPyStatic_emitwrapper___globals, "str", cpy_r_r54);
        goto CPyL47;
    }
    cpy_r_rmethod = cpy_r_r55;
    cpy_r_r56 = 2;
    cpy_r_r57 = CPyDef_class_ir___ClassIR___get_method(cpy_r_cl, cpy_r_rmethod, cpy_r_r56);
    CPy_DECREF(cpy_r_rmethod);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 352, CPyStatic_emitwrapper___globals);
        goto CPyL47;
    }
    cpy_r_fn_rev = cpy_r_r57;
    cpy_r_r58 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r59 = cpy_r_fn_rev == cpy_r_r58;
    if (cpy_r_r59) {
        goto CPyL52;
    } else
        goto CPyL42;
CPyL41: ;
    cpy_r_r60 = CPyDef_emitwrapper___generate_bin_op_forward_only_wrapper(cpy_r_fn, cpy_r_emitter, cpy_r_gen);
    CPy_DECREF(cpy_r_gen);
    if (unlikely(cpy_r_r60 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 355, CPyStatic_emitwrapper___globals);
        goto CPyL50;
    } else
        goto CPyL44;
CPyL42: ;
    if (likely(cpy_r_fn_rev != Py_None))
        cpy_r_r61 = cpy_r_fn_rev;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 358, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_fn_rev);
        goto CPyL47;
    }
    cpy_r_r62 = CPyDef_emitwrapper___generate_bin_op_both_wrappers(cpy_r_cl, cpy_r_fn, cpy_r_r61, cpy_r_emitter, cpy_r_gen);
    CPy_DECREF(cpy_r_r61);
    CPy_DECREF(cpy_r_gen);
    if (unlikely(cpy_r_r62 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 358, CPyStatic_emitwrapper___globals);
        goto CPyL50;
    }
CPyL44: ;
    return cpy_r_wrapper_name;
CPyL45: ;
    cpy_r_r63 = NULL;
    return cpy_r_r63;
CPyL46: ;
    CPy_DecRef(cpy_r_gen);
    goto CPyL45;
CPyL47: ;
    CPy_DecRef(cpy_r_gen);
    CPy_DecRef(cpy_r_wrapper_name);
    goto CPyL45;
CPyL48: ;
    CPy_DecRef(cpy_r_gen);
    CPy_DecRef(cpy_r_wrapper_name);
    CPy_DecRef(cpy_r_r37);
    goto CPyL22;
CPyL49: ;
    CPy_DecRef(cpy_r_gen);
    CPy_DecRef(cpy_r_wrapper_name);
    CPy_DecRef(cpy_r_r44);
    goto CPyL28;
CPyL50: ;
    CPy_DecRef(cpy_r_wrapper_name);
    goto CPyL45;
CPyL51: ;
    CPy_DecRef(cpy_r_gen);
    CPy_DecRef(cpy_r_wrapper_name);
    goto CPyL34;
CPyL52: ;
    CPy_DECREF(cpy_r_fn_rev);
    goto CPyL41;
}

PyObject *CPyPy_emitwrapper___generate_bin_op_wrapper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "fn", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_bin_op_wrapper", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___generate_bin_op_wrapper(arg_cl, arg_fn, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_wrapper", 330, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___generate_bin_op_forward_only_wrapper(PyObject *cpy_r_fn, PyObject *cpy_r_emitter, PyObject *cpy_r_gen) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = CPyStatics[7609]; /* 'typefail' */
    cpy_r_r1 = CPyDef_emit___GotoHandler(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_forward_only_wrapper", 365, CPyStatic_emitwrapper___globals);
        goto CPyL16;
    }
    cpy_r_r2 = CPyDef_emitwrapper___WrapperGenerator___emit_arg_processing(cpy_r_gen, cpy_r_r1, 0);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_forward_only_wrapper", 365, CPyStatic_emitwrapper___globals);
        goto CPyL16;
    }
    cpy_r_r3 = CPyStatics[7610]; /* 'goto typefail;' */
    cpy_r_r4 = PyList_New(1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_forward_only_wrapper", 366, CPyStatic_emitwrapper___globals);
        goto CPyL16;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    CPy_INCREF(cpy_r_r3);
    *(PyObject * *)cpy_r_r6 = cpy_r_r3;
    cpy_r_r7 = CPyDef_emitwrapper___handle_third_pow_argument(cpy_r_fn, cpy_r_emitter, cpy_r_gen, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_forward_only_wrapper", 366, CPyStatic_emitwrapper___globals);
        goto CPyL16;
    }
    cpy_r_r8 = CPyStatics[7610]; /* 'goto typefail;' */
    cpy_r_r9 = CPyDef_emitwrapper___WrapperGenerator___emit_call(cpy_r_gen, cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_forward_only_wrapper", 367, CPyStatic_emitwrapper___globals);
        goto CPyL16;
    }
    cpy_r_r10 = CPyDef_emitwrapper___WrapperGenerator___emit_error_handling(cpy_r_gen);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_forward_only_wrapper", 368, CPyStatic_emitwrapper___globals);
        goto CPyL16;
    }
    cpy_r_r11 = CPyStatics[7609]; /* 'typefail' */
    cpy_r_r12 = CPyDef_emit___Emitter___emit_label(cpy_r_emitter, cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_forward_only_wrapper", 369, CPyStatic_emitwrapper___globals);
        goto CPyL16;
    }
    cpy_r_r13 = CPyStatic_operators___reverse_op_methods;
    if (likely(cpy_r_r13 != NULL)) goto CPyL10;
    PyErr_SetString(PyExc_NameError, "value for final name \"reverse_op_methods\" was not set");
    cpy_r_r14 = 0;
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_forward_only_wrapper", 385, CPyStatic_emitwrapper___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_forward_only_wrapper", 385, CPyStatic_emitwrapper___globals);
        goto CPyL16;
    }
CPyL11: ;
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r13, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_forward_only_wrapper", 385, CPyStatic_emitwrapper___globals);
        goto CPyL16;
    }
    if (likely(PyUnicode_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_forward_only_wrapper", 385, CPyStatic_emitwrapper___globals, "str", cpy_r_r16);
        goto CPyL16;
    }
    cpy_r_r18 = CPyDef_emitwrapper___generate_bin_op_reverse_dunder_call(cpy_r_fn, cpy_r_emitter, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_forward_only_wrapper", 385, CPyStatic_emitwrapper___globals);
        goto CPyL16;
    }
    cpy_r_r19 = CPyDef_emitwrapper___WrapperGenerator___finish(cpy_r_gen);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_forward_only_wrapper", 386, CPyStatic_emitwrapper___globals);
        goto CPyL16;
    }
    return 1;
CPyL16: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
}

PyObject *CPyPy_emitwrapper___generate_bin_op_forward_only_wrapper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "emitter", "gen", 0};
    static CPyArg_Parser parser = {"OOO:generate_bin_op_forward_only_wrapper", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_emitter;
    PyObject *obj_gen;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_emitter, &obj_gen)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *arg_gen;
    if (likely(Py_TYPE(obj_gen) == CPyType_emitwrapper___WrapperGenerator))
        arg_gen = obj_gen;
    else {
        CPy_TypeError("mypyc.codegen.emitwrapper.WrapperGenerator", obj_gen); 
        goto fail;
    }
    char retval = CPyDef_emitwrapper___generate_bin_op_forward_only_wrapper(arg_fn, arg_emitter, arg_gen);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_forward_only_wrapper", 362, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___generate_bin_op_reverse_only_wrapper(PyObject *cpy_r_fn, PyObject *cpy_r_emitter, PyObject *cpy_r_gen) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    CPyPtr cpy_r_r4;
    CPyPtr cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    cpy_r_r0 = CPyStatics[2412]; /* 'right' */
    cpy_r_r1 = CPyStatics[2411]; /* 'left' */
    cpy_r_r2 = PyList_New(2);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_only_wrapper", 392, CPyStatic_emitwrapper___globals);
        goto CPyL13;
    }
    cpy_r_r3 = (CPyPtr)&((PyListObject *)cpy_r_r2)->ob_item;
    cpy_r_r4 = *(CPyPtr *)cpy_r_r3;
    CPy_INCREF(cpy_r_r0);
    *(PyObject * *)cpy_r_r4 = cpy_r_r0;
    cpy_r_r5 = cpy_r_r4 + 8;
    CPy_INCREF(cpy_r_r1);
    *(PyObject * *)cpy_r_r5 = cpy_r_r1;
    if (((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names != NULL) {
        CPy_DECREF(((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names);
    }
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names = cpy_r_r2;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_only_wrapper", 392, CPyStatic_emitwrapper___globals);
        goto CPyL13;
    }
    cpy_r_r7 = CPyStatics[7609]; /* 'typefail' */
    cpy_r_r8 = CPyDef_emit___GotoHandler(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_only_wrapper", 393, CPyStatic_emitwrapper___globals);
        goto CPyL13;
    }
    cpy_r_r9 = CPyDef_emitwrapper___WrapperGenerator___emit_arg_processing(cpy_r_gen, cpy_r_r8, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_only_wrapper", 393, CPyStatic_emitwrapper___globals);
        goto CPyL13;
    }
    cpy_r_r10 = CPyStatics[7610]; /* 'goto typefail;' */
    cpy_r_r11 = PyList_New(1);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_only_wrapper", 394, CPyStatic_emitwrapper___globals);
        goto CPyL13;
    }
    cpy_r_r12 = (CPyPtr)&((PyListObject *)cpy_r_r11)->ob_item;
    cpy_r_r13 = *(CPyPtr *)cpy_r_r12;
    CPy_INCREF(cpy_r_r10);
    *(PyObject * *)cpy_r_r13 = cpy_r_r10;
    cpy_r_r14 = CPyDef_emitwrapper___handle_third_pow_argument(cpy_r_fn, cpy_r_emitter, cpy_r_gen, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_only_wrapper", 394, CPyStatic_emitwrapper___globals);
        goto CPyL13;
    }
    cpy_r_r15 = NULL;
    cpy_r_r16 = CPyDef_emitwrapper___WrapperGenerator___emit_call(cpy_r_gen, cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_only_wrapper", 395, CPyStatic_emitwrapper___globals);
        goto CPyL13;
    }
    cpy_r_r17 = CPyDef_emitwrapper___WrapperGenerator___emit_error_handling(cpy_r_gen);
    if (unlikely(cpy_r_r17 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_only_wrapper", 396, CPyStatic_emitwrapper___globals);
        goto CPyL13;
    }
    cpy_r_r18 = CPyStatics[7609]; /* 'typefail' */
    cpy_r_r19 = CPyDef_emit___Emitter___emit_label(cpy_r_emitter, cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_only_wrapper", 397, CPyStatic_emitwrapper___globals);
        goto CPyL13;
    }
    cpy_r_r20 = CPyStatics[7611]; /* 'Py_INCREF(Py_NotImplemented);' */
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r20, cpy_r_r21);
    if (unlikely(cpy_r_r22 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_only_wrapper", 398, CPyStatic_emitwrapper___globals);
        goto CPyL13;
    }
    cpy_r_r23 = CPyStatics[7612]; /* 'return Py_NotImplemented;' */
    cpy_r_r24 = NULL;
    cpy_r_r25 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r23, cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_only_wrapper", 399, CPyStatic_emitwrapper___globals);
        goto CPyL13;
    }
    cpy_r_r26 = CPyDef_emitwrapper___WrapperGenerator___finish(cpy_r_gen);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_only_wrapper", 400, CPyStatic_emitwrapper___globals);
        goto CPyL13;
    }
    return 1;
CPyL13: ;
    cpy_r_r27 = 2;
    return cpy_r_r27;
}

PyObject *CPyPy_emitwrapper___generate_bin_op_reverse_only_wrapper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "emitter", "gen", 0};
    static CPyArg_Parser parser = {"OOO:generate_bin_op_reverse_only_wrapper", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_emitter;
    PyObject *obj_gen;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_emitter, &obj_gen)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *arg_gen;
    if (likely(Py_TYPE(obj_gen) == CPyType_emitwrapper___WrapperGenerator))
        arg_gen = obj_gen;
    else {
        CPy_TypeError("mypyc.codegen.emitwrapper.WrapperGenerator", obj_gen); 
        goto fail;
    }
    char retval = CPyDef_emitwrapper___generate_bin_op_reverse_only_wrapper(arg_fn, arg_emitter, arg_gen);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_only_wrapper", 389, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___generate_bin_op_both_wrappers(PyObject *cpy_r_cl, PyObject *cpy_r_fn, PyObject *cpy_r_fn_rev, PyObject *cpy_r_emitter, PyObject *cpy_r_gen) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyPtr cpy_r_r11;
    CPyPtr cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_fwd_not_implemented_handler;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyPtr cpy_r_r44;
    CPyPtr cpy_r_r45;
    CPyPtr cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyPtr cpy_r_r53;
    CPyPtr cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    cpy_r_r0 = CPyDef_emit___Emitter___type_struct_name(cpy_r_emitter, cpy_r_cl);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 416, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r1 = CPyStatics[7613]; /* 'if (PyObject_IsInstance(obj_left, (PyObject *)' */
    cpy_r_r2 = CPyStatics[6893]; /* ')) {' */
    cpy_r_r3 = CPyStr_Build(3, cpy_r_r1, cpy_r_r0, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 415, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r4 = NULL;
    cpy_r_r5 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 414, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r6 = CPyStatics[7609]; /* 'typefail' */
    cpy_r_r7 = CPyDef_emit___GotoHandler(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 419, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r8 = CPyDef_emitwrapper___WrapperGenerator___emit_arg_processing(cpy_r_gen, cpy_r_r7, 0);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 419, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r9 = CPyStatics[7614]; /* 'goto typefail2;' */
    cpy_r_r10 = PyList_New(1);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 420, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r11 = (CPyPtr)&((PyListObject *)cpy_r_r10)->ob_item;
    cpy_r_r12 = *(CPyPtr *)cpy_r_r11;
    CPy_INCREF(cpy_r_r9);
    *(PyObject * *)cpy_r_r12 = cpy_r_r9;
    cpy_r_r13 = CPyDef_emitwrapper___handle_third_pow_argument(cpy_r_fn, cpy_r_emitter, cpy_r_gen, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 420, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r14 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 423, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
CPyL8: ;
    cpy_r_r15 = CPyStatics[4189]; /* '__pow__' */
    cpy_r_r16 = PyUnicode_Compare(cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r17 = cpy_r_r16 == -1;
    if (!cpy_r_r17) goto CPyL11;
    cpy_r_r18 = PyErr_Occurred();
    cpy_r_r19 = cpy_r_r18 != NULL;
    if (!cpy_r_r19) goto CPyL11;
    cpy_r_r20 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 423, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
CPyL11: ;
    cpy_r_r21 = cpy_r_r16 == 0;
    if (!cpy_r_r21) goto CPyL16;
    cpy_r_r22 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 2, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* args */
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 423, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
CPyL13: ;
    cpy_r_r23 = CPyObject_Size(cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 423, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r24 = cpy_r_r23 == 6;
    CPyTagged_DECREF(cpy_r_r23);
    if (!cpy_r_r24) goto CPyL16;
    cpy_r_r25 = CPyStatics[7614]; /* 'goto typefail2;' */
    CPy_INCREF(cpy_r_r25);
    cpy_r_fwd_not_implemented_handler = cpy_r_r25;
    goto CPyL17;
CPyL16: ;
    cpy_r_r26 = CPyStatics[7610]; /* 'goto typefail;' */
    CPy_INCREF(cpy_r_r26);
    cpy_r_fwd_not_implemented_handler = cpy_r_r26;
CPyL17: ;
    cpy_r_r27 = CPyDef_emitwrapper___WrapperGenerator___emit_call(cpy_r_gen, cpy_r_fwd_not_implemented_handler);
    CPy_DECREF(cpy_r_fwd_not_implemented_handler);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 427, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r28 = CPyDef_emitwrapper___WrapperGenerator___emit_error_handling(cpy_r_gen);
    if (unlikely(cpy_r_r28 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 428, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r29 = CPyStatics[1406]; /* '}' */
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 429, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r32 = CPyStatics[7609]; /* 'typefail' */
    cpy_r_r33 = CPyDef_emit___Emitter___emit_label(cpy_r_emitter, cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 430, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r34 = CPyDef_emit___Emitter___type_struct_name(cpy_r_emitter, cpy_r_cl);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 433, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r35 = CPyStatics[7615]; /* 'if (PyObject_IsInstance(obj_right, (PyObject *)' */
    cpy_r_r36 = CPyStatics[6893]; /* ')) {' */
    cpy_r_r37 = CPyStr_Build(3, cpy_r_r35, cpy_r_r34, cpy_r_r36);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 432, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r38 = NULL;
    cpy_r_r39 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 431, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r40 = CPyDef_emitwrapper___WrapperGenerator___set_target(cpy_r_gen, cpy_r_fn_rev);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 436, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r41 = CPyStatics[2412]; /* 'right' */
    cpy_r_r42 = CPyStatics[2411]; /* 'left' */
    cpy_r_r43 = PyList_New(2);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 437, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r44 = (CPyPtr)&((PyListObject *)cpy_r_r43)->ob_item;
    cpy_r_r45 = *(CPyPtr *)cpy_r_r44;
    CPy_INCREF(cpy_r_r41);
    *(PyObject * *)cpy_r_r45 = cpy_r_r41;
    cpy_r_r46 = cpy_r_r45 + 8;
    CPy_INCREF(cpy_r_r42);
    *(PyObject * *)cpy_r_r46 = cpy_r_r42;
    if (((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names != NULL) {
        CPy_DECREF(((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names);
    }
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names = cpy_r_r43;
    cpy_r_r47 = 1;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 437, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r48 = CPyStatics[7616]; /* 'typefail2' */
    cpy_r_r49 = CPyDef_emit___GotoHandler(cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 438, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r50 = CPyDef_emitwrapper___WrapperGenerator___emit_arg_processing(cpy_r_gen, cpy_r_r49, 0);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 438, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r51 = CPyStatics[7614]; /* 'goto typefail2;' */
    cpy_r_r52 = PyList_New(1);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 439, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r53 = (CPyPtr)&((PyListObject *)cpy_r_r52)->ob_item;
    cpy_r_r54 = *(CPyPtr *)cpy_r_r53;
    CPy_INCREF(cpy_r_r51);
    *(PyObject * *)cpy_r_r54 = cpy_r_r51;
    cpy_r_r55 = CPyDef_emitwrapper___handle_third_pow_argument(cpy_r_fn_rev, cpy_r_emitter, cpy_r_gen, cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 439, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r56 = NULL;
    cpy_r_r57 = CPyDef_emitwrapper___WrapperGenerator___emit_call(cpy_r_gen, cpy_r_r56);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 440, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r58 = CPyDef_emitwrapper___WrapperGenerator___emit_error_handling(cpy_r_gen);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 441, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r59 = CPyStatics[6977]; /* '} else {' */
    cpy_r_r60 = NULL;
    cpy_r_r61 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 442, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r62 = CPY_GET_ATTR(cpy_r_fn_rev, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 443, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
CPyL35: ;
    cpy_r_r63 = CPyDef_emitwrapper___generate_bin_op_reverse_dunder_call(cpy_r_fn, cpy_r_emitter, cpy_r_r62);
    CPy_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 443, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r64 = CPyStatics[1406]; /* '}' */
    cpy_r_r65 = NULL;
    cpy_r_r66 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 444, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r67 = CPyStatics[7616]; /* 'typefail2' */
    cpy_r_r68 = CPyDef_emit___Emitter___emit_label(cpy_r_emitter, cpy_r_r67);
    if (unlikely(cpy_r_r68 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 445, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r69 = CPyStatics[7611]; /* 'Py_INCREF(Py_NotImplemented);' */
    cpy_r_r70 = NULL;
    cpy_r_r71 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r69, cpy_r_r70);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 446, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r72 = CPyStatics[7612]; /* 'return Py_NotImplemented;' */
    cpy_r_r73 = NULL;
    cpy_r_r74 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r72, cpy_r_r73);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 447, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    cpy_r_r75 = CPyDef_emitwrapper___WrapperGenerator___finish(cpy_r_gen);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 448, CPyStatic_emitwrapper___globals);
        goto CPyL42;
    }
    return 1;
CPyL42: ;
    cpy_r_r76 = 2;
    return cpy_r_r76;
}

PyObject *CPyPy_emitwrapper___generate_bin_op_both_wrappers(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "fn", "fn_rev", "emitter", "gen", 0};
    static CPyArg_Parser parser = {"OOOOO:generate_bin_op_both_wrappers", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_fn;
    PyObject *obj_fn_rev;
    PyObject *obj_emitter;
    PyObject *obj_gen;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_fn, &obj_fn_rev, &obj_emitter, &obj_gen)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_fn_rev;
    if (likely(Py_TYPE(obj_fn_rev) == CPyType_func_ir___FuncIR))
        arg_fn_rev = obj_fn_rev;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn_rev); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *arg_gen;
    if (likely(Py_TYPE(obj_gen) == CPyType_emitwrapper___WrapperGenerator))
        arg_gen = obj_gen;
    else {
        CPy_TypeError("mypyc.codegen.emitwrapper.WrapperGenerator", obj_gen); 
        goto fail;
    }
    char retval = CPyDef_emitwrapper___generate_bin_op_both_wrappers(arg_cl, arg_fn, arg_fn_rev, arg_emitter, arg_gen);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_both_wrappers", 403, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___generate_bin_op_reverse_dunder_call(PyObject *cpy_r_fn, PyObject *cpy_r_emitter, PyObject *cpy_r_rmethod) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
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
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    int32_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 452, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
CPyL1: ;
    cpy_r_r1 = CPyStatics[4189]; /* '__pow__' */
    cpy_r_r2 = PyUnicode_Compare(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 == -1;
    if (!cpy_r_r3) goto CPyL4;
    cpy_r_r4 = PyErr_Occurred();
    cpy_r_r5 = cpy_r_r4 != NULL;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", -1, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
CPyL4: ;
    cpy_r_r7 = cpy_r_r2 == 0;
    if (!cpy_r_r7) goto CPyL6;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL11;
CPyL6: ;
    cpy_r_r9 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 452, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
CPyL7: ;
    cpy_r_r10 = CPyStatics[4209]; /* '__rpow__' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL10;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL10;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", -1, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
CPyL10: ;
    cpy_r_r16 = cpy_r_r11 == 0;
    cpy_r_r8 = cpy_r_r16;
CPyL11: ;
    if (!cpy_r_r8) goto CPyL13;
    cpy_r_r17 = CPyStatics[7617]; /* 'if (obj_mod == Py_None) {' */
    cpy_r_r18 = NULL;
    cpy_r_r19 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 454, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
CPyL13: ;
    cpy_r_r20 = CPyStatics[7618]; /* '_Py_IDENTIFIER(' */
    cpy_r_r21 = CPyStatics[6872]; /* ');' */
    cpy_r_r22 = CPyStr_Build(3, cpy_r_r20, cpy_r_rmethod, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 455, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 455, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
    cpy_r_r25 = CPyStatic_operators___op_methods_to_symbols;
    if (likely(cpy_r_r25 != NULL)) goto CPyL18;
    PyErr_SetString(PyExc_NameError, "value for final name \"op_methods_to_symbols\" was not set");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 458, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r27 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 458, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
CPyL19: ;
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r25, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 458, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
    if (likely(PyUnicode_Check(cpy_r_r28)))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 458, CPyStatic_emitwrapper___globals, "str", cpy_r_r28);
        goto CPyL40;
    }
    cpy_r_r30 = CPyStatics[7619]; /* 'return CPy_CallReverseOpMethod(obj_left, obj_right, "' */
    cpy_r_r31 = CPyStatics[7620]; /* '", &PyId_' */
    cpy_r_r32 = CPyStatics[6872]; /* ');' */
    cpy_r_r33 = CPyStr_Build(5, cpy_r_r30, cpy_r_r29, cpy_r_r31, cpy_r_rmethod, cpy_r_r32);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 457, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
    cpy_r_r34 = NULL;
    cpy_r_r35 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 456, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
    cpy_r_r36 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 461, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
CPyL24: ;
    cpy_r_r37 = CPyStatics[4189]; /* '__pow__' */
    cpy_r_r38 = PyUnicode_Compare(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r39 = cpy_r_r38 == -1;
    if (!cpy_r_r39) goto CPyL27;
    cpy_r_r40 = PyErr_Occurred();
    cpy_r_r41 = cpy_r_r40 != NULL;
    if (!cpy_r_r41) goto CPyL27;
    cpy_r_r42 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", -1, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
CPyL27: ;
    cpy_r_r43 = cpy_r_r38 == 0;
    if (!cpy_r_r43) goto CPyL29;
    cpy_r_r44 = cpy_r_r43;
    goto CPyL34;
CPyL29: ;
    cpy_r_r45 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 461, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
CPyL30: ;
    cpy_r_r46 = CPyStatics[4209]; /* '__rpow__' */
    cpy_r_r47 = PyUnicode_Compare(cpy_r_r45, cpy_r_r46);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r48 = cpy_r_r47 == -1;
    if (!cpy_r_r48) goto CPyL33;
    cpy_r_r49 = PyErr_Occurred();
    cpy_r_r50 = cpy_r_r49 != NULL;
    if (!cpy_r_r50) goto CPyL33;
    cpy_r_r51 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", -1, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
CPyL33: ;
    cpy_r_r52 = cpy_r_r47 == 0;
    cpy_r_r44 = cpy_r_r52;
CPyL34: ;
    if (!cpy_r_r44) goto CPyL39;
    cpy_r_r53 = CPyStatics[6977]; /* '} else {' */
    cpy_r_r54 = NULL;
    cpy_r_r55 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r53, cpy_r_r54);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 462, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
    cpy_r_r56 = CPyStatics[7611]; /* 'Py_INCREF(Py_NotImplemented);' */
    cpy_r_r57 = NULL;
    cpy_r_r58 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 463, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
    cpy_r_r59 = CPyStatics[7612]; /* 'return Py_NotImplemented;' */
    cpy_r_r60 = NULL;
    cpy_r_r61 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r59, cpy_r_r60);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 464, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
    cpy_r_r62 = CPyStatics[1406]; /* '}' */
    cpy_r_r63 = NULL;
    cpy_r_r64 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 465, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
CPyL39: ;
    return 1;
CPyL40: ;
    cpy_r_r65 = 2;
    return cpy_r_r65;
}

PyObject *CPyPy_emitwrapper___generate_bin_op_reverse_dunder_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "emitter", "rmethod", 0};
    static CPyArg_Parser parser = {"OOO:generate_bin_op_reverse_dunder_call", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_emitter;
    PyObject *obj_rmethod;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_emitter, &obj_rmethod)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *arg_rmethod;
    if (likely(PyUnicode_Check(obj_rmethod)))
        arg_rmethod = obj_rmethod;
    else {
        CPy_TypeError("str", obj_rmethod); 
        goto fail;
    }
    char retval = CPyDef_emitwrapper___generate_bin_op_reverse_dunder_call(arg_fn, arg_emitter, arg_rmethod);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bin_op_reverse_dunder_call", 451, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___handle_third_pow_argument(PyObject *cpy_r_fn, PyObject *cpy_r_emitter, PyObject *cpy_r_gen, PyObject *cpy_r_if_unsupported) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
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
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    int32_t cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    int32_t cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    CPyTagged cpy_r_r57;
    CPyPtr cpy_r_r58;
    int64_t cpy_r_r59;
    CPyTagged cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_line;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    CPyTagged cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    CPyPtr cpy_r_r71;
    int64_t cpy_r_r72;
    CPyTagged cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    char cpy_r_r78;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", 471, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
CPyL1: ;
    cpy_r_r1 = CPyStatics[4189]; /* '__pow__' */
    cpy_r_r2 = PyUnicode_Compare(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 == -1;
    if (!cpy_r_r3) goto CPyL4;
    cpy_r_r4 = PyErr_Occurred();
    cpy_r_r5 = cpy_r_r4 != NULL;
    if (!cpy_r_r5) goto CPyL4;
    cpy_r_r6 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", -1, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
CPyL4: ;
    cpy_r_r7 = cpy_r_r2 != 0;
    if (cpy_r_r7) goto CPyL6;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL11;
CPyL6: ;
    cpy_r_r9 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", 471, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
CPyL7: ;
    cpy_r_r10 = CPyStatics[4209]; /* '__rpow__' */
    cpy_r_r11 = PyUnicode_Compare(cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 == -1;
    if (!cpy_r_r12) goto CPyL10;
    cpy_r_r13 = PyErr_Occurred();
    cpy_r_r14 = cpy_r_r13 != NULL;
    if (!cpy_r_r14) goto CPyL10;
    cpy_r_r15 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", -1, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
CPyL10: ;
    cpy_r_r16 = cpy_r_r11 != 0;
    cpy_r_r8 = cpy_r_r16;
CPyL11: ;
    if (cpy_r_r8) goto CPyL13;
    cpy_r_r17 = cpy_r_r8;
    goto CPyL18;
CPyL13: ;
    cpy_r_r18 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", 471, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
CPyL14: ;
    cpy_r_r19 = CPyStatics[5443]; /* '__ipow__' */
    cpy_r_r20 = PyUnicode_Compare(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r21 = cpy_r_r20 == -1;
    if (!cpy_r_r21) goto CPyL17;
    cpy_r_r22 = PyErr_Occurred();
    cpy_r_r23 = cpy_r_r22 != NULL;
    if (!cpy_r_r23) goto CPyL17;
    cpy_r_r24 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", -1, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
CPyL17: ;
    cpy_r_r25 = cpy_r_r20 != 0;
    cpy_r_r17 = cpy_r_r25;
CPyL18: ;
    if (!cpy_r_r17) goto CPyL20;
    return 1;
CPyL20: ;
    cpy_r_r26 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", 474, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
CPyL21: ;
    cpy_r_r27 = CPyStatics[4189]; /* '__pow__' */
    cpy_r_r28 = PyUnicode_Compare(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r29 = cpy_r_r28 == -1;
    if (!cpy_r_r29) goto CPyL24;
    cpy_r_r30 = PyErr_Occurred();
    cpy_r_r31 = cpy_r_r30 != NULL;
    if (!cpy_r_r31) goto CPyL24;
    cpy_r_r32 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", -1, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
CPyL24: ;
    cpy_r_r33 = cpy_r_r28 == 0;
    if (!cpy_r_r33) goto CPyL26;
    cpy_r_r34 = cpy_r_r33;
    goto CPyL31;
CPyL26: ;
    cpy_r_r35 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", 474, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
CPyL27: ;
    cpy_r_r36 = CPyStatics[5443]; /* '__ipow__' */
    cpy_r_r37 = PyUnicode_Compare(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r38 = cpy_r_r37 == -1;
    if (!cpy_r_r38) goto CPyL30;
    cpy_r_r39 = PyErr_Occurred();
    cpy_r_r40 = cpy_r_r39 != NULL;
    if (!cpy_r_r40) goto CPyL30;
    cpy_r_r41 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", -1, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
CPyL30: ;
    cpy_r_r42 = cpy_r_r37 == 0;
    cpy_r_r34 = cpy_r_r42;
CPyL31: ;
    if (!cpy_r_r34) goto CPyL35;
    cpy_r_r43 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 2, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* args */
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", 474, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
CPyL33: ;
    cpy_r_r44 = CPyObject_Size(cpy_r_r43);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", 474, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
    cpy_r_r45 = cpy_r_r44 == 4;
    CPyTagged_DECREF(cpy_r_r44);
    if (cpy_r_r45) goto CPyL40;
CPyL35: ;
    cpy_r_r46 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", 474, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
CPyL36: ;
    cpy_r_r47 = CPyStatics[4209]; /* '__rpow__' */
    cpy_r_r48 = PyUnicode_Compare(cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r46);
    cpy_r_r49 = cpy_r_r48 == -1;
    if (!cpy_r_r49) goto CPyL39;
    cpy_r_r50 = PyErr_Occurred();
    cpy_r_r51 = cpy_r_r50 != NULL;
    if (!cpy_r_r51) goto CPyL39;
    cpy_r_r52 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", 474, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
CPyL39: ;
    cpy_r_r53 = cpy_r_r48 == 0;
    if (!cpy_r_r53) goto CPyL52;
CPyL40: ;
    cpy_r_r54 = CPyStatics[7621]; /* 'if (obj_mod != Py_None) {' */
    cpy_r_r55 = NULL;
    cpy_r_r56 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r54, cpy_r_r55);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", 480, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
    cpy_r_r57 = 0;
CPyL42: ;
    cpy_r_r58 = (CPyPtr)&((PyVarObject *)cpy_r_if_unsupported)->ob_size;
    cpy_r_r59 = *(int64_t *)cpy_r_r58;
    cpy_r_r60 = cpy_r_r59 << 1;
    cpy_r_r61 = (Py_ssize_t)cpy_r_r57 < (Py_ssize_t)cpy_r_r60;
    if (!cpy_r_r61) goto CPyL46;
    cpy_r_r62 = CPyList_GetItemUnsafe(cpy_r_if_unsupported, cpy_r_r57);
    if (likely(PyUnicode_Check(cpy_r_r62)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", 481, CPyStatic_emitwrapper___globals, "str", cpy_r_r62);
        goto CPyL53;
    }
    cpy_r_line = cpy_r_r63;
    cpy_r_r64 = NULL;
    cpy_r_r65 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_line, cpy_r_r64);
    CPy_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", 482, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
    cpy_r_r66 = cpy_r_r57 + 2;
    cpy_r_r57 = cpy_r_r66;
    goto CPyL42;
CPyL46: ;
    cpy_r_r67 = CPyStatics[1406]; /* '}' */
    cpy_r_r68 = NULL;
    cpy_r_r69 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", 483, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
    cpy_r_r70 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names;
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", "WrapperGenerator", "arg_names", 488, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
CPyL48: ;
    cpy_r_r71 = (CPyPtr)&((PyVarObject *)cpy_r_r70)->ob_size;
    cpy_r_r72 = *(int64_t *)cpy_r_r71;
    cpy_r_r73 = cpy_r_r72 << 1;
    cpy_r_r74 = cpy_r_r73 == 6;
    if (!cpy_r_r74) goto CPyL52;
    cpy_r_r75 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names;
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", "WrapperGenerator", "arg_names", 489, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r75);
CPyL50: ;
    cpy_r_r76 = CPyList_PopLast(cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", 489, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
    if (likely(PyUnicode_Check(cpy_r_r76)))
        cpy_r_r77 = cpy_r_r76;
    else {
        CPy_TypeError("str", cpy_r_r76); 
        cpy_r_r77 = NULL;
    }
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", 489, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    } else
        goto CPyL54;
CPyL52: ;
    return 1;
CPyL53: ;
    cpy_r_r78 = 2;
    return cpy_r_r78;
CPyL54: ;
    CPy_DECREF(cpy_r_r77);
    goto CPyL52;
}

PyObject *CPyPy_emitwrapper___handle_third_pow_argument(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "emitter", "gen", "if_unsupported", 0};
    static CPyArg_Parser parser = {"OOO|$@O:handle_third_pow_argument", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_emitter;
    PyObject *obj_gen;
    PyObject *obj_if_unsupported;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_fn, &obj_emitter, &obj_gen, &obj_if_unsupported)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *arg_gen;
    if (likely(Py_TYPE(obj_gen) == CPyType_emitwrapper___WrapperGenerator))
        arg_gen = obj_gen;
    else {
        CPy_TypeError("mypyc.codegen.emitwrapper.WrapperGenerator", obj_gen); 
        goto fail;
    }
    PyObject *arg_if_unsupported;
    if (likely(PyList_Check(obj_if_unsupported)))
        arg_if_unsupported = obj_if_unsupported;
    else {
        CPy_TypeError("list", obj_if_unsupported); 
        goto fail;
    }
    char retval = CPyDef_emitwrapper___handle_third_pow_argument(arg_fn, arg_emitter, arg_gen, arg_if_unsupported);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "handle_third_pow_argument", 468, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___generate_richcompare_wrapper(PyObject *cpy_r_cl, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    int64_t cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    tuple_T3CIO cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_name;
    char cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject **cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_matches;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_name_2;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject **cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyPtr cpy_r_r49;
    int64_t cpy_r_r50;
    CPyTagged cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_func;
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
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_method;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    CPyPtr cpy_r_r75;
    CPyPtr cpy_r_r76;
    CPyPtr cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    CPyTagged cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 505, CPyStatic_emitwrapper___globals);
        goto CPyL45;
    }
    cpy_r_r1 = CPyStatic_emitwrapper___globals;
    cpy_r_r2 = CPyStatics[7622]; /* 'RICHCOMPARE_OPS' */
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 505, CPyStatic_emitwrapper___globals);
        goto CPyL46;
    }
    if (likely(PyDict_Check(cpy_r_r3)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 505, CPyStatic_emitwrapper___globals, "dict", cpy_r_r3);
        goto CPyL46;
    }
    cpy_r_r5 = 0;
    cpy_r_r6 = PyDict_Size(cpy_r_r4);
    cpy_r_r7 = cpy_r_r6 << 1;
    cpy_r_r8 = CPyDict_GetKeysIter(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 505, CPyStatic_emitwrapper___globals);
        goto CPyL47;
    }
CPyL4: ;
    cpy_r_r9 = CPyDict_NextKey(cpy_r_r8, cpy_r_r5);
    cpy_r_r10 = cpy_r_r9.f1;
    cpy_r_r5 = cpy_r_r10;
    cpy_r_r11 = cpy_r_r9.f0;
    if (!cpy_r_r11) goto CPyL48;
    cpy_r_r12 = cpy_r_r9.f2;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r9.f2);
    if (likely(PyUnicode_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 505, CPyStatic_emitwrapper___globals, "str", cpy_r_r12);
        goto CPyL49;
    }
    cpy_r_name = cpy_r_r13;
    cpy_r_r14 = CPyDef_class_ir___ClassIR___has_method(cpy_r_cl, cpy_r_name);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 505, CPyStatic_emitwrapper___globals);
        goto CPyL50;
    }
    if (!cpy_r_r14) goto CPyL51;
    cpy_r_r15 = PyList_Append(cpy_r_r0, cpy_r_name);
    CPy_DECREF(cpy_r_name);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 505, CPyStatic_emitwrapper___globals);
        goto CPyL49;
    }
CPyL9: ;
    cpy_r_r17 = CPyDict_CheckSize(cpy_r_r4, cpy_r_r7);
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 505, CPyStatic_emitwrapper___globals);
        goto CPyL49;
    } else
        goto CPyL4;
CPyL10: ;
    cpy_r_r18 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 505, CPyStatic_emitwrapper___globals);
        goto CPyL46;
    }
    cpy_r_r19 = CPyModule_builtins;
    cpy_r_r20 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 505, CPyStatic_emitwrapper___globals);
        goto CPyL46;
    }
    PyObject *cpy_r_r22[1] = {cpy_r_r0};
    cpy_r_r23 = (PyObject **)&cpy_r_r22;
    cpy_r_r24 = _PyObject_Vectorcall(cpy_r_r21, cpy_r_r23, 1, 0);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 505, CPyStatic_emitwrapper___globals);
        goto CPyL46;
    }
    CPy_DECREF(cpy_r_r0);
    if (likely(PyList_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 505, CPyStatic_emitwrapper___globals, "list", cpy_r_r24);
        goto CPyL45;
    }
    cpy_r_matches = cpy_r_r25;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_matches)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = cpy_r_r28 != 0;
    if (cpy_r_r29) {
        goto CPyL16;
    } else
        goto CPyL52;
CPyL15: ;
    cpy_r_r30 = Py_None;
    CPy_INCREF(cpy_r_r30);
    return cpy_r_r30;
CPyL16: ;
    cpy_r_r31 = CPyStatics[7623]; /* 'CPyDunder_' */
    cpy_r_r32 = CPyStatics[7624]; /* '_RichCompare_' */
    cpy_r_r33 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = CPyDef_class_ir___ClassIR___name_prefix(cpy_r_cl, cpy_r_r33);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 509, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
    cpy_r_r35 = CPyStr_Build(3, cpy_r_r31, cpy_r_r32, cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 509, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
    cpy_r_name_2 = cpy_r_r35;
    cpy_r_r36 = CPyStatics[7625]; /* ('static PyObject *{name}(PyObject *obj_lhs, PyObject '
                                     '*obj_rhs, int op) {{') */
    cpy_r_r37 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r38[2] = {cpy_r_r36, cpy_r_name_2};
    cpy_r_r39 = (PyObject **)&cpy_r_r38;
    cpy_r_r40 = CPyStatics[9646]; /* ('name',) */
    cpy_r_r41 = PyObject_VectorcallMethod(cpy_r_r37, cpy_r_r39, 9223372036854775809ULL, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 511, CPyStatic_emitwrapper___globals);
        goto CPyL54;
    }
    if (likely(PyUnicode_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 511, CPyStatic_emitwrapper___globals, "str", cpy_r_r41);
        goto CPyL54;
    }
    cpy_r_r43 = NULL;
    cpy_r_r44 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 510, CPyStatic_emitwrapper___globals);
        goto CPyL54;
    }
    cpy_r_r45 = CPyStatics[7626]; /* 'switch (op) {' */
    cpy_r_r46 = NULL;
    cpy_r_r47 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 515, CPyStatic_emitwrapper___globals);
        goto CPyL54;
    }
    cpy_r_r48 = 0;
CPyL23: ;
    cpy_r_r49 = (CPyPtr)&((PyVarObject *)cpy_r_matches)->ob_size;
    cpy_r_r50 = *(int64_t *)cpy_r_r49;
    cpy_r_r51 = cpy_r_r50 << 1;
    cpy_r_r52 = (Py_ssize_t)cpy_r_r48 < (Py_ssize_t)cpy_r_r51;
    if (!cpy_r_r52) goto CPyL55;
    cpy_r_r53 = CPyList_GetItemUnsafe(cpy_r_matches, cpy_r_r48);
    if (likely(PyUnicode_Check(cpy_r_r53)))
        cpy_r_r54 = cpy_r_r53;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 516, CPyStatic_emitwrapper___globals, "str", cpy_r_r53);
        goto CPyL54;
    }
    cpy_r_func = cpy_r_r54;
    cpy_r_r55 = CPyStatics[7627]; /* 'case ' */
    cpy_r_r56 = CPyStatic_emitwrapper___globals;
    cpy_r_r57 = CPyStatics[7622]; /* 'RICHCOMPARE_OPS' */
    cpy_r_r58 = CPyDict_GetItem(cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 517, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    }
    if (likely(PyDict_Check(cpy_r_r58)))
        cpy_r_r59 = cpy_r_r58;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 517, CPyStatic_emitwrapper___globals, "dict", cpy_r_r58);
        goto CPyL56;
    }
    cpy_r_r60 = CPyDict_GetItem(cpy_r_r59, cpy_r_func);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 517, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    }
    if (likely(PyUnicode_Check(cpy_r_r60)))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 517, CPyStatic_emitwrapper___globals, "str", cpy_r_r60);
        goto CPyL56;
    }
    cpy_r_r62 = CPyStatics[7628]; /* ': {' */
    cpy_r_r63 = CPyStr_Build(3, cpy_r_r55, cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 517, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    }
    cpy_r_r64 = NULL;
    cpy_r_r65 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 517, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    }
    cpy_r_r66 = 2;
    cpy_r_r67 = CPyDef_class_ir___ClassIR___get_method(cpy_r_cl, cpy_r_func, cpy_r_r66);
    CPy_DECREF(cpy_r_func);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 518, CPyStatic_emitwrapper___globals);
        goto CPyL54;
    }
    cpy_r_method = cpy_r_r67;
    cpy_r_r68 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r69 = cpy_r_method != cpy_r_r68;
    if (cpy_r_r69) {
        goto CPyL35;
    } else
        goto CPyL57;
CPyL33: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r70 = 0;
    if (unlikely(!cpy_r_r70)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 519, CPyStatic_emitwrapper___globals);
        goto CPyL45;
    }
    CPy_Unreachable();
CPyL35: ;
    if (likely(cpy_r_method != Py_None))
        cpy_r_r71 = cpy_r_method;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 520, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.FuncIR", cpy_r_method);
        goto CPyL54;
    }
    cpy_r_r72 = CPyStatics[7629]; /* 'lhs' */
    cpy_r_r73 = CPyStatics[7630]; /* 'rhs' */
    cpy_r_r74 = PyList_New(2);
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 520, CPyStatic_emitwrapper___globals);
        goto CPyL58;
    }
    cpy_r_r75 = (CPyPtr)&((PyListObject *)cpy_r_r74)->ob_item;
    cpy_r_r76 = *(CPyPtr *)cpy_r_r75;
    CPy_INCREF(cpy_r_r72);
    *(PyObject * *)cpy_r_r76 = cpy_r_r72;
    cpy_r_r77 = cpy_r_r76 + 8;
    CPy_INCREF(cpy_r_r73);
    *(PyObject * *)cpy_r_r77 = cpy_r_r73;
    cpy_r_r78 = NULL;
    cpy_r_r79 = NULL;
    cpy_r_r80 = NULL;
    cpy_r_r81 = CPyDef_emitwrapper___generate_wrapper_core(cpy_r_r71, cpy_r_emitter, cpy_r_r78, cpy_r_r74, cpy_r_r79, cpy_r_r80);
    CPy_DECREF(cpy_r_r71);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r81 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 520, CPyStatic_emitwrapper___globals);
        goto CPyL54;
    }
    cpy_r_r82 = CPyStatics[1406]; /* '}' */
    cpy_r_r83 = NULL;
    cpy_r_r84 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r82, cpy_r_r83);
    if (unlikely(cpy_r_r84 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 521, CPyStatic_emitwrapper___globals);
        goto CPyL54;
    }
    cpy_r_r85 = cpy_r_r48 + 2;
    cpy_r_r48 = cpy_r_r85;
    goto CPyL23;
CPyL40: ;
    cpy_r_r86 = CPyStatics[1406]; /* '}' */
    cpy_r_r87 = NULL;
    cpy_r_r88 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r86, cpy_r_r87);
    if (unlikely(cpy_r_r88 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 522, CPyStatic_emitwrapper___globals);
        goto CPyL59;
    }
    cpy_r_r89 = CPyStatics[7611]; /* 'Py_INCREF(Py_NotImplemented);' */
    cpy_r_r90 = NULL;
    cpy_r_r91 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 524, CPyStatic_emitwrapper___globals);
        goto CPyL59;
    }
    cpy_r_r92 = CPyStatics[7612]; /* 'return Py_NotImplemented;' */
    cpy_r_r93 = NULL;
    cpy_r_r94 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r92, cpy_r_r93);
    if (unlikely(cpy_r_r94 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 525, CPyStatic_emitwrapper___globals);
        goto CPyL59;
    }
    cpy_r_r95 = CPyStatics[1406]; /* '}' */
    cpy_r_r96 = NULL;
    cpy_r_r97 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r95, cpy_r_r96);
    if (unlikely(cpy_r_r97 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 527, CPyStatic_emitwrapper___globals);
        goto CPyL59;
    }
    return cpy_r_name_2;
CPyL45: ;
    cpy_r_r98 = NULL;
    return cpy_r_r98;
CPyL46: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL45;
CPyL47: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL45;
CPyL48: ;
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9.f2);
    goto CPyL10;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r8);
    goto CPyL45;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_name);
    goto CPyL45;
CPyL51: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL9;
CPyL52: ;
    CPy_DECREF(cpy_r_matches);
    goto CPyL15;
CPyL53: ;
    CPy_DecRef(cpy_r_matches);
    goto CPyL45;
CPyL54: ;
    CPy_DecRef(cpy_r_matches);
    CPy_DecRef(cpy_r_name_2);
    goto CPyL45;
CPyL55: ;
    CPy_DECREF(cpy_r_matches);
    goto CPyL40;
CPyL56: ;
    CPy_DecRef(cpy_r_matches);
    CPy_DecRef(cpy_r_name_2);
    CPy_DecRef(cpy_r_func);
    goto CPyL45;
CPyL57: ;
    CPy_DECREF(cpy_r_matches);
    CPy_DECREF(cpy_r_name_2);
    CPy_DECREF(cpy_r_method);
    goto CPyL33;
CPyL58: ;
    CPy_DecRef(cpy_r_matches);
    CPy_DecRef(cpy_r_name_2);
    CPy_DecRef(cpy_r_r71);
    goto CPyL45;
CPyL59: ;
    CPy_DecRef(cpy_r_name_2);
    goto CPyL45;
}

PyObject *CPyPy_emitwrapper___generate_richcompare_wrapper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "emitter", 0};
    static CPyArg_Parser parser = {"OO:generate_richcompare_wrapper", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___generate_richcompare_wrapper(arg_cl, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_richcompare_wrapper", 502, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___generate_get_wrapper(PyObject *cpy_r_cl, PyObject *cpy_r_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    cpy_r_r0 = CPyStatics[7623]; /* 'CPyDunder_' */
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_get_wrapper", 534, CPyStatic_emitwrapper___globals);
        goto CPyL12;
    }
CPyL1: ;
    cpy_r_r2 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_class_ir___ClassIR___name_prefix(cpy_r_cl, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_get_wrapper", 534, CPyStatic_emitwrapper___globals);
        goto CPyL13;
    }
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r0, cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_get_wrapper", 534, CPyStatic_emitwrapper___globals);
        goto CPyL12;
    }
    cpy_r_name = cpy_r_r4;
    cpy_r_r5 = CPyStatics[7631]; /* ('static PyObject *{name}(PyObject *self, PyObject '
                                    '*instance, PyObject *owner) {{') */
    cpy_r_r6 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r7[2] = {cpy_r_r5, cpy_r_name};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = CPyStatics[9646]; /* ('name',) */
    cpy_r_r10 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775809ULL, cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_get_wrapper", 536, CPyStatic_emitwrapper___globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_get_wrapper", 536, CPyStatic_emitwrapper___globals, "str", cpy_r_r10);
        goto CPyL14;
    }
    cpy_r_r12 = NULL;
    cpy_r_r13 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_get_wrapper", 535, CPyStatic_emitwrapper___globals);
        goto CPyL14;
    }
    cpy_r_r14 = CPyStatics[7632]; /* 'instance = instance ? instance : Py_None;' */
    cpy_r_r15 = NULL;
    cpy_r_r16 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_get_wrapper", 540, CPyStatic_emitwrapper___globals);
        goto CPyL14;
    }
    cpy_r_r17 = CPyStatics[6945]; /* 'return ' */
    cpy_r_r18 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r19 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = CPyDef_func_ir___FuncIR___cname(cpy_r_fn, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_get_wrapper", 541, CPyStatic_emitwrapper___globals);
        goto CPyL14;
    }
    cpy_r_r21 = CPyStatics[7633]; /* '(self, instance, owner);' */
    cpy_r_r22 = CPyStr_Build(4, cpy_r_r17, cpy_r_r18, cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_get_wrapper", 541, CPyStatic_emitwrapper___globals);
        goto CPyL14;
    }
    cpy_r_r23 = NULL;
    cpy_r_r24 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_get_wrapper", 541, CPyStatic_emitwrapper___globals);
        goto CPyL14;
    }
    cpy_r_r25 = CPyStatics[1406]; /* '}' */
    cpy_r_r26 = NULL;
    cpy_r_r27 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r25, cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_get_wrapper", 542, CPyStatic_emitwrapper___globals);
        goto CPyL14;
    }
    return cpy_r_name;
CPyL12: ;
    cpy_r_r28 = NULL;
    return cpy_r_r28;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL12;
CPyL14: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL12;
}

PyObject *CPyPy_emitwrapper___generate_get_wrapper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "fn", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_get_wrapper", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___generate_get_wrapper(arg_cl, arg_fn, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_get_wrapper", 532, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___generate_hash_wrapper(PyObject *cpy_r_cl, PyObject *cpy_r_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
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
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    cpy_r_r0 = CPyStatics[7623]; /* 'CPyDunder_' */
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 549, CPyStatic_emitwrapper___globals);
        goto CPyL25;
    }
CPyL1: ;
    cpy_r_r2 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_class_ir___ClassIR___name_prefix(cpy_r_cl, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 549, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r0, cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 549, CPyStatic_emitwrapper___globals);
        goto CPyL25;
    }
    cpy_r_name = cpy_r_r4;
    cpy_r_r5 = CPyStatics[7634]; /* 'static Py_ssize_t ' */
    cpy_r_r6 = CPyStatics[7635]; /* '(PyObject *self) {' */
    cpy_r_r7 = CPyStr_Build(3, cpy_r_r5, cpy_r_name, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 550, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 550, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_r10 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 553, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
CPyL6: ;
    cpy_r_r11 = CPyDef_emit___Emitter___ctype_spaced(cpy_r_emitter, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 553, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_r12 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_decl;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_emit___Emitter___get_group_prefix(cpy_r_emitter, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 554, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    cpy_r_r14 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r15 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyDef_func_ir___FuncIR___cname(cpy_r_fn, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 556, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r17 = CPyStatics[7249]; /* 'retval = ' */
    cpy_r_r18 = CPyStatics[7202]; /* '(self);' */
    cpy_r_r19 = CPyStr_Build(6, cpy_r_r11, cpy_r_r17, cpy_r_r13, cpy_r_r14, cpy_r_r16, cpy_r_r18);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 552, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_r20 = NULL;
    cpy_r_r21 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 551, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_r22 = CPyStatics[7233]; /* 'retval' */
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 559, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
CPyL12: ;
    cpy_r_r24 = CPyStatics[7240]; /* 'return -1;' */
    cpy_r_r25 = CPyDef_emit___Emitter___emit_error_check(cpy_r_emitter, cpy_r_r22, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 559, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_r26 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 560, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
CPyL14: ;
    cpy_r_r27 = CPyDef_rtypes___is_int_rprimitive(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 560, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    if (!cpy_r_r27) goto CPyL17;
    cpy_r_r28 = CPyStatics[7636]; /* 'Py_ssize_t val = CPyTagged_AsSsize_t(retval);' */
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 561, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    } else
        goto CPyL18;
CPyL17: ;
    cpy_r_r31 = CPyStatics[7637]; /* 'Py_ssize_t val = PyLong_AsSsize_t(retval);' */
    cpy_r_r32 = NULL;
    cpy_r_r33 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 563, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
CPyL18: ;
    cpy_r_r34 = CPyStatics[7233]; /* 'retval' */
    cpy_r_r35 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 564, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
CPyL19: ;
    cpy_r_r36 = 2;
    cpy_r_r37 = 2;
    cpy_r_r38 = CPyDef_emit___Emitter___emit_dec_ref(cpy_r_emitter, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 564, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_r39 = CPyStatics[7638]; /* 'if (PyErr_Occurred()) return -1;' */
    cpy_r_r40 = NULL;
    cpy_r_r41 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 565, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_r42 = CPyStatics[7639]; /* 'if (val == -1) return -2;' */
    cpy_r_r43 = NULL;
    cpy_r_r44 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 567, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_r45 = CPyStatics[7640]; /* 'return val;' */
    cpy_r_r46 = NULL;
    cpy_r_r47 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 568, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_r48 = CPyStatics[1406]; /* '}' */
    cpy_r_r49 = NULL;
    cpy_r_r50 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r48, cpy_r_r49);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 569, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    return cpy_r_name;
CPyL25: ;
    cpy_r_r51 = NULL;
    return cpy_r_r51;
CPyL26: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL25;
CPyL27: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r11);
    goto CPyL25;
CPyL29: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    goto CPyL25;
}

PyObject *CPyPy_emitwrapper___generate_hash_wrapper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "fn", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_hash_wrapper", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___generate_hash_wrapper(arg_cl, arg_fn, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_hash_wrapper", 547, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___generate_len_wrapper(PyObject *cpy_r_cl, PyObject *cpy_r_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
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
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    cpy_r_r0 = CPyStatics[7623]; /* 'CPyDunder_' */
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 576, CPyStatic_emitwrapper___globals);
        goto CPyL24;
    }
CPyL1: ;
    cpy_r_r2 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_class_ir___ClassIR___name_prefix(cpy_r_cl, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 576, CPyStatic_emitwrapper___globals);
        goto CPyL25;
    }
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r0, cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 576, CPyStatic_emitwrapper___globals);
        goto CPyL24;
    }
    cpy_r_name = cpy_r_r4;
    cpy_r_r5 = CPyStatics[7634]; /* 'static Py_ssize_t ' */
    cpy_r_r6 = CPyStatics[7635]; /* '(PyObject *self) {' */
    cpy_r_r7 = CPyStr_Build(3, cpy_r_r5, cpy_r_name, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 577, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 577, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
    cpy_r_r10 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 580, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
CPyL6: ;
    cpy_r_r11 = CPyDef_emit___Emitter___ctype_spaced(cpy_r_emitter, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 580, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
    cpy_r_r12 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_fn)->_decl;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDef_emit___Emitter___get_group_prefix(cpy_r_emitter, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 581, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_r14 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r15 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyDef_func_ir___FuncIR___cname(cpy_r_fn, cpy_r_r15);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 583, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    cpy_r_r17 = CPyStatics[7249]; /* 'retval = ' */
    cpy_r_r18 = CPyStatics[7202]; /* '(self);' */
    cpy_r_r19 = CPyStr_Build(6, cpy_r_r11, cpy_r_r17, cpy_r_r13, cpy_r_r14, cpy_r_r16, cpy_r_r18);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 579, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
    cpy_r_r20 = NULL;
    cpy_r_r21 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 578, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
    cpy_r_r22 = CPyStatics[7233]; /* 'retval' */
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 586, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
CPyL12: ;
    cpy_r_r24 = CPyStatics[7240]; /* 'return -1;' */
    cpy_r_r25 = CPyDef_emit___Emitter___emit_error_check(cpy_r_emitter, cpy_r_r22, cpy_r_r23, cpy_r_r24);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 586, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
    cpy_r_r26 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 587, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
CPyL14: ;
    cpy_r_r27 = CPyDef_rtypes___is_int_rprimitive(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 587, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
    if (!cpy_r_r27) goto CPyL17;
    cpy_r_r28 = CPyStatics[7636]; /* 'Py_ssize_t val = CPyTagged_AsSsize_t(retval);' */
    cpy_r_r29 = NULL;
    cpy_r_r30 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 588, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    } else
        goto CPyL18;
CPyL17: ;
    cpy_r_r31 = CPyStatics[7637]; /* 'Py_ssize_t val = PyLong_AsSsize_t(retval);' */
    cpy_r_r32 = NULL;
    cpy_r_r33 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r31, cpy_r_r32);
    if (unlikely(cpy_r_r33 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 590, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
CPyL18: ;
    cpy_r_r34 = CPyStatics[7233]; /* 'retval' */
    cpy_r_r35 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 591, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
CPyL19: ;
    cpy_r_r36 = 2;
    cpy_r_r37 = 2;
    cpy_r_r38 = CPyDef_emit___Emitter___emit_dec_ref(cpy_r_emitter, cpy_r_r34, cpy_r_r35, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 591, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
    cpy_r_r39 = CPyStatics[7638]; /* 'if (PyErr_Occurred()) return -1;' */
    cpy_r_r40 = NULL;
    cpy_r_r41 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 592, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
    cpy_r_r42 = CPyStatics[7640]; /* 'return val;' */
    cpy_r_r43 = NULL;
    cpy_r_r44 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r42, cpy_r_r43);
    if (unlikely(cpy_r_r44 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 593, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
    cpy_r_r45 = CPyStatics[1406]; /* '}' */
    cpy_r_r46 = NULL;
    cpy_r_r47 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 594, CPyStatic_emitwrapper___globals);
        goto CPyL26;
    }
    return cpy_r_name;
CPyL24: ;
    cpy_r_r48 = NULL;
    return cpy_r_r48;
CPyL25: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL24;
CPyL26: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL24;
CPyL27: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r11);
    goto CPyL24;
CPyL28: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r13);
    goto CPyL24;
}

PyObject *CPyPy_emitwrapper___generate_len_wrapper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "fn", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_len_wrapper", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___generate_len_wrapper(arg_cl, arg_fn, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_len_wrapper", 574, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___generate_bool_wrapper(PyObject *cpy_r_cl, PyObject *cpy_r_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_r0 = CPyStatics[7623]; /* 'CPyDunder_' */
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 601, CPyStatic_emitwrapper___globals);
        goto CPyL20;
    }
CPyL1: ;
    cpy_r_r2 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_class_ir___ClassIR___name_prefix(cpy_r_cl, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 601, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r0, cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 601, CPyStatic_emitwrapper___globals);
        goto CPyL20;
    }
    cpy_r_name = cpy_r_r4;
    cpy_r_r5 = CPyStatics[7641]; /* 'static int ' */
    cpy_r_r6 = CPyStatics[7635]; /* '(PyObject *self) {' */
    cpy_r_r7 = CPyStr_Build(3, cpy_r_r5, cpy_r_name, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 602, CPyStatic_emitwrapper___globals);
        goto CPyL22;
    }
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 602, CPyStatic_emitwrapper___globals);
        goto CPyL22;
    }
    cpy_r_r10 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 605, CPyStatic_emitwrapper___globals);
        goto CPyL22;
    }
CPyL6: ;
    cpy_r_r11 = CPyDef_emit___Emitter___ctype_spaced(cpy_r_emitter, cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 605, CPyStatic_emitwrapper___globals);
        goto CPyL22;
    }
    cpy_r_r12 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r13 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDef_func_ir___FuncIR___cname(cpy_r_fn, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 605, CPyStatic_emitwrapper___globals);
        goto CPyL23;
    }
    cpy_r_r15 = CPyStatics[7642]; /* 'val = ' */
    cpy_r_r16 = CPyStatics[7202]; /* '(self);' */
    cpy_r_r17 = CPyStr_Build(5, cpy_r_r11, cpy_r_r15, cpy_r_r12, cpy_r_r14, cpy_r_r16);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 604, CPyStatic_emitwrapper___globals);
        goto CPyL22;
    }
    cpy_r_r18 = NULL;
    cpy_r_r19 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 603, CPyStatic_emitwrapper___globals);
        goto CPyL22;
    }
    cpy_r_r20 = CPyStatics[7643]; /* 'val' */
    cpy_r_r21 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 608, CPyStatic_emitwrapper___globals);
        goto CPyL22;
    }
CPyL11: ;
    cpy_r_r22 = CPyStatics[7240]; /* 'return -1;' */
    cpy_r_r23 = CPyDef_emit___Emitter___emit_error_check(cpy_r_emitter, cpy_r_r20, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 608, CPyStatic_emitwrapper___globals);
        goto CPyL22;
    }
    cpy_r_r24 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 612, CPyStatic_emitwrapper___globals);
        goto CPyL22;
    }
CPyL13: ;
    cpy_r_r25 = CPyDef_rtypes___is_bool_rprimitive(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 612, CPyStatic_emitwrapper___globals);
        goto CPyL22;
    }
    if (cpy_r_r25) {
        goto CPyL17;
    } else
        goto CPyL24;
CPyL15: ;
    PyErr_SetString(PyExc_AssertionError, "Only bool return supported for __bool__");
    cpy_r_r26 = 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 612, CPyStatic_emitwrapper___globals);
        goto CPyL20;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r27 = CPyStatics[7640]; /* 'return val;' */
    cpy_r_r28 = NULL;
    cpy_r_r29 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 613, CPyStatic_emitwrapper___globals);
        goto CPyL22;
    }
    cpy_r_r30 = CPyStatics[1406]; /* '}' */
    cpy_r_r31 = NULL;
    cpy_r_r32 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 614, CPyStatic_emitwrapper___globals);
        goto CPyL22;
    }
    return cpy_r_name;
CPyL20: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL21: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL20;
CPyL22: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL20;
CPyL23: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r11);
    goto CPyL20;
CPyL24: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL15;
}

PyObject *CPyPy_emitwrapper___generate_bool_wrapper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "fn", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_bool_wrapper", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___generate_bool_wrapper(arg_cl, arg_fn, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_bool_wrapper", 599, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___generate_del_item_wrapper(PyObject *cpy_r_cl, PyObject *cpy_r_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    int32_t cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_input_args;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = CPyStatics[7623]; /* 'CPyDunder_' */
    cpy_r_r1 = CPyStatics[827]; /* '__delitem__' */
    cpy_r_r2 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_class_ir___ClassIR___name_prefix(cpy_r_cl, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_del_item_wrapper", 624, CPyStatic_emitwrapper___globals);
        goto CPyL16;
    }
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r0, cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_del_item_wrapper", 624, CPyStatic_emitwrapper___globals);
        goto CPyL16;
    }
    cpy_r_name = cpy_r_r4;
    cpy_r_r5 = CPyStatics[71]; /* ', ' */
    cpy_r_r6 = PyList_New(0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_del_item_wrapper", 625, CPyStatic_emitwrapper___globals);
        goto CPyL17;
    }
    cpy_r_r7 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 2, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* args */
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_del_item_wrapper", 625, CPyStatic_emitwrapper___globals);
        goto CPyL18;
    }
CPyL4: ;
    cpy_r_r8 = PyObject_GetIter(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_del_item_wrapper", 625, CPyStatic_emitwrapper___globals);
        goto CPyL18;
    }
CPyL5: ;
    cpy_r_r9 = PyIter_Next(cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL19;
    if (likely(Py_TYPE(cpy_r_r9) == CPyType_func_ir___RuntimeArg))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_del_item_wrapper", 625, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r9);
        goto CPyL20;
    }
    cpy_r_arg = cpy_r_r10;
    cpy_r_r11 = CPyStatics[7588]; /* 'PyObject *obj_' */
    cpy_r_r12 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_name;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r13 = CPyStr_Build(2, cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_del_item_wrapper", 625, CPyStatic_emitwrapper___globals);
        goto CPyL20;
    }
    cpy_r_r14 = PyList_Append(cpy_r_r6, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = cpy_r_r14 >= 0;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_del_item_wrapper", 625, CPyStatic_emitwrapper___globals);
        goto CPyL20;
    } else
        goto CPyL5;
CPyL9: ;
    cpy_r_r16 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_del_item_wrapper", 625, CPyStatic_emitwrapper___globals);
        goto CPyL18;
    }
    cpy_r_r17 = PyUnicode_Join(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_del_item_wrapper", 625, CPyStatic_emitwrapper___globals);
        goto CPyL17;
    }
    cpy_r_input_args = cpy_r_r17;
    cpy_r_r18 = CPyStatics[7641]; /* 'static int ' */
    cpy_r_r19 = CPyStatics[2381]; /* '(' */
    cpy_r_r20 = CPyStatics[6900]; /* ') {' */
    cpy_r_r21 = CPyStr_Build(5, cpy_r_r18, cpy_r_name, cpy_r_r19, cpy_r_input_args, cpy_r_r20);
    CPy_DECREF(cpy_r_input_args);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_del_item_wrapper", 626, CPyStatic_emitwrapper___globals);
        goto CPyL17;
    }
    cpy_r_r22 = NULL;
    cpy_r_r23 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r21, cpy_r_r22);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r23 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_del_item_wrapper", 626, CPyStatic_emitwrapper___globals);
        goto CPyL17;
    }
    cpy_r_r24 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 2, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* args */
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_del_item_wrapper", 627, CPyStatic_emitwrapper___globals);
        goto CPyL17;
    }
CPyL14: ;
    cpy_r_r25 = CPyDef_emitwrapper___generate_set_del_item_wrapper_inner(cpy_r_fn, cpy_r_emitter, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_del_item_wrapper", 627, CPyStatic_emitwrapper___globals);
        goto CPyL17;
    }
    return cpy_r_name;
CPyL16: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL17: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r6);
    goto CPyL16;
CPyL19: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL9;
CPyL20: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r8);
    goto CPyL16;
}

PyObject *CPyPy_emitwrapper___generate_del_item_wrapper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "fn", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_del_item_wrapper", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___generate_del_item_wrapper(arg_cl, arg_fn, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_del_item_wrapper", 619, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___generate_set_del_item_wrapper(PyObject *cpy_r_cl, PyObject *cpy_r_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_method_cls;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_del_name;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    tuple_T2OO cpy_r_r6;
    PyObject *cpy_r_r7;
    int32_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    tuple_T2OO cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    tuple_T2OO cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    CPyPtr cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_input_args;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
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
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    char cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    char cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    char cpy_r_r126;
    tuple_T2OO cpy_r_r127;
    PyObject *cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    char cpy_r_r131;
    tuple_T2OO cpy_r_r132;
    PyObject *cpy_r_r133;
    char cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    char cpy_r_r144;
    PyObject *cpy_r_r145;
    PyObject *cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    char cpy_r_r150;
    PyObject *cpy_r_r151;
    char cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    char cpy_r_r155;
    PyObject *cpy_r_r156;
    PyObject *cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_msg;
    PyObject *cpy_r_r160;
    PyObject *cpy_r_r161;
    PyObject *cpy_r_r162;
    PyObject *cpy_r_r163;
    char cpy_r_r164;
    PyObject *cpy_r_r165;
    PyObject *cpy_r_r166;
    char cpy_r_r167;
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
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    PyObject *cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    char cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    char cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    char cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    cpy_r_r0 = CPyStatics[827]; /* '__delitem__' */
    cpy_r_r1 = 2;
    cpy_r_r2 = CPyDef_class_ir___ClassIR___get_method_and_class(cpy_r_cl, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 641, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    cpy_r_method_cls = cpy_r_r2;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    cpy_r_del_name = cpy_r_r3;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_method_cls != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL97;
    PyObject *__tmp9664;
    if (unlikely(!(PyTuple_Check(cpy_r_method_cls) && PyTuple_GET_SIZE(cpy_r_method_cls) == 2))) {
        __tmp9664 = NULL;
        goto __LL9665;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 0)) == CPyType_func_ir___FuncIR))
        __tmp9664 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
    else {
        __tmp9664 = NULL;
    }
    if (__tmp9664 == NULL) goto __LL9665;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 1)) == CPyType_class_ir___ClassIR))
        __tmp9664 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
    else {
        __tmp9664 = NULL;
    }
    if (__tmp9664 == NULL) goto __LL9665;
    __tmp9664 = cpy_r_method_cls;
__LL9665: ;
    if (unlikely(__tmp9664 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.func_ir.FuncIR, mypyc.ir.class_ir.ClassIR]", cpy_r_method_cls); cpy_r_r6 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9666 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
        CPy_INCREF(__tmp9666);
        PyObject *__tmp9667;
        if (likely(Py_TYPE(__tmp9666) == CPyType_func_ir___FuncIR))
            __tmp9667 = __tmp9666;
        else {
            CPy_TypeError("mypyc.ir.func_ir.FuncIR", __tmp9666); 
            __tmp9667 = NULL;
        }
        cpy_r_r6.f0 = __tmp9667;
        PyObject *__tmp9668 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
        CPy_INCREF(__tmp9668);
        PyObject *__tmp9669;
        if (likely(Py_TYPE(__tmp9668) == CPyType_class_ir___ClassIR))
            __tmp9669 = __tmp9668;
        else {
            CPy_TypeError("mypyc.ir.class_ir.ClassIR", __tmp9668); 
            __tmp9669 = NULL;
        }
        cpy_r_r6.f1 = __tmp9669;
    }
    if (unlikely(cpy_r_r6.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 641, CPyStatic_emitwrapper___globals);
        goto CPyL98;
    }
    cpy_r_r7 = PyTuple_New(2);
    if (unlikely(cpy_r_r7 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9670 = cpy_r_r6.f0;
    PyTuple_SET_ITEM(cpy_r_r7, 0, __tmp9670);
    PyObject *__tmp9671 = cpy_r_r6.f1;
    PyTuple_SET_ITEM(cpy_r_r7, 1, __tmp9671);
    cpy_r_r8 = PyObject_IsTrue(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = cpy_r_r8 >= 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 641, CPyStatic_emitwrapper___globals);
        goto CPyL98;
    }
    cpy_r_r10 = cpy_r_r8;
    if (!cpy_r_r10) goto CPyL97;
    PyObject *__tmp9672;
    if (unlikely(!(PyTuple_Check(cpy_r_method_cls) && PyTuple_GET_SIZE(cpy_r_method_cls) == 2))) {
        __tmp9672 = NULL;
        goto __LL9673;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 0)) == CPyType_func_ir___FuncIR))
        __tmp9672 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
    else {
        __tmp9672 = NULL;
    }
    if (__tmp9672 == NULL) goto __LL9673;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 1)) == CPyType_class_ir___ClassIR))
        __tmp9672 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
    else {
        __tmp9672 = NULL;
    }
    if (__tmp9672 == NULL) goto __LL9673;
    __tmp9672 = cpy_r_method_cls;
__LL9673: ;
    if (unlikely(__tmp9672 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.func_ir.FuncIR, mypyc.ir.class_ir.ClassIR]", cpy_r_method_cls); cpy_r_r11 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9674 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
        CPy_INCREF(__tmp9674);
        PyObject *__tmp9675;
        if (likely(Py_TYPE(__tmp9674) == CPyType_func_ir___FuncIR))
            __tmp9675 = __tmp9674;
        else {
            CPy_TypeError("mypyc.ir.func_ir.FuncIR", __tmp9674); 
            __tmp9675 = NULL;
        }
        cpy_r_r11.f0 = __tmp9675;
        PyObject *__tmp9676 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
        CPy_INCREF(__tmp9676);
        PyObject *__tmp9677;
        if (likely(Py_TYPE(__tmp9676) == CPyType_class_ir___ClassIR))
            __tmp9677 = __tmp9676;
        else {
            CPy_TypeError("mypyc.ir.class_ir.ClassIR", __tmp9676); 
            __tmp9677 = NULL;
        }
        cpy_r_r11.f1 = __tmp9677;
    }
    if (unlikely(cpy_r_r11.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 643, CPyStatic_emitwrapper___globals);
        goto CPyL98;
    }
    cpy_r_r12 = cpy_r_r11.f1;
    CPy_INCREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r11.f0);
    CPy_DECREF(cpy_r_r11.f1);
    cpy_r_r13 = cpy_r_r12 == cpy_r_cl;
    CPy_DECREF(cpy_r_r12);
    if (cpy_r_r13) {
        goto CPyL99;
    } else
        goto CPyL97;
CPyL7: ;
    PyObject *__tmp9678;
    if (unlikely(!(PyTuple_Check(cpy_r_method_cls) && PyTuple_GET_SIZE(cpy_r_method_cls) == 2))) {
        __tmp9678 = NULL;
        goto __LL9679;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 0)) == CPyType_func_ir___FuncIR))
        __tmp9678 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
    else {
        __tmp9678 = NULL;
    }
    if (__tmp9678 == NULL) goto __LL9679;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 1)) == CPyType_class_ir___ClassIR))
        __tmp9678 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
    else {
        __tmp9678 = NULL;
    }
    if (__tmp9678 == NULL) goto __LL9679;
    __tmp9678 = cpy_r_method_cls;
__LL9679: ;
    if (unlikely(__tmp9678 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.func_ir.FuncIR, mypyc.ir.class_ir.ClassIR]", cpy_r_method_cls); cpy_r_r14 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9680 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
        CPy_INCREF(__tmp9680);
        PyObject *__tmp9681;
        if (likely(Py_TYPE(__tmp9680) == CPyType_func_ir___FuncIR))
            __tmp9681 = __tmp9680;
        else {
            CPy_TypeError("mypyc.ir.func_ir.FuncIR", __tmp9680); 
            __tmp9681 = NULL;
        }
        cpy_r_r14.f0 = __tmp9681;
        PyObject *__tmp9682 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
        CPy_INCREF(__tmp9682);
        PyObject *__tmp9683;
        if (likely(Py_TYPE(__tmp9682) == CPyType_class_ir___ClassIR))
            __tmp9683 = __tmp9682;
        else {
            CPy_TypeError("mypyc.ir.class_ir.ClassIR", __tmp9682); 
            __tmp9683 = NULL;
        }
        cpy_r_r14.f1 = __tmp9683;
    }
    CPy_DECREF(cpy_r_method_cls);
    if (unlikely(cpy_r_r14.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 645, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    cpy_r_r15 = cpy_r_r14.f0;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r14.f0);
    CPy_DECREF(cpy_r_r14.f1);
    cpy_r_r16 = CPyDef_emitwrapper___generate_del_item_wrapper(cpy_r_cl, cpy_r_r15, cpy_r_emitter);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 645, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    cpy_r_del_name = cpy_r_r16;
CPyL10: ;
    cpy_r_r17 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 2, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* args */
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 647, CPyStatic_emitwrapper___globals);
        goto CPyL100;
    }
CPyL11: ;
    cpy_r_args = cpy_r_r17;
    cpy_r_r18 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 648, CPyStatic_emitwrapper___globals);
        goto CPyL101;
    }
CPyL12: ;
    cpy_r_r19 = CPyStatics[827]; /* '__delitem__' */
    cpy_r_r20 = PyUnicode_Compare(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r21 = cpy_r_r20 == -1;
    if (!cpy_r_r21) goto CPyL15;
    cpy_r_r22 = PyErr_Occurred();
    cpy_r_r23 = cpy_r_r22 != NULL;
    if (!cpy_r_r23) goto CPyL15;
    cpy_r_r24 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 648, CPyStatic_emitwrapper___globals);
        goto CPyL101;
    }
CPyL15: ;
    cpy_r_r25 = cpy_r_r20 == 0;
    if (!cpy_r_r25) goto CPyL28;
    cpy_r_r26 = PySequence_List(cpy_r_args);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 650, CPyStatic_emitwrapper___globals);
        goto CPyL100;
    }
    cpy_r_r27 = CPyStatics[7644]; /* '___value' */
    cpy_r_r28 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r28 == NULL)) {
        goto CPyL102;
    } else
        goto CPyL20;
CPyL18: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r29 = 0;
    if (unlikely(!cpy_r_r29)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 650, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r30 = CPyStatic_nodes___ARG_POS;
    if (unlikely(cpy_r_r30 == NULL)) {
        goto CPyL103;
    } else
        goto CPyL23;
CPyL21: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r31 = 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 650, CPyStatic_emitwrapper___globals);
        goto CPyL96;
    }
    CPy_Unreachable();
CPyL23: ;
    cpy_r_r32 = 2;
    cpy_r_r33 = CPyDef_func_ir___RuntimeArg(cpy_r_r27, cpy_r_r28, cpy_r_r30, cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 650, CPyStatic_emitwrapper___globals);
        goto CPyL104;
    }
    cpy_r_r34 = PyList_New(1);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 650, CPyStatic_emitwrapper___globals);
        goto CPyL105;
    }
    cpy_r_r35 = (CPyPtr)&((PyListObject *)cpy_r_r34)->ob_item;
    cpy_r_r36 = *(CPyPtr *)cpy_r_r35;
    *(PyObject * *)cpy_r_r36 = cpy_r_r33;
    cpy_r_r37 = PyNumber_Add(cpy_r_r26, cpy_r_r34);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 650, CPyStatic_emitwrapper___globals);
        goto CPyL100;
    }
    if (likely(PyList_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 650, CPyStatic_emitwrapper___globals, "list", cpy_r_r37);
        goto CPyL100;
    }
    cpy_r_args = cpy_r_r38;
CPyL28: ;
    cpy_r_r39 = CPyStatics[7623]; /* 'CPyDunder_' */
    cpy_r_r40 = CPyStatics[808]; /* '__setitem__' */
    cpy_r_r41 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r41);
    cpy_r_r42 = CPyDef_class_ir___ClassIR___name_prefix(cpy_r_cl, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 652, CPyStatic_emitwrapper___globals);
        goto CPyL101;
    }
    cpy_r_r43 = CPyStr_Build(3, cpy_r_r39, cpy_r_r40, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 652, CPyStatic_emitwrapper___globals);
        goto CPyL101;
    }
    cpy_r_name = cpy_r_r43;
    cpy_r_r44 = CPyStatics[71]; /* ', ' */
    cpy_r_r45 = PyList_New(0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 653, CPyStatic_emitwrapper___globals);
        goto CPyL106;
    }
    cpy_r_r46 = PyObject_GetIter(cpy_r_args);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 653, CPyStatic_emitwrapper___globals);
        goto CPyL107;
    }
CPyL32: ;
    cpy_r_r47 = PyIter_Next(cpy_r_r46);
    if (cpy_r_r47 == NULL) goto CPyL108;
    if (likely(Py_TYPE(cpy_r_r47) == CPyType_func_ir___RuntimeArg))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 653, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r47);
        goto CPyL109;
    }
    cpy_r_arg = cpy_r_r48;
    cpy_r_r49 = CPyStatics[7588]; /* 'PyObject *obj_' */
    cpy_r_r50 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_name;
    CPy_INCREF(cpy_r_r50);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r51 = CPyStr_Build(2, cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 653, CPyStatic_emitwrapper___globals);
        goto CPyL109;
    }
    cpy_r_r52 = PyList_Append(cpy_r_r45, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 653, CPyStatic_emitwrapper___globals);
        goto CPyL109;
    } else
        goto CPyL32;
CPyL36: ;
    cpy_r_r54 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 653, CPyStatic_emitwrapper___globals);
        goto CPyL107;
    }
    cpy_r_r55 = PyUnicode_Join(cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 653, CPyStatic_emitwrapper___globals);
        goto CPyL106;
    }
    cpy_r_input_args = cpy_r_r55;
    cpy_r_r56 = CPyStatics[7641]; /* 'static int ' */
    cpy_r_r57 = CPyStatics[2381]; /* '(' */
    cpy_r_r58 = CPyStatics[6900]; /* ') {' */
    cpy_r_r59 = CPyStr_Build(5, cpy_r_r56, cpy_r_name, cpy_r_r57, cpy_r_input_args, cpy_r_r58);
    CPy_DECREF(cpy_r_input_args);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 654, CPyStatic_emitwrapper___globals);
        goto CPyL106;
    }
    cpy_r_r60 = NULL;
    cpy_r_r61 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r61 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 654, CPyStatic_emitwrapper___globals);
        goto CPyL106;
    }
    cpy_r_r62 = CPyStatics[7645]; /* 'if (obj_' */
    cpy_r_r63 = CPyStatics[9018]; /* 2 */
    cpy_r_r64 = PyObject_GetItem(cpy_r_args, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 657, CPyStatic_emitwrapper___globals);
        goto CPyL106;
    }
    if (likely(Py_TYPE(cpy_r_r64) == CPyType_func_ir___RuntimeArg))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 657, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r64);
        goto CPyL106;
    }
    cpy_r_r66 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r65)->_name;
    CPy_INCREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r67 = CPyStatics[6946]; /* ' == NULL) {' */
    cpy_r_r68 = CPyStr_Build(3, cpy_r_r62, cpy_r_r66, cpy_r_r67);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 657, CPyStatic_emitwrapper___globals);
        goto CPyL106;
    }
    cpy_r_r69 = NULL;
    cpy_r_r70 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r70 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 657, CPyStatic_emitwrapper___globals);
        goto CPyL106;
    }
    cpy_r_r71 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r72 = cpy_r_del_name != cpy_r_r71;
    if (!cpy_r_r72) goto CPyL110;
    cpy_r_r73 = CPyStatics[6945]; /* 'return ' */
    if (likely(cpy_r_del_name != Py_None))
        cpy_r_r74 = cpy_r_del_name;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 660, CPyStatic_emitwrapper___globals, "str", cpy_r_del_name);
        goto CPyL111;
    }
    cpy_r_r75 = CPyStatics[7646]; /* '(obj_' */
    cpy_r_r76 = CPyStatics[9015]; /* 0 */
    cpy_r_r77 = PyObject_GetItem(cpy_r_args, cpy_r_r76);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 660, CPyStatic_emitwrapper___globals);
        goto CPyL112;
    }
    if (likely(Py_TYPE(cpy_r_r77) == CPyType_func_ir___RuntimeArg))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 660, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r77);
        goto CPyL112;
    }
    cpy_r_r79 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r78)->_name;
    CPy_INCREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r78);
    cpy_r_r80 = CPyStatics[7647]; /* ', obj_' */
    cpy_r_r81 = CPyStatics[9016]; /* 1 */
    cpy_r_r82 = PyObject_GetItem(cpy_r_args, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 660, CPyStatic_emitwrapper___globals);
        goto CPyL113;
    }
    if (likely(Py_TYPE(cpy_r_r82) == CPyType_func_ir___RuntimeArg))
        cpy_r_r83 = cpy_r_r82;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 660, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r82);
        goto CPyL113;
    }
    cpy_r_r84 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r83)->_name;
    CPy_INCREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r85 = CPyStatics[6872]; /* ');' */
    cpy_r_r86 = CPyStr_Build(7, cpy_r_r73, cpy_r_r74, cpy_r_r75, cpy_r_r79, cpy_r_r80, cpy_r_r84, cpy_r_r85);
    CPy_DECREF(cpy_r_r74);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r84);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 660, CPyStatic_emitwrapper___globals);
        goto CPyL111;
    }
    cpy_r_r87 = NULL;
    cpy_r_r88 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r86, cpy_r_r87);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r88 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 660, CPyStatic_emitwrapper___globals);
        goto CPyL111;
    } else
        goto CPyL64;
CPyL52: ;
    cpy_r_r89 = CPyStatics[7648]; /* 'PyObject *super = CPy_Super(CPyModule_builtins, obj_' */
    cpy_r_r90 = CPyStatics[9015]; /* 0 */
    cpy_r_r91 = PyObject_GetItem(cpy_r_args, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 663, CPyStatic_emitwrapper___globals);
        goto CPyL111;
    }
    if (likely(Py_TYPE(cpy_r_r91) == CPyType_func_ir___RuntimeArg))
        cpy_r_r92 = cpy_r_r91;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 663, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r91);
        goto CPyL111;
    }
    cpy_r_r93 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r92)->_name;
    CPy_INCREF(cpy_r_r93);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r94 = CPyStatics[6872]; /* ');' */
    cpy_r_r95 = CPyStr_Build(3, cpy_r_r89, cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 663, CPyStatic_emitwrapper___globals);
        goto CPyL111;
    }
    cpy_r_r96 = NULL;
    cpy_r_r97 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r95, cpy_r_r96);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r97 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 663, CPyStatic_emitwrapper___globals);
        goto CPyL111;
    }
    cpy_r_r98 = CPyStatics[7649]; /* 'if (super == NULL) return -1;' */
    cpy_r_r99 = NULL;
    cpy_r_r100 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 664, CPyStatic_emitwrapper___globals);
        goto CPyL111;
    }
    cpy_r_r101 = CPyStatics[9016]; /* 1 */
    cpy_r_r102 = PyObject_GetItem(cpy_r_args, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 667, CPyStatic_emitwrapper___globals);
        goto CPyL111;
    }
    if (likely(Py_TYPE(cpy_r_r102) == CPyType_func_ir___RuntimeArg))
        cpy_r_r103 = cpy_r_r102;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 667, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r102);
        goto CPyL111;
    }
    cpy_r_r104 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r103)->_name;
    CPy_INCREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r103);
    cpy_r_r105 = CPyStatics[7650]; /* ('PyObject *result = PyObject_CallMethod(super, '
                                      '"__delitem__", "O", obj_') */
    cpy_r_r106 = CPyStatics[6872]; /* ');' */
    cpy_r_r107 = CPyStr_Build(3, cpy_r_r105, cpy_r_r104, cpy_r_r106);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 666, CPyStatic_emitwrapper___globals);
        goto CPyL111;
    }
    cpy_r_r108 = NULL;
    cpy_r_r109 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r107, cpy_r_r108);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r109 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 665, CPyStatic_emitwrapper___globals);
        goto CPyL111;
    }
    cpy_r_r110 = CPyStatics[7651]; /* 'Py_DECREF(super);' */
    cpy_r_r111 = NULL;
    cpy_r_r112 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r110, cpy_r_r111);
    if (unlikely(cpy_r_r112 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 670, CPyStatic_emitwrapper___globals);
        goto CPyL111;
    }
    cpy_r_r113 = CPyStatics[7652]; /* 'Py_XDECREF(result);' */
    cpy_r_r114 = NULL;
    cpy_r_r115 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r113, cpy_r_r114);
    if (unlikely(cpy_r_r115 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 671, CPyStatic_emitwrapper___globals);
        goto CPyL111;
    }
    cpy_r_r116 = CPyStatics[7653]; /* 'return result == NULL ? -1 : 0;' */
    cpy_r_r117 = NULL;
    cpy_r_r118 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r116, cpy_r_r117);
    if (unlikely(cpy_r_r118 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 672, CPyStatic_emitwrapper___globals);
        goto CPyL111;
    }
CPyL64: ;
    cpy_r_r119 = CPyStatics[1406]; /* '}' */
    cpy_r_r120 = NULL;
    cpy_r_r121 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r119, cpy_r_r120);
    if (unlikely(cpy_r_r121 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 673, CPyStatic_emitwrapper___globals);
        goto CPyL111;
    }
    cpy_r_r122 = CPyStatics[808]; /* '__setitem__' */
    cpy_r_r123 = 2;
    cpy_r_r124 = CPyDef_class_ir___ClassIR___get_method_and_class(cpy_r_cl, cpy_r_r122, cpy_r_r123);
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 675, CPyStatic_emitwrapper___globals);
        goto CPyL111;
    }
    cpy_r_method_cls = cpy_r_r124;
    cpy_r_r125 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r126 = cpy_r_method_cls != cpy_r_r125;
    if (!cpy_r_r126) goto CPyL73;
    PyObject *__tmp9684;
    if (unlikely(!(PyTuple_Check(cpy_r_method_cls) && PyTuple_GET_SIZE(cpy_r_method_cls) == 2))) {
        __tmp9684 = NULL;
        goto __LL9685;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 0)) == CPyType_func_ir___FuncIR))
        __tmp9684 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
    else {
        __tmp9684 = NULL;
    }
    if (__tmp9684 == NULL) goto __LL9685;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 1)) == CPyType_class_ir___ClassIR))
        __tmp9684 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
    else {
        __tmp9684 = NULL;
    }
    if (__tmp9684 == NULL) goto __LL9685;
    __tmp9684 = cpy_r_method_cls;
__LL9685: ;
    if (unlikely(__tmp9684 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.func_ir.FuncIR, mypyc.ir.class_ir.ClassIR]", cpy_r_method_cls); cpy_r_r127 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9686 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
        CPy_INCREF(__tmp9686);
        PyObject *__tmp9687;
        if (likely(Py_TYPE(__tmp9686) == CPyType_func_ir___FuncIR))
            __tmp9687 = __tmp9686;
        else {
            CPy_TypeError("mypyc.ir.func_ir.FuncIR", __tmp9686); 
            __tmp9687 = NULL;
        }
        cpy_r_r127.f0 = __tmp9687;
        PyObject *__tmp9688 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
        CPy_INCREF(__tmp9688);
        PyObject *__tmp9689;
        if (likely(Py_TYPE(__tmp9688) == CPyType_class_ir___ClassIR))
            __tmp9689 = __tmp9688;
        else {
            CPy_TypeError("mypyc.ir.class_ir.ClassIR", __tmp9688); 
            __tmp9689 = NULL;
        }
        cpy_r_r127.f1 = __tmp9689;
    }
    if (unlikely(cpy_r_r127.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 641, CPyStatic_emitwrapper___globals);
        goto CPyL114;
    }
    cpy_r_r128 = PyTuple_New(2);
    if (unlikely(cpy_r_r128 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp9690 = cpy_r_r127.f0;
    PyTuple_SET_ITEM(cpy_r_r128, 0, __tmp9690);
    PyObject *__tmp9691 = cpy_r_r127.f1;
    PyTuple_SET_ITEM(cpy_r_r128, 1, __tmp9691);
    cpy_r_r129 = PyObject_IsTrue(cpy_r_r128);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 641, CPyStatic_emitwrapper___globals);
        goto CPyL114;
    }
    cpy_r_r131 = cpy_r_r129;
    if (!cpy_r_r131) goto CPyL73;
    PyObject *__tmp9692;
    if (unlikely(!(PyTuple_Check(cpy_r_method_cls) && PyTuple_GET_SIZE(cpy_r_method_cls) == 2))) {
        __tmp9692 = NULL;
        goto __LL9693;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 0)) == CPyType_func_ir___FuncIR))
        __tmp9692 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
    else {
        __tmp9692 = NULL;
    }
    if (__tmp9692 == NULL) goto __LL9693;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_method_cls, 1)) == CPyType_class_ir___ClassIR))
        __tmp9692 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
    else {
        __tmp9692 = NULL;
    }
    if (__tmp9692 == NULL) goto __LL9693;
    __tmp9692 = cpy_r_method_cls;
__LL9693: ;
    if (unlikely(__tmp9692 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.func_ir.FuncIR, mypyc.ir.class_ir.ClassIR]", cpy_r_method_cls); cpy_r_r132 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp9694 = PyTuple_GET_ITEM(cpy_r_method_cls, 0);
        CPy_INCREF(__tmp9694);
        PyObject *__tmp9695;
        if (likely(Py_TYPE(__tmp9694) == CPyType_func_ir___FuncIR))
            __tmp9695 = __tmp9694;
        else {
            CPy_TypeError("mypyc.ir.func_ir.FuncIR", __tmp9694); 
            __tmp9695 = NULL;
        }
        cpy_r_r132.f0 = __tmp9695;
        PyObject *__tmp9696 = PyTuple_GET_ITEM(cpy_r_method_cls, 1);
        CPy_INCREF(__tmp9696);
        PyObject *__tmp9697;
        if (likely(Py_TYPE(__tmp9696) == CPyType_class_ir___ClassIR))
            __tmp9697 = __tmp9696;
        else {
            CPy_TypeError("mypyc.ir.class_ir.ClassIR", __tmp9696); 
            __tmp9697 = NULL;
        }
        cpy_r_r132.f1 = __tmp9697;
    }
    if (unlikely(cpy_r_r132.f0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 676, CPyStatic_emitwrapper___globals);
        goto CPyL114;
    }
    cpy_r_r133 = cpy_r_r132.f1;
    CPy_INCREF(cpy_r_r133);
    CPy_DECREF(cpy_r_r132.f0);
    CPy_DECREF(cpy_r_r132.f1);
    cpy_r_r134 = cpy_r_r133 == cpy_r_cl;
    CPy_DECREF(cpy_r_r133);
    if (cpy_r_r134) {
        goto CPyL115;
    } else
        goto CPyL73;
CPyL72: ;
    cpy_r_r135 = CPyDef_emitwrapper___generate_set_del_item_wrapper_inner(cpy_r_fn, cpy_r_emitter, cpy_r_args);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r135 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 677, CPyStatic_emitwrapper___globals);
        goto CPyL116;
    } else
        goto CPyL95;
CPyL73: ;
    cpy_r_r136 = CPyStatics[7648]; /* 'PyObject *super = CPy_Super(CPyModule_builtins, obj_' */
    cpy_r_r137 = CPyStatics[9015]; /* 0 */
    cpy_r_r138 = PyObject_GetItem(cpy_r_args, cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 679, CPyStatic_emitwrapper___globals);
        goto CPyL114;
    }
    if (likely(Py_TYPE(cpy_r_r138) == CPyType_func_ir___RuntimeArg))
        cpy_r_r139 = cpy_r_r138;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 679, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r138);
        goto CPyL114;
    }
    cpy_r_r140 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r139)->_name;
    CPy_INCREF(cpy_r_r140);
    CPy_DECREF(cpy_r_r139);
    cpy_r_r141 = CPyStatics[6872]; /* ');' */
    cpy_r_r142 = CPyStr_Build(3, cpy_r_r136, cpy_r_r140, cpy_r_r141);
    CPy_DECREF(cpy_r_r140);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 679, CPyStatic_emitwrapper___globals);
        goto CPyL114;
    }
    cpy_r_r143 = NULL;
    cpy_r_r144 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r142, cpy_r_r143);
    CPy_DECREF(cpy_r_r142);
    if (unlikely(cpy_r_r144 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 679, CPyStatic_emitwrapper___globals);
        goto CPyL114;
    }
    cpy_r_r145 = CPyStatics[7649]; /* 'if (super == NULL) return -1;' */
    cpy_r_r146 = NULL;
    cpy_r_r147 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r145, cpy_r_r146);
    if (unlikely(cpy_r_r147 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 680, CPyStatic_emitwrapper___globals);
        goto CPyL114;
    }
    cpy_r_r148 = CPyStatics[7654]; /* 'PyObject *result;' */
    cpy_r_r149 = NULL;
    cpy_r_r150 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r148, cpy_r_r149);
    if (unlikely(cpy_r_r150 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 681, CPyStatic_emitwrapper___globals);
        goto CPyL114;
    }
    cpy_r_r151 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r152 = cpy_r_method_cls == cpy_r_r151;
    CPy_DECREF(cpy_r_method_cls);
    if (!cpy_r_r152) goto CPyL85;
    cpy_r_r153 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_builtin_base;
    cpy_r_r154 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r155 = cpy_r_r153 == cpy_r_r154;
    if (cpy_r_r155) {
        goto CPyL117;
    } else
        goto CPyL85;
CPyL81: ;
    cpy_r_r156 = CPyStatics[385]; /* "'" */
    cpy_r_r157 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cl)->_name;
    CPy_INCREF(cpy_r_r157);
    cpy_r_r158 = CPyStatics[7655]; /* "' object does not support item assignment" */
    cpy_r_r159 = CPyStr_Build(3, cpy_r_r156, cpy_r_r157, cpy_r_r158);
    CPy_DECREF(cpy_r_r157);
    if (unlikely(cpy_r_r159 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 684, CPyStatic_emitwrapper___globals);
        goto CPyL116;
    }
    cpy_r_msg = cpy_r_r159;
    cpy_r_r160 = CPyStatics[7656]; /* 'PyErr_SetString(PyExc_TypeError, "' */
    cpy_r_r161 = CPyStatics[7372]; /* '");' */
    cpy_r_r162 = CPyStr_Build(3, cpy_r_r160, cpy_r_msg, cpy_r_r161);
    CPy_DECREF(cpy_r_msg);
    if (unlikely(cpy_r_r162 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 685, CPyStatic_emitwrapper___globals);
        goto CPyL116;
    }
    cpy_r_r163 = NULL;
    cpy_r_r164 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r162, cpy_r_r163);
    CPy_DECREF(cpy_r_r162);
    if (unlikely(cpy_r_r164 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 685, CPyStatic_emitwrapper___globals);
        goto CPyL116;
    }
    cpy_r_r165 = CPyStatics[7657]; /* 'result = NULL;' */
    cpy_r_r166 = NULL;
    cpy_r_r167 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r165, cpy_r_r166);
    if (unlikely(cpy_r_r167 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 686, CPyStatic_emitwrapper___globals);
        goto CPyL116;
    } else
        goto CPyL91;
CPyL85: ;
    cpy_r_r168 = CPyStatics[9016]; /* 1 */
    cpy_r_r169 = PyObject_GetItem(cpy_r_args, cpy_r_r168);
    if (unlikely(cpy_r_r169 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 691, CPyStatic_emitwrapper___globals);
        goto CPyL111;
    }
    if (likely(Py_TYPE(cpy_r_r169) == CPyType_func_ir___RuntimeArg))
        cpy_r_r170 = cpy_r_r169;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 691, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r169);
        goto CPyL111;
    }
    cpy_r_r171 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r170)->_name;
    CPy_INCREF(cpy_r_r171);
    CPy_DECREF(cpy_r_r170);
    cpy_r_r172 = CPyStatics[9018]; /* 2 */
    cpy_r_r173 = PyObject_GetItem(cpy_r_args, cpy_r_r172);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r173 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 691, CPyStatic_emitwrapper___globals);
        goto CPyL118;
    }
    if (likely(Py_TYPE(cpy_r_r173) == CPyType_func_ir___RuntimeArg))
        cpy_r_r174 = cpy_r_r173;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 691, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r173);
        goto CPyL118;
    }
    cpy_r_r175 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r174)->_name;
    CPy_INCREF(cpy_r_r175);
    CPy_DECREF(cpy_r_r174);
    cpy_r_r176 = CPyStatics[7658]; /* ('result = PyObject_CallMethod(super, "__setitem__", '
                                      '"OO", obj_') */
    cpy_r_r177 = CPyStatics[7647]; /* ', obj_' */
    cpy_r_r178 = CPyStatics[6872]; /* ');' */
    cpy_r_r179 = CPyStr_Build(5, cpy_r_r176, cpy_r_r171, cpy_r_r177, cpy_r_r175, cpy_r_r178);
    CPy_DECREF(cpy_r_r171);
    CPy_DECREF(cpy_r_r175);
    if (unlikely(cpy_r_r179 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 690, CPyStatic_emitwrapper___globals);
        goto CPyL116;
    }
    cpy_r_r180 = NULL;
    cpy_r_r181 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r179, cpy_r_r180);
    CPy_DECREF(cpy_r_r179);
    if (unlikely(cpy_r_r181 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 689, CPyStatic_emitwrapper___globals);
        goto CPyL116;
    }
CPyL91: ;
    cpy_r_r182 = CPyStatics[7651]; /* 'Py_DECREF(super);' */
    cpy_r_r183 = NULL;
    cpy_r_r184 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r182, cpy_r_r183);
    if (unlikely(cpy_r_r184 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 694, CPyStatic_emitwrapper___globals);
        goto CPyL116;
    }
    cpy_r_r185 = CPyStatics[7652]; /* 'Py_XDECREF(result);' */
    cpy_r_r186 = NULL;
    cpy_r_r187 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r185, cpy_r_r186);
    if (unlikely(cpy_r_r187 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 695, CPyStatic_emitwrapper___globals);
        goto CPyL116;
    }
    cpy_r_r188 = CPyStatics[7653]; /* 'return result == NULL ? -1 : 0;' */
    cpy_r_r189 = NULL;
    cpy_r_r190 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r188, cpy_r_r189);
    if (unlikely(cpy_r_r190 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 696, CPyStatic_emitwrapper___globals);
        goto CPyL116;
    }
    cpy_r_r191 = CPyStatics[1406]; /* '}' */
    cpy_r_r192 = NULL;
    cpy_r_r193 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r191, cpy_r_r192);
    if (unlikely(cpy_r_r193 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 697, CPyStatic_emitwrapper___globals);
        goto CPyL116;
    }
CPyL95: ;
    return cpy_r_name;
CPyL96: ;
    cpy_r_r194 = NULL;
    return cpy_r_r194;
CPyL97: ;
    CPy_DECREF(cpy_r_method_cls);
    goto CPyL10;
CPyL98: ;
    CPy_DecRef(cpy_r_method_cls);
    CPy_DecRef(cpy_r_del_name);
    goto CPyL96;
CPyL99: ;
    CPy_DECREF(cpy_r_del_name);
    goto CPyL7;
CPyL100: ;
    CPy_DecRef(cpy_r_del_name);
    goto CPyL96;
CPyL101: ;
    CPy_DecRef(cpy_r_del_name);
    CPy_DecRef(cpy_r_args);
    goto CPyL96;
CPyL102: ;
    CPy_DecRef(cpy_r_del_name);
    CPy_DecRef(cpy_r_r26);
    goto CPyL18;
CPyL103: ;
    CPy_DecRef(cpy_r_del_name);
    CPy_DecRef(cpy_r_r26);
    goto CPyL21;
CPyL104: ;
    CPy_DecRef(cpy_r_del_name);
    CPy_DecRef(cpy_r_r26);
    goto CPyL96;
CPyL105: ;
    CPy_DecRef(cpy_r_del_name);
    CPy_DecRef(cpy_r_r26);
    CPy_DecRef(cpy_r_r33);
    goto CPyL96;
CPyL106: ;
    CPy_DecRef(cpy_r_del_name);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_name);
    goto CPyL96;
CPyL107: ;
    CPy_DecRef(cpy_r_del_name);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r45);
    goto CPyL96;
CPyL108: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL36;
CPyL109: ;
    CPy_DecRef(cpy_r_del_name);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r46);
    goto CPyL96;
CPyL110: ;
    CPy_DECREF(cpy_r_del_name);
    goto CPyL52;
CPyL111: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_name);
    goto CPyL96;
CPyL112: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r74);
    goto CPyL96;
CPyL113: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r74);
    CPy_DecRef(cpy_r_r79);
    goto CPyL96;
CPyL114: ;
    CPy_DecRef(cpy_r_method_cls);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_name);
    goto CPyL96;
CPyL115: ;
    CPy_DECREF(cpy_r_method_cls);
    goto CPyL72;
CPyL116: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL96;
CPyL117: ;
    CPy_DECREF(cpy_r_args);
    goto CPyL81;
CPyL118: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r171);
    goto CPyL96;
}

PyObject *CPyPy_emitwrapper___generate_set_del_item_wrapper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "fn", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_set_del_item_wrapper", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___generate_set_del_item_wrapper(arg_cl, arg_fn, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper", 631, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___generate_set_del_item_wrapper_inner(PyObject *cpy_r_fn, PyObject *cpy_r_emitter, PyObject *cpy_r_args) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_arg_2;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_native_args;
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
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    cpy_r_r0 = PyObject_GetIter(cpy_r_args);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 704, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
CPyL1: ;
    cpy_r_r1 = PyIter_Next(cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL29;
    if (likely(Py_TYPE(cpy_r_r1) == CPyType_func_ir___RuntimeArg))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 704, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r1);
        goto CPyL30;
    }
    cpy_r_arg = cpy_r_r2;
    cpy_r_r3 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_name;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_type;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r5 = CPyStatics[1204]; /* 'fail' */
    cpy_r_r6 = CPyDef_emit___GotoHandler(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 705, CPyStatic_emitwrapper___globals);
        goto CPyL31;
    }
    cpy_r_r7 = 2;
    cpy_r_r8 = 2;
    cpy_r_r9 = CPY_INT_TAG;
    cpy_r_r10 = CPyDef_emitwrapper___generate_arg_check(cpy_r_r3, cpy_r_r4, cpy_r_emitter, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r10 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 705, CPyStatic_emitwrapper___globals);
        goto CPyL30;
    } else
        goto CPyL1;
CPyL5: ;
    cpy_r_r11 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 704, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    cpy_r_r12 = CPyStatics[71]; /* ', ' */
    cpy_r_r13 = PyList_New(0);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 706, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    cpy_r_r14 = PyObject_GetIter(cpy_r_args);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 706, CPyStatic_emitwrapper___globals);
        goto CPyL32;
    }
CPyL8: ;
    cpy_r_r15 = PyIter_Next(cpy_r_r14);
    if (cpy_r_r15 == NULL) goto CPyL33;
    if (likely(Py_TYPE(cpy_r_r15) == CPyType_func_ir___RuntimeArg))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 706, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r15);
        goto CPyL34;
    }
    cpy_r_arg_2 = cpy_r_r16;
    cpy_r_r17 = CPyStatics[7659]; /* 'arg_' */
    cpy_r_r18 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg_2)->_name;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_arg_2);
    cpy_r_r19 = CPyStr_Build(2, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 706, CPyStatic_emitwrapper___globals);
        goto CPyL34;
    }
    cpy_r_r20 = PyList_Append(cpy_r_r13, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 706, CPyStatic_emitwrapper___globals);
        goto CPyL34;
    } else
        goto CPyL8;
CPyL12: ;
    cpy_r_r22 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 706, CPyStatic_emitwrapper___globals);
        goto CPyL32;
    }
    cpy_r_r23 = PyUnicode_Join(cpy_r_r12, cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 706, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    cpy_r_native_args = cpy_r_r23;
    cpy_r_r24 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 709, CPyStatic_emitwrapper___globals);
        goto CPyL35;
    }
CPyL15: ;
    cpy_r_r25 = CPyDef_emit___Emitter___ctype_spaced(cpy_r_emitter, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 709, CPyStatic_emitwrapper___globals);
        goto CPyL35;
    }
    cpy_r_r26 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r27 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyDef_func_ir___FuncIR___cname(cpy_r_fn, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 709, CPyStatic_emitwrapper___globals);
        goto CPyL36;
    }
    cpy_r_r29 = CPyStatics[7642]; /* 'val = ' */
    cpy_r_r30 = CPyStatics[2381]; /* '(' */
    cpy_r_r31 = CPyStatics[6872]; /* ');' */
    cpy_r_r32 = CPyStr_Build(7, cpy_r_r25, cpy_r_r29, cpy_r_r26, cpy_r_r28, cpy_r_r30, cpy_r_native_args, cpy_r_r31);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_native_args);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 708, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    cpy_r_r33 = NULL;
    cpy_r_r34 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 707, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    cpy_r_r35 = CPyStatics[7643]; /* 'val' */
    cpy_r_r36 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 712, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
CPyL20: ;
    cpy_r_r37 = CPyStatics[7473]; /* 'goto fail;' */
    cpy_r_r38 = CPyDef_emit___Emitter___emit_error_check(cpy_r_emitter, cpy_r_r35, cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 712, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    cpy_r_r39 = CPyStatics[7643]; /* 'val' */
    cpy_r_r40 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 713, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
CPyL22: ;
    cpy_r_r41 = 2;
    cpy_r_r42 = 2;
    cpy_r_r43 = CPyDef_emit___Emitter___emit_dec_ref(cpy_r_emitter, cpy_r_r39, cpy_r_r40, cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 713, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    cpy_r_r44 = CPyStatics[7184]; /* 'return 0;' */
    cpy_r_r45 = NULL;
    cpy_r_r46 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 714, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    cpy_r_r47 = CPyStatics[1204]; /* 'fail' */
    cpy_r_r48 = CPyDef_emit___Emitter___emit_label(cpy_r_emitter, cpy_r_r47);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 715, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    cpy_r_r49 = CPyStatics[7240]; /* 'return -1;' */
    cpy_r_r50 = NULL;
    cpy_r_r51 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 716, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    cpy_r_r52 = CPyStatics[1406]; /* '}' */
    cpy_r_r53 = NULL;
    cpy_r_r54 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 717, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    return 1;
CPyL28: ;
    cpy_r_r55 = 2;
    return cpy_r_r55;
CPyL29: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL5;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL28;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL28;
CPyL32: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL28;
CPyL33: ;
    CPy_DECREF(cpy_r_r14);
    goto CPyL12;
CPyL34: ;
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r14);
    goto CPyL28;
CPyL35: ;
    CPy_DecRef(cpy_r_native_args);
    goto CPyL28;
CPyL36: ;
    CPy_DecRef(cpy_r_native_args);
    CPy_DecRef(cpy_r_r25);
    goto CPyL28;
}

PyObject *CPyPy_emitwrapper___generate_set_del_item_wrapper_inner(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "emitter", "args", 0};
    static CPyArg_Parser parser = {"OOO:generate_set_del_item_wrapper_inner", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_emitter;
    PyObject *obj_args;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_emitter, &obj_args)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *arg_args = obj_args;
    char retval = CPyDef_emitwrapper___generate_set_del_item_wrapper_inner(arg_fn, arg_emitter, arg_args);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_set_del_item_wrapper_inner", 701, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___generate_contains_wrapper(PyObject *cpy_r_cl, PyObject *cpy_r_fn, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    cpy_r_r0 = CPyStatics[7623]; /* 'CPyDunder_' */
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 722, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
CPyL1: ;
    cpy_r_r2 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDef_class_ir___ClassIR___name_prefix(cpy_r_cl, cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 722, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    cpy_r_r4 = CPyStr_Build(3, cpy_r_r0, cpy_r_r1, cpy_r_r3);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 722, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_name = cpy_r_r4;
    cpy_r_r5 = CPyStatics[7641]; /* 'static int ' */
    cpy_r_r6 = CPyStatics[7660]; /* '(PyObject *self, PyObject *obj_item) {' */
    cpy_r_r7 = CPyStr_Build(3, cpy_r_r5, cpy_r_name, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 723, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 723, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r10 = CPyStatics[1095]; /* 'item' */
    cpy_r_r11 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 2, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* args */
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 724, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
CPyL6: ;
    cpy_r_r12 = CPyStatics[9016]; /* 1 */
    cpy_r_r13 = PyObject_GetItem(cpy_r_r11, cpy_r_r12);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 724, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_func_ir___RuntimeArg))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 724, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r13);
        goto CPyL29;
    }
    cpy_r_r15 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r14)->_type;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = CPyStatics[7243]; /* '-1' */
    cpy_r_r17 = CPyDef_emit___ReturnHandler(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 724, CPyStatic_emitwrapper___globals);
        goto CPyL30;
    }
    cpy_r_r18 = 2;
    cpy_r_r19 = 2;
    cpy_r_r20 = CPY_INT_TAG;
    cpy_r_r21 = CPyDef_emitwrapper___generate_arg_check(cpy_r_r10, cpy_r_r15, cpy_r_emitter, cpy_r_r17, cpy_r_r18, cpy_r_r19, cpy_r_r20);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 724, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r22 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 727, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
CPyL11: ;
    cpy_r_r23 = CPyDef_emit___Emitter___ctype_spaced(cpy_r_emitter, cpy_r_r22);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 727, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r24 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r25 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_emitter)->_names;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = CPyDef_func_ir___FuncIR___cname(cpy_r_fn, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 727, CPyStatic_emitwrapper___globals);
        goto CPyL31;
    }
    cpy_r_r27 = CPyStatics[7642]; /* 'val = ' */
    cpy_r_r28 = CPyStatics[7661]; /* '(self, arg_item);' */
    cpy_r_r29 = CPyStr_Build(5, cpy_r_r23, cpy_r_r27, cpy_r_r24, cpy_r_r26, cpy_r_r28);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 726, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r30 = NULL;
    cpy_r_r31 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 725, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r32 = CPyStatics[7643]; /* 'val' */
    cpy_r_r33 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 730, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
CPyL16: ;
    cpy_r_r34 = CPyStatics[7240]; /* 'return -1;' */
    cpy_r_r35 = CPyDef_emit___Emitter___emit_error_check(cpy_r_emitter, cpy_r_r32, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 730, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r36 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 731, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
CPyL18: ;
    cpy_r_r37 = CPyDef_rtypes___is_bool_rprimitive(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 731, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    if (!cpy_r_r37) goto CPyL21;
    cpy_r_r38 = CPyStatics[7640]; /* 'return val;' */
    cpy_r_r39 = NULL;
    cpy_r_r40 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r38, cpy_r_r39);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 732, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    } else
        goto CPyL25;
CPyL21: ;
    cpy_r_r41 = CPyStatics[7662]; /* 'int boolval = PyObject_IsTrue(val);' */
    cpy_r_r42 = NULL;
    cpy_r_r43 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 734, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r44 = CPyStatics[7643]; /* 'val' */
    cpy_r_r45 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 735, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
CPyL23: ;
    cpy_r_r46 = 2;
    cpy_r_r47 = 2;
    cpy_r_r48 = CPyDef_emit___Emitter___emit_dec_ref(cpy_r_emitter, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 735, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    cpy_r_r49 = CPyStatics[7663]; /* 'return boolval;' */
    cpy_r_r50 = NULL;
    cpy_r_r51 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 736, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
CPyL25: ;
    cpy_r_r52 = CPyStatics[1406]; /* '}' */
    cpy_r_r53 = NULL;
    cpy_r_r54 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 737, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    return cpy_r_name;
CPyL27: ;
    cpy_r_r55 = NULL;
    return cpy_r_r55;
CPyL28: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r15);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_r23);
    goto CPyL27;
}

PyObject *CPyPy_emitwrapper___generate_contains_wrapper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"cl", "fn", "emitter", 0};
    static CPyArg_Parser parser = {"OOO:generate_contains_wrapper", kwlist, 0};
    PyObject *obj_cl;
    PyObject *obj_fn;
    PyObject *obj_emitter;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_cl, &obj_fn, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_cl;
    if (likely(Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR))
        arg_cl = obj_cl;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cl); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___generate_contains_wrapper(arg_cl, arg_fn, arg_emitter);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_contains_wrapper", 720, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___generate_wrapper_core(PyObject *cpy_r_fn, PyObject *cpy_r_emitter, PyObject *cpy_r_optional_args, PyObject *cpy_r_arg_names, PyObject *cpy_r_cleanups, PyObject *cpy_r_traceback_code) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_gen;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_error;
    char cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    if (cpy_r_optional_args != NULL) goto CPyL46;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_optional_args = cpy_r_r0;
CPyL2: ;
    if (cpy_r_arg_names != NULL) goto CPyL47;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_arg_names = cpy_r_r1;
CPyL4: ;
    if (cpy_r_cleanups != NULL) goto CPyL48;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    cpy_r_cleanups = cpy_r_r2;
CPyL6: ;
    if (cpy_r_traceback_code != NULL) goto CPyL49;
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    cpy_r_traceback_code = cpy_r_r3;
CPyL8: ;
    cpy_r_r4 = Py_None;
    cpy_r_r5 = CPyDef_emitwrapper___WrapperGenerator(cpy_r_r4, cpy_r_emitter);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 759, CPyStatic_emitwrapper___globals);
        goto CPyL50;
    }
    cpy_r_gen = cpy_r_r5;
    cpy_r_r6 = CPyDef_emitwrapper___WrapperGenerator___set_target(cpy_r_gen, cpy_r_fn);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 760, CPyStatic_emitwrapper___globals);
        goto CPyL51;
    }
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_arg_names != cpy_r_r7;
    if (!cpy_r_r8) goto CPyL52;
    CPy_INCREF(cpy_r_arg_names);
    if (likely(cpy_r_arg_names != Py_None))
        cpy_r_r9 = cpy_r_arg_names;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 749, CPyStatic_emitwrapper___globals, "list", cpy_r_arg_names);
        goto CPyL51;
    }
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r9)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    CPy_DECREF(cpy_r_r9);
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = cpy_r_r12 != 0;
    if (!cpy_r_r13) goto CPyL52;
    if (likely(cpy_r_arg_names != Py_None))
        cpy_r_r14 = cpy_r_arg_names;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 762, CPyStatic_emitwrapper___globals, "list", cpy_r_arg_names);
        goto CPyL53;
    }
    if (((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names != NULL) {
        CPy_DECREF(((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names);
    }
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_arg_names = cpy_r_r14;
    cpy_r_r15 = 1;
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 762, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
CPyL15: ;
    cpy_r_r16 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r17 = cpy_r_cleanups != cpy_r_r16;
    if (!cpy_r_r17) goto CPyL54;
    CPy_INCREF(cpy_r_cleanups);
    if (likely(cpy_r_cleanups != Py_None))
        cpy_r_r18 = cpy_r_cleanups;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 750, CPyStatic_emitwrapper___globals, "list", cpy_r_cleanups);
        goto CPyL53;
    }
    cpy_r_r19 = (CPyPtr)&((PyVarObject *)cpy_r_r18)->ob_size;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    CPy_DECREF(cpy_r_r18);
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = cpy_r_r21 != 0;
    if (!cpy_r_r22) goto CPyL54;
    if (likely(cpy_r_cleanups != Py_None))
        cpy_r_r23 = cpy_r_cleanups;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 763, CPyStatic_emitwrapper___globals, "list", cpy_r_cleanups);
        goto CPyL55;
    }
    cpy_r_r24 = cpy_r_r23;
    goto CPyL22;
CPyL20: ;
    cpy_r_r25 = PyList_New(0);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 763, CPyStatic_emitwrapper___globals);
        goto CPyL55;
    }
    cpy_r_r24 = cpy_r_r25;
CPyL22: ;
    CPy_DECREF(((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_cleanups);
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_cleanups = cpy_r_r24;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_optional_args != cpy_r_r27;
    if (!cpy_r_r28) goto CPyL56;
    CPy_INCREF(cpy_r_optional_args);
    if (likely(cpy_r_optional_args != Py_None))
        cpy_r_r29 = cpy_r_optional_args;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 748, CPyStatic_emitwrapper___globals, "list", cpy_r_optional_args);
        goto CPyL55;
    }
    cpy_r_r30 = (CPyPtr)&((PyVarObject *)cpy_r_r29)->ob_size;
    cpy_r_r31 = *(int64_t *)cpy_r_r30;
    CPy_DECREF(cpy_r_r29);
    cpy_r_r32 = cpy_r_r31 << 1;
    cpy_r_r33 = cpy_r_r32 != 0;
    if (!cpy_r_r33) goto CPyL56;
    if (likely(cpy_r_optional_args != Py_None))
        cpy_r_r34 = cpy_r_optional_args;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 764, CPyStatic_emitwrapper___globals, "list", cpy_r_optional_args);
        goto CPyL57;
    }
    cpy_r_r35 = cpy_r_r34;
    goto CPyL29;
CPyL27: ;
    cpy_r_r36 = PyList_New(0);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 764, CPyStatic_emitwrapper___globals);
        goto CPyL57;
    }
    cpy_r_r35 = cpy_r_r36;
CPyL29: ;
    CPy_DECREF(((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_optional_args);
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_optional_args = cpy_r_r35;
    cpy_r_r38 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r39 = cpy_r_traceback_code != cpy_r_r38;
    if (!cpy_r_r39) goto CPyL58;
    CPy_INCREF(cpy_r_traceback_code);
    if (likely(cpy_r_traceback_code != Py_None))
        cpy_r_r40 = cpy_r_traceback_code;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 751, CPyStatic_emitwrapper___globals, "str", cpy_r_traceback_code);
        goto CPyL57;
    }
    cpy_r_r41 = CPyStr_IsTrue(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (!cpy_r_r41) goto CPyL58;
    if (likely(cpy_r_traceback_code != Py_None))
        cpy_r_r42 = cpy_r_traceback_code;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 765, CPyStatic_emitwrapper___globals, "str", cpy_r_traceback_code);
        goto CPyL59;
    }
    cpy_r_r43 = cpy_r_r42;
    goto CPyL35;
CPyL34: ;
    cpy_r_r44 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r44);
    cpy_r_r43 = cpy_r_r44;
CPyL35: ;
    CPy_DECREF(((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_traceback_code);
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_gen)->_traceback_code = cpy_r_r43;
    cpy_r_r46 = CPyDef_emitwrapper___WrapperGenerator___use_goto(cpy_r_gen);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 767, CPyStatic_emitwrapper___globals);
        goto CPyL59;
    }
    if (cpy_r_r46) goto CPyL39;
    cpy_r_r47 = CPyStatics[6879]; /* 'NULL' */
    cpy_r_r48 = CPyDef_emit___ReturnHandler(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 767, CPyStatic_emitwrapper___globals);
        goto CPyL59;
    }
    cpy_r_r49 = cpy_r_r48;
    goto CPyL41;
CPyL39: ;
    cpy_r_r50 = CPyStatics[1204]; /* 'fail' */
    cpy_r_r51 = CPyDef_emit___GotoHandler(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 767, CPyStatic_emitwrapper___globals);
        goto CPyL59;
    }
    cpy_r_r49 = cpy_r_r51;
CPyL41: ;
    cpy_r_error = cpy_r_r49;
    cpy_r_r52 = 2;
    cpy_r_r53 = CPyDef_emitwrapper___WrapperGenerator___emit_arg_processing(cpy_r_gen, cpy_r_error, cpy_r_r52);
    CPy_DECREF(cpy_r_error);
    if (unlikely(cpy_r_r53 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 768, CPyStatic_emitwrapper___globals);
        goto CPyL59;
    }
    cpy_r_r54 = NULL;
    cpy_r_r55 = CPyDef_emitwrapper___WrapperGenerator___emit_call(cpy_r_gen, cpy_r_r54);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 769, CPyStatic_emitwrapper___globals);
        goto CPyL59;
    }
    cpy_r_r56 = CPyDef_emitwrapper___WrapperGenerator___emit_error_handling(cpy_r_gen);
    CPy_DECREF(cpy_r_gen);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 770, CPyStatic_emitwrapper___globals);
        goto CPyL45;
    }
    return 1;
CPyL45: ;
    cpy_r_r57 = 2;
    return cpy_r_r57;
CPyL46: ;
    CPy_INCREF(cpy_r_optional_args);
    goto CPyL2;
CPyL47: ;
    CPy_INCREF(cpy_r_arg_names);
    goto CPyL4;
CPyL48: ;
    CPy_INCREF(cpy_r_cleanups);
    goto CPyL6;
CPyL49: ;
    CPy_INCREF(cpy_r_traceback_code);
    goto CPyL8;
CPyL50: ;
    CPy_DecRef(cpy_r_optional_args);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_traceback_code);
    goto CPyL45;
CPyL51: ;
    CPy_DecRef(cpy_r_optional_args);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_traceback_code);
    CPy_DecRef(cpy_r_gen);
    goto CPyL45;
CPyL52: ;
    CPy_DECREF(cpy_r_arg_names);
    goto CPyL15;
CPyL53: ;
    CPy_DecRef(cpy_r_optional_args);
    CPy_DecRef(cpy_r_cleanups);
    CPy_DecRef(cpy_r_traceback_code);
    CPy_DecRef(cpy_r_gen);
    goto CPyL45;
CPyL54: ;
    CPy_DECREF(cpy_r_cleanups);
    goto CPyL20;
CPyL55: ;
    CPy_DecRef(cpy_r_optional_args);
    CPy_DecRef(cpy_r_traceback_code);
    CPy_DecRef(cpy_r_gen);
    goto CPyL45;
CPyL56: ;
    CPy_DECREF(cpy_r_optional_args);
    goto CPyL27;
CPyL57: ;
    CPy_DecRef(cpy_r_traceback_code);
    CPy_DecRef(cpy_r_gen);
    goto CPyL45;
CPyL58: ;
    CPy_DECREF(cpy_r_traceback_code);
    goto CPyL34;
CPyL59: ;
    CPy_DecRef(cpy_r_gen);
    goto CPyL45;
}

PyObject *CPyPy_emitwrapper___generate_wrapper_core(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fn", "emitter", "optional_args", "arg_names", "cleanups", "traceback_code", 0};
    static CPyArg_Parser parser = {"OO|OOOO:generate_wrapper_core", kwlist, 0};
    PyObject *obj_fn;
    PyObject *obj_emitter;
    PyObject *obj_optional_args = NULL;
    PyObject *obj_arg_names = NULL;
    PyObject *obj_cleanups = NULL;
    PyObject *obj_traceback_code = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fn, &obj_emitter, &obj_optional_args, &obj_arg_names, &obj_cleanups, &obj_traceback_code)) {
        return NULL;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *arg_optional_args;
    if (obj_optional_args == NULL) {
        arg_optional_args = NULL;
        goto __LL9698;
    }
    if (PyList_Check(obj_optional_args))
        arg_optional_args = obj_optional_args;
    else {
        arg_optional_args = NULL;
    }
    if (arg_optional_args != NULL) goto __LL9698;
    if (obj_optional_args == Py_None)
        arg_optional_args = obj_optional_args;
    else {
        arg_optional_args = NULL;
    }
    if (arg_optional_args != NULL) goto __LL9698;
    CPy_TypeError("list or None", obj_optional_args); 
    goto fail;
__LL9698: ;
    PyObject *arg_arg_names;
    if (obj_arg_names == NULL) {
        arg_arg_names = NULL;
        goto __LL9699;
    }
    if (PyList_Check(obj_arg_names))
        arg_arg_names = obj_arg_names;
    else {
        arg_arg_names = NULL;
    }
    if (arg_arg_names != NULL) goto __LL9699;
    if (obj_arg_names == Py_None)
        arg_arg_names = obj_arg_names;
    else {
        arg_arg_names = NULL;
    }
    if (arg_arg_names != NULL) goto __LL9699;
    CPy_TypeError("list or None", obj_arg_names); 
    goto fail;
__LL9699: ;
    PyObject *arg_cleanups;
    if (obj_cleanups == NULL) {
        arg_cleanups = NULL;
        goto __LL9700;
    }
    if (PyList_Check(obj_cleanups))
        arg_cleanups = obj_cleanups;
    else {
        arg_cleanups = NULL;
    }
    if (arg_cleanups != NULL) goto __LL9700;
    if (obj_cleanups == Py_None)
        arg_cleanups = obj_cleanups;
    else {
        arg_cleanups = NULL;
    }
    if (arg_cleanups != NULL) goto __LL9700;
    CPy_TypeError("list or None", obj_cleanups); 
    goto fail;
__LL9700: ;
    PyObject *arg_traceback_code;
    if (obj_traceback_code == NULL) {
        arg_traceback_code = NULL;
        goto __LL9701;
    }
    if (PyUnicode_Check(obj_traceback_code))
        arg_traceback_code = obj_traceback_code;
    else {
        arg_traceback_code = NULL;
    }
    if (arg_traceback_code != NULL) goto __LL9701;
    if (obj_traceback_code == Py_None)
        arg_traceback_code = obj_traceback_code;
    else {
        arg_traceback_code = NULL;
    }
    if (arg_traceback_code != NULL) goto __LL9701;
    CPy_TypeError("str or None", obj_traceback_code); 
    goto fail;
__LL9701: ;
    char retval = CPyDef_emitwrapper___generate_wrapper_core(arg_fn, arg_emitter, arg_optional_args, arg_arg_names, arg_cleanups, arg_traceback_code);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_wrapper_core", 745, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___generate_arg_check(PyObject *cpy_r_name, PyObject *cpy_r_typ, PyObject *cpy_r_emitter, PyObject *cpy_r_error, char cpy_r_optional, char cpy_r_raise_exception, CPyTagged cpy_r_bitmap_arg_index) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_init;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_bitmap;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    char cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    if (cpy_r_error != NULL) goto CPyL57;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_error = cpy_r_r0;
CPyL2: ;
    if (cpy_r_optional != 2) goto CPyL4;
    cpy_r_optional = 0;
CPyL4: ;
    if (cpy_r_raise_exception != 2) goto CPyL6;
    cpy_r_raise_exception = 1;
CPyL6: ;
    if (cpy_r_bitmap_arg_index != CPY_INT_TAG) goto CPyL58;
    cpy_r_bitmap_arg_index = 0;
CPyL8: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_error != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL59;
    if (likely(cpy_r_error != Py_None))
        cpy_r_r3 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 789, CPyStatic_emitwrapper___globals, "mypyc.codegen.emit.ErrorHandler", cpy_r_error);
        goto CPyL60;
    }
    cpy_r_r4 = cpy_r_r3;
    goto CPyL13;
CPyL11: ;
    cpy_r_r5 = CPyDef_emit___AssignHandler();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 789, CPyStatic_emitwrapper___globals);
        goto CPyL60;
    }
    cpy_r_r4 = cpy_r_r5;
CPyL13: ;
    cpy_r_error = cpy_r_r4;
    cpy_r_r6 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_typ)->_is_unboxed;
    if (!cpy_r_r6) goto CPyL61;
CPyL14: ;
    cpy_r_r7 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_typ)->_error_overlap;
    if (!cpy_r_r7) goto CPyL62;
CPyL15: ;
    if (!cpy_r_optional) goto CPyL62;
    cpy_r_r8 = CPyDef_emit___Emitter___c_undefined_value(cpy_r_emitter, cpy_r_typ);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 793, CPyStatic_emitwrapper___globals);
        goto CPyL63;
    }
    cpy_r_init = cpy_r_r8;
    cpy_r_r9 = CPyDef_emit___Emitter___ctype(cpy_r_emitter, cpy_r_typ);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 794, CPyStatic_emitwrapper___globals);
        goto CPyL64;
    }
    cpy_r_r10 = CPyStatics[7664]; /* ' arg_' */
    cpy_r_r11 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r12 = CPyStatics[6886]; /* ';' */
    cpy_r_r13 = CPyStr_Build(6, cpy_r_r9, cpy_r_r10, cpy_r_name, cpy_r_r11, cpy_r_init, cpy_r_r12);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_init);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 794, CPyStatic_emitwrapper___globals);
        goto CPyL63;
    }
    cpy_r_r14 = NULL;
    cpy_r_r15 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 794, CPyStatic_emitwrapper___globals);
        goto CPyL63;
    }
    cpy_r_r16 = CPyStatics[7645]; /* 'if (obj_' */
    cpy_r_r17 = CPyStatics[7665]; /* ' != NULL) {' */
    cpy_r_r18 = CPyStr_Build(3, cpy_r_r16, cpy_r_name, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 795, CPyStatic_emitwrapper___globals);
        goto CPyL63;
    }
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r20 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 795, CPyStatic_emitwrapper___globals);
        goto CPyL63;
    }
    cpy_r_r21 = CPyTagged_FloorDivide(cpy_r_bitmap_arg_index, 64);
    if (unlikely(cpy_r_r21 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 796, CPyStatic_emitwrapper___globals);
        goto CPyL63;
    }
    cpy_r_r22 = CPyDef_mypyc___common___bitmap_name(cpy_r_r21);
    CPyTagged_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 796, CPyStatic_emitwrapper___globals);
        goto CPyL63;
    }
    cpy_r_bitmap = cpy_r_r22;
    cpy_r_r23 = CPyStatics[7666]; /* ' |= 1 << ' */
    cpy_r_r24 = CPyTagged_And(cpy_r_bitmap_arg_index, 62);
    CPyTagged_DECREF(cpy_r_bitmap_arg_index);
    cpy_r_r25 = CPyTagged_Str(cpy_r_r24);
    CPyTagged_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 797, CPyStatic_emitwrapper___globals);
        goto CPyL65;
    }
    cpy_r_r26 = CPyStatics[6886]; /* ';' */
    cpy_r_r27 = CPyStr_Build(4, cpy_r_bitmap, cpy_r_r23, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_bitmap);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 797, CPyStatic_emitwrapper___globals);
        goto CPyL66;
    }
    cpy_r_r28 = NULL;
    cpy_r_r29 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 797, CPyStatic_emitwrapper___globals);
        goto CPyL66;
    }
    cpy_r_r30 = CPyStatics[7667]; /* 'obj_' */
    cpy_r_r31 = CPyStr_Build(2, cpy_r_r30, cpy_r_name);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 799, CPyStatic_emitwrapper___globals);
        goto CPyL66;
    }
    cpy_r_r32 = CPyStatics[7659]; /* 'arg_' */
    cpy_r_r33 = CPyStr_Build(2, cpy_r_r32, cpy_r_name);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 800, CPyStatic_emitwrapper___globals);
        goto CPyL67;
    }
    if (likely(cpy_r_error != Py_None))
        cpy_r_r34 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 804, CPyStatic_emitwrapper___globals, "mypyc.codegen.emit.ErrorHandler", cpy_r_error);
        goto CPyL68;
    }
    cpy_r_r35 = 2;
    cpy_r_r36 = CPyDef_emit___Emitter___emit_unbox(cpy_r_emitter, cpy_r_r31, cpy_r_r33, cpy_r_typ, 0, cpy_r_r34, cpy_r_raise_exception, cpy_r_r35, 1);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 798, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    }
    cpy_r_r37 = CPyStatics[1406]; /* '}' */
    cpy_r_r38 = NULL;
    cpy_r_r39 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 807, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    } else
        goto CPyL55;
CPyL32: ;
    cpy_r_r40 = CPyStatics[7667]; /* 'obj_' */
    cpy_r_r41 = CPyStr_Build(2, cpy_r_r40, cpy_r_name);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 811, CPyStatic_emitwrapper___globals);
        goto CPyL66;
    }
    cpy_r_r42 = CPyStatics[7659]; /* 'arg_' */
    cpy_r_r43 = CPyStr_Build(2, cpy_r_r42, cpy_r_name);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 812, CPyStatic_emitwrapper___globals);
        goto CPyL69;
    }
    if (likely(cpy_r_error != Py_None))
        cpy_r_r44 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 816, CPyStatic_emitwrapper___globals, "mypyc.codegen.emit.ErrorHandler", cpy_r_error);
        goto CPyL70;
    }
    cpy_r_r45 = CPyDef_emit___Emitter___emit_unbox(cpy_r_emitter, cpy_r_r41, cpy_r_r43, cpy_r_typ, 1, cpy_r_r44, cpy_r_raise_exception, cpy_r_optional, 1);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 810, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    } else
        goto CPyL55;
CPyL36: ;
    cpy_r_r46 = CPyDef_rtypes___is_object_rprimitive(cpy_r_typ);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 820, CPyStatic_emitwrapper___globals);
        goto CPyL66;
    }
    if (cpy_r_r46) {
        goto CPyL71;
    } else
        goto CPyL51;
CPyL38: ;
    if (!cpy_r_optional) goto CPyL49;
    cpy_r_r47 = CPyStatics[7668]; /* 'PyObject *arg_' */
    cpy_r_r48 = CPyStatics[6886]; /* ';' */
    cpy_r_r49 = CPyStr_Build(3, cpy_r_r47, cpy_r_name, cpy_r_r48);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 823, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    }
    cpy_r_r50 = NULL;
    cpy_r_r51 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 823, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    }
    cpy_r_r52 = CPyStatics[7645]; /* 'if (obj_' */
    cpy_r_r53 = CPyStatics[6946]; /* ' == NULL) {' */
    cpy_r_r54 = CPyStr_Build(3, cpy_r_r52, cpy_r_name, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 824, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    }
    cpy_r_r55 = NULL;
    cpy_r_r56 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r54, cpy_r_r55);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 824, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    }
    cpy_r_r57 = CPyStatics[7659]; /* 'arg_' */
    cpy_r_r58 = CPyStatics[1538]; /* ' = ' */
    cpy_r_r59 = CPyDef_emit___Emitter___c_error_value(cpy_r_emitter, cpy_r_typ);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 825, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    }
    cpy_r_r60 = CPyStatics[6886]; /* ';' */
    cpy_r_r61 = CPyStr_Build(5, cpy_r_r57, cpy_r_name, cpy_r_r58, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_r59);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 825, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    }
    cpy_r_r62 = NULL;
    cpy_r_r63 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 825, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    }
    cpy_r_r64 = CPyStatics[6977]; /* '} else {' */
    cpy_r_r65 = CPyStatics[7659]; /* 'arg_' */
    cpy_r_r66 = CPyStatics[7669]; /* ' = obj_' */
    cpy_r_r67 = CPyStatics[3664]; /* '; ' */
    cpy_r_r68 = CPyStr_Build(5, cpy_r_r65, cpy_r_name, cpy_r_r66, cpy_r_name, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 826, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    }
    cpy_r_r69 = CPyStatics[1406]; /* '}' */
    cpy_r_r70 = PyTuple_Pack(3, cpy_r_r64, cpy_r_r68, cpy_r_r69);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 826, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    }
    cpy_r_r71 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r70);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 826, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    } else
        goto CPyL55;
CPyL49: ;
    cpy_r_r72 = CPyStatics[7668]; /* 'PyObject *arg_' */
    cpy_r_r73 = CPyStatics[7669]; /* ' = obj_' */
    cpy_r_r74 = CPyStatics[6886]; /* ';' */
    cpy_r_r75 = CPyStr_Build(5, cpy_r_r72, cpy_r_name, cpy_r_r73, cpy_r_name, cpy_r_r74);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 828, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    }
    cpy_r_r76 = NULL;
    cpy_r_r77 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r75, cpy_r_r76);
    CPy_DECREF(cpy_r_r75);
    if (unlikely(cpy_r_r77 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 828, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    } else
        goto CPyL55;
CPyL51: ;
    cpy_r_r78 = CPyStatics[7667]; /* 'obj_' */
    cpy_r_r79 = CPyStr_Build(2, cpy_r_r78, cpy_r_name);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 831, CPyStatic_emitwrapper___globals);
        goto CPyL66;
    }
    cpy_r_r80 = CPyStatics[7659]; /* 'arg_' */
    cpy_r_r81 = CPyStr_Build(2, cpy_r_r80, cpy_r_name);
    if (unlikely(cpy_r_r81 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 832, CPyStatic_emitwrapper___globals);
        goto CPyL72;
    }
    if (likely(cpy_r_error != Py_None))
        cpy_r_r82 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 836, CPyStatic_emitwrapper___globals, "mypyc.codegen.emit.ErrorHandler", cpy_r_error);
        goto CPyL73;
    }
    cpy_r_r83 = NULL;
    cpy_r_r84 = 2;
    cpy_r_r85 = CPyDef_emit___Emitter___emit_cast(cpy_r_emitter, cpy_r_r79, cpy_r_r81, cpy_r_typ, 1, cpy_r_r82, cpy_r_raise_exception, cpy_r_optional, cpy_r_r83, cpy_r_r84);
    CPy_DECREF(cpy_r_r79);
    CPy_DECREF(cpy_r_r81);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r85 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 830, CPyStatic_emitwrapper___globals);
        goto CPyL56;
    }
CPyL55: ;
    return 1;
CPyL56: ;
    cpy_r_r86 = 2;
    return cpy_r_r86;
CPyL57: ;
    CPy_INCREF(cpy_r_error);
    goto CPyL2;
CPyL58: ;
    CPyTagged_INCREF(cpy_r_bitmap_arg_index);
    goto CPyL8;
CPyL59: ;
    CPy_DECREF(cpy_r_error);
    goto CPyL11;
CPyL60: ;
    CPyTagged_DecRef(cpy_r_bitmap_arg_index);
    goto CPyL56;
CPyL61: ;
    CPyTagged_DECREF(cpy_r_bitmap_arg_index);
    goto CPyL36;
CPyL62: ;
    CPyTagged_DECREF(cpy_r_bitmap_arg_index);
    goto CPyL32;
CPyL63: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_bitmap_arg_index);
    goto CPyL56;
CPyL64: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_bitmap_arg_index);
    CPy_DecRef(cpy_r_init);
    goto CPyL56;
CPyL65: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_bitmap);
    goto CPyL56;
CPyL66: ;
    CPy_DecRef(cpy_r_error);
    goto CPyL56;
CPyL67: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_r31);
    goto CPyL56;
CPyL68: ;
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_r33);
    goto CPyL56;
CPyL69: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_r41);
    goto CPyL56;
CPyL70: ;
    CPy_DecRef(cpy_r_r41);
    CPy_DecRef(cpy_r_r43);
    goto CPyL56;
CPyL71: ;
    CPy_DECREF(cpy_r_error);
    goto CPyL38;
CPyL72: ;
    CPy_DecRef(cpy_r_error);
    CPy_DecRef(cpy_r_r79);
    goto CPyL56;
CPyL73: ;
    CPy_DecRef(cpy_r_r79);
    CPy_DecRef(cpy_r_r81);
    goto CPyL56;
}

PyObject *CPyPy_emitwrapper___generate_arg_check(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"name", "typ", "emitter", "error", "optional", "raise_exception", "bitmap_arg_index", 0};
    static CPyArg_Parser parser = {"OOO|O$OOO:generate_arg_check", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_typ;
    PyObject *obj_emitter;
    PyObject *obj_error = NULL;
    PyObject *obj_optional = NULL;
    PyObject *obj_raise_exception = NULL;
    PyObject *obj_bitmap_arg_index = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_name, &obj_typ, &obj_emitter, &obj_error, &obj_optional, &obj_raise_exception, &obj_bitmap_arg_index)) {
        return NULL;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely(PyObject_TypeCheck(obj_typ, CPyType_rtypes___RType)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypyc.ir.rtypes.RType", obj_typ); 
        goto fail;
    }
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    PyObject *arg_error;
    if (obj_error == NULL) {
        arg_error = NULL;
        goto __LL9702;
    }
    if (PyObject_TypeCheck(obj_error, CPyType_emit___ErrorHandler))
        arg_error = obj_error;
    else {
        arg_error = NULL;
    }
    if (arg_error != NULL) goto __LL9702;
    if (obj_error == Py_None)
        arg_error = obj_error;
    else {
        arg_error = NULL;
    }
    if (arg_error != NULL) goto __LL9702;
    CPy_TypeError("mypyc.codegen.emit.ErrorHandler or None", obj_error); 
    goto fail;
__LL9702: ;
    char arg_optional;
    if (obj_optional == NULL) {
        arg_optional = 2;
    } else if (unlikely(!PyBool_Check(obj_optional))) {
        CPy_TypeError("bool", obj_optional); goto fail;
    } else
        arg_optional = obj_optional == Py_True;
    char arg_raise_exception;
    if (obj_raise_exception == NULL) {
        arg_raise_exception = 2;
    } else if (unlikely(!PyBool_Check(obj_raise_exception))) {
        CPy_TypeError("bool", obj_raise_exception); goto fail;
    } else
        arg_raise_exception = obj_raise_exception == Py_True;
    CPyTagged arg_bitmap_arg_index;
    if (obj_bitmap_arg_index == NULL) {
        arg_bitmap_arg_index = CPY_INT_TAG;
    } else if (likely(PyLong_Check(obj_bitmap_arg_index)))
        arg_bitmap_arg_index = CPyTagged_BorrowFromObject(obj_bitmap_arg_index);
    else {
        CPy_TypeError("int", obj_bitmap_arg_index); goto fail;
    }
    char retval = CPyDef_emitwrapper___generate_arg_check(arg_name, arg_typ, arg_emitter, arg_error, arg_optional, arg_raise_exception, arg_bitmap_arg_index);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "generate_arg_check", 773, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___WrapperGenerator_____init__(PyObject *cpy_r_self, PyObject *cpy_r_cl, PyObject *cpy_r_emitter) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    CPy_INCREF(cpy_r_cl);
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_cl = cpy_r_cl;
    CPy_INCREF(cpy_r_emitter);
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_emitter = cpy_r_emitter;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "__init__", 849, CPyStatic_emitwrapper___globals);
        goto CPyL3;
    }
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_cleanups = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "__init__", 850, CPyStatic_emitwrapper___globals);
        goto CPyL3;
    }
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_optional_args = cpy_r_r1;
    cpy_r_r2 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r2);
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_traceback_code = cpy_r_r2;
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy_emitwrapper___WrapperGenerator_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"cl", "emitter", 0};
    PyObject *obj_cl;
    PyObject *obj_emitter;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_cl, &obj_emitter)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitwrapper___WrapperGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitwrapper.WrapperGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_cl;
    if (Py_TYPE(obj_cl) == CPyType_class_ir___ClassIR)
        arg_cl = obj_cl;
    else {
        arg_cl = NULL;
    }
    if (arg_cl != NULL) goto __LL9703;
    if (obj_cl == Py_None)
        arg_cl = obj_cl;
    else {
        arg_cl = NULL;
    }
    if (arg_cl != NULL) goto __LL9703;
    CPy_TypeError("mypyc.ir.class_ir.ClassIR or None", obj_cl); 
    goto fail;
__LL9703: ;
    PyObject *arg_emitter;
    if (likely(Py_TYPE(obj_emitter) == CPyType_emit___Emitter))
        arg_emitter = obj_emitter;
    else {
        CPy_TypeError("mypyc.codegen.emit.Emitter", obj_emitter); 
        goto fail;
    }
    char retval = CPyDef_emitwrapper___WrapperGenerator_____init__(arg_self, arg_cl, arg_emitter);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "__init__", 846, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___WrapperGenerator___set_target(PyObject *cpy_r_self, PyObject *cpy_r_fn) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    CPyTagged cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 859, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
CPyL1: ;
    if (((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_target_name != NULL) {
        CPy_DECREF(((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_target_name);
    }
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_target_name = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 859, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_r2 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_emitter;
    cpy_r_r3 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_r2)->_names;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_func_ir___FuncIR___cname(cpy_r_fn, cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 860, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    if (((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_target_cname != NULL) {
        CPy_DECREF(((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_target_cname);
    }
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_target_cname = cpy_r_r4;
    cpy_r_r5 = 1;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 860, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_r6 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 5, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* sig */
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 861, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
CPyL5: ;
    cpy_r_r7 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r6)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_num_bitmap_args != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_num_bitmap_args);
    }
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_num_bitmap_args = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 861, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_r9 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_num_bitmap_args;
    if (unlikely(cpy_r_r9 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "set_target", "WrapperGenerator", "num_bitmap_args", 862, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    CPyTagged_INCREF(cpy_r_r9);
CPyL7: ;
    cpy_r_r10 = cpy_r_r9 != 0;
    CPyTagged_DECREF(cpy_r_r9);
    if (!cpy_r_r10) goto CPyL14;
    cpy_r_r11 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 2, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* args */
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 863, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
CPyL9: ;
    cpy_r_r12 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_num_bitmap_args;
    if (unlikely(cpy_r_r12 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "set_target", "WrapperGenerator", "num_bitmap_args", 863, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    CPyTagged_INCREF(cpy_r_r12);
CPyL10: ;
    cpy_r_r13 = CPyTagged_Negate(cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r12);
    CPyTagged_DECREF(cpy_r_r13);
    cpy_r_r14 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r15 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_num_bitmap_args;
    if (unlikely(cpy_r_r15 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "set_target", "WrapperGenerator", "num_bitmap_args", 863, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    CPyTagged_INCREF(cpy_r_r15);
CPyL11: ;
    cpy_r_r16 = CPyTagged_Negate(cpy_r_r15);
    CPyTagged_DECREF(cpy_r_r15);
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = CPyTagged_StealAsObject(cpy_r_r16);
    cpy_r_r19 = PySlice_New(cpy_r_r14, cpy_r_r18, cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 863, CPyStatic_emitwrapper___globals);
        goto CPyL28;
    }
    cpy_r_r20 = PyObject_GetItem(cpy_r_r11, cpy_r_r19);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 863, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    if (((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_args != NULL) {
        CPy_DECREF(((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_args);
    }
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_args = cpy_r_r20;
    cpy_r_r21 = 1;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 863, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    } else
        goto CPyL16;
CPyL14: ;
    cpy_r_r22 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 2, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* args */
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 865, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
CPyL15: ;
    if (((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_args != NULL) {
        CPy_DECREF(((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_args);
    }
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_args = cpy_r_r22;
    cpy_r_r23 = 1;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 865, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
CPyL16: ;
    cpy_r_r24 = PyList_New(0);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 866, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_r25 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_args;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "set_target", "WrapperGenerator", "args", 866, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r25);
CPyL18: ;
    cpy_r_r26 = PyObject_GetIter(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 866, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
CPyL19: ;
    cpy_r_r27 = PyIter_Next(cpy_r_r26);
    if (cpy_r_r27 == NULL) goto CPyL30;
    if (likely(Py_TYPE(cpy_r_r27) == CPyType_func_ir___RuntimeArg))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "set_target", 866, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r27);
        goto CPyL31;
    }
    cpy_r_arg = cpy_r_r28;
    cpy_r_r29 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_name;
    CPy_INCREF(cpy_r_r29);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r30 = PyList_Append(cpy_r_r24, cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 866, CPyStatic_emitwrapper___globals);
        goto CPyL31;
    } else
        goto CPyL19;
CPyL22: ;
    cpy_r_r32 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 866, CPyStatic_emitwrapper___globals);
        goto CPyL29;
    }
    if (((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_arg_names != NULL) {
        CPy_DECREF(((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_arg_names);
    }
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_arg_names = cpy_r_r24;
    cpy_r_r33 = 1;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 866, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    cpy_r_r34 = CPY_GET_ATTR(cpy_r_fn, CPyType_func_ir___FuncIR, 3, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* ret_type */
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 867, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
CPyL25: ;
    if (((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_ret_type != NULL) {
        CPy_DECREF(((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_ret_type);
    }
    ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_ret_type = cpy_r_r34;
    cpy_r_r35 = 1;
    if (unlikely(!cpy_r_r35)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 867, CPyStatic_emitwrapper___globals);
        goto CPyL27;
    }
    return 1;
CPyL27: ;
    cpy_r_r36 = 2;
    return cpy_r_r36;
CPyL28: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_r24);
    goto CPyL27;
CPyL30: ;
    CPy_DECREF(cpy_r_r26);
    goto CPyL22;
CPyL31: ;
    CPy_DecRef(cpy_r_r24);
    CPy_DecRef(cpy_r_r26);
    goto CPyL27;
}

PyObject *CPyPy_emitwrapper___WrapperGenerator___set_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fn", 0};
    static CPyArg_Parser parser = {"O:set_target", kwlist, 0};
    PyObject *obj_fn;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fn)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitwrapper___WrapperGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitwrapper.WrapperGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_fn;
    if (likely(Py_TYPE(obj_fn) == CPyType_func_ir___FuncIR))
        arg_fn = obj_fn;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_fn); 
        goto fail;
    }
    char retval = CPyDef_emitwrapper___WrapperGenerator___set_target(arg_self, arg_fn);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "set_target", 853, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___WrapperGenerator___wrapper_name(PyObject *cpy_r_self) {
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
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    cpy_r_r0 = CPyStatics[7623]; /* 'CPyDunder_' */
    cpy_r_r1 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_target_name;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "wrapper_name", "WrapperGenerator", "target_name", 873, CPyStatic_emitwrapper___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_cl;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    CPy_DECREF(cpy_r_r2);
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_cl;
    CPy_INCREF(cpy_r_r5);
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "wrapper_name", 874, CPyStatic_emitwrapper___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r5);
        goto CPyL9;
    }
    cpy_r_r7 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_emitter;
    cpy_r_r8 = ((mypyc___codegen___emit___EmitterObject *)cpy_r_r7)->_names;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = CPyDef_class_ir___ClassIR___name_prefix(cpy_r_r6, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "wrapper_name", 874, CPyStatic_emitwrapper___globals);
        goto CPyL9;
    }
    cpy_r_r10 = cpy_r_r9;
    goto CPyL6;
CPyL5: ;
    cpy_r_r11 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r11);
    cpy_r_r10 = cpy_r_r11;
CPyL6: ;
    cpy_r_r12 = CPyStr_Build(3, cpy_r_r0, cpy_r_r1, cpy_r_r10);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "wrapper_name", 871, CPyStatic_emitwrapper___globals);
        goto CPyL8;
    }
    return cpy_r_r12;
CPyL8: ;
    cpy_r_r13 = NULL;
    return cpy_r_r13;
CPyL9: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL8;
}

PyObject *CPyPy_emitwrapper___WrapperGenerator___wrapper_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":wrapper_name", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitwrapper___WrapperGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitwrapper.WrapperGenerator", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___WrapperGenerator___wrapper_name(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "wrapper_name", 869, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___WrapperGenerator___use_goto(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_cleanups;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (!cpy_r_r4) goto CPyL6;
    cpy_r_r5 = cpy_r_r0;
    goto CPyL3;
CPyL2: ;
    cpy_r_r6 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_traceback_code;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r5 = cpy_r_r6;
CPyL3: ;
    cpy_r_r7 = PyObject_IsTrue(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "use_goto", -1, CPyStatic_emitwrapper___globals);
        goto CPyL5;
    }
    cpy_r_r9 = cpy_r_r7;
    return cpy_r_r9;
CPyL5: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL6: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL2;
}

PyObject *CPyPy_emitwrapper___WrapperGenerator___use_goto(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":use_goto", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitwrapper___WrapperGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitwrapper.WrapperGenerator", obj_self); 
        goto fail;
    }
    char retval = CPyDef_emitwrapper___WrapperGenerator___use_goto(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "use_goto", 877, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___WrapperGenerator___emit_header(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_input_args;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    cpy_r_r0 = CPyStatics[71]; /* ', ' */
    cpy_r_r1 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_arg_names;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "emit_header", "WrapperGenerator", "arg_names", 883, CPyStatic_emitwrapper___globals);
        goto CPyL14;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = PyList_New(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_header", 883, CPyStatic_emitwrapper___globals);
        goto CPyL15;
    }
    cpy_r_r5 = 0;
CPyL3: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL16;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r5);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "emit_header", 883, CPyStatic_emitwrapper___globals, "str", cpy_r_r10);
        goto CPyL17;
    }
    cpy_r_arg = cpy_r_r11;
    cpy_r_r12 = CPyStatics[7588]; /* 'PyObject *obj_' */
    cpy_r_r13 = CPyStr_Build(2, cpy_r_r12, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_header", 883, CPyStatic_emitwrapper___globals);
        goto CPyL17;
    }
    cpy_r_r14 = CPyList_SetItemUnsafe(cpy_r_r4, cpy_r_r5, cpy_r_r13);
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_header", 883, CPyStatic_emitwrapper___globals);
        goto CPyL17;
    }
    cpy_r_r15 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r15;
    goto CPyL3;
CPyL8: ;
    cpy_r_r16 = PyUnicode_Join(cpy_r_r0, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_header", 883, CPyStatic_emitwrapper___globals);
        goto CPyL14;
    }
    cpy_r_input_args = cpy_r_r16;
    cpy_r_r17 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_emitter;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = CPyStatics[7670]; /* 'static PyObject *{name}({input_args}) {{' */
    cpy_r_r19 = CPyDef_emitwrapper___WrapperGenerator___wrapper_name(cpy_r_self);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_header", 886, CPyStatic_emitwrapper___globals);
        goto CPyL18;
    }
    cpy_r_r20 = CPyStatics[193]; /* 'format' */
    PyObject *cpy_r_r21[3] = {cpy_r_r18, cpy_r_r19, cpy_r_input_args};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = CPyStatics[9990]; /* ('name', 'input_args') */
    cpy_r_r24 = PyObject_VectorcallMethod(cpy_r_r20, cpy_r_r22, 9223372036854775809ULL, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_header", 885, CPyStatic_emitwrapper___globals);
        goto CPyL19;
    }
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_input_args);
    if (likely(PyUnicode_Check(cpy_r_r24)))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "emit_header", 885, CPyStatic_emitwrapper___globals, "str", cpy_r_r24);
        goto CPyL20;
    }
    cpy_r_r26 = NULL;
    cpy_r_r27 = CPyDef_emit___Emitter___emit_line(cpy_r_r17, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r27 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_header", 884, CPyStatic_emitwrapper___globals);
        goto CPyL14;
    }
    return 1;
CPyL14: ;
    cpy_r_r28 = 2;
    return cpy_r_r28;
CPyL15: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL14;
CPyL16: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL8;
CPyL17: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r4);
    goto CPyL14;
CPyL18: ;
    CPy_DecRef(cpy_r_input_args);
    CPy_DecRef(cpy_r_r17);
    goto CPyL14;
CPyL19: ;
    CPy_DecRef(cpy_r_input_args);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r19);
    goto CPyL14;
CPyL20: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL14;
}

PyObject *CPyPy_emitwrapper___WrapperGenerator___emit_header(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":emit_header", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitwrapper___WrapperGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitwrapper.WrapperGenerator", obj_self); 
        goto fail;
    }
    char retval = CPyDef_emitwrapper___WrapperGenerator___emit_header(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_header", 881, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___WrapperGenerator___emit_arg_processing(PyObject *cpy_r_self, PyObject *cpy_r_error, char cpy_r_raise_exception) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_bitmap_arg_index;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    int64_t cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_arg_name;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r31;
    int32_t cpy_r_r32;
    char cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_optional;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    char cpy_r_r42;
    if (cpy_r_error != NULL) goto CPyL41;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_error = cpy_r_r0;
CPyL2: ;
    if (cpy_r_raise_exception != 2) goto CPyL4;
    cpy_r_raise_exception = 1;
CPyL4: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_error != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL42;
    if (likely(cpy_r_error != Py_None))
        cpy_r_r3 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "emit_arg_processing", 894, CPyStatic_emitwrapper___globals, "mypyc.codegen.emit.ErrorHandler", cpy_r_error);
        goto CPyL40;
    }
    cpy_r_r4 = cpy_r_r3;
    goto CPyL9;
CPyL7: ;
    cpy_r_r5 = CPyDef_emitwrapper___WrapperGenerator___error(cpy_r_self);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_arg_processing", 894, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
    cpy_r_r4 = cpy_r_r5;
CPyL9: ;
    cpy_r_error = cpy_r_r4;
    cpy_r_bitmap_arg_index = 0;
    cpy_r_r6 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_arg_names;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "emit_arg_processing", "WrapperGenerator", "arg_names", 896, CPyStatic_emitwrapper___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r6);
CPyL10: ;
    cpy_r_r7 = 0;
    cpy_r_r8 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_args;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "emit_arg_processing", "WrapperGenerator", "args", 896, CPyStatic_emitwrapper___globals);
        goto CPyL44;
    }
    CPy_INCREF(cpy_r_r8);
CPyL11: ;
    cpy_r_r9 = PyObject_GetIter(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_arg_processing", 896, CPyStatic_emitwrapper___globals);
        goto CPyL44;
    }
CPyL12: ;
    cpy_r_r10 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r11 = *(int64_t *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 << 1;
    cpy_r_r13 = (Py_ssize_t)cpy_r_r7 < (Py_ssize_t)cpy_r_r12;
    if (!cpy_r_r13) goto CPyL45;
    cpy_r_r14 = PyIter_Next(cpy_r_r9);
    if (cpy_r_r14 == NULL) goto CPyL45;
    cpy_r_r15 = CPyList_GetItemUnsafe(cpy_r_r6, cpy_r_r7);
    if (likely(PyUnicode_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "emit_arg_processing", 896, CPyStatic_emitwrapper___globals, "str", cpy_r_r15);
        goto CPyL46;
    }
    cpy_r_arg_name = cpy_r_r16;
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_func_ir___RuntimeArg))
        cpy_r_r17 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "emit_arg_processing", 896, CPyStatic_emitwrapper___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r14);
        goto CPyL47;
    }
    cpy_r_arg = cpy_r_r17;
    cpy_r_r18 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_kind;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = CPyStatic_nodes___ARG_STAR;
    if (unlikely(cpy_r_r19 == NULL)) {
        goto CPyL48;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR\" was not set");
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_arg_processing", 898, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r21 = cpy_r_r18 != cpy_r_r19;
    CPy_DECREF(cpy_r_r18);
    if (cpy_r_r21) goto CPyL21;
    cpy_r_r22 = cpy_r_r21;
    goto CPyL25;
CPyL21: ;
    cpy_r_r23 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_kind;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = CPyStatic_nodes___ARG_STAR2;
    if (unlikely(cpy_r_r24 == NULL)) {
        goto CPyL49;
    } else
        goto CPyL24;
CPyL22: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_STAR2\" was not set");
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_arg_processing", 898, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL24: ;
    cpy_r_r26 = cpy_r_r23 != cpy_r_r24;
    CPy_DECREF(cpy_r_r23);
    cpy_r_r22 = cpy_r_r26;
CPyL25: ;
    if (!cpy_r_r22) goto CPyL27;
    cpy_r_r27 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_type;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = cpy_r_r27;
    goto CPyL31;
CPyL27: ;
    cpy_r_r29 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r29 == NULL)) {
        goto CPyL50;
    } else
        goto CPyL30;
CPyL28: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r30 = 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_arg_processing", 898, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
    CPy_Unreachable();
CPyL30: ;
    CPy_INCREF(cpy_r_r29);
    cpy_r_r28 = cpy_r_r29;
CPyL31: ;
    cpy_r_typ = cpy_r_r28;
    cpy_r_r31 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_optional_args;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = PySequence_Contains(cpy_r_r31, cpy_r_arg);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r33 = cpy_r_r32 >= 0;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_arg_processing", 899, CPyStatic_emitwrapper___globals);
        goto CPyL51;
    }
    cpy_r_r34 = cpy_r_r32;
    cpy_r_optional = cpy_r_r34;
    cpy_r_r35 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_emitter;
    CPy_INCREF(cpy_r_r35);
    CPy_INCREF(cpy_r_error);
    if (likely(cpy_r_error != Py_None))
        cpy_r_r36 = cpy_r_error;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "emit_arg_processing", 904, CPyStatic_emitwrapper___globals, "mypyc.codegen.emit.ErrorHandler", cpy_r_error);
        goto CPyL52;
    }
    cpy_r_r37 = CPyDef_emitwrapper___generate_arg_check(cpy_r_arg_name, cpy_r_typ, cpy_r_r35, cpy_r_r36, cpy_r_optional, cpy_r_raise_exception, cpy_r_bitmap_arg_index);
    CPy_DECREF(cpy_r_arg_name);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_arg_processing", 900, CPyStatic_emitwrapper___globals);
        goto CPyL53;
    }
    if (!cpy_r_optional) goto CPyL54;
    cpy_r_r38 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_typ)->_error_overlap;
    CPy_DECREF(cpy_r_typ);
    if (!cpy_r_r38) goto CPyL37;
CPyL36: ;
    cpy_r_r39 = CPyTagged_Add(cpy_r_bitmap_arg_index, 2);
    CPyTagged_DECREF(cpy_r_bitmap_arg_index);
    cpy_r_bitmap_arg_index = cpy_r_r39;
CPyL37: ;
    cpy_r_r40 = cpy_r_r7 + 2;
    cpy_r_r7 = cpy_r_r40;
    goto CPyL12;
CPyL38: ;
    cpy_r_r41 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_arg_processing", 896, CPyStatic_emitwrapper___globals);
        goto CPyL40;
    }
    return 1;
CPyL40: ;
    cpy_r_r42 = 2;
    return cpy_r_r42;
CPyL41: ;
    CPy_INCREF(cpy_r_error);
    goto CPyL2;
CPyL42: ;
    CPy_DECREF(cpy_r_error);
    goto CPyL7;
CPyL43: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_bitmap_arg_index);
    goto CPyL40;
CPyL44: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_bitmap_arg_index);
    CPy_DecRef(cpy_r_r6);
    goto CPyL40;
CPyL45: ;
    CPy_DECREF(cpy_r_error);
    CPyTagged_DECREF(cpy_r_bitmap_arg_index);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r9);
    goto CPyL38;
CPyL46: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_bitmap_arg_index);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r14);
    goto CPyL40;
CPyL47: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_bitmap_arg_index);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_arg_name);
    goto CPyL40;
CPyL48: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_bitmap_arg_index);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_arg_name);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_r18);
    goto CPyL17;
CPyL49: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_bitmap_arg_index);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_arg_name);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_r23);
    goto CPyL22;
CPyL50: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_bitmap_arg_index);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_arg_name);
    CPy_DecRef(cpy_r_arg);
    goto CPyL28;
CPyL51: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_bitmap_arg_index);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_arg_name);
    CPy_DecRef(cpy_r_typ);
    goto CPyL40;
CPyL52: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_bitmap_arg_index);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_arg_name);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_r35);
    goto CPyL40;
CPyL53: ;
    CPy_DecRef(cpy_r_error);
    CPyTagged_DecRef(cpy_r_bitmap_arg_index);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_typ);
    goto CPyL40;
CPyL54: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL37;
}

PyObject *CPyPy_emitwrapper___WrapperGenerator___emit_arg_processing(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"error", "raise_exception", 0};
    static CPyArg_Parser parser = {"|OO:emit_arg_processing", kwlist, 0};
    PyObject *obj_error = NULL;
    PyObject *obj_raise_exception = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_error, &obj_raise_exception)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitwrapper___WrapperGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitwrapper.WrapperGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_error;
    if (obj_error == NULL) {
        arg_error = NULL;
        goto __LL9704;
    }
    if (PyObject_TypeCheck(obj_error, CPyType_emit___ErrorHandler))
        arg_error = obj_error;
    else {
        arg_error = NULL;
    }
    if (arg_error != NULL) goto __LL9704;
    if (obj_error == Py_None)
        arg_error = obj_error;
    else {
        arg_error = NULL;
    }
    if (arg_error != NULL) goto __LL9704;
    CPy_TypeError("mypyc.codegen.emit.ErrorHandler or None", obj_error); 
    goto fail;
__LL9704: ;
    char arg_raise_exception;
    if (obj_raise_exception == NULL) {
        arg_raise_exception = 2;
    } else if (unlikely(!PyBool_Check(obj_raise_exception))) {
        CPy_TypeError("bool", obj_raise_exception); goto fail;
    } else
        arg_raise_exception = obj_raise_exception == Py_True;
    char retval = CPyDef_emitwrapper___WrapperGenerator___emit_arg_processing(arg_self, arg_error, arg_raise_exception);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_arg_processing", 890, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___WrapperGenerator___emit_call(PyObject *cpy_r_self, PyObject *cpy_r_not_implemented_handler) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_native_args;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject **cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    CPyTagged cpy_r_r37;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r38;
    int32_t cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_bitmap_args;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_ret_type;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_emitter;
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
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    CPyPtr cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    if (cpy_r_not_implemented_handler != NULL) goto CPyL62;
    cpy_r_r0 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r0);
    cpy_r_not_implemented_handler = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyStatics[71]; /* ', ' */
    cpy_r_r2 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_arg_names;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "emit_call", "WrapperGenerator", "arg_names", 918, CPyStatic_emitwrapper___globals);
        goto CPyL63;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = PyList_New(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 918, CPyStatic_emitwrapper___globals);
        goto CPyL64;
    }
    cpy_r_r6 = 0;
CPyL5: ;
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = (Py_ssize_t)cpy_r_r6 < (Py_ssize_t)cpy_r_r9;
    if (!cpy_r_r10) goto CPyL65;
    cpy_r_r11 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r6);
    if (likely(PyUnicode_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 918, CPyStatic_emitwrapper___globals, "str", cpy_r_r11);
        goto CPyL66;
    }
    cpy_r_arg = cpy_r_r12;
    cpy_r_r13 = CPyStatics[7659]; /* 'arg_' */
    cpy_r_r14 = CPyStr_Build(2, cpy_r_r13, cpy_r_arg);
    CPy_DECREF(cpy_r_arg);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 918, CPyStatic_emitwrapper___globals);
        goto CPyL66;
    }
    cpy_r_r15 = CPyList_SetItemUnsafe(cpy_r_r5, cpy_r_r6, cpy_r_r14);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 918, CPyStatic_emitwrapper___globals);
        goto CPyL66;
    }
    cpy_r_r16 = cpy_r_r6 + 2;
    cpy_r_r6 = cpy_r_r16;
    goto CPyL5;
CPyL10: ;
    cpy_r_r17 = PyUnicode_Join(cpy_r_r1, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 918, CPyStatic_emitwrapper___globals);
        goto CPyL63;
    }
    cpy_r_native_args = cpy_r_r17;
    cpy_r_r18 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_num_bitmap_args;
    if (unlikely(cpy_r_r18 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "emit_call", "WrapperGenerator", "num_bitmap_args", 919, CPyStatic_emitwrapper___globals);
        goto CPyL67;
    }
    CPyTagged_INCREF(cpy_r_r18);
CPyL12: ;
    cpy_r_r19 = cpy_r_r18 != 0;
    CPyTagged_DECREF(cpy_r_r18);
    if (!cpy_r_r19) goto CPyL28;
    cpy_r_r20 = CPyStatics[71]; /* ', ' */
    cpy_r_r21 = PyList_New(0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 921, CPyStatic_emitwrapper___globals);
        goto CPyL67;
    }
    cpy_r_r22 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_num_bitmap_args;
    if (unlikely(cpy_r_r22 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "emit_call", "WrapperGenerator", "num_bitmap_args", 921, CPyStatic_emitwrapper___globals);
        goto CPyL68;
    }
    CPyTagged_INCREF(cpy_r_r22);
CPyL15: ;
    cpy_r_r23 = (PyObject *)&PyRange_Type;
    cpy_r_r24 = CPyTagged_StealAsObject(cpy_r_r22);
    PyObject *cpy_r_r25[1] = {cpy_r_r24};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = _PyObject_Vectorcall(cpy_r_r23, cpy_r_r26, 1, 0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 921, CPyStatic_emitwrapper___globals);
        goto CPyL69;
    }
    CPy_DECREF(cpy_r_r24);
    if (likely(PyRange_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 921, CPyStatic_emitwrapper___globals, "range", cpy_r_r27);
        goto CPyL68;
    }
    cpy_r_r29 = CPyModule_builtins;
    cpy_r_r30 = CPyStatics[2328]; /* 'reversed' */
    cpy_r_r31 = CPyObject_GetAttr(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 921, CPyStatic_emitwrapper___globals);
        goto CPyL70;
    }
    PyObject *cpy_r_r32[1] = {cpy_r_r28};
    cpy_r_r33 = (PyObject **)&cpy_r_r32;
    cpy_r_r34 = _PyObject_Vectorcall(cpy_r_r31, cpy_r_r33, 1, 0);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 921, CPyStatic_emitwrapper___globals);
        goto CPyL70;
    }
    CPy_DECREF(cpy_r_r28);
    cpy_r_r35 = PyObject_GetIter(cpy_r_r34);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 921, CPyStatic_emitwrapper___globals);
        goto CPyL68;
    }
CPyL20: ;
    cpy_r_r36 = PyIter_Next(cpy_r_r35);
    if (cpy_r_r36 == NULL) goto CPyL71;
    if (likely(PyLong_Check(cpy_r_r36)))
        cpy_r_r37 = CPyTagged_FromObject(cpy_r_r36);
    else {
        CPy_TypeError("int", cpy_r_r36); cpy_r_r37 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 921, CPyStatic_emitwrapper___globals);
        goto CPyL72;
    }
    cpy_r_i = cpy_r_r37;
    cpy_r_r38 = CPyDef_mypyc___common___bitmap_name(cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 921, CPyStatic_emitwrapper___globals);
        goto CPyL72;
    }
    cpy_r_r39 = PyList_Append(cpy_r_r21, cpy_r_r38);
    CPy_DECREF(cpy_r_r38);
    cpy_r_r40 = cpy_r_r39 >= 0;
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 921, CPyStatic_emitwrapper___globals);
        goto CPyL72;
    } else
        goto CPyL20;
CPyL24: ;
    cpy_r_r41 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 921, CPyStatic_emitwrapper___globals);
        goto CPyL68;
    }
    cpy_r_r42 = PyUnicode_Join(cpy_r_r20, cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 920, CPyStatic_emitwrapper___globals);
        goto CPyL67;
    }
    cpy_r_bitmap_args = cpy_r_r42;
    cpy_r_r43 = CPyStatics[71]; /* ', ' */
    cpy_r_r44 = CPyStr_Build(3, cpy_r_native_args, cpy_r_r43, cpy_r_bitmap_args);
    CPy_DECREF(cpy_r_native_args);
    CPy_DECREF(cpy_r_bitmap_args);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 923, CPyStatic_emitwrapper___globals);
        goto CPyL63;
    }
    cpy_r_native_args = cpy_r_r44;
CPyL28: ;
    cpy_r_r45 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_ret_type;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "emit_call", "WrapperGenerator", "ret_type", 925, CPyStatic_emitwrapper___globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r45);
CPyL29: ;
    cpy_r_ret_type = cpy_r_r45;
    cpy_r_r46 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_emitter;
    CPy_INCREF(cpy_r_r46);
    cpy_r_emitter = cpy_r_r46;
    cpy_r_r47 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_ret_type)->_is_unboxed;
    if (cpy_r_r47) goto CPyL73;
CPyL30: ;
    cpy_r_r48 = CPyDef_emitwrapper___WrapperGenerator___use_goto(cpy_r_self);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 927, CPyStatic_emitwrapper___globals);
        goto CPyL74;
    }
    if (cpy_r_r48) {
        goto CPyL73;
    } else
        goto CPyL50;
CPyL32: ;
    cpy_r_r49 = CPyDef_emit___Emitter___ctype_spaced(cpy_r_emitter, cpy_r_ret_type);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 932, CPyStatic_emitwrapper___globals);
        goto CPyL75;
    }
    cpy_r_r50 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r51 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_target_cname;
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "emit_call", "WrapperGenerator", "target_cname", 932, CPyStatic_emitwrapper___globals);
        goto CPyL76;
    }
    CPy_INCREF(cpy_r_r51);
CPyL34: ;
    cpy_r_r52 = CPyStatics[7249]; /* 'retval = ' */
    cpy_r_r53 = CPyStatics[2381]; /* '(' */
    cpy_r_r54 = CPyStatics[6872]; /* ');' */
    cpy_r_r55 = CPyStr_Build(7, cpy_r_r49, cpy_r_r52, cpy_r_r50, cpy_r_r51, cpy_r_r53, cpy_r_native_args, cpy_r_r54);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_native_args);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 931, CPyStatic_emitwrapper___globals);
        goto CPyL77;
    }
    cpy_r_r56 = NULL;
    cpy_r_r57 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r55, cpy_r_r56);
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 930, CPyStatic_emitwrapper___globals);
        goto CPyL77;
    }
    cpy_r_r58 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_cleanups;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = CPyStatics[7391]; /* 'emit_lines' */
    cpy_r_r60 = CPyObject_GetAttr(cpy_r_emitter, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 926, CPyStatic_emitwrapper___globals);
        goto CPyL78;
    }
    cpy_r_r61 = PyList_New(0);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 926, CPyStatic_emitwrapper___globals);
        goto CPyL79;
    }
    cpy_r_r62 = CPyList_Extend(cpy_r_r61, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 926, CPyStatic_emitwrapper___globals);
        goto CPyL80;
    } else
        goto CPyL81;
CPyL39: ;
    cpy_r_r63 = PyList_AsTuple(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 926, CPyStatic_emitwrapper___globals);
        goto CPyL82;
    }
    cpy_r_r64 = PyDict_New();
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 926, CPyStatic_emitwrapper___globals);
        goto CPyL83;
    }
    cpy_r_r65 = PyObject_Call(cpy_r_r60, cpy_r_r63, cpy_r_r64);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 926, CPyStatic_emitwrapper___globals);
        goto CPyL77;
    } else
        goto CPyL84;
CPyL42: ;
    cpy_r_r66 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_ret_type)->_is_unboxed;
    if (!cpy_r_r66) goto CPyL45;
CPyL43: ;
    cpy_r_r67 = CPyStatics[7233]; /* 'retval' */
    cpy_r_r68 = CPyStatics[7171]; /* 'return NULL;' */
    cpy_r_r69 = CPyDef_emit___Emitter___emit_error_check(cpy_r_emitter, cpy_r_r67, cpy_r_ret_type, cpy_r_r68);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 937, CPyStatic_emitwrapper___globals);
        goto CPyL77;
    }
    cpy_r_r70 = CPyStatics[7233]; /* 'retval' */
    cpy_r_r71 = CPyStatics[7251]; /* 'retbox' */
    cpy_r_r72 = 2;
    cpy_r_r73 = CPyDef_emit___Emitter___emit_box(cpy_r_emitter, cpy_r_r70, cpy_r_r71, cpy_r_ret_type, 1, cpy_r_r72);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 938, CPyStatic_emitwrapper___globals);
        goto CPyL77;
    }
CPyL45: ;
    cpy_r_r74 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_ret_type)->_is_unboxed;
    CPy_DECREF(cpy_r_ret_type);
    if (!cpy_r_r74) goto CPyL47;
CPyL46: ;
    cpy_r_r75 = CPyStatics[7251]; /* 'retbox' */
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = cpy_r_r75;
    goto CPyL48;
CPyL47: ;
    cpy_r_r77 = CPyStatics[7233]; /* 'retval' */
    CPy_INCREF(cpy_r_r77);
    cpy_r_r76 = cpy_r_r77;
CPyL48: ;
    cpy_r_r78 = CPyStatics[6945]; /* 'return ' */
    cpy_r_r79 = CPyStatics[6886]; /* ';' */
    cpy_r_r80 = CPyStr_Build(3, cpy_r_r78, cpy_r_r76, cpy_r_r79);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 940, CPyStatic_emitwrapper___globals);
        goto CPyL85;
    }
    cpy_r_r81 = NULL;
    cpy_r_r82 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r80, cpy_r_r81);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_emitter);
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 940, CPyStatic_emitwrapper___globals);
        goto CPyL61;
    } else
        goto CPyL60;
CPyL50: ;
    cpy_r_r83 = CPyStr_IsTrue(cpy_r_not_implemented_handler);
    if (!cpy_r_r83) goto CPyL86;
    cpy_r_r84 = (PyObject *)CPyType_rtypes___RInstance;
    cpy_r_r85 = (CPyPtr)&((PyObject *)cpy_r_ret_type)->ob_type;
    cpy_r_r86 = *(PyObject * *)cpy_r_r85;
    CPy_DECREF(cpy_r_ret_type);
    cpy_r_r87 = cpy_r_r86 == cpy_r_r84;
    if (cpy_r_r87) goto CPyL87;
    cpy_r_r88 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r89 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_target_cname;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "emit_call", "WrapperGenerator", "target_cname", 946, CPyStatic_emitwrapper___globals);
        goto CPyL88;
    }
    CPy_INCREF(cpy_r_r89);
CPyL53: ;
    cpy_r_r90 = CPyStatics[7672]; /* 'PyObject *retbox = ' */
    cpy_r_r91 = CPyStatics[2381]; /* '(' */
    cpy_r_r92 = CPyStatics[6872]; /* ');' */
    cpy_r_r93 = CPyStr_Build(6, cpy_r_r90, cpy_r_r88, cpy_r_r89, cpy_r_r91, cpy_r_native_args, cpy_r_r92);
    CPy_DECREF(cpy_r_r89);
    CPy_DECREF(cpy_r_native_args);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 945, CPyStatic_emitwrapper___globals);
        goto CPyL89;
    }
    cpy_r_r94 = NULL;
    cpy_r_r95 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r93, cpy_r_r94);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r95 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 944, CPyStatic_emitwrapper___globals);
        goto CPyL89;
    }
    cpy_r_r96 = CPyStatics[7673]; /* 'if (retbox == Py_NotImplemented) {' */
    cpy_r_r97 = CPyStatics[1406]; /* '}' */
    cpy_r_r98 = CPyStatics[7252]; /* 'return retbox;' */
    cpy_r_r99 = PyTuple_Pack(4, cpy_r_r96, cpy_r_not_implemented_handler, cpy_r_r97, cpy_r_r98);
    CPy_DECREF(cpy_r_not_implemented_handler);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 949, CPyStatic_emitwrapper___globals);
        goto CPyL85;
    }
    cpy_r_r100 = CPyDef_emit___Emitter___emit_lines(cpy_r_emitter, cpy_r_r99);
    CPy_DECREF(cpy_r_r99);
    CPy_DECREF(cpy_r_emitter);
    if (unlikely(cpy_r_r100 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 949, CPyStatic_emitwrapper___globals);
        goto CPyL61;
    } else
        goto CPyL60;
CPyL57: ;
    cpy_r_r101 = CPyStatics[6945]; /* 'return ' */
    cpy_r_r102 = CPyStatics[6880]; /* 'CPyDef_' */
    cpy_r_r103 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_target_cname;
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AttributeError("mypyc/codegen/emitwrapper.py", "emit_call", "WrapperGenerator", "target_cname", 956, CPyStatic_emitwrapper___globals);
        goto CPyL90;
    }
    CPy_INCREF(cpy_r_r103);
CPyL58: ;
    cpy_r_r104 = CPyStatics[2381]; /* '(' */
    cpy_r_r105 = CPyStatics[6872]; /* ');' */
    cpy_r_r106 = CPyStr_Build(6, cpy_r_r101, cpy_r_r102, cpy_r_r103, cpy_r_r104, cpy_r_native_args, cpy_r_r105);
    CPy_DECREF(cpy_r_r103);
    CPy_DECREF(cpy_r_native_args);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 956, CPyStatic_emitwrapper___globals);
        goto CPyL85;
    }
    cpy_r_r107 = NULL;
    cpy_r_r108 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r106, cpy_r_r107);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_emitter);
    if (unlikely(cpy_r_r108 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 956, CPyStatic_emitwrapper___globals);
        goto CPyL61;
    }
CPyL60: ;
    return 1;
CPyL61: ;
    cpy_r_r109 = 2;
    return cpy_r_r109;
CPyL62: ;
    CPy_INCREF(cpy_r_not_implemented_handler);
    goto CPyL2;
CPyL63: ;
    CPy_DecRef(cpy_r_not_implemented_handler);
    goto CPyL61;
CPyL64: ;
    CPy_DecRef(cpy_r_not_implemented_handler);
    CPy_DecRef(cpy_r_r2);
    goto CPyL61;
CPyL65: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL10;
CPyL66: ;
    CPy_DecRef(cpy_r_not_implemented_handler);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL61;
CPyL67: ;
    CPy_DecRef(cpy_r_not_implemented_handler);
    CPy_DecRef(cpy_r_native_args);
    goto CPyL61;
CPyL68: ;
    CPy_DecRef(cpy_r_not_implemented_handler);
    CPy_DecRef(cpy_r_native_args);
    CPy_DecRef(cpy_r_r21);
    goto CPyL61;
CPyL69: ;
    CPy_DecRef(cpy_r_not_implemented_handler);
    CPy_DecRef(cpy_r_native_args);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    goto CPyL61;
CPyL70: ;
    CPy_DecRef(cpy_r_not_implemented_handler);
    CPy_DecRef(cpy_r_native_args);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r28);
    goto CPyL61;
CPyL71: ;
    CPy_DECREF(cpy_r_r35);
    goto CPyL24;
CPyL72: ;
    CPy_DecRef(cpy_r_not_implemented_handler);
    CPy_DecRef(cpy_r_native_args);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r35);
    goto CPyL61;
CPyL73: ;
    CPy_DECREF(cpy_r_not_implemented_handler);
    goto CPyL32;
CPyL74: ;
    CPy_DecRef(cpy_r_not_implemented_handler);
    CPy_DecRef(cpy_r_native_args);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_emitter);
    goto CPyL61;
CPyL75: ;
    CPy_DecRef(cpy_r_native_args);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_emitter);
    goto CPyL61;
CPyL76: ;
    CPy_DecRef(cpy_r_native_args);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r49);
    goto CPyL61;
CPyL77: ;
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_emitter);
    goto CPyL61;
CPyL78: ;
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r58);
    goto CPyL61;
CPyL79: ;
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r58);
    CPy_DecRef(cpy_r_r60);
    goto CPyL61;
CPyL80: ;
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r61);
    goto CPyL61;
CPyL81: ;
    CPy_DECREF(cpy_r_r62);
    goto CPyL39;
CPyL82: ;
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r60);
    goto CPyL61;
CPyL83: ;
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r60);
    CPy_DecRef(cpy_r_r63);
    goto CPyL61;
CPyL84: ;
    CPy_DECREF(cpy_r_r65);
    goto CPyL42;
CPyL85: ;
    CPy_DecRef(cpy_r_emitter);
    goto CPyL61;
CPyL86: ;
    CPy_DECREF(cpy_r_not_implemented_handler);
    CPy_DECREF(cpy_r_ret_type);
    goto CPyL57;
CPyL87: ;
    CPy_DECREF(cpy_r_not_implemented_handler);
    goto CPyL57;
CPyL88: ;
    CPy_DecRef(cpy_r_not_implemented_handler);
    CPy_DecRef(cpy_r_native_args);
    CPy_DecRef(cpy_r_emitter);
    goto CPyL61;
CPyL89: ;
    CPy_DecRef(cpy_r_not_implemented_handler);
    CPy_DecRef(cpy_r_emitter);
    goto CPyL61;
CPyL90: ;
    CPy_DecRef(cpy_r_native_args);
    CPy_DecRef(cpy_r_emitter);
    goto CPyL61;
}

PyObject *CPyPy_emitwrapper___WrapperGenerator___emit_call(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"not_implemented_handler", 0};
    static CPyArg_Parser parser = {"|O:emit_call", kwlist, 0};
    PyObject *obj_not_implemented_handler = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_not_implemented_handler)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitwrapper___WrapperGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitwrapper.WrapperGenerator", obj_self); 
        goto fail;
    }
    PyObject *arg_not_implemented_handler;
    if (obj_not_implemented_handler == NULL) {
        arg_not_implemented_handler = NULL;
    } else if (likely(PyUnicode_Check(obj_not_implemented_handler)))
        arg_not_implemented_handler = obj_not_implemented_handler;
    else {
        CPy_TypeError("str", obj_not_implemented_handler); 
        goto fail;
    }
    char retval = CPyDef_emitwrapper___WrapperGenerator___emit_call(arg_self, arg_not_implemented_handler);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_call", 912, CPyStatic_emitwrapper___globals);
    return NULL;
}

PyObject *CPyDef_emitwrapper___WrapperGenerator___error(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_cleanups;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (cpy_r_r4) goto CPyL2;
    cpy_r_r5 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_traceback_code;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStr_IsTrue(cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (!cpy_r_r6) goto CPyL4;
CPyL2: ;
    cpy_r_r7 = CPyStatics[1204]; /* 'fail' */
    cpy_r_r8 = CPyDef_emit___GotoHandler(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "error", 963, CPyStatic_emitwrapper___globals);
        goto CPyL6;
    }
    return cpy_r_r8;
CPyL4: ;
    cpy_r_r9 = CPyStatics[6879]; /* 'NULL' */
    cpy_r_r10 = CPyDef_emit___ReturnHandler(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "error", 966, CPyStatic_emitwrapper___globals);
        goto CPyL6;
    }
    return cpy_r_r10;
CPyL6: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
}

PyObject *CPyPy_emitwrapper___WrapperGenerator___error(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":error", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitwrapper___WrapperGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitwrapper.WrapperGenerator", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_emitwrapper___WrapperGenerator___error(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "error", 959, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___WrapperGenerator___emit_error_handling(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_emitter;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    cpy_r_r0 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_emitter;
    CPy_INCREF(cpy_r_r0);
    cpy_r_emitter = cpy_r_r0;
    cpy_r_r1 = CPyDef_emitwrapper___WrapperGenerator___use_goto(cpy_r_self);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_error_handling", 971, CPyStatic_emitwrapper___globals);
        goto CPyL14;
    }
    if (!cpy_r_r1) goto CPyL15;
    cpy_r_r2 = CPyStatics[1204]; /* 'fail' */
    cpy_r_r3 = CPyDef_emit___Emitter___emit_label(cpy_r_emitter, cpy_r_r2);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_error_handling", 972, CPyStatic_emitwrapper___globals);
        goto CPyL14;
    }
    cpy_r_r4 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_cleanups;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyStatics[7391]; /* 'emit_lines' */
    cpy_r_r6 = CPyObject_GetAttr(cpy_r_emitter, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_error_handling", 970, CPyStatic_emitwrapper___globals);
        goto CPyL16;
    }
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_error_handling", 970, CPyStatic_emitwrapper___globals);
        goto CPyL17;
    }
    cpy_r_r8 = CPyList_Extend(cpy_r_r7, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_error_handling", 970, CPyStatic_emitwrapper___globals);
        goto CPyL18;
    } else
        goto CPyL19;
CPyL6: ;
    cpy_r_r9 = PyList_AsTuple(cpy_r_r7);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_error_handling", 970, CPyStatic_emitwrapper___globals);
        goto CPyL20;
    }
    cpy_r_r10 = PyDict_New();
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_error_handling", 970, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    cpy_r_r11 = PyObject_Call(cpy_r_r6, cpy_r_r9, cpy_r_r10);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_error_handling", 970, CPyStatic_emitwrapper___globals);
        goto CPyL14;
    } else
        goto CPyL22;
CPyL9: ;
    cpy_r_r12 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_traceback_code;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyStr_IsTrue(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    if (!cpy_r_r13) goto CPyL11;
    cpy_r_r14 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_traceback_code;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = NULL;
    cpy_r_r16 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r14, cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r16 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_error_handling", 975, CPyStatic_emitwrapper___globals);
        goto CPyL14;
    }
CPyL11: ;
    cpy_r_r17 = CPyStatics[7171]; /* 'return NULL;' */
    cpy_r_r18 = NULL;
    cpy_r_r19 = CPyDef_emit___Emitter___emit_line(cpy_r_emitter, cpy_r_r17, cpy_r_r18);
    CPy_DECREF(cpy_r_emitter);
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_error_handling", 976, CPyStatic_emitwrapper___globals);
        goto CPyL13;
    }
CPyL12: ;
    return 1;
CPyL13: ;
    cpy_r_r20 = 2;
    return cpy_r_r20;
CPyL14: ;
    CPy_DecRef(cpy_r_emitter);
    goto CPyL13;
CPyL15: ;
    CPy_DECREF(cpy_r_emitter);
    goto CPyL12;
CPyL16: ;
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r4);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r6);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL13;
CPyL19: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL6;
CPyL20: ;
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r6);
    goto CPyL13;
CPyL21: ;
    CPy_DecRef(cpy_r_emitter);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r9);
    goto CPyL13;
CPyL22: ;
    CPy_DECREF(cpy_r_r11);
    goto CPyL9;
}

PyObject *CPyPy_emitwrapper___WrapperGenerator___emit_error_handling(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":emit_error_handling", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitwrapper___WrapperGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitwrapper.WrapperGenerator", obj_self); 
        goto fail;
    }
    char retval = CPyDef_emitwrapper___WrapperGenerator___emit_error_handling(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "emit_error_handling", 968, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper___WrapperGenerator___finish(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___codegen___emitwrapper___WrapperGeneratorObject *)cpy_r_self)->_emitter;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[1406]; /* '}' */
    cpy_r_r2 = NULL;
    cpy_r_r3 = CPyDef_emit___Emitter___emit_line(cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r3 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "finish", 979, CPyStatic_emitwrapper___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_emitwrapper___WrapperGenerator___finish(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":finish", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_emitwrapper___WrapperGenerator))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypyc.codegen.emitwrapper.WrapperGenerator", obj_self); 
        goto fail;
    }
    char retval = CPyDef_emitwrapper___WrapperGenerator___finish(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "finish", 978, CPyStatic_emitwrapper___globals);
    return NULL;
}

char CPyDef_emitwrapper_____top_level__(void) {
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
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
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
    int32_t cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", -1, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_emitwrapper___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", 13, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9736]; /* ('Sequence',) */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_emitwrapper___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", 15, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9991]; /* ('ARG_NAMED', 'ARG_NAMED_OPT', 'ARG_OPT', 'ARG_POS',
                                     'ARG_STAR', 'ARG_STAR2', 'ArgKind') */
    cpy_r_r14 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r15 = CPyStatic_emitwrapper___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", 17, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    CPyModule_mypy___nodes = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9992]; /* ('op_methods_to_symbols', 'reverse_op_method_names',
                                     'reverse_op_methods') */
    cpy_r_r18 = CPyStatics[3744]; /* 'mypy.operators' */
    cpy_r_r19 = CPyStatic_emitwrapper___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", 18, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    CPyModule_mypy___operators = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___operators);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[9993]; /* ('AssignHandler', 'Emitter', 'ErrorHandler',
                                     'GotoHandler', 'ReturnHandler') */
    cpy_r_r22 = CPyStatics[7047]; /* 'mypyc.codegen.emit' */
    cpy_r_r23 = CPyStatic_emitwrapper___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", 19, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    CPyModule_mypyc___codegen___emit = cpy_r_r24;
    CPy_INCREF(CPyModule_mypyc___codegen___emit);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[9994]; /* ('BITMAP_BITS', 'BITMAP_TYPE', 'DUNDER_PREFIX',
                                     'NATIVE_PREFIX', 'PREFIX', 'bitmap_name',
                                     'use_vectorcall') */
    cpy_r_r26 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r27 = CPyStatic_emitwrapper___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", 20, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    CPyModule_mypyc___common = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[9904]; /* ('ClassIR',) */
    cpy_r_r30 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r31 = CPyStatic_emitwrapper___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", 29, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[9995]; /* ('FUNC_STATICMETHOD', 'FuncIR', 'RuntimeArg') */
    cpy_r_r34 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r35 = CPyStatic_emitwrapper___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", 30, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r36;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[9996]; /* ('RInstance', 'RType', 'is_bool_rprimitive',
                                     'is_int_rprimitive', 'is_object_rprimitive',
                                     'object_rprimitive') */
    cpy_r_r38 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r39 = CPyStatic_emitwrapper___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", 31, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r40;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[9957]; /* ('NameGenerator',) */
    cpy_r_r42 = CPyStatics[6845]; /* 'mypyc.namegen' */
    cpy_r_r43 = CPyStatic_emitwrapper___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", 39, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    CPyModule_mypyc___namegen = cpy_r_r44;
    CPy_INCREF(CPyModule_mypyc___namegen);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[4196]; /* '__lt__' */
    cpy_r_r46 = CPyStatics[7677]; /* 'Py_LT' */
    cpy_r_r47 = CPyStatics[4198]; /* '__gt__' */
    cpy_r_r48 = CPyStatics[7678]; /* 'Py_GT' */
    cpy_r_r49 = CPyStatics[4199]; /* '__le__' */
    cpy_r_r50 = CPyStatics[7679]; /* 'Py_LE' */
    cpy_r_r51 = CPyStatics[4197]; /* '__ge__' */
    cpy_r_r52 = CPyStatics[7680]; /* 'Py_GE' */
    cpy_r_r53 = CPyStatics[753]; /* '__eq__' */
    cpy_r_r54 = CPyStatics[7681]; /* 'Py_EQ' */
    cpy_r_r55 = CPyStatics[754]; /* '__ne__' */
    cpy_r_r56 = CPyStatics[7682]; /* 'Py_NE' */
    cpy_r_r57 = CPyDict_Build(6, cpy_r_r45, cpy_r_r46, cpy_r_r47, cpy_r_r48, cpy_r_r49, cpy_r_r50, cpy_r_r51, cpy_r_r52, cpy_r_r53, cpy_r_r54, cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", 492, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    cpy_r_r58 = CPyStatic_emitwrapper___globals;
    cpy_r_r59 = CPyStatics[7622]; /* 'RICHCOMPARE_OPS' */
    cpy_r_r60 = CPyDict_SetItem(cpy_r_r58, cpy_r_r59, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", 492, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    cpy_r_r62 = NULL;
    cpy_r_r63 = CPyStatics[7268]; /* 'mypyc.codegen.emitwrapper' */
    cpy_r_r64 = (PyObject *)CPyType_emitwrapper___WrapperGenerator_template;
    cpy_r_r65 = CPyType_FromTemplate(cpy_r_r64, cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", 841, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    cpy_r_r66 = CPyDef_emitwrapper___WrapperGenerator_trait_vtable_setup();
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", -1, CPyStatic_emitwrapper___globals);
        goto CPyL22;
    }
    cpy_r_r67 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r68 = CPyStatics[7683]; /* 'cl' */
    cpy_r_r69 = CPyStatics[7411]; /* 'emitter' */
    cpy_r_r70 = CPyStatics[7684]; /* 'cleanups' */
    cpy_r_r71 = CPyStatics[7685]; /* 'optional_args' */
    cpy_r_r72 = CPyStatics[7686]; /* 'traceback_code' */
    cpy_r_r73 = CPyStatics[7687]; /* 'target_name' */
    cpy_r_r74 = CPyStatics[7688]; /* 'target_cname' */
    cpy_r_r75 = CPyStatics[7689]; /* 'num_bitmap_args' */
    cpy_r_r76 = CPyStatics[1678]; /* 'args' */
    cpy_r_r77 = CPyStatics[1611]; /* 'arg_names' */
    cpy_r_r78 = CPyStatics[1613]; /* 'ret_type' */
    cpy_r_r79 = PyTuple_Pack(11, cpy_r_r68, cpy_r_r69, cpy_r_r70, cpy_r_r71, cpy_r_r72, cpy_r_r73, cpy_r_r74, cpy_r_r75, cpy_r_r76, cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", 841, CPyStatic_emitwrapper___globals);
        goto CPyL22;
    }
    cpy_r_r80 = PyObject_SetAttr(cpy_r_r65, cpy_r_r67, cpy_r_r79);
    CPy_DECREF(cpy_r_r79);
    cpy_r_r81 = cpy_r_r80 >= 0;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", 841, CPyStatic_emitwrapper___globals);
        goto CPyL22;
    }
    CPyType_emitwrapper___WrapperGenerator = (PyTypeObject *)cpy_r_r65;
    CPy_INCREF(CPyType_emitwrapper___WrapperGenerator);
    cpy_r_r82 = CPyStatic_emitwrapper___globals;
    cpy_r_r83 = CPyStatics[7690]; /* 'WrapperGenerator' */
    cpy_r_r84 = CPyDict_SetItem(cpy_r_r82, cpy_r_r83, cpy_r_r65);
    CPy_DECREF(cpy_r_r65);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypyc/codegen/emitwrapper.py", "<module>", 841, CPyStatic_emitwrapper___globals);
        goto CPyL21;
    }
    return 1;
CPyL21: ;
    cpy_r_r86 = 2;
    return cpy_r_r86;
CPyL22: ;
    CPy_DecRef(cpy_r_r65);
    goto CPyL21;
}
