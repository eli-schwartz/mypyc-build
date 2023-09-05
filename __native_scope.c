#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
scope___Scope_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *scope___Scope_setup(PyTypeObject *type);
PyObject *CPyDef_scope___Scope(void);

static PyObject *
scope___Scope_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_scope___Scope) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = scope___Scope_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_scope___Scope_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
scope___Scope_traverse(mypy___scope___ScopeObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_module);
    Py_VISIT(self->_classes);
    Py_VISIT(self->_function);
    Py_VISIT(self->_functions);
    if (CPyTagged_CheckLong(self->_ignored)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_ignored));
    }
    return 0;
}

static int
scope___Scope_clear(mypy___scope___ScopeObject *self)
{
    Py_CLEAR(self->_module);
    Py_CLEAR(self->_classes);
    Py_CLEAR(self->_function);
    Py_CLEAR(self->_functions);
    if (CPyTagged_CheckLong(self->_ignored)) {
        CPyTagged __tmp = self->_ignored;
        self->_ignored = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
scope___Scope_dealloc(mypy___scope___ScopeObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, scope___Scope_dealloc)
    scope___Scope_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem scope___Scope_vtable[14];
static bool
CPyDef_scope___Scope_trait_vtable_setup(void)
{
    CPyVTableItem scope___Scope_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_scope___Scope_____init__,
        (CPyVTableItem)CPyDef_scope___Scope___current_module_id,
        (CPyVTableItem)CPyDef_scope___Scope___current_target,
        (CPyVTableItem)CPyDef_scope___Scope___current_full_target,
        (CPyVTableItem)CPyDef_scope___Scope___current_type_name,
        (CPyVTableItem)CPyDef_scope___Scope___current_function_name,
        (CPyVTableItem)CPyDef_scope___Scope___module_scope,
        (CPyVTableItem)CPyDef_scope___Scope___function_scope,
        (CPyVTableItem)CPyDef_scope___Scope___outer_functions,
        (CPyVTableItem)CPyDef_scope___Scope___enter_class,
        (CPyVTableItem)CPyDef_scope___Scope___leave_class,
        (CPyVTableItem)CPyDef_scope___Scope___class_scope,
        (CPyVTableItem)CPyDef_scope___Scope___save,
        (CPyVTableItem)CPyDef_scope___Scope___saved_scope,
    };
    memcpy(scope___Scope_vtable, scope___Scope_vtable_scratch, sizeof(scope___Scope_vtable));
    return 1;
}

static PyObject *
scope___Scope_get_module(mypy___scope___ScopeObject *self, void *closure);
static int
scope___Scope_set_module(mypy___scope___ScopeObject *self, PyObject *value, void *closure);
static PyObject *
scope___Scope_get_classes(mypy___scope___ScopeObject *self, void *closure);
static int
scope___Scope_set_classes(mypy___scope___ScopeObject *self, PyObject *value, void *closure);
static PyObject *
scope___Scope_get_function(mypy___scope___ScopeObject *self, void *closure);
static int
scope___Scope_set_function(mypy___scope___ScopeObject *self, PyObject *value, void *closure);
static PyObject *
scope___Scope_get_functions(mypy___scope___ScopeObject *self, void *closure);
static int
scope___Scope_set_functions(mypy___scope___ScopeObject *self, PyObject *value, void *closure);
static PyObject *
scope___Scope_get_ignored(mypy___scope___ScopeObject *self, void *closure);
static int
scope___Scope_set_ignored(mypy___scope___ScopeObject *self, PyObject *value, void *closure);

static PyGetSetDef scope___Scope_getseters[] = {
    {"module",
     (getter)scope___Scope_get_module, (setter)scope___Scope_set_module,
     NULL, NULL},
    {"classes",
     (getter)scope___Scope_get_classes, (setter)scope___Scope_set_classes,
     NULL, NULL},
    {"function",
     (getter)scope___Scope_get_function, (setter)scope___Scope_set_function,
     NULL, NULL},
    {"functions",
     (getter)scope___Scope_get_functions, (setter)scope___Scope_set_functions,
     NULL, NULL},
    {"ignored",
     (getter)scope___Scope_get_ignored, (setter)scope___Scope_set_ignored,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef scope___Scope_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_scope___Scope_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"current_module_id",
     (PyCFunction)CPyPy_scope___Scope___current_module_id,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"current_target",
     (PyCFunction)CPyPy_scope___Scope___current_target,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"current_full_target",
     (PyCFunction)CPyPy_scope___Scope___current_full_target,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"current_type_name",
     (PyCFunction)CPyPy_scope___Scope___current_type_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"current_function_name",
     (PyCFunction)CPyPy_scope___Scope___current_function_name,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"module_scope",
     (PyCFunction)CPyPy_scope___Scope___module_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"function_scope",
     (PyCFunction)CPyPy_scope___Scope___function_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"outer_functions",
     (PyCFunction)CPyPy_scope___Scope___outer_functions,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"enter_class",
     (PyCFunction)CPyPy_scope___Scope___enter_class,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"leave_class",
     (PyCFunction)CPyPy_scope___Scope___leave_class,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"class_scope",
     (PyCFunction)CPyPy_scope___Scope___class_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"save",
     (PyCFunction)CPyPy_scope___Scope___save,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"saved_scope",
     (PyCFunction)CPyPy_scope___Scope___saved_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_scope___Scope_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "Scope",
    .tp_new = scope___Scope_new,
    .tp_dealloc = (destructor)scope___Scope_dealloc,
    .tp_traverse = (traverseproc)scope___Scope_traverse,
    .tp_clear = (inquiry)scope___Scope_clear,
    .tp_getset = scope___Scope_getseters,
    .tp_methods = scope___Scope_methods,
    .tp_init = scope___Scope_init,
    .tp_basicsize = sizeof(mypy___scope___ScopeObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_scope___Scope_template = &CPyType_scope___Scope_template_;

static PyObject *
scope___Scope_setup(PyTypeObject *type)
{
    mypy___scope___ScopeObject *self;
    self = (mypy___scope___ScopeObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = scope___Scope_vtable;
    self->_ignored = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_scope___Scope(void)
{
    PyObject *self = scope___Scope_setup(CPyType_scope___Scope);
    if (self == NULL)
        return NULL;
    char res = CPyDef_scope___Scope_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
scope___Scope_get_module(mypy___scope___ScopeObject *self, void *closure)
{
    if (unlikely(self->_module == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'module' of 'Scope' undefined");
        return NULL;
    }
    CPy_INCREF(self->_module);
    PyObject *retval = self->_module;
    return retval;
}

static int
scope___Scope_set_module(mypy___scope___ScopeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Scope' object attribute 'module' cannot be deleted");
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
    if (tmp != NULL) goto __LL5224;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL5224;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL5224: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_module = tmp;
    return 0;
}

static PyObject *
scope___Scope_get_classes(mypy___scope___ScopeObject *self, void *closure)
{
    if (unlikely(self->_classes == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'classes' of 'Scope' undefined");
        return NULL;
    }
    CPy_INCREF(self->_classes);
    PyObject *retval = self->_classes;
    return retval;
}

static int
scope___Scope_set_classes(mypy___scope___ScopeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Scope' object attribute 'classes' cannot be deleted");
        return -1;
    }
    if (self->_classes != NULL) {
        CPy_DECREF(self->_classes);
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
    self->_classes = tmp;
    return 0;
}

static PyObject *
scope___Scope_get_function(mypy___scope___ScopeObject *self, void *closure)
{
    if (unlikely(self->_function == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'function' of 'Scope' undefined");
        return NULL;
    }
    CPy_INCREF(self->_function);
    PyObject *retval = self->_function;
    return retval;
}

static int
scope___Scope_set_function(mypy___scope___ScopeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Scope' object attribute 'function' cannot be deleted");
        return -1;
    }
    if (self->_function != NULL) {
        CPy_DECREF(self->_function);
    }
    PyObject *tmp;
    if ((Py_TYPE(value) == CPyType_nodes___FuncDef) || (Py_TYPE(value) == CPyType_nodes___LambdaExpr) || (Py_TYPE(value) == CPyType_nodes___OverloadedFuncDef))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL5225;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL5225;
    CPy_TypeError("mypy.nodes.FuncBase or None", value); 
    tmp = NULL;
__LL5225: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_function = tmp;
    return 0;
}

static PyObject *
scope___Scope_get_functions(mypy___scope___ScopeObject *self, void *closure)
{
    if (unlikely(self->_functions == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'functions' of 'Scope' undefined");
        return NULL;
    }
    CPy_INCREF(self->_functions);
    PyObject *retval = self->_functions;
    return retval;
}

static int
scope___Scope_set_functions(mypy___scope___ScopeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Scope' object attribute 'functions' cannot be deleted");
        return -1;
    }
    if (self->_functions != NULL) {
        CPy_DECREF(self->_functions);
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
    self->_functions = tmp;
    return 0;
}

static PyObject *
scope___Scope_get_ignored(mypy___scope___ScopeObject *self, void *closure)
{
    if (unlikely(self->_ignored == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'ignored' of 'Scope' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_ignored);
    PyObject *retval = CPyTagged_StealAsObject(self->_ignored);
    return retval;
}

static int
scope___Scope_set_ignored(mypy___scope___ScopeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'Scope' object attribute 'ignored' cannot be deleted");
        return -1;
    }
    if (self->_ignored != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_ignored);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_ignored = tmp;
    return 0;
}

static PyObject *scope___module_scope_Scope_env_setup(PyTypeObject *type);
PyObject *CPyDef_scope___module_scope_Scope_env(void);

static PyObject *
scope___module_scope_Scope_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_scope___module_scope_Scope_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return scope___module_scope_Scope_env_setup(type);
}

static int
scope___module_scope_Scope_env_traverse(mypy___scope___module_scope_Scope_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_prefix);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    return 0;
}

static int
scope___module_scope_Scope_env_clear(mypy___scope___module_scope_Scope_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_prefix);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
scope___module_scope_Scope_env_dealloc(mypy___scope___module_scope_Scope_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, scope___module_scope_Scope_env_dealloc)
    scope___module_scope_Scope_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem scope___module_scope_Scope_env_vtable[1];
static bool
CPyDef_scope___module_scope_Scope_env_trait_vtable_setup(void)
{
    CPyVTableItem scope___module_scope_Scope_env_vtable_scratch[] = {
        NULL
    };
    memcpy(scope___module_scope_Scope_env_vtable, scope___module_scope_Scope_env_vtable_scratch, sizeof(scope___module_scope_Scope_env_vtable));
    return 1;
}

static PyMethodDef scope___module_scope_Scope_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_scope___module_scope_Scope_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "module_scope_Scope_env",
    .tp_new = scope___module_scope_Scope_env_new,
    .tp_dealloc = (destructor)scope___module_scope_Scope_env_dealloc,
    .tp_traverse = (traverseproc)scope___module_scope_Scope_env_traverse,
    .tp_clear = (inquiry)scope___module_scope_Scope_env_clear,
    .tp_methods = scope___module_scope_Scope_env_methods,
    .tp_basicsize = sizeof(mypy___scope___module_scope_Scope_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_scope___module_scope_Scope_env_template = &CPyType_scope___module_scope_Scope_env_template_;

static PyObject *
scope___module_scope_Scope_env_setup(PyTypeObject *type)
{
    mypy___scope___module_scope_Scope_envObject *self;
    self = (mypy___scope___module_scope_Scope_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = scope___module_scope_Scope_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_scope___module_scope_Scope_env(void)
{
    PyObject *self = scope___module_scope_Scope_env_setup(CPyType_scope___module_scope_Scope_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *scope___module_scope_Scope_gen_setup(PyTypeObject *type);
PyObject *CPyDef_scope___module_scope_Scope_gen(void);

static PyObject *
scope___module_scope_Scope_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_scope___module_scope_Scope_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return scope___module_scope_Scope_gen_setup(type);
}

static int
scope___module_scope_Scope_gen_traverse(mypy___scope___module_scope_Scope_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
scope___module_scope_Scope_gen_clear(mypy___scope___module_scope_Scope_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
scope___module_scope_Scope_gen_dealloc(mypy___scope___module_scope_Scope_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, scope___module_scope_Scope_gen_dealloc)
    scope___module_scope_Scope_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem scope___module_scope_Scope_gen_vtable[6];
static bool
CPyDef_scope___module_scope_Scope_gen_trait_vtable_setup(void)
{
    CPyVTableItem scope___module_scope_Scope_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_scope___module_scope_Scope_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_scope___module_scope_Scope_gen_____next__,
        (CPyVTableItem)CPyDef_scope___module_scope_Scope_gen___send,
        (CPyVTableItem)CPyDef_scope___module_scope_Scope_gen_____iter__,
        (CPyVTableItem)CPyDef_scope___module_scope_Scope_gen___throw,
        (CPyVTableItem)CPyDef_scope___module_scope_Scope_gen___close,
    };
    memcpy(scope___module_scope_Scope_gen_vtable, scope___module_scope_Scope_gen_vtable_scratch, sizeof(scope___module_scope_Scope_gen_vtable));
    return 1;
}

static PyMethodDef scope___module_scope_Scope_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_scope___module_scope_Scope_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_scope___module_scope_Scope_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_scope___module_scope_Scope_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_scope___module_scope_Scope_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_scope___module_scope_Scope_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_scope___module_scope_Scope_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_scope___module_scope_Scope_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "module_scope_Scope_gen",
    .tp_new = scope___module_scope_Scope_gen_new,
    .tp_dealloc = (destructor)scope___module_scope_Scope_gen_dealloc,
    .tp_traverse = (traverseproc)scope___module_scope_Scope_gen_traverse,
    .tp_clear = (inquiry)scope___module_scope_Scope_gen_clear,
    .tp_methods = scope___module_scope_Scope_gen_methods,
    .tp_iter = CPyDef_scope___module_scope_Scope_gen_____iter__,
    .tp_iternext = CPyDef_scope___module_scope_Scope_gen_____next__,
    .tp_basicsize = sizeof(mypy___scope___module_scope_Scope_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_scope___module_scope_Scope_gen_template = &CPyType_scope___module_scope_Scope_gen_template_;

static PyObject *
scope___module_scope_Scope_gen_setup(PyTypeObject *type)
{
    mypy___scope___module_scope_Scope_genObject *self;
    self = (mypy___scope___module_scope_Scope_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = scope___module_scope_Scope_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_scope___module_scope_Scope_gen(void)
{
    PyObject *self = scope___module_scope_Scope_gen_setup(CPyType_scope___module_scope_Scope_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *scope___function_scope_Scope_env_setup(PyTypeObject *type);
PyObject *CPyDef_scope___function_scope_Scope_env(void);

static PyObject *
scope___function_scope_Scope_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_scope___function_scope_Scope_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return scope___function_scope_Scope_env_setup(type);
}

static int
scope___function_scope_Scope_env_traverse(mypy___scope___function_scope_Scope_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_fdef);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    return 0;
}

static int
scope___function_scope_Scope_env_clear(mypy___scope___function_scope_Scope_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_fdef);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
scope___function_scope_Scope_env_dealloc(mypy___scope___function_scope_Scope_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, scope___function_scope_Scope_env_dealloc)
    scope___function_scope_Scope_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem scope___function_scope_Scope_env_vtable[1];
static bool
CPyDef_scope___function_scope_Scope_env_trait_vtable_setup(void)
{
    CPyVTableItem scope___function_scope_Scope_env_vtable_scratch[] = {
        NULL
    };
    memcpy(scope___function_scope_Scope_env_vtable, scope___function_scope_Scope_env_vtable_scratch, sizeof(scope___function_scope_Scope_env_vtable));
    return 1;
}

static PyMethodDef scope___function_scope_Scope_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_scope___function_scope_Scope_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "function_scope_Scope_env",
    .tp_new = scope___function_scope_Scope_env_new,
    .tp_dealloc = (destructor)scope___function_scope_Scope_env_dealloc,
    .tp_traverse = (traverseproc)scope___function_scope_Scope_env_traverse,
    .tp_clear = (inquiry)scope___function_scope_Scope_env_clear,
    .tp_methods = scope___function_scope_Scope_env_methods,
    .tp_basicsize = sizeof(mypy___scope___function_scope_Scope_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_scope___function_scope_Scope_env_template = &CPyType_scope___function_scope_Scope_env_template_;

static PyObject *
scope___function_scope_Scope_env_setup(PyTypeObject *type)
{
    mypy___scope___function_scope_Scope_envObject *self;
    self = (mypy___scope___function_scope_Scope_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = scope___function_scope_Scope_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_scope___function_scope_Scope_env(void)
{
    PyObject *self = scope___function_scope_Scope_env_setup(CPyType_scope___function_scope_Scope_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *scope___function_scope_Scope_gen_setup(PyTypeObject *type);
PyObject *CPyDef_scope___function_scope_Scope_gen(void);

static PyObject *
scope___function_scope_Scope_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_scope___function_scope_Scope_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return scope___function_scope_Scope_gen_setup(type);
}

static int
scope___function_scope_Scope_gen_traverse(mypy___scope___function_scope_Scope_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
scope___function_scope_Scope_gen_clear(mypy___scope___function_scope_Scope_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
scope___function_scope_Scope_gen_dealloc(mypy___scope___function_scope_Scope_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, scope___function_scope_Scope_gen_dealloc)
    scope___function_scope_Scope_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem scope___function_scope_Scope_gen_vtable[6];
static bool
CPyDef_scope___function_scope_Scope_gen_trait_vtable_setup(void)
{
    CPyVTableItem scope___function_scope_Scope_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_scope___function_scope_Scope_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_scope___function_scope_Scope_gen_____next__,
        (CPyVTableItem)CPyDef_scope___function_scope_Scope_gen___send,
        (CPyVTableItem)CPyDef_scope___function_scope_Scope_gen_____iter__,
        (CPyVTableItem)CPyDef_scope___function_scope_Scope_gen___throw,
        (CPyVTableItem)CPyDef_scope___function_scope_Scope_gen___close,
    };
    memcpy(scope___function_scope_Scope_gen_vtable, scope___function_scope_Scope_gen_vtable_scratch, sizeof(scope___function_scope_Scope_gen_vtable));
    return 1;
}

static PyMethodDef scope___function_scope_Scope_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_scope___function_scope_Scope_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_scope___function_scope_Scope_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_scope___function_scope_Scope_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_scope___function_scope_Scope_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_scope___function_scope_Scope_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_scope___function_scope_Scope_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_scope___function_scope_Scope_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "function_scope_Scope_gen",
    .tp_new = scope___function_scope_Scope_gen_new,
    .tp_dealloc = (destructor)scope___function_scope_Scope_gen_dealloc,
    .tp_traverse = (traverseproc)scope___function_scope_Scope_gen_traverse,
    .tp_clear = (inquiry)scope___function_scope_Scope_gen_clear,
    .tp_methods = scope___function_scope_Scope_gen_methods,
    .tp_iter = CPyDef_scope___function_scope_Scope_gen_____iter__,
    .tp_iternext = CPyDef_scope___function_scope_Scope_gen_____next__,
    .tp_basicsize = sizeof(mypy___scope___function_scope_Scope_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_scope___function_scope_Scope_gen_template = &CPyType_scope___function_scope_Scope_gen_template_;

static PyObject *
scope___function_scope_Scope_gen_setup(PyTypeObject *type)
{
    mypy___scope___function_scope_Scope_genObject *self;
    self = (mypy___scope___function_scope_Scope_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = scope___function_scope_Scope_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_scope___function_scope_Scope_gen(void)
{
    PyObject *self = scope___function_scope_Scope_gen_setup(CPyType_scope___function_scope_Scope_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *scope___class_scope_Scope_env_setup(PyTypeObject *type);
PyObject *CPyDef_scope___class_scope_Scope_env(void);

static PyObject *
scope___class_scope_Scope_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_scope___class_scope_Scope_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return scope___class_scope_Scope_env_setup(type);
}

static int
scope___class_scope_Scope_env_traverse(mypy___scope___class_scope_Scope_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_info);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    return 0;
}

static int
scope___class_scope_Scope_env_clear(mypy___scope___class_scope_Scope_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_info);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    return 0;
}

static void
scope___class_scope_Scope_env_dealloc(mypy___scope___class_scope_Scope_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, scope___class_scope_Scope_env_dealloc)
    scope___class_scope_Scope_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem scope___class_scope_Scope_env_vtable[1];
static bool
CPyDef_scope___class_scope_Scope_env_trait_vtable_setup(void)
{
    CPyVTableItem scope___class_scope_Scope_env_vtable_scratch[] = {
        NULL
    };
    memcpy(scope___class_scope_Scope_env_vtable, scope___class_scope_Scope_env_vtable_scratch, sizeof(scope___class_scope_Scope_env_vtable));
    return 1;
}

static PyMethodDef scope___class_scope_Scope_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_scope___class_scope_Scope_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "class_scope_Scope_env",
    .tp_new = scope___class_scope_Scope_env_new,
    .tp_dealloc = (destructor)scope___class_scope_Scope_env_dealloc,
    .tp_traverse = (traverseproc)scope___class_scope_Scope_env_traverse,
    .tp_clear = (inquiry)scope___class_scope_Scope_env_clear,
    .tp_methods = scope___class_scope_Scope_env_methods,
    .tp_basicsize = sizeof(mypy___scope___class_scope_Scope_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_scope___class_scope_Scope_env_template = &CPyType_scope___class_scope_Scope_env_template_;

static PyObject *
scope___class_scope_Scope_env_setup(PyTypeObject *type)
{
    mypy___scope___class_scope_Scope_envObject *self;
    self = (mypy___scope___class_scope_Scope_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = scope___class_scope_Scope_env_vtable;
    self->___mypyc_next_label__ = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef_scope___class_scope_Scope_env(void)
{
    PyObject *self = scope___class_scope_Scope_env_setup(CPyType_scope___class_scope_Scope_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *scope___class_scope_Scope_gen_setup(PyTypeObject *type);
PyObject *CPyDef_scope___class_scope_Scope_gen(void);

static PyObject *
scope___class_scope_Scope_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_scope___class_scope_Scope_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return scope___class_scope_Scope_gen_setup(type);
}

static int
scope___class_scope_Scope_gen_traverse(mypy___scope___class_scope_Scope_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
scope___class_scope_Scope_gen_clear(mypy___scope___class_scope_Scope_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
scope___class_scope_Scope_gen_dealloc(mypy___scope___class_scope_Scope_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, scope___class_scope_Scope_gen_dealloc)
    scope___class_scope_Scope_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem scope___class_scope_Scope_gen_vtable[6];
static bool
CPyDef_scope___class_scope_Scope_gen_trait_vtable_setup(void)
{
    CPyVTableItem scope___class_scope_Scope_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_scope___class_scope_Scope_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_scope___class_scope_Scope_gen_____next__,
        (CPyVTableItem)CPyDef_scope___class_scope_Scope_gen___send,
        (CPyVTableItem)CPyDef_scope___class_scope_Scope_gen_____iter__,
        (CPyVTableItem)CPyDef_scope___class_scope_Scope_gen___throw,
        (CPyVTableItem)CPyDef_scope___class_scope_Scope_gen___close,
    };
    memcpy(scope___class_scope_Scope_gen_vtable, scope___class_scope_Scope_gen_vtable_scratch, sizeof(scope___class_scope_Scope_gen_vtable));
    return 1;
}

static PyMethodDef scope___class_scope_Scope_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_scope___class_scope_Scope_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_scope___class_scope_Scope_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_scope___class_scope_Scope_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_scope___class_scope_Scope_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_scope___class_scope_Scope_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_scope___class_scope_Scope_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_scope___class_scope_Scope_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "class_scope_Scope_gen",
    .tp_new = scope___class_scope_Scope_gen_new,
    .tp_dealloc = (destructor)scope___class_scope_Scope_gen_dealloc,
    .tp_traverse = (traverseproc)scope___class_scope_Scope_gen_traverse,
    .tp_clear = (inquiry)scope___class_scope_Scope_gen_clear,
    .tp_methods = scope___class_scope_Scope_gen_methods,
    .tp_iter = CPyDef_scope___class_scope_Scope_gen_____iter__,
    .tp_iternext = CPyDef_scope___class_scope_Scope_gen_____next__,
    .tp_basicsize = sizeof(mypy___scope___class_scope_Scope_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_scope___class_scope_Scope_gen_template = &CPyType_scope___class_scope_Scope_gen_template_;

static PyObject *
scope___class_scope_Scope_gen_setup(PyTypeObject *type)
{
    mypy___scope___class_scope_Scope_genObject *self;
    self = (mypy___scope___class_scope_Scope_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = scope___class_scope_Scope_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_scope___class_scope_Scope_gen(void)
{
    PyObject *self = scope___class_scope_Scope_gen_setup(CPyType_scope___class_scope_Scope_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *scope___saved_scope_Scope_env_setup(PyTypeObject *type);
PyObject *CPyDef_scope___saved_scope_Scope_env(void);

static PyObject *
scope___saved_scope_Scope_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_scope___saved_scope_Scope_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return scope___saved_scope_Scope_env_setup(type);
}

static int
scope___saved_scope_Scope_env_traverse(mypy___scope___saved_scope_Scope_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_self);
    Py_VISIT(self->_saved.f0);
    Py_VISIT(self->_saved.f1);
    Py_VISIT(self->_saved.f2);
    Py_VISIT(self->_type);
    Py_VISIT(self->_value);
    Py_VISIT(self->_traceback);
    Py_VISIT(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___mypyc_next_label__));
    }
    Py_VISIT(self->_module);
    Py_VISIT(self->_info);
    Py_VISIT(self->_function);
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->___mypyc_temp__1);
    Py_VISIT(self->___mypyc_temp__3);
    Py_VISIT(self->___mypyc_temp__4);
    Py_VISIT(self->___mypyc_temp__6);
    Py_VISIT(self->___mypyc_temp__7);
    Py_VISIT(self->___mypyc_temp__9.f0);
    Py_VISIT(self->___mypyc_temp__9.f1);
    Py_VISIT(self->___mypyc_temp__9.f2);
    Py_VISIT(self->___mypyc_temp__10.f0);
    Py_VISIT(self->___mypyc_temp__10.f1);
    Py_VISIT(self->___mypyc_temp__10.f2);
    Py_VISIT(self->___mypyc_temp__11.f0);
    Py_VISIT(self->___mypyc_temp__11.f1);
    Py_VISIT(self->___mypyc_temp__11.f2);
    return 0;
}

static int
scope___saved_scope_Scope_env_clear(mypy___scope___saved_scope_Scope_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_self);
    Py_CLEAR(self->_saved.f0);
    Py_CLEAR(self->_saved.f1);
    Py_CLEAR(self->_saved.f2);
    Py_CLEAR(self->_type);
    Py_CLEAR(self->_value);
    Py_CLEAR(self->_traceback);
    Py_CLEAR(self->_arg);
    if (CPyTagged_CheckLong(self->___mypyc_next_label__)) {
        CPyTagged __tmp = self->___mypyc_next_label__;
        self->___mypyc_next_label__ = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_module);
    Py_CLEAR(self->_info);
    Py_CLEAR(self->_function);
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->___mypyc_temp__1);
    Py_CLEAR(self->___mypyc_temp__3);
    Py_CLEAR(self->___mypyc_temp__4);
    Py_CLEAR(self->___mypyc_temp__6);
    Py_CLEAR(self->___mypyc_temp__7);
    Py_CLEAR(self->___mypyc_temp__9.f0);
    Py_CLEAR(self->___mypyc_temp__9.f1);
    Py_CLEAR(self->___mypyc_temp__9.f2);
    Py_CLEAR(self->___mypyc_temp__10.f0);
    Py_CLEAR(self->___mypyc_temp__10.f1);
    Py_CLEAR(self->___mypyc_temp__10.f2);
    Py_CLEAR(self->___mypyc_temp__11.f0);
    Py_CLEAR(self->___mypyc_temp__11.f1);
    Py_CLEAR(self->___mypyc_temp__11.f2);
    return 0;
}

static void
scope___saved_scope_Scope_env_dealloc(mypy___scope___saved_scope_Scope_envObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, scope___saved_scope_Scope_env_dealloc)
    scope___saved_scope_Scope_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem scope___saved_scope_Scope_env_vtable[1];
static bool
CPyDef_scope___saved_scope_Scope_env_trait_vtable_setup(void)
{
    CPyVTableItem scope___saved_scope_Scope_env_vtable_scratch[] = {
        NULL
    };
    memcpy(scope___saved_scope_Scope_env_vtable, scope___saved_scope_Scope_env_vtable_scratch, sizeof(scope___saved_scope_Scope_env_vtable));
    return 1;
}

static PyMethodDef scope___saved_scope_Scope_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_scope___saved_scope_Scope_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "saved_scope_Scope_env",
    .tp_new = scope___saved_scope_Scope_env_new,
    .tp_dealloc = (destructor)scope___saved_scope_Scope_env_dealloc,
    .tp_traverse = (traverseproc)scope___saved_scope_Scope_env_traverse,
    .tp_clear = (inquiry)scope___saved_scope_Scope_env_clear,
    .tp_methods = scope___saved_scope_Scope_env_methods,
    .tp_basicsize = sizeof(mypy___scope___saved_scope_Scope_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_scope___saved_scope_Scope_env_template = &CPyType_scope___saved_scope_Scope_env_template_;

static PyObject *
scope___saved_scope_Scope_env_setup(PyTypeObject *type)
{
    mypy___scope___saved_scope_Scope_envObject *self;
    self = (mypy___scope___saved_scope_Scope_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = scope___saved_scope_Scope_env_vtable;
    self->_saved = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_next_label__ = CPY_INT_TAG;
    self->___mypyc_temp__2 = 2;
    self->___mypyc_temp__5 = 2;
    self->___mypyc_temp__8 = 2;
    self->___mypyc_temp__9 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__10 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__11 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_scope___saved_scope_Scope_env(void)
{
    PyObject *self = scope___saved_scope_Scope_env_setup(CPyType_scope___saved_scope_Scope_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *scope___saved_scope_Scope_gen_setup(PyTypeObject *type);
PyObject *CPyDef_scope___saved_scope_Scope_gen(void);

static PyObject *
scope___saved_scope_Scope_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_scope___saved_scope_Scope_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    return scope___saved_scope_Scope_gen_setup(type);
}

static int
scope___saved_scope_Scope_gen_traverse(mypy___scope___saved_scope_Scope_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    return 0;
}

static int
scope___saved_scope_Scope_gen_clear(mypy___scope___saved_scope_Scope_genObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    return 0;
}

static void
scope___saved_scope_Scope_gen_dealloc(mypy___scope___saved_scope_Scope_genObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, scope___saved_scope_Scope_gen_dealloc)
    scope___saved_scope_Scope_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem scope___saved_scope_Scope_gen_vtable[6];
static bool
CPyDef_scope___saved_scope_Scope_gen_trait_vtable_setup(void)
{
    CPyVTableItem scope___saved_scope_Scope_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_scope___saved_scope_Scope_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_scope___saved_scope_Scope_gen_____next__,
        (CPyVTableItem)CPyDef_scope___saved_scope_Scope_gen___send,
        (CPyVTableItem)CPyDef_scope___saved_scope_Scope_gen_____iter__,
        (CPyVTableItem)CPyDef_scope___saved_scope_Scope_gen___throw,
        (CPyVTableItem)CPyDef_scope___saved_scope_Scope_gen___close,
    };
    memcpy(scope___saved_scope_Scope_gen_vtable, scope___saved_scope_Scope_gen_vtable_scratch, sizeof(scope___saved_scope_Scope_gen_vtable));
    return 1;
}

static PyMethodDef scope___saved_scope_Scope_gen_methods[] = {
    {"__mypyc_generator_helper__",
     (PyCFunction)CPyPy_scope___saved_scope_Scope_gen_____mypyc_generator_helper__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__next__",
     (PyCFunction)CPyPy_scope___saved_scope_Scope_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"send",
     (PyCFunction)CPyPy_scope___saved_scope_Scope_gen___send,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__iter__",
     (PyCFunction)CPyPy_scope___saved_scope_Scope_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"throw",
     (PyCFunction)CPyPy_scope___saved_scope_Scope_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"close",
     (PyCFunction)CPyPy_scope___saved_scope_Scope_gen___close,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_scope___saved_scope_Scope_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "saved_scope_Scope_gen",
    .tp_new = scope___saved_scope_Scope_gen_new,
    .tp_dealloc = (destructor)scope___saved_scope_Scope_gen_dealloc,
    .tp_traverse = (traverseproc)scope___saved_scope_Scope_gen_traverse,
    .tp_clear = (inquiry)scope___saved_scope_Scope_gen_clear,
    .tp_methods = scope___saved_scope_Scope_gen_methods,
    .tp_iter = CPyDef_scope___saved_scope_Scope_gen_____iter__,
    .tp_iternext = CPyDef_scope___saved_scope_Scope_gen_____next__,
    .tp_basicsize = sizeof(mypy___scope___saved_scope_Scope_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_scope___saved_scope_Scope_gen_template = &CPyType_scope___saved_scope_Scope_gen_template_;

static PyObject *
scope___saved_scope_Scope_gen_setup(PyTypeObject *type)
{
    mypy___scope___saved_scope_Scope_genObject *self;
    self = (mypy___scope___saved_scope_Scope_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = scope___saved_scope_Scope_gen_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef_scope___saved_scope_Scope_gen(void)
{
    PyObject *self = scope___saved_scope_Scope_gen_setup(CPyType_scope___saved_scope_Scope_gen);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef scopemodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef scopemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.scope",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    scopemodule_methods
};

PyObject *CPyInit_mypy___scope(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___scope_internal) {
        Py_INCREF(CPyModule_mypy___scope_internal);
        return CPyModule_mypy___scope_internal;
    }
    CPyModule_mypy___scope_internal = PyModule_Create(&scopemodule);
    if (unlikely(CPyModule_mypy___scope_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___scope_internal, "__name__");
    CPyStatic_scope___globals = PyModule_GetDict(CPyModule_mypy___scope_internal);
    if (unlikely(CPyStatic_scope___globals == NULL))
        goto fail;
    CPyType_scope___module_scope_Scope_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_scope___module_scope_Scope_env_template, NULL, modname);
    if (unlikely(!CPyType_scope___module_scope_Scope_env))
        goto fail;
    CPyType_scope___module_scope_Scope_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_scope___module_scope_Scope_gen_template, NULL, modname);
    if (unlikely(!CPyType_scope___module_scope_Scope_gen))
        goto fail;
    CPyType_scope___function_scope_Scope_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_scope___function_scope_Scope_env_template, NULL, modname);
    if (unlikely(!CPyType_scope___function_scope_Scope_env))
        goto fail;
    CPyType_scope___function_scope_Scope_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_scope___function_scope_Scope_gen_template, NULL, modname);
    if (unlikely(!CPyType_scope___function_scope_Scope_gen))
        goto fail;
    CPyType_scope___class_scope_Scope_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_scope___class_scope_Scope_env_template, NULL, modname);
    if (unlikely(!CPyType_scope___class_scope_Scope_env))
        goto fail;
    CPyType_scope___class_scope_Scope_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_scope___class_scope_Scope_gen_template, NULL, modname);
    if (unlikely(!CPyType_scope___class_scope_Scope_gen))
        goto fail;
    CPyType_scope___saved_scope_Scope_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_scope___saved_scope_Scope_env_template, NULL, modname);
    if (unlikely(!CPyType_scope___saved_scope_Scope_env))
        goto fail;
    CPyType_scope___saved_scope_Scope_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_scope___saved_scope_Scope_gen_template, NULL, modname);
    if (unlikely(!CPyType_scope___saved_scope_Scope_gen))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_scope_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___scope_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___scope_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_scope___Scope);
    Py_CLEAR(CPyType_scope___module_scope_Scope_env);
    Py_CLEAR(CPyType_scope___module_scope_Scope_gen);
    Py_CLEAR(CPyType_scope___function_scope_Scope_env);
    Py_CLEAR(CPyType_scope___function_scope_Scope_gen);
    Py_CLEAR(CPyType_scope___class_scope_Scope_env);
    Py_CLEAR(CPyType_scope___class_scope_Scope_gen);
    Py_CLEAR(CPyType_scope___saved_scope_Scope_env);
    Py_CLEAR(CPyType_scope___saved_scope_Scope_gen);
    return NULL;
}

char CPyDef_scope___Scope_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    ((mypy___scope___ScopeObject *)cpy_r_self)->_module = cpy_r_r0;
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "__init__", 22, CPyStatic_scope___globals);
        goto CPyL3;
    }
    ((mypy___scope___ScopeObject *)cpy_r_self)->_classes = cpy_r_r1;
    cpy_r_r2 = Py_None;
    CPy_INCREF(cpy_r_r2);
    ((mypy___scope___ScopeObject *)cpy_r_self)->_function = cpy_r_r2;
    cpy_r_r3 = PyList_New(0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "__init__", 24, CPyStatic_scope___globals);
        goto CPyL3;
    }
    ((mypy___scope___ScopeObject *)cpy_r_self)->_functions = cpy_r_r3;
    ((mypy___scope___ScopeObject *)cpy_r_self)->_ignored = 0;
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_scope___Scope_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_scope___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.scope.Scope", obj_self); 
        goto fail;
    }
    char retval = CPyDef_scope___Scope_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "__init__", 20, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___Scope___current_module_id(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypy___scope___ScopeObject *)cpy_r_self)->_module;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL8;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "current_module_id", 29, CPyStatic_scope___globals, "str", cpy_r_r0);
        goto CPyL7;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4) goto CPyL5;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/scope.py", "current_module_id", 29, CPyStatic_scope___globals);
        goto CPyL7;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r6 = ((mypy___scope___ScopeObject *)cpy_r_self)->_module;
    CPy_INCREF(cpy_r_r6);
    if (likely(cpy_r_r6 != Py_None))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "current_module_id", 30, CPyStatic_scope___globals, "str", cpy_r_r6);
        goto CPyL7;
    }
    return cpy_r_r7;
CPyL7: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
CPyL8: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_scope___Scope___current_module_id(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":current_module_id", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_scope___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.scope.Scope", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___Scope___current_module_id(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "current_module_id", 28, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___Scope___current_target(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_fullname;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    cpy_r_r0 = ((mypy___scope___ScopeObject *)cpy_r_self)->_module;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL15;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "current_target", 34, CPyStatic_scope___globals, "str", cpy_r_r0);
        goto CPyL14;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4) goto CPyL5;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/scope.py", "current_target", 34, CPyStatic_scope___globals);
        goto CPyL14;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r6 = ((mypy___scope___ScopeObject *)cpy_r_self)->_function;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r8) goto CPyL12;
    cpy_r_r9 = ((mypy___scope___ScopeObject *)cpy_r_self)->_function;
    CPy_INCREF(cpy_r_r9);
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "current_target", 36, CPyStatic_scope___globals, "mypy.nodes.FuncBase", cpy_r_r9);
        goto CPyL14;
    }
    cpy_r_r11 = CPY_GET_ATTR(cpy_r_r10, CPyType_nodes___FuncBase, 7, mypy___nodes___FuncBaseObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "current_target", 36, CPyStatic_scope___globals);
        goto CPyL14;
    }
CPyL8: ;
    cpy_r_fullname = cpy_r_r11;
    cpy_r_r12 = CPyStr_IsTrue(cpy_r_fullname);
    if (!cpy_r_r12) goto CPyL16;
    cpy_r_r13 = cpy_r_fullname;
    goto CPyL11;
CPyL10: ;
    cpy_r_r14 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r14);
    cpy_r_r13 = cpy_r_r14;
CPyL11: ;
    return cpy_r_r13;
CPyL12: ;
    cpy_r_r15 = ((mypy___scope___ScopeObject *)cpy_r_self)->_module;
    CPy_INCREF(cpy_r_r15);
    if (likely(cpy_r_r15 != Py_None))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "current_target", 38, CPyStatic_scope___globals, "str", cpy_r_r15);
        goto CPyL14;
    }
    return cpy_r_r16;
CPyL14: ;
    cpy_r_r17 = NULL;
    return cpy_r_r17;
CPyL15: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL16: ;
    CPy_DECREF(cpy_r_fullname);
    goto CPyL10;
}

PyObject *CPyPy_scope___Scope___current_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":current_target", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_scope___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.scope.Scope", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___Scope___current_target(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "current_target", 32, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___Scope___current_full_target(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
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
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    cpy_r_r0 = ((mypy___scope___ScopeObject *)cpy_r_self)->_module;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL17;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "current_full_target", 42, CPyStatic_scope___globals, "str", cpy_r_r0);
        goto CPyL16;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4) goto CPyL5;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/scope.py", "current_full_target", 42, CPyStatic_scope___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r6 = ((mypy___scope___ScopeObject *)cpy_r_self)->_function;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r8 = cpy_r_r6 != cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    if (!cpy_r_r8) goto CPyL9;
    cpy_r_r9 = ((mypy___scope___ScopeObject *)cpy_r_self)->_function;
    CPy_INCREF(cpy_r_r9);
    if (likely(cpy_r_r9 != Py_None))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "current_full_target", 44, CPyStatic_scope___globals, "mypy.nodes.FuncBase", cpy_r_r9);
        goto CPyL16;
    }
    cpy_r_r11 = CPY_GET_ATTR(cpy_r_r10, CPyType_nodes___FuncBase, 7, mypy___nodes___FuncBaseObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "current_full_target", 44, CPyStatic_scope___globals);
        goto CPyL16;
    }
CPyL8: ;
    return cpy_r_r11;
CPyL9: ;
    cpy_r_r12 = ((mypy___scope___ScopeObject *)cpy_r_self)->_classes;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = (CPyPtr)&((PyVarObject *)cpy_r_r12)->ob_size;
    cpy_r_r14 = *(int64_t *)cpy_r_r13;
    CPy_DECREF(cpy_r_r12);
    cpy_r_r15 = cpy_r_r14 << 1;
    cpy_r_r16 = cpy_r_r15 != 0;
    if (!cpy_r_r16) goto CPyL14;
    cpy_r_r17 = ((mypy___scope___ScopeObject *)cpy_r_self)->_classes;
    cpy_r_r18 = CPyList_GetItemShort(cpy_r_r17, -2);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "current_full_target", 46, CPyStatic_scope___globals);
        goto CPyL16;
    }
    if (likely((Py_TYPE(cpy_r_r18) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r18) == CPyType_nodes___TypeInfo)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "current_full_target", 46, CPyStatic_scope___globals, "mypy.nodes.TypeInfo", cpy_r_r18);
        goto CPyL16;
    }
    cpy_r_r20 = CPY_GET_ATTR(cpy_r_r19, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "current_full_target", 46, CPyStatic_scope___globals);
        goto CPyL16;
    }
CPyL13: ;
    return cpy_r_r20;
CPyL14: ;
    cpy_r_r21 = ((mypy___scope___ScopeObject *)cpy_r_self)->_module;
    CPy_INCREF(cpy_r_r21);
    if (likely(cpy_r_r21 != Py_None))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "current_full_target", 47, CPyStatic_scope___globals, "str", cpy_r_r21);
        goto CPyL16;
    }
    return cpy_r_r22;
CPyL16: ;
    cpy_r_r23 = NULL;
    return cpy_r_r23;
CPyL17: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
}

PyObject *CPyPy_scope___Scope___current_full_target(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":current_full_target", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_scope___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.scope.Scope", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___Scope___current_full_target(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "current_full_target", 40, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___Scope___current_type_name(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    cpy_r_r0 = ((mypy___scope___ScopeObject *)cpy_r_self)->_classes;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = cpy_r_r3 != 0;
    if (!cpy_r_r4) goto CPyL5;
    cpy_r_r5 = ((mypy___scope___ScopeObject *)cpy_r_self)->_classes;
    cpy_r_r6 = CPyList_GetItemShort(cpy_r_r5, -2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "current_type_name", 51, CPyStatic_scope___globals);
        goto CPyL7;
    }
    if (likely((Py_TYPE(cpy_r_r6) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r6) == CPyType_nodes___TypeInfo)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "current_type_name", 51, CPyStatic_scope___globals, "mypy.nodes.TypeInfo", cpy_r_r6);
        goto CPyL7;
    }
    cpy_r_r8 = CPY_GET_ATTR(cpy_r_r7, CPyType_nodes___TypeInfo, 7, mypy___nodes___TypeInfoObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "current_type_name", 51, CPyStatic_scope___globals);
        goto CPyL7;
    }
CPyL4: ;
    cpy_r_r9 = cpy_r_r8;
    goto CPyL6;
CPyL5: ;
    cpy_r_r10 = Py_None;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r9 = cpy_r_r10;
CPyL6: ;
    return cpy_r_r9;
CPyL7: ;
    cpy_r_r11 = NULL;
    return cpy_r_r11;
}

PyObject *CPyPy_scope___Scope___current_type_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":current_type_name", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_scope___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.scope.Scope", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___Scope___current_type_name(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "current_type_name", 49, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___Scope___current_function_name(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    cpy_r_r0 = ((mypy___scope___ScopeObject *)cpy_r_self)->_function;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (!cpy_r_r2) goto CPyL4;
    cpy_r_r3 = ((mypy___scope___ScopeObject *)cpy_r_self)->_function;
    CPy_INCREF(cpy_r_r3);
    if (likely(cpy_r_r3 != Py_None))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "current_function_name", 55, CPyStatic_scope___globals, "mypy.nodes.FuncBase", cpy_r_r3);
        goto CPyL6;
    }
    cpy_r_r5 = CPY_GET_ATTR(cpy_r_r4, CPyType_nodes___FuncBase, 6, mypy___nodes___FuncBaseObject, PyObject *); /* name */
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "current_function_name", 55, CPyStatic_scope___globals);
        goto CPyL6;
    }
CPyL3: ;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL5;
CPyL4: ;
    cpy_r_r7 = Py_None;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r6 = cpy_r_r7;
CPyL5: ;
    return cpy_r_r6;
CPyL6: ;
    cpy_r_r8 = NULL;
    return cpy_r_r8;
}

PyObject *CPyPy_scope___Scope___current_function_name(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":current_function_name", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_scope___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.scope.Scope", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___Scope___current_function_name(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "current_function_name", 53, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___module_scope_Scope_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    int64_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    int64_t cpy_r_r34;
    char cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    cpy_r_r0 = ((mypy___scope___module_scope_Scope_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "module_scope", "module_scope_Scope_gen", "__mypyc_env__", 58, CPyStatic_scope___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/scope.py", "module_scope", "module_scope_Scope_env", "__mypyc_next_label__", 58, CPyStatic_scope___globals);
        goto CPyL36;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL25;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL37;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/scope.py", "module_scope", 58, CPyStatic_scope___globals);
        goto CPyL35;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->_prefix;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "module_scope", "module_scope_Scope_env", "prefix", 59, CPyStatic_scope___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "module_scope", "module_scope_Scope_env", "self", 59, CPyStatic_scope___globals);
        goto CPyL38;
    }
    CPy_INCREF(cpy_r_r5);
CPyL7: ;
    CPy_DECREF(((mypy___scope___ScopeObject *)cpy_r_r5)->_module);
    ((mypy___scope___ScopeObject *)cpy_r_r5)->_module = cpy_r_r4;
    CPy_DECREF(cpy_r_r5);
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "module_scope", 60, CPyStatic_scope___globals);
        goto CPyL36;
    }
    cpy_r_r8 = ((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "module_scope", "module_scope_Scope_env", "self", 60, CPyStatic_scope___globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r8);
CPyL9: ;
    CPy_DECREF(((mypy___scope___ScopeObject *)cpy_r_r8)->_classes);
    ((mypy___scope___ScopeObject *)cpy_r_r8)->_classes = cpy_r_r7;
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = ((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "module_scope", "module_scope_Scope_env", "self", 61, CPyStatic_scope___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r10);
CPyL10: ;
    cpy_r_r11 = Py_None;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(((mypy___scope___ScopeObject *)cpy_r_r10)->_function);
    ((mypy___scope___ScopeObject *)cpy_r_r10)->_function = cpy_r_r11;
    CPy_DECREF(cpy_r_r10);
    cpy_r_r13 = ((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "module_scope", "module_scope_Scope_env", "self", 62, CPyStatic_scope___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r13);
CPyL11: ;
    CPyTagged_DECREF(((mypy___scope___ScopeObject *)cpy_r_r13)->_ignored);
    ((mypy___scope___ScopeObject *)cpy_r_r13)->_ignored = 0;
    CPy_DECREF(cpy_r_r13);
    cpy_r_r15 = Py_None;
    if (((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r16 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/scope.py", "module_scope", 63, CPyStatic_scope___globals);
        goto CPyL35;
    }
    CPy_INCREF(cpy_r_r15);
    return cpy_r_r15;
CPyL13: ;
    cpy_r_r17 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r18 = cpy_r_type != cpy_r_r17;
    if (cpy_r_r18) {
        goto CPyL40;
    } else
        goto CPyL16;
CPyL14: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/scope.py", "module_scope", 63, CPyStatic_scope___globals);
        goto CPyL35;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r19 = ((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "module_scope", "module_scope_Scope_env", "self", 64, CPyStatic_scope___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r19);
CPyL17: ;
    cpy_r_r20 = ((mypy___scope___ScopeObject *)cpy_r_r19)->_module;
    CPy_INCREF(cpy_r_r20);
    CPy_DECREF(cpy_r_r19);
    if (likely(cpy_r_r20 != Py_None))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "module_scope", 64, CPyStatic_scope___globals, "str", cpy_r_r20);
        goto CPyL36;
    }
    cpy_r_r22 = CPyStr_IsTrue(cpy_r_r21);
    CPy_DECREF(cpy_r_r21);
    if (cpy_r_r22) {
        goto CPyL21;
    } else
        goto CPyL41;
CPyL19: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r23 = 0;
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/scope.py", "module_scope", 64, CPyStatic_scope___globals);
        goto CPyL35;
    }
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r24 = ((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "module_scope", "module_scope_Scope_env", "self", 65, CPyStatic_scope___globals);
        goto CPyL36;
    }
    CPy_INCREF(cpy_r_r24);
CPyL22: ;
    cpy_r_r25 = Py_None;
    CPy_INCREF(cpy_r_r25);
    CPy_DECREF(((mypy___scope___ScopeObject *)cpy_r_r24)->_module);
    ((mypy___scope___ScopeObject *)cpy_r_r24)->_module = cpy_r_r25;
    CPy_DECREF(cpy_r_r24);
    cpy_r_r27 = Py_None;
    if (((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r28 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/scope.py", "module_scope", 58, CPyStatic_scope___globals);
        goto CPyL35;
    }
    CPyGen_SetStopIterationValue(cpy_r_r27);
    if (!0) goto CPyL35;
    CPy_Unreachable();
CPyL25: ;
    cpy_r_r29 = cpy_r_r1 & 1;
    cpy_r_r30 = cpy_r_r29 == 0;
    if (!cpy_r_r30) goto CPyL27;
    cpy_r_r31 = cpy_r_r1 == 0;
    cpy_r_r32 = cpy_r_r31;
    goto CPyL28;
CPyL27: ;
    cpy_r_r33 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r32 = cpy_r_r33;
CPyL28: ;
    if (cpy_r_r32) goto CPyL42;
    cpy_r_r34 = cpy_r_r1 & 1;
    cpy_r_r35 = cpy_r_r34 == 0;
    if (!cpy_r_r35) goto CPyL31;
    cpy_r_r36 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r37 = cpy_r_r36;
    goto CPyL32;
CPyL31: ;
    cpy_r_r38 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r37 = cpy_r_r38;
CPyL32: ;
    if (cpy_r_r37) {
        goto CPyL13;
    } else
        goto CPyL43;
CPyL33: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r39 = 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/scope.py", "module_scope", 58, CPyStatic_scope___globals);
        goto CPyL35;
    }
    CPy_Unreachable();
CPyL35: ;
    cpy_r_r40 = NULL;
    return cpy_r_r40;
CPyL36: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL35;
CPyL37: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL38: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL35;
CPyL39: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r7);
    goto CPyL35;
CPyL40: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL14;
CPyL41: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL19;
CPyL42: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL43: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL33;
}

PyObject *CPyPy_scope___module_scope_Scope_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_scope___module_scope_Scope_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "module_scope", 58, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___module_scope_Scope_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_scope___module_scope_Scope_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_scope___module_scope_Scope_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___module_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.module_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___module_scope_Scope_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "__next__", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___module_scope_Scope_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_scope___module_scope_Scope_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_scope___module_scope_Scope_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___module_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.module_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_scope___module_scope_Scope_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "send", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___module_scope_Scope_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_scope___module_scope_Scope_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___module_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.module_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___module_scope_Scope_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "__iter__", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___module_scope_Scope_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_scope___module_scope_Scope_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_scope___module_scope_Scope_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___module_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.module_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_scope___module_scope_Scope_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "throw", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___module_scope_Scope_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[74]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_scope___module_scope_Scope_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[75]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    CPy_INCREF(cpy_r_r10.f0);
    CPy_INCREF(cpy_r_r10.f1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5226 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp5226);
    PyObject *__tmp5227 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp5227);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_scope___module_scope_Scope_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___module_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.module_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___module_scope_Scope_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "close", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___Scope___module_scope(PyObject *cpy_r_self, PyObject *cpy_r_prefix) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_scope___module_scope_Scope_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "module_scope", 58, CPyStatic_scope___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/scope.py", "module_scope", 58, CPyStatic_scope___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_prefix);
    if (((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->_prefix != NULL) {
        CPy_DECREF(((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->_prefix);
    }
    ((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->_prefix = cpy_r_prefix;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/scope.py", "module_scope", 58, CPyStatic_scope___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_scope___module_scope_Scope_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "module_scope", 58, CPyStatic_scope___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___scope___module_scope_Scope_genObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___scope___module_scope_Scope_genObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypy___scope___module_scope_Scope_genObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/scope.py", "module_scope", 58, CPyStatic_scope___globals);
        goto CPyL9;
    }
    if (((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___scope___module_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/scope.py", "module_scope", 58, CPyStatic_scope___globals);
        goto CPyL10;
    }
    return cpy_r_r3;
CPyL7: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
}

PyObject *CPyPy_scope___Scope___module_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"prefix", 0};
    static CPyArg_Parser parser = {"O:module_scope", kwlist, 0};
    PyObject *obj_prefix;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_prefix)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_scope___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.scope.Scope", obj_self); 
        goto fail;
    }
    PyObject *arg_prefix;
    if (likely(PyUnicode_Check(obj_prefix)))
        arg_prefix = obj_prefix;
    else {
        CPy_TypeError("str", obj_prefix); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___Scope___module_scope(arg_self, arg_prefix);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "module_scope", 58, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___function_scope_Scope_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    CPyTagged cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyTagged cpy_r_r32;
    CPyTagged cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    int64_t cpy_r_r47;
    char cpy_r_r48;
    char cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    int64_t cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    char cpy_r_r56;
    char cpy_r_r57;
    PyObject *cpy_r_r58;
    cpy_r_r0 = ((mypy___scope___function_scope_Scope_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "function_scope", "function_scope_Scope_gen", "__mypyc_env__", 68, CPyStatic_scope___globals);
        goto CPyL48;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/scope.py", "function_scope", "function_scope_Scope_env", "__mypyc_next_label__", 68, CPyStatic_scope___globals);
        goto CPyL49;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL38;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL50;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/scope.py", "function_scope", 68, CPyStatic_scope___globals);
        goto CPyL48;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "function_scope", "function_scope_Scope_env", "self", 69, CPyStatic_scope___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___scope___ScopeObject *)cpy_r_r4)->_functions;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    cpy_r_r6 = ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_fdef;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "function_scope", "function_scope_Scope_env", "fdef", 69, CPyStatic_scope___globals);
        goto CPyL51;
    }
    CPy_INCREF(cpy_r_r6);
CPyL7: ;
    cpy_r_r7 = PyList_Append(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/scope.py", "function_scope", 69, CPyStatic_scope___globals);
        goto CPyL49;
    }
    cpy_r_r9 = ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "function_scope", "function_scope_Scope_env", "self", 70, CPyStatic_scope___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r9);
CPyL9: ;
    cpy_r_r10 = ((mypy___scope___ScopeObject *)cpy_r_r9)->_function;
    CPy_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_r10 != cpy_r_r11;
    CPy_DECREF(cpy_r_r10);
    if (cpy_r_r12) goto CPyL13;
    cpy_r_r13 = ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_fdef;
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "function_scope", "function_scope_Scope_env", "fdef", 71, CPyStatic_scope___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r13);
CPyL11: ;
    cpy_r_r14 = ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "function_scope", "function_scope_Scope_env", "self", 71, CPyStatic_scope___globals);
        goto CPyL52;
    }
    CPy_INCREF(cpy_r_r14);
CPyL12: ;
    CPy_DECREF(((mypy___scope___ScopeObject *)cpy_r_r14)->_function);
    ((mypy___scope___ScopeObject *)cpy_r_r14)->_function = cpy_r_r13;
    CPy_DECREF(cpy_r_r14);
    goto CPyL15;
CPyL13: ;
    cpy_r_r16 = ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "function_scope", "function_scope_Scope_env", "self", 74, CPyStatic_scope___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r16);
CPyL14: ;
    cpy_r_r17 = ((mypy___scope___ScopeObject *)cpy_r_r16)->_ignored;
    cpy_r_r18 = CPyTagged_Add(cpy_r_r17, 2);
    CPyTagged_DECREF(((mypy___scope___ScopeObject *)cpy_r_r16)->_ignored);
    ((mypy___scope___ScopeObject *)cpy_r_r16)->_ignored = cpy_r_r18;
    CPy_DECREF(cpy_r_r16);
CPyL15: ;
    cpy_r_r20 = Py_None;
    if (((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r21 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/scope.py", "function_scope", 75, CPyStatic_scope___globals);
        goto CPyL48;
    }
    CPy_INCREF(cpy_r_r20);
    return cpy_r_r20;
CPyL17: ;
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_type != cpy_r_r22;
    if (cpy_r_r23) {
        goto CPyL53;
    } else
        goto CPyL20;
CPyL18: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/scope.py", "function_scope", 75, CPyStatic_scope___globals);
        goto CPyL48;
    }
    CPy_Unreachable();
CPyL20: ;
    cpy_r_r24 = ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "function_scope", "function_scope_Scope_env", "self", 76, CPyStatic_scope___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r24);
CPyL21: ;
    cpy_r_r25 = ((mypy___scope___ScopeObject *)cpy_r_r24)->_functions;
    CPy_INCREF(cpy_r_r25);
    CPy_DECREF(cpy_r_r24);
    cpy_r_r26 = CPyList_PopLast(cpy_r_r25);
    CPy_DECREF(cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "function_scope", 76, CPyStatic_scope___globals);
        goto CPyL49;
    }
    if (likely((Py_TYPE(cpy_r_r26) == CPyType_nodes___FuncDef) || (Py_TYPE(cpy_r_r26) == CPyType_nodes___LambdaExpr) || (Py_TYPE(cpy_r_r26) == CPyType_nodes___OverloadedFuncDef)))
        cpy_r_r27 = cpy_r_r26;
    else {
        CPy_TypeError("mypy.nodes.FuncBase", cpy_r_r26); 
        cpy_r_r27 = NULL;
    }
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "function_scope", 76, CPyStatic_scope___globals);
        goto CPyL49;
    } else
        goto CPyL54;
CPyL23: ;
    cpy_r_r28 = ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "function_scope", "function_scope_Scope_env", "self", 77, CPyStatic_scope___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r28);
CPyL24: ;
    cpy_r_r29 = ((mypy___scope___ScopeObject *)cpy_r_r28)->_ignored;
    CPyTagged_INCREF(cpy_r_r29);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 != 0;
    CPyTagged_DECREF(cpy_r_r29);
    if (!cpy_r_r30) goto CPyL27;
    cpy_r_r31 = ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "function_scope", "function_scope_Scope_env", "self", 79, CPyStatic_scope___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r31);
CPyL26: ;
    cpy_r_r32 = ((mypy___scope___ScopeObject *)cpy_r_r31)->_ignored;
    cpy_r_r33 = CPyTagged_Subtract(cpy_r_r32, 2);
    CPyTagged_DECREF(((mypy___scope___ScopeObject *)cpy_r_r31)->_ignored);
    ((mypy___scope___ScopeObject *)cpy_r_r31)->_ignored = cpy_r_r33;
    CPy_DECREF(cpy_r_r31);
    goto CPyL35;
CPyL27: ;
    cpy_r_r35 = ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "function_scope", "function_scope_Scope_env", "self", 81, CPyStatic_scope___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r35);
CPyL28: ;
    cpy_r_r36 = ((mypy___scope___ScopeObject *)cpy_r_r35)->_function;
    CPy_INCREF(cpy_r_r36);
    CPy_DECREF(cpy_r_r35);
    if (likely(cpy_r_r36 != Py_None))
        cpy_r_r37 = cpy_r_r36;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "function_scope", 81, CPyStatic_scope___globals, "mypy.nodes.FuncBase", cpy_r_r36);
        goto CPyL49;
    }
    cpy_r_r38 = PyObject_IsTrue(cpy_r_r37);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/scope.py", "function_scope", 81, CPyStatic_scope___globals);
        goto CPyL49;
    }
    cpy_r_r40 = cpy_r_r38;
    if (cpy_r_r40) {
        goto CPyL33;
    } else
        goto CPyL55;
CPyL31: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/scope.py", "function_scope", 81, CPyStatic_scope___globals);
        goto CPyL48;
    }
    CPy_Unreachable();
CPyL33: ;
    cpy_r_r42 = ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "function_scope", "function_scope_Scope_env", "self", 82, CPyStatic_scope___globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r42);
CPyL34: ;
    cpy_r_r43 = Py_None;
    CPy_INCREF(cpy_r_r43);
    CPy_DECREF(((mypy___scope___ScopeObject *)cpy_r_r42)->_function);
    ((mypy___scope___ScopeObject *)cpy_r_r42)->_function = cpy_r_r43;
    CPy_DECREF(cpy_r_r42);
CPyL35: ;
    cpy_r_r45 = Py_None;
    if (((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r46 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/scope.py", "function_scope", 68, CPyStatic_scope___globals);
        goto CPyL48;
    }
    CPyGen_SetStopIterationValue(cpy_r_r45);
    if (!0) goto CPyL48;
    CPy_Unreachable();
CPyL38: ;
    cpy_r_r47 = cpy_r_r1 & 1;
    cpy_r_r48 = cpy_r_r47 == 0;
    if (!cpy_r_r48) goto CPyL40;
    cpy_r_r49 = cpy_r_r1 == 0;
    cpy_r_r50 = cpy_r_r49;
    goto CPyL41;
CPyL40: ;
    cpy_r_r51 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r50 = cpy_r_r51;
CPyL41: ;
    if (cpy_r_r50) goto CPyL56;
    cpy_r_r52 = cpy_r_r1 & 1;
    cpy_r_r53 = cpy_r_r52 == 0;
    if (!cpy_r_r53) goto CPyL44;
    cpy_r_r54 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r55 = cpy_r_r54;
    goto CPyL45;
CPyL44: ;
    cpy_r_r56 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r55 = cpy_r_r56;
CPyL45: ;
    if (cpy_r_r55) {
        goto CPyL17;
    } else
        goto CPyL57;
CPyL46: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r57 = 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/scope.py", "function_scope", 68, CPyStatic_scope___globals);
        goto CPyL48;
    }
    CPy_Unreachable();
CPyL48: ;
    cpy_r_r58 = NULL;
    return cpy_r_r58;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL48;
CPyL50: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL51: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r5);
    goto CPyL48;
CPyL52: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r13);
    goto CPyL48;
CPyL53: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL18;
CPyL54: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL23;
CPyL55: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL31;
CPyL56: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL57: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL46;
}

PyObject *CPyPy_scope___function_scope_Scope_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_scope___function_scope_Scope_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "function_scope", 68, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___function_scope_Scope_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_scope___function_scope_Scope_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_scope___function_scope_Scope_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___function_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.function_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___function_scope_Scope_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "__next__", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___function_scope_Scope_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_scope___function_scope_Scope_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_scope___function_scope_Scope_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___function_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.function_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_scope___function_scope_Scope_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "send", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___function_scope_Scope_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_scope___function_scope_Scope_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___function_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.function_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___function_scope_Scope_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "__iter__", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___function_scope_Scope_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_scope___function_scope_Scope_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_scope___function_scope_Scope_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___function_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.function_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_scope___function_scope_Scope_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "throw", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___function_scope_Scope_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[74]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_scope___function_scope_Scope_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[75]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    CPy_INCREF(cpy_r_r10.f0);
    CPy_INCREF(cpy_r_r10.f1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5228 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp5228);
    PyObject *__tmp5229 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp5229);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_scope___function_scope_Scope_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___function_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.function_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___function_scope_Scope_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "close", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___Scope___function_scope(PyObject *cpy_r_self, PyObject *cpy_r_fdef) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_scope___function_scope_Scope_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "function_scope", 68, CPyStatic_scope___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/scope.py", "function_scope", 68, CPyStatic_scope___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_fdef);
    if (((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_fdef != NULL) {
        CPy_DECREF(((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_fdef);
    }
    ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->_fdef = cpy_r_fdef;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/scope.py", "function_scope", 68, CPyStatic_scope___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_scope___function_scope_Scope_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "function_scope", 68, CPyStatic_scope___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___scope___function_scope_Scope_genObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___scope___function_scope_Scope_genObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypy___scope___function_scope_Scope_genObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/scope.py", "function_scope", 68, CPyStatic_scope___globals);
        goto CPyL9;
    }
    if (((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___scope___function_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/scope.py", "function_scope", 68, CPyStatic_scope___globals);
        goto CPyL10;
    }
    return cpy_r_r3;
CPyL7: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
}

PyObject *CPyPy_scope___Scope___function_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fdef", 0};
    static CPyArg_Parser parser = {"O:function_scope", kwlist, 0};
    PyObject *obj_fdef;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fdef)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_scope___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.scope.Scope", obj_self); 
        goto fail;
    }
    PyObject *arg_fdef;
    if (likely((Py_TYPE(obj_fdef) == CPyType_nodes___FuncDef) || (Py_TYPE(obj_fdef) == CPyType_nodes___LambdaExpr) || (Py_TYPE(obj_fdef) == CPyType_nodes___OverloadedFuncDef)))
        arg_fdef = obj_fdef;
    else {
        CPy_TypeError("mypy.nodes.FuncBase", obj_fdef); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___Scope___function_scope(arg_self, arg_fdef);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "function_scope", 68, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___Scope___outer_functions(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = ((mypy___scope___ScopeObject *)cpy_r_self)->_functions;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyList_GetSlice(cpy_r_r0, 0, -2);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "outer_functions", 85, CPyStatic_scope___globals);
        goto CPyL3;
    }
    if (likely(PyList_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "outer_functions", 85, CPyStatic_scope___globals, "list", cpy_r_r1);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_scope___Scope___outer_functions(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":outer_functions", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_scope___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.scope.Scope", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___Scope___outer_functions(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "outer_functions", 84, CPyStatic_scope___globals);
    return NULL;
}

char CPyDef_scope___Scope___enter_class(PyObject *cpy_r_self, PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    CPyTagged cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = ((mypy___scope___ScopeObject *)cpy_r_self)->_function;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    CPy_DECREF(cpy_r_r0);
    if (cpy_r_r2) goto CPyL2;
    cpy_r_r3 = ((mypy___scope___ScopeObject *)cpy_r_self)->_classes;
    CPy_INCREF(cpy_r_r3);
    cpy_r_r4 = PyList_Append(cpy_r_r3, cpy_r_info);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/scope.py", "enter_class", 90, CPyStatic_scope___globals);
        goto CPyL4;
    } else
        goto CPyL3;
CPyL2: ;
    cpy_r_r6 = ((mypy___scope___ScopeObject *)cpy_r_self)->_ignored;
    cpy_r_r7 = CPyTagged_Add(cpy_r_r6, 2);
    CPyTagged_DECREF(((mypy___scope___ScopeObject *)cpy_r_self)->_ignored);
    ((mypy___scope___ScopeObject *)cpy_r_self)->_ignored = cpy_r_r7;
CPyL3: ;
    return 1;
CPyL4: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyObject *CPyPy_scope___Scope___enter_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:enter_class", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_scope___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.scope.Scope", obj_self); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    char retval = CPyDef_scope___Scope___enter_class(arg_self, arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "enter_class", 87, CPyStatic_scope___globals);
    return NULL;
}

char CPyDef_scope___Scope___leave_class(PyObject *cpy_r_self) {
    CPyTagged cpy_r_r0;
    char cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    CPyPtr cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = ((mypy___scope___ScopeObject *)cpy_r_self)->_ignored;
    CPyTagged_INCREF(cpy_r_r0);
    cpy_r_r1 = cpy_r_r0 != 0;
    CPyTagged_DECREF(cpy_r_r0);
    if (!cpy_r_r1) goto CPyL2;
    cpy_r_r2 = ((mypy___scope___ScopeObject *)cpy_r_self)->_ignored;
    cpy_r_r3 = CPyTagged_Subtract(cpy_r_r2, 2);
    CPyTagged_DECREF(((mypy___scope___ScopeObject *)cpy_r_self)->_ignored);
    ((mypy___scope___ScopeObject *)cpy_r_self)->_ignored = cpy_r_r3;
    goto CPyL7;
CPyL2: ;
    cpy_r_r5 = ((mypy___scope___ScopeObject *)cpy_r_self)->_classes;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = (CPyPtr)&((PyVarObject *)cpy_r_r5)->ob_size;
    cpy_r_r7 = *(int64_t *)cpy_r_r6;
    CPy_DECREF(cpy_r_r5);
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = cpy_r_r8 != 0;
    if (cpy_r_r9) goto CPyL5;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r10 = 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/scope.py", "leave_class", 101, CPyStatic_scope___globals);
        goto CPyL8;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r11 = ((mypy___scope___ScopeObject *)cpy_r_self)->_classes;
    CPy_INCREF(cpy_r_r11);
    cpy_r_r12 = CPyList_PopLast(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "leave_class", 103, CPyStatic_scope___globals);
        goto CPyL8;
    }
    if (likely((Py_TYPE(cpy_r_r12) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r12) == CPyType_nodes___TypeInfo)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", cpy_r_r12); 
        cpy_r_r13 = NULL;
    }
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "leave_class", 103, CPyStatic_scope___globals);
        goto CPyL8;
    } else
        goto CPyL9;
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL9: ;
    CPy_DECREF(cpy_r_r13);
    goto CPyL7;
}

PyObject *CPyPy_scope___Scope___leave_class(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":leave_class", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_scope___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.scope.Scope", obj_self); 
        goto fail;
    }
    char retval = CPyDef_scope___Scope___leave_class(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "leave_class", 95, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___class_scope_Scope_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    int64_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    int64_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    cpy_r_r0 = ((mypy___scope___class_scope_Scope_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "class_scope", "class_scope_Scope_gen", "__mypyc_env__", 106, CPyStatic_scope___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/scope.py", "class_scope", "class_scope_Scope_env", "__mypyc_next_label__", 106, CPyStatic_scope___globals);
        goto CPyL29;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL18;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL30;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/scope.py", "class_scope", 106, CPyStatic_scope___globals);
        goto CPyL28;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "class_scope", "class_scope_Scope_env", "self", 107, CPyStatic_scope___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r4);
CPyL6: ;
    cpy_r_r5 = ((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "class_scope", "class_scope_Scope_env", "info", 107, CPyStatic_scope___globals);
        goto CPyL31;
    }
    CPy_INCREF(cpy_r_r5);
CPyL7: ;
    cpy_r_r6 = CPyDef_scope___Scope___enter_class(cpy_r_r4, cpy_r_r5);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AddTraceback("mypy/scope.py", "class_scope", 107, CPyStatic_scope___globals);
        goto CPyL29;
    }
    cpy_r_r7 = Py_None;
    if (((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r8 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/scope.py", "class_scope", 108, CPyStatic_scope___globals);
        goto CPyL28;
    }
    CPy_INCREF(cpy_r_r7);
    return cpy_r_r7;
CPyL10: ;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_type != cpy_r_r9;
    if (cpy_r_r10) {
        goto CPyL32;
    } else
        goto CPyL13;
CPyL11: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/scope.py", "class_scope", 108, CPyStatic_scope___globals);
        goto CPyL28;
    }
    CPy_Unreachable();
CPyL13: ;
    cpy_r_r11 = ((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "class_scope", "class_scope_Scope_env", "self", 109, CPyStatic_scope___globals);
        goto CPyL29;
    }
    CPy_INCREF(cpy_r_r11);
CPyL14: ;
    cpy_r_r12 = CPyDef_scope___Scope___leave_class(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("mypy/scope.py", "class_scope", 109, CPyStatic_scope___globals);
        goto CPyL29;
    }
    cpy_r_r13 = Py_None;
    if (((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r14 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r14)) {
        CPy_AddTraceback("mypy/scope.py", "class_scope", 106, CPyStatic_scope___globals);
        goto CPyL28;
    }
    CPyGen_SetStopIterationValue(cpy_r_r13);
    if (!0) goto CPyL28;
    CPy_Unreachable();
CPyL18: ;
    cpy_r_r15 = cpy_r_r1 & 1;
    cpy_r_r16 = cpy_r_r15 == 0;
    if (!cpy_r_r16) goto CPyL20;
    cpy_r_r17 = cpy_r_r1 == 0;
    cpy_r_r18 = cpy_r_r17;
    goto CPyL21;
CPyL20: ;
    cpy_r_r19 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r18 = cpy_r_r19;
CPyL21: ;
    if (cpy_r_r18) goto CPyL33;
    cpy_r_r20 = cpy_r_r1 & 1;
    cpy_r_r21 = cpy_r_r20 == 0;
    if (!cpy_r_r21) goto CPyL24;
    cpy_r_r22 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r23 = cpy_r_r22;
    goto CPyL25;
CPyL24: ;
    cpy_r_r24 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r23 = cpy_r_r24;
CPyL25: ;
    if (cpy_r_r23) {
        goto CPyL10;
    } else
        goto CPyL34;
CPyL26: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r25 = 0;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("mypy/scope.py", "class_scope", 106, CPyStatic_scope___globals);
        goto CPyL28;
    }
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r26 = NULL;
    return cpy_r_r26;
CPyL29: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL28;
CPyL30: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4);
    goto CPyL28;
CPyL32: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL11;
CPyL33: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL34: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL26;
}

PyObject *CPyPy_scope___class_scope_Scope_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_scope___class_scope_Scope_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "class_scope", 106, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___class_scope_Scope_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_scope___class_scope_Scope_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_scope___class_scope_Scope_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___class_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.class_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___class_scope_Scope_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "__next__", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___class_scope_Scope_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_scope___class_scope_Scope_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_scope___class_scope_Scope_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___class_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.class_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_scope___class_scope_Scope_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "send", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___class_scope_Scope_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_scope___class_scope_Scope_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___class_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.class_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___class_scope_Scope_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "__iter__", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___class_scope_Scope_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_scope___class_scope_Scope_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_scope___class_scope_Scope_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___class_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.class_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_scope___class_scope_Scope_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "throw", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___class_scope_Scope_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[74]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_scope___class_scope_Scope_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[75]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    CPy_INCREF(cpy_r_r10.f0);
    CPy_INCREF(cpy_r_r10.f1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5230 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp5230);
    PyObject *__tmp5231 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp5231);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_scope___class_scope_Scope_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___class_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.class_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___class_scope_Scope_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "close", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___Scope___class_scope(PyObject *cpy_r_self, PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_scope___class_scope_Scope_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "class_scope", 106, CPyStatic_scope___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/scope.py", "class_scope", 106, CPyStatic_scope___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_info);
    if (((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->_info != NULL) {
        CPy_DECREF(((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->_info);
    }
    ((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->_info = cpy_r_info;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/scope.py", "class_scope", 106, CPyStatic_scope___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_scope___class_scope_Scope_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "class_scope", 106, CPyStatic_scope___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___scope___class_scope_Scope_genObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___scope___class_scope_Scope_genObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypy___scope___class_scope_Scope_genObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/scope.py", "class_scope", 106, CPyStatic_scope___globals);
        goto CPyL9;
    }
    if (((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___scope___class_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/scope.py", "class_scope", 106, CPyStatic_scope___globals);
        goto CPyL10;
    }
    return cpy_r_r3;
CPyL7: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
}

PyObject *CPyPy_scope___Scope___class_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:class_scope", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_scope___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.scope.Scope", obj_self); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___Scope___class_scope(arg_self, arg_info);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "class_scope", 106, CPyStatic_scope___globals);
    return NULL;
}

tuple_T3OOO CPyDef_scope___Scope___save(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyPtr cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_cls;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    tuple_T3OOO cpy_r_r19;
    tuple_T3OOO cpy_r_r20;
    cpy_r_r0 = ((mypy___scope___ScopeObject *)cpy_r_self)->_module;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL13;
    if (likely(cpy_r_r0 != Py_None))
        cpy_r_r3 = cpy_r_r0;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "save", 113, CPyStatic_scope___globals, "str", cpy_r_r0);
        goto CPyL12;
    }
    cpy_r_r4 = CPyStr_IsTrue(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    if (cpy_r_r4) goto CPyL5;
CPyL3: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r5 = 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/scope.py", "save", 113, CPyStatic_scope___globals);
        goto CPyL12;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r6 = ((mypy___scope___ScopeObject *)cpy_r_self)->_classes;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = (CPyPtr)&((PyVarObject *)cpy_r_r6)->ob_size;
    cpy_r_r8 = *(int64_t *)cpy_r_r7;
    CPy_DECREF(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = cpy_r_r9 != 0;
    if (!cpy_r_r10) goto CPyL9;
    cpy_r_r11 = ((mypy___scope___ScopeObject *)cpy_r_self)->_classes;
    cpy_r_r12 = CPyList_GetItemShort(cpy_r_r11, -2);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "save", 116, CPyStatic_scope___globals);
        goto CPyL12;
    }
    if (likely((Py_TYPE(cpy_r_r12) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r12) == CPyType_nodes___TypeInfo)))
        cpy_r_r13 = cpy_r_r12;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "save", 116, CPyStatic_scope___globals, "mypy.nodes.TypeInfo", cpy_r_r12);
        goto CPyL12;
    }
    cpy_r_r14 = cpy_r_r13;
    goto CPyL10;
CPyL9: ;
    cpy_r_r15 = Py_None;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r14 = cpy_r_r15;
CPyL10: ;
    cpy_r_cls = cpy_r_r14;
    cpy_r_r16 = ((mypy___scope___ScopeObject *)cpy_r_self)->_module;
    CPy_INCREF(cpy_r_r16);
    if (likely(cpy_r_r16 != Py_None))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "save", 117, CPyStatic_scope___globals, "str", cpy_r_r16);
        goto CPyL14;
    }
    cpy_r_r18 = ((mypy___scope___ScopeObject *)cpy_r_self)->_function;
    CPy_INCREF(cpy_r_r18);
    cpy_r_r19.f0 = cpy_r_r17;
    cpy_r_r19.f1 = cpy_r_cls;
    cpy_r_r19.f2 = cpy_r_r18;
    CPy_INCREF(cpy_r_r19.f0);
    CPy_INCREF(cpy_r_r19.f1);
    CPy_INCREF(cpy_r_r19.f2);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_cls);
    CPy_DECREF(cpy_r_r18);
    return cpy_r_r19;
CPyL12: ;
    tuple_T3OOO __tmp5232 = { NULL, NULL, NULL };
    cpy_r_r20 = __tmp5232;
    return cpy_r_r20;
CPyL13: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL14: ;
    CPy_DecRef(cpy_r_cls);
    goto CPyL12;
}

PyObject *CPyPy_scope___Scope___save(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":save", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_scope___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.scope.Scope", obj_self); 
        goto fail;
    }
    tuple_T3OOO retval = CPyDef_scope___Scope___save(arg_self);
    if (retval.f0 == NULL) {
        return NULL;
    }
    PyObject *retbox = PyTuple_New(3);
    if (unlikely(retbox == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5233 = retval.f0;
    PyTuple_SET_ITEM(retbox, 0, __tmp5233);
    PyObject *__tmp5234 = retval.f1;
    PyTuple_SET_ITEM(retbox, 1, __tmp5234);
    PyObject *__tmp5235 = retval.f2;
    PyTuple_SET_ITEM(retbox, 2, __tmp5235);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "save", 111, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___saved_scope_Scope_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    tuple_T3OOO cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject **cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    char cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject **cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject **cpy_r_r78;
    PyObject *cpy_r_r79;
    char cpy_r_r80;
    char cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    char cpy_r_r85;
    tuple_T3OOO cpy_r_r86;
    char cpy_r_r87;
    char cpy_r_r88;
    tuple_T3OOO cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject **cpy_r_r96;
    PyObject *cpy_r_r97;
    int32_t cpy_r_r98;
    char cpy_r_r99;
    char cpy_r_r100;
    tuple_T3OOO cpy_r_r101;
    tuple_T3OOO cpy_r_r102;
    char cpy_r_r103;
    tuple_T3OOO cpy_r_r104;
    tuple_T3OOO cpy_r_r105;
    tuple_T3OOO cpy_r_r106;
    char cpy_r_r107;
    PyObject *cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject **cpy_r_r112;
    PyObject *cpy_r_r113;
    char cpy_r_r114;
    tuple_T3OOO cpy_r_r115;
    char cpy_r_r116;
    char cpy_r_r117;
    tuple_T3OOO cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject **cpy_r_r125;
    PyObject *cpy_r_r126;
    int32_t cpy_r_r127;
    char cpy_r_r128;
    char cpy_r_r129;
    tuple_T3OOO cpy_r_r130;
    tuple_T3OOO cpy_r_r131;
    char cpy_r_r132;
    tuple_T3OOO cpy_r_r133;
    tuple_T3OOO cpy_r_r134;
    tuple_T3OOO cpy_r_r135;
    char cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    PyObject **cpy_r_r141;
    PyObject *cpy_r_r142;
    char cpy_r_r143;
    tuple_T3OOO cpy_r_r144;
    char cpy_r_r145;
    char cpy_r_r146;
    tuple_T3OOO cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    PyObject **cpy_r_r154;
    PyObject *cpy_r_r155;
    int32_t cpy_r_r156;
    char cpy_r_r157;
    char cpy_r_r158;
    tuple_T3OOO cpy_r_r159;
    tuple_T3OOO cpy_r_r160;
    char cpy_r_r161;
    tuple_T3OOO cpy_r_r162;
    tuple_T3OOO cpy_r_r163;
    tuple_T3OOO cpy_r_r164;
    char cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject **cpy_r_r170;
    PyObject *cpy_r_r171;
    char cpy_r_r172;
    PyObject *cpy_r_r173;
    char cpy_r_r174;
    int64_t cpy_r_r175;
    char cpy_r_r176;
    char cpy_r_r177;
    char cpy_r_r178;
    char cpy_r_r179;
    int64_t cpy_r_r180;
    char cpy_r_r181;
    char cpy_r_r182;
    char cpy_r_r183;
    char cpy_r_r184;
    char cpy_r_r185;
    PyObject *cpy_r_r186;
    cpy_r_r0 = ((mypy___scope___saved_scope_Scope_genObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_gen", "__mypyc_env__", 120, CPyStatic_scope___globals);
        goto CPyL158;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_next_label__", 120, CPyStatic_scope___globals);
        goto CPyL159;
    }
    CPyTagged_INCREF(cpy_r_r1);
    goto CPyL148;
CPyL2: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_type != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL160;
    } else
        goto CPyL5;
CPyL3: ;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 120, CPyStatic_scope___globals);
        goto CPyL158;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r4 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_saved;
    if (unlikely(cpy_r_r4.f0 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "saved", 121, CPyStatic_scope___globals);
        goto CPyL159;
    }
    CPy_INCREF(cpy_r_r4.f0);
    CPy_INCREF(cpy_r_r4.f1);
    CPy_INCREF(cpy_r_r4.f2);
CPyL6: ;
    cpy_r_r5 = cpy_r_r4.f0;
    CPy_INCREF(cpy_r_r5);
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_module != NULL) {
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_module);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_module = cpy_r_r5;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 121, CPyStatic_scope___globals);
        goto CPyL161;
    }
    cpy_r_r7 = cpy_r_r4.f1;
    CPy_INCREF(cpy_r_r7);
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_info != NULL) {
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_info);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_info = cpy_r_r7;
    cpy_r_r8 = 1;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 121, CPyStatic_scope___globals);
        goto CPyL161;
    }
    cpy_r_r9 = cpy_r_r4.f2;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r4.f0);
    CPy_DECREF(cpy_r_r4.f1);
    CPy_DECREF(cpy_r_r4.f2);
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_function != NULL) {
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_function);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_function = cpy_r_r9;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 121, CPyStatic_scope___globals);
        goto CPyL159;
    }
    cpy_r_r11 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "self", 122, CPyStatic_scope___globals);
        goto CPyL159;
    }
    CPy_INCREF(cpy_r_r11);
CPyL10: ;
    cpy_r_r12 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_module;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "module", 122, CPyStatic_scope___globals);
        goto CPyL162;
    }
    CPy_INCREF(cpy_r_r12);
CPyL11: ;
    cpy_r_r13 = CPyStatics[693]; /* 'module_scope' */
    PyObject *cpy_r_r14[2] = {cpy_r_r11, cpy_r_r12};
    cpy_r_r15 = (PyObject **)&cpy_r_r14;
    cpy_r_r16 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r15, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 122, CPyStatic_scope___globals);
        goto CPyL163;
    }
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r17 = PyObject_Type(cpy_r_r16);
    cpy_r_r18 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r19 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 122, CPyStatic_scope___globals);
        goto CPyL164;
    }
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__0 != NULL) {
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__0);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__0 = cpy_r_r19;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", -1, CPyStatic_scope___globals);
        goto CPyL164;
    }
    cpy_r_r21 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r22 = CPyObject_GetAttr(cpy_r_r17, cpy_r_r21);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 122, CPyStatic_scope___globals);
        goto CPyL165;
    }
    PyObject *cpy_r_r23[1] = {cpy_r_r16};
    cpy_r_r24 = (PyObject **)&cpy_r_r23;
    cpy_r_r25 = _PyObject_Vectorcall(cpy_r_r22, cpy_r_r24, 1, 0);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 122, CPyStatic_scope___globals);
        goto CPyL165;
    } else
        goto CPyL166;
CPyL16: ;
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__1 != NULL) {
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__1);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__1 = cpy_r_r16;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", -1, CPyStatic_scope___globals);
        goto CPyL159;
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__2 = 1;
    cpy_r_r27 = 1;
    if (unlikely(!cpy_r_r27)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", -1, CPyStatic_scope___globals);
        goto CPyL159;
    }
    cpy_r_r28 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "info", 123, CPyStatic_scope___globals);
        goto CPyL116;
    }
    CPy_INCREF(cpy_r_r28);
CPyL19: ;
    cpy_r_r29 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r30 = cpy_r_r28 != cpy_r_r29;
    if (!cpy_r_r30) goto CPyL167;
    if (likely(cpy_r_r28 != Py_None))
        cpy_r_r31 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "saved_scope", 123, CPyStatic_scope___globals, "mypy.nodes.TypeInfo", cpy_r_r28);
        goto CPyL116;
    }
    cpy_r_r32 = CPyDef_nodes___TypeInfo_____bool__(cpy_r_r31);
    CPy_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == 2)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 123, CPyStatic_scope___globals);
        goto CPyL116;
    }
    if (!cpy_r_r32) goto CPyL28;
    cpy_r_r33 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "self", 123, CPyStatic_scope___globals);
        goto CPyL116;
    }
    CPy_INCREF(cpy_r_r33);
CPyL24: ;
    cpy_r_r34 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_info;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "info", 123, CPyStatic_scope___globals);
        goto CPyL168;
    }
    CPy_INCREF(cpy_r_r34);
CPyL25: ;
    if (likely(cpy_r_r34 != Py_None))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "saved_scope", 123, CPyStatic_scope___globals, "mypy.nodes.TypeInfo", cpy_r_r34);
        goto CPyL168;
    }
    cpy_r_r36 = CPyStatics[698]; /* 'class_scope' */
    PyObject *cpy_r_r37[2] = {cpy_r_r33, cpy_r_r35};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = PyObject_VectorcallMethod(cpy_r_r36, cpy_r_r38, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 123, CPyStatic_scope___globals);
        goto CPyL169;
    }
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r35);
    cpy_r_r40 = cpy_r_r39;
    goto CPyL31;
CPyL28: ;
    cpy_r_r41 = CPyStatic_scope___globals;
    cpy_r_r42 = CPyStatics[699]; /* 'nullcontext' */
    cpy_r_r43 = CPyDict_GetItem(cpy_r_r41, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 123, CPyStatic_scope___globals);
        goto CPyL116;
    }
    cpy_r_r44 = _PyObject_Vectorcall(cpy_r_r43, 0, 0, 0);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 123, CPyStatic_scope___globals);
        goto CPyL116;
    }
    cpy_r_r40 = cpy_r_r44;
CPyL31: ;
    cpy_r_r45 = PyObject_Type(cpy_r_r40);
    cpy_r_r46 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 123, CPyStatic_scope___globals);
        goto CPyL170;
    }
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__3 != NULL) {
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__3);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__3 = cpy_r_r47;
    cpy_r_r48 = 1;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", -1, CPyStatic_scope___globals);
        goto CPyL170;
    }
    cpy_r_r49 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r49);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 123, CPyStatic_scope___globals);
        goto CPyL171;
    }
    PyObject *cpy_r_r51[1] = {cpy_r_r40};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = _PyObject_Vectorcall(cpy_r_r50, cpy_r_r52, 1, 0);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 123, CPyStatic_scope___globals);
        goto CPyL171;
    } else
        goto CPyL172;
CPyL35: ;
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__4 != NULL) {
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__4);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__4 = cpy_r_r40;
    cpy_r_r54 = 1;
    if (unlikely(!cpy_r_r54)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", -1, CPyStatic_scope___globals);
        goto CPyL116;
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__5 = 1;
    cpy_r_r55 = 1;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", -1, CPyStatic_scope___globals);
        goto CPyL116;
    }
    cpy_r_r56 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_function;
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "function", 124, CPyStatic_scope___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_r56);
CPyL38: ;
    cpy_r_r57 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r58 = cpy_r_r56 != cpy_r_r57;
    CPy_DECREF(cpy_r_r56);
    if (!cpy_r_r58) goto CPyL44;
    cpy_r_r59 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_self;
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "self", 124, CPyStatic_scope___globals);
        goto CPyL87;
    }
    CPy_INCREF(cpy_r_r59);
CPyL40: ;
    cpy_r_r60 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_function;
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "function", 124, CPyStatic_scope___globals);
        goto CPyL173;
    }
    CPy_INCREF(cpy_r_r60);
CPyL41: ;
    if (likely(cpy_r_r60 != Py_None))
        cpy_r_r61 = cpy_r_r60;
    else {
        CPy_TypeErrorTraceback("mypy/scope.py", "saved_scope", 124, CPyStatic_scope___globals, "mypy.nodes.FuncBase", cpy_r_r60);
        goto CPyL173;
    }
    cpy_r_r62 = CPyStatics[705]; /* 'function_scope' */
    PyObject *cpy_r_r63[2] = {cpy_r_r59, cpy_r_r61};
    cpy_r_r64 = (PyObject **)&cpy_r_r63;
    cpy_r_r65 = PyObject_VectorcallMethod(cpy_r_r62, cpy_r_r64, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r65 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 124, CPyStatic_scope___globals);
        goto CPyL174;
    }
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r61);
    cpy_r_r66 = cpy_r_r65;
    goto CPyL47;
CPyL44: ;
    cpy_r_r67 = CPyStatic_scope___globals;
    cpy_r_r68 = CPyStatics[699]; /* 'nullcontext' */
    cpy_r_r69 = CPyDict_GetItem(cpy_r_r67, cpy_r_r68);
    if (unlikely(cpy_r_r69 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 124, CPyStatic_scope___globals);
        goto CPyL87;
    }
    cpy_r_r70 = _PyObject_Vectorcall(cpy_r_r69, 0, 0, 0);
    CPy_DECREF(cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 124, CPyStatic_scope___globals);
        goto CPyL87;
    }
    cpy_r_r66 = cpy_r_r70;
CPyL47: ;
    cpy_r_r71 = PyObject_Type(cpy_r_r66);
    cpy_r_r72 = CPyStatics[200]; /* '__exit__' */
    cpy_r_r73 = CPyObject_GetAttr(cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 124, CPyStatic_scope___globals);
        goto CPyL175;
    }
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__6 != NULL) {
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__6);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__6 = cpy_r_r73;
    cpy_r_r74 = 1;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", -1, CPyStatic_scope___globals);
        goto CPyL175;
    }
    cpy_r_r75 = CPyStatics[201]; /* '__enter__' */
    cpy_r_r76 = CPyObject_GetAttr(cpy_r_r71, cpy_r_r75);
    CPy_DECREF(cpy_r_r71);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 124, CPyStatic_scope___globals);
        goto CPyL176;
    }
    PyObject *cpy_r_r77[1] = {cpy_r_r66};
    cpy_r_r78 = (PyObject **)&cpy_r_r77;
    cpy_r_r79 = _PyObject_Vectorcall(cpy_r_r76, cpy_r_r78, 1, 0);
    CPy_DECREF(cpy_r_r76);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 124, CPyStatic_scope___globals);
        goto CPyL176;
    } else
        goto CPyL177;
CPyL51: ;
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__7 != NULL) {
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__7);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__7 = cpy_r_r66;
    cpy_r_r80 = 1;
    if (unlikely(!cpy_r_r80)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", -1, CPyStatic_scope___globals);
        goto CPyL87;
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__8 = 1;
    cpy_r_r81 = 1;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", -1, CPyStatic_scope___globals);
        goto CPyL87;
    }
    cpy_r_r82 = Py_None;
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ = 2;
    cpy_r_r83 = 1;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 125, CPyStatic_scope___globals);
        goto CPyL58;
    } else
        goto CPyL178;
CPyL54: ;
    CPy_INCREF(cpy_r_r82);
    return cpy_r_r82;
CPyL55: ;
    cpy_r_r84 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r85 = cpy_r_type != cpy_r_r84;
    if (!cpy_r_r85) goto CPyL72;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 125, CPyStatic_scope___globals);
        goto CPyL58;
    } else
        goto CPyL179;
CPyL57: ;
    CPy_Unreachable();
CPyL58: ;
    cpy_r_r86 = CPy_CatchError();
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__9.f0 != NULL) {
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__9.f0);
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__9.f1);
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__9.f2);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__9 = cpy_r_r86;
    cpy_r_r87 = 1;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", -1, CPyStatic_scope___globals);
        goto CPyL69;
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__8 = 0;
    cpy_r_r88 = 1;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 124, CPyStatic_scope___globals);
        goto CPyL69;
    }
    cpy_r_r89 = CPy_GetExcInfo();
    cpy_r_r90 = cpy_r_r89.f0;
    CPy_INCREF(cpy_r_r90);
    cpy_r_r91 = cpy_r_r89.f1;
    CPy_INCREF(cpy_r_r91);
    cpy_r_r92 = cpy_r_r89.f2;
    CPy_INCREF(cpy_r_r92);
    CPy_DecRef(cpy_r_r89.f0);
    CPy_DecRef(cpy_r_r89.f1);
    CPy_DecRef(cpy_r_r89.f2);
    cpy_r_r93 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__6;
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__6", -1, CPyStatic_scope___globals);
        goto CPyL180;
    }
    CPy_INCREF(cpy_r_r93);
CPyL61: ;
    cpy_r_r94 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__7;
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__7", -1, CPyStatic_scope___globals);
        goto CPyL181;
    }
    CPy_INCREF(cpy_r_r94);
CPyL62: ;
    PyObject *cpy_r_r95[4] = {cpy_r_r94, cpy_r_r90, cpy_r_r91, cpy_r_r92};
    cpy_r_r96 = (PyObject **)&cpy_r_r95;
    cpy_r_r97 = _PyObject_Vectorcall(cpy_r_r93, cpy_r_r96, 4, 0);
    CPy_DecRef(cpy_r_r93);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 124, CPyStatic_scope___globals);
        goto CPyL182;
    }
    CPy_DecRef(cpy_r_r94);
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r92);
    cpy_r_r98 = PyObject_IsTrue(cpy_r_r97);
    CPy_DecRef(cpy_r_r97);
    cpy_r_r99 = cpy_r_r98 >= 0;
    if (unlikely(!cpy_r_r99)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 124, CPyStatic_scope___globals);
        goto CPyL69;
    }
    cpy_r_r100 = cpy_r_r98;
    if (cpy_r_r100) goto CPyL67;
    CPy_Reraise();
    if (!0) {
        goto CPyL69;
    } else
        goto CPyL183;
CPyL66: ;
    CPy_Unreachable();
CPyL67: ;
    cpy_r_r101 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__9;
    if (unlikely(cpy_r_r101.f0 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__9", -1, CPyStatic_scope___globals);
        goto CPyL73;
    }
    CPy_INCREF(cpy_r_r101.f0);
    CPy_INCREF(cpy_r_r101.f1);
    CPy_INCREF(cpy_r_r101.f2);
CPyL68: ;
    CPy_RestoreExcInfo(cpy_r_r101);
    CPy_DecRef(cpy_r_r101.f0);
    CPy_DecRef(cpy_r_r101.f1);
    CPy_DecRef(cpy_r_r101.f2);
    goto CPyL72;
CPyL69: ;
    cpy_r_r102 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__9;
    if (unlikely(cpy_r_r102.f0 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__9", -1, CPyStatic_scope___globals);
        goto CPyL73;
    }
    CPy_INCREF(cpy_r_r102.f0);
    CPy_INCREF(cpy_r_r102.f1);
    CPy_INCREF(cpy_r_r102.f2);
CPyL70: ;
    CPy_RestoreExcInfo(cpy_r_r102);
    CPy_DecRef(cpy_r_r102.f0);
    CPy_DecRef(cpy_r_r102.f1);
    CPy_DecRef(cpy_r_r102.f2);
    cpy_r_r103 = CPy_KeepPropagating();
    if (!cpy_r_r103) {
        goto CPyL73;
    } else
        goto CPyL184;
CPyL71: ;
    CPy_Unreachable();
CPyL72: ;
    tuple_T3OOO __tmp5236 = { NULL, NULL, NULL };
    cpy_r_r104 = __tmp5236;
    cpy_r_r105 = cpy_r_r104;
    goto CPyL74;
CPyL73: ;
    cpy_r_r106 = CPy_CatchError();
    cpy_r_r105 = cpy_r_r106;
CPyL74: ;
    cpy_r_r107 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__8;
    if (unlikely(cpy_r_r107 == 2)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__8", -1, CPyStatic_scope___globals);
        goto CPyL83;
    }
CPyL75: ;
    if (!cpy_r_r107) goto CPyL80;
CPyL76: ;
    cpy_r_r108 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r109 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__6;
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__6", -1, CPyStatic_scope___globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r109);
CPyL77: ;
    cpy_r_r110 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__7;
    if (unlikely(cpy_r_r110 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__7", -1, CPyStatic_scope___globals);
        goto CPyL185;
    }
    CPy_INCREF(cpy_r_r110);
CPyL78: ;
    PyObject *cpy_r_r111[4] = {cpy_r_r110, cpy_r_r108, cpy_r_r108, cpy_r_r108};
    cpy_r_r112 = (PyObject **)&cpy_r_r111;
    cpy_r_r113 = _PyObject_Vectorcall(cpy_r_r109, cpy_r_r112, 4, 0);
    CPy_DECREF(cpy_r_r109);
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 124, CPyStatic_scope___globals);
        goto CPyL186;
    } else
        goto CPyL187;
CPyL79: ;
    CPy_DECREF(cpy_r_r110);
CPyL80: ;
    if (cpy_r_r105.f0 == NULL) goto CPyL101;
    CPy_Reraise();
    if (!0) {
        goto CPyL83;
    } else
        goto CPyL188;
CPyL82: ;
    CPy_Unreachable();
CPyL83: ;
    if (cpy_r_r105.f0 == NULL) goto CPyL85;
    CPy_RestoreExcInfo(cpy_r_r105);
    CPy_XDECREF(cpy_r_r105.f0);
    CPy_XDECREF(cpy_r_r105.f1);
    CPy_XDECREF(cpy_r_r105.f2);
CPyL85: ;
    cpy_r_r114 = CPy_KeepPropagating();
    if (!cpy_r_r114) {
        goto CPyL87;
    } else
        goto CPyL189;
CPyL86: ;
    CPy_Unreachable();
CPyL87: ;
    cpy_r_r115 = CPy_CatchError();
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__10.f0 != NULL) {
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__10.f0);
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__10.f1);
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__10.f2);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__10 = cpy_r_r115;
    cpy_r_r116 = 1;
    if (unlikely(!cpy_r_r116)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", -1, CPyStatic_scope___globals);
        goto CPyL98;
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__5 = 0;
    cpy_r_r117 = 1;
    if (unlikely(!cpy_r_r117)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 123, CPyStatic_scope___globals);
        goto CPyL98;
    }
    cpy_r_r118 = CPy_GetExcInfo();
    cpy_r_r119 = cpy_r_r118.f0;
    CPy_INCREF(cpy_r_r119);
    cpy_r_r120 = cpy_r_r118.f1;
    CPy_INCREF(cpy_r_r120);
    cpy_r_r121 = cpy_r_r118.f2;
    CPy_INCREF(cpy_r_r121);
    CPy_DECREF(cpy_r_r118.f0);
    CPy_DECREF(cpy_r_r118.f1);
    CPy_DECREF(cpy_r_r118.f2);
    cpy_r_r122 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__3;
    if (unlikely(cpy_r_r122 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__3", -1, CPyStatic_scope___globals);
        goto CPyL190;
    }
    CPy_INCREF(cpy_r_r122);
CPyL90: ;
    cpy_r_r123 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__4;
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__4", -1, CPyStatic_scope___globals);
        goto CPyL191;
    }
    CPy_INCREF(cpy_r_r123);
CPyL91: ;
    PyObject *cpy_r_r124[4] = {cpy_r_r123, cpy_r_r119, cpy_r_r120, cpy_r_r121};
    cpy_r_r125 = (PyObject **)&cpy_r_r124;
    cpy_r_r126 = _PyObject_Vectorcall(cpy_r_r122, cpy_r_r125, 4, 0);
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 123, CPyStatic_scope___globals);
        goto CPyL192;
    }
    CPy_DECREF(cpy_r_r123);
    CPy_DECREF(cpy_r_r119);
    CPy_DECREF(cpy_r_r120);
    CPy_DECREF(cpy_r_r121);
    cpy_r_r127 = PyObject_IsTrue(cpy_r_r126);
    CPy_DECREF(cpy_r_r126);
    cpy_r_r128 = cpy_r_r127 >= 0;
    if (unlikely(!cpy_r_r128)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 123, CPyStatic_scope___globals);
        goto CPyL98;
    }
    cpy_r_r129 = cpy_r_r127;
    if (cpy_r_r129) goto CPyL96;
    CPy_Reraise();
    if (!0) {
        goto CPyL98;
    } else
        goto CPyL193;
CPyL95: ;
    CPy_Unreachable();
CPyL96: ;
    cpy_r_r130 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__10;
    if (unlikely(cpy_r_r130.f0 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__10", -1, CPyStatic_scope___globals);
        goto CPyL102;
    }
    CPy_INCREF(cpy_r_r130.f0);
    CPy_INCREF(cpy_r_r130.f1);
    CPy_INCREF(cpy_r_r130.f2);
CPyL97: ;
    CPy_RestoreExcInfo(cpy_r_r130);
    CPy_DECREF(cpy_r_r130.f0);
    CPy_DECREF(cpy_r_r130.f1);
    CPy_DECREF(cpy_r_r130.f2);
    goto CPyL101;
CPyL98: ;
    cpy_r_r131 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__10;
    if (unlikely(cpy_r_r131.f0 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__10", -1, CPyStatic_scope___globals);
        goto CPyL102;
    }
    CPy_INCREF(cpy_r_r131.f0);
    CPy_INCREF(cpy_r_r131.f1);
    CPy_INCREF(cpy_r_r131.f2);
CPyL99: ;
    CPy_RestoreExcInfo(cpy_r_r131);
    CPy_DECREF(cpy_r_r131.f0);
    CPy_DECREF(cpy_r_r131.f1);
    CPy_DECREF(cpy_r_r131.f2);
    cpy_r_r132 = CPy_KeepPropagating();
    if (!cpy_r_r132) {
        goto CPyL102;
    } else
        goto CPyL194;
CPyL100: ;
    CPy_Unreachable();
CPyL101: ;
    tuple_T3OOO __tmp5237 = { NULL, NULL, NULL };
    cpy_r_r133 = __tmp5237;
    cpy_r_r134 = cpy_r_r133;
    goto CPyL103;
CPyL102: ;
    cpy_r_r135 = CPy_CatchError();
    cpy_r_r134 = cpy_r_r135;
CPyL103: ;
    cpy_r_r136 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__5;
    if (unlikely(cpy_r_r136 == 2)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__5", -1, CPyStatic_scope___globals);
        goto CPyL112;
    }
CPyL104: ;
    if (!cpy_r_r136) goto CPyL109;
CPyL105: ;
    cpy_r_r137 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r138 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__3;
    if (unlikely(cpy_r_r138 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__3", -1, CPyStatic_scope___globals);
        goto CPyL112;
    }
    CPy_INCREF(cpy_r_r138);
CPyL106: ;
    cpy_r_r139 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__4;
    if (unlikely(cpy_r_r139 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__4", -1, CPyStatic_scope___globals);
        goto CPyL195;
    }
    CPy_INCREF(cpy_r_r139);
CPyL107: ;
    PyObject *cpy_r_r140[4] = {cpy_r_r139, cpy_r_r137, cpy_r_r137, cpy_r_r137};
    cpy_r_r141 = (PyObject **)&cpy_r_r140;
    cpy_r_r142 = _PyObject_Vectorcall(cpy_r_r138, cpy_r_r141, 4, 0);
    CPy_DECREF(cpy_r_r138);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 123, CPyStatic_scope___globals);
        goto CPyL196;
    } else
        goto CPyL197;
CPyL108: ;
    CPy_DECREF(cpy_r_r139);
CPyL109: ;
    if (cpy_r_r134.f0 == NULL) goto CPyL130;
    CPy_Reraise();
    if (!0) {
        goto CPyL112;
    } else
        goto CPyL198;
CPyL111: ;
    CPy_Unreachable();
CPyL112: ;
    if (cpy_r_r134.f0 == NULL) goto CPyL114;
    CPy_RestoreExcInfo(cpy_r_r134);
    CPy_XDECREF(cpy_r_r134.f0);
    CPy_XDECREF(cpy_r_r134.f1);
    CPy_XDECREF(cpy_r_r134.f2);
CPyL114: ;
    cpy_r_r143 = CPy_KeepPropagating();
    if (!cpy_r_r143) {
        goto CPyL116;
    } else
        goto CPyL199;
CPyL115: ;
    CPy_Unreachable();
CPyL116: ;
    cpy_r_r144 = CPy_CatchError();
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__11.f0 != NULL) {
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__11.f0);
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__11.f1);
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__11.f2);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__11 = cpy_r_r144;
    cpy_r_r145 = 1;
    if (unlikely(!cpy_r_r145)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", -1, CPyStatic_scope___globals);
        goto CPyL127;
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__2 = 0;
    cpy_r_r146 = 1;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 122, CPyStatic_scope___globals);
        goto CPyL127;
    }
    cpy_r_r147 = CPy_GetExcInfo();
    cpy_r_r148 = cpy_r_r147.f0;
    CPy_INCREF(cpy_r_r148);
    cpy_r_r149 = cpy_r_r147.f1;
    CPy_INCREF(cpy_r_r149);
    cpy_r_r150 = cpy_r_r147.f2;
    CPy_INCREF(cpy_r_r150);
    CPy_DECREF(cpy_r_r147.f0);
    CPy_DECREF(cpy_r_r147.f1);
    CPy_DECREF(cpy_r_r147.f2);
    cpy_r_r151 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__0;
    if (unlikely(cpy_r_r151 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__0", -1, CPyStatic_scope___globals);
        goto CPyL200;
    }
    CPy_INCREF(cpy_r_r151);
CPyL119: ;
    cpy_r_r152 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__1;
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__1", -1, CPyStatic_scope___globals);
        goto CPyL201;
    }
    CPy_INCREF(cpy_r_r152);
CPyL120: ;
    PyObject *cpy_r_r153[4] = {cpy_r_r152, cpy_r_r148, cpy_r_r149, cpy_r_r150};
    cpy_r_r154 = (PyObject **)&cpy_r_r153;
    cpy_r_r155 = _PyObject_Vectorcall(cpy_r_r151, cpy_r_r154, 4, 0);
    CPy_DECREF(cpy_r_r151);
    if (unlikely(cpy_r_r155 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 122, CPyStatic_scope___globals);
        goto CPyL202;
    }
    CPy_DECREF(cpy_r_r152);
    CPy_DECREF(cpy_r_r148);
    CPy_DECREF(cpy_r_r149);
    CPy_DECREF(cpy_r_r150);
    cpy_r_r156 = PyObject_IsTrue(cpy_r_r155);
    CPy_DECREF(cpy_r_r155);
    cpy_r_r157 = cpy_r_r156 >= 0;
    if (unlikely(!cpy_r_r157)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 122, CPyStatic_scope___globals);
        goto CPyL127;
    }
    cpy_r_r158 = cpy_r_r156;
    if (cpy_r_r158) goto CPyL125;
    CPy_Reraise();
    if (!0) {
        goto CPyL127;
    } else
        goto CPyL203;
CPyL124: ;
    CPy_Unreachable();
CPyL125: ;
    cpy_r_r159 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__11;
    if (unlikely(cpy_r_r159.f0 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__11", -1, CPyStatic_scope___globals);
        goto CPyL131;
    }
    CPy_INCREF(cpy_r_r159.f0);
    CPy_INCREF(cpy_r_r159.f1);
    CPy_INCREF(cpy_r_r159.f2);
CPyL126: ;
    CPy_RestoreExcInfo(cpy_r_r159);
    CPy_DECREF(cpy_r_r159.f0);
    CPy_DECREF(cpy_r_r159.f1);
    CPy_DECREF(cpy_r_r159.f2);
    goto CPyL130;
CPyL127: ;
    cpy_r_r160 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__11;
    if (unlikely(cpy_r_r160.f0 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__11", -1, CPyStatic_scope___globals);
        goto CPyL131;
    }
    CPy_INCREF(cpy_r_r160.f0);
    CPy_INCREF(cpy_r_r160.f1);
    CPy_INCREF(cpy_r_r160.f2);
CPyL128: ;
    CPy_RestoreExcInfo(cpy_r_r160);
    CPy_DECREF(cpy_r_r160.f0);
    CPy_DECREF(cpy_r_r160.f1);
    CPy_DECREF(cpy_r_r160.f2);
    cpy_r_r161 = CPy_KeepPropagating();
    if (!cpy_r_r161) {
        goto CPyL131;
    } else
        goto CPyL204;
CPyL129: ;
    CPy_Unreachable();
CPyL130: ;
    tuple_T3OOO __tmp5238 = { NULL, NULL, NULL };
    cpy_r_r162 = __tmp5238;
    cpy_r_r163 = cpy_r_r162;
    goto CPyL132;
CPyL131: ;
    cpy_r_r164 = CPy_CatchError();
    cpy_r_r163 = cpy_r_r164;
CPyL132: ;
    cpy_r_r165 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__2;
    if (unlikely(cpy_r_r165 == 2)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__2", -1, CPyStatic_scope___globals);
        goto CPyL205;
    }
CPyL133: ;
    if (!cpy_r_r165) goto CPyL138;
CPyL134: ;
    cpy_r_r166 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r167 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__0;
    if (unlikely(cpy_r_r167 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__0", -1, CPyStatic_scope___globals);
        goto CPyL205;
    }
    CPy_INCREF(cpy_r_r167);
CPyL135: ;
    cpy_r_r168 = ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_temp__1;
    if (unlikely(cpy_r_r168 == NULL)) {
        CPy_AttributeError("mypy/scope.py", "saved_scope", "saved_scope_Scope_env", "__mypyc_temp__1", -1, CPyStatic_scope___globals);
        goto CPyL206;
    }
    CPy_INCREF(cpy_r_r168);
CPyL136: ;
    PyObject *cpy_r_r169[4] = {cpy_r_r168, cpy_r_r166, cpy_r_r166, cpy_r_r166};
    cpy_r_r170 = (PyObject **)&cpy_r_r169;
    cpy_r_r171 = _PyObject_Vectorcall(cpy_r_r167, cpy_r_r170, 4, 0);
    CPy_DECREF(cpy_r_r167);
    if (unlikely(cpy_r_r171 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 122, CPyStatic_scope___globals);
        goto CPyL207;
    } else
        goto CPyL208;
CPyL137: ;
    CPy_DECREF(cpy_r_r168);
CPyL138: ;
    if (cpy_r_r163.f0 == NULL) {
        goto CPyL145;
    } else
        goto CPyL209;
CPyL139: ;
    CPy_Reraise();
    if (!0) {
        goto CPyL141;
    } else
        goto CPyL210;
CPyL140: ;
    CPy_Unreachable();
CPyL141: ;
    if (cpy_r_r163.f0 == NULL) goto CPyL143;
    CPy_RestoreExcInfo(cpy_r_r163);
    CPy_XDECREF(cpy_r_r163.f0);
    CPy_XDECREF(cpy_r_r163.f1);
    CPy_XDECREF(cpy_r_r163.f2);
CPyL143: ;
    cpy_r_r172 = CPy_KeepPropagating();
    if (!cpy_r_r172) goto CPyL158;
    CPy_Unreachable();
CPyL145: ;
    cpy_r_r173 = Py_None;
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ = -2;
    cpy_r_r174 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 120, CPyStatic_scope___globals);
        goto CPyL158;
    }
    CPyGen_SetStopIterationValue(cpy_r_r173);
    if (!0) goto CPyL158;
    CPy_Unreachable();
CPyL148: ;
    cpy_r_r175 = cpy_r_r1 & 1;
    cpy_r_r176 = cpy_r_r175 == 0;
    if (!cpy_r_r176) goto CPyL150;
    cpy_r_r177 = cpy_r_r1 == 0;
    cpy_r_r178 = cpy_r_r177;
    goto CPyL151;
CPyL150: ;
    cpy_r_r179 = CPyTagged_IsEq_(cpy_r_r1, 0);
    cpy_r_r178 = cpy_r_r179;
CPyL151: ;
    if (cpy_r_r178) goto CPyL211;
    cpy_r_r180 = cpy_r_r1 & 1;
    cpy_r_r181 = cpy_r_r180 == 0;
    if (!cpy_r_r181) goto CPyL154;
    cpy_r_r182 = cpy_r_r1 == 2;
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r183 = cpy_r_r182;
    goto CPyL155;
CPyL154: ;
    cpy_r_r184 = CPyTagged_IsEq_(cpy_r_r1, 2);
    CPyTagged_DECREF(cpy_r_r1);
    cpy_r_r183 = cpy_r_r184;
CPyL155: ;
    if (cpy_r_r183) {
        goto CPyL55;
    } else
        goto CPyL212;
CPyL156: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r185 = 0;
    if (unlikely(!cpy_r_r185)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 120, CPyStatic_scope___globals);
        goto CPyL158;
    }
    CPy_Unreachable();
CPyL158: ;
    cpy_r_r186 = NULL;
    return cpy_r_r186;
CPyL159: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL158;
CPyL160: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL3;
CPyL161: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    goto CPyL158;
CPyL162: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    goto CPyL158;
CPyL163: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r12);
    goto CPyL158;
CPyL164: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16);
    CPy_DecRef(cpy_r_r17);
    goto CPyL158;
CPyL165: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r16);
    goto CPyL158;
CPyL166: ;
    CPy_DECREF(cpy_r_r25);
    goto CPyL16;
CPyL167: ;
    CPy_DECREF(cpy_r_r28);
    goto CPyL28;
CPyL168: ;
    CPy_DecRef(cpy_r_r33);
    goto CPyL116;
CPyL169: ;
    CPy_DecRef(cpy_r_r33);
    CPy_DecRef(cpy_r_r35);
    goto CPyL116;
CPyL170: ;
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r45);
    goto CPyL116;
CPyL171: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL116;
CPyL172: ;
    CPy_DECREF(cpy_r_r53);
    goto CPyL35;
CPyL173: ;
    CPy_DecRef(cpy_r_r59);
    goto CPyL87;
CPyL174: ;
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r61);
    goto CPyL87;
CPyL175: ;
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r71);
    goto CPyL87;
CPyL176: ;
    CPy_DecRef(cpy_r_r66);
    goto CPyL87;
CPyL177: ;
    CPy_DECREF(cpy_r_r79);
    goto CPyL51;
CPyL178: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL54;
CPyL179: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL57;
CPyL180: ;
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r92);
    goto CPyL69;
CPyL181: ;
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r93);
    goto CPyL69;
CPyL182: ;
    CPy_DecRef(cpy_r_r90);
    CPy_DecRef(cpy_r_r91);
    CPy_DecRef(cpy_r_r92);
    CPy_DecRef(cpy_r_r94);
    goto CPyL69;
CPyL183: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL66;
CPyL184: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL71;
CPyL185: ;
    CPy_DecRef(cpy_r_r109);
    goto CPyL83;
CPyL186: ;
    CPy_DecRef(cpy_r_r110);
    goto CPyL83;
CPyL187: ;
    CPy_DECREF(cpy_r_r113);
    goto CPyL79;
CPyL188: ;
    CPy_DECREF(cpy_r_r0);
    CPy_XDECREF(cpy_r_r105.f0);
    CPy_XDECREF(cpy_r_r105.f1);
    CPy_XDECREF(cpy_r_r105.f2);
    goto CPyL82;
CPyL189: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL86;
CPyL190: ;
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r121);
    goto CPyL98;
CPyL191: ;
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_r122);
    goto CPyL98;
CPyL192: ;
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r121);
    CPy_DecRef(cpy_r_r123);
    goto CPyL98;
CPyL193: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL95;
CPyL194: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL100;
CPyL195: ;
    CPy_DecRef(cpy_r_r138);
    goto CPyL112;
CPyL196: ;
    CPy_DecRef(cpy_r_r139);
    goto CPyL112;
CPyL197: ;
    CPy_DECREF(cpy_r_r142);
    goto CPyL108;
CPyL198: ;
    CPy_DECREF(cpy_r_r0);
    CPy_XDECREF(cpy_r_r134.f0);
    CPy_XDECREF(cpy_r_r134.f1);
    CPy_XDECREF(cpy_r_r134.f2);
    goto CPyL111;
CPyL199: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL115;
CPyL200: ;
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r150);
    goto CPyL127;
CPyL201: ;
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r151);
    goto CPyL127;
CPyL202: ;
    CPy_DecRef(cpy_r_r148);
    CPy_DecRef(cpy_r_r149);
    CPy_DecRef(cpy_r_r150);
    CPy_DecRef(cpy_r_r152);
    goto CPyL127;
CPyL203: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL124;
CPyL204: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL129;
CPyL205: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL141;
CPyL206: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r167);
    goto CPyL141;
CPyL207: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r168);
    goto CPyL141;
CPyL208: ;
    CPy_DECREF(cpy_r_r171);
    goto CPyL137;
CPyL209: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL139;
CPyL210: ;
    CPy_XDECREF(cpy_r_r163.f0);
    CPy_XDECREF(cpy_r_r163.f1);
    CPy_XDECREF(cpy_r_r163.f2);
    goto CPyL140;
CPyL211: ;
    CPyTagged_DECREF(cpy_r_r1);
    goto CPyL2;
CPyL212: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL156;
}

PyObject *CPyPy_scope___saved_scope_Scope_gen_____mypyc_generator_helper__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", "arg", 0};
    static CPyArg_Parser parser = {"OOOO:__mypyc_generator_helper__", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value;
    PyObject *obj_traceback;
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_type = obj_type;
    PyObject *arg_value = obj_value;
    PyObject *arg_traceback = obj_traceback;
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_scope___saved_scope_Scope_gen_____mypyc_generator_helper__(arg___mypyc_self__, arg_type, arg_value, arg_traceback, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "saved_scope", 120, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___saved_scope_Scope_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_scope___saved_scope_Scope_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_scope___saved_scope_Scope_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___saved_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.saved_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___saved_scope_Scope_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "__next__", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___saved_scope_Scope_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_scope___saved_scope_Scope_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_scope___saved_scope_Scope_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___saved_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.saved_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_scope___saved_scope_Scope_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "send", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___saved_scope_Scope_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_scope___saved_scope_Scope_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___saved_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.saved_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___saved_scope_Scope_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "__iter__", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___saved_scope_Scope_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_scope___saved_scope_Scope_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_scope___saved_scope_Scope_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___saved_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.saved_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_scope___saved_scope_Scope_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "throw", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___saved_scope_Scope_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[74]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_scope___saved_scope_Scope_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[75]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    CPy_INCREF(cpy_r_r10.f0);
    CPy_INCREF(cpy_r_r10.f1);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5239 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp5239);
    PyObject *__tmp5240 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp5240);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_scope___saved_scope_Scope_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_scope___saved_scope_Scope_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("mypy.scope.saved_scope_Scope_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_scope___saved_scope_Scope_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "close", -1, CPyStatic_scope___globals);
    return NULL;
}

PyObject *CPyDef_scope___Scope___saved_scope(PyObject *cpy_r_self, tuple_T3OOO cpy_r_saved) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    cpy_r_r0 = CPyDef_scope___saved_scope_Scope_env();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 120, CPyStatic_scope___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_self);
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_self != NULL) {
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_self);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_self = cpy_r_self;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 120, CPyStatic_scope___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_saved.f0);
    CPy_INCREF(cpy_r_saved.f1);
    CPy_INCREF(cpy_r_saved.f2);
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_saved.f0 != NULL) {
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_saved.f0);
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_saved.f1);
        CPy_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_saved.f2);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->_saved = cpy_r_saved;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 120, CPyStatic_scope___globals);
        goto CPyL8;
    }
    cpy_r_r3 = CPyDef_scope___saved_scope_Scope_gen();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 120, CPyStatic_scope___globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
    if (((mypy___scope___saved_scope_Scope_genObject *)cpy_r_r3)->___mypyc_env__ != NULL) {
        CPy_DECREF(((mypy___scope___saved_scope_Scope_genObject *)cpy_r_r3)->___mypyc_env__);
    }
    ((mypy___scope___saved_scope_Scope_genObject *)cpy_r_r3)->___mypyc_env__ = cpy_r_r0;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 120, CPyStatic_scope___globals);
        goto CPyL9;
    }
    if (((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ != CPY_INT_TAG) {
        CPyTagged_DECREF(((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__);
    }
    ((mypy___scope___saved_scope_Scope_envObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    cpy_r_r5 = 1;
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/scope.py", "saved_scope", 120, CPyStatic_scope___globals);
        goto CPyL10;
    }
    return cpy_r_r3;
CPyL7: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL8: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
CPyL10: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL7;
}

PyObject *CPyPy_scope___Scope___saved_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"saved", 0};
    static CPyArg_Parser parser = {"O:saved_scope", kwlist, 0};
    PyObject *obj_saved;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_saved)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_scope___Scope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.scope.Scope", obj_self); 
        goto fail;
    }
    tuple_T3OOO arg_saved;
    PyObject *__tmp5241;
    if (unlikely(!(PyTuple_Check(obj_saved) && PyTuple_GET_SIZE(obj_saved) == 3))) {
        __tmp5241 = NULL;
        goto __LL5242;
    }
    if (likely(PyUnicode_Check(PyTuple_GET_ITEM(obj_saved, 0))))
        __tmp5241 = PyTuple_GET_ITEM(obj_saved, 0);
    else {
        __tmp5241 = NULL;
    }
    if (__tmp5241 == NULL) goto __LL5242;
    if ((Py_TYPE(PyTuple_GET_ITEM(obj_saved, 1)) == CPyType_nodes___FakeInfo) || (Py_TYPE(PyTuple_GET_ITEM(obj_saved, 1)) == CPyType_nodes___TypeInfo))
        __tmp5241 = PyTuple_GET_ITEM(obj_saved, 1);
    else {
        __tmp5241 = NULL;
    }
    if (__tmp5241 != NULL) goto __LL5243;
    if (PyTuple_GET_ITEM(obj_saved, 1) == Py_None)
        __tmp5241 = PyTuple_GET_ITEM(obj_saved, 1);
    else {
        __tmp5241 = NULL;
    }
    if (__tmp5241 != NULL) goto __LL5243;
    __tmp5241 = NULL;
__LL5243: ;
    if (__tmp5241 == NULL) goto __LL5242;
    if ((Py_TYPE(PyTuple_GET_ITEM(obj_saved, 2)) == CPyType_nodes___FuncDef) || (Py_TYPE(PyTuple_GET_ITEM(obj_saved, 2)) == CPyType_nodes___LambdaExpr) || (Py_TYPE(PyTuple_GET_ITEM(obj_saved, 2)) == CPyType_nodes___OverloadedFuncDef))
        __tmp5241 = PyTuple_GET_ITEM(obj_saved, 2);
    else {
        __tmp5241 = NULL;
    }
    if (__tmp5241 != NULL) goto __LL5244;
    if (PyTuple_GET_ITEM(obj_saved, 2) == Py_None)
        __tmp5241 = PyTuple_GET_ITEM(obj_saved, 2);
    else {
        __tmp5241 = NULL;
    }
    if (__tmp5241 != NULL) goto __LL5244;
    __tmp5241 = NULL;
__LL5244: ;
    if (__tmp5241 == NULL) goto __LL5242;
    __tmp5241 = obj_saved;
__LL5242: ;
    if (unlikely(__tmp5241 == NULL)) {
        CPy_TypeError("tuple[str, union[mypy.nodes.TypeInfo, None], union[mypy.nodes.FuncBase, None]]", obj_saved); goto fail;
    } else {
        PyObject *__tmp5245 = PyTuple_GET_ITEM(obj_saved, 0);
        PyObject *__tmp5246;
        if (likely(PyUnicode_Check(__tmp5245)))
            __tmp5246 = __tmp5245;
        else {
            CPy_TypeError("str", __tmp5245); 
            __tmp5246 = NULL;
        }
        arg_saved.f0 = __tmp5246;
        PyObject *__tmp5247 = PyTuple_GET_ITEM(obj_saved, 1);
        PyObject *__tmp5248;
        if ((Py_TYPE(__tmp5247) == CPyType_nodes___FakeInfo) || (Py_TYPE(__tmp5247) == CPyType_nodes___TypeInfo))
            __tmp5248 = __tmp5247;
        else {
            __tmp5248 = NULL;
        }
        if (__tmp5248 != NULL) goto __LL5249;
        if (__tmp5247 == Py_None)
            __tmp5248 = __tmp5247;
        else {
            __tmp5248 = NULL;
        }
        if (__tmp5248 != NULL) goto __LL5249;
        CPy_TypeError("mypy.nodes.TypeInfo or None", __tmp5247); 
        __tmp5248 = NULL;
__LL5249: ;
        arg_saved.f1 = __tmp5248;
        PyObject *__tmp5250 = PyTuple_GET_ITEM(obj_saved, 2);
        PyObject *__tmp5251;
        if ((Py_TYPE(__tmp5250) == CPyType_nodes___FuncDef) || (Py_TYPE(__tmp5250) == CPyType_nodes___LambdaExpr) || (Py_TYPE(__tmp5250) == CPyType_nodes___OverloadedFuncDef))
            __tmp5251 = __tmp5250;
        else {
            __tmp5251 = NULL;
        }
        if (__tmp5251 != NULL) goto __LL5252;
        if (__tmp5250 == Py_None)
            __tmp5251 = __tmp5250;
        else {
            __tmp5251 = NULL;
        }
        if (__tmp5251 != NULL) goto __LL5252;
        CPy_TypeError("mypy.nodes.FuncBase or None", __tmp5250); 
        __tmp5251 = NULL;
__LL5252: ;
        arg_saved.f2 = __tmp5251;
    }
    PyObject *retval = CPyDef_scope___Scope___saved_scope(arg_self, arg_saved);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/scope.py", "saved_scope", 120, CPyStatic_scope___globals);
    return NULL;
}

char CPyDef_scope_____top_level__(void) {
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
    tuple_T3OOO cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    int32_t cpy_r_r45;
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
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    int32_t cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    int32_t cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject **cpy_r_r72;
    PyObject *cpy_r_r73;
    PyObject *cpy_r_r74;
    int32_t cpy_r_r75;
    char cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject **cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    int32_t cpy_r_r87;
    char cpy_r_r88;
    PyObject *cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject **cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    int32_t cpy_r_r99;
    char cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    PyObject *cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject **cpy_r_r108;
    PyObject *cpy_r_r109;
    PyObject *cpy_r_r110;
    int32_t cpy_r_r111;
    char cpy_r_r112;
    char cpy_r_r113;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", -1, CPyStatic_scope___globals);
        goto CPyL37;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_scope___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 6, CPyStatic_scope___globals);
        goto CPyL37;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9172]; /* ('contextmanager', 'nullcontext') */
    cpy_r_r10 = CPyStatics[78]; /* 'contextlib' */
    cpy_r_r11 = CPyStatic_scope___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 8, CPyStatic_scope___globals);
        goto CPyL37;
    }
    CPyModule_contextlib = cpy_r_r12;
    CPy_INCREF(CPyModule_contextlib);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9665]; /* ('Iterator', 'Optional', 'Tuple') */
    cpy_r_r14 = CPyStatics[21]; /* 'typing' */
    cpy_r_r15 = CPyStatic_scope___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 9, CPyStatic_scope___globals);
        goto CPyL37;
    }
    CPyModule_typing = cpy_r_r16;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = CPyStatics[9086]; /* ('TypeAlias',) */
    cpy_r_r18 = CPyStatics[9087]; /* ('_TypeAlias',) */
    cpy_r_r19 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r20 = CPyStatic_scope___globals;
    cpy_r_r21 = CPyImport_ImportFromMany(cpy_r_r19, cpy_r_r17, cpy_r_r18, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 10, CPyStatic_scope___globals);
        goto CPyL37;
    }
    CPyModule_typing_extensions = cpy_r_r21;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r22 = CPyStatics[9666]; /* ('FuncBase', 'TypeInfo') */
    cpy_r_r23 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r24 = CPyStatic_scope___globals;
    cpy_r_r25 = CPyImport_ImportFromMany(cpy_r_r23, cpy_r_r22, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 12, CPyStatic_scope___globals);
        goto CPyL37;
    }
    CPyModule_mypy___nodes = cpy_r_r25;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r26 = CPyStatic_scope___globals;
    cpy_r_r27 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r28 = CPyDict_GetItem(cpy_r_r26, cpy_r_r27);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 14, CPyStatic_scope___globals);
        goto CPyL37;
    }
    cpy_r_r29 = (PyObject *)&PyUnicode_Type;
    cpy_r_r30 = CPyStatic_scope___globals;
    cpy_r_r31 = CPyStatics[82]; /* 'Optional' */
    cpy_r_r32 = CPyDict_GetItem(cpy_r_r30, cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 14, CPyStatic_scope___globals);
        goto CPyL38;
    }
    cpy_r_r33 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r34 = PyObject_GetItem(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 14, CPyStatic_scope___globals);
        goto CPyL38;
    }
    cpy_r_r35 = CPyStatic_scope___globals;
    cpy_r_r36 = CPyStatics[82]; /* 'Optional' */
    cpy_r_r37 = CPyDict_GetItem(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 14, CPyStatic_scope___globals);
        goto CPyL39;
    }
    cpy_r_r38 = (PyObject *)CPyType_nodes___FuncBase;
    cpy_r_r39 = PyObject_GetItem(cpy_r_r37, cpy_r_r38);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 14, CPyStatic_scope___globals);
        goto CPyL39;
    }
    cpy_r_r40.f0 = cpy_r_r29;
    cpy_r_r40.f1 = cpy_r_r34;
    cpy_r_r40.f2 = cpy_r_r39;
    CPy_INCREF(cpy_r_r40.f0);
    CPy_INCREF(cpy_r_r40.f1);
    CPy_INCREF(cpy_r_r40.f2);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r39);
    cpy_r_r41 = PyTuple_New(3);
    if (unlikely(cpy_r_r41 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp5253 = cpy_r_r40.f0;
    PyTuple_SET_ITEM(cpy_r_r41, 0, __tmp5253);
    PyObject *__tmp5254 = cpy_r_r40.f1;
    PyTuple_SET_ITEM(cpy_r_r41, 1, __tmp5254);
    PyObject *__tmp5255 = cpy_r_r40.f2;
    PyTuple_SET_ITEM(cpy_r_r41, 2, __tmp5255);
    cpy_r_r42 = PyObject_GetItem(cpy_r_r28, cpy_r_r41);
    CPy_DECREF(cpy_r_r28);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 14, CPyStatic_scope___globals);
        goto CPyL37;
    }
    cpy_r_r43 = CPyStatic_scope___globals;
    cpy_r_r44 = CPyStatics[4819]; /* 'SavedScope' */
    cpy_r_r45 = CPyDict_SetItem(cpy_r_r43, cpy_r_r44, cpy_r_r42);
    CPy_DECREF(cpy_r_r42);
    cpy_r_r46 = cpy_r_r45 >= 0;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 14, CPyStatic_scope___globals);
        goto CPyL37;
    }
    cpy_r_r47 = NULL;
    cpy_r_r48 = CPyStatics[1010]; /* 'mypy.scope' */
    cpy_r_r49 = (PyObject *)CPyType_scope___Scope_template;
    cpy_r_r50 = CPyType_FromTemplate(cpy_r_r49, cpy_r_r47, cpy_r_r48);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 17, CPyStatic_scope___globals);
        goto CPyL37;
    }
    cpy_r_r51 = CPyDef_scope___Scope_trait_vtable_setup();
    if (unlikely(cpy_r_r51 == 2)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", -1, CPyStatic_scope___globals);
        goto CPyL40;
    }
    cpy_r_r52 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r53 = CPyStatics[408]; /* 'module' */
    cpy_r_r54 = CPyStatics[4733]; /* 'classes' */
    cpy_r_r55 = CPyStatics[1713]; /* 'function' */
    cpy_r_r56 = CPyStatics[4820]; /* 'functions' */
    cpy_r_r57 = CPyStatics[4821]; /* 'ignored' */
    cpy_r_r58 = PyTuple_Pack(5, cpy_r_r53, cpy_r_r54, cpy_r_r55, cpy_r_r56, cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 17, CPyStatic_scope___globals);
        goto CPyL40;
    }
    cpy_r_r59 = PyObject_SetAttr(cpy_r_r50, cpy_r_r52, cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    cpy_r_r60 = cpy_r_r59 >= 0;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 17, CPyStatic_scope___globals);
        goto CPyL40;
    }
    CPyType_scope___Scope = (PyTypeObject *)cpy_r_r50;
    CPy_INCREF(CPyType_scope___Scope);
    cpy_r_r61 = CPyStatic_scope___globals;
    cpy_r_r62 = CPyStatics[1009]; /* 'Scope' */
    cpy_r_r63 = CPyDict_SetItem(cpy_r_r61, cpy_r_r62, cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    cpy_r_r64 = cpy_r_r63 >= 0;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 17, CPyStatic_scope___globals);
        goto CPyL37;
    }
    cpy_r_r65 = (PyObject *)CPyType_scope___Scope;
    cpy_r_r66 = CPyStatics[693]; /* 'module_scope' */
    cpy_r_r67 = CPyObject_GetAttr(cpy_r_r65, cpy_r_r66);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 58, CPyStatic_scope___globals);
        goto CPyL37;
    }
    cpy_r_r68 = CPyStatic_scope___globals;
    cpy_r_r69 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r70 = CPyDict_GetItem(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 57, CPyStatic_scope___globals);
        goto CPyL41;
    }
    PyObject *cpy_r_r71[1] = {cpy_r_r67};
    cpy_r_r72 = (PyObject **)&cpy_r_r71;
    cpy_r_r73 = _PyObject_Vectorcall(cpy_r_r70, cpy_r_r72, 1, 0);
    CPy_DECREF(cpy_r_r70);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 58, CPyStatic_scope___globals);
        goto CPyL41;
    }
    CPy_DECREF(cpy_r_r67);
    cpy_r_r74 = CPyStatics[693]; /* 'module_scope' */
    cpy_r_r75 = PyObject_SetAttr(cpy_r_r65, cpy_r_r74, cpy_r_r73);
    CPy_DECREF(cpy_r_r73);
    cpy_r_r76 = cpy_r_r75 >= 0;
    if (unlikely(!cpy_r_r76)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 58, CPyStatic_scope___globals);
        goto CPyL37;
    }
    cpy_r_r77 = (PyObject *)CPyType_scope___Scope;
    cpy_r_r78 = CPyStatics[705]; /* 'function_scope' */
    cpy_r_r79 = CPyObject_GetAttr(cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 68, CPyStatic_scope___globals);
        goto CPyL37;
    }
    cpy_r_r80 = CPyStatic_scope___globals;
    cpy_r_r81 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r82 = CPyDict_GetItem(cpy_r_r80, cpy_r_r81);
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 67, CPyStatic_scope___globals);
        goto CPyL42;
    }
    PyObject *cpy_r_r83[1] = {cpy_r_r79};
    cpy_r_r84 = (PyObject **)&cpy_r_r83;
    cpy_r_r85 = _PyObject_Vectorcall(cpy_r_r82, cpy_r_r84, 1, 0);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 68, CPyStatic_scope___globals);
        goto CPyL42;
    }
    CPy_DECREF(cpy_r_r79);
    cpy_r_r86 = CPyStatics[705]; /* 'function_scope' */
    cpy_r_r87 = PyObject_SetAttr(cpy_r_r77, cpy_r_r86, cpy_r_r85);
    CPy_DECREF(cpy_r_r85);
    cpy_r_r88 = cpy_r_r87 >= 0;
    if (unlikely(!cpy_r_r88)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 68, CPyStatic_scope___globals);
        goto CPyL37;
    }
    cpy_r_r89 = (PyObject *)CPyType_scope___Scope;
    cpy_r_r90 = CPyStatics[698]; /* 'class_scope' */
    cpy_r_r91 = CPyObject_GetAttr(cpy_r_r89, cpy_r_r90);
    if (unlikely(cpy_r_r91 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 106, CPyStatic_scope___globals);
        goto CPyL37;
    }
    cpy_r_r92 = CPyStatic_scope___globals;
    cpy_r_r93 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r94 = CPyDict_GetItem(cpy_r_r92, cpy_r_r93);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 105, CPyStatic_scope___globals);
        goto CPyL43;
    }
    PyObject *cpy_r_r95[1] = {cpy_r_r91};
    cpy_r_r96 = (PyObject **)&cpy_r_r95;
    cpy_r_r97 = _PyObject_Vectorcall(cpy_r_r94, cpy_r_r96, 1, 0);
    CPy_DECREF(cpy_r_r94);
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 106, CPyStatic_scope___globals);
        goto CPyL43;
    }
    CPy_DECREF(cpy_r_r91);
    cpy_r_r98 = CPyStatics[698]; /* 'class_scope' */
    cpy_r_r99 = PyObject_SetAttr(cpy_r_r89, cpy_r_r98, cpy_r_r97);
    CPy_DECREF(cpy_r_r97);
    cpy_r_r100 = cpy_r_r99 >= 0;
    if (unlikely(!cpy_r_r100)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 106, CPyStatic_scope___globals);
        goto CPyL37;
    }
    cpy_r_r101 = (PyObject *)CPyType_scope___Scope;
    cpy_r_r102 = CPyStatics[4822]; /* 'saved_scope' */
    cpy_r_r103 = CPyObject_GetAttr(cpy_r_r101, cpy_r_r102);
    if (unlikely(cpy_r_r103 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 120, CPyStatic_scope___globals);
        goto CPyL37;
    }
    cpy_r_r104 = CPyStatic_scope___globals;
    cpy_r_r105 = CPyStatics[77]; /* 'contextmanager' */
    cpy_r_r106 = CPyDict_GetItem(cpy_r_r104, cpy_r_r105);
    if (unlikely(cpy_r_r106 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 119, CPyStatic_scope___globals);
        goto CPyL44;
    }
    PyObject *cpy_r_r107[1] = {cpy_r_r103};
    cpy_r_r108 = (PyObject **)&cpy_r_r107;
    cpy_r_r109 = _PyObject_Vectorcall(cpy_r_r106, cpy_r_r108, 1, 0);
    CPy_DECREF(cpy_r_r106);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 120, CPyStatic_scope___globals);
        goto CPyL44;
    }
    CPy_DECREF(cpy_r_r103);
    cpy_r_r110 = CPyStatics[4822]; /* 'saved_scope' */
    cpy_r_r111 = PyObject_SetAttr(cpy_r_r101, cpy_r_r110, cpy_r_r109);
    CPy_DECREF(cpy_r_r109);
    cpy_r_r112 = cpy_r_r111 >= 0;
    if (unlikely(!cpy_r_r112)) {
        CPy_AddTraceback("mypy/scope.py", "<module>", 120, CPyStatic_scope___globals);
        goto CPyL37;
    }
    return 1;
CPyL37: ;
    cpy_r_r113 = 2;
    return cpy_r_r113;
CPyL38: ;
    CPy_DecRef(cpy_r_r28);
    goto CPyL37;
CPyL39: ;
    CPy_DecRef(cpy_r_r28);
    CPy_DecRef(cpy_r_r34);
    goto CPyL37;
CPyL40: ;
    CPy_DecRef(cpy_r_r50);
    goto CPyL37;
CPyL41: ;
    CPy_DecRef(cpy_r_r67);
    goto CPyL37;
CPyL42: ;
    CPy_DecRef(cpy_r_r79);
    goto CPyL37;
CPyL43: ;
    CPy_DecRef(cpy_r_r91);
    goto CPyL37;
CPyL44: ;
    CPy_DecRef(cpy_r_r103);
    goto CPyL37;
}
