#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static PyObject *function___gen_func_item_env_setup(PyTypeObject *type);
PyObject *CPyDef_function___gen_func_item_env(void);

static PyObject *
function___gen_func_item_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_function___gen_func_item_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return function___gen_func_item_env_setup(type);
}

static int
function___gen_func_item_env_traverse(mypyc___irbuild___function___gen_func_item_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_fitem);
    Py_VISIT(self->_name);
    Py_VISIT(self->_sig);
    Py_VISIT(self->_cdef);
    Py_VISIT(self->_func_reg);
    Py_VISIT(self->_class_name);
    Py_VISIT(self->_ir);
    Py_VISIT(self->_func_name);
    Py_VISIT(self->_args);
    Py_VISIT(self->__);
    Py_VISIT(self->_blocks);
    Py_VISIT(self->_ret_type);
    Py_VISIT(self->_fn_info);
    Py_VISIT(self->_func_ir);
    Py_VISIT(self->_env_for_func);
    return 0;
}

static int
function___gen_func_item_env_clear(mypyc___irbuild___function___gen_func_item_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_fitem);
    Py_CLEAR(self->_name);
    Py_CLEAR(self->_sig);
    Py_CLEAR(self->_cdef);
    Py_CLEAR(self->_func_reg);
    Py_CLEAR(self->_class_name);
    Py_CLEAR(self->_ir);
    Py_CLEAR(self->_func_name);
    Py_CLEAR(self->_args);
    Py_CLEAR(self->__);
    Py_CLEAR(self->_blocks);
    Py_CLEAR(self->_ret_type);
    Py_CLEAR(self->_fn_info);
    Py_CLEAR(self->_func_ir);
    Py_CLEAR(self->_env_for_func);
    return 0;
}

static void
function___gen_func_item_env_dealloc(mypyc___irbuild___function___gen_func_item_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, function___gen_func_item_env_dealloc)
    function___gen_func_item_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem function___gen_func_item_env_vtable[1];
static bool
CPyDef_function___gen_func_item_env_trait_vtable_setup(void)
{
    CPyVTableItem function___gen_func_item_env_vtable_scratch[] = {
        NULL
    };
    memcpy(function___gen_func_item_env_vtable, function___gen_func_item_env_vtable_scratch, sizeof(function___gen_func_item_env_vtable));
    return 1;
}

static PyMethodDef function___gen_func_item_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_function___gen_func_item_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "gen_func_item_env",
    .tp_new = function___gen_func_item_env_new,
    .tp_dealloc = (destructor)function___gen_func_item_env_dealloc,
    .tp_traverse = (traverseproc)function___gen_func_item_env_traverse,
    .tp_clear = (inquiry)function___gen_func_item_env_clear,
    .tp_methods = function___gen_func_item_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___function___gen_func_item_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_function___gen_func_item_env_template = &CPyType_function___gen_func_item_env_template_;

static PyObject *
function___gen_func_item_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___function___gen_func_item_envObject *self;
    self = (mypyc___irbuild___function___gen_func_item_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = function___gen_func_item_env_vtable;
    self->_is_nested = 2;
    self->_contains_nested = 2;
    self->_is_decorated = 2;
    self->_is_singledispatch = 2;
    self->_in_non_ext = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_function___gen_func_item_env(void)
{
    PyObject *self = function___gen_func_item_env_setup(CPyType_function___gen_func_item_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__function_____mypyc_lambda__0_gen_func_item_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_function_____mypyc_lambda__0_gen_func_item_obj_____get__(self, instance, owner);
}
PyMemberDef function_____mypyc_lambda__0_gen_func_item_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *function_____mypyc_lambda__0_gen_func_item_obj_setup(PyTypeObject *type);
PyObject *CPyDef_function_____mypyc_lambda__0_gen_func_item_obj(void);

static PyObject *
function_____mypyc_lambda__0_gen_func_item_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_function_____mypyc_lambda__0_gen_func_item_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return function_____mypyc_lambda__0_gen_func_item_obj_setup(type);
}

static int
function_____mypyc_lambda__0_gen_func_item_obj_traverse(mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject))));
    return 0;
}

static int
function_____mypyc_lambda__0_gen_func_item_obj_clear(mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject))));
    return 0;
}

static void
function_____mypyc_lambda__0_gen_func_item_obj_dealloc(mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, function_____mypyc_lambda__0_gen_func_item_obj_dealloc)
    function_____mypyc_lambda__0_gen_func_item_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem function_____mypyc_lambda__0_gen_func_item_obj_vtable[2];
static bool
CPyDef_function_____mypyc_lambda__0_gen_func_item_obj_trait_vtable_setup(void)
{
    CPyVTableItem function_____mypyc_lambda__0_gen_func_item_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_function_____mypyc_lambda__0_gen_func_item_obj_____call__,
        (CPyVTableItem)CPyDef_function_____mypyc_lambda__0_gen_func_item_obj_____get__,
    };
    memcpy(function_____mypyc_lambda__0_gen_func_item_obj_vtable, function_____mypyc_lambda__0_gen_func_item_obj_vtable_scratch, sizeof(function_____mypyc_lambda__0_gen_func_item_obj_vtable));
    return 1;
}

static PyMethodDef function_____mypyc_lambda__0_gen_func_item_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_function_____mypyc_lambda__0_gen_func_item_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_function_____mypyc_lambda__0_gen_func_item_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_function_____mypyc_lambda__0_gen_func_item_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__mypyc_lambda__0_gen_func_item_obj",
    .tp_new = function_____mypyc_lambda__0_gen_func_item_obj_new,
    .tp_dealloc = (destructor)function_____mypyc_lambda__0_gen_func_item_obj_dealloc,
    .tp_traverse = (traverseproc)function_____mypyc_lambda__0_gen_func_item_obj_traverse,
    .tp_clear = (inquiry)function_____mypyc_lambda__0_gen_func_item_obj_clear,
    .tp_methods = function_____mypyc_lambda__0_gen_func_item_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__function_____mypyc_lambda__0_gen_func_item_obj,
    .tp_members = function_____mypyc_lambda__0_gen_func_item_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_function_____mypyc_lambda__0_gen_func_item_obj_template = &CPyType_function_____mypyc_lambda__0_gen_func_item_obj_template_;

static PyObject *
function_____mypyc_lambda__0_gen_func_item_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject *self;
    self = (mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = function_____mypyc_lambda__0_gen_func_item_obj_vtable;
    self->vectorcall = CPyPy_function_____mypyc_lambda__0_gen_func_item_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_function_____mypyc_lambda__0_gen_func_item_obj(void)
{
    PyObject *self = function_____mypyc_lambda__0_gen_func_item_obj_setup(CPyType_function_____mypyc_lambda__0_gen_func_item_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *function___gen_calls_to_correct_impl_env_setup(PyTypeObject *type);
PyObject *CPyDef_function___gen_calls_to_correct_impl_env(void);

static PyObject *
function___gen_calls_to_correct_impl_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_function___gen_calls_to_correct_impl_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return function___gen_calls_to_correct_impl_env_setup(type);
}

static int
function___gen_calls_to_correct_impl_env_traverse(mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_builder);
    Py_VISIT(self->_arg_info);
    if (CPyTagged_CheckLong(self->_line)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_line));
    }
    Py_VISIT(self->_current_func_decl);
    Py_VISIT(self->_gen_native_func_call_and_return);
    Py_VISIT(self->_impl_to_use);
    Py_VISIT(self->_fitem);
    return 0;
}

static int
function___gen_calls_to_correct_impl_env_clear(mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_builder);
    Py_CLEAR(self->_arg_info);
    if (CPyTagged_CheckLong(self->_line)) {
        CPyTagged __tmp = self->_line;
        self->_line = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_current_func_decl);
    Py_CLEAR(self->_gen_native_func_call_and_return);
    Py_CLEAR(self->_impl_to_use);
    Py_CLEAR(self->_fitem);
    return 0;
}

static void
function___gen_calls_to_correct_impl_env_dealloc(mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, function___gen_calls_to_correct_impl_env_dealloc)
    function___gen_calls_to_correct_impl_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem function___gen_calls_to_correct_impl_env_vtable[1];
static bool
CPyDef_function___gen_calls_to_correct_impl_env_trait_vtable_setup(void)
{
    CPyVTableItem function___gen_calls_to_correct_impl_env_vtable_scratch[] = {
        NULL
    };
    memcpy(function___gen_calls_to_correct_impl_env_vtable, function___gen_calls_to_correct_impl_env_vtable_scratch, sizeof(function___gen_calls_to_correct_impl_env_vtable));
    return 1;
}

static PyMethodDef function___gen_calls_to_correct_impl_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_function___gen_calls_to_correct_impl_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "gen_calls_to_correct_impl_env",
    .tp_new = function___gen_calls_to_correct_impl_env_new,
    .tp_dealloc = (destructor)function___gen_calls_to_correct_impl_env_dealloc,
    .tp_traverse = (traverseproc)function___gen_calls_to_correct_impl_env_traverse,
    .tp_clear = (inquiry)function___gen_calls_to_correct_impl_env_clear,
    .tp_methods = function___gen_calls_to_correct_impl_env_methods,
    .tp_basicsize = sizeof(mypyc___irbuild___function___gen_calls_to_correct_impl_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_function___gen_calls_to_correct_impl_env_template = &CPyType_function___gen_calls_to_correct_impl_env_template_;

static PyObject *
function___gen_calls_to_correct_impl_env_setup(PyTypeObject *type)
{
    mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *self;
    self = (mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = function___gen_calls_to_correct_impl_env_vtable;
    self->_line = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_function___gen_calls_to_correct_impl_env(void)
{
    PyObject *self = function___gen_calls_to_correct_impl_env_setup(CPyType_function___gen_calls_to_correct_impl_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_____get__(self, instance, owner);
}
PyMemberDef function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_members[] = {
    {"__dict__", T_OBJECT_EX, sizeof(mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject), 0, NULL},
    {"__weakref__", T_OBJECT_EX, sizeof(mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject) + sizeof(PyObject *), 0, NULL},
    {0}
};
static PyObject *function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_setup(PyTypeObject *type);
PyObject *CPyDef_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj(void);

static PyObject *
function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_setup(type);
}

static int
function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_traverse(mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    Py_VISIT(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject))));
    Py_VISIT(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject))));
    return 0;
}

static int
function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_clear(mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject))));
    Py_CLEAR(*((PyObject **)((char *)self + sizeof(PyObject *) + sizeof(mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject))));
    return 0;
}

static void
function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_dealloc(mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_dealloc)
    function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_vtable[2];
static bool
CPyDef_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_trait_vtable_setup(void)
{
    CPyVTableItem function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_____call__,
        (CPyVTableItem)CPyDef_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_____get__,
    };
    memcpy(function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_vtable, function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_vtable_scratch, sizeof(function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_vtable));
    return 1;
}

static PyMethodDef function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__get__",
     (PyCFunction)CPyPy_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "gen_native_func_call_and_return_gen_calls_to_correct_impl_obj",
    .tp_new = function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_new,
    .tp_dealloc = (destructor)function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_dealloc,
    .tp_traverse = (traverseproc)function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_traverse,
    .tp_clear = (inquiry)function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_clear,
    .tp_methods = function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj,
    .tp_members = function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_members,
    .tp_basicsize = sizeof(mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject) + 2*sizeof(PyObject *),
    .tp_dictoffset = sizeof(mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject),
    .tp_weaklistoffset = sizeof(mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject) + sizeof(PyObject *),
    .tp_vectorcall_offset = offsetof(mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
};
static PyTypeObject *CPyType_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_template = &CPyType_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_template_;

static PyObject *
function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_setup(PyTypeObject *type)
{
    mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject *self;
    self = (mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_vtable;
    self->vectorcall = CPyPy_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj(void)
{
    PyObject *self = function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_setup(CPyType_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef functionmodule_methods[] = {
    {"transform_func_def", (PyCFunction)CPyPy_function___transform_func_def, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_overloaded_func_def", (PyCFunction)CPyPy_function___transform_overloaded_func_def, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_decorator", (PyCFunction)CPyPy_function___transform_decorator, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"transform_lambda_expr", (PyCFunction)CPyPy_function___transform_lambda_expr, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"gen_func_item", (PyCFunction)CPyPy_function___gen_func_item, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"gen_func_ir", (PyCFunction)CPyPy_function___gen_func_ir, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"handle_ext_method", (PyCFunction)CPyPy_function___handle_ext_method, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"handle_non_ext_method", (PyCFunction)CPyPy_function___handle_non_ext_method, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"calculate_arg_defaults", (PyCFunction)CPyPy_function___calculate_arg_defaults, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"gen_func_ns", (PyCFunction)CPyPy_function___gen_func_ns, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"load_decorated_func", (PyCFunction)CPyPy_function___load_decorated_func, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"is_decorated", (PyCFunction)CPyPy_function___is_decorated, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"gen_glue", (PyCFunction)CPyPy_function___gen_glue, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_args", (PyCFunction)CPyPy_function___get_args, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"gen_glue_method", (PyCFunction)CPyPy_function___gen_glue_method, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"check_native_override", (PyCFunction)CPyPy_function___check_native_override, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"gen_glue_property", (PyCFunction)CPyPy_function___gen_glue_property, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_func_target", (PyCFunction)CPyPy_function___get_func_target, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"load_type", (PyCFunction)CPyPy_function___load_type, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"load_func", (PyCFunction)CPyPy_function___load_func, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_singledispatch_dispatch_function", (PyCFunction)CPyPy_function___generate_singledispatch_dispatch_function, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"gen_calls_to_correct_impl", (PyCFunction)CPyPy_function___gen_calls_to_correct_impl, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"gen_dispatch_func_ir", (PyCFunction)CPyPy_function___gen_dispatch_func_ir, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_dispatch_glue_native_function", (PyCFunction)CPyPy_function___generate_dispatch_glue_native_function, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"generate_singledispatch_callable_class_ctor", (PyCFunction)CPyPy_function___generate_singledispatch_callable_class_ctor, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"add_register_method_to_callable_class", (PyCFunction)CPyPy_function___add_register_method_to_callable_class, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"load_singledispatch_registry", (PyCFunction)CPyPy_function___load_singledispatch_registry, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"singledispatch_main_func_name", (PyCFunction)CPyPy_function___singledispatch_main_func_name, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_registry_identifier", (PyCFunction)CPyPy_function___get_registry_identifier, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"maybe_insert_into_registry_dict", (PyCFunction)CPyPy_function___maybe_insert_into_registry_dict, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"get_native_impl_ids", (PyCFunction)CPyPy_function___get_native_impl_ids, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"gen_property_getter_ir", (PyCFunction)CPyPy_function___gen_property_getter_ir, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {"gen_property_setter_ir", (PyCFunction)CPyPy_function___gen_property_setter_ir, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef functionmodule = {
    PyModuleDef_HEAD_INIT,
    "mypyc.irbuild.function",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    functionmodule_methods
};

PyObject *CPyInit_mypyc___irbuild___function(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypyc___irbuild___function_internal) {
        Py_INCREF(CPyModule_mypyc___irbuild___function_internal);
        return CPyModule_mypyc___irbuild___function_internal;
    }
    CPyModule_mypyc___irbuild___function_internal = PyModule_Create(&functionmodule);
    if (unlikely(CPyModule_mypyc___irbuild___function_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypyc___irbuild___function_internal, "__name__");
    CPyStatic_function___globals = PyModule_GetDict(CPyModule_mypyc___irbuild___function_internal);
    if (unlikely(CPyStatic_function___globals == NULL))
        goto fail;
    CPyType_function___gen_func_item_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_function___gen_func_item_env_template, NULL, modname);
    if (unlikely(!CPyType_function___gen_func_item_env))
        goto fail;
    CPyType_function_____mypyc_lambda__0_gen_func_item_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_function_____mypyc_lambda__0_gen_func_item_obj_template, NULL, modname);
    if (unlikely(!CPyType_function_____mypyc_lambda__0_gen_func_item_obj))
        goto fail;
    CPyType_function___gen_calls_to_correct_impl_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_function___gen_calls_to_correct_impl_env_template, NULL, modname);
    if (unlikely(!CPyType_function___gen_calls_to_correct_impl_env))
        goto fail;
    CPyType_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_template, NULL, modname);
    if (unlikely(!CPyType_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_function_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypyc___irbuild___function_internal;
    fail:
    Py_CLEAR(CPyModule_mypyc___irbuild___function_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_function___ArgInfo);
    Py_CLEAR(CPyType_function___gen_func_item_env);
    Py_CLEAR(CPyType_function_____mypyc_lambda__0_gen_func_item_obj);
    Py_CLEAR(CPyType_function___gen_calls_to_correct_impl_env);
    Py_CLEAR(CPyType_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj);
    return NULL;
}

char CPyDef_function___transform_func_def(PyObject *cpy_r_builder, PyObject *cpy_r_fdef) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    tuple_T2OO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_func_ir;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_func_reg;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_func_def", 98, CPyStatic_function___globals);
        goto CPyL10;
    }
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_mapper___Mapper___fdef_to_sig(cpy_r_r1, cpy_r_fdef);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_func_def", 98, CPyStatic_function___globals);
        goto CPyL11;
    }
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPyDef_function___gen_func_item(cpy_r_builder, cpy_r_fdef, cpy_r_r0, cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r4.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_func_def", 98, CPyStatic_function___globals);
        goto CPyL10;
    }
    cpy_r_r5 = cpy_r_r4.f0;
    CPy_INCREF(cpy_r_r5);
    cpy_r_func_ir = cpy_r_r5;
    cpy_r_r6 = cpy_r_r4.f1;
    CPy_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r4.f0);
    CPy_DECREF(cpy_r_r4.f1);
    cpy_r_func_reg = cpy_r_r6;
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_func_reg != cpy_r_r7;
    if (!cpy_r_r8) goto CPyL12;
    cpy_r_r9 = CPyDef_function___get_func_target(cpy_r_builder, cpy_r_fdef);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_func_def", 103, CPyStatic_function___globals);
        goto CPyL13;
    }
    if (likely(cpy_r_func_reg != Py_None))
        cpy_r_r10 = cpy_r_func_reg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "transform_func_def", 103, CPyStatic_function___globals, "mypyc.ir.ops.Value", cpy_r_func_reg);
        goto CPyL14;
    }
    cpy_r_r11 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_line;
    CPyTagged_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r9, cpy_r_r10, cpy_r_r11);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    CPyTagged_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_func_def", 103, CPyStatic_function___globals);
        goto CPyL15;
    }
CPyL7: ;
    cpy_r_r13 = CPyDef_function___maybe_insert_into_registry_dict(cpy_r_builder, cpy_r_fdef);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_func_def", 104, CPyStatic_function___globals);
        goto CPyL15;
    }
    cpy_r_r14 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_functions;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = PyList_Append(cpy_r_r14, cpy_r_func_ir);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_func_ir);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_func_def", 105, CPyStatic_function___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL11: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL10;
CPyL12: ;
    CPy_DECREF(cpy_r_func_reg);
    goto CPyL7;
CPyL13: ;
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_func_reg);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r9);
    goto CPyL10;
CPyL15: ;
    CPy_DecRef(cpy_r_func_ir);
    goto CPyL10;
}

PyObject *CPyPy_function___transform_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fdef", 0};
    static CPyArg_Parser parser = {"OO:transform_func_def", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    char retval = CPyDef_function___transform_func_def(arg_builder, arg_fdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "transform_func_def", 97, CPyStatic_function___globals);
    return NULL;
}

char CPyDef_function___transform_overloaded_func_def(PyObject *cpy_r_builder, PyObject *cpy_r_o) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_o)->_impl;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyObject_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_overloaded_func_def", 110, CPyStatic_function___globals);
        goto CPyL7;
    }
    cpy_r_r3 = cpy_r_r1;
    if (cpy_r_r3) goto CPyL4;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_overloaded_func_def", 110, CPyStatic_function___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = ((mypy___nodes___OverloadedFuncDefObject *)cpy_r_o)->_impl;
    CPy_INCREF(cpy_r_r5);
    if (Py_TYPE(cpy_r_r5) == CPyType_nodes___FuncDef)
        cpy_r_r6 = cpy_r_r5;
    else {
        cpy_r_r6 = NULL;
    }
    if (cpy_r_r6 != NULL) goto __LL10191;
    if (Py_TYPE(cpy_r_r5) == CPyType_nodes___Decorator)
        cpy_r_r6 = cpy_r_r5;
    else {
        cpy_r_r6 = NULL;
    }
    if (cpy_r_r6 != NULL) goto __LL10191;
    CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "transform_overloaded_func_def", 111, CPyStatic_function___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Decorator]", cpy_r_r5);
    goto CPyL7;
__LL10191: ;
    cpy_r_r7 = 2;
    cpy_r_r8 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r6, cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_overloaded_func_def", 111, CPyStatic_function___globals);
        goto CPyL7;
    } else
        goto CPyL8;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
CPyL8: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL6;
}

PyObject *CPyPy_function___transform_overloaded_func_def(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "o", 0};
    static CPyArg_Parser parser = {"OO:transform_overloaded_func_def", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_o;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_o)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_o;
    if (likely(Py_TYPE(obj_o) == CPyType_nodes___OverloadedFuncDef))
        arg_o = obj_o;
    else {
        CPy_TypeError("mypy.nodes.OverloadedFuncDef", obj_o); 
        goto fail;
    }
    char retval = CPyDef_function___transform_overloaded_func_def(arg_builder, arg_o);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "transform_overloaded_func_def", 108, CPyStatic_function___globals);
    return NULL;
}

char CPyDef_function___transform_decorator(PyObject *cpy_r_builder, PyObject *cpy_r_dec) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T2OO cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_func_ir;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_func_reg;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_decorated_func;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    CPyTagged cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    int32_t cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_name;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_orig_func;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
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
    CPyPtr cpy_r_r49;
    CPyPtr cpy_r_r50;
    CPyPtr cpy_r_r51;
    CPyPtr cpy_r_r52;
    PyObject *cpy_r_r53;
    CPyTagged cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    cpy_r_r0 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPY_GET_ATTR(cpy_r_r1, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 116, CPyStatic_function___globals);
        goto CPyL32;
    }
CPyL1: ;
    cpy_r_r3 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDef_mapper___Mapper___fdef_to_sig(cpy_r_r3, cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 116, CPyStatic_function___globals);
        goto CPyL33;
    }
    cpy_r_r6 = NULL;
    cpy_r_r7 = CPyDef_function___gen_func_item(cpy_r_builder, cpy_r_r0, cpy_r_r2, cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r7.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 115, CPyStatic_function___globals);
        goto CPyL31;
    }
    cpy_r_r8 = cpy_r_r7.f0;
    CPy_INCREF(cpy_r_r8);
    cpy_r_func_ir = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f1;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r7.f0);
    CPy_DECREF(cpy_r_r7.f1);
    cpy_r_func_reg = cpy_r_r9;
    cpy_r_r10 = Py_None;
    CPy_INCREF(cpy_r_r10);
    cpy_r_decorated_func = cpy_r_r10;
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_func_reg != cpy_r_r11;
    if (cpy_r_r12) {
        goto CPyL34;
    } else
        goto CPyL35;
CPyL4: ;
    cpy_r_r13 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r13);
    if (likely(cpy_r_func_reg != Py_None))
        cpy_r_r14 = cpy_r_func_reg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "transform_decorator", 120, CPyStatic_function___globals, "mypyc.ir.ops.Value", cpy_r_func_reg);
        goto CPyL36;
    }
    cpy_r_r15 = CPyDef_function___load_decorated_func(cpy_r_builder, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 120, CPyStatic_function___globals);
        goto CPyL37;
    }
    cpy_r_decorated_func = cpy_r_r15;
    cpy_r_r16 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r16);
    cpy_r_r17 = CPyDef_function___get_func_target(cpy_r_builder, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 121, CPyStatic_function___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_decorated_func);
    if (likely(cpy_r_decorated_func != Py_None))
        cpy_r_r18 = cpy_r_decorated_func;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "transform_decorator", 121, CPyStatic_function___globals, "mypyc.ir.ops.Value", cpy_r_decorated_func);
        goto CPyL39;
    }
    cpy_r_r19 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    cpy_r_r20 = ((mypy___nodes___FuncDefObject *)cpy_r_r19)->_line;
    CPyTagged_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_r17, cpy_r_r18, cpy_r_r20);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18);
    CPyTagged_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 121, CPyStatic_function___globals);
        goto CPyL38;
    } else
        goto CPyL18;
CPyL9: ;
    cpy_r_r22 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fdefs_to_decorators;
    CPy_INCREF(cpy_r_r23);
    cpy_r_r24 = PyDict_Contains(cpy_r_r23, cpy_r_r22);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r25 = cpy_r_r24 >= 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 125, CPyStatic_function___globals);
        goto CPyL38;
    }
    cpy_r_r26 = cpy_r_r24;
    if (cpy_r_r26) {
        goto CPyL40;
    } else
        goto CPyL18;
CPyL11: ;
    cpy_r_r27 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = CPY_GET_ATTR(cpy_r_r27, CPyType_nodes___FuncDef, 7, mypy___nodes___FuncDefObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 127, CPyStatic_function___globals);
        goto CPyL37;
    }
CPyL12: ;
    cpy_r_r29 = CPyStatics[224]; /* '.' */
    cpy_r_r30 = PyUnicode_Split(cpy_r_r28, cpy_r_r29, -1);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 127, CPyStatic_function___globals);
        goto CPyL37;
    }
    cpy_r_r31 = CPyList_GetItemShort(cpy_r_r30, -2);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 127, CPyStatic_function___globals);
        goto CPyL37;
    }
    if (likely(PyUnicode_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "transform_decorator", 127, CPyStatic_function___globals, "str", cpy_r_r31);
        goto CPyL37;
    }
    cpy_r_name = cpy_r_r32;
    cpy_r_r33 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_line;
    CPyTagged_INCREF(cpy_r_r33);
    cpy_r_r34 = CPyDef_builder___IRBuilder___load_global_str(cpy_r_builder, cpy_r_name, cpy_r_r33);
    CPy_DECREF(cpy_r_name);
    CPyTagged_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 130, CPyStatic_function___globals);
        goto CPyL37;
    }
    cpy_r_orig_func = cpy_r_r34;
    cpy_r_r35 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyDef_function___load_decorated_func(cpy_r_builder, cpy_r_r35, cpy_r_orig_func);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_orig_func);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 131, CPyStatic_function___globals);
        goto CPyL37;
    }
    cpy_r_decorated_func = cpy_r_r36;
CPyL18: ;
    cpy_r_r37 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r38 = cpy_r_decorated_func != cpy_r_r37;
    if (!cpy_r_r38) goto CPyL41;
    cpy_r_r39 = CPyStatic_function___globals;
    cpy_r_r40 = CPyStatics[8056]; /* 'dict_set_item_op' */
    cpy_r_r41 = CPyDict_GetItem(cpy_r_r39, cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 136, CPyStatic_function___globals);
        goto CPyL38;
    }
    if (likely(PyTuple_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "transform_decorator", 136, CPyStatic_function___globals, "tuple", cpy_r_r41);
        goto CPyL38;
    }
    cpy_r_r43 = CPyDef_builder___IRBuilder___load_globals_dict(cpy_r_builder);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 137, CPyStatic_function___globals);
        goto CPyL42;
    }
    cpy_r_r44 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = CPY_GET_ATTR(cpy_r_r44, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 137, CPyStatic_function___globals);
        goto CPyL43;
    }
CPyL23: ;
    cpy_r_r46 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 137, CPyStatic_function___globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_decorated_func);
    if (likely(cpy_r_decorated_func != Py_None))
        cpy_r_r47 = cpy_r_decorated_func;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "transform_decorator", 137, CPyStatic_function___globals, "mypyc.ir.ops.Value", cpy_r_decorated_func);
        goto CPyL44;
    }
    cpy_r_r48 = PyList_New(3);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 137, CPyStatic_function___globals);
        goto CPyL45;
    }
    cpy_r_r49 = (CPyPtr)&((PyListObject *)cpy_r_r48)->ob_item;
    cpy_r_r50 = *(CPyPtr *)cpy_r_r49;
    *(PyObject * *)cpy_r_r50 = cpy_r_r43;
    cpy_r_r51 = cpy_r_r50 + 8;
    *(PyObject * *)cpy_r_r51 = cpy_r_r46;
    cpy_r_r52 = cpy_r_r50 + 16;
    *(PyObject * *)cpy_r_r52 = cpy_r_r47;
    if (likely(cpy_r_decorated_func != Py_None))
        cpy_r_r53 = cpy_r_decorated_func;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "transform_decorator", 138, CPyStatic_function___globals, "mypyc.ir.ops.Value", cpy_r_decorated_func);
        goto CPyL46;
    }
    cpy_r_r54 = ((mypyc___ir___ops___ValueObject *)cpy_r_r53)->_line;
    CPyTagged_INCREF(cpy_r_r54);
    CPy_DECREF(cpy_r_decorated_func);
    cpy_r_r55 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r42, cpy_r_r48, cpy_r_r54);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r48);
    CPyTagged_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 135, CPyStatic_function___globals);
        goto CPyL37;
    } else
        goto CPyL47;
CPyL28: ;
    cpy_r_r56 = ((mypy___nodes___DecoratorObject *)cpy_r_dec)->_func;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = CPyDef_function___maybe_insert_into_registry_dict(cpy_r_builder, cpy_r_r56);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r57 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 141, CPyStatic_function___globals);
        goto CPyL37;
    }
    cpy_r_r58 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_functions;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = PyList_Append(cpy_r_r58, cpy_r_func_ir);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_func_ir);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 143, CPyStatic_function___globals);
        goto CPyL31;
    }
    return 1;
CPyL31: ;
    cpy_r_r61 = 2;
    return cpy_r_r61;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL31;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL31;
CPyL34: ;
    CPy_DECREF(cpy_r_decorated_func);
    goto CPyL4;
CPyL35: ;
    CPy_DECREF(cpy_r_func_reg);
    goto CPyL9;
CPyL36: ;
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r13);
    goto CPyL31;
CPyL37: ;
    CPy_DecRef(cpy_r_func_ir);
    goto CPyL31;
CPyL38: ;
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_decorated_func);
    goto CPyL31;
CPyL39: ;
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_decorated_func);
    CPy_DecRef(cpy_r_r17);
    goto CPyL31;
CPyL40: ;
    CPy_DECREF(cpy_r_decorated_func);
    goto CPyL11;
CPyL41: ;
    CPy_DECREF(cpy_r_decorated_func);
    goto CPyL28;
CPyL42: ;
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_decorated_func);
    CPy_DecRef(cpy_r_r42);
    goto CPyL31;
CPyL43: ;
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_decorated_func);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r43);
    goto CPyL31;
CPyL44: ;
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_decorated_func);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r46);
    goto CPyL31;
CPyL45: ;
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_decorated_func);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r43);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r47);
    goto CPyL31;
CPyL46: ;
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_decorated_func);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r48);
    goto CPyL31;
CPyL47: ;
    CPy_DECREF(cpy_r_r55);
    goto CPyL28;
}

PyObject *CPyPy_function___transform_decorator(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "dec", 0};
    static CPyArg_Parser parser = {"OO:transform_decorator", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_dec;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_dec)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_dec;
    if (likely(Py_TYPE(obj_dec) == CPyType_nodes___Decorator))
        arg_dec = obj_dec;
    else {
        CPy_TypeError("mypy.nodes.Decorator", obj_dec); 
        goto fail;
    }
    char retval = CPyDef_function___transform_decorator(arg_builder, arg_dec);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "transform_decorator", 114, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___transform_lambda_expr(PyObject *cpy_r_builder, PyObject *cpy_r_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_runtime_args;
    PyObject *cpy_r_r11;
    CPyTagged cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    CPyPtr cpy_r_r20;
    int64_t cpy_r_r21;
    CPyTagged cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_arg_type;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    int32_t cpy_r_r36;
    char cpy_r_r37;
    CPyTagged cpy_r_r38;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_ret_type;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_fsig;
    PyObject *cpy_r_r44;
    CPyTagged cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_fname;
    CPyTagged cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    PyObject *cpy_r_r51;
    tuple_T2OO cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_func_ir;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_func_reg;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_types;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDict_GetItem(cpy_r_r0, cpy_r_expr);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 147, CPyStatic_function___globals);
        goto CPyL32;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r1, CPyType_types___Type)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 147, CPyStatic_function___globals, "mypy.types.Type", cpy_r_r1);
        goto CPyL32;
    }
    cpy_r_r3 = CPyDef_types___get_proper_type(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 147, CPyStatic_function___globals);
        goto CPyL32;
    }
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 147, CPyStatic_function___globals, "mypy.types.ProperType", cpy_r_r3);
        goto CPyL32;
    }
    cpy_r_typ = cpy_r_r4;
    cpy_r_r5 = (PyObject *)CPyType_types___CallableType;
    cpy_r_r6 = (CPyPtr)&((PyObject *)cpy_r_typ)->ob_type;
    cpy_r_r7 = *(PyObject * *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 == cpy_r_r5;
    if (cpy_r_r8) {
        goto CPyL7;
    } else
        goto CPyL33;
CPyL5: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r9 = 0;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 148, CPyStatic_function___globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r10 = PyList_New(0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 150, CPyStatic_function___globals);
        goto CPyL34;
    }
    cpy_r_runtime_args = cpy_r_r10;
    cpy_r_r11 = ((mypy___nodes___LambdaExprObject *)cpy_r_expr)->_arguments;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "transform_lambda_expr", "LambdaExpr", "arguments", 151, CPyStatic_function___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r11);
CPyL9: ;
    cpy_r_r12 = 0;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___CallableType))
        cpy_r_r13 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 151, CPyStatic_function___globals, "mypy.types.CallableType", cpy_r_typ);
        goto CPyL36;
    }
    cpy_r_r14 = ((mypy___types___CallableTypeObject *)cpy_r_r13)->_arg_types;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = 0;
CPyL11: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r12 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL37;
    cpy_r_r20 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r21 = *(int64_t *)cpy_r_r20;
    cpy_r_r22 = cpy_r_r21 << 1;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r22;
    if (!cpy_r_r23) goto CPyL37;
    cpy_r_r24 = CPyList_GetItemUnsafe(cpy_r_r11, cpy_r_r12);
    if (likely(Py_TYPE(cpy_r_r24) == CPyType_nodes___Argument))
        cpy_r_r25 = cpy_r_r24;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 151, CPyStatic_function___globals, "mypy.nodes.Argument", cpy_r_r24);
        goto CPyL38;
    }
    cpy_r_arg = cpy_r_r25;
    cpy_r_r26 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r15);
    if (likely(PyObject_TypeCheck(cpy_r_r26, CPyType_types___Type)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 151, CPyStatic_function___globals, "mypy.types.Type", cpy_r_r26);
        goto CPyL39;
    }
    cpy_r_arg_type = cpy_r_r27;
    cpy_r_r28 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    CPy_INCREF(cpy_r_arg_type);
    CPy_DECREF(((mypy___nodes___VarObject *)cpy_r_r28)->_type);
    ((mypy___nodes___VarObject *)cpy_r_r28)->_type = cpy_r_arg_type;
    cpy_r_r30 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r31 = CPY_GET_ATTR(cpy_r_r30, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 154, CPyStatic_function___globals);
        goto CPyL40;
    }
CPyL16: ;
    cpy_r_r32 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_builder, cpy_r_arg_type);
    CPy_DECREF(cpy_r_arg_type);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 154, CPyStatic_function___globals);
        goto CPyL41;
    }
    cpy_r_r33 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_kind;
    CPy_INCREF(cpy_r_r33);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r34 = 2;
    cpy_r_r35 = CPyDef_func_ir___RuntimeArg(cpy_r_r31, cpy_r_r32, cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 154, CPyStatic_function___globals);
        goto CPyL38;
    }
    cpy_r_r36 = PyList_Append(cpy_r_runtime_args, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r37 = cpy_r_r36 >= 0;
    if (unlikely(!cpy_r_r37)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 153, CPyStatic_function___globals);
        goto CPyL38;
    }
    cpy_r_r38 = cpy_r_r12 + 2;
    cpy_r_r12 = cpy_r_r38;
    cpy_r_r39 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r39;
    goto CPyL11;
CPyL20: ;
    if (likely(Py_TYPE(cpy_r_typ) == CPyType_types___CallableType))
        cpy_r_r40 = cpy_r_typ;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 156, CPyStatic_function___globals, "mypy.types.CallableType", cpy_r_typ);
        goto CPyL35;
    }
    cpy_r_r41 = ((mypy___types___CallableTypeObject *)cpy_r_r40)->_ret_type;
    CPy_INCREF(cpy_r_r41);
    CPy_DECREF(cpy_r_typ);
    cpy_r_r42 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_builder, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 156, CPyStatic_function___globals);
        goto CPyL42;
    }
    cpy_r_ret_type = cpy_r_r42;
    cpy_r_r43 = CPyDef_func_ir___FuncSignature(cpy_r_runtime_args, cpy_r_ret_type);
    CPy_DECREF(cpy_r_runtime_args);
    CPy_DECREF(cpy_r_ret_type);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 158, CPyStatic_function___globals);
        goto CPyL32;
    }
    cpy_r_fsig = cpy_r_r43;
    cpy_r_r44 = CPyStatics[7712]; /* '__mypyc_lambda__' */
    cpy_r_r45 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_lambda_counter;
    CPyTagged_INCREF(cpy_r_r45);
    cpy_r_r46 = CPyTagged_Str(cpy_r_r45);
    CPyTagged_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 160, CPyStatic_function___globals);
        goto CPyL43;
    }
    cpy_r_r47 = CPyStr_Build(2, cpy_r_r44, cpy_r_r46);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 160, CPyStatic_function___globals);
        goto CPyL43;
    }
    cpy_r_fname = cpy_r_r47;
    cpy_r_r48 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_lambda_counter;
    cpy_r_r49 = CPyTagged_Add(cpy_r_r48, 2);
    CPyTagged_DECREF(((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_lambda_counter);
    ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_lambda_counter = cpy_r_r49;
    cpy_r_r51 = NULL;
    cpy_r_r52 = CPyDef_function___gen_func_item(cpy_r_builder, cpy_r_expr, cpy_r_fname, cpy_r_fsig, cpy_r_r51);
    CPy_DECREF(cpy_r_fname);
    CPy_DECREF(cpy_r_fsig);
    if (unlikely(cpy_r_r52.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 162, CPyStatic_function___globals);
        goto CPyL32;
    }
    cpy_r_r53 = cpy_r_r52.f0;
    CPy_INCREF(cpy_r_r53);
    cpy_r_func_ir = cpy_r_r53;
    cpy_r_r54 = cpy_r_r52.f1;
    CPy_INCREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r52.f0);
    CPy_DECREF(cpy_r_r52.f1);
    cpy_r_func_reg = cpy_r_r54;
    cpy_r_r55 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r56 = cpy_r_func_reg != cpy_r_r55;
    if (cpy_r_r56) {
        goto CPyL29;
    } else
        goto CPyL44;
CPyL27: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r57 = 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 163, CPyStatic_function___globals);
        goto CPyL32;
    }
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r58 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_functions;
    CPy_INCREF(cpy_r_r58);
    cpy_r_r59 = PyList_Append(cpy_r_r58, cpy_r_func_ir);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_func_ir);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 165, CPyStatic_function___globals);
        goto CPyL45;
    }
    if (likely(cpy_r_func_reg != Py_None))
        cpy_r_r61 = cpy_r_func_reg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 166, CPyStatic_function___globals, "mypyc.ir.ops.Value", cpy_r_func_reg);
        goto CPyL32;
    }
    return cpy_r_r61;
CPyL32: ;
    cpy_r_r62 = NULL;
    return cpy_r_r62;
CPyL33: ;
    CPy_DECREF(cpy_r_typ);
    goto CPyL5;
CPyL34: ;
    CPy_DecRef(cpy_r_typ);
    goto CPyL32;
CPyL35: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_runtime_args);
    goto CPyL32;
CPyL36: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_runtime_args);
    CPy_DecRef(cpy_r_r11);
    goto CPyL32;
CPyL37: ;
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r14);
    goto CPyL20;
CPyL38: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_runtime_args);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    goto CPyL32;
CPyL39: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_runtime_args);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_arg);
    goto CPyL32;
CPyL40: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_runtime_args);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL32;
CPyL41: ;
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_runtime_args);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_r31);
    goto CPyL32;
CPyL42: ;
    CPy_DecRef(cpy_r_runtime_args);
    goto CPyL32;
CPyL43: ;
    CPy_DecRef(cpy_r_fsig);
    goto CPyL32;
CPyL44: ;
    CPy_DECREF(cpy_r_func_ir);
    CPy_DECREF(cpy_r_func_reg);
    goto CPyL27;
CPyL45: ;
    CPy_DecRef(cpy_r_func_reg);
    goto CPyL32;
}

PyObject *CPyPy_function___transform_lambda_expr(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "expr", 0};
    static CPyArg_Parser parser = {"OO:transform_lambda_expr", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_expr)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_expr;
    if (likely(Py_TYPE(obj_expr) == CPyType_nodes___LambdaExpr))
        arg_expr = obj_expr;
    else {
        CPy_TypeError("mypy.nodes.LambdaExpr", obj_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_function___transform_lambda_expr(arg_builder, arg_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "transform_lambda_expr", 146, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function_____mypyc_lambda__0_gen_func_item_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_function_____mypyc_lambda__0_gen_func_item_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_function_____mypyc_lambda__0_gen_func_item_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "__get__", -1, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function_____mypyc_lambda__0_gen_func_item_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_x) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "<lambda>", "__mypyc_lambda__0_gen_func_item_obj", "__mypyc_env__", 297, CPyStatic_function___globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
    goto CPyL4;
CPyL1: ;
    cpy_r_r1 = CPY_GET_ATTR_TRAIT(cpy_r_x, CPyType_nodes___SymbolNode, 5, mypy___nodes___SymbolNodeObject, PyObject *); /* name */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<lambda>", 297, CPyStatic_function___globals);
        goto CPyL3;
    }
CPyL2: ;
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL4: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_function_____mypyc_lambda__0_gen_func_item_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"x", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_x;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_x)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_x;
    if (likely(PyObject_TypeCheck(obj_x, CPyType_nodes___SymbolNode)))
        arg_x = obj_x;
    else {
        CPy_TypeError("mypy.nodes.SymbolNode", obj_x); 
        goto fail;
    }
    PyObject *retval = CPyDef_function_____mypyc_lambda__0_gen_func_item_obj_____call__(arg___mypyc_self__, arg_x);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "<lambda>", 297, CPyStatic_function___globals);
    return NULL;
}

tuple_T2OO CPyDef_function___gen_func_item(PyObject *cpy_r_builder, PyObject *cpy_r_fitem, PyObject *cpy_r_name, PyObject *cpy_r_sig, PyObject *cpy_r_cdef) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_func_ir;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_func_reg;
    PyObject *cpy_r_r4;
    int32_t cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyPtr cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_is_nested;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_contains_nested;
    PyObject *cpy_r_r18;
    int32_t cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_is_decorated;
    PyObject *cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_is_singledispatch;
    char cpy_r_in_non_ext;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_class_name;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_ir;
    char cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_func_name;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    tuple_T5OOOOO cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r58;
    PyObject *cpy_r__;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_blocks;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_ret_type;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_fn_info;
    tuple_T2OO cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    char cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    CPyPtr cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    CPyTagged cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    PyObject *cpy_r_r87;
    char cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    char cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_env_for_func;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    char cpy_r_r99;
    PyObject *cpy_r_r100;
    char cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    int32_t cpy_r_r107;
    char cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    char cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject **cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    CPyTagged cpy_r_r125;
    CPyPtr cpy_r_r126;
    int64_t cpy_r_r127;
    CPyTagged cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_var;
    PyObject *cpy_r_r132;
    CPyPtr cpy_r_r133;
    PyObject *cpy_r_r134;
    char cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_rtype;
    PyObject *cpy_r_r139;
    PyObject *cpy_r_r140;
    CPyTagged cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    char cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    CPyTagged cpy_r_r153;
    CPyPtr cpy_r_r154;
    int64_t cpy_r_r155;
    CPyTagged cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_nested_fn;
    PyObject *cpy_r_r160;
    CPyPtr cpy_r_r161;
    PyObject *cpy_r_r162;
    char cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    char cpy_r_r166;
    PyObject *cpy_r_r167;
    CPyTagged cpy_r_r168;
    PyObject *cpy_r_r169;
    char cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    char cpy_r_r174;
    char cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_symtable;
    tuple_T5OOOOO cpy_r_r179;
    PyObject *cpy_r_r180;
    PyObject *cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    char cpy_r_r185;
    char cpy_r_r186;
    char cpy_r_r187;
    tuple_T2OO cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    char cpy_r_r193;
    int32_t cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    CPyPtr cpy_r_r197;
    PyObject *cpy_r_r198;
    char cpy_r_r199;
    char cpy_r_r200;
    PyObject *cpy_r_r201;
    PyObject *cpy_r_r202;
    tuple_T2OO cpy_r_r203;
    char cpy_r_r204;
    tuple_T2OO cpy_r_r205;
    tuple_T2OO cpy_r_r206;
    cpy_r_r0 = NULL;
    cpy_r_func_ir = cpy_r_r0;
    if (cpy_r_cdef != NULL) goto CPyL124;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_cdef = cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = CPyDef_function___gen_func_item_env();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 172, CPyStatic_function___globals);
        goto CPyL125;
    }
    cpy_r_r3 = Py_None;
    CPy_INCREF(cpy_r_r3);
    cpy_r_func_reg = cpy_r_r3;
    cpy_r_r4 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_nested_fitems;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = PySequence_Contains(cpy_r_r4, cpy_r_fitem);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = cpy_r_r5 >= 0;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 220, CPyStatic_function___globals);
        goto CPyL126;
    }
    cpy_r_r7 = cpy_r_r5;
    if (!cpy_r_r7) goto CPyL6;
    cpy_r_r8 = cpy_r_r7;
    goto CPyL7;
CPyL6: ;
    cpy_r_r9 = (PyObject *)CPyType_nodes___LambdaExpr;
    cpy_r_r10 = (CPyPtr)&((PyObject *)cpy_r_fitem)->ob_type;
    cpy_r_r11 = *(PyObject * *)cpy_r_r10;
    cpy_r_r12 = cpy_r_r11 == cpy_r_r9;
    cpy_r_r8 = cpy_r_r12;
CPyL7: ;
    cpy_r_is_nested = cpy_r_r8;
    cpy_r_r13 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_encapsulating_funcs;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyDict_KeysView(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 221, CPyStatic_function___globals);
        goto CPyL126;
    }
    cpy_r_r15 = PySequence_Contains(cpy_r_r14, cpy_r_fitem);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 221, CPyStatic_function___globals);
        goto CPyL126;
    }
    cpy_r_r17 = cpy_r_r15;
    cpy_r_contains_nested = cpy_r_r17;
    cpy_r_r18 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fdefs_to_decorators;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19 = PyDict_Contains(cpy_r_r18, cpy_r_fitem);
    CPy_DECREF(cpy_r_r18);
    cpy_r_r20 = cpy_r_r19 >= 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 222, CPyStatic_function___globals);
        goto CPyL126;
    }
    cpy_r_r21 = cpy_r_r19;
    cpy_r_is_decorated = cpy_r_r21;
    cpy_r_r22 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_singledispatch_impls;
    CPy_INCREF(cpy_r_r22);
    cpy_r_r23 = PyDict_Contains(cpy_r_r22, cpy_r_fitem);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 223, CPyStatic_function___globals);
        goto CPyL126;
    }
    cpy_r_r25 = cpy_r_r23;
    cpy_r_is_singledispatch = cpy_r_r25;
    cpy_r_in_non_ext = 0;
    cpy_r_r26 = Py_None;
    CPy_INCREF(cpy_r_r26);
    cpy_r_class_name = cpy_r_r26;
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_cdef != cpy_r_r27;
    if (cpy_r_r28) {
        goto CPyL127;
    } else
        goto CPyL17;
CPyL12: ;
    cpy_r_r29 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r30 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r29)->_type_to_ir;
    CPy_INCREF(cpy_r_r30);
    if (likely(cpy_r_cdef != Py_None))
        cpy_r_r31 = cpy_r_cdef;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_item", 227, CPyStatic_function___globals, "mypy.nodes.ClassDef", cpy_r_cdef);
        goto CPyL128;
    }
    cpy_r_r32 = ((mypy___nodes___ClassDefObject *)cpy_r_r31)->_info;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = CPyDict_GetItem(cpy_r_r30, cpy_r_r32);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 227, CPyStatic_function___globals);
        goto CPyL126;
    }
    if (likely(Py_TYPE(cpy_r_r33) == CPyType_class_ir___ClassIR))
        cpy_r_r34 = cpy_r_r33;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_item", 227, CPyStatic_function___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r33);
        goto CPyL126;
    }
    cpy_r_ir = cpy_r_r34;
    cpy_r_r35 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_ir)->_is_ext_class;
    CPy_DECREF(cpy_r_ir);
    cpy_r_r36 = cpy_r_r35 ^ 1;
    cpy_r_in_non_ext = cpy_r_r36;
    if (likely(cpy_r_cdef != Py_None))
        cpy_r_r37 = cpy_r_cdef;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_item", 229, CPyStatic_function___globals, "mypy.nodes.ClassDef", cpy_r_cdef);
        goto CPyL126;
    }
    cpy_r_r38 = ((mypy___nodes___ClassDefObject *)cpy_r_r37)->_name;
    CPy_INCREF(cpy_r_r38);
    cpy_r_class_name = cpy_r_r38;
CPyL17: ;
    if (!cpy_r_is_singledispatch) goto CPyL20;
    cpy_r_r39 = CPyDef_function___singledispatch_main_func_name(cpy_r_name);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 232, CPyStatic_function___globals);
        goto CPyL129;
    }
    cpy_r_func_name = cpy_r_r39;
    goto CPyL21;
CPyL20: ;
    CPy_INCREF(cpy_r_name);
    cpy_r_func_name = cpy_r_name;
CPyL21: ;
    cpy_r_r40 = CPyDef_function___gen_func_ns(cpy_r_builder);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 240, CPyStatic_function___globals);
        goto CPyL130;
    }
    cpy_r_r41 = CPyDef_context___FuncInfo(cpy_r_fitem, cpy_r_func_name, cpy_r_class_name, cpy_r_r40, cpy_r_is_nested, cpy_r_contains_nested, cpy_r_is_decorated, cpy_r_in_non_ext);
    CPy_DECREF(cpy_r_func_name);
    CPy_DECREF(cpy_r_class_name);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 236, CPyStatic_function___globals);
        goto CPyL126;
    }
    cpy_r_r42 = CPyDef_builder___IRBuilder___enter(cpy_r_builder, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 235, CPyStatic_function___globals);
        goto CPyL126;
    }
    cpy_r_r43 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r44 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r43)->_contains_nested;
    if (cpy_r_r44) goto CPyL27;
CPyL25: ;
    cpy_r_r45 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = CPY_GET_ATTR(cpy_r_r45, CPyType_context___FuncInfo, 2, mypyc___irbuild___context___FuncInfoObject, char); /* is_generator */
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 252, CPyStatic_function___globals);
        goto CPyL126;
    }
CPyL26: ;
    if (!cpy_r_r46) goto CPyL28;
CPyL27: ;
    cpy_r_r47 = CPyDef_env_class___setup_env_class(cpy_r_builder);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 253, CPyStatic_function___globals);
        goto CPyL126;
    } else
        goto CPyL131;
CPyL28: ;
    cpy_r_r48 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r49 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r48)->_is_nested;
    if (cpy_r_r49) goto CPyL30;
CPyL29: ;
    cpy_r_r50 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r51 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r50)->_in_non_ext;
    if (!cpy_r_r51) goto CPyL31;
CPyL30: ;
    cpy_r_r52 = CPyDef_callable_class___setup_callable_class(cpy_r_builder);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 256, CPyStatic_function___globals);
        goto CPyL126;
    }
CPyL31: ;
    cpy_r_r53 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r53);
    cpy_r_r54 = CPY_GET_ATTR(cpy_r_r53, CPyType_context___FuncInfo, 2, mypyc___irbuild___context___FuncInfoObject, char); /* is_generator */
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 258, CPyStatic_function___globals);
        goto CPyL126;
    }
CPyL32: ;
    if (cpy_r_r54) {
        goto CPyL132;
    } else
        goto CPyL47;
CPyL33: ;
    cpy_r_r55 = CPyDef_generator___gen_generator_func(cpy_r_builder);
    if (unlikely(cpy_r_r55 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 260, CPyStatic_function___globals);
        goto CPyL133;
    }
    cpy_r_r56 = CPyDef_builder___IRBuilder___leave(cpy_r_builder);
    if (unlikely(cpy_r_r56.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 261, CPyStatic_function___globals);
        goto CPyL133;
    }
    cpy_r_r57 = cpy_r_r56.f0;
    CPy_INCREF(cpy_r_r57);
    cpy_r_args = cpy_r_r57;
    cpy_r_r58 = cpy_r_r56.f1;
    CPy_INCREF(cpy_r_r58);
    cpy_r__ = cpy_r_r58;
    CPy_DECREF(cpy_r__);
    cpy_r_r59 = cpy_r_r56.f2;
    CPy_INCREF(cpy_r_r59);
    cpy_r_blocks = cpy_r_r59;
    cpy_r_r60 = cpy_r_r56.f3;
    CPy_INCREF(cpy_r_r60);
    cpy_r_ret_type = cpy_r_r60;
    CPy_DECREF(cpy_r_ret_type);
    cpy_r_r61 = cpy_r_r56.f4;
    CPy_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r56.f0);
    CPy_DECREF(cpy_r_r56.f1);
    CPy_DECREF(cpy_r_r56.f2);
    CPy_DECREF(cpy_r_r56.f3);
    CPy_DECREF(cpy_r_r56.f4);
    cpy_r_fn_info = cpy_r_r61;
    cpy_r_r62 = CPyDef_function___gen_func_ir(cpy_r_builder, cpy_r_args, cpy_r_blocks, cpy_r_sig, cpy_r_fn_info, cpy_r_cdef, cpy_r_is_singledispatch);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_blocks);
    if (unlikely(cpy_r_r62.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 262, CPyStatic_function___globals);
        goto CPyL134;
    }
    cpy_r_r63 = cpy_r_r62.f0;
    CPy_INCREF(cpy_r_r63);
    cpy_r_func_ir = cpy_r_r63;
    cpy_r_r64 = cpy_r_r62.f1;
    CPy_INCREF(cpy_r_r64);
    CPy_DECREF(cpy_r_r62.f0);
    CPy_DECREF(cpy_r_r62.f1);
    cpy_r_func_reg = cpy_r_r64;
    cpy_r_r65 = CPyDef_builder___IRBuilder___enter(cpy_r_builder, cpy_r_fn_info);
    CPy_DECREF(cpy_r_fn_info);
    if (unlikely(cpy_r_r65 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 267, CPyStatic_function___globals);
        goto CPyL135;
    }
    cpy_r_r66 = CPyDef_generator___setup_env_for_generator_class(cpy_r_builder);
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 268, CPyStatic_function___globals);
        goto CPyL135;
    }
    cpy_r_r67 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r67);
    cpy_r_r68 = CPY_GET_ATTR(cpy_r_r67, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 269, CPyStatic_function___globals);
        goto CPyL135;
    }
CPyL39: ;
    cpy_r_r69 = CPyDef_env_class___load_outer_envs(cpy_r_builder, cpy_r_r68);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 269, CPyStatic_function___globals);
        goto CPyL135;
    }
    cpy_r_r70 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r71 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r70)->_is_nested;
    if (!cpy_r_r71) goto CPyL45;
CPyL41: ;
    cpy_r_r72 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r73 = (CPyPtr)&((PyObject *)cpy_r_fitem)->ob_type;
    cpy_r_r74 = *(PyObject * *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r74 == cpy_r_r72;
    if (!cpy_r_r75) goto CPyL45;
    CPy_INCREF(cpy_r_fitem);
    if (likely(Py_TYPE(cpy_r_fitem) == CPyType_nodes___FuncDef))
        cpy_r_r76 = cpy_r_fitem;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_item", 271, CPyStatic_function___globals, "mypy.nodes.FuncDef", cpy_r_fitem);
        goto CPyL135;
    }
    cpy_r_r77 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r77);
    cpy_r_r78 = CPY_GET_ATTR(cpy_r_r77, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    CPy_DECREF(cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 271, CPyStatic_function___globals);
        goto CPyL136;
    }
CPyL44: ;
    cpy_r_r79 = CPyDef_env_class___setup_func_for_recursive_call(cpy_r_builder, cpy_r_r76, cpy_r_r78);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 271, CPyStatic_function___globals);
        goto CPyL135;
    }
CPyL45: ;
    cpy_r_r80 = CPyDef_generator___create_switch_for_generator_class(cpy_r_builder);
    if (unlikely(cpy_r_r80 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 272, CPyStatic_function___globals);
        goto CPyL135;
    }
    cpy_r_r81 = ((mypy___nodes___FuncItemObject *)cpy_r_fitem)->_line;
    CPyTagged_INCREF(cpy_r_r81);
    cpy_r_r82 = CPyDef_generator___add_raise_exception_blocks_to_generator_class(cpy_r_builder, cpy_r_r81);
    CPyTagged_DECREF(cpy_r_r81);
    if (unlikely(cpy_r_r82 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 273, CPyStatic_function___globals);
        goto CPyL135;
    } else
        goto CPyL49;
CPyL47: ;
    cpy_r_r83 = CPyDef_env_class___load_env_registers(cpy_r_builder);
    if (unlikely(cpy_r_r83 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 275, CPyStatic_function___globals);
        goto CPyL126;
    }
    cpy_r_r84 = CPyDef_builder___gen_arg_defaults(cpy_r_builder);
    if (unlikely(cpy_r_r84 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 276, CPyStatic_function___globals);
        goto CPyL126;
    }
CPyL49: ;
    cpy_r_r85 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r86 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r85)->_contains_nested;
    if (!cpy_r_r86) goto CPyL53;
CPyL50: ;
    cpy_r_r87 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r87);
    cpy_r_r88 = CPY_GET_ATTR(cpy_r_r87, CPyType_context___FuncInfo, 2, mypyc___irbuild___context___FuncInfoObject, char); /* is_generator */
    CPy_DECREF(cpy_r_r87);
    if (unlikely(cpy_r_r88 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 278, CPyStatic_function___globals);
        goto CPyL126;
    }
CPyL51: ;
    if (cpy_r_r88) goto CPyL53;
CPyL52: ;
    cpy_r_r89 = CPyDef_env_class___finalize_env_class(cpy_r_builder);
    if (unlikely(cpy_r_r89 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 279, CPyStatic_function___globals);
        goto CPyL126;
    }
CPyL53: ;
    cpy_r_r90 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_sig)->_ret_type;
    CPy_INCREF(cpy_r_r90);
    cpy_r_r91 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_ret_types;
    CPy_INCREF(cpy_r_r91);
    cpy_r_r92 = CPyList_SetItem(cpy_r_r91, -2, cpy_r_r90);
    CPy_DECREF(cpy_r_r91);
    if (unlikely(!cpy_r_r92)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 281, CPyStatic_function___globals);
        goto CPyL126;
    }
    cpy_r_r93 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r93);
    cpy_r_env_for_func = cpy_r_r93;
    cpy_r_r94 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r94);
    cpy_r_r95 = CPY_GET_ATTR(cpy_r_r94, CPyType_context___FuncInfo, 2, mypyc___irbuild___context___FuncInfoObject, char); /* is_generator */
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r95 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 290, CPyStatic_function___globals);
        goto CPyL137;
    }
CPyL55: ;
    if (cpy_r_r95) {
        goto CPyL138;
    } else
        goto CPyL58;
CPyL56: ;
    cpy_r_r96 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r96);
    cpy_r_r97 = CPY_GET_ATTR(cpy_r_r96, CPyType_context___FuncInfo, 8, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* generator_class */
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 291, CPyStatic_function___globals);
        goto CPyL126;
    }
CPyL57: ;
    cpy_r_env_for_func = cpy_r_r97;
    goto CPyL62;
CPyL58: ;
    cpy_r_r98 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r99 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r98)->_is_nested;
    if (cpy_r_r99) goto CPyL139;
CPyL59: ;
    cpy_r_r100 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r101 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r100)->_in_non_ext;
    if (cpy_r_r101) {
        goto CPyL139;
    } else
        goto CPyL62;
CPyL60: ;
    cpy_r_r102 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r102);
    cpy_r_r103 = CPY_GET_ATTR(cpy_r_r102, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 293, CPyStatic_function___globals);
        goto CPyL126;
    }
CPyL61: ;
    cpy_r_env_for_func = cpy_r_r103;
CPyL62: ;
    cpy_r_r104 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r105 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r104)->_fitem;
    CPy_INCREF(cpy_r_r105);
    cpy_r_r106 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_free_variables;
    CPy_INCREF(cpy_r_r106);
    cpy_r_r107 = PyDict_Contains(cpy_r_r106, cpy_r_r105);
    CPy_DECREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r105);
    cpy_r_r108 = cpy_r_r107 >= 0;
    if (unlikely(!cpy_r_r108)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 295, CPyStatic_function___globals);
        goto CPyL137;
    }
    cpy_r_r109 = cpy_r_r107;
    if (!cpy_r_r109) goto CPyL140;
    cpy_r_r110 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_free_variables;
    CPy_INCREF(cpy_r_r110);
    cpy_r_r111 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r112 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r111)->_fitem;
    CPy_INCREF(cpy_r_r112);
    cpy_r_r113 = CPyDict_GetItem(cpy_r_r110, cpy_r_r112);
    CPy_DECREF(cpy_r_r110);
    CPy_DECREF(cpy_r_r112);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 297, CPyStatic_function___globals);
        goto CPyL137;
    }
    if (likely(PySet_Check(cpy_r_r113)))
        cpy_r_r114 = cpy_r_r113;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_item", 297, CPyStatic_function___globals, "set", cpy_r_r113);
        goto CPyL137;
    }
    cpy_r_r115 = CPyDef_function_____mypyc_lambda__0_gen_func_item_obj();
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 297, CPyStatic_function___globals);
        goto CPyL141;
    }
    if (((mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject *)cpy_r_r115)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject *)cpy_r_r115)->___mypyc_env__);
    }
    ((mypyc___irbuild___function_____mypyc_lambda__0_gen_func_item_objObject *)cpy_r_r115)->___mypyc_env__ = cpy_r_r2;
    cpy_r_r116 = 1;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 297, CPyStatic_function___globals);
        goto CPyL142;
    }
    cpy_r_r117 = CPyModule_builtins;
    cpy_r_r118 = CPyStatics[220]; /* 'sorted' */
    cpy_r_r119 = CPyObject_GetAttr(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 297, CPyStatic_function___globals);
        goto CPyL142;
    }
    PyObject *cpy_r_r120[2] = {cpy_r_r114, cpy_r_r115};
    cpy_r_r121 = (PyObject **)&cpy_r_r120;
    cpy_r_r122 = CPyStatics[9098]; /* ('key',) */
    cpy_r_r123 = _PyObject_Vectorcall(cpy_r_r119, cpy_r_r121, 1, cpy_r_r122);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 297, CPyStatic_function___globals);
        goto CPyL142;
    }
    CPy_DECREF(cpy_r_r114);
    CPy_DECREF(cpy_r_r115);
    if (likely(PyList_Check(cpy_r_r123)))
        cpy_r_r124 = cpy_r_r123;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_item", 297, CPyStatic_function___globals, "list", cpy_r_r123);
        goto CPyL143;
    }
    cpy_r_r125 = 0;
CPyL72: ;
    cpy_r_r126 = (CPyPtr)&((PyVarObject *)cpy_r_r124)->ob_size;
    cpy_r_r127 = *(int64_t *)cpy_r_r126;
    cpy_r_r128 = cpy_r_r127 << 1;
    cpy_r_r129 = (Py_ssize_t)cpy_r_r125 < (Py_ssize_t)cpy_r_r128;
    if (!cpy_r_r129) goto CPyL144;
    cpy_r_r130 = CPyList_GetItemUnsafe(cpy_r_r124, cpy_r_r125);
    if (likely(PyObject_TypeCheck(cpy_r_r130, CPyType_nodes___SymbolNode)))
        cpy_r_r131 = cpy_r_r130;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_item", 297, CPyStatic_function___globals, "mypy.nodes.SymbolNode", cpy_r_r130);
        goto CPyL145;
    }
    cpy_r_var = cpy_r_r131;
    cpy_r_r132 = (PyObject *)CPyType_nodes___Var;
    cpy_r_r133 = (CPyPtr)&((PyObject *)cpy_r_var)->ob_type;
    cpy_r_r134 = *(PyObject * *)cpy_r_r133;
    cpy_r_r135 = cpy_r_r134 == cpy_r_r132;
    if (!cpy_r_r135) goto CPyL146;
    if (likely(Py_TYPE(cpy_r_var) == CPyType_nodes___Var))
        cpy_r_r136 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_item", 299, CPyStatic_function___globals, "mypy.nodes.Var", cpy_r_var);
        goto CPyL147;
    }
    cpy_r_r137 = ((mypy___nodes___VarObject *)cpy_r_r136)->_type;
    CPy_INCREF(cpy_r_r137);
    cpy_r_r138 = CPyDef_builder___IRBuilder___type_to_rtype(cpy_r_builder, cpy_r_r137);
    CPy_DECREF(cpy_r_r137);
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 299, CPyStatic_function___globals);
        goto CPyL147;
    }
    cpy_r_rtype = cpy_r_r138;
    if (likely(Py_TYPE(cpy_r_var) == CPyType_nodes___Var))
        cpy_r_r139 = cpy_r_var;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_item", 300, CPyStatic_function___globals, "mypy.nodes.Var", cpy_r_var);
        goto CPyL148;
    }
    cpy_r_r140 = CPyDef_builder___IRBuilder___add_var_to_env_class(cpy_r_builder, cpy_r_r139, cpy_r_rtype, cpy_r_env_for_func, 0);
    CPy_DECREF(cpy_r_r139);
    CPy_DECREF(cpy_r_rtype);
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 300, CPyStatic_function___globals);
        goto CPyL145;
    } else
        goto CPyL149;
CPyL79: ;
    cpy_r_r141 = cpy_r_r125 + 2;
    cpy_r_r125 = cpy_r_r141;
    goto CPyL72;
CPyL80: ;
    cpy_r_r142 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r143 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r142)->_fitem;
    CPy_INCREF(cpy_r_r143);
    cpy_r_r144 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_encapsulating_funcs;
    CPy_INCREF(cpy_r_r144);
    cpy_r_r145 = PyDict_Contains(cpy_r_r144, cpy_r_r143);
    CPy_DECREF(cpy_r_r144);
    CPy_DECREF(cpy_r_r143);
    cpy_r_r146 = cpy_r_r145 >= 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 302, CPyStatic_function___globals);
        goto CPyL143;
    }
    cpy_r_r147 = cpy_r_r145;
    if (!cpy_r_r147) goto CPyL150;
    cpy_r_r148 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_encapsulating_funcs;
    CPy_INCREF(cpy_r_r148);
    cpy_r_r149 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r150 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r149)->_fitem;
    CPy_INCREF(cpy_r_r150);
    cpy_r_r151 = CPyDict_GetItem(cpy_r_r148, cpy_r_r150);
    CPy_DECREF(cpy_r_r148);
    CPy_DECREF(cpy_r_r150);
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 303, CPyStatic_function___globals);
        goto CPyL143;
    }
    if (likely(PyList_Check(cpy_r_r151)))
        cpy_r_r152 = cpy_r_r151;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_item", 303, CPyStatic_function___globals, "list", cpy_r_r151);
        goto CPyL143;
    }
    cpy_r_r153 = 0;
CPyL85: ;
    cpy_r_r154 = (CPyPtr)&((PyVarObject *)cpy_r_r152)->ob_size;
    cpy_r_r155 = *(int64_t *)cpy_r_r154;
    cpy_r_r156 = cpy_r_r155 << 1;
    cpy_r_r157 = (Py_ssize_t)cpy_r_r153 < (Py_ssize_t)cpy_r_r156;
    if (!cpy_r_r157) goto CPyL151;
    cpy_r_r158 = CPyList_GetItemUnsafe(cpy_r_r152, cpy_r_r153);
    if (likely((Py_TYPE(cpy_r_r158) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r158) == CPyType_nodes___LambdaExpr)))
        cpy_r_r159 = cpy_r_r158;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_item", 303, CPyStatic_function___globals, "mypy.nodes.FuncItem", cpy_r_r158);
        goto CPyL152;
    }
    cpy_r_nested_fn = cpy_r_r159;
    cpy_r_r160 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r161 = (CPyPtr)&((PyObject *)cpy_r_nested_fn)->ob_type;
    cpy_r_r162 = *(PyObject * *)cpy_r_r161;
    cpy_r_r163 = cpy_r_r162 == cpy_r_r160;
    if (!cpy_r_r163) goto CPyL153;
    if (likely(Py_TYPE(cpy_r_nested_fn) == CPyType_nodes___FuncDef))
        cpy_r_r164 = cpy_r_nested_fn;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_item", 311, CPyStatic_function___globals, "mypy.nodes.FuncDef", cpy_r_nested_fn);
        goto CPyL152;
    }
    cpy_r_r165 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r165 == NULL)) {
        goto CPyL154;
    } else
        goto CPyL92;
CPyL90: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r166 = 0;
    if (unlikely(!cpy_r_r166)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 311, CPyStatic_function___globals);
        goto CPyL123;
    }
    CPy_Unreachable();
CPyL92: ;
    cpy_r_r167 = CPyDef_builder___IRBuilder___add_var_to_env_class(cpy_r_builder, cpy_r_r164, cpy_r_r165, cpy_r_env_for_func, 0);
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 310, CPyStatic_function___globals);
        goto CPyL152;
    } else
        goto CPyL155;
CPyL93: ;
    cpy_r_r168 = cpy_r_r153 + 2;
    cpy_r_r153 = cpy_r_r168;
    goto CPyL85;
CPyL94: ;
    cpy_r_r169 = ((mypy___nodes___FuncItemObject *)cpy_r_fitem)->_body;
    CPy_INCREF(cpy_r_r169);
    cpy_r_r170 = 2;
    cpy_r_r171 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r169, cpy_r_r170);
    CPy_DECREF(cpy_r_r169);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 314, CPyStatic_function___globals);
        goto CPyL156;
    } else
        goto CPyL157;
CPyL95: ;
    cpy_r_r172 = CPyDef_builder___IRBuilder___maybe_add_implicit_return(cpy_r_builder);
    if (unlikely(cpy_r_r172 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 315, CPyStatic_function___globals);
        goto CPyL156;
    }
    cpy_r_r173 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r173);
    cpy_r_r174 = CPY_GET_ATTR(cpy_r_r173, CPyType_context___FuncInfo, 2, mypyc___irbuild___context___FuncInfoObject, char); /* is_generator */
    CPy_DECREF(cpy_r_r173);
    if (unlikely(cpy_r_r174 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 317, CPyStatic_function___globals);
        goto CPyL156;
    }
CPyL97: ;
    if (!cpy_r_r174) goto CPyL99;
CPyL98: ;
    cpy_r_r175 = CPyDef_generator___populate_switch_for_generator_class(cpy_r_builder);
    if (unlikely(cpy_r_r175 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 318, CPyStatic_function___globals);
        goto CPyL156;
    }
CPyL99: ;
    cpy_r_r176 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_symtables;
    cpy_r_r177 = CPyList_GetItemShort(cpy_r_r176, -2);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 322, CPyStatic_function___globals);
        goto CPyL156;
    }
    if (likely(PyDict_Check(cpy_r_r177)))
        cpy_r_r178 = cpy_r_r177;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_item", 322, CPyStatic_function___globals, "dict", cpy_r_r177);
        goto CPyL156;
    }
    cpy_r_symtable = cpy_r_r178;
    cpy_r_r179 = CPyDef_builder___IRBuilder___leave(cpy_r_builder);
    if (unlikely(cpy_r_r179.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 324, CPyStatic_function___globals);
        goto CPyL158;
    }
    cpy_r_r180 = cpy_r_r179.f0;
    CPy_INCREF(cpy_r_r180);
    cpy_r_args = cpy_r_r180;
    cpy_r_r181 = cpy_r_r179.f1;
    CPy_INCREF(cpy_r_r181);
    cpy_r__ = cpy_r_r181;
    CPy_DECREF(cpy_r__);
    cpy_r_r182 = cpy_r_r179.f2;
    CPy_INCREF(cpy_r_r182);
    cpy_r_blocks = cpy_r_r182;
    cpy_r_r183 = cpy_r_r179.f3;
    CPy_INCREF(cpy_r_r183);
    cpy_r_ret_type = cpy_r_r183;
    CPy_DECREF(cpy_r_ret_type);
    cpy_r_r184 = cpy_r_r179.f4;
    CPy_INCREF(cpy_r_r184);
    CPy_DECREF(cpy_r_r179.f0);
    CPy_DECREF(cpy_r_r179.f1);
    CPy_DECREF(cpy_r_r179.f2);
    CPy_DECREF(cpy_r_r179.f3);
    CPy_DECREF(cpy_r_r179.f4);
    cpy_r_fn_info = cpy_r_r184;
    cpy_r_r185 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 2, mypyc___irbuild___context___FuncInfoObject, char); /* is_generator */
    if (unlikely(cpy_r_r185 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 326, CPyStatic_function___globals);
        goto CPyL159;
    }
CPyL103: ;
    if (cpy_r_r185) {
        goto CPyL160;
    } else
        goto CPyL161;
CPyL104: ;
    cpy_r_r186 = ((mypy___nodes___FuncItemObject *)cpy_r_fitem)->_is_coroutine;
    cpy_r_r187 = CPyDef_generator___add_methods_to_generator_class(cpy_r_builder, cpy_r_fn_info, cpy_r_sig, cpy_r_args, cpy_r_blocks, cpy_r_r186);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_blocks);
    if (unlikely(cpy_r_r187 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 327, CPyStatic_function___globals);
        goto CPyL162;
    } else
        goto CPyL107;
CPyL105: ;
    cpy_r_r188 = CPyDef_function___gen_func_ir(cpy_r_builder, cpy_r_args, cpy_r_blocks, cpy_r_sig, cpy_r_fn_info, cpy_r_cdef, cpy_r_is_singledispatch);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_blocks);
    CPy_DECREF(cpy_r_cdef);
    if (unlikely(cpy_r_r188.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 329, CPyStatic_function___globals);
        goto CPyL163;
    }
    cpy_r_r189 = cpy_r_r188.f0;
    CPy_INCREF(cpy_r_r189);
    cpy_r_func_ir = cpy_r_r189;
    cpy_r_r190 = cpy_r_r188.f1;
    CPy_INCREF(cpy_r_r190);
    CPy_DECREF(cpy_r_r188.f0);
    CPy_DECREF(cpy_r_r188.f1);
    cpy_r_func_reg = cpy_r_r190;
CPyL107: ;
    cpy_r_r191 = CPyDef_function___calculate_arg_defaults(cpy_r_builder, cpy_r_fn_info, cpy_r_func_reg, cpy_r_symtable);
    CPy_DECREF(cpy_r_symtable);
    if (unlikely(cpy_r_r191 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 335, CPyStatic_function___globals);
        goto CPyL164;
    }
    if (cpy_r_is_singledispatch) {
        goto CPyL165;
    } else
        goto CPyL166;
CPyL109: ;
    cpy_r_r192 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_functions;
    CPy_INCREF(cpy_r_r192);
    if (cpy_r_func_ir == NULL) {
        goto CPyL167;
    } else
        goto CPyL112;
CPyL110: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"func_ir\" referenced before assignment");
    cpy_r_r193 = 0;
    if (unlikely(!cpy_r_r193)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 339, CPyStatic_function___globals);
        goto CPyL123;
    }
    CPy_Unreachable();
CPyL112: ;
    cpy_r_r194 = PyList_Append(cpy_r_r192, cpy_r_func_ir);
    CPy_DECREF(cpy_r_r192);
    CPy_XDECREF(cpy_r_func_ir);
    cpy_r_r195 = cpy_r_r194 >= 0;
    if (unlikely(!cpy_r_r195)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 339, CPyStatic_function___globals);
        goto CPyL168;
    }
    cpy_r_r196 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r197 = (CPyPtr)&((PyObject *)cpy_r_fitem)->ob_type;
    cpy_r_r198 = *(PyObject * *)cpy_r_r197;
    cpy_r_r199 = cpy_r_r198 == cpy_r_r196;
    if (cpy_r_r199) {
        goto CPyL116;
    } else
        goto CPyL169;
CPyL114: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r200 = 0;
    if (unlikely(!cpy_r_r200)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 341, CPyStatic_function___globals);
        goto CPyL123;
    }
    CPy_Unreachable();
CPyL116: ;
    CPy_INCREF(cpy_r_fitem);
    if (likely(Py_TYPE(cpy_r_fitem) == CPyType_nodes___FuncDef))
        cpy_r_r201 = cpy_r_fitem;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_item", 342, CPyStatic_function___globals, "mypy.nodes.FuncDef", cpy_r_fitem);
        goto CPyL168;
    }
    cpy_r_r202 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_name;
    CPy_INCREF(cpy_r_r202);
    CPy_DECREF(cpy_r_fn_info);
    cpy_r_r203 = CPyDef_function___gen_dispatch_func_ir(cpy_r_builder, cpy_r_r201, cpy_r_r202, cpy_r_name, cpy_r_sig);
    CPy_DECREF(cpy_r_r201);
    CPy_DECREF(cpy_r_r202);
    if (unlikely(cpy_r_r203.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 342, CPyStatic_function___globals);
        goto CPyL123;
    }
    return cpy_r_r203;
CPyL119: ;
    if (cpy_r_func_ir == NULL) {
        goto CPyL170;
    } else
        goto CPyL122;
CPyL120: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"func_ir\" referenced before assignment");
    cpy_r_r204 = 0;
    if (unlikely(!cpy_r_r204)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 344, CPyStatic_function___globals);
        goto CPyL123;
    }
    CPy_Unreachable();
CPyL122: ;
    cpy_r_r205.f0 = cpy_r_func_ir;
    cpy_r_r205.f1 = cpy_r_func_reg;
    CPy_INCREF(cpy_r_r205.f0);
    CPy_INCREF(cpy_r_r205.f1);
    CPy_XDECREF(cpy_r_func_ir);
    CPy_DECREF(cpy_r_func_reg);
    return cpy_r_r205;
CPyL123: ;
    tuple_T2OO __tmp10192 = { NULL, NULL };
    cpy_r_r206 = __tmp10192;
    return cpy_r_r206;
CPyL124: ;
    CPy_INCREF(cpy_r_cdef);
    goto CPyL2;
CPyL125: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    goto CPyL123;
CPyL126: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_func_reg);
    goto CPyL123;
CPyL127: ;
    CPy_DECREF(cpy_r_class_name);
    goto CPyL12;
CPyL128: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_r30);
    goto CPyL123;
CPyL129: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_class_name);
    goto CPyL123;
CPyL130: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_class_name);
    CPy_DecRef(cpy_r_func_name);
    goto CPyL123;
CPyL131: ;
    CPy_DECREF(cpy_r_r47);
    goto CPyL28;
CPyL132: ;
    CPy_XDECREF(cpy_r_func_ir);
    CPy_DECREF(cpy_r_func_reg);
    goto CPyL33;
CPyL133: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_DecRef(cpy_r_r2);
    goto CPyL123;
CPyL134: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_fn_info);
    goto CPyL123;
CPyL135: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_func_reg);
    goto CPyL123;
CPyL136: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_r76);
    goto CPyL123;
CPyL137: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_env_for_func);
    goto CPyL123;
CPyL138: ;
    CPy_DECREF(cpy_r_env_for_func);
    goto CPyL56;
CPyL139: ;
    CPy_DECREF(cpy_r_env_for_func);
    goto CPyL60;
CPyL140: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL80;
CPyL141: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_env_for_func);
    CPy_DecRef(cpy_r_r114);
    goto CPyL123;
CPyL142: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_env_for_func);
    CPy_DecRef(cpy_r_r114);
    CPy_DecRef(cpy_r_r115);
    goto CPyL123;
CPyL143: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_env_for_func);
    goto CPyL123;
CPyL144: ;
    CPy_DECREF(cpy_r_r124);
    goto CPyL80;
CPyL145: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_env_for_func);
    CPy_DecRef(cpy_r_r124);
    goto CPyL123;
CPyL146: ;
    CPy_DECREF(cpy_r_var);
    goto CPyL79;
CPyL147: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_env_for_func);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_var);
    goto CPyL123;
CPyL148: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_env_for_func);
    CPy_DecRef(cpy_r_r124);
    CPy_DecRef(cpy_r_rtype);
    goto CPyL123;
CPyL149: ;
    CPy_DECREF(cpy_r_r140);
    goto CPyL79;
CPyL150: ;
    CPy_DECREF(cpy_r_env_for_func);
    goto CPyL94;
CPyL151: ;
    CPy_DECREF(cpy_r_env_for_func);
    CPy_DECREF(cpy_r_r152);
    goto CPyL94;
CPyL152: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_env_for_func);
    CPy_DecRef(cpy_r_r152);
    goto CPyL123;
CPyL153: ;
    CPy_DECREF(cpy_r_nested_fn);
    goto CPyL93;
CPyL154: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_env_for_func);
    CPy_DecRef(cpy_r_r152);
    CPy_DecRef(cpy_r_r164);
    goto CPyL90;
CPyL155: ;
    CPy_DECREF(cpy_r_r167);
    goto CPyL93;
CPyL156: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_func_reg);
    goto CPyL123;
CPyL157: ;
    CPy_DECREF(cpy_r_r171);
    goto CPyL95;
CPyL158: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_symtable);
    goto CPyL123;
CPyL159: ;
    CPy_DecRef(cpy_r_cdef);
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_fn_info);
    CPy_DecRef(cpy_r_symtable);
    goto CPyL123;
CPyL160: ;
    CPy_DECREF(cpy_r_cdef);
    goto CPyL104;
CPyL161: ;
    CPy_XDECREF(cpy_r_func_ir);
    CPy_DECREF(cpy_r_func_reg);
    goto CPyL105;
CPyL162: ;
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_fn_info);
    CPy_DecRef(cpy_r_symtable);
    goto CPyL123;
CPyL163: ;
    CPy_DecRef(cpy_r_fn_info);
    CPy_DecRef(cpy_r_symtable);
    goto CPyL123;
CPyL164: ;
    CPy_XDecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_fn_info);
    goto CPyL123;
CPyL165: ;
    CPy_DECREF(cpy_r_func_reg);
    goto CPyL109;
CPyL166: ;
    CPy_DECREF(cpy_r_fn_info);
    goto CPyL119;
CPyL167: ;
    CPy_DECREF(cpy_r_fn_info);
    CPy_DECREF(cpy_r_r192);
    goto CPyL110;
CPyL168: ;
    CPy_DecRef(cpy_r_fn_info);
    goto CPyL123;
CPyL169: ;
    CPy_DECREF(cpy_r_fn_info);
    goto CPyL114;
CPyL170: ;
    CPy_DECREF(cpy_r_func_reg);
    goto CPyL120;
}

PyObject *CPyPy_function___gen_func_item(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fitem", "name", "sig", "cdef", 0};
    static CPyArg_Parser parser = {"OOOO|O:gen_func_item", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fitem;
    PyObject *obj_name;
    PyObject *obj_sig;
    PyObject *obj_cdef = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fitem, &obj_name, &obj_sig, &obj_cdef)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fitem;
    if (likely((Py_TYPE(obj_fitem) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_fitem) == CPyType_nodes___LambdaExpr)))
        arg_fitem = obj_fitem;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_fitem); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_sig;
    if (likely(Py_TYPE(obj_sig) == CPyType_func_ir___FuncSignature))
        arg_sig = obj_sig;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_sig); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (obj_cdef == NULL) {
        arg_cdef = NULL;
        goto __LL10193;
    }
    if (Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef)
        arg_cdef = obj_cdef;
    else {
        arg_cdef = NULL;
    }
    if (arg_cdef != NULL) goto __LL10193;
    if (obj_cdef == Py_None)
        arg_cdef = obj_cdef;
    else {
        arg_cdef = NULL;
    }
    if (arg_cdef != NULL) goto __LL10193;
    CPy_TypeError("mypy.nodes.ClassDef or None", obj_cdef); 
    goto fail;
__LL10193: ;
    tuple_T2OO retval = CPyDef_function___gen_func_item(arg_builder, arg_fitem, arg_name, arg_sig, arg_cdef);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10194 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp10194);
    PyObject *__tmp10195 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp10195);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_item", 172, CPyStatic_function___globals);
    return NULL;
}

tuple_T2OO CPyDef_function___gen_func_ir(PyObject *cpy_r_builder, PyObject *cpy_r_args, PyObject *cpy_r_blocks, PyObject *cpy_r_sig, PyObject *cpy_r_fn_info, PyObject *cpy_r_cdef, char cpy_r_is_singledispatch_main_func) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_func_reg;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_func_ir;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    CPyPtr cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_func_decl;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_class_name;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyTagged cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    tuple_T2OO cpy_r_r46;
    tuple_T2OO cpy_r_r47;
    if (cpy_r_is_singledispatch_main_func != 2) goto CPyL2;
    cpy_r_is_singledispatch_main_func = 0;
CPyL2: ;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_func_reg = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_is_nested;
    if (cpy_r_r1) goto CPyL34;
CPyL3: ;
    cpy_r_r2 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_in_non_ext;
    if (cpy_r_r2) {
        goto CPyL34;
    } else
        goto CPyL8;
CPyL4: ;
    cpy_r_r3 = CPyDef_callable_class___add_call_to_callable_class(cpy_r_builder, cpy_r_args, cpy_r_blocks, cpy_r_sig, cpy_r_fn_info);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ir", 365, CPyStatic_function___globals);
        goto CPyL33;
    }
    cpy_r_func_ir = cpy_r_r3;
    cpy_r_r4 = CPyDef_callable_class___add_get_to_callable_class(cpy_r_builder, cpy_r_fn_info);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ir", 366, CPyStatic_function___globals);
        goto CPyL35;
    }
    cpy_r_r5 = CPyDef_callable_class___instantiate_callable_class(cpy_r_builder, cpy_r_fn_info);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ir", 367, CPyStatic_function___globals);
        goto CPyL35;
    }
    cpy_r_func_reg = cpy_r_r5;
    goto CPyL32;
CPyL8: ;
    cpy_r_r6 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    cpy_r_r7 = (PyObject *)CPyType_nodes___FuncDef;
    cpy_r_r8 = (CPyPtr)&((PyObject *)cpy_r_r6)->ob_type;
    cpy_r_r9 = *(PyObject * *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 == cpy_r_r7;
    if (cpy_r_r10) {
        goto CPyL11;
    } else
        goto CPyL36;
CPyL9: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r11 = 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ir", 369, CPyStatic_function___globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r12 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r13 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r12)->_func_to_decl;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    CPy_INCREF(cpy_r_r14);
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_nodes___FuncDef))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_ir", 370, CPyStatic_function___globals, "mypy.nodes.FuncDef", cpy_r_r14);
        goto CPyL37;
    }
    cpy_r_r16 = CPyDict_GetItem(cpy_r_r13, cpy_r_r15);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ir", 370, CPyStatic_function___globals);
        goto CPyL38;
    }
    if (likely(Py_TYPE(cpy_r_r16) == CPyType_func_ir___FuncDecl))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_ir", 370, CPyStatic_function___globals, "mypyc.ir.func_ir.FuncDecl", cpy_r_r16);
        goto CPyL38;
    }
    cpy_r_func_decl = cpy_r_r17;
    cpy_r_r18 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_is_decorated;
    if (cpy_r_r18) goto CPyL16;
CPyL15: ;
    if (!cpy_r_is_singledispatch_main_func) goto CPyL27;
CPyL16: ;
    cpy_r_r19 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r20 = cpy_r_cdef == cpy_r_r19;
    if (!cpy_r_r20) goto CPyL18;
    cpy_r_r21 = Py_None;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = cpy_r_r21;
    goto CPyL20;
CPyL18: ;
    if (likely(cpy_r_cdef != Py_None))
        cpy_r_r23 = cpy_r_cdef;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_ir", 372, CPyStatic_function___globals, "mypy.nodes.ClassDef", cpy_r_cdef);
        goto CPyL39;
    }
    cpy_r_r24 = ((mypy___nodes___ClassDefObject *)cpy_r_r23)->_name;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r22 = cpy_r_r24;
CPyL20: ;
    cpy_r_class_name = cpy_r_r22;
    cpy_r_r25 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_name;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_func_ir", "IRBuilder", "module_name", 376, CPyStatic_function___globals);
        goto CPyL40;
    }
    CPy_INCREF(cpy_r_r26);
CPyL21: ;
    cpy_r_r27 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_func_decl)->_kind;
    CPyTagged_INCREF(cpy_r_r27);
    cpy_r_r28 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_func_decl)->_is_prop_getter;
    cpy_r_r29 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_func_decl)->_is_prop_setter;
    CPy_DECREF(cpy_r_func_decl);
    cpy_r_r30 = 2;
    cpy_r_r31 = CPyDef_func_ir___FuncDecl(cpy_r_r25, cpy_r_class_name, cpy_r_r26, cpy_r_sig, cpy_r_r27, cpy_r_r28, cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_class_name);
    CPy_DECREF(cpy_r_r26);
    CPyTagged_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ir", 373, CPyStatic_function___globals);
        goto CPyL38;
    }
    cpy_r_func_decl = cpy_r_r31;
    cpy_r_r32 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    if (likely(Py_TYPE(cpy_r_r32) == CPyType_nodes___FuncDef))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_ir", 383, CPyStatic_function___globals, "mypy.nodes.FuncDef", cpy_r_r32);
        goto CPyL39;
    }
    cpy_r_r34 = ((mypy___nodes___FuncDefObject *)cpy_r_r33)->_line;
    CPyTagged_INCREF(cpy_r_r34);
    cpy_r_r35 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    CPy_INCREF(cpy_r_r35);
    if (likely(Py_TYPE(cpy_r_r35) == CPyType_nodes___FuncDef))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_ir", 383, CPyStatic_function___globals, "mypy.nodes.FuncDef", cpy_r_r35);
        goto CPyL41;
    }
    cpy_r_r37 = CPY_GET_ATTR(cpy_r_r36, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ir", 383, CPyStatic_function___globals);
        goto CPyL41;
    }
CPyL25: ;
    cpy_r_r38 = CPyDef_func_ir___FuncIR(cpy_r_func_decl, cpy_r_args, cpy_r_blocks, cpy_r_r34, cpy_r_r37);
    CPy_DECREF(cpy_r_func_decl);
    CPyTagged_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ir", 382, CPyStatic_function___globals);
        goto CPyL38;
    }
    cpy_r_func_ir = cpy_r_r38;
    goto CPyL32;
CPyL27: ;
    cpy_r_r39 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    if (likely(Py_TYPE(cpy_r_r39) == CPyType_nodes___FuncDef))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_ir", 387, CPyStatic_function___globals, "mypy.nodes.FuncDef", cpy_r_r39);
        goto CPyL39;
    }
    cpy_r_r41 = ((mypy___nodes___FuncDefObject *)cpy_r_r40)->_line;
    CPyTagged_INCREF(cpy_r_r41);
    cpy_r_r42 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    CPy_INCREF(cpy_r_r42);
    if (likely(Py_TYPE(cpy_r_r42) == CPyType_nodes___FuncDef))
        cpy_r_r43 = cpy_r_r42;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_ir", 387, CPyStatic_function___globals, "mypy.nodes.FuncDef", cpy_r_r42);
        goto CPyL42;
    }
    cpy_r_r44 = CPY_GET_ATTR(cpy_r_r43, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ir", 387, CPyStatic_function___globals);
        goto CPyL42;
    }
CPyL30: ;
    cpy_r_r45 = CPyDef_func_ir___FuncIR(cpy_r_func_decl, cpy_r_args, cpy_r_blocks, cpy_r_r41, cpy_r_r44);
    CPy_DECREF(cpy_r_func_decl);
    CPyTagged_DECREF(cpy_r_r41);
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ir", 386, CPyStatic_function___globals);
        goto CPyL38;
    }
    cpy_r_func_ir = cpy_r_r45;
CPyL32: ;
    cpy_r_r46.f0 = cpy_r_func_ir;
    cpy_r_r46.f1 = cpy_r_func_reg;
    CPy_INCREF(cpy_r_r46.f0);
    CPy_INCREF(cpy_r_r46.f1);
    CPy_DECREF(cpy_r_func_ir);
    CPy_DECREF(cpy_r_func_reg);
    return cpy_r_r46;
CPyL33: ;
    tuple_T2OO __tmp10196 = { NULL, NULL };
    cpy_r_r47 = __tmp10196;
    return cpy_r_r47;
CPyL34: ;
    CPy_DECREF(cpy_r_func_reg);
    goto CPyL4;
CPyL35: ;
    CPy_DecRef(cpy_r_func_ir);
    goto CPyL33;
CPyL36: ;
    CPy_DECREF(cpy_r_func_reg);
    goto CPyL9;
CPyL37: ;
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_r13);
    goto CPyL33;
CPyL38: ;
    CPy_DecRef(cpy_r_func_reg);
    goto CPyL33;
CPyL39: ;
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_func_decl);
    goto CPyL33;
CPyL40: ;
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_func_decl);
    CPy_DecRef(cpy_r_class_name);
    CPy_DecRef(cpy_r_r25);
    goto CPyL33;
CPyL41: ;
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_func_decl);
    CPyTagged_DecRef(cpy_r_r34);
    goto CPyL33;
CPyL42: ;
    CPy_DecRef(cpy_r_func_reg);
    CPy_DecRef(cpy_r_func_decl);
    CPyTagged_DecRef(cpy_r_r41);
    goto CPyL33;
}

PyObject *CPyPy_function___gen_func_ir(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "args", "blocks", "sig", "fn_info", "cdef", "is_singledispatch_main_func", 0};
    static CPyArg_Parser parser = {"OOOOOO|O:gen_func_ir", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_args;
    PyObject *obj_blocks;
    PyObject *obj_sig;
    PyObject *obj_fn_info;
    PyObject *obj_cdef;
    PyObject *obj_is_singledispatch_main_func = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_args, &obj_blocks, &obj_sig, &obj_fn_info, &obj_cdef, &obj_is_singledispatch_main_func)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_args;
    if (likely(PyList_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("list", obj_args); 
        goto fail;
    }
    PyObject *arg_blocks;
    if (likely(PyList_Check(obj_blocks)))
        arg_blocks = obj_blocks;
    else {
        CPy_TypeError("list", obj_blocks); 
        goto fail;
    }
    PyObject *arg_sig;
    if (likely(Py_TYPE(obj_sig) == CPyType_func_ir___FuncSignature))
        arg_sig = obj_sig;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_sig); 
        goto fail;
    }
    PyObject *arg_fn_info;
    if (likely(Py_TYPE(obj_fn_info) == CPyType_context___FuncInfo))
        arg_fn_info = obj_fn_info;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_fn_info); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef)
        arg_cdef = obj_cdef;
    else {
        arg_cdef = NULL;
    }
    if (arg_cdef != NULL) goto __LL10197;
    if (obj_cdef == Py_None)
        arg_cdef = obj_cdef;
    else {
        arg_cdef = NULL;
    }
    if (arg_cdef != NULL) goto __LL10197;
    CPy_TypeError("mypy.nodes.ClassDef or None", obj_cdef); 
    goto fail;
__LL10197: ;
    char arg_is_singledispatch_main_func;
    if (obj_is_singledispatch_main_func == NULL) {
        arg_is_singledispatch_main_func = 2;
    } else if (unlikely(!PyBool_Check(obj_is_singledispatch_main_func))) {
        CPy_TypeError("bool", obj_is_singledispatch_main_func); goto fail;
    } else
        arg_is_singledispatch_main_func = obj_is_singledispatch_main_func == Py_True;
    tuple_T2OO retval = CPyDef_function___gen_func_ir(arg_builder, arg_args, arg_blocks, arg_sig, arg_fn_info, arg_cdef, arg_is_singledispatch_main_func);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10198 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp10198);
    PyObject *__tmp10199 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp10199);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ir", 347, CPyStatic_function___globals);
    return NULL;
}

char CPyDef_function___handle_ext_method(PyObject *cpy_r_builder, PyObject *cpy_r_cdef, PyObject *cpy_r_fdef) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_class_ir;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_func_ir;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_func_reg;
    PyObject *cpy_r_r11;
    int32_t cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject **cpy_r_r19;
    PyObject *cpy_r_r20;
    tuple_T3OOO cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r__;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_typ;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_orig_func;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_decorated_func;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    CPyPtr cpy_r_r36;
    CPyPtr cpy_r_r37;
    CPyPtr cpy_r_r38;
    CPyPtr cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    int32_t cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    tuple_T2OC cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    int32_t cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    tuple_T2OO cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_getter_ir;
    PyObject *cpy_r_r67;
    tuple_T2OO cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    int32_t cpy_r_r71;
    char cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject *cpy_r_r75;
    int32_t cpy_r_r76;
    char cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    CPyTagged cpy_r_r81;
    CPyPtr cpy_r_r82;
    int64_t cpy_r_r83;
    CPyTagged cpy_r_r84;
    char cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_base;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    char cpy_r_r91;
    PyObject *cpy_r_r92;
    int32_t cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    char cpy_r_r96;
    char cpy_r_r97;
    char cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    char cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_f;
    PyObject *cpy_r_r114;
    tuple_T2OO cpy_r_r115;
    PyObject *cpy_r_r116;
    int32_t cpy_r_r117;
    char cpy_r_r118;
    PyObject *cpy_r_r119;
    int32_t cpy_r_r120;
    char cpy_r_r121;
    CPyTagged cpy_r_r122;
    char cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    tuple_T2OO cpy_r_r127;
    PyObject *cpy_r_r128;
    int32_t cpy_r_r129;
    char cpy_r_r130;
    PyObject *cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    char cpy_r_r134;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 394, CPyStatic_function___globals);
        goto CPyL78;
    }
CPyL1: ;
    cpy_r_name = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r2 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r1)->_type_to_ir;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = ((mypy___nodes___ClassDefObject *)cpy_r_cdef)->_info;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDict_GetItem(cpy_r_r2, cpy_r_r3);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 395, CPyStatic_function___globals);
        goto CPyL79;
    }
    if (likely(Py_TYPE(cpy_r_r4) == CPyType_class_ir___ClassIR))
        cpy_r_r5 = cpy_r_r4;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "handle_ext_method", 395, CPyStatic_function___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r4);
        goto CPyL79;
    }
    cpy_r_class_ir = cpy_r_r5;
    cpy_r_r6 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDef_mapper___Mapper___fdef_to_sig(cpy_r_r6, cpy_r_fdef);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 396, CPyStatic_function___globals);
        goto CPyL80;
    }
    cpy_r_r8 = CPyDef_function___gen_func_item(cpy_r_builder, cpy_r_fdef, cpy_r_name, cpy_r_r7, cpy_r_cdef);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 396, CPyStatic_function___globals);
        goto CPyL80;
    }
    cpy_r_r9 = cpy_r_r8.f0;
    CPy_INCREF(cpy_r_r9);
    cpy_r_func_ir = cpy_r_r9;
    cpy_r_r10 = cpy_r_r8.f1;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r8.f0);
    CPy_DECREF(cpy_r_r8.f1);
    cpy_r_func_reg = cpy_r_r10;
    CPy_DECREF(cpy_r_func_reg);
    cpy_r_r11 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_functions;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = PyList_Append(cpy_r_r11, cpy_r_func_ir);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r13 = cpy_r_r12 >= 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 397, CPyStatic_function___globals);
        goto CPyL81;
    }
    cpy_r_r14 = CPyDef_function___is_decorated(cpy_r_builder, cpy_r_fdef);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 399, CPyStatic_function___globals);
        goto CPyL81;
    }
    if (cpy_r_r14) {
        goto CPyL82;
    } else
        goto CPyL20;
CPyL8: ;
    cpy_r_r15 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncDef, 7, mypy___nodes___FuncDefObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 401, CPyStatic_function___globals);
        goto CPyL83;
    }
CPyL9: ;
    cpy_r_r16 = CPyStatics[224]; /* '.' */
    cpy_r_r17 = CPyStatics[5576]; /* 'rpartition' */
    PyObject *cpy_r_r18[2] = {cpy_r_r15, cpy_r_r16};
    cpy_r_r19 = (PyObject **)&cpy_r_r18;
    cpy_r_r20 = PyObject_VectorcallMethod(cpy_r_r17, cpy_r_r19, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 401, CPyStatic_function___globals);
        goto CPyL84;
    }
    CPy_DECREF(cpy_r_r15);
    PyObject *__tmp10200;
    if (unlikely(!(PyTuple_Check(cpy_r_r20) && PyTuple_GET_SIZE(cpy_r_r20) == 3))) {
        __tmp10200 = NULL;
        goto __LL10201;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r20, 0))))
        __tmp10200 = PyTuple_GET_ITEM(cpy_r_r20, 0);
    else {
        __tmp10200 = NULL;
    }
    if (__tmp10200 == NULL) goto __LL10201;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r20, 1))))
        __tmp10200 = PyTuple_GET_ITEM(cpy_r_r20, 1);
    else {
        __tmp10200 = NULL;
    }
    if (__tmp10200 == NULL) goto __LL10201;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r20, 2))))
        __tmp10200 = PyTuple_GET_ITEM(cpy_r_r20, 2);
    else {
        __tmp10200 = NULL;
    }
    if (__tmp10200 == NULL) goto __LL10201;
    __tmp10200 = cpy_r_r20;
__LL10201: ;
    if (unlikely(__tmp10200 == NULL)) {
        CPy_TypeError("tuple[str, str, str]", cpy_r_r20); cpy_r_r21 = (tuple_T3OOO) { NULL, NULL, NULL };
    } else {
        PyObject *__tmp10202 = PyTuple_GET_ITEM(cpy_r_r20, 0);
        CPy_INCREF(__tmp10202);
        PyObject *__tmp10203;
        if (likely(PyUnicode_Check(__tmp10202)))
            __tmp10203 = __tmp10202;
        else {
            CPy_TypeError("str", __tmp10202); 
            __tmp10203 = NULL;
        }
        cpy_r_r21.f0 = __tmp10203;
        PyObject *__tmp10204 = PyTuple_GET_ITEM(cpy_r_r20, 1);
        CPy_INCREF(__tmp10204);
        PyObject *__tmp10205;
        if (likely(PyUnicode_Check(__tmp10204)))
            __tmp10205 = __tmp10204;
        else {
            CPy_TypeError("str", __tmp10204); 
            __tmp10205 = NULL;
        }
        cpy_r_r21.f1 = __tmp10205;
        PyObject *__tmp10206 = PyTuple_GET_ITEM(cpy_r_r20, 2);
        CPy_INCREF(__tmp10206);
        PyObject *__tmp10207;
        if (likely(PyUnicode_Check(__tmp10206)))
            __tmp10207 = __tmp10206;
        else {
            CPy_TypeError("str", __tmp10206); 
            __tmp10207 = NULL;
        }
        cpy_r_r21.f2 = __tmp10207;
    }
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 401, CPyStatic_function___globals);
        goto CPyL83;
    }
    cpy_r_r22 = cpy_r_r21.f0;
    CPy_INCREF(cpy_r_r22);
    cpy_r__ = cpy_r_r22;
    CPy_DECREF(cpy_r__);
    cpy_r_r23 = cpy_r_r21.f1;
    CPy_INCREF(cpy_r_r23);
    cpy_r__ = cpy_r_r23;
    CPy_DECREF(cpy_r__);
    cpy_r_r24 = cpy_r_r21.f2;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r21.f0);
    CPy_DECREF(cpy_r_r21.f1);
    CPy_DECREF(cpy_r_r21.f2);
    cpy_r_name = cpy_r_r24;
    cpy_r_r25 = CPY_GET_ATTR(cpy_r_cdef, CPyType_nodes___ClassDef, 6, mypy___nodes___ClassDefObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 404, CPyStatic_function___globals);
        goto CPyL81;
    }
CPyL12: ;
    cpy_r_r26 = CPyDef_builder___IRBuilder___load_native_type_object(cpy_r_builder, cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 404, CPyStatic_function___globals);
        goto CPyL81;
    }
    cpy_r_typ = cpy_r_r26;
    cpy_r_r27 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_line;
    CPyTagged_INCREF(cpy_r_r27);
    cpy_r_r28 = CPyDef_builder___IRBuilder___py_get_attr(cpy_r_builder, cpy_r_typ, cpy_r_name, cpy_r_r27);
    CPyTagged_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 405, CPyStatic_function___globals);
        goto CPyL85;
    }
    cpy_r_orig_func = cpy_r_r28;
    cpy_r_r29 = CPyDef_function___load_decorated_func(cpy_r_builder, cpy_r_fdef, cpy_r_orig_func);
    CPy_DECREF(cpy_r_orig_func);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 408, CPyStatic_function___globals);
        goto CPyL85;
    }
    cpy_r_decorated_func = cpy_r_r29;
    cpy_r_r30 = CPyStatic_function___globals;
    cpy_r_r31 = CPyStatics[8065]; /* 'py_setattr_op' */
    cpy_r_r32 = CPyDict_GetItem(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 412, CPyStatic_function___globals);
        goto CPyL86;
    }
    if (likely(PyTuple_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "handle_ext_method", 412, CPyStatic_function___globals, "tuple", cpy_r_r32);
        goto CPyL86;
    }
    cpy_r_r34 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_name);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 412, CPyStatic_function___globals);
        goto CPyL87;
    }
    cpy_r_r35 = PyList_New(3);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 412, CPyStatic_function___globals);
        goto CPyL88;
    }
    cpy_r_r36 = (CPyPtr)&((PyListObject *)cpy_r_r35)->ob_item;
    cpy_r_r37 = *(CPyPtr *)cpy_r_r36;
    *(PyObject * *)cpy_r_r37 = cpy_r_typ;
    cpy_r_r38 = cpy_r_r37 + 8;
    *(PyObject * *)cpy_r_r38 = cpy_r_r34;
    cpy_r_r39 = cpy_r_r37 + 16;
    *(PyObject * *)cpy_r_r39 = cpy_r_decorated_func;
    cpy_r_r40 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_line;
    CPyTagged_INCREF(cpy_r_r40);
    cpy_r_r41 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r33, cpy_r_r35, cpy_r_r40);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r35);
    CPyTagged_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 412, CPyStatic_function___globals);
        goto CPyL81;
    } else
        goto CPyL89;
CPyL20: ;
    cpy_r_r42 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_is_property;
    if (!cpy_r_r42) goto CPyL28;
CPyL21: ;
    cpy_r_r43 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_properties;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "handle_ext_method", "ClassIR", "properties", 417, CPyStatic_function___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r43);
CPyL22: ;
    cpy_r_r44 = PyDict_Contains(cpy_r_r43, cpy_r_name);
    CPy_DECREF(cpy_r_r43);
    cpy_r_r45 = cpy_r_r44 >= 0;
    if (unlikely(!cpy_r_r45)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 417, CPyStatic_function___globals);
        goto CPyL81;
    }
    cpy_r_r46 = cpy_r_r44;
    cpy_r_r47 = cpy_r_r46 ^ 1;
    if (cpy_r_r47) {
        goto CPyL26;
    } else
        goto CPyL90;
CPyL24: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r48 = 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 417, CPyStatic_function___globals);
        goto CPyL78;
    }
    CPy_Unreachable();
CPyL26: ;
    cpy_r_r49.f0 = cpy_r_func_ir;
    cpy_r_r49.f1 = 1;
    CPy_INCREF(cpy_r_r49.f0);
    cpy_r_r50 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_properties;
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "handle_ext_method", "ClassIR", "properties", 418, CPyStatic_function___globals);
        goto CPyL91;
    }
    CPy_INCREF(cpy_r_r50);
CPyL27: ;
    cpy_r_r51 = PyTuple_New(2);
    if (unlikely(cpy_r_r51 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10208 = cpy_r_r49.f0;
    PyTuple_SET_ITEM(cpy_r_r51, 0, __tmp10208);
    PyObject *__tmp10209 = Py_None;
    CPy_INCREF(__tmp10209);
    PyTuple_SET_ITEM(cpy_r_r51, 1, __tmp10209);
    cpy_r_r52 = CPyDict_SetItem(cpy_r_r50, cpy_r_name, cpy_r_r51);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 418, CPyStatic_function___globals);
        goto CPyL81;
    } else
        goto CPyL40;
CPyL28: ;
    cpy_r_r54 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_prop_setters;
    CPy_INCREF(cpy_r_r54);
    cpy_r_r55 = PySet_Contains(cpy_r_r54, cpy_r_fdef);
    CPy_DECREF(cpy_r_r54);
    cpy_r_r56 = cpy_r_r55 >= 0;
    if (unlikely(!cpy_r_r56)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 420, CPyStatic_function___globals);
        goto CPyL81;
    }
    cpy_r_r57 = cpy_r_r55;
    if (!cpy_r_r57) goto CPyL40;
    cpy_r_r58 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_properties;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "handle_ext_method", "ClassIR", "properties", 422, CPyStatic_function___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r58);
CPyL31: ;
    cpy_r_r59 = PyDict_Contains(cpy_r_r58, cpy_r_name);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 422, CPyStatic_function___globals);
        goto CPyL81;
    }
    cpy_r_r61 = cpy_r_r59;
    if (cpy_r_r61) {
        goto CPyL35;
    } else
        goto CPyL92;
CPyL33: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r62 = 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 422, CPyStatic_function___globals);
        goto CPyL78;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r63 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_properties;
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "handle_ext_method", "ClassIR", "properties", 423, CPyStatic_function___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r63);
CPyL36: ;
    cpy_r_r64 = CPyDict_GetItem(cpy_r_r63, cpy_r_name);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 423, CPyStatic_function___globals);
        goto CPyL81;
    }
    PyObject *__tmp10210;
    if (unlikely(!(PyTuple_Check(cpy_r_r64) && PyTuple_GET_SIZE(cpy_r_r64) == 2))) {
        __tmp10210 = NULL;
        goto __LL10211;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r64, 0)) == CPyType_func_ir___FuncIR))
        __tmp10210 = PyTuple_GET_ITEM(cpy_r_r64, 0);
    else {
        __tmp10210 = NULL;
    }
    if (__tmp10210 == NULL) goto __LL10211;
    if (Py_TYPE(PyTuple_GET_ITEM(cpy_r_r64, 1)) == CPyType_func_ir___FuncIR)
        __tmp10210 = PyTuple_GET_ITEM(cpy_r_r64, 1);
    else {
        __tmp10210 = NULL;
    }
    if (__tmp10210 != NULL) goto __LL10212;
    if (PyTuple_GET_ITEM(cpy_r_r64, 1) == Py_None)
        __tmp10210 = PyTuple_GET_ITEM(cpy_r_r64, 1);
    else {
        __tmp10210 = NULL;
    }
    if (__tmp10210 != NULL) goto __LL10212;
    __tmp10210 = NULL;
__LL10212: ;
    if (__tmp10210 == NULL) goto __LL10211;
    __tmp10210 = cpy_r_r64;
__LL10211: ;
    if (unlikely(__tmp10210 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.func_ir.FuncIR, union[mypyc.ir.func_ir.FuncIR, None]]", cpy_r_r64); cpy_r_r65 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10213 = PyTuple_GET_ITEM(cpy_r_r64, 0);
        CPy_INCREF(__tmp10213);
        PyObject *__tmp10214;
        if (likely(Py_TYPE(__tmp10213) == CPyType_func_ir___FuncIR))
            __tmp10214 = __tmp10213;
        else {
            CPy_TypeError("mypyc.ir.func_ir.FuncIR", __tmp10213); 
            __tmp10214 = NULL;
        }
        cpy_r_r65.f0 = __tmp10214;
        PyObject *__tmp10215 = PyTuple_GET_ITEM(cpy_r_r64, 1);
        CPy_INCREF(__tmp10215);
        PyObject *__tmp10216;
        if (Py_TYPE(__tmp10215) == CPyType_func_ir___FuncIR)
            __tmp10216 = __tmp10215;
        else {
            __tmp10216 = NULL;
        }
        if (__tmp10216 != NULL) goto __LL10217;
        if (__tmp10215 == Py_None)
            __tmp10216 = __tmp10215;
        else {
            __tmp10216 = NULL;
        }
        if (__tmp10216 != NULL) goto __LL10217;
        CPy_TypeError("mypyc.ir.func_ir.FuncIR or None", __tmp10215); 
        __tmp10216 = NULL;
__LL10217: ;
        cpy_r_r65.f1 = __tmp10216;
    }
    CPy_DECREF(cpy_r_r64);
    if (unlikely(cpy_r_r65.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 423, CPyStatic_function___globals);
        goto CPyL81;
    }
    cpy_r_r66 = cpy_r_r65.f0;
    CPy_INCREF(cpy_r_r66);
    cpy_r_getter_ir = cpy_r_r66;
    cpy_r_r67 = cpy_r_r65.f1;
    CPy_INCREF(cpy_r_r67);
    CPy_DECREF(cpy_r_r65.f0);
    CPy_DECREF(cpy_r_r65.f1);
    cpy_r__ = cpy_r_r67;
    CPy_DECREF(cpy_r__);
    cpy_r_r68.f0 = cpy_r_getter_ir;
    cpy_r_r68.f1 = cpy_r_func_ir;
    CPy_INCREF(cpy_r_r68.f0);
    CPy_INCREF(cpy_r_r68.f1);
    CPy_DECREF(cpy_r_getter_ir);
    cpy_r_r69 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_properties;
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "handle_ext_method", "ClassIR", "properties", 424, CPyStatic_function___globals);
        goto CPyL93;
    }
    CPy_INCREF(cpy_r_r69);
CPyL39: ;
    cpy_r_r70 = PyTuple_New(2);
    if (unlikely(cpy_r_r70 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10218 = cpy_r_r68.f0;
    PyTuple_SET_ITEM(cpy_r_r70, 0, __tmp10218);
    PyObject *__tmp10219 = cpy_r_r68.f1;
    PyTuple_SET_ITEM(cpy_r_r70, 1, __tmp10219);
    cpy_r_r71 = CPyDict_SetItem(cpy_r_r69, cpy_r_name, cpy_r_r70);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r72 = cpy_r_r71 >= 0;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 424, CPyStatic_function___globals);
        goto CPyL81;
    }
CPyL40: ;
    cpy_r_r73 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_methods;
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "handle_ext_method", "ClassIR", "methods", 426, CPyStatic_function___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r73);
CPyL41: ;
    cpy_r_r74 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_func_ir)->_decl;
    cpy_r_r75 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r74)->_name;
    CPy_INCREF(cpy_r_r75);
    cpy_r_r76 = CPyDict_SetItem(cpy_r_r73, cpy_r_r75, cpy_r_func_ir);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r77 = cpy_r_r76 >= 0;
    if (unlikely(!cpy_r_r77)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 426, CPyStatic_function___globals);
        goto CPyL81;
    }
    cpy_r_r78 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_mro;
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "handle_ext_method", "ClassIR", "mro", 430, CPyStatic_function___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_r78);
CPyL43: ;
    cpy_r_r79 = CPyList_GetSlice(cpy_r_r78, 2, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 430, CPyStatic_function___globals);
        goto CPyL81;
    }
    if (likely(PyList_Check(cpy_r_r79)))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "handle_ext_method", 430, CPyStatic_function___globals, "list", cpy_r_r79);
        goto CPyL81;
    }
    cpy_r_r81 = 0;
CPyL46: ;
    cpy_r_r82 = (CPyPtr)&((PyVarObject *)cpy_r_r80)->ob_size;
    cpy_r_r83 = *(int64_t *)cpy_r_r82;
    cpy_r_r84 = cpy_r_r83 << 1;
    cpy_r_r85 = (Py_ssize_t)cpy_r_r81 < (Py_ssize_t)cpy_r_r84;
    if (!cpy_r_r85) goto CPyL94;
    cpy_r_r86 = CPyList_GetItemUnsafe(cpy_r_r80, cpy_r_r81);
    if (likely(Py_TYPE(cpy_r_r86) == CPyType_class_ir___ClassIR))
        cpy_r_r87 = cpy_r_r86;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "handle_ext_method", 430, CPyStatic_function___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r86);
        goto CPyL95;
    }
    cpy_r_base = cpy_r_r87;
    cpy_r_r88 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_method_decls;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "handle_ext_method", "ClassIR", "method_decls", 432, CPyStatic_function___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r88);
CPyL49: ;
    cpy_r_r89 = PyDict_Contains(cpy_r_r88, cpy_r_name);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 432, CPyStatic_function___globals);
        goto CPyL96;
    }
    cpy_r_r91 = cpy_r_r89;
    if (!cpy_r_r91) goto CPyL97;
    cpy_r_r92 = CPyStatics[288]; /* '__init__' */
    cpy_r_r93 = PyUnicode_Compare(cpy_r_name, cpy_r_r92);
    cpy_r_r94 = cpy_r_r93 == -1;
    if (!cpy_r_r94) goto CPyL54;
    cpy_r_r95 = PyErr_Occurred();
    cpy_r_r96 = cpy_r_r95 != NULL;
    if (!cpy_r_r96) goto CPyL54;
    cpy_r_r97 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r97)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 433, CPyStatic_function___globals);
        goto CPyL96;
    }
CPyL54: ;
    cpy_r_r98 = cpy_r_r93 != 0;
    if (!cpy_r_r98) goto CPyL97;
    cpy_r_r99 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_method_decls;
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "handle_ext_method", "ClassIR", "method_decls", 435, CPyStatic_function___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r99);
CPyL56: ;
    cpy_r_r100 = CPyDict_GetItem(cpy_r_r99, cpy_r_name);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 435, CPyStatic_function___globals);
        goto CPyL96;
    }
    if (likely(Py_TYPE(cpy_r_r100) == CPyType_func_ir___FuncDecl))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "handle_ext_method", 435, CPyStatic_function___globals, "mypyc.ir.func_ir.FuncDecl", cpy_r_r100);
        goto CPyL96;
    }
    cpy_r_r102 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r101)->_sig;
    CPy_INCREF(cpy_r_r102);
    CPy_DECREF(cpy_r_r101);
    cpy_r_r103 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_method_decls;
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "handle_ext_method", "ClassIR", "method_decls", 435, CPyStatic_function___globals);
        goto CPyL98;
    }
    CPy_INCREF(cpy_r_r103);
CPyL59: ;
    cpy_r_r104 = CPyDict_GetItem(cpy_r_r103, cpy_r_name);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 435, CPyStatic_function___globals);
        goto CPyL98;
    }
    if (likely(Py_TYPE(cpy_r_r104) == CPyType_func_ir___FuncDecl))
        cpy_r_r105 = cpy_r_r104;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "handle_ext_method", 435, CPyStatic_function___globals, "mypyc.ir.func_ir.FuncDecl", cpy_r_r104);
        goto CPyL98;
    }
    cpy_r_r106 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r105)->_sig;
    CPy_INCREF(cpy_r_r106);
    CPy_DECREF(cpy_r_r105);
    cpy_r_r107 = CPyDef_sametype___is_same_method_signature(cpy_r_r102, cpy_r_r106);
    CPy_DECREF(cpy_r_r102);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r107 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 434, CPyStatic_function___globals);
        goto CPyL96;
    }
    if (cpy_r_r107) goto CPyL97;
    cpy_r_r108 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_method_decls;
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "handle_ext_method", "ClassIR", "method_decls", 442, CPyStatic_function___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r108);
CPyL64: ;
    cpy_r_r109 = CPyDict_GetItem(cpy_r_r108, cpy_r_name);
    CPy_DECREF(cpy_r_r108);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 442, CPyStatic_function___globals);
        goto CPyL96;
    }
    if (likely(Py_TYPE(cpy_r_r109) == CPyType_func_ir___FuncDecl))
        cpy_r_r110 = cpy_r_r109;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "handle_ext_method", 442, CPyStatic_function___globals, "mypyc.ir.func_ir.FuncDecl", cpy_r_r109);
        goto CPyL96;
    }
    cpy_r_r111 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r110)->_sig;
    CPy_INCREF(cpy_r_r111);
    CPy_DECREF(cpy_r_r110);
    cpy_r_r112 = 2;
    cpy_r_r113 = CPyDef_function___gen_glue(cpy_r_builder, cpy_r_r111, cpy_r_func_ir, cpy_r_class_ir, cpy_r_base, cpy_r_fdef, cpy_r_r112);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 442, CPyStatic_function___globals);
        goto CPyL96;
    }
    cpy_r_f = cpy_r_r113;
    cpy_r_r114 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_glue_methods;
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "handle_ext_method", "ClassIR", "glue_methods", 443, CPyStatic_function___globals);
        goto CPyL99;
    }
    CPy_INCREF(cpy_r_r114);
CPyL68: ;
    cpy_r_r115.f0 = cpy_r_base;
    cpy_r_r115.f1 = cpy_r_name;
    CPy_INCREF(cpy_r_r115.f0);
    CPy_INCREF(cpy_r_r115.f1);
    CPy_DECREF(cpy_r_base);
    cpy_r_r116 = PyTuple_New(2);
    if (unlikely(cpy_r_r116 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10220 = cpy_r_r115.f0;
    PyTuple_SET_ITEM(cpy_r_r116, 0, __tmp10220);
    PyObject *__tmp10221 = cpy_r_r115.f1;
    PyTuple_SET_ITEM(cpy_r_r116, 1, __tmp10221);
    cpy_r_r117 = CPyDict_SetItem(cpy_r_r114, cpy_r_r116, cpy_r_f);
    CPy_DECREF(cpy_r_r114);
    CPy_DECREF(cpy_r_r116);
    cpy_r_r118 = cpy_r_r117 >= 0;
    if (unlikely(!cpy_r_r118)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 443, CPyStatic_function___globals);
        goto CPyL100;
    }
    cpy_r_r119 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_functions;
    CPy_INCREF(cpy_r_r119);
    cpy_r_r120 = PyList_Append(cpy_r_r119, cpy_r_f);
    CPy_DECREF(cpy_r_r119);
    CPy_DECREF(cpy_r_f);
    cpy_r_r121 = cpy_r_r120 >= 0;
    if (unlikely(!cpy_r_r121)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 444, CPyStatic_function___globals);
        goto CPyL95;
    }
CPyL70: ;
    cpy_r_r122 = cpy_r_r81 + 2;
    cpy_r_r81 = cpy_r_r122;
    goto CPyL46;
CPyL71: ;
    cpy_r_r123 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_allow_interpreted_subclasses;
    if (!cpy_r_r123) goto CPyL101;
CPyL72: ;
    cpy_r_r124 = CPY_GET_ATTR(cpy_r_func_ir, CPyType_func_ir___FuncIR, 5, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* sig */
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 451, CPyStatic_function___globals);
        goto CPyL81;
    }
CPyL73: ;
    cpy_r_r125 = CPyDef_function___gen_glue(cpy_r_builder, cpy_r_r124, cpy_r_func_ir, cpy_r_class_ir, cpy_r_class_ir, cpy_r_fdef, 1);
    CPy_DECREF(cpy_r_r124);
    CPy_DECREF(cpy_r_func_ir);
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 451, CPyStatic_function___globals);
        goto CPyL80;
    }
    cpy_r_f = cpy_r_r125;
    cpy_r_r126 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_class_ir)->_glue_methods;
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "handle_ext_method", "ClassIR", "glue_methods", 452, CPyStatic_function___globals);
        goto CPyL102;
    }
    CPy_INCREF(cpy_r_r126);
CPyL75: ;
    cpy_r_r127.f0 = cpy_r_class_ir;
    cpy_r_r127.f1 = cpy_r_name;
    CPy_INCREF(cpy_r_r127.f0);
    CPy_INCREF(cpy_r_r127.f1);
    CPy_DECREF(cpy_r_class_ir);
    CPy_DECREF(cpy_r_name);
    cpy_r_r128 = PyTuple_New(2);
    if (unlikely(cpy_r_r128 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10222 = cpy_r_r127.f0;
    PyTuple_SET_ITEM(cpy_r_r128, 0, __tmp10222);
    PyObject *__tmp10223 = cpy_r_r127.f1;
    PyTuple_SET_ITEM(cpy_r_r128, 1, __tmp10223);
    cpy_r_r129 = CPyDict_SetItem(cpy_r_r126, cpy_r_r128, cpy_r_f);
    CPy_DECREF(cpy_r_r126);
    CPy_DECREF(cpy_r_r128);
    cpy_r_r130 = cpy_r_r129 >= 0;
    if (unlikely(!cpy_r_r130)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 452, CPyStatic_function___globals);
        goto CPyL103;
    }
    cpy_r_r131 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_functions;
    CPy_INCREF(cpy_r_r131);
    cpy_r_r132 = PyList_Append(cpy_r_r131, cpy_r_f);
    CPy_DECREF(cpy_r_r131);
    CPy_DECREF(cpy_r_f);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 453, CPyStatic_function___globals);
        goto CPyL78;
    }
CPyL77: ;
    return 1;
CPyL78: ;
    cpy_r_r134 = 2;
    return cpy_r_r134;
CPyL79: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL78;
CPyL80: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_class_ir);
    goto CPyL78;
CPyL81: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_func_ir);
    goto CPyL78;
CPyL82: ;
    CPy_DECREF(cpy_r_name);
    goto CPyL8;
CPyL83: ;
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_func_ir);
    goto CPyL78;
CPyL84: ;
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r15);
    goto CPyL78;
CPyL85: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_typ);
    goto CPyL78;
CPyL86: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_decorated_func);
    goto CPyL78;
CPyL87: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_decorated_func);
    CPy_DecRef(cpy_r_r33);
    goto CPyL78;
CPyL88: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_decorated_func);
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r34);
    goto CPyL78;
CPyL89: ;
    CPy_DECREF(cpy_r_r41);
    goto CPyL20;
CPyL90: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_class_ir);
    CPy_DECREF(cpy_r_func_ir);
    goto CPyL24;
CPyL91: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r49.f0);
    goto CPyL78;
CPyL92: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_class_ir);
    CPy_DECREF(cpy_r_func_ir);
    goto CPyL33;
CPyL93: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r68.f0);
    CPy_DecRef(cpy_r_r68.f1);
    goto CPyL78;
CPyL94: ;
    CPy_DECREF(cpy_r_r80);
    goto CPyL71;
CPyL95: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r80);
    goto CPyL78;
CPyL96: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_base);
    goto CPyL78;
CPyL97: ;
    CPy_DECREF(cpy_r_base);
    goto CPyL70;
CPyL98: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_r102);
    goto CPyL78;
CPyL99: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_base);
    CPy_DecRef(cpy_r_f);
    goto CPyL78;
CPyL100: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_func_ir);
    CPy_DecRef(cpy_r_r80);
    CPy_DecRef(cpy_r_f);
    goto CPyL78;
CPyL101: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_class_ir);
    CPy_DECREF(cpy_r_func_ir);
    goto CPyL77;
CPyL102: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_class_ir);
    CPy_DecRef(cpy_r_f);
    goto CPyL78;
CPyL103: ;
    CPy_DecRef(cpy_r_f);
    goto CPyL78;
}

PyObject *CPyPy_function___handle_ext_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "cdef", "fdef", 0};
    static CPyArg_Parser parser = {"OOO:handle_ext_method", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_cdef;
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_cdef, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    char retval = CPyDef_function___handle_ext_method(arg_builder, arg_cdef, arg_fdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "handle_ext_method", 392, CPyStatic_function___globals);
    return NULL;
}

char CPyDef_function___handle_non_ext_method(PyObject *cpy_r_builder, PyObject *cpy_r_non_ext, PyObject *cpy_r_cdef, PyObject *cpy_r_fdef) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    tuple_T2OO cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_func_ir;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_func_reg;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_orig_func;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_prop;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyTagged cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_cls_meth;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    CPyPtr cpy_r_r38;
    CPyPtr cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    CPyTagged cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyTagged cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_stat_meth;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyPtr cpy_r_r55;
    CPyPtr cpy_r_r56;
    CPyTagged cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyTagged cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_fdef, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 460, CPyStatic_function___globals);
        goto CPyL37;
    }
CPyL1: ;
    cpy_r_name = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_mapper___Mapper___fdef_to_sig(cpy_r_r1, cpy_r_fdef);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 461, CPyStatic_function___globals);
        goto CPyL38;
    }
    cpy_r_r3 = CPyDef_function___gen_func_item(cpy_r_builder, cpy_r_fdef, cpy_r_name, cpy_r_r2, cpy_r_cdef);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 461, CPyStatic_function___globals);
        goto CPyL38;
    }
    cpy_r_r4 = cpy_r_r3.f0;
    CPy_INCREF(cpy_r_r4);
    cpy_r_func_ir = cpy_r_r4;
    cpy_r_r5 = cpy_r_r3.f1;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r3.f0);
    CPy_DECREF(cpy_r_r3.f1);
    cpy_r_func_reg = cpy_r_r5;
    cpy_r_r6 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r7 = cpy_r_func_reg != cpy_r_r6;
    if (cpy_r_r7) {
        goto CPyL6;
    } else
        goto CPyL39;
CPyL4: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r8 = 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 462, CPyStatic_function___globals);
        goto CPyL37;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r9 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_functions;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = PyList_Append(cpy_r_r9, cpy_r_func_ir);
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_func_ir);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 463, CPyStatic_function___globals);
        goto CPyL40;
    }
    cpy_r_r12 = CPyDef_function___is_decorated(cpy_r_builder, cpy_r_fdef);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 465, CPyStatic_function___globals);
        goto CPyL40;
    }
    if (!cpy_r_r12) goto CPyL12;
    if (likely(cpy_r_func_reg != Py_None))
        cpy_r_r13 = cpy_r_func_reg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 467, CPyStatic_function___globals, "mypyc.ir.ops.Value", cpy_r_func_reg);
        goto CPyL38;
    }
    cpy_r_orig_func = cpy_r_r13;
    cpy_r_r14 = CPyDef_function___load_decorated_func(cpy_r_builder, cpy_r_fdef, cpy_r_orig_func);
    CPy_DECREF(cpy_r_orig_func);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 468, CPyStatic_function___globals);
        goto CPyL38;
    }
    cpy_r_func_reg = cpy_r_r14;
CPyL12: ;
    cpy_r_r15 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_is_property;
    if (!cpy_r_r15) goto CPyL18;
CPyL13: ;
    cpy_r_r16 = CPyStatics[3777]; /* 'builtins.property' */
    cpy_r_r17 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_line;
    CPyTagged_INCREF(cpy_r_r17);
    cpy_r_r18 = CPyDef_builder___IRBuilder___load_module_attr_by_fullname(cpy_r_builder, cpy_r_r16, cpy_r_r17);
    CPyTagged_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 472, CPyStatic_function___globals);
        goto CPyL40;
    }
    cpy_r_prop = cpy_r_r18;
    if (likely(cpy_r_func_reg != Py_None))
        cpy_r_r19 = cpy_r_func_reg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 473, CPyStatic_function___globals, "mypyc.ir.ops.Value", cpy_r_func_reg);
        goto CPyL41;
    }
    cpy_r_r20 = PyList_New(1);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 473, CPyStatic_function___globals);
        goto CPyL42;
    }
    cpy_r_r21 = (CPyPtr)&((PyListObject *)cpy_r_r20)->ob_item;
    cpy_r_r22 = *(CPyPtr *)cpy_r_r21;
    *(PyObject * *)cpy_r_r22 = cpy_r_r19;
    cpy_r_r23 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_line;
    CPyTagged_INCREF(cpy_r_r23);
    cpy_r_r24 = NULL;
    cpy_r_r25 = NULL;
    cpy_r_r26 = CPyDef_builder___IRBuilder___py_call(cpy_r_builder, cpy_r_prop, cpy_r_r20, cpy_r_r23, cpy_r_r24, cpy_r_r25);
    CPy_DECREF(cpy_r_prop);
    CPy_DECREF(cpy_r_r20);
    CPyTagged_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 473, CPyStatic_function___globals);
        goto CPyL38;
    }
    cpy_r_func_reg = cpy_r_r26;
    goto CPyL34;
CPyL18: ;
    cpy_r_r27 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r28 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r27)->_func_to_decl;
    CPy_INCREF(cpy_r_r28);
    cpy_r_r29 = CPyDict_GetItem(cpy_r_r28, cpy_r_fdef);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 475, CPyStatic_function___globals);
        goto CPyL40;
    }
    if (likely(Py_TYPE(cpy_r_r29) == CPyType_func_ir___FuncDecl))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 475, CPyStatic_function___globals, "mypyc.ir.func_ir.FuncDecl", cpy_r_r29);
        goto CPyL40;
    }
    cpy_r_r31 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r30)->_kind;
    cpy_r_r32 = cpy_r_r31 == 4;
    CPy_DECREF(cpy_r_r30);
    if (!cpy_r_r32) goto CPyL26;
    cpy_r_r33 = CPyStatics[3779]; /* 'builtins.classmethod' */
    cpy_r_r34 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_line;
    CPyTagged_INCREF(cpy_r_r34);
    cpy_r_r35 = CPyDef_builder___IRBuilder___load_module_attr_by_fullname(cpy_r_builder, cpy_r_r33, cpy_r_r34);
    CPyTagged_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 476, CPyStatic_function___globals);
        goto CPyL40;
    }
    cpy_r_cls_meth = cpy_r_r35;
    if (likely(cpy_r_func_reg != Py_None))
        cpy_r_r36 = cpy_r_func_reg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 477, CPyStatic_function___globals, "mypyc.ir.ops.Value", cpy_r_func_reg);
        goto CPyL43;
    }
    cpy_r_r37 = PyList_New(1);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 477, CPyStatic_function___globals);
        goto CPyL44;
    }
    cpy_r_r38 = (CPyPtr)&((PyListObject *)cpy_r_r37)->ob_item;
    cpy_r_r39 = *(CPyPtr *)cpy_r_r38;
    *(PyObject * *)cpy_r_r39 = cpy_r_r36;
    cpy_r_r40 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_line;
    CPyTagged_INCREF(cpy_r_r40);
    cpy_r_r41 = NULL;
    cpy_r_r42 = NULL;
    cpy_r_r43 = CPyDef_builder___IRBuilder___py_call(cpy_r_builder, cpy_r_cls_meth, cpy_r_r37, cpy_r_r40, cpy_r_r41, cpy_r_r42);
    CPy_DECREF(cpy_r_cls_meth);
    CPy_DECREF(cpy_r_r37);
    CPyTagged_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 477, CPyStatic_function___globals);
        goto CPyL38;
    }
    cpy_r_func_reg = cpy_r_r43;
    goto CPyL34;
CPyL26: ;
    cpy_r_r44 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r45 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r44)->_func_to_decl;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = CPyDict_GetItem(cpy_r_r45, cpy_r_fdef);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 479, CPyStatic_function___globals);
        goto CPyL40;
    }
    if (likely(Py_TYPE(cpy_r_r46) == CPyType_func_ir___FuncDecl))
        cpy_r_r47 = cpy_r_r46;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 479, CPyStatic_function___globals, "mypyc.ir.func_ir.FuncDecl", cpy_r_r46);
        goto CPyL40;
    }
    cpy_r_r48 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r47)->_kind;
    cpy_r_r49 = cpy_r_r48 == 2;
    CPy_DECREF(cpy_r_r47);
    if (!cpy_r_r49) goto CPyL34;
    cpy_r_r50 = CPyStatics[4866]; /* 'builtins.staticmethod' */
    cpy_r_r51 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_line;
    CPyTagged_INCREF(cpy_r_r51);
    cpy_r_r52 = CPyDef_builder___IRBuilder___load_module_attr_by_fullname(cpy_r_builder, cpy_r_r50, cpy_r_r51);
    CPyTagged_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 480, CPyStatic_function___globals);
        goto CPyL40;
    }
    cpy_r_stat_meth = cpy_r_r52;
    if (likely(cpy_r_func_reg != Py_None))
        cpy_r_r53 = cpy_r_func_reg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 481, CPyStatic_function___globals, "mypyc.ir.ops.Value", cpy_r_func_reg);
        goto CPyL45;
    }
    cpy_r_r54 = PyList_New(1);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 481, CPyStatic_function___globals);
        goto CPyL46;
    }
    cpy_r_r55 = (CPyPtr)&((PyListObject *)cpy_r_r54)->ob_item;
    cpy_r_r56 = *(CPyPtr *)cpy_r_r55;
    *(PyObject * *)cpy_r_r56 = cpy_r_r53;
    cpy_r_r57 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_line;
    CPyTagged_INCREF(cpy_r_r57);
    cpy_r_r58 = NULL;
    cpy_r_r59 = NULL;
    cpy_r_r60 = CPyDef_builder___IRBuilder___py_call(cpy_r_builder, cpy_r_stat_meth, cpy_r_r54, cpy_r_r57, cpy_r_r58, cpy_r_r59);
    CPy_DECREF(cpy_r_stat_meth);
    CPy_DECREF(cpy_r_r54);
    CPyTagged_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 481, CPyStatic_function___globals);
        goto CPyL38;
    }
    cpy_r_func_reg = cpy_r_r60;
CPyL34: ;
    if (likely(cpy_r_func_reg != Py_None))
        cpy_r_r61 = cpy_r_func_reg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 483, CPyStatic_function___globals, "mypyc.ir.ops.Value", cpy_r_func_reg);
        goto CPyL38;
    }
    cpy_r_r62 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_line;
    CPyTagged_INCREF(cpy_r_r62);
    cpy_r_r63 = CPyDef_builder___IRBuilder___add_to_non_ext_dict(cpy_r_builder, cpy_r_non_ext, cpy_r_name, cpy_r_r61, cpy_r_r62);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r61);
    CPyTagged_DECREF(cpy_r_r62);
    if (unlikely(cpy_r_r63 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 483, CPyStatic_function___globals);
        goto CPyL37;
    }
    return 1;
CPyL37: ;
    cpy_r_r64 = 2;
    return cpy_r_r64;
CPyL38: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL37;
CPyL39: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_func_ir);
    CPy_DECREF(cpy_r_func_reg);
    goto CPyL4;
CPyL40: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_func_reg);
    goto CPyL37;
CPyL41: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_prop);
    goto CPyL37;
CPyL42: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_prop);
    CPy_DecRef(cpy_r_r19);
    goto CPyL37;
CPyL43: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_cls_meth);
    goto CPyL37;
CPyL44: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_cls_meth);
    CPy_DecRef(cpy_r_r36);
    goto CPyL37;
CPyL45: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_stat_meth);
    goto CPyL37;
CPyL46: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_stat_meth);
    CPy_DecRef(cpy_r_r53);
    goto CPyL37;
}

PyObject *CPyPy_function___handle_non_ext_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "non_ext", "cdef", "fdef", 0};
    static CPyArg_Parser parser = {"OOOO:handle_non_ext_method", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_non_ext;
    PyObject *obj_cdef;
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_non_ext, &obj_cdef, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_non_ext;
    if (likely(Py_TYPE(obj_non_ext) == CPyType_class_ir___NonExtClassInfo))
        arg_non_ext = obj_non_ext;
    else {
        CPy_TypeError("mypyc.ir.class_ir.NonExtClassInfo", obj_non_ext); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    char retval = CPyDef_function___handle_non_ext_method(arg_builder, arg_non_ext, arg_cdef, arg_fdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "handle_non_ext_method", 456, CPyStatic_function___globals);
    return NULL;
}

char CPyDef_function___calculate_arg_defaults(PyObject *cpy_r_builder, PyObject *cpy_r_fn_info, PyObject *cpy_r_func_reg, PyObject *cpy_r_symtable) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_fitem;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyPtr cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_value;
    char cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_name;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    CPyTagged cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyTagged cpy_r_r56;
    char cpy_r_r57;
    cpy_r_r0 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_fitem;
    CPy_INCREF(cpy_r_r0);
    cpy_r_fitem = cpy_r_r0;
    cpy_r_r1 = ((mypy___nodes___FuncItemObject *)cpy_r_fitem)->_arguments;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "calculate_arg_defaults", "FuncItem", "arguments", 499, CPyStatic_function___globals);
        goto CPyL37;
    }
    CPy_INCREF(cpy_r_r1);
CPyL1: ;
    cpy_r_r2 = 0;
CPyL2: ;
    cpy_r_r3 = (CPyPtr)&((PyVarObject *)cpy_r_r1)->ob_size;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = (Py_ssize_t)cpy_r_r2 < (Py_ssize_t)cpy_r_r5;
    if (!cpy_r_r6) goto CPyL38;
    cpy_r_r7 = CPyList_GetItemUnsafe(cpy_r_r1, cpy_r_r2);
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_nodes___Argument))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 499, CPyStatic_function___globals, "mypy.nodes.Argument", cpy_r_r7);
        goto CPyL39;
    }
    cpy_r_arg = cpy_r_r8;
    cpy_r_r9 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_initializer;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_r9 != cpy_r_r10;
    CPy_DECREF(cpy_r_r9);
    if (!cpy_r_r11) goto CPyL40;
    cpy_r_r12 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_initializer;
    CPy_INCREF(cpy_r_r12);
    if (likely(cpy_r_r12 != Py_None))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 501, CPyStatic_function___globals, "mypy.nodes.Expression", cpy_r_r12);
        goto CPyL41;
    }
    cpy_r_r14 = CPyDef_irbuild___util___is_constant(cpy_r_r13);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 501, CPyStatic_function___globals);
        goto CPyL41;
    }
    if (cpy_r_r14) goto CPyL40;
    cpy_r_r15 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_initializer;
    CPy_INCREF(cpy_r_r15);
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 503, CPyStatic_function___globals, "mypy.nodes.Expression", cpy_r_r15);
        goto CPyL41;
    }
    cpy_r_r17 = 2;
    cpy_r_r18 = CPyDef_builder___IRBuilder___accept(cpy_r_builder, cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 503, CPyStatic_function___globals);
        goto CPyL41;
    }
    if (likely(cpy_r_r18 != Py_None))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 503, CPyStatic_function___globals, "mypyc.ir.ops.Value", cpy_r_r18);
        goto CPyL41;
    }
    cpy_r_r20 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPyDict_GetItem(cpy_r_symtable, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 503, CPyStatic_function___globals);
        goto CPyL42;
    }
    if (Py_TYPE(cpy_r_r21) == CPyType_targets___AssignmentTargetRegister)
        cpy_r_r22 = cpy_r_r21;
    else {
        cpy_r_r22 = NULL;
    }
    if (cpy_r_r22 != NULL) goto __LL10224;
    if (Py_TYPE(cpy_r_r21) == CPyType_targets___AssignmentTargetAttr)
        cpy_r_r22 = cpy_r_r21;
    else {
        cpy_r_r22 = NULL;
    }
    if (cpy_r_r22 != NULL) goto __LL10224;
    CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 503, CPyStatic_function___globals, "union[mypyc.irbuild.targets.AssignmentTargetRegister, mypyc.irbuild.targets.AssignmentTargetAttr]", cpy_r_r21);
    goto CPyL42;
__LL10224: ;
    cpy_r_r23 = (PyObject *)CPyType_targets___AssignmentTargetRegister;
    cpy_r_r24 = (CPyPtr)&((PyObject *)cpy_r_r22)->ob_type;
    cpy_r_r25 = *(PyObject * *)cpy_r_r24;
    cpy_r_r26 = cpy_r_r25 == cpy_r_r23;
    if (!cpy_r_r26) goto CPyL16;
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_targets___AssignmentTargetRegister))
        cpy_r_r27 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 503, CPyStatic_function___globals, "mypyc.irbuild.targets.AssignmentTargetRegister", cpy_r_r22);
        goto CPyL42;
    }
    cpy_r_r28 = ((mypyc___irbuild___targets___AssignmentTargetRegisterObject *)cpy_r_r27)->_type;
    CPy_INCREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r29 = cpy_r_r28;
    goto CPyL18;
CPyL16: ;
    if (likely(Py_TYPE(cpy_r_r22) == CPyType_targets___AssignmentTargetAttr))
        cpy_r_r30 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 503, CPyStatic_function___globals, "mypyc.irbuild.targets.AssignmentTargetAttr", cpy_r_r22);
        goto CPyL42;
    }
    cpy_r_r31 = ((mypyc___irbuild___targets___AssignmentTargetAttrObject *)cpy_r_r30)->_type;
    CPy_INCREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r29 = cpy_r_r31;
CPyL18: ;
    cpy_r_r32 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_line;
    CPyTagged_INCREF(cpy_r_r32);
    cpy_r_r33 = 2;
    cpy_r_r34 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_r19, cpy_r_r29, cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r29);
    CPyTagged_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 502, CPyStatic_function___globals);
        goto CPyL41;
    }
    cpy_r_value = cpy_r_r34;
    cpy_r_r35 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_fn_info)->_is_nested;
    if (cpy_r_r35) goto CPyL27;
CPyL20: ;
    cpy_r_r36 = CPY_GET_ATTR(cpy_r_fitem, CPyType_nodes___FuncItem, 7, mypy___nodes___FuncItemObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 506, CPyStatic_function___globals);
        goto CPyL43;
    }
CPyL21: ;
    cpy_r_r37 = CPyStatics[224]; /* '.' */
    cpy_r_r38 = PyUnicode_Concat(cpy_r_r36, cpy_r_r37);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 506, CPyStatic_function___globals);
        goto CPyL43;
    }
    cpy_r_r39 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    CPy_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r40 = CPY_GET_ATTR(cpy_r_r39, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 506, CPyStatic_function___globals);
        goto CPyL44;
    }
CPyL23: ;
    cpy_r_r41 = PyUnicode_Concat(cpy_r_r38, cpy_r_r40);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 506, CPyStatic_function___globals);
        goto CPyL45;
    }
    cpy_r_name = cpy_r_r41;
    cpy_r_r42 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "calculate_arg_defaults", "IRBuilder", "module_name", 507, CPyStatic_function___globals);
        goto CPyL46;
    }
    CPy_INCREF(cpy_r_r42);
CPyL25: ;
    cpy_r_r43 = NULL;
    cpy_r_r44 = CPY_INT_TAG;
    cpy_r_r45 = CPyDef_ops___InitStatic(cpy_r_value, cpy_r_name, cpy_r_r42, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 507, CPyStatic_function___globals);
        goto CPyL39;
    }
    cpy_r_r46 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 507, CPyStatic_function___globals);
        goto CPyL39;
    } else
        goto CPyL47;
CPyL27: ;
    cpy_r_r47 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r48 = cpy_r_func_reg != cpy_r_r47;
    if (cpy_r_r48) {
        goto CPyL30;
    } else
        goto CPyL48;
CPyL28: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r49 = 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 509, CPyStatic_function___globals);
        goto CPyL36;
    }
    CPy_Unreachable();
CPyL30: ;
    CPy_INCREF(cpy_r_func_reg);
    if (likely(cpy_r_func_reg != Py_None))
        cpy_r_r50 = cpy_r_func_reg;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 510, CPyStatic_function___globals, "mypyc.ir.ops.Value", cpy_r_func_reg);
        goto CPyL43;
    }
    cpy_r_r51 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_variable;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52 = CPY_GET_ATTR(cpy_r_r51, CPyType_nodes___Var, 6, mypy___nodes___VarObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 510, CPyStatic_function___globals);
        goto CPyL49;
    }
CPyL32: ;
    cpy_r_r53 = ((mypy___nodes___ArgumentObject *)cpy_r_arg)->_line;
    CPyTagged_INCREF(cpy_r_r53);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r54 = CPyDef_ops___SetAttr(cpy_r_r50, cpy_r_r52, cpy_r_value, cpy_r_r53);
    CPy_DECREF(cpy_r_r50);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_value);
    CPyTagged_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 510, CPyStatic_function___globals);
        goto CPyL39;
    }
    cpy_r_r55 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r54);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 510, CPyStatic_function___globals);
        goto CPyL39;
    } else
        goto CPyL50;
CPyL34: ;
    cpy_r_r56 = cpy_r_r2 + 2;
    cpy_r_r2 = cpy_r_r56;
    goto CPyL2;
CPyL35: ;
    return 1;
CPyL36: ;
    cpy_r_r57 = 2;
    return cpy_r_r57;
CPyL37: ;
    CPy_DecRef(cpy_r_fitem);
    goto CPyL36;
CPyL38: ;
    CPy_DECREF(cpy_r_fitem);
    CPy_DECREF(cpy_r_r1);
    goto CPyL35;
CPyL39: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_r1);
    goto CPyL36;
CPyL40: ;
    CPy_DECREF(cpy_r_arg);
    goto CPyL34;
CPyL41: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_arg);
    goto CPyL36;
CPyL42: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_r19);
    goto CPyL36;
CPyL43: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_value);
    goto CPyL36;
CPyL44: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r38);
    goto CPyL36;
CPyL45: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_value);
    goto CPyL36;
CPyL46: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_name);
    goto CPyL36;
CPyL47: ;
    CPy_DECREF(cpy_r_r46);
    goto CPyL34;
CPyL48: ;
    CPy_DECREF(cpy_r_fitem);
    CPy_DECREF(cpy_r_r1);
    CPy_DECREF(cpy_r_arg);
    CPy_DECREF(cpy_r_value);
    goto CPyL28;
CPyL49: ;
    CPy_DecRef(cpy_r_fitem);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_arg);
    CPy_DecRef(cpy_r_value);
    CPy_DecRef(cpy_r_r50);
    goto CPyL36;
CPyL50: ;
    CPy_DECREF(cpy_r_r55);
    goto CPyL34;
}

PyObject *CPyPy_function___calculate_arg_defaults(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fn_info", "func_reg", "symtable", 0};
    static CPyArg_Parser parser = {"OOOO:calculate_arg_defaults", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fn_info;
    PyObject *obj_func_reg;
    PyObject *obj_symtable;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fn_info, &obj_func_reg, &obj_symtable)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fn_info;
    if (likely(Py_TYPE(obj_fn_info) == CPyType_context___FuncInfo))
        arg_fn_info = obj_fn_info;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_fn_info); 
        goto fail;
    }
    PyObject *arg_func_reg;
    if (PyObject_TypeCheck(obj_func_reg, CPyType_ops___Value))
        arg_func_reg = obj_func_reg;
    else {
        arg_func_reg = NULL;
    }
    if (arg_func_reg != NULL) goto __LL10225;
    if (obj_func_reg == Py_None)
        arg_func_reg = obj_func_reg;
    else {
        arg_func_reg = NULL;
    }
    if (arg_func_reg != NULL) goto __LL10225;
    CPy_TypeError("mypyc.ir.ops.Value or None", obj_func_reg); 
    goto fail;
__LL10225: ;
    PyObject *arg_symtable;
    if (likely(PyDict_Check(obj_symtable)))
        arg_symtable = obj_symtable;
    else {
        CPy_TypeError("dict", obj_symtable); 
        goto fail;
    }
    char retval = CPyDef_function___calculate_arg_defaults(arg_builder, arg_fn_info, arg_func_reg, arg_symtable);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "calculate_arg_defaults", 486, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___gen_func_ns(PyObject *cpy_r_builder) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
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
    int32_t cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    cpy_r_r0 = CPyStatics[755]; /* '_' */
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ns", 515, CPyStatic_function___globals);
        goto CPyL24;
    }
    cpy_r_r2 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_infos;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 0;
CPyL2: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL25;
    cpy_r_r8 = CPyList_GetItemUnsafe(cpy_r_r2, cpy_r_r3);
    if (likely(Py_TYPE(cpy_r_r8) == CPyType_context___FuncInfo))
        cpy_r_r9 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_ns", 515, CPyStatic_function___globals, "mypyc.irbuild.context.FuncInfo", cpy_r_r8);
        goto CPyL26;
    }
    cpy_r_info = cpy_r_r9;
    cpy_r_r10 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_info)->_name;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyStr_IsTrue(cpy_r_r10);
    if (cpy_r_r11) goto CPyL27;
    cpy_r_r12 = cpy_r_r10;
    goto CPyL10;
CPyL6: ;
    cpy_r_r13 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_info)->_name;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPyStatics[17]; /* '<module>' */
    cpy_r_r15 = PyUnicode_Compare(cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 == -1;
    if (!cpy_r_r16) goto CPyL9;
    cpy_r_r17 = PyErr_Occurred();
    cpy_r_r18 = cpy_r_r17 != NULL;
    if (!cpy_r_r18) goto CPyL9;
    cpy_r_r19 = CPy_KeepPropagating();
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ns", 518, CPyStatic_function___globals);
        goto CPyL28;
    }
CPyL9: ;
    cpy_r_r20 = cpy_r_r15 != 0;
    cpy_r_r21 = cpy_r_r20 ? Py_True : Py_False;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r12 = cpy_r_r21;
CPyL10: ;
    cpy_r_r22 = PyObject_IsTrue(cpy_r_r12);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ns", -1, CPyStatic_function___globals);
        goto CPyL28;
    }
    cpy_r_r24 = cpy_r_r22;
    if (!cpy_r_r24) goto CPyL29;
    cpy_r_r25 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_info)->_name;
    CPy_INCREF(cpy_r_r25);
    cpy_r_r26 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_info)->_class_name;
    CPy_INCREF(cpy_r_r26);
    cpy_r_r27 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r28 = cpy_r_r26 != cpy_r_r27;
    if (!cpy_r_r28) goto CPyL30;
    if (likely(cpy_r_r26 != Py_None))
        cpy_r_r29 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_ns", 516, CPyStatic_function___globals, "str", cpy_r_r26);
        goto CPyL31;
    }
    cpy_r_r30 = CPyStr_IsTrue(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (cpy_r_r30) {
        goto CPyL16;
    } else
        goto CPyL32;
CPyL15: ;
    cpy_r_r31 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = cpy_r_r31;
    goto CPyL19;
CPyL16: ;
    cpy_r_r33 = CPyStatics[755]; /* '_' */
    cpy_r_r34 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_info)->_class_name;
    CPy_INCREF(cpy_r_r34);
    CPy_DECREF(cpy_r_info);
    if (likely(cpy_r_r34 != Py_None))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_func_ns", 516, CPyStatic_function___globals, "str", cpy_r_r34);
        goto CPyL33;
    }
    cpy_r_r36 = PyUnicode_Concat(cpy_r_r33, cpy_r_r35);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ns", 516, CPyStatic_function___globals);
        goto CPyL33;
    }
    cpy_r_r32 = cpy_r_r36;
CPyL19: ;
    cpy_r_r37 = PyUnicode_Concat(cpy_r_r25, cpy_r_r32);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ns", 516, CPyStatic_function___globals);
        goto CPyL26;
    }
    cpy_r_r38 = PyList_Append(cpy_r_r1, cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ns", 515, CPyStatic_function___globals);
        goto CPyL26;
    }
CPyL21: ;
    cpy_r_r40 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r40;
    goto CPyL2;
CPyL22: ;
    cpy_r_r41 = PyUnicode_Join(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ns", 515, CPyStatic_function___globals);
        goto CPyL24;
    }
    return cpy_r_r41;
CPyL24: ;
    cpy_r_r42 = NULL;
    return cpy_r_r42;
CPyL25: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL22;
CPyL26: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL24;
CPyL27: ;
    CPy_DECREF(cpy_r_r10);
    goto CPyL6;
CPyL28: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_info);
    goto CPyL24;
CPyL29: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL21;
CPyL30: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_r26);
    goto CPyL15;
CPyL31: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r25);
    goto CPyL24;
CPyL32: ;
    CPy_DECREF(cpy_r_info);
    goto CPyL15;
CPyL33: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r25);
    goto CPyL24;
}

PyObject *CPyPy_function___gen_func_ns(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", 0};
    static CPyArg_Parser parser = {"O:gen_func_ns", kwlist, 0};
    PyObject *obj_builder;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_builder)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *retval = CPyDef_function___gen_func_ns(arg_builder);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "gen_func_ns", 513, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___load_decorated_func(PyObject *cpy_r_builder, PyObject *cpy_r_fdef, PyObject *cpy_r_orig_func_reg) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_decorators;
    PyObject *cpy_r_func_reg;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    int64_t cpy_r_r9;
    char cpy_r_r10;
    int64_t cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    CPyPtr cpy_r_r18;
    int64_t cpy_r_r19;
    CPyTagged cpy_r_r20;
    int64_t cpy_r_r21;
    char cpy_r_r22;
    int64_t cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_d;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_decorator;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    CPyPtr cpy_r_r40;
    CPyPtr cpy_r_r41;
    CPyTagged cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    cpy_r_r0 = CPyDef_function___is_decorated(cpy_r_builder, cpy_r_fdef);
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_decorated_func", 530, CPyStatic_function___globals);
        goto CPyL26;
    }
    if (cpy_r_r0) goto CPyL3;
    CPy_INCREF(cpy_r_orig_func_reg);
    return cpy_r_orig_func_reg;
CPyL3: ;
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fdefs_to_decorators;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDict_GetItem(cpy_r_r1, cpy_r_fdef);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_decorated_func", 535, CPyStatic_function___globals);
        goto CPyL26;
    }
    if (likely(PyList_Check(cpy_r_r2)))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "load_decorated_func", 535, CPyStatic_function___globals, "list", cpy_r_r2);
        goto CPyL26;
    }
    cpy_r_decorators = cpy_r_r3;
    CPy_INCREF(cpy_r_orig_func_reg);
    cpy_r_func_reg = cpy_r_orig_func_reg;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_decorators)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = CPyTagged_Subtract(cpy_r_r6, 2);
    cpy_r_r8 = cpy_r_r7;
CPyL6: ;
    cpy_r_r9 = cpy_r_r8 & 1;
    cpy_r_r10 = cpy_r_r9 == 0;
    cpy_r_r11 = 0 & 1;
    cpy_r_r12 = cpy_r_r11 == 0;
    cpy_r_r13 = cpy_r_r10 & cpy_r_r12;
    if (!cpy_r_r13) goto CPyL8;
    cpy_r_r14 = (Py_ssize_t)cpy_r_r8 >= (Py_ssize_t)0;
    cpy_r_r15 = cpy_r_r14;
    goto CPyL9;
CPyL8: ;
    cpy_r_r16 = CPyTagged_IsLt_(cpy_r_r8, 0);
    cpy_r_r17 = cpy_r_r16 ^ 1;
    cpy_r_r15 = cpy_r_r17;
CPyL9: ;
    if (!cpy_r_r15) goto CPyL27;
    cpy_r_r18 = (CPyPtr)&((PyVarObject *)cpy_r_decorators)->ob_size;
    cpy_r_r19 = *(int64_t *)cpy_r_r18;
    cpy_r_r20 = cpy_r_r19 << 1;
    cpy_r_r21 = cpy_r_r8 & 1;
    cpy_r_r22 = cpy_r_r21 == 0;
    cpy_r_r23 = cpy_r_r20 & 1;
    cpy_r_r24 = cpy_r_r23 == 0;
    cpy_r_r25 = cpy_r_r22 & cpy_r_r24;
    if (!cpy_r_r25) goto CPyL12;
    cpy_r_r26 = (Py_ssize_t)cpy_r_r8 < (Py_ssize_t)cpy_r_r20;
    cpy_r_r27 = cpy_r_r26;
    goto CPyL13;
CPyL12: ;
    cpy_r_r28 = CPyTagged_IsLt_(cpy_r_r8, cpy_r_r20);
    cpy_r_r27 = cpy_r_r28;
CPyL13: ;
    if (!cpy_r_r27) goto CPyL27;
    CPyTagged_INCREF(cpy_r_r8);
    cpy_r_r29 = CPyTagged_StealAsObject(cpy_r_r8);
    if (likely(PyLong_Check(cpy_r_r29)))
        cpy_r_r30 = CPyTagged_FromObject(cpy_r_r29);
    else {
        CPy_TypeError("short_int", cpy_r_r29); cpy_r_r30 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_decorated_func", 537, CPyStatic_function___globals);
        goto CPyL28;
    }
    cpy_r_r31 = CPyList_GetItemUnsafe(cpy_r_decorators, cpy_r_r30);
    if (likely(PyObject_TypeCheck(cpy_r_r31, CPyType_nodes___Expression)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "load_decorated_func", 537, CPyStatic_function___globals, "mypy.nodes.Expression", cpy_r_r31);
        goto CPyL28;
    }
    cpy_r_d = cpy_r_r32;
    cpy_r_r33 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_visitor;
    CPy_INCREF(cpy_r_r33);
    cpy_r_r34 = CPY_GET_METHOD_TRAIT(cpy_r_d, CPyType_nodes___Expression, 5, mypy___nodes___ExpressionObject, PyObject * (*)(PyObject *, PyObject *))(cpy_r_d, cpy_r_r33); /* accept */
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_d);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_decorated_func", 538, CPyStatic_function___globals);
        goto CPyL28;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r34, CPyType_ops___Value)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "load_decorated_func", 538, CPyStatic_function___globals, "mypyc.ir.ops.Value", cpy_r_r34);
        goto CPyL28;
    }
    cpy_r_decorator = cpy_r_r35;
    cpy_r_r36 = (PyObject *)CPyType_ops___Value;
    cpy_r_r37 = CPy_TypeCheck(cpy_r_decorator, cpy_r_r36);
    if (cpy_r_r37) {
        goto CPyL21;
    } else
        goto CPyL29;
CPyL19: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r38 = 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_decorated_func", 539, CPyStatic_function___globals);
        goto CPyL26;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r39 = PyList_New(1);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_decorated_func", 540, CPyStatic_function___globals);
        goto CPyL30;
    }
    cpy_r_r40 = (CPyPtr)&((PyListObject *)cpy_r_r39)->ob_item;
    cpy_r_r41 = *(CPyPtr *)cpy_r_r40;
    CPy_INCREF(cpy_r_func_reg);
    *(PyObject * *)cpy_r_r41 = cpy_r_func_reg;
    cpy_r_r42 = ((mypyc___ir___ops___ValueObject *)cpy_r_func_reg)->_line;
    CPyTagged_INCREF(cpy_r_r42);
    CPy_DECREF(cpy_r_func_reg);
    cpy_r_r43 = NULL;
    cpy_r_r44 = NULL;
    cpy_r_r45 = CPyDef_builder___IRBuilder___py_call(cpy_r_builder, cpy_r_decorator, cpy_r_r39, cpy_r_r42, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_decorator);
    CPy_DECREF(cpy_r_r39);
    CPyTagged_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_decorated_func", 540, CPyStatic_function___globals);
        goto CPyL31;
    }
    cpy_r_func_reg = cpy_r_r45;
    cpy_r_r46 = cpy_r_r8 + -2;
    CPyTagged_DECREF(cpy_r_r8);
    cpy_r_r8 = cpy_r_r46;
    goto CPyL6;
CPyL25: ;
    return cpy_r_func_reg;
CPyL26: ;
    cpy_r_r47 = NULL;
    return cpy_r_r47;
CPyL27: ;
    CPy_DECREF(cpy_r_decorators);
    CPyTagged_DECREF(cpy_r_r8);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_decorators);
    CPy_DecRef(cpy_r_func_reg);
    CPyTagged_DecRef(cpy_r_r8);
    goto CPyL26;
CPyL29: ;
    CPy_DECREF(cpy_r_decorators);
    CPy_DECREF(cpy_r_func_reg);
    CPyTagged_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_decorator);
    goto CPyL19;
CPyL30: ;
    CPy_DecRef(cpy_r_decorators);
    CPy_DecRef(cpy_r_func_reg);
    CPyTagged_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_decorator);
    goto CPyL26;
CPyL31: ;
    CPy_DecRef(cpy_r_decorators);
    CPyTagged_DecRef(cpy_r_r8);
    goto CPyL26;
}

PyObject *CPyPy_function___load_decorated_func(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fdef", "orig_func_reg", 0};
    static CPyArg_Parser parser = {"OOO:load_decorated_func", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fdef;
    PyObject *obj_orig_func_reg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fdef, &obj_orig_func_reg)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    PyObject *arg_orig_func_reg;
    if (likely(PyObject_TypeCheck(obj_orig_func_reg, CPyType_ops___Value)))
        arg_orig_func_reg = obj_orig_func_reg;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_orig_func_reg); 
        goto fail;
    }
    PyObject *retval = CPyDef_function___load_decorated_func(arg_builder, arg_fdef, arg_orig_func_reg);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "load_decorated_func", 522, CPyStatic_function___globals);
    return NULL;
}

char CPyDef_function___is_decorated(PyObject *cpy_r_builder, PyObject *cpy_r_fdef) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fdefs_to_decorators;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_fdef);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "is_decorated", 545, CPyStatic_function___globals);
        goto CPyL2;
    }
    cpy_r_r3 = cpy_r_r1;
    return cpy_r_r3;
CPyL2: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_function___is_decorated(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fdef", 0};
    static CPyArg_Parser parser = {"OO:is_decorated", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    char retval = CPyDef_function___is_decorated(arg_builder, arg_fdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "is_decorated", 544, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___gen_glue(PyObject *cpy_r_builder, PyObject *cpy_r_base_sig, PyObject *cpy_r_target, PyObject *cpy_r_cls, PyObject *cpy_r_base, PyObject *cpy_r_fdef, char cpy_r_do_py_ops) {
    char cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    if (cpy_r_do_py_ops != 2) goto CPyL2;
    cpy_r_do_py_ops = 0;
CPyL2: ;
    cpy_r_r0 = ((mypy___nodes___FuncItemObject *)cpy_r_fdef)->_is_property;
    if (!cpy_r_r0) goto CPyL5;
CPyL3: ;
    cpy_r_r1 = ((mypy___nodes___FuncItemObject *)cpy_r_fdef)->_line;
    CPyTagged_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_function___gen_glue_property(cpy_r_builder, cpy_r_base_sig, cpy_r_target, cpy_r_cls, cpy_r_base, cpy_r_r1, cpy_r_do_py_ops);
    CPyTagged_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue", 568, CPyStatic_function___globals);
        goto CPyL7;
    }
    return cpy_r_r2;
CPyL5: ;
    cpy_r_r3 = ((mypy___nodes___FuncItemObject *)cpy_r_fdef)->_line;
    CPyTagged_INCREF(cpy_r_r3);
    cpy_r_r4 = CPyDef_function___gen_glue_method(cpy_r_builder, cpy_r_base_sig, cpy_r_target, cpy_r_cls, cpy_r_base, cpy_r_r3, cpy_r_do_py_ops);
    CPyTagged_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue", 570, CPyStatic_function___globals);
        goto CPyL7;
    }
    return cpy_r_r4;
CPyL7: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
}

PyObject *CPyPy_function___gen_glue(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "base_sig", "target", "cls", "base", "fdef", "do_py_ops", 0};
    static CPyArg_Parser parser = {"OOOOOO|$O:gen_glue", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_base_sig;
    PyObject *obj_target;
    PyObject *obj_cls;
    PyObject *obj_base;
    PyObject *obj_fdef;
    PyObject *obj_do_py_ops = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_builder, &obj_base_sig, &obj_target, &obj_cls, &obj_base, &obj_fdef, &obj_do_py_ops)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_base_sig;
    if (likely(Py_TYPE(obj_base_sig) == CPyType_func_ir___FuncSignature))
        arg_base_sig = obj_base_sig;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_base_sig); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(Py_TYPE(obj_target) == CPyType_func_ir___FuncIR))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_target); 
        goto fail;
    }
    PyObject *arg_cls;
    if (likely(Py_TYPE(obj_cls) == CPyType_class_ir___ClassIR))
        arg_cls = obj_cls;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cls); 
        goto fail;
    }
    PyObject *arg_base;
    if (likely(Py_TYPE(obj_base) == CPyType_class_ir___ClassIR))
        arg_base = obj_base;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_base); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely((Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_fdef) == CPyType_nodes___LambdaExpr)))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncItem", obj_fdef); 
        goto fail;
    }
    char arg_do_py_ops;
    if (obj_do_py_ops == NULL) {
        arg_do_py_ops = 2;
    } else if (unlikely(!PyBool_Check(obj_do_py_ops))) {
        CPy_TypeError("bool", obj_do_py_ops); goto fail;
    } else
        arg_do_py_ops = obj_do_py_ops == Py_True;
    PyObject *retval = CPyDef_function___gen_glue(arg_builder, arg_base_sig, arg_target, arg_cls, arg_base, arg_fdef, arg_do_py_ops);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue", 548, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___get_args(PyObject *cpy_r_builder, PyObject *cpy_r_rt_args, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    tuple_T2OO cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_fake_vars;
    CPyPtr cpy_r_r13;
    int64_t cpy_r_r14;
    PyObject *cpy_r_r15;
    CPyTagged cpy_r_r16;
    CPyPtr cpy_r_r17;
    int64_t cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    tuple_T2OO cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_var;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_type;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_arg_2;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject **cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject **cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_arg_names;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_arg_3;
    PyObject *cpy_r_r57;
    int32_t cpy_r_r58;
    char cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_arg_kinds;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject **cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    cpy_r_r0 = PyList_New(0);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 581, CPyStatic_function___globals);
        goto CPyL40;
    }
    cpy_r_r1 = PyObject_GetIter(cpy_r_rt_args);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 581, CPyStatic_function___globals);
        goto CPyL41;
    }
CPyL2: ;
    cpy_r_r2 = PyIter_Next(cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL42;
    if (likely(Py_TYPE(cpy_r_r2) == CPyType_func_ir___RuntimeArg))
        cpy_r_r3 = cpy_r_r2;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "get_args", 581, CPyStatic_function___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r2);
        goto CPyL43;
    }
    cpy_r_arg = cpy_r_r3;
    cpy_r_r4 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_name;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = NULL;
    cpy_r_r6 = CPyDef_nodes___Var(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 581, CPyStatic_function___globals);
        goto CPyL44;
    }
    cpy_r_r7 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_type;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r8.f0 = cpy_r_r6;
    cpy_r_r8.f1 = cpy_r_r7;
    CPy_INCREF(cpy_r_r8.f0);
    CPy_INCREF(cpy_r_r8.f1);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = PyTuple_New(2);
    if (unlikely(cpy_r_r9 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10226 = cpy_r_r8.f0;
    PyTuple_SET_ITEM(cpy_r_r9, 0, __tmp10226);
    PyObject *__tmp10227 = cpy_r_r8.f1;
    PyTuple_SET_ITEM(cpy_r_r9, 1, __tmp10227);
    cpy_r_r10 = PyList_Append(cpy_r_r0, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 581, CPyStatic_function___globals);
        goto CPyL43;
    } else
        goto CPyL2;
CPyL6: ;
    cpy_r_r12 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 581, CPyStatic_function___globals);
        goto CPyL41;
    }
    cpy_r_fake_vars = cpy_r_r0;
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_fake_vars)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    cpy_r_r15 = PyList_New(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 582, CPyStatic_function___globals);
        goto CPyL45;
    }
    cpy_r_r16 = 0;
CPyL9: ;
    cpy_r_r17 = (CPyPtr)&((PyVarObject *)cpy_r_fake_vars)->ob_size;
    cpy_r_r18 = *(int64_t *)cpy_r_r17;
    cpy_r_r19 = cpy_r_r18 << 1;
    cpy_r_r20 = (Py_ssize_t)cpy_r_r16 < (Py_ssize_t)cpy_r_r19;
    if (!cpy_r_r20) goto CPyL46;
    cpy_r_r21 = CPyList_GetItemUnsafe(cpy_r_fake_vars, cpy_r_r16);
    PyObject *__tmp10228;
    if (unlikely(!(PyTuple_Check(cpy_r_r21) && PyTuple_GET_SIZE(cpy_r_r21) == 2))) {
        __tmp10228 = NULL;
        goto __LL10229;
    }
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r21, 0)) == CPyType_nodes___Var))
        __tmp10228 = PyTuple_GET_ITEM(cpy_r_r21, 0);
    else {
        __tmp10228 = NULL;
    }
    if (__tmp10228 == NULL) goto __LL10229;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r21, 1), CPyType_rtypes___RType)))
        __tmp10228 = PyTuple_GET_ITEM(cpy_r_r21, 1);
    else {
        __tmp10228 = NULL;
    }
    if (__tmp10228 == NULL) goto __LL10229;
    __tmp10228 = cpy_r_r21;
__LL10229: ;
    if (unlikely(__tmp10228 == NULL)) {
        CPy_TypeError("tuple[mypy.nodes.Var, mypyc.ir.rtypes.RType]", cpy_r_r21); cpy_r_r22 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10230 = PyTuple_GET_ITEM(cpy_r_r21, 0);
        CPy_INCREF(__tmp10230);
        PyObject *__tmp10231;
        if (likely(Py_TYPE(__tmp10230) == CPyType_nodes___Var))
            __tmp10231 = __tmp10230;
        else {
            CPy_TypeError("mypy.nodes.Var", __tmp10230); 
            __tmp10231 = NULL;
        }
        cpy_r_r22.f0 = __tmp10231;
        PyObject *__tmp10232 = PyTuple_GET_ITEM(cpy_r_r21, 1);
        CPy_INCREF(__tmp10232);
        PyObject *__tmp10233;
        if (likely(PyObject_TypeCheck(__tmp10232, CPyType_rtypes___RType)))
            __tmp10233 = __tmp10232;
        else {
            CPy_TypeError("mypyc.ir.rtypes.RType", __tmp10232); 
            __tmp10233 = NULL;
        }
        cpy_r_r22.f1 = __tmp10233;
    }
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r22.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 582, CPyStatic_function___globals);
        goto CPyL47;
    }
    cpy_r_r23 = cpy_r_r22.f0;
    CPy_INCREF(cpy_r_r23);
    cpy_r_var = cpy_r_r23;
    cpy_r_r24 = cpy_r_r22.f1;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r22.f0);
    CPy_DECREF(cpy_r_r22.f1);
    cpy_r_type = cpy_r_r24;
    cpy_r_r25 = CPyDef_builder___IRBuilder___add_local_reg(cpy_r_builder, cpy_r_var, cpy_r_type, 1);
    CPy_DECREF(cpy_r_var);
    CPy_DECREF(cpy_r_type);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 583, CPyStatic_function___globals);
        goto CPyL47;
    }
    cpy_r_r26 = 2;
    cpy_r_r27 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_r25, cpy_r_line, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 583, CPyStatic_function___globals);
        goto CPyL47;
    }
    cpy_r_r28 = CPyList_SetItemUnsafe(cpy_r_r15, cpy_r_r16, cpy_r_r27);
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 582, CPyStatic_function___globals);
        goto CPyL47;
    }
    cpy_r_r29 = cpy_r_r16 + 2;
    cpy_r_r16 = cpy_r_r29;
    goto CPyL9;
CPyL15: ;
    cpy_r_args = cpy_r_r15;
    cpy_r_r30 = PyList_New(0);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 586, CPyStatic_function___globals);
        goto CPyL48;
    }
    cpy_r_r31 = PyObject_GetIter(cpy_r_rt_args);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 586, CPyStatic_function___globals);
        goto CPyL49;
    }
CPyL17: ;
    cpy_r_r32 = PyIter_Next(cpy_r_r31);
    if (cpy_r_r32 == NULL) goto CPyL50;
    if (likely(Py_TYPE(cpy_r_r32) == CPyType_func_ir___RuntimeArg))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "get_args", 586, CPyStatic_function___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r32);
        goto CPyL51;
    }
    cpy_r_arg_2 = cpy_r_r33;
    cpy_r_r34 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg_2)->_kind;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = CPyStatics[54]; /* 'is_named' */
    PyObject *cpy_r_r36[1] = {cpy_r_r34};
    cpy_r_r37 = (PyObject **)&cpy_r_r36;
    cpy_r_r38 = PyObject_VectorcallMethod(cpy_r_r35, cpy_r_r37, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 587, CPyStatic_function___globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_r34);
    if (unlikely(!PyBool_Check(cpy_r_r38))) {
        CPy_TypeError("bool", cpy_r_r38); cpy_r_r39 = 2;
    } else
        cpy_r_r39 = cpy_r_r38 == Py_True;
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 587, CPyStatic_function___globals);
        goto CPyL53;
    }
    if (cpy_r_r39) goto CPyL26;
    cpy_r_r40 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg_2)->_kind;
    CPy_INCREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[1075]; /* 'is_optional' */
    PyObject *cpy_r_r42[1] = {cpy_r_r40};
    cpy_r_r43 = (PyObject **)&cpy_r_r42;
    cpy_r_r44 = PyObject_VectorcallMethod(cpy_r_r41, cpy_r_r43, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 587, CPyStatic_function___globals);
        goto CPyL54;
    }
    CPy_DECREF(cpy_r_r40);
    if (unlikely(!PyBool_Check(cpy_r_r44))) {
        CPy_TypeError("bool", cpy_r_r44); cpy_r_r45 = 2;
    } else
        cpy_r_r45 = cpy_r_r44 == Py_True;
    CPy_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 587, CPyStatic_function___globals);
        goto CPyL53;
    }
    if (!cpy_r_r45) goto CPyL55;
    cpy_r_r46 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg_2)->_pos_only;
    if (cpy_r_r46) goto CPyL55;
CPyL26: ;
    cpy_r_r47 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg_2)->_name;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_arg_2);
    cpy_r_r48 = cpy_r_r47;
    goto CPyL28;
CPyL27: ;
    cpy_r_r49 = Py_None;
    CPy_INCREF(cpy_r_r49);
    cpy_r_r48 = cpy_r_r49;
CPyL28: ;
    cpy_r_r50 = PyList_Append(cpy_r_r30, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 586, CPyStatic_function___globals);
        goto CPyL51;
    } else
        goto CPyL17;
CPyL29: ;
    cpy_r_r52 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 586, CPyStatic_function___globals);
        goto CPyL49;
    }
    cpy_r_arg_names = cpy_r_r30;
    cpy_r_r53 = PyList_New(0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 590, CPyStatic_function___globals);
        goto CPyL56;
    }
    cpy_r_r54 = PyObject_GetIter(cpy_r_rt_args);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 590, CPyStatic_function___globals);
        goto CPyL57;
    }
CPyL32: ;
    cpy_r_r55 = PyIter_Next(cpy_r_r54);
    if (cpy_r_r55 == NULL) goto CPyL58;
    if (likely(Py_TYPE(cpy_r_r55) == CPyType_func_ir___RuntimeArg))
        cpy_r_r56 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "get_args", 590, CPyStatic_function___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r55);
        goto CPyL59;
    }
    cpy_r_arg_3 = cpy_r_r56;
    cpy_r_r57 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg_3)->_kind;
    CPy_INCREF(cpy_r_r57);
    CPy_DECREF(cpy_r_arg_3);
    cpy_r_r58 = PyList_Append(cpy_r_r53, cpy_r_r57);
    CPy_DECREF(cpy_r_r57);
    cpy_r_r59 = cpy_r_r58 >= 0;
    if (unlikely(!cpy_r_r59)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 590, CPyStatic_function___globals);
        goto CPyL59;
    } else
        goto CPyL32;
CPyL35: ;
    cpy_r_r60 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 590, CPyStatic_function___globals);
        goto CPyL57;
    }
    cpy_r_arg_kinds = cpy_r_r53;
    cpy_r_r61 = CPyStatic_function___globals;
    cpy_r_r62 = CPyStatics[8336]; /* 'ArgInfo' */
    cpy_r_r63 = CPyDict_GetItem(cpy_r_r61, cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 591, CPyStatic_function___globals);
        goto CPyL60;
    }
    PyObject *cpy_r_r64[3] = {cpy_r_args, cpy_r_arg_names, cpy_r_arg_kinds};
    cpy_r_r65 = (PyObject **)&cpy_r_r64;
    cpy_r_r66 = _PyObject_Vectorcall(cpy_r_r63, cpy_r_r65, 3, 0);
    CPy_DECREF(cpy_r_r63);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 591, CPyStatic_function___globals);
        goto CPyL60;
    }
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_arg_names);
    CPy_DECREF(cpy_r_arg_kinds);
    if (likely(PyTuple_Check(cpy_r_r66)))
        cpy_r_r67 = cpy_r_r66;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "get_args", 591, CPyStatic_function___globals, "tuple", cpy_r_r66);
        goto CPyL40;
    }
    return cpy_r_r67;
CPyL40: ;
    cpy_r_r68 = NULL;
    return cpy_r_r68;
CPyL41: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL40;
CPyL42: ;
    CPy_DECREF(cpy_r_r1);
    goto CPyL6;
CPyL43: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    goto CPyL40;
CPyL44: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_arg);
    goto CPyL40;
CPyL45: ;
    CPy_DecRef(cpy_r_fake_vars);
    goto CPyL40;
CPyL46: ;
    CPy_DECREF(cpy_r_fake_vars);
    goto CPyL15;
CPyL47: ;
    CPy_DecRef(cpy_r_fake_vars);
    CPy_DecRef(cpy_r_r15);
    goto CPyL40;
CPyL48: ;
    CPy_DecRef(cpy_r_args);
    goto CPyL40;
CPyL49: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r30);
    goto CPyL40;
CPyL50: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL29;
CPyL51: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    goto CPyL40;
CPyL52: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_arg_2);
    CPy_DecRef(cpy_r_r34);
    goto CPyL40;
CPyL53: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_arg_2);
    goto CPyL40;
CPyL54: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r31);
    CPy_DecRef(cpy_r_arg_2);
    CPy_DecRef(cpy_r_r40);
    goto CPyL40;
CPyL55: ;
    CPy_DECREF(cpy_r_arg_2);
    goto CPyL27;
CPyL56: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_names);
    goto CPyL40;
CPyL57: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_r53);
    goto CPyL40;
CPyL58: ;
    CPy_DECREF(cpy_r_r54);
    goto CPyL35;
CPyL59: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_r53);
    CPy_DecRef(cpy_r_r54);
    goto CPyL40;
CPyL60: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_arg_kinds);
    goto CPyL40;
}

PyObject *CPyPy_function___get_args(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "rt_args", "line", 0};
    static CPyArg_Parser parser = {"OOO:get_args", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_rt_args;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_rt_args, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_rt_args = obj_rt_args;
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_function___get_args(arg_builder, arg_rt_args, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "get_args", 579, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___gen_glue_method(PyObject *cpy_r_builder, PyObject *cpy_r_base_sig, PyObject *cpy_r_target, PyObject *cpy_r_cls, PyObject *cpy_r_base, CPyTagged cpy_r_line, char cpy_r_do_pycall) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_rt_args;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_arg_info;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_args;
    PyObject *cpy_r_arg_kinds;
    PyObject *cpy_r_arg_names;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_bitmap_args;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    CPyTagged cpy_r_r35;
    CPyTagged cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    CPyTagged cpy_r_r39;
    CPyTagged cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyTagged cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    CPyTagged cpy_r_r55;
    CPyPtr cpy_r_r56;
    int64_t cpy_r_r57;
    CPyTagged cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_kind;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    CPyTagged cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyTagged cpy_r_r72;
    CPyPtr cpy_r_r73;
    int64_t cpy_r_r74;
    CPyTagged cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject **cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    CPyTagged cpy_r_r86;
    PyObject *cpy_r_r87;
    CPyTagged cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_first;
    CPyTagged cpy_r_st;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_retval;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    CPyTagged cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    tuple_T5OOOOO cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_arg_regs;
    PyObject *cpy_r_r114;
    PyObject *cpy_r__;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_blocks;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_ret_type;
    PyObject *cpy_r_r117;
    CPyTagged cpy_r_r118;
    char cpy_r_r119;
    CPyTagged cpy_r_r120;
    CPyTagged cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    CPyTagged cpy_r_r135;
    char cpy_r_r136;
    char cpy_r_r137;
    char cpy_r_r138;
    PyObject *cpy_r_r139;
    CPyTagged cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_target)->_decl;
    cpy_r_r1 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r0)->_sig;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDef_function___check_native_override(cpy_r_builder, cpy_r_base_sig, cpy_r_r1, cpy_r_line);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 628, CPyStatic_function___globals);
        goto CPyL83;
    }
    cpy_r_r3 = NULL;
    cpy_r_r4 = CPyDef_builder___IRBuilder___enter(cpy_r_builder, cpy_r_r3);
    if (unlikely(cpy_r_r4 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 630, CPyStatic_function___globals);
        goto CPyL83;
    }
    cpy_r_r5 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_base_sig)->_ret_type;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_ret_types;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyList_SetItem(cpy_r_r6, -2, cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 631, CPyStatic_function___globals);
        goto CPyL83;
    }
    cpy_r_r8 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_base_sig)->_args;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = PySequence_List(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 633, CPyStatic_function___globals);
        goto CPyL83;
    }
    cpy_r_rt_args = cpy_r_r9;
    cpy_r_r10 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_target)->_decl;
    cpy_r_r11 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r10)->_kind;
    cpy_r_r12 = cpy_r_r11 == 0;
    if (!cpy_r_r12) goto CPyL10;
    cpy_r_r13 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_base_sig)->_args;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = CPySequenceTuple_GetItem(cpy_r_r13, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 635, CPyStatic_function___globals);
        goto CPyL84;
    }
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_func_ir___RuntimeArg))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_glue_method", 635, CPyStatic_function___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r14);
        goto CPyL84;
    }
    cpy_r_r16 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r15)->_name;
    CPy_INCREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    cpy_r_r17 = CPyDef_rtypes___RInstance(cpy_r_cls);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 635, CPyStatic_function___globals);
        goto CPyL85;
    }
    cpy_r_r18 = NULL;
    cpy_r_r19 = 2;
    cpy_r_r20 = CPyDef_func_ir___RuntimeArg(cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r16);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 635, CPyStatic_function___globals);
        goto CPyL84;
    }
    cpy_r_r21 = CPyList_SetItem(cpy_r_rt_args, 0, cpy_r_r20);
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 635, CPyStatic_function___globals);
        goto CPyL84;
    }
CPyL10: ;
    cpy_r_r22 = CPyDef_function___get_args(cpy_r_builder, cpy_r_rt_args, cpy_r_line);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 637, CPyStatic_function___globals);
        goto CPyL84;
    }
    cpy_r_arg_info = cpy_r_r22;
    cpy_r_r23 = CPySequenceTuple_GetItem(cpy_r_arg_info, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 638, CPyStatic_function___globals);
        goto CPyL86;
    }
    if (likely(PyList_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_glue_method", 638, CPyStatic_function___globals, "list", cpy_r_r23);
        goto CPyL86;
    }
    cpy_r_r25 = cpy_r_r24;
    cpy_r_r26 = CPySequenceTuple_GetItem(cpy_r_arg_info, 4);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 638, CPyStatic_function___globals);
        goto CPyL87;
    }
    if (likely(PyList_Check(cpy_r_r26)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_glue_method", 638, CPyStatic_function___globals, "list", cpy_r_r26);
        goto CPyL87;
    }
    cpy_r_r28 = cpy_r_r27;
    cpy_r_r29 = CPySequenceTuple_GetItem(cpy_r_arg_info, 2);
    CPy_DECREF(cpy_r_arg_info);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 638, CPyStatic_function___globals);
        goto CPyL88;
    }
    if (likely(PyList_Check(cpy_r_r29)))
        cpy_r_r30 = cpy_r_r29;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_glue_method", 638, CPyStatic_function___globals, "list", cpy_r_r29);
        goto CPyL88;
    }
    cpy_r_r31 = cpy_r_r30;
    cpy_r_args = cpy_r_r25;
    cpy_r_arg_kinds = cpy_r_r28;
    cpy_r_arg_names = cpy_r_r31;
    cpy_r_r32 = Py_None;
    CPy_INCREF(cpy_r_r32);
    cpy_r_bitmap_args = cpy_r_r32;
    cpy_r_r33 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_base_sig)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r33);
    cpy_r_r34 = cpy_r_r33 != 0;
    CPyTagged_DECREF(cpy_r_r33);
    if (cpy_r_r34) {
        goto CPyL89;
    } else
        goto CPyL28;
CPyL18: ;
    cpy_r_r35 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_base_sig)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyTagged_Negate(cpy_r_r35);
    CPyTagged_DECREF(cpy_r_r35);
    cpy_r_r37 = CPyList_GetSlice(cpy_r_args, 0, cpy_r_r36);
    CPy_DECREF(cpy_r_args);
    CPyTagged_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 642, CPyStatic_function___globals);
        goto CPyL90;
    }
    if (likely(PyList_Check(cpy_r_r37)))
        cpy_r_r38 = cpy_r_r37;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_glue_method", 642, CPyStatic_function___globals, "list", cpy_r_r37);
        goto CPyL90;
    }
    cpy_r_args = cpy_r_r38;
    cpy_r_r39 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_base_sig)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r39);
    cpy_r_r40 = CPyTagged_Negate(cpy_r_r39);
    CPyTagged_DECREF(cpy_r_r39);
    cpy_r_r41 = CPyList_GetSlice(cpy_r_arg_kinds, 0, cpy_r_r40);
    CPy_DECREF(cpy_r_arg_kinds);
    CPyTagged_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 643, CPyStatic_function___globals);
        goto CPyL91;
    }
    if (likely(PyList_Check(cpy_r_r41)))
        cpy_r_r42 = cpy_r_r41;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_glue_method", 643, CPyStatic_function___globals, "list", cpy_r_r41);
        goto CPyL91;
    }
    cpy_r_arg_kinds = cpy_r_r42;
    cpy_r_r43 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_base_sig)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r43);
    cpy_r_r44 = CPyTagged_Negate(cpy_r_r43);
    CPyTagged_DECREF(cpy_r_r43);
    cpy_r_r45 = CPyList_GetSlice(cpy_r_arg_names, 0, cpy_r_r44);
    CPy_DECREF(cpy_r_arg_names);
    CPyTagged_DECREF(cpy_r_r44);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 644, CPyStatic_function___globals);
        goto CPyL92;
    }
    if (likely(PyList_Check(cpy_r_r45)))
        cpy_r_r46 = cpy_r_r45;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_glue_method", 644, CPyStatic_function___globals, "list", cpy_r_r45);
        goto CPyL92;
    }
    cpy_r_arg_names = cpy_r_r46;
    cpy_r_r47 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    cpy_r_r48 = ((mypyc___irbuild___ll_builder___LowLevelIRBuilderObject *)cpy_r_r47)->_args;
    CPy_INCREF(cpy_r_r48);
    cpy_r_r49 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_base_sig)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r49);
    cpy_r_r50 = CPyTagged_Negate(cpy_r_r49);
    CPyTagged_DECREF(cpy_r_r49);
    cpy_r_r51 = CPyList_GetSlice(cpy_r_r48, cpy_r_r50, 9223372036854775806LL);
    CPy_DECREF(cpy_r_r48);
    CPyTagged_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 645, CPyStatic_function___globals);
        goto CPyL93;
    }
    if (likely(PyList_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_glue_method", 645, CPyStatic_function___globals, "list", cpy_r_r51);
        goto CPyL93;
    }
    cpy_r_r53 = PySequence_List(cpy_r_r52);
    CPy_DECREF(cpy_r_r52);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 645, CPyStatic_function___globals);
        goto CPyL93;
    }
    cpy_r_bitmap_args = cpy_r_r53;
CPyL28: ;
    cpy_r_r54 = 0;
    cpy_r_r55 = 0;
CPyL29: ;
    cpy_r_r56 = (CPyPtr)&((PyVarObject *)cpy_r_arg_kinds)->ob_size;
    cpy_r_r57 = *(int64_t *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 << 1;
    cpy_r_r59 = (Py_ssize_t)cpy_r_r55 < (Py_ssize_t)cpy_r_r58;
    if (!cpy_r_r59) goto CPyL36;
    cpy_r_r60 = CPyList_GetItemUnsafe(cpy_r_arg_kinds, cpy_r_r55);
    if (likely(Py_TYPE(cpy_r_r60) == CPyType_nodes___ArgKind))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_glue_method", 649, CPyStatic_function___globals, "mypy.nodes.ArgKind", cpy_r_r60);
        goto CPyL94;
    }
    cpy_r_kind = cpy_r_r61;
    cpy_r_r62 = CPyStatics[53]; /* 'is_star' */
    PyObject *cpy_r_r63[1] = {cpy_r_kind};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = PyObject_VectorcallMethod(cpy_r_r62, cpy_r_r64, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 649, CPyStatic_function___globals);
        goto CPyL95;
    }
    CPy_DECREF(cpy_r_kind);
    if (unlikely(!PyBool_Check(cpy_r_r65))) {
        CPy_TypeError("bool", cpy_r_r65); cpy_r_r66 = 2;
    } else
        cpy_r_r66 = cpy_r_r65 == Py_True;
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 649, CPyStatic_function___globals);
        goto CPyL94;
    }
    if (!cpy_r_r66) goto CPyL35;
    cpy_r_r54 = 1;
    goto CPyL36;
CPyL35: ;
    cpy_r_r67 = cpy_r_r55 + 2;
    cpy_r_r55 = cpy_r_r67;
    goto CPyL29;
CPyL36: ;
    if (!cpy_r_r54) goto CPyL48;
    cpy_r_r68 = 0;
    cpy_r_r69 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_target)->_decl;
    cpy_r_r70 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r69)->_sig;
    cpy_r_r71 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r70)->_args;
    CPy_INCREF(cpy_r_r71);
    cpy_r_r72 = 0;
CPyL38: ;
    cpy_r_r73 = (CPyPtr)&((PyVarObject *)cpy_r_r71)->ob_size;
    cpy_r_r74 = *(int64_t *)cpy_r_r73;
    cpy_r_r75 = cpy_r_r74 << 1;
    cpy_r_r76 = (Py_ssize_t)cpy_r_r72 < (Py_ssize_t)cpy_r_r75;
    if (!cpy_r_r76) goto CPyL96;
    cpy_r_r77 = CPySequenceTuple_GetItem(cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 649, CPyStatic_function___globals);
        goto CPyL97;
    }
    if (likely(Py_TYPE(cpy_r_r77) == CPyType_func_ir___RuntimeArg))
        cpy_r_r78 = cpy_r_r77;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_glue_method", 649, CPyStatic_function___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r77);
        goto CPyL97;
    }
    cpy_r_arg = cpy_r_r78;
    cpy_r_r79 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_arg)->_kind;
    CPy_INCREF(cpy_r_r79);
    CPy_DECREF(cpy_r_arg);
    cpy_r_r80 = CPyStatics[53]; /* 'is_star' */
    PyObject *cpy_r_r81[1] = {cpy_r_r79};
    cpy_r_r82 = (PyObject **)&cpy_r_r81;
    cpy_r_r83 = PyObject_VectorcallMethod(cpy_r_r80, cpy_r_r82, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 650, CPyStatic_function___globals);
        goto CPyL98;
    }
    CPy_DECREF(cpy_r_r79);
    if (unlikely(!PyBool_Check(cpy_r_r83))) {
        CPy_TypeError("bool", cpy_r_r83); cpy_r_r84 = 2;
    } else
        cpy_r_r84 = cpy_r_r83 == Py_True;
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r84 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 650, CPyStatic_function___globals);
        goto CPyL97;
    }
    cpy_r_r85 = cpy_r_r84 ^ 1;
    if (cpy_r_r85) {
        goto CPyL99;
    } else
        goto CPyL45;
CPyL44: ;
    cpy_r_r68 = 1;
    goto CPyL46;
CPyL45: ;
    cpy_r_r86 = cpy_r_r72 + 2;
    cpy_r_r72 = cpy_r_r86;
    goto CPyL38;
CPyL46: ;
    if (!cpy_r_r68) goto CPyL48;
    cpy_r_do_pycall = 1;
CPyL48: ;
    if (cpy_r_do_pycall) {
        goto CPyL100;
    } else
        goto CPyL64;
CPyL49: ;
    cpy_r_r87 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_target)->_decl;
    cpy_r_r88 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r87)->_kind;
    cpy_r_r89 = cpy_r_r88 == 2;
    if (!cpy_r_r89) goto CPyL52;
    cpy_r_r90 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r90);
    cpy_r_r91 = CPyDef_ll_builder___LowLevelIRBuilder___get_native_type(cpy_r_r90, cpy_r_cls);
    CPy_DECREF(cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 657, CPyStatic_function___globals);
        goto CPyL93;
    }
    cpy_r_first = cpy_r_r91;
    cpy_r_st = 0;
    goto CPyL55;
CPyL52: ;
    cpy_r_r92 = CPyList_GetItemShort(cpy_r_args, 0);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 660, CPyStatic_function___globals);
        goto CPyL93;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r92, CPyType_ops___Value)))
        cpy_r_r93 = cpy_r_r92;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_glue_method", 660, CPyStatic_function___globals, "mypyc.ir.ops.Value", cpy_r_r92);
        goto CPyL93;
    }
    cpy_r_first = cpy_r_r93;
    cpy_r_st = 2;
CPyL55: ;
    cpy_r_r94 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r94);
    cpy_r_r95 = CPY_GET_ATTR(cpy_r_target, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r95 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 663, CPyStatic_function___globals);
        goto CPyL101;
    }
CPyL56: ;
    cpy_r_r96 = CPyList_GetSlice(cpy_r_args, cpy_r_st, 9223372036854775806LL);
    CPy_DECREF(cpy_r_args);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 663, CPyStatic_function___globals);
        goto CPyL102;
    }
    if (likely(PyList_Check(cpy_r_r96)))
        cpy_r_r97 = cpy_r_r96;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_glue_method", 663, CPyStatic_function___globals, "list", cpy_r_r96);
        goto CPyL102;
    }
    cpy_r_r98 = CPyList_GetSlice(cpy_r_arg_kinds, cpy_r_st, 9223372036854775806LL);
    CPy_DECREF(cpy_r_arg_kinds);
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 663, CPyStatic_function___globals);
        goto CPyL103;
    }
    if (likely(PyList_Check(cpy_r_r98)))
        cpy_r_r99 = cpy_r_r98;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_glue_method", 663, CPyStatic_function___globals, "list", cpy_r_r98);
        goto CPyL103;
    }
    cpy_r_r100 = CPyList_GetSlice(cpy_r_arg_names, cpy_r_st, 9223372036854775806LL);
    CPy_DECREF(cpy_r_arg_names);
    CPyTagged_DECREF(cpy_r_st);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 663, CPyStatic_function___globals);
        goto CPyL104;
    }
    if (likely(PyList_Check(cpy_r_r100)))
        cpy_r_r101 = cpy_r_r100;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_glue_method", 663, CPyStatic_function___globals, "list", cpy_r_r100);
        goto CPyL104;
    }
    cpy_r_r102 = CPyDef_ll_builder___LowLevelIRBuilder___py_method_call(cpy_r_r94, cpy_r_first, cpy_r_r95, cpy_r_r97, cpy_r_line, cpy_r_r99, cpy_r_r101);
    CPy_DECREF(cpy_r_first);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r99);
    CPy_DECREF(cpy_r_r101);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 662, CPyStatic_function___globals);
        goto CPyL84;
    }
    cpy_r_retval = cpy_r_r102;
    goto CPyL66;
CPyL64: ;
    cpy_r_r103 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r103);
    cpy_r_r104 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_target)->_decl;
    CPy_INCREF(cpy_r_r104);
    cpy_r_r105 = CPyDef_ll_builder___LowLevelIRBuilder___call(cpy_r_r103, cpy_r_r104, cpy_r_args, cpy_r_arg_kinds, cpy_r_arg_names, cpy_r_line, cpy_r_bitmap_args);
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_arg_kinds);
    CPy_DECREF(cpy_r_arg_names);
    CPy_DECREF(cpy_r_bitmap_args);
    CPy_DECREF(cpy_r_r103);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 666, CPyStatic_function___globals);
        goto CPyL84;
    }
    cpy_r_retval = cpy_r_r105;
CPyL66: ;
    cpy_r_r106 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_base_sig)->_ret_type;
    CPy_INCREF(cpy_r_r106);
    cpy_r_r107 = 2;
    cpy_r_r108 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_retval, cpy_r_r106, cpy_r_line, cpy_r_r107);
    CPy_DECREF(cpy_r_retval);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 669, CPyStatic_function___globals);
        goto CPyL84;
    }
    cpy_r_retval = cpy_r_r108;
    cpy_r_r109 = CPY_INT_TAG;
    cpy_r_r110 = CPyDef_ops___Return(cpy_r_retval, cpy_r_r109);
    CPy_DECREF(cpy_r_retval);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 670, CPyStatic_function___globals);
        goto CPyL84;
    }
    cpy_r_r111 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r110);
    CPy_DECREF(cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 670, CPyStatic_function___globals);
        goto CPyL84;
    } else
        goto CPyL105;
CPyL69: ;
    cpy_r_r112 = CPyDef_builder___IRBuilder___leave(cpy_r_builder);
    if (unlikely(cpy_r_r112.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 672, CPyStatic_function___globals);
        goto CPyL84;
    }
    cpy_r_r113 = cpy_r_r112.f0;
    CPy_INCREF(cpy_r_r113);
    cpy_r_arg_regs = cpy_r_r113;
    cpy_r_r114 = cpy_r_r112.f1;
    CPy_INCREF(cpy_r_r114);
    cpy_r__ = cpy_r_r114;
    CPy_DECREF(cpy_r__);
    cpy_r_r115 = cpy_r_r112.f2;
    CPy_INCREF(cpy_r_r115);
    cpy_r_blocks = cpy_r_r115;
    cpy_r_r116 = cpy_r_r112.f3;
    CPy_INCREF(cpy_r_r116);
    cpy_r_ret_type = cpy_r_r116;
    cpy_r_r117 = cpy_r_r112.f4;
    CPy_INCREF(cpy_r_r117);
    CPy_DECREF(cpy_r_r112.f0);
    CPy_DECREF(cpy_r_r112.f1);
    CPy_DECREF(cpy_r_r112.f2);
    CPy_DECREF(cpy_r_r112.f3);
    CPy_DECREF(cpy_r_r112.f4);
    cpy_r__ = cpy_r_r117;
    CPy_DECREF(cpy_r__);
    cpy_r_r118 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_base_sig)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r118);
    cpy_r_r119 = cpy_r_r118 != 0;
    CPyTagged_DECREF(cpy_r_r118);
    if (!cpy_r_r119) goto CPyL74;
    cpy_r_r120 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_base_sig)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r120);
    cpy_r_r121 = CPyTagged_Negate(cpy_r_r120);
    CPyTagged_DECREF(cpy_r_r120);
    cpy_r_r122 = CPyList_GetSlice(cpy_r_rt_args, 0, cpy_r_r121);
    CPy_DECREF(cpy_r_rt_args);
    CPyTagged_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 674, CPyStatic_function___globals);
        goto CPyL106;
    }
    if (likely(PyList_Check(cpy_r_r122)))
        cpy_r_r123 = cpy_r_r122;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_glue_method", 674, CPyStatic_function___globals, "list", cpy_r_r122);
        goto CPyL106;
    }
    cpy_r_rt_args = cpy_r_r123;
CPyL74: ;
    cpy_r_r124 = CPY_GET_ATTR(cpy_r_target, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 677, CPyStatic_function___globals);
        goto CPyL107;
    }
CPyL75: ;
    cpy_r_r125 = CPyStatics[756]; /* '__' */
    cpy_r_r126 = PyUnicode_Concat(cpy_r_r124, cpy_r_r125);
    CPy_DECREF(cpy_r_r124);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 677, CPyStatic_function___globals);
        goto CPyL107;
    }
    cpy_r_r127 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_name;
    CPy_INCREF(cpy_r_r127);
    cpy_r_r128 = PyUnicode_Concat(cpy_r_r126, cpy_r_r127);
    CPy_DECREF(cpy_r_r126);
    CPy_DECREF(cpy_r_r127);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 677, CPyStatic_function___globals);
        goto CPyL107;
    }
    cpy_r_r129 = CPyStatics[8337]; /* '_glue' */
    cpy_r_r130 = PyUnicode_Concat(cpy_r_r128, cpy_r_r129);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 677, CPyStatic_function___globals);
        goto CPyL107;
    }
    cpy_r_r131 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_name;
    CPy_INCREF(cpy_r_r131);
    cpy_r_r132 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_glue_method", "IRBuilder", "module_name", 679, CPyStatic_function___globals);
        goto CPyL108;
    }
    CPy_INCREF(cpy_r_r132);
CPyL79: ;
    cpy_r_r133 = CPyDef_func_ir___FuncSignature(cpy_r_rt_args, cpy_r_ret_type);
    CPy_DECREF(cpy_r_rt_args);
    CPy_DECREF(cpy_r_ret_type);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 680, CPyStatic_function___globals);
        goto CPyL109;
    }
    cpy_r_r134 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_target)->_decl;
    cpy_r_r135 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r134)->_kind;
    CPyTagged_INCREF(cpy_r_r135);
    cpy_r_r136 = 2;
    cpy_r_r137 = 2;
    cpy_r_r138 = 2;
    cpy_r_r139 = CPyDef_func_ir___FuncDecl(cpy_r_r130, cpy_r_r131, cpy_r_r132, cpy_r_r133, cpy_r_r135, cpy_r_r136, cpy_r_r137, cpy_r_r138);
    CPy_DECREF(cpy_r_r130);
    CPy_DECREF(cpy_r_r131);
    CPy_DECREF(cpy_r_r132);
    CPy_DECREF(cpy_r_r133);
    CPyTagged_DECREF(cpy_r_r135);
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 676, CPyStatic_function___globals);
        goto CPyL110;
    }
    cpy_r_r140 = CPY_INT_TAG;
    cpy_r_r141 = NULL;
    cpy_r_r142 = CPyDef_func_ir___FuncIR(cpy_r_r139, cpy_r_arg_regs, cpy_r_blocks, cpy_r_r140, cpy_r_r141);
    CPy_DECREF(cpy_r_r139);
    CPy_DECREF(cpy_r_arg_regs);
    CPy_DECREF(cpy_r_blocks);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 675, CPyStatic_function___globals);
        goto CPyL83;
    }
    return cpy_r_r142;
CPyL83: ;
    cpy_r_r143 = NULL;
    return cpy_r_r143;
CPyL84: ;
    CPy_DecRef(cpy_r_rt_args);
    goto CPyL83;
CPyL85: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_r16);
    goto CPyL83;
CPyL86: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_arg_info);
    goto CPyL83;
CPyL87: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_r25);
    goto CPyL83;
CPyL88: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_r25);
    CPy_DecRef(cpy_r_r28);
    goto CPyL83;
CPyL89: ;
    CPy_DECREF(cpy_r_bitmap_args);
    goto CPyL18;
CPyL90: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    goto CPyL83;
CPyL91: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_names);
    goto CPyL83;
CPyL92: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_kinds);
    goto CPyL83;
CPyL93: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    goto CPyL83;
CPyL94: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_bitmap_args);
    goto CPyL83;
CPyL95: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_bitmap_args);
    CPy_DecRef(cpy_r_kind);
    goto CPyL83;
CPyL96: ;
    CPy_DECREF(cpy_r_r71);
    goto CPyL46;
CPyL97: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_bitmap_args);
    CPy_DecRef(cpy_r_r71);
    goto CPyL83;
CPyL98: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_bitmap_args);
    CPy_DecRef(cpy_r_r71);
    CPy_DecRef(cpy_r_r79);
    goto CPyL83;
CPyL99: ;
    CPy_DECREF(cpy_r_r71);
    goto CPyL44;
CPyL100: ;
    CPy_DECREF(cpy_r_bitmap_args);
    goto CPyL49;
CPyL101: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_first);
    CPyTagged_DecRef(cpy_r_st);
    CPy_DecRef(cpy_r_r94);
    goto CPyL83;
CPyL102: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_first);
    CPyTagged_DecRef(cpy_r_st);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r95);
    goto CPyL83;
CPyL103: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_arg_names);
    CPy_DecRef(cpy_r_first);
    CPyTagged_DecRef(cpy_r_st);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r97);
    goto CPyL83;
CPyL104: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_first);
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r95);
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r99);
    goto CPyL83;
CPyL105: ;
    CPy_DECREF(cpy_r_r111);
    goto CPyL69;
CPyL106: ;
    CPy_DecRef(cpy_r_arg_regs);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL83;
CPyL107: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_arg_regs);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_ret_type);
    goto CPyL83;
CPyL108: ;
    CPy_DecRef(cpy_r_rt_args);
    CPy_DecRef(cpy_r_arg_regs);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_ret_type);
    CPy_DecRef(cpy_r_r130);
    CPy_DecRef(cpy_r_r131);
    goto CPyL83;
CPyL109: ;
    CPy_DecRef(cpy_r_arg_regs);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_r130);
    CPy_DecRef(cpy_r_r131);
    CPy_DecRef(cpy_r_r132);
    goto CPyL83;
CPyL110: ;
    CPy_DecRef(cpy_r_arg_regs);
    CPy_DecRef(cpy_r_blocks);
    goto CPyL83;
}

PyObject *CPyPy_function___gen_glue_method(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "base_sig", "target", "cls", "base", "line", "do_pycall", 0};
    static CPyArg_Parser parser = {"OOOOOOO:gen_glue_method", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_base_sig;
    PyObject *obj_target;
    PyObject *obj_cls;
    PyObject *obj_base;
    PyObject *obj_line;
    PyObject *obj_do_pycall;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_base_sig, &obj_target, &obj_cls, &obj_base, &obj_line, &obj_do_pycall)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_base_sig;
    if (likely(Py_TYPE(obj_base_sig) == CPyType_func_ir___FuncSignature))
        arg_base_sig = obj_base_sig;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_base_sig); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(Py_TYPE(obj_target) == CPyType_func_ir___FuncIR))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_target); 
        goto fail;
    }
    PyObject *arg_cls;
    if (likely(Py_TYPE(obj_cls) == CPyType_class_ir___ClassIR))
        arg_cls = obj_cls;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cls); 
        goto fail;
    }
    PyObject *arg_base;
    if (likely(Py_TYPE(obj_base) == CPyType_class_ir___ClassIR))
        arg_base = obj_base;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_base); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char arg_do_pycall;
    if (unlikely(!PyBool_Check(obj_do_pycall))) {
        CPy_TypeError("bool", obj_do_pycall); goto fail;
    } else
        arg_do_pycall = obj_do_pycall == Py_True;
    PyObject *retval = CPyDef_function___gen_glue_method(arg_builder, arg_base_sig, arg_target, arg_cls, arg_base, arg_line, arg_do_pycall);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_method", 594, CPyStatic_function___globals);
    return NULL;
}

char CPyDef_function___check_native_override(PyObject *cpy_r_builder, PyObject *cpy_r_base_sig, PyObject *cpy_r_sub_sig, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyPtr cpy_r_r4;
    int64_t cpy_r_r5;
    CPyTagged cpy_r_r6;
    char cpy_r_r7;
    CPyPtr cpy_r_r8;
    int64_t cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_base_arg;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_sub_arg;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
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
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
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
    char cpy_r_r47;
    CPyTagged cpy_r_r48;
    CPyTagged cpy_r_r49;
    char cpy_r_r50;
    cpy_r_r0 = CPyDef_func_ir___FuncSignature___real_args(cpy_r_base_sig);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 695, CPyStatic_function___globals);
        goto CPyL30;
    }
    cpy_r_r1 = 0;
    cpy_r_r2 = CPyDef_func_ir___FuncSignature___real_args(cpy_r_sub_sig);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 695, CPyStatic_function___globals);
        goto CPyL31;
    }
    cpy_r_r3 = 0;
CPyL3: ;
    cpy_r_r4 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r5 = *(int64_t *)cpy_r_r4;
    cpy_r_r6 = cpy_r_r5 << 1;
    cpy_r_r7 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r6;
    if (!cpy_r_r7) goto CPyL32;
    cpy_r_r8 = (CPyPtr)&((PyVarObject *)cpy_r_r2)->ob_size;
    cpy_r_r9 = *(int64_t *)cpy_r_r8;
    cpy_r_r10 = cpy_r_r9 << 1;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r3 < (Py_ssize_t)cpy_r_r10;
    if (!cpy_r_r11) goto CPyL32;
    cpy_r_r12 = CPySequenceTuple_GetItem(cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 695, CPyStatic_function___globals);
        goto CPyL33;
    }
    if (likely(Py_TYPE(cpy_r_r12) == CPyType_func_ir___RuntimeArg))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "check_native_override", 695, CPyStatic_function___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r12);
        goto CPyL33;
    }
    cpy_r_base_arg = cpy_r_r13;
    cpy_r_r14 = CPySequenceTuple_GetItem(cpy_r_r2, cpy_r_r3);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 695, CPyStatic_function___globals);
        goto CPyL34;
    }
    if (likely(Py_TYPE(cpy_r_r14) == CPyType_func_ir___RuntimeArg))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "check_native_override", 695, CPyStatic_function___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r14);
        goto CPyL34;
    }
    cpy_r_sub_arg = cpy_r_r15;
    cpy_r_r16 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_base_arg)->_type;
    cpy_r_r17 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r16)->_error_overlap;
    if (!cpy_r_r17) goto CPyL19;
CPyL10: ;
    cpy_r_r18 = CPY_GET_ATTR(cpy_r_base_arg, CPyType_func_ir___RuntimeArg, 1, mypyc___ir___func_ir___RuntimeArgObject, char); /* optional */
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 697, CPyStatic_function___globals);
        goto CPyL35;
    }
CPyL11: ;
    if (cpy_r_r18) goto CPyL19;
CPyL12: ;
    cpy_r_r19 = CPY_GET_ATTR(cpy_r_sub_arg, CPyType_func_ir___RuntimeArg, 1, mypyc___ir___func_ir___RuntimeArgObject, char); /* optional */
    if (unlikely(cpy_r_r19 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 697, CPyStatic_function___globals);
        goto CPyL35;
    }
CPyL13: ;
    if (!cpy_r_r19) goto CPyL19;
CPyL14: ;
    cpy_r_r20 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_base_sig)->_num_bitmap_args;
    CPyTagged_INCREF(cpy_r_r20);
    cpy_r_r21 = cpy_r_r20 != 0;
    CPyTagged_DECREF(cpy_r_r20);
    if (!cpy_r_r21) goto CPyL19;
    cpy_r_r22 = CPyStatics[8338]; /* 'An argument with type ' */
    cpy_r_r23 = CPyStatics[178]; /* '"' */
    cpy_r_r24 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_base_arg)->_type;
    CPy_INCREF(cpy_r_r24);
    cpy_r_r25 = PyObject_Str(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 703, CPyStatic_function___globals);
        goto CPyL35;
    }
    cpy_r_r26 = CPyStatics[8339]; /* '" cannot be given a default value in a method override' */
    cpy_r_r27 = CPyStr_Build(3, cpy_r_r23, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 703, CPyStatic_function___globals);
        goto CPyL35;
    }
    cpy_r_r28 = PyUnicode_Concat(cpy_r_r22, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 702, CPyStatic_function___globals);
        goto CPyL35;
    }
    cpy_r_r29 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r28, cpy_r_line);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 701, CPyStatic_function___globals);
        goto CPyL35;
    }
CPyL19: ;
    cpy_r_r30 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_base_arg)->_type;
    cpy_r_r31 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r30)->_error_overlap;
    if (cpy_r_r31) goto CPyL21;
CPyL20: ;
    cpy_r_r32 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_sub_arg)->_type;
    cpy_r_r33 = ((mypyc___ir___rtypes___RTypeObject *)cpy_r_r32)->_error_overlap;
    if (!cpy_r_r33) goto CPyL36;
CPyL21: ;
    cpy_r_r34 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_base_arg)->_type;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_sub_arg)->_type;
    CPy_INCREF(cpy_r_r35);
    cpy_r_r36 = CPyDef_sametype___is_same_type(cpy_r_r34, cpy_r_r35);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 707, CPyStatic_function___globals);
        goto CPyL35;
    }
    if (cpy_r_r36) goto CPyL36;
    cpy_r_r37 = CPyStatics[8340]; /* 'Incompatible argument type ' */
    cpy_r_r38 = CPyStatics[178]; /* '"' */
    cpy_r_r39 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_sub_arg)->_type;
    CPy_INCREF(cpy_r_r39);
    CPy_DECREF(cpy_r_sub_arg);
    cpy_r_r40 = PyObject_Str(cpy_r_r39);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 712, CPyStatic_function___globals);
        goto CPyL34;
    }
    cpy_r_r41 = CPyStatics[8341]; /* '" (base class has type "' */
    cpy_r_r42 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_base_arg)->_type;
    CPy_INCREF(cpy_r_r42);
    CPy_DECREF(cpy_r_base_arg);
    cpy_r_r43 = PyObject_Str(cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 712, CPyStatic_function___globals);
        goto CPyL37;
    }
    cpy_r_r44 = CPyStatics[457]; /* '")' */
    cpy_r_r45 = CPyStr_Build(5, cpy_r_r38, cpy_r_r40, cpy_r_r41, cpy_r_r43, cpy_r_r44);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 712, CPyStatic_function___globals);
        goto CPyL33;
    }
    cpy_r_r46 = PyUnicode_Concat(cpy_r_r37, cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 711, CPyStatic_function___globals);
        goto CPyL33;
    }
    cpy_r_r47 = CPyDef_builder___IRBuilder___error(cpy_r_builder, cpy_r_r46, cpy_r_line);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 710, CPyStatic_function___globals);
        goto CPyL33;
    }
CPyL28: ;
    cpy_r_r48 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r48;
    cpy_r_r49 = cpy_r_r3 + 2;
    cpy_r_r3 = cpy_r_r49;
    goto CPyL3;
CPyL29: ;
    return 1;
CPyL30: ;
    cpy_r_r50 = 2;
    return cpy_r_r50;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL30;
CPyL32: ;
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r2);
    goto CPyL29;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    goto CPyL30;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_base_arg);
    goto CPyL30;
CPyL35: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_base_arg);
    CPy_DecRef(cpy_r_sub_arg);
    goto CPyL30;
CPyL36: ;
    CPy_DECREF(cpy_r_base_arg);
    CPy_DECREF(cpy_r_sub_arg);
    goto CPyL28;
CPyL37: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r40);
    goto CPyL30;
}

PyObject *CPyPy_function___check_native_override(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "base_sig", "sub_sig", "line", 0};
    static CPyArg_Parser parser = {"OOOO:check_native_override", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_base_sig;
    PyObject *obj_sub_sig;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_base_sig, &obj_sub_sig, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_base_sig;
    if (likely(Py_TYPE(obj_base_sig) == CPyType_func_ir___FuncSignature))
        arg_base_sig = obj_base_sig;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_base_sig); 
        goto fail;
    }
    PyObject *arg_sub_sig;
    if (likely(Py_TYPE(obj_sub_sig) == CPyType_func_ir___FuncSignature))
        arg_sub_sig = obj_sub_sig;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_sub_sig); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_function___check_native_override(arg_builder, arg_base_sig, arg_sub_sig, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "check_native_override", 688, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___gen_glue_property(PyObject *cpy_r_builder, PyObject *cpy_r_sig, PyObject *cpy_r_target, PyObject *cpy_r_cls, PyObject *cpy_r_base, CPyTagged cpy_r_line, char cpy_r_do_pygetattr) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_rt_arg;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_self_target;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_arg;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_retval;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_retbox;
    CPyTagged cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    tuple_T5OOOOO cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r27;
    PyObject *cpy_r__;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_blocks;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_return_type;
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
    CPyPtr cpy_r_r41;
    CPyPtr cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    CPyTagged cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    cpy_r_r0 = NULL;
    cpy_r_r1 = CPyDef_builder___IRBuilder___enter(cpy_r_builder, cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 735, CPyStatic_function___globals);
        goto CPyL28;
    }
    cpy_r_r2 = CPyStatics[7716]; /* '__mypyc_self__' */
    cpy_r_r3 = CPyDef_rtypes___RInstance(cpy_r_cls);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 737, CPyStatic_function___globals);
        goto CPyL28;
    }
    cpy_r_r4 = NULL;
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_func_ir___RuntimeArg(cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 737, CPyStatic_function___globals);
        goto CPyL28;
    }
    cpy_r_rt_arg = cpy_r_r6;
    cpy_r_r7 = CPyDef_builder___IRBuilder___add_self_to_env(cpy_r_builder, cpy_r_cls);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 738, CPyStatic_function___globals);
        goto CPyL29;
    }
    cpy_r_self_target = cpy_r_r7;
    cpy_r_r8 = 2;
    cpy_r_r9 = CPyDef_builder___IRBuilder___read(cpy_r_builder, cpy_r_self_target, cpy_r_line, cpy_r_r8);
    CPy_DECREF(cpy_r_self_target);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 739, CPyStatic_function___globals);
        goto CPyL29;
    }
    cpy_r_arg = cpy_r_r9;
    cpy_r_r10 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_sig)->_ret_type;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_ret_types;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyList_SetItem(cpy_r_r11, -2, cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 740, CPyStatic_function___globals);
        goto CPyL30;
    }
    if (!cpy_r_do_pygetattr) goto CPyL10;
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_target, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 742, CPyStatic_function___globals);
        goto CPyL30;
    }
CPyL8: ;
    cpy_r_r14 = CPyDef_builder___IRBuilder___py_get_attr(cpy_r_builder, cpy_r_arg, cpy_r_r13, cpy_r_line);
    CPy_DECREF(cpy_r_arg);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 742, CPyStatic_function___globals);
        goto CPyL29;
    }
    cpy_r_retval = cpy_r_r14;
    goto CPyL14;
CPyL10: ;
    cpy_r_r15 = CPY_GET_ATTR(cpy_r_target, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 744, CPyStatic_function___globals);
        goto CPyL30;
    }
CPyL11: ;
    cpy_r_r16 = 2;
    cpy_r_r17 = CPyDef_ops___GetAttr(cpy_r_arg, cpy_r_r15, cpy_r_line, cpy_r_r16);
    CPy_DECREF(cpy_r_arg);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 744, CPyStatic_function___globals);
        goto CPyL29;
    }
    cpy_r_r18 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 744, CPyStatic_function___globals);
        goto CPyL29;
    }
    cpy_r_retval = cpy_r_r18;
CPyL14: ;
    cpy_r_r19 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_sig)->_ret_type;
    CPy_INCREF(cpy_r_r19);
    cpy_r_r20 = 2;
    cpy_r_r21 = CPyDef_builder___IRBuilder___coerce(cpy_r_builder, cpy_r_retval, cpy_r_r19, cpy_r_line, cpy_r_r20);
    CPy_DECREF(cpy_r_retval);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 745, CPyStatic_function___globals);
        goto CPyL29;
    }
    cpy_r_retbox = cpy_r_r21;
    cpy_r_r22 = CPY_INT_TAG;
    cpy_r_r23 = CPyDef_ops___Return(cpy_r_retbox, cpy_r_r22);
    CPy_DECREF(cpy_r_retbox);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 746, CPyStatic_function___globals);
        goto CPyL29;
    }
    cpy_r_r24 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 746, CPyStatic_function___globals);
        goto CPyL29;
    } else
        goto CPyL31;
CPyL17: ;
    cpy_r_r25 = CPyDef_builder___IRBuilder___leave(cpy_r_builder);
    if (unlikely(cpy_r_r25.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 748, CPyStatic_function___globals);
        goto CPyL29;
    }
    cpy_r_r26 = cpy_r_r25.f0;
    CPy_INCREF(cpy_r_r26);
    cpy_r_args = cpy_r_r26;
    cpy_r_r27 = cpy_r_r25.f1;
    CPy_INCREF(cpy_r_r27);
    cpy_r__ = cpy_r_r27;
    CPy_DECREF(cpy_r__);
    cpy_r_r28 = cpy_r_r25.f2;
    CPy_INCREF(cpy_r_r28);
    cpy_r_blocks = cpy_r_r28;
    cpy_r_r29 = cpy_r_r25.f3;
    CPy_INCREF(cpy_r_r29);
    cpy_r_return_type = cpy_r_r29;
    cpy_r_r30 = cpy_r_r25.f4;
    CPy_INCREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r25.f0);
    CPy_DECREF(cpy_r_r25.f1);
    CPy_DECREF(cpy_r_r25.f2);
    CPy_DECREF(cpy_r_r25.f3);
    CPy_DECREF(cpy_r_r25.f4);
    cpy_r__ = cpy_r_r30;
    CPy_DECREF(cpy_r__);
    cpy_r_r31 = CPY_GET_ATTR(cpy_r_target, CPyType_func_ir___FuncIR, 6, mypyc___ir___func_ir___FuncIRObject, PyObject *); /* name */
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 751, CPyStatic_function___globals);
        goto CPyL32;
    }
CPyL19: ;
    cpy_r_r32 = CPyStatics[756]; /* '__' */
    cpy_r_r33 = PyUnicode_Concat(cpy_r_r31, cpy_r_r32);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 751, CPyStatic_function___globals);
        goto CPyL32;
    }
    cpy_r_r34 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_base)->_name;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = PyUnicode_Concat(cpy_r_r33, cpy_r_r34);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 751, CPyStatic_function___globals);
        goto CPyL32;
    }
    cpy_r_r36 = CPyStatics[8337]; /* '_glue' */
    cpy_r_r37 = PyUnicode_Concat(cpy_r_r35, cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 751, CPyStatic_function___globals);
        goto CPyL32;
    }
    cpy_r_r38 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_cls)->_name;
    CPy_INCREF(cpy_r_r38);
    cpy_r_r39 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_module_name;
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_glue_property", "IRBuilder", "module_name", 753, CPyStatic_function___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r39);
CPyL23: ;
    cpy_r_r40 = PyList_New(1);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 754, CPyStatic_function___globals);
        goto CPyL34;
    }
    cpy_r_r41 = (CPyPtr)&((PyListObject *)cpy_r_r40)->ob_item;
    cpy_r_r42 = *(CPyPtr *)cpy_r_r41;
    *(PyObject * *)cpy_r_r42 = cpy_r_rt_arg;
    cpy_r_r43 = CPyDef_func_ir___FuncSignature(cpy_r_r40, cpy_r_return_type);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_return_type);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 754, CPyStatic_function___globals);
        goto CPyL35;
    }
    cpy_r_r44 = CPY_INT_TAG;
    cpy_r_r45 = 2;
    cpy_r_r46 = 2;
    cpy_r_r47 = 2;
    cpy_r_r48 = CPyDef_func_ir___FuncDecl(cpy_r_r37, cpy_r_r38, cpy_r_r39, cpy_r_r43, cpy_r_r44, cpy_r_r45, cpy_r_r46, cpy_r_r47);
    CPy_DECREF(cpy_r_r37);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 750, CPyStatic_function___globals);
        goto CPyL36;
    }
    cpy_r_r49 = CPY_INT_TAG;
    cpy_r_r50 = NULL;
    cpy_r_r51 = CPyDef_func_ir___FuncIR(cpy_r_r48, cpy_r_args, cpy_r_blocks, cpy_r_r49, cpy_r_r50);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_blocks);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 749, CPyStatic_function___globals);
        goto CPyL28;
    }
    return cpy_r_r51;
CPyL28: ;
    cpy_r_r52 = NULL;
    return cpy_r_r52;
CPyL29: ;
    CPy_DecRef(cpy_r_rt_arg);
    goto CPyL28;
CPyL30: ;
    CPy_DecRef(cpy_r_rt_arg);
    CPy_DecRef(cpy_r_arg);
    goto CPyL28;
CPyL31: ;
    CPy_DECREF(cpy_r_r24);
    goto CPyL17;
CPyL32: ;
    CPy_DecRef(cpy_r_rt_arg);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_return_type);
    goto CPyL28;
CPyL33: ;
    CPy_DecRef(cpy_r_rt_arg);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_return_type);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r38);
    goto CPyL28;
CPyL34: ;
    CPy_DecRef(cpy_r_rt_arg);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_return_type);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r39);
    goto CPyL28;
CPyL35: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_blocks);
    CPy_DecRef(cpy_r_r37);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r39);
    goto CPyL28;
CPyL36: ;
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_blocks);
    goto CPyL28;
}

PyObject *CPyPy_function___gen_glue_property(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "sig", "target", "cls", "base", "line", "do_pygetattr", 0};
    static CPyArg_Parser parser = {"OOOOOOO:gen_glue_property", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_sig;
    PyObject *obj_target;
    PyObject *obj_cls;
    PyObject *obj_base;
    PyObject *obj_line;
    PyObject *obj_do_pygetattr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_sig, &obj_target, &obj_cls, &obj_base, &obj_line, &obj_do_pygetattr)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_sig;
    if (likely(Py_TYPE(obj_sig) == CPyType_func_ir___FuncSignature))
        arg_sig = obj_sig;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_sig); 
        goto fail;
    }
    PyObject *arg_target;
    if (likely(Py_TYPE(obj_target) == CPyType_func_ir___FuncIR))
        arg_target = obj_target;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncIR", obj_target); 
        goto fail;
    }
    PyObject *arg_cls;
    if (likely(Py_TYPE(obj_cls) == CPyType_class_ir___ClassIR))
        arg_cls = obj_cls;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_cls); 
        goto fail;
    }
    PyObject *arg_base;
    if (likely(Py_TYPE(obj_base) == CPyType_class_ir___ClassIR))
        arg_base = obj_base;
    else {
        CPy_TypeError("mypyc.ir.class_ir.ClassIR", obj_base); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char arg_do_pygetattr;
    if (unlikely(!PyBool_Check(obj_do_pygetattr))) {
        CPy_TypeError("bool", obj_do_pygetattr); goto fail;
    } else
        arg_do_pygetattr = obj_do_pygetattr == Py_True;
    PyObject *retval = CPyDef_function___gen_glue_property(arg_builder, arg_sig, arg_target, arg_cls, arg_base, arg_line, arg_do_pygetattr);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "gen_glue_property", 717, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___get_func_target(PyObject *cpy_r_builder, PyObject *cpy_r_fdef) {
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
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_original_def;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "get_func_target", "FuncDef", "original_def", 767, CPyStatic_function___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PyObject_IsTrue(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_func_target", 767, CPyStatic_function___globals);
        goto CPyL17;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL7;
    cpy_r_r4 = ((mypy___nodes___FuncDefObject *)cpy_r_fdef)->_original_def;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "get_func_target", "FuncDef", "original_def", 769, CPyStatic_function___globals);
        goto CPyL17;
    }
    CPy_INCREF(cpy_r_r4);
CPyL4: ;
    if (Py_TYPE(cpy_r_r4) == CPyType_nodes___FuncDef)
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL10234;
    if (Py_TYPE(cpy_r_r4) == CPyType_nodes___Var)
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL10234;
    if (Py_TYPE(cpy_r_r4) == CPyType_nodes___Decorator)
        cpy_r_r5 = cpy_r_r4;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL10234;
    CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "get_func_target", 769, CPyStatic_function___globals, "union[mypy.nodes.FuncDef, mypy.nodes.Var, mypy.nodes.Decorator]", cpy_r_r4);
    goto CPyL17;
__LL10234: ;
    cpy_r_r6 = CPyDef_builder___IRBuilder___lookup(cpy_r_builder, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_func_target", 769, CPyStatic_function___globals);
        goto CPyL17;
    }
    return cpy_r_r6;
CPyL7: ;
    cpy_r_r7 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPY_GET_ATTR(cpy_r_r7, CPyType_context___FuncInfo, 2, mypyc___irbuild___context___FuncInfoObject, char); /* is_generator */
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_func_target", 771, CPyStatic_function___globals);
        goto CPyL17;
    }
CPyL8: ;
    if (cpy_r_r8) goto CPyL10;
CPyL9: ;
    cpy_r_r9 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    cpy_r_r10 = ((mypyc___irbuild___context___FuncInfoObject *)cpy_r_r9)->_contains_nested;
    if (!cpy_r_r10) goto CPyL12;
CPyL10: ;
    cpy_r_r11 = CPyDef_builder___IRBuilder___lookup(cpy_r_builder, cpy_r_fdef);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_func_target", 772, CPyStatic_function___globals);
        goto CPyL17;
    }
    return cpy_r_r11;
CPyL12: ;
    cpy_r_r12 = CPyStatic_rtypes___object_rprimitive;
    if (likely(cpy_r_r12 != NULL)) goto CPyL15;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r13 = 0;
    if (unlikely(!cpy_r_r13)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_func_target", 774, CPyStatic_function___globals);
        goto CPyL17;
    }
    CPy_Unreachable();
CPyL15: ;
    cpy_r_r14 = 2;
    cpy_r_r15 = CPyDef_builder___IRBuilder___add_local_reg(cpy_r_builder, cpy_r_fdef, cpy_r_r12, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_func_target", 774, CPyStatic_function___globals);
        goto CPyL17;
    }
    return cpy_r_r15;
CPyL17: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
}

PyObject *CPyPy_function___get_func_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fdef", 0};
    static CPyArg_Parser parser = {"OO:get_func_target", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    PyObject *retval = CPyDef_function___get_func_target(arg_builder, arg_fdef);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "get_func_target", 761, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___load_type(PyObject *cpy_r_builder, PyObject *cpy_r_typ, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_class_ir;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_class_obj;
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
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    tuple_T2OO cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_builtin_addr_type;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r1 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r0)->_type_to_ir;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyDict_Contains(cpy_r_r1, cpy_r_typ);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_type", 778, CPyStatic_function___globals);
        goto CPyL23;
    }
    cpy_r_r4 = cpy_r_r2;
    if (!cpy_r_r4) goto CPyL6;
    cpy_r_r5 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r6 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r5)->_type_to_ir;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r6, cpy_r_typ);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_type", 779, CPyStatic_function___globals);
        goto CPyL23;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_class_ir___ClassIR))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "load_type", 779, CPyStatic_function___globals, "mypyc.ir.class_ir.ClassIR", cpy_r_r7);
        goto CPyL23;
    }
    cpy_r_class_ir = cpy_r_r8;
    cpy_r_r9 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyDef_ll_builder___LowLevelIRBuilder___get_native_type(cpy_r_r9, cpy_r_class_ir);
    CPy_DECREF(cpy_r_class_ir);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_type", 780, CPyStatic_function___globals);
        goto CPyL23;
    }
    cpy_r_class_obj = cpy_r_r10;
    goto CPyL22;
CPyL6: ;
    cpy_r_r11 = CPY_GET_ATTR(cpy_r_typ, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_type", 781, CPyStatic_function___globals);
        goto CPyL23;
    }
CPyL7: ;
    cpy_r_r12 = CPyStatic_function___globals;
    cpy_r_r13 = CPyStatics[8211]; /* 'builtin_names' */
    cpy_r_r14 = CPyDict_GetItem(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_type", 781, CPyStatic_function___globals);
        goto CPyL24;
    }
    if (likely(PyDict_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "load_type", 781, CPyStatic_function___globals, "dict", cpy_r_r14);
        goto CPyL24;
    }
    cpy_r_r16 = PyDict_Contains(cpy_r_r15, cpy_r_r11);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r11);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_type", 781, CPyStatic_function___globals);
        goto CPyL23;
    }
    cpy_r_r18 = cpy_r_r16;
    if (!cpy_r_r18) goto CPyL19;
    cpy_r_r19 = CPyStatic_function___globals;
    cpy_r_r20 = CPyStatics[8211]; /* 'builtin_names' */
    cpy_r_r21 = CPyDict_GetItem(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_type", 782, CPyStatic_function___globals);
        goto CPyL23;
    }
    if (likely(PyDict_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "load_type", 782, CPyStatic_function___globals, "dict", cpy_r_r21);
        goto CPyL23;
    }
    cpy_r_r23 = CPY_GET_ATTR(cpy_r_typ, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_type", 782, CPyStatic_function___globals);
        goto CPyL25;
    }
CPyL14: ;
    cpy_r_r24 = CPyDict_GetItem(cpy_r_r22, cpy_r_r23);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_type", 782, CPyStatic_function___globals);
        goto CPyL23;
    }
    PyObject *__tmp10235;
    if (unlikely(!(PyTuple_Check(cpy_r_r24) && PyTuple_GET_SIZE(cpy_r_r24) == 2))) {
        __tmp10235 = NULL;
        goto __LL10236;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r24, 0), CPyType_rtypes___RType)))
        __tmp10235 = PyTuple_GET_ITEM(cpy_r_r24, 0);
    else {
        __tmp10235 = NULL;
    }
    if (__tmp10235 == NULL) goto __LL10236;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r24, 1))))
        __tmp10235 = PyTuple_GET_ITEM(cpy_r_r24, 1);
    else {
        __tmp10235 = NULL;
    }
    if (__tmp10235 == NULL) goto __LL10236;
    __tmp10235 = cpy_r_r24;
__LL10236: ;
    if (unlikely(__tmp10235 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.rtypes.RType, str]", cpy_r_r24); cpy_r_r25 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10237 = PyTuple_GET_ITEM(cpy_r_r24, 0);
        CPy_INCREF(__tmp10237);
        PyObject *__tmp10238;
        if (likely(PyObject_TypeCheck(__tmp10237, CPyType_rtypes___RType)))
            __tmp10238 = __tmp10237;
        else {
            CPy_TypeError("mypyc.ir.rtypes.RType", __tmp10237); 
            __tmp10238 = NULL;
        }
        cpy_r_r25.f0 = __tmp10238;
        PyObject *__tmp10239 = PyTuple_GET_ITEM(cpy_r_r24, 1);
        CPy_INCREF(__tmp10239);
        PyObject *__tmp10240;
        if (likely(PyUnicode_Check(__tmp10239)))
            __tmp10240 = __tmp10239;
        else {
            CPy_TypeError("str", __tmp10239); 
            __tmp10240 = NULL;
        }
        cpy_r_r25.f1 = __tmp10240;
    }
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_type", 782, CPyStatic_function___globals);
        goto CPyL23;
    }
    cpy_r_r26 = cpy_r_r25.f0;
    CPy_INCREF(cpy_r_r26);
    cpy_r_builtin_addr_type = cpy_r_r26;
    cpy_r_r27 = cpy_r_r25.f1;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r25.f0);
    CPy_DECREF(cpy_r_r25.f1);
    cpy_r_src = cpy_r_r27;
    cpy_r_r28 = CPyDef_ops___LoadAddress(cpy_r_builtin_addr_type, cpy_r_src, cpy_r_line);
    CPy_DECREF(cpy_r_builtin_addr_type);
    CPy_DECREF(cpy_r_src);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_type", 783, CPyStatic_function___globals);
        goto CPyL23;
    }
    cpy_r_r29 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r28);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_type", 783, CPyStatic_function___globals);
        goto CPyL23;
    }
    cpy_r_class_obj = cpy_r_r29;
    goto CPyL22;
CPyL19: ;
    cpy_r_r30 = CPY_GET_ATTR(cpy_r_typ, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_type", 785, CPyStatic_function___globals);
        goto CPyL23;
    }
CPyL20: ;
    cpy_r_r31 = CPyDef_builder___IRBuilder___load_global_str(cpy_r_builder, cpy_r_r30, cpy_r_line);
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_type", 785, CPyStatic_function___globals);
        goto CPyL23;
    }
    cpy_r_class_obj = cpy_r_r31;
CPyL22: ;
    return cpy_r_class_obj;
CPyL23: ;
    cpy_r_r32 = NULL;
    return cpy_r_r32;
CPyL24: ;
    CPy_DecRef(cpy_r_r11);
    goto CPyL23;
CPyL25: ;
    CPy_DecRef(cpy_r_r22);
    goto CPyL23;
}

PyObject *CPyPy_function___load_type(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "typ", "line", 0};
    static CPyArg_Parser parser = {"OOO:load_type", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_typ;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_typ, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_typ;
    if (likely((Py_TYPE(obj_typ) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_typ) == CPyType_nodes___TypeInfo)))
        arg_typ = obj_typ;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_typ); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_function___load_type(arg_builder, arg_typ, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "load_type", 777, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___load_func(PyObject *cpy_r_builder, PyObject *cpy_r_func_name, PyObject *cpy_r_fullname, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_module;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_loaded_module;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_func;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_fullname != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL13;
    CPy_INCREF(cpy_r_fullname);
    if (likely(cpy_r_fullname != Py_None))
        cpy_r_r2 = cpy_r_fullname;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "load_func", 790, CPyStatic_function___globals, "str", cpy_r_fullname);
        goto CPyL16;
    }
    cpy_r_r3 = CPyStr_IsTrue(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (!cpy_r_r3) goto CPyL13;
    CPy_INCREF(cpy_r_fullname);
    if (likely(cpy_r_fullname != Py_None))
        cpy_r_r4 = cpy_r_fullname;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "load_func", 791, CPyStatic_function___globals, "str", cpy_r_fullname);
        goto CPyL16;
    }
    cpy_r_r5 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_current_module;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyStr_Startswith(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r5);
    if (cpy_r_r6) goto CPyL13;
    CPy_INCREF(cpy_r_fullname);
    if (likely(cpy_r_fullname != Py_None))
        cpy_r_r7 = cpy_r_fullname;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "load_func", 797, CPyStatic_function___globals, "str", cpy_r_fullname);
        goto CPyL16;
    }
    cpy_r_r8 = CPyStatics[224]; /* '.' */
    cpy_r_r9 = CPyStatics[173]; /* 'rsplit' */
    PyObject *cpy_r_r10[2] = {cpy_r_r7, cpy_r_r8};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r9, cpy_r_r11, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_func", 797, CPyStatic_function___globals);
        goto CPyL17;
    }
    CPy_DECREF(cpy_r_r7);
    if (likely(PyList_Check(cpy_r_r12)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "load_func", 797, CPyStatic_function___globals, "list", cpy_r_r12);
        goto CPyL18;
    }
    cpy_r_r14 = CPyList_GetItemShort(cpy_r_r13, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_func", 797, CPyStatic_function___globals);
        goto CPyL18;
    }
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "load_func", 797, CPyStatic_function___globals, "str", cpy_r_r14);
        goto CPyL18;
    }
    CPy_DECREF(cpy_r_r12);
    cpy_r_module = cpy_r_r15;
    cpy_r_r16 = CPyDef_builder___IRBuilder___load_module(cpy_r_builder, cpy_r_module);
    CPy_DECREF(cpy_r_module);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_func", 798, CPyStatic_function___globals);
        goto CPyL16;
    }
    cpy_r_loaded_module = cpy_r_r16;
    cpy_r_r17 = CPyDef_builder___IRBuilder___py_get_attr(cpy_r_builder, cpy_r_loaded_module, cpy_r_func_name, cpy_r_line);
    CPy_DECREF(cpy_r_loaded_module);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_func", 800, CPyStatic_function___globals);
        goto CPyL16;
    }
    cpy_r_func = cpy_r_r17;
    goto CPyL15;
CPyL13: ;
    cpy_r_r18 = CPyDef_builder___IRBuilder___load_global_str(cpy_r_builder, cpy_r_func_name, cpy_r_line);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_func", 802, CPyStatic_function___globals);
        goto CPyL16;
    }
    cpy_r_func = cpy_r_r18;
CPyL15: ;
    return cpy_r_func;
CPyL16: ;
    cpy_r_r19 = NULL;
    return cpy_r_r19;
CPyL17: ;
    CPy_DecRef(cpy_r_r7);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL16;
}

PyObject *CPyPy_function___load_func(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "func_name", "fullname", "line", 0};
    static CPyArg_Parser parser = {"OOOO:load_func", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_func_name;
    PyObject *obj_fullname;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_func_name, &obj_fullname, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_func_name;
    if (likely(PyUnicode_Check(obj_func_name)))
        arg_func_name = obj_func_name;
    else {
        CPy_TypeError("str", obj_func_name); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (PyUnicode_Check(obj_fullname))
        arg_fullname = obj_fullname;
    else {
        arg_fullname = NULL;
    }
    if (arg_fullname != NULL) goto __LL10241;
    if (obj_fullname == Py_None)
        arg_fullname = obj_fullname;
    else {
        arg_fullname = NULL;
    }
    if (arg_fullname != NULL) goto __LL10241;
    CPy_TypeError("str or None", obj_fullname); 
    goto fail;
__LL10241: ;
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_function___load_func(arg_builder, arg_func_name, arg_fullname, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "load_func", 790, CPyStatic_function___globals);
    return NULL;
}

char CPyDef_function___generate_singledispatch_dispatch_function(PyObject *cpy_r_builder, PyObject *cpy_r_main_singledispatch_function_name, PyObject *cpy_r_fitem) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_current_func_decl;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_arg_info;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_dispatch_func_obj;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_arg_type;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_dispatch_cache;
    CPyTagged cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_call_find_impl;
    PyObject *cpy_r_use_cache;
    PyObject *cpy_r_call_func;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    CPyPtr cpy_r_r36;
    CPyPtr cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_get_result;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_is_not_none;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_impl_to_use;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_find_impl;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_registry;
    PyObject *cpy_r_r56;
    CPyPtr cpy_r_r57;
    CPyPtr cpy_r_r58;
    CPyPtr cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_uncached_impl;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    CPyPtr cpy_r_r68;
    CPyPtr cpy_r_r69;
    CPyPtr cpy_r_r70;
    CPyPtr cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    char cpy_r_r76;
    char cpy_r_r77;
    cpy_r_r0 = ((mypy___nodes___FuncDefObject *)cpy_r_fitem)->_line;
    CPyTagged_INCREF(cpy_r_r0);
    cpy_r_line = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r2 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r1)->_func_to_decl;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDict_GetItem(cpy_r_r2, cpy_r_fitem);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 810, CPyStatic_function___globals);
        goto CPyL45;
    }
    if (likely(Py_TYPE(cpy_r_r3) == CPyType_func_ir___FuncDecl))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 810, CPyStatic_function___globals, "mypyc.ir.func_ir.FuncDecl", cpy_r_r3);
        goto CPyL45;
    }
    cpy_r_current_func_decl = cpy_r_r4;
    cpy_r_r5 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_current_func_decl)->_sig;
    cpy_r_r6 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r5)->_args;
    CPy_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_current_func_decl);
    cpy_r_r7 = CPyDef_function___get_args(cpy_r_builder, cpy_r_r6, cpy_r_line);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 811, CPyStatic_function___globals);
        goto CPyL45;
    }
    cpy_r_arg_info = cpy_r_r7;
    cpy_r_r8 = CPyDef_builder___IRBuilder___self(cpy_r_builder);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 813, CPyStatic_function___globals);
        goto CPyL46;
    }
    cpy_r_dispatch_func_obj = cpy_r_r8;
    cpy_r_r9 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPySequenceTuple_GetItem(cpy_r_arg_info, 0);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 815, CPyStatic_function___globals);
        goto CPyL47;
    }
    if (likely(PyList_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 815, CPyStatic_function___globals, "list", cpy_r_r10);
        goto CPyL47;
    }
    cpy_r_r12 = CPyList_GetItemShort(cpy_r_r11, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 815, CPyStatic_function___globals);
        goto CPyL47;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r12, CPyType_ops___Value)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 815, CPyStatic_function___globals, "mypyc.ir.ops.Value", cpy_r_r12);
        goto CPyL47;
    }
    cpy_r_r14 = CPyDef_ll_builder___LowLevelIRBuilder___get_type_of_obj(cpy_r_r9, cpy_r_r13, cpy_r_line);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 815, CPyStatic_function___globals);
        goto CPyL48;
    }
    cpy_r_arg_type = cpy_r_r14;
    cpy_r_r15 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyStatics[8342]; /* 'dispatch_cache' */
    cpy_r_r17 = CPyStatic_rtypes___dict_rprimitive;
    if (unlikely(cpy_r_r17 == NULL)) {
        goto CPyL49;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r18 = 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 817, CPyStatic_function___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r19 = 2;
    cpy_r_r20 = CPyDef_ll_builder___LowLevelIRBuilder___get_attr(cpy_r_r15, cpy_r_dispatch_func_obj, cpy_r_r16, cpy_r_r17, cpy_r_line, cpy_r_r19);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 816, CPyStatic_function___globals);
        goto CPyL50;
    }
    cpy_r_dispatch_cache = cpy_r_r20;
    cpy_r_r21 = CPY_INT_TAG;
    cpy_r_r22 = CPyDef_ops___BasicBlock(cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 819, CPyStatic_function___globals);
        goto CPyL51;
    }
    cpy_r_r23 = cpy_r_r22;
    cpy_r_r24 = CPY_INT_TAG;
    cpy_r_r25 = CPyDef_ops___BasicBlock(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 819, CPyStatic_function___globals);
        goto CPyL52;
    }
    cpy_r_r26 = cpy_r_r25;
    cpy_r_r27 = CPY_INT_TAG;
    cpy_r_r28 = CPyDef_ops___BasicBlock(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 819, CPyStatic_function___globals);
        goto CPyL53;
    }
    cpy_r_r29 = cpy_r_r28;
    cpy_r_call_find_impl = cpy_r_r23;
    cpy_r_use_cache = cpy_r_r26;
    cpy_r_call_func = cpy_r_r29;
    cpy_r_r30 = CPyStatic_function___globals;
    cpy_r_r31 = CPyStatics[8343]; /* 'dict_get_method_with_none' */
    cpy_r_r32 = CPyDict_GetItem(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 820, CPyStatic_function___globals);
        goto CPyL54;
    }
    if (likely(PyTuple_Check(cpy_r_r32)))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 820, CPyStatic_function___globals, "tuple", cpy_r_r32);
        goto CPyL54;
    }
    cpy_r_r34 = PyList_New(2);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 820, CPyStatic_function___globals);
        goto CPyL55;
    }
    cpy_r_r35 = (CPyPtr)&((PyListObject *)cpy_r_r34)->ob_item;
    cpy_r_r36 = *(CPyPtr *)cpy_r_r35;
    CPy_INCREF(cpy_r_dispatch_cache);
    *(PyObject * *)cpy_r_r36 = cpy_r_dispatch_cache;
    cpy_r_r37 = cpy_r_r36 + 8;
    CPy_INCREF(cpy_r_arg_type);
    *(PyObject * *)cpy_r_r37 = cpy_r_arg_type;
    cpy_r_r38 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r33, cpy_r_r34, cpy_r_line);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 820, CPyStatic_function___globals);
        goto CPyL54;
    }
    cpy_r_get_result = cpy_r_r38;
    cpy_r_r39 = CPyDef_builder___IRBuilder___none_object(cpy_r_builder);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 821, CPyStatic_function___globals);
        goto CPyL56;
    }
    cpy_r_r40 = CPyStatics[862]; /* 'is not' */
    cpy_r_r41 = CPyDef_builder___IRBuilder___translate_is_op(cpy_r_builder, cpy_r_get_result, cpy_r_r39, cpy_r_r40, cpy_r_line);
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 821, CPyStatic_function___globals);
        goto CPyL56;
    }
    cpy_r_is_not_none = cpy_r_r41;
    cpy_r_r42 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r42 == NULL)) {
        goto CPyL57;
    } else
        goto CPyL25;
CPyL23: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r43 = 0;
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 822, CPyStatic_function___globals);
        goto CPyL44;
    }
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r44 = NULL;
    cpy_r_r45 = 2;
    cpy_r_r46 = CPY_INT_TAG;
    cpy_r_r47 = CPyDef_ops___Register(cpy_r_r42, cpy_r_r44, cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 822, CPyStatic_function___globals);
        goto CPyL58;
    }
    cpy_r_impl_to_use = cpy_r_r47;
    cpy_r_r48 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_builder, cpy_r_is_not_none, cpy_r_use_cache, cpy_r_call_find_impl);
    CPy_DECREF(cpy_r_is_not_none);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 823, CPyStatic_function___globals);
        goto CPyL59;
    }
    cpy_r_r49 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_use_cache);
    CPy_DECREF(cpy_r_use_cache);
    if (unlikely(cpy_r_r49 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 825, CPyStatic_function___globals);
        goto CPyL60;
    }
    cpy_r_r50 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_impl_to_use, cpy_r_get_result, cpy_r_line);
    CPy_DECREF(cpy_r_get_result);
    if (unlikely(cpy_r_r50 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 826, CPyStatic_function___globals);
        goto CPyL61;
    }
    cpy_r_r51 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_call_func);
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 827, CPyStatic_function___globals);
        goto CPyL61;
    }
    cpy_r_r52 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_call_find_impl);
    CPy_DECREF(cpy_r_call_find_impl);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 829, CPyStatic_function___globals);
        goto CPyL62;
    }
    cpy_r_r53 = CPyStatics[8344]; /* 'functools._find_impl' */
    cpy_r_r54 = CPyDef_builder___IRBuilder___load_module_attr_by_fullname(cpy_r_builder, cpy_r_r53, cpy_r_line);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 830, CPyStatic_function___globals);
        goto CPyL62;
    }
    cpy_r_find_impl = cpy_r_r54;
    cpy_r_r55 = CPyDef_function___load_singledispatch_registry(cpy_r_builder, cpy_r_dispatch_func_obj, cpy_r_line);
    CPy_DECREF(cpy_r_dispatch_func_obj);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 831, CPyStatic_function___globals);
        goto CPyL63;
    }
    cpy_r_registry = cpy_r_r55;
    cpy_r_r56 = PyList_New(2);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 832, CPyStatic_function___globals);
        goto CPyL64;
    }
    cpy_r_r57 = (CPyPtr)&((PyListObject *)cpy_r_r56)->ob_item;
    cpy_r_r58 = *(CPyPtr *)cpy_r_r57;
    CPy_INCREF(cpy_r_arg_type);
    *(PyObject * *)cpy_r_r58 = cpy_r_arg_type;
    cpy_r_r59 = cpy_r_r58 + 8;
    *(PyObject * *)cpy_r_r59 = cpy_r_registry;
    cpy_r_r60 = NULL;
    cpy_r_r61 = NULL;
    cpy_r_r62 = CPyDef_builder___IRBuilder___py_call(cpy_r_builder, cpy_r_find_impl, cpy_r_r56, cpy_r_line, cpy_r_r60, cpy_r_r61);
    CPy_DECREF(cpy_r_find_impl);
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 832, CPyStatic_function___globals);
        goto CPyL65;
    }
    cpy_r_uncached_impl = cpy_r_r62;
    cpy_r_r63 = CPyStatic_function___globals;
    cpy_r_r64 = CPyStatics[8056]; /* 'dict_set_item_op' */
    cpy_r_r65 = CPyDict_GetItem(cpy_r_r63, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 833, CPyStatic_function___globals);
        goto CPyL66;
    }
    if (likely(PyTuple_Check(cpy_r_r65)))
        cpy_r_r66 = cpy_r_r65;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 833, CPyStatic_function___globals, "tuple", cpy_r_r65);
        goto CPyL66;
    }
    cpy_r_r67 = PyList_New(3);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 833, CPyStatic_function___globals);
        goto CPyL67;
    }
    cpy_r_r68 = (CPyPtr)&((PyListObject *)cpy_r_r67)->ob_item;
    cpy_r_r69 = *(CPyPtr *)cpy_r_r68;
    *(PyObject * *)cpy_r_r69 = cpy_r_dispatch_cache;
    cpy_r_r70 = cpy_r_r69 + 8;
    *(PyObject * *)cpy_r_r70 = cpy_r_arg_type;
    cpy_r_r71 = cpy_r_r69 + 16;
    CPy_INCREF(cpy_r_uncached_impl);
    *(PyObject * *)cpy_r_r71 = cpy_r_uncached_impl;
    cpy_r_r72 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r66, cpy_r_r67, cpy_r_line);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 833, CPyStatic_function___globals);
        goto CPyL68;
    } else
        goto CPyL69;
CPyL39: ;
    cpy_r_r73 = CPyDef_builder___IRBuilder___assign(cpy_r_builder, cpy_r_impl_to_use, cpy_r_uncached_impl, cpy_r_line);
    CPy_DECREF(cpy_r_uncached_impl);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 834, CPyStatic_function___globals);
        goto CPyL70;
    }
    cpy_r_r74 = CPyDef_builder___IRBuilder___goto(cpy_r_builder, cpy_r_call_func);
    if (unlikely(cpy_r_r74 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 835, CPyStatic_function___globals);
        goto CPyL70;
    }
    cpy_r_r75 = CPyDef_builder___IRBuilder___activate_block(cpy_r_builder, cpy_r_call_func);
    CPy_DECREF(cpy_r_call_func);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 837, CPyStatic_function___globals);
        goto CPyL71;
    }
    cpy_r_r76 = CPyDef_function___gen_calls_to_correct_impl(cpy_r_builder, cpy_r_impl_to_use, cpy_r_arg_info, cpy_r_fitem, cpy_r_line);
    CPy_DECREF(cpy_r_impl_to_use);
    CPy_DECREF(cpy_r_arg_info);
    CPyTagged_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r76 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 838, CPyStatic_function___globals);
        goto CPyL44;
    }
    return 1;
CPyL44: ;
    cpy_r_r77 = 2;
    return cpy_r_r77;
CPyL45: ;
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL44;
CPyL46: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    goto CPyL44;
CPyL47: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_r9);
    goto CPyL44;
CPyL48: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    goto CPyL44;
CPyL49: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_r15);
    goto CPyL10;
CPyL50: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_arg_type);
    goto CPyL44;
CPyL51: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    goto CPyL44;
CPyL52: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    CPy_DecRef(cpy_r_r23);
    goto CPyL44;
CPyL53: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r26);
    goto CPyL44;
CPyL54: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    CPy_DecRef(cpy_r_call_find_impl);
    CPy_DecRef(cpy_r_use_cache);
    CPy_DecRef(cpy_r_call_func);
    goto CPyL44;
CPyL55: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    CPy_DecRef(cpy_r_call_find_impl);
    CPy_DecRef(cpy_r_use_cache);
    CPy_DecRef(cpy_r_call_func);
    CPy_DecRef(cpy_r_r33);
    goto CPyL44;
CPyL56: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    CPy_DecRef(cpy_r_call_find_impl);
    CPy_DecRef(cpy_r_use_cache);
    CPy_DecRef(cpy_r_call_func);
    CPy_DecRef(cpy_r_get_result);
    goto CPyL44;
CPyL57: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    CPy_DecRef(cpy_r_call_find_impl);
    CPy_DecRef(cpy_r_use_cache);
    CPy_DecRef(cpy_r_call_func);
    CPy_DecRef(cpy_r_get_result);
    CPy_DecRef(cpy_r_is_not_none);
    goto CPyL23;
CPyL58: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    CPy_DecRef(cpy_r_call_find_impl);
    CPy_DecRef(cpy_r_use_cache);
    CPy_DecRef(cpy_r_call_func);
    CPy_DecRef(cpy_r_get_result);
    CPy_DecRef(cpy_r_is_not_none);
    goto CPyL44;
CPyL59: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    CPy_DecRef(cpy_r_call_find_impl);
    CPy_DecRef(cpy_r_use_cache);
    CPy_DecRef(cpy_r_call_func);
    CPy_DecRef(cpy_r_get_result);
    CPy_DecRef(cpy_r_impl_to_use);
    goto CPyL44;
CPyL60: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    CPy_DecRef(cpy_r_call_find_impl);
    CPy_DecRef(cpy_r_call_func);
    CPy_DecRef(cpy_r_get_result);
    CPy_DecRef(cpy_r_impl_to_use);
    goto CPyL44;
CPyL61: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    CPy_DecRef(cpy_r_call_find_impl);
    CPy_DecRef(cpy_r_call_func);
    CPy_DecRef(cpy_r_impl_to_use);
    goto CPyL44;
CPyL62: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    CPy_DecRef(cpy_r_call_func);
    CPy_DecRef(cpy_r_impl_to_use);
    goto CPyL44;
CPyL63: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    CPy_DecRef(cpy_r_call_func);
    CPy_DecRef(cpy_r_impl_to_use);
    CPy_DecRef(cpy_r_find_impl);
    goto CPyL44;
CPyL64: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    CPy_DecRef(cpy_r_call_func);
    CPy_DecRef(cpy_r_impl_to_use);
    CPy_DecRef(cpy_r_find_impl);
    CPy_DecRef(cpy_r_registry);
    goto CPyL44;
CPyL65: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    CPy_DecRef(cpy_r_call_func);
    CPy_DecRef(cpy_r_impl_to_use);
    goto CPyL44;
CPyL66: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    CPy_DecRef(cpy_r_call_func);
    CPy_DecRef(cpy_r_impl_to_use);
    CPy_DecRef(cpy_r_uncached_impl);
    goto CPyL44;
CPyL67: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_arg_type);
    CPy_DecRef(cpy_r_dispatch_cache);
    CPy_DecRef(cpy_r_call_func);
    CPy_DecRef(cpy_r_impl_to_use);
    CPy_DecRef(cpy_r_uncached_impl);
    CPy_DecRef(cpy_r_r66);
    goto CPyL44;
CPyL68: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_call_func);
    CPy_DecRef(cpy_r_impl_to_use);
    CPy_DecRef(cpy_r_uncached_impl);
    goto CPyL44;
CPyL69: ;
    CPy_DECREF(cpy_r_r72);
    goto CPyL39;
CPyL70: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_call_func);
    CPy_DecRef(cpy_r_impl_to_use);
    goto CPyL44;
CPyL71: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_impl_to_use);
    goto CPyL44;
}

PyObject *CPyPy_function___generate_singledispatch_dispatch_function(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "main_singledispatch_function_name", "fitem", 0};
    static CPyArg_Parser parser = {"OOO:generate_singledispatch_dispatch_function", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_main_singledispatch_function_name;
    PyObject *obj_fitem;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_main_singledispatch_function_name, &obj_fitem)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_main_singledispatch_function_name;
    if (likely(PyUnicode_Check(obj_main_singledispatch_function_name)))
        arg_main_singledispatch_function_name = obj_main_singledispatch_function_name;
    else {
        CPy_TypeError("str", obj_main_singledispatch_function_name); 
        goto fail;
    }
    PyObject *arg_fitem;
    if (likely(Py_TYPE(obj_fitem) == CPyType_nodes___FuncDef))
        arg_fitem = obj_fitem;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fitem); 
        goto fail;
    }
    char retval = CPyDef_function___generate_singledispatch_dispatch_function(arg_builder, arg_main_singledispatch_function_name, arg_fitem);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_dispatch_function", 806, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
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

PyObject *CPyPy_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
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
    PyObject *retval = CPyDef_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "__get__", -1, CPyStatic_function___globals);
    return NULL;
}

char CPyDef_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_fdef) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_gen_native_func_call_and_return;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_func_decl;
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
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_ret_val;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    CPyTagged cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_coerced;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    cpy_r_r0 = ((mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_native_func_call_and_return", "gen_native_func_call_and_return_gen_calls_to_correct_impl_obj", "__mypyc_env__", 846, CPyStatic_function___globals);
        goto CPyL25;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_gen_native_func_call_and_return;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_native_func_call_and_return", "gen_calls_to_correct_impl_env", "gen_native_func_call_and_return", -1, CPyStatic_function___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_gen_native_func_call_and_return = cpy_r_r1;
    CPy_DECREF(cpy_r_gen_native_func_call_and_return);
    cpy_r_r2 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_native_func_call_and_return", "gen_calls_to_correct_impl_env", "builder", 847, CPyStatic_function___globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r2)->_mapper;
    cpy_r_r4 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r3)->_func_to_decl;
    CPy_INCREF(cpy_r_r4);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r4, cpy_r_fdef);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_native_func_call_and_return", 847, CPyStatic_function___globals);
        goto CPyL26;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_func_ir___FuncDecl))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_native_func_call_and_return", 847, CPyStatic_function___globals, "mypyc.ir.func_ir.FuncDecl", cpy_r_r5);
        goto CPyL26;
    }
    cpy_r_func_decl = cpy_r_r6;
    cpy_r_r7 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_native_func_call_and_return", "gen_calls_to_correct_impl_env", "builder", 848, CPyStatic_function___globals);
        goto CPyL27;
    }
    CPy_INCREF(cpy_r_r7);
CPyL6: ;
    cpy_r_r8 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r7)->_builder;
    CPy_INCREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    cpy_r_r9 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_arg_info;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_native_func_call_and_return", "gen_calls_to_correct_impl_env", "arg_info", 849, CPyStatic_function___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r9);
CPyL7: ;
    cpy_r_r10 = CPySequenceTuple_GetItem(cpy_r_r9, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_native_func_call_and_return", 849, CPyStatic_function___globals);
        goto CPyL28;
    }
    if (likely(PyList_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_native_func_call_and_return", 849, CPyStatic_function___globals, "list", cpy_r_r10);
        goto CPyL28;
    }
    cpy_r_r12 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_arg_info;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_native_func_call_and_return", "gen_calls_to_correct_impl_env", "arg_info", 849, CPyStatic_function___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r12);
CPyL10: ;
    cpy_r_r13 = CPySequenceTuple_GetItem(cpy_r_r12, 4);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_native_func_call_and_return", 849, CPyStatic_function___globals);
        goto CPyL29;
    }
    if (likely(PyList_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_native_func_call_and_return", 849, CPyStatic_function___globals, "list", cpy_r_r13);
        goto CPyL29;
    }
    cpy_r_r15 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_arg_info;
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_native_func_call_and_return", "gen_calls_to_correct_impl_env", "arg_info", 849, CPyStatic_function___globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r15);
CPyL13: ;
    cpy_r_r16 = CPySequenceTuple_GetItem(cpy_r_r15, 2);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_native_func_call_and_return", 849, CPyStatic_function___globals);
        goto CPyL30;
    }
    if (likely(PyList_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_native_func_call_and_return", 849, CPyStatic_function___globals, "list", cpy_r_r16);
        goto CPyL30;
    }
    cpy_r_r18 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r18 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_native_func_call_and_return", "gen_calls_to_correct_impl_env", "line", 849, CPyStatic_function___globals);
        goto CPyL31;
    }
    CPyTagged_INCREF(cpy_r_r18);
CPyL16: ;
    cpy_r_r19 = NULL;
    cpy_r_r20 = CPyDef_ll_builder___LowLevelIRBuilder___call(cpy_r_r8, cpy_r_func_decl, cpy_r_r11, cpy_r_r14, cpy_r_r17, cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_func_decl);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r17);
    CPyTagged_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_native_func_call_and_return", 848, CPyStatic_function___globals);
        goto CPyL26;
    }
    cpy_r_ret_val = cpy_r_r20;
    cpy_r_r21 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_native_func_call_and_return", "gen_calls_to_correct_impl_env", "builder", 851, CPyStatic_function___globals);
        goto CPyL32;
    }
    CPy_INCREF(cpy_r_r21);
CPyL18: ;
    cpy_r_r22 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_current_func_decl;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_native_func_call_and_return", "gen_calls_to_correct_impl_env", "current_func_decl", 851, CPyStatic_function___globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r22);
CPyL19: ;
    cpy_r_r23 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r22)->_sig;
    cpy_r_r24 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r23)->_ret_type;
    CPy_INCREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r22);
    cpy_r_r25 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r25 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_native_func_call_and_return", "gen_calls_to_correct_impl_env", "line", 851, CPyStatic_function___globals);
        goto CPyL34;
    }
    CPyTagged_INCREF(cpy_r_r25);
CPyL20: ;
    cpy_r_r26 = 2;
    cpy_r_r27 = CPyDef_builder___IRBuilder___coerce(cpy_r_r21, cpy_r_ret_val, cpy_r_r24, cpy_r_r25, cpy_r_r26);
    CPy_DECREF(cpy_r_ret_val);
    CPy_DECREF(cpy_r_r24);
    CPyTagged_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r21);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_native_func_call_and_return", 851, CPyStatic_function___globals);
        goto CPyL26;
    }
    cpy_r_coerced = cpy_r_r27;
    cpy_r_r28 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r28 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'builder' of 'gen_calls_to_correct_impl_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r28);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_native_func_call_and_return", 852, CPyStatic_function___globals);
        goto CPyL35;
    }
CPyL22: ;
    cpy_r_r29 = CPY_INT_TAG;
    cpy_r_r30 = CPyDef_ops___Return(cpy_r_coerced, cpy_r_r29);
    CPy_DECREF(cpy_r_coerced);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_native_func_call_and_return", 852, CPyStatic_function___globals);
        goto CPyL36;
    }
    cpy_r_r31 = CPyDef_builder___IRBuilder___add(cpy_r_r28, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_native_func_call_and_return", 852, CPyStatic_function___globals);
        goto CPyL25;
    } else
        goto CPyL37;
CPyL24: ;
    return 1;
CPyL25: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL26: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL25;
CPyL27: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_func_decl);
    goto CPyL25;
CPyL28: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_func_decl);
    CPy_DecRef(cpy_r_r8);
    goto CPyL25;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_func_decl);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL25;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_func_decl);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    goto CPyL25;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_func_decl);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r17);
    goto CPyL25;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ret_val);
    goto CPyL25;
CPyL33: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ret_val);
    CPy_DecRef(cpy_r_r21);
    goto CPyL25;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ret_val);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r24);
    goto CPyL25;
CPyL35: ;
    CPy_DecRef(cpy_r_coerced);
    goto CPyL25;
CPyL36: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL25;
CPyL37: ;
    CPy_DECREF(cpy_r_r31);
    goto CPyL24;
}

PyObject *CPyPy_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"fdef", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_fdef;
    if (likely(Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fdef); 
        goto fail;
    }
    char retval = CPyDef_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj_____call__(arg___mypyc_self__, arg_fdef);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "gen_native_func_call_and_return", 846, CPyStatic_function___globals);
    return NULL;
}

char CPyDef_function___gen_calls_to_correct_impl(PyObject *cpy_r_builder, PyObject *cpy_r_impl_to_use, PyObject *cpy_r_arg_info, PyObject *cpy_r_fitem, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    tuple_T2OO cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_src;
    PyObject *cpy_r_r22;
    CPyTagged cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_int_type_obj;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyTagged cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_is_int;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    CPyTagged cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_native_call;
    PyObject *cpy_r_non_native_call;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    CPyTagged cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_passed_id;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_native_ids;
    CPyTagged cpy_r_r48;
    int64_t cpy_r_r49;
    CPyTagged cpy_r_r50;
    PyObject *cpy_r_r51;
    tuple_T4CIOO cpy_r_r52;
    CPyTagged cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    CPyTagged cpy_r_r58;
    PyObject *cpy_r_impl;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    CPyTagged cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_call_impl;
    PyObject *cpy_r_next_impl;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_current_id;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    CPyTagged cpy_r_r70;
    char cpy_r_r71;
    PyObject *cpy_r_r72;
    char cpy_r_r73;
    PyObject *cpy_r_r74;
    PyObject **cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    char cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    CPyTagged cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    CPyTagged cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_ret_val;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    CPyTagged cpy_r_r104;
    char cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_coerced;
    PyObject *cpy_r_r107;
    CPyTagged cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    char cpy_r_r111;
    cpy_r_r0 = CPyDef_function___gen_calls_to_correct_impl_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 841, CPyStatic_function___globals);
        goto CPyL81;
    }
    CPy_INCREF(cpy_r_builder);
    if (((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder != NULL) {
        CPy_DECREF(((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder);
    }
    ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder = cpy_r_builder;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 841, CPyStatic_function___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_arg_info);
    if (((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_arg_info != NULL) {
        CPy_DECREF(((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_arg_info);
    }
    ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_arg_info = cpy_r_arg_info;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 841, CPyStatic_function___globals);
        goto CPyL82;
    }
    CPyTagged_INCREF(cpy_r_line);
    if (((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_line != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_line);
    }
    ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_line = cpy_r_line;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 841, CPyStatic_function___globals);
        goto CPyL82;
    }
    cpy_r_r4 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "builder", 844, CPyStatic_function___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r4);
CPyL5: ;
    cpy_r_r5 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r4)->_mapper;
    cpy_r_r6 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r5)->_func_to_decl;
    CPy_INCREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r6, cpy_r_fitem);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 844, CPyStatic_function___globals);
        goto CPyL82;
    }
    if (likely(Py_TYPE(cpy_r_r7) == CPyType_func_ir___FuncDecl))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 844, CPyStatic_function___globals, "mypyc.ir.func_ir.FuncDecl", cpy_r_r7);
        goto CPyL82;
    }
    if (((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_current_func_decl != NULL) {
        CPy_DECREF(((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_current_func_decl);
    }
    ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_current_func_decl = cpy_r_r8;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 844, CPyStatic_function___globals);
        goto CPyL82;
    }
    cpy_r_r10 = CPyDef_function___gen_native_func_call_and_return_gen_calls_to_correct_impl_obj();
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 846, CPyStatic_function___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject *)cpy_r_r10)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject *)cpy_r_r10)->___mypyc_env__);
    }
    ((mypyc___irbuild___function___gen_native_func_call_and_return_gen_calls_to_correct_impl_objObject *)cpy_r_r10)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 846, CPyStatic_function___globals);
        goto CPyL83;
    }
    if (((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_gen_native_func_call_and_return != NULL) {
        CPy_DECREF(((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_gen_native_func_call_and_return);
    }
    ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_gen_native_func_call_and_return = cpy_r_r10;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 846, CPyStatic_function___globals);
        goto CPyL82;
    }
    cpy_r_r13 = CPyStatic_function___globals;
    cpy_r_r14 = CPyStatics[8211]; /* 'builtin_names' */
    cpy_r_r15 = CPyDict_GetItem(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 854, CPyStatic_function___globals);
        goto CPyL82;
    }
    if (likely(PyDict_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 854, CPyStatic_function___globals, "dict", cpy_r_r15);
        goto CPyL82;
    }
    cpy_r_r17 = CPyStatics[1178]; /* 'builtins.int' */
    cpy_r_r18 = CPyDict_GetItem(cpy_r_r16, cpy_r_r17);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 854, CPyStatic_function___globals);
        goto CPyL82;
    }
    PyObject *__tmp10242;
    if (unlikely(!(PyTuple_Check(cpy_r_r18) && PyTuple_GET_SIZE(cpy_r_r18) == 2))) {
        __tmp10242 = NULL;
        goto __LL10243;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r18, 0), CPyType_rtypes___RType)))
        __tmp10242 = PyTuple_GET_ITEM(cpy_r_r18, 0);
    else {
        __tmp10242 = NULL;
    }
    if (__tmp10242 == NULL) goto __LL10243;
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(cpy_r_r18, 1))))
        __tmp10242 = PyTuple_GET_ITEM(cpy_r_r18, 1);
    else {
        __tmp10242 = NULL;
    }
    if (__tmp10242 == NULL) goto __LL10243;
    __tmp10242 = cpy_r_r18;
__LL10243: ;
    if (unlikely(__tmp10242 == NULL)) {
        CPy_TypeError("tuple[mypyc.ir.rtypes.RType, str]", cpy_r_r18); cpy_r_r19 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10244 = PyTuple_GET_ITEM(cpy_r_r18, 0);
        CPy_INCREF(__tmp10244);
        PyObject *__tmp10245;
        if (likely(PyObject_TypeCheck(__tmp10244, CPyType_rtypes___RType)))
            __tmp10245 = __tmp10244;
        else {
            CPy_TypeError("mypyc.ir.rtypes.RType", __tmp10244); 
            __tmp10245 = NULL;
        }
        cpy_r_r19.f0 = __tmp10245;
        PyObject *__tmp10246 = PyTuple_GET_ITEM(cpy_r_r18, 1);
        CPy_INCREF(__tmp10246);
        PyObject *__tmp10247;
        if (likely(PyUnicode_Check(__tmp10246)))
            __tmp10247 = __tmp10246;
        else {
            CPy_TypeError("str", __tmp10246); 
            __tmp10247 = NULL;
        }
        cpy_r_r19.f1 = __tmp10247;
    }
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 854, CPyStatic_function___globals);
        goto CPyL82;
    }
    cpy_r_r20 = cpy_r_r19.f0;
    CPy_INCREF(cpy_r_r20);
    cpy_r_typ = cpy_r_r20;
    cpy_r_r21 = cpy_r_r19.f1;
    CPy_INCREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r19.f0);
    CPy_DECREF(cpy_r_r19.f1);
    cpy_r_src = cpy_r_r21;
    cpy_r_r22 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "builder", 855, CPyStatic_function___globals);
        goto CPyL84;
    }
    CPy_INCREF(cpy_r_r22);
CPyL16: ;
    cpy_r_r23 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r23 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "line", 855, CPyStatic_function___globals);
        goto CPyL85;
    }
    CPyTagged_INCREF(cpy_r_r23);
CPyL17: ;
    cpy_r_r24 = CPyDef_ops___LoadAddress(cpy_r_typ, cpy_r_src, cpy_r_r23);
    CPy_DECREF(cpy_r_typ);
    CPy_DECREF(cpy_r_src);
    CPyTagged_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 855, CPyStatic_function___globals);
        goto CPyL86;
    }
    cpy_r_r25 = CPyDef_builder___IRBuilder___add(cpy_r_r22, cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 855, CPyStatic_function___globals);
        goto CPyL82;
    }
    cpy_r_int_type_obj = cpy_r_r25;
    cpy_r_r26 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "builder", 856, CPyStatic_function___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_r26);
CPyL20: ;
    cpy_r_r27 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r26)->_builder;
    CPy_INCREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    cpy_r_r28 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r28 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "line", 856, CPyStatic_function___globals);
        goto CPyL88;
    }
    CPyTagged_INCREF(cpy_r_r28);
CPyL21: ;
    cpy_r_r29 = CPyDef_ll_builder___LowLevelIRBuilder___type_is_op(cpy_r_r27, cpy_r_impl_to_use, cpy_r_int_type_obj, cpy_r_r28);
    CPy_DECREF(cpy_r_int_type_obj);
    CPyTagged_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 856, CPyStatic_function___globals);
        goto CPyL82;
    }
    cpy_r_is_int = cpy_r_r29;
    cpy_r_r30 = CPY_INT_TAG;
    cpy_r_r31 = CPyDef_ops___BasicBlock(cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 858, CPyStatic_function___globals);
        goto CPyL89;
    }
    cpy_r_r32 = cpy_r_r31;
    cpy_r_r33 = CPY_INT_TAG;
    cpy_r_r34 = CPyDef_ops___BasicBlock(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 858, CPyStatic_function___globals);
        goto CPyL90;
    }
    cpy_r_r35 = cpy_r_r34;
    cpy_r_native_call = cpy_r_r32;
    cpy_r_non_native_call = cpy_r_r35;
    cpy_r_r36 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "builder", 859, CPyStatic_function___globals);
        goto CPyL91;
    }
    CPy_INCREF(cpy_r_r36);
CPyL25: ;
    cpy_r_r37 = CPyDef_builder___IRBuilder___add_bool_branch(cpy_r_r36, cpy_r_is_int, cpy_r_native_call, cpy_r_non_native_call);
    CPy_DECREF(cpy_r_is_int);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 859, CPyStatic_function___globals);
        goto CPyL92;
    }
    cpy_r_r38 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "builder", 860, CPyStatic_function___globals);
        goto CPyL92;
    }
    CPy_INCREF(cpy_r_r38);
CPyL27: ;
    cpy_r_r39 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r38, cpy_r_native_call);
    CPy_DECREF(cpy_r_native_call);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 860, CPyStatic_function___globals);
        goto CPyL93;
    }
    cpy_r_r40 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "builder", 862, CPyStatic_function___globals);
        goto CPyL93;
    }
    CPy_INCREF(cpy_r_r40);
CPyL29: ;
    cpy_r_r41 = CPyStatic_rtypes___int_rprimitive;
    if (unlikely(cpy_r_r41 == NULL)) {
        goto CPyL94;
    } else
        goto CPyL32;
CPyL30: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"int_rprimitive\" was not set");
    cpy_r_r42 = 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 862, CPyStatic_function___globals);
        goto CPyL81;
    }
    CPy_Unreachable();
CPyL32: ;
    cpy_r_r43 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r43 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "line", 862, CPyStatic_function___globals);
        goto CPyL95;
    }
    CPyTagged_INCREF(cpy_r_r43);
CPyL33: ;
    cpy_r_r44 = CPyDef_ops___Unbox(cpy_r_impl_to_use, cpy_r_r41, cpy_r_r43);
    CPyTagged_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 862, CPyStatic_function___globals);
        goto CPyL95;
    }
    cpy_r_r45 = CPyDef_builder___IRBuilder___add(cpy_r_r40, cpy_r_r44);
    CPy_DECREF(cpy_r_r44);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 862, CPyStatic_function___globals);
        goto CPyL93;
    }
    cpy_r_passed_id = cpy_r_r45;
    cpy_r_r46 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "builder", 864, CPyStatic_function___globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r46);
CPyL36: ;
    cpy_r_r47 = CPyDef_function___get_native_impl_ids(cpy_r_r46, cpy_r_fitem);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 864, CPyStatic_function___globals);
        goto CPyL96;
    }
    cpy_r_native_ids = cpy_r_r47;
    cpy_r_r48 = 0;
    cpy_r_r49 = PyDict_Size(cpy_r_native_ids);
    cpy_r_r50 = cpy_r_r49 << 1;
    cpy_r_r51 = CPyDict_GetItemsIter(cpy_r_native_ids);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 865, CPyStatic_function___globals);
        goto CPyL97;
    }
CPyL38: ;
    cpy_r_r52 = CPyDict_NextItem(cpy_r_r51, cpy_r_r48);
    cpy_r_r53 = cpy_r_r52.f1;
    cpy_r_r48 = cpy_r_r53;
    cpy_r_r54 = cpy_r_r52.f0;
    if (!cpy_r_r54) goto CPyL98;
    cpy_r_r55 = cpy_r_r52.f2;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = cpy_r_r52.f3;
    CPy_INCREF(cpy_r_r56);
    CPy_DECREF(cpy_r_r52.f2);
    CPy_DECREF(cpy_r_r52.f3);
    if (likely(Py_TYPE(cpy_r_r55) == CPyType_nodes___FuncDef))
        cpy_r_r57 = cpy_r_r55;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 865, CPyStatic_function___globals, "mypy.nodes.FuncDef", cpy_r_r55);
        goto CPyL99;
    }
    if (likely(PyLong_Check(cpy_r_r56)))
        cpy_r_r58 = CPyTagged_FromObject(cpy_r_r56);
    else {
        CPy_TypeError("int", cpy_r_r56); cpy_r_r58 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r56);
    if (unlikely(cpy_r_r58 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 865, CPyStatic_function___globals);
        goto CPyL100;
    }
    cpy_r_impl = cpy_r_r57;
    cpy_r_i = cpy_r_r58;
    cpy_r_r59 = CPY_INT_TAG;
    cpy_r_r60 = CPyDef_ops___BasicBlock(cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 866, CPyStatic_function___globals);
        goto CPyL101;
    }
    cpy_r_r61 = cpy_r_r60;
    cpy_r_r62 = CPY_INT_TAG;
    cpy_r_r63 = CPyDef_ops___BasicBlock(cpy_r_r62);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 866, CPyStatic_function___globals);
        goto CPyL102;
    }
    cpy_r_r64 = cpy_r_r63;
    cpy_r_call_impl = cpy_r_r61;
    cpy_r_next_impl = cpy_r_r64;
    cpy_r_r65 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "builder", 868, CPyStatic_function___globals);
        goto CPyL103;
    }
    CPy_INCREF(cpy_r_r65);
CPyL44: ;
    cpy_r_r66 = CPyDef_builder___IRBuilder___load_int(cpy_r_r65, cpy_r_i);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 868, CPyStatic_function___globals);
        goto CPyL104;
    }
    cpy_r_current_id = cpy_r_r66;
    cpy_r_r67 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "builder", 869, CPyStatic_function___globals);
        goto CPyL105;
    }
    CPy_INCREF(cpy_r_r67);
CPyL46: ;
    cpy_r_r68 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_r67)->_builder;
    CPy_INCREF(cpy_r_r68);
    CPy_DECREF(cpy_r_r67);
    cpy_r_r69 = CPyStatics[860]; /* '==' */
    cpy_r_r70 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r70 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "line", 870, CPyStatic_function___globals);
        goto CPyL106;
    }
    CPyTagged_INCREF(cpy_r_r70);
CPyL47: ;
    cpy_r_r71 = CPyDef_ll_builder___LowLevelIRBuilder___compare_tagged_condition(cpy_r_r68, cpy_r_passed_id, cpy_r_current_id, cpy_r_r69, cpy_r_call_impl, cpy_r_next_impl, cpy_r_r70);
    CPy_DECREF(cpy_r_current_id);
    CPyTagged_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r71 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 869, CPyStatic_function___globals);
        goto CPyL104;
    }
    cpy_r_r72 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "builder", 874, CPyStatic_function___globals);
        goto CPyL104;
    }
    CPy_INCREF(cpy_r_r72);
CPyL49: ;
    cpy_r_r73 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r72, cpy_r_call_impl);
    CPy_DECREF(cpy_r_call_impl);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r73 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 874, CPyStatic_function___globals);
        goto CPyL107;
    }
    cpy_r_r74 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_gen_native_func_call_and_return;
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "gen_native_func_call_and_return", 876, CPyStatic_function___globals);
        goto CPyL107;
    }
    CPy_INCREF(cpy_r_r74);
CPyL51: ;
    PyObject *cpy_r_r75[1] = {cpy_r_impl};
    cpy_r_r76 = (PyObject **)&cpy_r_r75;
    cpy_r_r77 = _PyObject_Vectorcall(cpy_r_r74, cpy_r_r76, 1, 0);
    CPy_DECREF(cpy_r_r74);
    if (unlikely(cpy_r_r77 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 876, CPyStatic_function___globals);
        goto CPyL107;
    } else
        goto CPyL108;
CPyL52: ;
    CPy_DECREF(cpy_r_impl);
    cpy_r_r78 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "builder", 877, CPyStatic_function___globals);
        goto CPyL109;
    }
    CPy_INCREF(cpy_r_r78);
CPyL53: ;
    cpy_r_r79 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r78, cpy_r_next_impl);
    CPy_DECREF(cpy_r_next_impl);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 877, CPyStatic_function___globals);
        goto CPyL110;
    }
    cpy_r_r80 = CPyDict_CheckSize(cpy_r_native_ids, cpy_r_r50);
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 865, CPyStatic_function___globals);
        goto CPyL110;
    } else
        goto CPyL38;
CPyL55: ;
    cpy_r_r81 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 865, CPyStatic_function___globals);
        goto CPyL93;
    }
    cpy_r_r82 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "builder", 880, CPyStatic_function___globals);
        goto CPyL93;
    }
    CPy_INCREF(cpy_r_r82);
CPyL57: ;
    cpy_r_r83 = CPY_INT_TAG;
    cpy_r_r84 = CPyDef_ops___Unreachable(cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 880, CPyStatic_function___globals);
        goto CPyL111;
    }
    cpy_r_r85 = CPyDef_builder___IRBuilder___add(cpy_r_r82, cpy_r_r84);
    CPy_DECREF(cpy_r_r84);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 880, CPyStatic_function___globals);
        goto CPyL93;
    } else
        goto CPyL112;
CPyL59: ;
    cpy_r_r86 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "builder", 882, CPyStatic_function___globals);
        goto CPyL93;
    }
    CPy_INCREF(cpy_r_r86);
CPyL60: ;
    cpy_r_r87 = CPyDef_builder___IRBuilder___activate_block(cpy_r_r86, cpy_r_non_native_call);
    CPy_DECREF(cpy_r_non_native_call);
    CPy_DECREF(cpy_r_r86);
    if (unlikely(cpy_r_r87 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 882, CPyStatic_function___globals);
        goto CPyL82;
    }
    cpy_r_r88 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "builder", 883, CPyStatic_function___globals);
        goto CPyL82;
    }
    CPy_INCREF(cpy_r_r88);
CPyL62: ;
    cpy_r_r89 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_arg_info;
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "arg_info", 884, CPyStatic_function___globals);
        goto CPyL113;
    }
    CPy_INCREF(cpy_r_r89);
CPyL63: ;
    cpy_r_r90 = CPySequenceTuple_GetItem(cpy_r_r89, 0);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 884, CPyStatic_function___globals);
        goto CPyL113;
    }
    if (likely(PyList_Check(cpy_r_r90)))
        cpy_r_r91 = cpy_r_r90;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 884, CPyStatic_function___globals, "list", cpy_r_r90);
        goto CPyL113;
    }
    cpy_r_r92 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r92 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "line", 884, CPyStatic_function___globals);
        goto CPyL114;
    }
    CPyTagged_INCREF(cpy_r_r92);
CPyL66: ;
    cpy_r_r93 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_arg_info;
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "arg_info", 884, CPyStatic_function___globals);
        goto CPyL115;
    }
    CPy_INCREF(cpy_r_r93);
CPyL67: ;
    cpy_r_r94 = CPySequenceTuple_GetItem(cpy_r_r93, 4);
    CPy_DECREF(cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 884, CPyStatic_function___globals);
        goto CPyL115;
    }
    if (likely(PyList_Check(cpy_r_r94)))
        cpy_r_r95 = cpy_r_r94;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 884, CPyStatic_function___globals, "list", cpy_r_r94);
        goto CPyL115;
    }
    cpy_r_r96 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_arg_info;
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "arg_info", 884, CPyStatic_function___globals);
        goto CPyL116;
    }
    CPy_INCREF(cpy_r_r96);
CPyL70: ;
    cpy_r_r97 = CPySequenceTuple_GetItem(cpy_r_r96, 2);
    CPy_DECREF(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 884, CPyStatic_function___globals);
        goto CPyL116;
    }
    if (likely(PyList_Check(cpy_r_r97)))
        cpy_r_r98 = cpy_r_r97;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 884, CPyStatic_function___globals, "list", cpy_r_r97);
        goto CPyL116;
    }
    cpy_r_r99 = CPyDef_builder___IRBuilder___py_call(cpy_r_r88, cpy_r_impl_to_use, cpy_r_r91, cpy_r_r92, cpy_r_r95, cpy_r_r98);
    CPy_DECREF(cpy_r_r91);
    CPyTagged_DECREF(cpy_r_r92);
    CPy_DECREF(cpy_r_r95);
    CPy_DECREF(cpy_r_r98);
    CPy_DECREF(cpy_r_r88);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 883, CPyStatic_function___globals);
        goto CPyL82;
    }
    cpy_r_ret_val = cpy_r_r99;
    cpy_r_r100 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "builder", 886, CPyStatic_function___globals);
        goto CPyL117;
    }
    CPy_INCREF(cpy_r_r100);
CPyL74: ;
    cpy_r_r101 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_current_func_decl;
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "current_func_decl", 886, CPyStatic_function___globals);
        goto CPyL118;
    }
    CPy_INCREF(cpy_r_r101);
CPyL75: ;
    cpy_r_r102 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_r101)->_sig;
    cpy_r_r103 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r102)->_ret_type;
    CPy_INCREF(cpy_r_r103);
    CPy_DECREF(cpy_r_r101);
    cpy_r_r104 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_line;
    if (unlikely(cpy_r_r104 == CPY_INT_TAG)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", "gen_calls_to_correct_impl_env", "line", 886, CPyStatic_function___globals);
        goto CPyL119;
    }
    CPyTagged_INCREF(cpy_r_r104);
CPyL76: ;
    cpy_r_r105 = 2;
    cpy_r_r106 = CPyDef_builder___IRBuilder___coerce(cpy_r_r100, cpy_r_ret_val, cpy_r_r103, cpy_r_r104, cpy_r_r105);
    CPy_DECREF(cpy_r_ret_val);
    CPy_DECREF(cpy_r_r103);
    CPyTagged_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 886, CPyStatic_function___globals);
        goto CPyL82;
    }
    cpy_r_coerced = cpy_r_r106;
    cpy_r_r107 = ((mypyc___irbuild___function___gen_calls_to_correct_impl_envObject *)cpy_r_r0)->_builder;
    if (unlikely(cpy_r_r107 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'builder' of 'gen_calls_to_correct_impl_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r107);
    }
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r107 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 887, CPyStatic_function___globals);
        goto CPyL120;
    }
CPyL78: ;
    cpy_r_r108 = CPY_INT_TAG;
    cpy_r_r109 = CPyDef_ops___Return(cpy_r_coerced, cpy_r_r108);
    CPy_DECREF(cpy_r_coerced);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 887, CPyStatic_function___globals);
        goto CPyL121;
    }
    cpy_r_r110 = CPyDef_builder___IRBuilder___add(cpy_r_r107, cpy_r_r109);
    CPy_DECREF(cpy_r_r109);
    CPy_DECREF(cpy_r_r107);
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 887, CPyStatic_function___globals);
        goto CPyL81;
    } else
        goto CPyL122;
CPyL80: ;
    return 1;
CPyL81: ;
    cpy_r_r111 = 2;
    return cpy_r_r111;
CPyL82: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL81;
CPyL83: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r10);
    goto CPyL81;
CPyL84: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_src);
    goto CPyL81;
CPyL85: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_typ);
    CPy_DecRef(cpy_r_src);
    CPy_DecRef(cpy_r_r22);
    goto CPyL81;
CPyL86: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r22);
    goto CPyL81;
CPyL87: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_int_type_obj);
    goto CPyL81;
CPyL88: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_int_type_obj);
    CPy_DecRef(cpy_r_r27);
    goto CPyL81;
CPyL89: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_is_int);
    goto CPyL81;
CPyL90: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_is_int);
    CPy_DecRef(cpy_r_r32);
    goto CPyL81;
CPyL91: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_is_int);
    CPy_DecRef(cpy_r_native_call);
    CPy_DecRef(cpy_r_non_native_call);
    goto CPyL81;
CPyL92: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_native_call);
    CPy_DecRef(cpy_r_non_native_call);
    goto CPyL81;
CPyL93: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    goto CPyL81;
CPyL94: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    CPy_DecRef(cpy_r_r40);
    goto CPyL30;
CPyL95: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    CPy_DecRef(cpy_r_r40);
    goto CPyL81;
CPyL96: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    CPy_DecRef(cpy_r_passed_id);
    goto CPyL81;
CPyL97: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    CPy_DecRef(cpy_r_passed_id);
    CPy_DecRef(cpy_r_native_ids);
    goto CPyL81;
CPyL98: ;
    CPy_DECREF(cpy_r_passed_id);
    CPy_DECREF(cpy_r_native_ids);
    CPy_DECREF(cpy_r_r51);
    CPy_DECREF(cpy_r_r52.f2);
    CPy_DECREF(cpy_r_r52.f3);
    goto CPyL55;
CPyL99: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    CPy_DecRef(cpy_r_passed_id);
    CPy_DecRef(cpy_r_native_ids);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r56);
    goto CPyL81;
CPyL100: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    CPy_DecRef(cpy_r_passed_id);
    CPy_DecRef(cpy_r_native_ids);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r57);
    goto CPyL81;
CPyL101: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    CPy_DecRef(cpy_r_passed_id);
    CPy_DecRef(cpy_r_native_ids);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_impl);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL81;
CPyL102: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    CPy_DecRef(cpy_r_passed_id);
    CPy_DecRef(cpy_r_native_ids);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_impl);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r61);
    goto CPyL81;
CPyL103: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    CPy_DecRef(cpy_r_passed_id);
    CPy_DecRef(cpy_r_native_ids);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_impl);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_call_impl);
    CPy_DecRef(cpy_r_next_impl);
    goto CPyL81;
CPyL104: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    CPy_DecRef(cpy_r_passed_id);
    CPy_DecRef(cpy_r_native_ids);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_impl);
    CPy_DecRef(cpy_r_call_impl);
    CPy_DecRef(cpy_r_next_impl);
    goto CPyL81;
CPyL105: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    CPy_DecRef(cpy_r_passed_id);
    CPy_DecRef(cpy_r_native_ids);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_impl);
    CPy_DecRef(cpy_r_call_impl);
    CPy_DecRef(cpy_r_next_impl);
    CPy_DecRef(cpy_r_current_id);
    goto CPyL81;
CPyL106: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    CPy_DecRef(cpy_r_passed_id);
    CPy_DecRef(cpy_r_native_ids);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_impl);
    CPy_DecRef(cpy_r_call_impl);
    CPy_DecRef(cpy_r_next_impl);
    CPy_DecRef(cpy_r_current_id);
    CPy_DecRef(cpy_r_r68);
    goto CPyL81;
CPyL107: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    CPy_DecRef(cpy_r_passed_id);
    CPy_DecRef(cpy_r_native_ids);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_impl);
    CPy_DecRef(cpy_r_next_impl);
    goto CPyL81;
CPyL108: ;
    CPy_DECREF(cpy_r_r77);
    goto CPyL52;
CPyL109: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    CPy_DecRef(cpy_r_passed_id);
    CPy_DecRef(cpy_r_native_ids);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_next_impl);
    goto CPyL81;
CPyL110: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    CPy_DecRef(cpy_r_passed_id);
    CPy_DecRef(cpy_r_native_ids);
    CPy_DecRef(cpy_r_r51);
    goto CPyL81;
CPyL111: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_non_native_call);
    CPy_DecRef(cpy_r_r82);
    goto CPyL81;
CPyL112: ;
    CPy_DECREF(cpy_r_r85);
    goto CPyL59;
CPyL113: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r88);
    goto CPyL81;
CPyL114: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r91);
    goto CPyL81;
CPyL115: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r91);
    CPyTagged_DecRef(cpy_r_r92);
    goto CPyL81;
CPyL116: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r88);
    CPy_DecRef(cpy_r_r91);
    CPyTagged_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r95);
    goto CPyL81;
CPyL117: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ret_val);
    goto CPyL81;
CPyL118: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ret_val);
    CPy_DecRef(cpy_r_r100);
    goto CPyL81;
CPyL119: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_ret_val);
    CPy_DecRef(cpy_r_r100);
    CPy_DecRef(cpy_r_r103);
    goto CPyL81;
CPyL120: ;
    CPy_DecRef(cpy_r_coerced);
    goto CPyL81;
CPyL121: ;
    CPy_DecRef(cpy_r_r107);
    goto CPyL81;
CPyL122: ;
    CPy_DECREF(cpy_r_r110);
    goto CPyL80;
}

PyObject *CPyPy_function___gen_calls_to_correct_impl(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "impl_to_use", "arg_info", "fitem", "line", 0};
    static CPyArg_Parser parser = {"OOOOO:gen_calls_to_correct_impl", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_impl_to_use;
    PyObject *obj_arg_info;
    PyObject *obj_fitem;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_impl_to_use, &obj_arg_info, &obj_fitem, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_impl_to_use;
    if (likely(PyObject_TypeCheck(obj_impl_to_use, CPyType_ops___Value)))
        arg_impl_to_use = obj_impl_to_use;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_impl_to_use); 
        goto fail;
    }
    PyObject * arg_arg_info;
    if (likely(PyTuple_Check(obj_arg_info)))
        arg_arg_info = obj_arg_info;
    else {
        CPy_TypeError("tuple", obj_arg_info); 
        goto fail;
    }
    PyObject *arg_fitem;
    if (likely(Py_TYPE(obj_fitem) == CPyType_nodes___FuncDef))
        arg_fitem = obj_fitem;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fitem); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    char retval = CPyDef_function___gen_calls_to_correct_impl(arg_builder, arg_impl_to_use, arg_arg_info, arg_fitem, arg_line);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "gen_calls_to_correct_impl", 841, CPyStatic_function___globals);
    return NULL;
}

tuple_T2OO CPyDef_function___gen_dispatch_func_ir(PyObject *cpy_r_builder, PyObject *cpy_r_fitem, PyObject *cpy_r_main_func_name, PyObject *cpy_r_dispatch_name, PyObject *cpy_r_sig) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    int32_t cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    int32_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    tuple_T5OOOOO cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r39;
    PyObject *cpy_r__;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_blocks;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_fn_info;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_dispatch_callable_class;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_func_reg;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_dispatch_func_ir;
    tuple_T2OO cpy_r_r52;
    tuple_T2OO cpy_r_r53;
    cpy_r_r0 = NULL;
    cpy_r_r1 = NULL;
    cpy_r_r2 = 2;
    cpy_r_r3 = 2;
    cpy_r_r4 = 2;
    cpy_r_r5 = 2;
    cpy_r_r6 = CPyDef_context___FuncInfo(cpy_r_fitem, cpy_r_dispatch_name, cpy_r_r0, cpy_r_r1, cpy_r_r2, cpy_r_r3, cpy_r_r4, cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 896, CPyStatic_function___globals);
        goto CPyL27;
    }
    cpy_r_r7 = CPyDef_builder___IRBuilder___enter(cpy_r_builder, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 896, CPyStatic_function___globals);
        goto CPyL27;
    }
    cpy_r_r8 = CPyDef_callable_class___setup_callable_class(cpy_r_builder);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 897, CPyStatic_function___globals);
        goto CPyL27;
    }
    cpy_r_r9 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r9 != NULL)) goto CPyL6;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 898, CPyStatic_function___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL6: ;
    cpy_r_r11 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPY_GET_ATTR(cpy_r_r11, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 898, CPyStatic_function___globals);
        goto CPyL27;
    }
CPyL7: ;
    cpy_r_r13 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_r12)->_ir;
    cpy_r_r14 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r13)->_attributes;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_dispatch_func_ir", "ClassIR", "attributes", 898, CPyStatic_function___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r14);
CPyL8: ;
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = CPyStatics[8345]; /* 'registry' */
    cpy_r_r16 = CPyDict_SetItem(cpy_r_r14, cpy_r_r15, cpy_r_r9);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r17 = cpy_r_r16 >= 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 898, CPyStatic_function___globals);
        goto CPyL27;
    }
    cpy_r_r18 = CPyStatic_rtypes___dict_rprimitive;
    if (likely(cpy_r_r18 != NULL)) goto CPyL12;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r19 = 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 899, CPyStatic_function___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r20 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r20);
    cpy_r_r21 = CPY_GET_ATTR(cpy_r_r20, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 899, CPyStatic_function___globals);
        goto CPyL27;
    }
CPyL13: ;
    cpy_r_r22 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_r21)->_ir;
    cpy_r_r23 = ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r22)->_attributes;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("mypyc/irbuild/function.py", "gen_dispatch_func_ir", "ClassIR", "attributes", 899, CPyStatic_function___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r23);
CPyL14: ;
    CPy_DECREF(cpy_r_r21);
    cpy_r_r24 = CPyStatics[8342]; /* 'dispatch_cache' */
    cpy_r_r25 = CPyDict_SetItem(cpy_r_r23, cpy_r_r24, cpy_r_r18);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r26 = cpy_r_r25 >= 0;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 899, CPyStatic_function___globals);
        goto CPyL27;
    }
    cpy_r_r27 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r27);
    cpy_r_r28 = CPY_GET_ATTR(cpy_r_r27, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 900, CPyStatic_function___globals);
        goto CPyL27;
    }
CPyL16: ;
    cpy_r_r29 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_r28)->_ir;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r29)->_has_dict = 1;
    CPy_DECREF(cpy_r_r28);
    cpy_r_r31 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r31);
    cpy_r_r32 = CPY_GET_ATTR(cpy_r_r31, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 901, CPyStatic_function___globals);
        goto CPyL27;
    }
CPyL17: ;
    cpy_r_r33 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_r32)->_ir;
    ((mypyc___ir___class_ir___ClassIRObject *)cpy_r_r33)->_needs_getseters = 1;
    CPy_DECREF(cpy_r_r32);
    cpy_r_r35 = CPyDef_function___generate_singledispatch_callable_class_ctor(cpy_r_builder);
    if (unlikely(cpy_r_r35 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 902, CPyStatic_function___globals);
        goto CPyL27;
    }
    cpy_r_r36 = CPyDef_function___generate_singledispatch_dispatch_function(cpy_r_builder, cpy_r_main_func_name, cpy_r_fitem);
    if (unlikely(cpy_r_r36 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 904, CPyStatic_function___globals);
        goto CPyL27;
    }
    cpy_r_r37 = CPyDef_builder___IRBuilder___leave(cpy_r_builder);
    if (unlikely(cpy_r_r37.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 905, CPyStatic_function___globals);
        goto CPyL27;
    }
    cpy_r_r38 = cpy_r_r37.f0;
    CPy_INCREF(cpy_r_r38);
    cpy_r_args = cpy_r_r38;
    cpy_r_r39 = cpy_r_r37.f1;
    CPy_INCREF(cpy_r_r39);
    cpy_r__ = cpy_r_r39;
    CPy_DECREF(cpy_r__);
    cpy_r_r40 = cpy_r_r37.f2;
    CPy_INCREF(cpy_r_r40);
    cpy_r_blocks = cpy_r_r40;
    cpy_r_r41 = cpy_r_r37.f3;
    CPy_INCREF(cpy_r_r41);
    cpy_r__ = cpy_r_r41;
    CPy_DECREF(cpy_r__);
    cpy_r_r42 = cpy_r_r37.f4;
    CPy_INCREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r37.f0);
    CPy_DECREF(cpy_r_r37.f1);
    CPy_DECREF(cpy_r_r37.f2);
    CPy_DECREF(cpy_r_r37.f3);
    CPy_DECREF(cpy_r_r37.f4);
    cpy_r_fn_info = cpy_r_r42;
    cpy_r_r43 = CPyDef_callable_class___add_call_to_callable_class(cpy_r_builder, cpy_r_args, cpy_r_blocks, cpy_r_sig, cpy_r_fn_info);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_blocks);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 906, CPyStatic_function___globals);
        goto CPyL30;
    }
    cpy_r_dispatch_callable_class = cpy_r_r43;
    cpy_r_r44 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_functions;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = PyList_Append(cpy_r_r44, cpy_r_dispatch_callable_class);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 907, CPyStatic_function___globals);
        goto CPyL31;
    }
    cpy_r_r47 = CPyDef_callable_class___add_get_to_callable_class(cpy_r_builder, cpy_r_fn_info);
    if (unlikely(cpy_r_r47 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 908, CPyStatic_function___globals);
        goto CPyL31;
    }
    cpy_r_r48 = CPyDef_function___add_register_method_to_callable_class(cpy_r_builder, cpy_r_fn_info);
    if (unlikely(cpy_r_r48 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 909, CPyStatic_function___globals);
        goto CPyL31;
    }
    cpy_r_r49 = CPyDef_callable_class___instantiate_callable_class(cpy_r_builder, cpy_r_fn_info);
    CPy_DECREF(cpy_r_fn_info);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 910, CPyStatic_function___globals);
        goto CPyL32;
    }
    cpy_r_func_reg = cpy_r_r49;
    cpy_r_r50 = ((mypyc___ir___func_ir___FuncIRObject *)cpy_r_dispatch_callable_class)->_decl;
    CPy_INCREF(cpy_r_r50);
    CPy_DECREF(cpy_r_dispatch_callable_class);
    cpy_r_r51 = CPyDef_function___generate_dispatch_glue_native_function(cpy_r_builder, cpy_r_fitem, cpy_r_r50, cpy_r_dispatch_name);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 911, CPyStatic_function___globals);
        goto CPyL33;
    }
    cpy_r_dispatch_func_ir = cpy_r_r51;
    cpy_r_r52.f0 = cpy_r_dispatch_func_ir;
    cpy_r_r52.f1 = cpy_r_func_reg;
    CPy_INCREF(cpy_r_r52.f0);
    CPy_INCREF(cpy_r_r52.f1);
    CPy_DECREF(cpy_r_dispatch_func_ir);
    CPy_DECREF(cpy_r_func_reg);
    return cpy_r_r52;
CPyL27: ;
    tuple_T2OO __tmp10248 = { NULL, NULL };
    cpy_r_r53 = __tmp10248;
    return cpy_r_r53;
CPyL28: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL27;
CPyL29: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_fn_info);
    goto CPyL27;
CPyL31: ;
    CPy_DecRef(cpy_r_fn_info);
    CPy_DecRef(cpy_r_dispatch_callable_class);
    goto CPyL27;
CPyL32: ;
    CPy_DecRef(cpy_r_dispatch_callable_class);
    goto CPyL27;
CPyL33: ;
    CPy_DecRef(cpy_r_func_reg);
    goto CPyL27;
}

PyObject *CPyPy_function___gen_dispatch_func_ir(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fitem", "main_func_name", "dispatch_name", "sig", 0};
    static CPyArg_Parser parser = {"OOOOO:gen_dispatch_func_ir", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fitem;
    PyObject *obj_main_func_name;
    PyObject *obj_dispatch_name;
    PyObject *obj_sig;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fitem, &obj_main_func_name, &obj_dispatch_name, &obj_sig)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fitem;
    if (likely(Py_TYPE(obj_fitem) == CPyType_nodes___FuncDef))
        arg_fitem = obj_fitem;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fitem); 
        goto fail;
    }
    PyObject *arg_main_func_name;
    if (likely(PyUnicode_Check(obj_main_func_name)))
        arg_main_func_name = obj_main_func_name;
    else {
        CPy_TypeError("str", obj_main_func_name); 
        goto fail;
    }
    PyObject *arg_dispatch_name;
    if (likely(PyUnicode_Check(obj_dispatch_name)))
        arg_dispatch_name = obj_dispatch_name;
    else {
        CPy_TypeError("str", obj_dispatch_name); 
        goto fail;
    }
    PyObject *arg_sig;
    if (likely(Py_TYPE(obj_sig) == CPyType_func_ir___FuncSignature))
        arg_sig = obj_sig;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncSignature", obj_sig); 
        goto fail;
    }
    tuple_T2OO retval = CPyDef_function___gen_dispatch_func_ir(arg_builder, arg_fitem, arg_main_func_name, arg_dispatch_name, arg_sig);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(2);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10249 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp10249);
    PyObject *__tmp10250 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp10250);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "gen_dispatch_func_ir", 890, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___generate_dispatch_glue_native_function(PyObject *cpy_r_builder, PyObject *cpy_r_fitem, PyObject *cpy_r_callable_class_decl, PyObject *cpy_r_dispatch_name) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_callable_class;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_decl;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_arg_info;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    CPyPtr cpy_r_r21;
    CPyPtr cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_arg_kinds;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_arg_names;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_ret_val;
    CPyTagged cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    tuple_T5OOOOO cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_arg_regs;
    PyObject *cpy_r_r40;
    PyObject *cpy_r__;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_blocks;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_fn_info;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    cpy_r_r0 = ((mypy___nodes___FuncDefObject *)cpy_r_fitem)->_line;
    CPyTagged_INCREF(cpy_r_r0);
    cpy_r_line = cpy_r_r0;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_builder___IRBuilder___enter(cpy_r_builder, cpy_r_r1);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 922, CPyStatic_function___globals);
        goto CPyL28;
    }
    cpy_r_r3 = CPyDef_builder___IRBuilder___load_global_str(cpy_r_builder, cpy_r_dispatch_name, cpy_r_line);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 924, CPyStatic_function___globals);
        goto CPyL28;
    }
    cpy_r_callable_class = cpy_r_r3;
    cpy_r_r4 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_mapper;
    cpy_r_r5 = ((mypyc___irbuild___mapper___MapperObject *)cpy_r_r4)->_func_to_decl;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPyDict_GetItem(cpy_r_r5, cpy_r_fitem);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 925, CPyStatic_function___globals);
        goto CPyL29;
    }
    if (likely(Py_TYPE(cpy_r_r6) == CPyType_func_ir___FuncDecl))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 925, CPyStatic_function___globals, "mypyc.ir.func_ir.FuncDecl", cpy_r_r6);
        goto CPyL29;
    }
    cpy_r_decl = cpy_r_r7;
    cpy_r_r8 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_decl)->_sig;
    cpy_r_r9 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r8)->_args;
    CPy_INCREF(cpy_r_r9);
    cpy_r_r10 = CPyDef_function___get_args(cpy_r_builder, cpy_r_r9, cpy_r_line);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 926, CPyStatic_function___globals);
        goto CPyL30;
    }
    cpy_r_arg_info = cpy_r_r10;
    cpy_r_r11 = PyList_New(1);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 927, CPyStatic_function___globals);
        goto CPyL31;
    }
    cpy_r_r12 = (CPyPtr)&((PyListObject *)cpy_r_r11)->ob_item;
    cpy_r_r13 = *(CPyPtr *)cpy_r_r12;
    *(PyObject * *)cpy_r_r13 = cpy_r_callable_class;
    cpy_r_r14 = CPySequenceTuple_GetItem(cpy_r_arg_info, 0);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 927, CPyStatic_function___globals);
        goto CPyL32;
    }
    if (likely(PyList_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 927, CPyStatic_function___globals, "list", cpy_r_r14);
        goto CPyL32;
    }
    cpy_r_r16 = PyNumber_Add(cpy_r_r11, cpy_r_r15);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 927, CPyStatic_function___globals);
        goto CPyL33;
    }
    if (likely(PyList_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 927, CPyStatic_function___globals, "list", cpy_r_r16);
        goto CPyL33;
    }
    cpy_r_args = cpy_r_r17;
    cpy_r_r18 = CPyStatic_nodes___ArgKind___ARG_POS;
    if (unlikely(cpy_r_r18 == NULL)) {
        goto CPyL34;
    } else
        goto CPyL13;
CPyL11: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_POS\" was not set");
    cpy_r_r19 = 0;
    if (unlikely(!cpy_r_r19)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 928, CPyStatic_function___globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r20 = PyList_New(1);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 928, CPyStatic_function___globals);
        goto CPyL35;
    }
    cpy_r_r21 = (CPyPtr)&((PyListObject *)cpy_r_r20)->ob_item;
    cpy_r_r22 = *(CPyPtr *)cpy_r_r21;
    CPy_INCREF(cpy_r_r18);
    *(PyObject * *)cpy_r_r22 = cpy_r_r18;
    cpy_r_r23 = CPySequenceTuple_GetItem(cpy_r_arg_info, 4);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 928, CPyStatic_function___globals);
        goto CPyL36;
    }
    if (likely(PyList_Check(cpy_r_r23)))
        cpy_r_r24 = cpy_r_r23;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 928, CPyStatic_function___globals, "list", cpy_r_r23);
        goto CPyL36;
    }
    cpy_r_r25 = PyNumber_Add(cpy_r_r20, cpy_r_r24);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 928, CPyStatic_function___globals);
        goto CPyL35;
    }
    if (likely(PyList_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 928, CPyStatic_function___globals, "list", cpy_r_r25);
        goto CPyL35;
    }
    cpy_r_arg_kinds = cpy_r_r26;
    cpy_r_r27 = CPySequenceTuple_GetItem(cpy_r_arg_info, 2);
    CPy_DECREF(cpy_r_arg_info);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 929, CPyStatic_function___globals);
        goto CPyL37;
    }
    if (likely(PyList_Check(cpy_r_r27)))
        cpy_r_r28 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 929, CPyStatic_function___globals, "list", cpy_r_r27);
        goto CPyL37;
    }
    cpy_r_arg_names = cpy_r_r28;
    cpy_r_r29 = CPyStatics[730]; /* 'self' */
    cpy_r_r30 = CPyList_Insert(cpy_r_arg_names, 0, cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 930, CPyStatic_function___globals);
        goto CPyL38;
    }
    cpy_r_r32 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r32);
    cpy_r_r33 = NULL;
    cpy_r_r34 = CPyDef_ll_builder___LowLevelIRBuilder___call(cpy_r_r32, cpy_r_callable_class_decl, cpy_r_args, cpy_r_arg_kinds, cpy_r_arg_names, cpy_r_line, cpy_r_r33);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_arg_kinds);
    CPy_DECREF(cpy_r_arg_names);
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 931, CPyStatic_function___globals);
        goto CPyL39;
    }
    cpy_r_ret_val = cpy_r_r34;
    cpy_r_r35 = CPY_INT_TAG;
    cpy_r_r36 = CPyDef_ops___Return(cpy_r_ret_val, cpy_r_r35);
    CPy_DECREF(cpy_r_ret_val);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 932, CPyStatic_function___globals);
        goto CPyL39;
    }
    cpy_r_r37 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 932, CPyStatic_function___globals);
        goto CPyL39;
    } else
        goto CPyL40;
CPyL24: ;
    cpy_r_r38 = CPyDef_builder___IRBuilder___leave(cpy_r_builder);
    if (unlikely(cpy_r_r38.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 933, CPyStatic_function___globals);
        goto CPyL39;
    }
    cpy_r_r39 = cpy_r_r38.f0;
    CPy_INCREF(cpy_r_r39);
    cpy_r_arg_regs = cpy_r_r39;
    cpy_r_r40 = cpy_r_r38.f1;
    CPy_INCREF(cpy_r_r40);
    cpy_r__ = cpy_r_r40;
    CPy_DECREF(cpy_r__);
    cpy_r_r41 = cpy_r_r38.f2;
    CPy_INCREF(cpy_r_r41);
    cpy_r_blocks = cpy_r_r41;
    cpy_r_r42 = cpy_r_r38.f3;
    CPy_INCREF(cpy_r_r42);
    cpy_r__ = cpy_r_r42;
    CPy_DECREF(cpy_r__);
    cpy_r_r43 = cpy_r_r38.f4;
    CPy_INCREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r38.f0);
    CPy_DECREF(cpy_r_r38.f1);
    CPy_DECREF(cpy_r_r38.f2);
    CPy_DECREF(cpy_r_r38.f3);
    CPy_DECREF(cpy_r_r38.f4);
    cpy_r_fn_info = cpy_r_r43;
    CPy_DECREF(cpy_r_fn_info);
    cpy_r_r44 = CPY_INT_TAG;
    cpy_r_r45 = NULL;
    cpy_r_r46 = CPyDef_func_ir___FuncIR(cpy_r_decl, cpy_r_arg_regs, cpy_r_blocks, cpy_r_r44, cpy_r_r45);
    CPy_DECREF(cpy_r_decl);
    CPy_DECREF(cpy_r_arg_regs);
    CPy_DECREF(cpy_r_blocks);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 934, CPyStatic_function___globals);
        goto CPyL27;
    }
    return cpy_r_r46;
CPyL27: ;
    cpy_r_r47 = NULL;
    return cpy_r_r47;
CPyL28: ;
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL27;
CPyL29: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_callable_class);
    goto CPyL27;
CPyL30: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_callable_class);
    CPy_DecRef(cpy_r_decl);
    goto CPyL27;
CPyL31: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_callable_class);
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_arg_info);
    goto CPyL27;
CPyL32: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_r11);
    goto CPyL27;
CPyL33: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_arg_info);
    goto CPyL27;
CPyL34: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_args);
    goto CPyL11;
CPyL35: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_args);
    goto CPyL27;
CPyL36: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_arg_info);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_r20);
    goto CPyL27;
CPyL37: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_kinds);
    goto CPyL27;
CPyL38: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_decl);
    CPy_DecRef(cpy_r_args);
    CPy_DecRef(cpy_r_arg_kinds);
    CPy_DecRef(cpy_r_arg_names);
    goto CPyL27;
CPyL39: ;
    CPy_DecRef(cpy_r_decl);
    goto CPyL27;
CPyL40: ;
    CPy_DECREF(cpy_r_r37);
    goto CPyL24;
}

PyObject *CPyPy_function___generate_dispatch_glue_native_function(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fitem", "callable_class_decl", "dispatch_name", 0};
    static CPyArg_Parser parser = {"OOOO:generate_dispatch_glue_native_function", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fitem;
    PyObject *obj_callable_class_decl;
    PyObject *obj_dispatch_name;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fitem, &obj_callable_class_decl, &obj_dispatch_name)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fitem;
    if (likely(Py_TYPE(obj_fitem) == CPyType_nodes___FuncDef))
        arg_fitem = obj_fitem;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fitem); 
        goto fail;
    }
    PyObject *arg_callable_class_decl;
    if (likely(Py_TYPE(obj_callable_class_decl) == CPyType_func_ir___FuncDecl))
        arg_callable_class_decl = obj_callable_class_decl;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_callable_class_decl); 
        goto fail;
    }
    PyObject *arg_dispatch_name;
    if (likely(PyUnicode_Check(obj_dispatch_name)))
        arg_dispatch_name = obj_dispatch_name;
    else {
        CPy_TypeError("str", obj_dispatch_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_function___generate_dispatch_glue_native_function(arg_builder, arg_fitem, arg_callable_class_decl, arg_dispatch_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "generate_dispatch_glue_native_function", 918, CPyStatic_function___globals);
    return NULL;
}

char CPyDef_function___generate_singledispatch_callable_class_ctor(PyObject *cpy_r_builder) {
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_class_ir;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject **cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_empty_dict;
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
    PyObject *cpy_r_cache_dict;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_dispatch_cache_str;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    CPyPtr cpy_r_r43;
    CPyPtr cpy_r_r44;
    CPyPtr cpy_r_r45;
    CPyPtr cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    tuple_T3OOO cpy_r_r53;
    tuple_T3OOO cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject **cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    tuple_T3OOO cpy_r_r65;
    tuple_T3OOO cpy_r_r66;
    tuple_T3OOO cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject **cpy_r_r70;
    PyObject *cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    cpy_r_line = -2;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_fn_info;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_r0, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 940, CPyStatic_function___globals);
        goto CPyL54;
    }
CPyL1: ;
    cpy_r_r2 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_r1)->_ir;
    CPy_INCREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    cpy_r_class_ir = cpy_r_r2;
    cpy_r_r3 = CPyStatics[288]; /* '__init__' */
    cpy_r_r4 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r4 == NULL)) {
        goto CPyL55;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 941, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r6 = CPyStatics[5309]; /* 'enter_method' */
    PyObject *cpy_r_r7[4] = {cpy_r_builder, cpy_r_class_ir, cpy_r_r3, cpy_r_r4};
    cpy_r_r8 = (PyObject **)&cpy_r_r7;
    cpy_r_r9 = PyObject_VectorcallMethod(cpy_r_r6, cpy_r_r8, 9223372036854775812ULL, 0);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 941, CPyStatic_function___globals);
        goto CPyL56;
    }
    CPy_DECREF(cpy_r_class_ir);
    cpy_r_r10 = PyObject_Type(cpy_r_r9);
    cpy_r_r11 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r12 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 941, CPyStatic_function___globals);
        goto CPyL57;
    }
    cpy_r_r13 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r10, cpy_r_r13);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 941, CPyStatic_function___globals);
        goto CPyL58;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_r9};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = _PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 941, CPyStatic_function___globals);
        goto CPyL58;
    } else
        goto CPyL59;
CPyL8: ;
    cpy_r_r18 = 1;
    cpy_r_r19 = CPyStatic_function___globals;
    cpy_r_r20 = CPyStatics[8148]; /* 'dict_new_op' */
    cpy_r_r21 = CPyDict_GetItem(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 942, CPyStatic_function___globals);
        goto CPyL60;
    }
    if (likely(PyTuple_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 942, CPyStatic_function___globals, "tuple", cpy_r_r21);
        goto CPyL60;
    }
    cpy_r_r23 = PyList_New(0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 942, CPyStatic_function___globals);
        goto CPyL61;
    }
    cpy_r_r24 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r22, cpy_r_r23, cpy_r_line);
    CPy_DECREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 942, CPyStatic_function___globals);
        goto CPyL60;
    }
    cpy_r_empty_dict = cpy_r_r24;
    cpy_r_r25 = CPyDef_builder___IRBuilder___self(cpy_r_builder);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 943, CPyStatic_function___globals);
        goto CPyL62;
    }
    cpy_r_r26 = CPyStatics[8345]; /* 'registry' */
    cpy_r_r27 = CPyDef_ops___SetAttr(cpy_r_r25, cpy_r_r26, cpy_r_empty_dict, cpy_r_line);
    CPy_DECREF(cpy_r_r25);
    CPy_DECREF(cpy_r_empty_dict);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 943, CPyStatic_function___globals);
        goto CPyL60;
    }
    cpy_r_r28 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 943, CPyStatic_function___globals);
        goto CPyL60;
    } else
        goto CPyL63;
CPyL16: ;
    cpy_r_r29 = CPyStatic_function___globals;
    cpy_r_r30 = CPyStatics[8148]; /* 'dict_new_op' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 944, CPyStatic_function___globals);
        goto CPyL60;
    }
    if (likely(PyTuple_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 944, CPyStatic_function___globals, "tuple", cpy_r_r31);
        goto CPyL60;
    }
    cpy_r_r33 = PyList_New(0);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 944, CPyStatic_function___globals);
        goto CPyL64;
    }
    cpy_r_r34 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r32, cpy_r_r33, cpy_r_line);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 944, CPyStatic_function___globals);
        goto CPyL60;
    }
    cpy_r_cache_dict = cpy_r_r34;
    cpy_r_r35 = CPyStatics[8342]; /* 'dispatch_cache' */
    cpy_r_r36 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 945, CPyStatic_function___globals);
        goto CPyL65;
    }
    cpy_r_dispatch_cache_str = cpy_r_r36;
    cpy_r_r37 = CPyStatic_function___globals;
    cpy_r_r38 = CPyStatics[8065]; /* 'py_setattr_op' */
    cpy_r_r39 = CPyDict_GetItem(cpy_r_r37, cpy_r_r38);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 947, CPyStatic_function___globals);
        goto CPyL66;
    }
    if (likely(PyTuple_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 947, CPyStatic_function___globals, "tuple", cpy_r_r39);
        goto CPyL66;
    }
    cpy_r_r41 = CPyDef_builder___IRBuilder___self(cpy_r_builder);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 947, CPyStatic_function___globals);
        goto CPyL67;
    }
    cpy_r_r42 = PyList_New(3);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 947, CPyStatic_function___globals);
        goto CPyL68;
    }
    cpy_r_r43 = (CPyPtr)&((PyListObject *)cpy_r_r42)->ob_item;
    cpy_r_r44 = *(CPyPtr *)cpy_r_r43;
    *(PyObject * *)cpy_r_r44 = cpy_r_r41;
    cpy_r_r45 = cpy_r_r44 + 8;
    *(PyObject * *)cpy_r_r45 = cpy_r_dispatch_cache_str;
    cpy_r_r46 = cpy_r_r44 + 16;
    *(PyObject * *)cpy_r_r46 = cpy_r_cache_dict;
    cpy_r_r47 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r40, cpy_r_r42, cpy_r_line);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 947, CPyStatic_function___globals);
        goto CPyL60;
    } else
        goto CPyL69;
CPyL26: ;
    cpy_r_r48 = CPyStatic_rtypes___bool_rprimitive;
    if (unlikely(cpy_r_r48 == NULL)) {
        goto CPyL70;
    } else
        goto CPyL29;
CPyL27: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"bool_rprimitive\" was not set");
    cpy_r_r49 = 0;
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 949, CPyStatic_function___globals);
        goto CPyL32;
    } else
        goto CPyL71;
CPyL28: ;
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r50 = CPyDef_ops___Integer(2, cpy_r_r48, cpy_r_line);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 949, CPyStatic_function___globals);
        goto CPyL60;
    }
    cpy_r_r51 = CPyDef_ops___Return(cpy_r_r50, cpy_r_line);
    CPy_DECREF(cpy_r_r50);
    CPyTagged_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 949, CPyStatic_function___globals);
        goto CPyL32;
    }
    cpy_r_r52 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 949, CPyStatic_function___globals);
    } else
        goto CPyL72;
CPyL32: ;
    cpy_r_r53 = CPy_CatchError();
    cpy_r_r18 = 0;
    cpy_r_r54 = CPy_GetExcInfo();
    cpy_r_r55 = cpy_r_r54.f0;
    CPy_INCREF(cpy_r_r55);
    cpy_r_r56 = cpy_r_r54.f1;
    CPy_INCREF(cpy_r_r56);
    cpy_r_r57 = cpy_r_r54.f2;
    CPy_INCREF(cpy_r_r57);
    CPy_DecRef(cpy_r_r54.f0);
    CPy_DecRef(cpy_r_r54.f1);
    CPy_DecRef(cpy_r_r54.f2);
    PyObject *cpy_r_r58[4] = {cpy_r_r9, cpy_r_r55, cpy_r_r56, cpy_r_r57};
    cpy_r_r59 = (PyObject **)&cpy_r_r58;
    cpy_r_r60 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r59, 4, 0);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 941, CPyStatic_function___globals);
        goto CPyL73;
    }
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r57);
    cpy_r_r61 = PyObject_IsTrue(cpy_r_r60);
    CPy_DecRef(cpy_r_r60);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 941, CPyStatic_function___globals);
        goto CPyL38;
    }
    cpy_r_r63 = cpy_r_r61;
    if (cpy_r_r63) goto CPyL37;
    CPy_Reraise();
    if (!0) {
        goto CPyL38;
    } else
        goto CPyL74;
CPyL36: ;
    CPy_Unreachable();
CPyL37: ;
    CPy_RestoreExcInfo(cpy_r_r53);
    CPy_DecRef(cpy_r_r53.f0);
    CPy_DecRef(cpy_r_r53.f1);
    CPy_DecRef(cpy_r_r53.f2);
    goto CPyL40;
CPyL38: ;
    CPy_RestoreExcInfo(cpy_r_r53);
    CPy_DecRef(cpy_r_r53.f0);
    CPy_DecRef(cpy_r_r53.f1);
    CPy_DecRef(cpy_r_r53.f2);
    cpy_r_r64 = CPy_KeepPropagating();
    if (!cpy_r_r64) {
        goto CPyL41;
    } else
        goto CPyL75;
CPyL39: ;
    CPy_Unreachable();
CPyL40: ;
    tuple_T3OOO __tmp10251 = { NULL, NULL, NULL };
    cpy_r_r65 = __tmp10251;
    cpy_r_r66 = cpy_r_r65;
    goto CPyL42;
CPyL41: ;
    cpy_r_r67 = CPy_CatchError();
    cpy_r_r66 = cpy_r_r67;
CPyL42: ;
    if (!cpy_r_r18) goto CPyL76;
    cpy_r_r68 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r69[4] = {cpy_r_r9, cpy_r_r68, cpy_r_r68, cpy_r_r68};
    cpy_r_r70 = (PyObject **)&cpy_r_r69;
    cpy_r_r71 = _PyObject_Vectorcall(cpy_r_r12, cpy_r_r70, 4, 0);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 941, CPyStatic_function___globals);
        goto CPyL77;
    } else
        goto CPyL78;
CPyL44: ;
    CPy_DECREF(cpy_r_r9);
CPyL45: ;
    if (cpy_r_r66.f0 == NULL) goto CPyL52;
    CPy_Reraise();
    if (!0) {
        goto CPyL48;
    } else
        goto CPyL79;
CPyL47: ;
    CPy_Unreachable();
CPyL48: ;
    if (cpy_r_r66.f0 == NULL) goto CPyL50;
    CPy_RestoreExcInfo(cpy_r_r66);
    CPy_XDECREF(cpy_r_r66.f0);
    CPy_XDECREF(cpy_r_r66.f1);
    CPy_XDECREF(cpy_r_r66.f2);
CPyL50: ;
    cpy_r_r72 = CPy_KeepPropagating();
    if (!cpy_r_r72) goto CPyL53;
    CPy_Unreachable();
CPyL52: ;
    return 1;
CPyL53: ;
    cpy_r_r73 = 2;
    return cpy_r_r73;
CPyL54: ;
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL53;
CPyL55: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_class_ir);
    goto CPyL2;
CPyL56: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_class_ir);
    goto CPyL53;
CPyL57: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    goto CPyL53;
CPyL58: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL53;
CPyL59: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL8;
CPyL60: ;
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL32;
CPyL61: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r22);
    goto CPyL32;
CPyL62: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_empty_dict);
    goto CPyL32;
CPyL63: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL16;
CPyL64: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r32);
    goto CPyL32;
CPyL65: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_cache_dict);
    goto CPyL32;
CPyL66: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_cache_dict);
    CPy_DecRef(cpy_r_dispatch_cache_str);
    goto CPyL32;
CPyL67: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_cache_dict);
    CPy_DecRef(cpy_r_dispatch_cache_str);
    CPy_DecRef(cpy_r_r40);
    goto CPyL32;
CPyL68: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_cache_dict);
    CPy_DecRef(cpy_r_dispatch_cache_str);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r41);
    goto CPyL32;
CPyL69: ;
    CPy_DECREF(cpy_r_r47);
    goto CPyL26;
CPyL70: ;
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL27;
CPyL71: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL28;
CPyL72: ;
    CPy_DECREF(cpy_r_r52);
    goto CPyL40;
CPyL73: ;
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r56);
    CPy_DecRef(cpy_r_r57);
    goto CPyL38;
CPyL74: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r53.f0);
    CPy_DecRef(cpy_r_r53.f1);
    CPy_DecRef(cpy_r_r53.f2);
    goto CPyL36;
CPyL75: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r12);
    goto CPyL39;
CPyL76: ;
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r12);
    goto CPyL45;
CPyL77: ;
    CPy_DecRef(cpy_r_r9);
    goto CPyL48;
CPyL78: ;
    CPy_DECREF(cpy_r_r71);
    goto CPyL44;
CPyL79: ;
    CPy_XDECREF(cpy_r_r66.f0);
    CPy_XDECREF(cpy_r_r66.f1);
    CPy_XDECREF(cpy_r_r66.f2);
    goto CPyL47;
}

PyObject *CPyPy_function___generate_singledispatch_callable_class_ctor(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", 0};
    static CPyArg_Parser parser = {"O:generate_singledispatch_callable_class_ctor", kwlist, 0};
    PyObject *obj_builder;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_builder)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    char retval = CPyDef_function___generate_singledispatch_callable_class_ctor(arg_builder);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "generate_singledispatch_callable_class_ctor", 937, CPyStatic_function___globals);
    return NULL;
}

char CPyDef_function___add_register_method_to_callable_class(PyObject *cpy_r_builder, PyObject *cpy_r_fn_info) {
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_cls_arg;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_func_arg;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    CPyPtr cpy_r_r35;
    CPyPtr cpy_r_r36;
    CPyPtr cpy_r_r37;
    CPyPtr cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_ret_val;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    tuple_T3OOO cpy_r_r42;
    tuple_T3OOO cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject **cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    char cpy_r_r53;
    tuple_T3OOO cpy_r_r54;
    tuple_T3OOO cpy_r_r55;
    tuple_T3OOO cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject **cpy_r_r59;
    PyObject *cpy_r_r60;
    char cpy_r_r61;
    char cpy_r_r62;
    cpy_r_line = -2;
    cpy_r_r0 = CPY_GET_ATTR(cpy_r_fn_info, CPyType_context___FuncInfo, 4, mypyc___irbuild___context___FuncInfoObject, PyObject *); /* callable_class */
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 954, CPyStatic_function___globals);
        goto CPyL49;
    }
CPyL1: ;
    cpy_r_r1 = ((mypyc___irbuild___context___ImplicitClassObject *)cpy_r_r0)->_ir;
    CPy_INCREF(cpy_r_r1);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = CPyStatics[8346]; /* 'register' */
    cpy_r_r3 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL50;
    } else
        goto CPyL4;
CPyL2: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 954, CPyStatic_function___globals);
        goto CPyL48;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = CPyStatics[5309]; /* 'enter_method' */
    PyObject *cpy_r_r6[4] = {cpy_r_builder, cpy_r_r1, cpy_r_r2, cpy_r_r3};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775812ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 954, CPyStatic_function___globals);
        goto CPyL51;
    }
    CPy_DECREF(cpy_r_r1);
    cpy_r_r9 = PyObject_Type(cpy_r_r8);
    cpy_r_r10 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 954, CPyStatic_function___globals);
        goto CPyL52;
    }
    cpy_r_r12 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r9, cpy_r_r12);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 954, CPyStatic_function___globals);
        goto CPyL53;
    }
    PyObject *cpy_r_r14[1] = {cpy_r_r8};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = _PyObject_Vectorcall(cpy_r_r13, cpy_r_r15, 1, 0);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 954, CPyStatic_function___globals);
        goto CPyL53;
    } else
        goto CPyL54;
CPyL8: ;
    cpy_r_r17 = 1;
    cpy_r_r18 = CPyStatics[729]; /* 'cls' */
    cpy_r_r19 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r19 == NULL)) {
        goto CPyL55;
    } else
        goto CPyL12;
CPyL10: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 955, CPyStatic_function___globals);
        goto CPyL27;
    } else
        goto CPyL56;
CPyL11: ;
    CPy_Unreachable();
CPyL12: ;
    cpy_r_r21 = NULL;
    cpy_r_r22 = CPyDef_builder___IRBuilder___add_argument(cpy_r_builder, cpy_r_r18, cpy_r_r19, cpy_r_r21);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 955, CPyStatic_function___globals);
        goto CPyL57;
    }
    cpy_r_cls_arg = cpy_r_r22;
    cpy_r_r23 = CPyStatics[2429]; /* 'func' */
    cpy_r_r24 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r24 == NULL)) {
        goto CPyL58;
    } else
        goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 956, CPyStatic_function___globals);
        goto CPyL27;
    } else
        goto CPyL59;
CPyL15: ;
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r26 = CPyStatic_nodes___ArgKind___ARG_OPT;
    if (unlikely(cpy_r_r26 == NULL)) {
        goto CPyL60;
    } else
        goto CPyL19;
CPyL17: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"ARG_OPT\" was not set");
    cpy_r_r27 = 0;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 956, CPyStatic_function___globals);
        goto CPyL27;
    } else
        goto CPyL61;
CPyL18: ;
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r28 = CPyDef_builder___IRBuilder___add_argument(cpy_r_builder, cpy_r_r23, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 956, CPyStatic_function___globals);
        goto CPyL62;
    }
    cpy_r_func_arg = cpy_r_r28;
    cpy_r_r29 = CPyStatic_function___globals;
    cpy_r_r30 = CPyStatics[8347]; /* 'register_function' */
    cpy_r_r31 = CPyDict_GetItem(cpy_r_r29, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 957, CPyStatic_function___globals);
        goto CPyL63;
    }
    if (likely(PyTuple_Check(cpy_r_r31)))
        cpy_r_r32 = cpy_r_r31;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 957, CPyStatic_function___globals, "tuple", cpy_r_r31);
        goto CPyL63;
    }
    cpy_r_r33 = CPyDef_builder___IRBuilder___self(cpy_r_builder);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 957, CPyStatic_function___globals);
        goto CPyL64;
    }
    cpy_r_r34 = PyList_New(3);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 957, CPyStatic_function___globals);
        goto CPyL65;
    }
    cpy_r_r35 = (CPyPtr)&((PyListObject *)cpy_r_r34)->ob_item;
    cpy_r_r36 = *(CPyPtr *)cpy_r_r35;
    *(PyObject * *)cpy_r_r36 = cpy_r_r33;
    cpy_r_r37 = cpy_r_r36 + 8;
    *(PyObject * *)cpy_r_r37 = cpy_r_cls_arg;
    cpy_r_r38 = cpy_r_r36 + 16;
    *(PyObject * *)cpy_r_r38 = cpy_r_func_arg;
    cpy_r_r39 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r32, cpy_r_r34, cpy_r_line);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r34);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 957, CPyStatic_function___globals);
        goto CPyL57;
    }
    cpy_r_ret_val = cpy_r_r39;
    cpy_r_r40 = CPyDef_ops___Return(cpy_r_ret_val, cpy_r_line);
    CPy_DECREF(cpy_r_ret_val);
    CPyTagged_DECREF(cpy_r_line);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 958, CPyStatic_function___globals);
        goto CPyL27;
    }
    cpy_r_r41 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 958, CPyStatic_function___globals);
    } else
        goto CPyL66;
CPyL27: ;
    cpy_r_r42 = CPy_CatchError();
    cpy_r_r17 = 0;
    cpy_r_r43 = CPy_GetExcInfo();
    cpy_r_r44 = cpy_r_r43.f0;
    CPy_INCREF(cpy_r_r44);
    cpy_r_r45 = cpy_r_r43.f1;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = cpy_r_r43.f2;
    CPy_INCREF(cpy_r_r46);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    PyObject *cpy_r_r47[4] = {cpy_r_r8, cpy_r_r44, cpy_r_r45, cpy_r_r46};
    cpy_r_r48 = (PyObject **)&cpy_r_r47;
    cpy_r_r49 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r48, 4, 0);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 954, CPyStatic_function___globals);
        goto CPyL67;
    }
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r46);
    cpy_r_r50 = PyObject_IsTrue(cpy_r_r49);
    CPy_DecRef(cpy_r_r49);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 954, CPyStatic_function___globals);
        goto CPyL33;
    }
    cpy_r_r52 = cpy_r_r50;
    if (cpy_r_r52) goto CPyL32;
    CPy_Reraise();
    if (!0) {
        goto CPyL33;
    } else
        goto CPyL68;
CPyL31: ;
    CPy_Unreachable();
CPyL32: ;
    CPy_RestoreExcInfo(cpy_r_r42);
    CPy_DecRef(cpy_r_r42.f0);
    CPy_DecRef(cpy_r_r42.f1);
    CPy_DecRef(cpy_r_r42.f2);
    goto CPyL35;
CPyL33: ;
    CPy_RestoreExcInfo(cpy_r_r42);
    CPy_DecRef(cpy_r_r42.f0);
    CPy_DecRef(cpy_r_r42.f1);
    CPy_DecRef(cpy_r_r42.f2);
    cpy_r_r53 = CPy_KeepPropagating();
    if (!cpy_r_r53) {
        goto CPyL36;
    } else
        goto CPyL69;
CPyL34: ;
    CPy_Unreachable();
CPyL35: ;
    tuple_T3OOO __tmp10252 = { NULL, NULL, NULL };
    cpy_r_r54 = __tmp10252;
    cpy_r_r55 = cpy_r_r54;
    goto CPyL37;
CPyL36: ;
    cpy_r_r56 = CPy_CatchError();
    cpy_r_r55 = cpy_r_r56;
CPyL37: ;
    if (!cpy_r_r17) goto CPyL70;
    cpy_r_r57 = (PyObject *)&_Py_NoneStruct;
    PyObject *cpy_r_r58[4] = {cpy_r_r8, cpy_r_r57, cpy_r_r57, cpy_r_r57};
    cpy_r_r59 = (PyObject **)&cpy_r_r58;
    cpy_r_r60 = _PyObject_Vectorcall(cpy_r_r11, cpy_r_r59, 4, 0);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 954, CPyStatic_function___globals);
        goto CPyL71;
    } else
        goto CPyL72;
CPyL39: ;
    CPy_DECREF(cpy_r_r8);
CPyL40: ;
    if (cpy_r_r55.f0 == NULL) goto CPyL47;
    CPy_Reraise();
    if (!0) {
        goto CPyL43;
    } else
        goto CPyL73;
CPyL42: ;
    CPy_Unreachable();
CPyL43: ;
    if (cpy_r_r55.f0 == NULL) goto CPyL45;
    CPy_RestoreExcInfo(cpy_r_r55);
    CPy_XDECREF(cpy_r_r55.f0);
    CPy_XDECREF(cpy_r_r55.f1);
    CPy_XDECREF(cpy_r_r55.f2);
CPyL45: ;
    cpy_r_r61 = CPy_KeepPropagating();
    if (!cpy_r_r61) goto CPyL48;
    CPy_Unreachable();
CPyL47: ;
    return 1;
CPyL48: ;
    cpy_r_r62 = 2;
    return cpy_r_r62;
CPyL49: ;
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL48;
CPyL50: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r1);
    goto CPyL2;
CPyL51: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r1);
    goto CPyL48;
CPyL52: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL48;
CPyL53: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL48;
CPyL54: ;
    CPy_DECREF(cpy_r_r16);
    goto CPyL8;
CPyL55: ;
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL10;
CPyL56: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL11;
CPyL57: ;
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL27;
CPyL58: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_cls_arg);
    goto CPyL14;
CPyL59: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL15;
CPyL60: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_cls_arg);
    goto CPyL17;
CPyL61: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL18;
CPyL62: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_cls_arg);
    goto CPyL27;
CPyL63: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_cls_arg);
    CPy_DecRef(cpy_r_func_arg);
    goto CPyL27;
CPyL64: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_cls_arg);
    CPy_DecRef(cpy_r_func_arg);
    CPy_DecRef(cpy_r_r32);
    goto CPyL27;
CPyL65: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_cls_arg);
    CPy_DecRef(cpy_r_func_arg);
    CPy_DecRef(cpy_r_r32);
    CPy_DecRef(cpy_r_r33);
    goto CPyL27;
CPyL66: ;
    CPy_DECREF(cpy_r_r41);
    goto CPyL35;
CPyL67: ;
    CPy_DecRef(cpy_r_r44);
    CPy_DecRef(cpy_r_r45);
    CPy_DecRef(cpy_r_r46);
    goto CPyL33;
CPyL68: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r42.f0);
    CPy_DecRef(cpy_r_r42.f1);
    CPy_DecRef(cpy_r_r42.f2);
    goto CPyL31;
CPyL69: ;
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r11);
    goto CPyL34;
CPyL70: ;
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r11);
    goto CPyL40;
CPyL71: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL43;
CPyL72: ;
    CPy_DECREF(cpy_r_r60);
    goto CPyL39;
CPyL73: ;
    CPy_XDECREF(cpy_r_r55.f0);
    CPy_XDECREF(cpy_r_r55.f1);
    CPy_XDECREF(cpy_r_r55.f2);
    goto CPyL42;
}

PyObject *CPyPy_function___add_register_method_to_callable_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fn_info", 0};
    static CPyArg_Parser parser = {"OO:add_register_method_to_callable_class", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fn_info;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fn_info)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fn_info;
    if (likely(Py_TYPE(obj_fn_info) == CPyType_context___FuncInfo))
        arg_fn_info = obj_fn_info;
    else {
        CPy_TypeError("mypyc.irbuild.context.FuncInfo", obj_fn_info); 
        goto fail;
    }
    char retval = CPyDef_function___add_register_method_to_callable_class(arg_builder, arg_fn_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "add_register_method_to_callable_class", 952, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___load_singledispatch_registry(PyObject *cpy_r_builder, PyObject *cpy_r_dispatch_func_obj, CPyTagged cpy_r_line) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyStatics[8345]; /* 'registry' */
    cpy_r_r2 = CPyStatic_rtypes___dict_rprimitive;
    if (unlikely(cpy_r_r2 == NULL)) {
        goto CPyL6;
    } else
        goto CPyL3;
CPyL1: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r3 = 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_singledispatch_registry", 962, CPyStatic_function___globals);
        goto CPyL5;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r4 = 2;
    cpy_r_r5 = CPyDef_ll_builder___LowLevelIRBuilder___get_attr(cpy_r_r0, cpy_r_dispatch_func_obj, cpy_r_r1, cpy_r_r2, cpy_r_line, cpy_r_r4);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "load_singledispatch_registry", 962, CPyStatic_function___globals);
        goto CPyL5;
    }
    return cpy_r_r5;
CPyL5: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL1;
}

PyObject *CPyPy_function___load_singledispatch_registry(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "dispatch_func_obj", "line", 0};
    static CPyArg_Parser parser = {"OOO:load_singledispatch_registry", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_dispatch_func_obj;
    PyObject *obj_line;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_dispatch_func_obj, &obj_line)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_dispatch_func_obj;
    if (likely(PyObject_TypeCheck(obj_dispatch_func_obj, CPyType_ops___Value)))
        arg_dispatch_func_obj = obj_dispatch_func_obj;
    else {
        CPy_TypeError("mypyc.ir.ops.Value", obj_dispatch_func_obj); 
        goto fail;
    }
    CPyTagged arg_line;
    if (likely(PyLong_Check(obj_line)))
        arg_line = CPyTagged_BorrowFromObject(obj_line);
    else {
        CPy_TypeError("int", obj_line); goto fail;
    }
    PyObject *retval = CPyDef_function___load_singledispatch_registry(arg_builder, arg_dispatch_func_obj, arg_line);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "load_singledispatch_registry", 961, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___singledispatch_main_func_name(PyObject *cpy_r_orig_name) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = CPyStatics[8348]; /* '__mypyc_singledispatch_main_function_' */
    cpy_r_r1 = CPyStatics[756]; /* '__' */
    cpy_r_r2 = CPyStr_Build(3, cpy_r_r0, cpy_r_orig_name, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "singledispatch_main_func_name", 966, CPyStatic_function___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_function___singledispatch_main_func_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"orig_name", 0};
    static CPyArg_Parser parser = {"O:singledispatch_main_func_name", kwlist, 0};
    PyObject *obj_orig_name;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_orig_name)) {
        return NULL;
    }
    PyObject *arg_orig_name;
    if (likely(PyUnicode_Check(obj_orig_name)))
        arg_orig_name = obj_orig_name;
    else {
        CPy_TypeError("str", obj_orig_name); 
        goto fail;
    }
    PyObject *retval = CPyDef_function___singledispatch_main_func_name(arg_orig_name);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "singledispatch_main_func_name", 965, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___get_registry_identifier(PyObject *cpy_r_fitem) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    cpy_r_r0 = CPyStatics[8349]; /* '__mypyc_singledispatch_registry_' */
    cpy_r_r1 = CPY_GET_ATTR(cpy_r_fitem, CPyType_nodes___FuncDef, 7, mypy___nodes___FuncDefObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_registry_identifier", 970, CPyStatic_function___globals);
        goto CPyL3;
    }
CPyL1: ;
    cpy_r_r2 = CPyStatics[756]; /* '__' */
    cpy_r_r3 = CPyStr_Build(3, cpy_r_r0, cpy_r_r1, cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_registry_identifier", 970, CPyStatic_function___globals);
        goto CPyL3;
    }
    return cpy_r_r3;
CPyL3: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
}

PyObject *CPyPy_function___get_registry_identifier(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"fitem", 0};
    static CPyArg_Parser parser = {"O:get_registry_identifier", kwlist, 0};
    PyObject *obj_fitem;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fitem)) {
        return NULL;
    }
    PyObject *arg_fitem;
    if (likely(Py_TYPE(obj_fitem) == CPyType_nodes___FuncDef))
        arg_fitem = obj_fitem;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fitem); 
        goto fail;
    }
    PyObject *retval = CPyDef_function___get_registry_identifier(arg_fitem);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "get_registry_identifier", 969, CPyStatic_function___globals);
    return NULL;
}

char CPyDef_function___maybe_insert_into_registry_dict(PyObject *cpy_r_builder, PyObject *cpy_r_fitem) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_line;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_is_singledispatch_main_func;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject **cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_to_register;
    PyObject *cpy_r_r13;
    CPyTagged cpy_r_r14;
    int64_t cpy_r_r15;
    CPyTagged cpy_r_r16;
    PyObject *cpy_r_r17;
    tuple_T4CIOO cpy_r_r18;
    CPyTagged cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_main_func;
    PyObject *cpy_r_impls;
    CPyTagged cpy_r_r25;
    CPyPtr cpy_r_r26;
    int64_t cpy_r_r27;
    CPyTagged cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    tuple_T2OO cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_dispatch_type;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_impl;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int32_t cpy_r_r37;
    char cpy_r_r38;
    CPyTagged cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    int64_t cpy_r_r42;
    CPyTagged cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_main_func_name;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_main_func_obj;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_loaded_object_type;
    PyObject *cpy_r_r51;
    tuple_T2OO cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    CPyPtr cpy_r_r55;
    CPyPtr cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_registry_dict;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_dispatch_func_obj;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    CPyPtr cpy_r_r67;
    CPyPtr cpy_r_r68;
    CPyPtr cpy_r_r69;
    CPyPtr cpy_r_r70;
    PyObject *cpy_r_r71;
    CPyTagged cpy_r_r72;
    int64_t cpy_r_r73;
    CPyTagged cpy_r_r74;
    PyObject *cpy_r_r75;
    tuple_T4CIOO cpy_r_r76;
    CPyTagged cpy_r_r77;
    char cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_singledispatch_func;
    PyObject *cpy_r_types;
    PyObject *cpy_r_r83;
    PyObject *cpy_r_native_ids;
    int32_t cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_to_insert;
    PyObject *cpy_r_r91;
    CPyTagged cpy_r_r92;
    CPyTagged cpy_r_current_id;
    PyObject *cpy_r_r93;
    char cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_load_literal;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_registry;
    CPyTagged cpy_r_r102;
    CPyPtr cpy_r_r103;
    int64_t cpy_r_r104;
    CPyTagged cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_loaded_type;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    CPyPtr cpy_r_r115;
    CPyPtr cpy_r_r116;
    CPyPtr cpy_r_r117;
    CPyPtr cpy_r_r118;
    PyObject *cpy_r_r119;
    CPyTagged cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    char cpy_r_r124;
    char cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_dispatch_cache;
    PyObject *cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    char cpy_r_r133;
    char cpy_r_r134;
    char cpy_r_r135;
    cpy_r_r0 = ((mypy___nodes___FuncDefObject *)cpy_r_fitem)->_line;
    CPyTagged_INCREF(cpy_r_r0);
    cpy_r_line = cpy_r_r0;
    cpy_r_r1 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_singledispatch_impls;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyDict_Contains(cpy_r_r1, cpy_r_fitem);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 975, CPyStatic_function___globals);
        goto CPyL78;
    }
    cpy_r_r4 = cpy_r_r2;
    cpy_r_is_singledispatch_main_func = cpy_r_r4;
    cpy_r_r5 = (PyObject *)&PyList_Type;
    cpy_r_r6 = CPyStatic_function___globals;
    cpy_r_r7 = CPyStatics[73]; /* 'defaultdict' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 977, CPyStatic_function___globals);
        goto CPyL78;
    }
    PyObject *cpy_r_r9[1] = {cpy_r_r5};
    cpy_r_r10 = (PyObject **)&cpy_r_r9;
    cpy_r_r11 = _PyObject_Vectorcall(cpy_r_r8, cpy_r_r10, 1, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 977, CPyStatic_function___globals);
        goto CPyL78;
    }
    if (likely(PyDict_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 977, CPyStatic_function___globals, "dict", cpy_r_r11);
        goto CPyL78;
    }
    cpy_r_to_register = cpy_r_r12;
    cpy_r_r13 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_singledispatch_impls;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = 0;
    cpy_r_r15 = PyDict_Size(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 << 1;
    cpy_r_r17 = CPyDict_GetItemsIter(cpy_r_r13);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 978, CPyStatic_function___globals);
        goto CPyL79;
    }
CPyL5: ;
    cpy_r_r18 = CPyDict_NextItem(cpy_r_r17, cpy_r_r14);
    cpy_r_r19 = cpy_r_r18.f1;
    cpy_r_r14 = cpy_r_r19;
    cpy_r_r20 = cpy_r_r18.f0;
    if (!cpy_r_r20) goto CPyL80;
    cpy_r_r21 = cpy_r_r18.f2;
    CPy_INCREF(cpy_r_r21);
    cpy_r_r22 = cpy_r_r18.f3;
    CPy_INCREF(cpy_r_r22);
    CPy_DECREF(cpy_r_r18.f2);
    CPy_DECREF(cpy_r_r18.f3);
    if (likely(Py_TYPE(cpy_r_r21) == CPyType_nodes___FuncDef))
        cpy_r_r23 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 978, CPyStatic_function___globals, "mypy.nodes.FuncDef", cpy_r_r21);
        goto CPyL81;
    }
    if (likely(PyList_Check(cpy_r_r22)))
        cpy_r_r24 = cpy_r_r22;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 978, CPyStatic_function___globals, "list", cpy_r_r22);
        goto CPyL82;
    }
    cpy_r_main_func = cpy_r_r23;
    cpy_r_impls = cpy_r_r24;
    cpy_r_r25 = 0;
CPyL9: ;
    cpy_r_r26 = (CPyPtr)&((PyVarObject *)cpy_r_impls)->ob_size;
    cpy_r_r27 = *(int64_t *)cpy_r_r26;
    cpy_r_r28 = cpy_r_r27 << 1;
    cpy_r_r29 = (Py_ssize_t)cpy_r_r25 < (Py_ssize_t)cpy_r_r28;
    if (!cpy_r_r29) goto CPyL83;
    cpy_r_r30 = CPyList_GetItemUnsafe(cpy_r_impls, cpy_r_r25);
    PyObject *__tmp10253;
    if (unlikely(!(PyTuple_Check(cpy_r_r30) && PyTuple_GET_SIZE(cpy_r_r30) == 2))) {
        __tmp10253 = NULL;
        goto __LL10254;
    }
    if (likely((Py_TYPE(PyTuple_GET_ITEM(cpy_r_r30, 0)) == CPyType_nodes___FakeInfo) || (Py_TYPE(PyTuple_GET_ITEM(cpy_r_r30, 0)) == CPyType_nodes___TypeInfo)))
        __tmp10253 = PyTuple_GET_ITEM(cpy_r_r30, 0);
    else {
        __tmp10253 = NULL;
    }
    if (__tmp10253 == NULL) goto __LL10254;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r30, 1)) == CPyType_nodes___FuncDef))
        __tmp10253 = PyTuple_GET_ITEM(cpy_r_r30, 1);
    else {
        __tmp10253 = NULL;
    }
    if (__tmp10253 == NULL) goto __LL10254;
    __tmp10253 = cpy_r_r30;
__LL10254: ;
    if (unlikely(__tmp10253 == NULL)) {
        CPy_TypeError("tuple[mypy.nodes.TypeInfo, mypy.nodes.FuncDef]", cpy_r_r30); cpy_r_r31 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10255 = PyTuple_GET_ITEM(cpy_r_r30, 0);
        CPy_INCREF(__tmp10255);
        PyObject *__tmp10256;
        if (likely((Py_TYPE(__tmp10255) == CPyType_nodes___FakeInfo) || (Py_TYPE(__tmp10255) == CPyType_nodes___TypeInfo)))
            __tmp10256 = __tmp10255;
        else {
            CPy_TypeError("mypy.nodes.TypeInfo", __tmp10255); 
            __tmp10256 = NULL;
        }
        cpy_r_r31.f0 = __tmp10256;
        PyObject *__tmp10257 = PyTuple_GET_ITEM(cpy_r_r30, 1);
        CPy_INCREF(__tmp10257);
        PyObject *__tmp10258;
        if (likely(Py_TYPE(__tmp10257) == CPyType_nodes___FuncDef))
            __tmp10258 = __tmp10257;
        else {
            CPy_TypeError("mypy.nodes.FuncDef", __tmp10257); 
            __tmp10258 = NULL;
        }
        cpy_r_r31.f1 = __tmp10258;
    }
    CPy_DECREF(cpy_r_r30);
    if (unlikely(cpy_r_r31.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 979, CPyStatic_function___globals);
        goto CPyL84;
    }
    cpy_r_r32 = cpy_r_r31.f0;
    CPy_INCREF(cpy_r_r32);
    cpy_r_dispatch_type = cpy_r_r32;
    cpy_r_r33 = cpy_r_r31.f1;
    CPy_INCREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r31.f0);
    CPy_DECREF(cpy_r_r31.f1);
    cpy_r_impl = cpy_r_r33;
    cpy_r_r34 = cpy_r_fitem == cpy_r_impl;
    CPy_DECREF(cpy_r_impl);
    if (!cpy_r_r34) goto CPyL85;
    cpy_r_r35 = CPyDict_GetItem(cpy_r_to_register, cpy_r_main_func);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 981, CPyStatic_function___globals);
        goto CPyL86;
    }
    if (likely(PyList_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 981, CPyStatic_function___globals, "list", cpy_r_r35);
        goto CPyL86;
    }
    cpy_r_r37 = PyList_Append(cpy_r_r36, cpy_r_dispatch_type);
    CPy_DECREF(cpy_r_r36);
    CPy_DECREF(cpy_r_dispatch_type);
    cpy_r_r38 = cpy_r_r37 >= 0;
    if (unlikely(!cpy_r_r38)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 981, CPyStatic_function___globals);
        goto CPyL84;
    }
CPyL15: ;
    cpy_r_r39 = cpy_r_r25 + 2;
    cpy_r_r25 = cpy_r_r39;
    goto CPyL9;
CPyL16: ;
    cpy_r_r40 = CPyDict_CheckSize(cpy_r_r13, cpy_r_r16);
    if (unlikely(!cpy_r_r40)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 978, CPyStatic_function___globals);
        goto CPyL87;
    } else
        goto CPyL5;
CPyL17: ;
    cpy_r_r41 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 978, CPyStatic_function___globals);
        goto CPyL88;
    }
    cpy_r_r42 = PyDict_Size(cpy_r_to_register);
    cpy_r_r43 = cpy_r_r42 << 1;
    cpy_r_r44 = cpy_r_r43 != 0;
    if (cpy_r_r44) goto CPyL21;
    if (cpy_r_is_singledispatch_main_func) {
        goto CPyL21;
    } else
        goto CPyL89;
CPyL20: ;
    return 1;
CPyL21: ;
    if (!cpy_r_is_singledispatch_main_func) goto CPyL36;
    cpy_r_r45 = CPY_GET_ATTR(cpy_r_fitem, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 987, CPyStatic_function___globals);
        goto CPyL88;
    }
CPyL23: ;
    cpy_r_r46 = CPyDef_function___singledispatch_main_func_name(cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 987, CPyStatic_function___globals);
        goto CPyL88;
    }
    cpy_r_main_func_name = cpy_r_r46;
    cpy_r_r47 = CPY_GET_ATTR(cpy_r_fitem, CPyType_nodes___FuncDef, 7, mypy___nodes___FuncDefObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 988, CPyStatic_function___globals);
        goto CPyL90;
    }
CPyL25: ;
    cpy_r_r48 = CPyDef_function___load_func(cpy_r_builder, cpy_r_main_func_name, cpy_r_r47, cpy_r_line);
    CPy_DECREF(cpy_r_main_func_name);
    CPy_DECREF(cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 988, CPyStatic_function___globals);
        goto CPyL88;
    }
    cpy_r_main_func_obj = cpy_r_r48;
    cpy_r_r49 = CPyStatics[736]; /* 'builtins.object' */
    cpy_r_r50 = CPyDef_builder___IRBuilder___load_module_attr_by_fullname(cpy_r_builder, cpy_r_r49, cpy_r_line);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 990, CPyStatic_function___globals);
        goto CPyL91;
    }
    cpy_r_loaded_object_type = cpy_r_r50;
    cpy_r_r51 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r51);
    cpy_r_r52.f0 = cpy_r_loaded_object_type;
    cpy_r_r52.f1 = cpy_r_main_func_obj;
    CPy_INCREF(cpy_r_r52.f0);
    CPy_INCREF(cpy_r_r52.f1);
    CPy_DECREF(cpy_r_loaded_object_type);
    CPy_DECREF(cpy_r_main_func_obj);
    cpy_r_r53 = PyList_New(1);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 991, CPyStatic_function___globals);
        goto CPyL92;
    }
    cpy_r_r54 = PyTuple_New(2);
    if (unlikely(cpy_r_r54 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp10259 = cpy_r_r52.f0;
    PyTuple_SET_ITEM(cpy_r_r54, 0, __tmp10259);
    PyObject *__tmp10260 = cpy_r_r52.f1;
    PyTuple_SET_ITEM(cpy_r_r54, 1, __tmp10260);
    cpy_r_r55 = (CPyPtr)&((PyListObject *)cpy_r_r53)->ob_item;
    cpy_r_r56 = *(CPyPtr *)cpy_r_r55;
    *(PyObject * *)cpy_r_r56 = cpy_r_r54;
    cpy_r_r57 = CPyDef_ll_builder___LowLevelIRBuilder___make_dict(cpy_r_r51, cpy_r_r53, cpy_r_line);
    CPy_DECREF(cpy_r_r53);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 991, CPyStatic_function___globals);
        goto CPyL88;
    }
    cpy_r_registry_dict = cpy_r_r57;
    cpy_r_r58 = CPY_GET_ATTR(cpy_r_fitem, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 993, CPyStatic_function___globals);
        goto CPyL93;
    }
CPyL30: ;
    cpy_r_r59 = CPyDef_builder___IRBuilder___load_global_str(cpy_r_builder, cpy_r_r58, cpy_r_line);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 993, CPyStatic_function___globals);
        goto CPyL93;
    }
    cpy_r_dispatch_func_obj = cpy_r_r59;
    cpy_r_r60 = CPyStatic_function___globals;
    cpy_r_r61 = CPyStatics[8065]; /* 'py_setattr_op' */
    cpy_r_r62 = CPyDict_GetItem(cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 995, CPyStatic_function___globals);
        goto CPyL94;
    }
    if (likely(PyTuple_Check(cpy_r_r62)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 995, CPyStatic_function___globals, "tuple", cpy_r_r62);
        goto CPyL94;
    }
    cpy_r_r64 = CPyStatics[8345]; /* 'registry' */
    cpy_r_r65 = CPyDef_builder___IRBuilder___load_str(cpy_r_builder, cpy_r_r64);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 995, CPyStatic_function___globals);
        goto CPyL95;
    }
    cpy_r_r66 = PyList_New(3);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 995, CPyStatic_function___globals);
        goto CPyL96;
    }
    cpy_r_r67 = (CPyPtr)&((PyListObject *)cpy_r_r66)->ob_item;
    cpy_r_r68 = *(CPyPtr *)cpy_r_r67;
    *(PyObject * *)cpy_r_r68 = cpy_r_dispatch_func_obj;
    cpy_r_r69 = cpy_r_r68 + 8;
    *(PyObject * *)cpy_r_r69 = cpy_r_r65;
    cpy_r_r70 = cpy_r_r68 + 16;
    *(PyObject * *)cpy_r_r70 = cpy_r_registry_dict;
    cpy_r_r71 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r63, cpy_r_r66, cpy_r_line);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 994, CPyStatic_function___globals);
        goto CPyL88;
    } else
        goto CPyL97;
CPyL36: ;
    cpy_r_r72 = 0;
    cpy_r_r73 = PyDict_Size(cpy_r_to_register);
    cpy_r_r74 = cpy_r_r73 << 1;
    cpy_r_r75 = CPyDict_GetItemsIter(cpy_r_to_register);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 998, CPyStatic_function___globals);
        goto CPyL88;
    }
CPyL37: ;
    cpy_r_r76 = CPyDict_NextItem(cpy_r_r75, cpy_r_r72);
    cpy_r_r77 = cpy_r_r76.f1;
    cpy_r_r72 = cpy_r_r77;
    cpy_r_r78 = cpy_r_r76.f0;
    if (!cpy_r_r78) goto CPyL98;
    cpy_r_r79 = cpy_r_r76.f2;
    CPy_INCREF(cpy_r_r79);
    cpy_r_r80 = cpy_r_r76.f3;
    CPy_INCREF(cpy_r_r80);
    CPy_DECREF(cpy_r_r76.f2);
    CPy_DECREF(cpy_r_r76.f3);
    if (likely(Py_TYPE(cpy_r_r79) == CPyType_nodes___FuncDef))
        cpy_r_r81 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 998, CPyStatic_function___globals, "mypy.nodes.FuncDef", cpy_r_r79);
        goto CPyL99;
    }
    if (likely(PyList_Check(cpy_r_r80)))
        cpy_r_r82 = cpy_r_r80;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 998, CPyStatic_function___globals, "list", cpy_r_r80);
        goto CPyL100;
    }
    cpy_r_singledispatch_func = cpy_r_r81;
    cpy_r_types = cpy_r_r82;
    cpy_r_r83 = CPyDef_function___get_native_impl_ids(cpy_r_builder, cpy_r_singledispatch_func);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1001, CPyStatic_function___globals);
        goto CPyL101;
    }
    cpy_r_native_ids = cpy_r_r83;
    cpy_r_r84 = PyDict_Contains(cpy_r_native_ids, cpy_r_fitem);
    cpy_r_r85 = cpy_r_r84 >= 0;
    if (unlikely(!cpy_r_r85)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1002, CPyStatic_function___globals);
        goto CPyL102;
    }
    cpy_r_r86 = cpy_r_r84;
    cpy_r_r87 = cpy_r_r86 ^ 1;
    if (cpy_r_r87) {
        goto CPyL103;
    } else
        goto CPyL47;
CPyL43: ;
    cpy_r_r88 = CPY_GET_ATTR(cpy_r_fitem, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1003, CPyStatic_function___globals);
        goto CPyL101;
    }
CPyL44: ;
    cpy_r_r89 = CPY_GET_ATTR(cpy_r_fitem, CPyType_nodes___FuncDef, 7, mypy___nodes___FuncDefObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r89 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1003, CPyStatic_function___globals);
        goto CPyL104;
    }
CPyL45: ;
    cpy_r_r90 = CPyDef_function___load_func(cpy_r_builder, cpy_r_r88, cpy_r_r89, cpy_r_line);
    CPy_DECREF(cpy_r_r88);
    CPy_DECREF(cpy_r_r89);
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1003, CPyStatic_function___globals);
        goto CPyL101;
    }
    cpy_r_to_insert = cpy_r_r90;
    goto CPyL55;
CPyL47: ;
    cpy_r_r91 = CPyDict_GetItem(cpy_r_native_ids, cpy_r_fitem);
    CPy_DECREF(cpy_r_native_ids);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1005, CPyStatic_function___globals);
        goto CPyL101;
    }
    if (likely(PyLong_Check(cpy_r_r91)))
        cpy_r_r92 = CPyTagged_FromObject(cpy_r_r91);
    else {
        CPy_TypeError("int", cpy_r_r91); cpy_r_r92 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r91);
    if (unlikely(cpy_r_r92 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1005, CPyStatic_function___globals);
        goto CPyL101;
    }
    cpy_r_current_id = cpy_r_r92;
    cpy_r_r93 = CPyStatic_rtypes___object_rprimitive;
    if (unlikely(cpy_r_r93 == NULL)) {
        goto CPyL105;
    } else
        goto CPyL52;
CPyL50: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"object_rprimitive\" was not set");
    cpy_r_r94 = 0;
    if (unlikely(!cpy_r_r94)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1006, CPyStatic_function___globals);
        goto CPyL77;
    }
    CPy_Unreachable();
CPyL52: ;
    cpy_r_r95 = CPyTagged_StealAsObject(cpy_r_current_id);
    cpy_r_r96 = CPyDef_ops___LoadLiteral(cpy_r_r95, cpy_r_r93);
    CPy_DECREF(cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1006, CPyStatic_function___globals);
        goto CPyL101;
    }
    cpy_r_load_literal = cpy_r_r96;
    cpy_r_r97 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_load_literal);
    CPy_DECREF(cpy_r_load_literal);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1007, CPyStatic_function___globals);
        goto CPyL101;
    }
    cpy_r_to_insert = cpy_r_r97;
CPyL55: ;
    cpy_r_r98 = CPY_GET_ATTR(cpy_r_singledispatch_func, CPyType_nodes___FuncDef, 12, mypy___nodes___FuncDefObject, PyObject *); /* name */
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1010, CPyStatic_function___globals);
        goto CPyL106;
    }
CPyL56: ;
    cpy_r_r99 = CPY_GET_ATTR(cpy_r_singledispatch_func, CPyType_nodes___FuncDef, 7, mypy___nodes___FuncDefObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_singledispatch_func);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1010, CPyStatic_function___globals);
        goto CPyL107;
    }
CPyL57: ;
    cpy_r_r100 = CPyDef_function___load_func(cpy_r_builder, cpy_r_r98, cpy_r_r99, cpy_r_line);
    CPy_DECREF(cpy_r_r98);
    CPy_DECREF(cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1009, CPyStatic_function___globals);
        goto CPyL108;
    }
    cpy_r_dispatch_func_obj = cpy_r_r100;
    cpy_r_r101 = CPyDef_function___load_singledispatch_registry(cpy_r_builder, cpy_r_dispatch_func_obj, cpy_r_line);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1012, CPyStatic_function___globals);
        goto CPyL109;
    }
    cpy_r_registry = cpy_r_r101;
    cpy_r_r102 = 0;
CPyL60: ;
    cpy_r_r103 = (CPyPtr)&((PyVarObject *)cpy_r_types)->ob_size;
    cpy_r_r104 = *(int64_t *)cpy_r_r103;
    cpy_r_r105 = cpy_r_r104 << 1;
    cpy_r_r106 = (Py_ssize_t)cpy_r_r102 < (Py_ssize_t)cpy_r_r105;
    if (!cpy_r_r106) goto CPyL110;
    cpy_r_r107 = CPyList_GetItemUnsafe(cpy_r_types, cpy_r_r102);
    if (likely((Py_TYPE(cpy_r_r107) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r107) == CPyType_nodes___TypeInfo)))
        cpy_r_r108 = cpy_r_r107;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1013, CPyStatic_function___globals, "mypy.nodes.TypeInfo", cpy_r_r107);
        goto CPyL111;
    }
    cpy_r_typ = cpy_r_r108;
    cpy_r_r109 = CPyDef_function___load_type(cpy_r_builder, cpy_r_typ, cpy_r_line);
    CPy_DECREF(cpy_r_typ);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1014, CPyStatic_function___globals);
        goto CPyL111;
    }
    cpy_r_loaded_type = cpy_r_r109;
    cpy_r_r110 = CPyStatic_function___globals;
    cpy_r_r111 = CPyStatics[8056]; /* 'dict_set_item_op' */
    cpy_r_r112 = CPyDict_GetItem(cpy_r_r110, cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1015, CPyStatic_function___globals);
        goto CPyL112;
    }
    if (likely(PyTuple_Check(cpy_r_r112)))
        cpy_r_r113 = cpy_r_r112;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1015, CPyStatic_function___globals, "tuple", cpy_r_r112);
        goto CPyL112;
    }
    cpy_r_r114 = PyList_New(3);
    if (unlikely(cpy_r_r114 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1015, CPyStatic_function___globals);
        goto CPyL113;
    }
    cpy_r_r115 = (CPyPtr)&((PyListObject *)cpy_r_r114)->ob_item;
    cpy_r_r116 = *(CPyPtr *)cpy_r_r115;
    CPy_INCREF(cpy_r_registry);
    *(PyObject * *)cpy_r_r116 = cpy_r_registry;
    cpy_r_r117 = cpy_r_r116 + 8;
    *(PyObject * *)cpy_r_r117 = cpy_r_loaded_type;
    cpy_r_r118 = cpy_r_r116 + 16;
    CPy_INCREF(cpy_r_to_insert);
    *(PyObject * *)cpy_r_r118 = cpy_r_to_insert;
    cpy_r_r119 = CPyDef_builder___IRBuilder___call_c(cpy_r_builder, cpy_r_r113, cpy_r_r114, cpy_r_line);
    CPy_DECREF(cpy_r_r113);
    CPy_DECREF(cpy_r_r114);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1015, CPyStatic_function___globals);
        goto CPyL111;
    } else
        goto CPyL114;
CPyL67: ;
    cpy_r_r120 = cpy_r_r102 + 2;
    cpy_r_r102 = cpy_r_r120;
    goto CPyL60;
CPyL68: ;
    cpy_r_r121 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r121);
    cpy_r_r122 = CPyStatics[8342]; /* 'dispatch_cache' */
    cpy_r_r123 = CPyStatic_rtypes___dict_rprimitive;
    if (unlikely(cpy_r_r123 == NULL)) {
        goto CPyL115;
    } else
        goto CPyL71;
CPyL69: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"dict_rprimitive\" was not set");
    cpy_r_r124 = 0;
    if (unlikely(!cpy_r_r124)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1017, CPyStatic_function___globals);
        goto CPyL77;
    }
    CPy_Unreachable();
CPyL71: ;
    cpy_r_r125 = 2;
    cpy_r_r126 = CPyDef_ll_builder___LowLevelIRBuilder___get_attr(cpy_r_r121, cpy_r_dispatch_func_obj, cpy_r_r122, cpy_r_r123, cpy_r_line, cpy_r_r125);
    CPy_DECREF(cpy_r_dispatch_func_obj);
    CPy_DECREF(cpy_r_r121);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1016, CPyStatic_function___globals);
        goto CPyL116;
    }
    cpy_r_dispatch_cache = cpy_r_r126;
    cpy_r_r127 = CPyStatics[1550]; /* 'clear' */
    cpy_r_r128 = PyList_New(0);
    if (unlikely(cpy_r_r128 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1019, CPyStatic_function___globals);
        goto CPyL117;
    }
    cpy_r_r129 = Py_None;
    cpy_r_r130 = NULL;
    cpy_r_r131 = NULL;
    cpy_r_r132 = CPyDef_builder___IRBuilder___gen_method_call(cpy_r_builder, cpy_r_dispatch_cache, cpy_r_r127, cpy_r_r128, cpy_r_r129, cpy_r_line, cpy_r_r130, cpy_r_r131);
    CPy_DECREF(cpy_r_dispatch_cache);
    CPy_DECREF(cpy_r_r128);
    if (unlikely(cpy_r_r132 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 1019, CPyStatic_function___globals);
        goto CPyL116;
    } else
        goto CPyL118;
CPyL74: ;
    cpy_r_r133 = CPyDict_CheckSize(cpy_r_to_register, cpy_r_r74);
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 998, CPyStatic_function___globals);
        goto CPyL116;
    } else
        goto CPyL37;
CPyL75: ;
    cpy_r_r134 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r134)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 998, CPyStatic_function___globals);
        goto CPyL77;
    }
    return 1;
CPyL77: ;
    cpy_r_r135 = 2;
    return cpy_r_r135;
CPyL78: ;
    CPyTagged_DecRef(cpy_r_line);
    goto CPyL77;
CPyL79: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r13);
    goto CPyL77;
CPyL80: ;
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r18.f2);
    CPy_DECREF(cpy_r_r18.f3);
    goto CPyL17;
CPyL81: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r22);
    goto CPyL77;
CPyL82: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r23);
    goto CPyL77;
CPyL83: ;
    CPy_DECREF(cpy_r_main_func);
    CPy_DECREF(cpy_r_impls);
    goto CPyL16;
CPyL84: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_main_func);
    CPy_DecRef(cpy_r_impls);
    goto CPyL77;
CPyL85: ;
    CPy_DECREF(cpy_r_dispatch_type);
    goto CPyL15;
CPyL86: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_main_func);
    CPy_DecRef(cpy_r_impls);
    CPy_DecRef(cpy_r_dispatch_type);
    goto CPyL77;
CPyL87: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r13);
    CPy_DecRef(cpy_r_r17);
    goto CPyL77;
CPyL88: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    goto CPyL77;
CPyL89: ;
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_to_register);
    goto CPyL20;
CPyL90: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_main_func_name);
    goto CPyL77;
CPyL91: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_main_func_obj);
    goto CPyL77;
CPyL92: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r51);
    CPy_DecRef(cpy_r_r52.f0);
    CPy_DecRef(cpy_r_r52.f1);
    goto CPyL77;
CPyL93: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_registry_dict);
    goto CPyL77;
CPyL94: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_registry_dict);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    goto CPyL77;
CPyL95: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_registry_dict);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_r63);
    goto CPyL77;
CPyL96: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_registry_dict);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_r63);
    CPy_DecRef(cpy_r_r65);
    goto CPyL77;
CPyL97: ;
    CPy_DECREF(cpy_r_r71);
    goto CPyL36;
CPyL98: ;
    CPyTagged_DECREF(cpy_r_line);
    CPy_DECREF(cpy_r_to_register);
    CPy_DECREF(cpy_r_r75);
    CPy_DECREF(cpy_r_r76.f2);
    CPy_DECREF(cpy_r_r76.f3);
    goto CPyL75;
CPyL99: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r80);
    goto CPyL77;
CPyL100: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r81);
    goto CPyL77;
CPyL101: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_singledispatch_func);
    CPy_DecRef(cpy_r_types);
    goto CPyL77;
CPyL102: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_singledispatch_func);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_native_ids);
    goto CPyL77;
CPyL103: ;
    CPy_DECREF(cpy_r_native_ids);
    goto CPyL43;
CPyL104: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_singledispatch_func);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_r88);
    goto CPyL77;
CPyL105: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_singledispatch_func);
    CPy_DecRef(cpy_r_types);
    CPyTagged_DecRef(cpy_r_current_id);
    goto CPyL50;
CPyL106: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_singledispatch_func);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_to_insert);
    goto CPyL77;
CPyL107: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_to_insert);
    CPy_DecRef(cpy_r_r98);
    goto CPyL77;
CPyL108: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_to_insert);
    goto CPyL77;
CPyL109: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_to_insert);
    goto CPyL77;
CPyL110: ;
    CPy_DECREF(cpy_r_types);
    CPy_DECREF(cpy_r_to_insert);
    CPy_DECREF(cpy_r_registry);
    goto CPyL68;
CPyL111: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_to_insert);
    CPy_DecRef(cpy_r_registry);
    goto CPyL77;
CPyL112: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_to_insert);
    CPy_DecRef(cpy_r_registry);
    CPy_DecRef(cpy_r_loaded_type);
    goto CPyL77;
CPyL113: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_types);
    CPy_DecRef(cpy_r_to_insert);
    CPy_DecRef(cpy_r_registry);
    CPy_DecRef(cpy_r_loaded_type);
    CPy_DecRef(cpy_r_r113);
    goto CPyL77;
CPyL114: ;
    CPy_DECREF(cpy_r_r119);
    goto CPyL67;
CPyL115: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_dispatch_func_obj);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_r121);
    goto CPyL69;
CPyL116: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r75);
    goto CPyL77;
CPyL117: ;
    CPyTagged_DecRef(cpy_r_line);
    CPy_DecRef(cpy_r_to_register);
    CPy_DecRef(cpy_r_r75);
    CPy_DecRef(cpy_r_dispatch_cache);
    goto CPyL77;
CPyL118: ;
    CPy_DECREF(cpy_r_r132);
    goto CPyL74;
}

PyObject *CPyPy_function___maybe_insert_into_registry_dict(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "fitem", 0};
    static CPyArg_Parser parser = {"OO:maybe_insert_into_registry_dict", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_fitem;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_fitem)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_fitem;
    if (likely(Py_TYPE(obj_fitem) == CPyType_nodes___FuncDef))
        arg_fitem = obj_fitem;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_fitem); 
        goto fail;
    }
    char retval = CPyDef_function___maybe_insert_into_registry_dict(arg_builder, arg_fitem);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "maybe_insert_into_registry_dict", 973, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___get_native_impl_ids(PyObject *cpy_r_builder, PyObject *cpy_r_singledispatch_func) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_impls;
    PyObject *cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_i;
    CPyTagged cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    tuple_T2OO cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_typ;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_impl;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    CPyTagged cpy_r_r19;
    CPyTagged cpy_r_r20;
    PyObject *cpy_r_r21;
    cpy_r_r0 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_singledispatch_impls;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDict_GetItem(cpy_r_r0, cpy_r_singledispatch_func);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_native_impl_ids", 1026, CPyStatic_function___globals);
        goto CPyL11;
    }
    if (likely(PyList_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "get_native_impl_ids", 1026, CPyStatic_function___globals, "list", cpy_r_r1);
        goto CPyL11;
    }
    cpy_r_impls = cpy_r_r2;
    cpy_r_r3 = PyDict_New();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_native_impl_ids", 1027, CPyStatic_function___globals);
        goto CPyL12;
    }
    cpy_r_r4 = 0;
    cpy_r_i = 0;
    cpy_r_r5 = 0;
CPyL4: ;
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_impls)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r8;
    if (!cpy_r_r9) goto CPyL13;
    cpy_r_r10 = CPyList_GetItemUnsafe(cpy_r_impls, cpy_r_r5);
    PyObject *__tmp10261;
    if (unlikely(!(PyTuple_Check(cpy_r_r10) && PyTuple_GET_SIZE(cpy_r_r10) == 2))) {
        __tmp10261 = NULL;
        goto __LL10262;
    }
    if (likely((Py_TYPE(PyTuple_GET_ITEM(cpy_r_r10, 0)) == CPyType_nodes___FakeInfo) || (Py_TYPE(PyTuple_GET_ITEM(cpy_r_r10, 0)) == CPyType_nodes___TypeInfo)))
        __tmp10261 = PyTuple_GET_ITEM(cpy_r_r10, 0);
    else {
        __tmp10261 = NULL;
    }
    if (__tmp10261 == NULL) goto __LL10262;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r10, 1)) == CPyType_nodes___FuncDef))
        __tmp10261 = PyTuple_GET_ITEM(cpy_r_r10, 1);
    else {
        __tmp10261 = NULL;
    }
    if (__tmp10261 == NULL) goto __LL10262;
    __tmp10261 = cpy_r_r10;
__LL10262: ;
    if (unlikely(__tmp10261 == NULL)) {
        CPy_TypeError("tuple[mypy.nodes.TypeInfo, mypy.nodes.FuncDef]", cpy_r_r10); cpy_r_r11 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp10263 = PyTuple_GET_ITEM(cpy_r_r10, 0);
        CPy_INCREF(__tmp10263);
        PyObject *__tmp10264;
        if (likely((Py_TYPE(__tmp10263) == CPyType_nodes___FakeInfo) || (Py_TYPE(__tmp10263) == CPyType_nodes___TypeInfo)))
            __tmp10264 = __tmp10263;
        else {
            CPy_TypeError("mypy.nodes.TypeInfo", __tmp10263); 
            __tmp10264 = NULL;
        }
        cpy_r_r11.f0 = __tmp10264;
        PyObject *__tmp10265 = PyTuple_GET_ITEM(cpy_r_r10, 1);
        CPy_INCREF(__tmp10265);
        PyObject *__tmp10266;
        if (likely(Py_TYPE(__tmp10265) == CPyType_nodes___FuncDef))
            __tmp10266 = __tmp10265;
        else {
            CPy_TypeError("mypy.nodes.FuncDef", __tmp10265); 
            __tmp10266 = NULL;
        }
        cpy_r_r11.f1 = __tmp10266;
    }
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_native_impl_ids", 1027, CPyStatic_function___globals);
        goto CPyL14;
    }
    cpy_r_r12 = cpy_r_r11.f0;
    CPy_INCREF(cpy_r_r12);
    cpy_r_typ = cpy_r_r12;
    CPy_DECREF(cpy_r_typ);
    cpy_r_r13 = cpy_r_r11.f1;
    CPy_INCREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r11.f0);
    CPy_DECREF(cpy_r_r11.f1);
    cpy_r_impl = cpy_r_r13;
    cpy_r_r14 = CPyDef_function___is_decorated(cpy_r_builder, cpy_r_impl);
    if (unlikely(cpy_r_r14 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_native_impl_ids", 1027, CPyStatic_function___globals);
        goto CPyL15;
    }
    cpy_r_r15 = cpy_r_r14 ^ 1;
    if (!cpy_r_r15) goto CPyL16;
    cpy_r_r16 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r17 = CPyDict_SetItem(cpy_r_r3, cpy_r_impl, cpy_r_r16);
    CPy_DECREF(cpy_r_impl);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "get_native_impl_ids", 1027, CPyStatic_function___globals);
        goto CPyL17;
    }
CPyL9: ;
    cpy_r_r19 = cpy_r_r4 + 2;
    cpy_r_r4 = cpy_r_r19;
    cpy_r_i = cpy_r_r19;
    cpy_r_r20 = cpy_r_r5 + 2;
    cpy_r_r5 = cpy_r_r20;
    goto CPyL4;
CPyL10: ;
    return cpy_r_r3;
CPyL11: ;
    cpy_r_r21 = NULL;
    return cpy_r_r21;
CPyL12: ;
    CPy_DecRef(cpy_r_impls);
    goto CPyL11;
CPyL13: ;
    CPy_DECREF(cpy_r_impls);
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL10;
CPyL14: ;
    CPy_DecRef(cpy_r_impls);
    CPy_DecRef(cpy_r_r3);
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_impls);
    CPy_DecRef(cpy_r_r3);
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_impl);
    goto CPyL11;
CPyL16: ;
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_impl);
    goto CPyL9;
CPyL17: ;
    CPy_DecRef(cpy_r_impls);
    CPy_DecRef(cpy_r_r3);
    goto CPyL11;
}

PyObject *CPyPy_function___get_native_impl_ids(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "singledispatch_func", 0};
    static CPyArg_Parser parser = {"OO:get_native_impl_ids", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_singledispatch_func;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_singledispatch_func)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_singledispatch_func;
    if (likely(Py_TYPE(obj_singledispatch_func) == CPyType_nodes___FuncDef))
        arg_singledispatch_func = obj_singledispatch_func;
    else {
        CPy_TypeError("mypy.nodes.FuncDef", obj_singledispatch_func); 
        goto fail;
    }
    PyObject *retval = CPyDef_function___get_native_impl_ids(arg_builder, arg_singledispatch_func);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "get_native_impl_ids", 1022, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___gen_property_getter_ir(PyObject *cpy_r_builder, PyObject *cpy_r_func_decl, PyObject *cpy_r_cdef, char cpy_r_is_trait) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_name;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_self_reg;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_value;
    CPyTagged cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    tuple_T5OOOOO cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r23;
    PyObject *cpy_r__;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_blocks;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_ret_type;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_fn_info;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_func_decl)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_name = cpy_r_r0;
    cpy_r_r1 = CPyDef_builder___IRBuilder___enter(cpy_r_builder, cpy_r_name);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_getter_ir", 1038, CPyStatic_function___globals);
        goto CPyL14;
    }
    cpy_r_r2 = CPyStatics[730]; /* 'self' */
    cpy_r_r3 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_func_decl)->_sig;
    cpy_r_r4 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r3)->_args;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_r4, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_getter_ir", 1039, CPyStatic_function___globals);
        goto CPyL14;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_func_ir___RuntimeArg))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_property_getter_ir", 1039, CPyStatic_function___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r5);
        goto CPyL14;
    }
    cpy_r_r7 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r6)->_type;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_builder___IRBuilder___add_argument(cpy_r_builder, cpy_r_r2, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_getter_ir", 1039, CPyStatic_function___globals);
        goto CPyL14;
    }
    cpy_r_self_reg = cpy_r_r9;
    if (cpy_r_is_trait) goto CPyL15;
    cpy_r_r10 = ((mypyc___irbuild___builder___IRBuilderObject *)cpy_r_builder)->_builder;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_func_decl)->_sig;
    cpy_r_r12 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r11)->_ret_type;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = 2;
    cpy_r_r14 = CPyDef_ll_builder___LowLevelIRBuilder___get_attr(cpy_r_r10, cpy_r_self_reg, cpy_r_name, cpy_r_r12, -2, cpy_r_r13);
    CPy_DECREF(cpy_r_self_reg);
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_getter_ir", 1041, CPyStatic_function___globals);
        goto CPyL13;
    }
    cpy_r_value = cpy_r_r14;
    cpy_r_r15 = CPY_INT_TAG;
    cpy_r_r16 = CPyDef_ops___Return(cpy_r_value, cpy_r_r15);
    CPy_DECREF(cpy_r_value);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_getter_ir", 1042, CPyStatic_function___globals);
        goto CPyL13;
    }
    cpy_r_r17 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r16);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_getter_ir", 1042, CPyStatic_function___globals);
        goto CPyL13;
    } else
        goto CPyL16;
CPyL8: ;
    cpy_r_r18 = CPY_INT_TAG;
    cpy_r_r19 = CPyDef_ops___Unreachable(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_getter_ir", 1044, CPyStatic_function___globals);
        goto CPyL13;
    }
    cpy_r_r20 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_getter_ir", 1044, CPyStatic_function___globals);
        goto CPyL13;
    } else
        goto CPyL17;
CPyL10: ;
    cpy_r_r21 = CPyDef_builder___IRBuilder___leave(cpy_r_builder);
    if (unlikely(cpy_r_r21.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_getter_ir", 1045, CPyStatic_function___globals);
        goto CPyL13;
    }
    cpy_r_r22 = cpy_r_r21.f0;
    CPy_INCREF(cpy_r_r22);
    cpy_r_args = cpy_r_r22;
    cpy_r_r23 = cpy_r_r21.f1;
    CPy_INCREF(cpy_r_r23);
    cpy_r__ = cpy_r_r23;
    CPy_DECREF(cpy_r__);
    cpy_r_r24 = cpy_r_r21.f2;
    CPy_INCREF(cpy_r_r24);
    cpy_r_blocks = cpy_r_r24;
    cpy_r_r25 = cpy_r_r21.f3;
    CPy_INCREF(cpy_r_r25);
    cpy_r_ret_type = cpy_r_r25;
    CPy_DECREF(cpy_r_ret_type);
    cpy_r_r26 = cpy_r_r21.f4;
    CPy_INCREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r21.f0);
    CPy_DECREF(cpy_r_r21.f1);
    CPy_DECREF(cpy_r_r21.f2);
    CPy_DECREF(cpy_r_r21.f3);
    CPy_DECREF(cpy_r_r21.f4);
    cpy_r_fn_info = cpy_r_r26;
    CPy_DECREF(cpy_r_fn_info);
    cpy_r_r27 = CPY_INT_TAG;
    cpy_r_r28 = NULL;
    cpy_r_r29 = CPyDef_func_ir___FuncIR(cpy_r_func_decl, cpy_r_args, cpy_r_blocks, cpy_r_r27, cpy_r_r28);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_blocks);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_getter_ir", 1046, CPyStatic_function___globals);
        goto CPyL13;
    }
    return cpy_r_r29;
CPyL13: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL14: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL13;
CPyL15: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_self_reg);
    goto CPyL8;
CPyL16: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL10;
CPyL17: ;
    CPy_DECREF(cpy_r_r20);
    goto CPyL10;
}

PyObject *CPyPy_function___gen_property_getter_ir(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "func_decl", "cdef", "is_trait", 0};
    static CPyArg_Parser parser = {"OOOO:gen_property_getter_ir", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_func_decl;
    PyObject *obj_cdef;
    PyObject *obj_is_trait;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_func_decl, &obj_cdef, &obj_is_trait)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_func_decl;
    if (likely(Py_TYPE(obj_func_decl) == CPyType_func_ir___FuncDecl))
        arg_func_decl = obj_func_decl;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_func_decl); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    char arg_is_trait;
    if (unlikely(!PyBool_Check(obj_is_trait))) {
        CPy_TypeError("bool", obj_is_trait); goto fail;
    } else
        arg_is_trait = obj_is_trait == Py_True;
    PyObject *retval = CPyDef_function___gen_property_getter_ir(arg_builder, arg_func_decl, arg_cdef, arg_is_trait);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_getter_ir", 1030, CPyStatic_function___globals);
    return NULL;
}

PyObject *CPyDef_function___gen_property_setter_ir(PyObject *cpy_r_builder, PyObject *cpy_r_func_decl, PyObject *cpy_r_cdef, char cpy_r_is_trait) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_name;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_self_reg;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_value_reg;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    int64_t cpy_r_r22;
    char cpy_r_r23;
    CPyTagged cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_attr_name;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    CPyTagged cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    tuple_T5OOOOO cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_args;
    PyObject *cpy_r_r35;
    PyObject *cpy_r__;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_blocks;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_ret_type;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_fn_info;
    CPyTagged cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    cpy_r_r0 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_func_decl)->_name;
    CPy_INCREF(cpy_r_r0);
    cpy_r_name = cpy_r_r0;
    cpy_r_r1 = CPyDef_builder___IRBuilder___enter(cpy_r_builder, cpy_r_name);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1057, CPyStatic_function___globals);
        goto CPyL23;
    }
    cpy_r_r2 = CPyStatics[730]; /* 'self' */
    cpy_r_r3 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_func_decl)->_sig;
    cpy_r_r4 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r3)->_args;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPySequenceTuple_GetItem(cpy_r_r4, 0);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1058, CPyStatic_function___globals);
        goto CPyL23;
    }
    if (likely(Py_TYPE(cpy_r_r5) == CPyType_func_ir___RuntimeArg))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1058, CPyStatic_function___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r5);
        goto CPyL23;
    }
    cpy_r_r7 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r6)->_type;
    CPy_INCREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = NULL;
    cpy_r_r9 = CPyDef_builder___IRBuilder___add_argument(cpy_r_builder, cpy_r_r2, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1058, CPyStatic_function___globals);
        goto CPyL23;
    }
    cpy_r_self_reg = cpy_r_r9;
    cpy_r_r10 = CPyStatics[2242]; /* 'value' */
    cpy_r_r11 = ((mypyc___ir___func_ir___FuncDeclObject *)cpy_r_func_decl)->_sig;
    cpy_r_r12 = ((mypyc___ir___func_ir___FuncSignatureObject *)cpy_r_r11)->_args;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPySequenceTuple_GetItem(cpy_r_r12, 2);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1059, CPyStatic_function___globals);
        goto CPyL24;
    }
    if (likely(Py_TYPE(cpy_r_r13) == CPyType_func_ir___RuntimeArg))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1059, CPyStatic_function___globals, "mypyc.ir.func_ir.RuntimeArg", cpy_r_r13);
        goto CPyL24;
    }
    cpy_r_r15 = ((mypyc___ir___func_ir___RuntimeArgObject *)cpy_r_r14)->_type;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = NULL;
    cpy_r_r17 = CPyDef_builder___IRBuilder___add_argument(cpy_r_builder, cpy_r_r10, cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1059, CPyStatic_function___globals);
        goto CPyL24;
    }
    cpy_r_value_reg = cpy_r_r17;
    cpy_r_r18 = CPyStatics[7714]; /* '__mypyc_setter__' */
    cpy_r_r19 = CPyStr_Startswith(cpy_r_name, cpy_r_r18);
    if (cpy_r_r19) {
        goto CPyL10;
    } else
        goto CPyL25;
CPyL8: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1060, CPyStatic_function___globals);
        goto CPyL22;
    }
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r21 = CPyStatics[7714]; /* '__mypyc_setter__' */
    cpy_r_r22 = CPyStr_Size_size_t(cpy_r_r21);
    cpy_r_r23 = cpy_r_r22 >= 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1061, CPyStatic_function___globals);
        goto CPyL26;
    }
    cpy_r_r24 = cpy_r_r22 << 1;
    cpy_r_r25 = CPyStr_GetSlice(cpy_r_name, cpy_r_r24, 9223372036854775806LL);
    CPy_DECREF(cpy_r_name);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1061, CPyStatic_function___globals);
        goto CPyL27;
    }
    if (likely(PyUnicode_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1061, CPyStatic_function___globals, "str", cpy_r_r25);
        goto CPyL27;
    }
    cpy_r_attr_name = cpy_r_r26;
    if (cpy_r_is_trait) goto CPyL28;
    cpy_r_r27 = CPyDef_ops___SetAttr(cpy_r_self_reg, cpy_r_attr_name, cpy_r_value_reg, -2);
    CPy_DECREF(cpy_r_self_reg);
    CPy_DECREF(cpy_r_attr_name);
    CPy_DECREF(cpy_r_value_reg);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1063, CPyStatic_function___globals);
        goto CPyL22;
    }
    cpy_r_r28 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1063, CPyStatic_function___globals);
        goto CPyL22;
    } else
        goto CPyL29;
CPyL16: ;
    cpy_r_r29 = CPyDef_builder___IRBuilder___none(cpy_r_builder);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1064, CPyStatic_function___globals);
        goto CPyL22;
    }
    cpy_r_r30 = CPY_INT_TAG;
    cpy_r_r31 = CPyDef_ops___Return(cpy_r_r29, cpy_r_r30);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1064, CPyStatic_function___globals);
        goto CPyL22;
    }
    cpy_r_r32 = CPyDef_builder___IRBuilder___add(cpy_r_builder, cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1064, CPyStatic_function___globals);
        goto CPyL22;
    } else
        goto CPyL30;
CPyL19: ;
    cpy_r_r33 = CPyDef_builder___IRBuilder___leave(cpy_r_builder);
    if (unlikely(cpy_r_r33.f0 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1065, CPyStatic_function___globals);
        goto CPyL22;
    }
    cpy_r_r34 = cpy_r_r33.f0;
    CPy_INCREF(cpy_r_r34);
    cpy_r_args = cpy_r_r34;
    cpy_r_r35 = cpy_r_r33.f1;
    CPy_INCREF(cpy_r_r35);
    cpy_r__ = cpy_r_r35;
    CPy_DECREF(cpy_r__);
    cpy_r_r36 = cpy_r_r33.f2;
    CPy_INCREF(cpy_r_r36);
    cpy_r_blocks = cpy_r_r36;
    cpy_r_r37 = cpy_r_r33.f3;
    CPy_INCREF(cpy_r_r37);
    cpy_r_ret_type = cpy_r_r37;
    CPy_DECREF(cpy_r_ret_type);
    cpy_r_r38 = cpy_r_r33.f4;
    CPy_INCREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r33.f0);
    CPy_DECREF(cpy_r_r33.f1);
    CPy_DECREF(cpy_r_r33.f2);
    CPy_DECREF(cpy_r_r33.f3);
    CPy_DECREF(cpy_r_r33.f4);
    cpy_r_fn_info = cpy_r_r38;
    CPy_DECREF(cpy_r_fn_info);
    cpy_r_r39 = CPY_INT_TAG;
    cpy_r_r40 = NULL;
    cpy_r_r41 = CPyDef_func_ir___FuncIR(cpy_r_func_decl, cpy_r_args, cpy_r_blocks, cpy_r_r39, cpy_r_r40);
    CPy_DECREF(cpy_r_args);
    CPy_DECREF(cpy_r_blocks);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1066, CPyStatic_function___globals);
        goto CPyL22;
    }
    return cpy_r_r41;
CPyL22: ;
    cpy_r_r42 = NULL;
    return cpy_r_r42;
CPyL23: ;
    CPy_DecRef(cpy_r_name);
    goto CPyL22;
CPyL24: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_self_reg);
    goto CPyL22;
CPyL25: ;
    CPy_DECREF(cpy_r_name);
    CPy_DECREF(cpy_r_self_reg);
    CPy_DECREF(cpy_r_value_reg);
    goto CPyL8;
CPyL26: ;
    CPy_DecRef(cpy_r_name);
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_value_reg);
    goto CPyL22;
CPyL27: ;
    CPy_DecRef(cpy_r_self_reg);
    CPy_DecRef(cpy_r_value_reg);
    goto CPyL22;
CPyL28: ;
    CPy_DECREF(cpy_r_self_reg);
    CPy_DECREF(cpy_r_value_reg);
    CPy_DECREF(cpy_r_attr_name);
    goto CPyL16;
CPyL29: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL16;
CPyL30: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL19;
}

PyObject *CPyPy_function___gen_property_setter_ir(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"builder", "func_decl", "cdef", "is_trait", 0};
    static CPyArg_Parser parser = {"OOOO:gen_property_setter_ir", kwlist, 0};
    PyObject *obj_builder;
    PyObject *obj_func_decl;
    PyObject *obj_cdef;
    PyObject *obj_is_trait;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_builder, &obj_func_decl, &obj_cdef, &obj_is_trait)) {
        return NULL;
    }
    PyObject *arg_builder;
    if (likely(Py_TYPE(obj_builder) == CPyType_builder___IRBuilder))
        arg_builder = obj_builder;
    else {
        CPy_TypeError("mypyc.irbuild.builder.IRBuilder", obj_builder); 
        goto fail;
    }
    PyObject *arg_func_decl;
    if (likely(Py_TYPE(obj_func_decl) == CPyType_func_ir___FuncDecl))
        arg_func_decl = obj_func_decl;
    else {
        CPy_TypeError("mypyc.ir.func_ir.FuncDecl", obj_func_decl); 
        goto fail;
    }
    PyObject *arg_cdef;
    if (likely(Py_TYPE(obj_cdef) == CPyType_nodes___ClassDef))
        arg_cdef = obj_cdef;
    else {
        CPy_TypeError("mypy.nodes.ClassDef", obj_cdef); 
        goto fail;
    }
    char arg_is_trait;
    if (unlikely(!PyBool_Check(obj_is_trait))) {
        CPy_TypeError("bool", obj_is_trait); goto fail;
    } else
        arg_is_trait = obj_is_trait == Py_True;
    PyObject *retval = CPyDef_function___gen_property_setter_ir(arg_builder, arg_func_decl, arg_cdef, arg_is_trait);
    return retval;
fail: ;
    CPy_AddTraceback("mypyc/irbuild/function.py", "gen_property_setter_ir", 1049, CPyStatic_function___globals);
    return NULL;
}

char CPyDef_function_____top_level__(void) {
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
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    char cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject **cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    int32_t cpy_r_r128;
    char cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    int32_t cpy_r_r132;
    char cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    int32_t cpy_r_r136;
    char cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    int32_t cpy_r_r140;
    char cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    int32_t cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    PyObject *cpy_r_r147;
    int32_t cpy_r_r148;
    char cpy_r_r149;
    PyObject **cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject *cpy_r_r153;
    PyObject *cpy_r_r154;
    int32_t cpy_r_r155;
    char cpy_r_r156;
    PyObject *cpy_r_r157;
    char cpy_r_r158;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", -1, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_function___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 13, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9083]; /* ('defaultdict',) */
    cpy_r_r10 = CPyStatics[76]; /* 'collections' */
    cpy_r_r11 = CPyStatic_function___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 15, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_collections = cpy_r_r12;
    CPy_INCREF(CPyModule_collections);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9423]; /* ('NamedTuple', 'Sequence') */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_function___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 16, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[10134]; /* ('ArgKind', 'ClassDef', 'Decorator', 'FuncDef',
                                      'FuncItem', 'LambdaExpr', 'OverloadedFuncDef',
                                      'SymbolNode', 'TypeInfo', 'Var') */
    cpy_r_r18 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r19 = CPyStatic_function___globals;
    cpy_r_r20 = CPyImport_ImportFromMany(cpy_r_r18, cpy_r_r17, cpy_r_r17, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 18, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypy___nodes = cpy_r_r20;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r21 = CPyStatics[10135]; /* ('CallableType', 'get_proper_type') */
    cpy_r_r22 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r23 = CPyStatic_function___globals;
    cpy_r_r24 = CPyImport_ImportFromMany(cpy_r_r22, cpy_r_r21, cpy_r_r21, cpy_r_r23);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 30, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypy___types = cpy_r_r24;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r25 = CPyStatics[10136]; /* ('LAMBDA_NAME', 'PROPSET_PREFIX', 'SELF_NAME') */
    cpy_r_r26 = CPyStatics[6841]; /* 'mypyc.common' */
    cpy_r_r27 = CPyStatic_function___globals;
    cpy_r_r28 = CPyImport_ImportFromMany(cpy_r_r26, cpy_r_r25, cpy_r_r25, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 31, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___common = cpy_r_r28;
    CPy_INCREF(CPyModule_mypyc___common);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r29 = CPyStatics[10042]; /* ('ClassIR', 'NonExtClassInfo') */
    cpy_r_r30 = CPyStatics[6662]; /* 'mypyc.ir.class_ir' */
    cpy_r_r31 = CPyStatic_function___globals;
    cpy_r_r32 = CPyImport_ImportFromMany(cpy_r_r30, cpy_r_r29, cpy_r_r29, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 32, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___ir___class_ir = cpy_r_r32;
    CPy_INCREF(CPyModule_mypyc___ir___class_ir);
    CPy_DECREF(cpy_r_r32);
    cpy_r_r33 = CPyStatics[10137]; /* ('FUNC_CLASSMETHOD', 'FUNC_NORMAL', 'FUNC_STATICMETHOD',
                                      'FuncDecl', 'FuncIR', 'FuncSignature', 'RuntimeArg') */
    cpy_r_r34 = CPyStatics[6692]; /* 'mypyc.ir.func_ir' */
    cpy_r_r35 = CPyStatic_function___globals;
    cpy_r_r36 = CPyImport_ImportFromMany(cpy_r_r34, cpy_r_r33, cpy_r_r33, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 33, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___ir___func_ir = cpy_r_r36;
    CPy_INCREF(CPyModule_mypyc___ir___func_ir);
    CPy_DECREF(cpy_r_r36);
    cpy_r_r37 = CPyStatics[10138]; /* ('BasicBlock', 'GetAttr', 'InitStatic', 'Integer',
                                      'LoadAddress', 'LoadLiteral', 'Register', 'Return',
                                      'SetAttr', 'Unbox', 'Unreachable', 'Value') */
    cpy_r_r38 = CPyStatics[6674]; /* 'mypyc.ir.ops' */
    cpy_r_r39 = CPyStatic_function___globals;
    cpy_r_r40 = CPyImport_ImportFromMany(cpy_r_r38, cpy_r_r37, cpy_r_r37, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 42, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___ir___ops = cpy_r_r40;
    CPy_INCREF(CPyModule_mypyc___ir___ops);
    CPy_DECREF(cpy_r_r40);
    cpy_r_r41 = CPyStatics[10139]; /* ('RInstance', 'bool_rprimitive', 'dict_rprimitive',
                                      'int_rprimitive', 'object_rprimitive') */
    cpy_r_r42 = CPyStatics[6676]; /* 'mypyc.ir.rtypes' */
    cpy_r_r43 = CPyStatic_function___globals;
    cpy_r_r44 = CPyImport_ImportFromMany(cpy_r_r42, cpy_r_r41, cpy_r_r41, cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 56, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___ir___rtypes = cpy_r_r44;
    CPy_INCREF(CPyModule_mypyc___ir___rtypes);
    CPy_DECREF(cpy_r_r44);
    cpy_r_r45 = CPyStatics[10140]; /* ('IRBuilder', 'SymbolTarget', 'gen_arg_defaults') */
    cpy_r_r46 = CPyStatics[8054]; /* 'mypyc.irbuild.builder' */
    cpy_r_r47 = CPyStatic_function___globals;
    cpy_r_r48 = CPyImport_ImportFromMany(cpy_r_r46, cpy_r_r45, cpy_r_r45, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 63, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___irbuild___builder = cpy_r_r48;
    CPy_INCREF(CPyModule_mypyc___irbuild___builder);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r49 = CPyStatics[10141]; /* ('add_call_to_callable_class',
                                      'add_get_to_callable_class',
                                      'instantiate_callable_class', 'setup_callable_class') */
    cpy_r_r50 = CPyStatics[8355]; /* 'mypyc.irbuild.callable_class' */
    cpy_r_r51 = CPyStatic_function___globals;
    cpy_r_r52 = CPyImport_ImportFromMany(cpy_r_r50, cpy_r_r49, cpy_r_r49, cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 64, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___irbuild___callable_class = cpy_r_r52;
    CPy_INCREF(CPyModule_mypyc___irbuild___callable_class);
    CPy_DECREF(cpy_r_r52);
    cpy_r_r53 = CPyStatics[10046]; /* ('FuncInfo', 'ImplicitClass') */
    cpy_r_r54 = CPyStatics[8082]; /* 'mypyc.irbuild.context' */
    cpy_r_r55 = CPyStatic_function___globals;
    cpy_r_r56 = CPyImport_ImportFromMany(cpy_r_r54, cpy_r_r53, cpy_r_r53, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 70, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___irbuild___context = cpy_r_r56;
    CPy_INCREF(CPyModule_mypyc___irbuild___context);
    CPy_DECREF(cpy_r_r56);
    cpy_r_r57 = CPyStatics[10142]; /* ('finalize_env_class', 'load_env_registers',
                                      'load_outer_envs', 'setup_env_class',
                                      'setup_func_for_recursive_call') */
    cpy_r_r58 = CPyStatics[8361]; /* 'mypyc.irbuild.env_class' */
    cpy_r_r59 = CPyStatic_function___globals;
    cpy_r_r60 = CPyImport_ImportFromMany(cpy_r_r58, cpy_r_r57, cpy_r_r57, cpy_r_r59);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 71, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___irbuild___env_class = cpy_r_r60;
    CPy_INCREF(CPyModule_mypyc___irbuild___env_class);
    CPy_DECREF(cpy_r_r60);
    cpy_r_r61 = CPyStatics[10143]; /* ('add_methods_to_generator_class',
                                      'add_raise_exception_blocks_to_generator_class',
                                      'create_switch_for_generator_class',
                                      'gen_generator_func',
                                      'populate_switch_for_generator_class',
                                      'setup_env_for_generator_class') */
    cpy_r_r62 = CPyStatics[8368]; /* 'mypyc.irbuild.generator' */
    cpy_r_r63 = CPyStatic_function___globals;
    cpy_r_r64 = CPyImport_ImportFromMany(cpy_r_r62, cpy_r_r61, cpy_r_r61, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 78, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___irbuild___generator = cpy_r_r64;
    CPy_INCREF(CPyModule_mypyc___irbuild___generator);
    CPy_DECREF(cpy_r_r64);
    cpy_r_r65 = CPyStatics[10082]; /* ('AssignmentTarget',) */
    cpy_r_r66 = CPyStatics[8098]; /* 'mypyc.irbuild.targets' */
    cpy_r_r67 = CPyStatic_function___globals;
    cpy_r_r68 = CPyImport_ImportFromMany(cpy_r_r66, cpy_r_r65, cpy_r_r65, cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 86, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___irbuild___targets = cpy_r_r68;
    CPy_INCREF(CPyModule_mypyc___irbuild___targets);
    CPy_DECREF(cpy_r_r68);
    cpy_r_r69 = CPyStatics[10144]; /* ('is_constant',) */
    cpy_r_r70 = CPyStatics[8101]; /* 'mypyc.irbuild.util' */
    cpy_r_r71 = CPyStatic_function___globals;
    cpy_r_r72 = CPyImport_ImportFromMany(cpy_r_r70, cpy_r_r69, cpy_r_r69, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 87, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___irbuild___util = cpy_r_r72;
    CPy_INCREF(CPyModule_mypyc___irbuild___util);
    CPy_DECREF(cpy_r_r72);
    cpy_r_r73 = CPyStatics[10145]; /* ('dict_get_method_with_none', 'dict_new_op',
                                      'dict_set_item_op') */
    cpy_r_r74 = CPyStatics[8102]; /* 'mypyc.primitives.dict_ops' */
    cpy_r_r75 = CPyStatic_function___globals;
    cpy_r_r76 = CPyImport_ImportFromMany(cpy_r_r74, cpy_r_r73, cpy_r_r73, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 88, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___primitives___dict_ops = cpy_r_r76;
    CPy_INCREF(CPyModule_mypyc___primitives___dict_ops);
    CPy_DECREF(cpy_r_r76);
    cpy_r_r77 = CPyStatics[10146]; /* ('py_setattr_op',) */
    cpy_r_r78 = CPyStatics[8103]; /* 'mypyc.primitives.generic_ops' */
    cpy_r_r79 = CPyStatic_function___globals;
    cpy_r_r80 = CPyImport_ImportFromMany(cpy_r_r78, cpy_r_r77, cpy_r_r77, cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 89, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___primitives___generic_ops = cpy_r_r80;
    CPy_INCREF(CPyModule_mypyc___primitives___generic_ops);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r81 = CPyStatics[10147]; /* ('register_function',) */
    cpy_r_r82 = CPyStatics[8105]; /* 'mypyc.primitives.misc_ops' */
    cpy_r_r83 = CPyStatic_function___globals;
    cpy_r_r84 = CPyImport_ImportFromMany(cpy_r_r82, cpy_r_r81, cpy_r_r81, cpy_r_r83);
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 90, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___primitives___misc_ops = cpy_r_r84;
    CPy_INCREF(CPyModule_mypyc___primitives___misc_ops);
    CPy_DECREF(cpy_r_r84);
    cpy_r_r85 = CPyStatics[10148]; /* ('builtin_names',) */
    cpy_r_r86 = CPyStatics[8107]; /* 'mypyc.primitives.registry' */
    cpy_r_r87 = CPyStatic_function___globals;
    cpy_r_r88 = CPyImport_ImportFromMany(cpy_r_r86, cpy_r_r85, cpy_r_r85, cpy_r_r87);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 91, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___primitives___registry = cpy_r_r88;
    CPy_INCREF(CPyModule_mypyc___primitives___registry);
    CPy_DECREF(cpy_r_r88);
    cpy_r_r89 = CPyStatics[10149]; /* ('is_same_method_signature', 'is_same_type') */
    cpy_r_r90 = CPyStatics[7045]; /* 'mypyc.sametype' */
    cpy_r_r91 = CPyStatic_function___globals;
    cpy_r_r92 = CPyImport_ImportFromMany(cpy_r_r90, cpy_r_r89, cpy_r_r89, cpy_r_r91);
    if (unlikely(cpy_r_r92 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 92, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_mypyc___sametype = cpy_r_r92;
    CPy_INCREF(CPyModule_mypyc___sametype);
    CPy_DECREF(cpy_r_r92);
    cpy_r_r93 = CPyModule_typing;
    cpy_r_r94 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r95 = cpy_r_r93 != cpy_r_r94;
    if (cpy_r_r95) goto CPyL28;
    cpy_r_r96 = CPyStatics[21]; /* 'typing' */
    cpy_r_r97 = PyImport_Import(cpy_r_r96);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals);
        goto CPyL53;
    }
    CPyModule_typing = cpy_r_r97;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r97);
CPyL28: ;
    cpy_r_r98 = PyImport_GetModuleDict();
    cpy_r_r99 = CPyStatics[21]; /* 'typing' */
    cpy_r_r100 = CPyDict_GetItem(cpy_r_r98, cpy_r_r99);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals);
        goto CPyL53;
    }
    cpy_r_r101 = CPyStatics[612]; /* '_NamedTuple' */
    cpy_r_r102 = CPyObject_GetAttr(cpy_r_r100, cpy_r_r101);
    CPy_DECREF(cpy_r_r100);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals);
        goto CPyL53;
    }
    cpy_r_r103 = PyTuple_Pack(1, cpy_r_r102);
    CPy_DECREF(cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals);
        goto CPyL53;
    }
    cpy_r_r104 = CPyModule_typing;
    cpy_r_r105 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r106 = cpy_r_r104 != cpy_r_r105;
    if (cpy_r_r106) goto CPyL34;
    cpy_r_r107 = CPyStatics[21]; /* 'typing' */
    cpy_r_r108 = PyImport_Import(cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals);
        goto CPyL54;
    }
    CPyModule_typing = cpy_r_r108;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r108);
CPyL34: ;
    cpy_r_r109 = PyImport_GetModuleDict();
    cpy_r_r110 = CPyStatics[21]; /* 'typing' */
    cpy_r_r111 = CPyDict_GetItem(cpy_r_r109, cpy_r_r110);
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals);
        goto CPyL54;
    }
    cpy_r_r112 = CPyStatics[613]; /* 'NamedTupleMeta' */
    cpy_r_r113 = CPyObject_GetAttr(cpy_r_r111, cpy_r_r112);
    CPy_DECREF(cpy_r_r111);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals);
        goto CPyL54;
    }
    cpy_r_r114 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r115 = PyObject_HasAttr(cpy_r_r113, cpy_r_r114);
    if (!cpy_r_r115) goto CPyL41;
    cpy_r_r116 = CPyStatics[8336]; /* 'ArgInfo' */
    cpy_r_r117 = CPyStatics[614]; /* '__prepare__' */
    cpy_r_r118 = CPyObject_GetAttr(cpy_r_r113, cpy_r_r117);
    if (unlikely(cpy_r_r118 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals);
        goto CPyL55;
    }
    PyObject *cpy_r_r119[2] = {cpy_r_r116, cpy_r_r103};
    cpy_r_r120 = (PyObject **)&cpy_r_r119;
    cpy_r_r121 = _PyObject_Vectorcall(cpy_r_r118, cpy_r_r120, 2, 0);
    CPy_DECREF(cpy_r_r118);
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals);
        goto CPyL55;
    }
    if (likely(PyDict_Check(cpy_r_r121)))
        cpy_r_r122 = cpy_r_r121;
    else {
        CPy_TypeErrorTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals, "dict", cpy_r_r121);
        goto CPyL55;
    }
    cpy_r_r123 = cpy_r_r122;
    goto CPyL43;
CPyL41: ;
    cpy_r_r124 = PyDict_New();
    if (unlikely(cpy_r_r124 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals);
        goto CPyL55;
    }
    cpy_r_r123 = cpy_r_r124;
CPyL43: ;
    cpy_r_r125 = PyDict_New();
    if (unlikely(cpy_r_r125 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals);
        goto CPyL56;
    }
    cpy_r_r126 = (PyObject *)&PyList_Type;
    cpy_r_r127 = CPyStatics[1678]; /* 'args' */
    cpy_r_r128 = CPyDict_SetItem(cpy_r_r125, cpy_r_r127, cpy_r_r126);
    cpy_r_r129 = cpy_r_r128 >= 0;
    if (unlikely(!cpy_r_r129)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 574, CPyStatic_function___globals);
        goto CPyL57;
    }
    cpy_r_r130 = (PyObject *)&PyList_Type;
    cpy_r_r131 = CPyStatics[1611]; /* 'arg_names' */
    cpy_r_r132 = CPyDict_SetItem(cpy_r_r125, cpy_r_r131, cpy_r_r130);
    cpy_r_r133 = cpy_r_r132 >= 0;
    if (unlikely(!cpy_r_r133)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 575, CPyStatic_function___globals);
        goto CPyL57;
    }
    cpy_r_r134 = (PyObject *)&PyList_Type;
    cpy_r_r135 = CPyStatics[1610]; /* 'arg_kinds' */
    cpy_r_r136 = CPyDict_SetItem(cpy_r_r125, cpy_r_r135, cpy_r_r134);
    cpy_r_r137 = cpy_r_r136 >= 0;
    if (unlikely(!cpy_r_r137)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 576, CPyStatic_function___globals);
        goto CPyL57;
    }
    cpy_r_r138 = CPyStatics[8336]; /* 'ArgInfo' */
    cpy_r_r139 = CPyStatics[616]; /* '__annotations__' */
    cpy_r_r140 = CPyDict_SetItem(cpy_r_r123, cpy_r_r139, cpy_r_r125);
    CPy_DECREF(cpy_r_r125);
    cpy_r_r141 = cpy_r_r140 >= 0;
    if (unlikely(!cpy_r_r141)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals);
        goto CPyL56;
    }
    cpy_r_r142 = CPyStatics[617]; /* 'mypyc filler docstring' */
    cpy_r_r143 = CPyStatics[618]; /* '__doc__' */
    cpy_r_r144 = CPyDict_SetItem(cpy_r_r123, cpy_r_r143, cpy_r_r142);
    cpy_r_r145 = cpy_r_r144 >= 0;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals);
        goto CPyL56;
    }
    cpy_r_r146 = CPyStatics[8172]; /* 'mypyc.irbuild.function' */
    cpy_r_r147 = CPyStatics[619]; /* '__module__' */
    cpy_r_r148 = CPyDict_SetItem(cpy_r_r123, cpy_r_r147, cpy_r_r146);
    cpy_r_r149 = cpy_r_r148 >= 0;
    if (unlikely(!cpy_r_r149)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals);
        goto CPyL56;
    }
    PyObject *cpy_r_r150[3] = {cpy_r_r138, cpy_r_r103, cpy_r_r123};
    cpy_r_r151 = (PyObject **)&cpy_r_r150;
    cpy_r_r152 = _PyObject_Vectorcall(cpy_r_r113, cpy_r_r151, 3, 0);
    CPy_DECREF(cpy_r_r113);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals);
        goto CPyL58;
    }
    CPy_DECREF(cpy_r_r103);
    CPy_DECREF(cpy_r_r123);
    CPyType_function___ArgInfo = (PyTypeObject *)cpy_r_r152;
    CPy_INCREF(CPyType_function___ArgInfo);
    cpy_r_r153 = CPyStatic_function___globals;
    cpy_r_r154 = CPyStatics[8336]; /* 'ArgInfo' */
    cpy_r_r155 = CPyDict_SetItem(cpy_r_r153, cpy_r_r154, cpy_r_r152);
    CPy_DECREF(cpy_r_r152);
    cpy_r_r156 = cpy_r_r155 >= 0;
    if (unlikely(!cpy_r_r156)) {
        CPy_AddTraceback("mypyc/irbuild/function.py", "<module>", 573, CPyStatic_function___globals);
        goto CPyL53;
    }
    cpy_r_r157 = (PyObject *)CPyType_function___ArgInfo;
    return 1;
CPyL53: ;
    cpy_r_r158 = 2;
    return cpy_r_r158;
CPyL54: ;
    CPy_DecRef(cpy_r_r103);
    goto CPyL53;
CPyL55: ;
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r113);
    goto CPyL53;
CPyL56: ;
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r123);
    goto CPyL53;
CPyL57: ;
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r113);
    CPy_DecRef(cpy_r_r123);
    CPy_DecRef(cpy_r_r125);
    goto CPyL53;
CPyL58: ;
    CPy_DecRef(cpy_r_r103);
    CPy_DecRef(cpy_r_r123);
    goto CPyL53;
}
