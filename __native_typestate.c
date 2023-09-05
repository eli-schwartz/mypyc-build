#include "__native_ced4bbd844d3a34b6fc2.h"
#include "__native_internal_ced4bbd844d3a34b6fc2.h"

static int
typestate___TypeState_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
static PyObject *typestate___TypeState_setup(PyTypeObject *type);
PyObject *CPyDef_typestate___TypeState(void);

static PyObject *
typestate___TypeState_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_typestate___TypeState) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = typestate___TypeState_setup(type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy_typestate___TypeState_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
typestate___TypeState_traverse(mypy___typestate___TypeStateObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->__subtype_caches);
    Py_VISIT(self->__negative_subtype_caches);
    Py_VISIT(self->_proto_deps);
    Py_VISIT(self->__attempted_protocols);
    Py_VISIT(self->__checked_against_members);
    Py_VISIT(self->__rechecked_types);
    Py_VISIT(self->__assuming);
    Py_VISIT(self->__assuming_proper);
    Py_VISIT(self->_inferring);
    return 0;
}

static int
typestate___TypeState_clear(mypy___typestate___TypeStateObject *self)
{
    Py_CLEAR(self->__subtype_caches);
    Py_CLEAR(self->__negative_subtype_caches);
    Py_CLEAR(self->_proto_deps);
    Py_CLEAR(self->__attempted_protocols);
    Py_CLEAR(self->__checked_against_members);
    Py_CLEAR(self->__rechecked_types);
    Py_CLEAR(self->__assuming);
    Py_CLEAR(self->__assuming_proper);
    Py_CLEAR(self->_inferring);
    return 0;
}

static void
typestate___TypeState_dealloc(mypy___typestate___TypeStateObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, typestate___TypeState_dealloc)
    typestate___TypeState_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem typestate___TypeState_vtable[16];
static bool
CPyDef_typestate___TypeState_trait_vtable_setup(void)
{
    CPyVTableItem typestate___TypeState_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_typestate___TypeState_____init__,
        (CPyVTableItem)CPyDef_typestate___TypeState___is_assumed_subtype,
        (CPyVTableItem)CPyDef_typestate___TypeState___is_assumed_proper_subtype,
        (CPyVTableItem)CPyDef_typestate___TypeState___get_assumptions,
        (CPyVTableItem)CPyDef_typestate___TypeState___reset_all_subtype_caches,
        (CPyVTableItem)CPyDef_typestate___TypeState___reset_subtype_caches_for,
        (CPyVTableItem)CPyDef_typestate___TypeState___reset_all_subtype_caches_for,
        (CPyVTableItem)CPyDef_typestate___TypeState___is_cached_subtype_check,
        (CPyVTableItem)CPyDef_typestate___TypeState___is_cached_negative_subtype_check,
        (CPyVTableItem)CPyDef_typestate___TypeState___record_subtype_cache_entry,
        (CPyVTableItem)CPyDef_typestate___TypeState___record_negative_subtype_cache_entry,
        (CPyVTableItem)CPyDef_typestate___TypeState___reset_protocol_deps,
        (CPyVTableItem)CPyDef_typestate___TypeState___record_protocol_subtype_check,
        (CPyVTableItem)CPyDef_typestate___TypeState____snapshot_protocol_deps,
        (CPyVTableItem)CPyDef_typestate___TypeState___update_protocol_deps,
        (CPyVTableItem)CPyDef_typestate___TypeState___add_all_protocol_deps,
    };
    memcpy(typestate___TypeState_vtable, typestate___TypeState_vtable_scratch, sizeof(typestate___TypeState_vtable));
    return 1;
}

static PyObject *
typestate___TypeState_get__subtype_caches(mypy___typestate___TypeStateObject *self, void *closure);
static int
typestate___TypeState_set__subtype_caches(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure);
static PyObject *
typestate___TypeState_get__negative_subtype_caches(mypy___typestate___TypeStateObject *self, void *closure);
static int
typestate___TypeState_set__negative_subtype_caches(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure);
static PyObject *
typestate___TypeState_get_proto_deps(mypy___typestate___TypeStateObject *self, void *closure);
static int
typestate___TypeState_set_proto_deps(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure);
static PyObject *
typestate___TypeState_get__attempted_protocols(mypy___typestate___TypeStateObject *self, void *closure);
static int
typestate___TypeState_set__attempted_protocols(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure);
static PyObject *
typestate___TypeState_get__checked_against_members(mypy___typestate___TypeStateObject *self, void *closure);
static int
typestate___TypeState_set__checked_against_members(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure);
static PyObject *
typestate___TypeState_get__rechecked_types(mypy___typestate___TypeStateObject *self, void *closure);
static int
typestate___TypeState_set__rechecked_types(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure);
static PyObject *
typestate___TypeState_get__assuming(mypy___typestate___TypeStateObject *self, void *closure);
static int
typestate___TypeState_set__assuming(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure);
static PyObject *
typestate___TypeState_get__assuming_proper(mypy___typestate___TypeStateObject *self, void *closure);
static int
typestate___TypeState_set__assuming_proper(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure);
static PyObject *
typestate___TypeState_get_inferring(mypy___typestate___TypeStateObject *self, void *closure);
static int
typestate___TypeState_set_inferring(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure);
static PyObject *
typestate___TypeState_get_infer_unions(mypy___typestate___TypeStateObject *self, void *closure);
static int
typestate___TypeState_set_infer_unions(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure);
static PyObject *
typestate___TypeState_get_infer_polymorphic(mypy___typestate___TypeStateObject *self, void *closure);
static int
typestate___TypeState_set_infer_polymorphic(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure);

static PyGetSetDef typestate___TypeState_getseters[] = {
    {"_subtype_caches",
     (getter)typestate___TypeState_get__subtype_caches, (setter)typestate___TypeState_set__subtype_caches,
     NULL, NULL},
    {"_negative_subtype_caches",
     (getter)typestate___TypeState_get__negative_subtype_caches, (setter)typestate___TypeState_set__negative_subtype_caches,
     NULL, NULL},
    {"proto_deps",
     (getter)typestate___TypeState_get_proto_deps, (setter)typestate___TypeState_set_proto_deps,
     NULL, NULL},
    {"_attempted_protocols",
     (getter)typestate___TypeState_get__attempted_protocols, (setter)typestate___TypeState_set__attempted_protocols,
     NULL, NULL},
    {"_checked_against_members",
     (getter)typestate___TypeState_get__checked_against_members, (setter)typestate___TypeState_set__checked_against_members,
     NULL, NULL},
    {"_rechecked_types",
     (getter)typestate___TypeState_get__rechecked_types, (setter)typestate___TypeState_set__rechecked_types,
     NULL, NULL},
    {"_assuming",
     (getter)typestate___TypeState_get__assuming, (setter)typestate___TypeState_set__assuming,
     NULL, NULL},
    {"_assuming_proper",
     (getter)typestate___TypeState_get__assuming_proper, (setter)typestate___TypeState_set__assuming_proper,
     NULL, NULL},
    {"inferring",
     (getter)typestate___TypeState_get_inferring, (setter)typestate___TypeState_set_inferring,
     NULL, NULL},
    {"infer_unions",
     (getter)typestate___TypeState_get_infer_unions, (setter)typestate___TypeState_set_infer_unions,
     NULL, NULL},
    {"infer_polymorphic",
     (getter)typestate___TypeState_get_infer_polymorphic, (setter)typestate___TypeState_set_infer_polymorphic,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef typestate___TypeState_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy_typestate___TypeState_____init__,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_assumed_subtype",
     (PyCFunction)CPyPy_typestate___TypeState___is_assumed_subtype,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_assumed_proper_subtype",
     (PyCFunction)CPyPy_typestate___TypeState___is_assumed_proper_subtype,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"get_assumptions",
     (PyCFunction)CPyPy_typestate___TypeState___get_assumptions,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"reset_all_subtype_caches",
     (PyCFunction)CPyPy_typestate___TypeState___reset_all_subtype_caches,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"reset_subtype_caches_for",
     (PyCFunction)CPyPy_typestate___TypeState___reset_subtype_caches_for,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"reset_all_subtype_caches_for",
     (PyCFunction)CPyPy_typestate___TypeState___reset_all_subtype_caches_for,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_cached_subtype_check",
     (PyCFunction)CPyPy_typestate___TypeState___is_cached_subtype_check,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"is_cached_negative_subtype_check",
     (PyCFunction)CPyPy_typestate___TypeState___is_cached_negative_subtype_check,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_subtype_cache_entry",
     (PyCFunction)CPyPy_typestate___TypeState___record_subtype_cache_entry,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_negative_subtype_cache_entry",
     (PyCFunction)CPyPy_typestate___TypeState___record_negative_subtype_cache_entry,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"reset_protocol_deps",
     (PyCFunction)CPyPy_typestate___TypeState___reset_protocol_deps,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"record_protocol_subtype_check",
     (PyCFunction)CPyPy_typestate___TypeState___record_protocol_subtype_check,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"_snapshot_protocol_deps",
     (PyCFunction)CPyPy_typestate___TypeState____snapshot_protocol_deps,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"update_protocol_deps",
     (PyCFunction)CPyPy_typestate___TypeState___update_protocol_deps,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"add_all_protocol_deps",
     (PyCFunction)CPyPy_typestate___TypeState___add_all_protocol_deps,
     METH_FASTCALL | METH_KEYWORDS, NULL},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_typestate___TypeState_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "TypeState",
    .tp_new = typestate___TypeState_new,
    .tp_dealloc = (destructor)typestate___TypeState_dealloc,
    .tp_traverse = (traverseproc)typestate___TypeState_traverse,
    .tp_clear = (inquiry)typestate___TypeState_clear,
    .tp_getset = typestate___TypeState_getseters,
    .tp_methods = typestate___TypeState_methods,
    .tp_init = typestate___TypeState_init,
    .tp_basicsize = sizeof(mypy___typestate___TypeStateObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
};
static PyTypeObject *CPyType_typestate___TypeState_template = &CPyType_typestate___TypeState_template_;

static PyObject *
typestate___TypeState_setup(PyTypeObject *type)
{
    mypy___typestate___TypeStateObject *self;
    self = (mypy___typestate___TypeStateObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = typestate___TypeState_vtable;
    self->_infer_unions = 2;
    self->_infer_polymorphic = 2;
    return (PyObject *)self;
}

PyObject *CPyDef_typestate___TypeState(void)
{
    PyObject *self = typestate___TypeState_setup(CPyType_typestate___TypeState);
    if (self == NULL)
        return NULL;
    char res = CPyDef_typestate___TypeState_____init__(self);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
typestate___TypeState_get__subtype_caches(mypy___typestate___TypeStateObject *self, void *closure)
{
    if (unlikely(self->__subtype_caches == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_subtype_caches' of 'TypeState' undefined");
        return NULL;
    }
    CPy_INCREF(self->__subtype_caches);
    PyObject *retval = self->__subtype_caches;
    return retval;
}

static int
typestate___TypeState_set__subtype_caches(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeState' object attribute '_subtype_caches' cannot be deleted");
        return -1;
    }
    if (self->__subtype_caches != NULL) {
        CPy_DECREF(self->__subtype_caches);
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
    self->__subtype_caches = tmp;
    return 0;
}

static PyObject *
typestate___TypeState_get__negative_subtype_caches(mypy___typestate___TypeStateObject *self, void *closure)
{
    if (unlikely(self->__negative_subtype_caches == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_negative_subtype_caches' of 'TypeState' undefined");
        return NULL;
    }
    CPy_INCREF(self->__negative_subtype_caches);
    PyObject *retval = self->__negative_subtype_caches;
    return retval;
}

static int
typestate___TypeState_set__negative_subtype_caches(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeState' object attribute '_negative_subtype_caches' cannot be deleted");
        return -1;
    }
    if (self->__negative_subtype_caches != NULL) {
        CPy_DECREF(self->__negative_subtype_caches);
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
    self->__negative_subtype_caches = tmp;
    return 0;
}

static PyObject *
typestate___TypeState_get_proto_deps(mypy___typestate___TypeStateObject *self, void *closure)
{
    if (unlikely(self->_proto_deps == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'proto_deps' of 'TypeState' undefined");
        return NULL;
    }
    CPy_INCREF(self->_proto_deps);
    PyObject *retval = self->_proto_deps;
    return retval;
}

static int
typestate___TypeState_set_proto_deps(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeState' object attribute 'proto_deps' cannot be deleted");
        return -1;
    }
    if (self->_proto_deps != NULL) {
        CPy_DECREF(self->_proto_deps);
    }
    PyObject *tmp;
    if (PyDict_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL8064;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL8064;
    CPy_TypeError("dict or None", value); 
    tmp = NULL;
__LL8064: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_proto_deps = tmp;
    return 0;
}

static PyObject *
typestate___TypeState_get__attempted_protocols(mypy___typestate___TypeStateObject *self, void *closure)
{
    if (unlikely(self->__attempted_protocols == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_attempted_protocols' of 'TypeState' undefined");
        return NULL;
    }
    CPy_INCREF(self->__attempted_protocols);
    PyObject *retval = self->__attempted_protocols;
    return retval;
}

static int
typestate___TypeState_set__attempted_protocols(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeState' object attribute '_attempted_protocols' cannot be deleted");
        return -1;
    }
    if (self->__attempted_protocols != NULL) {
        CPy_DECREF(self->__attempted_protocols);
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
    self->__attempted_protocols = tmp;
    return 0;
}

static PyObject *
typestate___TypeState_get__checked_against_members(mypy___typestate___TypeStateObject *self, void *closure)
{
    if (unlikely(self->__checked_against_members == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_checked_against_members' of 'TypeState' undefined");
        return NULL;
    }
    CPy_INCREF(self->__checked_against_members);
    PyObject *retval = self->__checked_against_members;
    return retval;
}

static int
typestate___TypeState_set__checked_against_members(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeState' object attribute '_checked_against_members' cannot be deleted");
        return -1;
    }
    if (self->__checked_against_members != NULL) {
        CPy_DECREF(self->__checked_against_members);
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
    self->__checked_against_members = tmp;
    return 0;
}

static PyObject *
typestate___TypeState_get__rechecked_types(mypy___typestate___TypeStateObject *self, void *closure)
{
    if (unlikely(self->__rechecked_types == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_rechecked_types' of 'TypeState' undefined");
        return NULL;
    }
    CPy_INCREF(self->__rechecked_types);
    PyObject *retval = self->__rechecked_types;
    return retval;
}

static int
typestate___TypeState_set__rechecked_types(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeState' object attribute '_rechecked_types' cannot be deleted");
        return -1;
    }
    if (self->__rechecked_types != NULL) {
        CPy_DECREF(self->__rechecked_types);
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
    self->__rechecked_types = tmp;
    return 0;
}

static PyObject *
typestate___TypeState_get__assuming(mypy___typestate___TypeStateObject *self, void *closure)
{
    if (unlikely(self->__assuming == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_assuming' of 'TypeState' undefined");
        return NULL;
    }
    CPy_INCREF(self->__assuming);
    PyObject *retval = self->__assuming;
    return retval;
}

static int
typestate___TypeState_set__assuming(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeState' object attribute '_assuming' cannot be deleted");
        return -1;
    }
    if (self->__assuming != NULL) {
        CPy_DECREF(self->__assuming);
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
    self->__assuming = tmp;
    return 0;
}

static PyObject *
typestate___TypeState_get__assuming_proper(mypy___typestate___TypeStateObject *self, void *closure)
{
    if (unlikely(self->__assuming_proper == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_assuming_proper' of 'TypeState' undefined");
        return NULL;
    }
    CPy_INCREF(self->__assuming_proper);
    PyObject *retval = self->__assuming_proper;
    return retval;
}

static int
typestate___TypeState_set__assuming_proper(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeState' object attribute '_assuming_proper' cannot be deleted");
        return -1;
    }
    if (self->__assuming_proper != NULL) {
        CPy_DECREF(self->__assuming_proper);
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
    self->__assuming_proper = tmp;
    return 0;
}

static PyObject *
typestate___TypeState_get_inferring(mypy___typestate___TypeStateObject *self, void *closure)
{
    if (unlikely(self->_inferring == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'inferring' of 'TypeState' undefined");
        return NULL;
    }
    CPy_INCREF(self->_inferring);
    PyObject *retval = self->_inferring;
    return retval;
}

static int
typestate___TypeState_set_inferring(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeState' object attribute 'inferring' cannot be deleted");
        return -1;
    }
    if (self->_inferring != NULL) {
        CPy_DECREF(self->_inferring);
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
    self->_inferring = tmp;
    return 0;
}

static PyObject *
typestate___TypeState_get_infer_unions(mypy___typestate___TypeStateObject *self, void *closure)
{
    PyObject *retval = self->_infer_unions ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
typestate___TypeState_set_infer_unions(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeState' object attribute 'infer_unions' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_infer_unions = tmp;
    return 0;
}

static PyObject *
typestate___TypeState_get_infer_polymorphic(mypy___typestate___TypeStateObject *self, void *closure)
{
    PyObject *retval = self->_infer_polymorphic ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
typestate___TypeState_set_infer_polymorphic(mypy___typestate___TypeStateObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'TypeState' object attribute 'infer_polymorphic' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->_infer_polymorphic = tmp;
    return 0;
}
static PyMethodDef typestatemodule_methods[] = {
    {"reset_global_state", (PyCFunction)CPyPy_typestate___reset_global_state, METH_FASTCALL | METH_KEYWORDS, NULL /* docstring */},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef typestatemodule = {
    PyModuleDef_HEAD_INIT,
    "mypy.typestate",
    NULL, /* docstring */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    typestatemodule_methods
};

PyObject *CPyInit_mypy___typestate(void)
{
    PyObject* modname = NULL;
    if (CPyModule_mypy___typestate_internal) {
        Py_INCREF(CPyModule_mypy___typestate_internal);
        return CPyModule_mypy___typestate_internal;
    }
    CPyModule_mypy___typestate_internal = PyModule_Create(&typestatemodule);
    if (unlikely(CPyModule_mypy___typestate_internal == NULL))
        goto fail;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_mypy___typestate_internal, "__name__");
    CPyStatic_typestate___globals = PyModule_GetDict(CPyModule_mypy___typestate_internal);
    if (unlikely(CPyStatic_typestate___globals == NULL))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef_typestate_____top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return CPyModule_mypy___typestate_internal;
    fail:
    Py_CLEAR(CPyModule_mypy___typestate_internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_typestate___type_state);
    CPyStatic_typestate___type_state = NULL;
    Py_CLEAR(CPyType_typestate___TypeState);
    return NULL;
}

char CPyDef_typestate___TypeState_____init__(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "__init__", 106, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    ((mypy___typestate___TypeStateObject *)cpy_r_self)->__subtype_caches = cpy_r_r0;
    cpy_r_r1 = PyDict_New();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "__init__", 107, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    ((mypy___typestate___TypeStateObject *)cpy_r_self)->__negative_subtype_caches = cpy_r_r1;
    cpy_r_r2 = PyDict_New();
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "__init__", 108, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    ((mypy___typestate___TypeStateObject *)cpy_r_self)->_proto_deps = cpy_r_r2;
    cpy_r_r3 = PyDict_New();
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "__init__", 109, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    ((mypy___typestate___TypeStateObject *)cpy_r_self)->__attempted_protocols = cpy_r_r3;
    cpy_r_r4 = PyDict_New();
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "__init__", 110, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    ((mypy___typestate___TypeStateObject *)cpy_r_self)->__checked_against_members = cpy_r_r4;
    cpy_r_r5 = PySet_New(NULL);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "__init__", 111, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    ((mypy___typestate___TypeStateObject *)cpy_r_self)->__rechecked_types = cpy_r_r5;
    cpy_r_r6 = PyList_New(0);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "__init__", 112, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    ((mypy___typestate___TypeStateObject *)cpy_r_self)->__assuming = cpy_r_r6;
    cpy_r_r7 = PyList_New(0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "__init__", 113, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    ((mypy___typestate___TypeStateObject *)cpy_r_self)->__assuming_proper = cpy_r_r7;
    cpy_r_r8 = PyList_New(0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "__init__", 114, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    ((mypy___typestate___TypeStateObject *)cpy_r_self)->_inferring = cpy_r_r8;
    ((mypy___typestate___TypeStateObject *)cpy_r_self)->_infer_unions = 0;
    ((mypy___typestate___TypeStateObject *)cpy_r_self)->_infer_polymorphic = 0;
    return 1;
CPyL10: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyObject *CPyPy_typestate___TypeState_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "", "__init__", kwlist)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typestate___TypeState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typestate.TypeState", obj_self); 
        goto fail;
    }
    char retval = CPyDef_typestate___TypeState_____init__(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "__init__", 105, CPyStatic_typestate___globals);
    return NULL;
}

char CPyDef_typestate___TypeState___is_assumed_subtype(PyObject *cpy_r_self, PyObject *cpy_r_left, PyObject *cpy_r_right) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    int64_t cpy_r_r6;
    char cpy_r_r7;
    int64_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    int64_t cpy_r_r18;
    char cpy_r_r19;
    int64_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    tuple_T2OO cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_l;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    cpy_r_r0 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__assuming;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyTagged_Subtract(cpy_r_r3, 2);
    cpy_r_r5 = cpy_r_r4;
CPyL1: ;
    cpy_r_r6 = cpy_r_r5 & 1;
    cpy_r_r7 = cpy_r_r6 == 0;
    cpy_r_r8 = 0 & 1;
    cpy_r_r9 = cpy_r_r8 == 0;
    cpy_r_r10 = cpy_r_r7 & cpy_r_r9;
    if (!cpy_r_r10) goto CPyL3;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r5 >= (Py_ssize_t)0;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL4;
CPyL3: ;
    cpy_r_r13 = CPyTagged_IsLt_(cpy_r_r5, 0);
    cpy_r_r14 = cpy_r_r13 ^ 1;
    cpy_r_r12 = cpy_r_r14;
CPyL4: ;
    if (!cpy_r_r12) goto CPyL29;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = cpy_r_r5 & 1;
    cpy_r_r19 = cpy_r_r18 == 0;
    cpy_r_r20 = cpy_r_r17 & 1;
    cpy_r_r21 = cpy_r_r20 == 0;
    cpy_r_r22 = cpy_r_r19 & cpy_r_r21;
    if (!cpy_r_r22) goto CPyL7;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r17;
    cpy_r_r24 = cpy_r_r23;
    goto CPyL8;
CPyL7: ;
    cpy_r_r25 = CPyTagged_IsLt_(cpy_r_r5, cpy_r_r17);
    cpy_r_r24 = cpy_r_r25;
CPyL8: ;
    if (!cpy_r_r24) goto CPyL29;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r26 = CPyTagged_StealAsObject(cpy_r_r5);
    if (likely(PyLong_Check(cpy_r_r26)))
        cpy_r_r27 = CPyTagged_FromObject(cpy_r_r26);
    else {
        CPy_TypeError("short_int", cpy_r_r26); cpy_r_r27 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_subtype", 119, CPyStatic_typestate___globals);
        goto CPyL30;
    }
    cpy_r_r28 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r27);
    PyObject *__tmp8065;
    if (unlikely(!(PyTuple_Check(cpy_r_r28) && PyTuple_GET_SIZE(cpy_r_r28) == 2))) {
        __tmp8065 = NULL;
        goto __LL8066;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r28, 0), CPyType_types___Type)))
        __tmp8065 = PyTuple_GET_ITEM(cpy_r_r28, 0);
    else {
        __tmp8065 = NULL;
    }
    if (__tmp8065 == NULL) goto __LL8066;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r28, 1), CPyType_types___Type)))
        __tmp8065 = PyTuple_GET_ITEM(cpy_r_r28, 1);
    else {
        __tmp8065 = NULL;
    }
    if (__tmp8065 == NULL) goto __LL8066;
    __tmp8065 = cpy_r_r28;
__LL8066: ;
    if (unlikely(__tmp8065 == NULL)) {
        CPy_TypeError("tuple[mypy.types.Type, mypy.types.Type]", cpy_r_r28); cpy_r_r29 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8067 = PyTuple_GET_ITEM(cpy_r_r28, 0);
        CPy_INCREF(__tmp8067);
        PyObject *__tmp8068;
        if (likely(PyObject_TypeCheck(__tmp8067, CPyType_types___Type)))
            __tmp8068 = __tmp8067;
        else {
            CPy_TypeError("mypy.types.Type", __tmp8067); 
            __tmp8068 = NULL;
        }
        cpy_r_r29.f0 = __tmp8068;
        PyObject *__tmp8069 = PyTuple_GET_ITEM(cpy_r_r28, 1);
        CPy_INCREF(__tmp8069);
        PyObject *__tmp8070;
        if (likely(PyObject_TypeCheck(__tmp8069, CPyType_types___Type)))
            __tmp8070 = __tmp8069;
        else {
            CPy_TypeError("mypy.types.Type", __tmp8069); 
            __tmp8070 = NULL;
        }
        cpy_r_r29.f1 = __tmp8070;
    }
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29.f0 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_subtype", 119, CPyStatic_typestate___globals);
        goto CPyL30;
    }
    cpy_r_r30 = cpy_r_r29.f0;
    CPy_INCREF(cpy_r_r30);
    cpy_r_l = cpy_r_r30;
    cpy_r_r31 = cpy_r_r29.f1;
    CPy_INCREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r29.f0);
    CPy_DECREF(cpy_r_r29.f1);
    cpy_r_r = cpy_r_r31;
    cpy_r_r32 = CPyDef_types___get_proper_type(cpy_r_l);
    CPy_DECREF(cpy_r_l);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_subtype", 120, CPyStatic_typestate___globals);
        goto CPyL31;
    }
    if (likely(cpy_r_r32 != Py_None))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "is_assumed_subtype", 120, CPyStatic_typestate___globals, "mypy.types.ProperType", cpy_r_r32);
        goto CPyL31;
    }
    cpy_r_r34 = CPyDef_types___get_proper_type(cpy_r_left);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_subtype", 120, CPyStatic_typestate___globals);
        goto CPyL32;
    }
    if (likely(cpy_r_r34 != Py_None))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "is_assumed_subtype", 120, CPyStatic_typestate___globals, "mypy.types.ProperType", cpy_r_r34);
        goto CPyL32;
    }
    cpy_r_r36 = PyObject_RichCompare(cpy_r_r33, cpy_r_r35, 2);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_subtype", 120, CPyStatic_typestate___globals);
        goto CPyL31;
    }
    if (unlikely(!PyBool_Check(cpy_r_r36))) {
        CPy_TypeError("bool", cpy_r_r36); cpy_r_r37 = 2;
    } else
        cpy_r_r37 = cpy_r_r36 == Py_True;
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_subtype", 120, CPyStatic_typestate___globals);
        goto CPyL31;
    }
    if (!cpy_r_r37) goto CPyL33;
    cpy_r_r38 = CPyDef_types___get_proper_type(cpy_r_r);
    CPy_DECREF(cpy_r_r);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_subtype", 120, CPyStatic_typestate___globals);
        goto CPyL30;
    }
    if (likely(cpy_r_r38 != Py_None))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "is_assumed_subtype", 120, CPyStatic_typestate___globals, "mypy.types.ProperType", cpy_r_r38);
        goto CPyL30;
    }
    cpy_r_r40 = CPyDef_types___get_proper_type(cpy_r_right);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_subtype", 122, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    if (likely(cpy_r_r40 != Py_None))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "is_assumed_subtype", 122, CPyStatic_typestate___globals, "mypy.types.ProperType", cpy_r_r40);
        goto CPyL34;
    }
    cpy_r_r42 = PyObject_RichCompare(cpy_r_r39, cpy_r_r41, 2);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_subtype", 120, CPyStatic_typestate___globals);
        goto CPyL30;
    }
    if (unlikely(!PyBool_Check(cpy_r_r42))) {
        CPy_TypeError("bool", cpy_r_r42); cpy_r_r43 = 2;
    } else
        cpy_r_r43 = cpy_r_r42 == Py_True;
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_subtype", 120, CPyStatic_typestate___globals);
        goto CPyL30;
    }
    if (cpy_r_r43) {
        goto CPyL35;
    } else
        goto CPyL26;
CPyL25: ;
    return 1;
CPyL26: ;
    cpy_r_r44 = cpy_r_r5 + -2;
    CPyTagged_DECREF(cpy_r_r5);
    cpy_r_r5 = cpy_r_r44;
    goto CPyL1;
CPyL27: ;
    return 0;
CPyL28: ;
    cpy_r_r45 = 2;
    return cpy_r_r45;
CPyL29: ;
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r5);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r5);
    goto CPyL28;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r);
    goto CPyL28;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r);
    CPy_DecRef(cpy_r_r33);
    goto CPyL28;
CPyL33: ;
    CPy_DECREF(cpy_r_r);
    goto CPyL26;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r39);
    goto CPyL28;
CPyL35: ;
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r5);
    goto CPyL25;
}

PyObject *CPyPy_typestate___TypeState___is_assumed_subtype(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", "right", 0};
    static CPyArg_Parser parser = {"OO:is_assumed_subtype", kwlist, 0};
    PyObject *obj_left;
    PyObject *obj_right;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_left, &obj_right)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typestate___TypeState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typestate.TypeState", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(PyObject_TypeCheck(obj_left, CPyType_types___Type)))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypy.types.Type", obj_left); 
        goto fail;
    }
    PyObject *arg_right;
    if (likely(PyObject_TypeCheck(obj_right, CPyType_types___Type)))
        arg_right = obj_right;
    else {
        CPy_TypeError("mypy.types.Type", obj_right); 
        goto fail;
    }
    char retval = CPyDef_typestate___TypeState___is_assumed_subtype(arg_self, arg_left, arg_right);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "is_assumed_subtype", 118, CPyStatic_typestate___globals);
    return NULL;
}

char CPyDef_typestate___TypeState___is_assumed_proper_subtype(PyObject *cpy_r_self, PyObject *cpy_r_left, PyObject *cpy_r_right) {
    PyObject *cpy_r_r0;
    CPyPtr cpy_r_r1;
    int64_t cpy_r_r2;
    CPyTagged cpy_r_r3;
    CPyTagged cpy_r_r4;
    CPyTagged cpy_r_r5;
    int64_t cpy_r_r6;
    char cpy_r_r7;
    int64_t cpy_r_r8;
    char cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    CPyPtr cpy_r_r15;
    int64_t cpy_r_r16;
    CPyTagged cpy_r_r17;
    int64_t cpy_r_r18;
    char cpy_r_r19;
    int64_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    PyObject *cpy_r_r26;
    CPyTagged cpy_r_r27;
    PyObject *cpy_r_r28;
    tuple_T2OO cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_l;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    char cpy_r_r43;
    CPyTagged cpy_r_r44;
    char cpy_r_r45;
    cpy_r_r0 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__assuming_proper;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r2 = *(int64_t *)cpy_r_r1;
    cpy_r_r3 = cpy_r_r2 << 1;
    cpy_r_r4 = CPyTagged_Subtract(cpy_r_r3, 2);
    cpy_r_r5 = cpy_r_r4;
CPyL1: ;
    cpy_r_r6 = cpy_r_r5 & 1;
    cpy_r_r7 = cpy_r_r6 == 0;
    cpy_r_r8 = 0 & 1;
    cpy_r_r9 = cpy_r_r8 == 0;
    cpy_r_r10 = cpy_r_r7 & cpy_r_r9;
    if (!cpy_r_r10) goto CPyL3;
    cpy_r_r11 = (Py_ssize_t)cpy_r_r5 >= (Py_ssize_t)0;
    cpy_r_r12 = cpy_r_r11;
    goto CPyL4;
CPyL3: ;
    cpy_r_r13 = CPyTagged_IsLt_(cpy_r_r5, 0);
    cpy_r_r14 = cpy_r_r13 ^ 1;
    cpy_r_r12 = cpy_r_r14;
CPyL4: ;
    if (!cpy_r_r12) goto CPyL29;
    cpy_r_r15 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r16 = *(int64_t *)cpy_r_r15;
    cpy_r_r17 = cpy_r_r16 << 1;
    cpy_r_r18 = cpy_r_r5 & 1;
    cpy_r_r19 = cpy_r_r18 == 0;
    cpy_r_r20 = cpy_r_r17 & 1;
    cpy_r_r21 = cpy_r_r20 == 0;
    cpy_r_r22 = cpy_r_r19 & cpy_r_r21;
    if (!cpy_r_r22) goto CPyL7;
    cpy_r_r23 = (Py_ssize_t)cpy_r_r5 < (Py_ssize_t)cpy_r_r17;
    cpy_r_r24 = cpy_r_r23;
    goto CPyL8;
CPyL7: ;
    cpy_r_r25 = CPyTagged_IsLt_(cpy_r_r5, cpy_r_r17);
    cpy_r_r24 = cpy_r_r25;
CPyL8: ;
    if (!cpy_r_r24) goto CPyL29;
    CPyTagged_INCREF(cpy_r_r5);
    cpy_r_r26 = CPyTagged_StealAsObject(cpy_r_r5);
    if (likely(PyLong_Check(cpy_r_r26)))
        cpy_r_r27 = CPyTagged_FromObject(cpy_r_r26);
    else {
        CPy_TypeError("short_int", cpy_r_r26); cpy_r_r27 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r26);
    if (unlikely(cpy_r_r27 == CPY_INT_TAG)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_proper_subtype", 127, CPyStatic_typestate___globals);
        goto CPyL30;
    }
    cpy_r_r28 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r27);
    PyObject *__tmp8071;
    if (unlikely(!(PyTuple_Check(cpy_r_r28) && PyTuple_GET_SIZE(cpy_r_r28) == 2))) {
        __tmp8071 = NULL;
        goto __LL8072;
    }
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r28, 0), CPyType_types___Type)))
        __tmp8071 = PyTuple_GET_ITEM(cpy_r_r28, 0);
    else {
        __tmp8071 = NULL;
    }
    if (__tmp8071 == NULL) goto __LL8072;
    if (likely(PyObject_TypeCheck(PyTuple_GET_ITEM(cpy_r_r28, 1), CPyType_types___Type)))
        __tmp8071 = PyTuple_GET_ITEM(cpy_r_r28, 1);
    else {
        __tmp8071 = NULL;
    }
    if (__tmp8071 == NULL) goto __LL8072;
    __tmp8071 = cpy_r_r28;
__LL8072: ;
    if (unlikely(__tmp8071 == NULL)) {
        CPy_TypeError("tuple[mypy.types.Type, mypy.types.Type]", cpy_r_r28); cpy_r_r29 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp8073 = PyTuple_GET_ITEM(cpy_r_r28, 0);
        CPy_INCREF(__tmp8073);
        PyObject *__tmp8074;
        if (likely(PyObject_TypeCheck(__tmp8073, CPyType_types___Type)))
            __tmp8074 = __tmp8073;
        else {
            CPy_TypeError("mypy.types.Type", __tmp8073); 
            __tmp8074 = NULL;
        }
        cpy_r_r29.f0 = __tmp8074;
        PyObject *__tmp8075 = PyTuple_GET_ITEM(cpy_r_r28, 1);
        CPy_INCREF(__tmp8075);
        PyObject *__tmp8076;
        if (likely(PyObject_TypeCheck(__tmp8075, CPyType_types___Type)))
            __tmp8076 = __tmp8075;
        else {
            CPy_TypeError("mypy.types.Type", __tmp8075); 
            __tmp8076 = NULL;
        }
        cpy_r_r29.f1 = __tmp8076;
    }
    CPy_DECREF(cpy_r_r28);
    if (unlikely(cpy_r_r29.f0 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_proper_subtype", 127, CPyStatic_typestate___globals);
        goto CPyL30;
    }
    cpy_r_r30 = cpy_r_r29.f0;
    CPy_INCREF(cpy_r_r30);
    cpy_r_l = cpy_r_r30;
    cpy_r_r31 = cpy_r_r29.f1;
    CPy_INCREF(cpy_r_r31);
    CPy_DECREF(cpy_r_r29.f0);
    CPy_DECREF(cpy_r_r29.f1);
    cpy_r_r = cpy_r_r31;
    cpy_r_r32 = CPyDef_types___get_proper_type(cpy_r_l);
    CPy_DECREF(cpy_r_l);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_proper_subtype", 128, CPyStatic_typestate___globals);
        goto CPyL31;
    }
    if (likely(cpy_r_r32 != Py_None))
        cpy_r_r33 = cpy_r_r32;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "is_assumed_proper_subtype", 128, CPyStatic_typestate___globals, "mypy.types.ProperType", cpy_r_r32);
        goto CPyL31;
    }
    cpy_r_r34 = CPyDef_types___get_proper_type(cpy_r_left);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_proper_subtype", 128, CPyStatic_typestate___globals);
        goto CPyL32;
    }
    if (likely(cpy_r_r34 != Py_None))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "is_assumed_proper_subtype", 128, CPyStatic_typestate___globals, "mypy.types.ProperType", cpy_r_r34);
        goto CPyL32;
    }
    cpy_r_r36 = PyObject_RichCompare(cpy_r_r33, cpy_r_r35, 2);
    CPy_DECREF(cpy_r_r33);
    CPy_DECREF(cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_proper_subtype", 128, CPyStatic_typestate___globals);
        goto CPyL31;
    }
    if (unlikely(!PyBool_Check(cpy_r_r36))) {
        CPy_TypeError("bool", cpy_r_r36); cpy_r_r37 = 2;
    } else
        cpy_r_r37 = cpy_r_r36 == Py_True;
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_proper_subtype", 128, CPyStatic_typestate___globals);
        goto CPyL31;
    }
    if (!cpy_r_r37) goto CPyL33;
    cpy_r_r38 = CPyDef_types___get_proper_type(cpy_r_r);
    CPy_DECREF(cpy_r_r);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_proper_subtype", 128, CPyStatic_typestate___globals);
        goto CPyL30;
    }
    if (likely(cpy_r_r38 != Py_None))
        cpy_r_r39 = cpy_r_r38;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "is_assumed_proper_subtype", 128, CPyStatic_typestate___globals, "mypy.types.ProperType", cpy_r_r38);
        goto CPyL30;
    }
    cpy_r_r40 = CPyDef_types___get_proper_type(cpy_r_right);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_proper_subtype", 130, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    if (likely(cpy_r_r40 != Py_None))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "is_assumed_proper_subtype", 130, CPyStatic_typestate___globals, "mypy.types.ProperType", cpy_r_r40);
        goto CPyL34;
    }
    cpy_r_r42 = PyObject_RichCompare(cpy_r_r39, cpy_r_r41, 2);
    CPy_DECREF(cpy_r_r39);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_proper_subtype", 128, CPyStatic_typestate___globals);
        goto CPyL30;
    }
    if (unlikely(!PyBool_Check(cpy_r_r42))) {
        CPy_TypeError("bool", cpy_r_r42); cpy_r_r43 = 2;
    } else
        cpy_r_r43 = cpy_r_r42 == Py_True;
    CPy_DECREF(cpy_r_r42);
    if (unlikely(cpy_r_r43 == 2)) {
        CPy_AddTraceback("mypy/typestate.py", "is_assumed_proper_subtype", 128, CPyStatic_typestate___globals);
        goto CPyL30;
    }
    if (cpy_r_r43) {
        goto CPyL35;
    } else
        goto CPyL26;
CPyL25: ;
    return 1;
CPyL26: ;
    cpy_r_r44 = cpy_r_r5 + -2;
    CPyTagged_DECREF(cpy_r_r5);
    cpy_r_r5 = cpy_r_r44;
    goto CPyL1;
CPyL27: ;
    return 0;
CPyL28: ;
    cpy_r_r45 = 2;
    return cpy_r_r45;
CPyL29: ;
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r5);
    goto CPyL27;
CPyL30: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r5);
    goto CPyL28;
CPyL31: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r);
    goto CPyL28;
CPyL32: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r);
    CPy_DecRef(cpy_r_r33);
    goto CPyL28;
CPyL33: ;
    CPy_DECREF(cpy_r_r);
    goto CPyL26;
CPyL34: ;
    CPy_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r39);
    goto CPyL28;
CPyL35: ;
    CPy_DECREF(cpy_r_r0);
    CPyTagged_DECREF(cpy_r_r5);
    goto CPyL25;
}

PyObject *CPyPy_typestate___TypeState___is_assumed_proper_subtype(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left", "right", 0};
    static CPyArg_Parser parser = {"OO:is_assumed_proper_subtype", kwlist, 0};
    PyObject *obj_left;
    PyObject *obj_right;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_left, &obj_right)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typestate___TypeState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typestate.TypeState", obj_self); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(PyObject_TypeCheck(obj_left, CPyType_types___Type)))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypy.types.Type", obj_left); 
        goto fail;
    }
    PyObject *arg_right;
    if (likely(PyObject_TypeCheck(obj_right, CPyType_types___Type)))
        arg_right = obj_right;
    else {
        CPy_TypeError("mypy.types.Type", obj_right); 
        goto fail;
    }
    char retval = CPyDef_typestate___TypeState___is_assumed_proper_subtype(arg_self, arg_left, arg_right);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "is_assumed_proper_subtype", 126, CPyStatic_typestate___globals);
    return NULL;
}

PyObject *CPyDef_typestate___TypeState___get_assumptions(PyObject *cpy_r_self, char cpy_r_is_proper) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    if (!cpy_r_is_proper) goto CPyL2;
    cpy_r_r0 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__assuming_proper;
    CPy_INCREF(cpy_r_r0);
    return cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__assuming;
    CPy_INCREF(cpy_r_r1);
    return cpy_r_r1;
}

PyObject *CPyPy_typestate___TypeState___get_assumptions(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"is_proper", 0};
    static CPyArg_Parser parser = {"O:get_assumptions", kwlist, 0};
    PyObject *obj_is_proper;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_is_proper)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typestate___TypeState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typestate.TypeState", obj_self); 
        goto fail;
    }
    char arg_is_proper;
    if (unlikely(!PyBool_Check(obj_is_proper))) {
        CPy_TypeError("bool", obj_is_proper); goto fail;
    } else
        arg_is_proper = obj_is_proper == Py_True;
    PyObject *retval = CPyDef_typestate___TypeState___get_assumptions(arg_self, arg_is_proper);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "get_assumptions", 134, CPyStatic_typestate___globals);
    return NULL;
}

char CPyDef_typestate___TypeState___reset_all_subtype_caches(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    cpy_r_r0 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__subtype_caches;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = CPyDict_Clear(cpy_r_r0);
    CPy_DECREF(cpy_r_r0);
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_all_subtype_caches", 141, CPyStatic_typestate___globals);
        goto CPyL3;
    }
    cpy_r_r2 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__negative_subtype_caches;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDict_Clear(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_all_subtype_caches", 142, CPyStatic_typestate___globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r4 = 2;
    return cpy_r_r4;
}

PyObject *CPyPy_typestate___TypeState___reset_all_subtype_caches(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":reset_all_subtype_caches", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typestate___TypeState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typestate.TypeState", obj_self); 
        goto fail;
    }
    char retval = CPyDef_typestate___TypeState___reset_all_subtype_caches(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "reset_all_subtype_caches", 139, CPyStatic_typestate___globals);
    return NULL;
}

char CPyDef_typestate___TypeState___reset_subtype_caches_for(PyObject *cpy_r_self, PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    char cpy_r_r16;
    cpy_r_r0 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__subtype_caches;
    CPy_INCREF(cpy_r_r0);
    cpy_r_r1 = PyDict_Contains(cpy_r_r0, cpy_r_info);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_subtype_caches_for", 146, CPyStatic_typestate___globals);
        goto CPyL11;
    }
    cpy_r_r3 = cpy_r_r1;
    if (!cpy_r_r3) goto CPyL5;
    cpy_r_r4 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__subtype_caches;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDict_GetItem(cpy_r_r4, cpy_r_info);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_subtype_caches_for", 147, CPyStatic_typestate___globals);
        goto CPyL11;
    }
    if (likely(PyDict_Check(cpy_r_r5)))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "reset_subtype_caches_for", 147, CPyStatic_typestate___globals, "dict", cpy_r_r5);
        goto CPyL11;
    }
    cpy_r_r7 = CPyDict_Clear(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(!cpy_r_r7)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_subtype_caches_for", 147, CPyStatic_typestate___globals);
        goto CPyL11;
    }
CPyL5: ;
    cpy_r_r8 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__negative_subtype_caches;
    CPy_INCREF(cpy_r_r8);
    cpy_r_r9 = PyDict_Contains(cpy_r_r8, cpy_r_info);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_subtype_caches_for", 148, CPyStatic_typestate___globals);
        goto CPyL11;
    }
    cpy_r_r11 = cpy_r_r9;
    if (!cpy_r_r11) goto CPyL10;
    cpy_r_r12 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__negative_subtype_caches;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPyDict_GetItem(cpy_r_r12, cpy_r_info);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_subtype_caches_for", 149, CPyStatic_typestate___globals);
        goto CPyL11;
    }
    if (likely(PyDict_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "reset_subtype_caches_for", 149, CPyStatic_typestate___globals, "dict", cpy_r_r13);
        goto CPyL11;
    }
    cpy_r_r15 = CPyDict_Clear(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(!cpy_r_r15)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_subtype_caches_for", 149, CPyStatic_typestate___globals);
        goto CPyL11;
    }
CPyL10: ;
    return 1;
CPyL11: ;
    cpy_r_r16 = 2;
    return cpy_r_r16;
}

PyObject *CPyPy_typestate___TypeState___reset_subtype_caches_for(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:reset_subtype_caches_for", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typestate___TypeState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typestate.TypeState", obj_self); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    char retval = CPyDef_typestate___TypeState___reset_subtype_caches_for(arg_self, arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "reset_subtype_caches_for", 144, CPyStatic_typestate___globals);
    return NULL;
}

char CPyDef_typestate___TypeState___reset_all_subtype_caches_for(PyObject *cpy_r_self, PyObject *cpy_r_info) {
    PyObject *cpy_r_r0;
    CPyTagged cpy_r_r1;
    CPyPtr cpy_r_r2;
    int64_t cpy_r_r3;
    CPyTagged cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_item;
    char cpy_r_r8;
    CPyTagged cpy_r_r9;
    char cpy_r_r10;
    cpy_r_r0 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("mypy/typestate.py", "reset_all_subtype_caches_for", "TypeInfo", "mro", 153, CPyStatic_typestate___globals);
        goto CPyL7;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = 0;
CPyL2: ;
    cpy_r_r2 = (CPyPtr)&((PyVarObject *)cpy_r_r0)->ob_size;
    cpy_r_r3 = *(int64_t *)cpy_r_r2;
    cpy_r_r4 = cpy_r_r3 << 1;
    cpy_r_r5 = (Py_ssize_t)cpy_r_r1 < (Py_ssize_t)cpy_r_r4;
    if (!cpy_r_r5) goto CPyL8;
    cpy_r_r6 = CPyList_GetItemUnsafe(cpy_r_r0, cpy_r_r1);
    if (likely((Py_TYPE(cpy_r_r6) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r6) == CPyType_nodes___TypeInfo)))
        cpy_r_r7 = cpy_r_r6;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "reset_all_subtype_caches_for", 153, CPyStatic_typestate___globals, "mypy.nodes.TypeInfo", cpy_r_r6);
        goto CPyL9;
    }
    cpy_r_item = cpy_r_r7;
    cpy_r_r8 = CPyDef_typestate___TypeState___reset_subtype_caches_for(cpy_r_self, cpy_r_item);
    CPy_DECREF(cpy_r_item);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_all_subtype_caches_for", 154, CPyStatic_typestate___globals);
        goto CPyL9;
    }
    cpy_r_r9 = cpy_r_r1 + 2;
    cpy_r_r1 = cpy_r_r9;
    goto CPyL2;
CPyL6: ;
    return 1;
CPyL7: ;
    cpy_r_r10 = 2;
    return cpy_r_r10;
CPyL8: ;
    CPy_DECREF(cpy_r_r0);
    goto CPyL6;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL7;
}

PyObject *CPyPy_typestate___TypeState___reset_all_subtype_caches_for(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"info", 0};
    static CPyArg_Parser parser = {"O:reset_all_subtype_caches_for", kwlist, 0};
    PyObject *obj_info;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_info)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typestate___TypeState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typestate.TypeState", obj_self); 
        goto fail;
    }
    PyObject *arg_info;
    if (likely((Py_TYPE(obj_info) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_info) == CPyType_nodes___TypeInfo)))
        arg_info = obj_info;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_info); 
        goto fail;
    }
    char retval = CPyDef_typestate___TypeState___reset_all_subtype_caches_for(arg_self, arg_info);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "reset_all_subtype_caches_for", 151, CPyStatic_typestate___globals);
    return NULL;
}

char CPyDef_typestate___TypeState___is_cached_subtype_check(PyObject *cpy_r_self, PyObject *cpy_r_kind, PyObject *cpy_r_left, PyObject *cpy_r_right) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_cache;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_subcache;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    tuple_T2OO cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_left)->_last_known_value;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL2;
    cpy_r_r3 = ((mypy___types___InstanceObject *)cpy_r_right)->_last_known_value;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL3;
CPyL2: ;
    return 0;
CPyL3: ;
    cpy_r_r6 = ((mypy___types___InstanceObject *)cpy_r_right)->_type;
    CPy_INCREF(cpy_r_r6);
    cpy_r_info = cpy_r_r6;
    cpy_r_r7 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__subtype_caches;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDict_GetWithNone(cpy_r_r7, cpy_r_info);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_cached_subtype_check", 163, CPyStatic_typestate___globals);
        goto CPyL15;
    }
    if (PyDict_Check(cpy_r_r8))
        cpy_r_r9 = cpy_r_r8;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL8077;
    if (cpy_r_r8 == Py_None)
        cpy_r_r9 = cpy_r_r8;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL8077;
    CPy_TypeErrorTraceback("mypy/typestate.py", "is_cached_subtype_check", 163, CPyStatic_typestate___globals, "dict or None", cpy_r_r8);
    goto CPyL15;
__LL8077: ;
    cpy_r_cache = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_cache == cpy_r_r10;
    if (cpy_r_r11) {
        goto CPyL16;
    } else
        goto CPyL7;
CPyL6: ;
    return 0;
CPyL7: ;
    if (likely(cpy_r_cache != Py_None))
        cpy_r_r12 = cpy_r_cache;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "is_cached_subtype_check", 166, CPyStatic_typestate___globals, "dict", cpy_r_cache);
        goto CPyL15;
    }
    cpy_r_r13 = CPyDict_GetWithNone(cpy_r_r12, cpy_r_kind);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_cached_subtype_check", 166, CPyStatic_typestate___globals);
        goto CPyL15;
    }
    if (PySet_Check(cpy_r_r13))
        cpy_r_r14 = cpy_r_r13;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL8078;
    if (cpy_r_r13 == Py_None)
        cpy_r_r14 = cpy_r_r13;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL8078;
    CPy_TypeErrorTraceback("mypy/typestate.py", "is_cached_subtype_check", 166, CPyStatic_typestate___globals, "set or None", cpy_r_r13);
    goto CPyL15;
__LL8078: ;
    cpy_r_subcache = cpy_r_r14;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_subcache == cpy_r_r15;
    if (cpy_r_r16) {
        goto CPyL17;
    } else
        goto CPyL12;
CPyL11: ;
    return 0;
CPyL12: ;
    cpy_r_r17.f0 = cpy_r_left;
    cpy_r_r17.f1 = cpy_r_right;
    CPy_INCREF(cpy_r_r17.f0);
    CPy_INCREF(cpy_r_r17.f1);
    if (likely(cpy_r_subcache != Py_None))
        cpy_r_r18 = cpy_r_subcache;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "is_cached_subtype_check", 169, CPyStatic_typestate___globals, "set", cpy_r_subcache);
        goto CPyL18;
    }
    cpy_r_r19 = PyTuple_New(2);
    if (unlikely(cpy_r_r19 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8079 = cpy_r_r17.f0;
    PyTuple_SET_ITEM(cpy_r_r19, 0, __tmp8079);
    PyObject *__tmp8080 = cpy_r_r17.f1;
    PyTuple_SET_ITEM(cpy_r_r19, 1, __tmp8080);
    cpy_r_r20 = PySet_Contains(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/typestate.py", "is_cached_subtype_check", 169, CPyStatic_typestate___globals);
        goto CPyL15;
    }
    cpy_r_r22 = cpy_r_r20;
    return cpy_r_r22;
CPyL15: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL16: ;
    CPy_DECREF(cpy_r_cache);
    goto CPyL6;
CPyL17: ;
    CPy_DECREF(cpy_r_subcache);
    goto CPyL11;
CPyL18: ;
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    goto CPyL15;
}

PyObject *CPyPy_typestate___TypeState___is_cached_subtype_check(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"kind", "left", "right", 0};
    static CPyArg_Parser parser = {"OOO:is_cached_subtype_check", kwlist, 0};
    PyObject *obj_kind;
    PyObject *obj_left;
    PyObject *obj_right;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_kind, &obj_left, &obj_right)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typestate___TypeState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typestate.TypeState", obj_self); 
        goto fail;
    }
    PyObject * arg_kind;
    if (likely(PyTuple_Check(obj_kind)))
        arg_kind = obj_kind;
    else {
        CPy_TypeError("tuple", obj_kind); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_types___Instance))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypy.types.Instance", obj_left); 
        goto fail;
    }
    PyObject *arg_right;
    if (likely(Py_TYPE(obj_right) == CPyType_types___Instance))
        arg_right = obj_right;
    else {
        CPy_TypeError("mypy.types.Instance", obj_right); 
        goto fail;
    }
    char retval = CPyDef_typestate___TypeState___is_cached_subtype_check(arg_self, arg_kind, arg_left, arg_right);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "is_cached_subtype_check", 156, CPyStatic_typestate___globals);
    return NULL;
}

char CPyDef_typestate___TypeState___is_cached_negative_subtype_check(PyObject *cpy_r_self, PyObject *cpy_r_kind, PyObject *cpy_r_left, PyObject *cpy_r_right) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_cache;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_subcache;
    PyObject *cpy_r_r15;
    char cpy_r_r16;
    tuple_T2OO cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_left)->_last_known_value;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL2;
    cpy_r_r3 = ((mypy___types___InstanceObject *)cpy_r_right)->_last_known_value;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL3;
CPyL2: ;
    return 0;
CPyL3: ;
    cpy_r_r6 = ((mypy___types___InstanceObject *)cpy_r_right)->_type;
    CPy_INCREF(cpy_r_r6);
    cpy_r_info = cpy_r_r6;
    cpy_r_r7 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__negative_subtype_caches;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = CPyDict_GetWithNone(cpy_r_r7, cpy_r_info);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_info);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_cached_negative_subtype_check", 180, CPyStatic_typestate___globals);
        goto CPyL15;
    }
    if (PyDict_Check(cpy_r_r8))
        cpy_r_r9 = cpy_r_r8;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL8081;
    if (cpy_r_r8 == Py_None)
        cpy_r_r9 = cpy_r_r8;
    else {
        cpy_r_r9 = NULL;
    }
    if (cpy_r_r9 != NULL) goto __LL8081;
    CPy_TypeErrorTraceback("mypy/typestate.py", "is_cached_negative_subtype_check", 180, CPyStatic_typestate___globals, "dict or None", cpy_r_r8);
    goto CPyL15;
__LL8081: ;
    cpy_r_cache = cpy_r_r9;
    cpy_r_r10 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r11 = cpy_r_cache == cpy_r_r10;
    if (cpy_r_r11) {
        goto CPyL16;
    } else
        goto CPyL7;
CPyL6: ;
    return 0;
CPyL7: ;
    if (likely(cpy_r_cache != Py_None))
        cpy_r_r12 = cpy_r_cache;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "is_cached_negative_subtype_check", 183, CPyStatic_typestate___globals, "dict", cpy_r_cache);
        goto CPyL15;
    }
    cpy_r_r13 = CPyDict_GetWithNone(cpy_r_r12, cpy_r_kind);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "is_cached_negative_subtype_check", 183, CPyStatic_typestate___globals);
        goto CPyL15;
    }
    if (PySet_Check(cpy_r_r13))
        cpy_r_r14 = cpy_r_r13;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL8082;
    if (cpy_r_r13 == Py_None)
        cpy_r_r14 = cpy_r_r13;
    else {
        cpy_r_r14 = NULL;
    }
    if (cpy_r_r14 != NULL) goto __LL8082;
    CPy_TypeErrorTraceback("mypy/typestate.py", "is_cached_negative_subtype_check", 183, CPyStatic_typestate___globals, "set or None", cpy_r_r13);
    goto CPyL15;
__LL8082: ;
    cpy_r_subcache = cpy_r_r14;
    cpy_r_r15 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r16 = cpy_r_subcache == cpy_r_r15;
    if (cpy_r_r16) {
        goto CPyL17;
    } else
        goto CPyL12;
CPyL11: ;
    return 0;
CPyL12: ;
    cpy_r_r17.f0 = cpy_r_left;
    cpy_r_r17.f1 = cpy_r_right;
    CPy_INCREF(cpy_r_r17.f0);
    CPy_INCREF(cpy_r_r17.f1);
    if (likely(cpy_r_subcache != Py_None))
        cpy_r_r18 = cpy_r_subcache;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "is_cached_negative_subtype_check", 186, CPyStatic_typestate___globals, "set", cpy_r_subcache);
        goto CPyL18;
    }
    cpy_r_r19 = PyTuple_New(2);
    if (unlikely(cpy_r_r19 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8083 = cpy_r_r17.f0;
    PyTuple_SET_ITEM(cpy_r_r19, 0, __tmp8083);
    PyObject *__tmp8084 = cpy_r_r17.f1;
    PyTuple_SET_ITEM(cpy_r_r19, 1, __tmp8084);
    cpy_r_r20 = PySet_Contains(cpy_r_r18, cpy_r_r19);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r19);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/typestate.py", "is_cached_negative_subtype_check", 186, CPyStatic_typestate___globals);
        goto CPyL15;
    }
    cpy_r_r22 = cpy_r_r20;
    return cpy_r_r22;
CPyL15: ;
    cpy_r_r23 = 2;
    return cpy_r_r23;
CPyL16: ;
    CPy_DECREF(cpy_r_cache);
    goto CPyL6;
CPyL17: ;
    CPy_DECREF(cpy_r_subcache);
    goto CPyL11;
CPyL18: ;
    CPy_DecRef(cpy_r_r17.f0);
    CPy_DecRef(cpy_r_r17.f1);
    goto CPyL15;
}

PyObject *CPyPy_typestate___TypeState___is_cached_negative_subtype_check(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"kind", "left", "right", 0};
    static CPyArg_Parser parser = {"OOO:is_cached_negative_subtype_check", kwlist, 0};
    PyObject *obj_kind;
    PyObject *obj_left;
    PyObject *obj_right;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_kind, &obj_left, &obj_right)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typestate___TypeState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typestate.TypeState", obj_self); 
        goto fail;
    }
    PyObject * arg_kind;
    if (likely(PyTuple_Check(obj_kind)))
        arg_kind = obj_kind;
    else {
        CPy_TypeError("tuple", obj_kind); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_types___Instance))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypy.types.Instance", obj_left); 
        goto fail;
    }
    PyObject *arg_right;
    if (likely(Py_TYPE(obj_right) == CPyType_types___Instance))
        arg_right = obj_right;
    else {
        CPy_TypeError("mypy.types.Instance", obj_right); 
        goto fail;
    }
    char retval = CPyDef_typestate___TypeState___is_cached_negative_subtype_check(arg_self, arg_kind, arg_left, arg_right);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "is_cached_negative_subtype_check", 171, CPyStatic_typestate___globals);
    return NULL;
}

char CPyDef_typestate___TypeState___record_subtype_cache_entry(PyObject *cpy_r_self, PyObject *cpy_r_kind, PyObject *cpy_r_left, PyObject *cpy_r_right) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_cache;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    tuple_T2OO cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_left)->_last_known_value;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL2;
    cpy_r_r3 = ((mypy___types___InstanceObject *)cpy_r_right)->_last_known_value;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL3;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r6 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__subtype_caches;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = ((mypy___types___InstanceObject *)cpy_r_right)->_type;
    CPy_INCREF(cpy_r_r7);
    cpy_r_r8 = PyDict_New();
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "record_subtype_cache_entry", 195, CPyStatic_typestate___globals);
        goto CPyL11;
    }
    cpy_r_r9 = CPyDict_SetDefault(cpy_r_r6, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r7);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "record_subtype_cache_entry", 195, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    if (likely(PyDict_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "record_subtype_cache_entry", 195, CPyStatic_typestate___globals, "dict", cpy_r_r9);
        goto CPyL10;
    }
    cpy_r_cache = cpy_r_r10;
    cpy_r_r11 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_cache, cpy_r_kind, 3);
    CPy_DECREF(cpy_r_cache);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "record_subtype_cache_entry", 196, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    if (likely(PySet_Check(cpy_r_r11)))
        cpy_r_r12 = cpy_r_r11;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "record_subtype_cache_entry", 196, CPyStatic_typestate___globals, "set", cpy_r_r11);
        goto CPyL10;
    }
    cpy_r_r13.f0 = cpy_r_left;
    cpy_r_r13.f1 = cpy_r_right;
    CPy_INCREF(cpy_r_r13.f0);
    CPy_INCREF(cpy_r_r13.f1);
    cpy_r_r14 = PyTuple_New(2);
    if (unlikely(cpy_r_r14 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8085 = cpy_r_r13.f0;
    PyTuple_SET_ITEM(cpy_r_r14, 0, __tmp8085);
    PyObject *__tmp8086 = cpy_r_r13.f1;
    PyTuple_SET_ITEM(cpy_r_r14, 1, __tmp8086);
    cpy_r_r15 = PySet_Add(cpy_r_r12, cpy_r_r14);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("mypy/typestate.py", "record_subtype_cache_entry", 196, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r17 = 2;
    return cpy_r_r17;
CPyL11: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r7);
    goto CPyL10;
}

PyObject *CPyPy_typestate___TypeState___record_subtype_cache_entry(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"kind", "left", "right", 0};
    static CPyArg_Parser parser = {"OOO:record_subtype_cache_entry", kwlist, 0};
    PyObject *obj_kind;
    PyObject *obj_left;
    PyObject *obj_right;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_kind, &obj_left, &obj_right)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typestate___TypeState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typestate.TypeState", obj_self); 
        goto fail;
    }
    PyObject * arg_kind;
    if (likely(PyTuple_Check(obj_kind)))
        arg_kind = obj_kind;
    else {
        CPy_TypeError("tuple", obj_kind); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_types___Instance))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypy.types.Instance", obj_left); 
        goto fail;
    }
    PyObject *arg_right;
    if (likely(Py_TYPE(obj_right) == CPyType_types___Instance))
        arg_right = obj_right;
    else {
        CPy_TypeError("mypy.types.Instance", obj_right); 
        goto fail;
    }
    char retval = CPyDef_typestate___TypeState___record_subtype_cache_entry(arg_self, arg_kind, arg_left, arg_right);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "record_subtype_cache_entry", 188, CPyStatic_typestate___globals);
    return NULL;
}

char CPyDef_typestate___TypeState___record_negative_subtype_cache_entry(PyObject *cpy_r_self, PyObject *cpy_r_kind, PyObject *cpy_r_left, PyObject *cpy_r_right) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_cache;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_subcache;
    CPyPtr cpy_r_r19;
    int64_t cpy_r_r20;
    CPyTagged cpy_r_r21;
    char cpy_r_r22;
    int32_t cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    tuple_T2OO cpy_r_r27;
    PyObject *cpy_r_r28;
    int32_t cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    cpy_r_r0 = ((mypy___types___InstanceObject *)cpy_r_left)->_last_known_value;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL2;
    cpy_r_r3 = ((mypy___types___InstanceObject *)cpy_r_right)->_last_known_value;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = cpy_r_r3 != cpy_r_r4;
    if (!cpy_r_r5) goto CPyL3;
CPyL2: ;
    return 1;
CPyL3: ;
    cpy_r_r6 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__negative_subtype_caches;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = PyDict_Size(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = (Py_ssize_t)cpy_r_r8 > (Py_ssize_t)2000;
    if (!cpy_r_r9) goto CPyL5;
    cpy_r_r10 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__negative_subtype_caches;
    CPy_INCREF(cpy_r_r10);
    cpy_r_r11 = CPyDict_Clear(cpy_r_r10);
    CPy_DECREF(cpy_r_r10);
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/typestate.py", "record_negative_subtype_cache_entry", 206, CPyStatic_typestate___globals);
        goto CPyL16;
    }
CPyL5: ;
    cpy_r_r12 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__negative_subtype_caches;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = ((mypy___types___InstanceObject *)cpy_r_right)->_type;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = PyDict_New();
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "record_negative_subtype_cache_entry", 207, CPyStatic_typestate___globals);
        goto CPyL17;
    }
    cpy_r_r15 = CPyDict_SetDefault(cpy_r_r12, cpy_r_r13, cpy_r_r14);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "record_negative_subtype_cache_entry", 207, CPyStatic_typestate___globals);
        goto CPyL16;
    }
    if (likely(PyDict_Check(cpy_r_r15)))
        cpy_r_r16 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "record_negative_subtype_cache_entry", 207, CPyStatic_typestate___globals, "dict", cpy_r_r15);
        goto CPyL16;
    }
    cpy_r_cache = cpy_r_r16;
    cpy_r_r17 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_cache, cpy_r_kind, 3);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "record_negative_subtype_cache_entry", 208, CPyStatic_typestate___globals);
        goto CPyL18;
    }
    if (likely(PySet_Check(cpy_r_r17)))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "record_negative_subtype_cache_entry", 208, CPyStatic_typestate___globals, "set", cpy_r_r17);
        goto CPyL18;
    }
    cpy_r_subcache = cpy_r_r18;
    cpy_r_r19 = (CPyPtr)&((PySetObject *)cpy_r_subcache)->used;
    cpy_r_r20 = *(int64_t *)cpy_r_r19;
    cpy_r_r21 = cpy_r_r20 << 1;
    cpy_r_r22 = (Py_ssize_t)cpy_r_r21 > (Py_ssize_t)20000;
    if (!cpy_r_r22) goto CPyL19;
    cpy_r_r23 = PySet_Clear(cpy_r_subcache);
    CPy_DECREF(cpy_r_subcache);
    cpy_r_r24 = cpy_r_r23 >= 0;
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/typestate.py", "record_negative_subtype_cache_entry", 210, CPyStatic_typestate___globals);
        goto CPyL18;
    }
CPyL12: ;
    cpy_r_r25 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_cache, cpy_r_kind, 3);
    CPy_DECREF(cpy_r_cache);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "record_negative_subtype_cache_entry", 211, CPyStatic_typestate___globals);
        goto CPyL16;
    }
    if (likely(PySet_Check(cpy_r_r25)))
        cpy_r_r26 = cpy_r_r25;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "record_negative_subtype_cache_entry", 211, CPyStatic_typestate___globals, "set", cpy_r_r25);
        goto CPyL16;
    }
    cpy_r_r27.f0 = cpy_r_left;
    cpy_r_r27.f1 = cpy_r_right;
    CPy_INCREF(cpy_r_r27.f0);
    CPy_INCREF(cpy_r_r27.f1);
    cpy_r_r28 = PyTuple_New(2);
    if (unlikely(cpy_r_r28 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8087 = cpy_r_r27.f0;
    PyTuple_SET_ITEM(cpy_r_r28, 0, __tmp8087);
    PyObject *__tmp8088 = cpy_r_r27.f1;
    PyTuple_SET_ITEM(cpy_r_r28, 1, __tmp8088);
    cpy_r_r29 = PySet_Add(cpy_r_r26, cpy_r_r28);
    CPy_DECREF(cpy_r_r26);
    CPy_DECREF(cpy_r_r28);
    cpy_r_r30 = cpy_r_r29 >= 0;
    if (unlikely(!cpy_r_r30)) {
        CPy_AddTraceback("mypy/typestate.py", "record_negative_subtype_cache_entry", 211, CPyStatic_typestate___globals);
        goto CPyL16;
    }
    return 1;
CPyL16: ;
    cpy_r_r31 = 2;
    return cpy_r_r31;
CPyL17: ;
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r13);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_cache);
    goto CPyL16;
CPyL19: ;
    CPy_DECREF(cpy_r_subcache);
    goto CPyL12;
}

PyObject *CPyPy_typestate___TypeState___record_negative_subtype_cache_entry(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"kind", "left", "right", 0};
    static CPyArg_Parser parser = {"OOO:record_negative_subtype_cache_entry", kwlist, 0};
    PyObject *obj_kind;
    PyObject *obj_left;
    PyObject *obj_right;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_kind, &obj_left, &obj_right)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typestate___TypeState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typestate.TypeState", obj_self); 
        goto fail;
    }
    PyObject * arg_kind;
    if (likely(PyTuple_Check(obj_kind)))
        arg_kind = obj_kind;
    else {
        CPy_TypeError("tuple", obj_kind); 
        goto fail;
    }
    PyObject *arg_left;
    if (likely(Py_TYPE(obj_left) == CPyType_types___Instance))
        arg_left = obj_left;
    else {
        CPy_TypeError("mypy.types.Instance", obj_left); 
        goto fail;
    }
    PyObject *arg_right;
    if (likely(Py_TYPE(obj_right) == CPyType_types___Instance))
        arg_right = obj_right;
    else {
        CPy_TypeError("mypy.types.Instance", obj_right); 
        goto fail;
    }
    char retval = CPyDef_typestate___TypeState___record_negative_subtype_cache_entry(arg_self, arg_kind, arg_left, arg_right);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "record_negative_subtype_cache_entry", 198, CPyStatic_typestate___globals);
    return NULL;
}

char CPyDef_typestate___TypeState___reset_protocol_deps(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_protocol_deps", 215, CPyStatic_typestate___globals);
        goto CPyL5;
    }
    CPy_DECREF(((mypy___typestate___TypeStateObject *)cpy_r_self)->_proto_deps);
    ((mypy___typestate___TypeStateObject *)cpy_r_self)->_proto_deps = cpy_r_r0;
    cpy_r_r2 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__attempted_protocols;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = CPyDict_Clear(cpy_r_r2);
    CPy_DECREF(cpy_r_r2);
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_protocol_deps", 216, CPyStatic_typestate___globals);
        goto CPyL5;
    }
    cpy_r_r4 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__checked_against_members;
    CPy_INCREF(cpy_r_r4);
    cpy_r_r5 = CPyDict_Clear(cpy_r_r4);
    CPy_DECREF(cpy_r_r4);
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_protocol_deps", 217, CPyStatic_typestate___globals);
        goto CPyL5;
    }
    cpy_r_r6 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__rechecked_types;
    CPy_INCREF(cpy_r_r6);
    cpy_r_r7 = PySet_Clear(cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_protocol_deps", 218, CPyStatic_typestate___globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r9 = 2;
    return cpy_r_r9;
}

PyObject *CPyPy_typestate___TypeState___reset_protocol_deps(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":reset_protocol_deps", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typestate___TypeState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typestate.TypeState", obj_self); 
        goto fail;
    }
    char retval = CPyDef_typestate___TypeState___reset_protocol_deps(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "reset_protocol_deps", 213, CPyStatic_typestate___globals);
    return NULL;
}

char CPyDef_typestate___TypeState___record_protocol_subtype_check(PyObject *cpy_r_self, PyObject *cpy_r_left_type, PyObject *cpy_r_right_type) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    int32_t cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    int32_t cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    char cpy_r_r19;
    cpy_r_r0 = ((mypy___nodes___TypeInfoObject *)cpy_r_right_type)->_is_protocol;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("mypy/typestate.py", "record_protocol_subtype_check", "TypeInfo", "is_protocol", 221, CPyStatic_typestate___globals);
        goto CPyL16;
    }
CPyL1: ;
    if (cpy_r_r0) goto CPyL4;
CPyL2: ;
    PyErr_SetNone(PyExc_AssertionError);
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/typestate.py", "record_protocol_subtype_check", 221, CPyStatic_typestate___globals);
        goto CPyL16;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r2 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__rechecked_types;
    CPy_INCREF(cpy_r_r2);
    cpy_r_r3 = PySet_Add(cpy_r_r2, cpy_r_left_type);
    CPy_DECREF(cpy_r_r2);
    cpy_r_r4 = cpy_r_r3 >= 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/typestate.py", "record_protocol_subtype_check", 222, CPyStatic_typestate___globals);
        goto CPyL16;
    }
    cpy_r_r5 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__attempted_protocols;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPY_GET_ATTR(cpy_r_left_type, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "record_protocol_subtype_check", 223, CPyStatic_typestate___globals);
        goto CPyL17;
    }
CPyL6: ;
    cpy_r_r7 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r5, cpy_r_r6, 3);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "record_protocol_subtype_check", 223, CPyStatic_typestate___globals);
        goto CPyL16;
    }
    if (likely(PySet_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "record_protocol_subtype_check", 223, CPyStatic_typestate___globals, "set", cpy_r_r7);
        goto CPyL16;
    }
    cpy_r_r9 = CPY_GET_ATTR(cpy_r_right_type, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "record_protocol_subtype_check", 223, CPyStatic_typestate___globals);
        goto CPyL18;
    }
CPyL9: ;
    cpy_r_r10 = PySet_Add(cpy_r_r8, cpy_r_r9);
    CPy_DECREF(cpy_r_r8);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r11 = cpy_r_r10 >= 0;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("mypy/typestate.py", "record_protocol_subtype_check", 223, CPyStatic_typestate___globals);
        goto CPyL16;
    }
    cpy_r_r12 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__checked_against_members;
    CPy_INCREF(cpy_r_r12);
    cpy_r_r13 = CPY_GET_ATTR(cpy_r_left_type, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "record_protocol_subtype_check", 224, CPyStatic_typestate___globals);
        goto CPyL19;
    }
CPyL11: ;
    cpy_r_r14 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r12, cpy_r_r13, 3);
    CPy_DECREF(cpy_r_r12);
    CPy_DECREF(cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "record_protocol_subtype_check", 224, CPyStatic_typestate___globals);
        goto CPyL16;
    }
    if (likely(PySet_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "record_protocol_subtype_check", 224, CPyStatic_typestate___globals, "set", cpy_r_r14);
        goto CPyL16;
    }
    cpy_r_r16 = CPY_GET_ATTR(cpy_r_right_type, CPyType_nodes___TypeInfo, 12, mypy___nodes___TypeInfoObject, PyObject *); /* protocol_members */
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "record_protocol_subtype_check", 225, CPyStatic_typestate___globals);
        goto CPyL20;
    }
CPyL14: ;
    cpy_r_r17 = _PySet_Update(cpy_r_r15, cpy_r_r16);
    CPy_DECREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r16);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("mypy/typestate.py", "record_protocol_subtype_check", 224, CPyStatic_typestate___globals);
        goto CPyL16;
    }
    return 1;
CPyL16: ;
    cpy_r_r19 = 2;
    return cpy_r_r19;
CPyL17: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL16;
CPyL18: ;
    CPy_DecRef(cpy_r_r8);
    goto CPyL16;
CPyL19: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL16;
CPyL20: ;
    CPy_DecRef(cpy_r_r15);
    goto CPyL16;
}

PyObject *CPyPy_typestate___TypeState___record_protocol_subtype_check(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"left_type", "right_type", 0};
    static CPyArg_Parser parser = {"OO:record_protocol_subtype_check", kwlist, 0};
    PyObject *obj_left_type;
    PyObject *obj_right_type;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_left_type, &obj_right_type)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typestate___TypeState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typestate.TypeState", obj_self); 
        goto fail;
    }
    PyObject *arg_left_type;
    if (likely((Py_TYPE(obj_left_type) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_left_type) == CPyType_nodes___TypeInfo)))
        arg_left_type = obj_left_type;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_left_type); 
        goto fail;
    }
    PyObject *arg_right_type;
    if (likely((Py_TYPE(obj_right_type) == CPyType_nodes___FakeInfo) || (Py_TYPE(obj_right_type) == CPyType_nodes___TypeInfo)))
        arg_right_type = obj_right_type;
    else {
        CPy_TypeError("mypy.nodes.TypeInfo", obj_right_type); 
        goto fail;
    }
    char retval = CPyDef_typestate___TypeState___record_protocol_subtype_check(arg_self, arg_left_type, arg_right_type);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "record_protocol_subtype_check", 220, CPyStatic_typestate___globals);
    return NULL;
}

PyObject *CPyDef_typestate___TypeState____snapshot_protocol_deps(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_deps;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_info;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_attr;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    CPyTagged cpy_r_r15;
    CPyPtr cpy_r_r16;
    int64_t cpy_r_r17;
    CPyTagged cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_base_info;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_trigger;
    PyObject *cpy_r_r26;
    int32_t cpy_r_r27;
    char cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    int32_t cpy_r_r31;
    char cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    CPyTagged cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_proto;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    int32_t cpy_r_r52;
    char cpy_r_r53;
    char cpy_r_r54;
    PyObject *cpy_r_r55;
    int32_t cpy_r_r56;
    char cpy_r_r57;
    char cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    int32_t cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    cpy_r_r0 = PyDict_New();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 257, CPyStatic_typestate___globals);
        goto CPyL48;
    }
    cpy_r_deps = cpy_r_r0;
    cpy_r_r1 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__rechecked_types;
    CPy_INCREF(cpy_r_r1);
    cpy_r_r2 = PyObject_GetIter(cpy_r_r1);
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 258, CPyStatic_typestate___globals);
        goto CPyL49;
    }
CPyL2: ;
    cpy_r_r3 = PyIter_Next(cpy_r_r2);
    if (cpy_r_r3 == NULL) goto CPyL50;
    if (likely((Py_TYPE(cpy_r_r3) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r3) == CPyType_nodes___TypeInfo)))
        cpy_r_r4 = cpy_r_r3;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 258, CPyStatic_typestate___globals, "mypy.nodes.TypeInfo", cpy_r_r3);
        goto CPyL51;
    }
    cpy_r_info = cpy_r_r4;
    cpy_r_r5 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__checked_against_members;
    CPy_INCREF(cpy_r_r5);
    cpy_r_r6 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 259, CPyStatic_typestate___globals);
        goto CPyL52;
    }
CPyL5: ;
    cpy_r_r7 = CPyDict_GetItem(cpy_r_r5, cpy_r_r6);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 259, CPyStatic_typestate___globals);
        goto CPyL53;
    }
    if (likely(PySet_Check(cpy_r_r7)))
        cpy_r_r8 = cpy_r_r7;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 259, CPyStatic_typestate___globals, "set", cpy_r_r7);
        goto CPyL53;
    }
    cpy_r_r9 = PyObject_GetIter(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 259, CPyStatic_typestate___globals);
        goto CPyL53;
    }
CPyL8: ;
    cpy_r_r10 = PyIter_Next(cpy_r_r9);
    if (cpy_r_r10 == NULL) goto CPyL54;
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 259, CPyStatic_typestate___globals, "str", cpy_r_r10);
        goto CPyL55;
    }
    cpy_r_attr = cpy_r_r11;
    cpy_r_r12 = ((mypy___nodes___TypeInfoObject *)cpy_r_info)->_mro;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("mypy/typestate.py", "_snapshot_protocol_deps", "TypeInfo", "mro", 263, CPyStatic_typestate___globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r12);
CPyL11: ;
    cpy_r_r13 = CPyList_GetSlice(cpy_r_r12, 0, -2);
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 263, CPyStatic_typestate___globals);
        goto CPyL56;
    }
    if (likely(PyList_Check(cpy_r_r13)))
        cpy_r_r14 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 263, CPyStatic_typestate___globals, "list", cpy_r_r13);
        goto CPyL56;
    }
    cpy_r_r15 = 0;
CPyL14: ;
    cpy_r_r16 = (CPyPtr)&((PyVarObject *)cpy_r_r14)->ob_size;
    cpy_r_r17 = *(int64_t *)cpy_r_r16;
    cpy_r_r18 = cpy_r_r17 << 1;
    cpy_r_r19 = (Py_ssize_t)cpy_r_r15 < (Py_ssize_t)cpy_r_r18;
    if (!cpy_r_r19) goto CPyL57;
    cpy_r_r20 = CPyList_GetItemUnsafe(cpy_r_r14, cpy_r_r15);
    if (likely((Py_TYPE(cpy_r_r20) == CPyType_nodes___FakeInfo) || (Py_TYPE(cpy_r_r20) == CPyType_nodes___TypeInfo)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 263, CPyStatic_typestate___globals, "mypy.nodes.TypeInfo", cpy_r_r20);
        goto CPyL58;
    }
    cpy_r_base_info = cpy_r_r21;
    cpy_r_r22 = CPY_GET_ATTR(cpy_r_base_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    CPy_DECREF(cpy_r_base_info);
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 264, CPyStatic_typestate___globals);
        goto CPyL58;
    }
CPyL17: ;
    cpy_r_r23 = CPyStatics[224]; /* '.' */
    cpy_r_r24 = CPyStr_Build(3, cpy_r_r22, cpy_r_r23, cpy_r_attr);
    CPy_DECREF(cpy_r_r22);
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 264, CPyStatic_typestate___globals);
        goto CPyL58;
    }
    cpy_r_r25 = CPyDef_trigger___make_trigger(cpy_r_r24);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 264, CPyStatic_typestate___globals);
        goto CPyL58;
    }
    cpy_r_trigger = cpy_r_r25;
    cpy_r_r26 = CPyStatics[21]; /* 'typing' */
    cpy_r_r27 = PySequence_Contains(cpy_r_trigger, cpy_r_r26);
    cpy_r_r28 = cpy_r_r27 >= 0;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 265, CPyStatic_typestate___globals);
        goto CPyL59;
    }
    cpy_r_r29 = cpy_r_r27;
    if (cpy_r_r29) goto CPyL60;
    cpy_r_r30 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r31 = PySequence_Contains(cpy_r_trigger, cpy_r_r30);
    cpy_r_r32 = cpy_r_r31 >= 0;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 265, CPyStatic_typestate___globals);
        goto CPyL59;
    }
    cpy_r_r33 = cpy_r_r31;
    if (cpy_r_r33) goto CPyL60;
    cpy_r_r34 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_deps, cpy_r_trigger, 3);
    CPy_DECREF(cpy_r_trigger);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 268, CPyStatic_typestate___globals);
        goto CPyL58;
    }
    if (likely(PySet_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 268, CPyStatic_typestate___globals, "set", cpy_r_r34);
        goto CPyL58;
    }
    cpy_r_r36 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 268, CPyStatic_typestate___globals);
        goto CPyL61;
    }
CPyL26: ;
    cpy_r_r37 = CPyDef_trigger___make_trigger(cpy_r_r36);
    CPy_DECREF(cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 268, CPyStatic_typestate___globals);
        goto CPyL61;
    }
    cpy_r_r38 = PySet_Add(cpy_r_r35, cpy_r_r37);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 268, CPyStatic_typestate___globals);
        goto CPyL58;
    }
CPyL28: ;
    cpy_r_r40 = cpy_r_r15 + 2;
    cpy_r_r15 = cpy_r_r40;
    goto CPyL14;
CPyL29: ;
    cpy_r_r41 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 259, CPyStatic_typestate___globals);
        goto CPyL53;
    }
    cpy_r_r42 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__attempted_protocols;
    CPy_INCREF(cpy_r_r42);
    cpy_r_r43 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 269, CPyStatic_typestate___globals);
        goto CPyL62;
    }
CPyL31: ;
    cpy_r_r44 = CPyDict_GetItem(cpy_r_r42, cpy_r_r43);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r43);
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 269, CPyStatic_typestate___globals);
        goto CPyL53;
    }
    if (likely(PySet_Check(cpy_r_r44)))
        cpy_r_r45 = cpy_r_r44;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 269, CPyStatic_typestate___globals, "set", cpy_r_r44);
        goto CPyL53;
    }
    cpy_r_r46 = PyObject_GetIter(cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 269, CPyStatic_typestate___globals);
        goto CPyL53;
    }
CPyL34: ;
    cpy_r_r47 = PyIter_Next(cpy_r_r46);
    if (cpy_r_r47 == NULL) goto CPyL63;
    if (likely(PyUnicode_Check(cpy_r_r47)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 269, CPyStatic_typestate___globals, "str", cpy_r_r47);
        goto CPyL64;
    }
    cpy_r_proto = cpy_r_r48;
    cpy_r_r49 = CPY_GET_ATTR(cpy_r_info, CPyType_nodes___TypeInfo, 8, mypy___nodes___TypeInfoObject, PyObject *); /* fullname */
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 270, CPyStatic_typestate___globals);
        goto CPyL65;
    }
CPyL37: ;
    cpy_r_r50 = CPyDef_trigger___make_trigger(cpy_r_r49);
    CPy_DECREF(cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 270, CPyStatic_typestate___globals);
        goto CPyL65;
    }
    cpy_r_trigger = cpy_r_r50;
    cpy_r_r51 = CPyStatics[21]; /* 'typing' */
    cpy_r_r52 = PySequence_Contains(cpy_r_trigger, cpy_r_r51);
    cpy_r_r53 = cpy_r_r52 >= 0;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 271, CPyStatic_typestate___globals);
        goto CPyL66;
    }
    cpy_r_r54 = cpy_r_r52;
    if (cpy_r_r54) goto CPyL67;
    cpy_r_r55 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r56 = PySequence_Contains(cpy_r_trigger, cpy_r_r55);
    cpy_r_r57 = cpy_r_r56 >= 0;
    if (unlikely(!cpy_r_r57)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 271, CPyStatic_typestate___globals);
        goto CPyL66;
    }
    cpy_r_r58 = cpy_r_r56;
    if (cpy_r_r58) goto CPyL67;
    cpy_r_r59 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_deps, cpy_r_trigger, 3);
    CPy_DECREF(cpy_r_trigger);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 279, CPyStatic_typestate___globals);
        goto CPyL65;
    }
    if (likely(PySet_Check(cpy_r_r59)))
        cpy_r_r60 = cpy_r_r59;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 279, CPyStatic_typestate___globals, "set", cpy_r_r59);
        goto CPyL65;
    }
    cpy_r_r61 = PySet_Add(cpy_r_r60, cpy_r_proto);
    CPy_DECREF(cpy_r_r60);
    CPy_DECREF(cpy_r_proto);
    cpy_r_r62 = cpy_r_r61 >= 0;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 279, CPyStatic_typestate___globals);
        goto CPyL64;
    } else
        goto CPyL34;
CPyL45: ;
    cpy_r_r63 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 269, CPyStatic_typestate___globals);
        goto CPyL51;
    } else
        goto CPyL2;
CPyL46: ;
    cpy_r_r64 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 258, CPyStatic_typestate___globals);
        goto CPyL49;
    }
    return cpy_r_deps;
CPyL48: ;
    cpy_r_r65 = NULL;
    return cpy_r_r65;
CPyL49: ;
    CPy_DecRef(cpy_r_deps);
    goto CPyL48;
CPyL50: ;
    CPy_DECREF(cpy_r_r2);
    goto CPyL46;
CPyL51: ;
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r2);
    goto CPyL48;
CPyL52: ;
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r5);
    goto CPyL48;
CPyL53: ;
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_info);
    goto CPyL48;
CPyL54: ;
    CPy_DECREF(cpy_r_r9);
    goto CPyL29;
CPyL55: ;
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r9);
    goto CPyL48;
CPyL56: ;
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_attr);
    goto CPyL48;
CPyL57: ;
    CPy_DECREF(cpy_r_attr);
    CPy_DECREF(cpy_r_r14);
    goto CPyL8;
CPyL58: ;
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r14);
    goto CPyL48;
CPyL59: ;
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_trigger);
    goto CPyL48;
CPyL60: ;
    CPy_DECREF(cpy_r_trigger);
    goto CPyL28;
CPyL61: ;
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_attr);
    CPy_DecRef(cpy_r_r14);
    CPy_DecRef(cpy_r_r35);
    goto CPyL48;
CPyL62: ;
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r42);
    goto CPyL48;
CPyL63: ;
    CPy_DECREF(cpy_r_info);
    CPy_DECREF(cpy_r_r46);
    goto CPyL45;
CPyL64: ;
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r46);
    goto CPyL48;
CPyL65: ;
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_proto);
    goto CPyL48;
CPyL66: ;
    CPy_DecRef(cpy_r_deps);
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_info);
    CPy_DecRef(cpy_r_trigger);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_proto);
    goto CPyL48;
CPyL67: ;
    CPy_DECREF(cpy_r_trigger);
    CPy_DECREF(cpy_r_proto);
    goto CPyL34;
}

PyObject *CPyPy_typestate___TypeState____snapshot_protocol_deps(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":_snapshot_protocol_deps", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typestate___TypeState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typestate.TypeState", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef_typestate___TypeState____snapshot_protocol_deps(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "_snapshot_protocol_deps", 228, CPyStatic_typestate___globals);
    return NULL;
}

char CPyDef_typestate___TypeState___update_protocol_deps(PyObject *cpy_r_self, PyObject *cpy_r_second_map) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_new_deps;
    CPyTagged cpy_r_r6;
    int64_t cpy_r_r7;
    CPyTagged cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T4CIOO cpy_r_r10;
    CPyTagged cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_trigger;
    PyObject *cpy_r_targets;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    int32_t cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    CPyTagged cpy_r_r27;
    int64_t cpy_r_r28;
    CPyTagged cpy_r_r29;
    PyObject *cpy_r_r30;
    tuple_T4CIOO cpy_r_r31;
    CPyTagged cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    int32_t cpy_r_r41;
    char cpy_r_r42;
    char cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    int32_t cpy_r_r46;
    char cpy_r_r47;
    PyObject *cpy_r_r48;
    char cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    if (cpy_r_second_map != NULL) goto CPyL32;
    cpy_r_r0 = Py_None;
    CPy_INCREF(cpy_r_r0);
    cpy_r_second_map = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->_proto_deps;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_r1 != cpy_r_r2;
    if (cpy_r_r3) {
        goto CPyL5;
    } else
        goto CPyL33;
CPyL3: ;
    PyErr_SetString(PyExc_AssertionError, "This should not be called after failed cache load");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/typestate.py", "update_protocol_deps", 289, CPyStatic_typestate___globals);
        goto CPyL31;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r5 = CPyDef_typestate___TypeState____snapshot_protocol_deps(cpy_r_self);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "update_protocol_deps", 290, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    cpy_r_new_deps = cpy_r_r5;
    cpy_r_r6 = 0;
    cpy_r_r7 = PyDict_Size(cpy_r_new_deps);
    cpy_r_r8 = cpy_r_r7 << 1;
    cpy_r_r9 = CPyDict_GetItemsIter(cpy_r_new_deps);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "update_protocol_deps", 291, CPyStatic_typestate___globals);
        goto CPyL35;
    }
CPyL7: ;
    cpy_r_r10 = CPyDict_NextItem(cpy_r_r9, cpy_r_r6);
    cpy_r_r11 = cpy_r_r10.f1;
    cpy_r_r6 = cpy_r_r11;
    cpy_r_r12 = cpy_r_r10.f0;
    if (!cpy_r_r12) goto CPyL36;
    cpy_r_r13 = cpy_r_r10.f2;
    CPy_INCREF(cpy_r_r13);
    cpy_r_r14 = cpy_r_r10.f3;
    CPy_INCREF(cpy_r_r14);
    CPy_DECREF(cpy_r_r10.f2);
    CPy_DECREF(cpy_r_r10.f3);
    if (likely(PyUnicode_Check(cpy_r_r13)))
        cpy_r_r15 = cpy_r_r13;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "update_protocol_deps", 291, CPyStatic_typestate___globals, "str", cpy_r_r13);
        goto CPyL37;
    }
    if (likely(PySet_Check(cpy_r_r14)))
        cpy_r_r16 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "update_protocol_deps", 291, CPyStatic_typestate___globals, "set", cpy_r_r14);
        goto CPyL38;
    }
    cpy_r_trigger = cpy_r_r15;
    cpy_r_targets = cpy_r_r16;
    cpy_r_r17 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->_proto_deps;
    CPy_INCREF(cpy_r_r17);
    if (likely(cpy_r_r17 != Py_None))
        cpy_r_r18 = cpy_r_r17;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "update_protocol_deps", 292, CPyStatic_typestate___globals, "dict", cpy_r_r17);
        goto CPyL39;
    }
    cpy_r_r19 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r18, cpy_r_trigger, 3);
    CPy_DECREF(cpy_r_r18);
    CPy_DECREF(cpy_r_trigger);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "update_protocol_deps", 292, CPyStatic_typestate___globals);
        goto CPyL40;
    }
    if (likely(PySet_Check(cpy_r_r19)))
        cpy_r_r20 = cpy_r_r19;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "update_protocol_deps", 292, CPyStatic_typestate___globals, "set", cpy_r_r19);
        goto CPyL40;
    }
    cpy_r_r21 = _PySet_Update(cpy_r_r20, cpy_r_targets);
    CPy_DECREF(cpy_r_r20);
    CPy_DECREF(cpy_r_targets);
    cpy_r_r22 = cpy_r_r21 >= 0;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/typestate.py", "update_protocol_deps", 292, CPyStatic_typestate___globals);
        goto CPyL41;
    }
    cpy_r_r23 = CPyDict_CheckSize(cpy_r_new_deps, cpy_r_r8);
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/typestate.py", "update_protocol_deps", 291, CPyStatic_typestate___globals);
        goto CPyL41;
    } else
        goto CPyL7;
CPyL15: ;
    cpy_r_r24 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("mypy/typestate.py", "update_protocol_deps", 291, CPyStatic_typestate___globals);
        goto CPyL35;
    }
    cpy_r_r25 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r26 = cpy_r_second_map != cpy_r_r25;
    if (!cpy_r_r26) goto CPyL42;
    cpy_r_r27 = 0;
    cpy_r_r28 = PyDict_Size(cpy_r_new_deps);
    cpy_r_r29 = cpy_r_r28 << 1;
    cpy_r_r30 = CPyDict_GetItemsIter(cpy_r_new_deps);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "update_protocol_deps", 294, CPyStatic_typestate___globals);
        goto CPyL35;
    }
CPyL18: ;
    cpy_r_r31 = CPyDict_NextItem(cpy_r_r30, cpy_r_r27);
    cpy_r_r32 = cpy_r_r31.f1;
    cpy_r_r27 = cpy_r_r32;
    cpy_r_r33 = cpy_r_r31.f0;
    if (!cpy_r_r33) goto CPyL43;
    cpy_r_r34 = cpy_r_r31.f2;
    CPy_INCREF(cpy_r_r34);
    cpy_r_r35 = cpy_r_r31.f3;
    CPy_INCREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r31.f2);
    CPy_DECREF(cpy_r_r31.f3);
    if (likely(PyUnicode_Check(cpy_r_r34)))
        cpy_r_r36 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "update_protocol_deps", 294, CPyStatic_typestate___globals, "str", cpy_r_r34);
        goto CPyL44;
    }
    if (likely(PySet_Check(cpy_r_r35)))
        cpy_r_r37 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "update_protocol_deps", 294, CPyStatic_typestate___globals, "set", cpy_r_r35);
        goto CPyL45;
    }
    cpy_r_trigger = cpy_r_r36;
    cpy_r_targets = cpy_r_r37;
    CPy_INCREF(cpy_r_second_map);
    if (likely(cpy_r_second_map != Py_None))
        cpy_r_r38 = cpy_r_second_map;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "update_protocol_deps", 295, CPyStatic_typestate___globals, "dict", cpy_r_second_map);
        goto CPyL46;
    }
    cpy_r_r39 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_r38, cpy_r_trigger, 3);
    CPy_DECREF(cpy_r_r38);
    CPy_DECREF(cpy_r_trigger);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "update_protocol_deps", 295, CPyStatic_typestate___globals);
        goto CPyL47;
    }
    if (likely(PySet_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "update_protocol_deps", 295, CPyStatic_typestate___globals, "set", cpy_r_r39);
        goto CPyL47;
    }
    cpy_r_r41 = _PySet_Update(cpy_r_r40, cpy_r_targets);
    CPy_DECREF(cpy_r_r40);
    CPy_DECREF(cpy_r_targets);
    cpy_r_r42 = cpy_r_r41 >= 0;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("mypy/typestate.py", "update_protocol_deps", 295, CPyStatic_typestate___globals);
        goto CPyL48;
    }
    cpy_r_r43 = CPyDict_CheckSize(cpy_r_new_deps, cpy_r_r29);
    if (unlikely(!cpy_r_r43)) {
        CPy_AddTraceback("mypy/typestate.py", "update_protocol_deps", 294, CPyStatic_typestate___globals);
        goto CPyL48;
    } else
        goto CPyL18;
CPyL26: ;
    cpy_r_r44 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("mypy/typestate.py", "update_protocol_deps", 294, CPyStatic_typestate___globals);
        goto CPyL31;
    }
CPyL27: ;
    cpy_r_r45 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__rechecked_types;
    CPy_INCREF(cpy_r_r45);
    cpy_r_r46 = PySet_Clear(cpy_r_r45);
    CPy_DECREF(cpy_r_r45);
    cpy_r_r47 = cpy_r_r46 >= 0;
    if (unlikely(!cpy_r_r47)) {
        CPy_AddTraceback("mypy/typestate.py", "update_protocol_deps", 296, CPyStatic_typestate___globals);
        goto CPyL31;
    }
    cpy_r_r48 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__attempted_protocols;
    CPy_INCREF(cpy_r_r48);
    cpy_r_r49 = CPyDict_Clear(cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(!cpy_r_r49)) {
        CPy_AddTraceback("mypy/typestate.py", "update_protocol_deps", 297, CPyStatic_typestate___globals);
        goto CPyL31;
    }
    cpy_r_r50 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->__checked_against_members;
    CPy_INCREF(cpy_r_r50);
    cpy_r_r51 = CPyDict_Clear(cpy_r_r50);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/typestate.py", "update_protocol_deps", 298, CPyStatic_typestate___globals);
        goto CPyL31;
    }
    return 1;
CPyL31: ;
    cpy_r_r52 = 2;
    return cpy_r_r52;
CPyL32: ;
    CPy_INCREF(cpy_r_second_map);
    goto CPyL2;
CPyL33: ;
    CPy_DECREF(cpy_r_second_map);
    goto CPyL3;
CPyL34: ;
    CPy_DecRef(cpy_r_second_map);
    goto CPyL31;
CPyL35: ;
    CPy_DecRef(cpy_r_second_map);
    CPy_DecRef(cpy_r_new_deps);
    goto CPyL31;
CPyL36: ;
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10.f2);
    CPy_DECREF(cpy_r_r10.f3);
    goto CPyL15;
CPyL37: ;
    CPy_DecRef(cpy_r_second_map);
    CPy_DecRef(cpy_r_new_deps);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r14);
    goto CPyL31;
CPyL38: ;
    CPy_DecRef(cpy_r_second_map);
    CPy_DecRef(cpy_r_new_deps);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r15);
    goto CPyL31;
CPyL39: ;
    CPy_DecRef(cpy_r_second_map);
    CPy_DecRef(cpy_r_new_deps);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_trigger);
    CPy_DecRef(cpy_r_targets);
    goto CPyL31;
CPyL40: ;
    CPy_DecRef(cpy_r_second_map);
    CPy_DecRef(cpy_r_new_deps);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_targets);
    goto CPyL31;
CPyL41: ;
    CPy_DecRef(cpy_r_second_map);
    CPy_DecRef(cpy_r_new_deps);
    CPy_DecRef(cpy_r_r9);
    goto CPyL31;
CPyL42: ;
    CPy_DECREF(cpy_r_second_map);
    CPy_DECREF(cpy_r_new_deps);
    goto CPyL27;
CPyL43: ;
    CPy_DECREF(cpy_r_second_map);
    CPy_DECREF(cpy_r_new_deps);
    CPy_DECREF(cpy_r_r30);
    CPy_DECREF(cpy_r_r31.f2);
    CPy_DECREF(cpy_r_r31.f3);
    goto CPyL26;
CPyL44: ;
    CPy_DecRef(cpy_r_second_map);
    CPy_DecRef(cpy_r_new_deps);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r35);
    goto CPyL31;
CPyL45: ;
    CPy_DecRef(cpy_r_second_map);
    CPy_DecRef(cpy_r_new_deps);
    CPy_DecRef(cpy_r_r30);
    CPy_DecRef(cpy_r_r36);
    goto CPyL31;
CPyL46: ;
    CPy_DecRef(cpy_r_second_map);
    CPy_DecRef(cpy_r_new_deps);
    CPy_DecRef(cpy_r_trigger);
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r30);
    goto CPyL31;
CPyL47: ;
    CPy_DecRef(cpy_r_second_map);
    CPy_DecRef(cpy_r_new_deps);
    CPy_DecRef(cpy_r_targets);
    CPy_DecRef(cpy_r_r30);
    goto CPyL31;
CPyL48: ;
    CPy_DecRef(cpy_r_second_map);
    CPy_DecRef(cpy_r_new_deps);
    CPy_DecRef(cpy_r_r30);
    goto CPyL31;
}

PyObject *CPyPy_typestate___TypeState___update_protocol_deps(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"second_map", 0};
    static CPyArg_Parser parser = {"|O:update_protocol_deps", kwlist, 0};
    PyObject *obj_second_map = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_second_map)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typestate___TypeState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typestate.TypeState", obj_self); 
        goto fail;
    }
    PyObject *arg_second_map;
    if (obj_second_map == NULL) {
        arg_second_map = NULL;
        goto __LL8089;
    }
    if (PyDict_Check(obj_second_map))
        arg_second_map = obj_second_map;
    else {
        arg_second_map = NULL;
    }
    if (arg_second_map != NULL) goto __LL8089;
    if (obj_second_map == Py_None)
        arg_second_map = obj_second_map;
    else {
        arg_second_map = NULL;
    }
    if (arg_second_map != NULL) goto __LL8089;
    CPy_TypeError("dict or None", obj_second_map); 
    goto fail;
__LL8089: ;
    char retval = CPyDef_typestate___TypeState___update_protocol_deps(arg_self, arg_second_map);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "update_protocol_deps", 282, CPyStatic_typestate___globals);
    return NULL;
}

char CPyDef_typestate___TypeState___add_all_protocol_deps(PyObject *cpy_r_self, PyObject *cpy_r_deps) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    CPyTagged cpy_r_r7;
    int64_t cpy_r_r8;
    CPyTagged cpy_r_r9;
    PyObject *cpy_r_r10;
    tuple_T4CIOO cpy_r_r11;
    CPyTagged cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_trigger;
    PyObject *cpy_r_targets;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    int32_t cpy_r_r20;
    char cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    cpy_r_r0 = NULL;
    cpy_r_r1 = CPyDef_typestate___TypeState___update_protocol_deps(cpy_r_self, cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("mypy/typestate.py", "add_all_protocol_deps", 306, CPyStatic_typestate___globals);
        goto CPyL13;
    }
    cpy_r_r2 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->_proto_deps;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_r2 != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL12;
    cpy_r_r5 = ((mypy___typestate___TypeStateObject *)cpy_r_self)->_proto_deps;
    CPy_INCREF(cpy_r_r5);
    if (likely(cpy_r_r5 != Py_None))
        cpy_r_r6 = cpy_r_r5;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "add_all_protocol_deps", 308, CPyStatic_typestate___globals, "dict", cpy_r_r5);
        goto CPyL13;
    }
    cpy_r_r7 = 0;
    cpy_r_r8 = PyDict_Size(cpy_r_r6);
    cpy_r_r9 = cpy_r_r8 << 1;
    cpy_r_r10 = CPyDict_GetItemsIter(cpy_r_r6);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "add_all_protocol_deps", 308, CPyStatic_typestate___globals);
        goto CPyL14;
    }
CPyL4: ;
    cpy_r_r11 = CPyDict_NextItem(cpy_r_r10, cpy_r_r7);
    cpy_r_r12 = cpy_r_r11.f1;
    cpy_r_r7 = cpy_r_r12;
    cpy_r_r13 = cpy_r_r11.f0;
    if (!cpy_r_r13) goto CPyL15;
    cpy_r_r14 = cpy_r_r11.f2;
    CPy_INCREF(cpy_r_r14);
    cpy_r_r15 = cpy_r_r11.f3;
    CPy_INCREF(cpy_r_r15);
    CPy_DECREF(cpy_r_r11.f2);
    CPy_DECREF(cpy_r_r11.f3);
    if (likely(PyUnicode_Check(cpy_r_r14)))
        cpy_r_r16 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "add_all_protocol_deps", 308, CPyStatic_typestate___globals, "str", cpy_r_r14);
        goto CPyL16;
    }
    if (likely(PySet_Check(cpy_r_r15)))
        cpy_r_r17 = cpy_r_r15;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "add_all_protocol_deps", 308, CPyStatic_typestate___globals, "set", cpy_r_r15);
        goto CPyL17;
    }
    cpy_r_trigger = cpy_r_r16;
    cpy_r_targets = cpy_r_r17;
    cpy_r_r18 = CPyDict_SetDefaultWithEmptyDatatype(cpy_r_deps, cpy_r_trigger, 3);
    CPy_DECREF(cpy_r_trigger);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "add_all_protocol_deps", 309, CPyStatic_typestate___globals);
        goto CPyL18;
    }
    if (likely(PySet_Check(cpy_r_r18)))
        cpy_r_r19 = cpy_r_r18;
    else {
        CPy_TypeErrorTraceback("mypy/typestate.py", "add_all_protocol_deps", 309, CPyStatic_typestate___globals, "set", cpy_r_r18);
        goto CPyL18;
    }
    cpy_r_r20 = _PySet_Update(cpy_r_r19, cpy_r_targets);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_targets);
    cpy_r_r21 = cpy_r_r20 >= 0;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("mypy/typestate.py", "add_all_protocol_deps", 309, CPyStatic_typestate___globals);
        goto CPyL19;
    }
    cpy_r_r22 = CPyDict_CheckSize(cpy_r_r6, cpy_r_r9);
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("mypy/typestate.py", "add_all_protocol_deps", 308, CPyStatic_typestate___globals);
        goto CPyL19;
    } else
        goto CPyL4;
CPyL11: ;
    cpy_r_r23 = CPy_NoErrOccured();
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("mypy/typestate.py", "add_all_protocol_deps", 308, CPyStatic_typestate___globals);
        goto CPyL13;
    }
CPyL12: ;
    return 1;
CPyL13: ;
    cpy_r_r24 = 2;
    return cpy_r_r24;
CPyL14: ;
    CPy_DecRef(cpy_r_r6);
    goto CPyL13;
CPyL15: ;
    CPy_DECREF(cpy_r_r6);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r11.f2);
    CPy_DECREF(cpy_r_r11.f3);
    goto CPyL11;
CPyL16: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r15);
    goto CPyL13;
CPyL17: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r16);
    goto CPyL13;
CPyL18: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_targets);
    goto CPyL13;
CPyL19: ;
    CPy_DecRef(cpy_r_r6);
    CPy_DecRef(cpy_r_r10);
    goto CPyL13;
}

PyObject *CPyPy_typestate___TypeState___add_all_protocol_deps(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"deps", 0};
    static CPyArg_Parser parser = {"O:add_all_protocol_deps", kwlist, 0};
    PyObject *obj_deps;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_deps)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType_typestate___TypeState))
        arg_self = obj_self;
    else {
        CPy_TypeError("mypy.typestate.TypeState", obj_self); 
        goto fail;
    }
    PyObject *arg_deps;
    if (likely(PyDict_Check(obj_deps)))
        arg_deps = obj_deps;
    else {
        CPy_TypeError("dict", obj_deps); 
        goto fail;
    }
    char retval = CPyDef_typestate___TypeState___add_all_protocol_deps(arg_self, arg_deps);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "add_all_protocol_deps", 300, CPyStatic_typestate___globals);
    return NULL;
}

char CPyDef_typestate___reset_global_state(void) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    char cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = CPyStatic_typestate___type_state;
    if (likely(cpy_r_r0 != NULL)) goto CPyL3;
    PyErr_SetString(PyExc_NameError, "value for final name \"type_state\" was not set");
    cpy_r_r1 = 0;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_global_state", 321, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    CPy_Unreachable();
CPyL3: ;
    cpy_r_r2 = CPyDef_typestate___TypeState___reset_all_subtype_caches(cpy_r_r0);
    if (unlikely(cpy_r_r2 == 2)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_global_state", 321, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    cpy_r_r3 = CPyStatic_typestate___type_state;
    if (likely(cpy_r_r3 != NULL)) goto CPyL7;
    PyErr_SetString(PyExc_NameError, "value for final name \"type_state\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_global_state", 322, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    CPy_Unreachable();
CPyL7: ;
    cpy_r_r5 = CPyDef_typestate___TypeState___reset_protocol_deps(cpy_r_r3);
    if (unlikely(cpy_r_r5 == 2)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_global_state", 322, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    cpy_r_r6 = (PyObject *)CPyType_types___TypeVarId;
    cpy_r_r7 = CPyStatics[6384]; /* 'next_raw_id' */
    cpy_r_r8 = CPyStatics[9016]; /* 1 */
    cpy_r_r9 = PyObject_SetAttr(cpy_r_r6, cpy_r_r7, cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("mypy/typestate.py", "reset_global_state", 323, CPyStatic_typestate___globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
}

PyObject *CPyPy_typestate___reset_global_state(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":reset_global_state", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    char retval = CPyDef_typestate___reset_global_state();
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("mypy/typestate.py", "reset_global_state", 315, CPyStatic_typestate___globals);
    return NULL;
}

char CPyDef_typestate_____top_level__(void) {
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
    int32_t cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    int32_t cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    tuple_T2OO cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    int32_t cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    tuple_T2OO cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    int32_t cpy_r_r62;
    char cpy_r_r63;
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
    tuple_T2OO cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    tuple_T2OO cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
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
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    PyObject *cpy_r_r108;
    int32_t cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    int32_t cpy_r_r113;
    char cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    int32_t cpy_r_r118;
    char cpy_r_r119;
    char cpy_r_r120;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[3]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", -1, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = CPyStatics[9065]; /* ('annotations',) */
    cpy_r_r6 = CPyStatics[14]; /* '__future__' */
    cpy_r_r7 = CPyStatic_typestate___globals;
    cpy_r_r8 = CPyImport_ImportFromMany(cpy_r_r6, cpy_r_r5, cpy_r_r5, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 6, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    CPyModule___future__ = cpy_r_r8;
    CPy_INCREF(CPyModule___future__);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r9 = CPyStatics[9881]; /* ('Dict', 'Final', 'Set', 'Tuple') */
    cpy_r_r10 = CPyStatics[21]; /* 'typing' */
    cpy_r_r11 = CPyStatic_typestate___globals;
    cpy_r_r12 = CPyImport_ImportFromMany(cpy_r_r10, cpy_r_r9, cpy_r_r9, cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 8, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    CPyModule_typing = cpy_r_r12;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r12);
    cpy_r_r13 = CPyStatics[9086]; /* ('TypeAlias',) */
    cpy_r_r14 = CPyStatics[9087]; /* ('_TypeAlias',) */
    cpy_r_r15 = CPyStatics[88]; /* 'typing_extensions' */
    cpy_r_r16 = CPyStatic_typestate___globals;
    cpy_r_r17 = CPyImport_ImportFromMany(cpy_r_r15, cpy_r_r13, cpy_r_r14, cpy_r_r16);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 9, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    CPyModule_typing_extensions = cpy_r_r17;
    CPy_INCREF(CPyModule_typing_extensions);
    CPy_DECREF(cpy_r_r17);
    cpy_r_r18 = CPyStatics[9495]; /* ('TypeInfo',) */
    cpy_r_r19 = CPyStatics[34]; /* 'mypy.nodes' */
    cpy_r_r20 = CPyStatic_typestate___globals;
    cpy_r_r21 = CPyImport_ImportFromMany(cpy_r_r19, cpy_r_r18, cpy_r_r18, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 11, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    CPyModule_mypy___nodes = cpy_r_r21;
    CPy_INCREF(CPyModule_mypy___nodes);
    CPy_DECREF(cpy_r_r21);
    cpy_r_r22 = CPyStatics[9882]; /* ('make_trigger',) */
    cpy_r_r23 = CPyStatics[4443]; /* 'mypy.server.trigger' */
    cpy_r_r24 = CPyStatic_typestate___globals;
    cpy_r_r25 = CPyImport_ImportFromMany(cpy_r_r23, cpy_r_r22, cpy_r_r22, cpy_r_r24);
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 12, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    CPyModule_mypy___server___trigger = cpy_r_r25;
    CPy_INCREF(CPyModule_mypy___server___trigger);
    CPy_DECREF(cpy_r_r25);
    cpy_r_r26 = CPyStatics[9883]; /* ('Instance', 'Type', 'TypeVarId', 'get_proper_type') */
    cpy_r_r27 = CPyStatics[49]; /* 'mypy.types' */
    cpy_r_r28 = CPyStatic_typestate___globals;
    cpy_r_r29 = CPyImport_ImportFromMany(cpy_r_r27, cpy_r_r26, cpy_r_r26, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 13, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    CPyModule_mypy___types = cpy_r_r29;
    CPy_INCREF(CPyModule_mypy___types);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r30 = CPyStatic_typestate___globals;
    cpy_r_r31 = CPyStatics[6512]; /* 'MAX_NEGATIVE_CACHE_TYPES' */
    cpy_r_r32 = CPyStatics[9035]; /* 1000 */
    cpy_r_r33 = CPyDict_SetItem(cpy_r_r30, cpy_r_r31, cpy_r_r32);
    cpy_r_r34 = cpy_r_r33 >= 0;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 15, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    cpy_r_r35 = CPyStatic_typestate___globals;
    cpy_r_r36 = CPyStatics[6513]; /* 'MAX_NEGATIVE_CACHE_ENTRIES' */
    cpy_r_r37 = CPyStatics[9040]; /* 10000 */
    cpy_r_r38 = CPyDict_SetItem(cpy_r_r35, cpy_r_r36, cpy_r_r37);
    cpy_r_r39 = cpy_r_r38 >= 0;
    if (unlikely(!cpy_r_r39)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 16, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    cpy_r_r40 = CPyStatic_typestate___globals;
    cpy_r_r41 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r42 = CPyDict_GetItem(cpy_r_r40, cpy_r_r41);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 19, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    cpy_r_r43 = (PyObject *)CPyType_types___Instance;
    cpy_r_r44 = (PyObject *)CPyType_types___Instance;
    cpy_r_r45.f0 = cpy_r_r43;
    cpy_r_r45.f1 = cpy_r_r44;
    CPy_INCREF(cpy_r_r45.f0);
    CPy_INCREF(cpy_r_r45.f1);
    cpy_r_r46 = PyTuple_New(2);
    if (unlikely(cpy_r_r46 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8090 = cpy_r_r45.f0;
    PyTuple_SET_ITEM(cpy_r_r46, 0, __tmp8090);
    PyObject *__tmp8091 = cpy_r_r45.f1;
    PyTuple_SET_ITEM(cpy_r_r46, 1, __tmp8091);
    cpy_r_r47 = PyObject_GetItem(cpy_r_r42, cpy_r_r46);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 19, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    cpy_r_r48 = CPyStatic_typestate___globals;
    cpy_r_r49 = CPyStatics[6514]; /* 'SubtypeRelationship' */
    cpy_r_r50 = CPyDict_SetItem(cpy_r_r48, cpy_r_r49, cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r51 = cpy_r_r50 >= 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 19, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    cpy_r_r52 = CPyStatic_typestate___globals;
    cpy_r_r53 = CPyStatics[83]; /* 'Tuple' */
    cpy_r_r54 = CPyDict_GetItem(cpy_r_r52, cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 23, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    cpy_r_r55 = (PyObject *)&PyBool_Type;
    cpy_r_r56 = (PyObject *)&_Py_EllipsisObject;
    cpy_r_r57.f0 = cpy_r_r55;
    cpy_r_r57.f1 = cpy_r_r56;
    CPy_INCREF(cpy_r_r57.f0);
    CPy_INCREF(cpy_r_r57.f1);
    cpy_r_r58 = PyTuple_New(2);
    if (unlikely(cpy_r_r58 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8092 = cpy_r_r57.f0;
    PyTuple_SET_ITEM(cpy_r_r58, 0, __tmp8092);
    PyObject *__tmp8093 = cpy_r_r57.f1;
    PyTuple_SET_ITEM(cpy_r_r58, 1, __tmp8093);
    cpy_r_r59 = PyObject_GetItem(cpy_r_r54, cpy_r_r58);
    CPy_DECREF(cpy_r_r54);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 23, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    cpy_r_r60 = CPyStatic_typestate___globals;
    cpy_r_r61 = CPyStatics[6052]; /* 'SubtypeKind' */
    cpy_r_r62 = CPyDict_SetItem(cpy_r_r60, cpy_r_r61, cpy_r_r59);
    CPy_DECREF(cpy_r_r59);
    cpy_r_r63 = cpy_r_r62 >= 0;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 23, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    cpy_r_r64 = CPyStatic_typestate___globals;
    cpy_r_r65 = CPyStatics[509]; /* 'Dict' */
    cpy_r_r66 = CPyDict_GetItem(cpy_r_r64, cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 27, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    cpy_r_r67 = (PyObject *)CPyType_nodes___TypeInfo;
    cpy_r_r68 = CPyStatic_typestate___globals;
    cpy_r_r69 = CPyStatics[509]; /* 'Dict' */
    cpy_r_r70 = CPyDict_GetItem(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 27, CPyStatic_typestate___globals);
        goto CPyL35;
    }
    cpy_r_r71 = CPyStatic_typestate___globals;
    cpy_r_r72 = CPyStatics[6052]; /* 'SubtypeKind' */
    cpy_r_r73 = CPyDict_GetItem(cpy_r_r71, cpy_r_r72);
    if (unlikely(cpy_r_r73 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 27, CPyStatic_typestate___globals);
        goto CPyL36;
    }
    cpy_r_r74 = CPyStatic_typestate___globals;
    cpy_r_r75 = CPyStatics[2633]; /* 'Set' */
    cpy_r_r76 = CPyDict_GetItem(cpy_r_r74, cpy_r_r75);
    if (unlikely(cpy_r_r76 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 27, CPyStatic_typestate___globals);
        goto CPyL37;
    }
    cpy_r_r77 = CPyStatic_typestate___globals;
    cpy_r_r78 = CPyStatics[6514]; /* 'SubtypeRelationship' */
    cpy_r_r79 = CPyDict_GetItem(cpy_r_r77, cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 27, CPyStatic_typestate___globals);
        goto CPyL38;
    }
    cpy_r_r80 = PyObject_GetItem(cpy_r_r76, cpy_r_r79);
    CPy_DECREF(cpy_r_r76);
    CPy_DECREF(cpy_r_r79);
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 27, CPyStatic_typestate___globals);
        goto CPyL37;
    }
    cpy_r_r81.f0 = cpy_r_r73;
    cpy_r_r81.f1 = cpy_r_r80;
    CPy_INCREF(cpy_r_r81.f0);
    CPy_INCREF(cpy_r_r81.f1);
    CPy_DECREF(cpy_r_r73);
    CPy_DECREF(cpy_r_r80);
    cpy_r_r82 = PyTuple_New(2);
    if (unlikely(cpy_r_r82 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8094 = cpy_r_r81.f0;
    PyTuple_SET_ITEM(cpy_r_r82, 0, __tmp8094);
    PyObject *__tmp8095 = cpy_r_r81.f1;
    PyTuple_SET_ITEM(cpy_r_r82, 1, __tmp8095);
    cpy_r_r83 = PyObject_GetItem(cpy_r_r70, cpy_r_r82);
    CPy_DECREF(cpy_r_r70);
    CPy_DECREF(cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 27, CPyStatic_typestate___globals);
        goto CPyL35;
    }
    cpy_r_r84.f0 = cpy_r_r67;
    cpy_r_r84.f1 = cpy_r_r83;
    CPy_INCREF(cpy_r_r84.f0);
    CPy_INCREF(cpy_r_r84.f1);
    CPy_DECREF(cpy_r_r83);
    cpy_r_r85 = PyTuple_New(2);
    if (unlikely(cpy_r_r85 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp8096 = cpy_r_r84.f0;
    PyTuple_SET_ITEM(cpy_r_r85, 0, __tmp8096);
    PyObject *__tmp8097 = cpy_r_r84.f1;
    PyTuple_SET_ITEM(cpy_r_r85, 1, __tmp8097);
    cpy_r_r86 = PyObject_GetItem(cpy_r_r66, cpy_r_r85);
    CPy_DECREF(cpy_r_r66);
    CPy_DECREF(cpy_r_r85);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 27, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    cpy_r_r87 = CPyStatic_typestate___globals;
    cpy_r_r88 = CPyStatics[6515]; /* 'SubtypeCache' */
    cpy_r_r89 = CPyDict_SetItem(cpy_r_r87, cpy_r_r88, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 27, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    cpy_r_r91 = NULL;
    cpy_r_r92 = CPyStatics[596]; /* 'mypy.typestate' */
    cpy_r_r93 = (PyObject *)CPyType_typestate___TypeState_template;
    cpy_r_r94 = CPyType_FromTemplate(cpy_r_r93, cpy_r_r91, cpy_r_r92);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 30, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    cpy_r_r95 = CPyDef_typestate___TypeState_trait_vtable_setup();
    if (unlikely(cpy_r_r95 == 2)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", -1, CPyStatic_typestate___globals);
        goto CPyL39;
    }
    cpy_r_r96 = CPyStatics[65]; /* '__mypyc_attrs__' */
    cpy_r_r97 = CPyStatics[6516]; /* '_subtype_caches' */
    cpy_r_r98 = CPyStatics[6517]; /* '_negative_subtype_caches' */
    cpy_r_r99 = CPyStatics[6518]; /* 'proto_deps' */
    cpy_r_r100 = CPyStatics[6519]; /* '_attempted_protocols' */
    cpy_r_r101 = CPyStatics[6520]; /* '_checked_against_members' */
    cpy_r_r102 = CPyStatics[6521]; /* '_rechecked_types' */
    cpy_r_r103 = CPyStatics[6522]; /* '_assuming' */
    cpy_r_r104 = CPyStatics[6523]; /* '_assuming_proper' */
    cpy_r_r105 = CPyStatics[4164]; /* 'inferring' */
    cpy_r_r106 = CPyStatics[6524]; /* 'infer_unions' */
    cpy_r_r107 = CPyStatics[6525]; /* 'infer_polymorphic' */
    cpy_r_r108 = PyTuple_Pack(11, cpy_r_r97, cpy_r_r98, cpy_r_r99, cpy_r_r100, cpy_r_r101, cpy_r_r102, cpy_r_r103, cpy_r_r104, cpy_r_r105, cpy_r_r106, cpy_r_r107);
    if (unlikely(cpy_r_r108 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 30, CPyStatic_typestate___globals);
        goto CPyL39;
    }
    cpy_r_r109 = PyObject_SetAttr(cpy_r_r94, cpy_r_r96, cpy_r_r108);
    CPy_DECREF(cpy_r_r108);
    cpy_r_r110 = cpy_r_r109 >= 0;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 30, CPyStatic_typestate___globals);
        goto CPyL39;
    }
    CPyType_typestate___TypeState = (PyTypeObject *)cpy_r_r94;
    CPy_INCREF(CPyType_typestate___TypeState);
    cpy_r_r111 = CPyStatic_typestate___globals;
    cpy_r_r112 = CPyStatics[6526]; /* 'TypeState' */
    cpy_r_r113 = CPyDict_SetItem(cpy_r_r111, cpy_r_r112, cpy_r_r94);
    CPy_DECREF(cpy_r_r94);
    cpy_r_r114 = cpy_r_r113 >= 0;
    if (unlikely(!cpy_r_r114)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 30, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    cpy_r_r115 = CPyDef_typestate___TypeState();
    if (unlikely(cpy_r_r115 == NULL)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 312, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    CPyStatic_typestate___type_state = cpy_r_r115;
    CPy_INCREF(CPyStatic_typestate___type_state);
    cpy_r_r116 = CPyStatic_typestate___globals;
    cpy_r_r117 = CPyStatics[595]; /* 'type_state' */
    cpy_r_r118 = CPyDict_SetItem(cpy_r_r116, cpy_r_r117, cpy_r_r115);
    CPy_DECREF(cpy_r_r115);
    cpy_r_r119 = cpy_r_r118 >= 0;
    if (unlikely(!cpy_r_r119)) {
        CPy_AddTraceback("mypy/typestate.py", "<module>", 312, CPyStatic_typestate___globals);
        goto CPyL34;
    }
    return 1;
CPyL34: ;
    cpy_r_r120 = 2;
    return cpy_r_r120;
CPyL35: ;
    CPy_DecRef(cpy_r_r66);
    goto CPyL34;
CPyL36: ;
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r70);
    goto CPyL34;
CPyL37: ;
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r73);
    goto CPyL34;
CPyL38: ;
    CPy_DecRef(cpy_r_r66);
    CPy_DecRef(cpy_r_r70);
    CPy_DecRef(cpy_r_r73);
    CPy_DecRef(cpy_r_r76);
    goto CPyL34;
CPyL39: ;
    CPy_DecRef(cpy_r_r94);
    goto CPyL34;
}
