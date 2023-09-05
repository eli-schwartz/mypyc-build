#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
tvar_scope___TypeVarLikeScope_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *tvar_scope___TypeVarLikeScope_setup(PyTypeObject *type);
PyObject *CPyDef_tvar_scope___TypeVarLikeScope(PyObject *cpy_r_parent, char cpy_r_is_class_scope, PyObject *cpy_r_prohibited, PyObject *cpy_r_namespace);

static PyObject *
tvar_scope___TypeVarLikeScope_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_tvar_scope___TypeVarLikeScope) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = tvar_scope___TypeVarLikeScope_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_tvar_scope___TypeVarLikeScope_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
tvar_scope___TypeVarLikeScope_traverse(mypy___tvar_scope___TypeVarLikeScopeObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_scope);
    Py_VISIT(self->_parent);
    if (CPyTagged_CheckLong(self->_func_id)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_func_id));
    }
    if (CPyTagged_CheckLong(self->_class_id)) {
        Py_VISIT(CPyTagged_LongAsObject(self->_class_id));
    }
    Py_VISIT(self->_prohibited);
    Py_VISIT(self->_namespace);
    return 0;
}

static int
tvar_scope___TypeVarLikeScope_clear(mypy___tvar_scope___TypeVarLikeScopeObject *self)
{
    Py_CLEAR(self->_scope);
    Py_CLEAR(self->_parent);
    if (CPyTagged_CheckLong(self->_func_id)) {
        CPyTagged __tmp = self->_func_id;
        self->_func_id = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->_class_id)) {
        CPyTagged __tmp = self->_class_id;
        self->_class_id = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->_prohibited);
    Py_CLEAR(self->_namespace);
    return 0;
}

static void
tvar_scope___TypeVarLikeScope_dealloc(mypy___tvar_scope___TypeVarLikeScopeObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, tvar_scope___TypeVarLikeScope_dealloc)
    tvar_scope___TypeVarLikeScope_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem tvar_scope___TypeVarLikeScope_vtable[10];
static bool
CPyDef_tvar_scope___TypeVarLikeScope_trait_vtable_setup(void)
{
    CPyVTableItem tvar_scope___TypeVarLikeScope_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_tvar_scope___TypeVarLikeScope_____init__,
        (CPyVTableItem)CPyDef_tvar_scope___TypeVarLikeScope___get_function_scope,
        (CPyVTableItem)CPyDef_tvar_scope___TypeVarLikeScope___allow_binding,
        (CPyVTableItem)CPyDef_tvar_scope___TypeVarLikeScope___method_frame,
        (CPyVTableItem)CPyDef_tvar_scope___TypeVarLikeScope___class_frame,
        (CPyVTableItem)CPyDef_tvar_scope___TypeVarLikeScope___new_unique_func_id,
        (CPyVTableItem)CPyDef_tvar_scope___TypeVarLikeScope___bind_new,
        (CPyVTableItem)CPyDef_tvar_scope___TypeVarLikeScope___bind_existing,
        (CPyVTableItem)CPyDef_tvar_scope___TypeVarLikeScope___get_binding,
        (CPyVTableItem)CPyDef_tvar_scope___TypeVarLikeScope_____str__,
    };
    memcpy(tvar_scope___TypeVarLikeScope_vtable, tvar_scope___TypeVarLikeScope_vtable_scratch, sizeof(tvar_scope___TypeVarLikeScope_vtable));
    return 1;
}

static PyObject *
tvar_scope___TypeVarLikeScope_get_scope(mypy___tvar_scope___TypeVarLikeScopeObject *self, void *closure);
static int
tvar_scope___TypeVarLikeScope_set_scope(mypy___tvar_scope___TypeVarLikeScopeObject *self, PyObject *value, void *closure);
static PyObject *
tvar_scope___TypeVarLikeScope_get_parent(mypy___tvar_scope___TypeVarLikeScopeObject *self, void *closure);
static int
tvar_scope___TypeVarLikeScope_set_parent(mypy___tvar_scope___TypeVarLikeScopeObject *self, PyObject *value, void *closure);
static PyObject *
tvar_scope___TypeVarLikeScope_get_func_id(mypy___tvar_scope___TypeVarLikeScopeObject *self, void *closure);
static int
tvar_scope___TypeVarLikeScope_set_func_id(mypy___tvar_scope___TypeVarLikeScopeObject *self, PyObject *value, void *closure);
static PyObject *
tvar_scope___TypeVarLikeScope_get_class_id(mypy___tvar_scope___TypeVarLikeScopeObject *self, void *closure);
static int
tvar_scope___TypeVarLikeScope_set_class_id(mypy___tvar_scope___TypeVarLikeScopeObject *self, PyObject *value, void *closure);
static PyObject *
tvar_scope___TypeVarLikeScope_get_is_class_scope(mypy___tvar_scope___TypeVarLikeScopeObject *self, void *closure);
static int
tvar_scope___TypeVarLikeScope_set_is_class_scope(mypy___tvar_scope___TypeVarLikeScopeObject *self, PyObject *value, void *closure);
static PyObject *
tvar_scope___TypeVarLikeScope_get_prohibited(mypy___tvar_scope___TypeVarLikeScopeObject *self, void *closure);
static int
tvar_scope___TypeVarLikeScope_set_prohibited(mypy___tvar_scope___TypeVarLikeScopeObject *self, PyObject *value, void *closure);
static PyObject *
tvar_scope___TypeVarLikeScope_get_namespace(mypy___tvar_scope___TypeVarLikeScopeObject *self, void *closure);
static int
tvar_scope___TypeVarLikeScope_set_namespace(mypy___tvar_scope___TypeVarLikeScopeObject *self, PyObject *value, void *closure);

static PyGetSetDef tvar_scope___TypeVarLikeScope_getseters[] = {
    {"scope",
     (getter)tvar_scope___TypeVarLikeScope_get_scope, (setter)tvar_scope___TypeVarLikeScope_set_scope,
     NULL, NULL},
    {"parent",
     (getter)tvar_scope___TypeVarLikeScope_get_parent, (setter)tvar_scope___TypeVarLikeScope_set_parent,
     NULL, NULL},
    {"func_id",
     (getter)tvar_scope___TypeVarLikeScope_get_func_id, (setter)tvar_scope___TypeVarLikeScope_set_func_id,
     NULL, NULL},
    {"class_id",
     (getter)tvar_scope___TypeVarLikeScope_get_class_id, (setter)tvar_scope___TypeVarLikeScope_set_class_id,
     NULL, NULL},
    {"is_class_scope",
     (getter)tvar_scope___TypeVarLikeScope_get_is_class_scope, (setter)tvar_scope___TypeVarLikeScope_set_is_class_scope,
     NULL, NULL},
    {"prohibited",
     (getter)tvar_scope___TypeVarLikeScope_get_prohibited, (setter)tvar_scope___TypeVarLikeScope_set_prohibited,
     NULL, NULL},
    {"namespace",
     (getter)tvar_scope___TypeVarLikeScope_get_namespace, (setter)tvar_scope___TypeVarLikeScope_set_namespace,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef tvar_scope___TypeVarLikeScope_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_tvar_scope___TypeVarLikeScope_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_function_scope",
     (PyCFunction)CPyPy_tvar_scope___TypeVarLikeScope___get_function_scope,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"allow_binding",
     (PyCFunction)CPyPy_tvar_scope___TypeVarLikeScope___allow_binding,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"method_frame",
     (PyCFunction)CPyPy_tvar_scope___TypeVarLikeScope___method_frame,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"class_frame",
     (PyCFunction)CPyPy_tvar_scope___TypeVarLikeScope___class_frame,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"new_unique_func_id",
     (PyCFunction)CPyPy_tvar_scope___TypeVarLikeScope___new_unique_func_id,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"bind_new",
     (PyCFunction)CPyPy_tvar_scope___TypeVarLikeScope___bind_new,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"bind_existing",
     (PyCFunction)CPyPy_tvar_scope___TypeVarLikeScope___bind_existing,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_binding",
     (PyCFunction)CPyPy_tvar_scope___TypeVarLikeScope___get_binding,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__str__",
     (PyCFunction)CPyPy_tvar_scope___TypeVarLikeScope_____str__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_tvar_scope___TypeVarLikeScope_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeVarLikeScope",
    .tp_new = tvar_scope___TypeVarLikeScope_new,
    .tp_dealloc = (destructor)tvar_scope___TypeVarLikeScope_dealloc,
    .tp_traverse = (traverseproc)tvar_scope___TypeVarLikeScope_traverse,
    .tp_clear = (inquiry)tvar_scope___TypeVarLikeScope_clear,
    .tp_getset = tvar_scope___TypeVarLikeScope_getseters,
    .tp_methods = tvar_scope___TypeVarLikeScope_methods,
    .tp_init = tvar_scope___TypeVarLikeScope_init,
    .tp_str = CPyDef_tvar_scope___TypeVarLikeScope_____str__,
    .tp_basicsize = sizeof(mypy___tvar_scope___TypeVarLikeScopeObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_tvar_scope___TypeVarLikeScope_template = &CPyType_tvar_scope___TypeVarLikeScope_template_;

static PyObject *
tvar_scope___TypeVarLikeScope_setup(PyTypeObject *type)
{
    mypy___tvar_scope___TypeVarLikeScopeObject *self;
    self = (mypy___tvar_scope___TypeVarLikeScopeObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = tvar_scope___TypeVarLikeScope_vtable;
    self->_func_id = CPY_INT_TAG;
    self->_class_id = CPY_INT_TAG;
    self->_is_class_scope = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_tvar_scope___TypeVarLikeScope(PyObject *cpy_r_parent, char cpy_r_is_class_scope, PyObject *cpy_r_prohibited, PyObject *cpy_r_namespace)
{
    PyObject *self = tvar_scope___TypeVarLikeScope_setup(CPyType_tvar_scope___TypeVarLikeScope);
    if (self == NULL)
        return NULL;
    char res = CPyDef_tvar_scope___TypeVarLikeScope_____init__(self, cpy_r_parent, cpy_r_is_class_scope, cpy_r_prohibited, cpy_r_namespace);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
tvar_scope___TypeVarLikeScope_get_scope(mypy___tvar_scope___TypeVarLikeScopeObject *self, void *closure)
{
    if (unlikely(self->_scope == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'scope' of 'TypeVarLikeScope' undefined");
        return NULL;
    }
    CPy_INCREF(self->_scope);
    PyObject *retval = self->_scope;
    return retval;
}

static int
tvar_scope___TypeVarLikeScope_set_scope(mypy___tvar_scope___TypeVarLikeScopeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeVarLikeScope' object attribute 'scope' cannot be deleted");
        return -1;
    }
    if (self->_scope != NULL) {
        CPy_DECREF(self->_scope);
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
    self->_scope = tmp;
    return 0;
}

static PyObject *
tvar_scope___TypeVarLikeScope_get_parent(mypy___tvar_scope___TypeVarLikeScopeObject *self, void *closure)
{
    if (unlikely(self->_parent == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'parent' of 'TypeVarLikeScope' undefined");
        return NULL;
    }
    CPy_INCREF(self->_parent);
    PyObject *retval = self->_parent;
    return retval;
}

static int
tvar_scope___TypeVarLikeScope_set_parent(mypy___tvar_scope___TypeVarLikeScopeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeVarLikeScope' object attribute 'parent' cannot be deleted");
        return -1;
    }
    if (self->_parent != NULL) {
        CPy_DECREF(self->_parent);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_tvar_scope___TypeVarLikeScope)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL7564;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL7564;
    CPy_TypeError("mypy.tvar_scope.TypeVarLikeScope or None", value); 
    tmp = NULL;
__LL7564: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_parent = tmp;
    return 0;
}

static PyObject *
tvar_scope___TypeVarLikeScope_get_func_id(mypy___tvar_scope___TypeVarLikeScopeObject *self, void *closure)
{
    if (unlikely(self->_func_id == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'func_id' of 'TypeVarLikeScope' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_func_id);
    PyObject *retval = CPyTagged_StealAsObject(self->_func_id);
    return retval;
}

static int
tvar_scope___TypeVarLikeScope_set_func_id(mypy___tvar_scope___TypeVarLikeScopeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeVarLikeScope' object attribute 'func_id' cannot be deleted");
        return -1;
    }
    if (self->_func_id != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_func_id);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_func_id = tmp;
    return 0;
}

static PyObject *
tvar_scope___TypeVarLikeScope_get_class_id(mypy___tvar_scope___TypeVarLikeScopeObject *self, void *closure)
{
    if (unlikely(self->_class_id == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'class_id' of 'TypeVarLikeScope' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->_class_id);
    PyObject *retval = CPyTagged_StealAsObject(self->_class_id);
    return retval;
}

static int
tvar_scope___TypeVarLikeScope_set_class_id(mypy___tvar_scope___TypeVarLikeScopeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeVarLikeScope' object attribute 'class_id' cannot be deleted");
        return -1;
    }
    if (self->_class_id != CPY_INT_TAG) {
        CPyTagged_DECREF(self->_class_id);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->_class_id = tmp;
    return 0;
}

static PyObject *
tvar_scope___TypeVarLikeScope_get_is_class_scope(mypy___tvar_scope___TypeVarLikeScopeObject *self, void *closure)
{
    PyObject *retval = self->_is_class_scope ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
tvar_scope___TypeVarLikeScope_set_is_class_scope(mypy___tvar_scope___TypeVarLikeScopeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeVarLikeScope' object attribute 'is_class_scope' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_is_class_scope = tmp;
    return 0;
}

static PyObject *
tvar_scope___TypeVarLikeScope_get_prohibited(mypy___tvar_scope___TypeVarLikeScopeObject *self, void *closure)
{
    if (unlikely(self->_prohibited == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'prohibited' of 'TypeVarLikeScope' undefined");
        return NULL;
    }
    CPy_INCREF(self->_prohibited);
    PyObject *retval = self->_prohibited;
    return retval;
}

static int
tvar_scope___TypeVarLikeScope_set_prohibited(mypy___tvar_scope___TypeVarLikeScopeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeVarLikeScope' object attribute 'prohibited' cannot be deleted");
        return -1;
    }
    if (self->_prohibited != NULL) {
        CPy_DECREF(self->_prohibited);
    }
    PyObject *tmp;
    if (Py_TYPE(value) == CPyType_tvar_scope___TypeVarLikeScope)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL7565;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL7565;
    CPy_TypeError("mypy.tvar_scope.TypeVarLikeScope or None", value); 
    tmp = NULL;
__LL7565: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_prohibited = tmp;
    return 0;
}

static PyObject *
tvar_scope___TypeVarLikeScope_get_namespace(mypy___tvar_scope___TypeVarLikeScopeObject *self, void *closure)
{
    if (unlikely(self->_namespace == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'namespace' of 'TypeVarLikeScope' undefined");
        return NULL;
    }
    CPy_INCREF(self->_namespace);
    PyObject *retval = self->_namespace;
    return retval;
}

static int
tvar_scope___TypeVarLikeScope_set_namespace(mypy___tvar_scope___TypeVarLikeScopeObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeVarLikeScope' object attribute 'namespace' cannot be deleted");
        return -1;
    }
    if (self->_namespace != NULL) {
        CPy_DECREF(self->_namespace);
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
    self->_namespace = tmp;
    return 0;
}
static PyMethodDef tvar_scopemodule_methods[] = {
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef tvar_scopemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.tvar_scope",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    tvar_scopemodule_methods
};

PyObject *CPyInit_mypy___tvar_scope(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___tvar_scope_internal) {
        Py_INCREF(CPyModule_mypy___tvar_scope_internal);
        return CPyModule_mypy___tvar_scope_internal;
    }
    CPyModule_mypy___tvar_scope_internal = PyModule_Create(&tvar_scopemodule);
    if (unlikely(CPyModule_mypy___tvar_scope_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___tvar_scope_internal, "__name__");
    CPyStatic_tvar_scope___globals = PyModule_GetDict(CPyModule_mypy___tvar_scope_internal);
    if (unlikely(CPyStatic_tvar_scope___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_tvar_scope_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___tvar_scope_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___tvar_scope_internal);
    Py_CLEAR(modname);
    Py_CLEAR(CPyType_tvar_scope___TypeVarLikeScope);
    return NULL;
}

char CPyDef_tvar_scope___TypeVarLikeScope_____init__(PyObject *cpy_r_self, PyObject *cpy_r_parent, char cpy_r_is_class_scope, PyObject *cpy_r_prohibited, PyObject *cpy_r_namespace) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    CPyTagged cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    if (cpy_r_parent != NULL) goto CPyL15;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_parent = cpy_r_r0;
CPyL2: ;
    if (cpy_r_is_class_scope != 2) goto CPyL4;
    cpy_r_is_class_scope = 0;
CPyL4: ;
    if (cpy_r_prohibited != NULL) goto CPyL16;
    cpy_r_r1 = Py_None;
    CPy_INCREF(cpy_r_r1);
    cpy_r_prohibited = cpy_r_r1;
CPyL6: ;
    if (cpy_r_namespace != NULL) goto CPyL17;
    cpy_r_r2 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r2);
    cpy_r_namespace = cpy_r_r2;
CPyL8: ;
    cpy_r_r3 = PyDict_New();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "__init__", 41, CPyStatic_tvar_scope___globals);
        goto CPyL18;
    }
    ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_scope = cpy_r_r3;
    CPy_INCREF(cpy_r_parent);
    ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_parent = cpy_r_parent;
    ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_func_id = 0;
    ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_class_id = 0;
    ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_is_class_scope = cpy_r_is_class_scope;
    ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_prohibited = cpy_r_prohibited;
    ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_namespace = cpy_r_namespace;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_parent != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL19;
    if (likely(cpy_r_parent != Py_None))
        cpy_r_r6 = cpy_r_parent;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "__init__", 49, CPyStatic_tvar_scope___globals, "mypy.tvar_scope.TypeVarLikeScope", cpy_r_parent);
        goto CPyL20;
    }
    cpy_r_r7 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_r6)->_func_id;
    CPyTagged_INCREF(cpy_r_r7);
    CPyTagged_DECREF(((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_func_id);
    ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_func_id = cpy_r_r7;
    if (likely(cpy_r_parent != Py_None))
        cpy_r_r9 = cpy_r_parent;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "__init__", 50, CPyStatic_tvar_scope___globals, "mypy.tvar_scope.TypeVarLikeScope", cpy_r_parent);
        goto CPyL20;
    }
    cpy_r_r10 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_r9)->_class_id;
    CPyTagged_INCREF(cpy_r_r10);
    CPy_DECREF(cpy_r_parent);
    CPyTagged_DECREF(((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_class_id);
    ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_class_id = cpy_r_r10;
CPyL13: ;
    return 1;
CPyL14: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL15: ;
    CPy_INCREF(cpy_r_parent);
    goto CPyL2;
CPyL16: ;
    CPy_INCREF(cpy_r_prohibited);
    goto CPyL6;
CPyL17: ;
    CPy_INCREF(cpy_r_namespace);
    goto CPyL8;
CPyL18: ;
    CPy_DecRef(cpy_r_parent);
    CPy_DecRef(cpy_r_prohibited);
    CPy_DecRef(cpy_r_namespace);
    goto CPyL14;
CPyL19: ;
    CPy_DECREF(cpy_r_parent);
    goto CPyL13;
CPyL20: ;
    CPy_DecRef(cpy_r_parent);
    goto CPyL14;
}

PyObject *CPyPy_tvar_scope___TypeVarLikeScope_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"parent", "is_class_scope", "prohibited", "namespace", 0};
    PyObject *obj_parent = NULL;
    PyObject *obj_is_class_scope = NULL;
    PyObject *obj_prohibited = NULL;
    PyObject *obj_namespace = NULL;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "|OOOO", "__init__", kwlist, &obj_parent, &obj_is_class_scope, &obj_prohibited, &obj_namespace)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_tvar_scope___TypeVarLikeScope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.tvar_scope.TypeVarLikeScope", obj_self); 
        goto fail;
    }
    PyObject *arg_parent;
    if (obj_parent == NULL) {
        arg_parent = NULL;
        goto __LL7566;
    }
    if (Py_TYPE(obj_parent) == CPyType_tvar_scope___TypeVarLikeScope)
        arg_parent = obj_parent;
    else {
        arg_parent = NULL;
    }
    if (arg_parent != NULL) goto __LL7566;
    if (obj_parent == Py_None)
        arg_parent = obj_parent;
    else {
        arg_parent = NULL;
    }
    if (arg_parent != NULL) goto __LL7566;
    CPy_TypeError("mypy.tvar_scope.TypeVarLikeScope or None", obj_parent); 
    goto fail;
__LL7566: ;
    char arg_is_class_scope;
    if (obj_is_class_scope == NULL) {
        arg_is_class_scope = 2;
    } else if (unlikely(!PyBool_Check(obj_is_class_scope))) {
        CPy_TypeError("bool", obj_is_class_scope); goto fail;
    } else
        arg_is_class_scope = obj_is_class_scope == Py_True;
    PyObject *arg_prohibited;
    if (obj_prohibited == NULL) {
        arg_prohibited = NULL;
        goto __LL7567;
    }
    if (Py_TYPE(obj_prohibited) == CPyType_tvar_scope___TypeVarLikeScope)
        arg_prohibited = obj_prohibited;
    else {
        arg_prohibited = NULL;
    }
    if (arg_prohibited != NULL) goto __LL7567;
    if (obj_prohibited == Py_None)
        arg_prohibited = obj_prohibited;
    else {
        arg_prohibited = NULL;
    }
    if (arg_prohibited != NULL) goto __LL7567;
    CPy_TypeError("mypy.tvar_scope.TypeVarLikeScope or None", obj_prohibited); 
    goto fail;
__LL7567: ;
    PyObject *arg_namespace;
    if (obj_namespace == NULL) {
        arg_namespace = NULL;
    } else if (likely(PyUnicode_Check(obj_namespace)))
        arg_namespace = obj_namespace;
    else {
        CPy_TypeError("str", obj_namespace); 
        goto fail;
    }
    char retval = CPyDef_tvar_scope___TypeVarLikeScope_____init__(arg_self, arg_parent, arg_is_class_scope, arg_prohibited, arg_namespace);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/tvar_scope.py", "__init__", 26, CPyStatic_tvar_scope___globals);
    return NULL;
}

PyObject *CPyDef_tvar_scope___TypeVarLikeScope___get_function_scope(PyObject *cpy_r_self) {
    PyObject *cpy_r_it;
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPy_INCREF(cpy_r_self);
    cpy_r_it = cpy_r_self;
CPyL1: ;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_it != cpy_r_r0;
    if (!cpy_r_r1) goto CPyL6;
    if (likely(cpy_r_it != Py_None))
        cpy_r_r2 = cpy_r_it;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "get_function_scope", 55, CPyStatic_tvar_scope___globals, "mypy.tvar_scope.TypeVarLikeScope", cpy_r_it);
        goto CPyL8;
    }
    cpy_r_r3 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_r2)->_is_class_scope;
    if (!cpy_r_r3) goto CPyL6;
CPyL4: ;
    if (likely(cpy_r_it != Py_None))
        cpy_r_r4 = cpy_r_it;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "get_function_scope", 56, CPyStatic_tvar_scope___globals, "mypy.tvar_scope.TypeVarLikeScope", cpy_r_it);
        goto CPyL8;
    }
    cpy_r_r5 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_r4)->_parent;
    CPy_INCREF(cpy_r_r5);
    CPy_DECREF(cpy_r_it);
    cpy_r_it = cpy_r_r5;
    goto CPyL1;
CPyL6: ;
    return cpy_r_it;
CPyL7: ;
    cpy_r_r6 = NULL;
    return cpy_r_r6;
CPyL8: ;
    CPy_DecRef(cpy_r_it);
    goto CPyL7;
}

PyObject *CPyPy_tvar_scope___TypeVarLikeScope___get_function_scope(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":get_function_scope", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_tvar_scope___TypeVarLikeScope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.tvar_scope.TypeVarLikeScope", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_tvar_scope___TypeVarLikeScope___get_function_scope(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/tvar_scope.py", "get_function_scope", 52, CPyStatic_tvar_scope___globals);
    return NULL;
}

char CPyDef_tvar_scope___TypeVarLikeScope___allow_binding(PyObject *cpy_r_self, PyObject *cpy_r_fullname) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
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
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_scope;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_fullname);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "allow_binding", 60, CPyStatic_tvar_scope___globals);
        goto CPyL14;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL3;
    return 0;
CPyL3: ;
    cpy_r_r4 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_parent;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_r4 != cpy_r_r5;
    CPy_DECREF(cpy_r_r4);
    if (!cpy_r_r6) goto CPyL8;
    cpy_r_r7 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_parent;
    CPy_INCREF(cpy_r_r7);
    if (likely(cpy_r_r7 != Py_None))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "allow_binding", 62, CPyStatic_tvar_scope___globals, "mypy.tvar_scope.TypeVarLikeScope", cpy_r_r7);
        goto CPyL14;
    }
    cpy_r_r9 = CPyDef_tvar_scope___TypeVarLikeScope___allow_binding(cpy_r_r8, cpy_r_fullname);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "allow_binding", 62, CPyStatic_tvar_scope___globals);
        goto CPyL14;
    }
    if (cpy_r_r9) goto CPyL8;
    return 0;
CPyL8: ;
    cpy_r_r10 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_prohibited;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r12 = cpy_r_r10 != cpy_r_r11;
    CPy_DECREF(cpy_r_r10);
    if (!cpy_r_r12) goto CPyL13;
    cpy_r_r13 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_prohibited;
    CPy_INCREF(cpy_r_r13);
    if (likely(cpy_r_r13 != Py_None))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "allow_binding", 64, CPyStatic_tvar_scope___globals, "mypy.tvar_scope.TypeVarLikeScope", cpy_r_r13);
        goto CPyL14;
    }
    cpy_r_r15 = CPyDef_tvar_scope___TypeVarLikeScope___allow_binding(cpy_r_r14, cpy_r_fullname);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == 2)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "allow_binding", 64, CPyStatic_tvar_scope___globals);
        goto CPyL14;
    }
    if (cpy_r_r15) goto CPyL13;
    return 0;
CPyL13: ;
    return 1;
CPyL14: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
}

PyObject *CPyPy_tvar_scope___TypeVarLikeScope___allow_binding(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fullname", 0};
    static CPyArg_Parser parser = {"O:allow_binding", kwlist, 0};
    PyObject *obj_fullname;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_fullname)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_tvar_scope___TypeVarLikeScope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.tvar_scope.TypeVarLikeScope", obj_self); 
        goto fail;
    }
    PyObject *arg_fullname;
    if (likely(PyUnicode_Check(obj_fullname)))
        arg_fullname = obj_fullname;
    else {
        CPy_TypeError("str", obj_fullname); 
        goto fail;
    }
    char retval = CPyDef_tvar_scope___TypeVarLikeScope___allow_binding(arg_self, arg_fullname);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/tvar_scope.py", "allow_binding", 59, CPyStatic_tvar_scope___globals);
    return NULL;
}

PyObject *CPyDef_tvar_scope___TypeVarLikeScope___method_frame(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = Py_None;
    cpy_r_r1 = NULL;
    cpy_r_r2 = CPyDef_tvar_scope___TypeVarLikeScope(cpy_r_self, 0, cpy_r_r0, cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "method_frame", 70, CPyStatic_tvar_scope___globals);
        goto CPyL2;
    }
    return cpy_r_r2;
CPyL2: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_tvar_scope___TypeVarLikeScope___method_frame(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":method_frame", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_tvar_scope___TypeVarLikeScope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.tvar_scope.TypeVarLikeScope", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_tvar_scope___TypeVarLikeScope___method_frame(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/tvar_scope.py", "method_frame", 68, CPyStatic_tvar_scope___globals);
    return NULL;
}

PyObject *CPyDef_tvar_scope___TypeVarLikeScope___class_frame(PyObject *cpy_r_self, PyObject *cpy_r_namespace) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = CPyDef_tvar_scope___TypeVarLikeScope___get_function_scope(cpy_r_self);
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "class_frame", 74, CPyStatic_tvar_scope___globals);
        goto CPyL3;
    }
    cpy_r_r1 = CPyDef_tvar_scope___TypeVarLikeScope(cpy_r_r0, 1, cpy_r_self, cpy_r_namespace);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "class_frame", 74, CPyStatic_tvar_scope___globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_tvar_scope___TypeVarLikeScope___class_frame(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"namespace", 0};
    static CPyArg_Parser parser = {"O:class_frame", kwlist, 0};
    PyObject *obj_namespace;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_namespace)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_tvar_scope___TypeVarLikeScope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.tvar_scope.TypeVarLikeScope", obj_self); 
        goto fail;
    }
    PyObject *arg_namespace;
    if (likely(PyUnicode_Check(obj_namespace)))
        arg_namespace = obj_namespace;
    else {
        CPy_TypeError("str", obj_namespace); 
        goto fail;
    }
    PyObject *retval = CPyDef_tvar_scope___TypeVarLikeScope___class_frame(arg_self, arg_namespace);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/tvar_scope.py", "class_frame", 72, CPyStatic_tvar_scope___globals);
    return NULL;
}

CPyTagged CPyDef_tvar_scope___TypeVarLikeScope___new_unique_func_id(PyObject *cpy_r_self) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    CPyTagged cpy_r_r3;
    cpy_r_r0 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_func_id;
    cpy_r_r1 = CPyTagged_Subtract(cpy_r_r0, 2);
    CPyTagged_DECREF(((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_func_id);
    ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_func_id = cpy_r_r1;
    cpy_r_r3 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_func_id;
    CPyTagged_INCREF(cpy_r_r3);
    return cpy_r_r3;
}

PyObject *CPyPy_tvar_scope___TypeVarLikeScope___new_unique_func_id(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":new_unique_func_id", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_tvar_scope___TypeVarLikeScope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.tvar_scope.TypeVarLikeScope", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef_tvar_scope___TypeVarLikeScope___new_unique_func_id(arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/tvar_scope.py", "new_unique_func_id", 76, CPyStatic_tvar_scope___globals);
    return NULL;
}

PyObject *CPyDef_tvar_scope___TypeVarLikeScope___bind_new(PyObject *cpy_r_self, PyObject *cpy_r_name, PyObject *cpy_r_tvar_expr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_tvar_def;
    char cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    char cpy_r_r4;
    CPyTagged cpy_r_r5;
    CPyTagged cpy_r_i;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_namespace;
    CPyTagged cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    CPyTagged cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    CPyTagged cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    CPyTagged cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    CPyTagged cpy_r_r44;
    PyObject *cpy_r_r45;
    CPyTagged cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    CPyPtr cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    CPyTagged cpy_r_r63;
    PyObject *cpy_r_r64;
    CPyTagged cpy_r_r65;
    PyObject *cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    int32_t cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    PyObject *cpy_r_r75;
    cpy_r_r0 = NULL;
    cpy_r_tvar_def = cpy_r_r0;
    cpy_r_r1 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_is_class_scope;
    if (!cpy_r_r1) goto CPyL2;
CPyL1: ;
    cpy_r_r2 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_class_id;
    cpy_r_r3 = CPyTagged_Add(cpy_r_r2, 2);
    CPyTagged_DECREF(((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_class_id);
    ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_class_id = cpy_r_r3;
    cpy_r_r5 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_class_id;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_i = cpy_r_r5;
    cpy_r_r6 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_namespace;
    CPy_INCREF(cpy_r_r6);
    cpy_r_namespace = cpy_r_r6;
    goto CPyL3;
CPyL2: ;
    cpy_r_r7 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_func_id;
    cpy_r_r8 = CPyTagged_Subtract(cpy_r_r7, 2);
    CPyTagged_DECREF(((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_func_id);
    ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_func_id = cpy_r_r8;
    cpy_r_r10 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_func_id;
    CPyTagged_INCREF(cpy_r_r10);
    cpy_r_i = cpy_r_r10;
    cpy_r_r11 = CPyStatics[163]; /* '' */
    CPy_INCREF(cpy_r_r11);
    cpy_r_namespace = cpy_r_r11;
CPyL3: ;
    cpy_r_r12 = (PyObject *)CPyType_nodes___TypeVarExpr;
    cpy_r_r13 = (CPyPtr)&((PyObject *)cpy_r_tvar_expr)->ob_type;
    cpy_r_r14 = *(PyObject * *)cpy_r_r13;
    cpy_r_r15 = cpy_r_r14 == cpy_r_r12;
    if (cpy_r_r15) {
        goto CPyL47;
    } else
        goto CPyL48;
CPyL4: ;
    CPy_INCREF(cpy_r_tvar_expr);
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___TypeVarExpr))
        cpy_r_r16 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 94, CPyStatic_tvar_scope___globals, "mypy.nodes.TypeVarExpr", cpy_r_tvar_expr);
        goto CPyL49;
    }
    cpy_r_r17 = CPY_GET_ATTR(cpy_r_r16, CPyType_nodes___TypeVarExpr, 7, mypy___nodes___TypeVarExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "bind_new", 94, CPyStatic_tvar_scope___globals);
        goto CPyL49;
    }
CPyL6: ;
    cpy_r_r18 = CPY_INT_TAG;
    cpy_r_r19 = CPyDef_types___TypeVarId(cpy_r_i, cpy_r_r18, cpy_r_namespace);
    CPyTagged_DECREF(cpy_r_i);
    CPy_DECREF(cpy_r_namespace);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "bind_new", 95, CPyStatic_tvar_scope___globals);
        goto CPyL50;
    }
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___TypeVarExpr))
        cpy_r_r20 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 96, CPyStatic_tvar_scope___globals, "mypy.nodes.TypeVarExpr", cpy_r_tvar_expr);
        goto CPyL51;
    }
    cpy_r_r21 = ((mypy___nodes___TypeVarExprObject *)cpy_r_r20)->_values;
    CPy_INCREF(cpy_r_r21);
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___TypeVarExpr))
        cpy_r_r22 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 97, CPyStatic_tvar_scope___globals, "mypy.nodes.TypeVarExpr", cpy_r_tvar_expr);
        goto CPyL52;
    }
    cpy_r_r23 = ((mypy___nodes___TypeVarExprObject *)cpy_r_r22)->_upper_bound;
    CPy_INCREF(cpy_r_r23);
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___TypeVarExpr))
        cpy_r_r24 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 98, CPyStatic_tvar_scope___globals, "mypy.nodes.TypeVarExpr", cpy_r_tvar_expr);
        goto CPyL53;
    }
    cpy_r_r25 = ((mypy___nodes___TypeVarExprObject *)cpy_r_r24)->_default;
    CPy_INCREF(cpy_r_r25);
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___TypeVarExpr))
        cpy_r_r26 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 99, CPyStatic_tvar_scope___globals, "mypy.nodes.TypeVarExpr", cpy_r_tvar_expr);
        goto CPyL54;
    }
    cpy_r_r27 = ((mypy___nodes___TypeVarExprObject *)cpy_r_r26)->_variance;
    CPyTagged_INCREF(cpy_r_r27);
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___TypeVarExpr))
        cpy_r_r28 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 100, CPyStatic_tvar_scope___globals, "mypy.nodes.TypeVarExpr", cpy_r_tvar_expr);
        goto CPyL55;
    }
    cpy_r_r29 = ((mypy___nodes___TypeVarExprObject *)cpy_r_r28)->_line;
    CPyTagged_INCREF(cpy_r_r29);
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___TypeVarExpr))
        cpy_r_r30 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 101, CPyStatic_tvar_scope___globals, "mypy.nodes.TypeVarExpr", cpy_r_tvar_expr);
        goto CPyL56;
    }
    cpy_r_r31 = ((mypy___nodes___TypeVarExprObject *)cpy_r_r30)->_column;
    CPyTagged_INCREF(cpy_r_r31);
    cpy_r_r32 = CPyDef_types___TypeVarType(cpy_r_name, cpy_r_r17, cpy_r_r19, cpy_r_r21, cpy_r_r23, cpy_r_r25, cpy_r_r27, cpy_r_r29, cpy_r_r31);
    CPy_DECREF(cpy_r_r17);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r21);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r25);
    CPyTagged_DECREF(cpy_r_r27);
    CPyTagged_DECREF(cpy_r_r29);
    CPyTagged_DECREF(cpy_r_r31);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "bind_new", 92, CPyStatic_tvar_scope___globals);
        goto CPyL46;
    }
    cpy_r_tvar_def = cpy_r_r32;
    goto CPyL37;
CPyL15: ;
    cpy_r_r33 = (PyObject *)CPyType_nodes___ParamSpecExpr;
    cpy_r_r34 = (CPyPtr)&((PyObject *)cpy_r_tvar_expr)->ob_type;
    cpy_r_r35 = *(PyObject * *)cpy_r_r34;
    cpy_r_r36 = cpy_r_r35 == cpy_r_r33;
    if (cpy_r_r36) {
        goto CPyL57;
    } else
        goto CPyL24;
CPyL16: ;
    CPy_INCREF(cpy_r_tvar_expr);
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___ParamSpecExpr))
        cpy_r_r37 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 106, CPyStatic_tvar_scope___globals, "mypy.nodes.ParamSpecExpr", cpy_r_tvar_expr);
        goto CPyL58;
    }
    cpy_r_r38 = CPY_GET_ATTR(cpy_r_r37, CPyType_nodes___ParamSpecExpr, 7, mypy___nodes___ParamSpecExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "bind_new", 106, CPyStatic_tvar_scope___globals);
        goto CPyL58;
    }
CPyL18: ;
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___ParamSpecExpr))
        cpy_r_r39 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 109, CPyStatic_tvar_scope___globals, "mypy.nodes.ParamSpecExpr", cpy_r_tvar_expr);
        goto CPyL59;
    }
    cpy_r_r40 = ((mypy___nodes___ParamSpecExprObject *)cpy_r_r39)->_upper_bound;
    CPy_INCREF(cpy_r_r40);
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___ParamSpecExpr))
        cpy_r_r41 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 110, CPyStatic_tvar_scope___globals, "mypy.nodes.ParamSpecExpr", cpy_r_tvar_expr);
        goto CPyL60;
    }
    cpy_r_r42 = ((mypy___nodes___ParamSpecExprObject *)cpy_r_r41)->_default;
    CPy_INCREF(cpy_r_r42);
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___ParamSpecExpr))
        cpy_r_r43 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 111, CPyStatic_tvar_scope___globals, "mypy.nodes.ParamSpecExpr", cpy_r_tvar_expr);
        goto CPyL61;
    }
    cpy_r_r44 = ((mypy___nodes___ParamSpecExprObject *)cpy_r_r43)->_line;
    CPyTagged_INCREF(cpy_r_r44);
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___ParamSpecExpr))
        cpy_r_r45 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 112, CPyStatic_tvar_scope___globals, "mypy.nodes.ParamSpecExpr", cpy_r_tvar_expr);
        goto CPyL62;
    }
    cpy_r_r46 = ((mypy___nodes___ParamSpecExprObject *)cpy_r_r45)->_column;
    CPyTagged_INCREF(cpy_r_r46);
    cpy_r_r47 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r48 = NULL;
    cpy_r_r49 = CPyDef_types___ParamSpecType(cpy_r_name, cpy_r_r38, cpy_r_r47, 0, cpy_r_r40, cpy_r_r42, cpy_r_r44, cpy_r_r46, cpy_r_r48);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_r42);
    CPyTagged_DECREF(cpy_r_r44);
    CPyTagged_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "bind_new", 104, CPyStatic_tvar_scope___globals);
        goto CPyL46;
    }
    cpy_r_tvar_def = cpy_r_r49;
    goto CPyL37;
CPyL24: ;
    cpy_r_r50 = (PyObject *)CPyType_nodes___TypeVarTupleExpr;
    cpy_r_r51 = (CPyPtr)&((PyObject *)cpy_r_tvar_expr)->ob_type;
    cpy_r_r52 = *(PyObject * *)cpy_r_r51;
    cpy_r_r53 = cpy_r_r52 == cpy_r_r50;
    if (cpy_r_r53) {
        goto CPyL63;
    } else
        goto CPyL64;
CPyL25: ;
    CPy_INCREF(cpy_r_tvar_expr);
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___TypeVarTupleExpr))
        cpy_r_r54 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 117, CPyStatic_tvar_scope___globals, "mypy.nodes.TypeVarTupleExpr", cpy_r_tvar_expr);
        goto CPyL58;
    }
    cpy_r_r55 = CPY_GET_ATTR(cpy_r_r54, CPyType_nodes___TypeVarTupleExpr, 7, mypy___nodes___TypeVarTupleExprObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "bind_new", 117, CPyStatic_tvar_scope___globals);
        goto CPyL58;
    }
CPyL27: ;
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___TypeVarTupleExpr))
        cpy_r_r56 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 119, CPyStatic_tvar_scope___globals, "mypy.nodes.TypeVarTupleExpr", cpy_r_tvar_expr);
        goto CPyL65;
    }
    cpy_r_r57 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_r56)->_upper_bound;
    CPy_INCREF(cpy_r_r57);
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___TypeVarTupleExpr))
        cpy_r_r58 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 120, CPyStatic_tvar_scope___globals, "mypy.nodes.TypeVarTupleExpr", cpy_r_tvar_expr);
        goto CPyL66;
    }
    cpy_r_r59 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_r58)->_tuple_fallback;
    CPy_INCREF(cpy_r_r59);
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___TypeVarTupleExpr))
        cpy_r_r60 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 121, CPyStatic_tvar_scope___globals, "mypy.nodes.TypeVarTupleExpr", cpy_r_tvar_expr);
        goto CPyL67;
    }
    cpy_r_r61 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_r60)->_default;
    CPy_INCREF(cpy_r_r61);
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___TypeVarTupleExpr))
        cpy_r_r62 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 122, CPyStatic_tvar_scope___globals, "mypy.nodes.TypeVarTupleExpr", cpy_r_tvar_expr);
        goto CPyL68;
    }
    cpy_r_r63 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_r62)->_line;
    CPyTagged_INCREF(cpy_r_r63);
    if (likely(Py_TYPE(cpy_r_tvar_expr) == CPyType_nodes___TypeVarTupleExpr))
        cpy_r_r64 = cpy_r_tvar_expr;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "bind_new", 123, CPyStatic_tvar_scope___globals, "mypy.nodes.TypeVarTupleExpr", cpy_r_tvar_expr);
        goto CPyL69;
    }
    cpy_r_r65 = ((mypy___nodes___TypeVarTupleExprObject *)cpy_r_r64)->_column;
    CPyTagged_INCREF(cpy_r_r65);
    cpy_r_r66 = CPyTagged_StealAsObject(cpy_r_i);
    cpy_r_r67 = CPyDef_types___TypeVarTupleType(cpy_r_name, cpy_r_r55, cpy_r_r66, cpy_r_r57, cpy_r_r59, cpy_r_r61, cpy_r_r63, cpy_r_r65);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r57);
    CPy_DECREF(cpy_r_r59);
    CPy_DECREF(cpy_r_r61);
    CPyTagged_DECREF(cpy_r_r63);
    CPyTagged_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r67 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "bind_new", 115, CPyStatic_tvar_scope___globals);
        goto CPyL46;
    }
    cpy_r_tvar_def = cpy_r_r67;
    goto CPyL37;
CPyL34: ;
    if (0) {
        goto CPyL37;
    } else
        goto CPyL70;
CPyL35: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r68 = 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "bind_new", 126, CPyStatic_tvar_scope___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r69 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_scope;
    CPy_INCREF(cpy_r_r69);
    cpy_r_r70 = CPY_GET_ATTR(cpy_r_tvar_expr, CPyType_nodes___TypeVarLikeExpr, 7, mypy___nodes___TypeVarLikeExprObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "bind_new", 127, CPyStatic_tvar_scope___globals);
        goto CPyL71;
    }
CPyL38: ;
    if (cpy_r_tvar_def == NULL) {
        goto CPyL72;
    } else
        goto CPyL41;
CPyL39: ;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"tvar_def\" referenced before assignment");
    cpy_r_r71 = 0;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "bind_new", 127, CPyStatic_tvar_scope___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r72 = CPyDict_SetItem(cpy_r_r69, cpy_r_r70, cpy_r_tvar_def);
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r70);
    cpy_r_r73 = cpy_r_r72 >= 0;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "bind_new", 127, CPyStatic_tvar_scope___globals);
        goto CPyL73;
    }
    if (cpy_r_tvar_def != NULL) goto CPyL45;
    PyErr_SetString(PyExc_UnboundLocalError, "local variable \"tvar_def\" referenced before assignment");
    cpy_r_r74 = 0;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "bind_new", -1, CPyStatic_tvar_scope___globals);
        goto CPyL46;
    }
    CPy_Unreachable();
CPyL45: ;
    return cpy_r_tvar_def;
CPyL46: ;
    cpy_r_r75 = NULL;
    return cpy_r_r75;
CPyL47: ;
    CPy_XDECREF(cpy_r_tvar_def);
    goto CPyL4;
CPyL48: ;
    CPy_DECREF(cpy_r_namespace);
    goto CPyL15;
CPyL49: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_namespace);
    goto CPyL46;
CPyL50: ;
    CPy_DecRef(cpy_r_r17);
    goto CPyL46;
CPyL51: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r19);
    goto CPyL46;
CPyL52: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    goto CPyL46;
CPyL53: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r23);
    goto CPyL46;
CPyL54: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r25);
    goto CPyL46;
CPyL55: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r25);
    CPyTagged_DecRef(cpy_r_r27);
    goto CPyL46;
CPyL56: ;
    CPy_DecRef(cpy_r_r17);
    CPy_DecRef(cpy_r_r19);
    CPy_DecRef(cpy_r_r21);
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r25);
    CPyTagged_DecRef(cpy_r_r27);
    CPyTagged_DecRef(cpy_r_r29);
    goto CPyL46;
CPyL57: ;
    CPy_XDECREF(cpy_r_tvar_def);
    goto CPyL16;
CPyL58: ;
    CPyTagged_DecRef(cpy_r_i);
    goto CPyL46;
CPyL59: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r38);
    goto CPyL46;
CPyL60: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r40);
    goto CPyL46;
CPyL61: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r42);
    goto CPyL46;
CPyL62: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r38);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r42);
    CPyTagged_DecRef(cpy_r_r44);
    goto CPyL46;
CPyL63: ;
    CPy_XDECREF(cpy_r_tvar_def);
    goto CPyL25;
CPyL64: ;
    CPyTagged_DECREF(cpy_r_i);
    goto CPyL34;
CPyL65: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r55);
    goto CPyL46;
CPyL66: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r57);
    goto CPyL46;
CPyL67: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r59);
    goto CPyL46;
CPyL68: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r61);
    goto CPyL46;
CPyL69: ;
    CPyTagged_DecRef(cpy_r_i);
    CPy_DecRef(cpy_r_r55);
    CPy_DecRef(cpy_r_r57);
    CPy_DecRef(cpy_r_r59);
    CPy_DecRef(cpy_r_r61);
    CPyTagged_DecRef(cpy_r_r63);
    goto CPyL46;
CPyL70: ;
    CPy_XDECREF(cpy_r_tvar_def);
    goto CPyL35;
CPyL71: ;
    CPy_XDecRef(cpy_r_tvar_def);
    CPy_DecRef(cpy_r_r69);
    goto CPyL46;
CPyL72: ;
    CPy_DECREF(cpy_r_r69);
    CPy_DECREF(cpy_r_r70);
    goto CPyL39;
CPyL73: ;
    CPy_XDecRef(cpy_r_tvar_def);
    goto CPyL46;
}

PyObject *CPyPy_tvar_scope___TypeVarLikeScope___bind_new(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"name", "tvar_expr", 0};
    static CPyArg_Parser parser = {"OO:bind_new", kwlist, 0};
    PyObject *obj_name;
    PyObject *obj_tvar_expr;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_name, &obj_tvar_expr)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_tvar_scope___TypeVarLikeScope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.tvar_scope.TypeVarLikeScope", obj_self); 
        goto fail;
    }
    PyObject *arg_name;
    if (likely(PyUnicode_Check(obj_name)))
        arg_name = obj_name;
    else {
        CPy_TypeError("str", obj_name); 
        goto fail;
    }
    PyObject *arg_tvar_expr;
    if (likely((Py_TYPE(obj_tvar_expr) == CPyType_nodes___ParamSpecExpr) || (Py_TYPE(obj_tvar_expr) == CPyType_nodes___TypeVarExpr) || (Py_TYPE(obj_tvar_expr) == CPyType_nodes___TypeVarTupleExpr)))
        arg_tvar_expr = obj_tvar_expr;
    else {
        CPy_TypeError("mypy.nodes.TypeVarLikeExpr", obj_tvar_expr); 
        goto fail;
    }
    PyObject *retval = CPyDef_tvar_scope___TypeVarLikeScope___bind_new(arg_self, arg_name, arg_tvar_expr);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/tvar_scope.py", "bind_new", 81, CPyStatic_tvar_scope___globals);
    return NULL;
}

char CPyDef_tvar_scope___TypeVarLikeScope___bind_existing(PyObject *cpy_r_self, PyObject *cpy_r_tvar_def) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_scope;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_tvar_def)->_fullname;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = CPyDict_SetItem(cpy_r_r0, cpy_r_r1, cpy_r_tvar_def);
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r1);
    cpy_r_r3 = cpy_r_r2 >= 0;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "bind_existing", 131, CPyStatic_tvar_scope___globals);
        goto CPyL2;
    }
    return 1;
CPyL2: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_tvar_scope___TypeVarLikeScope___bind_existing(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"tvar_def", 0};
    static CPyArg_Parser parser = {"O:bind_existing", kwlist, 0};
    PyObject *obj_tvar_def;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_tvar_def)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_tvar_scope___TypeVarLikeScope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.tvar_scope.TypeVarLikeScope", obj_self); 
        goto fail;
    }
    PyObject *arg_tvar_def;
    if (likely(PyObject_TypeCheck(obj_tvar_def, CPyType_types___TypeVarLikeType)))
        arg_tvar_def = obj_tvar_def;
    else {
        CPy_TypeError("mypy.types.TypeVarLikeType", obj_tvar_def); 
        goto fail;
    }
    char retval = CPyDef_tvar_scope___TypeVarLikeScope___bind_existing(arg_self, arg_tvar_def);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/tvar_scope.py", "bind_existing", 130, CPyStatic_tvar_scope___globals);
    return NULL;
}

PyObject *CPyDef_tvar_scope___TypeVarLikeScope___get_binding(PyObject *cpy_r_self, PyObject *cpy_r_item) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_fullname;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    cpy_r_r0 = (PyObject *)CPyType_nodes___SymbolTableNode;
    cpy_r_r1 = (CPyPtr)&((PyObject *)cpy_r_item)->ob_type;
    cpy_r_r2 = *(PyObject * *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 == cpy_r_r0;
    if (!cpy_r_r3) goto CPyL4;
    CPy_INCREF(cpy_r_item);
    if (likely(Py_TYPE(cpy_r_item) == CPyType_nodes___SymbolTableNode))
        cpy_r_r4 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "get_binding", 134, CPyStatic_tvar_scope___globals, "mypy.nodes.SymbolTableNode", cpy_r_item);
        goto CPyL24;
    }
    cpy_r_r5 = CPY_GET_ATTR(cpy_r_r4, CPyType_nodes___SymbolTableNode, 1, mypy___nodes___SymbolTableNodeObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "get_binding", 134, CPyStatic_tvar_scope___globals);
        goto CPyL24;
    }
CPyL3: ;
    cpy_r_r6 = cpy_r_r5;
    goto CPyL6;
CPyL4: ;
    CPy_INCREF(cpy_r_item);
    if (likely(PyUnicode_Check(cpy_r_item)))
        cpy_r_r7 = cpy_r_item;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "get_binding", 134, CPyStatic_tvar_scope___globals, "str", cpy_r_item);
        goto CPyL24;
    }
    cpy_r_r6 = cpy_r_r7;
CPyL6: ;
    cpy_r_fullname = cpy_r_r6;
    cpy_r_r8 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r9 = cpy_r_fullname != cpy_r_r8;
    if (!cpy_r_r9) goto CPyL25;
    CPy_INCREF(cpy_r_fullname);
    if (likely(cpy_r_fullname != Py_None))
        cpy_r_r10 = cpy_r_fullname;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "get_binding", 134, CPyStatic_tvar_scope___globals, "str", cpy_r_fullname);
        goto CPyL26;
    }
    cpy_r_r11 = CPyStr_IsTrue(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (cpy_r_r11) {
        goto CPyL11;
    } else
        goto CPyL25;
CPyL9: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r12 = 0;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "get_binding", 135, CPyStatic_tvar_scope___globals);
        goto CPyL24;
    }
    CPy_Unreachable();
CPyL11: ;
    CPy_INCREF(cpy_r_fullname);
    if (likely(cpy_r_fullname != Py_None))
        cpy_r_r13 = cpy_r_fullname;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "get_binding", 136, CPyStatic_tvar_scope___globals, "str", cpy_r_fullname);
        goto CPyL26;
    }
    cpy_r_r14 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_scope;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = PyDict_Contains(cpy_r_r14, cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r13);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "get_binding", 136, CPyStatic_tvar_scope___globals);
        goto CPyL26;
    }
    cpy_r_r17 = cpy_r_r15;
    if (!cpy_r_r17) goto CPyL18;
    cpy_r_r18 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_scope;
    CPy_INCREF(cpy_r_r18);
    if (likely(cpy_r_fullname != Py_None))
        cpy_r_r19 = cpy_r_fullname;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "get_binding", 137, CPyStatic_tvar_scope___globals, "str", cpy_r_fullname);
        goto CPyL27;
    }
    cpy_r_r20 = CPyDict_GetItem(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "get_binding", 137, CPyStatic_tvar_scope___globals);
        goto CPyL24;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r20, CPyType_types___TypeVarLikeType)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "get_binding", 137, CPyStatic_tvar_scope___globals, "mypy.types.TypeVarLikeType", cpy_r_r20);
        goto CPyL24;
    }
    return cpy_r_r21;
CPyL18: ;
    cpy_r_r22 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_parent;
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_r22 != cpy_r_r23;
    if (!cpy_r_r24) goto CPyL28;
    cpy_r_r25 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_parent;
    CPy_INCREF(cpy_r_r25);
    if (likely(cpy_r_r25 != Py_None))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "get_binding", 139, CPyStatic_tvar_scope___globals, "mypy.tvar_scope.TypeVarLikeScope", cpy_r_r25);
        goto CPyL26;
    }
    if (likely(cpy_r_fullname != Py_None))
        cpy_r_r27 = cpy_r_fullname;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "get_binding", 139, CPyStatic_tvar_scope___globals, "str", cpy_r_fullname);
        goto CPyL29;
    }
    cpy_r_r28 = CPyDef_tvar_scope___TypeVarLikeScope___get_binding(cpy_r_r26, cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "get_binding", 139, CPyStatic_tvar_scope___globals);
        goto CPyL24;
    }
    return cpy_r_r28;
CPyL23: ;
    cpy_r_r29 = Py_None;
    CPy_INCREF(cpy_r_r29);
    return cpy_r_r29;
CPyL24: ;
    cpy_r_r30 = NULL;
    return cpy_r_r30;
CPyL25: ;
    CPy_DECREF(cpy_r_fullname);
    goto CPyL9;
CPyL26: ;
    CPy_DecRef(cpy_r_fullname);
    goto CPyL24;
CPyL27: ;
    CPy_DecRef(cpy_r_r18);
    goto CPyL24;
CPyL28: ;
    CPy_DECREF(cpy_r_fullname);
    goto CPyL23;
CPyL29: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL24;
}

PyObject *CPyPy_tvar_scope___TypeVarLikeScope___get_binding(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"item", 0};
    static CPyArg_Parser parser = {"O:get_binding", kwlist, 0};
    PyObject *obj_item;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_item)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_tvar_scope___TypeVarLikeScope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.tvar_scope.TypeVarLikeScope", obj_self); 
        goto fail;
    }
    PyObject *arg_item;
    if (PyUnicode_Check(obj_item))
        arg_item = obj_item;
    else {
        arg_item = NULL;
    }
    if (arg_item != NULL) goto __LL7568;
    if (Py_TYPE(obj_item) == CPyType_nodes___SymbolTableNode)
        arg_item = obj_item;
    else {
        arg_item = NULL;
    }
    if (arg_item != NULL) goto __LL7568;
    CPy_TypeError("union[str, mypy.nodes.SymbolTableNode]", obj_item); 
    goto fail;
__LL7568: ;
    PyObject *retval = CPyDef_tvar_scope___TypeVarLikeScope___get_binding(arg_self, arg_item);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/tvar_scope.py", "get_binding", 133, CPyStatic_tvar_scope___globals);
    return NULL;
}

PyObject *CPyDef_tvar_scope___TypeVarLikeScope_____str__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T4CIOO cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_k;
    PyObject *cpy_r_v;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_me;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    cpy_r_r0 = CPyStatics[71]; /* ', ' */
    cpy_r_r1 = PyList_New(0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "__str__", 144, CPyStatic_tvar_scope___globals);
        goto CPyL17;
    }
    cpy_r_r2 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_scope;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = 0;
    cpy_r_r4 = PyDict_Size(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = CPyDict_GetItemsIter(cpy_r_r2);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "__str__", 144, CPyStatic_tvar_scope___globals);
        goto CPyL18;
    }
CPyL2: ;
    cpy_r_r7 = CPyDict_NextItem(cpy_r_r6, cpy_r_r3);
    cpy_r_r8 = cpy_r_r7.f1;
    cpy_r_r3 = cpy_r_r8;
    cpy_r_r9 = cpy_r_r7.f0;
    if (!cpy_r_r9) goto CPyL19;
    cpy_r_r10 = cpy_r_r7.f2;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = cpy_r_r7.f3;
    CPy_INCREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r7.f2);
    CPy_DECREF(cpy_r_r7.f3);
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r12 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "__str__", 144, CPyStatic_tvar_scope___globals, "str", cpy_r_r10);
        goto CPyL20;
    }
    if (likely(PyObject_TypeCheck(cpy_r_r11, CPyType_types___TypeVarLikeType)))
        cpy_r_r13 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "__str__", 144, CPyStatic_tvar_scope___globals, "mypy.types.TypeVarLikeType", cpy_r_r11);
        goto CPyL21;
    }
    cpy_r_k = cpy_r_r12;
    cpy_r_v = cpy_r_r13;
    cpy_r_r14 = CPyStatics[297]; /* ': ' */
    cpy_r_r15 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_v)->_name;
    CPy_INCREF(cpy_r_r15);
    cpy_r_r16 = CPyStatics[6181]; /* '`' */
    cpy_r_r17 = ((mypy___types___TypeVarLikeTypeObject *)cpy_r_v)->_id;
    CPy_INCREF(cpy_r_r17);
    CPy_DECREF(cpy_r_v);
    cpy_r_r18 = PyObject_Str(cpy_r_r17);
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "__str__", 144, CPyStatic_tvar_scope___globals);
        goto CPyL22;
    }
    cpy_r_r19 = CPyStr_Build(5, cpy_r_k, cpy_r_r14, cpy_r_r15, cpy_r_r16, cpy_r_r18);
    CPy_DECREF(cpy_r_k);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "__str__", 144, CPyStatic_tvar_scope___globals);
        goto CPyL23;
    }
    cpy_r_r20 = PyList_Append(cpy_r_r1, cpy_r_r19);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "__str__", 144, CPyStatic_tvar_scope___globals);
        goto CPyL23;
    }
    cpy_r_r22 = CPyDict_CheckSize(cpy_r_r2, cpy_r_r5);
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "__str__", 144, CPyStatic_tvar_scope___globals);
        goto CPyL23;
    } else
        goto CPyL2;
CPyL9: ;
    cpy_r_r23 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "__str__", 144, CPyStatic_tvar_scope___globals);
        goto CPyL24;
    }
    cpy_r_r24 = PyUnicode_Join(cpy_r_r0, cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "__str__", 144, CPyStatic_tvar_scope___globals);
        goto CPyL17;
    }
    cpy_r_me = cpy_r_r24;
    cpy_r_r25 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_parent;
    cpy_r_r26 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r27 = cpy_r_r25 == cpy_r_r26;
    if (!cpy_r_r27) goto CPyL13;
    return cpy_r_me;
CPyL13: ;
    cpy_r_r28 = ((mypy___tvar_scope___TypeVarLikeScopeObject *)cpy_r_self)->_parent;
    CPy_INCREF(cpy_r_r28);
    if (likely(cpy_r_r28 != Py_None))
        cpy_r_r29 = cpy_r_r28;
    else {
        CPy_TypeErrorTraceback("mypy/tvar_scope.py", "__str__", 147, CPyStatic_tvar_scope___globals, "mypy.tvar_scope.TypeVarLikeScope", cpy_r_r28);
        goto CPyL25;
    }
    cpy_r_r30 = PyObject_Str(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "__str__", 147, CPyStatic_tvar_scope___globals);
        goto CPyL25;
    }
    cpy_r_r31 = CPyStatics[6182]; /* ' <- ' */
    cpy_r_r32 = CPyStr_Build(3, cpy_r_r30, cpy_r_r31, cpy_r_me);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_me);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "__str__", 147, CPyStatic_tvar_scope___globals);
        goto CPyL17;
    }
    return cpy_r_r32;
CPyL17: ;
    cpy_r_r33 = NULL;
    return cpy_r_r33;
CPyL18: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL17;
CPyL19: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7.f2);
    CPy_DECREF(cpy_r_r7.f3);
    goto CPyL9;
CPyL20: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r11);
    goto CPyL17;
CPyL21: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r12);
    goto CPyL17;
CPyL22: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_k);
    CPy_DecRef(cpy_r_r15);
    goto CPyL17;
CPyL23: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r6);
    goto CPyL17;
CPyL24: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL17;
CPyL25: ;
    CPy_DecRef(cpy_r_me);
    goto CPyL17;
}

PyObject *CPyPy_tvar_scope___TypeVarLikeScope_____str__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__str__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_tvar_scope___TypeVarLikeScope))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.tvar_scope.TypeVarLikeScope", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_tvar_scope___TypeVarLikeScope_____str__(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/tvar_scope.py", "__str__", 143, CPyStatic_tvar_scope___globals);
    return NULL;
}

char CPyDef_tvar_scope_____top_level__(void) {
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
    int32_t cpy_r_r31;
    char cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    int32_t cpy_r_r35;
    char cpy_r_r36;
    char cpy_r_r37;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "<module>", -1, CPyStatic_tvar_scope___globals);
        goto CPyL12;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_tvar_scope___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "<module>", 1, CPyStatic_tvar_scope___globals);
        goto CPyL12;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9847]; /* ('ParamSpecExpr', 'SymbolTableNode', 'TypeVarExpr',
                                    'TypeVarLikeExpr', 'TypeVarTupleExpr') */
    cpy_r_r10 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r11 = CPyStatic_tvar_scope___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "<module>", 3, CPyStatic_tvar_scope___globals);
        goto CPyL12;
    }
    CPyModule_mypy___nodes = cpy_r_r12;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9848]; /* ('ParamSpecFlavor', 'ParamSpecType', 'TypeVarId',
                                     'TypeVarLikeType', 'TypeVarTupleType', 'TypeVarType') */
    cpy_r_r14 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r15 = CPyStatic_tvar_scope___globals;
    cpy_r_r16 = CPyImport_ImportFromMany(cpy_r_r14, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "<module>", 10, CPyStatic_tvar_scope___globals);
        goto CPyL12;
    }
    CPyModule_mypy___types = cpy_r_r16;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r17 = NULL;
    cpy_r_r18 = CPyStatics[4366]; /* 'mypy.tvar_scope' */
    cpy_r_r19 = (PyObject *)CPyType_tvar_scope___TypeVarLikeScope_template;
    cpy_r_r20 = CPyType_FromTemplate(cpy_r_r19, cpy_r_r17, cpy_r_r18);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "<module>", 20, CPyStatic_tvar_scope___globals);
        goto CPyL12;
    }
    cpy_r_r21 = CPyDef_tvar_scope___TypeVarLikeScope_trait_vtable_setup();
    if (unlikely(cpy_r_r21 == 2)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "<module>", -1, CPyStatic_tvar_scope___globals);
        goto CPyL13;
    }
    cpy_r_r22 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r23 = CPyStatics[1104]; /* 'scope' */
    cpy_r_r24 = CPyStatics[6183]; /* 'parent' */
    cpy_r_r25 = CPyStatics[6184]; /* 'func_id' */
    cpy_r_r26 = CPyStatics[6185]; /* 'class_id' */
    cpy_r_r27 = CPyStatics[6186]; /* 'is_class_scope' */
    cpy_r_r28 = CPyStatics[6187]; /* 'prohibited' */
    cpy_r_r29 = CPyStatics[6188]; /* 'namespace' */
    cpy_r_r30 = PyTuple_Pack(7, cpy_r_r23, cpy_r_r24, cpy_r_r25, cpy_r_r26, cpy_r_r27, cpy_r_r28, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "<module>", 20, CPyStatic_tvar_scope___globals);
        goto CPyL13;
    }
    cpy_r_r31 = PyObject_SetAttr(cpy_r_r20, cpy_r_r22, cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "<module>", 20, CPyStatic_tvar_scope___globals);
        goto CPyL13;
    }
    CPyType_tvar_scope___TypeVarLikeScope = (PyTypeObject *)cpy_r_r20;
    CPy_INCREF(CPyType_tvar_scope___TypeVarLikeScope);
    cpy_r_r33 = CPyStatic_tvar_scope___globals;
    cpy_r_r34 = CPyStatics[4365]; /* 'TypeVarLikeScope' */
    cpy_r_r35 = CPyDict_SetItem(cpy_r_r33, cpy_r_r34, cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    cpy_r_r36 = cpy_r_r35 >= 0;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("mypy/tvar_scope.py", "<module>", 20, CPyStatic_tvar_scope___globals);
        goto CPyL12;
    }
    return 1;
CPyL12: ;
    cpy_r_r37 = 2;
    return cpy_r_r37;
CPyL13: ;
    CPy_DecRef(cpy_r_r20);
    goto CPyL12;
}
